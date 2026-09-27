// src/enemy/em0190/Em0190.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004F9D10..00AB7F00, 193 functions

#include "mgrr.h"
#include "Em0190.h"

// 004F9D10  FUN_004f9d10  size=30  [callgraph]
undefined4 __thiscall FUN_004f9d10(int param_1,float param_2)

{
  if (param_2 < *(float *)(param_1 + 0x15cc) != (param_2 == *(float *)(param_1 + 0x15cc))) {
    return 1;
  }
  return 0;
}

// 004F9DC0  FUN_004f9dc0  size=52  [callgraph]
void __thiscall FUN_004f9dc0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x3f10) = *param_2;
  *(undefined4 *)(param_1 + 0x3f14) = param_2[1];
  *(undefined4 *)(param_1 + 0x3f18) = param_2[2];
  *(undefined4 *)(param_1 + 0x3f1c) = param_2[3];
  *(undefined4 *)(param_1 + 0x3f04) = 1;
  return;
}

// 004F9E60  Em0190::vfFC  size=17  [class]
void __fastcall Em0190::vfFC(int param_1)

{
  BehaviorAppBase::vfFC();
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  return;
}

// 004F9E80  Em0190::vf100  size=17  [class]
void __fastcall Em0190::vf100(int param_1)

{
  BehaviorAppBase::vf100();
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
  return;
}

// 004F9EA0  Em0190::vf110  size=25  [class]
void __thiscall Em0190::vf110(int param_1,undefined4 param_2)

{
  Bh0064::vf110(param_2);
  *(undefined4 *)(param_1 + 0x15e4) = param_2;
  return;
}

// 004F9EC0  Em0190::vf330  size=19  [class]
undefined4 Em0190::vf330(void)

{
  FUN_00a94bc0(0,0);
  return 1;
}

// 004F9EE0  Em0190::vf3C  size=55  [class]
void __thiscall Em0190::vf3C(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e26e0(param_2);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(param_2);
  }
  return;
}

// 004F9F20  Em0190::vf228  size=45  [class]
undefined4 __fastcall Em0190::vf228(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4a0) != 5) {
    switch(*(undefined4 *)(param_1 + 0x618)) {
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x27:
    case 0x28:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2f:
      break;
    default:
      uVar1 = BehaviorEmBase::vf228();
      return uVar1;
    }
  }
  return 0;
}

// 004FA000  FUN_004fa000  size=35  [between]
void FUN_004fa000(void)

{
  FUN_00c27f80(3);
  FUN_00c27f40(4,0x45e10000);
  return;
}

// 004FA030  Em0190::vf1B8  size=127  [class]
void Em0190::vf1B8(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_3) {
    do {
      puVar1 = *(undefined4 **)(param_2 + iVar4 * 4);
      if ((DAT_01bea060 & 0x2000000) == 0) {
        uVar3 = 0x42000;
      }
      else {
        *puVar1 = 0;
        iVar2 = FUN_00a8cd80(puVar1,0,2);
        if ((iVar2 != 0) &&
           ((iVar2 = FUN_00a8cd60(puVar1,1), iVar2 != 0 ||
            (iVar2 = FUN_00a8cd80(puVar1,1,2), iVar2 != 0)))) {
          *puVar1 = 1;
        }
        uVar3 = 0x4200e;
      }
      *param_1 = uVar3;
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 3;
    } while (iVar4 < param_3);
  }
  return;
}

// 004FA0D0  FUN_004fa0d0  size=159  [between]
void __fastcall FUN_004fa0d0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00ac84d0(8);
  *(undefined4 *)(param_1 + 0x1620) = uVar2;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(8);
  *(undefined4 *)(param_1 + 0x1624) = uVar2;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(8);
  *(undefined4 *)(param_1 + 0x162c) = uVar2;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(8);
  *(undefined1 *)(param_1 + 0x1628) = uVar1;
  uVar2 = FUN_00ac84d0(9);
  *(undefined4 *)(param_1 + 0x1630) = uVar2;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(9);
  *(undefined4 *)(param_1 + 0x1634) = uVar2;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(9);
  *(undefined4 *)(param_1 + 0x163c) = uVar2;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(9);
  *(undefined1 *)(param_1 + 0x1638) = uVar1;
  return;
}

// 004FA170  FUN_004fa170  size=90  [between]
void __fastcall FUN_004fa170(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x004fa190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x004fa1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x34))();
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x004fa19e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 100))();
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x004fa1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x6c))();
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x004fa1ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x74))();
    return;
  }
}

// 004FA1E0  FUN_004fa1e0  size=170  [between]
void __thiscall FUN_004fa1e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))(param_2);
    FUN_00fdbc60();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x004fa288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x24))();
    return;
  case 2:
    (**(code **)(**(int **)(param_1 + 0x754) + 100))(param_2);
    FUN_00fdbc60();
    return;
  case 3:
    (**(code **)(**(int **)(param_1 + 0x754) + 0x6c))(param_2);
    FUN_00fdbc60();
    return;
  case 4:
    (**(code **)(**(int **)(param_1 + 0x754) + 0x74))(param_2);
    FUN_00fdbc60();
    return;
  }
}

// 004FA2A0  FUN_004fa2a0  size=83  [between]
void __fastcall FUN_004fa2a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x148c)) {
    do {
      iVar1 = FUN_00a81330();
      if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
         (iVar1 = FUN_00a8fa20(0), iVar1 == 0)) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x148c));
  }
  *(int *)(param_1 + 0x1490) = iVar2;
  return;
}

// 004FA300  FUN_004fa300  size=30  [between]
float10 __fastcall FUN_004fa300(int param_1)

{
  if (*(int *)(param_1 + 0x148c) == -1) {
    return (float10)1;
  }
  return (float10)*(int *)(param_1 + 0x1490) / (float10)*(int *)(param_1 + 0x148c);
}

// 004FA330  FUN_004fa330  size=33  [between]
void __fastcall FUN_004fa330(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x40);
  param_1[0x128] = 0;
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x004fa34f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004FA360  FUN_004fa360  size=66  [between]
undefined4 FUN_004fa360(float *param_1,float *param_2,float *param_3)

{
  if ((param_1[2] - param_3[2]) * (param_1[2] - param_2[2]) +
      (*param_1 - *param_3) * (*param_1 - *param_2) < 0.0) {
    return 1;
  }
  return 0;
}

// 004FA3B0  FUN_004fa3b0  size=157  [between]
void __thiscall
FUN_004fa3b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  if ((param_5 < 0) && (param_5 = 0x2e, 0.5 < *(float *)(param_1 + 0xed0))) {
    param_5 = 0xd;
  }
  FUN_00a9f4c0(&DAT_01640254,param_3,0,0);
  FUN_00a9f600(0xffffffff,0,0,0,0,param_5,param_3,param_4);
  FUN_00a9f600(0xffffffff,0,1,0,0,param_2,param_3,param_4);
  FUN_00a947e0(0,0,0,0);
  return;
}

// 004FA450  FUN_004fa450  size=36  [between]
void __thiscall FUN_004fa450(int param_1,float param_2)

{
  FUN_00a947e0(0,*(float *)(param_1 + 0x1454) * param_2,0,0);
  return;
}

// 004FA480  FUN_004fa480  size=135  [between]
void __thiscall FUN_004fa480(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  undefined1 local_20 [28];
  
  pfVar1 = (float *)FUN_00a8b8a0(local_20,0x40a00000);
  *param_2 = *(float *)(param_1 + 0x40) + *pfVar1;
  param_2[1] = pfVar1[1] + *(float *)(param_1 + 0x44);
  param_2[2] = pfVar1[2] + *(float *)(param_1 + 0x48);
  param_2[3] = pfVar1[3] + *(float *)(param_1 + 0x4c);
  pfVar1 = (float *)FUN_00a8b8a0(local_20,0xc0e00000);
  *param_3 = *(float *)(param_1 + 0x40) + *pfVar1;
  param_3[1] = pfVar1[1] + *(float *)(param_1 + 0x44);
  param_3[2] = pfVar1[2] + *(float *)(param_1 + 0x48);
  param_3[3] = pfVar1[3] + *(float *)(param_1 + 0x4c);
  return;
}

// 004FA510  FUN_004fa510  size=88  [between]
undefined4 FUN_004fa510(undefined4 param_1)

{
  int iVar1;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  FUN_004fa480(local_30,local_20);
  iVar1 = FUN_00ac4670(local_30,param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00ac4670(local_20,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 004FA5B0  FUN_004fa5b0  size=37  [between]
float10 __thiscall FUN_004fa5b0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 004FA5E0  FUN_004fa5e0  size=52  [between]
float10 __fastcall FUN_004fa5e0(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
    return ABS(fVar1);
  }
  return (float10)6.2831855;
}

// 004FA620  FUN_004fa620  size=161  [between]
float10 __thiscall FUN_004fa620(int param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  if (param_3 != 0.0) {
    fVar1 = (float10)FUN_00ddba30(param_2 - *(float *)(param_1 + 0x94));
    fVar2 = (float10)FUN_00fdc1f0();
    fVar1 = ((float10)1 - fVar2) * (float10)(float)fVar1;
    fVar2 = (float10)param_4;
    if (fVar1 <= -fVar2) {
      fVar1 = -fVar2;
    }
    if (fVar2 < fVar1) {
      fVar1 = fVar2;
    }
    fVar1 = (float10)FUN_00ddba30((float)(fVar1 + (float10)*(float *)(param_1 + 0x94)));
    *(float *)(param_1 + 0x94) = (float)fVar1;
  }
  fVar1 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) - param_2);
  return ABS(fVar1);
}

// 004FA6D0  FUN_004fa6d0  size=128  [between]
void FUN_004fa6d0(undefined4 *param_1,undefined4 param_2,float param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_2) {
  case 0:
    puVar1 = (undefined4 *)FUN_00a8b8a0(local_50,param_3);
    break;
  case 1:
    puVar1 = (undefined4 *)FUN_00a8b8a0(local_40,-param_3);
    break;
  case 2:
    puVar2 = local_30;
    goto LAB_004fa72c;
  case 3:
    param_3 = -param_3;
    puVar2 = local_20;
LAB_004fa72c:
    puVar1 = (undefined4 *)FUN_00a8b9b0(puVar2,param_3);
    break;
  default:
    goto switchD_004fa6e1_default;
  }
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
switchD_004fa6e1_default:
  return;
}

// 004FA760  FUN_004fa760  size=105  [between]
undefined4 __thiscall FUN_004fa760(int param_1,float *param_2)

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

// 004FA7E0  FUN_004fa7e0  size=23  [between]
float10 __fastcall FUN_004fa7e0(int param_1)

{
  if ((*(byte *)(param_1 + 0xb00) & 0x40) != 0) {
    return (float10)*(float *)(param_1 + 0x1610);
  }
  return (float10)*(float *)(param_1 + 0x160c);
}

// 004FA830  FUN_004fa830  size=84  [between]
undefined4 FUN_004fa830(float *param_1,float *param_2,float *param_3)

{
  if ((*param_2 - *param_1) * (*param_2 - *param_3) +
      (param_2[1] - param_1[1]) * (param_2[1] - param_3[1]) +
      (param_2[2] - param_3[2]) * (param_2[2] - param_1[2]) < 0.0) {
    return 1;
  }
  return 0;
}

// 004FA890  FUN_004fa890  size=144  [between]
float10 __thiscall FUN_004fa890(int param_1,undefined4 *param_2)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00c19f60(*(undefined4 *)(param_1 + 0xb9c),1);
  if (iVar1 != 0) {
    iVar1 = FUN_00c9d910();
    FUN_00ca30a0(&local_c);
    fVar2 = (float10)*(float *)(iVar1 + 0x28) * (float10)0.75 + (float10)local_8;
    if ((float10)0 < fVar2) {
      if (param_2 == (undefined4 *)0x0) {
        return fVar2;
      }
      *param_2 = local_c;
      param_2[1] = local_8;
      param_2[2] = local_4;
      param_2[3] = 0x3f800000;
      return fVar2;
    }
  }
  return (float10)0.0;
}

// 004FA930  FUN_004fa930  size=63  [between]
undefined4 __thiscall FUN_004fa930(int param_1,float *param_2,float *param_3)

{
  if (0.0 <= (param_3[2] - param_2[2]) * (param_2[2] - *(float *)(param_1 + 0x48)) +
             (*param_3 - *param_2) * (*param_2 - *(float *)(param_1 + 0x40))) {
    return 1;
  }
  return 0;
}

// 004FA970  FUN_004fa970  size=24  [between]
void FUN_004fa970(void)

{
  FUN_00a8c9b0(0,1,0x3f800000,0);
  return;
}

// 004FA990  FUN_004fa990  size=24  [between]
void FUN_004fa990(void)

{
  FUN_00a8c9b0(0,0x1c,0x3f800000,0);
  return;
}

// 004FA9D0  FUN_004fa9d0  size=53  [between]
void FUN_004fa9d0(void)

{
  FUN_00a8c9b0(0,7,0x3f800000,0);
  FUN_00a8c9b0(0,8,0x3f800000,0);
  return;
}

// 004FAA10  FUN_004faa10  size=24  [between]
void FUN_004faa10(void)

{
  FUN_00a8c9b0(0,0xd,0x3f800000,0);
  return;
}

// 004FAA30  FUN_004faa30  size=27  [between]
void FUN_004faa30(void)

{
  FUN_00a8c9b0(0,0x207,0x3f800000,0);
  return;
}

// 004FAA50  FUN_004faa50  size=32  [between]
void __fastcall FUN_004faa50(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x1260) + 8))(0,0,0);
  return;
}

// 004FAA70  FUN_004faa70  size=38  [between]
void __fastcall FUN_004faa70(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1028) == 0) {
    uVar1 = FUN_00e5e0c0("et0020_se_mov_hovering",param_1,1,0);
    *(undefined4 *)(param_1 + 0x1028) = uVar1;
  }
  return;
}

// 004FAAC0  FUN_004faac0  size=44  [between]
void __fastcall FUN_004faac0(int param_1)

{
  if (*(int *)(param_1 + 0x1028) != 0) {
    FUN_00e5ca30(*(int *)(param_1 + 0x1028),0x40400000);
    *(undefined4 *)(param_1 + 0x1028) = 0;
  }
  return;
}

// 004FAAF0  FUN_004faaf0  size=259  [between]
undefined4 FUN_004faaf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_20;
  float local_1c;
  float local_14;
  
  iVar1 = FUN_00a12210(0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00f98a90();
  iVar3 = FUN_00f98aa0();
  iVar4 = FUN_00f98a90();
  iVar5 = FUN_00f98aa0();
  FUN_00d9fa80(&local_20,iVar1 + 0x40);
  if ((((1.0 < local_14) && ((float)iVar2 * 0.5 - (float)iVar4 * 0.5 < local_20)) &&
      (local_20 < (float)iVar4 * 0.5 + (float)iVar2 * 0.5)) &&
     (((float)iVar3 * 0.5 - (float)iVar5 * 0.5 < local_1c &&
      (local_1c < (float)iVar5 * 0.5 + (float)iVar3 * 0.5)))) {
    return 1;
  }
  return 0;
}

// 004FAC10  FUN_004fac10  size=144  [between]
void __fastcall FUN_004fac10(int param_1)

{
  float fVar1;
  
  if (0.0 < *(float *)(param_1 + 0x1498)) {
    fVar1 = *(float *)(param_1 + 0x1498) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1498) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(undefined4 *)(param_1 + 0x1498) = 0;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x149c)) {
    fVar1 = *(float *)(param_1 + 0x149c) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x149c) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(undefined4 *)(param_1 + 0x149c) = 0;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x14a0)) {
    fVar1 = *(float *)(param_1 + 0x14a0) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x14a0) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(undefined4 *)(param_1 + 0x14a0) = 0;
      return;
    }
  }
  return;
}

// 004FADC0  FUN_004fadc0  size=1285  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004fadc0(int *param_1)

{
  int iVar1;
  float unaff_EBX;
  int unaff_ESI;
  float unaff_EDI;
  float10 fVar2;
  float fVar3;
  undefined1 auStack_7c [4];
  float fStack_78;
  float fStack_70;
  undefined1 auStack_6c [4];
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 auStack_5c [2];
  undefined1 auStack_54 [80];
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if ((_DAT_01b34efc & 1) == 0) {
    _DAT_01b34efc = _DAT_01b34efc | 1;
    _DAT_01b34ef8 = 2.5;
  }
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_008e3c10();
    param_1[0x248] = 0x3f800000;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    param_1[0x24b] = 0x41900000;
    param_1[0x24c] = 0x3c360b61;
    FUN_00a9f4c0("BEZIER_MOVE",0,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0xd,0,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x10,0,0);
    FUN_00a9f600(0xffffffff,0,1,1,0,0x16,0,0);
    FUN_00a9f600(0xffffffff,0,0xffffffff,1,0,0x19,0,0);
    FUN_00a947e0(0,param_1[0x24a],(float)param_1[0x248] * _DAT_01b34ef8 * 0.6,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    fVar3 = (float)param_1[0x248] - (float)param_1[0x24c] * (float)param_1[0x244];
    param_1[0x248] = (int)fVar3;
    if (fVar3 < 0.0) {
      param_1[0x248] = 0;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar3 = (float)param_1[0x248] * (float)param_1[0x244] * 0.4;
    fVar2 = (float10)FUN_00a581b0(auStack_7c,fVar3,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar2;
    FUN_00a585a0(&fStack_70,fVar3,(float)fVar2);
    fVar3 = (float)param_1[0x25];
    fVar2 = (float10)fpatan((float10)fStack_70,(float10)fStack_68);
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)fVar3));
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 * (float10)0.2 + (float10)fVar3));
    param_1[0x25] = (int)(float)fVar2;
    uStack_64 = 0;
    uStack_60 = 0;
    auStack_5c[0] = 0x40933333;
    fVar3 = (float)fVar2;
    D3DXMatrixRotationY(auStack_54);
    D3DXVec3TransformNormal(auStack_6c,auStack_6c,auStack_5c);
    param_1[0x14] = (int)(unaff_EDI - fStack_78);
    param_1[0x15] = unaff_ESI;
    param_1[0x16] = (int)(unaff_EBX - fStack_70);
    fVar2 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x24f]);
    param_1[0x24f] = param_1[0x25];
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 / (float10)(float)param_1[0x244]));
    fVar2 = (-fVar2 * (float10)71.61973 - (float10)(float)param_1[0x24a]) * (float10)0.1 +
            (float10)(float)param_1[0x24a];
    param_1[0x24a] = (int)(float)fVar2;
    FUN_00a947e0(0,(float)((float10)0.6 * (float10)(float)param_1[0x248] * fVar2),
                 (float)((float10)(float)param_1[0x248] * (float10)_DAT_01b34ef8 * (float10)0.6),0);
    iVar1 = FUN_00a54a60(param_1[0x249]);
    if ((iVar1 == 0) && (0.0 < fVar3)) {
      return;
    }
    FUN_008e6d00();
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar3 = (float)param_1[0x248] * (float)param_1[0x244] * 0.4;
  fVar2 = (float10)FUN_00a581b0(auStack_7c,fVar3,param_1[0x249]);
  param_1[0x249] = (int)(float)fVar2;
  FUN_00a585a0(&fStack_70,fVar3,(float)fVar2);
  fVar3 = (float)param_1[0x25];
  fVar2 = (float10)fpatan((float10)fStack_70,(float10)fStack_68);
  fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)fVar3));
  fVar2 = (float10)FUN_00ddba30((float)(fVar2 * (float10)0.1 + (float10)fVar3));
  param_1[0x25] = (int)(float)fVar2;
  uStack_64 = 0;
  uStack_60 = 0;
  auStack_5c[0] = 0x40933333;
  D3DXMatrixRotationY(auStack_54,(float)fVar2);
  D3DXVec3TransformNormal(auStack_6c,auStack_6c,auStack_5c);
  param_1[0x14] = (int)(unaff_EDI - fStack_78);
  param_1[0x15] = unaff_ESI;
  param_1[0x16] = (int)(unaff_EBX - fStack_70);
  fVar2 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x24f]);
  param_1[0x24f] = param_1[0x25];
  fVar2 = (float10)FUN_00ddba30((float)(fVar2 / (float10)(float)param_1[0x244]));
  fVar2 = (-fVar2 * (float10)71.61973 - (float10)(float)param_1[0x24a]) * (float10)0.25 +
          (float10)(float)param_1[0x24a];
  param_1[0x24a] = (int)(float)fVar2;
  FUN_00a947e0(0,(float)((float10)0.6 * (float10)(float)param_1[0x248] * fVar2),
               (float)((float10)(float)param_1[0x248] * (float10)_DAT_01b34ef8 * (float10)0.6),0);
  fVar2 = (float10)FUN_00a581b0(&stack0xffffff70,param_1[0x24b],param_1[0x249]);
  iVar1 = FUN_00a54a60((float)fVar2);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 004FB2E0  FUN_004fb2e0  size=47  [between]
void __fastcall FUN_004fb2e0(int *param_1)

{
  if (param_1[0x186] == 0x10) {
    (**(code **)(*param_1 + 0x7c))(param_1 + 0x14,param_1 + 0x24);
    FUN_008e0ae0(1);
  }
  return;
}

// 004FB310  FUN_004fb310  size=33  [between]
undefined4 __fastcall FUN_004fb310(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8eea0();
  if ((1 < iVar1) && (*(int *)(param_1 + 0xee8) < 3)) {
    return 0;
  }
  return 1;
}

// 004FB3D0  FUN_004fb3d0  size=820  [between]
void __fastcall FUN_004fb3d0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x920) = 0;
    iVar2 = FUN_00de4500("em0190_a000.mot");
    uVar3 = FUN_00de4500("em0190_a000_0_seq.bxm");
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_01640544,"em0190_a000.mot");
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    else {
      FUN_00ac45d0(iVar2,uVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000,&DAT_0163eed0);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_004fb3fe;
  fVar4 = (float10)FUN_00a92ff0();
  *(float *)(param_1 + 0x920) = (float)(fVar4 + (float10)*(float *)(param_1 + 0x920));
LAB_004fb3fe:
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 390.0 < fVar1 != (fVar1 == 390.0)) && (*(float *)(param_1 + 0x920) < 392.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 410.0 < fVar1 != (fVar1 == 410.0)) && (*(float *)(param_1 + 0x920) < 412.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 450.0 < fVar1 != (fVar1 == 450.0)) && (*(float *)(param_1 + 0x920) < 452.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 520.0 < fVar1 != (fVar1 == 520.0)) && (*(float *)(param_1 + 0x920) < 522.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 550.0 < fVar1 != (fVar1 == 550.0)) && (*(float *)(param_1 + 0x920) < 552.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 630.0 < fVar1 != (fVar1 == 630.0)) && (*(float *)(param_1 + 0x920) < 632.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 660.0 < fVar1 != (fVar1 == 660.0)) && (*(float *)(param_1 + 0x920) < 662.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 710.0 < fVar1 != (fVar1 == 710.0)) && (*(float *)(param_1 + 0x920) < 712.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 810.0 < fVar1 != (fVar1 == 810.0)) && (*(float *)(param_1 + 0x920) < 812.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,0xf);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 830.0 < fVar1 != (fVar1 == 830.0)) && (*(float *)(param_1 + 0x920) < 832.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,0xf);
    return;
  }
  return;
}

// 004FB710  FUN_004fb710  size=138  [between]
void __fastcall FUN_004fb710(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_00de4500("em0190_b000.mot");
    uVar2 = FUN_00de4500("em0190_b000_0_seq.bxm");
    if (iVar1 != 0) {
      FUN_00ac45d0(iVar1,uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000,&DAT_016405e8);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    FUN_00dd5650(&DAT_01640544,"em0190_b000.mot");
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 004FB7A0  FUN_004fb7a0  size=138  [between]
void __fastcall FUN_004fb7a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_00de4500("em0190_c000.mot");
    uVar2 = FUN_00de4500("em0190_c000_0_seq.bxm");
    if (iVar1 != 0) {
      FUN_00ac45d0(iVar1,uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000,&DAT_01640618);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    FUN_00dd5650(&DAT_01640544,"em0190_c000.mot");
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 004FB830  FUN_004fb830  size=48  [between]
undefined4 FUN_004fb830(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00a8cab0();
  if ((iVar1 != 0x3e) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x3d)) {
    return 0;
  }
  return 1;
}

// 004FB860  FUN_004fb860  size=30  [between]
undefined4 __fastcall FUN_004fb860(int param_1)

{
  if (((DAT_01bea090 & 0x2000000) != 0) && (*(int *)(param_1 + 0x15f0) != 0)) {
    return 1;
  }
  return 0;
}

// 004FB880  Em0190::vf14C  size=30  [class]
undefined4 Em0190::vf14C(int param_1)

{
  if (((param_1 != 0x51) && (param_1 != 0x52)) && (param_1 != 0x6a)) {
    return 0;
  }
  return 1;
}

// 004FB8A0  Em0190::vf158  size=5  [class]
undefined4 Em0190::vf158(void)

{
  return 0;
}

// 004FBE50  FUN_004fbe50  size=120  [callgraph]
undefined4 __thiscall FUN_004fbe50(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 004FC2A0  FUN_004fc2a0  size=33  [callgraph]
void __thiscall FUN_004fc2a0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x80;
    return;
  }
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xffffff7f;
  return;
}

// 004FC8E0  FUN_004fc8e0  size=81  [callgraph]
undefined4 * FUN_004fc8e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00a12290(param_3);
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x40);
    param_1[1] = *(undefined4 *)(iVar1 + 0x44);
    param_1[2] = *(undefined4 *)(iVar1 + 0x48);
    param_1[3] = *(undefined4 *)(iVar1 + 0x4c);
    return param_1;
  }
  *param_1 = *(undefined4 *)(param_2 + 0x40);
  param_1[1] = *(undefined4 *)(param_2 + 0x44);
  param_1[2] = *(undefined4 *)(param_2 + 0x48);
  param_1[3] = *(undefined4 *)(param_2 + 0x4c);
  return param_1;
}

// 004FC940  Em0190::vf30  size=72  [class]
void __fastcall Em0190::vf30(int *param_1)

{
  (**(code **)(*param_1 + 0x344))(9,1,1);
  FUN_00c27f80(3);
  FUN_00c27f40(4,0x45e10000);
  BehaviorEmBase::vf30();
  param_1[0x139] = 1;
  return;
}

// 004FC990  Em0190::vf268  size=143  [class]
undefined4 __thiscall Em0190::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *param_4;
  if (iVar1 == 9) {
    if (*(int *)(param_1 + 0x4a0) == 2) {
      *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x2000;
    }
  }
  else if (iVar1 == 0xf) {
    if (param_4[0xb] == 0) {
      *(undefined4 *)(param_1 + 0x149c) = 0x44160000;
      *(undefined4 *)(param_1 + 0x1498) = 0x44e10000;
      return 1;
    }
    if (param_4[0xb] == 1) {
      *(undefined4 *)(param_1 + 0x14a0) = 0x43960000;
      *(undefined4 *)(param_1 + 0x1498) = 0x43960000;
      return 1;
    }
  }
  else {
    if (iVar1 != 0x1b) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0xecc) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x1250) = 0;
      return 1;
    }
  }
  return 1;
}

// 004FCA50  FUN_004fca50  size=576  [between]
void __fastcall FUN_004fca50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar6;
  int unaff_EDI;
  undefined4 *puVar7;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 auStack_c [3];
  
  if (*(int *)(param_1 + 0x7b0) != 0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_3(2);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&local_10,7);
    *(undefined4 *)(param_1 + 0xfbc) = 0;
    if (unaff_EBP != 0) {
      (**(code **)(**(int **)(param_1 + 0x754) + 8))(10);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(10);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(10);
      auStack_c[0] = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(10);
      iVar2 = FUN_00a12210(1);
      iVar1 = *(int *)(param_1 + 0x760);
      *(undefined4 *)(param_1 + 0x10e4) = 1;
      puVar6 = (undefined4 *)(iVar2 + 0x10);
      puVar7 = (undefined4 *)(param_1 + 0x10f0);
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)(param_1 + 0x1130) = 0x3fe66666;
      *(undefined4 *)(param_1 + 0x1134) = 0x40490fdb;
      *(undefined4 *)(param_1 + 0x1138) = 1;
      *(undefined4 *)(param_1 + 0x113c) = 0;
      *(int *)(param_1 + 0x1140) = iVar1 + 1;
      *(undefined4 *)(param_1 + 0x1054) = uStack_14;
      *(undefined4 *)(param_1 + 0x105c) = local_10;
      *(char *)(param_1 + 0x1060) = (char)((uint)unaff_ESI >> 0x18);
      *(undefined4 *)(param_1 + 0x1058) = auStack_c[0];
      *(undefined4 *)(param_1 + 0x1050) = 0xe7;
      *(uint *)(param_1 + 0x10dc) = *(uint *)(param_1 + 0x10dc) | 0x40000000;
      *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x2000000;
      *(undefined1 *)(param_1 + 0x1061) = 10;
      *(undefined2 *)(param_1 + 0x10d4) = 0x2103;
      uVar3 = CollisionAttackData::CollisionAttackData_4((undefined4 *)(param_1 + 0x1050));
      Behavior::addBodyOffenseCollisionFromRigidBody
                (&stack0xffffffe8,*(int *)(param_1 + 0x760) + 1,99,10,uVar3);
      piVar4 = (int *)FUN_00a93580(99);
      if (piVar4 != (int *)0x0) {
        iVar1 = *piVar4;
        uVar3 = FUN_009f8b40(0);
        (**(code **)(iVar1 + 0x20))(0x1e,uVar3);
      }
    }
    if ((*(byte *)(param_1 + 0xb00) & 0x40) != 0) {
      uVar3 = (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(auStack_c,0);
      FUN_00910ab0(uVar3);
      if (unaff_EDI != 0) {
        *(undefined4 *)(param_1 + 0x1154) = 100;
        *(undefined4 *)(param_1 + 0x115c) = 100;
        *(undefined1 *)(param_1 + 0x1160) = 0;
        *(undefined4 *)(param_1 + 0x1158) = 100;
        *(undefined4 *)(param_1 + 0x1150) = 0xe7;
        *(uint *)(param_1 + 0x11dc) = *(uint *)(param_1 + 0x11dc) | 0x20000000;
        *(undefined1 *)(param_1 + 0x1161) = 10;
        *(undefined2 *)(param_1 + 0x11d4) = 0x2103;
        uVar3 = CollisionAttackData::CollisionAttackData_4((undefined4 *)(param_1 + 0x1150));
        Behavior::addBodyOffenseCollisionFromRigidBody
                  (&stack0xffffffe0,*(int *)(param_1 + 0x760) + 1,100,10,uVar3);
        piVar4 = (int *)FUN_00a93580(100);
        if (piVar4 != (int *)0x0) {
          iVar1 = *piVar4;
          uVar3 = FUN_009f8b40(0);
          (**(code **)(iVar1 + 0x20))(0x1e,uVar3);
        }
      }
    }
  }
  return;
}

// 004FCC90  FUN_004fcc90  size=467  [between]
void __fastcall FUN_004fcc90(int param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 uStack_15;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar4 = FUN_00a93580(99);
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x4e4) != 0) {
      if (*(int *)(iVar4 + 0x35c) == 0) {
        return;
      }
      FUN_00d7acc0();
      return;
    }
    iVar4 = *(int *)(iVar4 + 0x378);
    if (iVar4 != 0) {
      (**(code **)(**(int **)(param_1 + 0x754) + 8))(10);
      iVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(10);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(10);
      uVar6 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(10);
      iVar4 = *(int *)(iVar4 + 8);
      iVar7 = FUN_00a12210(1);
      iVar2 = *(int *)(param_1 + 0x760);
      *(undefined4 *)(iVar4 + 0x94) = 1;
      puVar9 = (undefined4 *)(iVar7 + 0x10);
      puVar10 = (undefined4 *)(iVar4 + 0xa0);
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined4 *)(iVar4 + 0xe0) = 0x3fe66666;
      *(undefined4 *)(iVar4 + 0xe4) = 0x40490fdb;
      *(int *)(iVar4 + 0xf0) = iVar2 + 1;
      *(undefined4 *)(iVar4 + 0xe8) = 1;
      *(undefined4 *)(iVar4 + 0xec) = 0;
      iVar4 = *(int *)(iVar5 + 8);
      *(undefined4 *)(iVar4 + 4) = uStack_10;
      *(undefined4 *)(iVar4 + 0xc) = uStack_c;
      *(undefined1 *)(iVar4 + 0x10) = uStack_15;
      *(undefined4 *)(iVar4 + 8) = uVar6;
      **(undefined4 **)(iVar5 + 8) = 0xe7;
      puVar1 = (uint *)(*(int *)(iVar5 + 8) + 0x8c);
      *puVar1 = *puVar1 | 0x40000000;
      puVar1 = (uint *)(*(int *)(iVar5 + 8) + 0x90);
      *puVar1 = *puVar1 | 0x2000000;
      *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x2000000;
      *(undefined1 *)(*(int *)(iVar5 + 8) + 0x11) = 10;
      *(undefined2 *)(*(int *)(iVar5 + 8) + 0x84) = 0x2103;
      fVar3 = *(float *)(param_1 + 0xfbc) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0xfbc) = fVar3;
      if (fVar3 <= 0.0) {
        FUN_00a8d280();
        *(undefined4 *)(param_1 + 0xfbc) = 0x41700000;
        FUN_00d7b890();
        FUN_00d79cb0();
      }
    }
  }
  if (((*(byte *)(param_1 + 0xb00) & 0x40) != 0) && (iVar4 = FUN_00a93580(100), iVar4 != 0)) {
    FUN_00d7b890();
    FUN_00d79cb0();
    return;
  }
  return;
}

// 004FCEE0  FUN_004fcee0  size=238  [between]
/* WARNING: Removing unreachable block (ram,0x004fcfbf) */

void __thiscall FUN_004fcee0(int param_1,float param_2)

{
  float fVar1;
  float unaff_ESI;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  float local_84;
  float fStack_7c;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  local_70 = 0;
  local_6c = 0;
  puStack_88 = local_50;
  local_68 = 0x40933333;
  local_84 = *(float *)(param_1 + 0x94);
  puStack_8c = (undefined1 *)0x4fcf14;
  D3DXMatrixRotationY();
  puStack_8c = auStack_58;
  D3DXVec3TransformNormal();
  fVar1 = *(float *)(param_1 + 0x910);
  D3DXMatrixRotationY(auStack_64);
  D3DXVec3TransformNormal(&fStack_7c,&puStack_8c,&local_6c);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - ((float)puStack_88 - fVar1 * param_2);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - (local_84 - (float)auStack_78);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - (unaff_ESI - (float)auStack_78);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) - (fStack_7c - (float)puStack_8c);
  return;
}

// 004FCFD0  FUN_004fcfd0  size=63  [between]
uint FUN_004fcfd0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01be9ca4;
  (**(code **)(*piVar2 + 4))(&DAT_01be9ca4);
  iVar1 = FUN_00dd6d70(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 004FD010  FUN_004fd010  size=535  [between]
void __fastcall FUN_004fd010(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  float10 fVar3;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x5c);
    break;
  default:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    break;
  case 2:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 100);
    break;
  case 3:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x6c);
    break;
  case 4:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x74);
  }
  fVar3 = (float10)(*pcVar2)(0x11);
  *(float *)(param_1 + 0x15f8) = (float)fVar3;
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x5c);
    break;
  default:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    break;
  case 2:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 100);
    break;
  case 3:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x6c);
    break;
  case 4:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x74);
  }
  fVar3 = (float10)(*pcVar2)(0x14);
  *(float *)(param_1 + 0x15fc) = (float)fVar3;
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x5c);
    break;
  default:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    break;
  case 2:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 100);
    break;
  case 3:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x6c);
    break;
  case 4:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x74);
  }
  fVar3 = (float10)(*pcVar2)(0x15);
  *(float *)(param_1 + 0x1600) = (float)fVar3;
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x5c);
    break;
  default:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    break;
  case 2:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 100);
    break;
  case 3:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x6c);
    break;
  case 4:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x74);
  }
  fVar3 = (float10)(*pcVar2)(0x17);
  *(float *)(param_1 + 0x1604) = (float)fVar3;
  uVar1 = FUN_004fa1e0(0x18);
  *(undefined4 *)(param_1 + 0x1608) = uVar1;
  uVar1 = FUN_004fa1e0(0x19);
  *(undefined4 *)(param_1 + 0x1614) = uVar1;
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x5c);
    break;
  default:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    break;
  case 2:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 100);
    break;
  case 3:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x6c);
    break;
  case 4:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x74);
  }
  fVar3 = (float10)(*pcVar2)(0xc);
  *(float *)(param_1 + 0x15d8) = (float)fVar3;
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x1c);
  *(float *)(param_1 + 0x160c) = (float)fVar3;
  fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x1c);
  *(float *)(param_1 + 0x1610) = (float)fVar3;
  return;
}

// 004FD2B0  FUN_004fd2b0  size=124  [between]
undefined4 __thiscall FUN_004fd2b0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  
  fVar1 = param_2[1] - *(float *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x40) - *param_2;
  fVar3 = *(float *)(param_1 + 0x48) - param_2[2];
  fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
  if (-10.5 <= fVar1) {
    if (-3.5 <= fVar1) {
      if (-1.0 <= fVar1) {
        return 0;
      }
      bVar4 = fVar2 < 0.64000005 | (byte)((ushort)((ushort)NAN(fVar2) << 10) >> 8);
    }
    else {
      bVar4 = fVar2 < 36.0 | (byte)((ushort)((ushort)NAN(fVar2) << 10) >> 8);
    }
  }
  else {
    bVar4 = fVar2 < 100.0 | (byte)((ushort)((ushort)NAN(fVar2) << 10) >> 8);
  }
  if ((POPCOUNT(bVar4) & 1U) == 0) {
    return 0;
  }
  return 1;
}

// 004FD330  FUN_004fd330  size=91  [between]
void __fastcall FUN_004fd330(int param_1)

{
  float fVar1;
  float fVar2;
  
  if ((*(uint *)(param_1 + 0xecc) & 0x200) != 0) {
    fVar1 = *(float *)(param_1 + 0xf18) * *(float *)(param_1 + 0x910) *
            ((*(float *)(param_1 + 0xf04) + *(float *)(param_1 + 0xef4)) -
            *(float *)(param_1 + 0x54));
    fVar2 = 0.15;
    if ((0.15 < fVar1) || (fVar2 = -0.15, fVar1 < -0.15)) {
      *(float *)(param_1 + 0x54) = fVar2 + *(float *)(param_1 + 0x54);
      return;
    }
    *(float *)(param_1 + 0x54) = fVar1 + *(float *)(param_1 + 0x54);
  }
  return;
}

// 004FD390  FUN_004fd390  size=143  [between]
void __fastcall FUN_004fd390(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x4e4) != 0) && (5.0 < *(float *)(param_1 + 0xfb0))) {
    *(float *)(param_1 + 0xfb0) = *(float *)(param_1 + 0xfb0) * 0.95;
  }
  *(float *)(param_1 + 0xfb0) =
       (*(float *)(param_1 + 0xfb4) - *(float *)(param_1 + 0xfb0)) * 0.04 +
       *(float *)(param_1 + 0xfb0);
  iVar2 = FUN_00a12210(1);
  if (iVar2 != 0) {
    fVar1 = *(float *)(param_1 + 0xfb0) * 0.017453292;
    if (*(float *)(param_1 + 0x910) < 1.0) {
      fVar1 = fVar1 * *(float *)(param_1 + 0x910);
    }
    fVar1 = fVar1 + *(float *)(param_1 + 0xfb8);
    *(float *)(param_1 + 0xfb8) = fVar1;
    *(float *)(iVar2 + 0x94) = fVar1;
  }
  return;
}

// 004FD420  FUN_004fd420  size=311  [between]
void __fastcall FUN_004fd420(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  
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
      *puVar3 = 0xe3;
      puVar3[0x23] = puVar3[0x23] | 0x400000;
      *(undefined1 *)((int)puVar3 + 0x11) = 10;
      puVar3 = (undefined4 *)FUN_009f8b60();
      piVar4 = (int *)FUN_00602cb0(5,*puVar3,iVar2);
      if (piVar4 != (int *)0x0) {
        iVar2 = *piVar4;
        uVar5 = (**(code **)(*param_1 + 0x68))();
        (**(code **)(iVar2 + 0x6c))(uVar5);
        piVar1 = (int *)piVar4[0x21c];
        piVar4[0x21d] = 0x3f800000;
        puVar3 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*piVar1 + 0x20))(0xb,*puVar3,0);
        piVar6 = (int *)FUN_00d773c0();
        (**(code **)(*piVar6 + 8))(piVar1);
        FUN_00d7b0f0();
        FUN_00d77c50(piVar4[0x13c],0xffffffff);
        piVar1[0x144] = 0x3dcccccd;
        FUN_00d77580(0x3f000000,0x40a80000,0x3f266666);
        piVar1[0xe0] = 0xe1;
        FUN_00d7b890();
        return;
      }
      return;
    }
  }
  FUN_00dd5650(&DAT_016406a0);
  return;
}

// 004FD560  FUN_004fd560  size=117  [between]
void __fastcall FUN_004fd560(int param_1)

{
  if ((*(byte *)(param_1 + 0xecc) & 8) != 0) {
    FUN_00e5e0c0("et0020_se_mov_hovering_up",param_1,1,0);
  }
  *(undefined4 *)(param_1 + 0xfb4) = 0x42840000;
  *(undefined4 *)(param_1 + 0xedc) = 0;
  FUN_00a8c9b0(0,0xd,0x3f800000,0);
  FUN_00a8c9b0(0,0x207,0x3f800000,0);
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xdffffff7;
  return;
}

// 004FD5E0  FUN_004fd5e0  size=124  [between]
void __fastcall FUN_004fd5e0(int param_1)

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
  
  local_38 = *(undefined4 *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0x1498) = 0x450ca000;
  local_4c = 0xffffffff;
  local_48 = 0xffffffff;
  local_54 = 0;
  local_44 = 0xffffffff;
  local_50 = 0;
  local_10 = 0;
  local_3c = 0;
  local_c = 0;
  local_2c = 0;
  local_8 = 0;
  local_4 = 0;
  local_40 = 0xfffffffe;
  local_34 = 0x1010000;
  local_30 = 0xf;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004FD660  FUN_004fd660  size=115  [between]
void __fastcall FUN_004fd660(int param_1)

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
  
  local_4c = 0xffffffff;
  local_54 = 0;
  local_48 = 0xffffffff;
  local_50 = 0;
  local_44 = 0xffffffff;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_3c = 0;
  local_2c = 0;
  local_38 = *(undefined4 *)(param_1 + 0x4b0);
  local_4 = 1;
  local_40 = 0xfffffffe;
  local_34 = 0x1010000;
  local_30 = 0xf;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004FD6E0  FUN_004fd6e0  size=112  [between]
void __fastcall FUN_004fd6e0(int param_1)

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
  local_38 = *(undefined4 *)(param_1 + 0x4b0);
  local_c = 0;
  local_4c = 0xffffffff;
  local_8 = 0;
  local_48 = 0xffffffff;
  local_44 = 0xffffffff;
  local_4 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_34 = 0x1010000;
  local_30 = 0x1b;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004FD750  FUN_004fd750  size=780  [between]
void __fastcall FUN_004fd750(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 local_e4 [4];
  uint local_e0 [36];
  undefined4 local_50;
  
  *(undefined4 *)(param_1 + 0x145c) = 1;
  iVar1 = FUN_00a12210(0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1410) = 0;
    *(undefined4 *)(param_1 + 0x1414) = 0xbf4ccccd;
    *(undefined4 *)(param_1 + 0x1418) = 0x3f4ccccd;
    local_130 = *(undefined4 *)(iVar1 + 0x40);
    local_12c = *(undefined4 *)(iVar1 + 0x44);
    local_128 = *(undefined4 *)(iVar1 + 0x48);
    local_124 = *(undefined4 *)(iVar1 + 0x4c);
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    local_110 = 0x40000000;
    local_10c = 0x3f800000;
    local_108 = 0x40e00000;
    FUN_0118f7b0();
    local_50 = 0;
    iVar1 = FUN_009f8b40();
    local_e0[0] = iVar1 << 0x10 | 0x10;
    piVar2 = (int *)FUN_00910da0();
    uVar3 = (**(code **)(*piVar2 + 4))(local_e4,local_e0,&local_130,&local_120,&local_110,1);
    FUN_00910ab0(uVar3);
    if (*(int *)(param_1 + 0x1420) != 0) {
      FUN_00916260();
      FUN_00917bd0(*(undefined4 *)(param_1 + 0x1420),0x20);
      FUN_00916360();
    }
  }
  iVar1 = FUN_00a12210(1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1430) = 0;
    *(undefined4 *)(param_1 + 0x1434) = 0xbe99999a;
    *(undefined4 *)(param_1 + 0x1438) = 0;
    local_130 = *(undefined4 *)(iVar1 + 0x40);
    local_12c = *(undefined4 *)(iVar1 + 0x44);
    local_128 = *(undefined4 *)(iVar1 + 0x48);
    local_124 = *(undefined4 *)(iVar1 + 0x4c);
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    local_110 = 0;
    local_10c = 0x3d4ccccd;
    local_108 = 0;
    local_120 = 0;
    local_11c = 0xbd4ccccd;
    local_118 = 0;
    FUN_0118f7b0();
    local_50 = 0;
    iVar1 = FUN_009f8b40();
    local_e0[0] = iVar1 << 0x10 | 0x10;
    piVar2 = (int *)FUN_00910da0();
    uVar3 = (**(code **)(*piVar2 + 0x10))
                      (local_e4,local_e0,&local_130,&uStack_100,&local_110,&local_120,0x40600000,1);
    FUN_00910ab0(uVar3);
    if (*(int *)(param_1 + 0x1440) != 0) {
      FUN_00916260();
      FUN_008f9610(*(undefined4 *)(param_1 + 0x1440),0x20000,1);
      FUN_0091a8a0();
      FUN_00917bd0(*(undefined4 *)(param_1 + 0x1440),0x20);
      FUN_00917bd0(*(undefined4 *)(param_1 + 0x1440),0x40);
    }
  }
  iVar1 = FUN_00a12210(1);
  if (iVar1 != 0) {
    local_130 = *(undefined4 *)(iVar1 + 0x40);
    local_12c = *(undefined4 *)(iVar1 + 0x44);
    local_128 = *(undefined4 *)(iVar1 + 0x48);
    local_124 = *(undefined4 *)(iVar1 + 0x4c);
    local_120 = 0;
    local_11c = 0x3f4ccccd;
    local_118 = 0;
    uStack_100 = 0;
    uStack_fc = 0x3f19999a;
    uStack_f8 = 0;
    piVar2 = (int *)FUN_00900480();
    iVar1 = *piVar2;
    uVar3 = FUN_009f8b40(0);
    uVar3 = (**(code **)(iVar1 + 0xc))(&local_130,&local_120,&uStack_100,0x4099999a,7,uVar3);
    FUN_008f7f00(uVar3,*(undefined4 *)(param_1 + 0x4f0));
    lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar3);
    FUN_009009c0("heli_propeller");
    FUN_00900bd0();
  }
  return;
}

// 004FDA60  FUN_004fda60  size=77  [between]
void __fastcall FUN_004fda60(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x1420) != 0) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x2c))(param_1 + 0x1420);
  }
  if (*(int *)(param_1 + 0x1440) != 0) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x2c))(param_1 + 0x1440);
  }
  FUN_00900ca0();
  return;
}

// 004FDB20  FUN_004fdb20  size=247  [between]
undefined4 FUN_004fdb20(float *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  local_30 = *param_2 - *param_1;
  local_2c = param_2[1] - param_1[1];
  local_28 = param_2[2] - param_1[2];
  local_24 = param_2[3] - param_1[3];
  fVar1 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
  }
  pfVar2 = (float *)FUN_00a925a0(local_20);
  fVar3 = (float10)fcos((float10)1.0471975803375244);
  if ((float10)pfVar2[2] * (float10)local_28 +
      (float10)*pfVar2 * (float10)local_30 + (float10)pfVar2[1] * (float10)local_2c <= fVar3) {
    return 0;
  }
  return 1;
}

// 004FDC20  FUN_004fdc20  size=292  [between]
float10 __thiscall FUN_004fdc20(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *param_2 - *param_3;
  local_1c = param_2[1] - param_3[1];
  local_18 = param_2[2] - param_3[2];
  local_14 = param_2[3] - param_3[3];
  fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_20,&local_20);
    fVar3 = (float10)local_1c;
    fVar4 = (float10)local_20;
    fVar5 = (float10)local_18;
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fVar4 = (float10)0;
    fVar3 = (float10)1;
    fVar5 = fVar4;
  }
  fVar6 = ((float10)*(float *)(param_1 + 0x48) - (float10)param_2[2]) * fVar5 +
          ((float10)*(float *)(param_1 + 0x40) - (float10)*param_2) * fVar4 +
          ((float10)*(float *)(param_1 + 0x44) - (float10)param_2[1]) * fVar3;
  fVar4 = (float10)*param_2 + fVar4 * fVar6;
  fVar1 = param_2[1];
  fVar5 = fVar5 * fVar6 + (float10)param_2[2];
  fVar2 = param_2[3];
  if (param_4 != (float *)0x0) {
    *param_4 = (float)fVar4;
    param_4[1] = (float)((float10)fVar1 + fVar3 * fVar6);
    param_4[2] = (float)fVar5;
    param_4[3] = (float)((float10)fVar2 + fVar6 * (float10)local_14);
  }
  fVar4 = fVar4 - (float10)*(float *)(param_1 + 0x40);
  fVar5 = fVar5 - (float10)*(float *)(param_1 + 0x48);
  return fVar5 * fVar5 + fVar4 * fVar4;
}

// 004FDD50  FUN_004fdd50  size=46  [between]
void FUN_004fdd50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(param_1);
  FUN_004fa620((float)fVar1,param_2,param_3);
  return;
}

// 004FDD80  FUN_004fdd80  size=65  [between]
float10 __thiscall FUN_004fdd80(int param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_004fa620((float)fVar1,param_2,param_3);
    return fVar1;
  }
  return (float10)6.2831855;
}

// 004FDDD0  FUN_004fddd0  size=42  [between]
float10 __fastcall FUN_004fddd0(int param_1)

{
  if ((*(uint *)(param_1 + 0xecc) & 0x8000) != 0) {
    return (float10)2.1;
  }
  if ((*(byte *)(param_1 + 0xb00) & 0x40) != 0) {
    return (float10)*(float *)(param_1 + 0x1610);
  }
  return (float10)*(float *)(param_1 + 0x160c);
}

// 004FDE50  FUN_004fde50  size=474  [between]
void __fastcall FUN_004fde50(int param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfffff7ff;
  FUN_00a925a0(&local_20);
  local_1c = 0.0;
  fVar2 = local_20 * local_20 + local_18 * local_18;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&local_20,&local_20);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_20 = 0.0;
    local_1c = 1.0;
    local_18 = 0.0;
  }
  pfVar4 = (float *)(param_1 + 0xf60);
  *pfVar4 = *(float *)(param_1 + 0x40) + local_20 * 8.0;
  *(float *)(param_1 + 0xf64) = local_1c * 8.0 + *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0xf68) = *(float *)(param_1 + 0x48) + local_18 * 8.0;
  *(float *)(param_1 + 0xf6c) = local_14 * 8.0 + *(float *)(param_1 + 0x4c);
  *(float *)(param_1 + 0xf64) = *(float *)(param_1 + 0xef4) + 2.5;
  *(float *)(param_1 + 0xf80) = local_20 * 28.0;
  *(float *)(param_1 + 0xf84) = local_1c * 28.0;
  *(float *)(param_1 + 0xf88) = local_18 * 28.0;
  *(float *)(param_1 + 0xf8c) = local_14 * 28.0;
  *(undefined4 *)(param_1 + 0xf70) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xf74) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0xf78) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0xf7c) = *(undefined4 *)(param_1 + 0x4c);
  *(float *)(param_1 + 0xf90) = *pfVar4 - *(float *)(param_1 + 0xf70);
  *(float *)(param_1 + 0xf94) = *(float *)(param_1 + 0xf64) - *(float *)(param_1 + 0xf74);
  *(float *)(param_1 + 0xf98) = *(float *)(param_1 + 0xf68) - *(float *)(param_1 + 0xf78);
  *(float *)(param_1 + 0xf9c) = *(float *)(param_1 + 0xf6c) - *(float *)(param_1 + 0xf7c);
  piVar3 = (int *)FUN_009f8b60();
  iVar1 = *piVar3;
  param_1 = param_1 + 0xf0c;
  local_24 = 2;
  do {
    FUN_0090fa30(param_1,0,pfVar4,0x3fc00000,pfVar4 + 8,iVar1 << 0x10 | 0x1e,"em0190_rush");
    pfVar4 = pfVar4 + 4;
    param_1 = param_1 + 4;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  return;
}

// 004FE030  FUN_004fe030  size=377  [between]
void __fastcall FUN_004fe030(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_48;
  uint local_44;
  int local_30;
  undefined1 local_2c [4];
  int local_28 [2];
  undefined1 local_20 [28];
  
  if ((*(int *)(param_1 + 0xf0c) != 0) && (*(int *)(param_1 + 0xf10) != 0)) {
    local_28[0] = FUN_00907640(param_1 + 0xf0c,&local_30,local_20);
    local_28[1] = FUN_00907640(param_1 + 0xf10,local_2c,local_20);
    bVar2 = true;
    local_44 = 0;
    do {
      if ((*(int *)((int)local_28 + local_44) != 0) && (*(int *)((int)&local_30 + local_44) != 0)) {
        FUN_0112bcf0();
        iVar1 = *(int *)((int)&local_30 + local_44);
        local_48 = 0;
        if (0 < *(int *)(iVar1 + 0x14)) {
          iVar5 = 0;
          do {
            iVar6 = *(int *)(*(int *)(iVar1 + 0x10) + 0x28 + iVar5);
            if ((((*(char *)(iVar6 + 0x18) == '\x01') &&
                 (iVar6 = *(char *)(iVar6 + 0x10) + iVar6, iVar6 != 0)) &&
                (iVar3 = FUN_00910ba0(iVar6), iVar3 == 0)) &&
               (((iVar6 = FUN_008f7780(iVar6), iVar6 == 0 ||
                 ((uVar4 = *(uint *)(iVar6 + 0x4b0) & 0xf0000, uVar4 != 0xf0000 &&
                  (uVar4 != 0xd0000)))) || (*(int *)(iVar6 + 0x884) == 0)))) {
              bVar2 = false;
              goto LAB_004fe163;
            }
            local_48 = local_48 + 1;
            iVar5 = iVar5 + 0x30;
          } while (local_48 < *(int *)(iVar1 + 0x14));
        }
      }
      local_44 = local_44 + 4;
    } while (local_44 < 8);
LAB_004fe163:
    if (bVar2) {
      *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x800;
    }
    else {
      *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfffff7ff;
    }
    RayCastManager::getWork(param_1 + 0xf0c);
    RayCastManager::getWork(param_1 + 0xf10);
  }
  return;
}

// 004FE1B0  FUN_004fe1b0  size=174  [between]
uint __fastcall FUN_004fe1b0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (((((*(int *)(param_1 + 0xa84) != 0) && ((*(uint *)(param_1 + 0xb00) & 0x100) == 0)) &&
       (*(float *)(param_1 + 0x1498) <= 0.0)) &&
      ((ABS(*(float *)(param_1 + 0xef4) - *(float *)(*(int *)(param_1 + 0xa84) + 0x44)) <= 4.0 &&
       (ABS((*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xf04)) - *(float *)(param_1 + 0xef4)
           ) <= 2.0)))) && (fVar2 = (float10)FUN_004fa5e0(), ABS(fVar2) <= (float10)0.12217305)) {
    iVar1 = FUN_00ac4640(2);
    if ((iVar1 != 0) && (iVar1 = FUN_00ac4670(*(int *)(param_1 + 0xa84) + 0x40,2), iVar1 == 0)) {
      return 0;
    }
    return *(uint *)(param_1 + 0xecc) >> 0xb & 1;
  }
  return 0;
}

// 004FE260  FUN_004fe260  size=82  [between]
void __thiscall FUN_004fe260(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (param_2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x100;
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
      }
    }
  }
  return;
}

// 004FE2C0  FUN_004fe2c0  size=402  [between]
int __fastcall FUN_004fe2c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0xf14) != 0) {
    local_90 = 0;
    local_88 = 0;
    iVar1 = FUN_00907560((int *)(param_1 + 0xf14),0,0,&local_90,&local_88,0,0,0);
    if (iVar1 != 0) {
      FUN_00910a40(local_90);
      iVar3 = 1;
      if (local_8c != 0) {
        local_84 = FUN_0091a9d0();
        uVar2 = FUN_009f8b40();
        iVar3 = 1;
        if (uVar2 == local_84 >> 0x10) {
          iVar3 = 0;
        }
      }
    }
  }
  iVar1 = FUN_00a12210(4);
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  local_80 = *(undefined4 *)(iVar1 + 0x40);
  local_7c = *(undefined4 *)(iVar1 + 0x44);
  local_78 = *(undefined4 *)(iVar1 + 0x48);
  local_74 = *(undefined4 *)(iVar1 + 0x4c);
  iVar1 = *(int *)(param_1 + 0xa84);
  local_70 = *(undefined4 *)(iVar1 + 0x40);
  local_68 = *(undefined4 *)(iVar1 + 0x48);
  local_64 = *(undefined4 *)(iVar1 + 0x4c);
  local_6c = *(float *)(iVar1 + 0x44) + 2.0;
  iVar1 = FUN_009f8b40();
  local_60[0] = param_1 + 0xf14;
  local_50 = local_80;
  local_4c = local_7c;
  local_30 = iVar1 << 0x10 | 0x1e;
  local_48 = local_78;
  local_44 = local_74;
  local_60[1] = 0;
  local_40 = local_70;
  local_2c = 0;
  local_28 = 0;
  local_3c = local_6c;
  local_24 = 0;
  local_20 = "Em0190_checkObstacle";
  local_38 = local_68;
  local_1c = 0;
  local_18 = 0;
  local_34 = local_64;
  HavokRayCastManager::set(local_60);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x2000000;
    return iVar3;
  }
  *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) & 0xfdffffff;
  return iVar3;
}

// 004FE460  FUN_004fe460  size=140  [between]
undefined1 __thiscall FUN_004fe460(int param_1,float param_2)

{
  undefined1 uVar1;
  int iVar2;
  float *pfVar3;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  iVar2 = FUN_00c19f60(*(undefined4 *)(param_1 + 0xb9c),
                       2 - (uint)((*(uint *)(param_1 + 0xecc) >> 0xf & 1) != 0));
  if (iVar2 == 0) {
    return 1;
  }
  pfVar3 = (float *)FUN_00a8b8a0(local_20,-param_2);
  local_2c = *pfVar3 + *(float *)(param_1 + 0x40);
  local_28 = *(float *)(param_1 + 0x44) + pfVar3[1];
  local_24 = *(float *)(param_1 + 0x48) + pfVar3[2];
  uVar1 = FUN_00ca51e0(&local_2c);
  return uVar1;
}

// 004FE4F0  FUN_004fe4f0  size=138  [between]
undefined1 __thiscall FUN_004fe4f0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  float *pfVar3;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  iVar2 = FUN_00c19f60(*(undefined4 *)(param_1 + 0xb9c),
                       2 - (uint)((*(uint *)(param_1 + 0xecc) >> 0xf & 1) != 0));
  if (iVar2 == 0) {
    return 1;
  }
  pfVar3 = (float *)FUN_00a8b8a0(local_20,param_2);
  local_2c = *pfVar3 + *(float *)(param_1 + 0x40);
  local_28 = *(float *)(param_1 + 0x44) + pfVar3[1];
  local_24 = *(float *)(param_1 + 0x48) + pfVar3[2];
  uVar1 = FUN_00ca51e0(&local_2c);
  return uVar1;
}

// 004FE580  FUN_004fe580  size=140  [between]
undefined1 __thiscall FUN_004fe580(int param_1,float param_2)

{
  undefined1 uVar1;
  int iVar2;
  float *pfVar3;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  iVar2 = FUN_00c19f60(*(undefined4 *)(param_1 + 0xb9c),
                       2 - (uint)((*(uint *)(param_1 + 0xecc) >> 0xf & 1) != 0));
  if (iVar2 == 0) {
    return 1;
  }
  pfVar3 = (float *)FUN_00a8b9b0(local_20,-param_2);
  local_2c = *pfVar3 + *(float *)(param_1 + 0x40);
  local_28 = *(float *)(param_1 + 0x44) + pfVar3[1];
  local_24 = *(float *)(param_1 + 0x48) + pfVar3[2];
  uVar1 = FUN_00ca51e0(&local_2c);
  return uVar1;
}

// 004FE610  FUN_004fe610  size=143  [between]
undefined1 __thiscall FUN_004fe610(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_004fa6d0(&local_20,param_2,param_3);
  iVar2 = FUN_00c19f60(*(undefined4 *)(param_1 + 0xb9c),
                       2 - (uint)((*(uint *)(param_1 + 0xecc) >> 0xf & 1) != 0));
  if (iVar2 == 0) {
    return 1;
  }
  local_2c = *(float *)(param_1 + 0x40) + local_20;
  local_28 = *(float *)(param_1 + 0x44) + local_1c;
  local_24 = *(float *)(param_1 + 0x48) + local_18;
  uVar1 = FUN_00ca51e0(&local_2c);
  return uVar1;
}

// 004FE6A0  FUN_004fe6a0  size=59  [between]
undefined4 __fastcall FUN_004fe6a0(int param_1)

{
  if (((*(int *)(param_1 + 0xa84) != 0) &&
      (ABS(*(float *)(param_1 + 0x44) - *(float *)(*(int *)(param_1 + 0xa84) + 0x44)) < 4.5)) &&
     (*(float *)(param_1 + 0xa90) <= 64.0)) {
    return 1;
  }
  return 0;
}

// 004FE6E0  FUN_004fe6e0  size=138  [between]
undefined1 __thiscall FUN_004fe6e0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  float *pfVar3;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  iVar2 = FUN_00c19f60(*(undefined4 *)(param_1 + 0xb9c),
                       2 - (uint)((*(uint *)(param_1 + 0xecc) >> 0xf & 1) != 0));
  if (iVar2 == 0) {
    return 1;
  }
  pfVar3 = (float *)FUN_00a8b9b0(local_20,param_2);
  local_2c = *pfVar3 + *(float *)(param_1 + 0x40);
  local_28 = *(float *)(param_1 + 0x44) + pfVar3[1];
  local_24 = *(float *)(param_1 + 0x48) + pfVar3[2];
  uVar1 = FUN_00ca51e0(&local_2c);
  return uVar1;
}

// 004FE770  FUN_004fe770  size=46  [between]
void __fastcall FUN_004fe770(int param_1)

{
  if ((*(uint *)(param_1 + 0xecc) & 0x1000) != 0) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xffffefff;
    FUN_00a8c9b0(0,5,0x3f800000,0);
  }
  return;
}

// 004FE7A0  FUN_004fe7a0  size=46  [between]
void __fastcall FUN_004fe7a0(int param_1)

{
  if ((*(uint *)(param_1 + 0xecc) & 0x200000) != 0) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xffdfffff;
    FUN_00a8c9b0(0,0x12,0x3f800000,0);
  }
  return;
}

// 004FE7D0  FUN_004fe7d0  size=46  [between]
void __fastcall FUN_004fe7d0(int param_1)

{
  if ((*(uint *)(param_1 + 0xecc) & 0x4000000) != 0) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfbffffff;
    FUN_00a8c9b0(0,0x15,0x3f800000,0);
  }
  return;
}

// 004FE800  FUN_004fe800  size=63  [between]
uint FUN_004fe800(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01b34f20;
  (**(code **)(*piVar2 + 4))(&DAT_01b34f20);
  iVar1 = FUN_00dd6d70(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 004FE840  FUN_004fe840  size=310  [between]
void __fastcall FUN_004fe840(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0xecc) & 0x40) == 0) {
    fVar1 = (*(float *)(param_1 + 0xf28) - *(float *)(param_1 + 0xf30)) * 0.03;
    if (fVar1 <= 0.017453292) {
      if (fVar1 < -0.017453292) {
        fVar1 = -0.017453292;
      }
    }
    else {
      fVar1 = 0.017453292;
    }
    *(float *)(param_1 + 0xf30) = fVar1 + *(float *)(param_1 + 0xf30);
    fVar1 = (*(float *)(param_1 + 0xf24) - *(float *)(param_1 + 0xf2c)) * 0.03;
    fVar2 = 0.02268928;
    if ((fVar1 <= 0.02268928) && (fVar2 = fVar1, fVar1 < -0.02268928)) {
      fVar2 = -0.02268928;
    }
    *(float *)(param_1 + 0xf2c) = *(float *)(param_1 + 0xf2c) + fVar2;
  }
  fVar1 = *(float *)(param_1 + 0xf30);
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 0.87266463 < fVar1)) {
    fVar2 = 0.87266463;
  }
  fVar1 = *(float *)(param_1 + 0xf2c);
  fVar3 = -0.7853982;
  if ((-0.7853982 <= fVar1) && (fVar3 = fVar1, 0.7853982 < fVar1)) {
    fVar3 = 0.7853982;
  }
  iVar4 = FUN_00a12210(4);
  if (iVar4 != 0) {
    *(float *)(iVar4 + 0x90) = fVar2;
  }
  iVar4 = FUN_00a12210(3);
  if (iVar4 != 0) {
    *(float *)(iVar4 + 0x94) = fVar3;
  }
  return;
}

// 004FEA40  FUN_004fea40  size=68  [between]
undefined4 __fastcall FUN_004fea40(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00ac4770();
  if (((iVar2 == 0) && ((DAT_01bea060 & 0x40000000) == 0)) &&
     ((uVar1 = *(uint *)(param_1 + 0xecc), (uVar1 & 0x20) != 0 ||
      ((((uVar1 & 1) != 0 && ((uVar1 & 2) != 0)) && (*(float *)(param_1 + 0xf40) <= 0.0)))))) {
    return 1;
  }
  return 0;
}

// 004FEA90  FUN_004fea90  size=126  [between]
void __fastcall FUN_004fea90(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
  }
  FUN_00ac9420(&DAT_0163d9a8);
  if ((*(uint *)(param_1 + 0xecc) & 0x40000000) == 0) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x40000000;
    FUN_00aa92c0(400);
    FUN_00aa92c0(0x191);
  }
  return;
}

// 004FEC00  Em0190::vf130  size=397  [class]
undefined4 __thiscall Em0190::vf130(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  uint uVar6;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      puVar1 = *(uint **)(iVar2 + 8);
      puVar1[5] = *(uint *)(param_1 + 0x4f0);
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      uVar6 = (uint)*param_2;
      if ((*(float *)(param_1 + 0xed0) <= 0.1) && (uVar6 == 4)) {
        uVar6 = 8;
      }
      uVar4 = FUN_00ac8520(uVar6);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(uVar6);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(uVar6);
      uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(uVar6);
      *puVar1 = uVar6;
      puVar1[1] = uVar4;
      puVar1[3] = unaff_EDI;
      *(undefined1 *)(puVar1 + 4) = uStack_8;
      puVar1[2] = uVar5;
      if (uVar6 == 4) {
        *puVar1 = 0xe4;
        puVar1[0x23] = puVar1[0x23] | 0x20000000;
        puVar1[0x24] = puVar1[0x24] | 0x2000000;
        *(undefined2 *)(puVar1 + 0x21) = 0x2102;
        *(undefined1 *)((int)puVar1 + 0x11) = 10;
      }
      else {
        if (uVar6 == 6) {
          *puVar1 = 0xe5;
          puVar1[0x23] = puVar1[0x23] | 0x20000000;
          puVar1[0x24] = puVar1[0x24] | 0x2000000;
          *(undefined2 *)(puVar1 + 0x21) = 0x2102;
          *(undefined1 *)((int)puVar1 + 0x11) = 10;
          return unaff_ESI;
        }
        if (uVar6 == 8) {
          *puVar1 = 0xe6;
          puVar1[0x23] = puVar1[0x23] | 0x20000000;
          puVar1[0x24] = puVar1[0x24] | 0x2000000;
          *(undefined2 *)(puVar1 + 0x21) = 0x2102;
          *(undefined1 *)((int)puVar1 + 0x11) = 10;
          return unaff_ESI;
        }
      }
      return unaff_ESI;
    }
  }
  FUN_00dd5650(&DAT_01640740);
  return 0;
}

// 004FED90  Em0190::vf1A4  size=76  [class]
void __thiscall Em0190::vf1A4(int param_1,int *param_2,byte param_3)

{
  undefined4 uVar1;
  
  if ((param_3 & 6) == 0) {
    if ((param_3 & 9) != 0) {
      *(int *)(param_1 + 0x1254) = *param_2;
      *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x10000;
      return;
    }
  }
  else if (*param_2 == 0xe4) {
    uVar1 = FUN_00a81330();
    FUN_004fe260(uVar1);
  }
  return;
}

// 004FEDE0  FUN_004fede0  size=76  [callgraph]
void __thiscall FUN_004fede0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x4a0) == 1) {
    *(undefined4 *)(param_1 + 0x1048) = param_3;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    FUN_00a8caf0(param_2,0,0,0);
  }
  return;
}

// 004FEE30  FUN_004fee30  size=236  [callgraph]
void __fastcall FUN_004fee30(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    iVar2 = FUN_00de4500("em0190_c100.mot");
    uVar1 = FUN_00de4500("em0190_c100_0_seq.bxm");
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_01640544,"em0190_c100.mot");
    }
    else {
      FUN_00ac45d0(iVar2,uVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000,&DAT_01640770);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    (**(code **)(*param_1 + 0x20))();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a805f0();
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x4fc] =
         (int)SQRT((float)param_1[0x4f6] * (float)param_1[0x4f6] +
                   (float)param_1[0x4f4] * (float)param_1[0x4f4] +
                   (float)param_1[0x4f5] * (float)param_1[0x4f5]);
    FUN_00a8cb60(2);
  }
  return;
}

// 004FEF20  FUN_004fef20  size=130  [callgraph]
void __fastcall FUN_004fef20(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined *puVar4;
  
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      fVar3 = (float10)FUN_00a8ec30((int *)(param_1 + 0x40));
      piVar1[0xfbf] = (int)(float)fVar3;
      piVar1[0xfc1] = 0;
      piVar1[0xfc4] = *(int *)(param_1 + 0x40);
      piVar1[0xfc5] = *(int *)(param_1 + 0x44);
      piVar1[0xfc6] = *(int *)(param_1 + 0x48);
      piVar1[0xfc7] = *(int *)(param_1 + 0x4c);
      piVar1[0xfc1] = 1;
      FUN_00b7eba0(*(undefined4 *)(param_1 + 0x4f0));
    }
  }
  return;
}

// 004FEFB0  FUN_004fefb0  size=31  [callgraph]
void __fastcall FUN_004fefb0(int param_1)

{
  DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xffafffff;
  *(undefined4 *)(param_1 + 0x15f0) = 0;
  return;
}

// 004FEFD0  FUN_004fefd0  size=167  [callgraph]
void __fastcall FUN_004fefd0(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined *puVar4;
  
  if ((((DAT_01bea090 & 0x2000000) != 0) && (*(int *)(param_1 + 0x15f0) != 0)) &&
     (piVar1 = *(int **)(param_1 + 0xa84), piVar1 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if (((iVar2 != 0) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x3e)) &&
       (iVar2 = FUN_00a8cab0(), iVar2 != 0x3d)) {
      fVar3 = (float10)FUN_00a8ec30((int *)(param_1 + 0x40));
      piVar1[0xfbf] = (int)(float)fVar3;
      piVar1[0xfc1] = 0;
      piVar1[0xfc4] = *(int *)(param_1 + 0x40);
      piVar1[0xfc5] = *(int *)(param_1 + 0x44);
      piVar1[0xfc6] = *(int *)(param_1 + 0x48);
      piVar1[0xfc7] = *(int *)(param_1 + 0x4c);
      piVar1[0xfc1] = 1;
    }
  }
  return;
}

// 004FF080  FUN_004ff080  size=89  [callgraph]
void __thiscall FUN_004ff080(int param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(float *)(param_1 + 0x40) - (float10)*param_2;
  fVar2 = (float10)*(float *)(param_1 + 0x48) - (float10)param_2[2];
  fVar2 = (float10)fpatan((float10)*(float *)(param_1 + 0x44) - (float10)param_2[1],
                          SQRT(fVar2 * fVar2 + fVar1 * fVar1));
  fVar1 = (float10)0.2617994;
  if (((NAN(fVar1) || NAN(fVar2)) || fVar1 < fVar2 == (fVar1 == fVar2)) &&
     (fVar1 = (float10)0, fVar1 <= fVar2)) {
    *(float *)(param_1 + 0x1678) = (float)fVar2;
    return;
  }
  *(float *)(param_1 + 0x1678) = (float)fVar1;
  return;
}

// 004FF0E0  FUN_004ff0e0  size=1342  [callgraph]
void __fastcall FUN_004ff0e0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
    pfVar1 = (float *)(param_1 + 0x3f8);
    *pfVar1 = (float)param_1[0x400];
    param_1[0x3f9] = param_1[0x401];
    param_1[0x3fa] = param_1[0x402];
    param_1[0x3fb] = param_1[0x403];
    param_1[0x3f9] = (int)((float)param_1[0x3f9] + 3.5);
    FUN_00a6de50(local_20);
    iVar4 = FUN_004fa930(pfVar1,local_20);
    param_1[0x187] = param_1[0x187] + 1;
    uVar5 = FUN_004fa760(pfVar1);
    param_1[0x251] = 0;
    if (iVar4 == 0) {
      uVar5 = (uint)(uVar5 == 0);
      fVar3 = (float)param_1[0x12] * 2.0 - (float)param_1[0x402];
      fVar2 = (float)param_1[0x13] * 2.0 - (float)param_1[0x403];
      *pfVar1 = (float)param_1[0x10] * 2.0 - (float)param_1[0x400];
      param_1[0x3f9] = (int)((float)param_1[0x11] * 2.0 - (float)param_1[0x401]);
    }
    else {
      fVar3 = ((float)param_1[0x12] + (float)param_1[0x402]) - (float)param_1[0x12];
      fVar2 = ((float)param_1[0x13] + (float)param_1[0x403]) - (float)param_1[0x13];
      *pfVar1 = ((float)param_1[0x400] + (float)param_1[0x10]) - (float)param_1[0x10];
      param_1[0x3f9] = (int)(((float)param_1[0x11] + (float)param_1[0x401]) - (float)param_1[0x11]);
    }
    param_1[0x3fa] = (int)fVar3;
    param_1[0x3fb] = (int)fVar2;
    param_1[0x250] = 0x19;
    if (uVar5 != 0) {
      param_1[0x250] = 0x16;
    }
    param_1[0x591] = 0x3ecccccd;
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    FUN_004fa3b0(param_1[0x250],0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x593] = 0;
    param_1[0x595] = 0x3da0d97c;
  case 1:
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar2);
    fVar6 = (float10)fcos((float10)3.1415927 -
                          ((float10)(float)param_1[0x244] + (float10)fVar2) *
                          (float10)(float)param_1[0x595]);
    fVar6 = (float10)0.5 + fVar6 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar6;
    param_1[0x590] =
         (int)(float)(fVar6 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_00a947e0(0,(float)(fVar6 * (float10)(float)param_1[0x591] * (float10)(float)param_1[0x515]),
                 0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x593];
    if (!NAN(fVar2) && 40.0 < fVar2 != (fVar2 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_00a947e0(0,(float)param_1[0x515] * (float)param_1[0x591],0,0);
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar2 = (float)param_1[0x594];
    fVar6 = (float10)FUN_00a8ec30(param_1 + 0x3f8);
    FUN_004fa620((float)fVar6,0x3d4ccccd,fVar2 * 0.034906585);
    break;
  case 2:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    fVar6 = (float10)FUN_00a8ec30(param_1 + 0x3f8);
    fVar6 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar6));
    fVar7 = (float10)FUN_00a8ec30(param_1 + 0x3f8);
    fVar7 = (float10)FUN_004fa620((float)fVar7,0x3da3d70a,0x3d0efa35);
    fVar6 = (float10)FUN_00ddba30((float)(fVar7 - ABS((float10)(float)fVar6)));
    FUN_00a947e0(0,(float)(ABS(fVar6) * (float10)28.64789 * (float10)(float)param_1[0x591] *
                          (float10)(float)param_1[0x515]),0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = 0x3f800000;
    if (ABS((float)fVar7) < 0.08726646) {
      param_1[0x595] = 0x3d8efa35;
      param_1[0x593] = 0x42340000;
      fVar2 = (float)(ABS(fVar6) * (float10)28.64789) * (float)param_1[0x591];
      param_1[0x591] = (int)fVar2;
      FUN_00a947e0(0,fVar2 * (float)param_1[0x515],0,0);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    param_1[0x593] = (int)((float)param_1[0x593] - (float)param_1[0x244]);
    fVar2 = (float)param_1[0x594];
    fVar6 = (float10)FUN_00a8ec30(param_1 + 0x3f8);
    FUN_004fa620((float)fVar6,0x3d4ccccd,fVar2 * 0.034906585);
    fVar6 = (float10)fcos((float10)3.1415927 -
                          (float10)(float)param_1[0x595] * (float10)(float)param_1[0x593]);
    fVar6 = (float10)0.5 + fVar6 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar6;
    FUN_00a947e0(0,(float)(fVar6 * (float10)(float)param_1[0x591] * (float10)(float)param_1[0x515]),
                 0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  fVar6 = (float10)FUN_00fdc1f0();
  fVar7 = ((float10)(float)param_1[0x3f9] - (float10)(float)param_1[0x15]) * ((float10)1 - fVar6);
  fVar6 = (float10)0.1;
  if ((fVar7 <= fVar6) && (fVar6 = (float10)-0.1, fVar6 <= fVar7)) {
    param_1[0x15] = (int)(float)(fVar7 + (float10)(float)param_1[0x15]);
    return;
  }
  param_1[0x15] = (int)(float)(fVar6 + (float10)(float)param_1[0x15]);
  return;
}

// 004FF630  FUN_004ff630  size=191  [callgraph]
void __fastcall FUN_004ff630(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int *piVar2;
  
  if (param_1[0x2a1] != 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x3e) {
      return;
    }
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x3d) {
      return;
    }
  }
  if ((param_1[0x3b3] & 0x80000U) == 0) {
    piVar2 = (int *)FUN_00a6e640();
    iVar1 = (**(code **)(*piVar2 + 0x84))(param_1[0x2e7]);
    if ((iVar1 == 0) || (iVar1 != param_1[0x411])) {
      param_1[0x59e] = 0;
      DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
      param_1[0x3b3] = param_1[0x3b3] & 0xffafffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x57c] = 0;
                    /* WARNING: Could not recover jumptable at 0x004ff6ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
    param_1[0x3b3] = param_1[0x3b3] & 0xffafffff;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
    param_1[0x57c] = 0;
    (*UNRECOVERED_JUMPTABLE)();
    param_1[0x59e] = 0;
  }
  return;
}

// 004FF6F0  FUN_004ff6f0  size=417  [callgraph]
void __fastcall FUN_004ff6f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    param_1[0x517] = 0;
    if (param_1[0x508] != 0) {
      FUN_00916360();
    }
    if (param_1[0x510] != 0) {
      FUN_00916360();
    }
    param_1[0x59d] = 0;
    param_1[0x24] = 0;
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] | 0x400000;
      *(undefined4 *)param_1[0xdc] = 0;
    }
    param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
    param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
    FUN_00aa4080(0x36,1,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    if (DAT_01bea740 != 0) {
      return;
    }
    param_1[0x517] = 1;
    if ((param_1[0x508] != 0) && ((param_1[0x3b3] & 0x8000U) != 0)) {
      FUN_0091a8a0();
    }
    if (param_1[0x510] != 0) {
      FUN_0091a8a0();
    }
                    /* WARNING: Could not recover jumptable at 0x004ff772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(1);
  if (iVar1 != 0) {
    uVar2 = 0x2e;
    if (0.5 < (float)param_1[0x3b4]) {
      uVar2 = 0xd;
    }
    FUN_00aa4080(uVar2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 004FF8A0  FUN_004ff8a0  size=269  [callgraph]
void __fastcall FUN_004ff8a0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    iVar2 = param_1[0x187];
    if (iVar2 == 0) {
      param_1[0x187] = 1;
    }
    else if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
      if (0.0 < fVar1 - (float)param_1[0x244]) {
        return;
      }
      param_1[0x517] = 1;
      if ((param_1[0x508] != 0) && ((param_1[0x3b3] & 0x8000U) != 0)) {
        FUN_0091a8a0();
      }
      if (param_1[0x510] != 0) {
        FUN_0091a8a0();
      }
                    /* WARNING: Could not recover jumptable at 0x004ff963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8cab0();
    if ((iVar2 != 0x46) && (1 < iVar2 - 0x100U)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42700000;
    }
  }
  return;
}

// 00500030  FUN_00500030  size=444  [callgraph]
void __thiscall FUN_00500030(int param_1,float param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar1 = *(int *)(param_1 + 0xa84);
  local_20 = *(float *)(iVar1 + 0x40);
  local_14 = *(float *)(iVar1 + 0x4c);
  local_18 = *(float *)(iVar1 + 0x48) + param_2;
  local_1c = *(float *)(param_1 + 0x54);
  if (iVar1 != 0) {
    fVar3 = (float10)FUN_00a8ec30(iVar1 + 0x40);
    FUN_004fa620((float)fVar3,0x3da3d70a,0x3c64c388);
  }
  local_30 = (local_20 - *(float *)(param_1 + 0x50)) * 0.08;
  local_2c = (local_1c - *(float *)(param_1 + 0x54)) * 0.08;
  local_28 = (local_18 - *(float *)(param_1 + 0x58)) * 0.08;
  local_24 = (local_14 - *(float *)(param_1 + 0x5c)) * 0.08;
  fVar2 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
  if (0.0625 < fVar2) {
    if (fVar2 <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_28 = 0.0;
      local_30 = 0.0;
      local_2c = 1.0;
    }
    else {
      FUN_00ddf460(&local_30,&local_30);
    }
    local_30 = local_30 * 0.25;
    local_2c = local_2c * 0.25;
    local_28 = local_28 * 0.25;
    local_24 = local_24 * 0.25;
  }
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_30;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + local_2c;
  *(float *)(param_1 + 0x58) = local_28 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = local_24 + *(float *)(param_1 + 0x5c);
  if (param_3 != 0) {
    *(float *)(param_1 + 0x50) =
         (float)((float10)*(float *)(param_1 + 0x50) -
                (float10)*(float *)(param_1 + 0x924) * (float10)4.0);
    fVar3 = (float10)*(float *)(param_1 + 0x920) + (float10)0.017453292;
    *(float *)(param_1 + 0x920) = (float)fVar3;
    fVar3 = (float10)fsin(fVar3);
    *(float *)(param_1 + 0x924) = (float)fVar3;
    *(float *)(param_1 + 0x50) = (float)(fVar3 * (float10)4.0 + (float10)*(float *)(param_1 + 0x50))
    ;
  }
  return;
}

// 005001F0  FUN_005001f0  size=1995  [callgraph]
void __fastcall FUN_005001f0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  float10 fVar14;
  float10 fVar15;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  uVar10 = param_1[0x3b3];
  switch(param_1[0x187]) {
  case 0:
    iVar11 = FUN_00c19f90(&local_4c,DAT_01d5bad4,1);
    if (iVar11 != 0) {
      piVar12 = param_1 + 0x3f8;
      *piVar12 = local_4c;
      param_1[0x3f9] = local_48;
      param_1[0x3fa] = local_44;
      param_1[0x3fb] = 0x3f800000;
      fVar15 = (float10)FUN_004fa5b0(piVar12);
      param_1[0x515] = 0x3e800000;
      if ((float10)1.0471976 <= ABS(fVar15)) {
        uVar13 = 0x19;
        iVar11 = FUN_004fa760(piVar12);
        if (iVar11 != 0) {
          uVar13 = 0x16;
        }
        param_1[0x591] = 0x3ecccccd;
        param_1[0x590] = 0;
        param_1[0x594] = 0;
        FUN_004fa3b0(uVar13,0x3e4ccccd,0,0xffffffff);
        RayCastManager::getWork(param_1 + 0x40e);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else {
        param_1[0x591] = 0x3ecccccd;
        param_1[0x590] = 0;
        param_1[0x594] = 0;
        param_1[0x592] = 0x3e99999a;
        param_1[0x407] = param_1[0x10];
        param_1[0x408] = param_1[0x11];
        param_1[0x409] = param_1[0x12];
        FUN_004fa3b0(0x10,0x3e4ccccd,0,0xffffffff);
        RayCastManager::getWork(param_1 + 0x40e);
        param_1[0x187] = 4;
      }
      param_1[0x593] = 0;
      param_1[0x595] = 0x3da0d97c;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    goto LAB_005009aa;
  case 1:
    fVar9 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar9);
    fVar15 = (float10)fcos((float10)3.1415927 -
                           ((float10)(float)param_1[0x244] + (float10)fVar9) *
                           (float10)(float)param_1[0x595]);
    fVar15 = (float10)0.5 + fVar15 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar15;
    param_1[0x590] =
         (int)(float)(fVar15 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fa450((float)(fVar15 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar9 = (float)param_1[0x593];
    if (!NAN(fVar9) && 40.0 < fVar9 != (fVar9 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x591] * (float)param_1[0x592]);
      FUN_004fa450(param_1[0x591]);
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar9 = (float)param_1[0x594];
    fVar15 = (float10)FUN_00a8ec30(param_1 + 0x3f8);
    FUN_004fa620((float)fVar15,0x3d4ccccd,fVar9 * 0.034906585);
    return;
  case 2:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    fVar15 = (float10)FUN_00a8ec30(param_1 + 0x3f8);
    fVar15 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar15));
    fVar9 = (float)param_1[0x594];
    fVar14 = (float10)FUN_00a8ec30(param_1 + 0x3f8);
    fVar14 = (float10)FUN_004fa620((float)fVar14,0x3d4ccccd,fVar9 * 0.034906585);
    fVar15 = (float10)FUN_00ddba30((float)(fVar14 - ABS((float10)(float)fVar15)));
    FUN_004fa450((float)(ABS(fVar15) * (float10)28.64789 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = 0x3f800000;
    if (ABS((float)fVar14) < 0.08726646) {
      param_1[0x595] = 0x3d8efa35;
      param_1[0x593] = 0x42340000;
      fVar9 = (float)param_1[0x591] * (float)(ABS(fVar15) * (float10)28.64789);
      param_1[0x591] = (int)fVar9;
LAB_00500574:
      FUN_004fa450(fVar9);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    param_1[0x591] = 0x3ecccccd;
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    param_1[0x592] = 0x3e99999a;
    FUN_004fa3b0(0x10,0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x407] = param_1[0x10];
    param_1[0x408] = param_1[0x11];
    param_1[0x409] = param_1[0x12];
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x593] = 0;
    param_1[0x595] = 0x3da0d97c;
    return;
  case 4:
    fVar9 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar9 + (float10)(float)param_1[0x244]);
    fVar15 = (float10)fcos((float10)3.1415927 -
                           ((float10)fVar9 + (float10)(float)param_1[0x244]) *
                           (float10)(float)param_1[0x595]);
    fVar15 = (float10)0.5 + fVar15 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar15;
    param_1[0x590] =
         (int)(float)(fVar15 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    fVar15 = (float10)FUN_00a8ec30(param_1 + 0x3f8);
    FUN_004fa620((float)fVar15,0x3da3d70a,0x3c2b92a6);
    piVar12 = (int *)FUN_00a8b8a0(local_40,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar12;
    param_1[0x3f5] = piVar12[1];
    param_1[0x3f6] = piVar12[2];
    param_1[0x3f7] = piVar12[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    FUN_004fa450((float)param_1[0x594] * (float)param_1[0x591]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar9 = (float)param_1[0x593];
    if (!NAN(fVar9) && 40.0 < fVar9 != (fVar9 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x591] * (float)param_1[0x592]);
      FUN_004fa450(param_1[0x591]);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    pfVar1 = (float *)(param_1 + 0x3f8);
    fVar15 = (float10)FUN_00a8ec30(pfVar1);
    FUN_004fa620((float)fVar15,0x3dcccccd,0x3cab92a6);
    piVar12 = (int *)FUN_00a8b8a0(local_30,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar12;
    param_1[0x3f5] = piVar12[1];
    param_1[0x3f6] = piVar12[2];
    param_1[0x3f7] = piVar12[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    fVar9 = *pfVar1;
    fVar2 = (float)param_1[0x10];
    fVar3 = (float)param_1[0x3fa];
    fVar4 = (float)param_1[0x12];
    fVar5 = *pfVar1;
    fVar6 = (float)param_1[0x407];
    fVar7 = (float)param_1[0x3fa];
    fVar8 = (float)param_1[0x409];
    iVar11 = FUN_00c19f10(param_1[0x2e7],2 - (uint)((uVar10 & 0x8000) != 0),param_1 + 0x10);
    if (((iVar11 != 0) ||
        ((fVar7 - fVar8) * (fVar3 - fVar4) + (fVar5 - fVar6) * (fVar9 - fVar2) <= 0.0)) ||
       (((float)param_1[0x3fa] - (float)param_1[0x12]) *
        ((float)param_1[0x3fa] - (float)param_1[0x12]) +
        (*pfVar1 - (float)param_1[0x10]) * (*pfVar1 - (float)param_1[0x10]) < 25.0)) {
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      fVar9 = (float)param_1[0x591];
      goto LAB_00500574;
    }
    break;
  case 6:
    fVar9 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar9 - (float10)(float)param_1[0x244]);
    fVar15 = (float10)fcos((float10)3.1415927 -
                           ((float10)fVar9 - (float10)(float)param_1[0x244]) *
                           (float10)(float)param_1[0x595]);
    fVar15 = (float10)0.5 + fVar15 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar15;
    fVar15 = fVar15 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar15;
    piVar12 = (int *)FUN_00a8b8a0(local_20,(float)(fVar15 * (float10)(float)param_1[0x244]));
    param_1[0x3f4] = *piVar12;
    param_1[0x3f5] = piVar12[1];
    param_1[0x3f6] = piVar12[2];
    param_1[0x3f7] = piVar12[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x3f7] + (float)param_1[0x17]);
    FUN_004fa450((float)param_1[0x594] * (float)param_1[0x591]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (0.0 < (float)param_1[0x593]) {
      return;
    }
LAB_005009aa:
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00501CB0  FUN_00501cb0  size=39  [callgraph]
float10 __fastcall FUN_00501cb0(int param_1)

{
  if ((*(int *)(param_1 + 0x4a0) != 3) && ((*(uint *)(param_1 + 0xecc) & 0x8000) == 0)) {
    return (float10)18.0 * (float10)18.0;
  }
  return (float10)8.0 * (float10)8.0;
}

// 00501CF0  FUN_00501cf0  size=307  [callgraph]
undefined4 * FUN_00501cf0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  iVar4 = FUN_00a12290(param_3);
  if (iVar4 != 0) {
    local_70 = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                    *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                    *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
    local_6c = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                    *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                    *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
    fVar3 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                 *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                 *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
    fVar1 = *(float *)(iVar4 + 0x28);
    fVar2 = *(float *)(iVar4 + 0x38);
    fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar3));
    fVar6 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
    local_60 = (float)fVar6;
    local_5c = (float)fVar5;
    fVar5 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_6c,
                            (float10)*(float *)(iVar4 + 0x10) / (float10)local_70);
    local_58 = (float)fVar5;
    local_70 = 0.0;
    local_6c = 0.0;
    local_68 = 0x3f800000;
    FUN_00ddc1d0(local_50,&local_60,5);
    D3DXVec3TransformNormal(param_1,&local_70,local_50);
    return param_1;
  }
  *param_1 = *(undefined4 *)(param_2 + 0x40);
  param_1[1] = *(undefined4 *)(param_2 + 0x44);
  param_1[2] = *(undefined4 *)(param_2 + 0x48);
  param_1[3] = *(undefined4 *)(param_2 + 0x4c);
  return param_1;
}

// 00501E30  Em0190::vf44  size=498  [class]
void __fastcall Em0190::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(uint *)(param_1 + 0xecc) & 0x4000000) != 0) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfbffffff;
    FUN_00a8c9b0(0,0x15,0x3f800000,0);
  }
  if (*(int *)(param_1 + 0x15e8) != 0) {
    *(undefined4 *)(param_1 + 0x15e8) = 0;
    DAT_01bea094 = DAT_01bea094 & 0xfffffeff;
  }
  if (*(int *)(param_1 + 0x4a0) == 5) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
    }
    (**(code **)(*(int *)(param_1 + 0xdf0) + 4))();
    RayCastManager::getWork(param_1 + 0xea0);
  }
  FUN_00a5dc60();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
    FUN_00a7c950();
  }
  FUN_00a92a00();
  if (*(int *)(param_1 + 0x1420) != 0) {
    piVar2 = (int *)FUN_00910da0();
    (**(code **)(*piVar2 + 0x2c))(param_1 + 0x1420);
  }
  if (*(int *)(param_1 + 0x1440) != 0) {
    piVar2 = (int *)FUN_00910da0();
    (**(code **)(*piVar2 + 0x2c))(param_1 + 0x1440);
  }
  FUN_00900ca0();
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  if ((*(uint *)(param_1 + 0xecc) & 0x100000) != 0) {
    DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xffafffff;
    *(undefined4 *)(param_1 + 0x15f0) = 0;
  }
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  RayCastManager::getWork(param_1 + 0xf08);
  FUN_00a9d8a0();
  FUN_00a92ef0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  if (*(int *)(param_1 + 0x1664) != 0) {
    *(undefined4 *)(param_1 + 0x166c) = 0;
    if (*(int *)(param_1 + 0x1670) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1664),0);
      *(undefined4 *)(param_1 + 0x1670) = 0;
    }
    *(undefined4 *)(param_1 + 0x1664) = 0;
    *(undefined4 *)(param_1 + 0x1668) = 0;
  }
  FUN_00a5dc60();
  BehaviorEmBase::vf44();
  return;
}

// 00502030  FUN_00502030  size=274  [between]
void __thiscall FUN_00502030(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0x102c) = uVar1;
  *(undefined4 *)(param_1 + 0x1030) = 0xffffffff;
  FUN_00a8caf0(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x1678) = 0;
  *(undefined4 *)(param_1 + 0x1454) = 0x3f800000;
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfffefeff;
  if ((*(uint *)(param_1 + 0xecc) & 0x200000) != 0) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xffdfffff;
    FUN_00a8c9b0(0,0x12,0x3f800000,0);
  }
  (**(code **)(*(int *)(param_1 + 0x1260) + 8))(0,0,0);
  if ((((*(int *)(param_1 + 0x102c) == 0x1e) || (*(int *)(param_1 + 0x102c) == 0x24)) &&
      ((DAT_01bea090 & 0x2000000) != 0)) && (*(int *)(param_1 + 0x15f0) != 0)) {
    DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xffafffff;
    *(undefined4 *)(param_1 + 0x15f0) = 0;
  }
  if (((*(uint *)(param_1 + 0xecc) & 0x8000) == 0) &&
     ((*(uint *)(param_1 + 0xecc) & 0x4000000) != 0)) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfbffffff;
    FUN_00a8c9b0(0,0x15,0x3f800000,0);
  }
  return;
}

// 00502150  FUN_00502150  size=122  [between]
float10 __thiscall FUN_00502150(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x84))();
  fVar1 = *(float *)(iVar2 + 4);
  if (param_1[0x2a1] == 0) {
    fVar3 = (float10)6.2831855;
  }
  else {
    fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar3 = (float10)FUN_004fa620((float)fVar3,param_2,param_3);
  }
  iVar2 = (**(code **)(*param_1 + 0x84))();
  FUN_004fcee0(*(float *)(iVar2 + 4) - fVar1);
  return (float10)(float)fVar3;
}

// 00502200  FUN_00502200  size=52  [between]
void __fastcall FUN_00502200(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xff7fffff;
  iVar1 = FUN_004fa760(*(int *)(param_1 + 0xa84) + 0x40);
  if (iVar1 != 0) {
    FUN_00502030(0x12);
    return;
  }
  FUN_00502030(0x13);
  return;
}

// 00502240  FUN_00502240  size=81  [between]
void __thiscall FUN_00502240(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4000) = *param_2;
  *(undefined4 *)(param_1 + 0xfa4) = param_2[1];
  *(undefined4 *)(param_1 + 0xfa8) = param_2[2];
  *(undefined4 *)(param_1 + 0xfac) = param_2[3];
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x800000;
  iVar1 = FUN_004fa760((undefined4 *)(param_1 + 4000));
  if (iVar1 != 0) {
    FUN_00502030(0x12);
    return;
  }
  FUN_00502030(0x13);
  return;
}

// 005022A0  FUN_005022a0  size=114  [between]
float10 __thiscall
FUN_005022a0(int *param_1,float *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x84))();
  fVar1 = *(float *)(iVar2 + 4);
  fVar3 = (float10)FUN_00a8ec30(param_3);
  fVar3 = (float10)FUN_004fa620((float)fVar3,param_4,param_5);
  iVar2 = (**(code **)(*param_1 + 0x84))();
  fVar4 = (float10)FUN_00ddba30(*(float *)(iVar2 + 4) - fVar1);
  *param_2 = (float)ABS(fVar4);
  return (float10)(float)fVar3;
}

// 00502340  FUN_00502340  size=226  [between]
void __fastcall FUN_00502340(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 0x4a0) == 3) || ((*(uint *)(param_1 + 0xecc) & 0x8000) != 0)) {
    fVar1 = 8.0;
  }
  else {
    fVar1 = 18.0;
  }
  if (fVar1 * fVar1 < *(float *)(param_1 + 0xa90)) {
    if ((*(uint *)(param_1 + 0xecc) & 0x8000) == 0) {
      fVar1 = 50.0;
    }
    else {
      fVar1 = 30.0;
    }
    if (fVar1 * fVar1 < *(float *)(param_1 + 0xa90) !=
        (fVar1 * fVar1 == *(float *)(param_1 + 0xa90))) {
      FUN_00502030(9);
      return;
    }
  }
  else {
    iVar2 = FUN_004fe460(0x41700000);
    if (iVar2 != 0) {
      FUN_00502030(0xe);
      return;
    }
  }
  uVar4 = 10;
  iVar2 = FUN_004fe6e0(0x41200000);
  if (iVar2 != 0) {
    iVar2 = FUN_004fe580(0x41200000);
    if (iVar2 == 0) goto LAB_00502417;
    uVar3 = FUN_00dde2d0(0,100);
    if ((uVar3 & 1) == 0) goto LAB_00502417;
  }
  uVar4 = 0xb;
LAB_00502417:
  FUN_00502030(uVar4);
  return;
}

// 00502430  FUN_00502430  size=164  [between]
undefined4 __fastcall FUN_00502430(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_28 [36];
  
  if (*(float *)(param_1 + 0xed0) <= 0.33333334) {
    piVar2 = (int *)FUN_00a6e640();
    iVar3 = (**(code **)(*piVar2 + 0x80))(0xc,*(undefined4 *)(param_1 + 0xb9c));
    *(int *)(param_1 + 0x1044) = iVar3;
    if (iVar3 != 0) {
      iVar3 = FUN_00a6de50(auStack_28);
      if (iVar3 != 0) {
        iVar3 = FUN_00957fd0(param_1 + 0x1000,*(undefined4 *)(*(int *)(param_1 + 0x1044) + 0x28),3);
        if (iVar3 != 0) {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1044) + 0x28);
          *(uint *)(param_1 + 0xb00) = *(uint *)(param_1 + 0xb00) & 0xffffffbf;
          *(undefined4 *)(param_1 + 0x1010) = uVar1;
          FUN_00502030(0x2f);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 005024E0  FUN_005024e0  size=79  [between]
void __fastcall FUN_005024e0(int param_1)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x8000;
  if ((*(uint *)(param_1 + 0xecc) & 0x8000) == 0) {
    if ((*(byte *)(param_1 + 0xb00) & 0x40) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x160c);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1610);
    }
  }
  else {
    uVar1 = 0x40066666;
  }
  *(undefined4 *)(param_1 + 0xf04) = uVar1;
  *(undefined4 *)(param_1 + 0x1034) = 0x44160000;
  FUN_0091a8a0();
  return;
}

// 00502530  FUN_00502530  size=78  [between]
void __fastcall FUN_00502530(int param_1)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xffff7fff;
  if ((*(uint *)(param_1 + 0xecc) & 0x8000) == 0) {
    if ((*(byte *)(param_1 + 0xb00) & 0x40) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x160c);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1610);
    }
  }
  else {
    uVar1 = 0x40066666;
  }
  *(undefined4 *)(param_1 + 0xf04) = uVar1;
  *(undefined4 *)(param_1 + 0xf20) = 0;
  FUN_00916360();
  return;
}

// 00502580  FUN_00502580  size=273  [between]
void FUN_00502580(undefined4 param_1,float *param_2)

{
  int iVar1;
  undefined4 *puStack_88;
  void *pvStack_84;
  float fStack_78;
  float fStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_70 = 0;
  local_6c = 0;
  pvStack_84 = (void *)0x0;
  local_68 = 0x40600000;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0xc1133333;
  puStack_88 = (undefined4 *)0x5025ba;
  iVar1 = FUN_00a12210();
  if (iVar1 != 0) {
    puStack_88 = &local_70;
    pvStack_84 = (void *)(iVar1 + 0x10);
    D3DXVec3TransformNormal(puStack_88);
    fStack_78 = *(float *)(iVar1 + 0x44) + fStack_78;
    fStack_74 = *(float *)(iVar1 + 0x48) + fStack_74;
    FID_conflict__memcpy(&local_5c,(void *)(iVar1 + 0x10),0x40);
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    D3DXVec3TransformCoord(&local_6c,&local_6c,&local_5c);
    puStack_88 = (undefined4 *)(*param_2 + (float)puStack_88);
    pvStack_84 = (void *)(param_2[1] + (float)pvStack_84);
    iVar1 = FUN_009f8b40();
    FUN_0090fa30(param_1,0,&puStack_88,0x3fa66666,&fStack_78,iVar1 << 0x10 | 0x19,"em0190_move");
  }
  return;
}

// 005026A0  FUN_005026a0  size=362  [between]
void __fastcall FUN_005026a0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((*(uint *)(param_1 + 0xecc) & 0x1000000) == 0) {
    if ((2.0 <= (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xf04)) -
                *(float *)(param_1 + 0xef4)) && ((*(uint *)(param_1 + 0xecc) & 0x200) != 0))
    goto LAB_00502742;
    if (*(int *)(param_1 + 0xf1c) != 0) {
      fVar1 = *(float *)(param_1 + 0xa90);
      if (!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) {
        *(undefined4 *)(param_1 + 0xf1c) = 0;
      }
      goto LAB_00502742;
    }
    FUN_004ff080(*(int *)(param_1 + 0xa84) + 0x40);
    if (49.0 < *(float *)(param_1 + 0xa90)) goto LAB_00502742;
    uVar3 = 0x3db2b8c2;
    *(undefined4 *)(param_1 + 0xf1c) = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x1678) = uVar3;
LAB_00502742:
  fVar1 = *(float *)(param_1 + 0x1674);
  fVar4 = (float10)FUN_00fdc1f0();
  fVar2 = *(float *)(param_1 + 0x1674);
  fVar5 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x1678) - fVar2);
  fVar4 = (float10)FUN_00ddba30((float)(((float10)1 - (float10)(float)fVar4) * fVar5 +
                                       (float10)fVar2));
  *(float *)(param_1 + 0x1674) = (float)fVar4;
  if ((float10)0.0008726646 < fVar4) {
    fVar5 = (float10)0.2617994;
    if ((fVar5 < fVar4 != (fVar5 == fVar4)) || (fVar5 = (float10)0, fVar4 < fVar5)) {
      *(float *)(param_1 + 0x1674) = (float)fVar5;
    }
    *(float *)(param_1 + 0x90) = (*(float *)(param_1 + 0x1674) - fVar1) + *(float *)(param_1 + 0x90)
    ;
    return;
  }
  *(undefined4 *)(param_1 + 0x1674) = 0;
  *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) - fVar1;
  return;
}

// 00502810  FUN_00502810  size=1420  [between]
undefined4 __thiscall FUN_00502810(int param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float unaff_ESI;
  float unaff_EDI;
  float fStack_88;
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
  float local_54;
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
  
  if (param_3 == 0) {
    return 0;
  }
  iVar4 = FUN_00c9d910();
  if (*(int *)(iVar4 + 8) != 0) {
    FUN_00c9fdd0(&local_7c);
    local_60 = *param_4 - local_7c;
    local_58 = param_4[2] - local_74;
    local_5c = 0.0;
    if ((local_60 == 0.0) && (local_58 == 0.0)) {
      local_60 = 1.0;
      local_5c = 0.0;
    }
    else {
      fVar1 = local_60 * local_60 + local_58 * local_58;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_60,&local_60);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_58 = 0.0;
        local_5c = 1.0;
        local_60 = 0.0;
      }
    }
    local_60 = local_60 * -1.0;
    local_5c = local_5c * -1.0;
    local_58 = local_58 * -1.0;
    local_54 = local_54 * -1.0;
    if (((*(byte *)(param_1 + 0xb00) & 0x80) != 0) && (iVar4 = FUN_004fe800(), iVar4 != 0)) {
      local_70 = *(float *)(iVar4 + 0x40) - local_7c;
      local_6c = *(float *)(iVar4 + 0x44) - local_78;
      local_68 = *(float *)(iVar4 + 0x48) - local_74;
      local_5c = 0.0;
      if ((local_60 == 0.0) && (local_58 == 0.0)) {
        local_60 = 1.0;
        local_5c = 0.0;
      }
      else {
        fVar1 = local_68 * local_68 + local_70 * local_70 + local_6c * local_6c;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_70,&local_70);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_70 = 0.0;
          local_6c = 1.0;
          local_68 = 0.0;
        }
      }
      local_70 = local_70 * -1.0;
      local_6c = local_6c * -1.0;
      local_68 = local_68 * -1.0;
      local_64 = local_64 * -1.0;
      fVar1 = ABS(local_68 * local_58 + local_70 * local_60 + local_6c * local_5c);
      if ((fVar1 < 0.01) || (0.99 < fVar1)) {
        local_70 = local_5c * 0.0 - local_58;
        local_6c = local_58 * 0.0 - local_60 * 0.0;
        local_68 = local_60 - local_5c * 0.0;
        local_60 = local_70;
        local_5c = local_6c;
        local_58 = local_68;
      }
      else {
        local_60 = (local_70 - local_60) * 0.5 + local_60;
        local_5c = (local_6c - local_5c) * 0.5 + local_5c;
        local_58 = (local_68 - local_58) * 0.5 + local_58;
        local_54 = local_54 + (local_64 - local_54) * 0.5;
        fVar1 = local_58 * local_58 + local_5c * local_5c + local_60 * local_60;
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
    }
    iVar4 = FUN_00c9d910();
    fVar1 = *(float *)(iVar4 + 0x24) * 0.9;
    local_60 = local_60 * fVar1;
    local_5c = fVar1 * local_5c;
    local_58 = local_58 * fVar1;
    local_54 = local_54 * fVar1;
    *param_2 = local_7c + local_60;
    param_2[1] = local_78 + local_5c;
    param_2[2] = local_58 + local_74;
    fVar2 = (local_7c + local_60) - *(float *)(param_1 + 0x40);
    fVar3 = (local_78 + local_5c) - *(float *)(param_1 + 0x44);
    fVar1 = (local_58 + local_74) - *(float *)(param_1 + 0x48);
    if (fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2 < 64.0) {
      D3DXMatrixRotationY(&local_50,0x3fc90fdb);
      D3DXVec3TransformNormal(&local_68,&local_68,&local_58);
      *param_2 = unaff_EDI + local_74;
      param_2[1] = unaff_ESI + local_70;
      param_2[2] = local_6c + fStack_88;
    }
    return 1;
  }
  FUN_00c9fe70(&local_50);
  if (0.0 <= local_48 * (param_4[2] - local_18) +
             local_4c * (param_4[1] - local_1c) + local_50 * (*param_4 - local_20)) {
    local_60 = local_50 * -0.45;
    local_5c = local_4c * -0.45;
    local_58 = local_48 * -0.45;
    local_44 = local_44 * -0.45;
  }
  else {
    local_60 = local_50 * 0.45;
    local_5c = local_4c * 0.45;
    local_58 = local_48 * 0.45;
    local_44 = local_44 * 0.45;
  }
  fVar1 = 0.45;
  if (0.0 <= local_30 * (*param_4 - local_20) + local_2c * (param_4[1] - local_1c) +
             local_28 * (param_4[2] - local_18)) {
    fVar1 = -0.45;
  }
  *param_2 = local_20 + local_60 + local_30 * fVar1;
  param_2[1] = local_1c + local_5c + local_2c * fVar1;
  param_2[2] = local_18 + local_58 + local_28 * fVar1;
  param_2[3] = local_14 + local_44 + fVar1 * local_24;
  return 1;
}

// 00502DA0  FUN_00502da0  size=182  [between]
undefined4 __fastcall FUN_00502da0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar5 = &DAT_01b34f20;
    (**(code **)(*piVar4 + 4))(&DAT_01b34f20);
    iVar3 = FUN_00dd6d70(puVar5);
    if (((iVar3 != 0) &&
        ((fVar1 = *(float *)(param_1 + 0x40) - (float)piVar4[0x10],
         fVar2 = *(float *)(param_1 + 0x48) - (float)piVar4[0x12],
         fVar1 = fVar2 * fVar2 + fVar1 * fVar1, *(float *)(param_1 + 0x14a0) <= 0.0 &&
         (fVar1 < 225.0)))) &&
       (((float)piVar4[0x11] - *(float *)(param_1 + 0x44) < -4.0 || (fVar1 < 64.0)))) {
      FUN_004fd660();
      FUN_00502030(0xf);
      return 1;
    }
  }
  return 0;
}

// 00502E60  FUN_00502e60  size=1226  [between]
/* WARNING: Removing unreachable block (ram,0x0050300a) */
/* WARNING: Removing unreachable block (ram,0x00502f8a) */
/* WARNING: Removing unreachable block (ram,0x00502fd7) */
/* WARNING: Removing unreachable block (ram,0x0050304f) */

void __fastcall FUN_00502e60(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float *pfStack_3b8;
  float *pfStack_3b4;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  undefined1 local_370 [4];
  undefined1 auStack_36c [4];
  float fStack_368;
  float fStack_364;
  float local_360 [4];
  float fStack_350;
  undefined1 auStack_348 [20];
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 uStack_328;
  undefined1 uStack_327;
  undefined4 uStack_324;
  uint uStack_2ac;
  undefined4 uStack_238;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  
  pfStack_3b4 = (float *)0x4;
  pfStack_3b8 = (float *)0x502e77;
  iVar4 = FUN_00a12210();
  if (iVar4 == 0) {
    return;
  }
  pfVar1 = (float *)(iVar4 + 0x10);
  local_360[0] = -0.095;
  pfStack_3b8 = local_360;
  local_360[1] = 0.055;
  local_360[2] = 2.3;
  pfStack_3b4 = pfVar1;
  D3DXVec3TransformNormal(local_370);
  fStack_37c = *(float *)(iVar4 + 0x40) + fStack_37c;
  iVar5 = *(int *)(param_1 + 0xa84);
  fStack_378 = *(float *)(iVar4 + 0x44) + fStack_378;
  fStack_374 = *(float *)(iVar4 + 0x48) + fStack_374;
  if (iVar5 == 0) {
    fStack_364 = fStack_364 + 10.0;
  }
  else {
    fVar2 = *(float *)(iVar5 + 0x40) - fStack_37c;
    fVar13 = *(float *)(iVar5 + 0x44) - fStack_378;
    fVar3 = *(float *)(iVar5 + 0x48) - fStack_374;
    fStack_364 = SQRT(fVar3 * fVar3 + fVar13 * fVar13 + fVar2 * fVar2) + fStack_364;
  }
  D3DXVec3TransformNormal(&stack0xfffffc54,auStack_36c,pfVar1);
  pfStack_3b8 = (float *)(*(float *)(iVar4 + 0x40) + (float)pfStack_3b8);
  pfStack_3b4 = (float *)(*(float *)(iVar4 + 0x44) + (float)pfStack_3b4);
  fStack_390 = *(float *)(iVar4 + 0x48) + unaff_EDI;
  if ((*(byte *)(param_1 + 0xecc) & 0x80) == 0) {
    iVar5 = FUN_00ac4780();
    if (iVar5 == 0) {
      uVar6 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
      fVar2 = 1.0 - (float)(uVar6 >> 8) * 5.960465e-08 * 2.0;
      DAT_01dd0814 = uVar6 * 0x19660d + 0x3c6ef35f;
      fVar3 = 1.0 - (float)(DAT_01dd0814 >> 8) * 5.960465e-08 * 2.0;
    }
    else {
      if (iVar5 != 1) goto LAB_00503063;
      uVar6 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
      DAT_01dd0814 = uVar6 * 0x19660d + 0x3c6ef35f;
      fVar2 = (1.0 - (float)(uVar6 >> 8) * 5.960465e-08 * 2.0) * 0.4;
      fVar3 = (1.0 - (float)(DAT_01dd0814 >> 8) * 5.960465e-08 * 2.0) * 0.4;
    }
    fStack_390 = fVar2 + fStack_390;
    pfStack_3b8 = (float *)(fVar3 + (float)pfStack_3b8);
  }
LAB_00503063:
  fStack_398 = (float)pfStack_3b8 - fStack_388;
  fStack_394 = (float)pfStack_3b4 - fStack_384;
  fStack_390 = fStack_390 - fStack_380;
  fStack_38c = unaff_ESI - fStack_37c;
  if (((fStack_398 == 0.0) && (fStack_394 == 0.0)) && (fStack_390 == 0.0)) {
    local_360[3] = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) + *pfVar1 * *pfVar1 +
                        *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
    fStack_350 = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                      *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                      *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
    fVar3 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                 *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                 *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
    fVar13 = *(float *)(iVar4 + 0x28) / fVar3;
    fVar2 = *(float *)(iVar4 + 0x38);
    fVar9 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar3));
    fVar10 = (float10)fpatan((float10)fVar13,(float10)(fVar2 / fVar3));
    fVar11 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)fStack_350,
                             (float10)*pfVar1 / (float10)local_360[3]);
  }
  else {
    fVar2 = fStack_390 * fStack_390 + fStack_398 * fStack_398 + fStack_394 * fStack_394;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_398,&fStack_398);
      fVar9 = (float10)fStack_398;
      fVar12 = (float10)fStack_390;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar9 = (float10)0;
      fStack_398 = (float)fVar9;
      fStack_394 = 1.0;
      fStack_390 = (float)fVar9;
      fVar12 = fVar9;
    }
    fVar11 = (float10)0;
    fVar10 = (float10)fpatan((float10)fStack_394,SQRT(fVar12 * fVar12 + fVar9 * fVar9));
    fVar10 = -fVar10;
    fVar9 = (float10)fpatan(fVar9,fVar12);
  }
  fStack_364 = (float)fVar9;
  fStack_368 = (float)fVar10;
  local_360[0] = (float)fVar11;
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  FUN_00416e30(&fStack_388,&pfStack_3b8,&fStack_368,0x40000000,0x43480000);
  uStack_324 = *(undefined4 *)(param_1 + 0x4f0);
  uStack_2ac = uStack_2ac | 0x10002000;
  uVar7 = FUN_00a7c7f0();
  FUN_00a7c960(uVar7);
  uStack_334 = *(undefined4 *)(param_1 + 0x1620);
  uStack_1dc = 0x3f7f7cee;
  uStack_328 = *(undefined1 *)(param_1 + 0x1628);
  uStack_32c = *(undefined4 *)(param_1 + 0x1624);
  uStack_330 = *(undefined4 *)(param_1 + 0x162c);
  uStack_238 = 0x39;
  uStack_327 = 3;
  puVar8 = (undefined4 *)FUN_009f8b60();
  uStack_1d8 = *puVar8;
  FUN_00ae2bc0(*(undefined4 *)(param_1 + 0x4f0),auStack_348);
  return;
}

// 00503330  FUN_00503330  size=1229  [between]
void __fastcall FUN_00503330(int param_1)

{
  uint *puVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  uint local_330 [4];
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 local_310;
  undefined1 local_30f;
  undefined4 local_30c;
  uint local_294;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_50;
  
  if ((((*(int *)(param_1 + 0xf44) < 6) &&
       (iVar4 = *(int *)(&DAT_0164087c + *(int *)(param_1 + 0xf44) * 4), -1 < iVar4)) &&
      (iVar4 < *(short *)(param_1 + 0x324))) &&
     (iVar4 = iVar4 * 0x70 + *(int *)(param_1 + 800), iVar4 != 0)) {
    puVar1 = (uint *)(iVar4 + 0x38);
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(param_1 + 0xf44) < 1) {
    *(undefined4 *)(param_1 + 0xf44) = 6;
  }
  *(int *)(param_1 + 0xf44) = *(int *)(param_1 + 0xf44) + -1;
  iVar4 = FUN_00a12210(*(undefined4 *)(&DAT_01640864 + *(int *)(param_1 + 0xf44) * 4));
  if (iVar4 != 0) {
    local_340 = *(undefined4 *)(iVar4 + 0x40);
    local_33c = *(undefined4 *)(iVar4 + 0x44);
    local_338 = *(undefined4 *)(iVar4 + 0x48);
    local_334 = *(undefined4 *)(iVar4 + 0x4c);
    local_380 = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                     *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                     *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
    local_37c = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                     *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                     *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
    fVar2 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                 *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                 *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
    local_368 = *(float *)(iVar4 + 0x28) / fVar2;
    local_364 = *(float *)(iVar4 + 0x38) / fVar2;
    fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar2));
    fVar8 = (float10)fpatan((float10)local_368,(float10)local_364);
    local_350 = (float)fVar8;
    local_34c = (float)fVar7;
    fVar7 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_37c,
                            (float10)*(float *)(iVar4 + 0x10) / (float10)local_380);
    local_348 = (float)fVar7;
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 0x26;
    local_330[1] = 0x30330;
    puVar5 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar5;
    local_31c = *(undefined4 *)(param_1 + 0x1630);
    local_314 = *(undefined4 *)(param_1 + 0x1634);
    local_318 = *(undefined4 *)(param_1 + 0x163c);
    local_310 = *(undefined1 *)(param_1 + 0x1638);
    local_30c = *(undefined4 *)(param_1 + 0x4f0);
    local_220 = 0x40;
    local_320 = 0x56;
    local_30f = 10;
    uVar6 = FUN_00a7c7f0();
    FUN_00a7c960(uVar6);
    local_294 = local_294 | 0x1000;
    local_330[0] = local_330[0] | 4;
    local_1b6 = *(undefined2 *)(iVar4 + 0xa0);
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    if (fVar7 < (float10)*(float *)(param_1 + 0x15d8)) {
      local_50 = 0;
    }
    iVar4 = *(int *)(param_1 + 0xa84);
    local_380 = *(float *)(iVar4 + 0x40);
    local_37c = *(float *)(iVar4 + 0x44);
    local_378 = *(float *)(iVar4 + 0x48);
    local_374 = *(float *)(iVar4 + 0x4c);
    local_1bc = FUN_00ac45b0();
    local_1b0 = 0;
    local_1ac = 0;
    local_1b8 = 0;
    local_1a8 = 0;
    local_1a4 = local_344;
    fVar2 = *(float *)(param_1 + 0xa90);
    if (!NAN(fVar2) && 1600.0 < fVar2 != (fVar2 == 1600.0)) {
      local_360 = *(float *)(param_1 + 0x40) - local_380;
      local_35c = *(float *)(param_1 + 0x44) - local_37c;
      local_358 = *(float *)(param_1 + 0x48) - local_378;
      local_354 = *(float *)(param_1 + 0x4c) - local_374;
      fVar2 = local_358 * local_358 + local_35c * local_35c + local_360 * local_360;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_360,&local_360);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_360 = 0.0;
        local_35c = 1.0;
        local_358 = 0.0;
      }
      fVar7 = (float10)FUN_00dde300(0,0x41200000);
      fVar7 = fVar7 + (float10)5.0;
      local_380 = (float)((float10)local_360 * fVar7 + (float10)local_380);
      local_37c = (float)((float10)local_35c * fVar7 + (float10)local_37c);
      local_378 = (float)((float10)local_358 * fVar7 + (float10)local_378);
      local_374 = (float)((float10)local_354 * fVar7 + (float10)local_374);
    }
    fVar7 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
    local_380 = (float)(fVar7 + (float10)local_380);
    fVar7 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
    local_378 = (float)(fVar7 + (float10)local_378);
    sVar3 = FUN_00dde2d0(0,3);
    if (sVar3 != 0) {
      fVar7 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
      local_380 = (float)(fVar7 + (float10)local_380);
      fVar7 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
      local_378 = (float)(fVar7 + (float10)local_378);
    }
    FUN_00416e30(&local_340,&local_380,&local_350,0x3dcccccd,0x41f00000);
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
    iVar4 = *(int *)(&DAT_0164087c + *(int *)(param_1 + 0xf44) * 4);
    if (((-1 < iVar4) && (iVar4 < *(short *)(param_1 + 0x324))) &&
       (iVar4 = iVar4 * 0x70 + *(int *)(param_1 + 800), iVar4 != 0)) {
      puVar1 = (uint *)(iVar4 + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  return;
}

// 00503800  FUN_00503800  size=1428  [between]
void __fastcall FUN_00503800(int param_1)

{
  uint *puVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  undefined *puVar16;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  uint local_330 [4];
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined2 uStack_1b8;
  undefined2 local_1b6;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  
  if ((((*(int *)(param_1 + 0xf44) < 6) &&
       (iVar10 = *(int *)(&DAT_016408b4 + *(int *)(param_1 + 0xf44) * 4), -1 < iVar10)) &&
      (iVar10 < *(short *)(param_1 + 0x324))) &&
     (iVar10 = iVar10 * 0x70 + *(int *)(param_1 + 800), iVar10 != 0)) {
    puVar1 = (uint *)(iVar10 + 0x38);
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(param_1 + 0xf44) < 1) {
    *(undefined4 *)(param_1 + 0xf44) = 6;
  }
  *(int *)(param_1 + 0xf44) = *(int *)(param_1 + 0xf44) + -1;
  iVar10 = FUN_00a12210(*(undefined4 *)(&DAT_0164089c + *(int *)(param_1 + 0xf44) * 4));
  if (iVar10 == 0) {
    return;
  }
  local_340 = *(undefined4 *)(iVar10 + 0x40);
  local_33c = *(undefined4 *)(iVar10 + 0x44);
  local_338 = *(undefined4 *)(iVar10 + 0x48);
  local_334 = *(undefined4 *)(iVar10 + 0x4c);
  local_380 = SQRT(*(float *)(iVar10 + 0x14) * *(float *)(iVar10 + 0x14) +
                   *(float *)(iVar10 + 0x10) * *(float *)(iVar10 + 0x10) +
                   *(float *)(iVar10 + 0x18) * *(float *)(iVar10 + 0x18));
  local_37c = SQRT(*(float *)(iVar10 + 0x20) * *(float *)(iVar10 + 0x20) +
                   *(float *)(iVar10 + 0x24) * *(float *)(iVar10 + 0x24) +
                   *(float *)(iVar10 + 0x28) * *(float *)(iVar10 + 0x28));
  fVar4 = SQRT(*(float *)(iVar10 + 0x38) * *(float *)(iVar10 + 0x38) +
               *(float *)(iVar10 + 0x34) * *(float *)(iVar10 + 0x34) +
               *(float *)(iVar10 + 0x30) * *(float *)(iVar10 + 0x30));
  local_364 = *(float *)(iVar10 + 0x28) / fVar4;
  fVar2 = *(float *)(iVar10 + 0x38);
  fVar14 = (float10)FUN_00ddbaa0(-(*(float *)(iVar10 + 0x18) / fVar4));
  fVar15 = (float10)fpatan((float10)local_364,(float10)(fVar2 / fVar4));
  local_350 = (float)fVar15;
  local_34c = (float)fVar14;
  fVar14 = (float10)fpatan((float10)*(float *)(iVar10 + 0x14) / (float10)local_37c,
                           (float10)*(float *)(iVar10 + 0x10) / (float10)local_380);
  local_348 = (float)fVar14;
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  local_320 = 0x56;
  local_21c = 0x27;
  local_330[1] = 0x30330;
  puVar11 = (undefined4 *)FUN_009f8b60();
  local_1c0 = *puVar11;
  local_30c = *(undefined4 *)(param_1 + 0x4f0);
  local_220 = 0x40;
  local_31c = 10;
  local_314 = 0x1e;
  local_318 = 0x96;
  local_310 = 0xa0a;
  uVar12 = FUN_00a7c7f0();
  FUN_00a7c960(uVar12);
  local_330[0] = local_330[0] | 4;
  piVar3 = *(int **)(param_1 + 0xa84);
  local_1b6 = *(undefined2 *)(iVar10 + 0xa0);
  local_380 = (float)piVar3[0x10];
  bVar9 = false;
  local_37c = (float)piVar3[0x11];
  local_378 = (float)piVar3[0x12];
  local_374 = (float)piVar3[0x13];
  if (piVar3 == (int *)0x0) goto LAB_00503b4f;
  puVar16 = &DAT_01be9db8;
  (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
  iVar13 = FUN_00dd6d70(puVar16);
  if (iVar13 == 0) goto LAB_00503b4f;
  iVar13 = FUN_00a8cab0();
  if (iVar13 == 0x3e) {
LAB_00503a66:
    bVar9 = true;
  }
  else {
    iVar13 = FUN_00a8cab0();
    bVar9 = false;
    if (iVar13 == 0x3d) goto LAB_00503a66;
  }
  if (((piVar3[0x998] != 0) && (!bVar9)) &&
     (fVar2 = local_380 - *(float *)(iVar10 + 0x40), fVar4 = local_378 - *(float *)(iVar10 + 0x48),
     fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2), 25.0 < fVar2)) {
    fVar8 = fVar2 * 3.030303 * 0.016666668 * 0.75;
    fVar6 = (float)piVar3[0x14] - (float)piVar3[0x240];
    fVar4 = (float)piVar3[0x16] - (float)piVar3[0x242];
    fVar2 = (float)piVar3[0x17] - (float)piVar3[0x243];
    fVar7 = 0.0;
    if (0.0 < (float)piVar3[0x244]) {
      fVar5 = 60.0 / (float)piVar3[0x244];
      fVar6 = fVar6 * fVar5;
      fVar7 = fVar5 * 0.0;
      fVar4 = fVar4 * fVar5;
      fVar2 = fVar2 * fVar5;
    }
    local_380 = fVar6 * fVar8 + local_380;
    local_37c = fVar7 * fVar8 + local_37c;
    local_378 = fVar4 * fVar8 + local_378;
    local_374 = fVar2 * fVar8 + local_374;
  }
LAB_00503b4f:
  if ((*(uint *)(param_1 + 0xecc) & 0x2000000) == 0) {
    uStack_1bc = FUN_00ac45b0();
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uStack_1b8 = 0;
    uStack_1a4 = uStack_344;
  }
  fVar2 = *(float *)(param_1 + 0xa90);
  if (!NAN(fVar2) && 1600.0 < fVar2 != (fVar2 == 1600.0)) {
    fStack_360 = *(float *)(param_1 + 0x40) - local_380;
    fStack_35c = *(float *)(param_1 + 0x44) - local_37c;
    fStack_358 = *(float *)(param_1 + 0x48) - local_378;
    fStack_354 = *(float *)(param_1 + 0x4c) - local_374;
    fVar2 = fStack_358 * fStack_358 + fStack_360 * fStack_360 + fStack_35c * fStack_35c;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_360,&fStack_360);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_360 = 0.0;
      fStack_35c = 1.0;
      fStack_358 = 0.0;
    }
    fVar14 = (float10)FUN_00dde300(0,0x40a00000);
    fVar14 = fVar14 + (float10)5.0;
    local_380 = (float)((float10)fStack_360 * fVar14 + (float10)local_380);
    local_37c = (float)((float10)fStack_35c * fVar14 + (float10)local_37c);
    local_378 = (float)((float10)fStack_358 * fVar14 + (float10)local_378);
    local_374 = (float)((float10)fStack_354 * fVar14 + (float10)local_374);
  }
  fVar2 = 1.0;
  local_364 = 1.0;
  if (bVar9) {
    fVar2 = 0.75;
    local_364 = 0.75;
  }
  fVar14 = (float10)FUN_00dde300(-fVar2,fVar2);
  local_380 = (float)(fVar14 + (float10)local_380);
  fVar14 = (float10)FUN_00dde300(-fVar2,local_364);
  local_378 = (float)(fVar14 + (float10)local_378);
  FUN_00416e30(&local_340,&local_380,&local_350,0x3ea8f5c3,0x44480000);
  iVar10 = FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
  if (iVar10 != 0) {
    *(undefined4 *)(iVar10 + 0x1108) = *(undefined4 *)(param_1 + 0xef4);
  }
  iVar10 = *(int *)(&DAT_016408b4 + *(int *)(param_1 + 0xf44) * 4);
  if (((-1 < iVar10) && (iVar10 < *(short *)(param_1 + 0x324))) &&
     (iVar10 = iVar10 * 0x70 + *(int *)(param_1 + 800), iVar10 != 0)) {
    puVar1 = (uint *)(iVar10 + 0x38);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return;
}

// 00503DA0  FUN_00503da0  size=635  [between]
void __thiscall FUN_00503da0(int param_1,float *param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  float local_340;
  float local_33c;
  float local_338;
  uint local_330 [4];
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined2 local_1b6;
  
  if ((((*(int *)(param_1 + 0xf44) < 6) &&
       (iVar5 = *(int *)(&DAT_016408e4 + *(int *)(param_1 + 0xf44) * 4), -1 < iVar5)) &&
      (iVar5 < *(short *)(param_1 + 0x324))) &&
     (iVar5 = iVar5 * 0x70 + *(int *)(param_1 + 800), iVar5 != 0)) {
    puVar1 = (uint *)(iVar5 + 0x38);
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(param_1 + 0xf44) < 1) {
    *(undefined4 *)(param_1 + 0xf44) = 6;
  }
  *(int *)(param_1 + 0xf44) = *(int *)(param_1 + 0xf44) + -1;
  iVar5 = FUN_00a12210(*(undefined4 *)(&DAT_016408cc + *(int *)(param_1 + 0xf44) * 4));
  if (iVar5 != 0) {
    local_350 = *(undefined4 *)(iVar5 + 0x40);
    local_34c = *(undefined4 *)(iVar5 + 0x44);
    local_348 = *(undefined4 *)(iVar5 + 0x48);
    local_344 = *(undefined4 *)(iVar5 + 0x4c);
    local_360 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                     *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                     *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
    local_35c = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                     *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                     *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
    fVar4 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                 *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                 *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
    fVar2 = *(float *)(iVar5 + 0x28);
    fVar3 = *(float *)(iVar5 + 0x38);
    fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar4));
    fVar9 = (float10)fpatan((float10)(fVar2 / fVar4),(float10)(fVar3 / fVar4));
    local_340 = (float)fVar9;
    local_33c = (float)fVar8;
    fVar8 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)local_35c,
                            (float10)*(float *)(iVar5 + 0x10) / (float10)local_360);
    local_338 = (float)fVar8;
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_320 = 0x56;
    local_21c = 0x28;
    local_330[1] = 0x30330;
    puVar6 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar6;
    local_30c = *(undefined4 *)(param_1 + 0x4f0);
    local_220 = 0x40;
    local_31c = 300;
    local_314 = 0x1e;
    local_318 = 0x32;
    local_310 = 0xa0a;
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    local_360 = *param_2;
    local_330[0] = local_330[0] | 4;
    local_1b6 = *(undefined2 *)(iVar5 + 0xa0);
    local_35c = param_2[1];
    local_358 = param_2[2];
    local_354 = param_2[3];
    FUN_00416e30(&local_350,&local_360,&local_340,0x3dcccccd,0x42c80000);
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
    iVar5 = *(int *)(&DAT_016408e4 + *(int *)(param_1 + 0xf44) * 4);
    if (((-1 < iVar5) && (iVar5 < *(short *)(param_1 + 0x324))) &&
       (iVar5 = iVar5 * 0x70 + *(int *)(param_1 + 800), iVar5 != 0)) {
      puVar1 = (uint *)(iVar5 + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  return;
}

// 00504020  FUN_00504020  size=1200  [between]
void __fastcall FUN_00504020(int param_1)

{
  uint *puVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  float local_340;
  float local_33c;
  float local_338;
  uint local_330 [5];
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  
  if ((((*(int *)(param_1 + 0xf44) < 6) &&
       (iVar4 = *(int *)(&DAT_01640914 + *(int *)(param_1 + 0xf44) * 4), -1 < iVar4)) &&
      (iVar4 < *(short *)(param_1 + 0x324))) &&
     (iVar4 = iVar4 * 0x70 + *(int *)(param_1 + 800), iVar4 != 0)) {
    puVar1 = (uint *)(iVar4 + 0x38);
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(param_1 + 0xf44) < 1) {
    *(undefined4 *)(param_1 + 0xf44) = 6;
  }
  *(int *)(param_1 + 0xf44) = *(int *)(param_1 + 0xf44) + -1;
  iVar4 = FUN_00a12210(*(undefined4 *)(&DAT_016408fc + *(int *)(param_1 + 0xf44) * 4));
  if (iVar4 != 0) {
    local_350 = *(undefined4 *)(iVar4 + 0x40);
    local_34c = *(undefined4 *)(iVar4 + 0x44);
    local_348 = *(undefined4 *)(iVar4 + 0x48);
    local_344 = *(undefined4 *)(iVar4 + 0x4c);
    local_380 = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                     *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                     *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
    local_37c = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                     *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                     *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
    fVar2 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                 *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                 *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
    local_368 = *(float *)(iVar4 + 0x28) / fVar2;
    local_364 = *(float *)(iVar4 + 0x38) / fVar2;
    fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar2));
    fVar8 = (float10)fpatan((float10)local_368,(float10)local_364);
    local_340 = (float)fVar8;
    local_33c = (float)fVar7;
    fVar7 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_37c,
                            (float10)*(float *)(iVar4 + 0x10) / (float10)local_380);
    local_338 = (float)fVar7;
    if (fVar8 < (float10)0) {
      local_340 = 0.08726646;
    }
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 0x27;
    local_330[1] = 0x30330;
    puVar5 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar5;
    local_30c = *(undefined4 *)(param_1 + 0x4f0);
    local_220 = 0x40;
    local_31c = 100;
    local_314 = 0x1e;
    local_318 = 0x1c2;
    local_310 = 0xa0a;
    uVar6 = FUN_00a7c7f0();
    FUN_00a7c960(uVar6);
    local_330[0] = local_330[0] | 4;
    local_1b6 = *(undefined2 *)(iVar4 + 0xa0);
    uVar6 = FUN_00a81330();
    iVar4 = FUN_00a7c8a0();
    local_380 = *(float *)(iVar4 + 0x40);
    local_378 = *(float *)(iVar4 + 0x48);
    local_374 = *(float *)(iVar4 + 0x4c);
    local_1b8 = 0xffff;
    local_37c = *(float *)(iVar4 + 0x44) - 1.0;
    local_1b0 = 0;
    local_1ac = 0xbf800000;
    local_1a8 = 0;
    local_1a4 = local_344;
    fVar2 = *(float *)(param_1 + 0xa90);
    local_1bc = uVar6;
    if (!NAN(fVar2) && 1600.0 < fVar2 != (fVar2 == 1600.0)) {
      local_360 = *(float *)(param_1 + 0x40) - local_380;
      local_35c = *(float *)(param_1 + 0x44) - local_37c;
      local_358 = *(float *)(param_1 + 0x48) - local_378;
      local_354 = *(float *)(param_1 + 0x4c) - local_374;
      fVar2 = local_358 * local_358 + local_360 * local_360 + local_35c * local_35c;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_360,&local_360);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_360 = 0.0;
        local_35c = 1.0;
        local_358 = 0.0;
      }
      fVar7 = (float10)FUN_00dde300(0,0x41200000);
      fVar7 = fVar7 + (float10)5.0;
      local_380 = (float)((float10)local_360 * fVar7 + (float10)local_380);
      local_37c = (float)((float10)local_35c * fVar7 + (float10)local_37c);
      local_378 = (float)((float10)local_358 * fVar7 + (float10)local_378);
      local_374 = (float)((float10)local_354 * fVar7 + (float10)local_374);
    }
    fVar7 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
    local_380 = (float)(fVar7 + (float10)local_380);
    fVar7 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
    local_378 = (float)(fVar7 + (float10)local_378);
    sVar3 = FUN_00dde2d0(0,3);
    if (sVar3 != 0) {
      fVar7 = (float10)FUN_00dde300(0xc0000000,0x40000000);
      local_380 = (float)(fVar7 + (float10)local_380);
      fVar7 = (float10)FUN_00dde300(0xc0000000,0x40000000);
      local_378 = (float)(fVar7 + (float10)local_378);
    }
    FUN_00416e30(&local_350,&local_380,&local_340,0x3f000000,0x44480000);
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
    iVar4 = *(int *)(&DAT_01640914 + *(int *)(param_1 + 0xf44) * 4);
    if (((-1 < iVar4) && (iVar4 < *(short *)(param_1 + 0x324))) &&
       (iVar4 = iVar4 * 0x70 + *(int *)(param_1 + 800), iVar4 != 0)) {
      puVar1 = (uint *)(iVar4 + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  return;
}

// 005044D0  FUN_005044d0  size=1006  [between]
/* WARNING: Removing unreachable block (ram,0x00504561) */
/* WARNING: Removing unreachable block (ram,0x00504661) */

void __fastcall FUN_005044d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float *pfVar13;
  float fVar14;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  iVar4 = FUN_00a12210(4);
  iVar5 = FUN_00a12210(0);
  if (iVar4 == 0) {
    return;
  }
  if (iVar5 == 0) {
    return;
  }
  local_5c = *(float *)(iVar5 + 0x40) - *(float *)(iVar4 + 0x40);
  local_58 = *(float *)(iVar5 + 0x44) - *(float *)(iVar4 + 0x44);
  local_54 = *(float *)(iVar5 + 0x48) - *(float *)(iVar4 + 0x48);
  fVar14 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
  if (fVar14 < 0.0 != (fVar14 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0.0;
  }
  pfVar13 = &local_5c;
  D3DXVec3Normalize(pfVar13,pfVar13);
  fVar14 = 0.04;
  if (*(int *)(param_1 + 0x4a0) == 5) {
    fVar14 = 0.018;
  }
  FID_conflict__memcpy(&local_58,(void *)(param_1 + 0x10),0x40);
  fVar3 = fStack_50 * local_5c + local_58 * fStack_64 + local_54 * fStack_60;
  fVar2 = fStack_40 * local_5c + fStack_48 * fStack_64 + fStack_44 * fStack_60;
  local_5c = fStack_34 * fStack_60 + fStack_38 * fStack_64 + fStack_30 * local_5c;
  fVar1 = local_5c * local_5c + fVar3 * fVar3 + fVar2 * fVar2;
  fStack_64 = fVar3;
  fStack_60 = fVar2;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_64 = 0.0;
    fStack_60 = 1.0;
    local_5c = 0.0;
  }
  D3DXVec3Normalize(&fStack_64,&fStack_64);
  fVar6 = (float10)fStack_68;
  fVar7 = (float10)fVar14;
  fVar12 = (float10)0;
  fVar8 = (float10)fStack_64;
  fVar11 = (float10)fpatan(fVar7,fVar8);
  *(float *)(param_1 + 0xf24) = (float)fVar11;
  fVar9 = (float10)-1.0471976;
  fVar10 = (float10)1.0471976;
  if ((fVar9 < fVar11) && (fVar9 = fVar11, fVar10 < fVar11)) {
    fVar9 = fVar10;
  }
  *(float *)(param_1 + 0xf24) = (float)fVar9;
  if ((char)*(uint *)(param_1 + 0xecc) < '\0') {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 2;
    fVar14 = (float)(100 - *(int *)(param_1 + 0xf3c)) * 0.01;
    if (!NAN(fVar14) && 0.95 < fVar14 != (fVar14 == 0.95)) {
      fVar12 = (float10)fpatan(fVar6,SQRT(fVar7 * fVar7 + fVar8 * fVar8));
      *(float *)(param_1 + 0xf34) = (float)-fVar12;
    }
    fVar1 = *(float *)(param_1 + 0xf34) - 0.05235988;
    if (fVar1 <= 0.05235988) {
      fVar1 = 0.05235988;
    }
    fVar1 = fVar14 * fVar14 * 0.34906584 + fVar1;
    *(float *)(param_1 + 0xf28) = fVar1;
    fVar14 = *(float *)(param_1 + 0xf30);
    fVar12 = (float10)FUN_00ddba30(fVar1 - fVar14);
    fVar12 = ((float10)(float)pfVar13 + (float10)(float)pfVar13) * fVar12;
  }
  else {
    fVar11 = (float10)fpatan(fVar6,SQRT(fVar7 * fVar7 + fVar8 * fVar8));
    fVar11 = -fVar11;
    fVar9 = fVar12;
    if ((fVar12 < fVar11) && (fVar9 = fVar11, fVar10 < fVar11)) {
      fVar9 = fVar10;
    }
    *(float *)(param_1 + 0xf28) = (float)fVar9;
    if (((fVar12 <= (fVar6 + fVar7) * fVar12 - (float10)1.0 * fVar8) || (fVar9 < fVar12)) ||
       ((*(uint *)(param_1 + 0xecc) & 1) == 0)) {
      if ((float10)*(float *)(param_1 + 0xf40) <= fVar12) {
        return;
      }
      fVar14 = *(float *)(param_1 + 0xf30);
      fVar12 = (float10)FUN_00ddba30(-fVar14);
      fVar12 = (float10)FUN_00ddba30((float)(fVar12 * (float10)(float)pfVar13 + (float10)fVar14));
      *(float *)(param_1 + 0xf30) = (float)fVar12;
      fVar14 = *(float *)(param_1 + 0xf2c);
      fVar1 = -fVar14;
      goto LAB_00504897;
    }
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 2;
    fVar14 = *(float *)(param_1 + 0xf30);
    fVar12 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xf28) - fVar14);
    fVar12 = fVar12 * (float10)(float)pfVar13;
  }
  fVar12 = (float10)FUN_00ddba30((float)(fVar12 + (float10)fVar14));
  *(float *)(param_1 + 0xf30) = (float)fVar12;
  fVar14 = *(float *)(param_1 + 0xf2c);
  fVar1 = *(float *)(param_1 + 0xf24) - fVar14;
LAB_00504897:
  fVar12 = (float10)FUN_00ddba30(fVar1);
  fVar12 = (float10)FUN_00ddba30((float)(fVar12 * (float10)(float)pfVar13 + (float10)fVar14));
  *(float *)(param_1 + 0xf2c) = (float)fVar12;
  return;
}

// 00504970  FUN_00504970  size=1400  [between]
void __fastcall FUN_00504970(int *param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
    fVar1 = (float)param_1[0x10] - *(float *)(param_1[0x2a1] + 0x40);
    fVar2 = (float)param_1[0x12] - *(float *)(param_1[0x2a1] + 0x48);
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    fVar2 = fVar1 * 0.015384615;
    param_1[0x591] = (int)fVar2;
    if (0.15 < fVar2) {
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.15;
    }
    param_1[0x591] = (int)fVar2;
    if (fVar1 < 8.0) {
      param_1[0x591] = 0x3e19999a;
    }
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    param_1[0x592] = 0x3e99999a;
    FUN_004fa3b0(0x10,0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x593] = 0;
    param_1[0x595] = 0x3da0d97c;
    if ((param_1[0x3b3] & 0x8000U) != 0) {
      param_1[0x515] = 0x3e19999a;
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00504a90;
  case 1:
LAB_00504a90:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 + (float10)(float)param_1[0x244]);
    fVar6 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar1 + (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar6 = (float10)0.5 + fVar6 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar6;
    param_1[0x590] =
         (int)(float)(fVar6 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    if (param_1[0x2a1] != 0) {
      fVar6 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      FUN_004fa620((float)fVar6,0x3d4ccccd,0x3c8efa35);
    }
    piVar4 = (int *)FUN_00a8b8a0(local_40,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar4;
    param_1[0x3f5] = piVar4[1];
    param_1[0x3f6] = piVar4[2];
    param_1[0x3f7] = piVar4[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    FUN_00a947e0(0,(float)param_1[0x594] * (float)param_1[0x591] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x593];
    if (!NAN(fVar1) && 40.0 < fVar1 != (fVar1 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_00a947e0(0,(float)param_1[0x515] * (float)param_1[0x591],0,0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar3 = (int *)FUN_00a8b8a0(local_30,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar3;
    iVar5 = 0;
    piVar4 = param_1 + 0x40e;
    param_1[0x3f5] = piVar3[1];
    param_1[0x3f6] = piVar3[2];
    param_1[0x3f7] = piVar3[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    if (*piVar4 != 0) {
      iVar5 = FUN_00907640(piVar4,0,0);
    }
    local_50 = (float)param_1[0x3f4] * 14.0;
    local_4c = (float)param_1[0x3f5] * 14.0;
    local_48 = (float)param_1[0x3f6] * 14.0;
    local_44 = (float)param_1[0x3f7] * 14.0;
    FUN_00502580(piVar4,&local_50);
    if (((iVar5 != 0) ||
        (fVar6 = (float10)FUN_00501cb0(), (float10)(float)param_1[0x2a4] < fVar6 * (float10)2.25))
       || (iVar5 = FUN_004fe4f0(0x41200000), iVar5 == 0)) {
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      FUN_00a947e0(0,(float)param_1[0x591] * (float)param_1[0x515],0,0);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 - (float10)(float)param_1[0x244]);
    fVar6 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar1 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar6 = (float10)0.5 + fVar6 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar6;
    param_1[0x590] =
         (int)(float)(fVar6 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar4 = (int *)FUN_00a8b8a0(local_20,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar4;
    param_1[0x3f5] = piVar4[1];
    param_1[0x3f6] = piVar4[2];
    param_1[0x3f7] = piVar4[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    FUN_00a947e0(0,(float)param_1[0x594] * (float)param_1[0x591] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00504F00  FUN_00504f00  size=1645  [between]
void __fastcall FUN_00504f00(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int *piVar4;
  float *pfVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x591] = 0x3f800000;
    if (param_1[0x571] != 0) {
      param_1[0x591] = 0x3f19999a;
    }
    if ((param_1[0x3b3] & 0x8000U) != 0) {
      param_1[0x591] = 0x3f333333;
      param_1[0x515] = 0x3e19999a;
    }
    param_1[0x596] = 0;
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    param_1[0x592] = 0x3e888872;
    FUN_004fa3b0(0x19,0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x595] = 0x3da0d97c;
    param_1[0x593] = 0;
    param_1[0x596] = 0;
    if ((param_1[0x3b3] & 0x8000U) != 0) {
      param_1[0x515] = 0x3e19999a;
    }
    param_1[0x248] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3c6] = 0x3cf5c28f;
    goto LAB_00504ffb;
  case 1:
LAB_00504ffb:
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 + (float10)(float)param_1[0x244]);
    fVar9 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar2 + (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar9 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    param_1[0x590] =
         (int)(float)(fVar9 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    if (param_1[0x2a1] != 0) {
      fVar9 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      FUN_004fa620((float)fVar9,0x3d4ccccd,0x3c8efa35);
    }
    piVar7 = (int *)FUN_00a8b9b0(local_50,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar7;
    param_1[0x3f5] = piVar7[1];
    param_1[0x3f6] = piVar7[2];
    param_1[0x3f7] = piVar7[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    FUN_00a947e0(0,(float)param_1[0x594] * (float)param_1[0x591] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x593];
    if (!NAN(fVar2) && 40.0 < fVar2 != (fVar2 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_00a947e0(0,(float)param_1[0x591] * (float)param_1[0x515],0,0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004fdd80(0x3db851ec,0x3c8efa35);
    piVar4 = (int *)FUN_00a8b9b0(local_40,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar4;
    iVar8 = 0;
    piVar7 = param_1 + 0x40e;
    param_1[0x3f5] = piVar4[1];
    param_1[0x3f6] = piVar4[2];
    param_1[0x3f7] = piVar4[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    if (*piVar7 != 0) {
      iVar8 = FUN_00907640(piVar7,0,0);
    }
    local_60 = (float)param_1[0x3f4] * 10.0;
    local_5c = (float)param_1[0x3f5] * 10.0;
    local_58 = (float)param_1[0x3f6] * 10.0;
    local_54 = (float)param_1[0x3f7] * 10.0;
    FUN_00502580(piVar7,&local_60);
    fVar2 = (float)param_1[0x590] * (float)param_1[0x244] + (float)param_1[0x596];
    param_1[0x596] = (int)fVar2;
    if (param_1[0x571] == 0) {
      if ((iVar8 != 0) ||
         ((float)param_1[0x591] * 10.0 < fVar2 != ((float)param_1[0x591] * 10.0 == fVar2)))
      goto LAB_00505386;
      uVar6 = FUN_004fe6e0(0x41900000);
    }
    else {
      fVar2 = (float)param_1[0x2a4];
      fVar1 = (float)param_1[0x248];
      if (NAN(fVar2) || 400.0 < fVar2 == (fVar2 == 400.0)) {
        fVar2 = -fVar1;
      }
      else {
        fVar2 = 0.5 - fVar1;
      }
      param_1[0x248] = (int)(fVar2 * 0.1 + fVar1);
      pfVar5 = (float *)FUN_00a8b8a0(local_30,(float)param_1[0x590] * (float)param_1[0x244] *
                                              (float)param_1[0x248]);
      param_1[0x14] = (int)(*pfVar5 + (float)param_1[0x14]);
      param_1[0x15] = (int)(pfVar5[1] + (float)param_1[0x15]);
      param_1[0x16] = (int)(pfVar5[2] + (float)param_1[0x16]);
      param_1[0x17] = (int)(pfVar5[3] + (float)param_1[0x17]);
      if ((iVar8 != 0) || (iVar8 = FUN_004fe6e0(0x41000000), iVar8 == 0)) goto LAB_00505386;
      uVar6 = param_1[0x3b3] & 0x80000;
    }
    if (uVar6 == 0) {
LAB_00505386:
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      FUN_004fa450(param_1[0x591]);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 - (float10)(float)param_1[0x244]);
    fVar9 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar2 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar9 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    param_1[0x590] =
         (int)(float)(fVar9 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar7 = (int *)FUN_00a8b9b0(local_20,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar7;
    param_1[0x3f5] = piVar7[1];
    param_1[0x3f6] = piVar7[2];
    param_1[0x3f7] = piVar7[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    FUN_00a947e0(0,(float)param_1[0x594] * (float)param_1[0x591] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      if (param_1[0x571] == 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        if (((param_1[0x3b3] & 0x80000U) != 0) && (param_1[0x40b] != 0xb)) {
          FUN_00502030(0xb);
          return;
        }
        param_1[0x572] = 0;
        pcVar3 = *(code **)(*param_1 + 0x34c);
        param_1[0x571] = 0;
        (*pcVar3)();
      }
    }
    if ((param_1[0x3b3] & 0x8000U) == 0) {
      FUN_004fde50();
      return;
    }
  }
  return;
}

// 00505F70  FUN_00505f70  size=684  [between]
void __fastcall FUN_00505f70(int *param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
    param_1[0x591] = 0x3f266666;
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    param_1[0x592] = 0x3e19999a;
    FUN_005024e0();
    FUN_004fa3b0(0x13,0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
    param_1[0x593] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x595] = 0x3da0d97c;
  case 1:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar1);
    fVar2 = (float10)fcos((float10)3.1415927 -
                          ((float10)(float)param_1[0x244] + (float10)fVar1) *
                          (float10)(float)param_1[0x595]);
    fVar3 = (float10)0.5 + fVar2 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar3;
    fVar2 = fVar3 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar2;
    param_1[0x15] =
         (int)(float)((float10)(float)param_1[0x15] - fVar2 * (float10)(float)param_1[0x244]);
    FUN_00a947e0(0,(float)(fVar3 * (float10)(float)param_1[0x591] * (float10)(float)param_1[0x515]),
                 0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x593];
    if (!NAN(fVar1) && 40.0 < fVar1 != (fVar1 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_00a947e0(0,(float)param_1[0x515] * (float)param_1[0x591],0,0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x15] - (float)param_1[0x590] * (float)param_1[0x244];
    param_1[0x15] = (int)fVar1;
    if ((fVar1 - (float)param_1[0x3c1]) - (float)param_1[0x3bd] < 3.5) {
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      FUN_004fa450(param_1[0x591]);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 - (float10)(float)param_1[0x244]);
    fVar2 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar1 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar3 = (float10)0.5 + fVar2 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar3;
    fVar2 = (float10)(float)param_1[0x592] * fVar3 * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar2;
    param_1[0x15] =
         (int)(float)((float10)(float)param_1[0x15] - fVar2 * (float10)(float)param_1[0x244]);
    FUN_00a947e0(0,(float)(fVar3 * (float10)(float)param_1[0x591] * (float10)(float)param_1[0x515]),
                 0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00506218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00506230  FUN_00506230  size=1472  [between]
void __fastcall FUN_00506230(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  fVar1 = 1.0;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
    fVar2 = (float)param_1[0x10] - *(float *)(param_1[0x2a1] + 0x40);
    fVar3 = (float)param_1[0x12] - *(float *)(param_1[0x2a1] + 0x48);
    fVar2 = 20.0 - SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    fVar3 = fVar2 * 0.033333335;
    param_1[0x591] = (int)fVar3;
    fVar4 = 0.4;
    if ((fVar3 <= 0.4) || (fVar4 = fVar3, fVar3 <= 1.0)) {
      fVar1 = fVar4;
    }
    param_1[0x591] = (int)fVar1;
    if (fVar2 < 8.0) {
      param_1[0x591] = 0x3e19999a;
    }
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    param_1[0x592] = 0x3ec7ae15;
    FUN_004fa3b0(0x13,0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x595] = 0x3da0d97c;
    param_1[0x593] = 0;
    param_1[0x597] = 0x40200000;
    if ((param_1[0x3b3] & 0x8000U) != 0) {
      param_1[0x515] = 0x3e19999a;
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00506366;
  case 1:
LAB_00506366:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 + (float10)(float)param_1[0x244]);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar1 + (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar8 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar8;
    param_1[0x590] =
         (int)(float)(fVar8 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    if (param_1[0x2a1] != 0) {
      fVar8 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      FUN_004fa620((float)fVar8,0x3d4ccccd,0x3c8efa35);
    }
    piVar6 = (int *)FUN_00a8b8a0(local_40,(float)param_1[0x244] * (float)param_1[0x590]);
    param_1[0x3f4] = *piVar6;
    param_1[0x3f5] = piVar6[1];
    param_1[0x3f6] = piVar6[2];
    param_1[0x3f7] = piVar6[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    FUN_00a947e0(0,(float)param_1[0x594] * (float)param_1[0x591] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x593];
    if (!NAN(fVar1) && 40.0 < fVar1 != (fVar1 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_00a947e0(0,(float)param_1[0x591] * (float)param_1[0x515],0,0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar5 = (int *)FUN_00a8b8a0(local_30,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar5;
    iVar7 = 0;
    piVar6 = param_1 + 0x40e;
    param_1[0x3f5] = piVar5[1];
    param_1[0x3f6] = piVar5[2];
    param_1[0x3f7] = piVar5[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    param_1[0x3b3] = param_1[0x3b3] | 1;
    if (*piVar6 != 0) {
      iVar7 = FUN_00907640(piVar6,0,0);
    }
    local_50 = (float)param_1[0x3f4] * -14.0;
    local_4c = (float)param_1[0x3f5] * -14.0;
    local_48 = (float)param_1[0x3f6] * -14.0;
    local_44 = (float)param_1[0x3f7] * -14.0;
    FUN_00502580(piVar6,&local_50);
    fVar1 = (float)param_1[0x597] - (float)param_1[0x244] * 0.016666668;
    param_1[0x597] = (int)fVar1;
    if (((iVar7 != 0) || (fVar1 <= 0.0)) || (iVar7 = FUN_004fe460(0x41700000), iVar7 == 0)) {
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      FUN_00a947e0(0,(float)param_1[0x591] * (float)param_1[0x515],0,0);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 - (float10)(float)param_1[0x244]);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar1 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar8 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar8;
    param_1[0x590] =
         (int)(float)(fVar8 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar6 = (int *)FUN_00a8b8a0(local_20,(float)param_1[0x244] * (float)param_1[0x590]);
    param_1[0x3f4] = *piVar6;
    param_1[0x3f5] = piVar6[1];
    param_1[0x3f6] = piVar6[2];
    param_1[0x3f7] = piVar6[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    FUN_00a947e0(0,(float)param_1[0x594] * (float)param_1[0x591] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x3b3] = param_1[0x3b3] | 1;
    if ((float)param_1[0x593] <= 0.0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    if ((param_1[0x3b3] & 0x8000U) == 0) {
      FUN_004fde50();
      return;
    }
  }
  return;
}

// 00506D80  FUN_00506d80  size=996  [between]
void __fastcall FUN_00506d80(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float local_8;
  float local_4;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x591] = 0x3ecccccd;
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    FUN_004fa3b0(0x16,0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x593] = 0;
    param_1[0x595] = 0x3da0d97c;
  case 1:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar1);
    fVar4 = (float10)fcos((float10)3.1415927 -
                          ((float10)(float)param_1[0x244] + (float10)fVar1) *
                          (float10)(float)param_1[0x595]);
    fVar4 = (float10)0.5 + fVar4 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar4;
    param_1[0x590] =
         (int)(float)(fVar4 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    local_8 = 0.0;
    if ((param_1[0x3b3] & 0x800000U) == 0) {
      piVar2 = (int *)(param_1[0x2a1] + 0x40);
    }
    else {
      piVar2 = param_1 + 1000;
    }
    FUN_005022a0(&local_8,piVar2,0x3df5c28f,0x3d0efa35);
    FUN_00a947e0(0,(float)param_1[0x594] * (float)param_1[0x591] * local_8 * 28.64789 *
                   (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x593];
    if (!NAN(fVar1) && 40.0 < fVar1 != (fVar1 == 40.0)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
    }
    break;
  case 2:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    local_8 = 0.0;
    if ((param_1[0x3b3] & 0x800000U) == 0) {
      piVar2 = (int *)(param_1[0x2a1] + 0x40);
    }
    else {
      piVar2 = param_1 + 1000;
    }
    fVar4 = (float10)FUN_005022a0(&local_8,piVar2,0x3df5c28f,0x3d0efa35);
    local_4 = (float)fVar4;
    local_8 = local_8 * 28.64789;
    FUN_00a947e0(0,local_8 * (float)param_1[0x591] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = 0x3f800000;
    if (((ABS(local_4) < 0.08726646) || ((float)param_1[0x2a4] <= 100.0)) ||
       (iVar3 = FUN_004f9d10(0x42200000), iVar3 != 0)) {
      param_1[0x595] = 0x3d8efa35;
      param_1[0x593] = 0x42340000;
      param_1[0x591] = (int)(local_8 * (float)param_1[0x591]);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    param_1[0x593] = (int)((float)param_1[0x593] - (float)param_1[0x244]);
    if ((param_1[0x3b3] & 0x800000U) == 0) {
      FUN_004fdd80(0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    }
    else {
      FUN_004fdd50(param_1 + 1000,0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    }
    fVar4 = (float10)fcos((float10)3.1415927 -
                          (float10)(float)param_1[0x595] * (float10)(float)param_1[0x593]);
    fVar4 = (float10)0.5 + fVar4 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar4;
    FUN_00a947e0(0,(float)(fVar4 * (float10)(float)param_1[0x591] * (float10)(float)param_1[0x515]),
                 0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if (param_1[0x2a1] != 0) {
    fVar4 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar4));
    if ((ABS(fVar4) < (float10)0.43633232 != (ABS(fVar4) == (float10)0.43633232)) &&
       (param_1[0x40b] == 0x10)) {
      param_1[0x3b3] = param_1[0x3b3] | 1;
    }
  }
  return;
}

// 00507180  FUN_00507180  size=996  [between]
void __fastcall FUN_00507180(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float local_8;
  float local_4;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x591] = 0x3ecccccd;
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    FUN_004fa3b0(0x19,0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x593] = 0;
    param_1[0x595] = 0x3da0d97c;
  case 1:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar1);
    fVar4 = (float10)fcos((float10)3.1415927 -
                          ((float10)(float)param_1[0x244] + (float10)fVar1) *
                          (float10)(float)param_1[0x595]);
    fVar4 = (float10)0.5 + fVar4 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar4;
    param_1[0x590] =
         (int)(float)(fVar4 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    local_8 = 0.0;
    if ((param_1[0x3b3] & 0x800000U) == 0) {
      piVar2 = (int *)(param_1[0x2a1] + 0x40);
    }
    else {
      piVar2 = param_1 + 1000;
    }
    FUN_005022a0(&local_8,piVar2,0x3df5c28f,0x3d0efa35);
    FUN_00a947e0(0,(float)param_1[0x594] * (float)param_1[0x591] * local_8 * 28.64789 *
                   (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x593];
    if (!NAN(fVar1) && 40.0 < fVar1 != (fVar1 == 40.0)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
    }
    break;
  case 2:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    local_8 = 0.0;
    if ((param_1[0x3b3] & 0x800000U) == 0) {
      piVar2 = (int *)(param_1[0x2a1] + 0x40);
    }
    else {
      piVar2 = param_1 + 1000;
    }
    fVar4 = (float10)FUN_005022a0(&local_8,piVar2,0x3df5c28f,0x3d0efa35);
    local_4 = (float)fVar4;
    local_8 = local_8 * 28.64789;
    FUN_00a947e0(0,local_8 * (float)param_1[0x591] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = 0x3f800000;
    if (((ABS(local_4) < 0.08726646) || ((float)param_1[0x2a4] <= 100.0)) ||
       (iVar3 = FUN_004f9d10(0x42200000), iVar3 != 0)) {
      param_1[0x595] = 0x3d8efa35;
      param_1[0x593] = 0x42340000;
      param_1[0x591] = (int)(local_8 * (float)param_1[0x591]);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    param_1[0x593] = (int)((float)param_1[0x593] - (float)param_1[0x244]);
    if ((param_1[0x3b3] & 0x800000U) == 0) {
      FUN_004fdd80(0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    }
    else {
      FUN_004fdd50(param_1 + 1000,0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    }
    fVar4 = (float10)fcos((float10)3.1415927 -
                          (float10)(float)param_1[0x595] * (float10)(float)param_1[0x593]);
    fVar4 = (float10)0.5 + fVar4 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar4;
    FUN_00a947e0(0,(float)(fVar4 * (float10)(float)param_1[0x591] * (float10)(float)param_1[0x515]),
                 0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if (param_1[0x2a1] != 0) {
    fVar4 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar4));
    if ((ABS(fVar4) < (float10)0.43633232 != (ABS(fVar4) == (float10)0.43633232)) &&
       (param_1[0x40b] == 0x10)) {
      param_1[0x3b3] = param_1[0x3b3] | 1;
    }
  }
  return;
}

// 00507580  FUN_00507580  size=1084  [between]
void __fastcall FUN_00507580(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar3 = *(int *)(param_1 + 0x61c);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x920) = 0;
    iVar3 = FUN_00de4500("em0190_a100.mot");
    uVar2 = FUN_00de4500("em0190_a100_0_seq.bxm");
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_01640544,"em0190_a100.mot");
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    else {
      FUN_00ac45d0(iVar3,uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000,&DAT_0163d4bc);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  else if (iVar3 != 1) {
    if (iVar3 == 2) {
      fVar4 = (float10)FUN_00a92ff0();
      *(float *)(param_1 + 0x920) = (float)(fVar4 + (float10)*(float *)(param_1 + 0x920));
      FUN_00501cf0(&local_20,param_1,0);
      fVar1 = *(float *)(param_1 + 0x13f0);
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_20 * fVar1;
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fStack_1c * fVar1;
      *(float *)(param_1 + 0x58) = fStack_18 * fVar1 + *(float *)(param_1 + 0x58);
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fStack_14 * fVar1;
    }
    goto LAB_005076c8;
  }
  fVar4 = (float10)FUN_00a92ff0();
  *(float *)(param_1 + 0x920) = (float)(fVar4 + (float10)*(float *)(param_1 + 0x920));
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x13f0) = 0x3f800000;
    FUN_00a8cb60(2);
  }
LAB_005076c8:
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 300.0 < fVar1 != (fVar1 == 300.0)) && (*(float *)(param_1 + 0x920) < 302.0)) {
    local_20 = 0.1;
    local_28 = 0x3dcccccd;
    fStack_1c = 0.8;
    uStack_24 = 0x3f4ccccd;
    FUN_00dda3b0(0,&local_20,&local_28,100);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 410.0 < fVar1 != (fVar1 == 410.0)) && (*(float *)(param_1 + 0x920) < 412.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 450.0 < fVar1 != (fVar1 == 450.0)) && (*(float *)(param_1 + 0x920) < 452.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 490.0 < fVar1 != (fVar1 == 490.0)) && (*(float *)(param_1 + 0x920) < 492.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 500.0 < fVar1 != (fVar1 == 500.0)) && (*(float *)(param_1 + 0x920) < 502.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 528.0 < fVar1 != (fVar1 == 528.0)) && (*(float *)(param_1 + 0x920) < 530.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 540.0 < fVar1 != (fVar1 == 540.0)) && (*(float *)(param_1 + 0x920) < 542.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 590.0 < fVar1 != (fVar1 == 590.0)) && (*(float *)(param_1 + 0x920) < 592.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 670.0 < fVar1 != (fVar1 == 670.0)) && (*(float *)(param_1 + 0x920) < 672.0)) {
    FUN_00dda360(0,0x3f800000,0x3f800000,0x14);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 735.0 < fVar1 != (fVar1 == 735.0)) && (*(float *)(param_1 + 0x920) < 737.0)) {
    FUN_00dda360(0,0x3f000000,0x3f000000,10);
  }
  fVar1 = *(float *)(param_1 + 0x920);
  if ((!NAN(fVar1) && 860.0 < fVar1 != (fVar1 == 860.0)) && (*(float *)(param_1 + 0x920) < 862.0)) {
    local_28 = 0x3f4ccccd;
    uStack_24 = 0x3dcccccd;
    fStack_1c = 0.1;
    local_20 = 0.8;
    FUN_00dda3b0(0,&local_28,&local_20,100);
  }
  return;
}

// 005079C0  FUN_005079c0  size=272  [between]
void __fastcall FUN_005079c0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar3 = *(int *)(param_1 + 0x61c);
  if (iVar3 == 0) {
    iVar3 = FUN_00de4500("em0190_b100.mot");
    uVar2 = FUN_00de4500("em0190_b100_0_seq.bxm");
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_01640544,"em0190_b100.mot");
    }
    else {
      FUN_00ac45d0(iVar3,uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000,&DAT_016409ac);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_00501cf0(&local_20,param_1,0);
    fVar1 = *(float *)(param_1 + 0x13f0);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_20 * fVar1;
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + local_1c * fVar1;
    *(float *)(param_1 + 0x58) = local_18 * fVar1 + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + local_14 * fVar1;
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x13f0) = 0x3f800000;
    FUN_00a8cb60(2);
  }
  return;
}

// 00507B10  Em0190::vf150  size=106  [class]
void Em0190::vf150(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  switch(param_1) {
  case 0x51:
    FUN_00502030(0x1f);
    return;
  case 0x52:
    FUN_00502030(0x20);
    return;
  case 0x6a:
    FUN_00502030(7);
    return;
  case 0x6b:
    FUN_00502030(8);
  }
  return;
}

// 00507BB0  FUN_00507bb0  size=329  [callgraph]
void __fastcall FUN_00507bb0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    piVar3 = (int *)FUN_00a6e640();
    iVar4 = (**(code **)(*piVar3 + 0x84))(*(undefined4 *)(param_1 + 0xb9c));
    if (iVar4 != 0) {
      iVar5 = FUN_00957fd0((float *)(param_1 + 0x1000),*(undefined4 *)(iVar4 + 0x28),3);
      if (iVar5 != 0) {
        fVar1 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x1000);
        fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1008);
        if (*(int *)(param_1 + 0x1044) != iVar4) {
          *(int *)(param_1 + 0x1044) = iVar4;
          *(undefined4 *)(param_1 + 0x1010) = *(undefined4 *)(iVar4 + 0x28);
          *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfffdffff;
        }
        if (((*(uint *)(param_1 + 0xecc) & 0x20000) == 0) && (9.0 < fVar2 * fVar2 + fVar1 * fVar1))
        {
          FUN_00502030(0x1d);
          return;
        }
        *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x20000;
      }
      iVar4 = *(int *)(param_1 + 0xa84);
      uStack_24 = *(undefined4 *)(iVar4 + 0x40);
      uStack_20 = *(undefined4 *)(iVar4 + 0x44);
      uStack_1c = *(undefined4 *)(iVar4 + 0x48);
      uStack_18 = *(undefined4 *)(iVar4 + 0x4c);
      fVar6 = (float10)FUN_00a8ec30(&uStack_24);
      fVar6 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar6));
      if ((((ABS(fVar6) < (float10)0.2617994 != (ABS(fVar6) == (float10)0.2617994)) &&
           ((*(uint *)(param_1 + 0xecc) & 0x80000) == 0)) &&
          ((*(uint *)(param_1 + 0xecc) & 0x20000) != 0)) &&
         (ABS(*(float *)(param_1 + 0xfe4) - *(float *)(param_1 + 0x54)) < 10.0)) {
        FUN_00502030(0x1e);
      }
    }
  }
  return;
}

// 00507D00  FUN_00507d00  size=737  [callgraph]
void __fastcall FUN_00507d00(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfffffdff;
    uVar2 = 0x2e;
    if (0.5 < *(float *)(param_1 + 0xed0)) {
      uVar2 = 0xd;
    }
    FUN_00aa4080(uVar2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    if (*(int *)(param_1 + 0x1044) == 0) {
      *(undefined4 *)(param_1 + 0xfe0) = *(undefined4 *)(param_1 + 0xacc);
      *(undefined4 *)(param_1 + 0xfe4) = *(undefined4 *)(param_1 + 0xad0);
      *(undefined4 *)(param_1 + 0xfe8) = *(undefined4 *)(param_1 + 0xad4);
      *(undefined4 *)(param_1 + 0xfec) = 0x3f800000;
    }
    else {
      iVar3 = FUN_00957fd0((undefined4 *)(param_1 + 0x1000),
                           *(undefined4 *)(*(int *)(param_1 + 0x1044) + 0x28),3);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0xfe0) = *(undefined4 *)(param_1 + 0x1000);
        *(undefined4 *)(param_1 + 0xfe4) = *(undefined4 *)(param_1 + 0x1004);
        *(undefined4 *)(param_1 + 0xfe8) = *(undefined4 *)(param_1 + 0x1008);
        *(undefined4 *)(param_1 + 0xfec) = *(undefined4 *)(param_1 + 0x100c);
        *(float *)(param_1 + 0xfe4) = *(float *)(param_1 + 0xfe4) + 3.5;
      }
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x41f00000;
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0xa84);
  local_20 = *(undefined4 *)(iVar3 + 0x40);
  local_1c = *(undefined4 *)(iVar3 + 0x44);
  local_18 = *(undefined4 *)(iVar3 + 0x48);
  local_14 = *(undefined4 *)(iVar3 + 0x4c);
  if (*(int *)(param_1 + 0x1044) != 0) {
    FUN_00a6de50(&local_20);
  }
  fVar4 = (float10)FUN_00a8ec30(&local_20);
  fVar4 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar4));
  fVar4 = ABS(fVar4);
  if ((float10)1.0471976 < fVar4 == ((float10)1.0471976 == fVar4)) {
    if ((*(uint *)(param_1 + 0xecc) & 0x80000) == 0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x924);
    }
    *(float *)(param_1 + 0x924) = fVar1;
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if ((((fVar4 < (float10)0.17453292) && (fVar1 <= 0.0)) &&
        (iVar3 = FUN_004fb830(*(undefined4 *)(param_1 + 0xa84)), iVar3 == 0)) &&
       (iVar3 = FUN_00ac4770(), iVar3 == 0)) {
      *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 1;
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
      FUN_004fa620((float)fVar4,0x3d4ccccd,0x3c0efa35);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0xef4) + 4.0;
    if (*(float *)(param_1 + 0xfe4) < fVar1) {
      *(float *)(param_1 + 0xfe4) = fVar1;
    }
    fVar4 = (float10)FUN_00fdc1f0();
    fVar5 = ((float10)*(float *)(param_1 + 0xfe4) - (float10)*(float *)(param_1 + 0x54)) *
            ((float10)1 - fVar4);
    fVar4 = (float10)0.1;
    if ((fVar5 <= fVar4) && (fVar4 = (float10)-0.1, fVar4 <= fVar5)) {
      *(float *)(param_1 + 0x54) = (float)(fVar5 + (float10)*(float *)(param_1 + 0x54));
      return;
    }
    *(float *)(param_1 + 0x54) = (float)(fVar4 + (float10)*(float *)(param_1 + 0x54));
    return;
  }
  *(undefined4 *)(param_1 + 0x1030) = 0x1c;
  FUN_00502240(&local_20);
  return;
}

// 00507FF0  FUN_00507ff0  size=3639  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00507ff0(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float local_84;
  float fStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  iVar10 = 0;
  bVar4 = false;
  bVar5 = false;
  if ((param_1[0x2a1] == 0) ||
     ((iVar6 = FUN_00a8cab0(), iVar6 != 0x3e && (iVar6 = FUN_00a8cab0(), iVar6 != 0x3d)))) {
    piVar7 = (int *)FUN_00a6e640();
    iVar10 = (**(code **)(*piVar7 + 0x84))(param_1[0x2e7]);
    if (((param_1[0x3b3] & 0x20000U) == 0) || ((param_1[0x2a1] == 0 || (iVar10 == param_1[0x411]))))
    {
      if ((iVar10 != 0) && (iVar10 == param_1[0x411])) {
        param_1[0x3b3] = param_1[0x3b3] | 0x40000;
        bVar5 = true;
      }
    }
    else {
      iVar6 = FUN_004fb830(param_1[0x2a1]);
      if (iVar6 == 0) {
        param_1[0x3b3] = param_1[0x3b3] & 0xfffbffff;
        FUN_004fefb0();
      }
    }
  }
  if (((param_1[0x3b3] & 0x40000U) != 0) ||
     ((param_1[0x2a1] != 0 &&
      ((iVar6 = FUN_00a8cab0(), iVar6 == 0x3e || (iVar6 = FUN_00a8cab0(), iVar6 == 0x3d)))))) {
    bVar5 = true;
  }
  bVar3 = false;
  if (iVar10 == 0) {
    if ((param_1[0x2a1] == 0) ||
       ((iVar10 = FUN_00a8cab0(), iVar10 != 0x3e && (iVar10 = FUN_00a8cab0(), iVar10 != 0x3d)))) {
      param_1[0x411] = 0;
    }
  }
  else if ((iVar10 != param_1[0x411]) &&
          (iVar6 = FUN_00957fd0(&fStack_60,*(undefined4 *)(iVar10 + 0x28),3), iVar6 != 0)) {
    fStack_70 = fStack_60 - (float)param_1[0x10];
    fStack_6c = fStack_5c - (float)param_1[0x11];
    fStack_68 = fStack_58 - (float)param_1[0x12];
    fStack_64 = fStack_54 - (float)param_1[0x13];
    fVar2 = fStack_68 * fStack_68 + fStack_6c * fStack_6c + fStack_70 * fStack_70;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_70,&fStack_70);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_70 = 0.0;
      fStack_6c = 1.0;
      fStack_68 = 0.0;
    }
    if (param_1[0x251] == 0) {
      pfVar8 = (float *)FUN_00a925a0(auStack_50);
    }
    else {
      pfVar8 = (float *)FUN_00a8b8a0(auStack_50,0xbf800000);
    }
    fVar11 = (float10)fcos((float10)0.5235987901687622);
    if ((float10)pfVar8[2] * (float10)fStack_68 +
        (float10)pfVar8[1] * (float10)fStack_6c + (float10)*pfVar8 * (float10)fStack_70 <= fVar11) {
      bVar3 = true;
    }
    else {
      param_1[0x411] = iVar10;
      param_1[0x404] = *(int *)(iVar10 + 0x28);
      param_1[0x400] = (int)fStack_60;
      param_1[0x401] = (int)fStack_5c;
      param_1[0x402] = (int)fStack_58;
      param_1[0x403] = (int)fStack_54;
      param_1[0x3fb] = (int)fStack_54;
      param_1[0x3f8] = (int)fStack_60;
      param_1[0x3f9] = (int)fStack_5c;
      param_1[0x3fa] = (int)fStack_58;
    }
  }
  switch(param_1[0x187]) {
  case 0:
    param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
    param_1[0x3f8] = param_1[0x400];
    pfVar8 = (float *)(param_1 + 0x3f8);
    param_1[0x3f9] = param_1[0x401];
    param_1[0x3fa] = param_1[0x402];
    param_1[0x3fb] = param_1[0x403];
    param_1[0x3f9] = (int)((float)param_1[0x3f9] + 3.5);
    if (param_1[0x411] == 0) {
      (**(code **)(*param_1 + 0x34c))();
      break;
    }
    FUN_00a6de50(&fStack_60);
    iVar10 = FUN_004fa930(pfVar8,&fStack_60);
    param_1[0x251] = 0;
    if (iVar10 == 0) {
      param_1[0x251] = 1;
    }
    fVar11 = (float10)FUN_00a8ec30(pfVar8);
    if (param_1[0x251] == 1) {
      fVar11 = (float10)FUN_00ddba30((float)(fVar11 + (float10)3.1415927));
    }
    local_84 = (float)fVar11;
    iVar10 = (**(code **)(*param_1 + 0x84))();
    fVar11 = (float10)FUN_00ddba30(local_84 - *(float *)(iVar10 + 4));
    fVar2 = ((float)param_1[0x3fa] - (float)param_1[0x12]) *
            ((float)param_1[0x3fa] - (float)param_1[0x12]) +
            (*pfVar8 - (float)param_1[0x10]) * (*pfVar8 - (float)param_1[0x10]);
    if ((_DAT_01b34f04 & 1) == 0) {
      _DAT_01b34f04 = _DAT_01b34f04 | 1;
      _DAT_01b34f00 = 64.0;
    }
    if (((float10)1.3089969 < ABS(fVar11)) && (_DAT_01b34f00 < fVar2)) {
      iVar10 = param_1[0x186];
      FUN_00502030(0x23);
      param_1[0x40c] = iVar10;
      break;
    }
    if (fVar2 < _DAT_01b34f00 != (fVar2 == _DAT_01b34f00)) {
      FUN_00502030(0x1e);
      break;
    }
    param_1[0x24a] = 0x3dcccccd;
    fVar11 = (float10)FUN_0043f4d0(SQRT(((float)param_1[0x12] - (float)param_1[0x3fa]) *
                                        ((float)param_1[0x12] - (float)param_1[0x3fa]) +
                                        ((float)param_1[0x10] - *pfVar8) *
                                        ((float)param_1[0x10] - *pfVar8)) * 0.05,0,0x3f800000);
    param_1[0x591] = (int)(float)fVar11;
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    param_1[0x592] = 0x3e99999a;
    FUN_004fa3b0(*(undefined4 *)(&UNK_016409f0 + param_1[0x251] * 4),0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x593] = 0;
    param_1[0x187] = 1;
    param_1[0x595] = 0x3da0d97c;
    param_1[0x248] = 0;
    param_1[0x249] =
         (int)SQRT(((float)param_1[0x3fa] - (float)param_1[0x12]) *
                   ((float)param_1[0x3fa] - (float)param_1[0x12]) +
                   (*pfVar8 - (float)param_1[0x10]) * (*pfVar8 - (float)param_1[0x10]));
    param_1[0x407] = param_1[0x10];
    param_1[0x408] = param_1[0x11];
    param_1[0x409] = param_1[0x12];
  case 1:
    fVar11 = (float10)FUN_00a8ec30(param_1 + 0x3f8);
    if (param_1[0x251] == 1) {
      fVar11 = (float10)FUN_00ddba30((float)(fVar11 + (float10)3.1415927));
    }
    local_84 = (float)fVar11;
    fVar2 = (float)param_1[0x244];
    iVar10 = (**(code **)(*param_1 + 0x84))();
    fVar11 = (float10)FUN_00ddba30(local_84 - *(float *)(iVar10 + 4));
    fVar12 = (float10)FUN_00fdc1f0();
    fVar11 = ((float10)1 - fVar12) * (float10)(float)fVar11;
    fVar12 = (float10)(fVar2 * 0.02617994);
    if (fVar11 <= -fVar12) {
      fVar11 = -fVar12;
    }
    if (fVar12 < fVar11) {
      fVar11 = fVar12;
    }
    fVar11 = (float10)FUN_00ddba30((float)(fVar11 + (float10)(float)param_1[0x25]));
    param_1[0x25] = (int)(float)fVar11;
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 + (float10)(float)param_1[0x244]);
    fVar11 = (float10)fcos((float10)3.1415927 -
                           ((float10)fVar2 + (float10)(float)param_1[0x244]) *
                           (float10)(float)param_1[0x595]);
    fVar11 = (float10)0.5 + fVar11 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar11;
    fVar11 = fVar11 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar11;
    piVar7 = (int *)FUN_00a8b8a0(auStack_50,(float)(fVar11 * (float10)(float)param_1[0x244]));
    param_1[0x3f4] = *piVar7;
    param_1[0x3f5] = piVar7[1];
    param_1[0x3f6] = piVar7[2];
    param_1[0x3f7] = piVar7[3];
    if (param_1[0x251] == 0) {
      param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
      param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
      fVar2 = (float)param_1[0x17] + (float)param_1[0x3f7];
    }
    else {
      param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
      param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
      fVar2 = (float)param_1[0x17] - (float)param_1[0x3f7];
    }
    param_1[0x17] = (int)fVar2;
    FUN_00a947e0(0,(float)param_1[0x24a] * (float)param_1[0x594] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x593];
    if (!NAN(fVar2) && 40.0 < fVar2 != (fVar2 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_004fa450(param_1[0x24a]);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    pfVar8 = (float *)(param_1 + 0x3f8);
    fVar11 = (float10)FUN_00a8ec30(pfVar8);
    if (param_1[0x251] == 1) {
      fVar11 = (float10)FUN_00ddba30((float)(fVar11 + (float10)3.1415927));
    }
    fStack_7c = (float)fVar11;
    fVar2 = (float)param_1[0x244];
    iVar10 = (**(code **)(*param_1 + 0x84))();
    fVar11 = (float10)FUN_00ddba30(fStack_7c - *(float *)(iVar10 + 4));
    fVar12 = (float10)FUN_00fdc1f0();
    fVar11 = ((float10)1 - fVar12) * (float10)(float)fVar11;
    fVar12 = (float10)(fVar2 * 0.021816615);
    if (fVar11 <= -fVar12) {
      fVar11 = -fVar12;
    }
    if (fVar12 < fVar11) {
      fVar11 = fVar12;
    }
    fVar11 = (float10)FUN_00ddba30((float)(fVar11 + (float10)(float)param_1[0x25]));
    param_1[0x25] = (int)(float)fVar11;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    piVar7 = (int *)FUN_00a8b8a0(auStack_40,
                                 (float)param_1[0x590] * (float)param_1[0x244] *
                                 (float)param_1[0x591]);
    param_1[0x3f4] = *piVar7;
    param_1[0x3f5] = piVar7[1];
    param_1[0x3f6] = piVar7[2];
    param_1[0x3f7] = piVar7[3];
    param_1[0x3f5] = 0;
    if (param_1[0x251] == 0) {
      param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
      param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
      fVar2 = (float)param_1[0x17] + (float)param_1[0x3f7];
    }
    else {
      param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
      param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
      fVar2 = (float)param_1[0x17] - (float)param_1[0x3f7];
    }
    param_1[0x17] = (int)fVar2;
    fStack_60 = *pfVar8 - (float)param_1[0x407];
    fStack_58 = (float)param_1[0x3fa] - (float)param_1[0x409];
    fStack_5c = 0.0;
    fVar2 = fStack_60 * fStack_60 + fStack_58 * fStack_58;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_60,&fStack_60);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_60 = 0.0;
      fStack_5c = 1.0;
      fStack_58 = 0.0;
    }
    fVar2 = ((float)param_1[0x3fa] - (float)param_1[0x12]) * fStack_58 +
            fStack_5c * 0.0 + fStack_60 * (*pfVar8 - (float)param_1[0x10]);
    if (((bVar5) &&
        (ABS((float)param_1[0x3f9] - (float)param_1[0x15]) < (float)param_1[0x591] * 10.0)) &&
       ((fVar2 / (float)param_1[0x249] < 0.75 ||
        (iVar10 = FUN_004fb830(param_1[0x2a1]), iVar10 != 0)))) {
      iVar10 = param_1[0x2a1];
      fStack_70 = *(float *)(iVar10 + 0x40) - (float)param_1[0x10];
      fStack_6c = *(float *)(iVar10 + 0x44) - (float)param_1[0x11];
      fStack_68 = *(float *)(iVar10 + 0x48) - (float)param_1[0x12];
      fStack_64 = *(float *)(iVar10 + 0x4c) - (float)param_1[0x13];
      fVar1 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_70,&fStack_70);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_70 = 0.0;
        fStack_6c = 1.0;
        fStack_68 = 0.0;
      }
      pfVar8 = (float *)FUN_00a925a0(auStack_30);
      if (0.2 < pfVar8[2] * fStack_68 + fStack_70 * *pfVar8 + pfVar8[1] * fStack_6c) {
        bVar4 = true;
      }
    }
    if (5.0 <= fVar2 - 14.0) {
      fVar11 = (float10)FUN_00fdc1f0();
      fVar11 = fVar11 * (float10)(float)param_1[0x591];
      param_1[0x591] = (int)(float)fVar11;
      fVar12 = (float10)1.2;
      if (fVar12 < fVar11 != (fVar12 == fVar11)) {
        param_1[0x591] = (int)(float)fVar12;
      }
    }
    else if (1.0 < (float)param_1[0x591]) {
      fVar11 = (float10)FUN_00fdc1f0();
      fVar1 = (float)param_1[0x591];
      param_1[0x591] = (int)(float)(fVar11 * (float10)fVar1);
      if (fVar11 * (float10)fVar1 <= (float10)1) {
        param_1[0x591] = (int)(float)(float10)1;
      }
    }
    if ((bVar3) || (fVar2 < (float)param_1[0x591] * 14.0)) {
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      FUN_00a947e0(0,(float)param_1[0x515] * (float)param_1[0x24a],0,0);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 - (float10)(float)param_1[0x244]);
    fVar11 = (float10)fcos((float10)3.1415927 -
                           ((float10)fVar2 - (float10)(float)param_1[0x244]) *
                           (float10)(float)param_1[0x595]);
    fVar11 = (float10)0.5 + fVar11 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar11;
    param_1[0x590] =
         (int)(float)(fVar11 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar7 = (int *)FUN_00a8b8a0(auStack_20,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar7;
    param_1[0x3f5] = piVar7[1];
    param_1[0x3f6] = piVar7[2];
    param_1[0x3f7] = piVar7[3];
    param_1[0x3f5] = 0;
    if (param_1[0x251] == 0) {
      param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
      param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
      fVar2 = (float)param_1[0x17] + (float)param_1[0x3f7];
    }
    else {
      param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
      param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
      fVar2 = (float)param_1[0x17] - (float)param_1[0x3f7];
    }
    param_1[0x17] = (int)fVar2;
    FUN_00a947e0(0,(float)param_1[0x24a] * (float)param_1[0x594] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    bVar4 = bVar5;
    if ((float)param_1[0x593] <= 0.0) {
      param_1[0x3b3] = param_1[0x3b3] | 0x20000;
      if (bVar5) {
        FUN_00502030(0x1e);
        FUN_00a96030(0,0x3f800000);
      }
      else {
        (**(code **)(*param_1 + 0x34c))();
        FUN_00a96030(0,0x3f800000);
        param_1[0x411] = 0;
      }
    }
  }
  fVar11 = (float10)FUN_00fdc1f0();
  fVar12 = ((float10)(float)param_1[0x3f9] - (float10)(float)param_1[0x15]) * ((float10)1 - fVar11);
  fVar11 = (float10)0.1;
  if ((fVar12 <= fVar11) && (fVar11 = fVar12, fVar12 < (float10)-0.1)) {
    fVar11 = (float10)-0.1;
  }
  param_1[0x15] = (int)(float)(fVar11 + (float10)(float)param_1[0x15]);
  if ((bVar4) &&
     (fVar2 = (float)param_1[0x248], param_1[0x248] = (int)((float)param_1[0x244] + fVar2),
     20.0 < (float)param_1[0x244] + fVar2)) {
    param_1[0x248] = 0;
    uVar9 = DAT_01bea090 >> 0x19 & 1;
    if ((uVar9 == 0) || (param_1[0x57c] == 0)) {
      if (uVar9 == 0) {
        FUN_004fef20();
      }
      DAT_01bea090 = DAT_01bea090 | 0x2000001;
      param_1[0x3b3] = param_1[0x3b3] | 0x500000;
      param_1[0x57c] = 1;
    }
    FUN_00503800();
  }
  return;
}

// 00508E40  FUN_00508e40  size=2098  [callgraph]
void __fastcall FUN_00508e40(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x411] != 0) {
      pfVar1 = (float *)(param_1 + 0x400);
      iVar7 = FUN_00957fd0(pfVar1,*(undefined4 *)(param_1[0x411] + 0x28),3);
      if (iVar7 != 0) {
        if (param_1[0x411] != 0) {
          FUN_00a6de50(&local_60);
        }
        iVar7 = FUN_004fa760(pfVar1);
        param_1[0x250] = (-(uint)(iVar7 != 0) & 0xfffffffd) + 0x19;
        param_1[0x3f8] = (int)*pfVar1;
        param_1[0x3f9] = param_1[0x401];
        param_1[0x3fa] = param_1[0x402];
        param_1[0x3fb] = param_1[0x403];
        local_70 = local_60 - *pfVar1;
        local_6c = local_5c - (float)param_1[0x401];
        local_68 = local_58 - (float)param_1[0x402];
        local_64 = local_54 - (float)param_1[0x403];
        fVar4 = local_68 * local_68 + local_70 * local_70 + local_6c * local_6c;
        if (fVar4 < 0.0 == (fVar4 == 0.0)) {
          FUN_00ddf460(&local_70,&local_70);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_70 = 0.0;
          local_6c = 1.0;
          local_68 = 0.0;
        }
        iVar5 = 0x3f800000;
        fVar9 = (float10)fpatan((float10)local_70,(float10)local_68);
        param_1[0x248] = (int)(float)fVar9;
        if (iVar7 != 0) {
          iVar5 = -0x40800000;
        }
        param_1[0x249] = iVar5;
        uVar12 = 0x3f800000;
        uVar11 = 0x3e19999a;
        fVar9 = (float10)FUN_004fdc20(pfVar1,&local_60,0);
        fVar9 = (float10)FUN_0043f4d0((float)(fVar9 * (float10)0.0025000002),uVar11,uVar12);
        param_1[0x591] = (int)(float)fVar9;
        param_1[0x590] = 0;
        param_1[0x594] = 0;
        param_1[0x592] = 0x3e888872;
        FUN_004fa3b0(param_1[0x250],0x3e4ccccd,0,0xffffffff);
        RayCastManager::getWork(param_1 + 0x40e);
        param_1[0x595] = 0x3da0d97c;
        param_1[0x593] = 0;
        param_1[0x596] = 0;
        param_1[0x407] = param_1[0x10];
        param_1[0x408] = param_1[0x11];
        param_1[0x409] = param_1[0x12];
        param_1[0x187] = param_1[0x187] + 1;
        goto LAB_0050907e;
      }
    }
    (**(code **)(*param_1 + 0x34c))();
    break;
  case 1:
LAB_0050907e:
    fVar4 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar4);
    fVar9 = (float10)fcos((float10)3.1415927 -
                          ((float10)(float)param_1[0x244] + (float10)fVar4) *
                          (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar9 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    param_1[0x590] =
         (int)(float)(fVar9 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fa620(param_1[0x248],0x3d4ccccd,0x3c8efa35);
    piVar8 = (int *)FUN_00a8b9b0(local_40,(float)param_1[0x590] * (float)param_1[0x244] *
                                          (float)param_1[0x249]);
    param_1[0x3f4] = *piVar8;
    param_1[0x3f5] = piVar8[1];
    param_1[0x3f6] = piVar8[2];
    param_1[0x3f7] = piVar8[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    FUN_00a947e0(0,(float)param_1[0x591] * (float)param_1[0x594] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar4 = (float)param_1[0x593];
    if (!NAN(fVar4) && 40.0 < fVar4 != (fVar4 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_004fa450(param_1[0x591]);
      param_1[600] = param_1[0x14];
      param_1[0x259] = param_1[0x15];
      param_1[0x25a] = param_1[0x16];
      param_1[0x25b] = param_1[0x17];
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004fa620(param_1[0x248],0x3db851ec,0x3c8efa35);
    piVar6 = (int *)FUN_00a8b9b0(local_30,(float)param_1[0x590] * (float)param_1[0x244] *
                                          (float)param_1[0x249]);
    param_1[0x3f4] = *piVar6;
    piVar8 = param_1 + 0x40e;
    param_1[0x3f5] = piVar6[1];
    param_1[0x3f6] = piVar6[2];
    param_1[0x3f7] = piVar6[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    if (*piVar8 != 0) {
      FUN_00907640(piVar8,0,0);
    }
    local_54 = (float)param_1[0x249];
    local_60 = (float)param_1[0x3f4] * 10.0 * local_54;
    local_5c = (float)param_1[0x3f5] * 10.0 * local_54;
    local_58 = (float)param_1[0x3f6] * 10.0 * local_54;
    local_54 = (float)param_1[0x3f7] * 10.0 * local_54;
    FUN_00502580(piVar8,&local_60);
    if (param_1[0x411] != 0) {
      FUN_00a6de50(local_50);
    }
    fVar9 = (float10)FUN_004fdc20(param_1 + 0x400,local_50,&local_70);
    fVar4 = (float)param_1[600];
    fVar2 = (float)param_1[0x259];
    fVar3 = (float)param_1[0x25a];
    param_1[600] = param_1[0x14];
    param_1[0x259] = param_1[0x15];
    param_1[0x25a] = param_1[0x16];
    param_1[0x25b] = param_1[0x17];
    if (((fVar3 - local_68) * (fVar3 - local_68) +
         (fVar2 - local_6c) * (fVar2 - local_6c) + (fVar4 - local_70) * (fVar4 - local_70) <
         (((float)param_1[0x16] - local_68) * ((float)param_1[0x16] - local_68) +
         ((float)param_1[0x15] - local_6c) * ((float)param_1[0x15] - local_6c) +
         ((float)param_1[0x14] - local_70) * ((float)param_1[0x14] - local_70)) * 1.1024998) ||
       (fVar9 < (float10)(float)param_1[0x591] * (float10)8.0 *
                (float10)(float)param_1[0x591] * (float10)8.0)) {
LAB_0050943a:
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      FUN_00a947e0(0,(float)param_1[0x591] * (float)param_1[0x515],0,0);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    else {
      local_60 = (float)param_1[0x407];
      local_5c = (float)param_1[0x408];
      local_58 = (float)param_1[0x409];
      local_54 = 1.0;
      iVar7 = FUN_004fa360(&local_70,&local_60,param_1 + 0x10);
      if (iVar7 != 0) goto LAB_0050943a;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 3:
    fVar4 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar4 - (float10)(float)param_1[0x244]);
    fVar9 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar4 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar9 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    param_1[0x590] =
         (int)(float)(fVar9 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fa620(param_1[0x248],0x3d4ccccd,0x3c8efa35);
    piVar8 = (int *)FUN_00a8b9b0(local_20,(float)param_1[0x590] * (float)param_1[0x244] *
                                          (float)param_1[0x249]);
    param_1[0x3f4] = *piVar8;
    param_1[0x3f5] = piVar8[1];
    param_1[0x3f6] = piVar8[2];
    param_1[0x3f7] = piVar8[3];
    param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    FUN_00a947e0(0,(float)param_1[0x591] * (float)param_1[0x594] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      if (25.0 <= SQRT(((float)param_1[0x402] - (float)param_1[0x12]) *
                       ((float)param_1[0x402] - (float)param_1[0x12]) +
                       ((float)param_1[0x400] - (float)param_1[0x10]) *
                       ((float)param_1[0x400] - (float)param_1[0x10]))) {
        FUN_00502030(0x1d);
      }
      else {
        FUN_00502030(0x1e);
      }
    }
  }
  fVar9 = (float10)FUN_00fdc1f0();
  fVar10 = ((float10)(float)param_1[0x3f9] - (float10)(float)param_1[0x15]) * ((float10)1 - fVar9);
  fVar9 = (float10)0.1;
  if ((fVar10 <= fVar9) && (fVar9 = (float10)-0.1, fVar9 <= fVar10)) {
    param_1[0x15] = (int)(float)(fVar10 + (float10)(float)param_1[0x15]);
    return;
  }
  param_1[0x15] = (int)(float)(fVar9 + (float10)(float)param_1[0x15]);
  return;
}

// 00509690  FUN_00509690  size=241  [callgraph]
void __fastcall FUN_00509690(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x2e;
    if (0.5 < *(float *)(param_1 + 0xed0)) {
      uVar1 = 0xd;
    }
    FUN_00aa3f60(uVar1);
    *(float *)(param_1 + 0xfe4) = *(float *)(param_1 + 0xad0) + 15.0;
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfffffdff;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar3 = (float10)FUN_00fdc1f0();
  fVar4 = ((float10)*(float *)(param_1 + 0xfe4) - (float10)*(float *)(param_1 + 0x54)) *
          ((float10)1 - fVar3);
  fVar3 = (float10)0.1;
  if ((fVar4 <= fVar3) && (fVar3 = fVar4, fVar4 < (float10)-0.1)) {
    fVar3 = (float10)-0.1;
  }
  *(float *)(param_1 + 0x54) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x54));
  iVar2 = FUN_00c19c60(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2));
  if (iVar2 == *(int *)(param_1 + 0x4f0)) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x200;
    FUN_00502030(0x1c);
  }
  return;
}

// 00509790  FUN_00509790  size=899  [callgraph]
void __fastcall FUN_00509790(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined1 local_20 [28];
  
  if (param_1[0x187] == 0) {
    param_1[0x3b3] = param_1[0x3b3] & 0xfff7ffbf;
    param_1[0x3c9] = 0;
    param_1[0x3ca] = 0;
    param_1[0x3b3] = param_1[0x3b3] & 0xfefffdff;
    uVar8 = 0x2e;
    if (0.5 < (float)param_1[0x3b4]) {
      uVar8 = 0xd;
    }
    FUN_00aa4120(uVar8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if ((DAT_01bea090 & 0x2000000) == 0) {
      FUN_004fef20();
    }
    DAT_01bea090 = DAT_01bea090 | 0x2000001;
    param_1[0x3b3] = param_1[0x3b3] | 0x500000;
    param_1[0x57c] = 1;
    FUN_004fef20();
    param_1[0x248] = 0x41a00000;
    param_1[0x3b3] = param_1[0x3b3] & 0xfffbffff;
    param_1[0x250] = 0;
    param_1[0x24f] = 0;
    param_1[0x249] = 0x43960000;
    return;
  }
  if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      fVar6 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      FUN_004fa620((float)fVar6,0x3d4ccccd,0x3c0efa35);
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if (20.0 < (float)param_1[0x244] + fVar1) {
      param_1[0x248] = 0;
      FUN_00503800();
    }
    fVar6 = (float10)FUN_00fdc1f0();
    fVar7 = (((float10)(float)param_1[0x401] - (float10)(float)param_1[0x15]) + (float10)3.5) *
            ((float10)1 - fVar6);
    fVar6 = (float10)0.1;
    if ((fVar7 <= fVar6) && (fVar6 = fVar7, fVar7 < (float10)-0.1)) {
      fVar6 = (float10)-0.1;
    }
    param_1[0x15] = (int)(float)(fVar6 + (float10)(float)param_1[0x15]);
    pfVar4 = (float *)FUN_00a8b8a0(local_20,0x40800000);
    iVar5 = param_1[0x2a1];
    fVar1 = ((float)param_1[0x14] + *pfVar4) - *(float *)(iVar5 + 0x40);
    fVar3 = ((float)param_1[0x15] + pfVar4[1]) - *(float *)(iVar5 + 0x44);
    fVar2 = ((float)param_1[0x16] + pfVar4[2]) - *(float *)(iVar5 + 0x48);
    if (param_1[0x250] < 1) {
      iVar5 = FUN_00a8cab0();
      if (iVar5 == 0x3d) {
        param_1[0x250] = param_1[0x250] + 1;
        return;
      }
    }
    else {
      fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
      if ((((fVar1 < 225.0 != (fVar1 == 225.0)) && (iVar5 = FUN_004fb830(iVar5), iVar5 != 0)) &&
          (iVar5 = FUN_00a8cab0(), iVar5 == 0x3e)) && (iVar5 = FUN_00a8cac0(), 0 < iVar5)) {
        uVar8 = 0;
        FUN_00a92f90(0);
        fVar6 = (float10)FUN_00407b40(uVar8);
        uVar8 = 0;
        FUN_00a92f90(0);
        fVar7 = (float10)FUN_0043f390(uVar8);
        if ((((float10)(float)fVar6 / fVar7 < (float10)0.15) &&
            ((float10)0.05 < (float10)(float)fVar6 / fVar7)) &&
           (iVar5 = (**(code **)(*(int *)param_1[0x2a1] + 0x14c))(0x51,param_1[0x13c]), iVar5 != 0))
        {
          (**(code **)(*(int *)param_1[0x2a1] + 0x150))(0x51,param_1[0x13c]);
          (**(code **)(*param_1 + 0x150))(0x51,*(undefined4 *)(param_1[0x2a1] + 0x4f0));
          param_1[0x59e] = 0;
          param_1[0x59d] = 0;
          DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
          param_1[0x3b3] = param_1[0x3b3] & 0xffafffff;
          param_1[0x57c] = 0;
          DAT_01bea090 = DAT_01bea090 | 1;
          return;
        }
      }
    }
  }
  return;
}

// 00509B20  FUN_00509b20  size=3435  [callgraph]
void __fastcall FUN_00509b20(int param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar10 = 0;
  bVar4 = false;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x1000000;
    if (*(int *)(param_1 + 0x1044) != 0) {
      FUN_00a6de50(&local_50);
    }
    pfVar1 = (float *)(param_1 + 0x1000);
    local_60 = local_50 - *pfVar1;
    local_5c = local_4c - *(float *)(param_1 + 0x1004);
    local_58 = local_48 - *(float *)(param_1 + 0x1008);
    local_54 = local_44 - *(float *)(param_1 + 0x100c);
    fVar3 = local_58 * local_58 + local_5c * local_5c + local_60 * local_60;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&local_60,&local_60);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_60 = 0.0;
      local_5c = 1.0;
      local_58 = 0.0;
    }
    *(undefined4 *)(param_1 + 0x938) = 0x41a00000;
    *(float *)(param_1 + 0xfe0) = *pfVar1;
    *(undefined4 *)(param_1 + 0xfe4) = *(undefined4 *)(param_1 + 0x1004);
    *(undefined4 *)(param_1 + 0xfe8) = *(undefined4 *)(param_1 + 0x1008);
    *(undefined4 *)(param_1 + 0xfec) = *(undefined4 *)(param_1 + 0x100c);
    *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x1004) + 3.5;
    uVar7 = FUN_004fa930(pfVar1,&local_50);
    *(undefined4 *)(param_1 + 0x95c) = uVar7;
    fVar11 = (float10)FUN_00a8ec30(pfVar1);
    *(float *)(param_1 + 0x920) = (float)fVar11;
    if (*(int *)(param_1 + 0x95c) == 0) {
      fVar11 = (float10)FUN_00ddba30((float)(fVar11 - (float10)3.1415927));
      *(float *)(param_1 + 0x920) = (float)fVar11;
    }
    RayCastManager::getWork(param_1 + 0x1038);
    FUN_00502530();
    fVar3 = *pfVar1 - *(float *)(param_1 + 0x40);
    fVar5 = *(float *)(param_1 + 0x1008) - *(float *)(param_1 + 0x48);
    fVar3 = fVar5 * fVar5 + fVar3 * fVar3;
    if (fVar3 < 64.0 != (fVar3 == 64.0)) {
      *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x20000;
      FUN_00502030(0x30);
      FUN_00a96030(0,0x3f800000);
      *(undefined4 *)(param_1 + 0x1468) = 0xbf800000;
      break;
    }
    fVar3 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x1454) = 0x3e99999a;
    fVar11 = (float10)FUN_004f2ec0(0x3f800000,fVar3 * 0.1);
    *(float *)(param_1 + 0x1644) = (float)fVar11;
    if (fVar3 < 3.0) {
      *(undefined4 *)(param_1 + 0x1644) = 0x3dcccccd;
    }
    *(undefined4 *)(param_1 + 0x1640) = 0;
    *(undefined4 *)(param_1 + 0x1650) = 0;
    *(undefined4 *)(param_1 + 0x1648) = 0x3e8f5c29;
    FUN_004fa3b0(0x10,0x3e4ccccd,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x164c) = 0;
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfffffdff;
    *(undefined4 *)(param_1 + 0x1654) = 0x3e20d97c;
    *(undefined4 *)(param_1 + 0x938) = 0;
    fVar3 = *pfVar1 - *(float *)(param_1 + 0x40);
    fVar5 = *(float *)(param_1 + 0x1008) - *(float *)(param_1 + 0x48);
    fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
    *(float *)(param_1 + 0x93c) = fVar3;
    if (fVar3 <= 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    else {
      *(float *)(param_1 + 0x93c) = 1.0 / fVar3;
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    goto LAB_00509df0;
  case 1:
LAB_00509df0:
    FUN_004fa620(*(undefined4 *)(param_1 + 0x920),0x3e3851ec,0x3d567750);
    fVar11 = (float10)*(float *)(param_1 + 0x910) + (float10)*(float *)(param_1 + 0x164c);
    *(float *)(param_1 + 0x164c) = (float)fVar11;
    fVar11 = (float10)fcos((float10)3.1415927 - fVar11 * (float10)*(float *)(param_1 + 0x1654));
    fVar12 = (float10)0.5 + fVar11 * (float10)0.5;
    *(float *)(param_1 + 0x1650) = (float)fVar12;
    fVar11 = (float10)*(float *)(param_1 + 0x1648) * fVar12 * (float10)*(float *)(param_1 + 0x1644);
    *(float *)(param_1 + 0x1640) = (float)fVar11;
    *(float *)(param_1 + 0x54) =
         (float)(fVar11 * (float10)*(float *)(param_1 + 0x910) + (float10)*(float *)(param_1 + 0x54)
                );
    FUN_00a947e0(0,(float)(fVar12 * (float10)*(float *)(param_1 + 0x1644) *
                          (float10)*(float *)(param_1 + 0x1454)),0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar3 = *(float *)(param_1 + 0x164c);
    if (!NAN(fVar3) && 20.0 < fVar3 != (fVar3 == 20.0)) {
      *(undefined4 *)(param_1 + 0x1650) = 0x3f800000;
      *(float *)(param_1 + 0x1640) = *(float *)(param_1 + 0x1644) * *(float *)(param_1 + 0x1648);
      uVar7 = *(undefined4 *)(param_1 + 0x1644);
LAB_00509ed7:
      FUN_004fa450(uVar7);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 2:
    FUN_004fa620(*(undefined4 *)(param_1 + 0x920),0x3e4ccccd,0x3d567750);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    piVar2 = (int *)(param_1 + 0x1038);
    *(float *)(param_1 + 0x54) =
         *(float *)(param_1 + 0x1640) * *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x54);
    if (*piVar2 != 0) {
      iVar10 = FUN_00907640(piVar2,0,0);
    }
    local_50 = 0.0;
    local_4c = 3.5;
    local_48 = 0.0;
    FUN_00502580(piVar2,&local_50);
    if ((iVar10 != 0) ||
       (fVar11 = (float10)FUN_004fddd0(),
       fVar11 + (float10)*(float *)(param_1 + 0xef4) < (float10)*(float *)(param_1 + 0x44))) {
      *(undefined4 *)(param_1 + 0x1654) = 0x3de5c8fa;
      *(undefined4 *)(param_1 + 0x164c) = 0x41e00000;
      FUN_004fa450(*(undefined4 *)(param_1 + 0x1644));
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 3:
    FUN_004fa620(*(undefined4 *)(param_1 + 0x920),0x3e3851ec,0x3d567750);
    fVar11 = (float10)*(float *)(param_1 + 0x164c) - (float10)*(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x164c) = (float)fVar11;
    fVar11 = (float10)fcos((float10)3.1415927 - fVar11 * (float10)*(float *)(param_1 + 0x1654));
    fVar12 = (float10)0.5 + fVar11 * (float10)0.5;
    *(float *)(param_1 + 0x1650) = (float)fVar12;
    fVar11 = (float10)*(float *)(param_1 + 0x1648) * fVar12 * (float10)*(float *)(param_1 + 0x1644);
    *(float *)(param_1 + 0x1640) = (float)fVar11;
    *(float *)(param_1 + 0x54) =
         (float)(fVar11 * (float10)*(float *)(param_1 + 0x910) + (float10)*(float *)(param_1 + 0x54)
                );
    FUN_004fa450((float)(fVar12 * (float10)*(float *)(param_1 + 0x1644)));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(float *)(param_1 + 0x164c) <= 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x928) = 0;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar11 = (float10)FUN_004fa620(*(undefined4 *)(param_1 + 0x920),0x3e3851ec,0x3d567750);
    if (fVar11 < (float10)0.08726646) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x958) = 0x10;
      if (*(int *)(param_1 + 0x95c) == 0) {
        *(undefined4 *)(param_1 + 0x958) = 0x13;
      }
      *(undefined4 *)(param_1 + 0x934) = 0x3f000000;
      fVar3 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0xfe0);
      fVar5 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0xfe8);
      fVar11 = (float10)FUN_0043f4d0(SQRT(fVar5 * fVar5 + fVar3 * fVar3) * 0.05,0,0x3f800000);
      *(float *)(param_1 + 0x1644) = (float)fVar11;
      *(undefined4 *)(param_1 + 0x1640) = 0;
      *(undefined4 *)(param_1 + 0x1650) = 0;
      *(undefined4 *)(param_1 + 0x1648) = 0x3f0e147b;
      FUN_004fa3b0(*(undefined4 *)(param_1 + 0x958),0x3e4ccccd,0,0xffffffff);
      RayCastManager::getWork(param_1 + 0x1038);
      *(undefined4 *)(param_1 + 0x164c) = 0;
      *(undefined4 *)(param_1 + 0x61c) = 5;
      *(undefined4 *)(param_1 + 0x1654) = 0x3e20d97c;
      *(undefined4 *)(param_1 + 0x938) = 0;
      *(undefined4 *)(param_1 + 0x101c) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x1020) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x1024) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x1454) = 0x3f000000;
    }
    break;
  case 5:
    FUN_004fa620(*(undefined4 *)(param_1 + 0x920),0x3dcccccd,0x3c8efa35);
    fVar11 = (float10)*(float *)(param_1 + 0x910) + (float10)*(float *)(param_1 + 0x164c);
    *(float *)(param_1 + 0x164c) = (float)fVar11;
    fVar11 = (float10)fcos((float10)3.1415927 - fVar11 * (float10)*(float *)(param_1 + 0x1654));
    fVar11 = (float10)0.5 + fVar11 * (float10)0.5;
    *(float *)(param_1 + 0x1650) = (float)fVar11;
    fVar11 = fVar11 * (float10)*(float *)(param_1 + 0x1648) * (float10)*(float *)(param_1 + 0x1644);
    *(float *)(param_1 + 0x1640) = (float)fVar11;
    puVar8 = (undefined4 *)
             FUN_00a8b8a0(local_40,(float)(fVar11 * (float10)*(float *)(param_1 + 0x910)));
    *(undefined4 *)(param_1 + 0xfd0) = *puVar8;
    *(undefined4 *)(param_1 + 0xfd4) = puVar8[1];
    *(undefined4 *)(param_1 + 0xfd8) = puVar8[2];
    *(undefined4 *)(param_1 + 0xfdc) = puVar8[3];
    if (*(int *)(param_1 + 0x95c) == 0) {
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0xfd0);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xfd4);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0xfd8);
      fVar3 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0xfdc);
    }
    else {
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0xfd0) + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0xfd4);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0xfd8);
      fVar3 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0xfdc);
    }
    *(float *)(param_1 + 0x5c) = fVar3;
    FUN_004fa450(*(float *)(param_1 + 0x934) * *(float *)(param_1 + 0x1650));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar3 = *(float *)(param_1 + 0x164c);
    if (NAN(fVar3) || 20.0 < fVar3 == (fVar3 == 20.0)) break;
    *(undefined4 *)(param_1 + 0x1650) = 0x3f800000;
    *(float *)(param_1 + 0x1640) = *(float *)(param_1 + 0x1644) * *(float *)(param_1 + 0x1648);
    uVar7 = *(undefined4 *)(param_1 + 0x934);
    goto LAB_00509ed7;
  case 6:
    FUN_004fa620(*(undefined4 *)(param_1 + 0x920),0x3dcccccd,0x3c8efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    puVar8 = (undefined4 *)
             FUN_00a8b8a0(local_30,*(float *)(param_1 + 0x1640) * *(float *)(param_1 + 0x910) *
                                   *(float *)(param_1 + 0x1644));
    *(undefined4 *)(param_1 + 0xfd0) = *puVar8;
    *(undefined4 *)(param_1 + 0xfd4) = puVar8[1];
    *(undefined4 *)(param_1 + 0xfd8) = puVar8[2];
    *(undefined4 *)(param_1 + 0xfdc) = puVar8[3];
    *(undefined4 *)(param_1 + 0xfd4) = 0;
    if (*(int *)(param_1 + 0x95c) == 0) {
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0xfd0);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xfd4);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0xfd8);
      fVar3 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0xfdc);
    }
    else {
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0xfd0) + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0xfd4);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0xfd8);
      fVar3 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0xfdc);
    }
    *(float *)(param_1 + 0x5c) = fVar3;
    local_60 = *(float *)(param_1 + 0xfe0) - *(float *)(param_1 + 0x101c);
    local_58 = *(float *)(param_1 + 0xfe8) - *(float *)(param_1 + 0x1024);
    local_5c = 0.0;
    fVar3 = local_60 * local_60 + local_58 * local_58;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&local_60,&local_60);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_60 = 0.0;
      local_5c = 1.0;
      local_58 = 0.0;
    }
    fVar3 = (*(float *)(param_1 + 0xfe8) - *(float *)(param_1 + 0x48)) * local_58 +
            local_5c * 0.0 + local_60 * (*(float *)(param_1 + 0xfe0) - *(float *)(param_1 + 0x40));
    if (5.0 <= fVar3 - 14.0) {
      fVar11 = (float10)FUN_00fdc1f0();
      fVar11 = fVar11 * (float10)*(float *)(param_1 + 0x1644);
      *(float *)(param_1 + 0x1644) = (float)fVar11;
      fVar12 = (float10)1.2;
      if (fVar12 < fVar11 != (fVar12 == fVar11)) {
        *(float *)(param_1 + 0x1644) = (float)fVar12;
      }
    }
    else if (1.0 < *(float *)(param_1 + 0x1644)) {
      fVar11 = (float10)FUN_00fdc1f0();
      fVar11 = fVar11 * (float10)*(float *)(param_1 + 0x1644);
      *(float *)(param_1 + 0x1644) = (float)fVar11;
      if (fVar11 <= (float10)1) {
        *(float *)(param_1 + 0x1644) = (float)(float10)1;
      }
    }
    fVar5 = *(float *)(param_1 + 0x1000) - *(float *)(param_1 + 0x40);
    fVar6 = *(float *)(param_1 + 0x1008) - *(float *)(param_1 + 0x48);
    bVar4 = SQRT(fVar6 * fVar6 + fVar5 * fVar5) * *(float *)(param_1 + 0x93c) < 0.5;
    if (fVar3 < *(float *)(param_1 + 0x1644) * 15.0) {
      *(undefined4 *)(param_1 + 0x1654) = 0x3de5c8fa;
      *(undefined4 *)(param_1 + 0x164c) = 0x41e00000;
      FUN_004fa450(*(undefined4 *)(param_1 + 0x934));
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar11 = (float10)*(float *)(param_1 + 0x164c) - (float10)*(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x164c) = (float)fVar11;
    fVar11 = (float10)fcos((float10)3.1415927 - fVar11 * (float10)*(float *)(param_1 + 0x1654));
    fVar11 = (float10)0.5 + fVar11 * (float10)0.5;
    *(float *)(param_1 + 0x1650) = (float)fVar11;
    *(float *)(param_1 + 0x1640) =
         (float)(fVar11 * (float10)*(float *)(param_1 + 0x1648) *
                (float10)*(float *)(param_1 + 0x1644));
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    puVar8 = (undefined4 *)
             FUN_00a8b8a0(local_20,*(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x1640));
    *(undefined4 *)(param_1 + 0xfd0) = *puVar8;
    *(undefined4 *)(param_1 + 0xfd4) = puVar8[1];
    *(undefined4 *)(param_1 + 0xfd8) = puVar8[2];
    *(undefined4 *)(param_1 + 0xfdc) = puVar8[3];
    *(undefined4 *)(param_1 + 0xfd4) = 0;
    if (*(int *)(param_1 + 0x95c) == 0) {
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0xfd0);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xfd4);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0xfd8);
      fVar3 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0xfdc);
    }
    else {
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0xfd0) + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0xfd4);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0xfd8);
      fVar3 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0xfdc);
    }
    *(float *)(param_1 + 0x5c) = fVar3;
    FUN_004fa450(*(float *)(param_1 + 0x934) * *(float *)(param_1 + 0x1650));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(float *)(param_1 + 0x164c) <= 0.0) {
      *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x20000;
      FUN_00502030(0x30);
      FUN_00a96030(0,0x3f800000);
      *(undefined4 *)(param_1 + 0x1468) = 0xbf800000;
    }
    bVar4 = true;
  }
  if (4 < *(int *)(param_1 + 0x61c)) {
    fVar11 = (float10)FUN_00fdc1f0();
    fVar12 = (((float10)*(float *)(param_1 + 0x1004) - (float10)*(float *)(param_1 + 0x54)) +
             (float10)3.5) * ((float10)1 - fVar11);
    fVar11 = (float10)0.12;
    if ((fVar12 <= fVar11) && (fVar11 = fVar12, fVar12 < (float10)-0.12)) {
      fVar11 = (float10)-0.12;
    }
    *(float *)(param_1 + 0x54) = (float)(fVar11 + (float10)*(float *)(param_1 + 0x54));
  }
  if ((bVar4) &&
     (fVar3 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x938),
     *(float *)(param_1 + 0x938) = fVar3, 20.0 < fVar3)) {
    *(undefined4 *)(param_1 + 0x938) = 0;
    uVar9 = DAT_01bea090 >> 0x19 & 1;
    if ((uVar9 == 0) || (*(int *)(param_1 + 0x15f0) == 0)) {
      if (uVar9 == 0) {
        FUN_004fef20();
      }
      DAT_01bea090 = DAT_01bea090 | 0x2000001;
      *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x500000;
      *(undefined4 *)(param_1 + 0x15f0) = 1;
    }
    FUN_00503800();
  }
  return;
}

// 0050A8B0  FUN_0050a8b0  size=198  [callgraph]
void __fastcall FUN_0050a8b0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if (param_1[0x2a1] != 0) {
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x3e) {
      return;
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x3d) {
      return;
    }
  }
  iVar2 = param_1[0x411];
  if ((float)param_1[0x51a] <= 0.0) {
    if ((iVar2 == 0) || ((*(byte *)(iVar2 + 100) & 1) == 0)) {
      param_1[0x51a] = 0x41f00000;
    }
  }
  else {
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 100) & 1) != 0)) {
      param_1[0x51a] = -0x40800000;
    }
    fVar1 = (float)param_1[0x51a] - (float)param_1[0x244];
    param_1[0x51a] = (int)fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
      param_1[0x3b3] = param_1[0x3b3] & 0xffafffff;
      param_1[0x57c] = 0;
      iVar2 = FUN_00502430();
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0050a959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 0050A990  FUN_0050a990  size=1490  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0050a990(int *param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  float10 fVar9;
  undefined *puVar10;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  int local_3a0;
  float local_39c;
  int local_398;
  int local_394;
  float local_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  undefined1 local_380 [16];
  undefined1 local_370 [56];
  undefined1 auStack_338 [4];
  undefined4 uStack_334;
  undefined4 uStack_224;
  undefined4 uStack_1c8;
  
  iVar4 = FUN_00a81330();
  piVar8 = (int *)0x0;
  if (iVar4 != 0) {
    piVar8 = (int *)FUN_00a7c8a0();
  }
  iVar1 = param_1[0x187];
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      uVar5 = 0;
      if ((float)param_1[0x1029] <= 0.0) {
        param_1[0x1029] = -0x40800000;
      }
      else {
        uVar5 = 0x40a00000;
      }
      FUN_00b7ab30(uVar5);
      if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
        fVar3 = (float)param_1[0x1029] - 1.0;
        param_1[0x1029] = (int)fVar3;
        if (((fVar3 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
            ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar3)) &&
           ((param_1[0x33e] & param_1[0x394]) != 0)) {
          DAT_01dc08d4 = 0;
          FUN_00a96030(0,0x3f800000);
          DAT_01bea060 = DAT_01bea060 | 0x2000000;
          FUN_00b8a040(0,0,0);
          FUN_00a8caf0(0x101,0,0,0);
          (**(code **)(*piVar8 + 0x150))(0x52,param_1[0x13c]);
          return;
        }
      }
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
      FUN_00b94790(0x3f800000,0x3f800000);
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 == 0) {
        return;
      }
      FUN_00dc1270(0x41a00000,0);
      local_3b0 = (float)param_1[600];
      local_3a8 = (float)param_1[0x25a];
      local_3a4 = (float)param_1[0x25b];
      local_3a0 = param_1[0x14];
      local_398 = param_1[0x16];
      local_394 = param_1[0x17];
      local_3ac = (float)param_1[0x259] + 1.5;
      local_39c = (float)param_1[0x15] + 1.5;
      FUN_00445d40(&local_3b0,&local_3a0,0xffff0006,0,0x60,0,"Pl0000::qteSafeCheck",0);
      iVar4 = RayCastSingleHitWork::RayCastSingleHitWork_2(local_380,&local_390,0,0,local_370);
      if (iVar4 != 0) {
        iVar4 = *param_1;
        uVar5 = (**(code **)(iVar4 + 0x84))();
        (**(code **)(iVar4 + 0x7c))(param_1 + 600,uVar5);
      }
      FUN_008e6d00();
      DAT_01bea074 = DAT_01bea074 & 0xffff7fff;
      DAT_01bea090 = DAT_01bea090 & 0xfffffffe;
      FUN_00a7c950();
      FUN_00a8caf0(0xb,0,0,0);
      return;
    }
    goto LAB_0050ad27;
  }
  DAT_01bea074 = DAT_01bea074 | 0x8000;
  FUN_00dc1300(0);
  FUN_00aa4520(0x35,iVar4,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0xfe0] = 0;
  FUN_008e3c10();
  if (piVar8 == (int *)0x0) {
LAB_0050acab:
    param_1[0x252] = -1;
  }
  else {
    puVar10 = &DAT_01b34f20;
    (**(code **)(*piVar8 + 4))(&DAT_01b34f20);
    iVar4 = FUN_00dd6d70(puVar10);
    if (iVar4 == 0) goto LAB_0050acab;
    param_1[0x252] = piVar8[0x404];
  }
  param_1[0x250] = 0;
  param_1[0x248] = 0x41500000;
  param_1[0x251] = 0;
  param_1[0x253] = 0;
  iVar4 = *piVar8;
  param_1[600] = param_1[0x14];
  pcVar2 = *(code **)(iVar4 + 0x84);
  param_1[0x259] = param_1[0x15];
  param_1[0x25a] = param_1[0x16];
  param_1[0x25b] = param_1[0x17];
  iVar4 = (*pcVar2)();
  fVar9 = (float10)FUN_00ddba30(*(float *)(iVar4 + 4) - 3.1415927);
  param_1[0x25] = (int)(float)fVar9;
  FUN_00b7dbe0(4);
LAB_0050ad27:
  param_1[0x248] = (int)((float)param_1[0x248] - _DAT_01be942c);
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a8c760(0x20);
  if (iVar4 != 0) {
    param_1[0x1029] = param_1[0x102a];
    FUN_00b89db0(1,0x3dcccccd);
    param_1[0x187] = param_1[0x187] + 1;
  }
  param_1[0x250] = param_1[0x250] + 1;
  if ((piVar8 != (int *)0x0) && (param_1[0x250] == 1)) {
    switchD_0080dbae::default();
    iVar4 = FUN_00a12210(0xf00);
    if (iVar4 != 0) {
      local_3b0 = (float)param_1[0x10] - *(float *)(iVar4 + 0x40);
      local_3ac = (float)param_1[0x11] - *(float *)(iVar4 + 0x44);
      local_3a8 = (float)param_1[0x12] - *(float *)(iVar4 + 0x48);
      local_3a4 = (float)param_1[0x13] - *(float *)(iVar4 + 0x4c);
      piVar6 = (int *)(**(code **)(*param_1 + 0x84))();
      local_3a0 = *piVar6;
      local_39c = (float)piVar6[1];
      local_398 = piVar6[2];
      local_394 = piVar6[3];
      local_390 = (float)piVar8[0x10] + local_3b0;
      fStack_38c = (float)piVar8[0x11] + local_3ac;
      fStack_388 = (float)piVar8[0x12] + local_3a8;
      fStack_384 = (float)piVar8[0x13] + local_3a4;
      iVar4 = (**(code **)(*piVar8 + 0x84))();
      fVar9 = (float10)FUN_00ddba30(*(float *)(iVar4 + 4) - 3.1415927);
      local_39c = (float)fVar9;
      (**(code **)(*param_1 + 0x7c))(&local_390,&local_3a0);
      if (param_1[0x251] == 0) {
        param_1[0x251] = 1;
        FUN_0041fee0();
        uStack_224 = 0x39;
        uStack_334 = 0x30330;
        puVar7 = (undefined4 *)FUN_009f8b60();
        uStack_1c8 = *puVar7;
        iVar4 = (**(code **)(*param_1 + 0x84))();
        local_3b0 = *(float *)(iVar4 + 8);
        local_3ac = *(float *)(iVar4 + 0xc);
        FUN_00ddba30(*(float *)(iVar4 + 4) + 3.1415927);
        FUN_00416e30(param_1 + 0x14,param_1 + 0x14,&stack0xfffffc48,0x3ea8f5c3,0x44480000);
        FUN_00ad3be0(param_1[0x13c],auStack_338);
      }
    }
  }
  return;
}

// 0050AF70  FUN_0050af70  size=182  [callgraph]
void __fastcall FUN_0050af70(int param_1)

{
  float10 fVar1;
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x15ec) == 0)) {
    if (*(int *)(param_1 + 0xa84) == 0) {
      fVar1 = (float10)6.2831855;
    }
    else {
      fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
      fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
      fVar1 = ABS(fVar1);
    }
    if ((((float10)0.5235988 < ABS(fVar1)) && (0.1 < *(float *)(param_1 + 0xf40))) &&
       (64.0 < *(float *)(param_1 + 0xa90))) {
      FUN_00502200();
      return;
    }
    if ((*(float *)(param_1 + 0x1034) <= 0.0) || (*(float *)(param_1 + 0xed0) <= 0.33333334)) {
      FUN_00502030(0x2a);
    }
  }
  return;
}

// 0050B030  FUN_0050b030  size=185  [callgraph]
void __fastcall FUN_0050b030(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  if (param_1[0x2a1] != 0) {
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x3e) {
      return;
    }
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0x3d) {
      return;
    }
  }
  fVar1 = (float)param_1[0x24e];
  param_1[0x24e] = (int)((float)param_1[0x244] + fVar1);
  if ((param_1[0x3b3] & 0x80000U) == 0) {
    if (180.0 <= (float)param_1[0x244] + fVar1) {
      param_1[0x59e] = 0;
      DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
      param_1[0x3b3] = param_1[0x3b3] & 0xffafffff;
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x57c] = 0;
                    /* WARNING: Could not recover jumptable at 0x0050b0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
    param_1[0x3b3] = param_1[0x3b3] & 0xffafffff;
    param_1[0x57c] = 0;
    FUN_00502030(0x1c);
    param_1[0x59e] = 0;
  }
  return;
}

// 0050B0F0  FUN_0050b0f0  size=663  [callgraph]
void __fastcall FUN_0050b0f0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined1 local_20 [28];
  
  if (param_1[0x187] == 0) {
    param_1[0x3b3] = param_1[0x3b3] & 0xfff7fdff;
    FUN_00aa4120(0xd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if ((DAT_01bea090 & 0x2000000) == 0) {
      FUN_004fef20();
    }
    DAT_01bea090 = DAT_01bea090 | 0x2000001;
    param_1[0x3b3] = param_1[0x3b3] | 0x500000;
    param_1[0x57c] = 1;
    FUN_004fef20();
    param_1[0x248] = 0x41a00000;
    param_1[0x3b3] = param_1[0x3b3] & 0xfffbffff;
    param_1[0x24e] = 0;
    param_1[0x24f] = 0;
    return;
  }
  if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      fVar6 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      FUN_004fa620((float)fVar6,0x3d4ccccd,0x3c0efa35);
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if (20.0 < (float)param_1[0x244] + fVar1) {
      param_1[0x248] = 0;
      FUN_00503800();
    }
    pfVar4 = (float *)FUN_00a8b8a0(local_20,0x40800000);
    iVar5 = param_1[0x2a1];
    fVar1 = (*pfVar4 + (float)param_1[0x14]) - *(float *)(iVar5 + 0x40);
    fVar3 = (pfVar4[1] + (float)param_1[0x15]) - *(float *)(iVar5 + 0x44);
    fVar2 = (pfVar4[2] + (float)param_1[0x16]) - *(float *)(iVar5 + 0x48);
    fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    if (((fVar1 < 225.0 != (fVar1 == 225.0)) && (iVar5 = FUN_00a8cab0(), iVar5 == 0x3e)) &&
       (iVar5 = FUN_00a8cac0(), 0 < iVar5)) {
      uVar8 = 0;
      FUN_00a92f90(0);
      fVar6 = (float10)FUN_00407b40(uVar8);
      uVar8 = 0;
      FUN_00a92f90(0);
      fVar7 = (float10)FUN_0043f390(uVar8);
      if ((((float10)(float)fVar6 / fVar7 < (float10)0.15) &&
          ((float10)0.05 < (float10)(float)fVar6 / fVar7)) &&
         (iVar5 = (**(code **)(*(int *)param_1[0x2a1] + 0x14c))(0x51,param_1[0x13c]), iVar5 != 0)) {
        (**(code **)(*(int *)param_1[0x2a1] + 0x150))(0x51,param_1[0x13c]);
        (**(code **)(*param_1 + 0x150))(0x51,*(undefined4 *)(param_1[0x2a1] + 0x4f0));
        param_1[0x59e] = 0;
        param_1[0x59d] = 0;
        DAT_01bea090 = DAT_01bea090 & 0xfdfffffe;
        param_1[0x3b3] = param_1[0x3b3] & 0xffafffff;
        param_1[0x57c] = 0;
        return;
      }
    }
  }
  return;
}

// 0050B3A0  FUN_0050b3a0  size=2294  [callgraph]
void __fastcall FUN_0050b3a0(int *param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a9f4c0("EmergencyMove",0x3e4ccccd,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0xd,0x3e4ccccd,0);
    FUN_00a9f600(0xffffffff,0,1,0,0,0x16,0x3e4ccccd,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x13,0x3e4ccccd,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41900000;
    param_1[0x250] = 1;
    param_1[0x591] = 0x3f800000;
    param_1[0x590] = 0;
    param_1[0x592] = 0x3e888872;
    param_1[0x593] = 0;
    param_1[0x595] = 0x3da0d97c;
  case 1:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar1);
    fVar5 = (float10)fcos((float10)3.1415927 -
                          ((float10)(float)param_1[0x244] + (float10)fVar1) *
                          (float10)(float)param_1[0x595]);
    fVar5 = (float10)0.5 + fVar5 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar5;
    param_1[0x590] =
         (int)(float)(fVar5 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar3 = (int *)FUN_00a8b9b0(local_70,(float)param_1[0x244] * (float)param_1[0x590]);
    param_1[0x3f4] = *piVar3;
    param_1[0x3f5] = piVar3[1];
    param_1[0x3f6] = piVar3[2];
    param_1[0x3f7] = piVar3[3];
    if (param_1[0x250] == 0) {
      param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
      param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
      fVar1 = (float)param_1[0x17] - (float)param_1[0x3f7];
    }
    else {
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
      param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
      fVar1 = (float)param_1[0x3f7] + (float)param_1[0x17];
    }
    param_1[0x17] = (int)fVar1;
    FUN_00a947e0(0,(float)param_1[0x594] * (float)param_1[0x591],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x593];
    if (!NAN(fVar1) && 40.0 < fVar1 != (fVar1 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_00a947e0(0,param_1[0x591],0,0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004fdd80(0x3dcccccd,0x3c8efa35);
    piVar3 = (int *)FUN_00a8b9b0(local_60,(float)param_1[0x244] * (float)param_1[0x590]);
    param_1[0x3f4] = *piVar3;
    param_1[0x3f5] = piVar3[1];
    param_1[0x3f6] = piVar3[2];
    param_1[0x3f7] = piVar3[3];
    if (param_1[0x250] == 0) {
      param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
      param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
      fVar1 = (float)param_1[0x17] - (float)param_1[0x3f7];
    }
    else {
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
      param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
      fVar1 = (float)param_1[0x3f7] + (float)param_1[0x17];
    }
    param_1[0x17] = (int)fVar1;
    param_1[0x3b3] = param_1[0x3b3] | 4;
    param_1[0x3b3] = param_1[0x3b3] | 1;
    fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * (float)param_1[0x590];
    param_1[0x248] = (int)fVar1;
    if ((fVar1 <= 0.0) || (iVar4 = FUN_004fe460(0x41f00000), iVar4 != 0)) {
      param_1[0x595] = 0x3da0d97c;
      param_1[0x593] = 0x42200000;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 - (float10)(float)param_1[0x244]);
    fVar5 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar1 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar5 = (float10)0.5 + fVar5 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar5;
    fVar5 = fVar5 * (float10)(float)param_1[0x591];
    FUN_00a947e0(0,(float)fVar5,(float)((float10)1 - fVar5),0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x590] = (int)((float)fVar5 * (float)param_1[0x592]);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar3 = (int *)FUN_00a8b9b0(local_50,(float)param_1[0x244] * (float)param_1[0x590]);
    param_1[0x3f4] = *piVar3;
    param_1[0x3f5] = piVar3[1];
    param_1[0x3f6] = piVar3[2];
    param_1[0x3f7] = piVar3[3];
    if (param_1[0x250] == 0) {
      param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
      param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
      fVar1 = (float)param_1[0x17] - (float)param_1[0x3f7];
    }
    else {
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
      param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
      fVar1 = (float)param_1[0x3f7] + (float)param_1[0x17];
    }
    param_1[0x17] = (int)fVar1;
    piVar3 = (int *)FUN_00a8b8a0(local_40,(float)param_1[0x244] * (float)((float10)1 - fVar5) * 0.3)
    ;
    param_1[0x3f4] = *piVar3;
    param_1[0x3f5] = piVar3[1];
    param_1[0x3f6] = piVar3[2];
    param_1[0x3f7] = piVar3[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    if (0.0 < (float)param_1[0x593]) {
      param_1[0x3b3] = param_1[0x3b3] | 4;
      param_1[0x3b3] = param_1[0x3b3] | 1;
      return;
    }
    param_1[0x591] = 0x3f800000;
    param_1[0x594] = 0x3f800000;
    param_1[0x592] = 0x3e99999a;
    param_1[0x590] = 0x3e99999a;
    FUN_00a947e0(0,0,0x3f800000,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3b3] = param_1[0x3b3] | 4;
    param_1[0x3b3] = param_1[0x3b3] | 1;
    return;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar2 = (int *)FUN_00a8b8a0(local_30,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar2;
    iVar4 = 0;
    piVar3 = param_1 + 0x40e;
    param_1[0x3f5] = piVar2[1];
    param_1[0x3f6] = piVar2[2];
    param_1[0x3f7] = piVar2[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    if (*piVar3 != 0) {
      iVar4 = FUN_00907640(piVar3,0,0);
    }
    local_80 = (float)param_1[0x3f4] * -14.0;
    local_7c = (float)param_1[0x3f5] * -14.0;
    local_78 = (float)param_1[0x3f6] * -14.0;
    local_74 = (float)param_1[0x3f7] * -14.0;
    FUN_00502580(piVar3,&local_80);
    param_1[0x597] = (int)((float)param_1[0x597] - (float)param_1[0x244] * 0.016666668);
    if (((iVar4 != 0) ||
        (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 625.0 < fVar1 != (fVar1 == 625.0))) ||
       (iVar4 = FUN_004fe460(0x41200000), iVar4 == 0)) {
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      FUN_00a947e0(0,0,param_1[0x591],0);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x3b3] = param_1[0x3b3] | 4;
    param_1[0x3b3] = param_1[0x3b3] | 1;
    return;
  case 5:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 - (float10)(float)param_1[0x244]);
    fVar5 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar1 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar5 = (float10)0.5 + fVar5 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar5;
    param_1[0x590] =
         (int)(float)(fVar5 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar3 = (int *)FUN_00a8b8a0(local_20,(float)param_1[0x244] * (float)param_1[0x590]);
    param_1[0x3f4] = *piVar3;
    param_1[0x3f5] = piVar3[1];
    param_1[0x3f6] = piVar3[2];
    param_1[0x3f7] = piVar3[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    FUN_00a947e0(0,0,(float)param_1[0x594] * (float)param_1[0x591],0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    if ((param_1[0x3b3] & 0x8000U) == 0) {
      FUN_004fde50();
    }
  }
  return;
}

// 0050C2A0  FUN_0050c2a0  size=2511  [callgraph]
void __fastcall FUN_0050c2a0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float10 fVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float local_5c [2];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40 [4];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    iVar7 = FUN_00c19f90(local_5c,param_1[0x2e7],1);
    if (iVar7 == 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    local_50 = (float)param_1[0x10] - local_5c[0];
    local_48 = (float)param_1[0x12] - local_54;
    local_4c = 0.0;
    fVar1 = local_50 * local_50 + local_48 * local_48;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_50,&local_50);
      fVar12 = (float10)local_50;
      fVar11 = (float10)local_48;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar12 = (float10)0;
      local_4c = 1.0;
      fVar11 = fVar12;
    }
    fVar10 = (float10)0;
    fVar9 = (float10)fcos((float10)0.7853981852531433);
    fVar5 = fVar10;
    if ((fVar9 <= ABS(fVar12)) && (fVar5 = (float10)-1.0, fVar10 < fVar12)) {
      fVar5 = (float10)1;
    }
    local_50 = (float)fVar5;
    if ((fVar9 <= ABS(fVar11)) && (bVar3 = fVar10 < fVar11, fVar10 = (float10)-1.0, bVar3)) {
      fVar10 = (float10)1;
    }
    local_48 = (float)fVar10;
    pfVar6 = (float *)FUN_00a925a0(local_30);
    fVar1 = pfVar6[2] * local_48 + *pfVar6 * local_50 + pfVar6[1] * local_4c;
    pfVar6 = (float *)FUN_00a92640(local_20);
    fVar4 = local_50 * *pfVar6 + pfVar6[1] * local_4c + pfVar6[2] * local_48;
    if (ABS(fVar1) <= ABS(fVar4)) {
      if (fVar4 <= 0.0) {
        param_1[0x250] = 3;
      }
      else {
        param_1[0x250] = 2;
      }
    }
    else if (fVar1 <= 0.0) {
      param_1[0x250] = 1;
    }
    else {
      param_1[0x250] = 0;
    }
    pfVar6 = (float *)(param_1 + 0x3f8);
    *pfVar6 = (float)param_1[0x10] + local_50;
    param_1[0x3f9] = (int)((float)param_1[0x11] + local_4c);
    param_1[0x3fa] = (int)((float)param_1[0x12] + local_48);
    param_1[0x3fb] = (int)((float)param_1[0x13] + local_44);
    local_40[0] = 0.0;
    local_40[1] = 3.1415927;
    local_40[2] = -1.5707964;
    local_40[3] = 1.5707964;
    fVar12 = (float10)FUN_00a8ec30(pfVar6);
    fVar12 = (float10)FUN_00ddba30((float)(fVar12 + (float10)local_40[param_1[0x250]]));
    param_1[0x24b] = (int)(float)fVar12;
    pcVar2 = *(code **)(*param_1 + 0x84);
    param_1[0x249] = 0x40c00000;
    param_1[0x24a] = 0x43700000;
    param_1[0x515] = 0x3e800000;
    iVar7 = (*pcVar2)();
    fVar12 = (float10)FUN_00ddba30(*(float *)(iVar7 + 4) - (float)param_1[0x24b]);
    if ((float10)1.0471976 <= ABS(fVar12)) {
      uVar8 = 0x19;
      iVar7 = FUN_004fa760(pfVar6);
      if (iVar7 != 0) {
        uVar8 = 0x16;
      }
      param_1[0x591] = 0x3f4ccccd;
      param_1[0x590] = 0;
      param_1[0x594] = 0;
      FUN_004fa3b0(uVar8,0x3e4ccccd,0,0xffffffff);
      RayCastManager::getWork(param_1 + 0x40e);
      param_1[0x187] = param_1[0x187] + 1;
    }
    else {
      param_1[0x591] = 0x3f266666;
      param_1[0x590] = 0;
      param_1[0x594] = 0;
      param_1[0x592] = 0x3e99999a;
      param_1[0x407] = param_1[0x10];
      param_1[0x408] = param_1[0x11];
      param_1[0x409] = param_1[0x12];
      FUN_004fa3b0(0x10,0x3e4ccccd,0,0xffffffff);
      RayCastManager::getWork(param_1 + 0x40e);
      param_1[0x187] = 4;
    }
    param_1[0x593] = 0;
    param_1[0x595] = 0x3e20d97c;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 1:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar1);
    fVar12 = (float10)fcos((float10)3.1415927 -
                           ((float10)(float)param_1[0x244] + (float10)fVar1) *
                           (float10)(float)param_1[0x595]);
    fVar12 = (float10)0.5 + fVar12 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar12;
    param_1[0x590] =
         (int)(float)(fVar12 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fa450((float)(fVar12 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x593];
    if (!NAN(fVar1) && 20.0 < fVar1 != (fVar1 == 20.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x591] * (float)param_1[0x592]);
      FUN_004fa450(param_1[0x591]);
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_004fa620(param_1[0x24b],0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    break;
  case 2:
    pcVar2 = *(code **)(*param_1 + 0x84);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar7 = (*pcVar2)();
    fVar1 = *(float *)(iVar7 + 4);
    fVar12 = (float10)FUN_004fa620(param_1[0x24b],0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    iVar7 = (**(code **)(*param_1 + 0x84))();
    fVar11 = (float10)FUN_00ddba30(*(float *)(iVar7 + 4) - fVar1);
    FUN_004fa450((float)(ABS(fVar11) * (float10)28.64789 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = 0x3f800000;
    if (ABS((float)fVar12) < 0.08726646) {
      param_1[0x595] = 0x3d8efa35;
      param_1[0x593] = 0x42340000;
      fVar1 = (float)param_1[0x591] * (float)(ABS(fVar11) * (float10)28.64789);
      param_1[0x591] = (int)fVar1;
LAB_0050c82f:
      FUN_004fa450(fVar1);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    param_1[0x593] = (int)((float)param_1[0x593] - (float)param_1[0x244]);
    FUN_004fa620(param_1[0x24b],0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    fVar12 = (float10)fcos((float10)3.1415927 -
                           (float10)(float)param_1[0x595] * (float10)(float)param_1[0x593]);
    fVar12 = (float10)0.5 + fVar12 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar12;
    FUN_004fa450((float)(fVar12 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      param_1[0x515] = 0x3e800000;
      param_1[0x591] = 0x3f266666;
      param_1[0x590] = 0;
      param_1[0x594] = 0;
      param_1[0x592] = 0x3e99999a;
      FUN_004fa3b0(*(undefined4 *)(&DAT_01640a44 + param_1[0x250] * 4),0x3e4ccccd,0,0xffffffff);
      RayCastManager::getWork(param_1 + 0x40e);
      param_1[0x407] = param_1[0x10];
      param_1[0x408] = param_1[0x11];
      param_1[0x409] = param_1[0x12];
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x593] = 0;
      param_1[0x595] = 0x3e20d97c;
      return;
    }
    break;
  case 4:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar1);
    fVar12 = (float10)fcos((float10)3.1415927 -
                           ((float10)(float)param_1[0x244] + (float10)fVar1) *
                           (float10)(float)param_1[0x595]);
    fVar12 = (float10)0.5 + fVar12 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar12;
    param_1[0x590] =
         (int)(float)(fVar12 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fa620(param_1[0x24b],0x3da3d70a,0x3c2b92a6);
    FUN_004fa6d0(param_1 + 0x3f4,param_1[0x250],(float)param_1[0x244] * (float)param_1[0x590]);
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x3f7] + (float)param_1[0x17]);
    FUN_004fa450((float)param_1[0x594] * (float)param_1[0x591]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x593];
    if (!NAN(fVar1) && 20.0 < fVar1 != (fVar1 == 20.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x591] * (float)param_1[0x592]);
      FUN_004fa450(param_1[0x591]);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004fa620(param_1[0x24b],0x3dcccccd,0x3cab92a6);
    FUN_004fa6d0(param_1 + 0x3f4,param_1[0x250],(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x3f7] + (float)param_1[0x17]);
    fVar1 = (float)param_1[0x24a];
    param_1[0x24a] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] <= 0.0) || (iVar7 = FUN_004fa510(1), iVar7 == 0)) {
      param_1[0x595] = 0x3db7d3fb;
      param_1[0x593] = 0x420c0000;
      fVar1 = (float)param_1[0x591];
      goto LAB_0050c82f;
    }
    break;
  case 6:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 - (float10)(float)param_1[0x244]);
    fVar12 = (float10)fcos((float10)3.1415927 -
                           ((float10)fVar1 - (float10)(float)param_1[0x244]) *
                           (float10)(float)param_1[0x595]);
    fVar12 = (float10)0.5 + fVar12 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar12;
    fVar12 = fVar12 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar12;
    FUN_004fa6d0(param_1 + 0x3f4,param_1[0x250],(float)(fVar12 * (float10)(float)param_1[0x244]));
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x3f7] + (float)param_1[0x17]);
    FUN_004fa450((float)param_1[0x594] * (float)param_1[0x591]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((float)param_1[0x593] <= 0.0) && (iVar7 = FUN_00502430(), iVar7 == 0)) {
      FUN_00502030(0x2c);
      return;
    }
  }
  return;
}

// 0050CC90  FUN_0050cc90  size=2427  [callgraph]
void __fastcall FUN_0050cc90(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  int local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
    param_1[0x591] = 0x3f800000;
    param_1[0x515] = 0x3f333333;
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    param_1[0x592] = 0x3e3851eb;
    RayCastManager::getWork(param_1 + 0x40e);
    FUN_00502530();
    param_1[0x593] = 0;
    param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
    param_1[0x595] = 0x3da0d97c;
    param_1[0x515] = 0x3e99999a;
    uVar5 = FUN_00c19f60(param_1[0x2e7],1);
    FUN_00502810(&local_40,uVar5,param_1[0x2a1] + 0x40);
    local_40 = local_40 - (float)param_1[0x10];
    local_3c = local_3c - (float)param_1[0x11];
    local_38 = local_38 - (float)param_1[0x12];
    pfVar6 = (float *)FUN_00a925a0(auStack_30);
    fVar2 = pfVar6[2] * local_38 + *pfVar6 * local_40 + pfVar6[1] * local_3c;
    pfVar6 = (float *)FUN_00a92640(auStack_20);
    fVar3 = pfVar6[2] * local_38 + *pfVar6 * local_40 + pfVar6[1] * local_3c;
    if (ABS(fVar2) <= ABS(fVar3)) {
      if (fVar3 <= 0.0) {
        param_1[0x250] = 3;
      }
      else {
        param_1[0x250] = 2;
      }
    }
    else if (fVar2 <= 0.0) {
      param_1[0x250] = 1;
    }
    else {
      param_1[0x250] = 0;
    }
    FUN_00a9f4c0("FAINT",0x3f19999a,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0xd,0x3f19999a,0);
    FUN_00a9f600(0xffffffff,0,1,0,0,0x10,0x3f19999a,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,*(undefined4 *)(&DAT_01640a58 + param_1[0x250] * 4),0x3f19999a,0
                );
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = param_1[0x15];
    goto LAB_0050cebf;
  case 1:
LAB_0050cebf:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 + (float10)(float)param_1[0x244]);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar2 + (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    fVar8 = fVar9 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar8;
    param_1[0x15] =
         (int)(float)(fVar8 * (float10)(float)param_1[0x244] + (float10)(float)param_1[0x15]);
    FUN_00a947e0(0,(float)((float10)(float)param_1[0x515] * (float10)(float)param_1[0x591] * fVar9),
                 0,0);
    fVar2 = (float)param_1[0x593];
    if (!NAN(fVar2) && 40.0 < fVar2 != (fVar2 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_00a947e0(0,(float)param_1[0x515] * (float)param_1[0x591],0,0);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = param_1[0x15];
      param_1[0x249] = 0;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = 0;
    bVar4 = false;
    if ((ABS((float)param_1[0x15] - (float)param_1[0x248]) <
         (float)param_1[0x590] * (float)param_1[0x244] * 0.2) &&
       (fVar2 = (float)param_1[0x249], param_1[0x249] = (int)(fVar2 + (float)param_1[0x244]),
       10.0 <= fVar2 + (float)param_1[0x244])) {
      bVar4 = true;
    }
    piVar1 = param_1 + 0x40e;
    param_1[0x248] = param_1[0x15];
    param_1[0x15] = (int)((float)param_1[0x590] * (float)param_1[0x244] + (float)param_1[0x15]);
    if (*piVar1 != 0) {
      iVar7 = FUN_00907640(piVar1,0,0);
    }
    local_40 = 0.0;
    local_3c = 3.5;
    local_38 = 0.0;
    FUN_00502580(piVar1,&local_40);
    if (((iVar7 != 0) || (bVar4)) ||
       (-3.5 < ((float)param_1[0x15] - (float)param_1[0x3c1]) - (float)param_1[0x3bd])) {
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      FUN_00a947e0(0,(float)param_1[0x591] * (float)param_1[0x515],0,0);
      FUN_004fe7d0();
      bVar4 = false;
      iVar7 = FUN_00c19f60(param_1[0x2e7],1);
      if ((iVar7 != 0) &&
         (FUN_00c9fdd0(&local_40),
         (local_38 - (float)param_1[0x12]) * (local_38 - (float)param_1[0x12]) +
         (local_40 - (float)param_1[0x10]) * (local_40 - (float)param_1[0x10]) < 25.0)) {
        bVar4 = true;
      }
      fVar2 = (float)param_1[0x2a4];
      if ((!NAN(fVar2) && 324.0 < fVar2 != (fVar2 == 324.0)) && (!bVar4)) {
        param_1[0x187] = 6;
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x592] = 0x3e99999a;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 - (float10)(float)param_1[0x244]);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar2 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar8 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar8;
    fVar8 = fVar8 * (float10)(float)param_1[0x591];
    fVar9 = (float10)0.8 - fVar8 * (float10)0.8;
    FUN_00a947e0(0,(float)(fVar8 * (float10)(float)param_1[0x515]),
                 (float)(fVar9 * (float10)(float)param_1[0x515]),0);
    param_1[0x15] = (int)((float)fVar8 * 0.1 * 1.5 * (float)param_1[0x244] + (float)param_1[0x15]);
    fVar2 = (float)fVar9 * (float)param_1[0x592];
    param_1[0x590] = (int)fVar2;
    FUN_004fa6d0(param_1 + 0x3f4,param_1[0x250],fVar2 * (float)param_1[0x244]);
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x3f7] + (float)param_1[0x17]);
    if (param_1[0x250] != 0) {
      FUN_004fdd80(0x3df5c28f,0x3cab92a6);
    }
    if ((float)param_1[0x593] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x594] = 0x3f800000;
      param_1[0x591] = 0x3f4ccccd;
      param_1[0x590] = (int)((float)param_1[0x592] * 0.8);
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    pfVar6 = (float *)(param_1 + 0x3f4);
    FUN_004fa6d0(pfVar6,param_1[0x250],(float)param_1[0x590] * (float)param_1[0x244]);
    piVar1 = param_1 + 0x40e;
    local_48 = 0;
    param_1[0x14] = (int)((float)param_1[0x14] + *pfVar6);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x3f7] + (float)param_1[0x17]);
    if (*piVar1 != 0) {
      local_48 = FUN_00907640(piVar1,0,0);
    }
    local_40 = *pfVar6 * 14.0;
    local_3c = (float)param_1[0x3f5] * 14.0;
    local_38 = (float)param_1[0x3f6] * 14.0;
    local_34 = (float)param_1[0x3f7] * 14.0;
    FUN_00502580(piVar1,&local_40);
    if (param_1[0x250] != 0) {
      FUN_004fdd80(0x3df5c28f,0x3cab92a6);
    }
    if (((local_48 != 0) ||
        (fVar8 = (float10)FUN_00501c90(), fVar8 < (float10)(float)param_1[0x2a4])) ||
       (iVar7 = FUN_004fe610(param_1[0x250],0x41700000), iVar7 != 0)) {
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      FUN_00a947e0(0,0,(float)param_1[0x591] * (float)param_1[0x515],0);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    if (param_1[0x250] != 0) {
      FUN_004fdd80(0x3df5c28f,0x3cab92a6);
    }
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 - (float10)(float)param_1[0x244]);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar2 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar8 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar8;
    fVar8 = fVar8 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar8;
    FUN_004fa6d0(param_1 + 0x3f4,param_1[0x250],(float)(fVar8 * (float10)(float)param_1[0x244]));
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x3f7] + (float)param_1[0x17]);
    FUN_00a947e0(0,0,(float)param_1[0x515] * (float)param_1[0x591] * (float)param_1[0x594],0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      FUN_004fe7d0();
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 6:
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 - (float10)(float)param_1[0x244]);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar2 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    fVar8 = (float10)(float)param_1[0x592] * fVar9 * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar8;
    param_1[0x15] =
         (int)(float)(fVar8 * (float10)(float)param_1[0x244] + (float10)(float)param_1[0x15]);
    FUN_00a947e0(0,(float)((float10)(float)param_1[0x515] * (float10)(float)param_1[0x591] * fVar9),
                 0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0050D630  FUN_0050d630  size=1301  [callgraph]
void __fastcall FUN_0050d630(int *param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
    param_1[0x591] = 0x3f4ccccd;
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    param_1[0x592] = 0x3e99999a;
    FUN_004fa3b0(0x13,0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x595] = 0x3e00adfd;
    param_1[0x593] = 0;
    param_1[0x597] = 0x40000000;
    goto LAB_0050d6d9;
  case 1:
LAB_0050d6d9:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 + (float10)(float)param_1[0x244]);
    fVar5 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar1 + (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar5 = (float10)0.5 + fVar5 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar5;
    param_1[0x590] =
         (int)(float)(fVar5 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    if (param_1[0x2a1] != 0) {
      fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      FUN_004fa620((float)fVar5,0x3d4ccccd,0x3c8efa35);
    }
    piVar3 = (int *)FUN_00a8b8a0(local_40,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar3;
    param_1[0x3f5] = piVar3[1];
    param_1[0x3f6] = piVar3[2];
    param_1[0x3f7] = piVar3[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    FUN_00a947e0(0,(float)param_1[0x594] * (float)param_1[0x591] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x593];
    if (!NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_00a947e0(0,(float)param_1[0x515] * (float)param_1[0x591],0,0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar2 = (int *)FUN_00a8b8a0(local_30,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar2;
    iVar4 = 0;
    piVar3 = param_1 + 0x40e;
    param_1[0x3f5] = piVar2[1];
    param_1[0x3f6] = piVar2[2];
    param_1[0x3f7] = piVar2[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    if (*piVar3 != 0) {
      iVar4 = FUN_00907640(piVar3,0,0);
    }
    local_50 = (float)param_1[0x3f4] * -14.0;
    local_4c = (float)param_1[0x3f5] * -14.0;
    local_48 = (float)param_1[0x3f6] * -14.0;
    FUN_00502580(piVar3,&local_50);
    fVar1 = (float)param_1[0x597] - (float)param_1[0x244] * 0.016666668;
    param_1[0x597] = (int)fVar1;
    if (((iVar4 != 0) || (fVar1 <= 0.0)) || (iVar4 = FUN_004fe460(0x41700000), iVar4 == 0)) {
      param_1[0x595] = 0x3da0d97c;
      param_1[0x593] = 0x42200000;
      FUN_00a947e0(0,(float)param_1[0x591] * (float)param_1[0x515],0,0);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 - (float10)(float)param_1[0x244]);
    fVar5 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar1 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar5 = (float10)0.5 + fVar5 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar5;
    param_1[0x590] =
         (int)(float)(fVar5 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fdd80(0x3d4ccccd,0x3c8efa35);
    piVar3 = (int *)FUN_00a8b8a0(local_20,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar3;
    param_1[0x3f5] = piVar3[1];
    param_1[0x3f6] = piVar3[2];
    param_1[0x3f7] = piVar3[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    FUN_00a947e0(0,(float)param_1[0x594] * (float)param_1[0x591] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    if ((param_1[0x3b3] & 0x8000U) == 0) {
      FUN_004fde50();
      return;
    }
  }
  return;
}

// 0050EEE0  Em0190::vf34C  size=144  [class]
void __fastcall Em0190::vf34C(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xf18) = 0x3c23d70a;
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x40;
  if (*(int *)(param_1 + 0x4a0) != 5) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x200;
  }
  *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfcfffbff;
  *(undefined4 *)(param_1 + 0xee8) = 0;
  *(undefined4 *)(param_1 + 0x15c4) = 0;
  if (-1 < *(int *)(param_1 + 0x1030)) {
    FUN_00502030(*(int *)(param_1 + 0x1030));
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4a0);
  if (iVar1 == 5) {
    FUN_00502030(3);
    return;
  }
  if (iVar1 == 4) {
    FUN_00502030(0x1c);
    return;
  }
  if ((iVar1 != 3) && ((*(uint *)(param_1 + 0xecc) & 0x8000) == 0)) {
    FUN_00502030(2);
    return;
  }
  FUN_00502030(1);
  return;
}

// 0050EF90  FUN_0050ef90  size=1042  [between]
/* WARNING: Removing unreachable block (ram,0x0050f0ca) */
/* WARNING: Removing unreachable block (ram,0x0050f254) */
/* WARNING: Removing unreachable block (ram,0x0050f38c) */

void FUN_0050ef90(float *param_1,int param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *local_c0;
  float local_a0;
  float local_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  undefined1 local_60;
  undefined1 auStack_5f [95];
  
  FUN_00a5dc60();
  iVar9 = FUN_00a12210();
  if (iVar9 != 0) {
    local_c0 = &local_60;
    fVar3 = *(float *)(iVar9 + 0x40);
    local_6c = *param_1;
    local_64 = param_1[2];
    local_80 = local_6c - fVar3;
    local_7c = 0.0;
    local_78 = local_64 - *(float *)(iVar9 + 0x48);
    local_74 = SQRT(local_78 * local_78 + local_80 * local_80 + 0.0);
    local_70 = local_74 * 0.16666667;
    if (param_2 != 0) {
      local_70 = 0.0;
      local_74 = 0.0;
    }
    local_8c = 0.0 - local_78;
    local_a0 = local_78 * 0.0 - local_80 * 0.0;
    local_9c = local_80 - 0.0;
    fVar4 = local_9c * local_9c + local_8c * local_8c + local_a0 * local_a0;
    local_88 = local_a0;
    local_84 = local_9c;
    if (fVar4 < 0.0 != (fVar4 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_8c = 0.0;
      local_88 = 1.0;
      local_84 = 0.0;
    }
    D3DXVec3Normalize(&local_8c,&local_8c);
    if ((int)local_c0 < 0) {
      puVar1 = (undefined4 *)(unaff_EBX + (int)local_c0 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = fVar3;
      }
      local_c0 = auStack_5f;
    }
    fVar4 = (local_74 + 0.0) * 0.5;
    fVar5 = (local_6c + fVar3) * 0.5;
    iVar9 = FUN_004fa760(param_1);
    fVar6 = fStack_94 * local_7c * 0.75;
    fVar7 = fStack_90 * local_7c * 0.75;
    fVar8 = local_8c * local_7c * 0.75;
    if (iVar9 == 0) {
      fVar6 = fVar4 - fVar6;
      fVar7 = 0.0 - fVar7;
      fVar8 = fVar5 - fVar8;
    }
    else {
      fVar6 = fVar6 + fVar4;
      fVar7 = fVar7 + 0.0;
      fVar8 = fVar8 + fVar5;
    }
    local_88 = fVar6 - local_88 * 0.16666667;
    local_84 = fVar7 - local_84 * 0.16666667;
    local_80 = fVar8 - local_80 * 0.16666667;
    local_a0 = local_88 - 0.0;
    local_9c = local_84 - 0.0;
    fStack_98 = local_80 - fVar3;
    fVar3 = fStack_98 * fStack_98 + local_a0 * local_a0 + local_9c * local_9c;
    if (fVar3 < 0.0 != (fVar3 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_a0 = 0.0;
      local_9c = 1.0;
      fStack_98 = 0.0;
    }
    D3DXVec3Normalize(&local_a0,&local_a0);
    local_a0 = local_a0 * local_80;
    if (unaff_EBX < unaff_EBP) {
      pfVar2 = (float *)(unaff_ESI + unaff_EBX * 0xc);
      if (pfVar2 != (float *)0x0) {
        *pfVar2 = local_80 * 0.0 + (float)local_c0;
        pfVar2[1] = fVar5 * local_80 + 1.12104e-44;
        pfVar2[2] = local_a0 + 0.0;
      }
      if (unaff_EBX + 1 < unaff_EBP) {
        pfVar2 = (float *)(unaff_ESI + (unaff_EBX + 1) * 0xc);
        if (pfVar2 != (float *)0x0) {
          *pfVar2 = fStack_90;
          pfVar2[1] = local_8c;
          pfVar2[2] = local_88;
        }
        if ((unaff_EBX + 2 < unaff_EBP) &&
           (pfVar2 = (float *)(unaff_ESI + (unaff_EBX + 2) * 0xc), pfVar2 != (float *)0x0)) {
          *pfVar2 = local_7c;
          pfVar2[1] = 1.12104e-44;
          pfVar2[2] = local_74;
        }
      }
    }
    FUN_00a5e090(&stack0xffffff2c);
  }
  return;
}

// 0050F3B0  FUN_0050f3b0  size=456  [between]
/* WARNING: Removing unreachable block (ram,0x0050f458) */

float * __thiscall FUN_0050f3b0(int param_1,float *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float unaff_EBX;
  float *pfVar7;
  float *pfVar8;
  float unaff_ESI;
  float *pfVar9;
  float *pfVar10;
  float unaff_retaddr;
  float fVar11;
  float fVar12;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_4;
  
  pfVar9 = (float *)0x0;
  pfVar7 = (float *)0x0;
  local_c = *(float *)(param_1 + 0x40);
  local_4 = *(undefined4 *)(param_1 + 0x48);
  local_18 = *(float *)(param_1 + 0x40) - *param_2;
  local_10 = *(float *)(param_1 + 0x48) - param_2[2];
  local_14 = 0.0;
  if ((ABS(local_18) < 0.0001) && (ABS(local_10) < 0.0001)) {
    return (float *)0x0;
  }
  fVar11 = local_18 * local_18 + local_10 * local_10;
  if (fVar11 < 0.0 != (fVar11 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_18 = 0.0;
    local_14 = 1.0;
    local_10 = 0.0;
  }
  D3DXVec3Normalize(&local_18,&local_18);
  puVar6 = *(undefined4 **)(param_1 + 0x1664);
  puVar1 = puVar6 + *(int *)(param_1 + 0x166c);
  pfVar8 = pfVar7;
  if (puVar6 != puVar1) {
    do {
      pfVar2 = (float *)*puVar6;
      pfVar8 = pfVar7;
      pfVar10 = pfVar9;
      fVar11 = unaff_ESI;
      fVar12 = unaff_EBX;
      if ((pfVar2 == (float *)0x0) || (param_2 == pfVar2)) goto LAB_0050f553;
      fVar4 = *pfVar2 - local_14;
      fVar5 = pfVar2[2] - local_c;
      if ((0.0001 <= ABS(fVar4)) || (0.0001 <= ABS(fVar5))) {
        fVar3 = fVar4 * fVar4 + fVar5 * fVar5;
        if (fVar5 * local_18 + fVar4 * 0.0 + 0.0 < 0.0) {
          if ((fVar3 <= unaff_retaddr) ||
             ((pfVar8 = pfVar2, fVar12 = fVar3, pfVar7 != (float *)0x0 && (fVar3 <= unaff_EBX))))
          goto LAB_0050f551;
        }
        else {
          pfVar10 = pfVar2;
          fVar11 = fVar3;
          if ((pfVar9 != (float *)0x0) && (unaff_ESI <= fVar3)) goto LAB_0050f551;
        }
      }
      else {
LAB_0050f551:
        pfVar8 = pfVar7;
        pfVar10 = pfVar9;
        fVar11 = unaff_ESI;
        fVar12 = unaff_EBX;
      }
LAB_0050f553:
      puVar6 = puVar6 + 1;
      pfVar7 = pfVar8;
      pfVar9 = pfVar10;
      unaff_ESI = fVar11;
      unaff_EBX = fVar12;
    } while (puVar6 != puVar1);
    if (pfVar10 != (float *)0x0) {
      return pfVar10;
    }
  }
  return pfVar8;
}

// 0050F590  FUN_0050f590  size=46  [between]
void __fastcall FUN_0050f590(undefined4 param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(0x1c,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 0050F5C0  FUN_0050f5c0  size=46  [between]
void __fastcall FUN_0050f5c0(undefined4 param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(9,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 0050F5F0  FUN_0050f5f0  size=50  [between]
void __thiscall FUN_0050f5f0(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 0050F630  FUN_0050f630  size=46  [between]
void __fastcall FUN_0050f630(undefined4 param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(0xd,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 0050F660  FUN_0050f660  size=49  [between]
void __fastcall FUN_0050f660(undefined4 param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(0x207,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 0050F6A0  FUN_0050f6a0  size=65  [between]
void __fastcall FUN_0050f6a0(int param_1)

{
  undefined1 local_160 [348];
  
  if ((*(uint *)(param_1 + 0xecc) & 0x1000) == 0) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x1000;
    FUN_004039a0(5,param_1,0);
    FUN_00a963e0(local_160);
  }
  return;
}

// 0050F6F0  FUN_0050f6f0  size=65  [between]
void __fastcall FUN_0050f6f0(int param_1)

{
  undefined1 local_160 [348];
  
  if ((*(uint *)(param_1 + 0xecc) & 0x200000) == 0) {
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x200000;
    FUN_004039a0(0x12,param_1,0);
    FUN_00a963e0(local_160);
  }
  return;
}

// 0050F740  FUN_0050f740  size=60  [between]
void __fastcall FUN_0050f740(int param_1)

{
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x12f8) == 0) {
    FUN_004117d0(0x17,param_1,param_1 + 0x1260);
    FUN_00a963e0(local_160);
  }
  return;
}

// 0050F780  FUN_0050f780  size=68  [between]
void __fastcall FUN_0050f780(int param_1)

{
  undefined1 local_160 [348];
  
  if ((*(uint *)(param_1 + 0xecc) & 0x4000000) == 0) {
    FUN_004039a0(0x15,param_1,0);
    FUN_00a963e0(local_160);
    *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x4000000;
  }
  return;
}

// 0050F7D0  FUN_0050f7d0  size=540  [between]
void __fastcall FUN_0050f7d0(int param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    if ((*(byte *)(param_1 + 0xecc) & 0x40) != 0) {
      FUN_005044d0();
    }
    FUN_004fe840();
    if (0.0 < *(float *)(param_1 + 0xf40)) {
      fVar2 = *(float *)(param_1 + 0xf40) - *(float *)(param_1 + 0x910) * 0.016666668;
      *(float *)(param_1 + 0xf40) = fVar2;
      if ((fVar2 < 0.0 != (fVar2 == 0.0)) && ((*(byte *)(param_1 + 0xecc) & 2) == 0)) {
        *(undefined4 *)(param_1 + 0xf40) = 0x3f800000;
      }
    }
    if ((*(byte *)(param_1 + 0xecc) & 1) == 0) {
      if ((*(int *)(param_1 + 0x15c4) == 0) || (iVar3 = FUN_004fe2c0(), iVar3 == 0)) {
        *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfff7ffff;
      }
      else {
        *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x80000;
      }
      if ((*(uint *)(param_1 + 0xecc) & 0x1000) != 0) {
        *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xffffefff;
        FUN_00a8c9b0(0,5,0x3f800000,0);
      }
      *(undefined4 *)(param_1 + 0xf3c) = 0;
    }
    else {
      if (*(float *)(param_1 + 0xf40) < 2.0) {
        FUN_0050f6a0();
      }
      iVar3 = FUN_004fe2c0();
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfff7ffff;
      }
      else {
        *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x80000;
      }
      if (((*(uint *)(param_1 + 0xecc) & 0x80000) != 0) && (0.1 < *(float *)(param_1 + 0xf40))) {
        *(undefined4 *)(param_1 + 0xf40) = 0x3f800000;
      }
    }
    iVar3 = FUN_00ac4770();
    if ((((iVar3 == 0) && ((DAT_01bea060 & 0x40000000) == 0)) &&
        ((uVar1 = *(uint *)(param_1 + 0xecc), (uVar1 & 0x20) != 0 ||
         ((((uVar1 & 1) != 0 && ((uVar1 & 2) != 0)) && (*(float *)(param_1 + 0xf40) <= 0.0)))))) &&
       (fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xf38),
       *(float *)(param_1 + 0xf38) = fVar2, 7.0 < fVar2)) {
      *(int *)(param_1 + 0xf3c) = *(int *)(param_1 + 0xf3c) + 1;
      *(undefined4 *)(param_1 + 0xf38) = 0;
      if ((*(int *)(param_1 + 0xf3c) < 0x65) &&
         ((*(int *)(param_1 + 0xf3c) < 0x10 || (((uVar1 & 2) != 0 && ((uVar1 & 0x80000) == 0)))))) {
        FUN_00502e60();
        return;
      }
      *(undefined4 *)(param_1 + 0xf3c) = 0;
      if (*(int *)(param_1 + 0x4a0) != 2) {
        *(undefined4 *)(param_1 + 0xf40) = *(undefined4 *)(param_1 + 0x15fc);
        FUN_004fe770();
        return;
      }
      *(undefined4 *)(param_1 + 0xf40) = 0x40a00000;
      FUN_004fe770();
      return;
    }
  }
  return;
}

// 0050F9F0  FUN_0050f9f0  size=964  [between]
void __fastcall FUN_0050f9f0(int param_1)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  float10 fVar9;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar8 = FUN_00ac4770();
  if (iVar8 != 0) {
    return;
  }
  if ((DAT_01bea060 & 0x40000000) != 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x618) == 0x26) || (iVar8 = FUN_004fcfd0(), iVar8 == 0)) {
LAB_0050fb85:
    bVar6 = true;
  }
  else {
    iVar3 = *(int *)(iVar8 + 0x618);
    bVar6 = false;
    if (iVar3 == 0) {
      if ((((*(byte *)(param_1 + 0xecc) & 4) != 0) || (*(int *)(param_1 + 0x15dc) != 0)) &&
         (*(float *)(param_1 + 0xf4c) <= 2.0)) {
        FUN_00ae1150(0xbf800000,1);
        local_20 = *(undefined4 *)(param_1 + 0x40);
        local_18 = *(undefined4 *)(param_1 + 0x48);
        local_14 = *(undefined4 *)(param_1 + 0x4c);
        local_1c = *(undefined4 *)(param_1 + 0xef4);
        FUN_00ac65e0(&local_20,1);
      }
    }
    else if (iVar3 == 1) {
      if ((*(byte *)(param_1 + 0xecc) & 4) == 0) {
        FUN_00ac64e0();
      }
      else {
        pfVar1 = (float *)(param_1 + 0x1400);
        *pfVar1 = *(float *)(iVar8 + 0x40);
        *(undefined4 *)(param_1 + 0x1404) = *(undefined4 *)(iVar8 + 0x44);
        *(undefined4 *)(param_1 + 0x1408) = *(undefined4 *)(iVar8 + 0x48);
        *(undefined4 *)(param_1 + 0x140c) = *(undefined4 *)(iVar8 + 0x4c);
        iVar8 = *(int *)(param_1 + 0xa84);
        *pfVar1 = (*(float *)(iVar8 + 0x40) - *pfVar1) * 0.08 + *pfVar1;
        *(float *)(param_1 + 0x1404) =
             (*(float *)(iVar8 + 0x44) - *(float *)(param_1 + 0x1404)) * 0.08 +
             *(float *)(param_1 + 0x1404);
        *(float *)(param_1 + 0x1408) =
             (*(float *)(iVar8 + 0x48) - *(float *)(param_1 + 0x1408)) * 0.08 +
             *(float *)(param_1 + 0x1408);
        *(float *)(param_1 + 0x140c) =
             (*(float *)(iVar8 + 0x4c) - *(float *)(param_1 + 0x140c)) * 0.08 +
             *(float *)(param_1 + 0x140c);
        FUN_00ac65e0(pfVar1,1);
        fVar4 = *pfVar1 - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
        fVar5 = *(float *)(param_1 + 0x1408) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
        if (SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 1.0) {
          FUN_00ae10c0(0x3fc00000);
          *(undefined4 *)(param_1 + 0xf4c) = 0x3dcccccd;
          goto LAB_0050fb85;
        }
      }
    }
    else if (iVar3 == 2) {
      iVar8 = *(int *)(param_1 + 0xa84);
      pfVar1 = (float *)(param_1 + 0x1400);
      bVar6 = true;
      *pfVar1 = (*(float *)(iVar8 + 0x40) - *pfVar1) * 0.12 + *pfVar1;
      *(float *)(param_1 + 0x1404) =
           (*(float *)(iVar8 + 0x44) - *(float *)(param_1 + 0x1404)) * 0.12 +
           *(float *)(param_1 + 0x1404);
      *(float *)(param_1 + 0x1408) =
           (*(float *)(iVar8 + 0x48) - *(float *)(param_1 + 0x1408)) * 0.12 +
           *(float *)(param_1 + 0x1408);
      *(float *)(param_1 + 0x140c) =
           (*(float *)(iVar8 + 0x4c) - *(float *)(param_1 + 0x140c)) * 0.12 +
           *(float *)(param_1 + 0x140c);
      FUN_00ac65e0(pfVar1,0);
    }
  }
  if (0.0 < *(float *)(param_1 + 0xf4c)) {
    *(float *)(param_1 + 0xf4c) =
         *(float *)(param_1 + 0xf4c) - *(float *)(param_1 + 0x910) * 0.016666668;
  }
  if (((*(uint *)(param_1 + 0xecc) & 1) == 0) && ((*(uint *)(param_1 + 0xecc) & 4) != 0)) {
    iVar8 = FUN_004fe2c0();
    if (iVar8 == 0) {
      *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) & 0xfff7ffff;
    }
    else {
      *(uint *)(param_1 + 0xecc) = *(uint *)(param_1 + 0xecc) | 0x80000;
    }
  }
  if ((*(byte *)(param_1 + 0xecc) & 4) != 0) {
    if ((*(int *)(param_1 + 0x15dc) == 0) && (*(float *)(param_1 + 0xf4c) <= 0.75)) {
      FUN_00aa92c0(0x19);
      *(undefined4 *)(param_1 + 0x15dc) = 1;
    }
    if ((*(byte *)(param_1 + 0xecc) & 4) != 0) goto LAB_0050fc9f;
  }
  if (*(int *)(param_1 + 0x15dc) == 0) {
    return;
  }
LAB_0050fc9f:
  if (((*(float *)(param_1 + 0xf4c) <= 0.0) && (iVar8 = FUN_00ac4770(), iVar8 == 0)) && (bVar6)) {
    *(short *)(param_1 + 0xf48) = *(short *)(param_1 + 0xf48) + 1;
    if ((*(uint *)(param_1 + 0xecc) & 0x80000) != 0) {
      *(undefined4 *)(param_1 + 0xf4c) = 0x3f000000;
      return;
    }
    if (*(short *)(param_1 + 0xf4a) <= *(short *)(param_1 + 0xf48)) {
      sVar2 = *(short *)(param_1 + 0xf48);
      sVar7 = FUN_00dde2d0(0,*(short *)(param_1 + 0x1608) + 1);
      if ((sVar2 <= sVar7) || (*(int *)(param_1 + 0x1608) <= (int)sVar2)) {
        *(undefined4 *)(param_1 + 0x15dc) = 0;
        *(undefined2 *)(param_1 + 0xf48) = 0;
        *(undefined2 *)(param_1 + 0xf4a) = 0xffff;
        if ((*(uint *)(param_1 + 0xecc) & 0x8000) == 0) {
          fVar4 = 1.0;
        }
        else {
          fVar4 = 1.5;
        }
        fVar9 = (float10)FUN_00dde300(fVar4 * 2.8,fVar4 * 4.0);
        *(float *)(param_1 + 0xf4c) = (float)fVar9;
        FUN_00503330();
        return;
      }
    }
    *(undefined4 *)(param_1 + 0xf4c) = 0x3e4ccccd;
    FUN_00503330();
  }
  return;
}

// 0050FDC0  FUN_0050fdc0  size=1554  [between]
void __fastcall FUN_0050fdc0(int *param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_3c [2];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  local_30 = 0.0;
  local_28 = 0.0;
  iVar5 = FUN_00a12210(2);
  if (iVar5 != 0) {
    local_30 = (float)param_1[0x10] - *(float *)(iVar5 + 0x40);
    local_28 = (float)param_1[0x12] - *(float *)(iVar5 + 0x48);
  }
  switch(param_1[0x187]) {
  case 0:
    iVar5 = FUN_00c19f60(param_1[0x2e7],1);
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 0x34c))();
      break;
    }
    pfVar1 = (float *)(param_1 + 600);
    FUN_00502810(pfVar1,iVar5,param_1[0x2a1] + 0x40);
    fVar3 = SQRT(((float)param_1[0x25a] - (float)param_1[0x12]) *
                 ((float)param_1[0x25a] - (float)param_1[0x12]) +
                 (*pfVar1 - (float)param_1[0x10]) * (*pfVar1 - (float)param_1[0x10]));
    param_1[0x248] = (int)fVar3;
    if (fVar3 < 20.0 != (fVar3 == 20.0)) {
      FUN_00502030(0xf);
      break;
    }
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    param_1[0x24b] = 0;
    fVar3 = SQRT(((float)param_1[0x12] - (float)param_1[0x25a]) *
                 ((float)param_1[0x12] - (float)param_1[0x25a]) +
                 ((float)param_1[0x10] - *pfVar1) * ((float)param_1[0x10] - *pfVar1));
    fVar8 = (float10)FUN_0043f4d0(fVar3 * 0.02,0x3e99999a,0x3f800000);
    param_1[0x591] = (int)(float)fVar8;
    if (fVar3 < 8.0) {
      param_1[0x591] = 0x3e99999a;
    }
    param_1[0x590] = 0;
    param_1[0x594] = 0;
    uVar7 = 0x16;
    param_1[0x592] = 0x3eb851ec;
    iVar5 = FUN_004fa760(pfVar1);
    if (iVar5 == 0) {
      uVar7 = 0x19;
    }
    FUN_004fa3b0(uVar7,0x3e4ccccd,0,0xffffffff);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x249] = 0x3e3851ec;
    param_1[0x593] = 0;
    param_1[0x595] = 0x3d80adfd;
    FUN_0050ef90(pfVar1,0);
    FUN_008e0ae0(0);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    fVar8 = (float10)(float)param_1[0x244] + (float10)(float)param_1[0x593];
    param_1[0x593] = (int)(float)fVar8;
    fVar9 = (float10)fcos((float10)3.1415927 - (float10)(float)param_1[0x595] * fVar8);
    fVar9 = (float10)0.5 + fVar9 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    param_1[0x590] =
         (int)(float)(fVar9 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    fVar9 = fVar8 * (float10)0.02 * fVar8 * (float10)0.02;
    fVar8 = (float10)1;
    if (fVar9 < fVar8) {
      fVar8 = fVar9;
    }
    fVar3 = (float)fVar8;
    FUN_00502150(0x3da3d70a,0x3c8efa35);
    FUN_00a947e0(0,(float)param_1[0x591] * (float)param_1[0x594] * (float)param_1[0x515],0,0);
    fVar4 = fVar3 * (float)param_1[0x249] - (float)param_1[0x24b];
    if (fVar4 < (float)param_1[0x24a]) {
      fVar4 = (float)param_1[0x24a];
    }
    param_1[0x24a] = (int)fVar4;
    FUN_00a581b0(local_3c,0x3dcccccd,fVar3 * (float)param_1[0x249]);
    param_1[0x24b] = (int)(fVar3 * (float)param_1[0x249]);
    param_1[0x14] = (int)(local_30 + local_3c[0]);
    param_1[0x16] = (int)(local_28 + local_34);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar3 = (float)param_1[0x593];
    if (!NAN(fVar3) && 50.0 < fVar3 != (fVar3 == 50.0)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
    }
    break;
  case 2:
    fVar3 = (float)param_1[0x249];
    param_1[0x249] = (int)((float)param_1[0x24a] + fVar3);
    FUN_00a581b0(local_3c,0x3dcccccd,(float)param_1[0x24a] + fVar3);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar3 = (float)param_1[0x2a4];
    if (!NAN(fVar3) && 36.0 < fVar3 != (fVar3 == 36.0)) {
      FUN_00502150(0x3dcccccd,0x3cd67750);
    }
    piVar6 = (int *)FUN_00a8b8a0(local_20,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar6;
    piVar2 = param_1 + 0x40e;
    param_1[0x3f5] = piVar6[1];
    param_1[0x3f6] = piVar6[2];
    param_1[0x3f7] = piVar6[3];
    param_1[0x14] = (int)(local_3c[0] + local_30);
    param_1[0x16] = (int)(local_34 + local_28);
    if (*piVar2 != 0) {
      FUN_00907640(piVar2,0,0);
    }
    local_30 = (float)param_1[0x3f4] * 14.0;
    local_2c = (float)param_1[0x3f5] * 14.0;
    local_28 = (float)param_1[0x3f6] * 14.0;
    local_24 = (float)param_1[0x3f7] * 14.0;
    FUN_00502580(piVar2,&local_30);
    fVar3 = (float)param_1[0x249];
    if (!NAN(fVar3) && 0.82 < fVar3 != (fVar3 == 0.82)) {
      param_1[0x595] = 0x3d2b92a6;
      param_1[0x593] = 0x42960000;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    fVar8 = (float10)(float)param_1[0x593] - (float10)(float)param_1[0x244];
    param_1[0x593] = (int)(float)fVar8;
    fVar9 = (float10)fcos((float10)3.1415927 - (float10)(float)param_1[0x595] * fVar8);
    fVar10 = (float10)0.5 + fVar9 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar10;
    fVar9 = fVar8 * (float10)0.013333334 * fVar8 * (float10)0.013333334;
    fVar8 = (float10)1;
    if (fVar9 < fVar8) {
      fVar8 = fVar9;
    }
    param_1[0x590] =
         (int)(float)(fVar10 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_00502150(0x3da3d70a,0x3c8efa35);
    FUN_00a947e0(0,(float)param_1[0x591] * (float)param_1[0x594] * (float)param_1[0x515],0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(local_3c,0x3dcccccd,((float)param_1[0x249] + 0.18) - (float)fVar8 * 0.18);
    param_1[0x14] = (int)(local_3c[0] + local_30);
    param_1[0x16] = (int)(local_34 + local_28);
    if ((float)param_1[0x593] <= 0.0) {
      (**(code **)(*param_1 + 0x7c))(param_1 + 0x14,param_1 + 0x24);
      FUN_008e0ae0(1);
      FUN_00502200();
    }
  }
  if (1 < param_1[0x187]) {
    param_1[0x3b3] = param_1[0x3b3] | 1;
  }
  return;
}

// 005103F0  FUN_005103f0  size=2890  [between]
void __fastcall FUN_005103f0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  float local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    pfVar1 = (float *)(param_1 + 0x3f8);
    fVar8 = (float10)FUN_004fa890(pfVar1);
    param_1[0x3c1] = (int)(float)(fVar8 - (float10)(float)param_1[0x3bd]);
    iVar5 = FUN_00c19f90(&local_4c,DAT_01d5bad4,1);
    if (iVar5 != 0) {
      *pfVar1 = local_4c;
      param_1[0x3f9] = local_48;
      param_1[0x3fa] = local_44;
      param_1[0x3fb] = 0x3f800000;
      fVar8 = (float10)FUN_004fa5b0(pfVar1);
      if (36.0 <= ((float)param_1[0x12] - (float)param_1[0x3fa]) *
                  ((float)param_1[0x12] - (float)param_1[0x3fa]) +
                  ((float)param_1[0x10] - *pfVar1) * ((float)param_1[0x10] - *pfVar1)) {
        if ((float10)1.0471976 <= ABS(fVar8)) {
          uVar7 = 0x19;
          iVar5 = FUN_004fa760(pfVar1);
          if (iVar5 != 0) {
            uVar7 = 0x16;
          }
          param_1[0x591] = 0x3ecccccd;
          param_1[0x590] = 0;
          param_1[0x594] = 0;
          FUN_004fa3b0(uVar7,0x3e4ccccd,0,0xffffffff);
          RayCastManager::getWork(param_1 + 0x40e);
          param_1[0x187] = param_1[0x187] + 1;
        }
        else {
          param_1[0x591] = 0x3f333333;
          param_1[0x590] = 0;
          param_1[0x594] = 0;
          param_1[0x592] = 0x3e99999a;
          param_1[0x407] = param_1[0x10];
          param_1[0x408] = param_1[0x11];
          param_1[0x409] = param_1[0x12];
          FUN_004fa3b0(0x10,0x3e4ccccd,0,0xffffffff);
          RayCastManager::getWork(param_1 + 0x40e);
          param_1[0x187] = 4;
        }
      }
      else {
        param_1[0x591] = 0x3f000000;
        param_1[0x590] = 0;
        param_1[0x594] = 0;
        param_1[0x592] = 0x3e19999a;
        FUN_005024e0();
        FUN_004fa3b0(0x13,0x3e4ccccd,0,0xffffffff);
        RayCastManager::getWork(param_1 + 0x40e);
        param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
        param_1[0x187] = 7;
      }
      param_1[0x593] = 0;
      param_1[0x595] = 0x3da0d97c;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 1:
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar2);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          ((float10)(float)param_1[0x244] + (float10)fVar2) *
                          (float10)(float)param_1[0x595]);
    fVar8 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar8;
    param_1[0x590] =
         (int)(float)((float10)(float)param_1[0x592] * fVar8 * (float10)(float)param_1[0x591]);
    FUN_004fa450((float)(fVar8 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x593];
    if (!NAN(fVar2) && 40.0 < fVar2 != (fVar2 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_004fa450(param_1[0x591]);
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_004fdd50(param_1 + 0x3f8,0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    break;
  case 2:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    fVar8 = (float10)FUN_004fa5b0(param_1 + 0x3f8);
    fVar9 = (float10)FUN_004fdd50(param_1 + 0x3f8,0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    fVar8 = (float10)FUN_00ddba30((float)(fVar9 - (float10)(float)fVar8));
    FUN_004fa450((float)(ABS(fVar8) * (float10)28.64789 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = 0x3f800000;
    if (ABS((float)fVar9) < 0.08726646) {
      param_1[0x595] = 0x3d8efa35;
      param_1[0x593] = 0x42340000;
      fVar2 = (float)param_1[0x591] * (float)(ABS(fVar8) * (float10)28.64789);
      param_1[0x591] = (int)fVar2;
LAB_005107c8:
      FUN_004fa450(fVar2);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    param_1[0x593] = (int)((float)param_1[0x593] - (float)param_1[0x244]);
    FUN_004fdd50(param_1 + 0x3f8,0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          (float10)(float)param_1[0x593] * (float10)(float)param_1[0x595]);
    fVar8 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar8;
    FUN_004fa450((float)(fVar8 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      param_1[0x591] = 0x3f333333;
      param_1[0x590] = 0;
      param_1[0x594] = 0;
      param_1[0x592] = 0x3e99999a;
      FUN_004fa3b0(0x10,0x3e4ccccd,0,0xffffffff);
      RayCastManager::getWork(param_1 + 0x40e);
      param_1[0x407] = param_1[0x10];
      param_1[0x408] = param_1[0x11];
      param_1[0x409] = param_1[0x12];
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x593] = 0;
      param_1[0x595] = 0x3da0d97c;
      return;
    }
    break;
  case 4:
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar2);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          ((float10)(float)param_1[0x244] + (float10)fVar2) *
                          (float10)(float)param_1[0x595]);
    fVar8 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar8;
    param_1[0x590] =
         (int)(float)(fVar8 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fdd50(param_1 + 0x3f8,0x3da3d70a,0x3c2b92a6);
    piVar6 = (int *)FUN_00a8b8a0(local_40,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar6;
    param_1[0x3f5] = piVar6[1];
    param_1[0x3f6] = piVar6[2];
    param_1[0x3f7] = piVar6[3];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x3f7] + (float)param_1[0x17]);
    FUN_004fa450((float)param_1[0x594] * (float)param_1[0x591]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x593];
    if (!NAN(fVar2) && 40.0 < fVar2 != (fVar2 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_004fa450(param_1[0x591]);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    pfVar1 = (float *)(param_1 + 0x3f8);
    FUN_004fdd50(pfVar1,0x3dcccccd,0x3cab92a6);
    piVar6 = (int *)FUN_00a8b8a0(local_30,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar6;
    param_1[0x3f5] = piVar6[1];
    param_1[0x3f6] = piVar6[2];
    param_1[0x3f7] = piVar6[3];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x3f7] + (float)param_1[0x17]);
    fVar2 = *pfVar1 - (float)param_1[0x10];
    fVar3 = (float)param_1[0x3fa] - (float)param_1[0x12];
    fVar4 = ((float)param_1[0x3fa] - (float)param_1[0x409]) * fVar3 +
            (*pfVar1 - (float)param_1[0x407]) * fVar2;
    if ((fVar4 < 0.0 != (fVar4 == 0.0)) || (fVar3 * fVar3 + fVar2 * fVar2 < 49.0)) {
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      fVar2 = (float)param_1[0x591];
      goto LAB_005107c8;
    }
    break;
  case 6:
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 - (float10)(float)param_1[0x244]);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar2 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar8 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar8;
    fVar8 = fVar8 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar8;
    piVar6 = (int *)FUN_00a8b8a0(local_20,(float)(fVar8 * (float10)(float)param_1[0x244]));
    param_1[0x3f4] = *piVar6;
    param_1[0x3f5] = piVar6[1];
    param_1[0x3f6] = piVar6[2];
    param_1[0x3f7] = piVar6[3];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x3f7] + (float)param_1[0x17]);
    FUN_004fa450((float)param_1[0x594] * (float)param_1[0x591]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      param_1[0x591] = 0x3f000000;
      param_1[0x590] = 0;
      param_1[0x594] = 0;
      param_1[0x592] = 0x3e19999a;
      FUN_005024e0();
      FUN_004fa3b0(0x13,0x3e4ccccd,0,0xffffffff);
      RayCastManager::getWork(param_1 + 0x40e);
      param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
      param_1[0x593] = 0;
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x595] = 0x3da0d97c;
      return;
    }
    break;
  case 7:
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar2);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          ((float10)(float)param_1[0x244] + (float10)fVar2) *
                          (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    fVar8 = (float10)(float)param_1[0x592] * fVar9 * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar8;
    param_1[0x15] =
         (int)(float)((float10)(float)param_1[0x15] - fVar8 * (float10)(float)param_1[0x244]);
    FUN_004fa450((float)(fVar9 * (float10)(float)param_1[0x591]));
    FUN_004fdd80(0x3d4ccccd,0x3c2b92a6);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x593];
    if (!NAN(fVar2) && 40.0 < fVar2 != (fVar2 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      FUN_004fa450(param_1[0x591]);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 8:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004fdd80(0x3d4ccccd,0x3c2b92a6);
    fVar2 = (float)param_1[0x15] - (float)param_1[0x590] * (float)param_1[0x244];
    param_1[0x15] = (int)fVar2;
    if (fVar2 - 3.5 < (float)param_1[0x3c1] + (float)param_1[0x3bd]) {
      param_1[0x595] = 0x3d20d97c;
      param_1[0x593] = 0x42a00000;
      FUN_004fa450(param_1[0x591]);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_0050f780();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 9:
    FUN_004fdd80(0x3d4ccccd,0x3c2b92a6);
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 - (float10)(float)param_1[0x244]);
    fVar8 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar2 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar8 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    fVar8 = (float10)(float)param_1[0x592] * fVar9 * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar8;
    param_1[0x15] =
         (int)(float)((float10)(float)param_1[0x15] - fVar8 * (float10)(float)param_1[0x244]);
    FUN_004fa450((float)(fVar9 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      fVar8 = (float10)FUN_004fddd0();
      param_1[0x3c1] = (int)(float)fVar8;
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00511020  Em0190::vf19C  size=427  [class]
void __thiscall Em0190::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined1 local_1f0 [44];
  undefined1 auStack_1c4 [4];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_1f0,(void *)(param_2 + 0x40),0x40);
  local_1c0 = uVar1;
  local_1bc = uVar2;
  local_1b8 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_1f0);
  }
  else {
    (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  }
  iVar5 = FUN_00a8eea0();
  fVar6 = (float)iVar5;
  iVar5 = FUN_00a8eeb0();
  fVar6 = fVar6 / (float)iVar5;
  fVar4 = 1.0 - fVar6;
  if ((float)param_1[0x3b6] < fVar4 == ((float)param_1[0x3b6] == fVar4)) {
    if (((float)param_1[0x3b5] < fVar4 != ((float)param_1[0x3b5] == fVar4)) &&
       (1.0 - (float)param_1[0x3b4] < (float)param_1[0x3b5])) {
      FUN_004039a0(7,param_1,0);
      FUN_00a963e0(auStack_1c4);
      FUN_004fea90();
    }
  }
  else if (1.0 - (float)param_1[0x3b4] < (float)param_1[0x3b6]) {
    FUN_004039a0(8,param_1,0);
    FUN_00a963e0(auStack_1c4);
    FUN_004fea90();
  }
  param_1[0x3b4] = (int)fVar6;
  if ((param_1[0x4ea] == 0) && (param_1[0x139] == 0)) {
    FUN_004117d0(0x16,param_1,param_1 + 0x4c4);
    FUN_00a963e0(auStack_1c4);
  }
  return;
}

// 005111D0  FUN_005111d0  size=592  [callgraph]
void __fastcall FUN_005111d0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    param_1[0x248] = 0x41700000;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar4 = (float10)FUN_00a8ec30(param_1 + 0x3f8);
    FUN_004fa620((float)fVar4,0x3cf5c28f,0x3c8efa35);
    fVar1 = (float)param_1[0x3f0] * (float)param_1[0x244];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4] * fVar1);
    param_1[0x15] = (int)((float)param_1[0x3f5] * fVar1 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x3f6] * fVar1 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x3f7] * fVar1 + (float)param_1[0x17]);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    break;
  case 3:
    goto LAB_005113f1;
  default:
    goto switchD_005111f6_default;
  }
  FUN_00a8c9b0(0,1,0x3f800000,0);
  FUN_00a8c9b0(0,0x1c,0x3f800000,0);
  FUN_00a8c9b0(0,0xd,0x3f800000,0);
  FUN_00a8c9b0(0,0x207,0x3f800000,0);
  FUN_00a8c9b0(0,7,0x3f800000,0);
  FUN_00a8c9b0(0,8,0x3f800000,0);
  FUN_004039a0(10,param_1,0);
  FUN_00a963e0(local_160);
  pcVar2 = *(code **)(*param_1 + 0x20);
  param_1[0x139] = 1;
  (*pcVar2)();
  FUN_00a8c9b0(0,0x191,0,0);
  (**(code **)(*param_1 + 200))(0);
  (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
  (**(code **)(*param_1 + 0x318))();
  FUN_00c4d1a0(param_1[0x13c],0);
  FUN_00a94bc0(0,0);
  param_1[0x187] = param_1[0x187] + 1;
LAB_005113f1:
  iVar3 = FUN_00a8c890(0);
  if (*(int *)(iVar3 + 0x98) == 0) {
    FUN_00a805f0();
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005111f6_default:
  return;
}

// 005116B0  FUN_005116b0  size=1026  [callgraph]
void __fastcall FUN_005116b0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float fStack_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float fStack_1c4;
  undefined4 uStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 auStack_164 [4];
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a8c9b0(0,0x207,0x3f800000,0);
    FUN_00a8c9b0(0,0xd,0x3f800000,0);
    FUN_004fa9d0();
    FUN_004fe770();
    FUN_004039a0(9,param_1,0);
    FUN_00a963e0(local_160);
    FUN_004faac0();
    (**(code **)(*param_1 + 200))(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x44160000;
    param_1[0x249] = 0x41200000;
    param_1[0x3b3] = param_1[0x3b3] | 0x4000;
    param_1[0x3c1] = 0;
    param_1[0x3c6] = 0x3c23d70a;
    FUN_00aa3f60(5);
    FUN_00a94bc0(1,0);
    RayCastManager::getWork(param_1 + 0x40e);
    param_1[0x3b3] = param_1[0x3b3] | 0x200;
    param_1[0x517] = 0;
    if (param_1[0x508] != 0) {
      FUN_00916360();
    }
    if (param_1[0x510] != 0) {
      FUN_00916360();
    }
    FUN_00900ca0();
    return;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      iVar3 = FUN_00a12210(0);
      if (iVar3 != 0) {
        local_1e0 = 0.0;
        local_1dc = 0.0;
        local_1d8 = 3.5;
        local_1d0 = 0.0;
        local_1cc = 0.0;
        local_1c8 = -9.5;
        D3DXVec3TransformNormal(&local_1e0,&local_1e0,(void *)(iVar3 + 0x10));
        FID_conflict__memcpy(&fStack_1ac,(void *)(iVar3 + 0x10),0x40);
        uStack_17c = 0;
        uStack_178 = 0;
        uStack_174 = 0;
        D3DXVec3TransformCoord(&local_1dc,&local_1dc,&fStack_1ac);
        if (param_1[0x40e] != 0) {
          uStack_1b4 = 0;
          iVar3 = FUN_00905f80(param_1 + 0x40e,&uStack_1b4);
          if (iVar3 != 0) {
            param_1[0x187] = param_1[0x187] + 1;
          }
        }
        uVar2 = FUN_009f8b40(0,0,0);
        uVar2 = FUN_00410130(7,uVar2);
        fStack_1b0 = local_1d0 + local_1e0;
        fStack_1ac = local_1cc + local_1dc;
        fStack_1a8 = local_1c8 + local_1d8;
        fStack_1a4 = fStack_1c4 + fStack_1d4;
        FUN_0090f540(param_1 + 0x40e,0,&local_1e0,&fStack_1b0,0x3fc00000,uVar2,"em0190_die");
      }
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 2:
    FUN_00a8c9b0(0,1,0x3f800000,0);
    FUN_00a8c9b0(0,0x1c,0x3f800000,0);
    FUN_00a8c9b0(0,9,0x3f800000,0);
    FUN_004fd420();
    FUN_00e5e0c0("et0020_se_dmg_explosion",param_1,0xffffffff,0);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    FUN_004039a0(0xb,param_1,0);
    FUN_00a963e0(auStack_164);
    (**(code **)(*param_1 + 0x20))();
    FUN_00a8c9b0(0,0x191,0,0);
    (**(code **)(*param_1 + 200))(0);
    (**(code **)(*param_1 + 0x318))();
    FUN_00c4d1a0(param_1[0x13c],0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x1af] = 1;
    return;
  case 3:
    iVar3 = FUN_00a8c890(0);
    if (*(int *)(iVar3 + 0x98) == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00a805f0();
  }
  return;
}

// 00511AD0  FUN_00511ad0  size=1194  [callgraph]
void __fastcall FUN_00511ad0(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_004fd5e0();
    FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3c1] = 0x41480000;
    param_1[0x3c6] = 0x3ca3d70a;
    return;
  case 1:
    if (-0.6 < ((float)param_1[0x15] - (float)param_1[0x3c1]) - (float)param_1[0x3bd]) {
      FUN_008e0ae0(0);
      param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
      FUN_004faa50();
      param_1[0x407] = param_1[0x10];
      param_1[0x408] = param_1[0x11];
      param_1[0x409] = param_1[0x12];
      FUN_00aa4080(0x20,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
      iVar2 = param_1[0x2a1];
      param_1[0x3fc] = *(int *)(iVar2 + 0x40);
      param_1[0x3fd] = *(int *)(iVar2 + 0x44);
      param_1[0x3fe] = *(int *)(iVar2 + 0x48);
      param_1[0x3ff] = *(int *)(iVar2 + 0x4c);
      FUN_0050f6f0();
      param_1[0x24b] = 0;
      param_1[0x24f] = param_1[0x3c8];
      return;
    }
    break;
  case 2:
    fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    FUN_004fa620((float)fVar3,0x3c23d70a,0x3c8efa35);
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      FUN_0050f740();
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x248] = 0x42200000;
      FUN_008e0ae0(1);
      FUN_00aa4080(0x21,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((param_1[0x3b3] & 0x100U) != 0) {
      FUN_00aa4080(0x26,0,0x3ecccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
      FUN_004fe7a0();
      FUN_004faa50();
      param_1[0x248] = 0x3f800000;
      param_1[0x187] = 5;
      param_1[0x249] = 0x42700000;
      param_1[0x3f4] = (int)((float)param_1[0x3f4] * -0.1);
      param_1[0x3f5] = (int)((float)param_1[0x3f5] * -0.1);
      param_1[0x3f6] = (int)((float)param_1[0x3f6] * -0.1);
      param_1[0x3f7] = (int)((float)param_1[0x3f7] * -0.1);
      return;
    }
    if (((param_1[0x3b3] & 0x10000U) != 0) && (param_1[0x495] == 0xe4)) {
      param_1[0x24b] = (int)((float)param_1[0x244] + (float)param_1[0x24b]);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_004faa50();
      FUN_00aa4080(0x22,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004fe7a0();
      return;
    }
    if ((30.0 < (float)param_1[0x24b]) || (iVar2 = FUN_004fe4f0(0x40a00000), iVar2 == 0)) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_004faa50();
      FUN_00aa4080(0x22,0,0x3ecccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004fe7a0();
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_005024e0();
      param_1[0x248] = 0x40e66666;
      param_1[0x187] = 6;
      FUN_00aa4080(0xd,0,0x3f000000,0x3f800000,0,0xbf800000,0x3f800000);
      return;
    }
    break;
  case 5:
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x3b3] = param_1[0x3b3] & 0xfffffeff;
                    /* WARNING: Could not recover jumptable at 0x00511f3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00502030(0x2c);
    }
  }
  return;
}

// 00511FA0  FUN_00511fa0  size=962  [callgraph]
void __fastcall FUN_00511fa0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_30 [3];
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  switch(param_1[0x187]) {
  case 0:
    iVar3 = param_1[0x2a1];
    param_1[0x3f8] = *(int *)(iVar3 + 0x40);
    param_1[0x3f9] = *(int *)(iVar3 + 0x44);
    param_1[0x3fa] = *(int *)(iVar3 + 0x48);
    param_1[0x3fb] = *(int *)(iVar3 + 0x4c);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3b3] = param_1[0x3b3] & 0xffffffbf;
    param_1[0x3b3] = param_1[0x3b3] | 0x400;
    param_1[0x3b3] = param_1[0x3b3] & 0xfffff7ff;
    return;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar4 = (float10)FUN_00a8ec30(param_1 + 0x3f8);
    fVar4 = (float10)FUN_004fa620((float)fVar4,0x3ca3d70a,0x3cb2b8c2);
    if (fVar4 < (float10)0.08726646) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x407] = param_1[0x10];
      param_1[0x408] = param_1[0x11];
      param_1[0x409] = param_1[0x12];
      FUN_00aa4080(0x1c,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x3ca] = 0;
    param_1[0x3c9] = 0;
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x1d,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_0050f6f0();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((param_1[0x3b3] & 0x100U) != 0) {
      FUN_00aa4080(0x24,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 5;
      FUN_004fe7a0();
      param_1[0x249] = 0x42200000;
    }
    param_1[0x3b3] = param_1[0x3b3] | 0x20;
    pfVar1 = (float *)(param_1 + 0x3f8);
    fVar4 = (float10)FUN_00a8ec30(pfVar1);
    FUN_004fa620((float)fVar4,0x3cf5c28f,0x3c8efa35);
    FUN_00a8b8a0(local_30,(float)param_1[0x244] * 0.71);
    local_30[1] = 0.0;
    param_1[0x14] = (int)((float)param_1[0x14] + local_30[0]);
    param_1[0x15] = param_1[0x15];
    param_1[0x16] = (int)((float)param_1[0x16] + local_30[2]);
    param_1[0x17] = (int)((float)param_1[0x17] + local_24);
    fVar2 = ((float)param_1[0x16] - (float)param_1[0x3fa]) *
            ((float)param_1[0x16] - (float)param_1[0x3fa]) +
            ((float)param_1[0x14] - *pfVar1) * ((float)param_1[0x14] - *pfVar1);
    if (fVar2 < 9.0 == (fVar2 == 9.0)) {
      local_20 = param_1[0x407];
      local_1c = param_1[0x408];
      local_18 = param_1[0x409];
      local_14 = 0x3f800000;
      iVar3 = FUN_004fa830(param_1 + 0x10,pfVar1,&local_20);
      if (iVar3 == 0) {
        return;
      }
    }
    FUN_00aa4080(0x1e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004fe7a0();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3ca] = 0;
    return;
  case 5:
    iVar3 = FUN_0041c960(param_1[0x2a1]);
    if ((iVar3 == 0) || (iVar3 = FUN_00416db0(), iVar3 == 0)) {
      iVar3 = 0x3f800000;
    }
    else {
      fVar2 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar2 * 0.95);
      if (0.1 <= fVar2 * 0.95) {
        iVar3 = param_1[0x248];
      }
      else {
        param_1[0x248] = 0x3dcccccd;
        iVar3 = param_1[0x248];
      }
    }
    FUN_00a96030(0,iVar3);
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 00512380  FUN_00512380  size=571  [callgraph]
void __fastcall FUN_00512380(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  float fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x3b3] = param_1[0x3b3] | 0x40;
    param_1[0x249] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x1bb] = 0;
    param_1[0x3b3] = param_1[0x3b3] & 0xffffffbf;
    param_1[0x3bd] = 0;
    param_1[0x3c1] = (int)((float)param_1[0x405] + 15.0);
  case 1:
    param_1[0x187] = param_1[0x187] + 1;
    if (1.0 <= ((float)param_1[0x15] - (float)param_1[0x3c1]) - (float)param_1[0x3bd]) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    if ((param_1[0x3b3] & 0x2000U) != 0) {
      param_1[0x187] = 3;
      param_1[0x3c1] = param_1[0x405];
      param_1[0x24a] = 0x3edf66f3;
      param_1[0x24b] = 0x41a00000;
      FUN_0050f6a0();
      return;
    }
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x3c9] = 0;
    param_1[0x3ca] = 0x3e860a92;
    (*pcVar1)(0x41200000);
    uVar2 = 0x42180000;
    break;
  case 3:
    param_1[0x3b3] = param_1[0x3b3] & 0xffffffdf;
    if (((float)param_1[0x15] - (float)param_1[0x3c1]) - (float)param_1[0x3bd] < 1.0) {
      param_1[0x3b3] = param_1[0x3b3] | 0x20;
      fVar3 = (float)param_1[0x24a] - (float)param_1[0x244] * 0.0034906585;
      param_1[0x24a] = (int)fVar3;
      if (fVar3 < 0.0 != (fVar3 == 0.0)) {
        param_1[0x3b3] = param_1[0x3b3] & 0xffffffdf;
        param_1[0x24a] = 0;
        fVar3 = (float)param_1[0x24b] - (float)param_1[0x244];
        param_1[0x24b] = (int)fVar3;
        if (fVar3 < 0.0 != (fVar3 == 0.0)) {
          param_1[0x3b3] = param_1[0x3b3] & 0xffffdfff;
          param_1[0x187] = 2;
          param_1[0x3c1] = (int)((float)param_1[0x405] + 25.0);
          FUN_004fe770();
        }
      }
    }
    param_1[0x3c9] = 0;
    param_1[0x3ca] = param_1[0x24a];
    param_1[0x3cc] =
         (int)(((float)param_1[0x24a] - (float)param_1[0x3cc]) * 0.1 * (float)param_1[0x244] +
              (float)param_1[0x3cc]);
    uVar2 = 0x41c80000;
    break;
  default:
    return;
  }
  FUN_00500030(uVar2,1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 005125D0  FUN_005125d0  size=71  [callgraph]
void FUN_005125d0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  switch(uVar1) {
  case 1:
    FUN_004fb3d0();
    return;
  case 2:
    FUN_00507580();
    return;
  case 3:
    FUN_004fb710();
    return;
  case 4:
    FUN_005079c0();
    return;
  case 5:
    FUN_004fb7a0();
    return;
  case 6:
    FUN_004fee30();
    return;
  default:
    return;
  }
}

// 00514EF0  Em0190::vf48  size=263  [class]
void __fastcall Em0190::vf48(int *param_1)

{
  float fVar1;
  int iVar2;
  
  BehaviorEmBase::vf48();
  param_1[0x3b3] = param_1[0x3b3] & 0xffffffd8;
  if (param_1[0x579] != 0) {
    fVar1 = (float)param_1[0x578] - (float)param_1[0x244];
    param_1[0x578] = (int)fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      (**(code **)(*param_1 + 0x110))(0);
    }
  }
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 0x20) != 0)) {
    DAT_01dc08e8 = param_1[0x21d];
    DAT_01dc08e4 = param_1[0x21c];
    DAT_01dc08ec = 1;
  }
  if ((0.0 < (float)param_1[0x3b9] != ((float)param_1[0x3b9] == 0.0)) &&
     (fVar1 = (float)param_1[0x3b9], param_1[0x3b9] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    param_1[0x3b8] = 0;
    param_1[0x3b9] = -0x40800000;
  }
  param_1[0x586] = (int)((float)param_1[0x586] - (float)param_1[0x244]);
  iVar2 = FUN_004faaf0();
  if (iVar2 == 0) {
    param_1[0x3b3] = param_1[0x3b3] & 0xf7ffffff;
    FUN_004fac10();
    lib::StaticArray<Entity*,2>::StaticArray<Entity*,2>();
    return;
  }
  param_1[0x3b3] = param_1[0x3b3] | 0x8000000;
  FUN_004fac10();
  lib::StaticArray<Entity*,2>::StaticArray<Entity*,2>();
  return;
}

// 00515000  Em0190::vf264  size=488  [class]
undefined4 __thiscall Em0190::vf264(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0040ac60(param_2);
  iVar1 = FUN_00932720();
  if (iVar1 == 0x150) {
    param_1[0x2c0] = param_1[0x2c0] | 0xc0;
  }
  if (param_1[0x2c9] != -1) {
    iVar1 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar1 != 0) {
      FUN_00a5dcc0(iVar1);
    }
  }
  iVar1 = FUN_00aa0ba0(param_1[0x2c2],param_1[0x2e7]);
  if (iVar1 != 0) {
    param_1[0x3b3] = param_1[0x3b3] | 0x10;
  }
  FUN_00aa0920(param_1[0x2c3]);
  if (param_1[0x1f6] != 0) {
    iVar1 = *(int *)(*(int *)(param_1[0x1f6] + 0x810) + 0x34);
    if (iVar1 != 0) {
      FUN_004fbe50(iVar1,&DAT_01b7bd48);
    }
    FUN_00c6e0b0(param_1 + 0x598,0xffffffff);
  }
  if ((param_1[0x128] == 3) || ((param_1[0x3b3] & 0x8000U) != 0)) {
    FUN_005024e0();
  }
  iVar1 = param_1[0x128];
  if (iVar1 == 5) {
    param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
    cXmlBinary::cXmlBinary_62();
    FUN_00a8edf0(0x32);
    if (((short)param_1[0x541] != 0) && (param_1[0x2e1] == 5)) {
      FUN_00502030(6);
      return 1;
    }
    iVar1 = FUN_00c19c00(0,0,0);
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
  }
  else {
    if (iVar1 == 2) {
      FUN_00502030(0x1b);
      return 1;
    }
    if (iVar1 == 4) {
      FUN_00502030(0x21);
      return 1;
    }
    if (param_1[0x2e1] == 2) {
      FUN_00502030(0x26);
      return 1;
    }
    if ((param_1[0x2e1] == 3) || ((short)param_1[0x541] != 0)) {
      (**(code **)(*param_1 + 0x220))(0x40a00000);
      FUN_00502030(0x31);
      return 1;
    }
  }
  (**(code **)(*param_1 + 0x34c))();
  return 1;
}

// 005151F0  FUN_005151f0  size=210  [callgraph]
void __fastcall FUN_005151f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cab0();
  switch(uVar1) {
  case 1:
    FUN_0050af70();
    break;
  case 2:
    FUN_005145d0();
    break;
  case 3:
    FUN_0050e9e0();
    break;
  case 0x1c:
    FUN_00507bb0();
    break;
  case 0x1e:
    FUN_004ff630();
    break;
  case 0x24:
    FUN_0050b030();
    break;
  case 0x30:
    FUN_0050a8b0();
  }
  uVar1 = FUN_00a8cab0();
  switch(uVar1) {
  case 0x1f:
  case 0x20:
  case 0x24:
  case 0x25:
  case 0x2f:
  case 0x30:
    break;
  default:
    if (((*(int *)(param_1 + 0x4e4) == 0) &&
        (((*(int *)(param_1 + 0xa84) == 0 ||
          ((iVar2 = FUN_00a8cab0(), iVar2 != 0x3e && (iVar2 = FUN_00a8cab0(), iVar2 != 0x3d)))) &&
         ((DAT_01bea060 & 0x2000000) == 0)))) && (iVar2 = FUN_00502430(), iVar2 != 0)) {
      FUN_004fe7a0();
      FUN_004faa30();
      FUN_004faa50();
      return;
    }
  }
  return;
}

// 005153F0  Em0190::vf32C  size=1698  [class]
undefined4 __fastcall Em0190::vf32C(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 unaff_EBX;
  int *piVar8;
  undefined4 uVar9;
  int unaff_EDI;
  int *piVar10;
  float10 fVar11;
  undefined4 uVar12;
  int local_50;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  piVar8 = (int *)0x0;
  param_1[0x1a1] = 0;
  if ((param_1[0x128] != 1) && ((*(byte *)(param_1 + 0x130) & 1) != 0)) {
    FUN_00ac2080(0);
    iVar5 = FUN_00a8ef10();
    if ((iVar5 == 0) && ((param_1[0x139] == 0 && (param_1[0x186] != 0x21)))) {
      piVar10 = (int *)param_1[0x19f];
      local_50 = 0x41200000;
      piVar7 = piVar10 + param_1[0x1a1] * 0x54;
      if (piVar10 == piVar7) {
        return 0;
      }
      do {
        iVar5 = *piVar10;
        if (((((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 2)) &&
            ((iVar5 != 0x1b0 && (iVar5 != 0x147)))) &&
           (iVar5 = FUN_00a81330(), iVar5 != param_1[0x13c])) {
          if (iVar5 != 0) {
            piVar8 = (int *)FUN_00a7c8a0();
          }
          iVar5 = FUN_00a8f040(piVar10);
          if (iVar5 == 0) {
            iVar5 = FUN_00a8eea0();
            if (iVar5 < 1) {
LAB_00515523:
              if (((piVar8 != (int *)0x0) && (iVar5 = (**(code **)(*piVar8 + 0x17c))(), iVar5 != 0))
                 && (iVar5 = (**(code **)(*piVar8 + 0x184))(*piVar10,param_1[0x13c],piVar10),
                    iVar5 == 9)) goto LAB_00515557;
            }
            else if (piVar8 != (int *)0x0) {
              if ((*(byte *)(piVar8 + 0x130) & 0x10) != 0) {
                (**(code **)(*param_1 + 0x21c))(piVar8,(char)piVar10[4],0x3c23d70a,0);
                local_50 = 0x40000000;
              }
              goto LAB_00515523;
            }
            FUN_00a8eea0();
            (**(code **)(*param_1 + 0x30c))(piVar10[1],0);
            FUN_00a8eea0();
            iVar5 = *piVar10;
            if (((iVar5 == 0x47) || (iVar5 == 0x48)) || (iVar5 == 0x42)) {
              unaff_EBX = 0x40000000;
            }
            (**(code **)(*param_1 + 0x220))(unaff_EBX);
            uVar1 = piVar10[0x24];
            uVar12 = 1;
            if (((*(byte *)(param_1 + 0x2c0) & 0x10) == 0) || (iVar5 = FUN_00416910(6), iVar5 != 0))
            {
              if (((piVar10[0x23] & 0x600U) != 0) ||
                 (bVar4 = false, (piVar10[0x24] & 0x40000U) != 0)) {
                bVar4 = true;
              }
              if (piVar10[0x25] != 0) {
                if ((uVar1 >> 0x11 & 1) != 0) {
                  FUN_004fea90();
                  FUN_00a8e680(piVar10,0,0x3e4ccccd);
LAB_00515800:
                  FUN_00a8e5d0(param_1,piVar10,0);
                  if ((*(byte *)((int)piVar10 + 0x92) & 1) == 0) {
                    uVar12 = 0x101;
                  }
                  else {
                    iVar5 = FUN_00a8eea0();
                    if (iVar5 < 1) {
                      if (param_1[0x139] == 0) {
                        FUN_00502030(0x1a);
                      }
                      if ((*(byte *)((int)piVar10 + 0x92) & 1) != 0) {
                        piVar8 = (int *)FUN_00c209f0();
                        (**(code **)(*piVar8 + 0x14))(0xe);
                      }
                      uVar9 = 0;
                      if ((piVar10[0x24] & 0x200U) != 0) {
                        uVar9 = 4;
                      }
                      FUN_004fa000();
                      FUN_004fe7d0();
                      (**(code **)(param_1[0x37c] + 8))(0x3f800000,0,0);
                      pcVar2 = *(code **)(*param_1 + 0x344);
                      param_1[0x139] = 1;
                      (*pcVar2)(9,uVar9,1);
                    }
                  }
                  (**(code **)(*param_1 + 0x198))(unaff_EDI,piVar10,uVar12);
                  return 1;
                }
                iVar5 = FUN_00a98220(piVar10);
                if ((((iVar5 != 0) && (iVar5 = FUN_00ac82f0(), iVar5 != 0)) &&
                    ((iVar5 = FUN_00ac8350(), iVar5 != 0 &&
                     (((iVar5 = FUN_00a8cab0(), iVar5 == 0x20 ||
                       ((int *)param_1[0xdc] == (int *)0x0)) || (*(int *)param_1[0xdc] == 0)))))) ||
                   ((iVar5 = FUN_00a98220(piVar10), iVar5 != 0 && (bVar4)))) goto LAB_00515800;
              }
            }
            fVar11 = (float10)FUN_00ddba30((float)piVar10[0xc] - (float)param_1[0x25]);
            param_1[0x245] = (int)(float)fVar11;
            param_1[0x3b7] = param_1[0x3b7] + local_50;
            param_1[0x3b9] = 0x42400000;
            param_1[0x3b8] = param_1[0x3b8] + 1;
            iVar5 = FUN_00a8eea0();
            if (0 < iVar5) goto LAB_00515714;
            if ((*(byte *)(param_1 + 0x2c0) & 0x10) == 0) {
              iVar5 = FUN_004fb860();
              if (iVar5 == 0) goto LAB_00515714;
              uVar12 = FUN_00ac8120();
              iVar5 = FUN_004fb830(uVar12);
              if (iVar5 == 0) goto LAB_00515714;
            }
            FUN_00a8ee20(1);
            FUN_00a8ee10(1000);
LAB_00515714:
            param_1[0x3c8] = 0;
            iVar5 = FUN_00a8eea0();
            if (iVar5 < 1) {
              param_1[0x139] = 1;
              uVar1 = piVar10[0x24];
              uVar12 = 0;
              if ((piVar10[0x23] & 0x100000U) != 0) {
                uVar12 = 2;
              }
              iVar5 = FUN_004fb860();
              if (iVar5 != 0) {
                FUN_004fefb0();
              }
              if ((*(byte *)((int)piVar10 + 0x92) & 1) != 0) {
                piVar8 = (int *)FUN_00c209f0();
                (**(code **)(*piVar8 + 0x14))(0xe);
              }
              if ((piVar10[0x24] & 0x200U) != 0) {
                uVar12 = 4;
              }
              (**(code **)(*param_1 + 0x344))(9,uVar12,uVar1 >> 0xb & 1);
              FUN_004fa000();
              FUN_004fe7d0();
              FUN_00502030(0x1a);
              (**(code **)(param_1[0x37c] + 8))(0x3f800000,0,0);
            }
            else {
              FUN_00513f80(piVar10);
            }
            (**(code **)(*param_1 + 0x198))(unaff_EDI,piVar10,1);
            param_1[0x518] = 0;
            if (unaff_EDI == 0) {
              return 1;
            }
            fStack_30 = *(float *)(unaff_EDI + 0x40) - (float)param_1[0x10];
            fStack_28 = *(float *)(unaff_EDI + 0x48) - (float)param_1[0x12];
            fStack_24 = *(float *)(unaff_EDI + 0x4c) - (float)param_1[0x13];
            fStack_2c = 0.0;
            if ((fStack_30 == 0.0) && (fStack_28 == 0.0)) {
              return 1;
            }
            fVar3 = fStack_28 * fStack_28 + fStack_30 * fStack_30;
            if (fVar3 < 0.0 == (fVar3 == 0.0)) {
              FUN_00ddf460(&fStack_30,&fStack_30);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              fStack_30 = 0.0;
              fStack_2c = 1.0;
              fStack_28 = 0.0;
            }
            pfVar6 = (float *)FUN_00a925a0(&fStack_40);
            fVar3 = pfVar6[2] * fStack_28 + fStack_30 * *pfVar6 + pfVar6[1] * fStack_2c;
            pfVar6 = (float *)FUN_00a925a0(auStack_20);
            fStack_40 = pfVar6[2] * fStack_2c - fStack_28 * pfVar6[1];
            fStack_3c = fStack_28 * *pfVar6 - fStack_30 * pfVar6[2];
            fStack_38 = fStack_30 * pfVar6[1] - *pfVar6 * fStack_2c;
            fStack_30 = fStack_40;
            fStack_2c = fStack_3c;
            fStack_28 = fStack_38;
            if (0.0 < fStack_3c) {
              fVar11 = (float10)FUN_00ddbb50(fVar3);
              param_1[0x518] = (int)(float)fVar11;
              return 1;
            }
            fVar11 = (float10)FUN_00ddbb50(fVar3);
            param_1[0x518] = (int)(float)-fVar11;
            return 1;
          }
        }
LAB_00515557:
        piVar10 = piVar10 + 0x54;
        if (piVar10 == piVar7) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

// 00515FD0  Em0190::vf40  size=2503  [class]
undefined4 __fastcall Em0190::vf40(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  float10 fVar9;
  int *piVar10;
  int local_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 auStack_1d0 [112];
  undefined1 auStack_160 [348];
  
  iVar2 = BehaviorEmBase::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  param_1[0x2bd] = param_1[0x128];
  param_1[0x2c0] = param_1[0x12a];
  if (param_1[0x128] == 1) {
    iVar2 = 0;
    param_1[0x3ec] = 0x42840000;
    param_1[0x3ed] = 0x42840000;
    if (param_1[0x40a] == 0) {
      iVar3 = FUN_00e5e0c0("et0020_se_mov_hovering",param_1,1,0);
      param_1[0x40a] = iVar3;
    }
    FUN_00a8caf0(0,0,0,0);
    local_1f4 = 0;
    if ((short)param_1[0xc9] < 1) {
      return 1;
    }
    do {
      iVar3 = param_1[200];
      iVar4 = *(int *)(*(int *)(iVar3 + 0x60 + iVar2) + 0x40);
      if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0163d9a8), iVar4 != 0)) {
        puVar1 = (uint *)(iVar3 + 0x38 + iVar2);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      local_1f4 = local_1f4 + 1;
      iVar2 = iVar2 + 0x70;
    } while (local_1f4 < (short)param_1[0xc9]);
    return 1;
  }
  FUN_00a929d0();
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
    if (iVar3 != 0) {
      FUN_008f6410(param_1[0x13c],iVar2,local_1e0);
      FUN_008f2cd0(1);
      puVar5 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar5);
      FUN_008f03a0(8,1);
      FUN_008f03a0(0x20,1);
      FUN_008f03a0(0x40,1);
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(8);
      param_1[0x4fd] = 1;
    }
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
  uVar6 = FUN_00a8d2a0();
  puVar5 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionCapsule::CollisionCapsule(2,*puVar5,0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x380) = 0;
    FUN_00d77c50(param_1[0x13c],0);
    *(undefined4 *)(iVar2 + 0x594) = 0x41100000;
    *(undefined4 *)(iVar2 + 0x590) = 0x3fcccccd;
    *(undefined4 *)(iVar2 + 0x470) = 0x3fc90fdb;
    *(undefined4 *)(iVar2 + 0x474) = 0;
    *(undefined4 *)(iVar2 + 0x478) = 0;
    *(undefined4 *)(iVar2 + 0x47c) = uStack_1e4;
    *(undefined4 *)(iVar2 + 0x570) = 0;
    *(undefined4 *)(iVar2 + 0x574) = 0;
    *(undefined4 *)(iVar2 + 0x578) = 0;
    *(undefined4 *)(iVar2 + 0x57c) = uStack_1e4;
    FUN_00d771d0(1);
    _strncpy_s((char *)(iVar2 + 0x394),0x20,"body",0x1f);
    FUN_00a93a00(iVar2,uVar6);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  puVar5 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionCapsule::CollisionCapsule(2,*puVar5,0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x380) = 0;
    FUN_00d77c50(param_1[0x13c],0);
    *(undefined4 *)(iVar2 + 0x594) = 0x40c00000;
    *(undefined4 *)(iVar2 + 0x590) = 0x3f333333;
    *(undefined4 *)(iVar2 + 0x470) = 0;
    *(undefined4 *)(iVar2 + 0x474) = 0;
    *(undefined4 *)(iVar2 + 0x478) = 0x3fc90fdb;
    *(undefined4 *)(iVar2 + 0x47c) = uStack_1e4;
    *(undefined4 *)(iVar2 + 0x570) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x574) = 0;
    *(undefined4 *)(iVar2 + 0x578) = 0xc0c9999a;
    *(undefined4 *)(iVar2 + 0x57c) = uStack_1e4;
    FUN_00d771d0(1);
    _strncpy_s((char *)(iVar2 + 0x394),0x20,"body",0x1f);
    FUN_00a93a00(iVar2,uVar6);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  FUN_004fca50();
  iVar2 = 0;
  if (param_1[0x128] == 0) {
    iVar3 = FUN_008ec660(param_1,0x41400000,0x3f800000,0x41a00000,0x41a00000,0x78,0x19,0);
    uStack_1f0 = 0x3fc90fdb;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    param_1[0x1d9] = iVar3;
    FUN_008e0b20(&uStack_1f0);
    uStack_1f0 = 0;
    uStack_1ec = 0xc0b00000;
    uStack_1e8 = 0xbf800000;
    FUN_008e0d30(&uStack_1f0);
    FUN_008e6d00();
    puVar5 = (undefined4 *)FUN_009f8b60();
    FUN_008e26e0(*puVar5);
    iVar3 = param_1[0x1d9];
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    if ((param_1[0x2c0] & 0x200U) != 0) {
      FUN_008e5c50(8);
      FUN_008e59c0(2);
    }
  }
  (**(code **)(*param_1 + 0x318))();
  param_1[0x578] = 0;
  if ((param_1[0x2c0] & 0x400U) != 0) {
    pcVar8 = *(code **)(*param_1 + 0x110);
    param_1[0x578] = 0x42700000;
    (*pcVar8)(1);
    FUN_00aa92c0(0x208);
  }
  iVar3 = FUN_00c5def0(param_1[0x13c]);
  param_1[0x25c] = iVar3;
  param_1[0x574] = 0;
  FUN_00405230();
  uStack_1f0 = 0;
  uStack_1ec = 0x3e99999a;
  uStack_1e8 = 0;
  FUN_00c151f0(1,param_1[0x13c],0,&uStack_1f0,0,0x42480000,0x47c35000,0,0);
  iVar3 = FUN_00c57830(auStack_1d0);
  param_1[0x574] = iVar3;
  param_1[0x1bb] = 1;
  FUN_00c4d470(iVar3);
  piVar10 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar10);
  iVar3 = FUN_00a12210(3);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x94);
    param_1[0x3c9] = iVar3;
    param_1[0x3cb] = iVar3;
  }
  iVar3 = FUN_00a12210(4);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x90);
    param_1[0x3ca] = iVar3;
    param_1[0x3cc] = iVar3;
  }
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
    *(undefined4 *)param_1[0xdc] = 1;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 1;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 0xc) = 2;
  }
  uStack_1dc = 0x3f666666;
  uStack_1d8 = 0x3f99999a;
  uStack_1d4 = 0x3f8ccccd;
  uStack_1f0 = 0x3e4ccccd;
  uStack_1ec = 0x40400000;
  uStack_1e8 = 0x40000000;
  FUN_00a8e4d0(&uStack_1f0,&uStack_1dc);
  FUN_009fd240();
  local_1f4 = 0;
  if (0 < (short)param_1[0xc9]) {
    do {
      iVar3 = param_1[200];
      iVar4 = *(int *)(*(int *)(iVar3 + 0x60 + iVar2) + 0x40);
      if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0163d9a8), iVar4 != 0)) {
        puVar1 = (uint *)(iVar3 + 0x38 + iVar2);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      local_1f4 = local_1f4 + 1;
      iVar2 = iVar2 + 0x70;
    } while (local_1f4 < (short)param_1[0xc9]);
  }
  FUN_004039a0(1,param_1,0);
  FUN_00a963e0(auStack_160);
  FUN_00502030(1);
  uVar6 = (**(code **)(*(int *)param_1[0x1d5] + 0x24))(0xb);
  uVar7 = FUN_00ac4780();
  switch(uVar7) {
  case 0:
    pcVar8 = *(code **)(*(int *)param_1[0x1d5] + 0x5c);
    break;
  default:
    goto switchD_00516699_caseD_1;
  case 2:
    pcVar8 = *(code **)(*(int *)param_1[0x1d5] + 100);
    break;
  case 3:
    pcVar8 = *(code **)(*(int *)param_1[0x1d5] + 0x6c);
    break;
  case 4:
    pcVar8 = *(code **)(*(int *)param_1[0x1d5] + 0x74);
  }
  fVar9 = (float10)(*pcVar8)(0xb);
  if ((float10)0 < fVar9) {
    uVar6 = FUN_00fdbc60();
  }
switchD_00516699_caseD_1:
  FUN_00a8edf0(uVar6);
  param_1[0x3b4] = 0x3f800000;
  param_1[0x3b3] = 0;
  param_1[0x3b9] = 0;
  param_1[0x3b7] = 0;
  param_1[0x3b8] = 0;
  if ((*(byte *)(param_1 + 0x2c0) & 0x40) == 0) {
    iVar2 = param_1[0x583];
  }
  else {
    iVar2 = param_1[0x584];
  }
  param_1[0x3c1] = iVar2;
  param_1[0x3cf] = 0;
  param_1[0x3d1] = 6;
  param_1[0x3c6] = 0x3c23d70a;
  param_1[0x3d2] = 0;
  param_1[0x3cd] = 0;
  param_1[0x3ce] = 0;
  param_1[0x3d0] = 0;
  param_1[0x3ec] = 0x42840000;
  param_1[0x3ed] = 0x42840000;
  param_1[0x3ee] = 0;
  param_1[0x3d3] = 0x40400000;
  param_1[0x3f0] = 0;
  param_1[0x3f4] = 0;
  param_1[0x3f5] = 0;
  param_1[0x3f6] = 0x3f800000;
  param_1[0x405] = param_1[0x15];
  FUN_00a7c950();
  param_1[0x3c0] = 0x461c4000;
  param_1[0x59d] = 0;
  param_1[0x59e] = 0;
  param_1[0x4f0] = 0;
  param_1[0x40a] = 0;
  param_1[0x3c8] = 0;
  param_1[0x40b] = -1;
  param_1[0x412] = 0;
  param_1[0x515] = 0x3f800000;
  param_1[0x411] = 0;
  param_1[0x3d4] = 0;
  param_1[0x3c7] = 0;
  param_1[0x519] = -1;
  param_1[0x572] = 0;
  param_1[0x577] = 0;
  param_1[0x573] = 0;
  param_1[0x57a] = 0;
  param_1[0x526] = 0;
  param_1[0x57b] = 0;
  param_1[0x527] = 0;
  param_1[0x57c] = 0;
  param_1[0x528] = 0;
  param_1[0x586] = 0;
  param_1[0x587] = 0x44610000;
  iVar2 = FUN_00e5e0c0("et0020_se_mov_hovering",param_1,1,0);
  param_1[0x40a] = iVar2;
  param_1[0x3b3] = param_1[0x3b3] | 0x240;
  param_1[0x2c0] = param_1[0x12a];
  param_1[0x2bd] = param_1[0x128];
  fVar9 = (float10)FUN_00ac8570(0xd);
  param_1[0x3b5] = (int)(float)fVar9;
  fVar9 = (float10)FUN_00ac8570(0xe);
  param_1[0x3b6] = (int)(float)fVar9;
  FUN_004fa0d0();
  FUN_004fd010();
  if ((param_1[0x3b3] & 0x8000U) == 0) {
    if ((*(byte *)(param_1 + 0x2c0) & 0x40) == 0) {
      iVar2 = param_1[0x583];
    }
    else {
      iVar2 = param_1[0x584];
    }
  }
  else {
    iVar2 = 0x40066666;
  }
  param_1[0x3c1] = iVar2;
  lib::StaticArray<EntityHandle,8>::StaticArray<EntityHandle,8>();
  FUN_004fd750();
  param_1[0x205] = 4;
  FUN_00a82ac0(param_1[0x13c],4,0,0xffffffff);
  if (param_1[0x128] == 2) {
    FUN_00502030(0x1b);
  }
  else {
    (**(code **)(*param_1 + 0x34c))();
  }
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 0x20) != 0)) {
    DAT_018b4414 = param_1[0x12d];
    DAT_01dc08dc = 0;
    DAT_01dc08e0 = 0;
  }
  param_1[0xd9] = param_1[0xd9] & 0xffefffff;
  param_1[0x205] = 4;
  param_1[0x20b] = 2;
  param_1[0x20c] = 2;
  return 1;
}

// 00516F90  FUN_00516f90  size=1958  [callgraph]
void __fastcall FUN_00516f90(int *param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  float local_8;
  float local_4;
  
  local_8 = 60.0;
  if ((*(byte *)(param_1 + 0x2c0) & 0x40) != 0) {
    local_8 = 35.0;
  }
  switch(param_1[0x187]) {
  case 0:
    if (0.2617994 < ABS((float)param_1[0x518])) {
      if (ABS((float)param_1[0x518]) < 2.8797932) {
        iVar2 = 2;
        if ((float)param_1[0x518] <= 0.0) {
          iVar2 = 3;
        }
      }
      else {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = 0;
    }
    param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
    FUN_00aa4080((&DAT_01640b9c)[iVar2],0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
    param_1[0x250] = 1;
    param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
    param_1[0x248] = 0;
    param_1[0x249] = 0x41400000;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      param_1[0x188] = param_1[0x188] + 1;
      FUN_005024e0();
      param_1[0x3c1] = 0x40066666;
      local_4 = 2.1;
      iVar2 = hkpAllCdPointCollector::hkpAllCdPointCollector_14(&local_4);
      if (iVar2 != 0) {
        FUN_00502530();
        param_1[0x3c1] = (int)(local_4 + 2.1);
        if ((((float)param_1[0x15] - (local_4 + 2.1)) - (float)param_1[0x3bd] < 2.0) ||
           (1 < param_1[0x3ba])) {
          param_1[0x250] = 0;
        }
      }
    }
    bVar3 = false;
    if ((0 < param_1[0x188]) && (param_1[0x250] != 0)) {
      if ((((float)param_1[0x15] - (float)param_1[0x3c1]) - (float)param_1[0x3bd] <= 3.0) ||
         (1 < param_1[0x3ba])) {
        bVar3 = true;
      }
      else {
        local_4 = (float)param_1[0x248];
        fVar4 = (float10)FUN_00fdc1f0();
        fVar4 = ((float10)1 - fVar4) * ((float10)0.06 - (float10)local_4) + (float10)local_4;
        param_1[0x248] = (int)(float)fVar4;
        param_1[0x15] =
             (int)(float)((float10)(float)param_1[0x15] - fVar4 * (float10)(float)param_1[0x244]);
        param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
      }
    }
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) || ((!bVar3 && ((float)param_1[0x249] <= 0.0)))) {
      if (param_1[0x3ba] < 2) {
        param_1[0x3ca] = 0x3edf66f3;
        param_1[0x3c9] = 0;
        param_1[0x3b3] = param_1[0x3b3] & 0xffffffbf;
        param_1[0x250] = (uint)param_1[0x3b3] >> 0xf & 1;
        FUN_005024e0();
        local_4 = 2.1;
        iVar2 = hkpAllCdPointCollector::hkpAllCdPointCollector_14(&local_4);
        if (iVar2 != 0) {
          FUN_00502530();
          param_1[0x3c1] = (int)(local_4 + 2.1);
        }
        if ((((float)param_1[0x15] - (float)param_1[0x3c1]) - (float)param_1[0x3bd] < 4.0) ||
           (bVar3)) {
          if ((param_1[0x3b3] & 0x20000000U) == 0) {
LAB_005176e9:
            FUN_00502030(0x19);
          }
          else {
            FUN_00502030(0x33);
          }
        }
        else {
          FUN_00a9f4c0("FAINT",0x3f19999a,0,0);
          FUN_00a9f600(0xffffffff,0,0,0,0,0x25,0x3f19999a,0);
          FUN_00a9f600(0xffffffff,0,1,0,0,0x10,0x3f19999a,0);
          FUN_00a9f600(0xffffffff,0,0,1,0,0x19,0x3f19999a,0);
          param_1[0x591] = 0x3f800000;
          param_1[0x590] = 0;
          param_1[0x594] = 0;
          param_1[0x592] = 0x3d75c291;
          if ((*(byte *)(param_1 + 0x2c0) & 0x40) != 0) {
            param_1[0x592] = 0x3d3851ed;
          }
          RayCastManager::getWork(param_1 + 0x40e);
          param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
          param_1[0x593] = 0;
          param_1[0x595] = (int)(3.1415927 / local_8);
LAB_005175dd:
          FUN_00ac80a0(0x3f800000,0x3f800000);
          param_1[0x187] = param_1[0x187] + 1;
        }
      }
      else {
        FUN_004fd560();
        if ((param_1[0x3b3] & 0x8000U) == 0) {
          iVar2 = FUN_00502430();
          if (iVar2 == 0) {
            fVar4 = (float10)FUN_004fa7e0();
            if (((float10)(float)param_1[0x15] - fVar4) - (float10)(float)param_1[0x3bd] <=
                (float10)-2.0) {
              FUN_00502030(0x2c);
            }
            else {
              (**(code **)(*param_1 + 0x34c))();
            }
          }
        }
        else if (param_1[0x3ba] == 1) {
          iVar2 = FUN_00502430();
          if (iVar2 == 0) {
            FUN_00502030(0x2c);
          }
        }
        else {
          FUN_00502030(0x2a);
        }
      }
    }
    break;
  case 2:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 + (float10)(float)param_1[0x244]);
    fVar4 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar1 + (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar5 = (float10)0.5 + fVar4 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar5;
    fVar4 = (float10)(float)param_1[0x592] * fVar5 * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar4;
    param_1[0x15] =
         (int)(float)((float10)(float)param_1[0x15] -
                     (fVar4 + (float10)0.06) * (float10)(float)param_1[0x244]);
    FUN_00a947e0(0,(float)(fVar5 * (float10)(float)param_1[0x591]),
                 (float)(fVar5 * (float10)(float)param_1[0x591]),0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (local_8 < (float)param_1[0x593] != (local_8 == (float)param_1[0x593])) {
      param_1[0x594] = 0x3f800000;
      fVar1 = (float)param_1[0x592];
      param_1[0x592] = (int)(fVar1 + 0.06);
      param_1[0x590] = (int)((fVar1 + 0.06) * (float)param_1[0x591]);
      FUN_00a9f4c0("FAINT",0x3f000000,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,1,0xd,0x3f000000,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x27,0x3f000000,0);
      FUN_00a9f600(0xffffffff,0,1,0,0,0x10,0x3f000000,0);
      FUN_00a9f600(0xffffffff,0,0,1,0,0x19,0x3f000000,0);
      FUN_00a947e0(0,0x3f800000,0x3f800000,0);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x15] - (float)param_1[0x590] * (float)param_1[0x244];
    param_1[0x15] = (int)fVar1;
    if (5.0 <= (fVar1 - (float)param_1[0x3c1]) - (float)param_1[0x3bd]) break;
    param_1[0x595] = 0x3d80adfd;
    param_1[0x593] = 0x42480000;
    FUN_00a947e0(0,param_1[0x591],param_1[0x591],0);
    goto LAB_005175dd;
  case 4:
    fVar1 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar1 - (float10)(float)param_1[0x244]);
    fVar4 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar1 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar5 = (float10)0.5 + fVar4 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar5;
    fVar4 = (float10)(float)param_1[0x592] * fVar5 * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar4;
    param_1[0x15] =
         (int)(float)((float10)(float)param_1[0x15] - fVar4 * (float10)(float)param_1[0x244]);
    FUN_00a947e0(0,(float)fVar5,(float)fVar5,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (0.0 < (float)param_1[0x593]) break;
    param_1[0x20a] = 0x78;
    if ((param_1[0x3b3] & 0x20000000U) == 0) {
      *(undefined2 *)(param_1 + 0x209) = 3;
    }
    else {
      *(undefined2 *)(param_1 + 0x209) = 4;
    }
    FUN_00a947e0(0,0,0,0);
    param_1[0x3b3] = param_1[0x3b3] | 0x200;
    if ((param_1[0x3b3] & 0x20000000U) != 0) {
      FUN_00502030(0x33);
      break;
    }
    goto LAB_005176e9;
  }
  if (param_1[0x3ba] < 2) {
    param_1[0x20a] = 0x78;
    if ((param_1[0x3b3] & 0x20000000U) != 0) {
      *(undefined2 *)(param_1 + 0x209) = 4;
      return;
    }
    *(undefined2 *)(param_1 + 0x209) = 3;
  }
  return;
}

// 005178A0  Em0190::vf50  size=131  [class]
void __fastcall Em0190::vf50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f5990(param_1);
  }
  hkpAllCdPointCollector::hkpAllCdPointCollector_15();
  iVar5 = FUN_00a12290(0);
  if (iVar5 == 0) {
    fVar1 = *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x44);
    fVar3 = *(float *)(param_1 + 0x48);
    fVar4 = *(float *)(param_1 + 0x4c);
  }
  else {
    fVar1 = *(float *)(iVar5 + 0x40);
    fVar2 = *(float *)(iVar5 + 0x44);
    fVar3 = *(float *)(iVar5 + 0x48);
    fVar4 = *(float *)(iVar5 + 0x4c);
  }
  *(float *)(param_1 + 0x13d0) = fVar1 - *(float *)(param_1 + 0x13e0);
  *(float *)(param_1 + 0x13d4) = fVar2 - *(float *)(param_1 + 0x13e4);
  *(float *)(param_1 + 0x13d8) = fVar3 - *(float *)(param_1 + 0x13e8);
  *(float *)(param_1 + 0x13dc) = fVar4 - *(float *)(param_1 + 0x13ec);
  return;
}

// 00517930  FUN_00517930  size=2420  [between]
void __fastcall FUN_00517930(int *param_1)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  float10 fVar9;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float fStack_1e4;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [428];
  
  switch(param_1[0x187]) {
  case 0:
    iVar6 = FUN_00c19f90(&local_1f0,param_1[0x2e7],1);
    if (iVar6 == 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar6 = FUN_004fa510(1);
    if (iVar6 != 0) {
      fVar9 = (float10)FUN_004fa300();
      if ((float10)0 != fVar9) {
        local_200 = local_1f0 - (float)param_1[0x10];
        local_1f8 = local_1e8 - (float)param_1[0x12];
        local_1fc = (float)(float10)0;
        hkpAllCdPointCollector::hkpAllCdPointCollector_12();
        iVar6 = hkpCdPointCollector::hkpCdPointCollector_14
                          (&local_200,&local_200,1,local_1b0,0x3c23d70a);
        if ((iVar6 == 0) ||
           ((local_1e8 - local_1f8) * (local_1e8 - local_1f8) +
            (local_1ec - local_1fc) * (local_1ec - local_1fc) +
            (local_1f0 - local_200) * (local_1f0 - local_200) < 25.0)) {
          pfVar1 = (float *)(param_1 + 0x3f8);
          *pfVar1 = local_1f0;
          param_1[0x3f9] = (int)local_1ec;
          param_1[0x3fa] = (int)local_1e8;
          param_1[0x3fb] = 0x3f800000;
          fVar9 = (float10)FUN_00a8ec30(pfVar1);
          param_1[0x249] = (int)(float)fVar9;
          param_1[0x515] = 0x3e19999a;
          fVar2 = ((float)param_1[0x3fa] - (float)param_1[0x12]) *
                  ((float)param_1[0x3fa] - (float)param_1[0x12]) +
                  (*pfVar1 - (float)param_1[0x10]) * (*pfVar1 - (float)param_1[0x10]);
          if (fVar2 < 6.25 == (fVar2 == 6.25)) {
            iVar6 = (**(code **)(*param_1 + 0x84))();
            fVar9 = (float10)FUN_00ddba30(*(float *)(iVar6 + 4) - (float)param_1[0x249]);
            if ((float10)1.0471976 <= ABS(fVar9)) {
              uVar8 = 0x19;
              iVar6 = FUN_004fa760(pfVar1);
              if (iVar6 != 0) {
                uVar8 = 0x16;
              }
              param_1[0x591] = 0x3f4ccccd;
              param_1[0x590] = 0;
              param_1[0x594] = 0;
              FUN_004fa3b0(uVar8,0x3e4ccccd,0,0xffffffff);
              RayCastManager::getWork(param_1 + 0x40e);
              param_1[0x187] = param_1[0x187] + 1;
            }
            else {
              param_1[0x591] = 0x3f266666;
              param_1[0x590] = 0;
              param_1[0x594] = 0;
              param_1[0x592] = 0x3e99999a;
              param_1[0x407] = param_1[0x10];
              param_1[0x408] = param_1[0x11];
              param_1[0x409] = param_1[0x12];
              FUN_004fa3b0(0x10,0x3e4ccccd,0,0xffffffff);
              RayCastManager::getWork(param_1 + 0x40e);
              param_1[0x187] = 4;
            }
            param_1[0x593] = 0;
            param_1[0x595] = 0x3dd67750;
            FUN_00ac80a0(0x3f800000,0x3f800000);
            hkpCdPointCollector::hkpCdPointCollector_7();
            return;
          }
          iVar6 = FUN_00502430();
          if (iVar6 == 0) {
            FUN_00502030(0x2c);
            hkpCdPointCollector::hkpCdPointCollector_7();
            return;
          }
        }
        else {
          FUN_00502030(0x2b);
        }
        hkpCdPointCollector::hkpCdPointCollector_7();
        return;
      }
    }
    goto LAB_00517bfe;
  case 1:
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar2);
    fVar9 = (float10)fcos((float10)3.1415927 -
                          ((float10)(float)param_1[0x244] + (float10)fVar2) *
                          (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar9 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    param_1[0x590] =
         (int)(float)(fVar9 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fa450((float)(fVar9 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x593];
    if (!NAN(fVar2) && 30.0 < fVar2 != (fVar2 == 30.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x591] * (float)param_1[0x592]);
      FUN_004fa450(param_1[0x591]);
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_004fa620(param_1[0x249],0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    break;
  case 2:
    pcVar3 = *(code **)(*param_1 + 0x84);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar6 = (*pcVar3)();
    fVar2 = *(float *)(iVar6 + 4);
    fVar9 = (float10)FUN_004fa620(param_1[0x249],0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    fStack_1e4 = (float)fVar9;
    iVar6 = (**(code **)(*param_1 + 0x84))();
    fVar9 = (float10)FUN_00ddba30(*(float *)(iVar6 + 4) - fVar2);
    FUN_004fa450((float)(ABS(fVar9) * (float10)28.64789 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = 0x3f800000;
    if (ABS(fStack_1e4) < 0.08726646) {
      param_1[0x595] = 0x3d8efa35;
      param_1[0x593] = 0x42340000;
      fVar2 = (float)param_1[0x591] * (float)(ABS(fVar9) * (float10)28.64789);
      param_1[0x591] = (int)fVar2;
LAB_00517de9:
      FUN_004fa450(fVar2);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    param_1[0x593] = (int)((float)param_1[0x593] - (float)param_1[0x244]);
    FUN_004fa620(param_1[0x249],0x3d4ccccd,(float)param_1[0x594] * 0.034906585);
    fVar9 = (float10)fcos((float10)3.1415927 -
                          (float10)(float)param_1[0x593] * (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar9 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    FUN_004fa450((float)(fVar9 * (float10)(float)param_1[0x591]));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x593] <= 0.0) {
      param_1[0x591] = 0x3f266666;
      param_1[0x590] = 0;
      param_1[0x594] = 0;
      param_1[0x592] = 0x3e99999a;
      FUN_004fa3b0(0x10,0x3e4ccccd,0,0xffffffff);
      RayCastManager::getWork(param_1 + 0x40e);
      param_1[0x407] = param_1[0x10];
      param_1[0x408] = param_1[0x11];
      param_1[0x409] = param_1[0x12];
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x593] = 0;
      param_1[0x595] = 0x3dd67750;
      return;
    }
    break;
  case 4:
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 + (float10)(float)param_1[0x244]);
    fVar9 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar2 + (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar9 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    param_1[0x590] =
         (int)(float)(fVar9 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    FUN_004fa620(param_1[0x249],0x3da3d70a,0x3c2b92a6);
    piVar7 = (int *)FUN_00a8b8a0(local_1e0,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar7;
    param_1[0x3f5] = piVar7[1];
    param_1[0x3f6] = piVar7[2];
    param_1[0x3f7] = piVar7[3];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    FUN_004fa450((float)param_1[0x594] * (float)param_1[0x591]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x593];
    if (!NAN(fVar2) && 30.0 < fVar2 != (fVar2 == 30.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x591] * (float)param_1[0x592]);
      FUN_004fa450(param_1[0x591]);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_004fa620(param_1[0x249],0x3dcccccd,0x3cab92a6);
    piVar7 = (int *)FUN_00a8b8a0(local_1c0,(float)param_1[0x590] * (float)param_1[0x244]);
    param_1[0x3f4] = *piVar7;
    param_1[0x3f5] = piVar7[1];
    param_1[0x3f6] = piVar7[2];
    param_1[0x3f7] = piVar7[3];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    fVar2 = (float)param_1[0x3f8] - (float)param_1[0x10];
    fVar4 = (float)param_1[0x3fa] - (float)param_1[0x12];
    fVar5 = ((float)param_1[0x3fa] - (float)param_1[0x409]) * fVar4 +
            ((float)param_1[0x3f8] - (float)param_1[0x407]) * fVar2;
    if ((fVar5 < 0.0 != (fVar5 == 0.0)) || (fVar4 * fVar4 + fVar2 * fVar2 < 25.0)) {
      param_1[0x595] = 0x3d80adfd;
      param_1[0x593] = 0x42480000;
      fVar2 = (float)param_1[0x591];
      goto LAB_00517de9;
    }
    break;
  case 6:
    fVar2 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar2 - (float10)(float)param_1[0x244]);
    fVar9 = (float10)fcos((float10)3.1415927 -
                          ((float10)fVar2 - (float10)(float)param_1[0x244]) *
                          (float10)(float)param_1[0x595]);
    fVar9 = (float10)0.5 + fVar9 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar9;
    fVar9 = fVar9 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591];
    param_1[0x590] = (int)(float)fVar9;
    piVar7 = (int *)FUN_00a8b8a0(local_1d0,(float)(fVar9 * (float10)(float)param_1[0x244]));
    param_1[0x3f4] = *piVar7;
    param_1[0x3f5] = piVar7[1];
    param_1[0x3f6] = piVar7[2];
    param_1[0x3f7] = piVar7[3];
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
    FUN_004fa450((float)param_1[0x594] * (float)param_1[0x591]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (0.0 < (float)param_1[0x593]) {
      return;
    }
LAB_00517bfe:
    iVar6 = FUN_00502430();
    if (iVar6 == 0) {
      FUN_00502030(0x2c);
      return;
    }
  }
  return;
}

// 005182C0  FUN_005182c0  size=410  [between]
void __fastcall FUN_005182c0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  int *piVar6;
  float *pfVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 unaff_ESI;
  float10 fVar12;
  float10 fVar13;
  undefined1 auStack_160 [220];
  undefined4 uStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  float *pfStack_78;
  int *piStack_74;
  int iStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 uStack_20;
  uint uStack_1c;
  float fStack_c;
  undefined4 uStack_8;
  
  uVar11 = FUN_00a8cab0();
  switch(uVar11) {
  case 0:
    if (param_1[0x187] == 0) {
      uStack_20 = 0x2e;
      if (0.5 < (float)param_1[0x3b4]) {
        uStack_20 = 0xd;
      }
      uStack_1c = 0;
      FUN_00aa4120();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    iVar10 = FUN_00ac4640();
    if ((iVar10 != 0) && (iVar10 = FUN_00ac4670(), iVar10 != 0)) {
      FUN_00502030();
      return;
    }
    FUN_00ac80a0();
    return;
  case 1:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
      param_1[0x248] = 0x40a00000;
      param_1[0x249] = 0x40600000;
      param_1[0x24a] = 0x40000000;
      param_1[0x24b] = 0x40400000;
      param_1[0x3d3] = 0x40900000;
      param_1[0x3d0] = 0x3f800000;
      if ((param_1[0x3b3] & 0x8000U) == 0) {
        if ((*(byte *)(param_1 + 0x2c0) & 0x40) == 0) {
          iVar10 = param_1[0x583];
        }
        else {
          iVar10 = param_1[0x584];
        }
      }
      else {
        iVar10 = 0x40066666;
      }
      param_1[0x3c1] = iVar10;
      param_1[0x3b3] = param_1[0x3b3] & 0xffffff7f;
      param_1[0x250] = 0;
      param_1[0x251] = 0;
      uStack_1c = 0;
      uStack_20 = 0x3f800000;
      param_1[0x252] = 0;
      FUN_00aa4120();
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    uStack_1c = 0x4ffab4;
    FUN_00ac80a0();
    if ((param_1[0x2a1] == 0) || ((float)param_1[0x2a4] <= 100.0)) {
      if (((float)param_1[0x3d0] <= 0.0) && ((0 < param_1[0x3cf] && (param_1[0x3cf] < 0xf)))) {
        param_1[0x3b3] = param_1[0x3b3] | 1;
        return;
      }
    }
    else {
      FUN_00a8ec30();
      fVar12 = (float10)FUN_00ddba30();
      fVar12 = ABS(fVar12);
      if (fVar12 <= (float10)0.5235988) {
        iVar10 = FUN_004fe6a0();
        if (iVar10 == 0) {
          uStack_1c = 0x4ffb6f;
          fVar12 = (float10)FUN_004fdd80();
        }
        else {
          fVar12 = (float10)(float)fVar12;
        }
      }
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
      if ((float)param_1[0x248] <= 0.0) {
        param_1[0x248] = 0x40c00000;
      }
      fVar4 = *(float *)(param_1[0x2a1] + 0x44) - (float)param_1[0x11];
      if (fVar4 < 0.5 != (fVar4 == 0.5)) {
        param_1[0x3b3] = param_1[0x3b3] | 1;
      }
      if ((0.0 < (float)param_1[0x3d0]) && ((float10)0.5235988 < ABS(fVar12))) {
        param_1[0x3d0] = 0x3f800000;
        return;
      }
    }
    return;
  case 2:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
      param_1[0x249] = 0x40600000;
      param_1[0x24b] = 0x40800000;
      param_1[0x248] = 0;
      param_1[0x24d] = 0;
      param_1[0x24a] = 0x3eaaaaab;
      param_1[0x3d3] = 0x40600000;
      param_1[0x3d0] = 0x3f800000;
      if ((param_1[0x3b3] & 0x8000U) == 0) {
        if ((*(byte *)(param_1 + 0x2c0) & 0x40) == 0) {
          fVar4 = (float)param_1[0x583];
        }
        else {
          fVar4 = (float)param_1[0x584];
        }
      }
      else {
        fVar4 = 2.1;
      }
      param_1[0x250] = 0;
      param_1[0x251] = 0;
      param_1[0x3c1] = (int)(fVar4 - 2.0);
      param_1[0x252] = 0;
      param_1[0x188] = 0;
      uStack_1c = 0x3f800000;
      param_1[0x189] = 0;
      param_1[0x3b3] = param_1[0x3b3] & 0xfffff77f;
      uStack_20 = 0xbf800000;
      piStack_34 = (int *)0xd;
      piStack_38 = (int *)0x4ffd30;
      FUN_00aa4120();
    }
    else if (param_1[0x187] != 1) goto LAB_00500011;
    uStack_1c = 0x3f800000;
    uStack_20 = 0x3f800000;
    FUN_00ac80a0();
    if ((param_1[0x2a1] == 0) || ((float)param_1[0x2a4] <= 64.0)) {
      if (((float)param_1[0x3d0] <= 0.0) && ((0 < param_1[0x3cf] && (param_1[0x3cf] < 0xf)))) {
        param_1[0x3b3] = param_1[0x3b3] | 1;
      }
    }
    else {
      uVar11 = 0x3ca3d70a;
      uStack_8 = 0x3cb2b8c2;
      if (((*(byte *)(param_1 + 0x3b3) & 0x80) != 0) && ((float)param_1[0x3d0] <= 0.0)) {
        uVar11 = 0x3c23d70a;
        uStack_8 = 0x3c0efa35;
      }
      fVar12 = (float10)0;
      if (param_1[0x57b] == 0) {
        uStack_1c = 0x4ffdc2;
        iVar10 = FUN_004fe6a0();
        if (iVar10 == 0) {
          uStack_1c = uStack_8;
          uStack_20 = uVar11;
          fVar12 = (float10)FUN_004fdd80();
        }
        else {
          uStack_1c = 0x4ffdcb;
          fVar12 = (float10)FUN_004fa5e0();
        }
      }
      fStack_c = (float)fVar12;
      if (0.0 < (float)param_1[0x248]) {
        if (((param_1[0x250] < 1) || (0.8 <= (float)param_1[0x3d3])) ||
           ((float)param_1[0x2a4] <= 225.0)) {
          param_1[0x250] = 0;
          param_1[0x3b3] = param_1[0x3b3] & 0xfffffffb;
        }
        else {
          param_1[0x3b3] = param_1[0x3b3] | 4;
        }
      }
      else if ((fVar12 < (float10)0.43633232) &&
              ((param_1[0x189] == 0 ||
               (fVar4 = (float)param_1[0x581], !NAN(fVar4) && 0.0 < fVar4 != (fVar4 == 0.0))))) {
        param_1[0x3b3] = param_1[0x3b3] | 4;
        param_1[0x3d3] = 0x3f000000;
        *(undefined2 *)((int)param_1 + 0xf4a) = 2;
        param_1[0x248] = param_1[0x581];
        param_1[0x189] = param_1[0x189] + 1;
        param_1[0x250] = 1;
      }
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
      uStack_1c = 0x4ffecd;
      iVar10 = FUN_00ac4780();
      if (0 < iVar10) {
        if ((float)param_1[0x24d] <= -(float)param_1[0x580]) {
          param_1[0x24d] = param_1[0x57f];
          uStack_1c = ~((uint)param_1[0x3b3] >> 7) & 1;
          uStack_20 = 0x4fff0b;
          FUN_004fc2a0();
          param_1[0x3cf] = 0;
        }
        fVar4 = (float)param_1[0x24d] - (float)param_1[0x244] * 0.016666668;
        param_1[0x24d] = (int)fVar4;
        if ((fVar4 <= 0.0) &&
           (fVar4 = (float)param_1[0x580], !NAN(fVar4) && 0.0 < fVar4 != (fVar4 == 0.0))) {
          param_1[0x3b3] = param_1[0x3b3] | 1;
        }
        if (((((*(byte *)(param_1 + 0x3b3) & 0x80) == 0) || (0.0 < (float)param_1[0x3d0])) &&
            (0.2617994 < ABS(fStack_c))) && ((float)param_1[0x3d0] <= 1.0)) {
          param_1[0x3d0] = 0x3f800000;
        }
      }
    }
    uStack_1c = 0x4fffbc;
    iVar10 = FUN_00ac4770();
    if ((((iVar10 == 0) && ((DAT_01bea060 & 0x40000000) == 0)) &&
        ((uVar8 = param_1[0x3b3], (uVar8 & 0x20) != 0 ||
         ((((uVar8 & 1) != 0 && ((uVar8 & 2) != 0)) && ((float)param_1[0x3d0] <= 0.0)))))) ||
       (((*(byte *)(param_1 + 0x3b3) & 4) != 0 && ((float)param_1[0x3d3] <= 0.0)))) {
      param_1[0x249] = 0x3fc00000;
    }
LAB_00500011:
    if (param_1[0x57b] != 0) {
      param_1[0x3b3] = param_1[0x3b3] & 0xfffffffa;
    }
    return;
  case 3:
    if (param_1[0x187] == 0) {
      uStack_1c = 0;
      uStack_20 = 0xd;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42340000;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    if ((param_1[0x371] != 2) && (param_1[0x371] != 1)) {
      param_1[0x371] = 1;
    }
    if (param_1[0x2a1] != 0) {
      FUN_00a8ec30();
      FUN_004fa620();
    }
    FUN_00ac80a0();
    return;
  case 4:
    FUN_00512e70();
    return;
  case 5:
    FUN_00513480();
    return;
  case 6:
    FUN_0050ead0();
    return;
  case 7:
    FUN_005013f0();
    return;
  case 8:
    FUN_00501760();
    return;
  case 9:
    FUN_00504970();
    return;
  case 10:
    FUN_00504f00();
    return;
  case 0xb:
    break;
  case 0xc:
    switch(param_1[0x187]) {
    case 0:
      param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
      param_1[0x591] = 0x3f266666;
      if ((float)param_1[0x3b4] <= 0.33333334) {
        param_1[0x591] = 0x3f800000;
        param_1[0x515] = 0x3f266666;
      }
      param_1[0x590] = 0;
      piStack_34 = (int *)0xffffffff;
      param_1[0x594] = 0;
      piStack_38 = (int *)0x0;
      param_1[0x592] = 0x3df5c290;
      piStack_3c = (int *)0x3f4ccccd;
      uStack_40 = 0x10;
      fStack_44 = 7.380027e-39;
      FUN_004fa3b0();
      piStack_34 = param_1 + 0x40e;
      piStack_38 = (int *)0x505c94;
      RayCastManager::getWork();
      piStack_34 = (int *)0x505c9b;
      FUN_00502530();
      param_1[0x593] = 0;
      param_1[0x3b3] = param_1[0x3b3] & 0xfffffdff;
      param_1[0x595] = 0x3da0d97c;
      if ((param_1[0x3b3] & 0x8000U) != 0) {
        param_1[0x515] = 0x3e19999a;
      }
      param_1[0x187] = param_1[0x187] + 1;
    case 1:
      fVar4 = (float)param_1[0x593];
      param_1[0x593] = (int)(float)((float10)(float)param_1[0x244] + (float10)fVar4);
      fVar12 = (float10)fcos((float10)3.1415927 -
                             ((float10)(float)param_1[0x244] + (float10)fVar4) *
                             (float10)(float)param_1[0x595]);
      fVar13 = (float10)0.5 + fVar12 * (float10)0.5;
      param_1[0x594] = (int)(float)fVar13;
      fVar12 = fVar13 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591];
      param_1[0x590] = (int)(float)fVar12;
      param_1[0x15] =
           (int)(float)(fVar12 * (float10)(float)param_1[0x244] + (float10)(float)param_1[0x15]);
      piStack_34 = (int *)0x0;
      piStack_38 = (int *)0x0;
      piStack_3c = (int *)(float)(fVar13 * (float10)(float)param_1[0x591] *
                                 (float10)(float)param_1[0x515]);
      uStack_40 = 0;
      fStack_44 = 7.380308e-39;
      FUN_00a947e0();
      piStack_34 = (int *)0x3f800000;
      piStack_38 = (int *)0x3f800000;
      piStack_3c = (int *)0x505d5f;
      FUN_00ac80a0();
      fVar4 = (float)param_1[0x593];
      if (!NAN(fVar4) && 40.0 < fVar4 != (fVar4 == 40.0)) {
        param_1[0x594] = 0x3f800000;
        param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
        piStack_34 = (int *)0x0;
        piStack_38 = (int *)0x0;
        piStack_3c = (int *)((float)param_1[0x515] * (float)param_1[0x591]);
        uStack_40 = 0;
        fStack_44 = 7.380455e-39;
        FUN_00a947e0();
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 2:
      piStack_34 = (int *)0x3f800000;
      piStack_38 = (int *)0x3f800000;
      piStack_3c = (int *)0x505dd5;
      FUN_00ac80a0();
      iVar10 = 0;
      piVar9 = param_1 + 0x40e;
      param_1[0x15] = (int)((float)param_1[0x590] * (float)param_1[0x244] + (float)param_1[0x15]);
      if (*piVar9 != 0) {
        piStack_34 = (int *)0x0;
        piStack_38 = (int *)0x0;
        uStack_40 = 0x505e00;
        piStack_3c = piVar9;
        iVar10 = FUN_00907640();
      }
      piStack_34 = &uStack_20;
      uStack_20 = 0;
      uStack_1c = 0x40600000;
      piStack_3c = (int *)0x505e23;
      piStack_38 = piVar9;
      FUN_00502580();
      if ((iVar10 != 0) ||
         (-2.0 < ((float)param_1[0x15] - (float)param_1[0x3c1]) - (float)param_1[0x3bd])) {
        param_1[0x595] = 0x3d20d97c;
        param_1[0x593] = 0x42a00000;
        piStack_34 = (int *)0x0;
        piStack_38 = (int *)0x0;
        piStack_3c = (int *)((float)param_1[0x591] * (float)param_1[0x515]);
        uStack_40 = 0;
        fStack_44 = 7.380746e-39;
        FUN_00a947e0();
        piStack_34 = (int *)0x3f800000;
        piStack_38 = (int *)0x3f800000;
        piStack_3c = (int *)0x505e97;
        FUN_00ac80a0();
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 3:
      fVar4 = (float)param_1[0x593];
      param_1[0x593] = (int)(float)((float10)fVar4 - (float10)(float)param_1[0x244]);
      fVar12 = (float10)fcos((float10)3.1415927 -
                             ((float10)fVar4 - (float10)(float)param_1[0x244]) *
                             (float10)(float)param_1[0x595]);
      fVar13 = (float10)0.5 + fVar12 * (float10)0.5;
      param_1[0x594] = (int)(float)fVar13;
      fVar12 = (float10)(float)param_1[0x592] * fVar13 * (float10)(float)param_1[0x591];
      param_1[0x590] = (int)(float)fVar12;
      param_1[0x15] =
           (int)(float)(fVar12 * (float10)(float)param_1[0x244] + (float10)(float)param_1[0x15]);
      piStack_34 = (int *)0x0;
      piStack_38 = (int *)0x0;
      piStack_3c = (int *)(float)(fVar13 * (float10)(float)param_1[0x591] *
                                 (float10)(float)param_1[0x515]);
      uStack_40 = 0;
      fStack_44 = 7.380954e-39;
      FUN_00a947e0();
      piStack_34 = (int *)0x3f800000;
      piStack_38 = (int *)0x3f800000;
      piStack_3c = (int *)0x505f2c;
      FUN_00ac80a0();
      if ((float)param_1[0x593] <= 0.0) {
        piStack_34 = (int *)0x505f47;
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    return;
  case 0xd:
    FUN_00505f70();
    return;
  case 0xe:
    FUN_00506230();
    return;
  case 0xf:
    switch(param_1[0x187]) {
    case 0:
      iVar10 = FUN_00c19f60();
      if (iVar10 == 0) {
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_00502810();
      param_1[0x3b3] = param_1[0x3b3] | 0x1000000;
      fVar4 = (float)param_1[0x10];
      fVar1 = (float)param_1[600];
      fVar2 = (float)param_1[0x12];
      fVar3 = (float)param_1[0x25a];
      fVar12 = (float10)FUN_0043f4d0();
      param_1[0x591] = (int)(float)fVar12;
      if (SQRT((fVar2 - fVar3) * (fVar2 - fVar3) + (fVar4 - fVar1) * (fVar4 - fVar1)) < 8.0) {
        param_1[0x591] = 0x3e19999a;
      }
      param_1[0x590] = 0;
      param_1[0x594] = 0;
      param_1[0x592] = 0x3ec7ae15;
      piStack_74 = (int *)0x506906;
      FUN_004fa3b0();
      RayCastManager::getWork();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x593] = 0;
      param_1[0x595] = 0x3da0d97c;
    case 1:
      fVar4 = (float)param_1[0x593];
      param_1[0x593] = (int)(float)((float10)fVar4 + (float10)(float)param_1[0x244]);
      fVar12 = (float10)fcos((float10)3.1415927 -
                             ((float10)fVar4 + (float10)(float)param_1[0x244]) *
                             (float10)(float)param_1[0x595]);
      fVar12 = (float10)0.5 + fVar12 * (float10)0.5;
      param_1[0x594] = (int)(float)fVar12;
      param_1[0x590] =
           (int)(float)(fVar12 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
      FUN_00a8ec30();
      FUN_004fa620();
      piVar9 = (int *)FUN_00a8b8a0();
      param_1[0x3f4] = *piVar9;
      param_1[0x3f5] = piVar9[1];
      param_1[0x3f6] = piVar9[2];
      param_1[0x3f7] = piVar9[3];
      param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
      param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
      param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
      piStack_74 = (int *)0x506a3e;
      FUN_00a947e0();
      FUN_00ac80a0();
      fVar4 = (float)param_1[0x593];
      if (!NAN(fVar4) && 40.0 < fVar4 != (fVar4 == 40.0)) {
        param_1[0x594] = 0x3f800000;
        param_1[0x590] = (int)((float)param_1[0x591] * (float)param_1[0x592]);
        piStack_74 = (int *)0x506aa7;
        FUN_00a947e0();
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 2:
      FUN_00ac80a0();
      FUN_00a8ec30();
      FUN_004fa620();
      piVar9 = (int *)FUN_00a8b8a0();
      param_1[0x3f4] = *piVar9;
      iStack_54 = 0;
      param_1[0x3f5] = piVar9[1];
      param_1[0x3f6] = piVar9[2];
      param_1[0x3f7] = piVar9[3];
      param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
      param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x3f6]);
      param_1[0x17] = (int)((float)param_1[0x17] + (float)param_1[0x3f7]);
      if (param_1[0x40e] != 0) {
        iStack_54 = FUN_00907640();
      }
      fStack_50 = (float)param_1[0x3f4] * 14.0;
      fStack_4c = (float)param_1[0x3f5] * 14.0;
      fStack_48 = (float)param_1[0x3f6] * 14.0;
      fStack_44 = (float)param_1[0x3f7] * 14.0;
      FUN_00502580();
      if ((iStack_54 != 0) ||
         (((float)param_1[0x12] - (float)param_1[0x25a]) *
          ((float)param_1[0x12] - (float)param_1[0x25a]) +
          ((float)param_1[0x10] - (float)param_1[600]) *
          ((float)param_1[0x10] - (float)param_1[600]) < 9.0)) {
        param_1[0x595] = 0x3d20d97c;
        param_1[0x593] = 0x42a00000;
        piStack_74 = (int *)0x506c3c;
        FUN_00a947e0();
        FUN_00ac80a0();
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 3:
      fVar4 = (float)param_1[0x593];
      param_1[0x593] = (int)(float)((float10)fVar4 - (float10)(float)param_1[0x244]);
      fVar12 = (float10)fcos((float10)3.1415927 -
                             ((float10)fVar4 - (float10)(float)param_1[0x244]) *
                             (float10)(float)param_1[0x595]);
      fVar12 = (float10)0.5 + fVar12 * (float10)0.5;
      param_1[0x594] = (int)(float)fVar12;
      param_1[0x590] =
           (int)(float)(fVar12 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
      piVar9 = (int *)FUN_00a8b8a0();
      param_1[0x3f4] = *piVar9;
      param_1[0x3f5] = piVar9[1];
      param_1[0x3f6] = piVar9[2];
      param_1[0x3f7] = piVar9[3];
      param_1[0x14] = (int)((float)param_1[0x3f4] + (float)param_1[0x14]);
      param_1[0x15] = (int)((float)param_1[0x3f5] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x3f6] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x3f7] + (float)param_1[0x17]);
      piStack_74 = (int *)0x506d30;
      FUN_00a947e0();
      FUN_00ac80a0();
      if ((float)param_1[0x593] <= 0.0) {
        FUN_00502200();
      }
    }
    return;
  case 0x10:
    FUN_0050fdc0();
    return;
  case 0x11:
    FUN_005103f0();
    return;
  case 0x12:
    FUN_00506d80();
    return;
  case 0x13:
    FUN_00507180();
    return;
  case 0x14:
    FUN_00511ad0();
    return;
  case 0x15:
    FUN_00511fa0();
    return;
  case 0x16:
    FUN_005111d0();
    return;
  case 0x17:
    if (param_1[0x187] == 0) {
      uStack_1c = 0;
      uStack_20 = 0x24;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3f800000;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    iVar10 = FUN_00a8e520();
    if ((iVar10 != 0) &&
       (fVar4 = (float)param_1[0x248], param_1[0x248] = (int)(fVar4 * 0.95), fVar4 * 0.95 < 0.1)) {
      param_1[0x248] = 0x3dcccccd;
    }
    FUN_00a96030();
    FUN_00ac80a0();
    iVar10 = FUN_00a94ce0();
    if (iVar10 == 0) {
      return;
    }
    param_1[0x3b3] = param_1[0x3b3] | 0x200;
                    /* WARNING: Could not recover jumptable at 0x004febf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x18:
  case 0x32:
    FUN_00516f90();
    return;
  case 0x19:
  case 0x33:
    if (param_1[0x187] == 0) {
      if (1 < param_1[0x3ba]) {
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x494] = 0;
        FUN_004fd560();
        if ((param_1[0x3b3] & 0x4000000U) == 0) {
          FUN_004039a0(0x15,param_1,0);
          FUN_00a963e0(auStack_160);
          param_1[0x3b3] = param_1[0x3b3] | 0x4000000;
        }
        if ((param_1[0x3b3] & 0x8000U) != 0) goto LAB_005114c7;
        iVar10 = FUN_00502430();
        if (iVar10 != 0) {
          return;
        }
        fVar12 = (float10)FUN_004fa7e0();
        if ((float10)-2.0 <
            ((float10)(float)param_1[0x15] - fVar12) - (float10)(float)param_1[0x3bd]) {
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
        goto LAB_00511660;
      }
      FUN_00a9f4c0("FAINT",0x3f000000,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,1,0xd,0x3f000000,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x27,0x3f000000,0);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3f800000;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    param_1[0x20a] = 0x78;
    if ((param_1[0x3b3] & 0x20000000U) == 0) {
      *(undefined2 *)(param_1 + 0x209) = 3;
    }
    else {
      *(undefined2 *)(param_1 + 0x209) = 4;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar4 = (float)param_1[0x494];
    param_1[0x494] = (int)(fVar4 - (float)param_1[0x244]);
    if (0.0 < fVar4 - (float)param_1[0x244]) {
      return;
    }
    if ((*(byte *)(param_1 + 0x3b3) & 8) != 0) {
      FUN_004fd560(unaff_ESI);
      FUN_0050f780();
    }
    fVar12 = (float10)FUN_00fdc1f0();
    fVar4 = (float)param_1[0x248];
    param_1[0x248] = (int)(float)(fVar12 * (float10)fVar4);
    FUN_00a947e0(0,0,0,(float)((float10)1 - fVar12 * (float10)fVar4));
    if (0.05 <= (float)param_1[0x248]) {
      return;
    }
    if ((param_1[0x3b3] & 0x8000U) == 0) {
      iVar10 = FUN_00502430();
      if (iVar10 != 0) {
        return;
      }
      fVar12 = (float10)FUN_004fa7e0();
      if ((float10)-2.0 < ((float10)(float)param_1[0x15] - fVar12) - (float10)(float)param_1[0x3bd])
      {
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    else {
      if (param_1[0x3ba] != 1) {
LAB_005114c7:
        FUN_00502030(0x2a);
        return;
      }
      iVar10 = FUN_00502430();
      if (iVar10 != 0) {
        return;
      }
    }
LAB_00511660:
    FUN_00502030(0x2c);
    return;
  case 0x1a:
    FUN_005116b0();
    return;
  case 0x1b:
    FUN_00512380();
    return;
  case 0x1c:
    FUN_00507d00();
    return;
  case 0x1d:
  case 0x25:
    FUN_00507ff0();
    return;
  case 0x1e:
  case 0x30:
    FUN_00509790();
    return;
  case 0x1f:
    FUN_004ff6f0();
    return;
  case 0x20:
    FUN_004ff8a0();
    return;
  case 0x21:
    FUN_00509690();
    return;
  case 0x22:
    FUN_004ff0e0();
    return;
  case 0x23:
    FUN_00508e40();
    return;
  case 0x24:
    FUN_0050b0f0();
    return;
  case 0x26:
    FUN_00514970();
    return;
  case 0x27:
    FUN_0050b3a0();
    return;
  case 0x28:
    switch(param_1[0x187]) {
    case 0:
      fVar4 = (float)param_1[0x10] - *(float *)(param_1[0x2a1] + 0x40);
      fVar1 = (float)param_1[0x12] - *(float *)(param_1[0x2a1] + 0x48);
      fVar4 = 30.0 - SQRT(fVar1 * fVar1 + fVar4 * fVar4);
      fVar1 = fVar4 * 0.022222223;
      param_1[0x591] = (int)fVar1;
      if (0.0 < fVar1) {
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 0.0;
      }
      param_1[0x591] = (int)fVar1;
      if (fVar4 < 8.0) {
        param_1[0x591] = 0;
      }
      param_1[0x590] = 0;
      param_1[0x594] = 0;
      param_1[0x592] = 0x3ec00000;
      piStack_74 = (int *)0x50bd70;
      FUN_004fa3b0();
      RayCastManager::getWork();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x595] = 0x3da0d97c;
      param_1[0x593] = 0;
      param_1[0x597] = 0x40200000;
      param_1[0x248] = 0x3dcccccd;
      break;
    case 1:
      break;
    case 2:
      FUN_00ac80a0();
      param_1[0x3b3] = param_1[0x3b3] | 5;
      FUN_004fdd80();
      piVar9 = (int *)FUN_00a8b8a0();
      param_1[0x3f4] = *piVar9;
      iVar10 = 0;
      param_1[0x3f5] = piVar9[1];
      param_1[0x3f6] = piVar9[2];
      param_1[0x3f7] = piVar9[3];
      param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
      param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
      param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
      if (param_1[0x40e] != 0) {
        iVar10 = FUN_00907640();
      }
      fStack_50 = (float)param_1[0x3f4] * -14.0;
      fStack_4c = (float)param_1[0x3f5] * -14.0;
      fStack_48 = (float)param_1[0x3f6] * -14.0;
      fStack_44 = (float)param_1[0x3f7] * -14.0;
      FUN_00502580();
      fVar4 = (float)param_1[0x597] - (float)param_1[0x244] * 0.016666668;
      param_1[0x597] = (int)fVar4;
      if ((((iVar10 != 0) || (900.0 < (float)param_1[0x2a4])) || (fVar4 <= 0.0)) ||
         ((iVar10 = FUN_004fe460(), iVar10 != 0 && (iVar10 = FUN_004fe460(), iVar10 == 0)))) {
        param_1[0x595] = 0x3d20d97c;
        param_1[0x593] = 0x42a00000;
        piStack_74 = (int *)0x50c0fe;
        FUN_00a947e0();
        FUN_00ac80a0();
        param_1[0x187] = param_1[0x187] + 1;
      }
      FUN_00ac80a0();
      return;
    case 3:
      fVar4 = (float)param_1[0x593];
      param_1[0x593] = (int)(float)((float10)fVar4 - (float10)(float)param_1[0x244]);
      fVar12 = (float10)fcos((float10)3.1415927 -
                             ((float10)fVar4 - (float10)(float)param_1[0x244]) *
                             (float10)(float)param_1[0x595]);
      fVar12 = (float10)0.5 + fVar12 * (float10)0.5;
      param_1[0x594] = (int)(float)fVar12;
      param_1[0x590] =
           (int)(float)(fVar12 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
      FUN_004fdd80();
      piVar9 = (int *)FUN_00a8b8a0();
      param_1[0x3f4] = *piVar9;
      param_1[0x3f5] = piVar9[1];
      param_1[0x3f6] = piVar9[2];
      param_1[0x3f7] = piVar9[3];
      param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
      param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
      param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
      param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
      piStack_74 = (int *)0x50c234;
      FUN_00a947e0();
      FUN_00ac80a0();
      if ((float)param_1[0x593] <= 0.0) {
        (**(code **)(*param_1 + 0x34c))();
      }
      if ((param_1[0x3b3] & 0x8000U) == 0) {
        FUN_004fde50();
        return;
      }
    default:
      goto switchD_0050bcd1_default;
    }
    fVar4 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar4 + (float10)(float)param_1[0x244]);
    fVar12 = (float10)fcos((float10)3.1415927 -
                           ((float10)fVar4 + (float10)(float)param_1[0x244]) *
                           (float10)(float)param_1[0x595]);
    fVar12 = (float10)0.5 + fVar12 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar12;
    param_1[0x590] =
         (int)(float)(fVar12 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    if (param_1[0x2a1] != 0) {
      FUN_00a8ec30();
      FUN_004fa620();
    }
    piVar9 = (int *)FUN_00a8b8a0();
    param_1[0x3f4] = *piVar9;
    param_1[0x3f5] = piVar9[1];
    param_1[0x3f6] = piVar9[2];
    param_1[0x3f7] = piVar9[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    piStack_74 = (int *)0x50bed3;
    FUN_00a947e0();
    FUN_00ac80a0();
    fVar4 = (float)param_1[0x593];
    if (!NAN(fVar4) && 40.0 < fVar4 != (fVar4 == 40.0)) {
      param_1[0x594] = 0x3f800000;
      param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
      piStack_74 = (int *)0x50bf42;
      FUN_00a947e0();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
switchD_0050bcd1_default:
    return;
  case 0x29:
    FUN_005001f0();
    return;
  case 0x2a:
    FUN_00517930();
    return;
  case 0x2b:
    FUN_0050c2a0();
    return;
  case 0x2c:
    FUN_0050cc90();
    return;
  case 0x2d:
    FUN_0050d630();
    return;
  case 0x2e:
    FUN_00514360();
    return;
  case 0x2f:
    FUN_00509b20();
    return;
  case 0x31:
    FUN_004fadc0();
    return;
  default:
    return;
  }
  switch(param_1[0x187]) {
  case 0:
    param_1[0x591] = 0x3f800000;
    if (param_1[0x571] != 0) {
      param_1[0x591] = 0x3f19999a;
    }
    if ((param_1[0x3b3] & 0x8000U) != 0) {
      param_1[0x591] = 0x3f333333;
      param_1[0x515] = 0x3e19999a;
    }
    param_1[0x590] = 0;
    piStack_74 = (int *)0xffffffff;
    param_1[0x594] = 0;
    pfStack_78 = (float *)0x0;
    param_1[0x592] = 0x3ea3d6f0;
    piStack_7c = (int *)0x3e4ccccd;
    uStack_80 = 0x16;
    uStack_84 = 0x505619;
    FUN_004fa3b0();
    piStack_74 = param_1 + 0x40e;
    pfStack_78 = (float *)0x50562a;
    RayCastManager::getWork();
    param_1[0x3c6] = 0x3cf5c28f;
    param_1[0x595] = 0x3da0d97c;
    param_1[0x593] = 0;
    param_1[0x596] = 0;
    param_1[0x248] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    piStack_74 = (int *)0x3f800000;
    pfStack_78 = (float *)0x3f800000;
    piStack_7c = (int *)0x5057fd;
    FUN_00ac80a0();
    piStack_74 = (int *)0x3c8efa35;
    pfStack_78 = (float *)0x3db851ec;
    piStack_7c = (int *)0x50581a;
    FUN_004fdd80();
    piStack_74 = (int *)((float)param_1[0x590] * (float)param_1[0x244]);
    pfStack_78 = (float *)&uStack_40;
    piStack_7c = (int *)0x505838;
    piVar6 = (int *)FUN_00a8b9b0();
    param_1[0x3f4] = *piVar6;
    iVar10 = 0;
    piVar9 = param_1 + 0x40e;
    param_1[0x3f5] = piVar6[1];
    param_1[0x3f6] = piVar6[2];
    param_1[0x3f7] = piVar6[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    if (*piVar9 != 0) {
      piStack_74 = (int *)0x0;
      pfStack_78 = (float *)0x0;
      uStack_80 = 0x5058a4;
      piStack_7c = piVar9;
      iVar10 = FUN_00907640();
    }
    piStack_74 = (int *)&stack0xffffffa0;
    piStack_7c = (int *)0x5058e9;
    pfStack_78 = (float *)piVar9;
    FUN_00502580();
    fVar4 = (float)param_1[0x590] * (float)param_1[0x244] + (float)param_1[0x596];
    param_1[0x596] = (int)fVar4;
    if (param_1[0x571] == 0) {
      if ((iVar10 == 0) &&
         ((float)param_1[0x591] * 10.0 < fVar4 == ((float)param_1[0x591] * 10.0 == fVar4))) {
        piStack_74 = (int *)0x41900000;
        pfStack_78 = (float *)0x5059db;
        uVar8 = FUN_004fe580();
joined_r0x005059dd:
        if (uVar8 != 0) goto LAB_00505a25;
      }
    }
    else {
      fVar4 = (float)param_1[0x2a4];
      fVar1 = (float)param_1[0x248];
      if (NAN(fVar4) || 400.0 < fVar4 == (fVar4 == 400.0)) {
        fVar4 = -fVar1;
      }
      else {
        fVar4 = 0.5 - fVar1;
      }
      pfStack_78 = (float *)&stack0xffffffd0;
      param_1[0x248] = (int)(fVar4 * 0.25 + fVar1);
      piStack_74 = (int *)((float)param_1[0x590] * (float)param_1[0x244] * (float)param_1[0x248]);
      piStack_7c = (int *)0x505967;
      pfVar7 = (float *)FUN_00a8b8a0();
      param_1[0x14] = (int)(*pfVar7 + (float)param_1[0x14]);
      param_1[0x15] = (int)(pfVar7[1] + (float)param_1[0x15]);
      param_1[0x16] = (int)(pfVar7[2] + (float)param_1[0x16]);
      param_1[0x17] = (int)(pfVar7[3] + (float)param_1[0x17]);
      if (iVar10 == 0) {
        piStack_74 = (int *)0x41200000;
        pfStack_78 = (float *)0x50599f;
        iVar10 = FUN_004fe580();
        if (iVar10 != 0) {
          uVar8 = param_1[0x3b3] & 0x80000;
          goto joined_r0x005059dd;
        }
      }
    }
    param_1[0x595] = 0x3d20d97c;
    param_1[0x593] = 0x42a00000;
    piStack_74 = (int *)param_1[0x591];
    pfStack_78 = (float *)0x505a0c;
    FUN_004fa450();
    piStack_74 = (int *)0x3f800000;
    pfStack_78 = (float *)0x3f800000;
    piStack_7c = (int *)0x505a1f;
    FUN_00ac80a0();
    param_1[0x187] = param_1[0x187] + 1;
LAB_00505a25:
    piStack_74 = (int *)0x3f800000;
    pfStack_78 = (float *)0x3f800000;
    piStack_7c = (int *)0x505a38;
    FUN_00ac80a0();
    return;
  case 3:
    fVar4 = (float)param_1[0x593];
    param_1[0x593] = (int)(float)((float10)fVar4 - (float10)(float)param_1[0x244]);
    fVar12 = (float10)fcos((float10)3.1415927 -
                           ((float10)fVar4 - (float10)(float)param_1[0x244]) *
                           (float10)(float)param_1[0x595]);
    fVar12 = (float10)0.5 + fVar12 * (float10)0.5;
    param_1[0x594] = (int)(float)fVar12;
    param_1[0x590] =
         (int)(float)(fVar12 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
    piStack_74 = (int *)0x3c8efa35;
    pfStack_78 = (float *)0x3d4ccccd;
    piStack_7c = (int *)0x505a9e;
    FUN_004fdd80();
    pfStack_78 = (float *)&uStack_20;
    piStack_74 = (int *)((float)param_1[0x590] * (float)param_1[0x244]);
    piStack_7c = (int *)0x505abc;
    piVar9 = (int *)FUN_00a8b9b0();
    param_1[0x3f4] = *piVar9;
    param_1[0x3f5] = piVar9[1];
    param_1[0x3f6] = piVar9[2];
    param_1[0x3f7] = piVar9[3];
    param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
    param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
    param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
    param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
    piStack_74 = (int *)0x0;
    pfStack_78 = (float *)0x0;
    piStack_7c = (int *)((float)param_1[0x594] * (float)param_1[0x591] * (float)param_1[0x515]);
    uStack_80 = 0;
    uStack_84 = 0x505b3a;
    FUN_00a947e0();
    piStack_74 = (int *)0x3f800000;
    pfStack_78 = (float *)0x3f800000;
    piStack_7c = (int *)0x505b4d;
    FUN_00ac80a0();
    if ((float)param_1[0x593] <= 0.0) {
      if (param_1[0x571] == 0) {
        piStack_74 = (int *)0x505bb8;
        (**(code **)(*param_1 + 0x34c))();
      }
      else {
        if (((param_1[0x3b3] & 0x80000U) != 0) && (param_1[0x40b] != 10)) {
          piStack_74 = (int *)0xa;
          pfStack_78 = (float *)0x505b85;
          FUN_00502030();
          return;
        }
        param_1[0x572] = 0;
        pcVar5 = *(code **)(*param_1 + 0x34c);
        param_1[0x571] = 0;
        piStack_74 = (int *)0x505ba8;
        (*pcVar5)();
      }
    }
    if ((param_1[0x3b3] & 0x8000U) == 0) {
      piStack_74 = (int *)0x505bcf;
      FUN_004fde50();
      return;
    }
  default:
    goto switchD_005055a4_default;
  }
  fVar4 = (float)param_1[0x593];
  param_1[0x593] = (int)(float)((float10)fVar4 + (float10)(float)param_1[0x244]);
  fVar12 = (float10)fcos((float10)3.1415927 -
                         ((float10)fVar4 + (float10)(float)param_1[0x244]) *
                         (float10)(float)param_1[0x595]);
  fVar12 = (float10)0.5 + fVar12 * (float10)0.5;
  param_1[0x594] = (int)(float)fVar12;
  param_1[0x590] =
       (int)(float)(fVar12 * (float10)(float)param_1[0x592] * (float10)(float)param_1[0x591]);
  if (param_1[0x2a1] != 0) {
    piStack_74 = (int *)(param_1[0x2a1] + 0x40);
    pfStack_78 = (float *)0x5056b7;
    fVar12 = (float10)FUN_00a8ec30();
    piStack_74 = (int *)0x3c8efa35;
    pfStack_78 = (float *)0x3d4ccccd;
    piStack_7c = (int *)(float)fVar12;
    uStack_80 = 0x5056d8;
    FUN_004fa620();
  }
  piStack_74 = (int *)((float)param_1[0x590] * (float)param_1[0x244]);
  pfStack_78 = &fStack_50;
  piStack_7c = (int *)0x5056f6;
  piVar9 = (int *)FUN_00a8b9b0();
  param_1[0x3f4] = *piVar9;
  param_1[0x3f5] = piVar9[1];
  param_1[0x3f6] = piVar9[2];
  param_1[0x3f7] = piVar9[3];
  param_1[0x14] = (int)((float)param_1[0x14] - (float)param_1[0x3f4]);
  param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3f5]);
  param_1[0x16] = (int)((float)param_1[0x16] - (float)param_1[0x3f6]);
  param_1[0x17] = (int)((float)param_1[0x17] - (float)param_1[0x3f7]);
  piStack_74 = (int *)0x0;
  pfStack_78 = (float *)0x0;
  piStack_7c = (int *)((float)param_1[0x594] * (float)param_1[0x591] * (float)param_1[0x515]);
  uStack_80 = 0;
  uStack_84 = 0x505774;
  FUN_00a947e0();
  piStack_74 = (int *)0x3f800000;
  pfStack_78 = (float *)0x3f800000;
  piStack_7c = (int *)0x505787;
  FUN_00ac80a0();
  fVar4 = (float)param_1[0x593];
  if (!NAN(fVar4) && 40.0 < fVar4 != (fVar4 == 40.0)) {
    param_1[0x594] = 0x3f800000;
    param_1[0x590] = (int)((float)param_1[0x592] * (float)param_1[0x591]);
    piStack_74 = (int *)0x0;
    pfStack_78 = (float *)0x0;
    piStack_7c = (int *)((float)param_1[0x591] * (float)param_1[0x515]);
    uStack_80 = 0;
    uStack_84 = 0x5057dd;
    FUN_00a947e0();
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005055a4_default:
  return;
}

// 00518530  FUN_00518530  size=804  [between]
void __fastcall FUN_00518530(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60 [4];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_80 = *(undefined4 *)(param_1 + 0x40);
  puVar1 = (undefined4 *)(param_1 + 0x40);
  local_78 = *(undefined4 *)(param_1 + 0x48);
  local_74 = *(undefined4 *)(param_1 + 0x4c);
  local_90 = *puVar1;
  local_88 = *(undefined4 *)(param_1 + 0x48);
  local_84 = *(undefined4 *)(param_1 + 0x4c);
  *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x2000000;
  local_7c = *(float *)(param_1 + 0x44) + 1.0;
  local_8c = *(float *)(param_1 + 0x44) - 30.0;
  FUN_004fa2a0();
  piVar4 = (int *)(param_1 + 0x15ec);
  local_94 = 0;
  if (*piVar4 == 0) {
    FUN_00ac81f0(puVar1,piVar4,&local_94);
  }
  else {
    FUN_00ac8270(puVar1,piVar4,&local_94);
  }
  FUN_004fe030();
  if (*(int *)(param_1 + 0xf50) == 0) {
    if (*(int *)(param_1 + 0xf08) != 0) {
      iVar3 = FUN_00907560(param_1 + 0xf08,&local_70,0,0,0,0,0,0);
      if (iVar3 == 0) {
        if (*(float *)(param_1 + 0xf00) < *(float *)(param_1 + 0xef4)) {
          *(float *)(param_1 + 0xef4) =
               *(float *)(param_1 + 0xef4) - *(float *)(param_1 + 0x910) * 0.1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xef0) = local_70;
        *(undefined4 *)(param_1 + 0xef4) = local_6c;
        *(undefined4 *)(param_1 + 0xef8) = local_68;
        *(undefined4 *)(param_1 + 0xefc) = local_64;
        if (*(float *)(param_1 + 0xef4) < *(float *)(param_1 + 0xf00)) {
          *(undefined4 *)(param_1 + 0xf00) = *(undefined4 *)(param_1 + 0xef4);
        }
      }
      *(undefined4 *)(param_1 + 0xf50) = 1;
    }
    piVar4 = (int *)FUN_009f8b60();
    local_50 = local_80;
    local_4c = local_7c;
    local_30 = *piVar4 << 0x10 | 0x1e;
    local_48 = local_78;
    local_44 = local_74;
    local_60[1] = 0;
    local_40 = local_90;
    local_2c = 0;
    local_3c = local_8c;
    local_28 = 0;
    local_24 = 0;
    local_38 = local_88;
    local_20 = "em0190_ground";
    local_1c = 0;
    local_34 = local_84;
    local_18 = 0;
    local_60[0] = param_1 + 0xf08;
    HavokRayCastManager::set(local_60);
  }
  *(float *)(param_1 + 0xf20) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xf20);
  if ((((*(uint *)(param_1 + 0xecc) & 0x8000) != 0) && (0.0 < *(float *)(param_1 + 0x1034))) &&
     (fVar2 = *(float *)(param_1 + 0x1034) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x1034) = fVar2, fVar2 < 0.0)) {
    *(undefined4 *)(param_1 + 0x1034) = 0;
  }
  iVar3 = FUN_004fd2b0(*(int *)(param_1 + 0xa84) + 0x40);
  if (iVar3 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x15cc) + *(float *)(param_1 + 0x910);
  }
  *(float *)(param_1 + 0x15cc) = fVar2;
  iVar3 = FUN_00ac4770();
  if (iVar3 == 0) {
    FUN_005151f0();
  }
  FUN_005182c0();
  if (*(int *)(param_1 + 0x4a0) == 5) {
    FUN_00512e20();
  }
  else if (*(int *)(param_1 + 0x4e4) == 0) {
    FUN_00c27f40(3,0xbf800000);
  }
  FUN_004fd390();
  FUN_004fd330();
  FUN_005026a0();
  FUN_004fcc90();
  FUN_004fefd0();
  if (*(int *)(param_1 + 0x4e4) == 0) {
    FUN_0050f7d0();
    FUN_0050f9f0();
  }
  if (0.0 < *(float *)(param_1 + 0x13c0)) {
    *(float *)(param_1 + 0x13c0) = *(float *)(param_1 + 0x13c0) - *(float *)(param_1 + 0x910);
  }
  iVar3 = FUN_00a94ce0(1);
  if (iVar3 != 0) {
    FUN_00a94bc0(1,0);
  }
  return;
}

// 00518860  FUN_00518860  size=56  [between]
void __fastcall FUN_00518860(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4770();
  if (iVar1 == 0) {
    FUN_005151f0();
  }
  FUN_005182c0();
  FUN_004fd390();
  FUN_004fd330();
  if (*(int *)(param_1 + 0x4e4) == 0) {
    FUN_0050f7d0();
    return;
  }
  return;
}

// 005188A0  Em0190::vf4C  size=152  [class]
void __fastcall Em0190::vf4C(int param_1)

{
  int iVar1;
  
  BehaviorEmBase::vf4C();
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 0:
  case 3:
  case 4:
  case 5:
    FUN_00518530();
    break;
  case 1:
    FUN_00514500();
    break;
  case 2:
    FUN_00518860();
  }
  iVar1 = FUN_00ac8120();
  if ((((iVar1 == 0) ||
       ((iVar1 = FUN_00a8cab0(), iVar1 != 0x3e && (iVar1 = FUN_00a8cab0(), iVar1 != 0x3d)))) &&
      (*(int *)(param_1 + 0x618) != 0x1f)) && (*(int *)(param_1 + 0x4a0) != 1)) {
    DAT_01bea094 = DAT_01bea094 & 0xfffffeff;
    *(undefined4 *)(param_1 + 0x15e8) = 0;
    return;
  }
  DAT_01bea094 = DAT_01bea094 | 0x100;
  *(undefined4 *)(param_1 + 0x15e8) = 1;
  return;
}

// 00AAF4A0  Em0190::Em0190  size=350  [class]
undefined4 * __fastcall Em0190::Em0190(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  cEspControler::cEspControler();
  FUN_00904d60();
  param_1[0x3b3] = 0;
  FUN_00904d60();
  iVar1 = 1;
  do {
    FUN_00904d60();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00904d60();
  FUN_00a7c930();
  FUN_00904d60();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_004105d0();
  FUN_004105d0();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  param_1[0x508] = 0;
  param_1[0x510] = 0;
  FUN_009003e0();
  FUN_00a7c930();
  iVar1 = 7;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a603a0();
  FUN_00a603a0();
  FUN_00a603a0();
  FUN_00a7c930();
  param_1[0x598] = 0;
  param_1[0x599] = 0;
  param_1[0x59a] = 0;
  param_1[0x59b] = 0;
  param_1[0x59c] = 0;
  return param_1;
}

// 00AAF600  Em0190::vf04  size=6  [class]
undefined * Em0190::vf04(void)

{
  return &DAT_01b34f20;
}

// 00AAF610  FUN_00aaf610  size=200  [callgraph]
void __fastcall FUN_00aaf610(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1664) != 0) {
    *(undefined4 *)(param_1 + 0x166c) = 0;
    if (*(int *)(param_1 + 0x1670) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1664),0);
      *(undefined4 *)(param_1 + 0x1670) = 0;
    }
    *(undefined4 *)(param_1 + 0x1664) = 0;
    *(undefined4 *)(param_1 + 0x1668) = 0;
  }
  cXml::cXml_7();
  cXml::cXml_7();
  cXml::cXml_7();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00905ce0();
  FUN_00905ce0();
  iVar1 = 1;
  do {
    FUN_00905ce0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB7F00  Em0190::vf00  size=30  [class]
undefined4 __thiscall Em0190::vf00(undefined4 param_1,byte param_2)

{
  FUN_00aaf610();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

