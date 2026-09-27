// src/enemy/em0040/Em0040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAC790..00B29030, 424 functions

#include "mgrr.h"
#include "Em0040.h"

// 00AAC790  Em0040::Em0040  size=265  [class]
undefined4 * __fastcall Em0040::Em0040(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = vftable;
  FUN_00a7c930();
  iVar1 = 1;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00904d60();
  FUN_00904d60();
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  param_1[0x449] = 0;
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_00a831e0();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a603a0();
  cEspControler::cEspControler();
  return param_1;
}

// 00AAC8A0  Em0040::vf04  size=6  [class]
undefined * Em0040::vf04(void)

{
  return &DAT_01be9d00;
}

// 00AAC8B0  FUN_00aac8b0  size=132  [callgraph]
void FUN_00aac8b0(void)

{
  cEspControler::~cEspControler();
  cXml::cXml_7();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  FUN_00905ce0();
  FUN_00905ce0();
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  return;
}

// 00AB6CE0  Em0040::destruct  size=30  [class]
undefined4 __thiscall Em0040::destruct(undefined4 param_1,byte param_2)

{
  FUN_00aac8b0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B02200  Em0040::vf300  size=1  [class]
void Em0040::vf300(void)

{
  return;
}

// 00B02210  Em0040::vf304  size=1  [class]
void Em0040::vf304(void)

{
  return;
}

// 00B02220  Em0040::vf3C  size=55  [class]
void __thiscall Em0040::vf3C(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e26e0(param_2);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(param_2);
  }
  return;
}

// 00B02260  Em0040::vf2F8  size=46  [class]
void __fastcall Em0040::vf2F8(int *param_1)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(10,0,1);
    param_1[0x1af] = 1;
  }
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00B022B0  FUN_00b022b0  size=197  [between]
void __fastcall FUN_00b022b0(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  uVar3 = 0x14;
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 0:
  case 1:
  case 2:
    uVar4 = 0xd;
    break;
  case 3:
  case 5:
  case 0x11:
    uVar4 = 0xe;
    break;
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    goto switchD_00b022d0_caseD_4;
  case 0xe:
  case 0xf:
    uVar4 = 0xf;
    break;
  case 0x10:
    uVar4 = 0x15;
    break;
  default:
    goto switchD_00b022d0_default;
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(uVar4);
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x5c);
    break;
  default:
    goto switchD_00b022d0_caseD_4;
  case 2:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 100);
    break;
  case 3:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x6c);
    break;
  case 4:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x74);
  }
  fVar5 = (float10)(*pcVar2)(uVar4);
  if ((float10)0 < fVar5) {
    uVar3 = FUN_00fdbc60();
    FUN_00a8edf0(uVar3);
    return;
  }
switchD_00b022d0_caseD_4:
switchD_00b022d0_default:
  FUN_00a8edf0(uVar3);
  return;
}

// 00B023C0  FUN_00b023c0  size=90  [between]
void __fastcall FUN_00b023c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x00b023e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x00b02418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x34))();
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00b023ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 100))();
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x00b023fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x6c))();
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00b0240a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x74))();
    return;
  }
}

// 00B02430  FUN_00b02430  size=142  [between]
void __thiscall FUN_00b02430(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))(param_2);
    FUN_00fdbc60();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x00b024bc. Too many branches */
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

// 00B024E0  FUN_00b024e0  size=16  [between]
int __fastcall FUN_00b024e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}

// 00B024F0  FUN_00b024f0  size=259  [between]
undefined4 FUN_00b024f0(void)

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

// 00B02600  Em0040::vf1B0  size=5  [class]
undefined4 Em0040::vf1B0(void)

{
  return 0;
}

// 00B02610  FUN_00b02610  size=201  [between]
float10 __thiscall FUN_00b02610(int param_1,undefined4 param_2,float param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)FUN_00a8ec30(param_2);
  if (param_3 != 0.0) {
    fVar1 = *(float *)(param_1 + 0x910);
    fVar3 = (float10)FUN_00ddba30((float)(fVar2 - (float10)*(float *)(param_1 + 0x94)));
    fVar4 = (float10)FUN_00fdc1f0();
    fVar3 = ((float10)1 - fVar4) * (float10)(float)fVar3;
    fVar4 = (float10)(fVar1 * param_4);
    if (fVar3 <= -fVar4) {
      fVar3 = -fVar4;
    }
    if (fVar4 < fVar3) {
      fVar3 = fVar4;
    }
    fVar3 = (float10)FUN_00ddba30((float)(fVar3 + (float10)*(float *)(param_1 + 0x94)));
    *(float *)(param_1 + 0x94) = (float)fVar3;
    fVar2 = (float10)(float)fVar2;
  }
  fVar2 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar2));
  return ABS(fVar2);
}

// 00B026E0  FUN_00b026e0  size=36  [between]
void __thiscall FUN_00b026e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00b02610(*(int *)(param_1 + 0xa84) + 0x40,param_2,param_3);
  return;
}

// 00B02710  FUN_00b02710  size=37  [between]
float10 __thiscall FUN_00b02710(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 00B02740  FUN_00b02740  size=40  [between]
float10 __fastcall FUN_00b02740(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 00B02780  FUN_00b02780  size=36  [between]
undefined4 __fastcall FUN_00b02780(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
  case 0x5b:
  case 0x79:
  case 0x7e:
  case 0x81:
    return 1;
  default:
    return 0;
  }
}

// 00B02830  FUN_00b02830  size=112  [between]
void __fastcall FUN_00b02830(int *param_1)

{
  int iVar1;
  
  if (param_1[0x186] < 0x2d) {
    switch(param_1[0x186]) {
    case 0:
      break;
    default:
      iVar1 = (**(code **)(*param_1 + 0x1fc))();
      if (((((iVar1 == 0) && (param_1[0x540] < 1)) &&
           ((param_1[0x1d9] == 0 || (iVar1 = FUN_008e2740(), iVar1 != 0)))) &&
          (iVar1 = param_1[0x186], iVar1 != 0x1f)) && ((iVar1 < 0x24 || (0x2a < iVar1)))) {
                    /* WARNING: Could not recover jumptable at 0x00b0289c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 00B02930  FUN_00b02930  size=266  [between]
void __fastcall FUN_00b02930(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(5,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x920) = 0;
    if (*(int *)(param_1 + 0x1138) == 2) {
      uVar4 = 0x3e99999a;
      uVar1 = 0x3dcccccd;
    }
    else {
      uVar4 = 0x3fcccccd;
      uVar1 = 0x3f4ccccd;
    }
    fVar3 = (float10)FUN_00dde300(uVar1,uVar4);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(float *)(param_1 + 0x924) = (float)fVar3;
    *(undefined4 *)(param_1 + 0x95c) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    *(float *)(param_1 + 0x15a4) = *(float *)(param_1 + 0x15a4) - *(float *)(param_1 + 0x910);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(float *)(param_1 + 0x920) =
         *(float *)(param_1 + 0x910) * 0.016666668 + *(float *)(param_1 + 0x920);
    iVar2 = FUN_00a82d50();
    if ((iVar2 == 1) && (*(int *)(param_1 + 0xb08) != -1)) {
      FUN_00a8caf0(4,0,0,0);
      return;
    }
  }
  return;
}

// 00B02AD0  FUN_00b02ad0  size=366  [between]
void __fastcall FUN_00b02ad0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float local_38 [2];
  float local_30;
  int local_2c [2];
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if (param_1[0x187] == 0) {
    iVar1 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00a5dcc0(iVar1);
    FUN_00aa4080(8,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  local_20 = (float)param_1[0x14];
  local_1c = (float)param_1[0x15];
  local_18 = (float)param_1[0x16];
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar2 = (float10)FUN_00a581b0(local_2c,SQRT(((float)param_1[0x16] - local_18) *
                                              ((float)param_1[0x16] - local_18) +
                                              ((float)param_1[0x15] - local_1c) *
                                              ((float)param_1[0x15] - local_1c) +
                                              ((float)param_1[0x14] - local_20) *
                                              ((float)param_1[0x14] - local_20)),param_1[0x249]);
  param_1[0x249] = (int)(float)fVar2;
  FUN_00a585a0(local_38,0,(float)fVar2);
  fVar2 = (float10)fpatan((float10)local_38[0],(float10)local_30);
  param_1[0x25] = (int)(float)fVar2;
  param_1[0x14] = local_2c[0];
  param_1[0x16] = local_24;
  iVar1 = FUN_00a54a60(param_1[0x249]);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B02C40  FUN_00b02c40  size=53  [between]
void __fastcall FUN_00b02c40(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa9280(5);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B02C80  FUN_00b02c80  size=55  [between]
void __fastcall FUN_00b02c80(int *param_1)

{
  float fVar1;
  
  if (0.0 < (float)param_1[0x248]) {
    fVar1 = (float)param_1[0x248] - (float)param_1[0x244];
    param_1[0x248] = (int)fVar1;
    if (!NAN(fVar1) && fVar1 < 0.0 != (fVar1 == 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x00b02cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B02CC0  FUN_00b02cc0  size=65  [between]
void __fastcall FUN_00b02cc0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa9280(5);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_1 + 0xb88);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B02D30  FUN_00b02d30  size=105  [between]
void __fastcall FUN_00b02d30(int *param_1)

{
  float fVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa9280(5);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (0.0 < fVar1 - (float)param_1[0x244]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b02d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B02DF0  FUN_00b02df0  size=493  [between]
void __fastcall FUN_00b02df0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 *puVar3;
  float fStack_84;
  float fStack_78;
  float local_74;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  if ((float)param_1[0x451] <= 0.0) {
    local_74 = (float)param_1[0x22a] * (float)param_1[0x244];
    fStack_84 = 1.6179737e-38;
    fVar2 = (float10)FUN_00fdc1f0();
    fVar2 = ((float10)(float)param_1[0x451] -
            (float10)local_74 * (float10)0.1 * (float10)(float)param_1[0x455]) * fVar2;
    param_1[0x451] = (int)(float)fVar2;
    if (fVar2 < (float10)0.7) {
      param_1[0x451] = (int)(float)(fVar2 - (float10)(float)param_1[0x25d] * (float10)local_74);
    }
    fVar2 = (float10)0.1 + (float10)(float)param_1[0x25d];
    param_1[0x25d] = (int)(float)fVar2;
    if ((float10)0.5 < fVar2) {
      param_1[0x25d] = (int)(float)(float10)0.5;
    }
  }
  else {
    local_74 = (float)param_1[0x451] -
               (float)param_1[0x22a] * (float)param_1[0x244] * (float)param_1[0x455];
    param_1[0x451] = (int)local_74;
    param_1[0x25d] = 0;
    if (local_74 < 0.0) {
      fStack_84 = 1.6179667e-38;
      fVar2 = (float10)FUN_00fdc1f0();
      param_1[0x451] = (int)(float)(fVar2 * (float10)local_74);
    }
  }
  if (param_1[0x1d9] != 0) {
    if (*(float *)(*(int *)(param_1[0x1d9] + 0xd0) + 4) < 0.0) {
      fStack_84 = 1.6179948e-38;
      iVar1 = FUN_008e2740();
      if (iVar1 != 0) {
        param_1[0x228] = 1;
        param_1[0x451] = 0;
        param_1[0x455] = 0x3f800000;
      }
    }
    fStack_84 = 1.6180007e-38;
    iVar1 = (**(code **)(*param_1 + 0x84))();
    fStack_84 = *(float *)(iVar1 + 4);
    puVar3 = auStack_50;
    D3DXMatrixRotationY(puVar3);
    D3DXVec3TransformNormal(&fStack_78,param_1 + 0x450,auStack_58);
    D3DXVec3TransformNormal(&fStack_84,&fStack_84,param_1 + 0x2c);
    fStack_78 = ((float)param_1[0x3a] + (float)puVar3) * (float)param_1[0x244];
    local_74 = (float)param_1[0x244] * fStack_84;
    FUN_008e0c00(&stack0xffffff80);
  }
  return;
}

// 00B02FF0  FUN_00b02ff0  size=36  [between]
undefined4 __fastcall FUN_00b02ff0(int param_1)

{
  if (((*(int *)(param_1 + 0x16b4) != 0) && (*(int *)(param_1 + 0xea0) != 0)) &&
     (*(int *)(param_1 + 0xea4) == 0)) {
    return 1;
  }
  return 0;
}

// 00B03020  FUN_00b03020  size=148  [between]
void __thiscall FUN_00b03020(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x1d9] != 0) {
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
    }
    else {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        return;
      }
    }
  }
  return;
}

// 00B030C0  FUN_00b030c0  size=134  [between]
undefined4 __thiscall FUN_00b030c0(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xea0);
  }
  if (*(int *)(param_1 + 0xea4) != 0) {
    *(undefined4 *)(param_1 + 0x12f0) = *(undefined4 *)(param_1 + 0xec0);
    *(undefined4 *)(param_1 + 0x12f4) = *(undefined4 *)(param_1 + 0xec4);
    *(undefined4 *)(param_1 + 0x12f8) = *(undefined4 *)(param_1 + 0xec8);
    *(undefined4 *)(param_1 + 0x12fc) = *(undefined4 *)(param_1 + 0xecc);
    *(undefined4 *)(param_1 + 0x1300) = *(undefined4 *)(param_1 + 0xeb0);
    *(undefined4 *)(param_1 + 0x1304) = *(undefined4 *)(param_1 + 0xeb4);
    *(undefined4 *)(param_1 + 0x1308) = *(undefined4 *)(param_1 + 0xeb8);
    *(undefined4 *)(param_1 + 0x130c) = *(undefined4 *)(param_1 + 0xebc);
    return 1;
  }
  return 0;
}

// 00B03150  FUN_00b03150  size=123  [between]
undefined4 __fastcall FUN_00b03150(int param_1)

{
  if ((*(int *)(param_1 + 0xed4) != 0) && (*(int *)(param_1 + 0xf04) != 0)) {
    *(undefined4 *)(param_1 + 0x12f0) = *(undefined4 *)(param_1 + 0xf20);
    *(undefined4 *)(param_1 + 0x12f4) = *(undefined4 *)(param_1 + 0xf24);
    *(undefined4 *)(param_1 + 0x12f8) = *(undefined4 *)(param_1 + 0xf28);
    *(undefined4 *)(param_1 + 0x12fc) = *(undefined4 *)(param_1 + 0xf2c);
    *(undefined4 *)(param_1 + 0x1300) = *(undefined4 *)(param_1 + 0xf10);
    *(undefined4 *)(param_1 + 0x1304) = *(undefined4 *)(param_1 + 0xf14);
    *(undefined4 *)(param_1 + 0x1308) = *(undefined4 *)(param_1 + 0xf18);
    *(undefined4 *)(param_1 + 0x130c) = *(undefined4 *)(param_1 + 0xf1c);
    return 1;
  }
  return 0;
}

// 00B031D0  FUN_00b031d0  size=114  [between]
undefined4 __fastcall FUN_00b031d0(int param_1)

{
  if (*(int *)(param_1 + 0xf34) != 0) {
    *(undefined4 *)(param_1 + 0x12f0) = *(undefined4 *)(param_1 + 0xf50);
    *(undefined4 *)(param_1 + 0x12f4) = *(undefined4 *)(param_1 + 0xf54);
    *(undefined4 *)(param_1 + 0x12f8) = *(undefined4 *)(param_1 + 0xf58);
    *(undefined4 *)(param_1 + 0x12fc) = *(undefined4 *)(param_1 + 0xf5c);
    *(undefined4 *)(param_1 + 0x1300) = *(undefined4 *)(param_1 + 0xf40);
    *(undefined4 *)(param_1 + 0x1304) = *(undefined4 *)(param_1 + 0xf44);
    *(undefined4 *)(param_1 + 0x1308) = *(undefined4 *)(param_1 + 0xf48);
    *(undefined4 *)(param_1 + 0x130c) = *(undefined4 *)(param_1 + 0xf4c);
    return 1;
  }
  return 0;
}

// 00B03340  FUN_00b03340  size=94  [between]
void __fastcall FUN_00b03340(int param_1)

{
  if (*(int *)(param_1 + 0x4a0) == 0x10) {
    switch(*(undefined1 *)(param_1 + 0xba8)) {
    case 1:
      FUN_00c81e40(0x46);
      return;
    case 2:
      FUN_00c81e40(0x47);
      return;
    case 3:
      FUN_00c81e40(0x48);
      return;
    case 4:
      FUN_00c81e40(0x49);
      return;
    case 5:
      FUN_00c81e40(0x4a);
    }
  }
  return;
}

// 00B033C0  FUN_00b033c0  size=116  [between]
undefined4 __thiscall FUN_00b033c0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  fVar1 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(param_1 + 0x94)));
  if ((fVar1 < (float10)-2.0943952) || ((float10)2.0943952 < fVar1)) {
    return 0xc;
  }
  if (((float10)-0.08726646 <= fVar1) && ((float10)0 < fVar1)) {
    return 8;
  }
  return 9;
}

// 00B03440  FUN_00b03440  size=237  [between]
undefined4 FUN_00b03440(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar1 = param_3[2] * param_2[2] + *param_2 * *param_3 + param_3[1] * param_2[1];
  if (fVar1 <= 0.99999) {
    fVar7 = (float10)FUN_00ddbb50(fVar1);
    fVar8 = (float10)fsin(fVar7);
    fVar9 = (float10)fsin(((float10)1 - (float10)param_4) * fVar7);
    fVar7 = (float10)fsin(fVar7 * (float10)param_4);
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    fVar4 = param_2[1];
    fVar5 = param_2[2];
    fVar6 = param_2[3];
    *param_1 = (float)(((float10)*param_2 * fVar9 + (float10)*param_3 * fVar7) / fVar8);
    param_1[1] = (float)(((float10)(float)(fVar9 * (float10)fVar4) + (float10)fVar1 * fVar7) / fVar8
                        );
    param_1[2] = (float)(((float10)fVar2 * fVar7 + (float10)(float)((float10)fVar5 * fVar9)) / fVar8
                        );
    param_1[3] = (float)(((float10)fVar6 * fVar9 + (float10)fVar3 * fVar7) / fVar8);
    return 1;
  }
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  param_1[3] = param_3[3];
  return 0;
}

// 00B03570  Em0040::vf158  size=5  [class]
undefined4 Em0040::vf158(void)

{
  return 0;
}

// 00B035C0  FUN_00b035c0  size=72  [between]
void __fastcall FUN_00b035c0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
  }
  else if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b035fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B03610  FUN_00b03610  size=72  [between]
void __fastcall FUN_00b03610(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
  }
  else if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b0364a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B036D0  FUN_00b036d0  size=33  [between]
void __fastcall FUN_00b036d0(int param_1)

{
  int iVar1;
  
  if (1 < *(int *)(param_1 + 0x61c)) {
    iVar1 = FUN_00a8c760(0xb);
    if (iVar1 != 0) {
      FUN_00c0eb60();
      return;
    }
  }
  return;
}

// 00B03700  FUN_00b03700  size=129  [between]
void __thiscall FUN_00b03700(int param_1,int param_2)

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

// 00B03790  FUN_00b03790  size=101  [between]
void FUN_00b03790(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1 != 0) {
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
      Animation::Motion::Unit::setCurrentTime(0,(float)fVar2);
    }
  }
  return;
}

// 00B03860  FUN_00b03860  size=150  [between]
void __fastcall FUN_00b03860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a7c8a0();
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x4e,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    FUN_00b03700(uVar2);
    return;
  }
  FUN_00b03790(uVar2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00b03700(uVar2);
  return;
}

// 00B03900  FUN_00b03900  size=150  [between]
void __fastcall FUN_00b03900(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a7c8a0();
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x50,0,0x3e888889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    FUN_00b03700(uVar2);
    return;
  }
  FUN_00b03790(uVar2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00b03700(uVar2);
  return;
}

// 00B03A00  FUN_00b03a00  size=74  [between]
uint FUN_00b03a00(float param_1)

{
  byte bVar1;
  
  if (ABS(param_1) < 1.5707964 != (ABS(param_1) == 1.5707964)) {
    return 0x25;
  }
  bVar1 = FUN_00dde2d0(0,100);
  if ((bVar1 & 3) != 0) {
    return ((int)(char)~bVar1 & 2U | 0x4c) >> 1;
  }
  return 0x24;
}

// 00B03A50  FUN_00b03a50  size=115  [between]
void __fastcall FUN_00b03a50(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (((*(int *)(param_1 + 0x4a0) != 0x10) && ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
     (*(int *)(param_1 + 0x16ac) == 0)) {
    if (*(int *)(param_1 + 0x4a0) != 5) {
      BehaviorEmBase::vf364(0xffffffff);
      return;
    }
    iVar1 = FUN_00c2a5b0(param_1 + 0xab0);
    if (iVar1 != 0) {
      fVar2 = (float10)FUN_00dde300(0,0x3f800000);
      if (fVar2 < (float10)*(float *)(param_1 + 0x12c0)) {
        FUN_00ac9650(0);
      }
    }
  }
  return;
}

// 00B03B70  FUN_00b03b70  size=120  [between]
void __fastcall FUN_00b03b70(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x00b03be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B03C00  FUN_00b03c00  size=225  [between]
void __fastcall FUN_00b03c00(int *param_1)

{
  int iVar1;
  int iVar2;
  float local_30 [4];
  float local_20;
  float local_18;
  
  iVar2 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    switchD_0080dbae::default();
    local_20 = *(float *)(iVar2 + 0x40);
    local_18 = *(float *)(iVar2 + 0x48);
    local_30[0] = 0.0;
    local_30[1] = 0.0;
    local_30[2] = 3.0;
    D3DXVec3TransformNormal(local_30,local_30,param_1 + 4);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x14] = (int)((float)param_1[0x14] + (local_20 - ((float)param_1[0x10] + local_30[0])));
    param_1[0x16] = (int)((local_18 - ((float)param_1[0x12] + local_30[2])) + (float)param_1[0x16]);
    param_1[0x248] = 0x40400000;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B03D00  FUN_00b03d00  size=684  [between]
void __fastcall FUN_00b03d00(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  float unaff_ESI;
  int iVar5;
  float local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_18;
  
  iVar5 = 0;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar5 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4120(0x3d,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    FUN_00b03020(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    local_30 = 0;
    local_2c = 0.0;
    if (param_1[0x186] == 0x13) {
      local_28 = 0x3f19999a;
    }
    else {
      local_28 = 0x40266666;
    }
    if (iVar5 != 0) {
      switchD_0080dbae::default();
      local_20 = *(undefined4 *)(iVar5 + 0x40);
      local_18 = *(undefined4 *)(iVar5 + 0x48);
      D3DXVec3TransformNormal(&local_30,&local_30,param_1 + 4);
      param_1[0x14] = (int)((float)param_1[0x14] + (local_2c - ((float)param_1[0x10] + unaff_ESI)));
      param_1[0x16] = (int)((fStack_24 - ((float)param_1[0x12] + local_34)) + (float)param_1[0x16]);
      return;
    }
    break;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      fVar1 = (float)param_1[0x11];
      fVar2 = (float)param_1[0x248];
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      pcVar3 = *(code **)(*param_1 + 800);
      param_1[0x225] = (int)(fVar1 - fVar2);
      iVar4 = (*pcVar3)(0x3d888889);
      if (iVar4 == 0) {
        FUN_00aa4120(0x1d,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = 2;
      }
      else {
        FUN_00aa4120(0x1c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = 3;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
    param_1[0x248] = param_1[0x11];
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar4 != 0) {
      FUN_00aa4120(0x1c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 3;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 00B040A0  FUN_00b040a0  size=32  [between]
void FUN_00b040a0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 00B040C0  FUN_00b040c0  size=260  [between]
void __fastcall FUN_00b040c0(int param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  int local_30;
  uint local_2c;
  char *local_28 [10];
  
  local_30 = FUN_00ac89d0();
  if (local_30 == 0) {
    local_30 = param_1;
  }
  local_28[0] = "RIGHT_hand";
  local_28[1] = "LEFT_hand";
  local_28[2] = "CENTER_hand_001";
  local_28[3] = "CENTER_hand_002";
  local_28[4] = "kogecko_arms";
  local_28[5] = "kogecko_arms4";
  local_28[6] = "kogecko_arms8";
  local_28[7] = "CENTER_ARM_b";
  local_28[8] = "LEFT_ARM_b";
  local_28[9] = (char *)((int)"?ff&@RIGHT_ARM_b" + 5);
  local_2c = 0;
  do {
    iVar6 = 0;
    if (0 < *(short *)(local_30 + 0x324)) {
      piVar7 = (int *)(*(int *)(local_30 + 800) + 0x60);
      do {
        pbVar5 = *(byte **)(*piVar7 + 0x40);
        pbVar3 = (byte *)local_28[local_2c];
        if (pbVar5 != (byte *)0x0) {
          do {
            bVar2 = *pbVar3;
            bVar8 = bVar2 < *pbVar5;
            if (bVar2 != *pbVar5) {
LAB_00b04180:
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_00b04185;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar3[1];
            bVar8 = bVar2 < pbVar5[1];
            if (bVar2 != pbVar5[1]) goto LAB_00b04180;
            pbVar5 = pbVar5 + 2;
            pbVar3 = pbVar3 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_00b04185:
          if (iVar4 == 0) {
            if ((iVar6 != -1) && (iVar6 = iVar6 * 0x70 + *(int *)(local_30 + 800), iVar6 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            break;
          }
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 0x1c;
      } while (iVar6 < *(short *)(local_30 + 0x324));
    }
    local_2c = local_2c + 1;
    if (9 < local_2c) {
      return;
    }
  } while( true );
}

// 00B041D0  FUN_00b041d0  size=130  [between]
void __fastcall FUN_00b041d0(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  
  iVar3 = FUN_00ac89d0();
  if (iVar3 == 0) {
    iVar3 = param_1;
  }
  iVar7 = 0;
  if (*(short *)(iVar3 + 0x324) < 1) {
    return;
  }
  piVar8 = (int *)(*(int *)(iVar3 + 800) + 0x60);
  do {
    pbVar6 = *(byte **)(*piVar8 + 0x40);
    if (pbVar6 != (byte *)0x0) {
      pcVar4 = "hontai";
      do {
        bVar2 = *pcVar4;
        bVar9 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_00b04225:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00b0422a;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar4[1];
        bVar9 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_00b04225;
        pcVar4 = pcVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_00b0422a:
      if (iVar5 == 0) {
        if (iVar7 == -1) {
          return;
        }
        iVar3 = iVar7 * 0x70 + *(int *)(iVar3 + 800);
        if (iVar3 == 0) {
          return;
        }
        puVar1 = (uint *)(iVar3 + 0x38);
        *puVar1 = *puVar1 & 0xfffffffe;
        return;
      }
    }
    iVar7 = iVar7 + 1;
    piVar8 = piVar8 + 0x1c;
    if (*(short *)(iVar3 + 0x324) <= iVar7) {
      return;
    }
  } while( true );
}

// 00B042F0  FUN_00b042f0  size=150  [between]
void __fastcall FUN_00b042f0(int *param_1)

{
  float fVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43160000;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B043B0  FUN_00b043b0  size=93  [between]
void __fastcall FUN_00b043b0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B04430  FUN_00b04430  size=131  [between]
void __fastcall FUN_00b04430(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(*(undefined4 *)(&DAT_016a095c + param_1[0x186] * 4),0,0x3e4ccccd,0x3f800000,0,
                 0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x00b044b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B04510  FUN_00b04510  size=134  [between]
void __thiscall FUN_00b04510(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (*param_3 - *(float *)(param_1 + 0x1590)) * *(float *)(param_1 + 0x1580) +
          *(float *)(param_1 + 0x1584) * (param_3[1] - *(float *)(param_1 + 0x1594)) +
          *(float *)(param_1 + 0x1588) * (param_3[2] - *(float *)(param_1 + 0x1598));
  fVar1 = *(float *)(param_1 + 0x1584);
  fVar2 = *(float *)(param_1 + 0x1588);
  fVar3 = *(float *)(param_1 + 0x158c);
  *param_2 = fVar4 * *(float *)(param_1 + 0x1580) + *(float *)(param_1 + 0x1590);
  param_2[1] = fVar1 * fVar4 + *(float *)(param_1 + 0x1594);
  param_2[2] = fVar2 * fVar4 + *(float *)(param_1 + 0x1598);
  param_2[3] = fVar3 * fVar4 + *(float *)(param_1 + 0x159c);
  return;
}

// 00B04660  FUN_00b04660  size=38  [between]
void __fastcall FUN_00b04660(int param_1)

{
  if ((*(int *)(param_1 + 0x7b0) != 0) && (*(int *)(param_1 + 0xe44) != 0)) {
    FUN_008f7700(param_1);
    switchD_0080dbae::default();
    return;
  }
  return;
}

// 00B04690  FUN_00b04690  size=47  [between]
void __fastcall FUN_00b04690(int param_1)

{
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a92a00();
  FUN_00a92ef0();
  return;
}

// 00B046F0  FUN_00b046f0  size=66  [between]
void FUN_00b046f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a9e060(0);
    FUN_00a805f0();
    FUN_00a7c950();
  }
  FUN_00a944d0();
  FUN_00a92ef0();
  return;
}

// 00B04750  FUN_00b04750  size=94  [between]
void __fastcall FUN_00b04750(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xe48) != 0) {
      FUN_00a9e290(&DAT_01647974,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    FUN_00a9e290(&DAT_0164796c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 00B047C0  FUN_00b047c0  size=136  [between]
void __fastcall FUN_00b047c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xe48) != 0) {
      FUN_00a9e290(&DAT_01647984,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    FUN_00a9e290(&DAT_0164797c,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8caf0(0x95,0,0,0);
      return;
    }
  }
  return;
}

// 00B04870  FUN_00b04870  size=75  [between]
void __fastcall FUN_00b04870(int param_1)

{
  FUN_00a9e060(0);
  FUN_00a805f0();
  *(undefined4 *)(param_1 + 0xe54) = 0;
  if (*(int *)(param_1 + 0xe4c) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xe4c));
    *(undefined4 *)(param_1 + 0xe4c) = 0;
  }
  FUN_00a944d0();
  FUN_00a92ef0();
  return;
}

// 00B048F0  FUN_00b048f0  size=327  [between]
void __fastcall FUN_00b048f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_00a8cac0();
  if (iVar4 == 0) {
    FUN_00a9e290(&DAT_0164798c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  if ((iVar4 == 1) && (iVar4 = FUN_00a81330(), iVar4 != 0)) {
    uVar5 = 0x701;
    FUN_00a7c8a0(0x701);
    iVar4 = FUN_00a12210(uVar5);
    *(float *)(param_1 + 0x50) =
         (*(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x50)) * 0.1 + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) =
         (*(float *)(iVar4 + 0x44) - *(float *)(param_1 + 0x54)) * 0.1 + *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) =
         (*(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x58)) * 0.1 + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) =
         (*(float *)(iVar4 + 0x4c) - *(float *)(param_1 + 0x5c)) * 0.1 + *(float *)(param_1 + 0x5c);
    uVar5 = 0x701;
    FUN_00a7c8a0(0x701,0x3dcccccd,5);
    iVar4 = FUN_00a12210(uVar5);
    FUN_00ddefe0(param_1 + 0x90,param_1 + 0x90,iVar4 + 0x90);
    uVar5 = 0x701;
    FUN_00a7c8a0(0x701);
    iVar4 = FUN_00a12210(uVar5);
    fVar1 = *(float *)(param_1 + 0x50) - *(float *)(iVar4 + 0x40);
    fVar3 = *(float *)(param_1 + 0x54) - *(float *)(iVar4 + 0x44);
    fVar2 = *(float *)(param_1 + 0x58) - *(float *)(iVar4 + 0x48);
    if (SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) < 0.5) {
      FUN_00a8caf0(0x9a,0,0,0);
    }
  }
  return;
}

// 00B04AC0  FUN_00b04ac0  size=43  [between]
void FUN_00b04ac0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x9f) {
    FUN_00a8cac0();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B04B20  FUN_00b04b20  size=443  [between]
void __fastcall FUN_00b04b20(int param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      pbVar3 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar6) + 0x40);
      if (pbVar3 != (byte *)0x0) {
        pcVar5 = "RIGHT_hand";
        do {
          bVar2 = *pbVar3;
          bVar8 = bVar2 < (byte)*pcVar5;
          if (bVar2 != *pcVar5) {
LAB_00b04b70:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00b04b75;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar8 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00b04b70;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00b04b75:
        if (iVar4 == 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar6);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar7 < *(short *)(param_1 + 0x324));
  }
  iVar7 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      pbVar3 = *(byte **)(*(int *)(iVar6 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar3 != (byte *)0x0) {
        pcVar5 = "LEFT_hand";
        do {
          bVar2 = *pbVar3;
          bVar8 = bVar2 < (byte)*pcVar5;
          if (bVar2 != *pcVar5) {
LAB_00b04be0:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00b04be5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar8 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00b04be0;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00b04be5:
        if (iVar4 == 0) {
          puVar1 = (uint *)(iVar6 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar7 < *(short *)(param_1 + 0x324));
  }
  iVar7 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      pbVar3 = *(byte **)(*(int *)(iVar6 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar3 != (byte *)0x0) {
        pcVar5 = "CENTER_hand_001";
        do {
          bVar2 = *pbVar3;
          bVar8 = bVar2 < (byte)*pcVar5;
          if (bVar2 != *pcVar5) {
LAB_00b04c50:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00b04c55;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar8 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00b04c50;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00b04c55:
        if (iVar4 == 0) {
          puVar1 = (uint *)(iVar6 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar7 < *(short *)(param_1 + 0x324));
  }
  iVar7 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      pbVar3 = *(byte **)(*(int *)(iVar6 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar3 != (byte *)0x0) {
        pcVar5 = "CENTER_hand_002";
        do {
          bVar2 = *pbVar3;
          bVar8 = bVar2 < (byte)*pcVar5;
          if (bVar2 != *pcVar5) {
LAB_00b04cc0:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00b04cc5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar8 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00b04cc0;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00b04cc5:
        if (iVar4 == 0) {
          puVar1 = (uint *)(iVar6 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar7 < *(short *)(param_1 + 0x324));
  }
  return;
}

// 00B04CF0  FUN_00b04cf0  size=334  [between]
void __fastcall FUN_00b04cf0(int param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      pbVar3 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar7) + 0x40);
      if (pbVar3 != (byte *)0x0) {
        pcVar5 = "LEFT_hand_bat";
        do {
          bVar2 = *pbVar3;
          bVar9 = bVar2 < (byte)*pcVar5;
          if (bVar2 != *pcVar5) {
LAB_00b04d40:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00b04d45;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar9 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00b04d40;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00b04d45:
        if (iVar4 == 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar7);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar8 < *(short *)(param_1 + 0x324));
  }
  iVar8 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      pbVar3 = *(byte **)(*(int *)(iVar7 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar3 != (byte *)0x0) {
        pbVar6 = (byte *)0x1646e10;
        do {
          bVar2 = *pbVar3;
          bVar9 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_00b04db0:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00b04db5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar9 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_00b04db0;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00b04db5:
        if (iVar4 == 0) {
          puVar1 = (uint *)(iVar7 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar8 < *(short *)(param_1 + 0x324));
  }
  iVar8 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      pbVar3 = *(byte **)(*(int *)(iVar7 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar3 != (byte *)0x0) {
        pcVar5 = "CENTER_hand_bat";
        do {
          bVar2 = *pbVar3;
          bVar9 = bVar2 < (byte)*pcVar5;
          if (bVar2 != *pcVar5) {
LAB_00b04e20:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00b04e25;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar9 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00b04e20;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00b04e25:
        if (iVar4 == 0) {
          puVar1 = (uint *)(iVar7 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar8 < *(short *)(param_1 + 0x324));
  }
  return;
}

// 00B04EB0  Em0040::vf294  size=1  [class]
void Em0040::vf294(void)

{
  return;
}

// 00B04EC0  Em0040::vf298  size=1  [class]
void Em0040::vf298(void)

{
  return;
}

// 00B04ED0  Em0040::vf29C  size=1  [class]
void Em0040::vf29C(void)

{
  return;
}

// 00B04EE0  Em0040::vf2A0  size=1  [class]
void Em0040::vf2A0(void)

{
  return;
}

// 00B04EF0  Em0040::vf2A4  size=1  [class]
void Em0040::vf2A4(void)

{
  return;
}

// 00B04F00  Em0040::vf2A8  size=1  [class]
void Em0040::vf2A8(void)

{
  return;
}

// 00B04F10  Em0040::vf2AC  size=1  [class]
void Em0040::vf2AC(void)

{
  return;
}

// 00B04F20  Em0040::vf2B0  size=1  [class]
void Em0040::vf2B0(void)

{
  return;
}

// 00B04F30  Em0040::vf2B4  size=1  [class]
void Em0040::vf2B4(void)

{
  return;
}

// 00B04F40  Em0040::vf2B8  size=1  [class]
void Em0040::vf2B8(void)

{
  return;
}

// 00B04F50  Em0040::vf2BC  size=1  [class]
void Em0040::vf2BC(void)

{
  return;
}

// 00B04F60  Em0040::vf2C0  size=1  [class]
void Em0040::vf2C0(void)

{
  return;
}

// 00B04F70  Em0040::vf2C4  size=1  [class]
void Em0040::vf2C4(void)

{
  return;
}

// 00B04F80  Em0040::vf2C8  size=1  [class]
void Em0040::vf2C8(void)

{
  return;
}

// 00B04F90  Em0040::vf2CC  size=1  [class]
void Em0040::vf2CC(void)

{
  return;
}

// 00B04FA0  Em0040::vf2D0  size=1  [class]
void Em0040::vf2D0(void)

{
  return;
}

// 00B04FE0  FUN_00b04fe0  size=119  [between]
void __fastcall FUN_00b04fe0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(0x5c,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x920);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B05070  FUN_00b05070  size=134  [between]
void __fastcall FUN_00b05070(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x5e,0,0x3f2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00b02610(*(int *)(param_1 + 0xa84) + 0x40,0x3e3851ec,0x3dd67750);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B05110  FUN_00b05110  size=127  [between]
void __fastcall FUN_00b05110(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x60,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8d280();
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
                    /* WARNING: Could not recover jumptable at 0x00b0518d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B051A0  FUN_00b051a0  size=127  [between]
void __fastcall FUN_00b051a0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x62,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8d280();
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
                    /* WARNING: Could not recover jumptable at 0x00b0521d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B05240  FUN_00b05240  size=120  [between]
void __fastcall FUN_00b05240(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(100,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x00b052b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B052F0  FUN_00b052f0  size=120  [between]
void __fastcall FUN_00b052f0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x68,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x00b05366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B05390  FUN_00b05390  size=72  [between]
void __fastcall FUN_00b05390(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b053d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B053E0  FUN_00b053e0  size=59  [between]
void __thiscall FUN_00b053e0(int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a12210(0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x4c);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - param_2;
    *(float *)(iVar1 + 0x54) = param_2;
  }
  return;
}

// 00B054C0  FUN_00b054c0  size=212  [between]
void __fastcall FUN_00b054c0(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x920) = 0;
    if (*(int *)(param_1 + 0x1138) == 2) {
      uVar3 = 0x3e99999a;
      uVar1 = 0x3dcccccd;
    }
    else {
      uVar3 = 0x3fcccccd;
      uVar1 = 0x3f4ccccd;
    }
    fVar2 = (float10)FUN_00dde300(uVar1,uVar3);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(float *)(param_1 + 0x924) = (float)fVar2;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  *(float *)(param_1 + 0x15a4) = *(float *)(param_1 + 0x15a4) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) =
       *(float *)(param_1 + 0x910) * 0.016666668 + *(float *)(param_1 + 0x920);
  return;
}

// 00B055C0  FUN_00b055c0  size=267  [between]
void __fastcall FUN_00b055c0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a81330();
  iVar2 = 0;
  if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) && (-1 < param_1[0x3fe])) {
    iVar2 = FUN_00a12210(param_1[0x3ff]);
  }
  if (param_1[0x187] == 0) {
    uVar3 = 10;
    iVar1 = FUN_00b033c0(iVar2 + 0x40);
    if (iVar1 != 8) {
      if (iVar1 == 9) {
        uVar3 = 9;
      }
      else if (iVar1 == 0xc) {
        uVar3 = 0xd;
      }
    }
    FUN_00aa4080(uVar3,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_00b02610(iVar2 + 0x40,0x3e4ccccd,0x3c8efa35);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b056c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B056F0  FUN_00b056f0  size=89  [between]
void __fastcall FUN_00b056f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00c19c90(DAT_01d5bad4,(int)*(short *)(param_1 + 0xab2),0x20060);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a7c8a0();
    uVar2 = FUN_009f8b40();
    FUN_008e26e0(uVar2);
  }
  return;
}

// 00B05750  FUN_00b05750  size=43  [between]
void __fastcall FUN_00b05750(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B05780  FUN_00b05780  size=43  [between]
void __fastcall FUN_00b05780(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B057F0  FUN_00b057f0  size=42  [between]
uint FUN_00b057f0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9d00;
  (**(code **)(*param_1 + 4))(&DAT_01be9d00);
  iVar1 = FUN_00dd6d70(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00B05850  FUN_00b05850  size=42  [between]
uint FUN_00b05850(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34b40;
  (**(code **)(*param_1 + 4))(&DAT_01b34b40);
  iVar1 = FUN_00dd6d70(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00B05B20  FUN_00b05b20  size=33  [between]
void __thiscall FUN_00b05b20(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x80;
    return;
  }
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffff7f;
  return;
}

// 00B05EE0  Em0040::vf118  size=68  [class]
void __thiscall Em0040::vf118(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Bh0064::vf118(param_2);
  if (iVar1 == 0) {
    return;
  }
  if (((*(int *)(param_1 + 0x4a0) == 6) || (*(int *)(param_1 + 0x4a0) == 7)) &&
     (iVar1 = *(int *)(param_1 + 0x588), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0xa8) = 1;
    *(undefined4 *)(iVar1 + 0xac) = 1;
  }
  return;
}

// 00B05F30  Em0040::vf34  size=5  [class]
void __fastcall Em0040::vf34(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
  }
  return;
}

// 00B05F40  Em0040::vf110  size=126  [class]
void __thiscall Em0040::vf110(int param_1,int param_2)

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
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x10000000;
    return;
  }
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xefffffff;
  return;
}

// 00B05FC0  Em0040::vf1D0  size=56  [class]
void __thiscall Em0040::vf1D0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4a0);
  if (((iVar1 == 6) || (iVar1 == 7)) || (iVar1 == 10)) {
    if (*(int *)(param_1 + 0xe30) != 0) {
      *(undefined4 *)(param_1 + 0xe34) = 1;
    }
    FUN_00a8e5d0(param_1,param_2,0);
  }
  return;
}

// 00B06020  FUN_00b06020  size=225  [between]
void __fastcall FUN_00b06020(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 0:
    uVar3 = 0x30020;
    pcVar2 = "Em0040_Smg";
    break;
  case 1:
    uVar3 = 0x30010;
    pcVar2 = "Em0040_HandGun";
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x1138) = 1;
    return;
  case 3:
  case 5:
  case 0x10:
  case 0x11:
  case 0x12:
    *(undefined4 *)(param_1 + 0x1138) = 2;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x1138) = 3;
    FUN_00b056f0();
    return;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    goto switchD_00b0603a_default;
  default:
    return;
  }
  iVar1 = FUN_00a82090(pcVar2,uVar3,0);
  *(undefined4 *)(param_1 + 0x1138) = 0;
  FUN_00aa4080(0x35,1,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
  if (iVar1 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x701,0xffffffff,1);
  }
switchD_00b0603a_default:
  return;
}

// 00B06130  FUN_00b06130  size=563  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00b06130(int *param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar7;
  float fVar8;
  float fStack_34;
  float local_30 [11];
  
  local_30[0] = 0.0;
  local_30[1] = 1.0;
  piVar1 = param_1 + 0x2c;
  local_30[2] = 0.0;
  pfVar2 = (float *)(param_1 + 0x4bc);
  D3DXVec3TransformNormal(pfVar2,local_30,piVar1);
  *pfVar2 = *pfVar2 + (float)param_1[0x38];
  param_1[0x4bd] = (int)((float)param_1[0x39] + (float)param_1[0x4bd]);
  param_1[0x4be] = (int)((float)param_1[0x3a] + (float)param_1[0x4be]);
  fVar7 = (float10)fcos((float10)0.7853981852531433);
  if (fVar7 < (float10)(float)param_1[0x4bd] * (float10)unaff_EBX +
              (float10)*pfVar2 * (float10)unaff_ESI +
              (float10)(float)param_1[0x4be] * (float10)fStack_34) {
    *pfVar2 = unaff_ESI;
    param_1[0x4bd] = (int)unaff_EBX;
    param_1[0x4be] = (int)fStack_34;
    param_1[0x4bf] = (int)local_30[0];
    param_1[0x3a] = 0;
    param_1[0x39] = 0;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x3b] = 0x3f800000;
    param_1[0x36] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    *piVar1 = 0x3f800000;
    D3DXMatrixInverse(param_1 + 0x3c,0,piVar1);
  }
  local_30[0] = local_30[0] - (float)param_1[0x4bf];
  if (0.001 < SQRT((unaff_EBX - (float)param_1[0x4bd]) * (unaff_EBX - (float)param_1[0x4bd]) +
                   (unaff_ESI - *pfVar2) * (unaff_ESI - *pfVar2) +
                   (fStack_34 - (float)param_1[0x4be]) * (fStack_34 - (float)param_1[0x4be]))) {
    param_1[0x449] = param_1[0x449] | 1;
    param_1[0x4b8] = 0x3f800000;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar3 = param_1[0x1d9];
      if (*(int *)(iVar3 + 0x104) != 1) {
        *(undefined4 *)(iVar3 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
      }
      local_30[1] = 0.0;
      local_30[2] = 0.0;
      local_30[3] = 0.0;
      FUN_008e0c00(local_30 + 1);
    }
    fVar4 = -1.0;
    fVar8 = 1.0;
    if (0.0 < (float)param_1[0x4be] * 0.0 + (float)param_1[0x4bd] * 0.0 + *pfVar2) {
      fVar8 = -1.0;
      fVar4 = 1.0;
    }
    fVar5 = *pfVar2 * fVar4;
    fVar6 = (float)param_1[0x4bd] * fVar4;
    fVar4 = (float)param_1[0x4be] * fVar4;
    fVar7 = (float10)FUN_00ddbb50(((fVar6 + fVar5) * 0.0 + fVar4) /
                                  (SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) * 1.0));
    if (fVar8 < 0.0) {
      fVar7 = fVar7 - (float10)3.1415927;
    }
    param_1[0x4b6] = (int)(float)fVar7;
    param_1[0x25] = (int)(float)fVar7;
  }
  return;
}

// 00B06370  FUN_00b06370  size=187  [between]
void __fastcall FUN_00b06370(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x754) != 0) {
    uVar1 = FUN_00b02430(0x13);
    *(undefined4 *)(param_1 + 0x15a8) = uVar1;
    uVar1 = FUN_00b02430(0x14);
    *(undefined4 *)(param_1 + 0x15ac) = uVar1;
    fVar2 = (float10)FUN_00b023c0(0x12);
    *(float *)(param_1 + 0x15b0) = (float)fVar2;
    fVar2 = (float10)FUN_00b023c0(0x10);
    *(float *)(param_1 + 0x15b4) = (float)fVar2;
    fVar2 = (float10)FUN_00b023c0(0x11);
    *(float *)(param_1 + 0x15b8) = (float)fVar2;
    fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x16);
    *(float *)(param_1 + 0x15c4) = (float)fVar2;
    fVar2 = (float10)FUN_00b023c0(0x17);
    *(float *)(param_1 + 0x12c0) = (float)fVar2;
    fVar2 = (float10)FUN_00b023c0(0x18);
    *(float *)(param_1 + 0x12c4) = (float)fVar2;
    fVar2 = (float10)FUN_00b023c0(0x19);
    *(float *)(param_1 + 0x15c8) = (float)fVar2;
    fVar2 = (float10)FUN_00b023c0(0x1a);
    *(float *)(param_1 + 0x1560) = (float)fVar2;
    fVar2 = (float10)FUN_00b023c0(0x1b);
    *(float *)(param_1 + 0x12d4) = (float)fVar2;
  }
  return;
}

// 00B06430  Em0040::vf1A0  size=267  [class]
undefined4 __thiscall Em0040::vf1A0(int *param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)FUN_00a7c8a0();
  if (*param_2 != 0xda) {
    return 0;
  }
  fVar1 = (float)param_1[0x5a9];
  if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar3 = FUN_00a8cab0();
    if (((iVar3 != 0x24) && (iVar3 = FUN_00a8cab0(), iVar3 != 0x29)) &&
       (iVar3 = FUN_00a8cab0(), iVar3 != 0x2a)) {
      return 0;
    }
    iVar3 = FUN_00c41520(0x2a,param_1[0x13c],1);
    param_1[0x456] = iVar3;
    if (iVar3 != -1) {
      iVar3 = FUN_00c15910(iVar3);
      param_1[0x442] = iVar3;
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      (**(code **)(*piVar2 + 0x150))(0x2a,param_1[0x13c]);
      FUN_00c27d60(0x2a,param_1[0x13c]);
      if (param_1[0x42d] == -1) {
        param_1[0x42d] = 0x26;
      }
      param_1[0x449] = param_1[0x449] | 0x800;
      (**(code **)(*param_1 + 0x220))(0x40a00000);
    }
  }
  return 1;
}

// 00B06540  Em0040::getAttackInfo  size=622  [class]
undefined4 __thiscall Em0040::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 != 0) && (iVar2 = CollisionAttackData::CollisionAttackData(), iVar2 != 0)) {
    puVar1 = *(uint **)(iVar2 + 8);
    puVar1[5] = *(uint *)(param_1 + 0x4f0);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    uVar4 = FUN_00ac8520(*param_2);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
    puVar1[2] = uVar5;
    puVar1[1] = uVar4;
    puVar1[3] = unaff_ESI;
    *(undefined1 *)(puVar1 + 4) = uStack_8;
    *puVar1 = (uint)*param_2;
    switch(*param_2) {
    case 4:
      *puVar1 = 0xd7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x1800;
      *(undefined1 *)((int)puVar1 + 0x11) = 5;
      return unaff_EBX;
    case 6:
      *puVar1 = 0xd8;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      puVar1[0x23] = puVar1[0x23] | 0x40000;
      *(undefined2 *)(puVar1 + 0x21) = 0xffff;
      *(undefined1 *)((int)puVar1 + 0x11) = 10;
      return unaff_EBX;
    case 8:
      *puVar1 = 0xda;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x1800;
      *(undefined1 *)((int)puVar1 + 0x11) = 5;
      return unaff_EBX;
    case 0xc:
      *puVar1 = 0xde;
      *(undefined1 *)((int)puVar1 + 0x11) = 0;
      *(undefined2 *)(puVar1 + 0x21) = 0xffff;
      return unaff_EBX;
    case 0xe:
      *(undefined2 *)(puVar1 + 0x21) = 0xffff;
      *puVar1 = 0xdf;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      return unaff_EBX;
    case 0x10:
      *puVar1 = 0xe0;
      puVar1[0x23] = puVar1[0x23] | 0x40000;
      return unaff_EBX;
    case 0x12:
      *puVar1 = 0xdb;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x1801;
      *(undefined1 *)((int)puVar1 + 0x11) = 5;
      return unaff_EBX;
    case 0x14:
      *puVar1 = 0xdc;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x1801;
      *(undefined1 *)((int)puVar1 + 0x11) = 5;
      return unaff_EBX;
    case 0x16:
      *puVar1 = 0xdd;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x1801;
      *(undefined1 *)((int)puVar1 + 0x11) = 5;
    }
    return unaff_EBX;
  }
  FUN_00dd5650(&DAT_016a0b90);
  return 0;
}

// 00B067F0  FUN_00b067f0  size=77  [between]
undefined4 __fastcall FUN_00b067f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d70(puVar3);
    if (iVar2 != 0) {
      iVar2 = FUN_00a8cab0();
      if ((iVar2 != 0x10c) && (iVar2 = (**(code **)(*piVar1 + 0x354))(), iVar2 == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

// 00B06840  FUN_00b06840  size=395  [between]
void __thiscall FUN_00b06840(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 uStack_24;
  
  iVar2 = FUN_00a979d0();
  if ((iVar2 != 0) &&
     ((((param_1[0x449] & 1U) == 0 || ((param_1[0x449] & 2U) == 0)) ||
      (fVar1 = *(float *)(*(int *)(param_1[0x1f6] + 0x814) + 4) - (float)param_1[0x11],
      fVar1 < 0.0 == (fVar1 == 0.0))))) {
    FUN_00a979f0(&local_3c);
    local_30 = local_3c - (float)param_1[0x10];
    local_2c = local_38 - (float)param_1[0x11];
    local_28 = local_34 - (float)param_1[0x12];
    fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
    }
    pfVar4 = &local_30;
    pfVar5 = pfVar4;
    D3DXVec3TransformNormal(pfVar4,pfVar4,param_1 + 0x3c);
    fVar6 = (float)param_1[0x48] + local_3c;
    local_38 = (float)param_1[0x49] + local_38;
    fVar7 = (float)param_1[0x4a] + local_34;
    local_3c = fVar6;
    local_34 = fVar7;
    iVar2 = (**(code **)(*param_1 + 0x84))(pfVar4,pfVar5,fVar6,fVar7);
    fVar1 = *(float *)(iVar2 + 4);
    fVar3 = (float10)fpatan((float10)fVar6,(float10)fVar7);
    fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)fVar1));
    fVar3 = (float10)FUN_00ddba30((float)(fVar3 * (float10)param_2 + (float10)fVar1));
    local_2c = 0.0;
    uStack_24 = 0;
    local_28 = (float)fVar3;
    (**(code **)(*param_1 + 0x88))(&local_2c);
  }
  return;
}

// 00B069D0  FUN_00b069d0  size=330  [between]
void __thiscall FUN_00b069d0(int *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float fStack_3c;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  local_30 = *param_2 - (float)param_1[0x10];
  local_2c = param_2[1] - (float)param_1[0x11];
  local_28 = param_2[2] - (float)param_1[0x12];
  local_24 = param_2[3] - (float)param_1[0x13];
  fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
  }
  D3DXVec3TransformNormal(&local_30,&local_30,param_1 + 0x3c);
  fVar1 = (float)param_1[0x48];
  fVar2 = (float)param_1[0x4a];
  iVar4 = (**(code **)(*param_1 + 0x84))();
  fVar3 = *(float *)(iVar4 + 4);
  fVar5 = (float10)fpatan((float10)(fStack_3c + fVar1),(float10)(fVar2 + fStack_34));
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 - (float10)fVar3));
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 * (float10)param_3 + (float10)fVar3));
  local_2c = 0.0;
  local_24 = 0.0;
  local_28 = (float)fVar5;
  (**(code **)(*param_1 + 0x88))(&local_2c);
  return;
}

// 00B06B20  FUN_00b06b20  size=242  [between]
void __fastcall FUN_00b06b20(int *param_1)

{
  float fVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4120(10,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f800000;
  }
  else if (param_1[0x187] == 1) {
    if (param_1[0x2a1] != 0) {
      iVar2 = FUN_00a8c760(0);
      if ((iVar2 != 0) &&
         (fVar1 = (float)param_1[0x435], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = param_1[0x438];
        local_1c = param_1[0x439];
        local_18 = param_1[0x43a];
        local_14 = param_1[0x43b];
        FUN_00b069d0(&local_20,0x3da3d70a);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B06C20  FUN_00b06c20  size=242  [between]
void __fastcall FUN_00b06c20(int *param_1)

{
  float fVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4120(9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f800000;
  }
  else if (param_1[0x187] == 1) {
    if (param_1[0x2a1] != 0) {
      iVar2 = FUN_00a8c760(0);
      if ((iVar2 != 0) &&
         (fVar1 = (float)param_1[0x435], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = param_1[0x438];
        local_1c = param_1[0x439];
        local_18 = param_1[0x43a];
        local_14 = param_1[0x43b];
        FUN_00b069d0(&local_20,0x3da3d70a);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B06D20  FUN_00b06d20  size=195  [between]
void __fastcall FUN_00b06d20(int *param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4120(9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] == 1) {
    local_20 = param_1[0x438];
    local_1c = param_1[0x439];
    local_18 = param_1[0x43a];
    local_14 = param_1[0x43b];
    FUN_00b069d0(&local_20,0x3dcccccd);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B06DF0  FUN_00b06df0  size=195  [between]
void __fastcall FUN_00b06df0(int *param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4120(9,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] == 1) {
    local_20 = param_1[0x438];
    local_1c = param_1[0x439];
    local_18 = param_1[0x43a];
    local_14 = param_1[0x43b];
    FUN_00b069d0(&local_20,0x3dcccccd);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B06EC0  FUN_00b06ec0  size=234  [between]
void __fastcall FUN_00b06ec0(int *param_1)

{
  float fVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4120(0xd,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] == 1) {
    if (param_1[0x2a1] != 0) {
      iVar2 = FUN_00a8c760(0);
      if ((iVar2 != 0) &&
         (fVar1 = (float)param_1[0x435], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = param_1[0x438];
        local_1c = param_1[0x439];
        local_18 = param_1[0x43a];
        local_14 = param_1[0x43b];
        FUN_00b069d0(&local_20,0x3da3d70a);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B06FB0  FUN_00b06fb0  size=419  [between]
void __fastcall FUN_00b06fb0(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar2 = FUN_00c19c90(DAT_01d5bad4,(int)*(short *)(param_1 + 0xab2),
                         *(undefined4 *)(param_1 + 0x4b0));
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      iVar2 = FUN_00a7c8a0();
      local_20 = *(float *)(iVar2 + 0x40) - *(float *)(param_1 + 0x10e0);
      local_1c = *(float *)(iVar2 + 0x44) - *(float *)(param_1 + 0x10e4);
      local_18 = *(float *)(iVar2 + 0x48) - *(float *)(param_1 + 0x10e8);
      local_14 = *(float *)(iVar2 + 0x4c) - *(float *)(param_1 + 0x10ec);
      fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
        fVar3 = (float10)fpatan((float10)local_20,(float10)local_18);
        *(float *)(param_1 + 0x920) = (float)fVar3;
        return;
      }
      FUN_00dd5650(&DAT_0163d0ac);
      fVar3 = (float10)fpatan((float10)0,(float10)0);
      *(float *)(param_1 + 0x920) = (float)fVar3;
    }
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    fVar1 = *(float *)(param_1 + 0x94);
    fVar3 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x920) - fVar1);
    fVar3 = (float10)FUN_00ddba30((float)(fVar3 * (float10)0.1 + (float10)fVar1));
    *(float *)(param_1 + 0x94) = (float)fVar3;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00B07160  FUN_00b07160  size=205  [between]
void __fastcall FUN_00b07160(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(0x14,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      iVar2 = FUN_00a8c760(0);
      if ((iVar2 != 0) &&
         (fVar1 = *(float *)(param_1 + 0x10d4), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = *(undefined4 *)(param_1 + 0x10e0);
        local_1c = *(undefined4 *)(param_1 + 0x10e4);
        local_18 = *(undefined4 *)(param_1 + 0x10e8);
        local_14 = *(undefined4 *)(param_1 + 0x10ec);
        FUN_00b069d0(&local_20,0x3d75c28f);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00B07230  FUN_00b07230  size=205  [between]
void __fastcall FUN_00b07230(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(0x15,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      iVar2 = FUN_00a8c760(0);
      if ((iVar2 != 0) &&
         (fVar1 = *(float *)(param_1 + 0x10d4), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = *(undefined4 *)(param_1 + 0x10e0);
        local_1c = *(undefined4 *)(param_1 + 0x10e4);
        local_18 = *(undefined4 *)(param_1 + 0x10e8);
        local_14 = *(undefined4 *)(param_1 + 0x10ec);
        FUN_00b069d0(&local_20,0x3d75c28f);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00B07300  FUN_00b07300  size=205  [between]
void __fastcall FUN_00b07300(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(0x16,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      iVar2 = FUN_00a8c760(0);
      if ((iVar2 != 0) &&
         (fVar1 = *(float *)(param_1 + 0x10d4), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = *(undefined4 *)(param_1 + 0x10e0);
        local_1c = *(undefined4 *)(param_1 + 0x10e4);
        local_18 = *(undefined4 *)(param_1 + 0x10e8);
        local_14 = *(undefined4 *)(param_1 + 0x10ec);
        FUN_00b069d0(&local_20,0x3d75c28f);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00B073D0  FUN_00b073d0  size=911  [between]
void __fastcall FUN_00b073d0(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  int local_c;
  int local_8;
  int local_4;
  
  switch(param_1[0x187]) {
  case 0:
    iVar1 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b07417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00a5dcc0(iVar1);
    FUN_00aa4080(0x1a,0,0x3ecccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_00b03020(0);
    FUN_008e3c10();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(0x1b,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_00a581b0(&local_c,0,param_1[0x249]);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.027777778 + (float)param_1[0x249]);
    param_1[0x14] = local_c;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    FUN_00a581b0(&local_c,0,param_1[0x249]);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.027777778 + (float)param_1[0x249]);
    param_1[0x14] = local_c;
    param_1[0x15] = local_8;
    param_1[0x16] = local_4;
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(0x1d,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar1 = FUN_00a54a60(param_1[0x249]);
    if (iVar1 == 0) {
      return;
    }
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_008e6d00();
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 == 0) {
      param_1[0x225] = unaff_ESI;
      FUN_00aa4080(0x1d,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 == 0) {
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b0775d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_00b073eb_default;
  }
  FUN_00aa4080(0x1c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = 4;
switchD_00b073eb_default:
  return;
}

// 00B07780  FUN_00b07780  size=411  [between]
void __fastcall FUN_00b07780(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  if ((param_1[0x4b3] == 0) || (iVar3 = FUN_00a81330(), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    if (iVar3 != 0) {
      FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      iVar4 = FUN_00c19c30(param_1[0x2e7],(int)*(short *)((int)param_1 + 0xab2));
      if ((((iVar4 == 0) || (iVar5 = FUN_00a7c8a0(), iVar5 == 0)) || (iVar4 == param_1[0x13c])) ||
         (iVar4 = FUN_00a7c8a0(),
         0.0 < ((float)param_1[0x12] - (float)param_1[0x43a]) *
               (*(float *)(iVar4 + 0x40) - *(float *)(iVar3 + 0x40)) -
               ((float)param_1[0x10] - (float)param_1[0x438]) *
               (*(float *)(iVar4 + 0x48) - *(float *)(iVar3 + 0x48)))) {
        iVar3 = 0x3f860a92;
      }
      else {
        iVar3 = -0x4079f56e;
      }
      param_1[0x248] = iVar3;
      param_1[0x249] = 0;
      param_1[0x24a] = param_1[0x435];
      param_1[0x24b] = 0x41200000;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00b07844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if (param_1[0x187] != 1) {
    return;
  }
  if (iVar3 != 0) {
    FUN_00a8e880(iVar3 + 0x40);
    iVar3 = FUN_00a8e9b0();
    fVar2 = *(float *)(iVar3 + 4) + (float)param_1[0x248];
    param_1[0x24b] = (int)fVar2;
    fVar1 = (float)param_1[0x25];
    fVar6 = (float10)FUN_00ddba30(fVar2 - fVar1);
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.1 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar6;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b077cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B07920  FUN_00b07920  size=338  [between]
void __fastcall FUN_00b07920(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *local_8 [2];
  
  if ((param_1[0x4b3] == 0) || (iVar1 = FUN_00a81330(), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    uVar2 = (int)(short)param_1[0x2ad] & 1;
    local_8[0] = &DAT_01645724;
    local_8[1] = &DAT_01645740;
    if (param_1[0x44e] == 0) {
      uVar2 = 0;
    }
    FUN_00a9e290(local_8[uVar2],0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x250] = 0;
    FUN_00e5e0c0("em0040_vo_matador",param_1,0xffffffff,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if (iVar1 == 0) {
    param_1[0x250] = param_1[0x250] + 1;
  }
  if (((*(byte *)(param_1 + 0x2ad) & 1) != 0) && (iVar1 = FUN_00a12210(0), iVar1 != 0)) {
    param_1[0x5a4] = *(int *)(iVar1 + 0x50);
    param_1[0x5a5] = *(int *)(iVar1 + 0x54);
    param_1[0x5a6] = *(int *)(iVar1 + 0x58);
    param_1[0x5a7] = *(int *)(iVar1 + 0x5c);
    param_1[0x5a5] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e0d30(param_1 + 0x5a4);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x250] != 0) && (iVar1 = FUN_00a94ce0(0), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b07a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B07A80  FUN_00b07a80  size=514  [between]
undefined4 __thiscall FUN_00b07a80(int *param_1,int *param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  bVar2 = false;
  switch(*param_2) {
  case 0:
    FUN_00b03020(0);
    FUN_00aa4120(0x1a,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *param_2 = *param_2 + 1;
    param_1[0x451] = param_3;
    param_1[0x450] = 0;
    param_1[0x452] = param_4;
    return 0;
  case 1:
    iVar3 = FUN_00a94db0(0x1a);
    if (iVar3 == 0) goto LAB_00b07b42;
    uVar5 = 0x8000000;
    uVar4 = 0x1b;
    break;
  case 2:
    iVar3 = FUN_00a94db0(0x1b);
    if (iVar3 == 0) goto LAB_00b07b42;
    uVar5 = 0;
    uVar4 = 0x1d;
    break;
  case 3:
    pcVar1 = *(code **)(*param_1 + 800);
    param_1[0x225] = param_1[0x451];
    iVar3 = (*pcVar1)(0x3d888889);
    if (iVar3 == 0) {
      bVar2 = true;
    }
    else {
      FUN_00aa4120(0x1c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if ((*(byte *)(param_1 + 0x449) & 1) == 0) {
        FUN_00b03020(1);
      }
      if (param_1[0x1d9] != 0) {
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        FUN_008e0c00(&uStack_24);
      }
      *param_2 = *param_2 + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (!bVar2) {
      return 0;
    }
    FUN_00b02df0();
    return 0;
  case 4:
    iVar3 = FUN_00a94db0(0x1c);
    if (iVar3 != 0) {
      return 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return 0;
  default:
    return 0;
  }
  FUN_00aa4120(uVar4,0,0,0x3f800000,uVar5,0xbf800000,0x3f800000);
  *param_2 = *param_2 + 1;
LAB_00b07b42:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00b02df0();
  return 0;
}

// 00B07CA0  FUN_00b07ca0  size=474  [between]
int __thiscall FUN_00b07ca0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float *pfVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (((((*(uint *)(param_1 + 0x1124) & 0x200) == 0) && (*(float *)(param_1 + 0x10d4) <= 12.25)) &&
      (iVar2 = *(int *)(param_1 + 0xa84), iVar2 != 0)) && (*(int *)(iVar2 + 0xb78) != 0)) {
    uVar9 = 0;
    FUN_00a92f90(0);
    fVar8 = (float10)FUN_00407b40(uVar9);
    if (fVar8 <= (float10)0.4) {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x200;
      fVar8 = (float10)fcos((float10)1.3089969158172607);
      local_30 = *(float *)(param_1 + 0x40) - *(float *)(iVar2 + 0x40);
      local_2c = *(float *)(param_1 + 0x44) - *(float *)(iVar2 + 0x44);
      local_28 = *(float *)(param_1 + 0x48) - *(float *)(iVar2 + 0x48);
      pfVar6 = (float *)FUN_00a925a0(&local_20);
      if ((float)fVar8 <= pfVar6[2] * local_28 + *pfVar6 * local_30 + pfVar6[1] * local_2c) {
        pfVar6 = (float *)FUN_00a925a0(&local_20);
        fVar3 = pfVar6[2] * local_30;
        fVar4 = *pfVar6 * local_28;
        if ((param_2 == 0) && (uVar7 = FUN_00dde2a0(0,100), (uVar7 & 3) != 0)) {
          return -1;
        }
        local_20 = local_30 * -1.0;
        local_1c = local_2c * -1.0;
        local_18 = local_28 * -1.0;
        pfVar6 = (float *)FUN_00a925a0(&local_30);
        if ((float)fVar8 < pfVar6[2] * local_18 + *pfVar6 * local_20 + pfVar6[1] * local_1c) {
          fVar1 = *(float *)(param_1 + 0x10d4);
          if (!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) {
            return 0x12;
          }
          if (fVar3 - fVar4 <= 0.0) {
            uVar7 = FUN_00dde2a0(0,100);
            return (uint)((uVar7 & 3) == 0) * 2 + 0x10;
          }
          bVar5 = FUN_00dde2a0(0,100);
          return 0x12 - (uint)((bVar5 & 3) != 0);
        }
      }
    }
  }
  return -1;
}

// 00B07ED0  FUN_00b07ed0  size=35  [between]
void __thiscall FUN_00b07ed0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1318) = *(undefined4 *)(param_1 + 0x1314);
  *(undefined4 *)(param_1 + 0x1314) = param_2;
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
  return;
}

// 00B07F00  FUN_00b07f00  size=44  [between]
undefined4 __fastcall FUN_00b07f00(int param_1)

{
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x1124))) &&
      (*(int *)(param_1 + 0x1680) == 0)) && ((*(uint *)(param_1 + 0x1124) & 0x20000000) == 0)) {
    return 1;
  }
  return 0;
}

// 00B07F30  FUN_00b07f30  size=190  [between]
void __fastcall FUN_00b07f30(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_00a8c760(0xc);
  if (iVar1 == 0) {
    if ((param_1[0x221] != 0) && (param_1[0x1d9] != 0)) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
  }
  else if ((param_1[0x221] == 0) && (param_1[0x1d9] != 0)) {
    (**(code **)(*param_1 + 0x318))();
    iVar1 = param_1[0x1d9];
    if (*(int *)(iVar1 + 0x104) != 1) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_008e0c00(&uStack_20);
    return;
  }
  return;
}

// 00B07FF0  FUN_00b07ff0  size=125  [between]
void __fastcall FUN_00b07ff0(int param_1)

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
  
  local_48 = *(undefined4 *)(param_1 + 0xb9c);
  local_10 = 0;
  local_3c = 0;
  local_c = 0;
  local_2c = 0;
  local_8 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0xffffffff;
  local_44 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_4 = 0xffffffff;
  local_34 = 0x1010001;
  local_38 = 0x20040;
  local_30 = 2;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 00B080C0  FUN_00b080c0  size=328  [between]
float10 __thiscall FUN_00b080c0(int param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*(byte *)(param_1 + 0x1124) & 1) == 0) {
    return (float10)0;
  }
  fVar2 = (float10)0;
  fVar3 = (float10)*(float *)(param_1 + 0x12f4) * fVar2;
  fVar1 = fVar3 - (float10)*(float *)(param_1 + 0x12f8);
  local_20 = (float)fVar1;
  fVar4 = (float10)*(float *)(param_1 + 0x12f8) * fVar2 -
          (float10)*(float *)(param_1 + 0x12f0) * fVar2;
  local_1c = (float)fVar4;
  fVar3 = (float10)*(float *)(param_1 + 0x12f0) - fVar3;
  local_18 = (float)fVar3;
  if (((fVar2 == fVar1) && (fVar2 == fVar4)) && (fVar2 == fVar3)) {
    return fVar2;
  }
  fVar1 = fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4;
  if (fVar1 < fVar2 == (fVar1 == fVar2)) {
    FUN_00ddf460(&local_20,&local_20);
    fVar2 = (float10)local_1c;
    fVar1 = (float10)local_20;
    fVar3 = (float10)local_18;
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fVar1 = (float10)0;
    fVar2 = (float10)1;
    fVar3 = fVar1;
  }
  return ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x44)) * fVar2 +
         ((float10)*param_2 - (float10)*(float *)(param_1 + 0x40)) * fVar1 +
         ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x48)) * fVar3;
}

// 00B08210  FUN_00b08210  size=47  [between]
void __fastcall FUN_00b08210(int param_1)

{
  if ((*(byte *)(param_1 + 0x1127) & 1) != 0) {
    FUN_00a8c9b0(0,0x37,0x3f800000,0);
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xfeffffff;
  }
  return;
}

// 00B08240  FUN_00b08240  size=84  [between]
void __fastcall FUN_00b08240(int param_1)

{
  if ((*(uint *)(param_1 + 0x1124) & 0x4000000) != 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    if ((*(byte *)(param_1 + 0xb00) & 8) != 0) {
      FUN_00a8c9b0(0,0x12,0x3f800000,0);
    }
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xfbffffff;
  }
  return;
}

// 00B082A0  FUN_00b082a0  size=1077  [between]
void __fastcall FUN_00b082a0(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_14c;
  float local_148;
  float local_144;
  int local_140 [4];
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  char *local_fc;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  uVar4 = 0;
  switch(*(undefined4 *)(param_1 + 0xff0)) {
  case 0:
    pfVar2 = (float *)FUN_00a8bac0(local_30,0x3f800000);
    local_170 = *pfVar2 + *(float *)(param_1 + 0x40);
    puVar5 = local_20;
    local_16c = *(float *)(param_1 + 0x44) + pfVar2[1];
    local_168 = *(float *)(param_1 + 0x48) + pfVar2[2];
    local_164 = *(float *)(param_1 + 0x4c) + pfVar2[3];
    uVar6 = 0x3f800000;
    break;
  case 1:
    pfVar2 = (float *)FUN_00a925a0(local_d0);
    fVar1 = *pfVar2 + *(float *)(param_1 + 0x40);
    local_16c = *(float *)(param_1 + 0x44) + pfVar2[1];
    local_168 = *(float *)(param_1 + 0x48) + pfVar2[2];
    local_164 = *(float *)(param_1 + 0x4c) + pfVar2[3];
    if ((*(byte *)(param_1 + 0x1124) & 1) == 0) {
      uVar6 = 0x40200000;
    }
    else {
      uVar6 = 0x3e4ccccd;
    }
    pfVar2 = (float *)FUN_00a8bac0(local_70,uVar6);
    local_160 = fVar1 - *pfVar2;
    local_15c = local_16c - pfVar2[1];
    local_158 = local_168 - pfVar2[2];
    local_154 = local_164 - pfVar2[3];
    pfVar2 = (float *)FUN_00a8bac0(local_b0,0x3dcccccd);
    local_170 = fVar1 + *pfVar2;
    goto LAB_00b083db;
  case 2:
    pfVar2 = (float *)FUN_00a8bac0(local_f0,0x3e800000);
    fVar1 = *(float *)(param_1 + 0x40) - *pfVar2;
    local_16c = *(float *)(param_1 + 0x44) - pfVar2[1];
    local_168 = *(float *)(param_1 + 0x48) - pfVar2[2];
    local_164 = *(float *)(param_1 + 0x4c) - pfVar2[3];
    pfVar2 = (float *)FUN_00a8b8a0(local_90,0x3e800000);
    local_160 = *pfVar2 + fVar1;
    local_15c = pfVar2[1] + local_16c;
    local_158 = pfVar2[2] + local_168;
    local_154 = pfVar2[3] + local_164;
    pfVar2 = (float *)FUN_00a8b8a0(local_50,0x3fb9999a);
    local_170 = *pfVar2 + fVar1;
LAB_00b083db:
    local_16c = pfVar2[1] + local_16c;
    local_168 = pfVar2[2] + local_168;
    local_164 = pfVar2[3] + local_164;
    local_160 = local_160 - local_170;
    local_15c = local_15c - local_16c;
    local_158 = local_158 - local_168;
    local_154 = local_154 - local_164;
    goto switchD_00b082c1_default;
  case 3:
    pfVar2 = (float *)FUN_00a8bac0(local_e0,0x3f0f5c29);
    local_170 = *pfVar2 + *(float *)(param_1 + 0x40);
    local_16c = *(float *)(param_1 + 0x44) + pfVar2[1];
    local_168 = *(float *)(param_1 + 0x48) + pfVar2[2];
    local_164 = *(float *)(param_1 + 0x4c) + pfVar2[3];
    puVar5 = local_c0;
    uVar6 = 0x3f0f5c29;
    break;
  case 4:
    pfVar2 = (float *)FUN_00a8bac0(local_a0,0x40200000);
    local_170 = *(float *)(param_1 + 0x40) + *pfVar2;
    puVar5 = local_80;
    local_16c = *(float *)(param_1 + 0x44) + pfVar2[1];
    local_168 = *(float *)(param_1 + 0x48) + pfVar2[2];
    local_164 = *(float *)(param_1 + 0x4c) + pfVar2[3];
    uVar6 = 0x40000000;
    break;
  case 5:
    local_170 = *(float *)(param_1 + 0x40);
    local_16c = *(float *)(param_1 + 0x44);
    local_168 = *(float *)(param_1 + 0x48);
    local_164 = *(float *)(param_1 + 0x4c);
    pfVar2 = (float *)FUN_00a8bac0(local_60,0xbf800000);
    goto LAB_00b08317;
  case 6:
    pfVar2 = (float *)FUN_00a8bac0(local_40,0x3f800000);
    local_170 = *pfVar2 + *(float *)(param_1 + 0x40);
    local_16c = *(float *)(param_1 + 0x44) + pfVar2[1];
    local_168 = *(float *)(param_1 + 0x48) + pfVar2[2];
    local_164 = *(float *)(param_1 + 0x4c) + pfVar2[3];
    FUN_00a979f0(&local_14c);
    uVar4 = 0x10;
    local_160 = local_14c - local_170;
    local_15c = local_148 - local_16c;
    local_158 = local_144 - local_168;
    local_154 = 1.0 - local_164;
  default:
    goto switchD_00b082c1_default;
  }
  pfVar2 = (float *)FUN_00a8b8a0(puVar5,uVar6);
LAB_00b08317:
  local_160 = *pfVar2;
  local_15c = pfVar2[1];
  local_158 = pfVar2[2];
  local_154 = pfVar2[3];
switchD_00b082c1_default:
  iVar3 = FUN_009f8b40();
  local_130 = local_170;
  local_10c = iVar3 << 0x10 | 7;
  local_12c = local_16c;
  local_128 = local_168;
  local_140[0] = param_1 + 0xff4;
  local_124 = local_164;
  local_120 = local_160;
  local_140[1] = 0;
  local_108 = 0;
  local_11c = local_15c;
  local_100 = 0;
  local_118 = local_158;
  local_fc = "em0040_wall";
  local_114 = local_154;
  local_110 = 0x3d4ccccd;
  local_104 = uVar4;
  FUN_0090fb00(local_140);
  return;
}

// 00B08730  FUN_00b08730  size=283  [between]
void __fastcall FUN_00b08730(int param_1)

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
  int local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
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
  
  iVar9 = FUN_00a81330();
  if (iVar9 != 0) {
    fVar1 = *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x48);
    fVar3 = *(float *)(param_1 + 0x4c);
    fVar8 = *(float *)(param_1 + 0x44) + 0.5;
    iVar9 = FUN_00a7c8a0();
    fVar4 = *(float *)(iVar9 + 0x40);
    fVar5 = *(float *)(iVar9 + 0x44);
    fVar6 = *(float *)(iVar9 + 0x48);
    fVar7 = *(float *)(iVar9 + 0x4c);
    iVar9 = FUN_009f8b40();
    local_2c = iVar9 << 0x10 | 7;
    local_40 = fVar4 - fVar1;
    local_60[0] = param_1 + 0x1134;
    local_3c = (fVar5 + 0.25) - fVar8;
    local_38 = fVar6 - fVar2;
    local_60[1] = 0;
    local_28 = 0;
    local_24 = 0x10;
    local_34 = fVar7 - fVar3;
    local_20 = 0;
    local_1c = "em0040_mgzn";
    local_30 = 0x3e4ccccd;
    local_50 = fVar1;
    local_4c = fVar8;
    local_48 = fVar2;
    local_44 = fVar3;
    FUN_0090fb00(local_60);
  }
  return;
}

// 00B08850  FUN_00b08850  size=77  [between]
void __thiscall FUN_00b08850(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != -1) {
    FUN_00c49970(2,param_2);
    FUN_00e5e0c0("em0040_vo_separate",param_1,0xffffffff,0);
    FUN_00c81b30(0x4f);
    piVar1 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar1 + 0x44))(0xb,0);
  }
  return;
}

// 00B088A0  FUN_00b088a0  size=1026  [between]
void __thiscall FUN_00b088a0(int param_1,undefined4 *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  float local_50;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  fVar1 = param_3[1];
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(float *)(param_1 + 0x9c) = local_24;
  if (NAN(fVar1) || 0.999 < fVar1 == (fVar1 == 0.999)) {
    param_2[0xe] = 0;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[4] = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    param_2[0xf] = 0x3f800000;
    param_2[10] = 0x3f800000;
    param_2[5] = 0x3f800000;
    *param_2 = 0x3f800000;
    local_50 = 1.0;
    fVar1 = 1.0;
    if (param_3[2] * 0.0 + param_3[1] * 0.0 + *param_3 <= 0.0) {
      fVar1 = -1.0;
    }
    else {
      local_50 = -1.0;
    }
    fVar2 = *param_3 * fVar1;
    fVar3 = fVar1 * param_3[1];
    fVar1 = param_3[2] * fVar1;
    fVar5 = (float10)FUN_00ddbb50(((fVar3 + fVar2) * 0.0 + fVar1) /
                                  (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * 1.0));
    if (local_50 < 0.0) {
      fVar5 = fVar5 - (float10)3.1415927;
    }
    *(float *)(param_1 + 0x12d8) = (float)fVar5;
    *(float *)(param_1 + 0x94) = (float)fVar5;
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0.0;
    if (param_4 == 0) {
      pfVar4 = (float *)FUN_00a92640(local_20);
      local_40 = pfVar4[1] * param_3[2] - pfVar4[2] * param_3[1];
      local_3c = *param_3 * pfVar4[2] - *pfVar4 * param_3[2];
      local_38 = *pfVar4 * param_3[1] - pfVar4[1] * *param_3;
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
    }
    fVar5 = (float10)FUN_00ddbb50((local_38 * param_3[2] +
                                  local_3c * param_3[1] + *param_3 * local_40) /
                                  (SQRT(local_38 * local_38 +
                                        local_3c * local_3c + local_40 * local_40) *
                                  SQRT(param_3[1] * param_3[1] + *param_3 * *param_3 +
                                       param_3[2] * param_3[2])));
    local_30 = local_3c * param_3[2] - local_38 * param_3[1];
    local_2c = local_38 * *param_3 - local_40 * param_3[2];
    local_28 = local_40 * param_3[1] - local_3c * *param_3;
    if (((local_30 == 0.0) && (local_2c == 0.0)) && (local_28 == 0.0)) {
      pfVar4 = (float *)FUN_00a92640(local_20);
      local_30 = *pfVar4;
      local_2c = pfVar4[1];
      local_28 = pfVar4[2];
      local_24 = pfVar4[3];
    }
    else {
      fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_30,&local_30);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_30 = 0.0;
        local_2c = 1.0;
        local_28 = 0.0;
      }
    }
    D3DXMatrixRotationAxis(param_2,&local_30,(float)fVar5);
    return;
  }
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  param_2[0xf] = 0x3f800000;
  param_2[10] = 0x3f800000;
  param_2[5] = 0x3f800000;
  *param_2 = 0x3f800000;
  *(undefined4 *)(param_1 + 0x12d8) = 0;
  return;
}

// 00B08CB0  FUN_00b08cb0  size=73  [between]
void __fastcall FUN_00b08cb0(int *param_1)

{
  if ((*(byte *)(param_1 + 0x449) & 1) != 0) {
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x449] = param_1[0x449] & 0xfffffffe;
    param_1[0x4b8] = 0;
  }
  return;
}

// 00B08D00  FUN_00b08d00  size=469  [between]
void __fastcall FUN_00b08d00(int *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((*(byte *)(param_1 + 0x449) & 1) == 0) {
    param_1[0x3a] = 0;
    param_1[0x39] = 0;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x3b] = 0x3f800000;
    param_1[0x36] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    param_1[0x2c] = 0x3f800000;
    param_1[0x4b] = 0x3f800000;
    param_1[0x46] = 0x3f800000;
    param_1[0x41] = 0x3f800000;
    param_1[0x3c] = 0x3f800000;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x40] = 0;
    param_1[0x3f] = 0;
    param_1[0x3e] = 0;
    param_1[0x3d] = 0;
    param_1[0x4b8] = 0x3f800000;
    return;
  }
  if (param_1[0x1d9] != 0) {
    (**(code **)(*param_1 + 0x314))();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
  }
  param_1[0x449] = param_1[0x449] & 0xfffffffe;
  local_20 = 0;
  local_1c = 0x3f800000;
  param_1[0x4b8] = 0x3f800000;
  local_18 = 0;
  fVar1 = (float)param_1[0x4b6];
  FUN_00b088a0(param_1 + 0x2c,&local_20,0);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
  uStack_30 = *puVar2;
  fStack_2c = (float)puVar2[1];
  uStack_28 = puVar2[2];
  uStack_24 = puVar2[3];
  fVar3 = (float10)FUN_00ddba30((fVar1 - (float)param_1[0x4b6]) + (float)param_1[0x4b7]);
  param_1[0x4b7] = (int)(float)fVar3;
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 + (float10)fStack_2c));
  fStack_2c = (float)fVar3;
  (**(code **)(*param_1 + 0x88))(&uStack_30);
  D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
  return;
}

// 00B08EE0  FUN_00b08ee0  size=429  [between]
void __fastcall FUN_00b08ee0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((float)param_1[0x4b8] < 1.0) {
    fVar1 = (float)param_1[0x4b8] + 0.025;
    param_1[0x4b8] = (int)fVar1;
    local_30 = 0.0;
    local_28 = 0.0;
    local_2c = 1.0;
    if (NAN(fVar1) || 1.0 < fVar1 == (fVar1 == 1.0)) {
      iVar2 = FUN_00b03440(&local_30,param_1 + 0x4bc,&local_30,fVar1);
      if (iVar2 == 0) {
        param_1[0x4b8] = 0x3f800000;
      }
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
    }
    else {
      param_1[0x4b8] = 0x3f800000;
    }
    fVar1 = (float)param_1[0x4b6];
    FUN_00b088a0(param_1 + 0x2c,&local_30,0);
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
    uStack_20 = *puVar3;
    fStack_1c = (float)puVar3[1];
    uStack_18 = puVar3[2];
    uStack_14 = puVar3[3];
    fVar4 = (float10)FUN_00ddba30((fVar1 - (float)param_1[0x4b6]) + (float)param_1[0x4b7]);
    param_1[0x4b7] = (int)(float)fVar4;
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 + (float10)fStack_1c));
    fStack_1c = (float)fVar4;
    (**(code **)(*param_1 + 0x88))(&uStack_20);
    D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
    return;
  }
  return;
}

// 00B090C0  FUN_00b090c0  size=177  [between]
void __thiscall FUN_00b090c0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_2 == 0) {
    param_1[0x449] = param_1[0x449] & 0xfffffffe;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
  }
  else {
    param_1[0x449] = param_1[0x449] | 1;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
      return;
    }
  }
  return;
}

// 00B09180  Em0040::vf14C  size=188  [class]
bool __thiscall Em0040::vf14C(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0x2b) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x26) {
      return true;
    }
  }
  else if (param_2 == 0x56) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x7b) {
      return true;
    }
  }
  else if (((param_2 == 0x2a) && (*(int *)(param_1 + 0x618) == 0x26)) &&
          (*(int *)(param_1 + 0x620) < 1)) {
    return true;
  }
  if ((((*(uint *)(param_1 + 0x1124) & 0x20000) == 0) && (*(int *)(param_1 + 0x4e4) == 0)) &&
     (0x52 < param_2)) {
    if (param_2 < 0x56) {
      iVar1 = FUN_00a8cab0();
      if (((iVar1 != 0x8b) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x7c)) &&
         (iVar1 = FUN_00a8cab0(), iVar1 != 0x7d)) {
        return *(int *)(param_1 + 0x1138) == 2;
      }
    }
    else if ((param_2 == 0x56) && (*(int *)(param_1 + 0x618) == 0x7b)) {
      return true;
    }
  }
  return false;
}

// 00B09240  FUN_00b09240  size=290  [between]
void __fastcall FUN_00b09240(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4120(0x3c,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
  }
  else if (param_1[0x187] == 1) {
    FUN_00b07f30();
    iVar3 = FUN_00a8c760(0);
    if (iVar3 != 0) {
      iVar3 = FUN_00ac4780();
      if (iVar3 < 2) {
        uVar1 = 0x3e19999a;
        uVar2 = 0x3c8efa35;
      }
      else {
        uVar1 = 0x3e800000;
        uVar2 = 0x3db2b8c2;
      }
      FUN_00b02610(param_1[0x2a1] + 0x40,uVar1,uVar2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00b0931d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B093A0  FUN_00b093a0  size=106  [between]
void __fastcall FUN_00b093a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
  }
  else if (param_1[0x187] == 1) {
    FUN_00b03790(uVar2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b093fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B09420  FUN_00b09420  size=432  [between]
void __fastcall FUN_00b09420(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[0x187] == 0) {
    param_1[0x449] = param_1[0x449] | 0x20000;
    param_1[0x449] = param_1[0x449] & 0xffffffbf;
    FUN_00aa4120(0x57,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar4 = FUN_00a92f90();
    iVar5 = FUN_00e26e90();
    if (iVar5 != 0) {
      *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xfffffffb;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x250] = 0;
    param_1[0x249] = -0x40800000;
    iVar4 = FUN_00ac4780();
    if (1 < iVar4) {
      param_1[0x249] = 0x41200000;
    }
  }
  else if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00b07f30();
    iVar4 = FUN_00a8c760(0);
    if ((iVar4 != 0) ||
       ((param_1[0x250] != 0 &&
        (fVar1 = (float)param_1[0x249], !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))))) {
      iVar4 = FUN_00a8c760(0);
      if (iVar4 == 0) {
        param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
      }
      iVar4 = FUN_00ac4780();
      if (iVar4 < 2) {
        uVar2 = 0x3e19999a;
        uVar3 = 0x3c8efa35;
      }
      else {
        uVar2 = 0x3e800000;
        uVar3 = 0x3db2b8c2;
      }
      FUN_00b02610(param_1[0x2a1] + 0x40,uVar2,uVar3);
      param_1[0x250] = param_1[0x250] + 1;
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      iVar4 = FUN_00a92f90();
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 4;
      }
                    /* WARNING: Could not recover jumptable at 0x00b09530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B095D0  FUN_00b095d0  size=656  [between]
void __fastcall FUN_00b095d0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1[0x187] == 0) {
    param_1[0x449] = param_1[0x449] | 0x20000;
    FUN_00b08cb0();
    param_1[0x4c5] = 0;
    param_1[0x4c6] = -1;
    param_1[0x449] = param_1[0x449] | 0x100;
    param_1[0x449] = param_1[0x449] & 0xffdfffff;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar2 = param_1[0x1d9];
      if (*(int *)(iVar2 + 0x104) != 1) {
        *(undefined4 *)(iVar2 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
      }
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      FUN_008e0c00(&local_20);
    }
    FUN_00ddba00(param_1 + 0x430,param_1 + 0x2c);
    param_1[0x455] = 0x3f000000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if ((2 < param_1[0x188]) && ((float)param_1[0x248] < 1.0)) {
    fVar1 = (float)param_1[0x244] * 0.05 + (float)param_1[0x248];
    param_1[0x248] = (int)fVar1;
    if (fVar1 < 1.0) {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      local_14 = 0x3f800000;
      D3DXQuaternionSlerp(&local_20,param_1 + 0x430,&local_20,fVar1);
      FUN_00ddb9f0(param_1 + 0x2c,&stack0xffffffd0);
      D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
    }
    else {
      param_1[0x3a] = 0;
      param_1[0x39] = 0;
      param_1[0x38] = 0;
      param_1[0x37] = 0;
      param_1[0x35] = 0;
      param_1[0x34] = 0;
      param_1[0x33] = 0;
      param_1[0x32] = 0;
      param_1[0x30] = 0;
      param_1[0x2f] = 0;
      param_1[0x2e] = 0;
      param_1[0x2d] = 0;
      param_1[0x3b] = 0x3f800000;
      param_1[0x36] = 0x3f800000;
      param_1[0x31] = 0x3f800000;
      param_1[0x2c] = 0x3f800000;
      param_1[0x4a] = 0;
      param_1[0x49] = 0;
      param_1[0x48] = 0;
      param_1[0x47] = 0;
      param_1[0x45] = 0;
      param_1[0x44] = 0;
      param_1[0x43] = 0;
      param_1[0x42] = 0;
      param_1[0x40] = 0;
      param_1[0x3f] = 0;
      param_1[0x3e] = 0;
      param_1[0x3d] = 0;
      param_1[0x4b] = 0x3f800000;
      param_1[0x46] = 0x3f800000;
      param_1[0x41] = 0x3f800000;
      param_1[0x3c] = 0x3f800000;
      param_1[0x4b8] = 0x3f800000;
      param_1[0x248] = 0x3f800000;
    }
  }
  iVar2 = FUN_00b07a80(param_1 + 0x188,0x3e3851ec,0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B09870  FUN_00b09870  size=1070  [between]
void __fastcall FUN_00b09870(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_1[0x187] == 0) {
    param_1[0x449] = param_1[0x449] | 0x20000;
    param_1[0x449] = param_1[0x449] & 0xffffffbf;
    FUN_00aa4120(0x57,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 != 0) {
      *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffffb;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    FUN_00b08cb0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar2 = param_1[0x1d9];
      if (*(int *)(iVar2 + 0x104) != 1) {
        *(undefined4 *)(iVar2 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
      }
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      FUN_008e0c00(&local_30);
    }
    FUN_00ddba00(param_1 + 0x430,param_1 + 0x2c);
  }
  else if (param_1[0x187] == 1) {
    iVar2 = FUN_00a8c760(10);
    if (((iVar2 != 0) || (0.0 < (float)param_1[0x249])) && ((float)param_1[0x249] < 1.0)) {
      fVar1 = (float)param_1[0x244] * 0.08 + (float)param_1[0x249];
      param_1[0x249] = (int)fVar1;
      if (fVar1 < 1.0) {
        local_28 = 0;
        local_2c = 0;
        local_30 = 0;
        local_24 = 0x3f800000;
        D3DXQuaternionSlerp(&local_30,param_1 + 0x430,&local_30,fVar1);
        FUN_00ddb9f0(param_1 + 0x2c,&stack0xffffffc0);
        D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
      }
      else {
        param_1[0x3a] = 0;
        param_1[0x39] = 0;
        param_1[0x38] = 0;
        param_1[0x37] = 0;
        param_1[0x35] = 0;
        param_1[0x34] = 0;
        param_1[0x33] = 0;
        param_1[0x32] = 0;
        param_1[0x30] = 0;
        param_1[0x2f] = 0;
        param_1[0x2e] = 0;
        param_1[0x2d] = 0;
        param_1[0x3b] = 0x3f800000;
        param_1[0x36] = 0x3f800000;
        param_1[0x31] = 0x3f800000;
        param_1[0x2c] = 0x3f800000;
        param_1[0x4a] = 0;
        param_1[0x49] = 0;
        param_1[0x48] = 0;
        param_1[0x47] = 0;
        param_1[0x45] = 0;
        param_1[0x44] = 0;
        param_1[0x43] = 0;
        param_1[0x42] = 0;
        param_1[0x40] = 0;
        param_1[0x3f] = 0;
        param_1[0x3e] = 0;
        param_1[0x3d] = 0;
        param_1[0x4b] = 0x3f800000;
        param_1[0x46] = 0x3f800000;
        param_1[0x41] = 0x3f800000;
        param_1[0x3c] = 0x3f800000;
        param_1[0x4b8] = 0x3f800000;
        param_1[0x249] = 0x3f800000;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      FUN_00b07f30();
    }
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_00b02610(param_1[0x2a1] + 0x40,0x3e19999a,0x3c8efa35);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if ((float)param_1[0x249] < 1.0) {
        param_1[0x3a] = 0;
        param_1[0x39] = 0;
        param_1[0x38] = 0;
        param_1[0x37] = 0;
        param_1[0x35] = 0;
        param_1[0x34] = 0;
        param_1[0x33] = 0;
        param_1[0x32] = 0;
        param_1[0x30] = 0;
        param_1[0x2f] = 0;
        param_1[0x2e] = 0;
        param_1[0x2d] = 0;
        param_1[0x3b] = 0x3f800000;
        param_1[0x36] = 0x3f800000;
        param_1[0x31] = 0x3f800000;
        param_1[0x2c] = 0x3f800000;
        param_1[0x4a] = 0;
        param_1[0x49] = 0;
        param_1[0x48] = 0;
        param_1[0x47] = 0;
        param_1[0x45] = 0;
        param_1[0x44] = 0;
        param_1[0x43] = 0;
        param_1[0x42] = 0;
        param_1[0x40] = 0;
        param_1[0x3f] = 0;
        param_1[0x3e] = 0;
        param_1[0x3d] = 0;
        param_1[0x4b] = 0x3f800000;
        param_1[0x46] = 0x3f800000;
        param_1[0x41] = 0x3f800000;
        param_1[0x3c] = 0x3f800000;
        param_1[0x4b8] = 0x3f800000;
      }
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      FUN_008e0c00(&local_20);
      iVar2 = FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 4;
      }
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B09CB0  FUN_00b09cb0  size=516  [between]
void __fastcall FUN_00b09cb0(int *param_1)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *local_8 [2];
  
  if (param_1[0x187] == 0) {
    local_8[0] = &DAT_01645740;
    local_8[1] = &DAT_01645724;
    uVar3 = FUN_00dde2d0(0,100);
    param_1[0x250] = uVar3 & 1;
    FUN_00a9e290(local_8[uVar3 & 1],0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    sVar2 = FUN_00dde2d0(3,6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f000000;
    param_1[0x251] = (int)sVar2;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b02610(param_1[0x2a1] + 0x40,0x3df5c28f,0x3d8efa35);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x250] == 0) && (iVar4 = FUN_00a12210(0), iVar4 != 0)) {
    param_1[0x5a4] = *(int *)(iVar4 + 0x50);
    param_1[0x5a5] = *(int *)(iVar4 + 0x54);
    param_1[0x5a6] = *(int *)(iVar4 + 0x58);
    param_1[0x5a7] = *(int *)(iVar4 + 0x5c);
    param_1[0x5a5] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e0d30(param_1 + 0x5a4);
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (((iVar4 != 0) && (param_1[0x251] = param_1[0x251] + -1, param_1[0x251] == 1)) &&
     (iVar4 = FUN_00a92f90(), iVar4 != 0)) {
    uVar8 = 1;
    uVar7 = 0x8000000;
    uVar6 = 0;
    FUN_00a92f90(0,0x8000000,1);
    FUN_00e3a1a0(uVar6,uVar7,uVar8);
  }
  fVar1 = (float)param_1[0x2a4];
  if ((NAN(fVar1) || 56.25 < fVar1 == (fVar1 == 56.25)) && (0 < param_1[0x251])) {
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if (ABS(fVar5) <= (float10)1.3089969) {
      return;
    }
  }
  param_1[0x5a4] = 0;
  param_1[0x5a5] = 0;
  param_1[0x5a6] = 0;
  param_1[0x5a7] = 0;
  if ((param_1[0x1d9] != 0) && (param_1[0x250] == 0)) {
    FUN_008e0d30(param_1 + 0x5a4);
  }
                    /* WARNING: Could not recover jumptable at 0x00b09eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B09EC0  FUN_00b09ec0  size=188  [between]
void __fastcall FUN_00b09ec0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4120(0x3e,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
  }
  else if (param_1[0x187] == 1) {
    iVar1 = FUN_00a8c760(0);
    if (iVar1 != 0) {
      FUN_00b02610(param_1[0x2a1] + 0x40,0x3dcccccd,0x3c8efa35);
    }
    FUN_00b07f30();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b09f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B09F80  FUN_00b09f80  size=871  [between]
void __fastcall FUN_00b09f80(int *param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  undefined *puVar8;
  int local_28;
  undefined1 auStack_20 [28];
  
  param_1[0x99a] = 1;
  iVar1 = FUN_00a81330();
  piVar5 = (int *)0x0;
  if (iVar1 != 0) {
    piVar5 = (int *)FUN_00a7c8a0();
  }
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00aa46c0(0x9a,iVar1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x251] = 0;
    param_1[0x252] = 0;
    local_28 = 10;
    iVar3 = 3;
    if (piVar5 != (int *)0x0) {
      puVar8 = &DAT_01be9d00;
      (**(code **)(*piVar5 + 4))(&DAT_01be9d00);
      iVar4 = FUN_00dd6d70(puVar8);
      iVar3 = 3;
      if (iVar4 != 0) {
        local_28 = piVar5[0x56a];
        iVar3 = piVar5[0x56b];
      }
    }
    if (param_1[0x18a] == param_1[0x186]) {
      param_1[0x250] = param_1[0x250] + iVar3;
    }
    else {
      iVar4 = FUN_00c27ef0();
      param_1[0x250] = iVar4 * iVar3 + local_28;
    }
    param_1[0x195] = -1;
    if (param_1[0x300] != 0) {
      pfVar2 = (float *)FUN_00a925a0(auStack_20);
      if ((float)param_1[0x30a] * pfVar2[2] +
          (float)param_1[0x308] * *pfVar2 + (float)param_1[0x309] * pfVar2[1] <= 0.0) {
        fVar6 = -(float10)(float)param_1[0x308];
        fVar7 = -(float10)(float)param_1[0x30a];
      }
      else {
        fVar6 = (float10)(float)param_1[0x308];
        fVar7 = (float10)(float)param_1[0x30a];
      }
      fVar6 = (float10)fpatan(fVar6,fVar7);
      param_1[0x25] = (int)(float)fVar6;
    }
    (**(code **)(*param_1 + 0x314))();
    FUN_00b887c0();
    (**(code **)(*param_1 + 0x39c))();
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    FUN_00c15970();
    param_1[0x2dd] = 0;
    FUN_00a7c950();
    goto LAB_00b0a02e;
  }
  FUN_00cbc8f0(0x4000,1);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00b7a7c0();
  param_1[0x252] = param_1[0x252] + -1;
  if ((iVar3 != 0) && (param_1[0x250] = param_1[0x250] - iVar3, param_1[0x252] < 1)) {
    param_1[0x251] = param_1[0x251] ^ 1;
    iVar3 = param_1[0x251];
    param_1[0x252] = 10;
    FUN_00a94bc0(1,0);
    FUN_00aa46c0(0x9e - (uint)(iVar3 != 0),iVar1,1,0,0x3f800000,0x8000030,0xbf800000,0x3f800000);
  }
  iVar3 = param_1[0x250];
  iVar4 = FUN_00c27ef0();
  if (0 < iVar4) {
    if ((iVar3 < 1) && (iVar3 = FUN_00c27de0(0x2b,param_1[0x13c]), iVar3 != 0)) {
      FUN_00aa4520(0x9b,iVar1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00c27d60(0x2b,param_1[0x13c]);
      FUN_00a7c950();
      (**(code **)(*param_1 + 0x220))(0x40a00000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    return;
  }
LAB_00b0a02e:
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00B0A2F0  FUN_00b0a2f0  size=75  [between]
void __fastcall FUN_00b0a2f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = FUN_009f8b40();
      FUN_009f8ae0(uVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0x1150) = 0x44160000;
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x20;
  return;
}

// 00B0A340  FUN_00b0a340  size=38  [between]
void __fastcall FUN_00b0a340(int param_1)

{
  FUN_009f8b10();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x654) = 0xffffffff;
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffffdf;
  return;
}

// 00B0A370  FUN_00b0a370  size=87  [between]
void __fastcall FUN_00b0a370(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a81330();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c8a0();
  }
  if (*(int *)(iVar2 + 0x654) == -1) {
    FUN_009f8b10();
    FUN_00a7c950();
    param_1[0x195] = -1;
    param_1[0x449] = param_1[0x449] & 0xffffffdf;
                    /* WARNING: Could not recover jumptable at 0x00b0a3c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B0A3D0  FUN_00b0a3d0  size=216  [between]
void __fastcall FUN_00b0a3d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4f,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    FUN_00b03700(uVar2);
    return;
  }
  FUN_00b03790(uVar2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_009f8b10();
    FUN_00a7c950();
    param_1[0x195] = -1;
    param_1[0x449] = param_1[0x449] & 0xffffffdf;
  }
  FUN_00b03700(uVar2);
  return;
}

// 00B0A4B0  FUN_00b0a4b0  size=190  [between]
undefined4 __thiscall FUN_00b0a4b0(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_2 + 0x90);
  if (((*(uint *)(param_2 + 0x8c) & 0x600) == 0) && ((uVar1 & 0x40000) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((uVar1 & 0x10000) == 0) {
    if ((uVar1 >> 0x11 & 1) != 0) {
LAB_00b0a52f:
      if (*(int *)(param_2 + 0xec) == 0) {
        FUN_00acf110(param_2,0,0x3e4ccccd);
      }
      *(undefined4 *)(param_1 + 0x16a4) = 0x41700000;
      FUN_00ac8d00(param_1,param_2,0);
      return 1;
    }
    if (*(int *)(param_2 + 0x94) != 0) {
      iVar3 = FUN_00ac82f0();
      if (iVar3 != 0) {
        iVar3 = FUN_00ac8350();
        if (iVar3 != 0) {
          iVar3 = FUN_00ac8ca0(param_2);
          if (iVar3 != 0) goto LAB_00b0a52f;
        }
      }
      if ((*(int *)(param_2 + 0x94) != 0) && (bVar2)) goto LAB_00b0a52f;
    }
  }
  return 0;
}

// 00B0A570  FUN_00b0a570  size=135  [between]
undefined4 __thiscall FUN_00b0a570(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x17c))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_2 + 0x184))(*param_3,param_1[0x13c],param_3);
      if (iVar1 == 9) {
        iVar1 = (**(code **)(*param_1 + 0x1d8))();
        if (iVar1 == 0) {
          (**(code **)(*param_1 + 0x188))(9,param_2[0x13c]);
          (**(code **)(*param_2 + 0x188))(9,param_1[0x13c]);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00B0A600  FUN_00b0a600  size=70  [between]
void __fastcall FUN_00b0a600(int *param_1)

{
  (**(code **)(*param_1 + 200))(1);
  if (param_1[0x1d9] != 0) {
    FUN_008e0ae0(1);
  }
  if ((param_1[0x1d9] != 0) && (param_1[0x5af] != 0)) {
    param_1[0x5af] = 0;
    FUN_008e5ac0(2);
  }
  return;
}

// 00B0A650  FUN_00b0a650  size=40  [between]
undefined4 FUN_00b0a650(int *param_1)

{
  if ((*(byte *)((int)param_1 + 0x11) < 10) &&
     (((param_1[0x24] & 0x2000000U) == 0 || (*param_1 == 0x1f)))) {
    return 0;
  }
  return 1;
}

// 00B0A6C0  FUN_00b0a6c0  size=41  [between]
undefined4 FUN_00b0a6c0(int *param_1)

{
  if ((((param_1[0x24] & 0x10000000U) == 0) && (*param_1 != 0x4b)) && (*param_1 != 0x4c)) {
    return 0;
  }
  return 1;
}

// 00B0A710  FUN_00b0a710  size=380  [between]
void __fastcall FUN_00b0a710(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 unaff_EBX;
  undefined3 unaff_EDI;
  undefined1 uVar9;
  
  uVar9 = (undefined1)((uint)unaff_EBX >> 0x18);
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData();
    if (iVar2 != 0) {
      puVar6 = *(undefined4 **)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 4) = 1;
      iVar3 = FUN_00ac8520(10);
      iVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(10);
      uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(10);
      uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(10);
      if (1 < iVar4) {
        iVar3 = iVar3 + (iVar3 >> 2) * (iVar4 + -1);
      }
      puVar6[3] = CONCAT13(uVar1,unaff_EDI);
      puVar6[1] = iVar3;
      *(undefined1 *)(puVar6 + 4) = uVar9;
      puVar6[2] = uVar5;
      *puVar6 = 0xd9;
      puVar6[0x23] = puVar6[0x23] | 0x20800;
      *(undefined1 *)((int)puVar6 + 0x11) = 10;
      puVar6 = (undefined4 *)FUN_009f8b60();
      piVar7 = (int *)FUN_00602cb0(2,*puVar6,iVar2);
      if (piVar7 != (int *)0x0) {
        iVar2 = FUN_00a12210(0);
        if (iVar2 == 0) {
          iVar2 = param_1;
        }
        (**(code **)(*piVar7 + 0x6c))(iVar2 + 0x40);
        iVar2 = piVar7[0x21c];
        piVar7[0x21d] = 0x3e800000;
        piVar8 = (int *)FUN_00d773c0();
        (**(code **)(*piVar8 + 8))(iVar2);
        FUN_00d7b0f0();
        FUN_00d77c50(piVar7[0x13c],0xffffffff);
        *(undefined4 *)(iVar2 + 0x510) = 0x3dcccccd;
        FUN_00d77580(0x3dcccccd,0x3f000000,0x3dcccccd);
        *(undefined4 *)(iVar2 + 0x380) = 0xd9;
        FUN_00d7b890();
      }
      return;
    }
  }
  FUN_00dd5650(&DAT_016a0bc4);
  return;
}

// 00B0A890  FUN_00b0a890  size=242  [between]
void __fastcall FUN_00b0a890(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00b0a600();
    FUN_00b08cb0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x449] = param_1[0x449] & 0xffffff7f;
    uVar3 = 0x24;
    if (ABS((float)param_1[0x245]) < 1.5707964 == (ABS((float)param_1[0x245]) == 1.5707964)) {
      bVar1 = FUN_00dde2d0(0,100);
      if ((bVar1 & 3) != 0) {
        uVar3 = ((int)(char)~bVar1 & 2U | 0x4c) >> 1;
      }
    }
    else {
      uVar3 = 0x25;
    }
    FUN_00aa3f60(uVar3);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b08ee0();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b0a980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B0A990  FUN_00b0a990  size=242  [between]
void __fastcall FUN_00b0a990(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00b0a600();
    FUN_00b08cb0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x449] = param_1[0x449] & 0xffffff7f;
    uVar3 = 0x24;
    if (ABS((float)param_1[0x245]) < 1.5707964 == (ABS((float)param_1[0x245]) == 1.5707964)) {
      bVar1 = FUN_00dde2d0(0,100);
      if ((bVar1 & 3) != 0) {
        uVar3 = ((int)(char)~bVar1 & 2U | 0x4c) >> 1;
      }
    }
    else {
      uVar3 = 0x25;
    }
    FUN_00aa3f60(uVar3);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b08ee0();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b0aa80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B0AA90  FUN_00b0aa90  size=521  [between]
void __fastcall FUN_00b0aa90(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b0a600();
    FUN_00b08d00();
    uVar2 = 0x3e4ccccd;
    param_1[0x449] = param_1[0x449] & 0xffffff7f;
    if (param_1[0x42c] == 0x2f) {
      uVar2 = 0;
    }
    FUN_00aa4080(0x32,0,uVar2,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x225] = 0x3df5c28f;
    pcVar1 = *(code **)(*param_1 + 0x1f8);
    param_1[0x289] = 0x41200000;
    param_1[0x288] = 1;
    (*pcVar1)(1);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x2e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4120(0x2c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b0ac97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B0ACB0  FUN_00b0acb0  size=431  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00b0acb0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x449] = param_1[0x449] & 0xffffff7f;
    uVar3 = 0x31;
    if ((float)param_1[0x245] < 0.0) {
      uVar3 = 0x30;
    }
    FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f800000;
    param_1[0x188] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00b0acf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  iVar2 = FUN_00a8e520();
  if ((iVar2 == 0) || (param_1[0x188] != 0)) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = (_DAT_01be942c / (float)param_1[0x244]) * 0.8;
  }
  FUN_00a96030(0,fVar1);
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    param_1[0x188] = param_1[0x188] + 1;
  }
  FUN_00b07f30();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00aa3f60(0x2c);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00B0AE60  FUN_00b0ae60  size=545  [between]
void __fastcall FUN_00b0ae60(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b0a600();
    FUN_00b08d00();
    FUN_00aa9280(0x2d);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x455] = 0x3f19999a;
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar3 = (float10)-1.0;
    }
    else {
      fVar3 = (float10)FUN_00e36a50(0);
    }
    pcVar1 = *(code **)(*param_1 + 0x1f8);
    param_1[0x451] =
         (int)(float)((float10)(float)param_1[0x22a] * (float10)0.6 * fVar3 * (float10)60.0 *
                     (float10)0.9);
    (*pcVar1)(1);
    FUN_00b03020(0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x455] = 0x3f99999a;
      param_1[0x449] = param_1[0x449] & 0xffffffdf;
      uVar4 = 0x2e;
LAB_00b0af5c:
      FUN_00aa4120(uVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
LAB_00b0af69:
    FUN_00b02df0();
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = param_1[0x451];
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 == 0) goto LAB_00b0af69;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    uVar4 = 0x2f;
    goto LAB_00b0af5c;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4120(0x2c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b0b07f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B0B0A0  FUN_00b0b0a0  size=565  [between]
void __fastcall FUN_00b0b0a0(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b0a600();
    FUN_00b08d00();
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x225] = param_1[0x451];
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    FUN_00b03020(0);
    param_1[0x455] = 0x41f00000;
    param_1[0x451] = -0x41800000;
    param_1[0x187] = 1;
    FUN_00aa4120(0x2e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = param_1[0x451];
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      FUN_00aa4120(0x34,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00b02df0();
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4120(0x2c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b0b2d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B0B2F0  FUN_00b0b2f0  size=271  [between]
void __fastcall FUN_00b0b2f0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(0x33,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x250] = param_1[0x250] + 1;
    if (2 < param_1[0x250]) {
                    /* WARNING: Could not recover jumptable at 0x00b0b3cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00aa4080(0x33,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  return;
}

// 00B0B400  FUN_00b0b400  size=208  [between]
void __fastcall FUN_00b0b400(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(undefined2 *)(param_1 + 0x209) = 1;
    param_1[0x20a] = 0x78;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b0b4ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B0B4D0  FUN_00b0b4d0  size=168  [between]
void __fastcall FUN_00b0b4d0(int param_1)

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
      iVar2 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x168c));
      if (iVar2 == 0) {
        FUN_00a805f0();
        return;
      }
    }
  }
  return;
}

// 00B0B580  FUN_00b0b580  size=312  [between]
undefined4 __thiscall FUN_00b0b580(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  int local_4;
  
  iVar10 = 0;
  local_4 = 0;
  iVar8 = FUN_00907640(param_2,&local_4,0);
  if (((iVar8 != 0) && (local_4 != 0)) &&
     (fVar1 = *(float *)(param_1 + 0x1340), 0 < *(int *)(local_4 + 0x14))) {
    iVar11 = 0;
    iVar8 = local_4;
    do {
      iVar7 = *(int *)(*(int *)(iVar8 + 0x10) + 0x28 + iVar11);
      iVar9 = *(int *)(iVar8 + 0x10) + iVar11;
      if (((*(char *)(iVar7 + 0x18) != '\x02') || (*(char *)(iVar7 + 0x10) + iVar7 == 0)) &&
         ((*(char *)(iVar7 + 0x18) == '\x01' &&
          ((*(char *)(iVar7 + 0x10) + iVar7 != 0 && (0.0 < *(float *)(iVar9 + 0x14))))))) {
        fVar2 = *(float *)(iVar9 + 0x10);
        fVar3 = *(float *)(iVar9 + 0x14);
        fVar4 = *(float *)(iVar9 + 0x18);
        fVar5 = *(float *)(iVar9 + 0x10);
        fVar6 = *(float *)(iVar9 + 0x18);
        if ((ABS(fVar3 - 1.0) < 1e-06) ||
           (fVar12 = (float10)FUN_00ddbb50((fVar6 * fVar4 + fVar5 * fVar2 + fVar3 * 0.0) /
                                           (SQRT(fVar6 * fVar6 + fVar5 * fVar5) *
                                           SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4))),
           iVar8 = local_4, (float10)(1.5707964 - fVar1) < fVar12)) {
          return 1;
        }
      }
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + 0x30;
    } while (iVar10 < *(int *)(iVar8 + 0x14));
  }
  return 0;
}

// 00B0B6C0  FUN_00b0b6c0  size=127  [between]
void __thiscall FUN_00b0b6c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  local_30 = *(undefined4 *)(param_1 + 0x40);
  local_2c = *(undefined4 *)(param_1 + 0x44);
  local_28 = *(undefined4 *)(param_1 + 0x48);
  local_24 = *(undefined4 *)(param_1 + 0x4c);
  local_20 = 0;
  local_1c = *(float *)(param_1 + 0x894) * 3.0 * *(float *)(param_1 + 0x910);
  local_18 = 0;
  iVar1 = FUN_009f8b40();
  FUN_0090fa30(param_2,0,&local_30,0x3e800000,&local_20,iVar1 << 0x10 | 0x1e,
               "em0040_LinearCastSphere");
  return;
}

// 00B0B740  FUN_00b0b740  size=63  [between]
uint FUN_00b0b740(void)

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
  puVar3 = &DAT_01b34e80;
  (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
  iVar1 = FUN_00dd6d70(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 00B0B7D0  FUN_00b0b7d0  size=72  [between]
bool FUN_00b0b7d0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b34e80;
      (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
      iVar1 = FUN_00dd6d70(puVar3);
      if (iVar1 != 0) {
        return piVar2[0x42e] == 1;
      }
    }
  }
  return false;
}

// 00B0B870  FUN_00b0b870  size=539  [between]
void __fastcall FUN_00b0b870(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    param_1[0x449] = param_1[0x449] & 0xffffffbf;
    param_1[0x449] = param_1[0x449] | 0x20000;
    FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00b07f30();
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    iVar2 = FUN_00a8c760(0);
    if ((iVar2 != 0) && (iVar3 != 0)) {
      FUN_00b069d0(iVar3 + 0x40,0x3eb33333);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 != 0) {
      *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 1;
    }
    (**(code **)(*param_1 + 0x34c))();
    if (param_1[0x1d9] == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x314))();
    if (*(int *)(param_1[0x1d9] + 0x104) == 0) {
      return;
    }
    *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x531];
  param_1[0x531] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00aa4120(0x57,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 != 0) {
      *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffffe;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
  }
  return;
}

// 00B0BA90  FUN_00b0ba90  size=300  [between]
void __fastcall FUN_00b0ba90(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = FUN_00a81330();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_01647a20);
                    /* WARNING: Could not recover jumptable at 0x00b0bb0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00a12210(3);
    if (iVar3 != 0) {
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x2a] = iVar3;
    }
    uVar2 = FUN_009f8b40();
    FUN_009f8ae0(uVar2);
    FUN_008e3c10();
    param_1[0x449] = param_1[0x449] | 0x20000;
    param_1[0x449] = param_1[0x449] & 0xffffffbf;
    uVar9 = 0x3f800000;
    uVar8 = 0xbf800000;
    uVar7 = 0;
    uVar6 = 0x3f800000;
    uVar5 = 0x3e4ccccd;
    uVar4 = 0;
    uVar2 = FUN_004b5e10(param_1[0x530],iVar1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00aa4520(uVar2,iVar1,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] == 1) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00B0BBC0  FUN_00b0bbc0  size=704  [between]
void __fastcall FUN_00b0bbc0(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined *puVar6;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    param_1[0x510] = 0x41a00000;
    param_1[0x248] = 0;
    fVar5 = (float10)FUN_00dde300(0x3dcccccd,0x3e99999a);
    param_1[0x249] = (int)(float)fVar5;
    param_1[599] = 0;
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) &&
       (fVar1 = (float)param_1[0x435], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
      FUN_00b069d0(param_1[0x2a1] + 0x40,0x3da3d70a);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = 1;
    param_1[0x510] = 0x41200000;
    return;
  }
  param_1[0x569] = (int)((float)param_1[0x569] - (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  iVar2 = (**(code **)(*param_1 + 0x84))();
  fVar5 = (float10)FUN_00ddba30((float)fVar5 - *(float *)(iVar2 + 4));
  if (((param_1[0x449] & 0x400000U) == 0) && ((float10)0.5235988 < ABS(fVar5))) {
    uVar4 = 10;
    if (ABS(fVar5) <= (float10)2.0943952) {
      if ((fVar5 <= (float10)0) && (fVar5 < (float10)0)) {
        uVar4 = 9;
      }
    }
    else {
      uVar4 = 0xd;
    }
    FUN_00aa4080(uVar4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8cab0(), iVar2 == 0xb7)) {
    param_1[0x510] = 0x42a00000;
  }
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar6 = &DAT_01b34e80;
    (**(code **)(*piVar3 + 4))(&DAT_01b34e80);
    iVar2 = FUN_00dd6d70(puVar6);
    if ((iVar2 != 0) && (iVar2 = FUN_004b8b70(), iVar2 != 0)) {
      FUN_004b8c20();
      return;
    }
  }
  param_1[0x510] = 0x42a00000;
  return;
}

// 00B0BE80  FUN_00b0be80  size=299  [between]
void __fastcall FUN_00b0be80(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
    uVar6 = 0;
  }
  else {
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar8 = &DAT_01b34e80;
      (**(code **)(*piVar5 + 4))(&DAT_01b34e80);
      iVar4 = FUN_00dd6d70(puVar8);
      uVar6 = -(uint)(iVar4 != 0) & (uint)piVar5;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x449] = param_1[0x449] | 0x40;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if (uVar6 != 0) {
    fVar7 = (float10)FUN_00fdc1f0();
    FUN_00b069d0((float *)(uVar6 + 0x40),(float)((float10)1 - fVar7));
    fVar1 = *(float *)(uVar6 + 0x40) - (float)param_1[0x10];
    fVar3 = *(float *)(uVar6 + 0x44) - (float)param_1[0x11];
    fVar2 = *(float *)(uVar6 + 0x48) - (float)param_1[0x12];
    if (16.0 <= fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) {
      iVar4 = FUN_004b5e90();
      if (iVar4 != 0) goto LAB_00b0bf94;
    }
                    /* WARNING: Could not recover jumptable at 0x00b0bf86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  (**(code **)(*param_1 + 0x34c))();
LAB_00b0bf94:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B0BFB0  FUN_00b0bfb0  size=356  [between]
void __fastcall FUN_00b0bfb0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_00b0c0a9;
  }
  FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(undefined4 *)(param_1 + 0x620) = 0;
  iVar5 = FUN_00c19c30(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2));
  if (iVar5 == 0) {
LAB_00b0c077:
    uVar2 = 0x3f860a92;
  }
  else {
    iVar4 = FUN_00a7c8a0();
    if ((iVar4 == 0) || (iVar5 == *(int *)(param_1 + 0x4f0))) goto LAB_00b0c077;
    iVar5 = FUN_00a7c8a0();
    if (0.0 < (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x10e8)) *
              (*(float *)(iVar5 + 0x40) - *(float *)(param_1 + 0x10e0)) -
              (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x10e0)) *
              (*(float *)(iVar5 + 0x48) - *(float *)(param_1 + 0x10e8))) goto LAB_00b0c077;
    uVar2 = 0xbf860a92;
  }
  *(undefined4 *)(param_1 + 0x920) = uVar2;
  *(undefined4 *)(param_1 + 0x924) = 0;
  *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(param_1 + 0x10d4);
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x40;
LAB_00b0c0a9:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a8e880(*(int *)(param_1 + 0x10d0) + 0x40);
  iVar5 = FUN_00a8e9b0();
  fVar3 = *(float *)(iVar5 + 4) + *(float *)(param_1 + 0x920);
  *(float *)(param_1 + 0x92c) = fVar3;
  fVar1 = *(float *)(param_1 + 0x94);
  fVar6 = (float10)FUN_00ddba30(fVar3 - fVar1);
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.1 + (float10)fVar1));
  *(float *)(param_1 + 0x94) = (float)fVar6;
  return;
}

// 00B0C120  FUN_00b0c120  size=546  [between]
void __fastcall FUN_00b0c120(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined *puVar6;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar6 = &DAT_01b34e80;
      (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
      iVar1 = FUN_00dd6d70(puVar6);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00aa4080(5,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((uVar3 != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
      FUN_00b069d0(uVar3 + 0x40,0x3da3d70a);
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x510] = 0x41200000;
    param_1[0x187] = 1;
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar5 = (float10)FUN_00a8ec30(uVar3 + 0x40);
  iVar1 = (**(code **)(*param_1 + 0x84))();
  fVar5 = (float10)FUN_00ddba30((float)fVar5 - *(float *)(iVar1 + 4));
  if (((param_1[0x449] & 0x400000U) == 0) && ((float10)0.5235988 < ABS(fVar5))) {
    uVar4 = 10;
    if (ABS(fVar5) <= (float10)2.0943952) {
      if ((fVar5 <= (float10)0) && (fVar5 < (float10)0)) {
        uVar4 = 9;
      }
    }
    else {
      uVar4 = 0xd;
    }
    FUN_00aa4080(uVar4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  return;
}

// 00B0C350  FUN_00b0c350  size=1397  [between]
void __fastcall FUN_00b0c350(int *param_1)

{
  code *pcVar1;
  float10 fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  float10 fVar6;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int iStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float afStack_70 [2];
  float fStack_68;
  undefined1 local_60 [92];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_c0 = (float)param_1[0x10] - (float)param_1[600];
    local_bc = (float)param_1[0x11] - (float)param_1[0x259];
    local_b8 = (float)param_1[0x12] - (float)param_1[0x25a];
    local_b4 = (float)param_1[0x13] - (float)param_1[0x25b];
    fVar3 = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&local_c0,&local_c0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_b8 = 0.0;
      local_c0 = 0.0;
      local_bc = 1.0;
    }
    local_c0 = local_c0 * 10.0;
    local_bc = local_bc * 10.0;
    local_b8 = local_b8 * 10.0;
    local_b4 = local_b4 * 10.0;
    local_a0 = (float)param_1[0x10];
    local_98 = (float)param_1[0x12];
    local_94 = (float)param_1[0x13];
    local_9c = (float)param_1[0x11] + 1.5;
    local_80 = local_a0 + local_c0;
    local_7c = local_bc + local_9c;
    local_78 = local_98 + local_b8;
    local_74 = local_b4 + local_94;
    FUN_00468970(param_1 + 0x44a,0,&local_a0,&local_80,7,0,0,0,"em0040",0,0);
    HavokRayCastManager::set(local_60);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 1:
  case 2:
    break;
  case 3:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    iVar5 = FUN_00b07a80(param_1 + 0x188,0x3e4ccccd,0x3d99999a);
    if ((iVar5 != 0) || ((float)param_1[0x11] - (float)param_1[0x248] < -10.0)) {
      FUN_00a805f0();
      param_1[0x139] = 1;
    }
  default:
    return;
  }
  fVar6 = (float10)FUN_00a8ec30(param_1 + 600);
  if (param_1[0x187] == 1) {
    fVar2 = (float10)3.1415927;
  }
  else {
    fVar2 = (float10)1.5707964;
  }
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 + fVar2));
  local_a8 = (float)fVar6;
  iVar5 = (**(code **)(*param_1 + 0x84))();
  fStack_a4 = *(float *)(iVar5 + 4);
  fVar6 = (float10)FUN_00ddba30(local_a8 - fStack_a4);
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.18 + (float10)fStack_a4));
  param_1[0x25] = (int)(float)fVar6;
  iVar5 = (**(code **)(*param_1 + 0x84))();
  fVar6 = (float10)FUN_00ddba30(*(float *)(iVar5 + 4) - local_a8);
  local_a8 = (float)ABS(fVar6);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iStack_88 = 0;
  fStack_84 = 0.0;
  fStack_a4 = 0.0;
  iVar5 = FUN_00907560(param_1 + 0x44a,afStack_70,0,&iStack_88,&fStack_84,0,0,0);
  if (iVar5 == 0) goto LAB_00b0c655;
  if ((iStack_88 != 0) && (bVar4 = FUN_009184c0(iStack_88), (bVar4 & 0x1f) == 0x14)) {
    fStack_a4 = 1.4013e-45;
  }
  if (fStack_84 == 0.0) {
LAB_00b0c641:
    if (fStack_a4 == 0.0) {
      param_1[0x187] = 2;
      goto LAB_00b0c655;
    }
  }
  else {
    local_a0 = fStack_84;
    local_9c = 0.0;
    local_98 = 0.0;
    local_94 = 0.0;
    iVar5 = FUN_00901570();
    if (iVar5 != 0x14) goto LAB_00b0c641;
  }
  param_1[0x187] = 1;
  if (((fStack_68 - (float)param_1[0x12]) * (fStack_68 - (float)param_1[0x12]) +
       (afStack_70[0] - (float)param_1[0x10]) * (afStack_70[0] - (float)param_1[0x10]) < 1.0) &&
     (local_a8 < 0.17453292)) {
    param_1[0x1bb] = 0;
    FUN_008e5c50(0x1f);
    FUN_00b03020(0);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = 3;
    param_1[0x248] = param_1[0x11];
    (*pcVar1)(0x40a00000);
    return;
  }
LAB_00b0c655:
  local_c0 = (float)param_1[0x10] - (float)param_1[600];
  local_bc = (float)param_1[0x11] - (float)param_1[0x259];
  local_b8 = (float)param_1[0x12] - (float)param_1[0x25a];
  local_b4 = (float)param_1[0x13] - (float)param_1[0x25b];
  fVar3 = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(&local_c0,&local_c0);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_b8 = 0.0;
    local_c0 = 0.0;
    local_bc = 1.0;
  }
  local_c0 = local_c0 * 10.0;
  local_bc = local_bc * 10.0;
  local_b8 = local_b8 * 10.0;
  local_b4 = local_b4 * 10.0;
  local_80 = (float)param_1[0x10];
  local_78 = (float)param_1[0x12];
  local_74 = (float)param_1[0x13];
  local_7c = (float)param_1[0x11] + 1.5;
  local_a0 = local_80 + local_c0;
  local_9c = local_bc + local_7c;
  local_98 = local_78 + local_b8;
  local_94 = local_b4 + local_74;
  FUN_00468970(param_1 + 0x44a,0,&local_80,&local_a0,7,0,0,0,"em0040",0,0);
  HavokRayCastManager::set(local_60);
  return;
}

// 00B0C8E0  FUN_00b0c8e0  size=52  [between]
void __fastcall FUN_00b0c8e0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1fc))();
  if ((iVar1 == 0) && (param_1[0x139] == 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
    param_1[0x569] = 0x42700000;
                    /* WARNING: Could not recover jumptable at 0x00b0c910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

// 00B0C920  FUN_00b0c920  size=602  [between]
void __thiscall FUN_00b0c920(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float10 fVar6;
  float *pfVar7;
  float fVar8;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  if ((param_2 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    puVar5 = (undefined4 *)FUN_00a92640(local_20);
    *(undefined4 *)(param_1 + 0x1580) = *puVar5;
    pfVar7 = (float *)(param_1 + 0x1580);
    *(undefined4 *)(param_1 + 0x1584) = puVar5[1];
    *(undefined4 *)(param_1 + 0x1588) = puVar5[2];
    *(undefined4 *)(param_1 + 0x158c) = puVar5[3];
    fVar8 = (*(float *)(param_1 + 0x48) - *(float *)(iVar4 + 0x48)) * *(float *)(param_1 + 0x1588) +
            *(float *)(param_1 + 0x1584) * (*(float *)(param_1 + 0x44) - *(float *)(iVar4 + 0x44)) +
            *pfVar7 * (*(float *)(param_1 + 0x40) - *(float *)(iVar4 + 0x40));
    local_3c = *(float *)(iVar4 + 0x44) + *(float *)(param_1 + 0x1584) * fVar8;
    local_38 = *(float *)(iVar4 + 0x48) + *(float *)(param_1 + 0x1588) * fVar8;
    pfVar1 = (float *)(param_1 + 0x1570);
    local_34 = *(float *)(iVar4 + 0x4c) + *(float *)(param_1 + 0x158c) * fVar8;
    *pfVar1 = *(float *)(param_1 + 0x40) - (*(float *)(iVar4 + 0x40) + *pfVar7 * fVar8);
    *(float *)(param_1 + 0x1574) = *(float *)(param_1 + 0x44) - local_3c;
    *(float *)(param_1 + 0x1578) = *(float *)(param_1 + 0x48) - local_38;
    *(float *)(param_1 + 0x157c) = *(float *)(param_1 + 0x4c) - local_34;
    fVar8 = *(float *)(param_1 + 0x1578) * *(float *)(param_1 + 0x1578) +
            *pfVar1 * *pfVar1 + *(float *)(param_1 + 0x1574) * *(float *)(param_1 + 0x1574);
    if (fVar8 < 0.0 == (fVar8 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      *(undefined4 *)(param_1 + 0x1574) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1578) = 0;
    }
    fVar3 = 1.0;
    fVar8 = *pfVar1 * 0.0 + *(float *)(param_1 + 0x1574) + *(float *)(param_1 + 0x1578) * 0.0;
    fVar2 = -1.0;
    if ((fVar8 < -1.0) || (fVar2 = fVar8, fVar8 <= 1.0)) {
      fVar3 = fVar2;
    }
    fVar6 = (float10)FUN_00ddbb50(fVar3);
    if (*pfVar7 * *(float *)(param_1 + 0x1578) - *(float *)(param_1 + 0x1588) * *pfVar1 < 0.0) {
      fVar6 = -fVar6;
    }
    *(float *)(param_1 + 0x15a0) = (float)fVar6;
    fVar8 = (float)fVar6;
    D3DXQuaternionRotationAxis(local_30);
    FUN_00ddb9f0(param_1 + 0xb0,&local_3c);
    D3DXMatrixInverse(param_1 + 0xf0,0,param_1 + 0xb0);
    *pfVar1 = 0.0;
    *(undefined4 *)(param_1 + 0x1574) = 0x40000000;
    *(undefined4 *)(param_1 + 0x1578) = 0;
    *(float **)(param_1 + 0x1590) = pfVar7;
    *(float *)(param_1 + 0x1594) = fVar8;
    *(undefined4 *)(param_1 + 0x1598) = unaff_EDI;
    *(undefined4 *)(param_1 + 0x159c) = unaff_ESI;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x800000;
  }
  return;
}

// 00B0CB80  FUN_00b0cb80  size=159  [between]
undefined4 __fastcall FUN_00b0cb80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  undefined *puVar9;
  
  iVar7 = FUN_00a81330();
  if (iVar7 != 0) {
    piVar8 = (int *)FUN_00a7c8a0();
    if (piVar8 != (int *)0x0) {
      puVar9 = &DAT_01b34e80;
      (**(code **)(*piVar8 + 4))(&DAT_01b34e80);
      iVar7 = FUN_00dd6d70(puVar9);
      if ((iVar7 != 0) &&
         (iVar7 = *(int *)(param_1 + 0xa84),
         fVar1 = *(float *)(param_1 + 0x40) - (float)piVar8[0x10],
         fVar6 = *(float *)(param_1 + 0x44) - (float)piVar8[0x11],
         fVar5 = *(float *)(param_1 + 0x48) - (float)piVar8[0x12],
         fVar4 = *(float *)(param_1 + 0x40) - *(float *)(iVar7 + 0x40),
         fVar3 = *(float *)(param_1 + 0x44) - *(float *)(iVar7 + 0x44),
         fVar2 = *(float *)(param_1 + 0x48) - *(float *)(iVar7 + 0x48),
         fVar5 * fVar5 + fVar1 * fVar1 + fVar6 * fVar6 <=
         fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2)) {
        return 0;
      }
    }
  }
  return 1;
}

// 00B0CC20  FUN_00b0cc20  size=324  [between]
void __fastcall FUN_00b0cc20(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01b34e80;
      (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
      iVar1 = FUN_00dd6d70(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
      goto LAB_00b0cc68;
    }
  }
  uVar3 = 0;
LAB_00b0cc68:
  if (uVar3 != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a7c8a0();
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(7,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar4 = FUN_009f8b40();
    FUN_009f8ae0(uVar4);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
    }
    param_1[0x568] = 0;
    param_1[0x449] = param_1[0x449] | 0x400000;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B0CD70  FUN_00b0cd70  size=788  [between]
void __fastcall FUN_00b0cd70(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  iVar3 = FUN_00a81330();
  if ((iVar3 == 0) || (piVar4 = (int *)FUN_00a7c8a0(), piVar4 == (int *)0x0)) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b34e80;
    (**(code **)(*piVar4 + 4))(&DAT_01b34e80);
    iVar3 = FUN_00dd6d70(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  if ((uVar5 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    param_1[0x449] = param_1[0x449] | 0x400000;
    FUN_00aa4080(7,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    uVar6 = FUN_009f8b40();
    FUN_009f8ae0(uVar6);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar3 = param_1[0x1d9];
      if (*(int *)(iVar3 + 0x104) != 1) {
        *(undefined4 *)(iVar3 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      fStack_1c = 0.0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
    }
    if (param_1[0x1d9] != 0) {
      param_1[0x5af] = 1;
      FUN_008e59c0(2);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = param_1[0x568];
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  bVar2 = true;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00b04510(&uStack_20,param_1 + 0x10);
  fStack_1c = (float)param_1[0x55d] + fStack_1c;
  FUN_00b02610(&uStack_20,0x3df5c28f,0x3c8efa35);
  fVar1 = (float)param_1[0x568];
  if ((float)param_1[0x248] <= 0.0) {
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) goto LAB_00b0cf36;
  }
  else if (0.0 >= fVar1) goto LAB_00b0cf36;
  bVar2 = false;
LAB_00b0cf36:
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if (bVar2) {
    FUN_009f8b10();
    param_1[0x3a] = 0;
    param_1[0x39] = 0;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x3b] = 0x3f800000;
    param_1[0x36] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    param_1[0x2c] = 0x3f800000;
    param_1[0x4b] = 0x3f800000;
    param_1[0x46] = 0x3f800000;
    param_1[0x41] = 0x3f800000;
    param_1[0x3c] = 0x3f800000;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x40] = 0;
    param_1[0x3f] = 0;
    param_1[0x3e] = 0;
    param_1[0x3d] = 0;
    param_1[0x449] = param_1[0x449] & 0xffbfffff;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    (**(code **)(*param_1 + 0x34c))();
    if (param_1[0x1d9] != 0) {
      param_1[0x5af] = 0;
      FUN_008e5ac0(2);
    }
  }
  return;
}

// 00B0D090  FUN_00b0d090  size=758  [between]
void __fastcall FUN_00b0d090(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  iVar3 = FUN_00a81330();
  if ((iVar3 == 0) || (piVar4 = (int *)FUN_00a7c8a0(), piVar4 == (int *)0x0)) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b34e80;
    (**(code **)(*piVar4 + 4))(&DAT_01b34e80);
    iVar3 = FUN_00dd6d70(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  if ((uVar5 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    param_1[0x449] = param_1[0x449] | 0x400000;
    FUN_00aa4080(7,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    uVar6 = FUN_009f8b40();
    FUN_009f8ae0(uVar6);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar3 = param_1[0x1d9];
      if (*(int *)(iVar3 + 0x104) != 1) {
        *(undefined4 *)(iVar3 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      fStack_1c = 0.0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
    }
    param_1[0x248] = param_1[0x568];
    if (param_1[0x1d9] != 0) {
      FUN_008e71f0(0x10000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  bVar2 = true;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00b04510(&uStack_20,param_1 + 0x10);
  fStack_1c = (float)param_1[0x55d] + fStack_1c;
  FUN_00b02610(&uStack_20,0x3df5c28f,0x3c8efa35);
  fVar1 = (float)param_1[0x568];
  if ((float)param_1[0x248] <= 0.0) {
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) goto LAB_00b0d253;
  }
  else if (0.0 >= fVar1) goto LAB_00b0d253;
  bVar2 = false;
LAB_00b0d253:
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if (bVar2) {
    FUN_009f8b10();
    param_1[0x3a] = 0;
    param_1[0x39] = 0;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x3b] = 0x3f800000;
    param_1[0x36] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    param_1[0x2c] = 0x3f800000;
    param_1[0x4b] = 0x3f800000;
    param_1[0x46] = 0x3f800000;
    param_1[0x41] = 0x3f800000;
    param_1[0x3c] = 0x3f800000;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x40] = 0;
    param_1[0x3f] = 0;
    param_1[0x3e] = 0;
    param_1[0x3d] = 0;
    param_1[0x449] = param_1[0x449] & 0xffbfffff;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B0D390  FUN_00b0d390  size=1221  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00b0d390(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float unaff_EBX;
  float *pfVar8;
  float unaff_EDI;
  float *pfVar9;
  float10 fVar10;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c [19];
  undefined1 local_50 [76];
  
  uVar5 = FUN_00a8cac0();
  switch(uVar5) {
  case 0:
    FUN_00a9e290(&DAT_0163d4b4,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    local_b0 = *(float *)(param_1 + 0xde0);
    local_ac = *(undefined4 *)(param_1 + 0xde4);
    pfVar8 = &local_b0;
    local_a8 = *(undefined4 *)(param_1 + 0xde8);
    local_a4 = *(undefined4 *)(param_1 + 0xdec);
    local_a0 = *(undefined4 *)(param_1 + 0x50);
    local_9c[0] = *(float *)(param_1 + 0x54);
    local_9c[1] = *(float *)(param_1 + 0x58);
    local_9c[2] = *(float *)(param_1 + 0x5c);
    D3DXVec3TransformNormal(pfVar8,pfVar8,param_1 + 0xf0);
    fVar2 = *(float *)(param_1 + 0x124);
    D3DXVec3TransformNormal(&local_ac,&local_ac,param_1 + 0xf0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    fVar10 = (float10)fpatan((float10)(float)pfVar8 -
                             ((float10)*(float *)(param_1 + 0x120) + (float10)(fVar2 + unaff_EBX)),
                             (float10)unaff_EDI -
                             ((float10)*(float *)(param_1 + 0x128) + (float10)local_b0));
    *(float *)(param_1 + 0x94) = (float)fVar10;
    return;
  case 1:
    *(float *)(param_1 + 0x50) =
         (*(float *)(param_1 + 0xde0) - *(float *)(param_1 + 0x50)) * 0.2 +
         *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) =
         (*(float *)(param_1 + 0xde4) - *(float *)(param_1 + 0x54)) * 0.2 +
         *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) =
         (*(float *)(param_1 + 0xde8) - *(float *)(param_1 + 0x58)) * 0.2 +
         *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) =
         (*(float *)(param_1 + 0xdec) - *(float *)(param_1 + 0x5c)) * 0.2 +
         *(float *)(param_1 + 0x5c);
    fVar2 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0xde0);
    fVar4 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xde4);
    fVar3 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0xde8);
    if (SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) < 0.1) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xde0);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xde4);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xde8);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xdec);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    iVar6 = FUN_00a94d60(&DAT_0163d4b4);
    if (iVar6 != 0) {
      FUN_00a9e290(&DAT_0163d4ac,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 3:
    puVar1 = (undefined4 *)(param_1 + 0x90);
    *(float *)(param_1 + 0x50) =
         (*(float *)(param_1 + 0xdc0) - *(float *)(param_1 + 0x50)) * 0.2 +
         *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) =
         (*(float *)(param_1 + 0xdc4) - *(float *)(param_1 + 0x54)) * 0.2 +
         *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) =
         (*(float *)(param_1 + 0xdc8) - *(float *)(param_1 + 0x58)) * 0.2 +
         *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) =
         (*(float *)(param_1 + 0xdcc) - *(float *)(param_1 + 0x5c)) * 0.2 +
         *(float *)(param_1 + 0x5c);
    FUN_00ddefe0(puVar1,puVar1,(undefined4 *)(param_1 + 0xdd0),0x3e4ccccd,5);
    fVar2 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0xdc0);
    fVar4 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xdc4);
    fVar3 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0xdc8);
    if (SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) < 0.2) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xdc0);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xdc4);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xdc8);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xdcc);
      *puVar1 = *(undefined4 *)(param_1 + 0xdd0);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xdd4);
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xdd8);
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xddc);
      FUN_00a9e290(&DAT_0163d4a4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    iVar6 = FUN_00a94d60(&DAT_0163d4a4);
    if (iVar6 != 0) {
      local_9c[0x11] = 0.0;
      local_9c[0x10] = 0.0;
      local_9c[0xf] = 0.0;
      local_9c[0xe] = 0.0;
      local_9c[0xc] = 0.0;
      local_9c[0xb] = 0.0;
      local_9c[10] = 0.0;
      local_9c[9] = 0.0;
      local_9c[7] = 0.0;
      local_9c[6] = 0.0;
      local_9c[5] = 0.0;
      local_9c[4] = 0.0;
      local_9c[0x12] = 1.0;
      local_9c[0xd] = 1.0;
      local_9c[8] = 1.0;
      local_9c[3] = 1.0;
      if (*(float *)(param_1 + 0xdd8) != 0.0) {
        D3DXMatrixRotationZ(local_50,*(undefined4 *)(param_1 + 0xdd8));
        D3DXMatrixMultiply(local_9c + 1,local_9c + 0x11,local_9c + 1);
      }
      if (*(float *)(param_1 + 0xdd4) != 0.0) {
        D3DXMatrixRotationY(local_50,*(undefined4 *)(param_1 + 0xdd4));
        D3DXMatrixMultiply(local_9c + 1,local_9c + 0x11,local_9c + 1);
      }
      if (*(float *)(param_1 + 0xdd0) != 0.0) {
        D3DXMatrixRotationX(local_50,*(undefined4 *)(param_1 + 0xdd0));
        D3DXMatrixMultiply(local_9c + 1,local_9c + 0x11,local_9c + 1);
      }
      D3DXMatrixMultiply(local_9c + 3,local_9c + 3,param_1 + 0xb0);
      local_9c[0xc] = *(float *)(param_1 + 0xdc0) + local_9c[0xc];
      local_9c[0xd] = *(float *)(param_1 + 0xdc4) + local_9c[0xd];
      local_9c[0xe] = *(float *)(param_1 + 0xdc8) + local_9c[0xe];
      iVar6 = FUN_00a12210(0);
      pfVar8 = local_9c;
      pfVar9 = (float *)(iVar6 + 0x10);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
      iVar6 = FUN_00a12210(0);
      *(ushort *)(iVar6 + 0xa2) = *(ushort *)(iVar6 + 0xa2) | 4;
      FUN_00a8caf0(0x90,0,0,0);
      return;
    }
  }
  return;
}

// 00B0D870  FUN_00b0d870  size=102  [between]
void __fastcall FUN_00b0d870(int param_1)

{
  float10 fVar1;
  
  switchD_0080dbae::default();
  if ((*(int *)(param_1 + 0x7b0) != 0) && (*(int *)(param_1 + 0xe44) == 0)) {
    FUN_008f3cb0(param_1);
  }
  if (0.0 < *(float *)(param_1 + 0xe38)) {
    fVar1 = (float10)FUN_00a93060();
    fVar1 = (float10)*(float *)(param_1 + 0xe38) - fVar1;
    *(float *)(param_1 + 0xe38) = (float)fVar1;
    if (fVar1 <= (float10)0) {
      *(float *)(param_1 + 0xe38) = (float)(float10)0;
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 00B0D8E0  FUN_00b0d8e0  size=335  [between]
undefined4 __fastcall FUN_00b0d8e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iStack_4;
  
  iStack_4 = param_1;
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  FUN_00a929d0();
  iStack_4 = 0;
  iVar1 = FUN_00a54ae0(&iStack_4,param_1 + 0x494,"_col.hkx");
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = RigidBodyCollision::RigidBodyCollision();
    }
    *(undefined4 *)(param_1 + 0x7b0) = uVar3;
    iVar1 = FUN_008f6410(*(undefined4 *)(param_1 + 0x4f0),iVar1,iStack_4);
    if (iVar1 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1c);
      puVar4 = (undefined4 *)FUN_009f8b60();
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar4);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x20);
      FUN_008f1600(0x4000000);
    }
  }
  *(undefined4 *)(param_1 + 0xe38) = 0;
  *(undefined4 *)(param_1 + 0xe30) = 0;
  *(undefined4 *)(param_1 + 0xe34) = 0;
  *(undefined4 *)(param_1 + 0xe44) = 0;
  FUN_00b04cf0();
  if (*(int *)(param_1 + 0x4a0) == 6) {
    FUN_00a8cb50(0x90);
    return 1;
  }
  if (*(int *)(param_1 + 0x4a0) == 7) {
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
      **(undefined4 **)(param_1 + 0x370) = 1;
    }
    FUN_00a8cb50(0x91);
  }
  return 1;
}

// 00B0DA30  FUN_00b0da30  size=201  [between]
void __fastcall FUN_00b0da30(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x63c) + 8)) {
    do {
      piVar1 = (int *)FUN_00a92f50(iVar2);
      if (*piVar1 == 2) {
        FUN_00a8caf0(0x96,0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 0x63c) + 8));
  }
  FUN_00a9d860();
  FUN_00a8cab0();
  iVar2 = FUN_00a8cab0();
  if (iVar2 == 0x95) {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0xe48) == 0) {
        puVar3 = &DAT_0164796c;
      }
      else {
        puVar3 = &DAT_01647974;
      }
      FUN_00a9e290(puVar3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  else if (iVar2 == 0x96) {
    FUN_00b047c0();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B0DB00  FUN_00b0db00  size=218  [between]
void __fastcall FUN_00b0db00(int param_1)

{
  int *piVar1;
  float10 fVar2;
  undefined4 local_4;
  
  switchD_0080dbae::default();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    if (*(int *)(param_1 + 0xe44) == 0) {
      FUN_008f3cb0(param_1);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x28))(&local_4,0);
      FUN_004066f0();
      FUN_008f33d0(param_1,local_4,"applyTransformFromObject");
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
  }
  if (0.0 < *(float *)(param_1 + 0xe38)) {
    fVar2 = (float10)FUN_00a93060();
    fVar2 = (float10)*(float *)(param_1 + 0xe38) - fVar2;
    *(float *)(param_1 + 0xe38) = (float)fVar2;
    if (fVar2 <= (float10)0) {
      *(float *)(param_1 + 0xe38) = (float)(float10)0;
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 00B0DBE0  FUN_00b0dbe0  size=347  [between]
undefined4 __fastcall FUN_00b0dbe0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iStack_4;
  
  iStack_4 = param_1;
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  FUN_00a929d0();
  iStack_4 = 0;
  iVar1 = FUN_00a54ae0(&iStack_4,param_1 + 0x494,"_col.hkx");
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = RigidBodyCollision::RigidBodyCollision();
    }
    *(undefined4 *)(param_1 + 0x7b0) = uVar3;
    iVar1 = FUN_008f6410(*(undefined4 *)(param_1 + 0x4f0),iVar1,iStack_4);
    if (iVar1 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0xb);
      puVar4 = (undefined4 *)FUN_009f8b60();
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar4);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x20);
      FUN_008f1600(0x4000000);
    }
  }
  *(undefined4 *)(param_1 + 0xe38) = 0;
  *(undefined4 *)(param_1 + 0xe44) = 0;
  *(undefined4 *)(param_1 + 0xe70) = 0;
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  FUN_00b04cf0();
  if (*(int *)(param_1 + 0x4ac) == 9) {
    FUN_00a8caf0(0x9c,0,0,0);
    return 1;
  }
  FUN_00a8caf0(0x98,0,0,0);
  return 1;
}

// 00B0DD40  FUN_00b0dd40  size=74  [between]
void __fastcall FUN_00b0dd40(int param_1)

{
  FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0xe70) = 0;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a92ef0();
  FUN_00a92a00();
  return;
}

// 00B0DD90  FUN_00b0dd90  size=83  [between]
undefined4 __fastcall FUN_00b0dd90(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  FUN_00b04cf0();
  FUN_00a8caf0(0x9f,0,0,0);
  return 1;
}

// 00B0DDF0  FUN_00b0ddf0  size=53  [between]
void __fastcall FUN_00b0ddf0(int param_1)

{
  FUN_00a8c9b0(0,4,0,0);
  FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  return;
}

// 00B0DE30  FUN_00b0de30  size=1101  [between]
void __fastcall FUN_00b0de30(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float unaff_EDI;
  float10 fVar6;
  float *pfVar7;
  float fStack_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined4 uStack_f0;
  int aiStack_e8 [6];
  float local_d0 [4];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00a9e290(&DAT_01645724,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 1:
    piVar4 = (int *)FUN_00a6e640();
    iVar5 = (**(code **)(*piVar4 + 0x24))(0x2714,1,1);
    if (iVar5 != 0) {
      local_10c = 0.0;
      local_108 = 0.0;
      local_104 = 0.0;
      FUN_00405140(param_1[0x13c],1,0,&stack0xfffffee4,&local_10c,0x40a00000,0x3f000000,0xbf800000);
      FUN_00c5abe0(&local_ac);
      param_1[0x20b] = 0;
      *(undefined2 *)(param_1 + 0x209) = 2;
      param_1[0x20a] = 0x78;
      FUN_00a9e290(&DAT_01640618,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x3a7] = 0;
      return;
    }
    break;
  case 2:
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      local_110 = -90.25;
      pfVar7 = &local_110;
      local_10c = 10.4;
      local_108 = -204.0;
      local_100 = param_1[0x14];
      local_fc = param_1[0x15];
      local_f8 = param_1[0x16];
      local_f4 = param_1[0x17];
      D3DXVec3TransformNormal(pfVar7,pfVar7,param_1 + 0x3c);
      fVar1 = (float)param_1[0x49];
      D3DXVec3TransformNormal(&local_10c,&local_10c,param_1 + 0x3c);
      fVar6 = (float10)local_110;
      local_110 = (float)((float10)(float)param_1[0x4a] + fVar6);
      fVar6 = (float10)fpatan((float10)(float)pfVar7 -
                              ((float10)(float)param_1[0x48] + (float10)(fVar1 + fStack_118)),
                              (float10)unaff_EDI - ((float10)(float)param_1[0x4a] + fVar6));
      param_1[0x25] = (int)(float)fVar6;
      FUN_00a9e290(&DAT_01647a5c,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      local_108 = 1.0;
      local_104 = 2.0;
      local_100 = 0x3f800000;
      FUN_00a95ff0(&local_108);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    iVar5 = param_1[0x3a7];
    local_d0[0] = -90.25;
    local_d0[1] = 10.4;
    local_d0[2] = -204.0;
    pfVar7 = &local_110;
    local_c0 = 0xc2b48000;
    local_bc = 0x41266666;
    local_b8 = 0xc3404ccd;
    local_b0 = 0xc2de0000;
    local_ac = 0x41266666;
    local_a8 = 0xc3404ccd;
    local_110 = local_d0[iVar5 * 4];
    local_10c = local_d0[iVar5 * 4 + 1];
    local_108 = local_d0[iVar5 * 4 + 2];
    local_104 = local_d0[iVar5 * 4 + 3];
    local_100 = param_1[0x14];
    local_fc = param_1[0x15];
    local_f8 = param_1[0x16];
    local_f4 = param_1[0x17];
    D3DXVec3TransformNormal(pfVar7,pfVar7,param_1 + 0x3c);
    fVar1 = (float)param_1[0x49];
    D3DXVec3TransformNormal(&local_10c,&local_10c,param_1 + 0x3c);
    fVar6 = (float10)local_110;
    local_110 = (float)((float10)(float)param_1[0x4a] + fVar6);
    fVar6 = (float10)fpatan((float10)(float)pfVar7 -
                            ((float10)(fVar1 + fStack_118) + (float10)(float)param_1[0x48]),
                            (float10)unaff_EDI - ((float10)(float)param_1[0x4a] + fVar6));
    param_1[0x25] = (int)(float)fVar6;
    if ((float)param_1[0x15] <= 10.4) {
      param_1[0x15] = 0x41268f5c;
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      iVar5 = param_1[0x3a7];
      param_1[0x14] = aiStack_e8[iVar5 * 4];
      param_1[0x15] = aiStack_e8[iVar5 * 4 + 1];
      param_1[0x16] = aiStack_e8[iVar5 * 4 + 2];
      param_1[0x17] = aiStack_e8[iVar5 * 4 + 3];
      param_1[0x3a7] = param_1[0x3a7] + 1;
      FUN_00a9e290(&DAT_01647a5c,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      local_f8 = 0x3f800000;
      local_f4 = 0x40000000;
      uStack_f0 = 0x3f800000;
      FUN_00a95ff0(&local_f8);
      if (2 < (uint)param_1[0x3a7]) {
        pcVar2 = *(code **)(*param_1 + 0x20);
        param_1[0x187] = param_1[0x187] + 1;
        (*pcVar2)();
      }
    }
  }
  return;
}

// 00B0E290  FUN_00b0e290  size=43  [between]
void FUN_00b0e290(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0xa0) {
    FUN_00b0de30();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B0E2C0  FUN_00b0e2c0  size=29  [between]
void __fastcall FUN_00b0e2c0(int param_1)

{
  FUN_00a93170();
  FUN_00c5bc40(*(undefined4 *)(param_1 + 0x4f0),1);
  return;
}

// 00B0E2E0  FUN_00b0e2e0  size=76  [between]
void __fastcall FUN_00b0e2e0(int param_1)

{
  FUN_00a8ca80(0,0,0);
  FUN_00c62bb0(*(undefined4 *)(param_1 + 0x4f0),1);
  FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  FUN_00a92a00();
  return;
}

// 00B0E330  FUN_00b0e330  size=63  [between]
uint __fastcall FUN_00b0e330(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4a0) == 5) && ((*(uint *)(param_1 + 0x1124) & 0x80000) == 0)) {
    iVar1 = FUN_00b0b7d0();
    if (iVar1 == 0) {
      return ~(*(uint *)(param_1 + 0x1124) >> 4) & 1;
    }
  }
  return *(uint *)(param_1 + 0xd44) >> 0x19 & 1;
}

// 00B0E370  FUN_00b0e370  size=63  [between]
uint FUN_00b0e370(void)

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
  puVar3 = &DAT_01be9d00;
  (**(code **)(*piVar2 + 4))(&DAT_01be9d00);
  iVar1 = FUN_00dd6d70(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 00B0E3B0  FUN_00b0e3b0  size=310  [between]
void __fastcall FUN_00b0e3b0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar4;
  undefined *puVar5;
  float fVar6;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9d00;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d00);
      iVar1 = FUN_00dd6d70(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(0x5b,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (uVar3 != 0) {
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      fVar6 = *(float *)(uVar3 + 0x94);
      D3DXMatrixRotationY(local_50);
      D3DXVec3TransformNormal(&stack0xffffff98,iVar1 + 0x50,auStack_58);
      *(float *)(param_1 + 0x50) = *(float *)(uVar3 + 0x50) + fVar6;
      *(float *)(param_1 + 0x54) = *(float *)(uVar3 + 0x54) + unaff_EDI;
      *(float *)(param_1 + 0x58) = *(float *)(uVar3 + 0x58) + unaff_ESI;
      *(float *)(param_1 + 0x5c) = *(float *)(uVar3 + 0x5c) + unaff_EBX;
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(uVar3 + 0x94));
      *(float *)(param_1 + 0x94) = (float)fVar4;
    }
  }
  return;
}

// 00B0E4F0  FUN_00b0e4f0  size=310  [between]
void __fastcall FUN_00b0e4f0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar4;
  undefined *puVar5;
  float fVar6;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9d00;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d00);
      iVar1 = FUN_00dd6d70(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x5d,0,0x3f2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (uVar3 != 0) {
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      fVar6 = *(float *)(uVar3 + 0x94);
      D3DXMatrixRotationY(local_50);
      D3DXVec3TransformNormal(&stack0xffffff98,iVar1 + 0x50,auStack_58);
      *(float *)(param_1 + 0x50) = *(float *)(uVar3 + 0x50) + fVar6;
      *(float *)(param_1 + 0x54) = *(float *)(uVar3 + 0x54) + unaff_EDI;
      *(float *)(param_1 + 0x58) = *(float *)(uVar3 + 0x58) + unaff_ESI;
      *(float *)(param_1 + 0x5c) = *(float *)(uVar3 + 0x5c) + unaff_EBX;
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(uVar3 + 0x94));
      *(float *)(param_1 + 0x94) = (float)fVar4;
    }
  }
  return;
}

// 00B0E630  FUN_00b0e630  size=345  [between]
void __fastcall FUN_00b0e630(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  undefined *puVar5;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9d00;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d00);
      iVar1 = FUN_00dd6d70(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x5f,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (uVar3 != 0) {
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      D3DXMatrixRotationY(local_50,*(undefined4 *)(uVar3 + 0x94));
      D3DXVec3TransformNormal(&stack0xffffff98,iVar1 + 0x50,&fStack_58);
      param_1[0x14] = (int)(*(float *)(uVar3 + 0x50) + fStack_60);
      param_1[0x15] = (int)(*(float *)(uVar3 + 0x54) + fStack_5c);
      param_1[0x16] = (int)(*(float *)(uVar3 + 0x58) + fStack_58);
      param_1[0x17] = (int)(*(float *)(uVar3 + 0x5c) + fStack_54);
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(uVar3 + 0x94));
      param_1[0x25] = (int)(float)fVar4;
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B0E790  FUN_00b0e790  size=345  [between]
void __fastcall FUN_00b0e790(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  undefined *puVar5;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9d00;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d00);
      iVar1 = FUN_00dd6d70(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x61,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (uVar3 != 0) {
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      D3DXMatrixRotationY(local_50,*(undefined4 *)(uVar3 + 0x94));
      D3DXVec3TransformNormal(&stack0xffffff98,iVar1 + 0x50,&fStack_58);
      param_1[0x14] = (int)(*(float *)(uVar3 + 0x50) + fStack_60);
      param_1[0x15] = (int)(*(float *)(uVar3 + 0x54) + fStack_5c);
      param_1[0x16] = (int)(*(float *)(uVar3 + 0x58) + fStack_58);
      param_1[0x17] = (int)(*(float *)(uVar3 + 0x5c) + fStack_54);
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(uVar3 + 0x94));
      param_1[0x25] = (int)(float)fVar4;
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B0E8F0  FUN_00b0e8f0  size=338  [between]
void __fastcall FUN_00b0e8f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  undefined *puVar5;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9d00;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d00);
      iVar1 = FUN_00dd6d70(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(99,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (uVar3 != 0) {
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      D3DXMatrixRotationY(local_50,*(undefined4 *)(uVar3 + 0x94));
      D3DXVec3TransformNormal(&stack0xffffff98,iVar1 + 0x50,&fStack_58);
      param_1[0x14] = (int)(*(float *)(uVar3 + 0x50) + fStack_60);
      param_1[0x15] = (int)(*(float *)(uVar3 + 0x54) + fStack_5c);
      param_1[0x16] = (int)(*(float *)(uVar3 + 0x58) + fStack_58);
      param_1[0x17] = (int)(*(float *)(uVar3 + 0x5c) + fStack_54);
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(uVar3 + 0x94));
      param_1[0x25] = (int)(float)fVar4;
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B0EA50  FUN_00b0ea50  size=338  [between]
void __fastcall FUN_00b0ea50(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  undefined *puVar5;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9d00;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d00);
      iVar1 = FUN_00dd6d70(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x67,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (uVar3 != 0) {
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      D3DXMatrixRotationY(local_50,*(undefined4 *)(uVar3 + 0x94));
      D3DXVec3TransformNormal(&stack0xffffff98,iVar1 + 0x50,&fStack_58);
      param_1[0x14] = (int)(*(float *)(uVar3 + 0x50) + fStack_60);
      param_1[0x15] = (int)(*(float *)(uVar3 + 0x54) + fStack_5c);
      param_1[0x16] = (int)(*(float *)(uVar3 + 0x58) + fStack_58);
      param_1[0x17] = (int)(*(float *)(uVar3 + 0x5c) + fStack_54);
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(uVar3 + 0x94));
      param_1[0x25] = (int)(float)fVar4;
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B0EBB0  FUN_00b0ebb0  size=290  [between]
void __fastcall FUN_00b0ebb0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  undefined *puVar5;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9d00;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d00);
      iVar1 = FUN_00dd6d70(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (uVar3 != 0) {
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      D3DXMatrixRotationY(local_50,*(undefined4 *)(uVar3 + 0x94));
      D3DXVec3TransformNormal(&stack0xffffff98,iVar1 + 0x50,&fStack_58);
      param_1[0x14] = (int)(*(float *)(uVar3 + 0x50) + fStack_60);
      param_1[0x15] = (int)(*(float *)(uVar3 + 0x54) + fStack_5c);
      param_1[0x16] = (int)(*(float *)(uVar3 + 0x58) + fStack_58);
      param_1[0x17] = (int)(*(float *)(uVar3 + 0x5c) + fStack_54);
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(uVar3 + 0x94));
      param_1[0x25] = (int)(float)fVar4;
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B0ECE0  Em0040::vf33C  size=1576  [class]
void __thiscall Em0040::vf33C(int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_c;
  
  uVar8 = param_3[4];
  iVar6 = 0;
  local_c = 0;
  if (((uVar8 & 0x4000000) != 0) && ((~(*param_3 >> 0x1a) & 1) != 0)) {
    iVar6 = 1;
    local_c = 1;
  }
  if (((uVar8 & 0x10000000) != 0) && ((~(*param_3 >> 0x1c) & 1) != 0)) {
    iVar6 = iVar6 + 1;
    local_c = iVar6;
  }
  if (((uVar8 & 0x20000000) != 0) && ((~(*param_3 >> 0x1d) & 1) != 0)) {
    iVar6 = iVar6 + 1;
    local_c = iVar6;
  }
  param_2[1] = iVar6;
  uVar8 = 0;
  while( true ) {
    uVar7 = 0x80000000 >> ((byte)uVar8 & 0x1f);
    uVar3 = uVar8 >> 5;
    if ((((param_3[uVar3 + 4] & uVar7) != 0) && ((param_3[uVar3 + 2] & uVar7) != 0)) ||
       (((param_3[uVar3 + 4] & uVar7) != 0 && ((param_3[uVar3] & uVar7) == 0)))) break;
    uVar8 = uVar8 + 1;
    if (5 < (int)uVar8) {
      param_3[6] = param_1[0x12d];
      *param_2 = 0xe;
      param_1[0x543] = param_1[0x543] + 1;
      return;
    }
  }
  bVar2 = false;
  if ((param_1[0x186] == 0x30) || (param_1[0x186] == 0x3e)) {
    bVar2 = true;
    param_2[2] = 1;
  }
  if (param_1[0x186] == 0x5e) {
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    bVar2 = true;
  }
  iVar6 = FUN_00a8c760(0x31);
  if (iVar6 != 0) {
    bVar2 = true;
  }
  if (param_1[0x1d9] == 0) goto LAB_00b0f030;
  iVar6 = FUN_00a8c760(5);
  iVar4 = FUN_00a8c760(6);
  if (((param_1[0x1d9] == 0) || (iVar5 = (**(code **)(*param_1 + 800))(0x3d888889), iVar5 == 0)) ||
     (bVar2)) {
    if (-1 < (int)param_3[4]) {
LAB_00b0f2f2:
      *param_2 = 0xc;
      param_3[6] = param_1[0x12d];
      return;
    }
    if (-1 < (int)param_3[2]) {
      if ((-1 < (int)param_3[4]) || ((~(*param_3 >> 0x1f) & 1) == 0)) goto LAB_00b0f2f2;
      if (param_2[0x33] - param_1[0x543] < 2) {
        *param_2 = 0xb - (uint)bVar2;
        param_3[6] = param_1[0x12d];
        return;
      }
    }
    goto LAB_00b0f030;
  }
  iVar5 = param_2[0x33];
  iVar1 = param_1[0x543];
  if (((1 < iVar5 - iVar1) || (iVar6 != 0)) || (iVar4 != 0)) {
    uVar8 = param_3[4];
    if (((int)uVar8 < 0) &&
       (((int)param_3[2] < 0 || (((int)uVar8 < 0 && ((~(*param_3 >> 0x1f) & 1) != 0)))))) {
      if (param_1[0x570] == 0) goto LAB_00b0f030;
      if ((iVar6 != 0) || (iVar4 != 0)) {
        iVar6 = 0;
        if (((uVar8 & 0x10000000) == 0) || ((param_3[2] >> 0x1c & 1) == 0)) {
          iVar6 = 1;
        }
        if (((uVar8 & 0x20000000) == 0) || ((param_3[2] >> 0x1d & 1) == 0)) {
          iVar6 = iVar6 + 1;
        }
        if (((uVar8 & 0x4000000) == 0) || ((param_3[2] >> 0x1a & 1) == 0)) {
          iVar6 = iVar6 + 1;
        }
        if ((-1 < (int)param_3[2]) && (iVar6 != 0)) {
          *param_2 = 0xd;
          param_3[6] = param_1[0x12d];
          return;
        }
        goto LAB_00b0f030;
      }
    }
    else {
      (**(code **)(*param_1 + 0x344))(10,1,1);
      iVar6 = FUN_00a8cab0();
      if ((iVar6 != 0xa3) && (iVar6 = FUN_00a8cab0(), iVar6 != 0xaa)) {
        if (local_c != 0) {
          *param_2 = 5;
          if ((iVar4 != 0) || ((param_1[0x186] == 0xa5 && (param_1[0x187] < 2)))) {
            param_2[3] = 1;
          }
          param_3[6] = param_1[0x12d];
          if (param_1[0x186] != 0xa6) {
            return;
          }
          *param_2 = 0xc;
          return;
        }
        goto LAB_00b0f030;
      }
    }
  }
  uVar8 = param_3[4];
  if ((int)uVar8 < 0) {
    if ((int)param_3[2] < 0) goto LAB_00b0f030;
    if (((int)uVar8 < 0) && ((~(*param_3 >> 0x1f) & 1) != 0)) {
      iVar6 = 1;
      if (1 < param_2[0x1e]) {
        do {
          if ((((param_2[0x1f] == 0) || (iVar6 < 0)) || (param_2[0x1e] <= iVar6)) ||
             (*(int *)(param_2[0x1f] + iVar6 * 4) != 2)) {
            if ((((uVar8 & 0x8000000) != 0) && ((~(*param_3 >> 0x1b) & 1) != 0)) &&
               ((param_3[2] >> 0x1b & 1) == 0)) {
              if (((uVar8 & 0x10000000) != 0) && ((param_3[2] >> 0x1c & 1) != 0)) {
                *param_2 = 8;
                param_3[6] = param_1[0x12d];
                return;
              }
              iVar6 = FUN_0043f860(2);
              if (iVar6 != 0) {
                *param_2 = 9;
                param_3[6] = param_1[0x12d];
                return;
              }
            }
            if (((uVar8 & 0x4000000) != 0) && ((param_3[2] >> 0x1a & 1) != 0)) {
              *param_2 = 7;
              param_3[6] = param_1[0x12d];
              return;
            }
            *param_2 = 6;
            param_3[6] = param_1[0x12d];
            return;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_2[0x1e]);
      }
      goto LAB_00b0f030;
    }
  }
  bVar2 = false;
  if (((param_2[0x1f] != 0) && ((9 < param_2[0x1e] && (*(int *)(param_2[0x1f] + 0x24) == 2)))) ||
     (iVar6 = FUN_0043f830(5), iVar6 != 0)) {
    bVar2 = true;
  }
  if (((uVar8 & 0x40000000) == 0) || ((~(*param_3 >> 0x1e) & 1) == 0)) {
    if (bVar2) goto LAB_00b0f176;
  }
  else if (bVar2) {
LAB_00b0f176:
    iVar6 = FUN_0043f830(2);
    if ((iVar6 == 0) && (iVar6 = FUN_0043f830(3), iVar6 == 0)) {
      if (iVar5 - iVar1 < 2) {
        *param_2 = 0;
        param_3[6] = param_1[0x12d];
        return;
      }
      *param_2 = 1;
      param_3[6] = param_1[0x12d];
      return;
    }
  }
  else {
    iVar6 = FUN_0043f830(2);
    if ((iVar6 == 0) && (iVar6 = FUN_0043f830(3), iVar6 == 0)) {
      *param_2 = 1;
      param_3[6] = param_1[0x12d];
      return;
    }
  }
  uVar8 = uVar8 >> 0x1d & 1;
  if (((uVar8 != 0) && ((~(*param_3 >> 0x1d) & 1) != 0)) && (iVar6 = FUN_0043f830(3), iVar6 == 0)) {
    *param_2 = 3;
    param_3[6] = param_1[0x12d];
    return;
  }
  if (((uVar8 == 0) || ((~(*param_3 >> 0x1d) & 1) == 0)) && (iVar6 = FUN_0043f830(3), iVar6 != 0)) {
    *param_2 = 2;
    param_3[6] = param_1[0x12d];
    return;
  }
  iVar6 = FUN_0043f830(5);
  if (((iVar6 == 0) && (iVar6 = FUN_0043f830(2), iVar6 != 0)) &&
     (iVar6 = FUN_0043f830(3), iVar6 != 0)) {
    *param_2 = 4;
    param_3[6] = param_1[0x12d];
    return;
  }
LAB_00b0f030:
  param_3[6] = 0x42000;
  return;
}

// 00B0F310  FUN_00b0f310  size=381  [between]
undefined4 FUN_00b0f310(float *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = FUN_00ac8a30();
  if (*(int *)(iVar7 + 0xc4) < 1) {
    return 0;
  }
  fVar3 = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  iVar8 = 0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if (0 < *(int *)(iVar7 + 0xc4)) {
    iVar9 = 0;
    fVar4 = fVar3;
    fVar5 = fVar3;
    do {
      iVar1 = iVar9 + 0x10;
      iVar2 = iVar9 + 0x10 + *(int *)(iVar7 + 0xc0);
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0x70;
      *param_1 = *param_1 + *(float *)(iVar1 + *(int *)(iVar7 + 0xc0));
      fVar5 = *(float *)(iVar2 + 4) + fVar5;
      param_1[1] = fVar5;
      fVar4 = *(float *)(iVar2 + 8) + fVar4;
      param_1[2] = fVar4;
      fVar3 = *(float *)(iVar2 + 0xc) + fVar3;
      param_1[3] = fVar3;
    } while (iVar8 < *(int *)(iVar7 + 0xc4));
  }
  fVar6 = (float)*(int *)(iVar7 + 0xc4);
  fVar3 = *param_1 / fVar6;
  *param_1 = fVar3;
  fVar4 = param_1[1] / fVar6;
  param_1[1] = fVar4;
  fVar5 = param_1[2] / fVar6;
  param_1[2] = fVar5;
  param_1[3] = param_1[3] / fVar6;
  if (((fVar3 == 0.0) && (fVar4 == 0.0)) && (fVar5 == 0.0)) {
    return 0;
  }
  fVar3 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
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

// 00B0F490  FUN_00b0f490  size=403  [between]
void __fastcall FUN_00b0f490(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
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
  undefined1 local_20 [28];
  
  iVar2 = FUN_00b0f310(&local_30);
  if (iVar2 != 0) {
    if (ABS(local_30 * 0.0 + local_2c + local_28 * 0.0) <= 0.86) {
      local_4c = local_2c * 0.0 - local_28;
      local_48 = local_28 * 0.0 - local_30 * 0.0;
      local_44 = local_30 - local_2c * 0.0;
    }
    else {
      pfVar3 = (float *)FUN_00a92640(local_20);
      local_4c = local_2c * pfVar3[2] - local_28 * pfVar3[1];
      local_48 = local_28 * *pfVar3 - local_30 * pfVar3[2];
      local_44 = local_30 * pfVar3[1] - *pfVar3 * local_2c;
    }
    local_3c = local_48;
    local_40 = local_4c;
    local_38 = local_44;
    fVar1 = local_44 * local_44 + local_4c * local_4c + local_48 * local_48;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_38 = 0.0;
      local_40 = 0.0;
      local_3c = 1.0;
    }
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_40 * 0.08;
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + local_3c * 0.08;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + local_38 * 0.08;
    *(float *)(param_1 + 0x5c) = local_34 * 0.08 + *(float *)(param_1 + 0x5c);
  }
  return;
}

// 00B0F630  FUN_00b0f630  size=100  [between]
void __fastcall FUN_00b0f630(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffffbf;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B0F6A0  FUN_00b0f6a0  size=168  [between]
void __fastcall FUN_00b0f6a0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if (param_1[0x187] != 0) {
    if ((*(int *)(param_1[0x434] + 0x4b0) == 0x12040) &&
       (iVar2 = FUN_00a8cab0(), param_1[0x250] == iVar2)) {
      return;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      iVar2 = FUN_00a8cab0();
      if ((iVar2 != 0x11) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x12)) {
        param_1[0x5a4] = 0;
        param_1[0x5a5] = 0;
        param_1[0x5a6] = 0;
        param_1[0x5a7] = 0;
        if (param_1[0x1d9] != 0) {
          FUN_008e0d30(param_1 + 0x5a4);
        }
                    /* WARNING: Could not recover jumptable at 0x00b0f73a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      param_1[0x187] = 0;
    }
  }
  return;
}

// 00B0F750  FUN_00b0f750  size=327  [between]
void __fastcall FUN_00b0f750(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x920) = 0x42100000;
    *(undefined4 *)(param_1 + 0x940) = uVar1;
    FUN_00a9e290(&DAT_01645740,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    if (*(char *)(param_1 + 0xba8) != -1) {
      FUN_00c49970(3,(int)*(char *)(param_1 + 0xba8));
    }
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffffbf;
    *(undefined4 *)(param_1 + 0x1690) = 0;
    *(undefined4 *)(param_1 + 0x1694) = 0;
    *(undefined4 *)(param_1 + 0x1698) = 0;
    *(undefined4 *)(param_1 + 0x169c) = 0;
    FUN_00e5e0c0("em0040_vo_matador",param_1,0xffffffff,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a12210(0);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1690) = *(undefined4 *)(iVar2 + 0x50);
    *(undefined4 *)(param_1 + 0x1694) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(param_1 + 0x1698) = *(undefined4 *)(iVar2 + 0x58);
    *(undefined4 *)(param_1 + 0x169c) = *(undefined4 *)(iVar2 + 0x5c);
    *(undefined4 *)(param_1 + 0x1694) = 0;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e0d30((undefined4 *)(param_1 + 0x1690));
    }
  }
  if (*(int *)(param_1 + 0x10d0) != 0) {
    iVar2 = FUN_00a12210(0);
    if (iVar2 != 0) {
      FUN_00b02610(iVar2 + 0x40,0x3e4ccccd,0x3d567750);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B0F8A0  FUN_00b0f8a0  size=98  [between]
void __fastcall FUN_00b0f8a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b34b40;
    (**(code **)(*piVar2 + 4))(&DAT_01b34b40);
    iVar1 = FUN_00dd6d70(puVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_00408e60(*(undefined4 *)(param_1 + 0x4f0));
      *(int *)(param_1 + 0xff8) = iVar1;
      if (iVar1 != -1) {
        *(undefined4 *)(param_1 + 0xffc) = (&DAT_0163bb84)[iVar1];
      }
    }
  }
  return;
}

// 00B0F910  FUN_00b0f910  size=123  [between]
void __fastcall FUN_00b0f910(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x4a0) == 0x11) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01b34b40;
      (**(code **)(*piVar2 + 4))(&DAT_01b34b40);
      iVar1 = FUN_00dd6d70(puVar3);
      if ((iVar1 != 0) && (*(int *)(param_1 + 0xff8) != -1)) {
        FUN_00408ec0(*(int *)(param_1 + 0xff8),0);
      }
    }
    (**(code **)(*(int *)(param_1 + 0x1000) + 8))(0x3f800000,0,0);
  }
  return;
}

// 00B0F990  FUN_00b0f990  size=11  [between]
void FUN_00b0f990(void)

{
  FUN_00a805f0();
  return;
}

// 00B0F9D0  FUN_00b0f9d0  size=60  [between]
void __fastcall FUN_00b0f9d0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x20;
    FUN_00aa9280(5);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B0FA30  FUN_00b0fa30  size=70  [between]
void __fastcall FUN_00b0fa30(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffffdf;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x40000;
    FUN_00aa9280(5);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B0FA80  FUN_00b0fa80  size=425  [between]
void __fastcall FUN_00b0fa80(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = FUN_00a81330();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    if (iVar2 == 0) {
      param_1[0x44e] = 2;
      param_1[0x128] = 3;
      FUN_009f8b10();
      param_1[0x449] = param_1[0x449] & 0xfffbffdf;
      FUN_00a7c950();
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x1bb] = 1;
    }
    param_1[0x14] = *(int *)(iVar2 + 0x50);
    param_1[0x15] = *(int *)(iVar2 + 0x54);
    param_1[0x16] = *(int *)(iVar2 + 0x58);
    param_1[0x17] = *(int *)(iVar2 + 0x5c);
    FUN_00aa4520(0xa2,iVar1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar3 = (float10)-1.0;
    }
    else {
      fVar3 = (float10)FUN_00e36970(0);
    }
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 != 0) {
      Animation::Motion::Unit::setCurrentTime(0,(float)fVar3);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x44e] = 2;
    param_1[0x128] = 3;
    FUN_009f8b10();
    param_1[0x449] = param_1[0x449] & 0xfffbffdf;
    FUN_00a7c950();
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x1bb] = 1;
  }
  return;
}

// 00B0FC30  Em0040::vf30  size=209  [class]
void __fastcall Em0040::vf30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  BehaviorEmBase::vf30();
  FUN_00b0f910();
  FUN_00c1a1c0(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xb9c));
  iVar2 = *(int *)(param_1 + 0x4a0);
  if ((iVar2 == 6) || (iVar2 == 7)) {
    iVar2 = FUN_00a12210(0);
    *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) & 0xfffb;
  }
  else if (iVar2 == 10) {
    FUN_00c4d1a0(*(undefined4 *)(param_1 + 0x4f0),0);
    if (*(int *)(param_1 + 0xe70) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xe70) + 0x34) = 0;
      FUN_00c27e80(*(undefined4 *)(param_1 + 0x4f0));
      return;
    }
  }
  else if (*(int *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x34) = 1;
    puVar1 = (undefined4 *)FUN_009f8b60();
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x38) = *puVar1;
    FUN_00c27e80(*(undefined4 *)(param_1 + 0x4f0));
    return;
  }
  FUN_00c27e80(*(undefined4 *)(param_1 + 0x4f0));
  return;
}

// 00B0FD10  Em0040::vf44  size=310  [class]
void __fastcall Em0040::vf44(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 6:
  case 7:
    FUN_00b04690();
    break;
  case 8:
    FUN_00b04870();
    break;
  case 9:
    FUN_00b046f0();
    break;
  case 10:
    FUN_00b0dd40();
    break;
  case 0xb:
    FUN_00b0ddf0();
    break;
  case 0xd:
    FUN_00b0e2e0();
  }
  if (*(int *)(param_1 + 0x1114) != 0) {
    FUN_00d8a1d0(0x16,*(int *)(param_1 + 0x1114));
  }
  iVar1 = FUN_00ac46e0();
  if (iVar1 == 0) {
    FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  }
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  RayCastManager::getWork(param_1 + 0x1128);
  RayCastManager::getWork(param_1 + 0x1130);
  RayCastManager::getWork(param_1 + 0x112c);
  RayCastManager::getWork(param_1 + 0x1134);
  FUN_00a9d8a0();
  FUN_00a92a00();
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x1000) + 4))();
  BehaviorEmBase::vf44();
  return;
}

// 00B0FE70  FUN_00b0fe70  size=171  [between]
undefined4 __thiscall FUN_00b0fe70(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  if (param_2 == 0) {
    return 1;
  }
  if (0 < *(int *)(param_2 + 0x14)) {
    FUN_0112bcf0();
    iVar5 = 0;
    if (0 < *(int *)(param_2 + 0x14)) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0x28 + iVar4);
        iVar1 = *(char *)(iVar1 + 0x10) + iVar1;
        if (iVar1 != 0) {
          piVar2 = (int *)FUN_008f7780(iVar1);
          if (piVar2 != (int *)0x0) {
            puVar6 = &DAT_01be9c20;
            (**(code **)(*piVar2 + 4))(&DAT_01be9c20);
            iVar1 = FUN_00dd6d80(puVar6);
            if ((iVar1 != 0) && (*(int *)(param_1 + 0x10d0) != 0)) {
              iVar1 = FUN_009f8b40();
              iVar3 = FUN_009f8b40();
              if (iVar3 == iVar1) {
                return 0;
              }
            }
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x30;
      } while (iVar5 < *(int *)(param_2 + 0x14));
    }
  }
  return 1;
}

// 00B0FF20  FUN_00b0ff20  size=222  [between]
void __fastcall FUN_00b0ff20(int *param_1)

{
  code *pcVar1;
  
  switch(param_1[0x186]) {
  case 0:
  case 0x5b:
  case 0x79:
  case 0x7e:
  case 0x81:
    break;
  default:
    if (param_1[0x186] != 0x59) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  param_1[0x139] = 1;
  param_1[0x449] = param_1[0x449] | 0x20000000;
  (**(code **)(*param_1 + 0x110))(1);
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if ((param_1[0x449] & 0x4000000U) != 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    if ((*(byte *)(param_1 + 0x2c0) & 8) != 0) {
      FUN_00a8c9b0(0,0x12,0x3f800000,0);
    }
    param_1[0x449] = param_1[0x449] & 0xfbffffff;
  }
  pcVar1 = *(code **)(*param_1 + 0x358);
  param_1[0x56f] = 0x42c99999;
  (*pcVar1)(0x208,param_1 + 0x574);
  return;
}

// 00B10090  FUN_00b10090  size=159  [between]
void __fastcall FUN_00b10090(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(*param_1 + 0x110))(0);
  if ((param_1[0x449] & 0x4000000U) != 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    if ((*(byte *)(param_1 + 0x2c0) & 8) != 0) {
      FUN_00a8c9b0(0,0x12,0x3f800000,0);
    }
    param_1[0x449] = param_1[0x449] & 0xfbffffff;
  }
  (**(code **)(*param_1 + 0x20))();
  E3_EnemyBoardDebrisSokushi::vf4C();
  param_1[0x139] = 1;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b1012c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x20))();
      return;
    }
  }
  return;
}

// 00B10130  FUN_00b10130  size=160  [between]
void __fastcall FUN_00b10130(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     ((param_1[0x449] & 0x20000000U) == 0)) {
    if ((float)param_1[0x435] < *(float *)(&DAT_018a7aa8 + param_1[0x44e] * 0x14)) {
      iVar2 = FUN_00b0e330();
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b1018f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    iVar2 = FUN_00ac4670(param_1 + 0x10,1);
    if ((iVar2 != 0) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)((float)param_1[0x244] + fVar1),
       30.0 <= (float)param_1[0x244] + fVar1)) {
                    /* WARNING: Could not recover jumptable at 0x00b101cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B101D0  FUN_00b101d0  size=53  [between]
void __fastcall FUN_00b101d0(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     (((param_1[0x449] & 0x20000000U) == 0 && (param_1[0x187] == 2)))) {
                    /* WARNING: Could not recover jumptable at 0x00b10202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B10210  FUN_00b10210  size=112  [between]
void __fastcall FUN_00b10210(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x620) = 0;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00b07a80(param_1 + 0x620,0x3e800000,0);
    if (iVar1 != 0) {
      FUN_00aa9280(5);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
  }
  else if (iVar1 == 2) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00B10280  FUN_00b10280  size=468  [between]
void __fastcall FUN_00b10280(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [92];
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     ((param_1[0x449] & 0x20000000U) == 0)) {
    fVar1 = (float)param_1[0x435];
    if (*(float *)(&DAT_018a7aa8 + param_1[0x44e] * 0x14) * 0.7225 < fVar1 ==
        (*(float *)(&DAT_018a7aa8 + param_1[0x44e] * 0x14) * 0.7225 == fVar1)) {
      bVar2 = false;
      if (fVar1 < *(float *)(&DAT_018a7ab4 + param_1[0x44e] * 0x14) ==
          (fVar1 == *(float *)(&DAT_018a7ab4 + param_1[0x44e] * 0x14))) {
        iVar3 = FUN_00ac4640(1);
        if (iVar3 == 0) {
LAB_00b10341:
          if (param_1[0x44a] != 0) {
            iVar3 = FUN_00907560(param_1 + 0x44a,0,0,0,0,0,0,0);
            if (iVar3 != 0) {
              (**(code **)(*param_1 + 0x34c))();
              param_1[0x449] = param_1[0x449] | 8;
              return;
            }
          }
          iVar3 = FUN_00b03150();
          if (iVar3 != 0) {
            (**(code **)(*param_1 + 0x34c))();
            param_1[0x449] = param_1[0x449] | 8;
            return;
          }
          local_90 = (float)param_1[0x10];
          local_88 = (float)param_1[0x12];
          local_84 = (float)param_1[0x13];
          local_8c = (float)param_1[0x11] + 0.5;
          pfVar4 = (float *)FUN_00a925a0(local_70);
          local_80 = *pfVar4 + local_90;
          local_7c = pfVar4[1] + local_8c;
          local_78 = pfVar4[2] + local_88;
          local_74 = pfVar4[3] + local_84;
          FUN_00468970(param_1 + 0x44a,0,&local_90,&local_80,7,0,0,0,"em0040",0,0);
          HavokRayCastManager::set(local_60);
          return;
        }
        iVar3 = FUN_00ac4670(param_1 + 0x10,1);
        if (iVar3 != 0) goto LAB_00b10341;
      }
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      param_1[0x449] = param_1[0x449] | 8;
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    param_1[0x449] = param_1[0x449] & 0xfffffff7;
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B10460  FUN_00b10460  size=81  [between]
void __fastcall FUN_00b10460(int *param_1)

{
  float fVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     (((param_1[0x449] & 0x20000000U) == 0 &&
      (fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668,
      param_1[0x248] = (int)fVar1, fVar1 <= 0.0)))) {
                    /* WARNING: Could not recover jumptable at 0x00b104ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B104C0  FUN_00b104c0  size=537  [between]
void __fastcall FUN_00b104c0(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    fVar3 = (float10)FUN_00dde300(0x40000000,0x40800000);
    *(float *)(param_1 + 0x920) = (float)fVar3;
    return;
  }
  if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x10d0) == 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  if (*(int *)(param_1 + 0x620) != 0) {
    if (*(int *)(param_1 + 0x620) == 1) {
      if (((*(int *)(param_1 + 0xa84) != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) &&
         (fVar1 = *(float *)(param_1 + 0x10d4), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        FUN_00b069d0(param_1 + 0x10e0,0x3da3d70a);
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x620) = 0;
      }
    }
    goto LAB_00b10669;
  }
  fVar3 = (float10)FUN_00a8ec30(param_1 + 0x10e0);
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
  if (ABS(fVar3) < (float10)0.61086524) goto LAB_00b10669;
  iVar2 = FUN_00b033c0(param_1 + 0x10e0);
  if (iVar2 == 8) {
    uVar4 = 10;
LAB_00b10657:
    FUN_00aa4120(uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  else {
    if (iVar2 == 9) {
      uVar4 = 9;
      goto LAB_00b10657;
    }
    if (iVar2 == 0xc) {
      uVar4 = 0xd;
      goto LAB_00b10657;
    }
  }
  *(undefined4 *)(param_1 + 0x620) = 1;
LAB_00b10669:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B106E0  FUN_00b106e0  size=362  [between]
void __fastcall FUN_00b106e0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar4 = FUN_00c19c30(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2));
    if ((((iVar4 == 0) || (iVar5 = FUN_00a7c8a0(), iVar5 == 0)) ||
        (iVar4 == *(int *)(param_1 + 0x4f0))) ||
       (iVar4 = FUN_00a7c8a0(),
       0.0 < (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x10e8)) *
             (*(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x10e0)) -
             (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x10e0)) *
             (*(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x10e8)))) {
      uVar3 = 0x3f860a92;
    }
    else {
      uVar3 = 0xbf860a92;
    }
    *(undefined4 *)(param_1 + 0x920) = uVar3;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(param_1 + 0x10d4);
    if (*(int *)(param_1 + 0x4a0) == 5) {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x40;
    }
    RayCastManager::getWork(param_1 + 0x1128);
    return;
  }
  if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a8e880(*(int *)(param_1 + 0x10d0) + 0x40);
  iVar4 = FUN_00a8e9b0();
  fVar2 = *(float *)(iVar4 + 4) + *(float *)(param_1 + 0x920);
  *(float *)(param_1 + 0x92c) = fVar2;
  fVar1 = *(float *)(param_1 + 0x94);
  fVar6 = (float10)FUN_00ddba30(fVar2 - fVar1);
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.1 + (float10)fVar1));
  *(float *)(param_1 + 0x94) = (float)fVar6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B10850  FUN_00b10850  size=64  [between]
void __fastcall FUN_00b10850(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     ((param_1[0x449] & 0x20000000U) == 0)) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b1088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B10890  FUN_00b10890  size=64  [between]
void __fastcall FUN_00b10890(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     ((param_1[0x449] & 0x20000000U) == 0)) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b108cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B108D0  FUN_00b108d0  size=64  [between]
void __fastcall FUN_00b108d0(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     ((param_1[0x449] & 0x20000000U) == 0)) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b1090c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B10910  FUN_00b10910  size=403  [between]
void __fastcall FUN_00b10910(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00aa4080(0x4a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x449] = param_1[0x449] | 0x20;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 == 1) {
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x449] = param_1[0x449] & 0xffffffdf;
      FUN_00c4d1a0(param_1[0x13c],1);
      (**(code **)(*param_1 + 200))(1);
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
          return;
        }
      }
    }
  }
  else if (iVar1 == 2) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00B10AB0  FUN_00b10ab0  size=599  [between]
void __fastcall FUN_00b10ab0(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x53,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b03020(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    goto LAB_00b10b10;
  case 1:
LAB_00b10b10:
    iVar1 = FUN_00a8c760(10);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 200))(1);
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      param_1[0x225] = -0x43dc28f6;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar1 != 0) {
        FUN_00aa4080(0x55,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x187] = 3;
        param_1[0x248] = param_1[0x11];
        return;
      }
      FUN_00aa4080(0x54,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 2;
      param_1[0x225] = (int)((float)param_1[0x11] - (float)param_1[0x248]);
    }
    param_1[0x248] = param_1[0x11];
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      FUN_00aa4080(0x55,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 3;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00c4d1a0(param_1[0x13c],1);
                    /* WARNING: Could not recover jumptable at 0x00b10d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B10D20  FUN_00b10d20  size=102  [between]
void __fastcall FUN_00b10d20(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     (((param_1[0x449] & 0x20000000U) == 0 &&
      (((float)param_1[0x12] - (float)param_1[0x2e5]) *
       ((float)param_1[0x12] - (float)param_1[0x2e5]) +
       ((float)param_1[0x11] - (float)param_1[0x2e4]) *
       ((float)param_1[0x11] - (float)param_1[0x2e4]) +
       ((float)param_1[0x10] - (float)param_1[0x2e3]) *
       ((float)param_1[0x10] - (float)param_1[0x2e3]) < 2.25)))) {
                    /* WARNING: Could not recover jumptable at 0x00b10d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B10D90  FUN_00b10d90  size=415  [between]
/* WARNING: Removing unreachable block (ram,0x00b10dd6) */
/* WARNING: Removing unreachable block (ram,0x00b10e03) */

void __fastcall FUN_00b10d90(int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00aa9280(8);
    param_1[600] = param_1[0x2e3];
    param_1[0x259] = param_1[0x2e4];
    param_1[0x25a] = param_1[0x2e5];
    param_1[0x25b] = 0x3f800000;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    uVar2 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
    DAT_01dd0814 = uVar2 * 0x19660d + 0x3c6ef35f;
    iVar3 = FUN_00b07a80(param_1 + 0x188,
                         (1.0 - (float)(uVar2 >> 8) * 5.960465e-08 * 2.0) * 0.03 + 0.15,
                         (1.0 - (float)(DAT_01dd0814 >> 8) * 5.960465e-08 * 2.0) * 0.01 + 0.085);
    if (iVar3 == 0) {
      return;
    }
    FUN_008e5c50(param_1[0x250]);
                    /* WARNING: Could not recover jumptable at 0x00b10e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00b02610(param_1 + 600,0x3df5c28f,0x3c8efa35);
  fVar1 = (float)param_1[600] - (float)param_1[0x10];
  fVar1 = ((float)param_1[0x25a] - (float)param_1[0x12]) *
          ((float)param_1[0x25a] - (float)param_1[0x12]) + fVar1 * fVar1;
  if (fVar1 < 2.25 != (fVar1 == 2.25)) {
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = *(int *)(param_1[0x1d9] + 0x110);
    FUN_008e5c50(0x1e);
  }
  return;
}

// 00B10F60  FUN_00b10f60  size=181  [between]
void __thiscall FUN_00b10f60(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffffbf;
  iVar1 = FUN_00a8cab0();
  *(int *)(param_1 + 0x10b0) = iVar1;
  if (iVar1 == 0x58) {
    FUN_008e5c50(7);
  }
  FUN_00a8caf0(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x10b4) = 0xffffffff;
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xf7effd7f;
  if (*(int *)(param_1 + 0x12a8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x1210) + 8))(0,0,0);
  }
  if (*(int *)(param_1 + 0x16a8) != 0) {
    FUN_00a8c9b0(0,0x22,0x3f800000,0);
    *(undefined4 *)(param_1 + 0x16a8) = 0;
    return;
  }
  return;
}

// 00B11020  FUN_00b11020  size=104  [between]
void __thiscall FUN_00b11020(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x16b8) = 0xffffffff;
  FUN_00aa9280(param_3);
  if ((*(byte *)(param_1 + 0x1124) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x1318) = *(undefined4 *)(param_1 + 0x1314);
    *(undefined4 *)(param_1 + 0x1314) = 2;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    return;
  }
  *(undefined4 *)(param_1 + 0x1318) = *(undefined4 *)(param_1 + 0x1314);
  *(undefined4 *)(param_1 + 0x1314) = 1;
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
  return;
}

// 00B11090  FUN_00b11090  size=266  [between]
void __thiscall FUN_00b11090(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  if ((param_1[0x449] & 0x100U) == 0) {
    fVar1 = (float)param_1[0x25];
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x4c4] - fVar1);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)0.1 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar4;
    iVar3 = (**(code **)(*param_1 + 0x84))();
    param_1[0x4b7] = (int)(*(float *)(iVar3 + 4) - (float)param_1[0x4b6]);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (param_1[0x4c6] != 1) {
        param_3 = 7;
      }
      FUN_00aa3f60(param_3);
      iVar3 = param_1[0x4c6];
      param_1[0x4c6] = param_1[0x4c5];
      param_1[0x4c5] = iVar3;
      param_1[0x449] = param_1[0x449] | 0x100;
    }
    return;
  }
  fVar4 = (float10)FUN_00ddba30((float)param_1[0x4c4] - (float)param_1[0x25]);
  if ((float10)-0.2617994 <= ABS(fVar4)) {
    uVar2 = 10;
    if (ABS(fVar4) <= (float10)0) {
      uVar2 = 9;
    }
    FUN_00aa3f60(uVar2);
    return;
  }
  FUN_00aa3f60(9);
  return;
}

// 00B111A0  FUN_00b111a0  size=334  [between]
void __fastcall FUN_00b111a0(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if ((param_1[0x449] & 0x100U) != 0) {
    if ((param_1[0x449] & 1U) != 0) {
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      param_1[0x449] = param_1[0x449] & 0xfffffffe;
      param_1[0x4b8] = 0;
    }
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    return;
  }
  if (1.0 <= (float)param_1[0x4b8]) {
    iVar3 = FUN_00a94db0(0x1c);
    if (iVar3 != 0) {
      param_1[0x4c6] = param_1[0x4c5];
      param_1[0x4c5] = 0;
      param_1[0x449] = param_1[0x449] | 0x100;
    }
  }
  else {
    FUN_00b08ee0();
  }
  pbVar2 = (byte *)FUN_00a95df0(0);
  if (pbVar2 != (byte *)0x0) {
    pbVar4 = &DAT_01646d88;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00b11295:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00b1129a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00b11295;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00b1129a:
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar3 != 0) {
        FUN_00aa4080(0x1c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
    }
  }
  return;
}

// 00B112F0  FUN_00b112f0  size=564  [between]
undefined4 __fastcall FUN_00b112f0(int param_1)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x16b8) < 0) {
    return 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1314);
  *(int *)(param_1 + 0x1314) = *(int *)(param_1 + 0x16b8);
  *(undefined4 *)(param_1 + 0x1318) = uVar1;
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
  switch(*(undefined4 *)(param_1 + 0x16b8)) {
  case 3:
    FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1318) = *(undefined4 *)(param_1 + 0x1314);
    *(undefined4 *)(param_1 + 0x1314) = 3;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    FUN_00b090c0(1);
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 2;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x12f0) = 0;
    *(undefined4 *)(param_1 + 0x12f4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x12f8) = 0;
    *(undefined4 *)(param_1 + 0x12fc) = local_14;
    FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1318) = *(undefined4 *)(param_1 + 0x1314);
    *(undefined4 *)(param_1 + 0x1314) = 4;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    break;
  case 5:
    FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1318) = *(undefined4 *)(param_1 + 0x1314);
    *(undefined4 *)(param_1 + 0x1314) = 5;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xfffffffd;
    FUN_00b090c0(1);
    break;
  case 6:
    FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1318) = *(undefined4 *)(param_1 + 0x1314);
    *(undefined4 *)(param_1 + 0x1314) = 6;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e0ae0(0);
    }
    *(undefined4 *)(param_1 + 0x12f0) = 0;
    *(undefined4 *)(param_1 + 0x12f4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x12f8) = 0;
    *(undefined4 *)(param_1 + 0x12fc) = local_14;
  default:
    goto switchD_00b1133e_default;
  }
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e0ae0(0);
  }
switchD_00b1133e_default:
  *(undefined4 *)(param_1 + 0x16b8) = 0xffffffff;
  return 1;
}

// 00B11540  FUN_00b11540  size=394  [between]
void __fastcall FUN_00b11540(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
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
  local_48 = *(undefined4 *)(param_1 + 0xb9c);
  local_44 = (int)*(short *)(param_1 + 0xab2);
  local_54 = 0x3f4ccccd;
  local_38 = *(undefined4 *)(param_1 + 0x4b0);
  local_50 = 0x3f800000;
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_58 = *(undefined4 *)(param_1 + 0x48);
  local_40 = 0xfffffffe;
  local_5c = *(float *)(param_1 + 0x44) - 1.0;
  local_3c = 0;
  local_2c = 0;
  local_4 = 0xffffffff;
  local_4c = 0xffffffff;
  local_34 = 0x1010000;
  local_30 = 3;
  FUN_00c15bb0(&local_60,0x41000000,0x40400000);
  FUN_00c5e350(param_1,&local_54,&local_30);
  if (*(int *)(param_1 + 0x4a0) == 5) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01b34e80;
      (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
      iVar1 = FUN_00dd6d70(puVar3);
      if ((iVar1 != 0) && (piVar2[0x42e] == 2)) {
        return;
      }
    }
    if ((*(uint *)(param_1 + 0x1124) & 0x80000) != 0) {
      local_38 = *(undefined4 *)(param_1 + 0x4b0);
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
      local_4c = 1;
      local_34 = 0x1010000;
      local_30 = 0x11;
      FUN_00c5e350(param_1,&local_54,&local_30);
    }
  }
  return;
}

// 00B116D0  FUN_00b116d0  size=179  [between]
void __thiscall FUN_00b116d0(int *param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  fVar1 = (float)param_1[0x4b6];
  FUN_00b088a0(param_1 + 0x2c,param_1 + 0x4bc,param_2);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
  uStack_20 = *puVar2;
  fStack_1c = (float)puVar2[1];
  uStack_18 = puVar2[2];
  uStack_14 = puVar2[3];
  fVar3 = (float10)FUN_00ddba30((fVar1 - (float)param_1[0x4b6]) + (float)param_1[0x4b7]);
  param_1[0x4b7] = (int)(float)fVar3;
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 + (float10)fStack_1c));
  fStack_1c = (float)fVar3;
  (**(code **)(*param_1 + 0x88))(&uStack_20);
  D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
  return;
}

// 00B11790  FUN_00b11790  size=567  [between]
void __fastcall FUN_00b11790(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [92];
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x12cc) = 0;
    iVar1 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),0x40060a92
                         ,*(undefined4 *)(param_1 + 0x12c4),0);
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      local_a0 = *(float *)(param_1 + 0x40);
      local_98 = *(float *)(param_1 + 0x48);
      local_94 = *(float *)(param_1 + 0x4c);
      local_9c = *(float *)(param_1 + 0x44) + 0.5;
      iVar1 = FUN_00a7c8a0();
      local_90 = *(float *)(iVar1 + 0x40);
      local_88 = *(float *)(iVar1 + 0x48);
      local_84 = *(float *)(iVar1 + 0x4c);
      local_8c = *(float *)(iVar1 + 0x44) + 0.25;
      iVar1 = FUN_009f8b40();
      local_70 = local_90 - local_a0;
      local_6c = local_8c - local_9c;
      local_68 = local_88 - local_98;
      local_64 = local_84 - local_94;
      FUN_004688f0(param_1 + 0x1134,0,&local_a0,&local_70,0x3e4ccccd,iVar1 << 0x10 | 7,0,0x10,0,
                   "em0040_mgzn");
      FUN_0090fb00(local_60);
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      *(undefined4 *)(param_1 + 0x12d0) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x12cc) != 0) {
      RayCastManager::getWork(param_1 + 0x1134);
      return;
    }
    if (*(int *)(param_1 + 0x1134) != 0) {
      iVar1 = FUN_00907640(param_1 + 0x1134,&local_74,0);
      if (((iVar1 != 0) && (local_74 != 0)) && (0 < *(int *)(local_74 + 0x14))) {
        iVar1 = FUN_00445ca0(*(undefined4 *)(*(int *)(local_74 + 0x10) + 0x28));
        if (iVar1 != 0) {
          uVar2 = FUN_009184c0(iVar1);
          iVar1 = FUN_00a7c8a0();
          if ((iVar1 != 0) && (uVar3 = FUN_009f8b40(), uVar2 >> 0x10 == uVar3)) {
            *(undefined4 *)(param_1 + 0x12cc) = 1;
            return;
          }
        }
        FUN_00a7c950();
        return;
      }
      *(undefined4 *)(param_1 + 0x12cc) = 1;
      FUN_00b08730();
      return;
    }
  }
  return;
}

// 00B11A70  FUN_00b11a70  size=58  [between]
undefined4 __fastcall FUN_00b11a70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x12cc) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00b10f60(0x1a);
        return 1;
      }
    }
  }
  return 0;
}

// 00B11AB0  Em0040::vf150  size=338  [class]
void __thiscall Em0040::vf150(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_2) {
  case 0x2a:
    if (param_3 != 0) {
      param_1[0x532] = 0;
    }
    break;
  case 0x2b:
    if (param_3 != 0) {
      uVar1 = FUN_00a7c7f0();
      FUN_00a7c960(uVar1);
    }
    param_1[0x449] = param_1[0x449] | 0x20000;
    FUN_00b10f60(0x27);
    return;
  case 0x2c:
    if (param_3 != 0) {
      uVar1 = FUN_00a7c7f0();
      FUN_00a7c960(uVar1);
    }
    param_1[0x449] = param_1[0x449] | 0x20000;
    FUN_00b10f60(0x22);
    return;
  case 0x53:
  case 0x54:
  case 0x55:
    param_1[0x449] = param_1[0x449] | 0x20000;
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    if (param_2 != 0) {
      uVar1 = FUN_00a7c7f0();
      FUN_00a7c960(uVar1);
    }
    param_1[0x449] = param_1[0x449] | 0x4000;
    param_1[0x50f] = param_2;
    return;
  case 0x56:
    if (param_3 != 0) {
      uVar1 = FUN_00a7c8a0();
      iVar2 = FUN_004b7e20(uVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_004b55e0();
        param_1[0x530] = iVar2;
        if (-1 < iVar2) {
          param_1[0x449] = param_1[0x449] | 0x20000;
          (**(code **)(*param_1 + 0x220))(0x40a00000);
          FUN_00b040a0(param_3);
          param_1[0x50f] = 0x56;
          param_1[0x449] = param_1[0x449] | 0x4000;
          return;
        }
      }
    }
  }
  return;
}

// 00B11C50  FUN_00b11c50  size=96  [between]
undefined4 FUN_00b11c50(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    uVar3 = *(uint *)(*param_1 + 0xc);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0x30);
    }
    uVar1 = FUN_0091a9d0();
    if (((uVar3 & 0x100000) != 0) || (param_2 != 0)) {
      iVar2 = FUN_0091a9e0();
      if ((iVar2 != 0) && ((uVar1 & 0x1f) != 0x14)) {
        return 1;
      }
    }
  }
  return 0;
}

// 00B11CB0  FUN_00b11cb0  size=496  [between]
undefined4 __thiscall
FUN_00b11cb0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,int param_6
            )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  int local_54;
  int local_50;
  int local_48;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  if (0 < *(int *)(param_2 + 0x14)) {
    FUN_0112bcf0();
    local_48 = 0;
    if (0 < *(int *)(param_2 + 0x14)) {
      local_50 = 0;
      do {
        puVar8 = (undefined4 *)(local_50 + *(int *)(param_2 + 0x10));
        iVar9 = puVar8[10];
        if (*(char *)(iVar9 + 0x18) == '\x01') {
          iVar9 = *(char *)(iVar9 + 0x10) + iVar9;
        }
        else {
          iVar9 = 0;
        }
        FUN_00910a40(iVar9);
        if ((iVar9 != 0) && (local_54 != 0)) {
          uVar7 = *(uint *)(local_54 + 0xc);
          if (uVar7 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(uint *)((-(uint)(uVar7 != 0) & uVar7) + 0x30);
          }
          uVar5 = FUN_0091a9d0();
          if (((((uVar7 & 0x100000) != 0) || (param_6 != 0)) && (iVar9 = FUN_0091a9e0(), iVar9 != 0)
              ) && ((uVar5 & 0x1f) != 0x14)) {
            fVar1 = (float)puVar8[4];
            fVar2 = (float)puVar8[5];
            fVar3 = (float)puVar8[6];
            if ((*(byte *)(param_1 + 0x1124) & 1) == 0) {
              fVar10 = (float10)fcos((float10)0.7853981852531433);
              pfVar6 = (float *)FUN_00a926e0(local_30);
              fVar4 = pfVar6[2] * fVar3 + *pfVar6 * fVar1 + pfVar6[1] * fVar2;
              if ((fVar4 <= (float)fVar10) && (-(float)fVar10 <= fVar4)) {
LAB_00b11e04:
                pfVar6 = (float *)FUN_00a925a0(local_20);
                fVar1 = pfVar6[2] * fVar3 + fVar1 * *pfVar6 + pfVar6[1] * fVar2;
                if (param_5 == 0) {
                  if (0.0 <= fVar1) goto LAB_00b11e3b;
                }
                else if (fVar1 <= 0.0) {
LAB_00b11e3b:
                  *param_3 = *puVar8;
                  param_3[1] = puVar8[1];
                  param_3[2] = puVar8[2];
                  *param_4 = puVar8[4];
                  param_4[1] = puVar8[5];
                  param_4[2] = puVar8[6];
                  return 1;
                }
              }
            }
            else {
              fVar10 = (float10)fcos((float10)0.7853981852531433);
              if (fVar10 <= (float10)fVar1 * (float10)0 + (float10)fVar2 +
                            (float10)fVar3 * (float10)0) goto LAB_00b11e04;
            }
          }
        }
        local_50 = local_50 + 0x30;
        local_48 = local_48 + 1;
      } while (local_48 < *(int *)(param_2 + 0x14));
    }
  }
  return 0;
}

// 00B11EA0  FUN_00b11ea0  size=345  [between]
void __fastcall FUN_00b11ea0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    *(undefined4 *)(param_1 + 0x940) = uVar2;
    FUN_00a9e290(&DAT_01645740,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1690) = 0;
    *(undefined4 *)(param_1 + 0x1694) = 0;
    *(undefined4 *)(param_1 + 0x1698) = 0;
    *(undefined4 *)(param_1 + 0x169c) = 0;
    FUN_00e5e0c0("em0040_vo_matador",param_1,0xffffffff,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a12210(0);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x1690) = *(undefined4 *)(iVar3 + 0x50);
    *(undefined4 *)(param_1 + 0x1694) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x1698) = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x169c) = *(undefined4 *)(iVar3 + 0x5c);
    *(undefined4 *)(param_1 + 0x1694) = 0;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e0d30((undefined4 *)(param_1 + 0x1690));
    }
  }
  if (*(int *)(param_1 + 0x10d0) != 0) {
    iVar3 = FUN_00a12210(0);
    if (iVar3 != 0) {
      FUN_00b02610(iVar3 + 0x40,0x3e4ccccd,0x3d567750);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if ((fVar1 <= 0.0) && ((*(byte *)(param_1 + 0xb00) & 0x40) == 0)) {
    FUN_00b10f60(0xb5);
  }
  return;
}

// 00B12000  FUN_00b12000  size=1597  [between]
void __fastcall FUN_00b12000(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = *(int *)(param_1 + 0x61c);
  if (iVar4 == 0) {
    fVar6 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)*(float *)(param_1 + 0x94)));
    iVar4 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x620) = 0;
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar4 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar4 + 0x4c);
    if (ABS(fVar6) <= (float10)1.5707964) {
      if (fVar6 <= (float10)0.7853982) {
        if ((float10)-0.7853982 <= fVar6) {
          FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
          *(undefined4 *)(param_1 + 0x61c) = 2;
        }
        else {
          FUN_00aa4080(10,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        }
      }
      else {
        FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
    }
    else {
      FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
  }
  else if (iVar4 != 1) {
    if (iVar4 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = *(int *)(param_1 + 0xa84);
    pfVar5 = (float *)(iVar4 + 0x40);
    if (2.0 <= ABS(*(float *)(iVar4 + 0x44) - *(float *)(param_1 + 0x44))) {
      FUN_00b02610(pfVar5,0x3dcccccd,0x3c8efa35);
      return;
    }
    fVar1 = *pfVar5 - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x48);
    if (fVar2 * fVar2 + fVar1 * fVar1 < 25.0) {
      FUN_00b10f60(0x29);
      return;
    }
    fVar6 = (float10)FUN_00b080c0(pfVar5);
    if ((float10)1.5 <= ABS(fVar6)) {
      if (*(int *)(param_1 + 0x620) == 0) {
        iVar4 = *(int *)(param_1 + 0xa84);
        local_20 = *(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x40);
        local_18 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x48);
        local_14 = *(float *)(iVar4 + 0x4c) - *(float *)(param_1 + 0x4c);
        local_1c = 0.0;
        fVar1 = local_20 * local_20 + local_18 * local_18;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_20,&local_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_20 = 0.0;
          local_1c = 1.0;
          local_18 = 0.0;
        }
        pfVar5 = (float *)(param_1 + 0x1330);
        fVar3 = *(float *)(param_1 + 0x12f8) * local_1c - *(float *)(param_1 + 0x12f4) * local_18;
        fVar1 = *(float *)(param_1 + 0x12f0) * local_18 - *(float *)(param_1 + 0x12f8) * local_20;
        fVar2 = *(float *)(param_1 + 0x12f4) * local_20 - *(float *)(param_1 + 0x12f0) * local_1c;
        *pfVar5 = *(float *)(param_1 + 0x12f4) * fVar2 - fVar1 * *(float *)(param_1 + 0x12f8);
        *(float *)(param_1 + 0x1334) =
             fVar3 * *(float *)(param_1 + 0x12f8) - *(float *)(param_1 + 0x12f0) * fVar2;
        *(float *)(param_1 + 0x1338) =
             *(float *)(param_1 + 0x12f0) * fVar1 - fVar3 * *(float *)(param_1 + 0x12f4);
        fVar1 = *(float *)(param_1 + 0x1334) * *(float *)(param_1 + 0x1334) + *pfVar5 * *pfVar5 +
                *(float *)(param_1 + 0x1338) * *(float *)(param_1 + 0x1338);
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(pfVar5,pfVar5);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          *pfVar5 = 0.0;
          *(undefined4 *)(param_1 + 0x1334) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x1338) = 0;
        }
        *(float *)(param_1 + 0x960) = *(float *)(param_1 + 0x40) + *pfVar5;
        *(float *)(param_1 + 0x964) = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x1334);
        *(float *)(param_1 + 0x968) = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x1338);
        *(float *)(param_1 + 0x96c) = *(float *)(param_1 + 0x133c) + *(float *)(param_1 + 0x4c);
        fVar6 = (float10)FUN_00a8ec30((float *)(param_1 + 0x960));
        fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)*(float *)(param_1 + 0x94)));
        *(undefined4 *)(param_1 + 0x61c) = 1;
        if ((float10)1.5707964 < ABS(fVar6)) {
          FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          return;
        }
        if ((float10)0.7853982 < fVar6) {
          FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          return;
        }
        if (fVar6 < (float10)-0.7853982) {
          FUN_00aa4080(10,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          return;
        }
        *(undefined4 *)(param_1 + 0x61c) = 2;
      }
      else {
        *(float *)(param_1 + 0x960) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x1330);
        *(float *)(param_1 + 0x964) = *(float *)(param_1 + 0x1334) + *(float *)(param_1 + 0x44);
        *(float *)(param_1 + 0x968) = *(float *)(param_1 + 0x1338) + *(float *)(param_1 + 0x48);
        *(float *)(param_1 + 0x96c) = *(float *)(param_1 + 0x133c) + *(float *)(param_1 + 0x4c);
      }
      fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) + 2.1;
      if (*(float *)(param_1 + 0x964) < fVar1) {
        *(float *)(param_1 + 0x964) = fVar1;
      }
      FUN_00b02610(param_1 + 0x960,0x3dcccccd,0x3c8efa35);
      return;
    }
    FUN_00b10f60(0x15);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00b02610(param_1 + 0x960,0x3dcccccd,0x3c8efa35);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 2;
  }
  return;
}

// 00B12640  FUN_00b12640  size=170  [between]
void __fastcall FUN_00b12640(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)*(float *)(param_1 + 0x94)));
  if ((float10)0.43633232 < ABS(fVar4)) {
    FUN_00b10f60(0x16);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xa84);
  if ((ABS(*(float *)(iVar1 + 0x44) - *(float *)(param_1 + 0x44)) < 2.0) &&
     (fVar2 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 0x40),
     fVar3 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x48),
     fVar3 * fVar3 + fVar2 * fVar2 < 25.0)) {
    FUN_00b10f60(0x29);
    return;
  }
  fVar4 = (float10)FUN_00b080c0(iVar1 + 0x40);
  if ((float10)2.0 < ABS(fVar4)) {
    FUN_00b10f60(0x14);
  }
  return;
}

// 00B126F0  FUN_00b126f0  size=141  [between]
void __fastcall FUN_00b126f0(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x920);
  *(float *)(param_1 + 0x920) = fVar1;
  if (120.0 < fVar1) {
    FUN_00b10f60(0x17);
  }
  return;
}

// 00B12780  FUN_00b12780  size=294  [between]
void __fastcall FUN_00b12780(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)*(float *)(param_1 + 0x94)));
    if ((fVar4 < (float10)-2.0943952) || ((float10)2.0943952 < fVar4)) {
      uVar2 = 0xd;
    }
    else if ((float10)0 <= fVar4) {
      uVar2 = 10;
    }
    else {
      uVar2 = 9;
    }
    FUN_00aa4080(uVar2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0xa84) != 0) {
    iVar3 = FUN_00a8c760(0);
    if ((iVar3 != 0) &&
       (fVar1 = *(float *)(param_1 + 0x10d4), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
      FUN_00b02610(*(int *)(param_1 + 0xa84) + 0x40,0x3da3d70a,0x3c8efa35);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00b10f60(0x15);
  }
  return;
}

// 00B128B0  FUN_00b128b0  size=117  [between]
void __fastcall FUN_00b128b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x187];
  if ((((iVar1 != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     ((param_1[0x449] & 0x20000000U) == 0)) {
    if (iVar1 == 1) {
      if (0.5235988 < (float)param_1[0x2a8]) {
        uVar2 = FUN_00b033c0(param_1 + 0x438);
        FUN_00b10f60(uVar2);
      }
    }
    else if (iVar1 == 3) {
      iVar1 = FUN_00a94db0(0x21);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b128f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 00B12930  FUN_00b12930  size=893  [between]
void __fastcall FUN_00b12930(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
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
  undefined4 local_1c4;
  undefined4 local_1c0;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4120(0x18,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    fVar7 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
    *(float *)(param_1 + 0x920) = (float)fVar7;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    return;
  case 1:
    fVar1 = *(float *)(param_1 + 0x920) - 0.016666668;
    *(float *)(param_1 + 0x920) = fVar1;
    if (((fVar1 <= 0.0) && (*(float *)(param_1 + 0x93c) <= 0.0)) &&
       (iVar4 = FUN_00c27d30(), iVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      FUN_00c27d00();
      return;
    }
    if (5.0 < *(float *)(param_1 + 0x10d4)) {
      FUN_00b026e0(0x3dcccccd,0x3c8efa35);
    }
    if ((*(int *)(param_1 + 0x10d0) != 0) && (iVar4 = FUN_00a12210(0), iVar4 != 0)) {
      FUN_00a82640();
      FUN_00a83330(iVar4 + 0x40,1);
    }
  case 3:
    break;
  case 2:
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00aa4120(0x21,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      uVar9 = 5;
      FUN_00a7c8a0(5);
      FUN_00aa9280(uVar9);
      uVar9 = 0x300;
      FUN_00a7c800(0x300);
      iVar5 = FUN_00a12210(uVar9);
      if (iVar5 != 0) {
        local_360 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                         *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                         *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
        local_35c = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                         *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                         *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
        fVar3 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                     *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                     *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
        fVar1 = *(float *)(iVar5 + 0x28);
        fVar2 = *(float *)(iVar5 + 0x38);
        fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar3));
        fVar8 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
        local_340 = (float)fVar8;
        local_33c = (float)fVar7;
        fVar7 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)local_35c,
                                (float10)*(float *)(iVar5 + 0x10) / (float10)local_360);
        local_338 = (float)fVar7;
        local_350 = *(undefined4 *)(iVar5 + 0x40);
        local_34c = *(undefined4 *)(iVar5 + 0x44);
        local_348 = *(undefined4 *)(iVar5 + 0x48);
        local_344 = *(undefined4 *)(iVar5 + 0x4c);
        local_360 = *(float *)(iVar5 + 0x40);
        local_35c = *(float *)(iVar5 + 0x44);
        local_358 = *(undefined4 *)(iVar5 + 0x48);
        local_354 = *(undefined4 *)(iVar5 + 0x4c);
        FUN_0041fee0();
        FUN_00416e30(&local_350,&local_360,&local_340,0x40000000,0x43480000);
        local_30c = *(undefined4 *)(param_1 + 0x4f0);
        local_294 = local_294 | 0x10000000;
        local_220 = 0x17;
        uVar9 = FUN_00a7c7f0();
        FUN_00a7c960(uVar9);
        local_1c4 = 0x3f7f7cee;
        local_31c = 4;
        local_314 = 4;
        local_310 = 0x300;
        local_318 = 100;
        puVar6 = (undefined4 *)FUN_009f8b60();
        local_1c0 = *puVar6;
        FUN_00ae2bc0(iVar4,local_330);
      }
    }
    *(undefined4 *)(param_1 + 0x61c) = 3;
    break;
  default:
    goto switchD_00b12950_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_00b12950_default:
  return;
}

// 00B12CC0  FUN_00b12cc0  size=139  [between]
void __fastcall FUN_00b12cc0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x187];
  if ((((iVar1 != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     ((param_1[0x449] & 0x20000000U) == 0)) {
    if (iVar1 == 1) {
      if (0.34906584 < (float)param_1[0x2a8]) {
        uVar2 = FUN_00b033c0(param_1 + 0x438);
        FUN_00b10f60(uVar2);
      }
      if (param_1[0x250] < 1) {
                    /* WARNING: Could not recover jumptable at 0x00b12d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    else if (iVar1 == 4) {
      iVar1 = FUN_00a94db0(0x1f);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b12d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 00B12D50  FUN_00b12d50  size=971  [between]
void __fastcall FUN_00b12d50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
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
  undefined1 local_330 [33];
  undefined1 local_30f;
  undefined4 local_30c;
  uint local_294;
  undefined4 local_220;
  undefined4 local_1c4;
  undefined4 local_1c0;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4120(0x1f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    fVar8 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
    *(float *)(param_1 + 0x920) = (float)fVar8;
    sVar4 = FUN_00dde2d0(3,5);
    *(int *)(param_1 + 0x940) = (int)sVar4;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    return;
  case 1:
    fVar1 = *(float *)(param_1 + 0x920) - 0.016666668;
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 <= 0.0) {
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + -1;
      if (*(int *)(param_1 + 0x940) < 1) {
        *(undefined4 *)(param_1 + 0x61c) = 4;
      }
      else {
        sVar4 = FUN_00dde2d0(3,5);
        *(int *)(param_1 + 0x944) = (int)sVar4;
        *(undefined4 *)(param_1 + 0x61c) = 2;
      }
    }
    if ((*(int *)(param_1 + 0x10d0) != 0) && (iVar7 = FUN_00a12210(0), iVar7 != 0)) {
      FUN_00a82640();
      FUN_00a83330(iVar7 + 0x40,1);
    }
    break;
  case 2:
    iVar7 = FUN_00a81330();
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
    }
    else {
      FUN_00aa4120(0x22,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      uVar10 = 0x300;
      FUN_00a7c800(0x300);
      iVar5 = FUN_00a12210(uVar10);
      local_360 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                       *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                       *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
      local_35c = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                       *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                       *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
      fVar3 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                   *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                   *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
      fVar1 = *(float *)(iVar5 + 0x28);
      fVar2 = *(float *)(iVar5 + 0x38);
      fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar3));
      fVar9 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
      local_340 = (float)fVar9;
      local_33c = (float)fVar8;
      fVar8 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)local_35c,
                              (float10)*(float *)(iVar5 + 0x10) / (float10)local_360);
      local_338 = (float)fVar8;
      local_350 = *(undefined4 *)(iVar5 + 0x40);
      local_34c = *(undefined4 *)(iVar5 + 0x44);
      local_348 = *(undefined4 *)(iVar5 + 0x48);
      local_344 = *(undefined4 *)(iVar5 + 0x4c);
      local_360 = *(float *)(iVar5 + 0x40);
      local_35c = *(float *)(iVar5 + 0x44);
      local_358 = *(undefined4 *)(iVar5 + 0x48);
      local_354 = *(undefined4 *)(iVar5 + 0x4c);
      FUN_0041fee0();
      FUN_00416e30(&local_350,&local_360,&local_340,0x40000000,0x43480000);
      local_30c = *(undefined4 *)(param_1 + 0x4f0);
      local_294 = local_294 | 0x10000000;
      uVar10 = FUN_00a7c7f0();
      FUN_00a7c960(uVar10);
      local_1c4 = 0x3f7f7cee;
      local_220 = 0x38;
      local_30f = 3;
      puVar6 = (undefined4 *)FUN_009f8b60();
      local_1c0 = *puVar6;
      FUN_00ae2bc0(iVar7,local_330);
      iVar7 = *(int *)(param_1 + 0x944);
      *(int *)(param_1 + 0x944) = iVar7 + -1;
      if (iVar7 < 1) {
        FUN_00aa4120(0x1f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        fVar8 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
        *(float *)(param_1 + 0x920) = (float)fVar8;
        *(undefined4 *)(param_1 + 0x61c) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x61c) = 3;
      }
    }
    goto LAB_00b13105;
  case 3:
    iVar7 = FUN_00a94db0(0x22);
    if (iVar7 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    break;
  case 4:
    break;
  default:
    goto switchD_00b12d74_default;
  }
LAB_00b13105:
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_00b12d74_default:
  return;
}

// 00B13130  FUN_00b13130  size=170  [between]
void __fastcall FUN_00b13130(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a7c8a0();
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x4d,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00b0a2f0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    FUN_00b03700(uVar2);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b10f60(0x48);
  }
  FUN_00b03700(uVar2);
  return;
}

// 00B131E0  FUN_00b131e0  size=194  [between]
void __fastcall FUN_00b131e0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar1 = (float)param_1[0x454];
  param_1[0x454] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    param_1[0x195] = 2;
  }
  iVar2 = FUN_00a81330();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  iVar3 = *(int *)(iVar3 + 0x654);
  switch(iVar3) {
  case 1:
    FUN_00b10f60(0x49);
    param_1[0x195] = iVar3;
    return;
  case 2:
    FUN_00b10f60(0x4a);
    param_1[0x195] = iVar3;
    break;
  case 6:
    FUN_00b10f60(0x4b);
    param_1[0x195] = iVar3;
    return;
  case -1:
    FUN_009f8b10();
    FUN_00a7c950();
    param_1[0x195] = -1;
    param_1[0x449] = param_1[0x449] & 0xffffffdf;
                    /* WARNING: Could not recover jumptable at 0x00b13267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B132D0  FUN_00b132d0  size=194  [between]
void __fastcall FUN_00b132d0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar1 = (float)param_1[0x454];
  param_1[0x454] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    param_1[0x195] = 2;
  }
  iVar2 = FUN_00a81330();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  iVar3 = *(int *)(iVar3 + 0x654);
  switch(iVar3) {
  case 0:
    FUN_00b10f60(0x48);
    param_1[0x195] = iVar3;
    return;
  case 2:
    FUN_00b10f60(0x4a);
    param_1[0x195] = iVar3;
    break;
  case 6:
    FUN_00b10f60(0x4b);
    param_1[0x195] = iVar3;
    return;
  case -1:
    FUN_009f8b10();
    FUN_00a7c950();
    param_1[0x195] = -1;
    param_1[0x449] = param_1[0x449] & 0xffffffdf;
                    /* WARNING: Could not recover jumptable at 0x00b13357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B133C0  FUN_00b133c0  size=759  [between]
void __fastcall FUN_00b133c0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uVar3;
  undefined1 *local_78;
  int local_74;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [80];
  
  local_74 = 0xb133d9;
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_74 = 0xb133e8;
    uVar3 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x51,0,0x3e4ccccd,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    local_78 = (undefined1 *)0xb13440;
    local_74 = uVar3;
    FUN_00b03790();
    goto LAB_00b13444;
  case 1:
LAB_00b13444:
    local_74 = 0xb1344b;
    FUN_00b07f30();
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0;
    local_78 = (undefined1 *)0xb13467;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 0xb13476;
      FUN_009f8b10();
      local_74 = 0xb13481;
      FUN_00a7c950();
      param_1[0x195] = -1;
      param_1[0x449] = param_1[0x449] & 0xffffffdf;
      local_74 = 0x3d888889;
      local_78 = (undefined1 *)0xb134a8;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_78 = auStack_64;
        param_1[0x187] = 2;
        FUN_00a92f90();
        FUN_0044fd10();
        local_78 = (undefined1 *)0xb1351d;
        iVar2 = (**(code **)(*param_1 + 0x84))();
        local_78 = *(undefined1 **)(iVar2 + 4);
        D3DXMatrixRotationY(auStack_54);
        D3DXVec3TransformNormal(&stack0xffffff94,&stack0xffffff94,auStack_5c);
        local_74 = -0x42333333;
        if (param_1[0x1d9] != 0) {
          (**(code **)(*param_1 + 0x314))();
          if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
            *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
          }
        }
        param_1[0x224] = (int)local_78;
        param_1[0x225] = local_74;
        param_1[0x226] = unaff_EDI;
        param_1[0x227] = unaff_ESI;
        FUN_008e0c00(&local_78);
        FUN_00aa3f60(0x29);
        return;
      }
      param_1[0x187] = 3;
      if (param_1[0x1d9] != 0) {
        local_78 = (undefined1 *)0xb134cb;
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      local_78 = (undefined1 *)0x2a;
      FUN_00aa3f60();
      return;
    }
    local_74 = 10;
    local_78 = (undefined1 *)0xb135c7;
    iVar2 = FUN_00a8c760();
    if (iVar2 == 0) {
      local_78 = (undefined1 *)0xb135d7;
      local_74 = uVar3;
      FUN_00b03700();
      return;
    }
    break;
  case 2:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0x3d888889;
    local_78 = (undefined1 *)0xb13609;
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 != 0) {
      local_78 = (undefined1 *)0x2a;
      param_1[0x187] = 3;
      FUN_00aa3f60();
      return;
    }
    break;
  case 3:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0;
    local_78 = (undefined1 *)0xb13649;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 0x2c;
      param_1[0x187] = 4;
      local_78 = (undefined1 *)0xb13660;
      FUN_00aa3f60();
      return;
    }
    break;
  case 4:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0;
    local_78 = (undefined1 *)0xb13685;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      param_1[0x449] = param_1[0x449] & 0xffffff5f;
      pcVar1 = *(code **)(*param_1 + 0x34c);
      param_1[0x1ae] = 0;
      local_74 = 0xb136a9;
      (*pcVar1)();
      return;
    }
  }
  return;
}

// 00B136D0  Em0040::vf19C  size=179  [class]
void __thiscall Em0040::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 00B13790  FUN_00b13790  size=239  [between]
void __thiscall FUN_00b13790(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    switch(param_2) {
    case 0x2f:
      param_2 = 0x3d;
      break;
    case 0x30:
      param_2 = 0x3e;
      break;
    case 0x31:
      param_2 = 0x3f;
      break;
    case 0x32:
      param_2 = 0x40;
      break;
    case 0x33:
      param_2 = 0x41;
      break;
    case 0x34:
      param_2 = 0x42;
      break;
    default:
      param_2 = 0x3c;
      break;
    case 0x39:
      param_2 = 0x43;
    }
  }
  FUN_00ac8ab0();
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x110c) = 0xffffffff;
  FUN_00b0f910();
  if ((*(int *)(param_1 + 0x814) < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
    *(undefined4 *)(param_1 + 0xd28) = 1;
    FUN_00a88b50(4,1);
    *(undefined4 *)(param_1 + 0xd28) = 0;
  }
  FUN_00b10f60(param_2);
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e5c50(7);
    *(undefined4 *)(param_1 + 0x1690) = 0;
    *(undefined4 *)(param_1 + 0x1694) = 0;
    *(undefined4 *)(param_1 + 0x1698) = 0;
    *(undefined4 *)(param_1 + 0x169c) = 0;
    FUN_008e0d30((undefined4 *)(param_1 + 0x1690));
  }
  return;
}

// 00B138B0  FUN_00b138b0  size=119  [between]
undefined4 __thiscall FUN_00b138b0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != (int *)0x0) && (*param_3 == 0xde)) {
    iVar1 = (**(code **)(*param_2 + 0x14c))(0x2c,*(undefined4 *)(param_1 + 0x4f0));
    if (iVar1 != 0) {
      (**(code **)(*param_2 + 0x150))(0x2c,*(undefined4 *)(param_1 + 0x4f0));
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00b10f60(0x23);
      return 1;
    }
  }
  return 0;
}

// 00B13930  FUN_00b13930  size=634  [between]
void __fastcall FUN_00b13930(int *param_1)

{
  float fVar1;
  int iVar2;
  float unaff_ESI;
  undefined1 *local_78;
  float local_74;
  float afStack_6c [2];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [80];
  
  switch(param_1[0x187]) {
  case 0:
    local_74 = 1.6275452e-38;
    FUN_00b0a600();
    local_74 = 1.6275462e-38;
    FUN_00b08d00();
    local_74 = 0.0;
    local_78 = (undefined1 *)0xb13967;
    FUN_00b03020();
    param_1[0x449] = param_1[0x449] & 0xffffff7f;
    param_1[0x25] = param_1[0x441];
    local_74 = 1.0;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x28,0,0x3e4ccccd,0x3f800000,0x8038000);
    local_74 = 1.4013e-45;
    local_78 = (undefined1 *)0xb139bd;
    (**(code **)(*param_1 + 0x1f8))();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 1.627564e-38;
    FUN_00b07f30();
    local_74 = 0.0;
    local_78 = (undefined1 *)0xb139e6;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      if (param_1[0x1d9] != 0) {
        local_74 = 1.6275694e-38;
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      local_74 = 0.06666667;
      local_78 = (undefined1 *)0xb13a32;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_78 = auStack_64;
        FUN_00a92f90();
        FUN_0044fd10();
        local_78 = (undefined1 *)0xb13a6b;
        iVar2 = (**(code **)(*param_1 + 0x84))();
        local_78 = *(undefined1 **)(iVar2 + 4);
        D3DXMatrixRotationY(auStack_54);
        D3DXVec3TransformNormal(afStack_6c,afStack_6c,auStack_5c);
        fVar1 = 1.0 / (float)param_1[0x244];
        local_78 = (undefined1 *)((float)local_78 * fVar1);
        local_74 = local_74 * fVar1;
        afStack_6c[0] = afStack_6c[0] * fVar1;
        param_1[0x227] = (int)afStack_6c[0];
        param_1[0x224] = (int)local_78;
        param_1[0x225] = (int)local_74;
        param_1[0x226] = (int)(unaff_ESI * fVar1);
        FUN_008e0c00(&local_78);
        param_1[0x187] = 2;
        FUN_00aa3f60(0x29);
        return;
      }
      local_78 = (undefined1 *)0x2a;
      param_1[0x187] = 3;
      FUN_00aa3f60();
      return;
    }
    break;
  case 2:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0.06666667;
    local_78 = (undefined1 *)0xb13b29;
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 != 0) {
      local_78 = (undefined1 *)0x2a;
      param_1[0x187] = 3;
      FUN_00aa3f60();
      return;
    }
    break;
  case 3:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0.0;
    local_78 = (undefined1 *)0xb13b5f;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 6.16571e-44;
      param_1[0x187] = 4;
      local_78 = (undefined1 *)0xb13b76;
      FUN_00aa3f60();
      return;
    }
    break;
  case 4:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0.0;
    local_78 = (undefined1 *)0xb13b95;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 1.6276279e-38;
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 00B13BC0  FUN_00b13bc0  size=337  [between]
void __fastcall FUN_00b13bc0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(0x81,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x444] = param_1[0x444] + 1;
    param_1[0x248] = 0x43960000;
    param_1[0x187] = param_1[0x187] + 1;
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
    FUN_00b10f60(0x36);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if (param_1[0x444] < 2) {
      FUN_00aa4080(0x2b,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    FUN_00b08240();
    param_1[0x187] = 3;
  }
  return;
}

// 00B13D20  FUN_00b13d20  size=458  [between]
void __fastcall FUN_00b13d20(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(0x36,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 1:
    *(undefined2 *)(param_1 + 0x209) = 4;
    param_1[0x20a] = 0x78;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x250] = param_1[0x250] + 1;
      if (param_1[0x250] < 3) {
        FUN_00aa4080(0x36,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        return;
      }
      FUN_00aa4080(0x2b,0,0x3df5c28f,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      if (param_1[0x540] < 1) {
        FUN_00aa4080(0x2c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      param_1[0x541] = 0x2b;
      FUN_00b10f60(0xa5);
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b13ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00B13F00  FUN_00b13f00  size=99  [between]
void __fastcall FUN_00b13f00(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[0x449] & 0x4000U) == 0) {
    return;
  }
  switch(param_1[0x50f]) {
  case 0x53:
    uVar1 = 0x72;
    break;
  case 0x54:
    uVar1 = 0x74;
    break;
  case 0x55:
    uVar1 = 0x76;
    break;
  case 0x56:
    uVar1 = 0x7c;
    break;
  default:
    goto switchD_00b13f1d_default;
  }
  FUN_00b10f60(uVar1);
switchD_00b13f1d_default:
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  param_1[0x449] = param_1[0x449] | 0x20000;
  param_1[0x449] = param_1[0x449] & 0xffffbfff;
  return;
}

// 00B13F80  FUN_00b13f80  size=699  [between]
void __thiscall FUN_00b13f80(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_80;
  float local_7c;
  float local_78;
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
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  if ((((param_2 != 0) && ((*(uint *)(param_1 + 0x1124) & 0x800000) == 0)) &&
      (iVar4 = *(int *)(param_1 + 0x618), iVar4 != 0x83)) && ((iVar4 != 0x85 && (iVar4 != 0x84)))) {
    local_60 = *(float *)(param_2 + 0x40);
    local_5c = *(float *)(param_2 + 0x44);
    local_58 = *(float *)(param_2 + 0x48);
    local_54 = *(float *)(param_2 + 0x4c);
    pfVar5 = (float *)FUN_00a8b8a0(&local_80,0x41200000);
    local_40 = *pfVar5 + local_60;
    pfVar6 = (float *)(param_1 + 0x40);
    local_3c = pfVar5[1] + local_5c;
    local_38 = pfVar5[2] + local_58;
    local_34 = pfVar5[3] + local_54;
    FUN_00d909f0(&local_30,pfVar6,&local_60,&local_40);
    FUN_00a925a0(&local_50);
    local_70 = local_30 - *pfVar6;
    local_6c = local_2c - *(float *)(param_1 + 0x44);
    local_68 = local_28 - *(float *)(param_1 + 0x48);
    local_64 = local_24 - *(float *)(param_1 + 0x4c);
    fVar1 = local_68 * local_68 + local_6c * local_6c + local_70 * local_70;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_70,&local_70);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_70 = 0.0;
      local_6c = 1.0;
      local_68 = 0.0;
    }
    if (0.8 < local_48 * local_68 + local_50 * local_70 + local_4c * local_6c) {
      FUN_00b10f60(0x83);
      return;
    }
    pfVar5 = (float *)FUN_00a925a0(&local_80);
    fVar1 = pfVar5[1];
    fVar2 = *pfVar5;
    fVar3 = pfVar5[2];
    local_70 = *(float *)(param_2 + 0x40) - *pfVar6;
    local_6c = *(float *)(param_2 + 0x44) - *(float *)(param_1 + 0x44);
    local_68 = *(float *)(param_2 + 0x48) - *(float *)(param_1 + 0x48);
    local_64 = *(float *)(param_2 + 0x4c) - *(float *)(param_1 + 0x4c);
    pfVar6 = (float *)FUN_00a925a0(local_20);
    local_80 = pfVar6[1] * local_68 - pfVar6[2] * local_6c;
    local_7c = pfVar6[2] * local_70 - local_68 * *pfVar6;
    local_78 = *pfVar6 * local_6c - pfVar6[1] * local_70;
    local_70 = local_80;
    local_6c = local_7c;
    local_68 = local_78;
    if (local_7c <= 0.0 == fVar3 * local_48 + local_50 * fVar2 + fVar1 * local_4c <= 0.0) {
      FUN_00b10f60(0x85);
      return;
    }
    FUN_00b10f60(0x84);
  }
  return;
}

// 00B14240  FUN_00b14240  size=515  [between]
void __fastcall FUN_00b14240(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float unaff_ESI;
  int iVar5;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = FUN_00a81330();
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = FUN_00a7c8a0();
  }
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    if (((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
       (fVar1 = (float)param_1[0x435], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
      local_20 = *(undefined4 *)(iVar5 + 0x40);
      local_1c = *(undefined4 *)(iVar5 + 0x44);
      local_18 = *(undefined4 *)(iVar5 + 0x48);
      local_14 = *(undefined4 *)(iVar5 + 0x4c);
      FUN_00b069d0(&local_20,0x3da3d70a);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    FUN_00b10f60(0x79);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (iVar5 != 0) {
    D3DXVec3TransformNormal(&local_20,param_1 + 0x52c,iVar5 + 0x10);
    fVar1 = *(float *)(iVar5 + 0x40);
    fVar2 = *(float *)(iVar5 + 0x48);
    FUN_00b069d0(&stack0xffffffd4,0x3dcccccd);
    fVar1 = (fVar1 + unaff_ESI) - (float)param_1[0x10];
    fVar2 = (fVar2 + fStack_24) - (float)param_1[0x12];
    if (fVar2 * fVar2 + fVar1 * fVar1 < 6.25) {
      uVar4 = 10;
      iVar3 = FUN_00b033c0(iVar5 + 0x40);
      if (iVar3 != 8) {
        if (iVar3 == 9) {
          uVar4 = 9;
        }
        else if (iVar3 == 0xc) {
          uVar4 = 0xd;
        }
      }
      FUN_00aa4080(uVar4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    return;
  }
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B14450  FUN_00b14450  size=94  [between]
void __fastcall FUN_00b14450(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar3 + 0x158))(0x56,0);
      if (iVar2 != 0) {
        FUN_00b10f60(0x7d);
      }
      return;
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x2a] = 0;
  (*pcVar1)();
  FUN_008e6d00();
  return;
}

// 00B144B0  FUN_00b144b0  size=1255  [between]
void __fastcall FUN_00b144b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 auStack_d0 [20];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  local_ec = 0;
  if (iVar1 != 0) {
    local_ec = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    param_1[0x2a] = 0;
    iVar3 = FUN_00a12210(3);
    fVar8 = (float10)fpatan((float10)*(float *)(iVar3 + 0x30),(float10)*(float *)(iVar3 + 0x38));
    param_1[0x14] = *(int *)(iVar3 + 0x40);
    param_1[0x15] = *(int *)(iVar3 + 0x44);
    param_1[0x16] = *(int *)(iVar3 + 0x48);
    param_1[0x17] = *(int *)(iVar3 + 0x4c);
    piVar6 = (int *)(iVar3 + 0x10);
    piVar7 = param_1 + 0x2c;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    D3DXMatrixRotationY(local_50,(float)-fVar8);
    piVar6 = param_1 + 0x2c;
    D3DXMatrixMultiply(piVar6,auStack_58,piVar6);
    FUN_00ddba00(param_1 + 0x430,piVar6);
    param_1[0x25] = (int)(float)fVar8;
    param_1[0x259] = (int)(float)fVar8;
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0x8000000;
    uVar9 = 0x3f800000;
    uVar2 = 0;
    uVar13 = 0;
    iVar3 = iVar1;
    uVar4 = FUN_004b5e30(param_1[0x530],iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4520(uVar4,iVar3,uVar13,uVar2,uVar9,uVar10,uVar11,uVar12);
    FUN_009f8b10();
    FUN_008e6d00();
    iVar3 = FUN_004b7e20(local_ec);
    if (((iVar3 != 0) && (iVar3 = FUN_00a8cab0(), iVar3 == 0xe0006)) &&
       ((*(byte *)(param_1 + 0x530) & 1) != 0)) {
      FUN_0040b190();
      FUN_0040b190();
      auStack_d0[0] = 5;
      iVar3 = FUN_00a12210(0);
      uStack_80 = *(undefined4 *)(iVar3 + 0x40);
      uStack_7c = *(undefined4 *)(iVar3 + 0x44);
      uStack_78 = *(undefined4 *)(iVar3 + 0x48);
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      FUN_00a82090("Em0040_FallBodyExp",0x20040,auStack_d0);
      if (iVar1 != 0) {
        uVar4 = FUN_00a7c8a0();
        iVar3 = FUN_00b057f0(uVar4);
        if (iVar3 != 0) {
          FUN_00b040a0(iVar1);
          FUN_00b040c0();
          FUN_00b10f60(0x77);
        }
      }
    }
    param_1[0x248] = 0;
    FUN_00b03020(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = param_1[0x530];
    goto LAB_00b14944;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_00b144f6_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  if ((param_1[0x250] == 0) && (iVar3 = FUN_00a8c760(10), iVar3 != 0)) {
    param_1[0x250] = 1;
  }
  if (param_1[0x250] == 1) {
    if ((float)param_1[0x248] <= 16.0) {
      local_e0 = 0;
      piVar6 = param_1 + 0x430;
      local_dc = 0;
      local_d8 = 0;
      local_d4 = 0x3f800000;
      fVar8 = (float10)FUN_00fdc1f0();
      D3DXQuaternionSlerp(piVar6,piVar6,&local_e0,(float)((float10)1 - fVar8));
      FUN_00ddb9f0(param_1 + 0x2c,piVar6);
    }
    else {
      param_1[0x250] = 2;
      param_1[0x3a] = 0;
      param_1[0x39] = 0;
      param_1[0x38] = 0;
      param_1[0x37] = 0;
      param_1[0x35] = 0;
      param_1[0x34] = 0;
      param_1[0x33] = 0;
      param_1[0x32] = 0;
      param_1[0x30] = 0;
      param_1[0x2f] = 0;
      param_1[0x2e] = 0;
      param_1[0x2d] = 0;
      param_1[0x3b] = 0x3f800000;
      param_1[0x36] = 0x3f800000;
      param_1[0x31] = 0x3f800000;
      param_1[0x2c] = 0x3f800000;
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_009f8b10();
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    uVar13 = 0x3f800000;
    uVar4 = 0xbf800000;
    if (iVar3 == 0) {
      uVar12 = 0;
      uVar11 = 0x3f800000;
      param_1[0x187] = 2;
      uVar10 = 0x3e4ccccd;
      uVar9 = 0;
      uVar2 = FUN_004b5e50(param_1[0x530],iVar1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00aa4520(uVar2,iVar1,uVar9,uVar10,uVar11,uVar12,uVar4,uVar13);
      return;
    }
    iVar3 = param_1[0x530];
LAB_00b14944:
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0x8000000;
    uVar9 = 0x3f800000;
    uVar2 = 0x3e4ccccd;
    uVar13 = 0;
    param_1[0x187] = 3;
    uVar4 = FUN_004b5e70(iVar3,iVar1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4520(uVar4,iVar1,uVar13,uVar2,uVar9,uVar10,uVar11,uVar12);
    return;
  }
switchD_00b144f6_default:
  return;
}

// 00B149B0  FUN_00b149b0  size=38  [between]
void __fastcall FUN_00b149b0(int *param_1)

{
  if ((param_1[0x449] & 0x10U) != 0) {
    if ((param_1[0x449] & 0x800000U) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b149c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00b10f60(0x80);
  }
  return;
}

// 00B149E0  FUN_00b149e0  size=446  [between]
void __fastcall FUN_00b149e0(int *param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [92];
  
  if ((((param_1[0x187] != 0) && (uVar1 = param_1[0x449], -1 < (char)uVar1)) &&
      (param_1[0x5a0] == 0)) && ((uVar1 & 0x20000000) == 0)) {
    if (((float)param_1[0x24a] * 3.2399998 < (float)param_1[0x435]) || ((uVar1 & 0x10) == 0)) {
      FUN_00b10f60(0x7f);
      return;
    }
    fVar2 = (float)param_1[0x244] * 0.016666668 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar2;
    if (2.5 < fVar2) {
LAB_00b14a74:
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (ABS((float)param_1[0x25] - (float)param_1[0x24b]) < 0.08726646) {
      local_a4 = 0;
      if (0 < param_1[0x188]) {
        iVar3 = FUN_00907560(param_1 + 0x44a,0,0,&local_a4,0,0,0,0);
        if (iVar3 != 0) {
          FUN_00910a40(local_a4);
          iVar3 = FUN_0091a9e0();
          if (iVar3 != 0) goto LAB_00b14a74;
        }
      }
      local_a0 = (float)param_1[0x10];
      local_98 = (float)param_1[0x12];
      local_94 = (float)param_1[0x13];
      local_9c = (float)param_1[0x11] + 0.5;
      pfVar4 = (float *)FUN_00a925a0(local_70);
      local_80 = *pfVar4 + local_a0;
      local_7c = pfVar4[1] + local_9c;
      local_78 = pfVar4[2] + local_98;
      local_74 = pfVar4[3] + local_94;
      FUN_00468970(param_1 + 0x44a,0,&local_a0,&local_80,7,0,0,0,"em0040",0,0);
      HavokRayCastManager::set(local_60);
      param_1[0x188] = 1;
    }
  }
  return;
}

// 00B14BA0  FUN_00b14ba0  size=192  [between]
void __fastcall FUN_00b14ba0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar6 = &DAT_01b34e80;
    (**(code **)(*piVar5 + 4))(&DAT_01b34e80);
    iVar4 = FUN_00dd6d70(puVar6);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x10e0) = piVar5[0x10];
      *(int *)(param_1 + 0x10e4) = piVar5[0x11];
      *(int *)(param_1 + 0x10e8) = piVar5[0x12];
      *(int *)(param_1 + 0x10ec) = piVar5[0x13];
      *(float *)(param_1 + 0x10e4) = *(float *)(param_1 + 0x10e4) + 1.0;
      fVar1 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x10e0);
      fVar3 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x10e4);
      fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x10e8);
      if (3.2399998 < fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) {
        FUN_00b10f60(0x82);
      }
    }
  }
  return;
}

// 00B14C60  FUN_00b14c60  size=683  [between]
void __fastcall FUN_00b14c60(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined *puVar6;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_54 [80];
  
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar6 = &DAT_01b34e80;
      (**(code **)(*piVar4 + 4))(&DAT_01b34e80);
      iVar3 = FUN_00dd6d70(puVar6);
      uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
    }
  }
  iVar3 = FUN_00a12210(0xf00);
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if (param_1[0x187] == 0) {
    FUN_00aa4080(8,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    fVar1 = *(float *)(iVar3 + 0x30);
    fVar2 = *(float *)(iVar3 + 0x34);
    fStack_6c = *(float *)(iVar3 + 0x38);
    fStack_68 = *(float *)(iVar3 + 0x3c);
    param_1[600] = (int)(*(float *)(iVar3 + 0x40) + fVar1);
    param_1[0x259] = (int)(*(float *)(iVar3 + 0x44) + fVar2);
    param_1[0x25a] = (int)(*(float *)(iVar3 + 0x48) + fStack_6c);
    param_1[0x25b] = (int)(*(float *)(iVar3 + 0x4c) + fStack_68);
    param_1[600] = (int)((float)param_1[600] + *(float *)(uVar5 + 0x960));
    param_1[0x259] = (int)(*(float *)(uVar5 + 0x964) + (float)param_1[0x259]);
    param_1[0x25a] = (int)(*(float *)(uVar5 + 0x968) + (float)param_1[0x25a]);
    param_1[0x25b] = (int)(*(float *)(uVar5 + 0x96c) + (float)param_1[0x25b]);
    fStack_64 = fVar1 * -1.0;
    fStack_60 = fVar2 * -1.0;
    fStack_5c = fStack_6c * -1.0;
    fStack_58 = fStack_68 * -1.0;
    D3DXMatrixRotationY(auStack_54,(float)(int)(short)param_1[0x2ad] * 0.23271057 - 0.6981317);
    D3DXVec3TransformNormal(&stack0xffffff84,&fStack_6c,&fStack_5c);
    param_1[600] = (int)((float)param_1[600] + fVar1 * 1.5);
    param_1[0x259] = (int)(fVar2 * 1.5 + (float)param_1[0x259]);
    param_1[0x25a] = (int)((float)param_1[0x25a] + fStack_6c * 1.5);
    param_1[0x25b] = (int)(fStack_68 * 1.5 + (float)param_1[0x25b]);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00b02610(param_1 + 600,0x3e4ccccd,0x3c8efa35);
  fVar1 = (float)param_1[0x10] - (float)param_1[600];
  fVar2 = (float)(int)(short)param_1[0x2ad] * 0.25 + 0.8;
  if (((float)param_1[0x12] - (float)param_1[0x25a]) *
      ((float)param_1[0x12] - (float)param_1[0x25a]) + fVar1 * fVar1 < fVar2 * fVar2) {
    if (param_1[0x5a8] != 0) {
      FUN_00b10f60(0x8d);
      return;
    }
    FUN_00b10f60(0x88);
  }
  return;
}

// 00B14F70  FUN_00b14f70  size=585  [between]
void __fastcall FUN_00b14f70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float fStack_84;
  float local_78 [2];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 auStack_5c [12];
  undefined1 local_50 [16];
  float local_40;
  float local_3c;
  float local_38;
  
  if ((*(uint *)(param_1 + 0x1124) & 0x400000) == 0) {
    if ((*(uint *)(param_1 + 0x1124) & 0x800000) != 0) {
      fVar1 = (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x1598)) *
              *(float *)(param_1 + 0x1588) +
              (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x1590)) *
              *(float *)(param_1 + 0x1580) +
              *(float *)(param_1 + 0x1584) *
              (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x1594));
      *(float *)(param_1 + 0x50) =
           *(float *)(param_1 + 0x1590) + fVar1 * *(float *)(param_1 + 0x1580);
      *(float *)(param_1 + 0x58) =
           fVar1 * *(float *)(param_1 + 0x1588) + *(float *)(param_1 + 0x1598);
    }
    return;
  }
  iVar5 = FUN_00a92f90();
  FUN_00e332b0(&local_40,*(undefined4 *)(iVar5 + 0xa0));
  pfVar6 = (float *)FUN_00a8b8a0(&local_70,
                                 SQRT(local_38 * local_38 +
                                      local_40 * local_40 + local_3c * local_3c));
  fVar1 = *pfVar6;
  fVar2 = pfVar6[1];
  local_78[0] = pfVar6[2];
  local_70 = *(float *)(param_1 + 0x40) + fVar1;
  local_6c = *(float *)(param_1 + 0x44) + fVar2;
  local_68 = local_78[0] + *(float *)(param_1 + 0x48);
  local_64 = pfVar6[3] + *(float *)(param_1 + 0x4c);
  FUN_00b04510((float *)(param_1 + 0x1590),&local_70);
  pfVar7 = (float *)FUN_00a926e0(&local_70);
  pfVar6 = (float *)(param_1 + 0x1580);
  fVar3 = (*(float *)(param_1 + 0x1584) * pfVar7[2] - pfVar7[1] * *(float *)(param_1 + 0x1588)) *
          fVar1 + fVar2 * (*pfVar7 * *(float *)(param_1 + 0x1588) - pfVar7[2] * *pfVar6) +
          local_78[0] * (pfVar7[1] * *pfVar6 - *(float *)(param_1 + 0x1584) * *pfVar7);
  if (1e-05 < ABS(fVar3)) {
    fVar4 = SQRT(*(float *)(param_1 + 0x1578) * *(float *)(param_1 + 0x1578) +
                 *(float *)(param_1 + 0x1570) * *(float *)(param_1 + 0x1570) +
                 *(float *)(param_1 + 0x1574) * *(float *)(param_1 + 0x1574));
    *(float *)(param_1 + 0x15a0) =
         (fVar3 / ((fVar4 + fVar4) * 3.1415927)) * 6.2831855 + *(float *)(param_1 + 0x15a0);
  }
  D3DXQuaternionRotationAxis(local_50,pfVar6,*(undefined4 *)(param_1 + 0x15a0));
  iVar5 = param_1 + 0xb0;
  FUN_00ddb9f0(iVar5,auStack_5c);
  D3DXMatrixInverse(param_1 + 0xf0,0,iVar5);
  D3DXVec3TransformNormal(local_78,param_1 + 0x1570,iVar5);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x1590) + *(float *)(param_1 + 0xe0) + fStack_84
  ;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x1594) + *(float *)(param_1 + 0xe4) + fVar1;
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0xe8) + fVar2 + *(float *)(param_1 + 0x1598);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x159c) + local_78[0];
  return;
}

// 00B151C0  FUN_00b151c0  size=315  [between]
undefined4 __fastcall FUN_00b151c0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  if (((*(uint *)(param_1 + 0x1124) & 0x400) == 0) && (iVar8 = FUN_00b0b740(), iVar8 != 0)) {
    fVar2 = 1.5;
    if ((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0) {
      fVar2 = 1.0;
    }
    iVar1 = *(int *)(param_1 + 0xa84);
    fVar3 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 0x40);
    fVar4 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x48);
    fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
    fVar4 = *(float *)(iVar1 + 0x40) - *(float *)(iVar8 + 0x40);
    fVar5 = *(float *)(iVar1 + 0x48) - *(float *)(iVar8 + 0x48);
    fVar6 = *(float *)(iVar8 + 0x40) - *(float *)(param_1 + 0x40);
    fVar7 = *(float *)(iVar8 + 0x48) - *(float *)(param_1 + 0x48);
    fVar6 = fVar7 * fVar7 + fVar6 * fVar6;
    if ((fVar3 <= fVar6) || (fVar3 <= fVar5 * fVar5 + fVar4 * fVar4)) {
      fVar2 = fVar2 * fVar2 * *(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14);
      if (fVar2 < *(float *)(param_1 + 0x10d4) != (fVar2 == *(float *)(param_1 + 0x10d4))) {
        *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xfffffff7;
        FUN_00b07ff0();
        FUN_00b10f60(2);
        return 1;
      }
    }
    else if ((*(byte *)(param_1 + 0x1124) & 0x10) == 0) {
      if (fVar6 <= 25.0) {
        return 0;
      }
      FUN_00b10f60(0x7f);
      return 1;
    }
    iVar8 = FUN_004be0f0();
    if ((float)iVar8 * 0.071428575 < 0.5 != ((float)iVar8 * 0.071428575 == 0.5)) {
      FUN_00b10f60(0x8c);
    }
  }
  return 0;
}

// 00B15300  FUN_00b15300  size=371  [between]
void __fastcall FUN_00b15300(int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  if ((((param_1[0x187] != 0) && (uVar2 = param_1[0x449], -1 < (char)uVar2)) &&
      (param_1[0x5a0] == 0)) &&
     ((((uVar2 & 0x20000000) == 0 && (1.0 <= (float)param_1[0x4b8])) &&
      ((param_1[0x187] < 2 && (((uVar2 & 1) == 0 || ((uVar2 & 2) == 0)))))))) {
    iVar8 = FUN_00b0b740();
    if (iVar8 != 0) {
      iVar3 = param_1[0x2a1];
      fVar1 = *(float *)(iVar3 + 0x40) - (float)param_1[0x10];
      fVar4 = *(float *)(iVar3 + 0x48) - (float)param_1[0x12];
      fVar1 = fVar4 * fVar4 + fVar1 * fVar1;
      fVar4 = *(float *)(iVar3 + 0x40) - *(float *)(iVar8 + 0x40);
      fVar5 = *(float *)(iVar3 + 0x48) - *(float *)(iVar8 + 0x48);
      fVar6 = *(float *)(iVar8 + 0x40) - (float)param_1[0x10];
      fVar7 = *(float *)(iVar8 + 0x48) - (float)param_1[0x12];
      if ((fVar7 * fVar7 + fVar6 * fVar6 < fVar1) && (fVar5 * fVar5 + fVar4 * fVar4 < fVar1)) {
                    /* WARNING: Could not recover jumptable at 0x00b153d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    param_1[0x250] = param_1[0x250] + 1;
    if (((0x1e < param_1[0x250]) && ((*(byte *)(param_1 + 0x449) & 1) == 0)) &&
       (iVar8 = FUN_00aa4a90(), iVar8 != 0)) {
      param_1[0x250] = 0;
      iVar8 = FUN_00b0e330();
      if (iVar8 == 0) {
        FUN_00b10f60(3);
        return;
      }
    }
    if (param_1[0x434] != 0) {
      fVar1 = (float)param_1[0x248];
      iVar8 = FUN_00b0e330();
      if (iVar8 == 0) {
        fVar1 = fVar1 + 0.5;
      }
      if ((float)param_1[0x435] <= fVar1 * fVar1 * *(float *)(&DAT_018a7aa8 + param_1[0x44e] * 0x14)
         ) {
                    /* WARNING: Could not recover jumptable at 0x00b15471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 00B15480  FUN_00b15480  size=1694  [between]
void __fastcall FUN_00b15480(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float10 fVar6;
  undefined *puVar7;
  undefined4 uVar8;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [88];
  
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    piVar4 = (int *)FUN_00a7c8a0();
    uVar5 = 0;
    if (piVar4 != (int *)0x0) {
      puVar7 = &DAT_01b34e80;
      (**(code **)(*piVar4 + 4))(&DAT_01b34e80);
      iVar3 = FUN_00dd6d70(puVar7);
      uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
    }
    if ((uVar5 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
      FUN_00a7c8a0();
    }
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x400000;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e6fe0(0x10000);
    }
    FUN_00b03020(0);
    *(undefined4 *)(param_1 + 0x15a0) = 0;
    pfVar1 = (float *)(param_1 + 0x960);
    fStack_78 = *(float *)(param_1 + 0x1584) * 0.0;
    fStack_80 = fStack_78 - *(float *)(param_1 + 0x1588);
    fStack_7c = *(float *)(param_1 + 0x1588) * 0.0 - *(float *)(param_1 + 0x1580) * 0.0;
    fStack_78 = *(float *)(param_1 + 0x1580) - fStack_78;
    *pfVar1 = fStack_80;
    *(float *)(param_1 + 0x964) = fStack_7c;
    *(float *)(param_1 + 0x968) = fStack_78;
    fVar2 = *(float *)(param_1 + 0x968) * *(float *)(param_1 + 0x968) +
            *pfVar1 * *pfVar1 + *(float *)(param_1 + 0x964) * *(float *)(param_1 + 0x964);
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      *(undefined4 *)(param_1 + 0x964) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x968) = 0;
    }
    *pfVar1 = *pfVar1 * 2.0;
    *(float *)(param_1 + 0x964) = *(float *)(param_1 + 0x964) * 2.0;
    *(float *)(param_1 + 0x968) = *(float *)(param_1 + 0x968) * 2.0;
    *(float *)(param_1 + 0x96c) = *(float *)(param_1 + 0x96c) * 2.0;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0x41c00000;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (uVar5 != 0) {
      fStack_70 = *(float *)(uVar5 + 0x40) + *(float *)(param_1 + 0x960);
      fStack_6c = *(float *)(uVar5 + 0x44) + *(float *)(param_1 + 0x964);
      fStack_68 = *(float *)(uVar5 + 0x48) + *(float *)(param_1 + 0x968);
      fStack_64 = *(float *)(uVar5 + 0x4c) + *(float *)(param_1 + 0x96c);
      FUN_00b02610(&fStack_70,0x3e0f5c29,0x3c8efa35);
    }
    if (0.34906584 <= ABS(*(float *)(param_1 + 0x15a0))) {
      *(undefined4 *)(param_1 + 0x940) = 0;
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    iVar3 = FUN_004b5e90();
    if (iVar3 != 0) {
      return;
    }
LAB_00b1571a:
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  case 2:
    if (uVar5 != 0) {
      if (*(float *)(param_1 + 0x15a0) <= 0.0) {
        uVar8 = 0xbefeadae;
      }
      else {
        uVar8 = 0x3efeadae;
      }
      D3DXQuaternionRotationAxis(auStack_60,param_1 + 0x1580,uVar8);
      FUN_00ddb9f0(auStack_5c,&fStack_6c);
      D3DXVec3TransformNormal(&stack0xffffff74,(float *)(param_1 + 0x1570),auStack_5c);
      fStack_80 = (fStack_80 + *(float *)(uVar5 + 0x40)) - *(float *)(param_1 + 0x1570);
      fStack_7c = (fStack_7c + *(float *)(uVar5 + 0x44)) - *(float *)(param_1 + 0x1574);
      fStack_78 = (fStack_78 + *(float *)(uVar5 + 0x48)) - *(float *)(param_1 + 0x1578);
      fStack_74 = (*(float *)(uVar5 + 0x4c) + fStack_74) - *(float *)(param_1 + 0x157c);
      fVar2 = ABS((*(float *)(uVar5 + 0x48) - *(float *)(param_1 + 0x48)) *
                  *(float *)(param_1 + 0x1588) +
                  *(float *)(param_1 + 0x1584) *
                  (*(float *)(uVar5 + 0x44) - *(float *)(param_1 + 0x44)) +
                  *(float *)(param_1 + 0x1580) *
                  (*(float *)(uVar5 + 0x40) - *(float *)(param_1 + 0x40)));
      if ((fVar2 <= 2.0) &&
         (ABS(*(float *)(param_1 + 0x15a0)) < 0.6632251 !=
          (ABS(*(float *)(param_1 + 0x15a0)) == 0.6632251))) {
        *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
      }
      if (((fVar2 < 0.15) &&
          (ABS(*(float *)(param_1 + 0x15a0)) < 0.567232 !=
           (ABS(*(float *)(param_1 + 0x15a0)) == 0.567232))) ||
         ((*(float *)(param_1 + 0x924) <= 0.0 || (iVar3 = FUN_004b5e90(), iVar3 == 0))))
      goto LAB_00b1571a;
      fVar6 = (float10)FUN_00b02710(&fStack_80);
      if ((*(int *)(param_1 + 0x940) != 0) && ((float10)1.5707964 < ABS(fVar6))) {
        *(float *)(param_1 + 0x960) = fStack_80;
        *(float *)(param_1 + 0x964) = fStack_7c;
        *(float *)(param_1 + 0x968) = fStack_78;
        *(float *)(param_1 + 0x96c) = fStack_74;
        FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x61c) = 3;
        return;
      }
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
      FUN_00b02610(&fStack_80,0x3e0f5c29,0x3c8efa35);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_004ba1b0();
    if (iVar3 == 0) {
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0);
    if (iVar3 != 0) {
      FUN_00b02610(param_1 + 0x960,0x3e4ccccd,0x3c8efa35);
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x61c) = 2;
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (uVar5 == 0) {
      return;
    }
    if (((2.5 < ABS((*(float *)(uVar5 + 0x48) - *(float *)(param_1 + 0x48)) *
                    *(float *)(param_1 + 0x1588) +
                    *(float *)(param_1 + 0x1584) *
                    (*(float *)(uVar5 + 0x44) - *(float *)(param_1 + 0x44)) +
                    *(float *)(param_1 + 0x1580) *
                    (*(float *)(uVar5 + 0x40) - *(float *)(param_1 + 0x40)))) ||
        (0.6981317 <= ABS(*(float *)(param_1 + 0x15a0)))) && (iVar3 = FUN_004b5e90(), iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x924) = 0x41c00000;
      *(undefined4 *)(param_1 + 0x61c) = 2;
      FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      return;
    }
    break;
  default:
    goto switchD_00b154f2_default;
  }
  iVar3 = FUN_004be0f0();
  if (6 < iVar3) {
    FUN_00b10f60(0x8e);
    return;
  }
switchD_00b154f2_default:
  return;
}

// 00B15B40  FUN_00b15b40  size=61  [between]
void __fastcall FUN_00b15b40(int param_1)

{
  if (*(int *)(param_1 + 0x4a0) == 5) {
    FUN_00b13f00();
  }
  if ((*(int *)(param_1 + 0x764) == 0) || (*(int *)(*(int *)(param_1 + 0x764) + 0x10c) != 0)) {
    FUN_00a93170();
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 00B15B80  FUN_00b15b80  size=789  [between]
void __fastcall FUN_00b15b80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  float fStack_74;
  float local_70 [4];
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  iVar6 = FUN_00a8cac0();
  if (iVar6 == 0) {
    FUN_00a9e290(&DAT_01647a9c,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar6 = FUN_00a12210(0);
    *(ushort *)(iVar6 + 0xa2) = *(ushort *)(iVar6 + 0xa2) & 0xfffb;
    iVar6 = FUN_00a12210(0);
    fVar3 = SQRT(*(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) +
                 *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10) +
                 *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18));
    fVar4 = SQRT(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                 *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                 *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
    fVar5 = SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                 *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                 *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30));
    fVar1 = *(float *)(iVar6 + 0x28);
    fVar2 = *(float *)(iVar6 + 0x38);
    fVar10 = (float10)FUN_00ddbaa0(-(*(float *)(iVar6 + 0x18) / fVar5));
    fVar11 = (float10)fpatan((float10)(fVar1 / fVar5),(float10)(fVar2 / fVar5));
    local_60 = (float)fVar11;
    local_5c = (float)fVar10;
    fVar10 = (float10)fpatan((float10)*(float *)(iVar6 + 0x14) / (float10)fVar4,
                             (float10)*(float *)(iVar6 + 0x10) / (float10)fVar3);
    local_58 = (float)fVar10;
    local_70[0] = 0.0;
    local_70[1] = 0.40269;
    local_70[2] = 0.0;
    FUN_00ddc1d0(local_50,&local_60,5);
    D3DXVec3TransformNormal(local_70,local_70,local_50);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - fVar3;
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - fVar4;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - fStack_74;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) - local_70[0];
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar6 == 1) {
    iVar6 = FUN_00a94d60(&DAT_01647a9c);
    if (iVar6 != 0) {
      iVar6 = FUN_00a12210(0);
      puVar8 = (undefined4 *)(param_1 + 0xdf0);
      puVar9 = (undefined4 *)(iVar6 + 0x10);
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      iVar6 = FUN_00a12210(0);
      *(ushort *)(iVar6 + 0xa2) = *(ushort *)(iVar6 + 0xa2) | 4;
      iVar6 = FUN_00a12210(0);
      fVar3 = SQRT(*(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) +
                   *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10) +
                   *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18));
      fVar4 = SQRT(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                   *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                   *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
      fVar5 = SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                   *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                   *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30));
      fVar1 = *(float *)(iVar6 + 0x28);
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar10 = (float10)FUN_00ddbaa0(-(*(float *)(iVar6 + 0x18) / fVar5));
      fVar11 = (float10)fpatan((float10)(fVar1 / fVar5),(float10)(fVar2 / fVar5));
      local_60 = (float)fVar11;
      local_5c = (float)fVar10;
      fVar10 = (float10)fpatan((float10)*(float *)(iVar6 + 0x14) / (float10)fVar4,
                               (float10)*(float *)(iVar6 + 0x10) / (float10)fVar3);
      local_58 = (float)fVar10;
      local_70[0] = 0.0;
      local_70[1] = 0.40269;
      local_70[2] = 0.0;
      FUN_00ddc1d0(local_50,&local_60,5);
      D3DXVec3TransformNormal(local_70,local_70,local_50);
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + fVar3;
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar4;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + fStack_74;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + local_70[0];
      FUN_00a8caf0(0x90,0,0,0);
      return;
    }
  }
  return;
}

// 00B15EA0  FUN_00b15ea0  size=1160  [between]
void __fastcall FUN_00b15ea0(int param_1)

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
  int *piVar13;
  undefined4 uVar14;
  float10 fVar15;
  float10 fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 local_180 [2];
  undefined4 local_178;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined4 local_100 [12];
  undefined4 local_d0 [12];
  undefined4 local_a0 [12];
  undefined4 local_70 [12];
  undefined4 local_40 [15];
  
  iVar12 = FUN_00a8cac0();
  if (iVar12 == 0) {
    FUN_00a9e290(&DAT_01647aa8,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_00a96030(0,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar12 == 1) {
    iVar12 = FUN_00a95560(&DAT_01647aa8,0x42200000);
    if (iVar12 != 0) {
      iVar12 = FUN_00a81330();
      if (iVar12 == 0) {
        FUN_0040b190();
        local_180[0] = 10;
        local_178 = 7;
        iVar12 = FUN_00a12210(0x701);
        local_130 = *(undefined4 *)(iVar12 + 0x40);
        local_12c = *(undefined4 *)(iVar12 + 0x44);
        local_128 = *(undefined4 *)(iVar12 + 0x48);
        iVar12 = FUN_00a12210(0x701);
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
        fVar15 = (float10)FUN_00ddbaa0(-(*(float *)(iVar12 + 0x18) / fVar11));
        fVar9 = *(float *)(iVar12 + 0x14);
        fVar10 = *(float *)(iVar12 + 0x10);
        fVar16 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
        local_124 = (float)fVar16;
        local_120 = (float)fVar15;
        *(int *)(param_1 + 0xe60) = *(int *)(param_1 + 0xe60) + 1;
        fVar15 = (float10)fpatan((float10)fVar9 /
                                 (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                                 (float10)fVar10 /
                                 (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
        local_11c = (float)fVar15;
        if (*(int *)(param_1 + 0xe60) < 10) {
          uVar17 = 0x20040;
        }
        else {
          uVar17 = 0x20045;
        }
        uVar17 = FUN_00a82090(&DAT_0163d54c,uVar17,local_180);
        FUN_00a7c970(uVar17);
        uVar17 = *(undefined4 *)(param_1 + 0x4f0);
        uVar19 = 0;
        uVar18 = 0x701;
        uVar14 = FUN_00a81330(0x701,0);
        FUN_00a8c5f0(0,uVar17,uVar14,uVar18,uVar19);
        FUN_00a81330();
        uVar17 = FUN_00a7c8a0();
        iVar12 = FUN_00445a70(uVar17);
        if (iVar12 != 0) {
          uVar17 = FUN_00a81330();
          FUN_00a7c970(uVar17);
        }
        FUN_00a81330();
        uVar17 = FUN_00a7c8a0();
        iVar12 = FUN_007545a0(uVar17);
        if (iVar12 != 0) {
          uVar17 = FUN_00a81330();
          FUN_0043ea10(0,uVar17);
          uVar17 = FUN_00a81330();
          FUN_0043ea10(1,uVar17);
        }
      }
    }
    iVar12 = FUN_00a95560(&DAT_01647aa8,0x42e80000);
    if (iVar12 != 0) {
      iVar12 = FUN_00a81330();
      if (iVar12 != 0) {
        if (*(int *)(param_1 + 0xe60) < 10) {
          iVar12 = FUN_00a81330();
          if (iVar12 != 0) {
            puVar20 = local_d0;
            local_d0[0] = 1;
            FUN_00a81330(puVar20);
            FUN_00a7c8a0();
            FUN_00a9d720(puVar20);
            puVar20 = local_a0;
            local_a0[0] = 2;
            FUN_00a7c8a0(puVar20);
            FUN_00a9d720(puVar20);
            *(uint *)(param_1 + 0xe5c) = *(uint *)(param_1 + 0xe5c) ^ 1;
            FUN_00a9e060(0);
            FUN_00a7c950();
          }
        }
        else {
          puVar20 = local_40;
          local_40[0] = 1;
          FUN_00a81330(puVar20);
          FUN_00a7c8a0();
          FUN_00a9d720(puVar20);
          iVar12 = FUN_00a81330();
          if (iVar12 != 0) {
            puVar20 = local_100;
            local_100[0] = 2;
            FUN_00a7c8a0(puVar20);
            FUN_00a9d720(puVar20);
          }
          iVar12 = FUN_00a81330();
          if (iVar12 != 0) {
            puVar20 = local_70;
            local_70[0] = 2;
            FUN_00a7c8a0(puVar20);
            FUN_00a9d720(puVar20);
          }
          FUN_00a9e060(0);
          FUN_00a7c950();
          *(undefined4 *)(param_1 + 0xe60) = 0;
        }
      }
    }
    iVar12 = FUN_00a94d60(&DAT_01647aa8);
    if (iVar12 != 0) {
      piVar13 = (int *)FUN_00a6e640();
      iVar12 = (**(code **)(*piVar13 + 0x24))(0x2712,1,1);
      if (iVar12 == 0) {
        FUN_00a8cb60(0);
        return;
      }
      FUN_00aa9280(5);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
  }
  else if (iVar12 == 2) {
    piVar13 = (int *)FUN_00a6e640();
    iVar12 = (**(code **)(*piVar13 + 0x24))(0x2712,1,1);
    if (iVar12 == 0) {
      FUN_00a8cb60(0);
      return;
    }
  }
  return;
}

// 00B16330  FUN_00b16330  size=57  [between]
void FUN_00b16330(void)

{
  int iVar1;
  
  FUN_00a9d860();
  FUN_00a8cab0();
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x97) {
    FUN_00b15ea0();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B16370  FUN_00b16370  size=130  [between]
void __fastcall FUN_00b16370(int param_1)

{
  int iStack_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(int **)(param_1 + 0x7b0) != (int *)0x0) && (*(int *)(param_1 + 0xe44) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x28))(&local_54,0);
    uStack_48 = *(undefined4 *)(iStack_5c + 0x100);
    uStack_44 = *(undefined4 *)(iStack_5c + 0x104);
    uStack_40 = *(undefined4 *)(iStack_5c + 0x108);
    uStack_3c = *(undefined4 *)(iStack_5c + 0x10c);
    uStack_38 = *(undefined4 *)(iStack_5c + 0x110);
    uStack_34 = *(undefined4 *)(iStack_5c + 0x114);
    uStack_30 = *(undefined4 *)(iStack_5c + 0x118);
    uStack_2c = *(undefined4 *)(iStack_5c + 0x11c);
    uStack_28 = *(undefined4 *)(iStack_5c + 0x120);
    uStack_24 = *(undefined4 *)(iStack_5c + 0x124);
    uStack_20 = *(undefined4 *)(iStack_5c + 0x128);
    uStack_1c = *(undefined4 *)(iStack_5c + 300);
    local_54 = *(undefined4 *)(iStack_5c + 0xf4);
    uStack_50 = *(undefined4 *)(iStack_5c + 0xf8);
    uStack_4c = *(undefined4 *)(iStack_5c + 0xfc);
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_01005140(param_1 + 0x10);
    switchD_0080dbae::default();
  }
  return;
}

// 00B16400  FUN_00b16400  size=780  [between]
void __thiscall FUN_00b16400(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  float10 fVar5;
  
  if (param_3 == 0) {
    return;
  }
  switch(param_2) {
  case 1:
    if (*(int *)(param_3 + 0x4f0) != 0) {
      uVar1 = FUN_00a7c7f0();
      FUN_00a7c960(uVar1);
      uVar1 = FUN_009f8b40();
      FUN_009f8ae0(uVar1);
      return;
    }
    break;
  case 2:
    FUN_00b10f60(0x61);
    return;
  case 3:
    FUN_00b10f60(99);
    return;
  case 4:
    FUN_00b10f60(0x65);
    return;
  case 5:
    FUN_00b10f60(0x67);
    return;
  case 6:
    if (param_1[0x128] == 0xf) {
      uVar1 = 0x6e;
    }
    else {
      uVar1 = 0x6d;
    }
    FUN_00b10f60(uVar1);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    uVar1 = FUN_00a8eea0();
    FUN_00a8ee20(uVar1);
    return;
  case 7:
    FUN_00b10f60(0x69);
    return;
  case 8:
    if (param_1[0x128] != 0xf) {
      FUN_00b10f60(0x6b);
      return;
    }
    FUN_00b10f60(0x6c);
    return;
  case 9:
    iVar3 = (**(code **)(*param_1 + 0x1fc))();
    if (iVar3 != 0) {
      return;
    }
    if (param_1[0x139] != 0) {
      return;
    }
    FUN_00b03020(1);
    if (param_1[0x128] == 0xf) {
      iVar3 = FUN_00a12210(0xf00);
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x1000;
      }
      FUN_00b10f60(0x2d);
      FUN_00b08850((int)(char)param_1[0x2ea]);
    }
    else {
      FUN_00b10f60(0x31);
      if (param_1[0x1d9] != 0) {
        FUN_008e0ae0(1);
      }
    }
    pcVar4 = *(code **)(*param_1 + 0x220);
    param_1[0x245] = *(int *)(param_3 + 0x914);
    param_1[0x441] = *(int *)(param_3 + 0x1104);
    (*pcVar4)(0x40a00000);
    param_1[0x128] = 3;
    param_1[0x44e] = 2;
    if ((int *)param_1[0x1d5] == (int *)0x0) {
      return;
    }
    iVar3 = (**(code **)(*(int *)param_1[0x1d5] + 0x24))(0xe);
    uVar1 = FUN_00ac4780();
    switch(uVar1) {
    case 0:
      pcVar4 = *(code **)(*(int *)param_1[0x1d5] + 0x5c);
      break;
    default:
      goto switchD_00b165d8_caseD_1;
    case 2:
      pcVar4 = *(code **)(*(int *)param_1[0x1d5] + 100);
      break;
    case 3:
      pcVar4 = *(code **)(*(int *)param_1[0x1d5] + 0x6c);
      break;
    case 4:
      pcVar4 = *(code **)(*(int *)param_1[0x1d5] + 0x74);
    }
    fVar5 = (float10)(*pcVar4)(0xe);
    if ((float10)0 < fVar5) {
      iVar3 = FUN_00fdbc60();
    }
switchD_00b165d8_caseD_1:
    iVar2 = FUN_00a8eea0();
    if (iVar3 < iVar2) {
      FUN_00a8ee20(iVar3);
      return;
    }
    break;
  case 10:
    iVar3 = (**(code **)(*param_1 + 0x1fc))();
    if ((iVar3 == 0) && (param_1[0x139] == 0)) {
      FUN_00b03020(1);
      if (param_1[0x128] == 0xf) {
        iVar3 = FUN_00a12210(0xf00);
        if (iVar3 != 0) {
          *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x1000;
        }
        FUN_00b10f60(0x34);
        FUN_00b08850((int)(char)param_1[0x2ea]);
      }
      else {
        FUN_00b10f60(0x3b);
        if (param_1[0x1d9] != 0) {
          FUN_008e0ae0(1);
        }
      }
      pcVar4 = *(code **)(*param_1 + 0x220);
      param_1[0x245] = *(int *)(param_3 + 0x914);
      param_1[0x441] = *(int *)(param_3 + 0x1104);
      (*pcVar4)(0x40a00000);
      param_1[0x128] = 3;
      param_1[0x44e] = 2;
    }
  }
  return;
}

// 00B16750  FUN_00b16750  size=75  [between]
void __thiscall FUN_00b16750(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9d00;
    (**(code **)(*piVar2 + 4))(&DAT_01be9d00);
    iVar1 = FUN_00dd6d70(puVar3);
    if (iVar1 != 0) {
      FUN_00b16400(param_2,param_1);
    }
  }
  return;
}

// 00B167A0  FUN_00b167a0  size=429  [between]
void __fastcall FUN_00b167a0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if ((*(int *)(param_1 + 0x1680) == 0) && ((*(uint *)(param_1 + 0x1124) & 0x20000000) == 0)) {
    fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x10d0) + 0x50);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)*(float *)(param_1 + 0x94)));
    if ((3.2399998 < *(float *)(param_1 + 0xa90)) || ((float10)0.7853982 <= ABS(fVar4))) {
      if (*(float *)(param_1 + 0xa90) < *(float *)(param_1 + 0x12d4) * *(float *)(param_1 + 0x12d4))
      {
        FUN_00b10f60(100);
        FUN_00b16750(3);
        return;
      }
    }
    else {
      if ((*(float *)(param_1 + 0xa90) <= 2.25) && (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 1) != 0))
      {
        FUN_00b10f60(0x6c);
        FUN_00b16750(8);
        return;
      }
      bVar1 = false;
      iVar3 = FUN_00ac82f0();
      if ((iVar3 != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
        fVar4 = (float10)FUN_00a8ec30(param_1 + 0x40);
        iVar3 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x84))();
        fVar4 = (float10)FUN_00ddba30((float)fVar4 - *(float *)(iVar3 + 4));
        if (ABS(fVar4) < (float10)0.7853982 != (ABS(fVar4) == (float10)0.7853982)) {
          bVar1 = true;
        }
      }
      if ((30.0 < *(float *)(param_1 + 0x920)) || (bVar1)) {
        uVar2 = FUN_00dde2d0(0,100);
        if (((uVar2 & 1) == 0) || (bVar1)) {
          uVar2 = FUN_00dde2d0(0,100);
          if ((uVar2 & 1) == 0) {
            FUN_00b10f60(0x66);
            FUN_00b16750(4);
            return;
          }
          FUN_00b10f60(0x68);
          FUN_00b16750(5);
          return;
        }
        FUN_00b10f60(0x6a);
        FUN_00b16750(7);
      }
    }
  }
  return;
}

// 00B16950  FUN_00b16950  size=310  [between]
void __fastcall FUN_00b16950(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  undefined *puVar6;
  
  if (*(int *)(param_1 + 0x1680) != 0) {
    FUN_00b10f60(0x62);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01be9d00;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d00);
      iVar2 = FUN_00dd6d70(puVar6);
      if (iVar2 != 0) {
        FUN_00b10f60(0x61);
      }
    }
  }
  fVar5 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x10d0) + 0x50);
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 - (float10)*(float *)(param_1 + 0x94)));
  if ((*(float *)(param_1 + 0xa90) <= 3.2399998) && (ABS(fVar5) < (float10)0.7853982)) {
    uVar4 = FUN_00dde2d0(0,100);
    if ((uVar4 & 1) == 0) {
      FUN_00b10f60(0x66);
      FUN_00b16750(4);
    }
    else {
      FUN_00b10f60(0x68);
      FUN_00b16750(5);
    }
  }
  fVar1 = *(float *)(param_1 + 0x12d4) * 1.1;
  if (fVar1 * fVar1 < *(float *)(param_1 + 0xa90)) {
    FUN_00b10f60(0x62);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01be9d00;
      (**(code **)(*piVar3 + 4))(&DAT_01be9d00);
      iVar2 = FUN_00dd6d70(puVar6);
      if (iVar2 != 0) {
        FUN_00b10f60(0x61);
      }
    }
  }
  return;
}

// 00B16A90  FUN_00b16a90  size=102  [between]
void __fastcall FUN_00b16a90(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x1680) == 0) {
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x10d0) + 0x50);
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)*(float *)(param_1 + 0x94)));
    if ((ABS(fVar2) < (float10)0.7853982) && (*(int *)(param_1 + 0x10b0) != 0x68)) {
      iVar1 = FUN_00a8c760(0xf);
      if (iVar1 != 0) {
        FUN_00b10f60(0x68);
        FUN_00b16750(5);
      }
    }
  }
  return;
}

// 00B16B00  FUN_00b16b00  size=102  [between]
void __fastcall FUN_00b16b00(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x1680) == 0) {
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x10d0) + 0x50);
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)*(float *)(param_1 + 0x94)));
    if ((ABS(fVar2) < (float10)0.7853982) && (*(int *)(param_1 + 0x10b0) != 0x66)) {
      iVar1 = FUN_00a8c760(0xf);
      if (iVar1 != 0) {
        FUN_00b10f60(0x66);
        FUN_00b16750(4);
      }
    }
  }
  return;
}

// 00B16B70  FUN_00b16b70  size=370  [between]
void __fastcall FUN_00b16b70(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float10 fVar4;
  undefined *puVar5;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9d00;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d00);
      iVar1 = FUN_00dd6d70(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x65,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (uVar3 != 0) {
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      D3DXMatrixRotationY(local_50,*(undefined4 *)(uVar3 + 0x94));
      D3DXVec3TransformNormal(&stack0xffffff98,iVar1 + 0x50,&fStack_58);
      param_1[0x14] = (int)(*(float *)(uVar3 + 0x50) + fStack_60);
      param_1[0x15] = (int)(*(float *)(uVar3 + 0x54) + fStack_5c);
      param_1[0x16] = (int)(*(float *)(uVar3 + 0x58) + fStack_58);
      param_1[0x17] = (int)(*(float *)(uVar3 + 0x5c) + fStack_54);
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(uVar3 + 0x94));
      param_1[0x25] = (int)(float)fVar4;
    }
  }
  iVar1 = FUN_00a8c760(9);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b10f60(0x69);
  }
  return;
}

// 00B16CF0  FUN_00b16cf0  size=89  [between]
void __fastcall FUN_00b16cf0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(float *)(param_1 + 0xa90) <= 9.0)) {
    uVar2 = FUN_00dde2d0(0,100);
    if ((uVar2 & 1) != 0) {
      FUN_00b10f60(0x68);
      FUN_00b16750(5);
      return;
    }
    FUN_00b10f60(0x66);
    FUN_00b16750(4);
  }
  return;
}

// 00B16D50  FUN_00b16d50  size=153  [between]
void __fastcall FUN_00b16d50(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x66,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(9);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b10f60(0x6a);
  }
  return;
}

// 00B16DF0  FUN_00b16df0  size=218  [between]
void __fastcall FUN_00b16df0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(param_1[0x541],0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x449] = param_1[0x449] & 0xffffefff;
    if (param_1[0x540] == 0) {
      param_1[0x540] = 1;
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b10f60(0xaa);
  }
  return;
}

// 00B16ED0  FUN_00b16ed0  size=26  [between]
void FUN_00b16ed0(void)

{
  int iVar1;
  
  iVar1 = FUN_00ac4690();
  if (iVar1 != 0) {
    FUN_00b10f60(0xae);
  }
  return;
}

// 00B16EF0  FUN_00b16ef0  size=153  [between]
void __fastcall FUN_00b16ef0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x10d0) != 0) &&
       (*(int *)(*(int *)(param_1 + 0x10d0) + 0x4b0) == 0x12040)) &&
      (iVar2 = FUN_00b0e330(), iVar2 != 0)) &&
     ((ABS(*(float *)(param_1 + 0xa9c)) < 1.5707964 && (*(float *)(param_1 + 0xa90) <= 64.0)))) {
    iVar2 = FUN_00a8cab0();
    if ((iVar2 != 0x11) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x12)) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if (fVar1 <= 0.0) {
      FUN_00b10f60(0xaf);
    }
  }
  return;
}

// 00B16F90  FUN_00b16f90  size=370  [between]
void __fastcall FUN_00b16f90(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  
  iVar3 = FUN_00a81330();
  iVar4 = 0;
  if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (-1 < param_1[0x3fe])) {
    iVar4 = FUN_00a12210(param_1[0x3ff]);
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(8,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if (iVar4 != 0) {
    pfVar5 = (float *)(iVar4 + 0x40);
    FUN_00b02610(pfVar5,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x12] - *(float *)(iVar4 + 0x48);
    fVar2 = fVar1 * fVar1 + ((float)param_1[0x10] - *pfVar5) * ((float)param_1[0x10] - *pfVar5);
    fVar1 = (float)param_1[0x25];
    fVar6 = (float10)FUN_00a8ec30(pfVar5);
    fVar6 = (float10)FUN_00ddba30((float)((float10)fVar1 - fVar6));
    if (param_1[0x3ff] == 0xf05) {
      if (fVar2 < 0.25) {
        FUN_00b10f60(0xb4);
        return;
      }
    }
    else if ((fVar2 < 9.0) && (ABS(fVar6) < (float10)0.5235988)) {
                    /* WARNING: Could not recover jumptable at 0x00b170f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b17029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B17110  FUN_00b17110  size=76  [between]
void __thiscall FUN_00b17110(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00a7c970(param_2);
  if (param_2 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)FUN_009f8b60();
      FUN_009f8ae0(*puVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  FUN_00b10f60(0x5b);
  return;
}

// 00B17170  FUN_00b17170  size=8  [between]
void FUN_00b17170(void)

{
  FUN_00b10f60(0x5b);
  return;
}

// 00B17180  Em0040::vf54  size=50  [class]
void __fastcall Em0040::vf54(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 6:
  case 7:
    FUN_00b04660();
    BehaviorEmBase::vf54();
    return;
  case 10:
    FUN_00b16370();
  }
  BehaviorEmBase::vf54();
  return;
}

// 00B171E0  Em0040::vf268  size=1686  [class]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall Em0040::vf268(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined8 uVar5;
  int local_38 [3];
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1[0x139] == 0) {
    local_20 = param_4[8];
    local_1c = param_4[9];
    local_18 = param_4[10];
    local_14 = 0x3f800000;
    switch(*param_4) {
    case 2:
      FUN_00a883f0(4,0,&local_20);
      return 0;
    case 3:
      iVar2 = FUN_00c1a130(DAT_01d5bad4,(int)*(short *)((int)param_1 + 0xab2));
      if (iVar2 == 0) {
        FUN_00c1a160(DAT_01d5bad4,(int)*(short *)((int)param_1 + 0xab2),(int)(short)param_1[0x2ad]);
      }
      if ((((param_1[0x128] != 5) && (param_1[0x44e] == 2)) && (param_1[0x186] != 0x1f)) &&
         (((iVar2 = (**(code **)(*param_1 + 0x1fc))(), iVar2 == 0 && (param_1[0x139] == 0)) &&
          ((param_1[0x449] & 0x20800U) == 0)))) {
        if (param_1[0x42d] == -1) {
          param_1[0x42d] = 6;
        }
        return 1;
      }
      break;
    case 9:
      iVar2 = FUN_00a8cab0();
      if (iVar2 == 0x59) {
        local_38[2] = param_1[0x10];
        local_2c = param_1[0x11];
        local_28 = param_1[0x12];
        local_24 = param_1[0x13];
        local_38[0] = 0;
        local_38[1] = 0;
        FUN_00ac81f0(local_38 + 2,local_38,local_38 + 1);
        if (local_38[0] == 0) {
          iVar2 = FUN_00ac8120();
          if (iVar2 != 0) {
            local_38[2] = *(int *)(iVar2 + 0x40);
            local_2c = *(int *)(iVar2 + 0x44);
            local_28 = *(int *)(iVar2 + 0x48);
            local_24 = *(int *)(iVar2 + 0x4c);
            FUN_00ac81f0(local_38 + 2,local_38,local_38 + 1);
            if (local_38[0] != 0) {
              return 0;
            }
          }
          piVar3 = (int *)FUN_00ac8120();
          if ((piVar3 == (int *)0x0) ||
             ((iVar2 = (**(code **)(*piVar3 + 0x230))(), iVar2 == 0 &&
              (iVar2 = (**(code **)(*piVar3 + 0x234))(), iVar2 == 0)))) {
            FUN_00b10f60(0x2a);
            return 1;
          }
        }
      }
      else {
        iVar2 = FUN_00a8cab0();
        if (iVar2 == 0xb5) {
          FUN_00b10f60(0xb6);
          return 1;
        }
      }
      break;
    case 0xb:
      if ((((param_1[0x449] & 0x80000U) == 0) && (param_2 != 0)) &&
         (((param_1[0x449] & 0x20000U) == 0 && (param_1[0x44e] == 2)))) {
        FUN_00a7c970(*(undefined4 *)(param_2 + 0x4f0));
        iVar2 = FUN_00a8cab0();
        if ((iVar2 != 0x78) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x79)) {
          uVar1 = FUN_00dde2a0(0,100);
          if ((uVar1 & 1) == 0) {
            param_1[0x52c] = _DAT_01880d30;
            param_1[0x52d] = _DAT_01880d34;
            param_1[0x52e] = _DAT_01880d38;
            iVar2 = _DAT_01880d3c;
          }
          else {
            param_1[0x52c] = _DAT_01880d20;
            param_1[0x52d] = _DAT_01880d24;
            param_1[0x52e] = _DAT_01880d28;
            iVar2 = _DAT_01880d2c;
          }
          param_1[0x52f] = iVar2;
          FUN_00b10f60(0x78);
        }
        return 1;
      }
      break;
    case 0xc:
      if (((((param_1[0x449] & 0x80000U) == 0) && (param_2 != 0)) &&
          ((param_1[0x449] & 0x20000U) == 0)) && (param_1[0x44e] == 2)) {
        FUN_00a7c970(*(undefined4 *)(param_2 + 0x4f0));
        iVar2 = FUN_00a8cab0();
        if ((iVar2 != 0x78) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x79)) {
          param_1[0x52c] = _DAT_01b34e60;
          param_1[0x52d] = _DAT_01b34e64;
          param_1[0x52e] = _DAT_01b34e68;
          param_1[0x52f] = _DAT_01b34e6c;
          FUN_00b10f60(0x78);
        }
        return 1;
      }
      break;
    case 0xd:
      if (param_2 != 0) {
        uVar5 = FUN_00b02780();
        if (((int)uVar5 != 0) && (param_1[0x44e] == 2)) {
          FUN_00a7c970(*(undefined4 *)((int)((ulonglong)uVar5 >> 0x20) + 0x4f0));
          FUN_00b10f60(0x82);
          return 1;
        }
      }
      break;
    case 0xe:
      if (((((param_1[0x449] & 0x400000U) == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
          (iVar2 = FUN_004b7e20(param_2), iVar2 != 0)) &&
         (((param_1[0x449] & 0x20000U) == 0 && (param_1[0x44e] == 2)))) {
        fVar4 = (float10)FUN_00dde300(0x3dcccccd,0x3f000000);
        param_1[0x531] = (int)(float)(fVar4 * (float10)60.0);
        FUN_00a7c970(*(undefined4 *)(param_2 + 0x4f0));
        FUN_00b10f60(0x7b);
        return 1;
      }
      break;
    case 0x11:
      if ((param_1[0x44e] == 2) && (param_1[0x128] == 5)) {
        param_1[0x449] = param_1[0x449] | 0x80000;
        return 1;
      }
      break;
    case 0x12:
      if ((param_1[0x128] == 5) &&
         ((iVar2 = FUN_00a8cab0(), iVar2 == 0x88 || (iVar2 = FUN_00a8cab0(), iVar2 == 0x89)))) {
        param_1[0x511] = param_4[0xb];
        param_1[0x512] = param_4[8];
        param_1[0x513] = param_4[9];
        param_1[0x534] = param_4[10];
        FUN_00b10f60(0x87);
        return 1;
      }
      break;
    case 0x13:
      if ((param_1[0x128] == 5) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
        param_1[0x5a8] = 1;
        iVar2 = FUN_00a8cab0();
        if ((iVar2 == 0x88) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x89)) {
          FUN_00b10f60(0x8d);
        }
        return 1;
      }
      break;
    case 0x14:
      if (param_1[0x128] == 5) {
        param_1[600] = param_4[8];
        param_1[0x259] = param_4[9];
        param_1[0x25a] = param_4[10];
        param_1[0x25b] = 0x3f800000;
        FUN_00b10f60(0x8f);
        return 1;
      }
    default:
      break;
    case 0x15:
      iVar2 = FUN_00ac4710(param_4[0xb]);
      if ((iVar2 != 0) && (param_1[0x186] == 4)) {
        FUN_00b10f60(4);
      }
      return 1;
    case 0x1a:
      param_1[0x139] = 1;
      FUN_00a8ee20(0);
      (**(code **)(*param_1 + 0x220))(0x41200000);
      FUN_00b10f60(0x44);
      return 1;
    case 0x1d:
      if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
        FUN_00b0ff20();
        return 0;
      }
    }
  }
  return 0;
}

// 00B178D0  FUN_00b178d0  size=811  [between]
void __fastcall FUN_00b178d0(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int local_94;
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
  undefined1 local_60 [92];
  
  if ((*(byte *)(param_1 + 0x1124) & 0x40) == 0) {
    return;
  }
  *(int *)(param_1 + 0x10f0) = *(int *)(param_1 + 0x10f0) + -1;
  if (1 < *(int *)(param_1 + 0x10f0)) {
    return;
  }
  if (*(int *)(param_1 + 0x10f0) < 1) {
    *(undefined4 *)(param_1 + 0x10f0) = 10;
    local_94 = 0;
    iVar4 = param_1 + 0x1130;
    if (*(int *)(param_1 + 0x10f4) == 0) {
      iVar2 = FUN_00907640(iVar4,&local_94,0);
      if ((iVar2 == 0) || (iVar2 = FUN_00b0fe70(local_94), iVar2 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x10;
      }
      else {
        *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffffef;
      }
      *(undefined4 *)(param_1 + 0x10f4) = 1;
      RayCastManager::getWork(iVar4);
      return;
    }
    iVar2 = FUN_00907560(iVar4,0,0,&local_94,0,0,0,0);
    if ((iVar2 == 0) || (local_94 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xfffffffb;
      *(undefined4 *)(param_1 + 0x10f4) = 0;
      RayCastManager::getWork(iVar4);
      return;
    }
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 4;
    *(undefined4 *)(param_1 + 0x10f4) = 0;
    RayCastManager::getWork(iVar4);
    return;
  }
  if (*(float *)(&DAT_018a7ab8 + *(int *)(param_1 + 0x1138) * 0x14) < *(float *)(param_1 + 0x10d4))
  {
    *(undefined4 *)(param_1 + 0x10f0) = 10;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xfffffffb;
    return;
  }
  local_b0 = *(float *)(param_1 + 0x40);
  local_ac = *(float *)(param_1 + 0x44);
  local_a8 = *(float *)(param_1 + 0x48);
  local_a4 = *(float *)(param_1 + 0x4c);
  local_90 = *(float *)(param_1 + 0x10e0);
  local_8c = *(float *)(param_1 + 0x10e4);
  local_88 = *(float *)(param_1 + 0x10e8);
  local_84 = *(float *)(param_1 + 0x10ec);
  FUN_00a8bac0(&local_80,0x3f19999a);
  local_b0 = local_80 + local_b0;
  local_ac = local_7c + local_ac;
  local_a8 = local_78 + local_a8;
  local_a4 = local_74 + local_a4;
  pfVar3 = (float *)FUN_00a8b8a0(&local_70,0x3f000000);
  local_b0 = local_b0 + *pfVar3;
  local_ac = pfVar3[1] + local_ac;
  local_a8 = pfVar3[2] + local_a8;
  local_a4 = pfVar3[3] + local_a4;
  local_90 = local_80 + local_90;
  local_8c = local_7c + local_8c;
  local_88 = local_78 + local_88;
  local_84 = local_74 + local_84;
  if (*(int *)(param_1 + 0x10d0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_009f8b40();
  }
  uVar5 = iVar4 << 0x10 | 7;
  if (*(int *)(param_1 + 0x10f4) == 0) {
    local_70 = local_90 - local_b0;
    local_6c = local_8c - local_ac;
    local_68 = local_88 - local_a8;
    local_64 = local_84 - local_a4;
    FUN_0090fa30(param_1 + 0x1130,0,&local_b0,0x3e4ccccd,&local_70,uVar5,"em0040");
    return;
  }
  FUN_00468970(param_1 + 0x1130,0,&local_b0,&local_90,uVar5,0,0,0,"em0040",0,0);
  HavokRayCastManager::set(local_60);
  return;
}

// 00B17C00  Em0040::vf188  size=79  [class]
void __thiscall Em0040::vf188(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  if (param_2 == 9) {
    FUN_00b10f60(0x47);
    (**(code **)(*param_1 + 0x220))(0x41200000);
  }
  return;
}

// 00B17C50  FUN_00b17c50  size=60  [between]
undefined4 FUN_00b17c50(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00dde300(0,0x3f800000);
  if (fVar1 < (float10)0.7) {
    FUN_00b10f60(0x2b);
    return 1;
  }
  return 0;
}

// 00B17C90  FUN_00b17c90  size=200  [between]
undefined4 __fastcall FUN_00b17c90(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  fVar1 = *(float *)(param_1 + 0x40) - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
  fVar2 = *(float *)(param_1 + 0x48) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
  if (NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0)) {
    if ((fVar1 < 2.25 != (fVar1 == 2.25)) && (iVar3 = FUN_00b067f0(), iVar3 == 0)) {
      FUN_00b10f60(0x25);
      return 1;
    }
    iVar3 = FUN_00ac4640(1);
    if ((iVar3 == 0) || (iVar3 = FUN_00ac4670(param_1 + 0x10e0,1), iVar3 != 0)) {
      if (((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0x4a0) != 0x10)) &&
         ((uVar4 = FUN_00dde2d0(0,100), (uVar4 & 3) != 0 || (iVar3 = FUN_00b067f0(), iVar3 != 0))))
      {
        FUN_00b10f60(0x24);
        return 1;
      }
      FUN_00b10f60(0x1f);
      return 1;
    }
  }
  return 0;
}

// 00B17D60  FUN_00b17d60  size=91  [between]
undefined4 __fastcall FUN_00b17d60(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x1124) & 0x400) == 0) {
    iVar1 = FUN_00ac4640(1);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4670(param_1 + 0x10e0,1);
      if ((iVar1 == 0) && (*(short *)(param_1 + 0xab2) != -1)) {
        iVar1 = FUN_00ac4690();
        if (iVar1 != 0) {
          FUN_00b10f60(4);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00B17DC0  FUN_00b17dc0  size=238  [between]
undefined4 __fastcall FUN_00b17dc0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x1124) & 0x400) == 0) {
    if (((*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) <
          *(float *)(param_1 + 0x10d4) ==
          (*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) ==
          *(float *)(param_1 + 0x10d4))) && (iVar1 = FUN_00b0e330(), iVar1 != 0)) &&
       (*(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44) <= 2.0)) {
      return 0;
    }
    iVar1 = FUN_00ac4640(1);
    if ((iVar1 != 0) && (iVar1 = FUN_00ac4670(param_1 + 0x10e0,1), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x4a0) == 5) || (3 < *(int *)(param_1 + 0x814))) {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xfffffff7;
      iVar1 = FUN_00b0e330();
      if (iVar1 == 0) {
        iVar1 = FUN_00aa4a90();
        if ((((iVar1 != 0) && ((*(byte *)(param_1 + 0x1124) & 1) == 0)) &&
            (*(int *)(param_1 + 0x16b4) == 0)) && (*(int *)(param_1 + 0x4a0) != 5)) {
          FUN_00b10f60(3);
          return 1;
        }
        iVar1 = FUN_00b02ff0();
        if (iVar1 != 0) {
          return 0;
        }
      }
      FUN_00b10f60(2);
      return 1;
    }
  }
  return 0;
}

// 00B17EB0  FUN_00b17eb0  size=157  [between]
undefined4 __fastcall FUN_00b17eb0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0x1124) & 0x400) != 0) ||
     ((*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) < *(float *)(param_1 + 0x10d4)
       == (*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) ==
          *(float *)(param_1 + 0x10d4)) && (iVar2 = FUN_00b0e330(), iVar2 != 0)))) {
    return 0;
  }
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xfffffff7;
  fVar1 = *(float *)(param_1 + 0x10d4);
  if ((!NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0)) &&
     ((((iVar2 = FUN_00aa4a90(), iVar2 != 0 && ((*(byte *)(param_1 + 0x1124) & 1) == 0)) &&
       (*(int *)(param_1 + 0x16b4) == 0)) && (*(int *)(param_1 + 0x4a0) != 5)))) {
    FUN_00b10f60(3);
    return 1;
  }
  FUN_00b10f60(2);
  return 1;
}

// 00B17F50  Em0040::vf34C  size=253  [class]
void __fastcall Em0040::vf34C(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xfffdffff;
  if (*(int *)(param_1 + 0x10b4) != -1) {
    FUN_00b10f60(*(int *)(param_1 + 0x10b4));
    return;
  }
  if ((((*(uint *)(param_1 + 0x1124) & 0x10000000) != 0) && (*(int *)(param_1 + 0x4a0) != 0xe)) &&
     (*(int *)(param_1 + 0x4a0) != 0xf)) {
    FUN_00b10f60(0x19);
    return;
  }
  if (*(int *)(param_1 + 0x1138) == 3) {
    FUN_00b10f60(0x5b);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4a0);
  if (iVar1 == 5) {
    iVar1 = FUN_00b0b740();
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0xdc0) & 0x800000) != 0)) {
      FUN_00b10f60(0x81);
      return;
    }
    FUN_00b10f60(0x7e);
    return;
  }
  if (iVar1 == 0x11) {
    FUN_00b10f60(0xb0);
    return;
  }
  if (iVar1 == 0x10) {
    FUN_00b10f60(0xad);
    return;
  }
  if (iVar1 == 0x12) {
    if ((*(byte *)(param_1 + 0xb00) & 0x40) != 0) {
      FUN_00b10f60(0xb6);
      return;
    }
    FUN_00b10f60(0xb5);
    return;
  }
  if (iVar1 == 0xe) {
    FUN_00b10f60(0x61);
    return;
  }
  if (iVar1 == 0xf) {
    FUN_00b10f60(0x62);
    return;
  }
  FUN_00b10f60(0);
  return;
}

// 00B18050  FUN_00b18050  size=337  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00b18050(int param_1)

{
  float fVar1;
  int iVar2;
  int local_8 [2];
  
  iVar2 = *(int *)(param_1 + 0x1680);
  local_8[0] = 0;
  local_8[1] = 0;
  if (iVar2 == 0) {
    FUN_00ac81f0(param_1 + 0x40,local_8,local_8 + 1);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,local_8,local_8 + 1);
  }
  if (local_8[0] == 0) {
    fVar1 = *(float *)(param_1 + 0x1688) - *(float *)(param_1 + 0x910);
    if (0.0 <= fVar1) goto LAB_00b180a5;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1688);
    if (fVar1 < 0.0) {
LAB_00b180a5:
      fVar1 = 0.0;
    }
  }
  *(float *)(param_1 + 0x1688) = fVar1;
  fVar1 = *(float *)(param_1 + 0x1688);
  if (NAN(fVar1) || 15.0 < fVar1 == (fVar1 == 15.0)) {
    if (*(float *)(param_1 + 0x1688) <= -15.0) {
      *(undefined4 *)(param_1 + 0x1680) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1680) = 1;
  }
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x1680) == 0)) {
    switch(*(undefined4 *)(param_1 + 0x618)) {
    case 0:
    case 0x5b:
    case 0x79:
    case 0x7e:
    case 0x81:
      *(undefined4 *)(param_1 + 0x15a4) = 0x42280000;
      *(undefined2 *)(param_1 + 0x824) = 2;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
    }
  }
  if (*(int *)(param_1 + 0x1684) != 0) {
    if (*(int *)(param_1 + 0x1680) != 0) goto LAB_00b18168;
    *(undefined4 *)(param_1 + 0x1684) = 0;
  }
  if (*(int *)(param_1 + 0x1680) == 0) {
    return;
  }
LAB_00b18168:
  if (*(int *)(param_1 + 0x1684) == 0) {
    switch(*(undefined4 *)(param_1 + 0x618)) {
    case 0:
    case 0x5b:
    case 0x79:
    case 0x7e:
    case 0x81:
      *(undefined4 *)(param_1 + 0x1684) = 1;
      FUN_00b10f60(0x3a);
    }
  }
  return;
}

// 00B182C0  FUN_00b182c0  size=8  [callgraph]
void FUN_00b182c0(void)

{
  FUN_00b10f60(0x46);
  return;
}

// 00B182D0  FUN_00b182d0  size=59  [callgraph]
void __fastcall FUN_00b182d0(int *param_1)

{
  if (param_1[0x2e1] != 0) {
    if (*(int *)(&DAT_016a0c20 + param_1[0x2e1] * 4) != -1) {
      FUN_00b10f60(*(int *)(&DAT_016a0c20 + param_1[0x2e1] * 4));
    }
    return;
  }
  if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
    FUN_00b10f60(0x89);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b182f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B18310  FUN_00b18310  size=168  [callgraph]
void __fastcall FUN_00b18310(int *param_1)

{
  float fVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     (((param_1[0x449] & 0x20000000U) == 0 && (param_1[0x434] != 0)))) {
    FUN_00b02610(param_1[0x2a1] + 0x40,0x3dcccccd,0x3c8efa35);
    if ((float)param_1[0x435] <= 25.0) {
                    /* WARNING: Could not recover jumptable at 0x00b1838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 + 0.016666668);
    if (3.0 <= fVar1 + 0.016666668) {
      FUN_00b10f60(2);
    }
  }
  return;
}

// 00B183C0  FUN_00b183c0  size=499  [callgraph]
void __fastcall FUN_00b183c0(int *param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  
  if ((((((param_1[0x187] != 0) && (uVar1 = param_1[0x449], -1 < (char)uVar1)) &&
        (param_1[0x5a0] == 0)) && (((uVar1 & 0x20000000) == 0 && (1.0 <= (float)param_1[0x4b8]))))
      && (param_1[0x187] < 2)) && (((uVar1 & 1) == 0 && (iVar3 = FUN_00b11a70(), iVar3 == 0)))) {
    param_1[0x250] = param_1[0x250] + 1;
    if ((0x1e < param_1[0x250]) &&
       ((((*(byte *)(param_1 + 0x449) & 1) == 0 && (iVar3 = FUN_00aa4a90(), iVar3 != 0)) &&
        (param_1[0x128] != 5)))) {
      param_1[0x250] = 0;
      iVar3 = FUN_00b0e330();
      if (iVar3 == 0) {
        if ((param_1[0x5ad] == 0) &&
           ((param_1[0x5ac] == 0 || (*(int *)(param_1[0x5ac] + 0xc) != param_1[0x443])))) {
          FUN_00b10f60(3);
          return;
        }
        if (((*(byte *)(param_1 + 0x449) & 1) == 0) && (iVar3 = FUN_00b02ff0(), iVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b184b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
      }
    }
    if (param_1[0x205] < 4) {
                    /* WARNING: Could not recover jumptable at 0x00b184ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (param_1[0x434] != 0) {
      if ((((float)param_1[0x435] <=
            *(float *)(&DAT_018a7aa8 + param_1[0x44e] * 0x14) * (float)param_1[0x248]) &&
          (fVar2 = *(float *)(param_1[0x2a1] + 0x44) - (float)param_1[0x11],
          fVar2 < 1.5 != (fVar2 == 1.5))) && (iVar3 = FUN_00b0e330(), iVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b18530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      iVar3 = FUN_00ac4640(1);
      if ((iVar3 != 0) && (iVar3 = FUN_00ac4670(param_1 + 0x438,1), iVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b1855d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    if (((param_1[0x44e] == 2) && ((*(byte *)(param_1 + 0x449) & 1) == 0)) &&
       (((float)param_1[0x435] < 36.0 &&
        ((fVar2 = *(float *)(param_1[0x2a1] + 0x44) - (float)param_1[0x11],
         fVar2 < 1.5 != (fVar2 == 1.5) && (iVar3 = FUN_00b0e330(), iVar3 == 0)))))) {
      FUN_00b10f60(0xf);
    }
  }
  return;
}

// 00B185C0  FUN_00b185c0  size=408  [callgraph]
void __fastcall FUN_00b185c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((((param_1[0x187] != 0) && (uVar1 = param_1[0x449], -1 < (char)uVar1)) &&
      (param_1[0x5a0] == 0)) && (((uVar1 & 0x20000000) == 0 && ((uVar1 & 1) == 0)))) {
    if (param_1[0x187] == 3) {
                    /* WARNING: Could not recover jumptable at 0x00b18616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar2 = FUN_00b11a70();
    if (((iVar2 == 0) && (param_1[0x187] != 2)) && (iVar2 = FUN_00b02140(), iVar2 == 0)) {
      if (param_1[0x205] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00b18655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      if ((param_1[0x434] != 0) && ((*(byte *)(param_1 + 0x449) & 1) == 0)) {
        param_1[0x251] = param_1[0x251] + 1;
        if ((param_1[0x251] < 0x1f) ||
           (((param_1[0x251] = 0,
             *(float *)(&DAT_018a7ab8 + param_1[0x44e] * 0x14) < (float)param_1[0x435] ||
             (0.2 <= (float)param_1[0x2a6])) || (iVar2 = FUN_00b0e330(), iVar2 == 0)))) {
          iVar2 = param_1[0x1f6];
          if (((iVar2 == 0) || (*(int *)(iVar2 + 0x838) != 3)) || (*(int *)(iVar2 + 0x82c) != 0)) {
            if (((float)param_1[0x435] <= *(float *)(&DAT_018a7aa8 + param_1[0x44e] * 0x14)) &&
               (iVar2 = FUN_00b0e330(), iVar2 != 0)) {
              FUN_00a8d2f0();
                    /* WARNING: Could not recover jumptable at 0x00b18729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0x34c))();
              return;
            }
            iVar2 = FUN_00ac4640(1);
            if (iVar2 == 0) {
              return;
            }
            iVar2 = FUN_00ac4670(param_1 + 0x438,1);
            if (iVar2 != 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x00b18756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
          param_1[0x5ad] = 1;
        }
        FUN_00b10f60(2);
      }
    }
  }
  return;
}

// 00B18760  FUN_00b18760  size=63  [callgraph]
void __fastcall FUN_00b18760(int param_1)

{
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x1124))) &&
      (*(int *)(param_1 + 0x1680) == 0)) &&
     (((*(uint *)(param_1 + 0x1124) & 0x20000000) == 0 && (3 < *(int *)(param_1 + 0x814))))) {
    FUN_00b07ff0();
    FUN_00b10f60(2);
  }
  return;
}

// 00B187A0  FUN_00b187a0  size=195  [callgraph]
void __fastcall FUN_00b187a0(int param_1)

{
  float fVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar2 = *(int *)(param_1 + 0x61c);
  if (iVar2 == 0) {
    return;
  }
  if ((char)*(uint *)(param_1 + 0x1124) < '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x1680) != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x1124) & 0x20000000) != 0) {
    return;
  }
  if (iVar2 < 2) {
    return;
  }
  if (iVar2 != 2) {
    return;
  }
  if (0.0 < *(float *)(param_1 + 0x920)) {
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910) * 0.016666668;
    *(float *)(param_1 + 0x920) = fVar1;
    if ((fVar1 < 0.0 != (fVar1 == 0.0)) || (2 < *(int *)(param_1 + 0x940))) goto LAB_00b1885b;
    if ((*(int *)(param_1 + 0x948) == 0) &&
       (iVar2 = FUN_00b03150(), param_1 = extraout_ECX, iVar2 != 0)) {
      FUN_00b10f60(0xe);
      return;
    }
  }
  if (*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) * 3.2399998 <
      *(float *)(param_1 + 0x10d4) ==
      (*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) * 3.2399998 ==
      *(float *)(param_1 + 0x10d4))) {
    return;
  }
LAB_00b1885b:
  FUN_00b10f60(0xe);
  return;
}

// 00B18870  FUN_00b18870  size=1285  [callgraph]
void __fastcall FUN_00b18870(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [92];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4120(0xb,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = 3;
    fVar7 = (float10)FUN_00dde300(0x40400000,0x40600000);
    param_1[0x248] = (int)(float)(fVar7 * (float10)60.0);
    RayCastManager::getWork(param_1 + 0x44a);
  case 1:
    if (0.0 < (float)param_1[0x248]) {
      fVar1 = (float)param_1[0x248] - (float)param_1[0x244];
      param_1[0x248] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        fVar7 = (float10)FUN_00dde300(0x40400000,0x40a00000);
        param_1[0x248] = (int)(float)fVar7;
        fVar7 = (float10)FUN_00a8ec30(param_1 + 0x438);
        fVar4 = (float10)FUN_00dde300(0x40384e89,0x4059d12d);
        fVar7 = (float10)FUN_00ddba30((float)(fVar4 + (float10)(float)fVar7));
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x249] = (int)(float)fVar7;
        FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    if (ABS((float)param_1[0x25] - (float)param_1[0x249]) < 0.08726646) {
      param_1[0x252] = 0;
      local_b0 = (float)param_1[0x10];
      local_a8 = (float)param_1[0x12];
      local_a4 = (float)param_1[0x13];
      local_ac = (float)param_1[0x11] + 0.5;
      pfVar2 = (float *)FUN_00a925a0(local_80);
      local_90 = *pfVar2 + local_b0;
      local_8c = pfVar2[1] + local_ac;
      local_88 = pfVar2[2] + local_a8;
      local_84 = pfVar2[3] + local_a4;
      if ((param_1[0x44a] != 0) && (iVar3 = FUN_00907560(param_1 + 0x44a,0,0,0,0,0,0,0), iVar3 != 0)
         ) {
        fVar4 = (float10)local_d0;
        param_1[0x252] = 1;
        fVar7 = (float10)0;
        fVar5 = (float10)local_c8;
        fVar6 = (float10)fcos((float10)0.7853981852531433);
        if (fVar5 * fVar7 + fVar4 * fVar7 + (float10)local_cc < fVar6) {
          param_1[0x250] = param_1[0x250] + 1;
        }
        local_cc = (float)fVar7;
        fVar4 = fVar4 * fVar4 + fVar5 * fVar5;
        if (fVar4 < fVar7 == (fVar4 == fVar7)) {
          FUN_00ddf460(&local_d0,&local_d0);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_d0 = 0.0;
          local_cc = 1.0;
          local_c8 = 0.0;
        }
        FUN_00a925a0(&local_c0);
        fVar1 = -(local_b8 * local_c8 + local_c0 * local_d0 + local_bc * local_cc);
        local_d0 = local_d0 * fVar1;
        local_cc = fVar1 * local_cc;
        local_c8 = local_c8 * fVar1;
        local_c4 = fVar1 * local_c4;
        pfVar2 = (float *)FUN_00a925a0(local_70);
        local_c0 = *pfVar2 + local_d0;
        local_bc = pfVar2[1] + local_cc;
        local_b8 = pfVar2[2] + local_c8;
        local_b4 = pfVar2[3] + local_c4;
        fVar1 = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_c0,&local_c0);
          fVar7 = (float10)local_c0;
          fVar4 = (float10)local_b8;
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar7 = (float10)0;
          fVar4 = fVar7;
        }
        fVar7 = (float10)fpatan(fVar7,fVar4);
        param_1[0x249] = (int)(float)fVar7;
      }
      FUN_00468970(param_1 + 0x44a,0,&local_b0,&local_90,7,0,0,0,"em0040",0,0);
      HavokRayCastManager::set(local_60);
    }
    fVar1 = (float)param_1[0x25];
    fVar7 = (float10)FUN_00ddba30((float)param_1[0x249] - fVar1);
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)0.1 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar7;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00b08ee0();
    return;
  case 3:
    fVar7 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    iVar3 = (**(code **)(*param_1 + 0x84))();
    fStack_94 = *(float *)(iVar3 + 4);
    fVar7 = (float10)FUN_00ddba30((float)fVar7 - fStack_94);
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)0.1 + (float10)fStack_94));
    param_1[0x25] = (int)(float)fVar7;
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] <= 0.0) {
      FUN_00b10f60(0xe);
      return;
    }
  }
  return;
}

// 00B18D90  FUN_00b18d90  size=454  [callgraph]
void __fastcall FUN_00b18d90(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [92];
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x1124))) &&
      (*(int *)(param_1 + 0x1680) == 0)) && ((*(uint *)(param_1 + 0x1124) & 0x20000000) == 0)) {
    if (*(float *)(param_1 + 0x928) * 1.5625 < *(float *)(param_1 + 0x10d4)) {
      FUN_00b10f60(2);
      return;
    }
    iVar2 = FUN_00b0e330();
    if (iVar2 != 0) {
      FUN_00b10f60(2);
      return;
    }
    fVar1 = *(float *)(param_1 + 0x910) * 0.016666668 + *(float *)(param_1 + 0x924);
    *(float *)(param_1 + 0x924) = fVar1;
    if (2.5 < fVar1) {
LAB_00b18e33:
      FUN_00b10f60(0xe);
      return;
    }
    if (ABS(*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x92c)) < 0.08726646) {
      local_a4 = 0;
      if (0 < *(int *)(param_1 + 0x620)) {
        iVar2 = FUN_00907560(param_1 + 0x1128,0,0,&local_a4,0,0,0,0);
        if (iVar2 != 0) {
          FUN_00910a40(local_a4);
          iVar2 = FUN_0091a9e0();
          if (iVar2 != 0) goto LAB_00b18e33;
        }
      }
      local_a0 = *(float *)(param_1 + 0x40);
      local_98 = *(float *)(param_1 + 0x48);
      local_94 = *(float *)(param_1 + 0x4c);
      local_9c = *(float *)(param_1 + 0x44) + 0.5;
      pfVar3 = (float *)FUN_00a925a0(local_70);
      local_80 = *pfVar3 + local_a0;
      local_7c = pfVar3[1] + local_9c;
      local_78 = pfVar3[2] + local_98;
      local_74 = pfVar3[3] + local_94;
      FUN_00468970(param_1 + 0x1128,0,&local_a0,&local_80,7,0,0,0,"em0040",0,0);
      HavokRayCastManager::set(local_60);
      *(undefined4 *)(param_1 + 0x620) = 1;
    }
  }
  return;
}

// 00B18F60  FUN_00b18f60  size=137  [callgraph]
void __fastcall FUN_00b18f60(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     (((param_1[0x449] & 0x20000000U) == 0 && (param_1[0x187] == 3)))) {
    FUN_00c4d1a0(param_1[0x13c],1);
    param_1[0x449] = param_1[0x449] & 0xffffffdf;
    if (param_1[0x2e1] == 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        FUN_00b10f60(0x89);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00b18fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (*(int *)(&DAT_016a0c20 + param_1[0x2e1] * 4) != -1) {
      FUN_00b10f60(*(int *)(&DAT_016a0c20 + param_1[0x2e1] * 4));
    }
  }
  return;
}

// 00B18FF0  FUN_00b18ff0  size=108  [callgraph]
void __fastcall FUN_00b18ff0(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     (((param_1[0x449] & 0x20000000U) == 0 && (param_1[0x187] == 5)))) {
    param_1[0x449] = param_1[0x449] & 0xffffffdf;
    if (param_1[0x2e1] == 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        FUN_00b10f60(0x89);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00b19047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (*(int *)(&DAT_016a0c20 + param_1[0x2e1] * 4) != -1) {
      FUN_00b10f60(*(int *)(&DAT_016a0c20 + param_1[0x2e1] * 4));
    }
  }
  return;
}

// 00B19060  FUN_00b19060  size=579  [callgraph]
void __fastcall FUN_00b19060(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int local_14;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa3f60(8);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x449] = param_1[0x449] | 3;
    return;
  case 1:
    iVar4 = FUN_00b03150();
    if (iVar4 != 0) {
      FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if (param_1[0x1d9] != 0) {
        FUN_008e0ae0(0);
      }
      param_1[0x4bc] = 0;
      param_1[0x4bd] = 0x3f800000;
      param_1[0x4be] = 0;
      param_1[0x4bf] = local_14;
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = (**(code **)(*param_1 + 0x84))();
    param_1[0x4b7] = (int)(*(float *)(iVar4 + 4) - (float)param_1[0x4b6]);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
  default:
    return;
  case 2:
    iVar4 = FUN_00a12210(0xf00);
    if (iVar4 != 0) {
      fVar1 = *(float *)(iVar4 + 0x44);
      fVar2 = *(float *)(iVar4 + 0x48);
      fVar3 = *(float *)(iVar4 + 0x4c);
      param_1[0x4c8] = (int)((float)param_1[0x4c0] - *(float *)(iVar4 + 0x40));
      param_1[0x4c9] = (int)((float)param_1[0x4c1] - fVar1);
      param_1[0x4ca] = (int)((float)param_1[0x4c2] - fVar2);
      param_1[0x4cb] = (int)((float)param_1[0x4c3] - fVar3);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    param_1[0x15] = (int)((float)param_1[0x4c9] * 0.1 + (float)param_1[0x15]);
    param_1[0x4c9] = (int)((float)param_1[0x4c9] - (float)param_1[0x4c9] * 0.1);
    iVar4 = FUN_00a94db0(0x39);
    if (iVar4 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00b116d0(0);
      param_1[0x15] = (int)((float)param_1[0x4c9] + (float)param_1[0x15]);
      param_1[0x4c8] = 0;
      param_1[0x4c9] = 0;
      param_1[0x4ca] = 0;
      param_1[0x4cb] = 0;
      param_1[0x449] = param_1[0x449] & 0xfffffffe;
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 4:
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(1);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
}

// 00B192C0  FUN_00b192c0  size=354  [callgraph]
void __fastcall FUN_00b192c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    FUN_00aa4080(0x1d,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00b0b6c0(param_1 + 1099);
    return;
  }
  if (iVar2 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    piVar1 = param_1 + 1099;
    iVar2 = FUN_00b0b580(piVar1);
    if (iVar2 == 0) {
      FUN_00b0b6c0(piVar1);
      return;
    }
    RayCastManager::getWork(piVar1);
    FUN_00aa4080(0x1c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 == 2) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00b182d0();
      if (((param_1[0x128] == 5) && (param_1[0x186] == 0x7e)) &&
         ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
        FUN_00b10f60(0x89);
        return;
      }
    }
  }
  return;
}

// 00B19430  FUN_00b19430  size=316  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00b19430(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_28 [3];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((*(int *)(param_1 + 0x61c) != 0) && ((*(uint *)(param_1 + 0x1124) & 0x20000000) == 0)) &&
     ((*(byte *)(param_1 + 0xb00) & 4) == 0)) {
    local_28[2] = *(undefined4 *)(param_1 + 0x40);
    local_1c = *(undefined4 *)(param_1 + 0x44);
    local_18 = *(undefined4 *)(param_1 + 0x48);
    local_14 = *(undefined4 *)(param_1 + 0x4c);
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_00ac81f0(local_28 + 2,local_28,local_28 + 1);
    if (local_28[0] == 0) {
      iVar1 = FUN_00ac8120();
      if (iVar1 != 0) {
        local_28[2] = *(undefined4 *)(iVar1 + 0x40);
        local_1c = *(undefined4 *)(iVar1 + 0x44);
        local_18 = *(undefined4 *)(iVar1 + 0x48);
        local_14 = *(undefined4 *)(iVar1 + 0x4c);
        FUN_00ac81f0(local_28 + 2,local_28,local_28 + 1);
        if (local_28[0] != 0) {
          return;
        }
      }
      piVar2 = (int *)FUN_00ac8120();
      if (piVar2 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar2 + 0x230))();
        if (iVar1 != 0) {
          return;
        }
        iVar1 = (**(code **)(*piVar2 + 0x234))();
        if (iVar1 != 0) {
          return;
        }
      }
      if ((*(float *)(param_1 + 0xa90) <= 64.0) && ((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0))
      {
        *(undefined4 *)(param_1 + 0xd28) = 1;
        FUN_00a88b50(4,1);
        FUN_00b10f60(0x2a);
      }
    }
  }
  return;
}

// 00B19570  FUN_00b19570  size=94  [callgraph]
void __fastcall FUN_00b19570(int param_1)

{
  float fVar1;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x1124))) &&
      (*(int *)(param_1 + 0x1680) == 0)) && ((*(uint *)(param_1 + 0x1124) & 0x20000000) == 0)) {
    if (*(int *)(param_1 + 0x12d0) == 0) {
      *(undefined4 *)(param_1 + 0x92c) = 0x41200000;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x92c) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x92c) = fVar1;
      if (fVar1 <= 0.0) {
        FUN_00b10f60(0x1a);
        return;
      }
    }
  }
  return;
}

// 00B195D0  FUN_00b195d0  size=796  [callgraph]
void __thiscall FUN_00b195d0(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  
  if ((param_1[0x449] & 0x100U) != 0) {
    if (param_1[0x1d9] == 0) {
      return;
    }
    FUN_008e0ae0(1);
    return;
  }
  iVar4 = FUN_00b112f0();
  uVar3 = param_2;
  if (iVar4 != 0) {
    return;
  }
  fVar6 = (float10)FUN_00a8ec30(param_2);
  param_2 = (float)fVar6;
  iVar4 = (**(code **)(*param_1 + 0x84))();
  fVar6 = (float10)FUN_00ddba30(*(float *)(iVar4 + 4) - param_2);
  if (ABS(fVar6) < (float10)0.2617994 != (ABS(fVar6) == (float10)0.2617994)) {
    iVar4 = FUN_00b030c0(&param_2);
    if (iVar4 != 0) {
      fVar6 = (float10)fpatan(-(float10)(float)param_1[0x4bc],-(float10)(float)param_1[0x4be]);
      param_1[0x4c4] = (int)(float)fVar6;
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)(float)param_1[0x25]));
      if ((float10)0.2617994 < ABS(fVar6)) {
        param_1[0x5ae] = 3;
        param_1[0x4c6] = param_1[0x4c5];
        param_1[0x4c5] = 7;
        param_1[0x449] = param_1[0x449] | 0x100;
        return;
      }
      FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x4c6] = param_1[0x4c5];
      param_1[0x4c5] = 3;
      param_1[0x449] = param_1[0x449] | 0x100;
      FUN_00b090c0(1);
      param_1[0x449] = param_1[0x449] | 2;
LAB_00b197db:
      if (param_1[0x1d9] == 0) {
        return;
      }
      FUN_008e0ae0(0);
      return;
    }
    if ((param_2 == 0.0) && (iVar4 = FUN_00b03150(), iVar4 != 0)) {
      fVar6 = (float10)fpatan((float10)(float)param_1[0x4bc],(float10)(float)param_1[0x4be]);
      param_1[0x4c4] = (int)(float)fVar6;
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)(float)param_1[0x25]));
      if ((float10)0.2617994 < ABS(fVar6)) {
        param_1[0x5ae] = 5;
        FUN_00b07ed0(7);
        return;
      }
      FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00b07ed0(5);
      param_1[0x449] = param_1[0x449] & 0xfffffffd;
      FUN_00b090c0(1);
      goto LAB_00b197db;
    }
  }
  if ((param_1[0x449] & 0x200000U) == 0) {
    FUN_00b069d0(uVar3,0x3dcccccd);
    goto LAB_00b198cb;
  }
  fVar6 = (float10)FUN_00a8ec30(uVar3);
  param_2 = (float)fVar6;
  iVar4 = (**(code **)(*param_1 + 0x84))();
  fVar6 = (float10)FUN_00ddba30(*(float *)(iVar4 + 4) - param_2);
  if ((float10)-0.08726646 <= fVar6) {
    if ((float10)0.08726646 <= ABS(fVar6)) {
      fVar1 = 1.0471976;
    }
    else {
      uVar5 = FUN_00dde2d0(0,100);
      if ((uVar5 & 1) != 0) goto LAB_00b1984c;
      fVar1 = -1.0471976;
    }
  }
  else {
LAB_00b1984c:
    fVar1 = 1.0471976;
  }
  fVar2 = (float)param_1[0x25];
  fVar6 = (float10)FUN_00ddba30((fVar1 + param_2) - fVar2);
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.1 + (float10)fVar2));
  param_1[0x25] = (int)(float)fVar6;
LAB_00b198cb:
  iVar4 = (**(code **)(*param_1 + 0x84))();
  param_1[0x4b7] = (int)(*(float *)(iVar4 + 4) - (float)param_1[0x4b6]);
  return;
}

// 00B198F0  FUN_00b198f0  size=1056  [callgraph]
void __thiscall FUN_00b198f0(int *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20 [7];
  
  if ((param_1[0x449] & 0x100U) == 0) {
    iVar3 = FUN_00b112f0();
    if (iVar3 == 0) {
      local_40 = *param_2 - (float)param_1[0x10];
      local_3c = param_2[1] - (float)param_1[0x11];
      local_38 = param_2[2] - (float)param_1[0x12];
      local_34 = param_2[3] - (float)param_1[0x13];
      if (((local_40 != 0.0) || (local_3c != 0.0)) || (local_38 != 0.0)) {
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
      }
      pfVar1 = (float *)(param_1 + 0x4bc);
      fVar2 = local_38 * (float)param_1[0x4be] +
              (float)param_1[0x4bc] * local_40 + (float)param_1[0x4bd] * local_3c;
      if (ABS(fVar2) < 1e-05) {
        fVar2 = 1.0;
      }
      if (0.25 <= ABS(fVar2)) {
        if (0.0 <= fVar2) {
          param_1[0x449] = param_1[0x449] & 0xfffffffd;
        }
        else {
          param_1[0x449] = param_1[0x449] | 2;
        }
      }
      if (param_1[0x3e5] != 0) {
        param_1[0x4c6] = param_1[0x4c5];
        param_1[0x4c5] = 8;
        param_1[0x449] = param_1[0x449] | 0x100;
        return;
      }
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
      if ((*(byte *)(param_1 + 0x449) & 2) == 0) {
        iVar3 = FUN_00b031d0();
        if (iVar3 != 0) {
          local_30 = *pfVar1 * -1.0;
          local_2c = (float)param_1[0x4bd] * -1.0;
          local_28 = (float)param_1[0x4be] * -1.0;
          local_24 = (float)param_1[0x4bf] * -1.0;
          D3DXVec4Transform(local_20,&local_30,param_1 + 0x3c);
          fVar4 = (float10)fpatan((float10)local_2c,(float10)local_24);
          param_1[0x4c4] = (int)(float)fVar4;
          fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)(float)param_1[0x25]));
          if (ABS(fVar4) <= (float10)0.2617994) {
            FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            FUN_00b07ed0(6);
            if (param_1[0x1d9] != 0) {
              FUN_008e0ae0(0);
            }
            *pfVar1 = 0.0;
            param_1[0x4bd] = 0x3f800000;
            param_1[0x4be] = 0;
            param_1[0x4bf] = local_20[0];
            return;
          }
          param_1[0x5ae] = 6;
          FUN_00b07ed0(7);
          return;
        }
        local_2c = -1.0;
      }
      else {
        iVar3 = FUN_00b03150();
        if (iVar3 != 0) {
          D3DXVec4Transform(&local_30,pfVar1,param_1 + 0x3c);
          fVar4 = (float10)fpatan((float10)local_3c,(float10)local_34);
          param_1[0x4c4] = (int)(float)fVar4;
          fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)(float)param_1[0x25]));
          if ((float10)0.2617994 < ABS(fVar4)) {
            param_1[0x5ae] = 4;
            FUN_00b07ed0(7);
            return;
          }
          *pfVar1 = 0.0;
          param_1[0x4bd] = 0x3f800000;
          param_1[0x4be] = 0;
          param_1[0x4bf] = local_20[0];
          FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          FUN_00b07ed0(4);
          if (param_1[0x1d9] == 0) {
            return;
          }
          FUN_008e0ae0(0);
          return;
        }
      }
      local_30 = (float)param_1[0x10];
      local_2c = local_2c + (float)param_1[0x11];
      local_28 = (float)param_1[0x12];
      local_24 = (float)param_1[0x13] + local_24;
      FUN_00b069d0(&local_30,0x3dcccccd);
      iVar3 = (**(code **)(*param_1 + 0x84))();
      param_1[0x4b7] = (int)(*(float *)(iVar3 + 4) - (float)param_1[0x4b6]);
    }
  }
  else if (param_1[0x1d9] != 0) {
    FUN_008e0ae0(1);
    return;
  }
  return;
}

// 00B19D10  FUN_00b19d10  size=478  [callgraph]
void __fastcall FUN_00b19d10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if ((*(uint *)(param_1 + 0x1124) & 0x100) == 0) {
    fVar1 = *(float *)(param_1 + 0x1320) * 0.1;
    fVar2 = *(float *)(param_1 + 0x1324) * 0.1;
    fVar3 = *(float *)(param_1 + 0x1328) * 0.1;
    fVar4 = *(float *)(param_1 + 0x132c) * 0.1;
    *(float *)(param_1 + 0x50) = fVar1 + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar2;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + fVar3;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar4;
    *(float *)(param_1 + 0x1320) = *(float *)(param_1 + 0x1320) - fVar1;
    *(float *)(param_1 + 0x1324) = *(float *)(param_1 + 0x1324) - fVar2;
    *(float *)(param_1 + 0x1328) = *(float *)(param_1 + 0x1328) - fVar3;
    *(float *)(param_1 + 0x132c) = *(float *)(param_1 + 0x132c) - fVar4;
    iVar5 = FUN_00a94db0(0x38);
    if (iVar5 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x1318) = *(undefined4 *)(param_1 + 0x1314);
      *(undefined4 *)(param_1 + 0x1314) = 2;
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x1320) + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x1324);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x1328);
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x132c);
      *(undefined4 *)(param_1 + 0x1320) = 0;
      *(undefined4 *)(param_1 + 0x1324) = 0;
      *(undefined4 *)(param_1 + 0x1328) = 0;
      *(undefined4 *)(param_1 + 0x132c) = 0;
      FUN_00b116d0(0);
    }
  }
  else {
    iVar5 = FUN_00a12210(0xf00);
    if (iVar5 != 0) {
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      *(float *)(param_1 + 0x1320) = *(float *)(param_1 + 0x1300) - *(float *)(iVar5 + 0x40);
      *(float *)(param_1 + 0x1324) = *(float *)(param_1 + 0x1304) - fVar1;
      *(float *)(param_1 + 0x1328) = *(float *)(param_1 + 0x1308) - fVar2;
      *(float *)(param_1 + 0x132c) = *(float *)(param_1 + 0x130c) - fVar3;
      *(undefined4 *)(param_1 + 0x1324) = 0;
      return;
    }
  }
  return;
}

// 00B19EF0  FUN_00b19ef0  size=396  [callgraph]
void __thiscall FUN_00b19ef0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if ((param_1[0x449] & 0x100U) == 0) {
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x4c9] * 0.1);
    param_1[0x4c9] = (int)((float)param_1[0x4c9] - (float)param_1[0x4c9] * 0.1);
    iVar4 = FUN_00a94db0(0x39);
    if (iVar4 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(param_3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x4c6] = param_1[0x4c5];
      param_1[0x4c5] = 1;
      param_1[0x449] = param_1[0x449] | 0x100;
      FUN_00b116d0(0);
      param_1[0x15] = (int)((float)param_1[0x4c9] + (float)param_1[0x15]);
      param_1[0x4c8] = 0;
      param_1[0x4c9] = 0;
      param_1[0x4ca] = 0;
      param_1[0x4cb] = 0;
      param_1[0x449] = param_1[0x449] & 0xfffffffe;
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
    }
  }
  else {
    iVar4 = FUN_00a12210(0xf00);
    if (iVar4 != 0) {
      fVar1 = *(float *)(iVar4 + 0x44);
      fVar2 = *(float *)(iVar4 + 0x48);
      fVar3 = *(float *)(iVar4 + 0x4c);
      param_1[0x4c8] = (int)((float)param_1[0x4c0] - *(float *)(iVar4 + 0x40));
      param_1[0x4c9] = (int)((float)param_1[0x4c1] - fVar1);
      param_1[0x4ca] = (int)((float)param_1[0x4c2] - fVar2);
      param_1[0x4cb] = (int)((float)param_1[0x4c3] - fVar3);
      return;
    }
  }
  return;
}

// 00B1A080  FUN_00b1a080  size=478  [callgraph]
void __fastcall FUN_00b1a080(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if ((*(uint *)(param_1 + 0x1124) & 0x100) == 0) {
    fVar1 = *(float *)(param_1 + 0x1320) * 0.1;
    fVar2 = *(float *)(param_1 + 0x1324) * 0.1;
    fVar3 = *(float *)(param_1 + 0x1328) * 0.1;
    fVar4 = *(float *)(param_1 + 0x132c) * 0.1;
    *(float *)(param_1 + 0x50) = fVar1 + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar2;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + fVar3;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar4;
    *(float *)(param_1 + 0x1320) = *(float *)(param_1 + 0x1320) - fVar1;
    *(float *)(param_1 + 0x1324) = *(float *)(param_1 + 0x1324) - fVar2;
    *(float *)(param_1 + 0x1328) = *(float *)(param_1 + 0x1328) - fVar3;
    *(float *)(param_1 + 0x132c) = *(float *)(param_1 + 0x132c) - fVar4;
    iVar5 = FUN_00a94db0(0x39);
    if (iVar5 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x1318) = *(undefined4 *)(param_1 + 0x1314);
      *(undefined4 *)(param_1 + 0x1314) = 2;
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
      FUN_00b116d0(0);
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x1320) + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x1324);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x1328);
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x132c);
      *(undefined4 *)(param_1 + 0x1320) = 0;
      *(undefined4 *)(param_1 + 0x1324) = 0;
      *(undefined4 *)(param_1 + 0x1328) = 0;
      *(undefined4 *)(param_1 + 0x132c) = 0;
    }
  }
  else {
    iVar5 = FUN_00a12210(0xf00);
    if (iVar5 != 0) {
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      *(float *)(param_1 + 0x1320) = *(float *)(param_1 + 0x1300) - *(float *)(iVar5 + 0x40);
      *(float *)(param_1 + 0x1324) = *(float *)(param_1 + 0x1304) - fVar1;
      *(float *)(param_1 + 0x1328) = *(float *)(param_1 + 0x1308) - fVar2;
      *(float *)(param_1 + 0x132c) = *(float *)(param_1 + 0x130c) - fVar3;
      *(undefined4 *)(param_1 + 0x1324) = 0;
      return;
    }
  }
  return;
}

// 00B1A260  FUN_00b1a260  size=396  [callgraph]
void __thiscall FUN_00b1a260(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if ((param_1[0x449] & 0x100U) == 0) {
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x4c9] * 0.1);
    param_1[0x4c9] = (int)((float)param_1[0x4c9] - (float)param_1[0x4c9] * 0.1);
    iVar4 = FUN_00a94db0(0x38);
    if (iVar4 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(param_3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x4c6] = param_1[0x4c5];
      param_1[0x4c5] = 1;
      param_1[0x449] = param_1[0x449] | 0x100;
      param_1[0x15] = (int)((float)param_1[0x4c9] + (float)param_1[0x15]);
      param_1[0x4c8] = 0;
      param_1[0x4c9] = 0;
      param_1[0x4ca] = 0;
      param_1[0x4cb] = 0;
      FUN_00b116d0(0);
      param_1[0x449] = param_1[0x449] & 0xfffffffe;
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
    }
  }
  else {
    iVar4 = FUN_00a12210(0xf00);
    if (iVar4 != 0) {
      fVar1 = *(float *)(iVar4 + 0x44);
      fVar2 = *(float *)(iVar4 + 0x48);
      fVar3 = *(float *)(iVar4 + 0x4c);
      param_1[0x4c8] = (int)((float)param_1[0x4c0] - *(float *)(iVar4 + 0x40));
      param_1[0x4c9] = (int)((float)param_1[0x4c1] - fVar1);
      param_1[0x4ca] = (int)((float)param_1[0x4c2] - fVar2);
      param_1[0x4cb] = (int)((float)param_1[0x4c3] - fVar3);
      return;
    }
  }
  return;
}

// 00B1A3F0  FUN_00b1a3f0  size=275  [callgraph]
void __fastcall FUN_00b1a3f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  undefined *puVar4;
  
  switch(param_1[299]) {
  case 0:
    FUN_00b182d0();
    return;
  case 1:
    FUN_00b10f60(0x4d);
    (**(code **)(*param_1 + 200))(0);
    FUN_00c4d1a0(param_1[0x13c],0);
    return;
  case 2:
    uVar3 = 0x4f;
    break;
  case 3:
    uVar3 = 0x4e;
    break;
  case 4:
    uVar3 = 0x50;
    break;
  default:
    return;
  case 6:
    FUN_00b10f60(0x8b);
    FUN_00c4d1a0(param_1[0x13c],0);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(unaff_ESI), piVar2 != (int *)0x0)) {
      puVar4 = &DAT_01b34e80;
      (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
      FUN_00dd6d70(puVar4);
    }
    uVar3 = FUN_00a81330();
    FUN_00b0c920(uVar3);
    return;
  case 7:
    FUN_00b10f60(0x51);
    return;
  case 8:
    FUN_00b10f60(0x52);
    return;
  case 9:
    FUN_00b10f60(0x53);
    return;
  }
  FUN_00b10f60(uVar3);
  (**(code **)(*param_1 + 200))(0);
  FUN_00c4d1a0(param_1[0x13c],0);
  return;
}

// 00B1A4E0  FUN_00b1a4e0  size=235  [callgraph]
void __fastcall FUN_00b1a4e0(int param_1)

{
  int iVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *(float *)(param_1 + 0x50);
  local_1c = *(float *)(param_1 + 0x54);
  local_18 = *(float *)(param_1 + 0x58);
  local_14 = *(float *)(param_1 + 0x5c);
  local_30 = (*(float *)(param_1 + 0xb8c) - local_20) * 1.5 + local_20;
  local_2c = (*(float *)(param_1 + 0xb90) - local_1c) * 1.5 + local_1c;
  local_28 = local_18 + (*(float *)(param_1 + 0xb94) - local_18) * 1.5;
  local_24 = local_14 + local_24 * 1.5;
  iVar1 = FUN_009f8b40();
  iVar1 = FUN_0090dc50((undefined4 *)(param_1 + 0x1300),param_1 + 0x12f0,0,&local_20,&local_30,
                       iVar1 << 0x10 | 0x1e,"em0040WallStick");
  if (iVar1 != 0) {
    FUN_00b116d0(1);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x1300);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x1304);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x1308);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x130c);
    return;
  }
  FUN_00dd5650(&DAT_01646dbc);
  return;
}

// 00B1A5D0  FUN_00b1a5d0  size=88  [callgraph]
void __fastcall FUN_00b1a5d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if ((*(byte *)(param_1 + 0x1127) & 1) == 0) {
    iVar1 = FUN_00ac89d0();
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    uVar2 = FUN_00a8c890(0);
    FUN_004117d0(0x37,iVar1,uVar2);
    FUN_00a963e0(local_160);
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x1000000;
  }
  return;
}

// 00B1A630  FUN_00b1a630  size=149  [callgraph]
void __fastcall FUN_00b1a630(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if ((*(uint *)(param_1 + 0x1124) & 0x4000000) == 0) {
    iVar1 = FUN_00ac89d0();
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    uVar2 = FUN_00a8c890(0);
    FUN_004117d0(0,iVar1,uVar2);
    FUN_00a963e0(local_160);
    if ((*(byte *)(param_1 + 0xb00) & 8) != 0) {
      iVar1 = FUN_00ac89d0();
      if (iVar1 == 0) {
        iVar1 = param_1;
      }
      uVar2 = FUN_00a8c890(0);
      FUN_004117d0(0x12,iVar1,uVar2);
      FUN_00a963e0(local_160);
    }
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x4000000;
  }
  return;
}

// 00B1A6D0  FUN_00b1a6d0  size=676  [callgraph]
void __fastcall FUN_00b1a6d0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
  uint uVar11;
  int local_c;
  float *local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 0xff4) == 0) goto LAB_00b1a969;
  piVar7 = (int *)((*(int *)(param_1 + 0xff0) * 3 + 0xea) * 0x10 + param_1);
  pfVar1 = (float *)(piVar7 + 4);
  local_c = 0;
  FUN_00907640(param_1 + 0xff4,&local_c,pfVar1);
  *piVar7 = 0;
  piVar7[1] = 0;
  if ((local_c != 0) && (0 < *(int *)(local_c + 0x14))) {
    FUN_0112bcf0();
    *piVar7 = 1;
  }
  if (*(int *)(param_1 + 0xff4) == 0) goto LAB_00b1a969;
  switch(*(undefined4 *)(param_1 + 0xff0)) {
  case 0:
    if (*piVar7 != 0) {
      local_8 = (float *)(piVar7 + 8);
      iVar5 = FUN_00b11cb0(local_c,pfVar1,local_8,1,*(uint *)(param_1 + 0x1124) >> 0x14 & 1);
      if (iVar5 != 0) {
        fVar2 = *pfVar1 - *(float *)(param_1 + 0x40);
        fVar3 = (float)piVar7[6] - *(float *)(param_1 + 0x48);
        if (fVar3 * fVar3 + fVar2 * fVar2 <= 0.36) {
          piVar7[1] = 1;
        }
        else {
          piVar7[1] = 0;
        }
      }
      if ((*(int *)(param_1 + 0xf64) != 0) &&
         (fVar9 = (float10)*local_8 * (float10)0 + (float10)local_8[1] +
                  (float10)local_8[2] * (float10)0,
         fVar8 = (float10)fcos((float10)1.1344640254974365), fVar8 < fVar9 != (fVar8 == fVar9))) {
        *(undefined4 *)(param_1 + 0xf64) = 0;
      }
    }
    break;
  case 1:
    piVar7[1] = 1;
    if ((*piVar7 != 0) && (iVar5 = 0, 0 < *(int *)(local_c + 0x14))) {
      local_8 = (float *)0x0;
      iVar6 = local_c;
      do {
        iVar4 = *(int *)(*(int *)(iVar6 + 0x10) + 0x28 + (int)local_8);
        if ((*(char *)(iVar4 + 0x18) == '\x01') &&
           (iVar4 = *(char *)(iVar4 + 0x10) + iVar4, iVar4 != 0)) {
          FUN_00910a40(iVar4);
          iVar4 = FUN_00b11c50(local_4,1);
          iVar6 = local_c;
          if (iVar4 != 0) goto LAB_00b1a8fb;
        }
        local_8 = local_8 + 0xc;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar6 + 0x14));
    }
    break;
  case 2:
    if (*piVar7 != 0) {
      uVar11 = *(uint *)(param_1 + 0x1124) & 1;
      uVar10 = 0;
LAB_00b1a8a5:
      iVar5 = FUN_00b11cb0(local_c,pfVar1,piVar7 + 8,uVar10,uVar11);
      if (iVar5 != 0) {
        piVar7[1] = 1;
      }
    }
    break;
  case 3:
    if (*piVar7 != 0) {
      uVar11 = 1;
      uVar10 = 1;
      goto LAB_00b1a8a5;
    }
    break;
  case 4:
    piVar7[1] = (uint)(*piVar7 == 0);
    if ((*(int *)(param_1 + 0xea0) != 0) &&
       (fVar9 = (float10)*(float *)(param_1 + 0xec0) * (float10)0 +
                (float10)*(float *)(param_1 + 0xec4) +
                (float10)*(float *)(param_1 + 0xec8) * (float10)0,
       fVar8 = (float10)fcos((float10)1.1344640254974365), fVar8 < fVar9 != (fVar8 == fVar9))) {
LAB_00b1a8fb:
      piVar7[1] = 0;
    }
    break;
  case 5:
    piVar7[1] = (uint)(*piVar7 == 0);
    break;
  case 6:
    piVar7[1] = *piVar7;
  }
  *(int *)(param_1 + 0xff0) = *(int *)(param_1 + 0xff0) + 1;
  iVar5 = *(int *)(param_1 + 0xff0);
  if ((*(byte *)(param_1 + 0x1124) & 1) == 0) {
    while ((0 < iVar5 && ((iVar5 < 4 || (iVar5 == 5))))) {
      iVar5 = iVar5 * 3 + 0xea;
      *(undefined4 *)(param_1 + iVar5 * 0x10) = 0;
      *(undefined4 *)(param_1 + 4 + iVar5 * 0x10) = 0;
      *(int *)(param_1 + 0xff0) = *(int *)(param_1 + 0xff0) + 1;
      iVar5 = *(int *)(param_1 + 0xff0);
    }
  }
  if (6 < iVar5) {
    *(undefined4 *)(param_1 + 0xff0) = 0;
  }
LAB_00b1a969:
  FUN_00b082a0();
  return;
}

// 00B1A990  FUN_00b1a990  size=239  [callgraph]
undefined4 __fastcall FUN_00b1a990(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  FUN_00ac2080(0);
  piVar4 = (int *)param_1[0x19f];
  piVar2 = piVar4 + param_1[0x1a1] * 0x54;
  iVar3 = 0;
  do {
    if (piVar4 == piVar2) {
      return 0;
    }
    iVar1 = *piVar4;
    if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) &&
       (((iVar1 != 0x1b0 && (iVar1 != 0x147)) &&
        ((iVar1 != 0xe0 && (iVar1 = FUN_00a81330(), iVar1 != param_1[0x13c])))))) {
      if (iVar1 != 0) {
        iVar3 = FUN_00a7c8a0();
      }
      iVar1 = FUN_00b0a4b0(piVar4);
      if (iVar1 != 0) {
        if (iVar3 != 0) {
          param_1[0x53c] = *(int *)(iVar3 + 0x40);
          param_1[0x53d] = *(int *)(iVar3 + 0x44);
          param_1[0x53e] = *(int *)(iVar3 + 0x48);
          param_1[0x53f] = *(int *)(iVar3 + 0x4c);
        }
        param_1[0x538] = piVar4[8];
        param_1[0x539] = piVar4[9];
        param_1[0x53a] = piVar4[10];
        param_1[0x53b] = piVar4[0xb];
        (**(code **)(*param_1 + 0x198))(iVar3,piVar4,0x100);
        return 1;
      }
    }
    piVar4 = piVar4 + 0x54;
  } while( true );
}

// 00B1AA80  FUN_00b1aa80  size=202  [callgraph]
undefined4 __fastcall FUN_00b1aa80(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  FUN_00ac2080(0);
  piVar4 = (int *)param_1[0x19f];
  piVar2 = piVar4 + param_1[0x1a1] * 0x54;
  if (piVar4 == piVar2) {
    return 0;
  }
  do {
    iVar1 = *piVar4;
    if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && ((iVar1 != 0x1b0 && (iVar1 != 0x147))))
    {
      iVar1 = FUN_00a81330();
      uVar3 = 0;
      if (iVar1 != param_1[0x13c]) {
        if (iVar1 != 0) {
          uVar3 = FUN_00a7c8a0();
        }
        iVar1 = FUN_00b0a4b0(piVar4);
        if (iVar1 != 0) {
          (**(code **)(*param_1 + 0x198))(uVar3,piVar4,0x100);
          param_1[0x538] = piVar4[8];
          param_1[0x539] = piVar4[9];
          param_1[0x53a] = piVar4[10];
          param_1[0x53b] = piVar4[0xb];
        }
        return 1;
      }
    }
    piVar4 = piVar4 + 0x54;
  } while (piVar4 != piVar2);
  return 0;
}

// 00B1AB50  FUN_00b1ab50  size=2466  [callgraph]
undefined4 __thiscall FUN_00b1ab50(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((param_1[0x128] == 0xe) || (param_1[0x128] == 0xf)) {
    param_1[0x440] = param_1[0x440] + 1;
    iVar1 = FUN_00a8eea0();
    iVar2 = FUN_00a8eeb0();
    uVar3 = (uint)param_2[0x23] >> 0x11 & 1;
    if (((((float)iVar1 / (float)iVar2 < (float)param_1[0x572]) &&
         ((9 < *(byte *)((int)param_2 + 0x11) ||
          (((param_2[0x24] & 0x2000000U) != 0 && (*param_2 != 0x1f)))))) || (param_1[0x139] != 0))
       || (uVar3 != 0)) {
      if (param_1[0x128] == 0xf) {
        if (uVar3 == 0) {
          uVar4 = 0x2d;
          if (param_1[0x139] != 0) {
            uVar4 = 0x3c;
          }
        }
        else {
          uVar4 = 0x34;
          if (param_1[0x139] != 0) {
            uVar4 = 0x42;
          }
        }
        FUN_00ac8ab0();
        param_1[0x24] = 0;
        param_1[0x443] = -1;
        FUN_00b0f910();
        if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
          param_1[0x34a] = 1;
          FUN_00a88b50(4,1);
          param_1[0x34a] = 0;
        }
        FUN_00b10f60(uVar4);
        if (param_1[0x1d9] != 0) {
          FUN_008e5c50(7);
          param_1[0x5a4] = 0;
          param_1[0x5a5] = 0;
          param_1[0x5a6] = 0;
          param_1[0x5a7] = 0;
          FUN_008e0d30(param_1 + 0x5a4);
        }
        FUN_00b08850((int)(char)param_1[0x2ea]);
      }
      else {
        if (uVar3 == 0) {
          FUN_00b13790(0x31);
        }
        else {
          uVar4 = 0x3b;
          if (param_1[0x139] != 0) {
            uVar4 = 0x3c;
          }
          FUN_00ac8ab0();
          param_1[0x24] = 0;
          param_1[0x443] = -1;
          FUN_00b0f910();
          if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
            param_1[0x34a] = 1;
            FUN_00a88b50(4,1);
            param_1[0x34a] = 0;
          }
          FUN_00b10f60(uVar4);
          if (param_1[0x1d9] != 0) {
            FUN_008e5c50(7);
            param_1[0x5a4] = 0;
            param_1[0x5a5] = 0;
            param_1[0x5a6] = 0;
            param_1[0x5a7] = 0;
            FUN_008e0d30(param_1 + 0x5a4);
          }
        }
        if (param_1[0x1d9] != 0) {
          FUN_008e0ae0(1);
        }
      }
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      param_1[0x128] = 3;
      param_1[0x44e] = 2;
      if (uVar3 == 0) {
        FUN_00b16750(9);
        return 0;
      }
      FUN_00b16750(10);
      return 0;
    }
    if (*param_2 == 0x4f) {
      if (param_1[0x128] == 0xf) {
        uVar4 = 0x6e;
      }
      else {
        uVar4 = 0x6d;
      }
      FUN_00b10f60(uVar4);
      FUN_00b16750(6);
      return 0x21;
    }
    iVar1 = FUN_00a8c760(0x10);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_00b0e370();
    if ((iVar1 != 0) && (iVar1 = FUN_00a8c760(0x10), iVar1 != 0)) {
      return 0;
    }
    if (param_1[0x128] != 0xf) {
      FUN_00b10f60(0x6d);
      FUN_00b16750(6);
      return 0;
    }
    FUN_00b10f60(0x6e);
    FUN_00b16750(6);
    return 0;
  }
  iVar1 = *param_2;
  if (iVar1 < 0x146) {
    if (iVar1 == 0x145) {
      FUN_00b13790(0x31);
      return 1;
    }
    if (iVar1 == 0x59) {
LAB_00b1b4c3:
      if (param_1[0x540] < 1) {
        return 0;
      }
      FUN_00b10f60(0xa5);
      param_1[0x541] = 0x83;
      return 1;
    }
    if (iVar1 == 0x144) {
      uVar4 = 0x2d;
      if (param_1[0x139] != 0) {
        uVar4 = 0x3c;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x443] = -1;
      FUN_00b0f910();
      if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_00b10f60(uVar4);
      if (param_1[0x1d9] != 0) {
        FUN_008e5c50(7);
        param_1[0x5a4] = 0;
        param_1[0x5a5] = 0;
        param_1[0x5a6] = 0;
        param_1[0x5a7] = 0;
        FUN_008e0d30(param_1 + 0x5a4);
      }
      return 1;
    }
  }
  else if (iVar1 == 0x188) goto LAB_00b1b4c3;
  if ((param_1[0x540] < 1) && ((param_1[0x449] & 0x400000U) == 0)) {
    if ((param_2[0x23] & 0x20000U) != 0) {
      iVar1 = FUN_00b02100();
      if (iVar1 != 0) {
        uVar4 = 0x39;
        if (param_1[0x139] != 0) {
          uVar4 = 0x43;
        }
        FUN_00ac8ab0();
        param_1[0x24] = 0;
        param_1[0x443] = -1;
        FUN_00b0f910();
        if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
          param_1[0x34a] = 1;
          FUN_00a88b50(4,1);
          param_1[0x34a] = 0;
        }
        FUN_00b10f60(uVar4);
        if (param_1[0x1d9] == 0) {
          return 0;
        }
        FUN_008e5c50(7);
        param_1[0x5a4] = 0;
        param_1[0x5a5] = 0;
        param_1[0x5a6] = 0;
        param_1[0x5a7] = 0;
        FUN_008e0d30(param_1 + 0x5a4);
        return 0;
      }
      uVar4 = 0x34;
      if (param_1[0x139] != 0) {
        uVar4 = 0x42;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x443] = -1;
      FUN_00b0f910();
      if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_00b10f60(uVar4);
      if (param_1[0x1d9] == 0) {
        return 0;
      }
      FUN_008e5c50(7);
      param_1[0x5a4] = 0;
      param_1[0x5a5] = 0;
      param_1[0x5a6] = 0;
      param_1[0x5a7] = 0;
      FUN_008e0d30(param_1 + 0x5a4);
      return 0;
    }
    iVar1 = FUN_00b0a6c0(param_2);
    if (iVar1 != 0) {
      FUN_00b13790(0x30);
      param_1[0x449] = param_1[0x449] | 0x20000;
      return 0x40;
    }
    if ((param_2[0x24] & 0x1000000U) != 0) {
      FUN_00b13790(0x33);
      param_1[0x449] = param_1[0x449] | 0x20000;
      return 0;
    }
    if ((param_2[0x24] & 0x800000U) != 0) {
      FUN_00b13790(0x32);
      param_1[0x449] = param_1[0x449] | 0x20000;
      return 0x800;
    }
    iVar1 = FUN_00b0a650(param_2);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar1 == 0) {
        if ((param_1[0x139] == 0) && (*param_2 == 0x59)) {
          return 0;
        }
        FUN_00b13790(0x2f);
        return 0;
      }
      if (*(byte *)((int)param_2 + 0x11) < 7) {
        if ((param_1[0x139] == 0) && (*param_2 == 0x59)) {
          return 0;
        }
        uVar4 = 0x2d;
        if (param_1[0x139] != 0) {
          uVar4 = 0x3c;
        }
        FUN_00ac8ab0();
        param_1[0x24] = 0;
        param_1[0x443] = -1;
        FUN_00b0f910();
        if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
          param_1[0x34a] = 1;
          FUN_00a88b50(4,1);
          param_1[0x34a] = 0;
        }
        FUN_00b10f60(uVar4);
        if (param_1[0x1d9] != 0) {
          FUN_008e5c50(7);
          param_1[0x5a4] = 0;
          param_1[0x5a5] = 0;
          param_1[0x5a6] = 0;
          param_1[0x5a7] = 0;
          FUN_008e0d30(param_1 + 0x5a4);
          param_1[0x449] = param_1[0x449] | 0x20000;
          return 0;
        }
      }
      else {
        uVar4 = 0x2e;
        if (param_1[0x139] != 0) {
          uVar4 = 0x3c;
        }
        FUN_00ac8ab0();
        param_1[0x24] = 0;
        param_1[0x443] = -1;
        FUN_00b0f910();
        if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
          param_1[0x34a] = 1;
          FUN_00a88b50(4,1);
          param_1[0x34a] = 0;
        }
        FUN_00b10f60(uVar4);
        if (param_1[0x1d9] != 0) {
          FUN_008e5c50(7);
          param_1[0x5a4] = 0;
          param_1[0x5a5] = 0;
          param_1[0x5a6] = 0;
          param_1[0x5a7] = 0;
          FUN_008e0d30(param_1 + 0x5a4);
          param_1[0x449] = param_1[0x449] | 0x20000;
          return 0;
        }
      }
      goto LAB_00b1b4b0;
    }
  }
  else {
    if ((0 < param_1[0x540]) && ((param_2[0x23] & 0x20000U) != 0)) {
      uVar4 = 0x39;
      if (param_1[0x139] != 0) {
        uVar4 = 0x43;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x443] = -1;
      FUN_00b0f910();
      if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_00b10f60(uVar4);
      if (param_1[0x1d9] == 0) {
        return 0;
      }
      FUN_008e5c50(7);
      param_1[0x5a4] = 0;
      param_1[0x5a5] = 0;
      param_1[0x5a6] = 0;
      param_1[0x5a7] = 0;
      FUN_008e0d30(param_1 + 0x5a4);
      return 0;
    }
    param_1[0x5ab] = (uint)param_1[0x449] >> 0x16 & 1;
    param_1[0x449] = param_1[0x449] & 0xff3fffff;
    if ((param_2[0x24] & 0x800000U) != 0) {
      FUN_00b13790(0x32);
      param_1[0x449] = param_1[0x449] | 0x20000;
      return 0;
    }
  }
  FUN_00b13790(0x31);
LAB_00b1b4b0:
  param_1[0x449] = param_1[0x449] | 0x20000;
  return 0;
}

// 00B1B500  FUN_00b1b500  size=301  [callgraph]
undefined4 __thiscall FUN_00b1b500(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0xffffffff;
  if (*param_2 == 0x144) {
    if (*(int *)(param_1 + 0x618) == 0x35) {
      return 0xffffffff;
    }
    uVar2 = 1;
    uVar3 = 0x35;
  }
  else {
    if (*param_2 == 0x145) {
      uVar2 = 1;
      FUN_00b13790(0x31);
      goto LAB_00b1b603;
    }
    if (*(int *)(param_1 + 0x618) != 0x35) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        return 0xffffffff;
      }
      uVar2 = 1;
      FUN_00ac8ab0();
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x110c) = 0xffffffff;
      FUN_00b0f910();
      if ((*(int *)(param_1 + 0x814) < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
        *(undefined4 *)(param_1 + 0xd28) = 1;
        FUN_00a88b50(4,1);
        *(undefined4 *)(param_1 + 0xd28) = 0;
      }
      FUN_00b10f60(0x3c);
      if (*(int *)(param_1 + 0x764) != 0) {
        FUN_008e5c50(7);
        *(undefined4 *)(param_1 + 0x1690) = 0;
        *(undefined4 *)(param_1 + 0x1694) = 0;
        *(undefined4 *)(param_1 + 0x1698) = 0;
        *(undefined4 *)(param_1 + 0x169c) = 0;
        FUN_008e0d30((undefined4 *)(param_1 + 0x1690));
      }
      goto LAB_00b1b603;
    }
    FUN_00a8ee20(0);
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    uVar3 = 0x45;
  }
  FUN_00b10f60(uVar3);
LAB_00b1b603:
  *(undefined4 *)(param_1 + 0x1690) = 0;
  *(undefined4 *)(param_1 + 0x1694) = 0;
  *(undefined4 *)(param_1 + 0x1698) = 0;
  *(undefined4 *)(param_1 + 0x169c) = 0;
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e0d30((undefined4 *)(param_1 + 0x1690));
  }
  return uVar2;
}

// 00B1B630  FUN_00b1b630  size=208  [callgraph]
void __thiscall FUN_00b1b630(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_164 [352];
  
  if ((param_1[0x449] & 0x1000U) == 0) {
    param_1[0x449] = param_1[0x449] | 0x1000;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    (**(code **)(*param_1 + 200))(1);
    FUN_00b08240();
    piVar1 = (int *)FUN_00ac89d0();
    if (piVar1 == (int *)0x0) {
      piVar1 = param_1;
    }
    uVar2 = FUN_00a8c890(0);
    FUN_004117d0((param_2 == 0) * '\b' + '\t',piVar1,uVar2);
    FUN_00a963e0(auStack_164);
    FUN_00e5e0c0("em0040_se_dmg_spark",param_1,0xffffffff,0);
    if (param_3 != 0) {
      FUN_00b11540();
    }
  }
  return;
}

// 00B1B700  FUN_00b1b700  size=411  [callgraph]
void __thiscall FUN_00b1b700(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  
  iVar1 = FUN_00acf0e0();
  if (iVar1 == 0) {
    FUN_00a8c9b0(0,9,0x3f800000,0);
    FUN_00a8c9b0(0,0x11,0x3f800000,0);
    FUN_00b08240();
    if (param_2 != 0) {
      local_130 = param_1[0x10];
      local_12c = param_1[0x11];
      local_128 = param_1[0x12];
      local_124 = param_1[0x13];
      iVar1 = FUN_00a12210(0);
      if (iVar1 != 0) {
        local_130 = *(int *)(iVar1 + 0x40);
        local_12c = *(int *)(iVar1 + 0x44);
        local_128 = *(int *)(iVar1 + 0x48);
        local_124 = *(int *)(iVar1 + 0x4c);
      }
      uVar2 = FUN_00e01ca0();
      if (param_3 == 0) {
        uVar4 = 10;
      }
      else {
        uVar4 = 3;
      }
      FUN_00e013e0(0x20040,uVar4,&local_130,uVar2);
    }
    iVar1 = FUN_00e5e0c0("em0040_se_dmg_explosion",param_1,0xffffffff,0);
    param_1[0x5a3] = iVar1;
    FUN_00a94bc0(0,0);
    (**(code **)(*param_1 + 0x20))();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    if ((*(byte *)((int)param_1 + 0x1127) & 1) != 0) {
      FUN_00a8c9b0(0,0x37,0x3f800000,0);
      param_1[0x449] = param_1[0x449] & 0xfeffffff;
    }
    (**(code **)(*param_1 + 0x318))();
    FUN_00c4d1a0(param_1[0x13c],0);
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x20))();
      }
    }
    FUN_00b03a50();
  }
  return;
}

// 00B1B8A0  FUN_00b1b8a0  size=823  [callgraph]
void __fastcall FUN_00b1b8a0(int *param_1)

{
  float fVar1;
  int iVar2;
  float unaff_ESI;
  float unaff_EDI;
  undefined4 uVar3;
  undefined1 *local_188;
  int *local_184;
  undefined1 auStack_174 [8];
  undefined1 auStack_16c [8];
  undefined1 auStack_164 [68];
  undefined1 auStack_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    local_184 = (int *)0xb1b8cf;
    FUN_00b0a600();
    local_184 = (int *)0xb1b8d6;
    FUN_00b08d00();
    local_184 = (int *)0x0;
    local_188 = (undefined1 *)0xb1b8df;
    FUN_00b03020();
    param_1[0x449] = param_1[0x449] & 0xffffff7f;
    param_1[0x25] = param_1[0x441];
    local_184 = (int *)0x3f800000;
    local_188 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x28,0,0x3e4ccccd,0x3f800000,0x8038000);
    local_184 = (int *)0x1;
    local_188 = (undefined1 *)0xb1b935;
    (**(code **)(*param_1 + 0x1f8))();
    local_184 = (int *)0xb1b93e;
    FUN_00e01ca0();
    local_184 = param_1 + 0x484;
    local_188 = (undefined1 *)0xb1b94e;
    FUN_00dffb30();
    local_184 = (int *)auStack_120;
    local_188 = (undefined1 *)0x207;
    FUN_00e02d50(param_1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    local_184 = (int *)0x3f800000;
    local_188 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_184 = (int *)0xb1b981;
    FUN_00b07f30();
    local_184 = (int *)0x0;
    local_188 = (undefined1 *)0xb1b98a;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      if (param_1[0x1d9] != 0) {
        local_184 = (int *)0xb1b9a7;
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      local_184 = (int *)0x3d888889;
      local_188 = (undefined1 *)0xb1b9d6;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_188 = auStack_174;
        FUN_00a92f90();
        FUN_0044fd10();
        local_188 = (undefined1 *)0xb1b9fd;
        iVar2 = (**(code **)(*param_1 + 0x84))();
        local_188 = *(undefined1 **)(iVar2 + 4);
        D3DXMatrixRotationY(auStack_164);
        D3DXVec3TransformNormal(&stack0xfffffe84,&stack0xfffffe84,auStack_16c);
        fVar1 = 1.0 / (float)param_1[0x244];
        local_188 = (undefined1 *)((float)local_188 * fVar1);
        local_184 = (int *)((float)local_184 * fVar1);
        param_1[0x227] = (int)(unaff_ESI * fVar1);
        param_1[0x224] = (int)local_188;
        param_1[0x225] = (int)local_184;
        param_1[0x226] = (int)(unaff_EDI * fVar1);
        FUN_008e0c00(&local_188);
        param_1[0x187] = 2;
        FUN_00aa3f60(0x29);
      }
      else {
LAB_00b1bac3:
        local_188 = (undefined1 *)0x2a;
        param_1[0x187] = 3;
        FUN_00aa3f60();
      }
    }
    break;
  case 2:
    local_184 = (int *)0x3f800000;
    local_188 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_184 = (int *)0x3d888889;
    local_188 = (undefined1 *)0xb1babb;
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 == 0) break;
    goto LAB_00b1bac3;
  case 3:
    local_184 = (int *)0x3f800000;
    local_188 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_184 = (int *)0x0;
    local_188 = (undefined1 *)0xb1baf1;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_184 = (int *)0x0;
      local_188 = (undefined1 *)0x0;
      (**(code **)(param_1[0x484] + 8))(0);
      uVar3 = 0x39;
      if (param_1[0x139] != 0) {
        uVar3 = 0x43;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x443] = -1;
      FUN_00b0f910();
      if ((param_1[0x205] < 4) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x59)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_00b10f60(uVar3);
      if (param_1[0x1d9] != 0) {
        FUN_008e5c50(7);
        param_1[0x5a4] = 0;
        param_1[0x5a5] = 0;
        param_1[0x5a6] = 0;
        param_1[0x5a7] = 0;
        FUN_008e0d30(param_1 + 0x5a4);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  return;
}

// 00B1BBF0  FUN_00b1bbf0  size=330  [callgraph]
void __fastcall FUN_00b1bbf0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00b0a600();
    FUN_00b08cb0();
    uVar2 = FUN_00b03a00(param_1[0x245]);
    FUN_00aa3f60(uVar2);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b1b630(0,1);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x248] = 0x3f333333;
  }
  else if (iVar3 != 1) {
    if (iVar3 == 2) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668;
      param_1[0x248] = (int)fVar1;
      if (fVar1 < 0.0) {
        FUN_00b1b700(1,0);
        FUN_00b10f60(0x46);
      }
    }
    return;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00aa4120(0x2b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668;
  param_1[0x248] = (int)fVar1;
  if (fVar1 < 0.0) {
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00b08ee0();
  return;
}

// 00B1BD40  FUN_00b1bd40  size=512  [callgraph]
void __fastcall FUN_00b1bd40(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b0a600();
    FUN_00b08d00();
    FUN_00b1b630(0,1);
    uVar2 = 0x3e4ccccd;
    param_1[0x449] = param_1[0x449] & 0xffffff7f;
    if (param_1[0x42c] == 0x2f) {
      uVar2 = 0;
    }
    FUN_00aa4080(0x32,0,uVar2,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x225] = 0x3e19999a;
    pcVar1 = *(code **)(*param_1 + 0x1f8);
    param_1[0x289] = 0x41200000;
    param_1[0x288] = 1;
    (*pcVar1)(1);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x2e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3f333333;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) || ((float)param_1[0x248] <= 0.0)) {
      FUN_00b1b700(1,0);
      FUN_00b10f60(0x46);
    }
  }
  return;
}

// 00B1BF50  FUN_00b1bf50  size=375  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00b1bf50(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x449] = param_1[0x449] & 0xffffff7f;
    FUN_00b1b630(0,1);
    uVar3 = 0x31;
    if ((float)param_1[0x245] < 0.0) {
      uVar3 = 0x30;
    }
    FUN_00aa4080(uVar3,0,0x3e4ccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x248] = 0x3fa66666;
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8e520();
  if ((iVar2 == 0) || (param_1[0x188] != 0)) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = (_DAT_01be942c / (float)param_1[0x244]) * 0.8;
  }
  FUN_00a96030(0,fVar1);
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    param_1[0x188] = param_1[0x188] + 1;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) || ((float)param_1[0x248] <= 0.0)) {
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
  }
  return;
}

// 00B1C0D0  FUN_00b1c0d0  size=676  [callgraph]
void __fastcall FUN_00b1c0d0(int *param_1)

{
  float fVar1;
  int iVar2;
  float unaff_ESI;
  undefined1 *local_78;
  float local_74;
  float afStack_6c [2];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [80];
  
  switch(param_1[0x187]) {
  case 0:
    local_74 = 1.6324106e-38;
    FUN_00b0a600();
    local_74 = 1.6324115e-38;
    FUN_00b08d00();
    local_74 = 1.4013e-45;
    local_78 = (undefined1 *)0x0;
    FUN_00b1b630();
    param_1[0x25] = param_1[0x441];
    local_74 = 1.0;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x28,0,0x3e4ccccd,0x3f800000,0x8038000);
    local_74 = 1.4013e-45;
    local_78 = (undefined1 *)0xb1c155;
    (**(code **)(*param_1 + 0x1f8))();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 1.6324282e-38;
    FUN_00b07f30();
    local_74 = 0.0;
    local_78 = (undefined1 *)0xb1c17e;
    iVar2 = FUN_00a94ce0();
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x1d9] != 0) {
      local_74 = 1.6324335e-38;
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    local_74 = 0.06666667;
    local_78 = (undefined1 *)0xb1c1ca;
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 == 0) {
      local_78 = auStack_64;
      FUN_00a92f90();
      FUN_0044fd10();
      local_78 = (undefined1 *)0xb1c20f;
      iVar2 = (**(code **)(*param_1 + 0x84))();
      local_78 = *(undefined1 **)(iVar2 + 4);
      D3DXMatrixRotationY(auStack_54);
      D3DXVec3TransformNormal(afStack_6c,afStack_6c,auStack_5c);
      fVar1 = 1.0 / (float)param_1[0x244];
      local_78 = (undefined1 *)((float)local_78 * fVar1);
      local_74 = local_74 * fVar1;
      afStack_6c[0] = afStack_6c[0] * fVar1;
      param_1[0x227] = (int)afStack_6c[0];
      param_1[0x224] = (int)local_78;
      param_1[0x225] = (int)local_74;
      param_1[0x226] = (int)(unaff_ESI * fVar1);
      FUN_008e0c00(&local_78);
      param_1[0x187] = 2;
      FUN_00aa3f60(0x29);
      param_1[0x249] = param_1[0x11];
      return;
    }
    local_78 = (undefined1 *)0x2a;
    param_1[0x248] = 0x3f333333;
    param_1[0x187] = 3;
    FUN_00aa3f60();
    return;
  case 2:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0.06666667;
    local_78 = (undefined1 *)0xb1c2d6;
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 != 0) {
      local_74 = 5.88545e-44;
      param_1[0x248] = 0x3f333333;
      param_1[0x187] = 3;
      local_78 = (undefined1 *)0xb1c2f9;
      FUN_00aa3f60();
      return;
    }
    if (-10.0 <= (float)param_1[0x11] - (float)param_1[0x249]) {
      return;
    }
    break;
  case 3:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0.0;
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    local_78 = (undefined1 *)0xb1c348;
    iVar2 = FUN_00a94ce0();
    if ((iVar2 == 0) && (0.0 < (float)param_1[0x248])) {
      return;
    }
    break;
  default:
    goto switchD_00b1c0eb_default;
  }
  local_74 = 0.0;
  local_78 = (undefined1 *)0x1;
  FUN_00b1b700();
  local_74 = 9.80909e-44;
  local_78 = (undefined1 *)0xb1c36f;
  FUN_00b10f60();
switchD_00b1c0eb_default:
  return;
}

// 00B1C390  FUN_00b1c390  size=555  [callgraph]
void __fastcall FUN_00b1c390(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b0a600();
    FUN_00b08d00();
    FUN_00b1b630(0,1);
    FUN_00aa9280(0x2d);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x455] = 0x3f19999a;
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar3 = (float10)-1.0;
    }
    else {
      fVar3 = (float10)FUN_00e36a50(0);
    }
    pcVar1 = *(code **)(*param_1 + 0x1f8);
    param_1[0x451] =
         (int)(float)((float10)(float)param_1[0x22a] * (float10)0.6 * fVar3 * (float10)60.0 *
                     (float10)0.9);
    (*pcVar1)(1);
    FUN_00b03020(0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x455] = 0x3f99999a;
      FUN_00aa4120(0x2e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00b1b700(1,0);
      FUN_00b10f60(0x46);
    }
    FUN_00b02df0();
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = param_1[0x451];
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3f333333;
    }
    FUN_00b02df0();
    return;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) || ((float)param_1[0x248] <= 0.0)) {
      FUN_00b1b700(1,0);
      FUN_00b10f60(0x46);
    }
  default:
    return;
  }
}

// 00B1C5D0  FUN_00b1c5d0  size=575  [callgraph]
void __fastcall FUN_00b1c5d0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    FUN_00b1b630(0,1);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x225] = param_1[0x451];
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 == 0) {
      FUN_00b03020(0);
      param_1[0x455] = 0x41200000;
      param_1[0x451] = -0x41800000;
      param_1[0x187] = 1;
      FUN_00aa4120(0x2e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      goto LAB_00b1c6f2;
    }
    param_1[0x248] = 0x3f333333;
    FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 2;
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else {
    if (iVar1 == 1) {
LAB_00b1c6f2:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x225] = param_1[0x451];
      iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar1 != 0) {
        if (param_1[0x1d9] != 0) {
          (**(code **)(*param_1 + 0x314))();
          if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
            *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
          }
        }
        FUN_00aa4120(0x34,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = 0x3f333333;
      }
      FUN_00b02df0();
      return;
    }
    if (iVar1 == 2) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
      iVar1 = FUN_00a94ce0(0);
      if ((iVar1 != 0) || ((float)param_1[0x248] <= 0.0)) {
        FUN_00b1b700(1,0);
        FUN_00b10f60(0x46);
        return;
      }
    }
  }
  return;
}

// 00B1C810  FUN_00b1c810  size=325  [callgraph]
void __fastcall FUN_00b1c810(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(0x33,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668;
    param_1[0x248] = (int)fVar1;
    if (0.0 < fVar1) {
      return;
    }
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00aa4080(0x33,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f19999a;
  }
  return;
}

// 00B1C960  FUN_00b1c960  size=280  [callgraph]
void __fastcall FUN_00b1c960(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(0x36,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x250] = param_1[0x250] + 1;
    if (1 < param_1[0x250]) {
      FUN_00b1b700(1,0);
      FUN_00b10f60(0x46);
      return;
    }
    FUN_00aa4080(0x36,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  return;
}

// 00B1CA80  FUN_00b1ca80  size=175  [callgraph]
void __fastcall FUN_00b1ca80(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00b1b630(0,1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x41f00000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 <= 0.0) {
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}

// 00B1CB30  FUN_00b1cb30  size=171  [callgraph]
void __fastcall FUN_00b1cb30(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(0x83,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b1b630(0,1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x41f00000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 <= 0.0) {
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
  }
  return;
}

// 00B1CBE0  FUN_00b1cbe0  size=42  [callgraph]
void __fastcall FUN_00b1cbe0(int param_1)

{
  FUN_00b1b700(1,0);
  *(undefined4 *)(param_1 + 0x4e4) = 1;
  FUN_00a8ee20(0);
  FUN_00b10f60(0x46);
  return;
}

// 00B1CC10  FUN_00b1cc10  size=46  [callgraph]
void __fastcall FUN_00b1cc10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x1440) = *(float *)(param_1 + 0x1440) - *(float *)(param_1 + 0x910);
    FUN_00b14f70();
    return;
  }
  return;
}

// 00B1CC40  FUN_00b1cc40  size=1267  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b1ce18) */
/* WARNING: Removing unreachable block (ram,0x00b1cda2) */
/* WARNING: Removing unreachable block (ram,0x00b1ce65) */

void __thiscall FUN_00b1cc40(int param_1,int param_2)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  undefined *puVar13;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  undefined4 uStack_45c;
  float fStack_458;
  float fStack_454;
  int iStack_444;
  uint auStack_440 [4];
  undefined4 auStack_430 [64];
  undefined4 uStack_330;
  int iStack_32c;
  undefined4 uStack_2d0;
  undefined2 uStack_2c6;
  
  iVar5 = FUN_00a81330();
  if ((iVar5 != 0) && (piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0)) {
    puVar13 = &DAT_01b34e80;
    (**(code **)(*piVar6 + 4))(&DAT_01b34e80);
    iVar5 = FUN_00dd6d70(puVar13);
    if ((iVar5 != 0) && (iVar5 = FUN_00a12210(0), iVar5 != 0)) {
      pfVar1 = (float *)(iVar5 + 0x40);
      iStack_444 = iVar5;
      uVar7 = FUN_00e01ca0();
      FUN_00e013e0(0x20040,0x7c,pfVar1,uVar7);
      piVar2 = *(int **)(param_1 + 0xa84);
      fStack_474 = (float)piVar2[0x11];
      if (piVar2 != (int *)0x0) {
        puVar13 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar8 = FUN_00dd6d70(puVar13);
        if (iVar8 != 0) {
          fStack_474 = (float)piVar2[0x8c9];
        }
      }
      iVar8 = *(int *)(param_1 + 0xa84);
      fStack_490 = *(float *)(iVar8 + 0x40);
      fStack_488 = *(float *)(iVar8 + 0x48);
      fStack_484 = *(float *)(iVar8 + 0x4c);
      fStack_48c = fStack_474 + 1.2;
      fStack_460 = *pfVar1;
      uStack_45c = *(undefined4 *)(iVar5 + 0x44);
      fStack_458 = *(float *)(iVar5 + 0x48);
      fStack_454 = *(float *)(iVar5 + 0x4c);
      if ((iVar8 == 0) ||
         (fVar3 = *(float *)(iVar8 + 0x40) - (float)piVar6[0x10],
         fVar4 = *(float *)(iVar8 + 0x48) - (float)piVar6[0x12],
         30.25 < fVar4 * fVar4 + fVar3 * fVar3)) {
        if (piVar6[0x42e] == 1) {
          DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
          fVar3 = (float)(DAT_01dd0814 >> 8) * 5.960465e-08;
          fVar3 = (1.0 - (fVar3 + fVar3)) * 7.0;
          fStack_490 = *(float *)(param_1 + 0x1580) * fVar3 + fStack_490;
          fStack_488 = fStack_488 + *(float *)(param_1 + 0x1588) * fVar3;
        }
        else {
          uVar9 = FUN_00dde2d0(0,100);
          if ((uVar9 & 1) != 0) {
            uVar9 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
            DAT_01dd0814 = uVar9 * 0x19660d + 0x3c6ef35f;
            fStack_490 = (1.0 - (float)(uVar9 >> 8) * 5.960465e-08 * 2.0) * 0.25 + fStack_490;
            fStack_488 = (1.0 - (float)(DAT_01dd0814 >> 8) * 5.960465e-08 * 2.0) * 0.25 + fStack_488
            ;
          }
        }
      }
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      auStack_440[1] = 0x20046;
      uStack_330 = 0x58;
      if (param_2 == 0x34) {
        *(undefined4 *)(param_1 + 0x14d0) = 0;
      }
      else {
        iVar8 = *(int *)(param_1 + 0xa84);
        fStack_4a0 = *(float *)(iVar8 + 0x40) - fStack_460;
        fStack_498 = *(float *)(iVar8 + 0x48) - fStack_458;
        fStack_494 = *(float *)(iVar8 + 0x4c) - fStack_454;
        fStack_49c = 0.0;
        fVar3 = fStack_4a0 * fStack_4a0 + fStack_498 * fStack_498;
        if (fVar3 < 0.0 == (fVar3 == 0.0)) {
          FUN_00ddf460(&fStack_4a0,&fStack_4a0);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_498 = 0.0;
          fStack_4a0 = 0.0;
          fStack_49c = 1.0;
        }
        fStack_4a0 = fStack_4a0 * 0.6;
        fStack_49c = fStack_49c * 0.6;
        fStack_498 = fStack_498 * 0.6;
        fStack_494 = fStack_494 * 0.6;
        FUN_004be160(&fStack_490);
        fStack_48c = fStack_474;
      }
      fStack_470 = fStack_490 - *pfVar1;
      fStack_46c = fStack_48c - *(float *)(iVar5 + 0x44);
      fStack_468 = fStack_488 - *(float *)(iVar5 + 0x48);
      fStack_464 = fStack_484 - *(float *)(iVar5 + 0x4c);
      fVar3 = fStack_468 * fStack_468 + fStack_470 * fStack_470 + fStack_46c * fStack_46c;
      if (fVar3 < 0.0 == (fVar3 == 0.0)) {
        FUN_00ddf460(&fStack_470,&fStack_470);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_470 = 0.0;
        fStack_46c = 1.0;
        fStack_468 = 0.0;
      }
      fVar11 = (float10)fpatan((float10)fStack_470,(float10)fStack_468);
      fVar11 = (float10)FUN_00ddba30((float)(fVar11 + (float10)*(float *)(param_1 + 0x14d0)));
      fVar12 = (float10)fpatan((float10)fStack_46c,
                               SQRT((float10)fStack_468 * (float10)fStack_468 +
                                    (float10)fStack_470 * (float10)fStack_470));
      fStack_4a0 = (float)-fVar12;
      fStack_49c = (float)fVar11;
      fStack_498 = 0.0;
      if ((float10)0.5235988 <= -fVar12) {
        fStack_4a0 = 0.47996554;
      }
      iStack_32c = param_2;
      auStack_430[0] = 0xdf;
      puVar10 = (undefined4 *)FUN_009f8b60();
      uStack_2d0 = *puVar10;
      FUN_004bb1b0(auStack_430);
      uStack_2c6 = *(undefined2 *)(iStack_444 + 0xa0);
      auStack_440[0] = auStack_440[0] | 4;
      FUN_00416e30(&fStack_460,&fStack_490,&fStack_4a0,0x3ecccccd,0x437a0000);
      FUN_00ad3be0(piVar6[0x13c],auStack_440);
    }
  }
  return;
}

// 00B1D140  FUN_00b1d140  size=1273  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00b1d358) */
/* WARNING: Removing unreachable block (ram,0x00b1d4d8) */

void FUN_00b1d140(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

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
    puStack_cc = (undefined1 *)0xb1d36a;
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

// 00B1D640  FUN_00b1d640  size=357  [callgraph]
void __fastcall FUN_00b1d640(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    FUN_00b1b630(0,1);
    FUN_008e6c60(0);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
    }
    param_1[0x139] = 1;
    FUN_00aa4520(0xd4,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(int *)(param_1[0x1d9] + 0x114) == 0) {
    iVar2 = FUN_00a8c760(0xc);
    if (iVar2 == 0) {
      FUN_008e6c60(1);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
  }
  return;
}

// 00B1D7B0  FUN_00b1d7b0  size=979  [callgraph]
void __fastcall FUN_00b1d7b0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar2 = FUN_00a81330();
  piVar5 = (int *)0x0;
  if (iVar2 != 0) {
    piVar5 = (int *)FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_008e3c10();
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 1:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (piVar5 != (int *)0x0) {
      FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if ((iVar3 != 0) && (fVar6 = (float10)FUN_00e36970(0), (float10)0.5 <= fVar6)) {
        FUN_00b08240();
        param_1[0x50e] = -0x3e100000;
        uVar7 = 0x3f800000;
        uVar8 = 0;
        FUN_00a92f90(0,0x3f800000);
        fVar6 = (float10)FUN_00407b40(uVar8);
        FUN_00aa4520(0xd5,iVar2,0,0,0x3f800000,0x8000000,
                     (float)((float10)(float)param_1[0x50e] * (float10)0.016666668 + fVar6),uVar7);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x3a] = 0;
        param_1[0x39] = 0;
        param_1[0x38] = 0;
        param_1[0x37] = 0;
        param_1[0x35] = 0;
        param_1[0x34] = 0;
        param_1[0x33] = 0;
        param_1[0x32] = 0;
        param_1[0x30] = 0;
        param_1[0x2f] = 0;
        param_1[0x2e] = 0;
        param_1[0x2d] = 0;
        param_1[0x3b] = 0x3f800000;
        param_1[0x36] = 0x3f800000;
        param_1[0x31] = 0x3f800000;
        param_1[0x2c] = 0x3f800000;
        param_1[0x4b] = 0x3f800000;
        param_1[0x46] = 0x3f800000;
        param_1[0x41] = 0x3f800000;
        param_1[0x3c] = 0x3f800000;
        param_1[0x4a] = 0;
        param_1[0x49] = 0;
        param_1[0x48] = 0;
        param_1[0x47] = 0;
        param_1[0x45] = 0;
        param_1[0x44] = 0;
        param_1[0x43] = 0;
        param_1[0x42] = 0;
        param_1[0x40] = 0;
        param_1[0x3f] = 0;
        param_1[0x3e] = 0;
        param_1[0x3d] = 0;
        param_1[0x449] = param_1[0x449] & 0xff3fffff;
        iVar2 = *param_1;
        uVar8 = (**(code **)(*piVar5 + 0x84))();
        uVar8 = (**(code **)(*piVar5 + 0x68))(uVar8);
        (**(code **)(iVar2 + 0x7c))(uVar8);
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    break;
  case 2:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    piVar4 = (int *)(**(code **)(*piVar5 + 0x68))();
    param_1[0x14] = *piVar4;
    param_1[0x15] = piVar4[1];
    param_1[0x16] = piVar4[2];
    param_1[0x17] = piVar4[3];
    piVar5 = (int *)(**(code **)(*piVar5 + 0x84))();
    param_1[0x24] = *piVar5;
    param_1[0x25] = piVar5[1];
    param_1[0x26] = piVar5[2];
    param_1[0x27] = piVar5[3];
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar6 = (float10)-1.0;
    }
    else {
      fVar6 = (float10)FUN_00e36970(0);
    }
    fVar1 = (float)param_1[0x50e];
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      Animation::Motion::Unit::setCurrentTime
                (0,(float)((float10)fVar1 * (float10)0.016666668 + fVar6));
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x250] == 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      fVar6 = (float10)FUN_00407b40(uVar8);
      if ((float10)1.3333334 <= fVar6) {
        param_1[0x250] = 1;
        param_1[0x1af] = 1;
        FUN_00b041d0();
        FUN_00b1cc40(0x34);
      }
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x20))();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if (120.0 < (float)param_1[0x244] + fVar1) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 00B1DBA0  FUN_00b1dba0  size=357  [callgraph]
void __fastcall FUN_00b1dba0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    FUN_00b1b630(0,1);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
    }
    FUN_008e6c60(0);
    param_1[0x139] = 1;
    FUN_00aa4520(0xd7,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(int *)(param_1[0x1d9] + 0x114) == 0) {
    iVar2 = FUN_00a8c760(0xc);
    if (iVar2 == 0) {
      FUN_008e6c60(1);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
  }
  return;
}

// 00B1DD10  FUN_00b1dd10  size=979  [callgraph]
void __fastcall FUN_00b1dd10(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar2 = FUN_00a81330();
  piVar5 = (int *)0x0;
  if (iVar2 != 0) {
    piVar5 = (int *)FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_008e3c10();
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 1:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (piVar5 != (int *)0x0) {
      FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if ((iVar3 != 0) && (fVar6 = (float10)FUN_00e36970(0), (float10)0.6166667 <= fVar6)) {
        FUN_00b08240();
        param_1[0x50e] = -0x3de80000;
        uVar7 = 0x3f800000;
        uVar8 = 0;
        FUN_00a92f90(0,0x3f800000);
        fVar6 = (float10)FUN_00407b40(uVar8);
        FUN_00aa4520(0xd9,iVar2,0,0,0x3f800000,0x8000000,
                     (float)((float10)(float)param_1[0x50e] * (float10)0.016666668 + fVar6),uVar7);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x3a] = 0;
        param_1[0x39] = 0;
        param_1[0x38] = 0;
        param_1[0x37] = 0;
        param_1[0x35] = 0;
        param_1[0x34] = 0;
        param_1[0x33] = 0;
        param_1[0x32] = 0;
        param_1[0x30] = 0;
        param_1[0x2f] = 0;
        param_1[0x2e] = 0;
        param_1[0x2d] = 0;
        param_1[0x3b] = 0x3f800000;
        param_1[0x36] = 0x3f800000;
        param_1[0x31] = 0x3f800000;
        param_1[0x2c] = 0x3f800000;
        param_1[0x4b] = 0x3f800000;
        param_1[0x46] = 0x3f800000;
        param_1[0x41] = 0x3f800000;
        param_1[0x3c] = 0x3f800000;
        param_1[0x4a] = 0;
        param_1[0x49] = 0;
        param_1[0x48] = 0;
        param_1[0x47] = 0;
        param_1[0x45] = 0;
        param_1[0x44] = 0;
        param_1[0x43] = 0;
        param_1[0x42] = 0;
        param_1[0x40] = 0;
        param_1[0x3f] = 0;
        param_1[0x3e] = 0;
        param_1[0x3d] = 0;
        param_1[0x449] = param_1[0x449] & 0xff3fffff;
        iVar2 = *param_1;
        uVar8 = (**(code **)(*piVar5 + 0x84))();
        uVar8 = (**(code **)(*piVar5 + 0x68))(uVar8);
        (**(code **)(iVar2 + 0x7c))(uVar8);
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    break;
  case 2:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    piVar4 = (int *)(**(code **)(*piVar5 + 0x68))();
    param_1[0x14] = *piVar4;
    param_1[0x15] = piVar4[1];
    param_1[0x16] = piVar4[2];
    param_1[0x17] = piVar4[3];
    piVar5 = (int *)(**(code **)(*piVar5 + 0x84))();
    param_1[0x24] = *piVar5;
    param_1[0x25] = piVar5[1];
    param_1[0x26] = piVar5[2];
    param_1[0x27] = piVar5[3];
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar6 = (float10)-1.0;
    }
    else {
      fVar6 = (float10)FUN_00e36970(0);
    }
    fVar1 = (float)param_1[0x50e];
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      Animation::Motion::Unit::setCurrentTime
                (0,(float)((float10)fVar1 * (float10)0.016666668 + fVar6));
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x250] == 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      fVar6 = (float10)FUN_00407b40(uVar8);
      if ((float10)1.3833333 <= fVar6) {
        param_1[0x250] = 1;
        param_1[0x1af] = 1;
        FUN_00b041d0();
        FUN_00b1cc40(0x34);
      }
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x20))();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if (120.0 < (float)param_1[0x244] + fVar1) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 00B1E100  FUN_00b1e100  size=357  [callgraph]
void __fastcall FUN_00b1e100(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    FUN_00b1b630(0,1);
    FUN_008e6c60(0);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
    }
    param_1[0x139] = 1;
    FUN_00aa4520(0xd6,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(int *)(param_1[0x1d9] + 0x114) == 0) {
    iVar2 = FUN_00a8c760(0xc);
    if (iVar2 == 0) {
      FUN_008e6c60(1);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
  }
  return;
}

// 00B1E270  FUN_00b1e270  size=979  [callgraph]
void __fastcall FUN_00b1e270(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar2 = FUN_00a81330();
  piVar5 = (int *)0x0;
  if (iVar2 != 0) {
    piVar5 = (int *)FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_008e3c10();
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 1:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (piVar5 != (int *)0x0) {
      FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if ((iVar3 != 0) && (fVar6 = (float10)FUN_00e36970(0), (float10)0.6166667 <= fVar6)) {
        FUN_00b08240();
        param_1[0x50e] = -0x3de80000;
        uVar7 = 0x3f800000;
        uVar8 = 0;
        FUN_00a92f90(0,0x3f800000);
        fVar6 = (float10)FUN_00407b40(uVar8);
        FUN_00aa4520(0xd8,iVar2,0,0,0x3f800000,0x8000000,
                     (float)((float10)(float)param_1[0x50e] * (float10)0.016666668 + fVar6),uVar7);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x3a] = 0;
        param_1[0x39] = 0;
        param_1[0x38] = 0;
        param_1[0x37] = 0;
        param_1[0x35] = 0;
        param_1[0x34] = 0;
        param_1[0x33] = 0;
        param_1[0x32] = 0;
        param_1[0x30] = 0;
        param_1[0x2f] = 0;
        param_1[0x2e] = 0;
        param_1[0x2d] = 0;
        param_1[0x3b] = 0x3f800000;
        param_1[0x36] = 0x3f800000;
        param_1[0x31] = 0x3f800000;
        param_1[0x2c] = 0x3f800000;
        param_1[0x4b] = 0x3f800000;
        param_1[0x46] = 0x3f800000;
        param_1[0x41] = 0x3f800000;
        param_1[0x3c] = 0x3f800000;
        param_1[0x4a] = 0;
        param_1[0x49] = 0;
        param_1[0x48] = 0;
        param_1[0x47] = 0;
        param_1[0x45] = 0;
        param_1[0x44] = 0;
        param_1[0x43] = 0;
        param_1[0x42] = 0;
        param_1[0x40] = 0;
        param_1[0x3f] = 0;
        param_1[0x3e] = 0;
        param_1[0x3d] = 0;
        param_1[0x449] = param_1[0x449] & 0xff3fffff;
        iVar2 = *param_1;
        uVar8 = (**(code **)(*piVar5 + 0x84))();
        uVar8 = (**(code **)(*piVar5 + 0x68))(uVar8);
        (**(code **)(iVar2 + 0x7c))(uVar8);
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    break;
  case 2:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    piVar4 = (int *)(**(code **)(*piVar5 + 0x68))();
    param_1[0x14] = *piVar4;
    param_1[0x15] = piVar4[1];
    param_1[0x16] = piVar4[2];
    param_1[0x17] = piVar4[3];
    piVar5 = (int *)(**(code **)(*piVar5 + 0x84))();
    param_1[0x24] = *piVar5;
    param_1[0x25] = piVar5[1];
    param_1[0x26] = piVar5[2];
    param_1[0x27] = piVar5[3];
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar6 = (float10)-1.0;
    }
    else {
      fVar6 = (float10)FUN_00e36970(0);
    }
    fVar1 = (float)param_1[0x50e];
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      Animation::Motion::Unit::setCurrentTime
                (0,(float)((float10)fVar1 * (float10)0.016666668 + fVar6));
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x250] == 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      fVar6 = (float10)FUN_00407b40(uVar8);
      if ((float10)1.3666667 <= fVar6) {
        param_1[0x250] = 1;
        param_1[0x1af] = 1;
        FUN_00b041d0();
        FUN_00b1cc40(0x34);
      }
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x20))();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if (120.0 < (float)param_1[0x244] + fVar1) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 00B1E660  FUN_00b1e660  size=442  [callgraph]
void __fastcall FUN_00b1e660(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00b1b630(0,1);
    param_1[0x139] = 1;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(0x2e,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 == 0) && (0.0 < (float)param_1[0x248])) {
      return;
    }
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
    return;
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f99999a;
  }
  return;
}

// 00B1E820  FUN_00b1e820  size=977  [callgraph]
void __fastcall FUN_00b1e820(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined *puVar5;
  int iStack_24;
  float fStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  iVar2 = FUN_00a81330();
  if ((iVar2 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0)) {
LAB_00b1ebcb:
    FUN_00dd5650(&DAT_01647ae4);
    FUN_00a805f0();
    return;
  }
  puVar5 = &DAT_01b34e80;
  (**(code **)(*piVar3 + 4))(&DAT_01b34e80);
  iVar2 = FUN_00dd6d70(puVar5);
  if ((iVar2 == 0) || (iVar2 = FUN_00a92f90(), iVar2 == 0)) goto LAB_00b1ebcb;
  FUN_00a92f90();
  iVar2 = FUN_00e26e90();
  if (iVar2 == 0) {
    fVar4 = (float10)-1.0;
  }
  else {
    fVar4 = (float10)FUN_00e36970(0);
  }
  fVar1 = (float)(fVar4 * (float10)60.0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1a,0,0x3ecccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    iVar2 = FUN_00a12210(0xf00);
    if (iVar2 != 0) {
      iStack_24 = *(int *)(iVar2 + 0x40);
      iStack_1c = *(undefined4 *)(iVar2 + 0x48);
      uStack_18 = *(undefined4 *)(iVar2 + 0x4c);
      fStack_20 = *(float *)(iVar2 + 0x44) - 0.15;
      FUN_00b1d140(param_1 + 0x514,param_1 + 0x10,&iStack_24,0x3f000000,0);
    }
    param_1[0x248] = 0;
    FUN_00b03020(0);
    FUN_008e3c10();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0x1b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar2 = param_1[0x249];
LAB_00b1ea0a:
    iStack_1c = 0;
    fStack_20 = 0.0;
    iStack_24 = 0;
    FUN_00a581b0(&iStack_24,0,iVar2);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.055555556 + (float)param_1[0x249]);
    param_1[0x14] = iStack_24;
    param_1[0x15] = (int)fStack_20;
    param_1[0x16] = iStack_1c;
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x512] < fVar1 == ((float)param_1[0x512] == fVar1)) {
      iVar2 = param_1[0x249];
      goto LAB_00b1ea0a;
    }
    FUN_00aa4520(0xf1,piVar3[0x13c],0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
switchD_00b1e8db_caseD_3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a12210(param_1[0x511]);
    if (iVar2 != 0) {
      param_1[0x2a] = iVar2;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
    }
    if ((float)param_1[0x513] < fVar1 != ((float)param_1[0x513] == fVar1)) {
      FUN_00b1cc40(0x34);
      FUN_00b041d0();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x139] = 1;
switchD_00b1e8db_caseD_4:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a12210(param_1[0x511]);
      if (iVar2 != 0) {
        param_1[0x2a] = iVar2;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
      }
      iVar2 = FUN_00a8c760(1);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x20))();
        FUN_00a805f0();
        return;
      }
    }
switchD_00b1e8db_default:
    return;
  case 3:
    goto switchD_00b1e8db_caseD_3;
  case 4:
    goto switchD_00b1e8db_caseD_4;
  default:
    goto switchD_00b1e8db_default;
  }
}

// 00B1EC10  FUN_00b1ec10  size=1825  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00b1ec10(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined *puVar16;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  int *local_178;
  undefined1 auStack_174 [8];
  undefined1 auStack_16c [8];
  undefined1 auStack_164 [352];
  
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), local_178 = piVar3, piVar3 != (int *)0x0)) {
    puVar16 = &DAT_01b34e80;
    (**(code **)(*piVar3 + 4))(&DAT_01b34e80);
    iVar2 = FUN_00dd6d70(puVar16);
    if (iVar2 != 0) {
      if ((_DAT_01be9ce8 & 1) == 0) {
        _DAT_01be9ce8 = _DAT_01be9ce8 | 1;
        _DAT_01be9ce4 = 0.04;
      }
      (**(code **)(*param_1 + 0x220))(0x40a00000);
      switch(param_1[0x187]) {
      case 0:
        FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        fVar9 = (float10)FUN_00dde300(0,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = (int)(float)(fVar9 * (float10)0.2 * (float10)60.0);
      case 1:
        fVar1 = (float)param_1[0x248];
        param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] <= 0.0) {
          FUN_00aa4080(0x57,0,0x3ecccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
          iVar2 = FUN_00a12210(3);
          if (iVar2 != 0) {
            fStack_194 = *(float *)(iVar2 + 0x40);
            fStack_18c = *(float *)(iVar2 + 0x48);
            fStack_188 = *(float *)(iVar2 + 0x4c);
            fStack_190 = *(float *)(iVar2 + 0x44) - 0.15;
            pfVar4 = (float *)FUN_00a8b8a0(auStack_174,0x3e99999a);
            fStack_194 = fStack_194 - *pfVar4;
            fStack_190 = fStack_190 - pfVar4[1];
            fStack_18c = fStack_18c - pfVar4[2];
            fStack_188 = fStack_188 - pfVar4[3];
            FUN_00b1d140(param_1 + 0x514,param_1 + 0x10,&fStack_194,0x3f000000,0);
          }
          param_1[0x248] = 0;
          param_1[0x249] = 0;
          FUN_00b03020(0);
          FUN_008e3c10();
          param_1[0x187] = param_1[0x187] + 1;
          return;
        }
        break;
      case 2:
        FUN_00ac80a0(0x3f800000,0x3f800000);
        fStack_194 = 0.0;
        fStack_190 = 0.0;
        fStack_18c = 0.0;
        FUN_00a581b0(&fStack_194,0,param_1[0x249]);
        param_1[0x249] = (int)((float)param_1[0x244] * _DAT_01be9ce4 + (float)param_1[0x249]);
        param_1[0x14] = (int)fStack_194;
        param_1[0x15] = (int)fStack_190;
        param_1[0x16] = (int)fStack_18c;
        iVar2 = FUN_00a952e0(0,0x42480000);
        if (iVar2 != 0) {
          iVar2 = FUN_004b55e0();
          param_1[0x530] = iVar2;
          if (-1 < iVar2) {
            param_1[0x449] = param_1[0x449] | 0x20000;
            (**(code **)(*param_1 + 0x220))(0x40a00000);
          }
          iVar2 = FUN_00a12210(3);
          if (iVar2 != 0) {
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x16] = 0;
            param_1[0x17] = 0;
            param_1[0x24] = 0;
            param_1[0x25] = 0;
            param_1[0x26] = 0;
            param_1[0x27] = 0;
            param_1[0x2a] = iVar2;
          }
          uVar6 = FUN_009f8b40();
          FUN_009f8ae0(uVar6);
          FUN_008e3c10();
          param_1[0x449] = param_1[0x449] | 0x20000;
          param_1[0x449] = param_1[0x449] & 0xffffffbf;
          iVar2 = piVar3[0x13c];
          uVar14 = 0x3f800000;
          uVar13 = 0xbf800000;
          uVar12 = 0;
          uVar11 = 0x3f800000;
          uVar10 = 0x3e4ccccd;
          uVar5 = 0;
          uVar6 = FUN_004b5e10(param_1[0x530],iVar2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000)
          ;
          FUN_00aa4520(uVar6,iVar2,uVar5,uVar10,uVar11,uVar12,uVar13,uVar14);
          param_1[0x187] = param_1[0x187] + 1;
          return;
        }
        break;
      case 3:
        FUN_00ac80a0(0x3f800000,0x3f800000);
        iVar2 = FUN_00a8cac0();
        if (2 < iVar2) {
          param_1[0x2a] = 0;
          iVar2 = FUN_00a12210(3);
          fVar9 = (float10)fpatan((float10)*(float *)(iVar2 + 0x30),
                                  (float10)*(float *)(iVar2 + 0x38));
          local_178 = (int *)(float)fVar9;
          param_1[0x14] = *(int *)(iVar2 + 0x40);
          param_1[0x15] = *(int *)(iVar2 + 0x44);
          param_1[0x16] = *(int *)(iVar2 + 0x48);
          param_1[0x17] = *(int *)(iVar2 + 0x4c);
          piVar3 = (int *)(iVar2 + 0x10);
          piVar8 = param_1 + 0x2c;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar8 = *piVar3;
            piVar3 = piVar3 + 1;
            piVar8 = piVar8 + 1;
          }
          param_1[0x38] = 0;
          param_1[0x39] = 0;
          param_1[0x3a] = 0;
          D3DXMatrixRotationY(auStack_164,(float)-fVar9);
          piVar3 = param_1 + 0x2c;
          D3DXMatrixMultiply(piVar3,auStack_16c,piVar3);
          FUN_00ddba00(param_1 + 0x430,piVar3);
          param_1[0x25] = (int)fStack_18c;
          param_1[0x259] = (int)fStack_18c;
          uVar6 = *(undefined4 *)((int)fStack_190 + 0x4f0);
          uVar15 = 0x3f800000;
          uVar14 = 0xbf800000;
          uVar13 = 0x8000000;
          uVar12 = 0x3f800000;
          uVar11 = 0;
          uVar10 = 0;
          uVar5 = FUN_004b5e30(param_1[0x530],uVar6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          FUN_00aa4520(uVar5,uVar6,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
          FUN_009f8b10();
          FUN_008e6d00();
          uVar6 = 0;
          param_1[0x248] = 0;
          FUN_00a92f90(0);
          fVar9 = (float10)FUN_0043f390(uVar6);
          param_1[0x249] =
               (int)(float)((fVar9 - (float10)param_1[0x530] * (float10)0.016666668) * (float10)60.0
                           );
          FUN_00b03020(0);
          param_1[0x187] = param_1[0x187] + 1;
          param_1[0x250] = 0;
          return;
        }
        break;
      case 4:
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x248] = (int)((float)param_1[0x248] + (float)param_1[0x244]);
        param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
        if ((param_1[0x250] == 0) && (iVar2 = FUN_00a8c760(10), iVar2 != 0)) {
          param_1[0x250] = 1;
        }
        if (param_1[0x250] == 1) {
          if ((float)param_1[0x248] <= 16.0) {
            fStack_194 = 0.0;
            piVar3 = param_1 + 0x430;
            fStack_190 = 0.0;
            fStack_18c = 0.0;
            fStack_188 = 1.0;
            fVar9 = (float10)FUN_00fdc1f0();
            D3DXQuaternionSlerp(piVar3,piVar3,&fStack_194,(float)((float10)1 - fVar9));
            FUN_00ddb9f0(param_1 + 0x2c,piVar3);
          }
          else {
            param_1[0x250] = 2;
            param_1[0x3a] = 0;
            param_1[0x39] = 0;
            param_1[0x38] = 0;
            param_1[0x37] = 0;
            param_1[0x35] = 0;
            param_1[0x34] = 0;
            param_1[0x33] = 0;
            param_1[0x32] = 0;
            param_1[0x30] = 0;
            param_1[0x2f] = 0;
            param_1[0x2e] = 0;
            param_1[0x2d] = 0;
            param_1[0x3b] = 0x3f800000;
            param_1[0x36] = 0x3f800000;
            param_1[0x31] = 0x3f800000;
            param_1[0x2c] = 0x3f800000;
            FUN_00b03020(1);
          }
        }
        iVar2 = FUN_00a94ce0(0);
        if ((iVar2 != 0) || ((float)param_1[0x249] <= 0.0)) {
          if ((int)(short)param_1[0x2ad] % 3 != 0) {
            (**(code **)(*param_1 + 0x20))();
            E3_EnemyBoardDebrisSokushi::vf4C();
            return;
          }
          param_1[0x139] = 1;
          FUN_00b1b700(0,0);
          FUN_00b10f60(0x46);
          fStack_194 = (float)param_1[0x10];
          fStack_190 = (float)param_1[0x11];
          fStack_18c = (float)param_1[0x12];
          fStack_188 = (float)param_1[0x13];
          iVar2 = FUN_00a12210(0);
          if (iVar2 != 0) {
            fStack_194 = *(float *)(iVar2 + 0x40);
            fStack_190 = *(float *)(iVar2 + 0x44);
            fStack_18c = *(float *)(iVar2 + 0x48);
            fStack_188 = *(float *)(iVar2 + 0x4c);
          }
          uVar6 = FUN_00e01ca0();
          FUN_00e013e0(0x20040,0x23,&fStack_194,uVar6);
          return;
        }
      }
      return;
    }
  }
  FUN_00dd5650(&DAT_01647ae4);
  FUN_00a805f0();
  return;
}

// 00B1F370  FUN_00b1f370  size=256  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00b1f370(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 0x4a0) == 5) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    *(float *)(param_1 + 0x1440) = *(float *)(param_1 + 0x1440) - *(float *)(param_1 + 0x910);
    FUN_00b14f70();
  }
  if (*(int *)(param_1 + 0x4a0) != 0x10) {
    iVar3 = FUN_00b024f0();
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xfdffffff;
    }
    else {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x2000000;
    }
    FUN_00b18050();
  }
  if ((*(int *)(param_1 + 0x4a0) == 0xe) || (*(int *)(param_1 + 0x4a0) == 0xf)) {
    bVar2 = false;
    iVar3 = FUN_00a8c760(4);
    if ((iVar3 != 0) ||
       ((iVar3 = FUN_00b0e370(), iVar3 != 0 && (iVar3 = FUN_00a8c760(4), iVar3 != 0)))) {
      bVar2 = true;
    }
    if (((*(int *)(param_1 + 0x1680) == 0) && (bVar2)) && (iVar3 = FUN_00b07ca0(1), iVar3 != -1)) {
      if (*(int *)(param_1 + 0x4a0) == 0xf) {
        uVar4 = 0x6c;
      }
      else {
        uVar4 = 0x6b;
      }
      FUN_00b10f60(uVar4);
      FUN_00b16750(8);
    }
  }
  fVar1 = *(float *)(param_1 + 0x16a4);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0x16a4) = *(float *)(param_1 + 0x16a4) - _DAT_01be942c;
  }
  return;
}

// 00B1FA50  FUN_00b1fa50  size=82  [callgraph]
void __fastcall FUN_00b1fa50(int *param_1)

{
  undefined4 uVar1;
  
  FUN_00a8ca80(0,0,0);
  uVar1 = FUN_004039a0(0x3d,param_1,0);
  FUN_00a963e0(uVar1);
  (**(code **)(*param_1 + 0x20))();
  param_1[0x38e] = 0x40400000;
  return;
}

// 00B1FAB0  FUN_00b1fab0  size=82  [callgraph]
void __fastcall FUN_00b1fab0(int *param_1)

{
  undefined4 uVar1;
  
  FUN_00a8ca80(0,0,0);
  uVar1 = FUN_004039a0(10,param_1,0);
  FUN_00a963e0(uVar1);
  (**(code **)(*param_1 + 0x20))();
  param_1[0x38e] = 0x40400000;
  return;
}

// 00B1FB10  FUN_00b1fb10  size=214  [callgraph]
void __thiscall FUN_00b1fb10(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined1 local_1f0 [492];
  
  *(int *)(param_1 + 0xe30) = param_2;
  if (param_2 != 0) {
    uVar1 = FUN_004039a0(1,param_1,0);
    FUN_00a963e0(uVar1);
    local_200 = 0;
    local_1fc = 0;
    local_1f8 = 0;
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    FUN_00405140(*(undefined4 *)(param_1 + 0x4f0),1,0,&local_210,&local_200,0x40a00000,0x3f000000,
                 0xbf800000);
    FUN_00c5abe0(local_1f0);
    return;
  }
  FUN_00a8c9b0(0,1,0,0);
  FUN_00c62bb0(*(undefined4 *)(param_1 + 0x4f0),1);
  return;
}

// 00B1FBF0  FUN_00b1fbf0  size=373  [callgraph]
void __fastcall FUN_00b1fbf0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  iVar5 = FUN_00a8cac0();
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x628) != 0x93) {
      uVar10 = FUN_004039a0(4,param_1,0);
      FUN_00a963e0(uVar10);
    }
    iVar5 = FUN_00a12210(0);
    *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) | 4;
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    FUN_00a9e290(&DAT_0163d49c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar5 == 1) {
    sVar4 = FUN_00dde2d0(0,9);
    if (sVar4 == 1) {
      piVar6 = (int *)FUN_00c13920();
      (**(code **)(*piVar6 + 0x28))(0);
      iVar5 = FUN_00a12210(0);
      uVar10 = 0;
      FUN_00a7c8a0(0);
      iVar7 = FUN_00a12210(uVar10);
      fVar1 = *(float *)(iVar7 + 0x40) - *(float *)(iVar5 + 0x40);
      fVar3 = *(float *)(iVar7 + 0x44) - *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar7 + 0x48) - *(float *)(iVar5 + 0x48);
      if (SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) < 1.0) {
        iVar5 = FUN_00a12210(0);
        puVar8 = (undefined4 *)(iVar5 + 0x10);
        puVar9 = (undefined4 *)(param_1 + 0xdf0);
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        FUN_00a8caf0(0x93,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00B1FD70  FUN_00b1fd70  size=415  [callgraph]
void __fastcall FUN_00b1fd70(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    uVar3 = FUN_004039a0(0x2a,param_1,0);
    FUN_00a8c8b0(0x20040,uVar3);
    iVar2 = FUN_00a12210(0);
    *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) & 0xfffb;
    FUN_00a9e290(&DAT_0163d4d4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8c9b0(0,1,0,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar2 == 1) {
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a9e290(&DAT_0163d4cc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0xb);
      FUN_008f3c70();
      *(undefined4 *)(param_1 + 0xe44) = 1;
      fVar4 = (float10)FUN_00dde300(0,0x40400000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(float *)(param_1 + 0xe40) = (float)(fVar4 + (float10)3.0);
      *(float *)(param_1 + 0xe3c) = (float)(fVar4 + (float10)3.0);
      return;
    }
  }
  else if (iVar2 == 2) {
    fVar1 = *(float *)(param_1 + 0xe3c);
    fVar4 = (float10)FUN_00a93060();
    fVar4 = (float10)fVar1 - fVar4;
    *(float *)(param_1 + 0xe3c) = (float)fVar4;
    if (fVar4 <= (float10)0) {
      FUN_00b1fa50();
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0xe3c) = 0;
      return;
    }
  }
  return;
}

// 00B1FF10  FUN_00b1ff10  size=154  [callgraph]
void __fastcall FUN_00b1ff10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x63c) + 8)) {
    do {
      piVar1 = (int *)FUN_00a92f50(iVar3);
      if (*piVar1 == 0) {
        FUN_00a8caf0(0x93,0,0,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0x63c) + 8));
  }
  FUN_00a9d860();
  FUN_00a8cab0();
  uVar2 = FUN_00a8cab0();
  switch(uVar2) {
  case 0x90:
    FUN_00b1fbf0();
    break;
  case 0x91:
    FUN_00b0d390();
    break;
  case 0x92:
    FUN_00b1fd70();
    break;
  case 0x93:
    FUN_00b15b80();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B1FFC0  FUN_00b1ffc0  size=142  [callgraph]
void __fastcall FUN_00b1ffc0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00a93170();
  if ((DAT_01bea09c & 0x40000000) != 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x9d) {
      FUN_00a8ca80(0,0,0);
      uVar2 = FUN_004039a0(10,param_1,0);
      FUN_00a963e0(uVar2);
      (**(code **)(*param_1 + 0x20))();
      param_1[0x38e] = 0x40400000;
      (**(code **)(*param_1 + 0x20))();
      FUN_00a8caf0(0x9d,0,0,0);
    }
  }
  return;
}

// 00B20050  FUN_00b20050  size=128  [callgraph]
undefined4 __fastcall FUN_00b20050(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xe5c) = 0;
  *(undefined4 *)(param_1 + 0xe60) = 0;
  FUN_00a8caf0(0x97,0,0,0);
  FUN_00b04cf0();
  uVar2 = FUN_004039a0(4,param_1,0);
  FUN_00a963e0(uVar2);
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
  }
  return 1;
}

// 00B200D0  FUN_00b200d0  size=142  [callgraph]
void __fastcall FUN_00b200d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00a93170();
  if ((DAT_01bea09c & 0x40000000) != 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x9d) {
      FUN_00a8ca80(0,0,0);
      uVar2 = FUN_004039a0(10,param_1,0);
      FUN_00a963e0(uVar2);
      (**(code **)(*param_1 + 0x20))();
      param_1[0x38e] = 0x40400000;
      (**(code **)(*param_1 + 0x20))();
      FUN_00a8caf0(0x9d,0,0,0);
    }
  }
  return;
}

// 00B20160  FUN_00b20160  size=371  [callgraph]
undefined4 __fastcall FUN_00b20160(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00a8caf0(0x95,0,0,0);
  uVar2 = FUN_004039a0(4,param_1,0);
  FUN_00a963e0(uVar2);
  FUN_00b04b20();
  *(undefined4 *)(param_1 + 0xe48) = 0;
  *(undefined4 *)(param_1 + 0xe4c) = 0;
  *(undefined4 *)(param_1 + 0xe50) = 0;
  if (*(int *)(param_1 + 0x4ac) == 4) {
    *(undefined4 *)(param_1 + 0xe48) = 1;
    puVar3 = (undefined4 *)FUN_00dd3580(0x50,&DAT_01b7bd48);
    *(undefined4 **)(param_1 + 0xe4c) = puVar3;
    *puVar3 = 0x240004;
    *(int *)(param_1 + 0xe50) = *(int *)(param_1 + 0xe50) + 1;
    *(undefined4 *)(*(int *)(param_1 + 0xe4c) + 4) = 0x250005;
    *(int *)(param_1 + 0xe50) = *(int *)(param_1 + 0xe50) + 1;
    *(undefined4 *)(*(int *)(param_1 + 0xe4c) + 8) = 0x260006;
    *(int *)(param_1 + 0xe50) = *(int *)(param_1 + 0xe50) + 1;
    *(undefined4 *)(*(int *)(param_1 + 0xe4c) + 0xc) = 0x270007;
    *(int *)(param_1 + 0xe50) = *(int *)(param_1 + 0xe50) + 1;
    *(undefined4 *)(*(int *)(param_1 + 0xe4c) + 0x10) = 0x7020700;
    *(int *)(param_1 + 0xe50) = *(int *)(param_1 + 0xe50) + 1;
    FUN_00a95e20(*(undefined4 *)(param_1 + 0xe4c),*(undefined4 *)(param_1 + 0xe50));
  }
  uVar2 = FUN_00a82090(&DAT_01647b2c,0x40620,0);
  *(undefined4 *)(param_1 + 0xe54) = uVar2;
  FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),uVar2,0x701,0);
  return 1;
}

// 00B202E0  FUN_00b202e0  size=1305  [callgraph]
void __fastcall FUN_00b202e0(int *param_1)

{
  float10 fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  float10 fVar6;
  undefined4 uVar7;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  int iStack_388;
  undefined1 auStack_37c [4];
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined1 auStack_334 [20];
  undefined1 local_320 [236];
  undefined4 local_234;
  
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    param_1[0x1bb] = 1;
    FUN_00405230();
    local_340 = 0;
    local_33c = 0;
    local_338 = 0;
    FUN_00c151f0(1,param_1[0x13c],0,&local_340,0,0x43960000,0x3f800000,0,4);
    FUN_00c57830(local_320);
    param_1[0x39d] = 1;
    uVar7 = FUN_004039a0(0x7a,param_1,0);
    FUN_00a963e0(uVar7);
    param_1[0x187] = param_1[0x187] + 1;
    local_234 = 0;
  }
  else if (iVar3 != 1) {
    return;
  }
  piVar4 = (int *)FUN_00c13920();
  (**(code **)(*piVar4 + 0x28))(0);
  uVar7 = 5;
  FUN_00a7c8a0(5);
  iVar3 = FUN_00a12210(uVar7);
  fStack_374 = *(float *)(iVar3 + 0x40);
  fStack_370 = *(float *)(iVar3 + 0x44);
  fStack_36c = *(float *)(iVar3 + 0x48);
  fStack_368 = *(float *)(iVar3 + 0x4c);
  fStack_3c4 = fStack_374 - (float)param_1[0x10];
  fStack_3c0 = fStack_370 - (float)param_1[0x11];
  fStack_3bc = fStack_36c - (float)param_1[0x12];
  fStack_3b8 = fStack_368 - (float)param_1[0x13];
  if (((fStack_3c4 != 0.0) || (fStack_3c0 != 0.0)) || (fStack_3bc != 0.0)) {
    fVar2 = fStack_3bc * fStack_3bc + fStack_3c4 * fStack_3c4 + fStack_3c0 * fStack_3c0;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_3c4,&fStack_3c4);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_3c4 = 0.0;
      fStack_3c0 = 1.0;
      fStack_3bc = 0.0;
    }
  }
  fStack_378 = SQRT((fStack_36c - (float)param_1[0x12]) * (fStack_36c - (float)param_1[0x12]) +
                    (fStack_370 - (float)param_1[0x11]) * (fStack_370 - (float)param_1[0x11]) +
                    (fStack_374 - (float)param_1[0x10]) * (fStack_374 - (float)param_1[0x10]));
  if ((param_1[0x39d] != 0) && (param_1[0x39d] = (uint)(3.0 < fStack_378), 3.0 < fStack_378 == 0)) {
    param_1[0x3a0] = (int)fStack_3c4;
    param_1[0x3a1] = (int)fStack_3c0;
    param_1[0x3a2] = (int)fStack_3bc;
    param_1[0x3a3] = (int)fStack_3b8;
    param_1[0x3a4] = 0x3f000000;
  }
  if (0.5 < fStack_378 != (fStack_378 == 0.5)) {
    fStack_378 = 0.5;
  }
  fStack_364 = (float)param_1[0x14];
  fStack_360 = (float)param_1[0x15];
  fStack_35c = (float)param_1[0x16];
  fStack_358 = (float)param_1[0x17];
  pfVar5 = (float *)FUN_00a925a0(auStack_334);
  fStack_354 = *pfVar5 + fStack_364;
  fStack_350 = pfVar5[1] + fStack_360;
  fStack_34c = pfVar5[2] + fStack_35c;
  fStack_348 = pfVar5[3] + fStack_358;
  if (param_1[0x39d] == 0) {
    fStack_3a8 = (float)param_1[0x3a4];
    fStack_3b4 = (float)param_1[0x3a0] * fStack_3a8;
    fStack_3b0 = (float)param_1[0x3a1] * fStack_3a8;
    fStack_3ac = (float)param_1[0x3a2] * fStack_3a8;
    fStack_3a8 = fStack_3a8 * (float)param_1[0x3a3];
  }
  else {
    fStack_3b4 = fStack_3c4 * fStack_378;
    fStack_3b0 = fStack_3c0 * fStack_378;
    fStack_3ac = fStack_3bc * fStack_378;
    fStack_3a8 = fStack_378 * fStack_3b8;
  }
  fVar6 = (float10)FUN_00a92ff0();
  param_1[0x14] = (int)(float)((float10)fStack_3b4 * fVar6 + (float10)(float)param_1[0x14]);
  param_1[0x15] = (int)(float)((float10)fStack_3b0 * fVar6 + (float10)(float)param_1[0x15]);
  param_1[0x16] = (int)(float)((float10)fStack_3ac * fVar6 + (float10)(float)param_1[0x16]);
  param_1[0x17] = (int)(float)((float10)fStack_3a8 * fVar6 + (float10)(float)param_1[0x17]);
  fStack_3a4 = fStack_374;
  fStack_3a0 = fStack_370;
  fStack_39c = fStack_36c;
  fStack_398 = fStack_368;
  iStack_394 = param_1[0x14];
  iStack_390 = param_1[0x15];
  iStack_38c = param_1[0x16];
  iStack_388 = param_1[0x17];
  D3DXVec3TransformNormal(&fStack_3a4,&fStack_3a4,param_1 + 0x3c);
  fStack_3b0 = fStack_3b0 + (float)param_1[0x48];
  fStack_3ac = (float)param_1[0x49] + fStack_3ac;
  fStack_3a8 = (float)param_1[0x4a] + fStack_3a8;
  D3DXVec3TransformNormal(&fStack_3a0,&fStack_3a0,param_1 + 0x3c);
  fVar6 = (float10)fStack_3ac;
  fStack_3ac = (float)((float10)(float)param_1[0x48] + fVar6);
  fStack_3a8 = (float)param_1[0x49] + fStack_3a8;
  fVar1 = (float10)fStack_3a4;
  fStack_3a4 = (float)((float10)(float)param_1[0x4a] + fVar1);
  if (param_1[0x39d] != 0) {
    fVar6 = (float10)fpatan((float10)fStack_3bc - ((float10)(float)param_1[0x48] + fVar6),
                            (float10)fStack_3b4 - ((float10)(float)param_1[0x4a] + fVar1));
    param_1[0x25] = (int)(float)fVar6;
  }
  iVar3 = FUN_009f8b40();
  iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_4
                    (0,0,0,0,auStack_37c,&fStack_36c,iVar3 << 0x10 | 0x1e,&DAT_0163d54c);
  if (iVar3 != 0) {
    FUN_00c4d000(param_1[0x13c]);
    param_1[0x39c] = 0;
    param_1[0x1bb] = 0;
    FUN_00a8c9b0(0,0x7a,0,0);
    FUN_00a8ca80(0,0,0);
    uVar7 = FUN_004039a0(0x3d,param_1,0);
    FUN_00a963e0(uVar7);
    (**(code **)(*param_1 + 0x20))();
    param_1[0x38e] = 0x40400000;
    FUN_00a8caf0(0x9d,0,0,0);
  }
  return;
}

// 00B20800  FUN_00b20800  size=91  [callgraph]
void __fastcall FUN_00b20800(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xe3c) = 0x40800000;
  }
  else if (iVar1 == 1) {
    FUN_00a955a0(&DAT_01647b30,0x8c);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00b1fab0();
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      DAT_01bea09c = DAT_01bea09c | 0x40000000;
      return;
    }
  }
  return;
}

// 00B20860  FUN_00b20860  size=637  [callgraph]
void __fastcall FUN_00b20860(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  float unaff_ESI;
  float10 fVar7;
  float *pfVar8;
  float fVar9;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    sVar3 = FUN_00dde2d0(0,1);
    if (sVar3 == 0) {
      FUN_00a9e290(&DAT_01645740,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    FUN_00a9e290(&DAT_01645724,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 1:
    piVar5 = (int *)FUN_00a6e640();
    iVar6 = (**(code **)(*piVar5 + 0x24))(0x2714,1,1);
    if (iVar6 != 0) {
      sVar3 = FUN_00dde2d0(0,9);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(float *)(param_1 + 0xe98) = (float)(int)sVar3 * 0.1;
      return;
    }
    break;
  case 2:
    fVar7 = (float10)FUN_00a93060();
    fVar7 = (float10)*(float *)(param_1 + 0xe98) - fVar7;
    *(float *)(param_1 + 0xe98) = (float)fVar7;
    if (fVar7 <= (float10)0) {
      *(undefined2 *)(param_1 + 0x824) = 2;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
      FUN_00a9e290(&DAT_01640618,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 3:
    piVar5 = (int *)FUN_00c13920();
    fVar9 = 0.0;
    (**(code **)(*piVar5 + 0x28))(0);
    iVar6 = FUN_00a7c8a0();
    fStack_44 = *(float *)(iVar6 + 0x40);
    uStack_40 = *(undefined4 *)(iVar6 + 0x44);
    pfVar8 = &fStack_44;
    uStack_3c = *(undefined4 *)(iVar6 + 0x48);
    fStack_38 = *(float *)(iVar6 + 0x4c);
    uStack_34 = *(undefined4 *)(param_1 + 0x50);
    uStack_30 = *(undefined4 *)(param_1 + 0x54);
    uStack_2c = *(undefined4 *)(param_1 + 0x58);
    uStack_28 = *(undefined4 *)(param_1 + 0x5c);
    D3DXVec3TransformNormal(pfVar8,pfVar8,param_1 + 0xf0);
    fVar2 = *(float *)(param_1 + 0x124);
    D3DXVec3TransformNormal(&uStack_40,&uStack_40,param_1 + 0xf0);
    puVar1 = (undefined4 *)(param_1 + 0x90);
    fVar7 = (float10)*(float *)(param_1 + 0x128) + (float10)fStack_44;
    fStack_44 = (float)fVar7;
    uStack_3c = *puVar1;
    fVar7 = (float10)fpatan((float10)(float)pfVar8 -
                            ((float10)*(float *)(param_1 + 0x120) + (float10)(fVar2 + unaff_ESI)),
                            (float10)fVar9 - fVar7);
    fStack_38 = (float)fVar7;
    uStack_34 = *(undefined4 *)(param_1 + 0x98);
    FUN_00ddefe0(puVar1,puVar1,&uStack_3c,0x3e4ccccd,5);
    iVar6 = FUN_00a95540(0,0x69);
    if (iVar6 != 0) {
      FUN_00b0ddf0();
      *(undefined4 *)(param_1 + 0x4a0) = 3;
      *(undefined4 *)(param_1 + 0x4ac) = 2;
      HoldEntitySlot::HoldEntitySlot();
    }
  }
  return;
}

// 00B20AF0  FUN_00b20af0  size=43  [callgraph]
void FUN_00b20af0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x9e) {
    FUN_00b20860();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B20B20  FUN_00b20b20  size=259  [callgraph]
undefined4 __fastcall FUN_00b20b20(int param_1)

{
  undefined4 uVar1;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d0 [460];
  
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  FUN_00a8caf0(0x9e,0,0,0);
  uVar1 = FUN_004039a0(4,param_1,0);
  FUN_00a963e0(uVar1);
  FUN_00b04cf0();
  uVar1 = FUN_00c5def0(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x970) = uVar1;
  *(undefined4 *)(param_1 + 0x6c4) = 0;
  FUN_00405230();
  local_1e0 = 0;
  local_1dc = 0;
  local_1d8 = 0;
  FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0,&local_1e0,0,0x41200000,0x3f800000,1,0);
  FUN_00c57830(local_1d0);
  *(undefined4 *)(param_1 + 0x6ec) = 1;
  return 1;
}

// 00B20C30  FUN_00b20c30  size=271  [callgraph]
undefined4 __fastcall FUN_00b20c30(int param_1)

{
  undefined4 uVar1;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d0 [460];
  
  FUN_00a929d0();
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  FUN_00a8caf0(0xa0,0,0,0);
  uVar1 = FUN_004039a0(2,param_1,0);
  FUN_00a8c8b0(0x20040,uVar1);
  FUN_00b04cf0();
  uVar1 = FUN_00c5def0(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x970) = uVar1;
  *(undefined4 *)(param_1 + 0x6c4) = 0;
  FUN_00405230();
  local_1e0 = 0;
  local_1dc = 0;
  local_1d8 = 0;
  FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0,&local_1e0,0,0x41200000,0x3f800000,1,0);
  FUN_00c57830(local_1d0);
  *(undefined4 *)(param_1 + 0x6ec) = 1;
  return 1;
}

// 00B20D40  FUN_00b20d40  size=490  [callgraph]
void __fastcall FUN_00b20d40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x128] == 0xf) {
    iVar1 = FUN_00c19c00(param_1[0x2e7],(int)*(short *)((int)param_1 + 0xab2),
                         (short)param_1[0x2ad] + -1);
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
    FUN_00aa4080(0x5c,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        puVar4 = &DAT_01be9d00;
        (**(code **)(*piVar3 + 4))(&DAT_01be9d00);
        iVar1 = FUN_00dd6d70(puVar4);
        if ((iVar1 != 0) && (param_1[0x13c] != 0)) {
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c960(uVar2);
          uVar2 = FUN_009f8b40();
          FUN_009f8ae0(uVar2);
        }
      }
    }
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xefff;
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if (param_1[0x128] == 0xe) {
    FUN_00aa4080(0x5b,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    FUN_00a93090(8);
  }
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00B20F30  Em0040::vf334  size=1387  [class]
void __thiscall Em0040::vf334(int *param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined *puVar10;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 auStack_20 [28];
  
  BehaviorEmBase::vf334(param_2,param_3);
  if (param_3 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar10 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar7 = FUN_00dd6d80(puVar10);
    uVar4 = -(uint)(iVar7 != 0) & (uint)param_3;
  }
  if ((uVar4 != 0) && (piVar5 = (int *)FUN_00acdea0(), piVar5 != (int *)0x0)) {
    puVar10 = &DAT_01be9d00;
    (**(code **)(*piVar5 + 4))(&DAT_01be9d00);
    iVar7 = FUN_00dd6d80(puVar10);
    if ((iVar7 != 0) && (piVar5 != param_1)) {
      FUN_0040ac60(piVar5 + 0x2ac);
      param_1[0x538] = piVar5[0x538];
      param_1[0x539] = piVar5[0x539];
      param_1[0x53a] = piVar5[0x53a];
      param_1[0x53b] = piVar5[0x53b];
      param_1[0x53c] = piVar5[0x53c];
      param_1[0x53d] = piVar5[0x53d];
      param_1[0x53e] = piVar5[0x53e];
      param_1[0x53f] = piVar5[0x53f];
      param_1[0x543] = piVar5[0x543];
      uVar6 = FUN_009f8b40();
      FUN_00ac8a80(uVar6);
    }
  }
  FUN_009fd240();
  piVar5 = (int *)FUN_00ac8a30();
  param_1[0x542] = *piVar5;
  param_1[0x540] = piVar5[1];
  param_1[0x544] = piVar5[2];
  param_1[0x546] = piVar5[3];
  bVar2 = false;
  param_1[0x545] = 0;
  if ((param_1[0x128] == 0xe) || (param_1[0x128] == 0xf)) {
    iVar7 = FUN_00a81330();
    if ((iVar7 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      puVar10 = &DAT_01be9d00;
      (**(code **)(*piVar5 + 4))(&DAT_01be9d00);
      iVar7 = FUN_00dd6d70(puVar10);
      if (iVar7 != 0) {
        FUN_00b16400(9,param_1);
      }
    }
    if (param_1[0x128] == 0xf) {
      FUN_00b08850((int)(char)param_1[0x2ea]);
    }
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x128] = 3;
    param_1[0x44e] = 2;
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(1);
    }
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
  }
  local_30 = (float)param_1[0x53c] - (float)param_1[0x10];
  local_2c = (float)param_1[0x53d] - (float)param_1[0x11];
  local_28 = (float)param_1[0x53e] - (float)param_1[0x12];
  local_24 = (float)param_1[0x53f] - (float)param_1[0x13];
  fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
  }
  pfVar8 = (float *)FUN_00a925a0(auStack_20);
  fVar1 = pfVar8[2] * local_28 + local_30 * *pfVar8 + pfVar8[1] * local_2c;
  if (ABS(fVar1) < 0.25) {
    pfVar8 = (float *)FUN_00a925a0(auStack_20);
    fVar1 = (float)param_1[0x53a] * pfVar8[2] +
            *pfVar8 * (float)param_1[0x538] + (float)param_1[0x539] * pfVar8[1];
  }
  bVar3 = 0.0 <= fVar1;
  switch(param_1[0x542]) {
  case 0:
    iVar7 = 0xa3;
    param_1[0x541] = (-(uint)bVar3 & 0xfffffff6) + 0x89;
    break;
  case 1:
    iVar7 = 0xa3;
    param_1[0x541] = (-(uint)bVar3 & 0xfffffffb) + 0x8a;
    break;
  case 2:
    iVar7 = 0xa4;
    param_1[0x541] = 0x81;
    break;
  case 3:
    iVar7 = 0xa4;
    param_1[0x541] = 0x80;
    break;
  case 4:
    iVar7 = 0xa4;
    param_1[0x541] = (uint)!bVar3 * 2 + 0x82;
    break;
  case 5:
    iVar7 = 0xa5;
    param_1[0x541] = 0x83;
    break;
  case 6:
    param_1[0x570] = 0;
    iVar7 = 0xa2;
    bVar2 = true;
    param_1[0x541] = 0x7a - (uint)bVar3;
    break;
  case 7:
    param_1[0x570] = 0;
    iVar7 = 0xa2;
    bVar2 = true;
    param_1[0x541] = 0x7b;
    break;
  case 8:
    param_1[0x570] = 0;
    iVar7 = 0xa2;
    bVar2 = true;
    param_1[0x541] = 0x7d;
    break;
  case 9:
    param_1[0x570] = 0;
    iVar7 = 0xa2;
    bVar2 = true;
    param_1[0x541] = 0x7c;
    break;
  case 10:
    param_1[0x570] = 0;
    iVar7 = 0xa7;
    iVar9 = FUN_00a8cbe0(0x5e);
    if (iVar9 != 0) {
      iVar7 = 0xab;
    }
    bVar2 = true;
    param_1[0x545] = 1;
    if (iVar7 == -1) goto switchD_00b212a3_default;
    break;
  case 0xb:
    param_1[0x570] = 0;
    iVar7 = 0xa8;
    bVar2 = true;
    break;
  case 0xc:
    param_1[0x570] = 0;
    iVar7 = 0xa9;
    iVar9 = FUN_00a8cbe0(0x5e);
    if (iVar9 != 0) {
      iVar7 = 0xac;
    }
    break;
  case 0xd:
    param_1[0x570] = 0;
    iVar7 = 0xa2;
    bVar2 = true;
    param_1[0x541] = 0x83;
    param_1[0x545] = 1;
    break;
  default:
    goto switchD_00b212a3_default;
  }
  FUN_00a8caf0(iVar7,0,0,0);
switchD_00b212a3_default:
  param_1[0x449] = param_1[0x449] & 0xfbffffff;
  if (bVar2) {
    (**(code **)(*param_1 + 0x344))(10,1,1);
    return;
  }
  FUN_00b1a630();
  return;
}

// 00B214E0  FUN_00b214e0  size=398  [between]
void __fastcall FUN_00b214e0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x187] == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(param_1[0x541],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x541] == 0x83) {
      fVar2 = (float10)FUN_00dde300(0,0x3f800000);
      FUN_00a95e60(0,(float)(fVar2 * (float10)12.0 * (float10)0.016666668));
    }
    if (param_1[0x545] != 0) {
      FUN_00b0f490();
    }
    FUN_00b1b630(0,1);
    param_1[0x139] = 1;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
  }
  return;
}

// 00B21670  FUN_00b21670  size=429  [between]
void __fastcall FUN_00b21670(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(param_1[0x541],0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0x2b,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = (int)((float)param_1[0x571] * 60.0);
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)) {
      FUN_00b1b630(0,1);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42280000;
      param_1[0x139] = 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00b1b700(1,0);
      FUN_00b10f60(0x46);
      return;
    }
  }
  return;
}

// 00B21830  FUN_00b21830  size=523  [between]
void __fastcall FUN_00b21830(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4120(param_1[0x541],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x546] != 0) {
      FUN_00aa4080(0x87,1,0,0x3f800000,0x8000030,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x540] < 3) {
        if (param_1[0x541] == 0x2b) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0x3ecccccd;
        }
        uVar3 = 0x2b;
      }
      else {
        uVar4 = 0x3ecccccd;
        uVar3 = 0x86;
      }
      FUN_00aa4080(uVar3,0,uVar4,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = (int)((float)param_1[0x571] * 60.0);
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)) {
      FUN_00b1b630(0,1);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42280000;
      param_1[0x139] = 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00b1b700(1,0);
      FUN_00b10f60(0x46);
      return;
    }
  }
  return;
}

// 00B21A50  FUN_00b21a50  size=402  [between]
void __fastcall FUN_00b21a50(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4120(param_1[0x541],0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b1b630(0,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42400000;
    param_1[0x139] = 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar3 = (float10)FUN_00ddba30((float)(fVar3 + (float10)3.1415927));
    iVar2 = (**(code **)(*param_1 + 0x84))();
    param_1[0x25] = (int)(((float)fVar3 - *(float *)(iVar2 + 4)) * 0.15 + *(float *)(iVar2 + 4));
    fVar1 = (float)param_1[0x2a4];
    if (NAN(fVar1) || 400.0 < fVar1 == (fVar1 == 400.0)) {
      return;
    }
    FUN_00a805f0();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) || ((float)param_1[0x248] <= 0.0)) {
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
  }
  return;
}

// 00B21BF0  FUN_00b21bf0  size=679  [between]
void __fastcall FUN_00b21bf0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    (**(code **)(*param_1 + 200))(1);
    FUN_00aa4080(0x88,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x225] = 0x3d75c28f;
    param_1[0x288] = 1;
    param_1[0x289] = 0x41200000;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x24f] = 0x43960000;
    if (param_1[0x544] != 0) {
      FUN_00b053e0(0x3f19999a);
    }
    if (param_1[0x545] != 0) {
      FUN_00b0f490();
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0x2e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 == 0) {
      return;
    }
    FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b1b630(0,1);
    param_1[0x187] = 3;
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00b1b630(0,1);
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x24f];
    param_1[0x24f] = (int)(fVar1 - (float)param_1[0x244]);
    if (0.0 < fVar1 - (float)param_1[0x244]) {
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    break;
  default:
    goto switchD_00b21c02_default;
  }
  FUN_00b1b700(1,0);
  FUN_00b10f60(0x46);
switchD_00b21c02_default:
  return;
}

// 00B21EB0  FUN_00b21eb0  size=2118  [between]
void __fastcall FUN_00b21eb0(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar10;
  float fStack_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [28];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [108];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b0a600();
    FUN_00b08d00();
    FUN_00aa4080(0x28,0,0x3dcccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x24f] = 0x43960000;
    if (param_1[0x544] != 0) {
      FUN_00b053e0(0x3f19999a);
    }
    iVar9 = FUN_00b0f310(&local_110);
    if (iVar9 != 0) {
      fStack_d0 = (float)param_1[0x53c] - (float)param_1[0x10];
      fStack_cc = (float)param_1[0x53d] - (float)param_1[0x11];
      fStack_c8 = (float)param_1[0x53e] - (float)param_1[0x12];
      if (((fStack_d0 == 0.0) && (fStack_cc == 0.0)) && (fStack_c8 == 0.0)) {
        pfVar8 = (float *)FUN_00a925a0(auStack_a0);
        fStack_d0 = *pfVar8;
        fStack_cc = pfVar8[1];
        fStack_c8 = pfVar8[2];
      }
      local_100 = fStack_cc * 0.0 - fStack_c8;
      local_fc = fStack_c8 * 0.0 - fStack_d0 * 0.0;
      local_f8 = fStack_d0 - fStack_cc * 0.0;
      fVar4 = local_f8 * local_f8 + local_100 * local_100 + local_fc * local_fc;
      fStack_e0 = local_100;
      fStack_dc = local_fc;
      fStack_d8 = local_f8;
      if (fVar4 < 0.0 == (fVar4 == 0.0)) {
        FUN_00ddf460(&fStack_e0,&fStack_e0);
        fVar4 = fStack_d8;
        fVar2 = fStack_dc;
        fVar3 = fStack_e0;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar4 = 0.0;
        fVar2 = 1.0;
        fVar3 = 0.0;
      }
      fVar7 = local_108 * 0.0 + local_110 * 0.0 + local_10c;
      fVar6 = local_108 * fVar4 + local_110 * fVar3 + local_10c * fVar2;
      if (ABS(fVar7) <= ABS(fVar6)) {
        if (fVar6 <= 0.0) {
          local_110 = fVar3 * -1.0;
          local_10c = fVar2 * -1.0;
          local_108 = fVar4 * -1.0;
          local_104 = fStack_d4 * -1.0;
        }
        else {
          local_104 = fStack_d4;
          local_110 = fVar3;
          local_10c = fVar2;
          local_108 = fVar4;
        }
      }
      else if (fVar7 <= 0.0) {
        local_110 = 0.0;
        local_10c = -1.0;
        local_108 = 0.0;
        local_104 = fStack_e4 * -1.0;
      }
      else {
        local_110 = 0.0;
        local_10c = 1.0;
        local_108 = 0.0;
        local_104 = fStack_e4;
      }
      local_100 = local_108 * fStack_cc - local_10c * fStack_c8;
      local_fc = fStack_c8 * local_110 - local_108 * fStack_d0;
      local_f8 = local_10c * fStack_d0 - fStack_cc * local_110;
      fVar4 = local_f8 * local_f8 + local_100 * local_100 + local_fc * local_fc;
      fStack_f0 = local_100;
      fStack_ec = local_fc;
      fStack_e8 = local_f8;
      if (fVar4 < 0.0 == (fVar4 == 0.0)) {
        FUN_00ddf460(&fStack_f0,&fStack_f0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_f0 = 0.0;
        fStack_ec = 1.0;
        fStack_e8 = 0.0;
      }
      fVar10 = (float10)FUN_00dde300(0x3f19999a,0x3f800000);
      D3DXQuaternionRotationAxis(auStack_b0,&fStack_f0,(float)(fVar10 * (float10)0.34906584));
      piVar1 = param_1 + 0x548;
      FUN_00ddb9f0(piVar1,auStack_bc);
      fVar10 = (float10)FUN_00a8ec30(param_1 + 0x53c);
      fStack_c0 = (float)fVar10;
      iVar9 = (**(code **)(*param_1 + 0x84))();
      fVar10 = (float10)FUN_00ddba30(fStack_c0 - *(float *)(iVar9 + 4));
      D3DXMatrixRotationY(auStack_9c,(float)fVar10);
      D3DXMatrixMultiply(piVar1,auStack_a4,piVar1);
      D3DXMatrixScaling(auStack_70,0x3f400000,0x3f400000,0x3f400000);
      D3DXMatrixMultiply(piVar1,auStack_80,piVar1);
    }
    FUN_00b1b630(0,1);
    FUN_00b03020(0);
  case 1:
    local_100 = (float)param_1[0x14];
    local_fc = (float)param_1[0x15];
    local_f8 = (float)param_1[0x16];
    local_f4 = (float)param_1[0x17];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_110 = (float)param_1[0x14] - local_100;
    local_10c = (float)param_1[0x15] - local_fc;
    local_108 = (float)param_1[0x16] - local_f8;
    local_104 = (float)param_1[0x17] - local_f4;
    D3DXVec3TransformNormal(&local_110,&local_110,param_1 + 0x548);
    fVar4 = (float)param_1[0x554];
    fVar2 = (float)param_1[0x555];
    fVar3 = (float)param_1[0x556];
    param_1[0x14] = (int)(fVar4 + unaff_ESI + local_10c);
    param_1[0x15] = (int)(fVar2 + unaff_EBX + local_108);
    param_1[0x16] = (int)(fVar3 + fStack_114 + local_104);
    param_1[0x17] = (int)(local_110 + local_100);
    iVar9 = FUN_00a94ce0(0);
    if (iVar9 != 0) {
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      iVar9 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar9 == 0) {
        fVar6 = 1.0 / (float)param_1[0x244];
        fVar4 = (fVar4 + unaff_ESI) * fVar6;
        param_1[0x224] = 0;
        param_1[0x226] = 0;
        param_1[0x225] = (int)fVar4;
        param_1[0x259] = (int)fVar4;
        param_1[600] = (int)(unaff_EDI * fVar6);
        param_1[0x25a] = (int)((fVar2 + unaff_EBX) * fVar6);
        param_1[0x25b] = (int)((fVar3 + fStack_114) * fVar6);
        param_1[0x187] = 2;
        FUN_00aa4080(0x29,0,0x3f000000,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[0x14] = (int)((float)param_1[600] * (float)param_1[0x244] + (float)param_1[0x14]);
        param_1[0x16] = (int)((float)param_1[0x25a] * (float)param_1[0x244] + (float)param_1[0x16]);
        return;
      }
      param_1[0x248] = 0x3f333333;
      param_1[0x187] = 3;
      FUN_00aa4080(0x2a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    pcVar5 = *(code **)(*param_1 + 800);
    param_1[0x14] = (int)((float)param_1[600] * (float)param_1[0x244] + (float)param_1[0x14]);
    param_1[0x16] = (int)((float)param_1[0x25a] * (float)param_1[0x244] + (float)param_1[0x16]);
    iVar9 = (*pcVar5)(0x3d888889);
    if (iVar9 != 0) {
      param_1[0x248] = 0x3f333333;
      param_1[0x187] = 3;
      FUN_00aa4080(0x2a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    fVar4 = (float)param_1[0x24f] - (float)param_1[0x244];
    param_1[0x24f] = (int)fVar4;
LAB_00b226d4:
    if (0.0 < fVar4) {
      return;
    }
    goto LAB_00b226db;
  case 3:
    local_100 = (float)param_1[0x14];
    local_fc = (float)param_1[0x15];
    local_f8 = (float)param_1[0x16];
    local_f4 = (float)param_1[0x17];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_110 = (float)param_1[0x14] - local_100;
    local_10c = (float)param_1[0x15] - local_fc;
    local_108 = (float)param_1[0x16] - local_f8;
    local_104 = (float)param_1[0x17] - local_f4;
    D3DXVec3TransformNormal(&local_110,&local_110,param_1 + 0x548);
    local_110 = (float)param_1[0x555] + local_110;
    local_10c = (float)param_1[0x556] + local_10c;
    param_1[0x14] = (int)((float)param_1[0x554] + fStack_114 + local_104);
    param_1[0x15] = (int)(local_110 + local_100);
    param_1[0x16] = (int)(local_10c + local_fc);
    param_1[0x17] = (int)(local_108 + local_f8);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar9 = FUN_00a94ce0(0);
    if (iVar9 == 0) {
      fVar4 = (float)param_1[0x248];
      goto LAB_00b226d4;
    }
LAB_00b226db:
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
    break;
  default:
    break;
  }
  return;
}

// 00B22710  FUN_00b22710  size=718  [between]
void __fastcall FUN_00b22710(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b0a600();
    FUN_00b08d00();
    (**(code **)(*param_1 + 200))(1);
    FUN_00aa4080(0x88,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x225] = 0x3d75c28f;
    param_1[0x288] = 1;
    param_1[0x289] = 0x41200000;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    if (param_1[0x544] != 0) {
      FUN_00b053e0(0x3e3851ec);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0x2e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
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
      return;
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
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00b1b700(1,0);
      FUN_00b10f60(0x46);
      return;
    }
  }
  return;
}

// 00B22A00  FUN_00b22a00  size=294  [between]
void __fastcall FUN_00b22a00(int *param_1)

{
  float fVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00b0a600();
    FUN_00b08d00();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(8,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00b1b630(1,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)param_1[0x558] * 60.0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x5a0] == 0) {
    FUN_00b02610(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3e0efa35);
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00b10f60(0x28);
  }
  return;
}

// 00B22B30  FUN_00b22b30  size=772  [between]
void __fastcall FUN_00b22b30(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  int local_2c;
  int local_28;
  int local_24;
  float local_20 [7];
  
  iVar2 = FUN_00a81330();
  iVar3 = 0;
  if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) && (-1 < param_1[0x3fe])) {
    iVar3 = FUN_00a12210(param_1[0x3ff]);
  }
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    param_1[0x449] = param_1[0x449] | 0x20000;
    param_1[0x449] = param_1[0x449] & 0xffffffbf;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar2 = param_1[0x1d9];
      if (*(int *)(iVar2 + 0x104) != 1) {
        *(undefined4 *)(iVar2 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
      }
      local_20[0] = 0.0;
      local_20[1] = 0.0;
      local_20[2] = 0.0;
      FUN_008e0c00(local_20);
    }
    FUN_00aa4120(0x57,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_008e5c50(0xd);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    fVar4 = (float10)FUN_00a958c0(0);
    fVar4 = fVar4 * (float10)60.0 - (float10)(float)param_1[0x248];
    fVar4 = (fVar4 + fVar4) / (float10)(45.0 - fVar1);
    fVar1 = (float)fVar4;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_00a581b0(&local_2c,0,(float)fVar4);
    param_1[0x14] = local_2c;
    param_1[0x15] = local_28;
    param_1[0x16] = local_24;
    FUN_00a585a0(local_20,0,fVar1);
    fVar4 = (float10)fpatan((float10)local_20[0],(float10)local_20[2]);
    param_1[0x25] = (int)(float)fVar4;
    iVar2 = FUN_00a54a60(fVar1);
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00b10f60(0xb4);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    fVar4 = (float10)FUN_00a958c0(0);
    param_1[0x248] = (int)(float)(fVar4 * (float10)60.0);
    FUN_00b1d140(param_1 + 0x514,param_1 + 0x10,iVar3 + 0x40,0x3f000000,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  if (param_1[0x250] == 0) {
    iVar2 = FUN_00a8c760(0xc);
    if (iVar2 != 0) {
      param_1[0x250] = param_1[0x250] + 1;
    }
  }
  else {
    iVar2 = FUN_00a8c760(0xc);
    if ((iVar2 == 0) && (param_1[0x1d9] != 0)) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00B22E40  FUN_00b22e40  size=664  [between]
void __fastcall FUN_00b22e40(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  undefined *puVar8;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_e4;
  
  iVar2 = FUN_00a81330();
  piVar5 = (int *)0x0;
  iVar4 = 0;
  if (iVar2 != 0) {
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 != (int *)0x0) {
      puVar8 = &DAT_01b34b40;
      (**(code **)(*piVar5 + 4))(&DAT_01b34b40);
      iVar2 = FUN_00dd6d70(puVar8);
      if (iVar2 == 0) {
        piVar5 = (int *)0x0;
      }
      else if (-1 < param_1[0x3fe]) {
        iVar4 = FUN_00a12210(param_1[0x3ff]);
      }
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00a9e440(piVar5,(&PTR_DAT_018a7b70)[param_1[0x3fe]],0,0x3e4ccccd,0x3f800000,0,0xbf800000,
                 0x3f800000);
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar2 = param_1[0x1d9];
      if (*(int *)(iVar2 + 0x104) != 1) {
        *(undefined4 *)(iVar2 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
      }
      uStack_170 = 0;
      uStack_16c = 0;
      uStack_168 = 0;
      FUN_008e0c00(&uStack_170);
    }
    uVar3 = FUN_009f8b40();
    FUN_00ac8a80(uVar3);
    param_1[0x248] = 0;
    param_1[0x188] = 0;
    if (piVar5 != (int *)0x0) {
      FUN_00408ec0(param_1[0x3fe],1);
    }
    if (param_1[0x426] == 0) {
      uVar3 = FUN_004117d0(*(undefined4 *)(&DAT_016a0c58 + param_1[0x3fe] * 4),param_1,
                           param_1 + 0x400);
      FUN_00a963e0(uVar3);
      uStack_e4 = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  FUN_00a96030(0,piVar5[0x2dc]);
  if (12.0 < (float)param_1[0x248]) {
    param_1[0x14] = *(int *)(iVar4 + 0x40);
    param_1[0x15] = *(int *)(iVar4 + 0x44);
    param_1[0x16] = *(int *)(iVar4 + 0x48);
    param_1[0x17] = *(int *)(iVar4 + 0x4c);
    fVar6 = (float10)(float)piVar5[0x25] + (float10)*(float *)(iVar4 + 0x94);
  }
  else {
    fVar6 = (float10)FUN_00fdc1f0();
    fVar6 = (float10)1 - fVar6;
    param_1[0x14] =
         (int)(float)(((float10)*(float *)(iVar4 + 0x40) - (float10)(float)param_1[0x14]) * fVar6 +
                     (float10)(float)param_1[0x14]);
    param_1[0x15] =
         (int)(float)(((float10)*(float *)(iVar4 + 0x44) - (float10)(float)param_1[0x15]) * fVar6 +
                     (float10)(float)param_1[0x15]);
    param_1[0x16] =
         (int)(float)(((float10)*(float *)(iVar4 + 0x48) - (float10)(float)param_1[0x16]) * fVar6 +
                     (float10)(float)param_1[0x16]);
    param_1[0x17] =
         (int)(float)(((float10)*(float *)(iVar4 + 0x4c) - (float10)(float)param_1[0x17]) * fVar6 +
                     (float10)(float)param_1[0x17]);
    fVar7 = (float10)FUN_00ddba30((float)piVar5[0x25] + *(float *)(iVar4 + 0x94));
    fVar1 = (float)param_1[0x25];
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 - (float10)fVar1));
    fVar6 = fVar7 * (float10)(float)fVar6 + (float10)fVar1;
  }
  fVar6 = (float10)FUN_00ddba30((float)fVar6);
  param_1[0x25] = (int)(float)fVar6;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B230E0  Em0040::startup  size=159  [class]
void __fastcall Em0040::startup(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorEmBase::startup();
  if (iVar1 != 0) {
    switch(*(undefined4 *)(param_1 + 0x4a0)) {
    case 6:
    case 7:
      FUN_00b0d8e0();
      break;
    case 8:
      FUN_00b20160();
      break;
    case 9:
      FUN_00b20050();
      break;
    case 10:
      FUN_00b0dbe0();
      break;
    case 0xb:
      FUN_00b20b20();
      break;
    case 0xc:
      FUN_00b0dd90();
      break;
    case 0xd:
      FUN_00b20c30();
      break;
    default:
      HoldEntitySlot::HoldEntitySlot();
    }
    *(undefined4 *)(param_1 + 0x82c) = 0;
    *(undefined4 *)(param_1 + 0x830) = 0;
    *(undefined4 *)(param_1 + 0x878) = 0;
    *(undefined4 *)(param_1 + 0x87c) = 7;
    *(undefined4 *)(param_1 + 0x880) = 0x27;
    *(undefined4 *)(param_1 + 0x16ac) = 0;
    *(undefined4 *)(param_1 + 0x16bc) = 0;
    return;
  }
  return;
}

// 00B231A0  Em0040::vf48  size=44  [class]
void __fastcall Em0040::vf48(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    break;
  default:
    FUN_00b1f370();
  }
  BehaviorEmBase::vf48();
  return;
}

// 00B231E0  Em0040::vf50  size=214  [class]
void __fastcall Em0040::vf50(int param_1)

{
  switch(*(int *)(param_1 + 0x4a0)) {
  case 6:
  case 7:
    FUN_00b0d870();
    BehaviorEmBase::vf50();
    return;
  case 8:
    FUN_00b200d0();
    BehaviorEmBase::vf50();
    return;
  case 9:
    FUN_00b1ffc0();
    BehaviorEmBase::vf50();
    return;
  case 10:
    FUN_00b0db00();
    BehaviorEmBase::vf50();
    return;
  case 0xb:
    FUN_00a93170();
    BehaviorEmBase::vf50();
    return;
  case 0xc:
    switchD_0080dbae::default();
    BehaviorEmBase::vf50();
    return;
  case 0xd:
    FUN_00a93170();
    FUN_00c5bc40(*(undefined4 *)(param_1 + 0x4f0),1);
    BehaviorEmBase::vf50();
    return;
  }
  if (*(int *)(param_1 + 0x4a0) == 5) {
    FUN_00b13f00();
  }
  if ((*(int *)(param_1 + 0x764) == 0) || (*(int *)(*(int *)(param_1 + 0x764) + 0x10c) != 0)) {
    FUN_00a93170();
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf50();
  return;
}

// 00B232E0  Em0040::setEmSetInfo  size=628  [class]
undefined4 __thiscall Em0040::setEmSetInfo(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0040ac60(param_2);
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  FUN_00aa0920(*(undefined4 *)(param_1 + 0xb0c));
  if (*(int *)(param_1 + 0x7d8) != 0) {
    *(undefined4 *)(param_1 + 0x7e0) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x7d8) + 0x85c) = 0x3dcccccd;
    iVar1 = FUN_009f8b40();
    *(uint *)(*(int *)(param_1 + 0x7d8) + 0x860) = iVar1 << 0x10 | 7;
  }
  if (*(int *)(param_1 + 0x4a0) != 5) goto LAB_00b2347b;
  *(undefined4 *)(param_1 + 0x814) = 4;
  FUN_00a7c950();
  iVar1 = FUN_00c19c90(*(int *)(param_1 + 0xb9c) + -1,0,0x20110);
  if (iVar1 == 0) {
    iVar1 = FUN_00c19c90(*(int *)(param_1 + 0xb9c) + -3,0,0x20110);
    if (iVar1 != 0) goto LAB_00b233e9;
    iVar1 = FUN_00c19c90(*(int *)(param_1 + 0xb9c) + -5,0,0x20110);
    if (iVar1 != 0) goto LAB_00b233e9;
    iVar1 = FUN_00c19c90(0,0,0x20110);
    if (iVar1 != 0) goto LAB_00b233e9;
    FUN_00dd5650(&DAT_01646e58);
    *(undefined4 *)(param_1 + 0x4a0) = 3;
  }
  else {
LAB_00b233e9:
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x10b8) == 1) && ((*(byte *)(param_1 + 0xb00) & 2) == 0)) {
        uVar2 = FUN_00a81330();
        FUN_00b0c920(uVar2);
      }
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x80000;
    }
  }
  *(undefined4 *)(param_1 + 0xd28) = 0;
  *(undefined4 *)(param_1 + 0x814) = 4;
  if ((*(byte *)(param_1 + 0xb00) & 2) != 0) {
    FUN_008e59c0(2);
  }
LAB_00b2347b:
  if (*(int *)(param_1 + 0x4a0) == 0x10) {
    *(undefined4 *)(param_1 + 0xd28) = 0;
  }
  else if (*(int *)(param_1 + 0x4a0) == 0x11) {
    uVar3 = 0xf5002;
    uVar2 = FUN_00e03ea0("ev_hang",0xf5002);
    iVar1 = FUN_00a18d70(uVar2,uVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00b0f8a0();
    }
  }
  FUN_00b1a3f0();
  if ((*(int *)(param_1 + 0x4a0) == 0xe) || (*(int *)(param_1 + 0x4a0) == 0xf)) {
    FUN_00b20d40();
    if (*(char *)(param_1 + 0xba8) != -1) {
      iVar1 = FUN_00c3d5e0(2,(int)*(char *)(param_1 + 0xba8));
      if (iVar1 != 0) {
        E3_EnemyBoardDebrisSokushi::vf4C();
        return 0;
      }
    }
  }
  if (*(int *)(param_1 + 0xaf4) == 0x12) {
    if ((*(byte *)(param_1 + 0xb00) & 0x40) != 0) {
      FUN_00b10f60(0xb6);
      return 1;
    }
    FUN_00b10f60(0xb5);
  }
  return 1;
}

// 00B23560  Em0040::vf1A4  size=350  [class]
void __thiscall Em0040::vf1A4(int param_1,int *param_2,byte param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 & 6) == 0) {
    if ((param_3 & 1) != 0) {
      if (*(int *)(param_1 + 0x4a0) == 10) {
        FUN_00a8caf0(0x9d,0,0,0);
        FUN_00b1fa50();
        return;
      }
      if ((*param_2 == 0xd7) && (*(int *)(param_1 + 0x4a0) != 6)) {
        uVar2 = FUN_00a81330();
        FUN_00a7c970(uVar2);
        FUN_00a8caf0(0x13,0,0,0);
        return;
      }
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4a0);
    if ((iVar1 == 0xe) || (iVar1 == 0xf)) {
      if ((param_3 & 4) == 0) {
        if (iVar1 == 0xf) {
          FUN_00b10f60(0x6c);
          FUN_00b16750(8);
          return;
        }
        FUN_00b10f60(0x6b);
        FUN_00b16750(8);
        return;
      }
    }
    else {
      if (iVar1 == 10) {
        FUN_00b0dd40();
        *(undefined4 *)(param_1 + 0x4a0) = 3;
        *(undefined4 *)(param_1 + 0x4ac) = 2;
        HoldEntitySlot::HoldEntitySlot();
        return;
      }
      iVar1 = *param_2;
      if (iVar1 == 0xd7) {
        uVar2 = FUN_00a81330();
        FUN_00a7c970(uVar2);
        FUN_00a8caf0(0x38,0,0,0);
      }
      else if ((iVar1 != 0xdf) && (iVar1 != 0x146)) {
        uVar2 = FUN_00a81330();
        FUN_00a7c970(uVar2);
        FUN_00a8caf0(0x37,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00B236C0  FUN_00b236c0  size=235  [between]
undefined4 __fastcall FUN_00b236c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1138) == 2) {
    iVar2 = FUN_00c15850();
  }
  else {
    iVar2 = FUN_00c158c0();
  }
  if (iVar2 != 0) {
    switch(*(undefined4 *)(param_1 + 0x4a0)) {
    case 0:
      FUN_00c272a0(0x40a00000);
      FUN_00b10f60(0x1e);
      return 1;
    case 1:
      FUN_00c272a0(0x40a00000);
      FUN_00b10f60(0x1d);
      return 1;
    case 2:
      FUN_00c272a0(0x40a00000);
      FUN_00b10f60(0);
      return 1;
    case 3:
    case 5:
    case 0x10:
    case 0x11:
      iVar2 = FUN_00b17c90();
      if (iVar2 != 0) {
        iVar2 = FUN_00b067f0();
        if (iVar2 == 0) {
          uVar1 = 0x3fa00000;
        }
        else {
          uVar1 = 0x3f19999a;
        }
        FUN_00c27260(uVar1);
        return 1;
      }
    }
  }
  return 0;
}

// 00B237E0  FUN_00b237e0  size=462  [between]
void __fastcall FUN_00b237e0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x1124))) &&
      (*(int *)(param_1 + 0x1680) == 0)) &&
     ((((*(uint *)(param_1 + 0x1124) & 0x20000000) == 0 &&
       (*(float *)(param_1 + 0x924) * 0.1 <= *(float *)(param_1 + 0x920))) &&
      ((fVar1 = *(float *)(param_1 + 0x15a4), NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0) &&
       (DAT_01bea740 == 0)))))) {
    if (*(int *)(param_1 + 0x10b4) != -1) {
      FUN_00b10f60(*(int *)(param_1 + 0x10b4));
      return;
    }
    iVar2 = FUN_00b11a70();
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0x1138) == 2) && (iVar2 = FUN_00b07ca0(0), iVar2 != -1)) {
        FUN_00b10f60(iVar2);
        return;
      }
      if ((((*(uint *)(param_1 + 0x1124) & 0x400) == 0) &&
          (((iVar2 = *(int *)(param_1 + 0x1138), iVar2 == 0 || (iVar2 == 1)) &&
           ((*(uint *)(param_1 + 0x1124) & 8) == 0)))) &&
         ((*(float *)(param_1 + 0x10d4) <= *(float *)(&DAT_018a7ab0 + iVar2 * 0x14) &&
          (*(float *)(&DAT_018a7ab4 + iVar2 * 0x14) < *(float *)(param_1 + 0x10d4) !=
           (*(float *)(&DAT_018a7ab4 + iVar2 * 0x14) == *(float *)(param_1 + 0x10d4)))))) {
        FUN_00b10f60(0xd);
        return;
      }
      if (*(int *)(param_1 + 0x10d0) != 0) {
        fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x10d0) + 0x50);
        fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)*(float *)(param_1 + 0x94)));
        if ((float10)0.7853982 < ABS(fVar4)) {
          uVar3 = FUN_00b033c0(param_1 + 0x10e0);
          FUN_00b10f60(uVar3);
        }
      }
      iVar2 = FUN_00b17d60();
      if (((iVar2 == 0) && (iVar2 = FUN_00b17dc0(), iVar2 == 0)) &&
         ((*(float *)(param_1 + 0x924) <= *(float *)(param_1 + 0x920) &&
          ((((*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) <
              *(float *)(param_1 + 0x10d4) ==
              (*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) ==
              *(float *)(param_1 + 0x10d4)) && (3 < *(int *)(param_1 + 0x814))) &&
            (iVar2 = FUN_00b236c0(), iVar2 == 0)) && (*(int *)(param_1 + 0x95c) == 0)))))) {
        *(undefined4 *)(param_1 + 0x95c) = 1;
        FUN_00b17c50();
        return;
      }
    }
  }
  return;
}

// 00B239B0  FUN_00b239b0  size=340  [between]
void __fastcall FUN_00b239b0(int *param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x449] = param_1[0x449] | 0x20;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    return;
  case 1:
    fVar1 = (float)param_1[0x451];
    if (param_1[0x188] == 0) {
      piVar2 = (int *)FUN_00ac89d0();
      if (piVar2 == (int *)0x0) {
        piVar2 = param_1;
      }
      uVar3 = FUN_00a8c890(0);
      FUN_004117d0(8,piVar2,uVar3);
      FUN_00a963e0(local_160);
    }
    iVar4 = FUN_00b07a80(param_1 + 0x188,0x3e75c28f,0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3f800000;
      FUN_00aa3f60(5);
      return;
    }
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && ((float)param_1[0x451] < 0.0)) {
      (**(code **)(*param_1 + 200))(1);
    }
    break;
  case 2:
    fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668;
    param_1[0x248] = (int)fVar1;
    if ((fVar1 <= 0.0) && (DAT_01bea740 == 0)) {
      param_1[0x187] = 3;
    }
    break;
  case 3:
    break;
  default:
    goto switchD_00b239d0_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_00b239d0_default:
  return;
}

// 00B23B20  FUN_00b23b20  size=118  [between]
void __fastcall FUN_00b23b20(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x449])) && (param_1[0x5a0] == 0)) &&
     (((param_1[0x449] & 0x20000000U) == 0 && (param_1[0x187] == 2)))) {
    FUN_00b1a630();
    if (param_1[0x2e1] == 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        FUN_00b10f60(0x89);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00b23b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (*(int *)(&DAT_016a0c20 + param_1[0x2e1] * 4) != -1) {
      FUN_00b10f60(*(int *)(&DAT_016a0c20 + param_1[0x2e1] * 4));
    }
  }
  return;
}

// 00B23BA0  FUN_00b23ba0  size=356  [between]
void __fastcall FUN_00b23ba0(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x1124))) &&
      (*(int *)(param_1 + 0x1680) == 0)) &&
     ((((*(uint *)(param_1 + 0x1124) & 0x20000000) == 0 && (*(int *)(param_1 + 0x10d0) != 0)) &&
      ((iVar2 = FUN_00b0e330(), iVar2 != 0 &&
       (*(float *)(param_1 + 0x10d4) <=
        *(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14))))))) {
    local_30 = *(float *)(param_1 + 0x10e0) - *(float *)(param_1 + 0x40);
    local_2c = *(float *)(param_1 + 0x10e4) - *(float *)(param_1 + 0x44);
    local_28 = *(float *)(param_1 + 0x10e8) - *(float *)(param_1 + 0x48);
    local_24 = *(float *)(param_1 + 0x10ec) - *(float *)(param_1 + 0x4c);
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
    pfVar3 = (float *)FUN_00a925a0(local_20);
    fVar5 = (float10)pfVar3[2] * (float10)local_28 +
            (float10)*pfVar3 * (float10)local_30 + (float10)pfVar3[1] * (float10)local_2c;
    fVar4 = (float10)fcos((float10)0.7853981852531433);
    if (fVar4 < fVar5 != (fVar4 == fVar5)) {
      FUN_00b236c0();
    }
  }
  return;
}

// 00B23D10  FUN_00b23d10  size=1055  [between]
void __fastcall FUN_00b23d10(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int local_20;
  float local_1c;
  int local_18;
  undefined4 local_14;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1a,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    local_20 = param_1[0x2e3];
    local_1c = (float)param_1[0x2e4];
    local_18 = param_1[0x2e5];
    local_14 = 0x3f800000;
    FUN_00b1d140(param_1 + 0x514,param_1 + 0x10,&local_20,0x40266666,0);
    param_1[0x248] = 0;
    param_1[0x24a] = (int)((local_1c - (float)param_1[0x11]) - 2.6);
    FUN_00b03020(0);
    FUN_008e3c10();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x1b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    local_20 = 0;
    local_1c = 0.0;
    local_18 = 0;
    FUN_00a581b0(&local_20,0x3e4ccccd,param_1[0x249]);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.025 + (float)param_1[0x249]);
    param_1[0x14] = local_20;
    param_1[0x15] = (int)local_1c;
    param_1[0x16] = local_18;
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_20 = 0;
    local_1c = 0.0;
    local_18 = 0;
    FUN_00a581b0(&local_20,0x3e4ccccd,param_1[0x249]);
    fVar1 = 1.0;
    if (1.0 < (float)param_1[0x249]) {
      fVar1 = (float)param_1[0x24a];
    }
    param_1[0x249] = (int)(fVar1 * 0.025 * (float)param_1[0x244] + (float)param_1[0x249]);
    param_1[0x14] = local_20;
    param_1[0x15] = (int)local_1c;
    param_1[0x16] = local_18;
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x1d,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x249] < 2.0) {
      local_20 = 0;
      local_1c = 0.0;
      local_18 = 0;
      FUN_00a581b0(&local_20,0x3e4ccccd,param_1[0x249]);
      fVar1 = 1.0;
      if (1.0 < (float)param_1[0x249]) {
        fVar1 = (float)param_1[0x24a];
      }
      fVar1 = fVar1 * 0.025 * (float)param_1[0x244] + (float)param_1[0x249];
      param_1[0x249] = (int)fVar1;
      fVar2 = local_1c - (float)param_1[0x15];
      param_1[0x14] = local_20;
      param_1[0x15] = (int)local_1c;
      param_1[0x16] = local_18;
      if (2.0 <= fVar1) {
        FUN_008e6d00();
        if (param_1[0x1d9] != 0) {
          (**(code **)(*param_1 + 0x314))();
          if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
            *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
          }
        }
        FUN_008e0c50(fVar2);
      }
    }
    if ((param_1[0x221] == 0) && (iVar3 = (**(code **)(*param_1 + 800))(0x3d888889), iVar3 != 0)) {
      FUN_00aa4080(0x1c,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) == 0) {
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_00b10f60(0x89);
      return;
    }
  }
  return;
}

// 00B24150  FUN_00b24150  size=189  [between]
void __fastcall FUN_00b24150(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x187] == 0) {
    FUN_00b1a4e0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_008e0c00(&uStack_20);
    }
    FUN_00a88b50(1,0);
    param_1[0x34a] = 0;
    FUN_00aa9280(0x6b);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B24210  FUN_00b24210  size=234  [between]
undefined4 __thiscall FUN_00b24210(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1124);
  uVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0x1314)) {
  case 0:
    FUN_00b11020(param_2,param_3);
    break;
  case 1:
    FUN_00b195d0(param_2,param_3);
    uVar2 = 1;
    break;
  case 2:
    FUN_00b198f0(param_2,param_3);
    break;
  case 3:
    FUN_00b19d10(param_2,param_3);
    break;
  case 4:
    FUN_00b19ef0(param_2,param_3);
    break;
  case 5:
    FUN_00b1a080(param_2,param_3);
    break;
  case 6:
    FUN_00b1a260(param_2,param_3);
    break;
  case 7:
    FUN_00b11090(param_2,param_3);
    break;
  case 8:
    FUN_00b111a0(param_2,param_3);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xfffffeff;
  }
  return uVar2;
}

// 00B24320  FUN_00b24320  size=357  [between]
void __fastcall FUN_00b24320(int param_1)

{
  int iVar1;
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
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00a8d710(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x1314) = 0;
    *(undefined4 *)(param_1 + 0x1318) = 0xffffffff;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffdfffff;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    FUN_00a8d790(&local_3c);
    FUN_00a97e60(0x3f000000,~*(uint *)(param_1 + 0x1124) & 1);
    local_30 = local_3c;
    local_2c = local_38;
    local_28 = local_34;
    local_24 = 0x3f800000;
    FUN_00b02610(&local_30,0x3dcccccd,0x3d567750);
    local_20 = local_3c;
    local_1c = local_38;
    local_18 = local_34;
    local_14 = 0x3f800000;
    iVar1 = FUN_00b24210(&local_20,8);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x80;
      return;
    }
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffff7f;
    return;
  }
  return;
}

// 00B24490  FUN_00b24490  size=1102  [between]
void __fastcall FUN_00b24490(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  bool bVar6;
  float10 fVar7;
  int local_9c;
  int local_98;
  int local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [92];
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4120(0x3f,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8ee20(1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      local_98 = 0x3e19999a;
      local_9c = 0x3c8efa35;
      iVar3 = FUN_00ac4780();
      iVar4 = local_98;
      iVar1 = local_9c;
      if (1 < iVar3) {
        iVar4 = 0x3e800000;
        iVar1 = 0x3db2b8c2;
      }
      FUN_00b02610(*(int *)(param_1 + 0xa84) + 0x40,iVar4,iVar1);
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
    FUN_00aa4120(0x40,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(float *)(param_1 + 0x920) = (float)((fVar7 * (float10)0.2 + (float10)0.1) * (float10)60.0);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar2;
    if (0.0 < fVar2) {
      return;
    }
    FUN_00aa4120(0x41,0,0x3d4ccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x41200000;
    return;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00b07f30();
    iVar4 = FUN_00a8c760(10);
    if (iVar4 != 0) {
      bVar6 = false;
      iVar4 = FUN_00a12210(0);
      if (iVar4 == 0) {
        iVar4 = param_1;
      }
      local_90 = *(float *)(iVar4 + 0x40);
      local_8c = *(float *)(iVar4 + 0x44);
      local_88 = *(float *)(iVar4 + 0x48);
      local_84 = *(float *)(iVar4 + 0x4c);
      pfVar5 = (float *)FUN_00a8b8a0(local_70,0xbf800000);
      local_80 = *pfVar5 + local_90;
      local_7c = pfVar5[1] + local_8c;
      local_78 = pfVar5[2] + local_88;
      local_9c = 0;
      local_74 = pfVar5[3] + local_84;
      local_94 = 0;
      fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x920) = fVar2;
      if ((fVar2 < 0.0) ||
         ((*(int *)(param_1 + 0x1128) != 0 &&
          (iVar4 = FUN_00907560(param_1 + 0x1128,0,0,&local_9c,&local_94,0,0,0), iVar4 != 0)))) {
        local_98 = FUN_009f8b40();
        if ((local_9c != 0) && (iVar4 = FUN_008f7780(local_94), iVar4 != 0)) {
          iVar4 = FUN_009f9350(*(undefined4 *)(iVar4 + 0x4b0));
          bVar6 = iVar4 != 0;
          iVar4 = FUN_009f8b40();
          if (iVar4 == local_98) {
            bVar6 = true;
          }
        }
        if (local_94 != 0) {
          iVar4 = FUN_008f7780(local_94);
          if (iVar4 != 0) {
            iVar4 = FUN_009f9350(*(undefined4 *)(iVar4 + 0x4b0));
            if (iVar4 != 0) {
              bVar6 = true;
            }
            iVar4 = FUN_009f8b40();
            if (iVar4 == local_98) goto LAB_00b24885;
          }
          if (!bVar6) {
            return;
          }
LAB_00b24885:
          *(undefined4 *)(param_1 + 0x61c) = 4;
          *(undefined4 *)(param_1 + 0x920) = 0x42100000;
          return;
        }
        if (bVar6) goto LAB_00b24885;
        goto LAB_00b247c9;
      }
      FUN_00468970(param_1 + 0x1128,0,&local_90,&local_80,7,0,0,0,"em0040",0,0);
      HavokRayCastManager::set(local_60);
    }
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      FUN_00b026e0(0x3dcccccd,0x3c8efa35);
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar2;
    if (0.0 < fVar2) {
      return;
    }
    break;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0x4e4) = 1;
LAB_00b247c9:
  FUN_00b1b700(1,0);
  FUN_00b10f60(0x46);
  return;
}

// 00B24900  FUN_00b24900  size=198  [between]
void __fastcall FUN_00b24900(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x4c5] = 0;
    param_1[0x4c6] = -1;
    param_1[0x449] = param_1[0x449] | 0x100;
    param_1[0x449] = param_1[0x449] & 0xffdfffff;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[600] = param_1[0x10];
  param_1[0x259] = param_1[0x11];
  param_1[0x25a] = param_1[0x12];
  param_1[0x25b] = param_1[0x13];
  param_1[0x259] = (int)((float)param_1[0x259] - 1.0);
  iVar1 = FUN_00b24210(param_1 + 600,7);
  if (iVar1 == 0) {
    param_1[0x449] = param_1[0x449] | 0x80;
  }
  else {
    param_1[0x449] = param_1[0x449] & 0xffffff7f;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (((*(byte *)(param_1 + 0x449) & 1) == 0) && (iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00b249c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00B249D0  FUN_00b249d0  size=2523  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00b249d0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  float fVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float *pfStack_5c;
  float *local_58;
  float *local_54;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x449] = param_1[0x449] | 0x20000;
    param_1[0x449] = param_1[0x449] & 0xffffffbf;
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0xbf800000;
    pfStack_5c = (float *)0x8000000;
    FUN_00aa4120(0x56,0,0x3d088889,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    local_54 = (float *)0xb24a56;
    FUN_00b08cb0();
    local_54 = (float *)0x0;
    local_58 = (float *)0xb24a5f;
    FUN_00b03020();
    local_54 = (float *)(param_1 + 0x2c);
    local_58 = (float *)(param_1 + 0x430);
    pfStack_5c = (float *)0xb24a72;
    FUN_00ddba00();
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0xb24a82;
    FUN_00ac80a0();
    return;
  case 1:
    local_54 = (float *)0xa;
    local_58 = (float *)0xb24a90;
    iVar8 = FUN_00a8c760();
    if (iVar8 != 0) {
      local_54 = (float *)0x3f800000;
      local_58 = (float *)0x3f800000;
      pfStack_5c = (float *)0xb24aa7;
      FUN_00ac80a0();
      return;
    }
    local_54 = (float *)0x0;
    local_58 = (float *)0xb24ab5;
    FUN_00a92f90();
    local_58 = (float *)0xb24abc;
    fVar10 = (float10)FUN_0043f390();
    local_54 = (float *)0x0;
    local_58 = (float *)0xb24ac9;
    FUN_00a92f90();
    local_58 = (float *)0xb24ad0;
    fVar9 = (float10)FUN_00407b40();
    iVar8 = param_1[0x2a1];
    pfVar1 = (float *)(param_1 + 600);
    fVar5 = (float)(((float10)(float)fVar10 - fVar9) * (float10)60.0);
    *pfVar1 = *(float *)(iVar8 + 0x40);
    param_1[0x259] = *(int *)(iVar8 + 0x44);
    param_1[0x25a] = *(int *)(iVar8 + 0x48);
    param_1[0x25b] = *(int *)(iVar8 + 0x4c);
    local_54 = (float *)param_1[0x2a1];
    local_58 = (float *)0xb24b0d;
    iVar8 = FUN_0041ca10();
    if (iVar8 != 0) {
      param_1[0x259] = *(int *)(iVar8 + 0x2324);
      fVar12 = *(float *)(iVar8 + 0x58);
      fVar2 = *(float *)(iVar8 + 0x908);
      fVar3 = *(float *)(iVar8 + 0x5c);
      fVar4 = *(float *)(iVar8 + 0x90c);
      fVar7 = (fVar5 / (_DAT_01be942c / *(float *)(iVar8 + 0x910))) * 0.5;
      *pfVar1 = (*(float *)(iVar8 + 0x50) - *(float *)(iVar8 + 0x900)) * fVar7 + *pfVar1;
      param_1[0x259] = param_1[0x259];
      param_1[0x25a] = (int)((fVar12 - fVar2) * fVar7 + (float)param_1[0x25a]);
      param_1[0x25b] = (int)(fVar7 * (fVar3 - fVar4) + (float)param_1[0x25b]);
    }
    local_40 = *pfVar1 - (float)param_1[0x10];
    local_3c = (float)param_1[0x259] - (float)param_1[0x11];
    local_38 = (float)param_1[0x25a] - (float)param_1[0x12];
    local_34 = (float)param_1[0x25b] - (float)param_1[0x13];
    param_1[0x24f] = (int)(2.0 / (fVar5 - 26.0));
    fVar5 = (float)param_1[0x4bd];
    if (NAN(fVar5) || 0.0 < fVar5 == (fVar5 == 0.0)) {
      param_1[0x259] = (int)((float)param_1[0x259] + 1.0);
    }
    else {
      local_3c = 0.0;
      if ((local_40 == 0.0) && (local_38 == 0.0)) {
        local_38 = 0.3;
      }
      else {
        fVar5 = local_38 * local_38 + local_40 * local_40;
        if (fVar5 < 0.0 == (fVar5 == 0.0)) {
          local_58 = &local_40;
          pfStack_5c = (float *)0xb24c30;
          local_54 = local_58;
          FUN_00ddf460();
        }
        else {
          local_54 = (float *)&DAT_0163d0ac;
          local_58 = (float *)0xb24c4f;
          FUN_00dd5650();
          local_38 = 0.0;
          local_40 = 0.0;
          local_3c = 1.0;
        }
        local_40 = local_40 * 0.3;
        local_3c = local_3c * 0.3;
        local_38 = local_38 * 0.3;
        local_34 = local_34 * 0.3;
      }
      *pfVar1 = local_40 + *pfVar1;
      param_1[0x259] = (int)((float)param_1[0x259] + local_3c);
      param_1[0x25a] = (int)((float)param_1[0x25a] + local_38);
      param_1[0x25b] = (int)(local_34 + (float)param_1[0x25b]);
      param_1[0x259] = (int)((float)param_1[0x259] + 1.4);
    }
    local_30 = (float)param_1[0x10];
    local_2c = (float)param_1[0x11];
    local_28 = (float)param_1[0x12];
    local_24 = (float)param_1[0x13];
    local_58 = (float *)(((float)param_1[0x259] - local_2c) * 0.3);
    pfStack_5c = pfVar1;
    local_54 = local_58;
    FUN_00b1d140(param_1 + 0x514,&local_30);
    param_1[0x187] = param_1[0x187] + 1;
  case 2:
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0xb24d3d;
    FUN_00ac80a0();
    local_40 = (float)param_1[600] - (float)param_1[0x10];
    local_3c = (float)param_1[0x259] - (float)param_1[0x11];
    local_38 = (float)param_1[0x25a] - (float)param_1[0x12];
    local_34 = (float)param_1[0x25b] - (float)param_1[0x13];
    fVar5 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    if (fVar5 < 0.0 == (fVar5 == 0.0)) {
      local_58 = &local_40;
      pfStack_5c = (float *)0xb24dbe;
      local_54 = local_58;
      FUN_00ddf460();
      fVar10 = (float10)local_40;
      fVar9 = (float10)local_38;
    }
    else {
      local_54 = (float *)&DAT_0163d0ac;
      local_58 = (float *)0xb24ddd;
      FUN_00dd5650();
      fVar10 = (float10)0;
      local_40 = (float)fVar10;
      local_3c = 1.0;
      local_38 = (float)fVar10;
      fVar9 = fVar10;
    }
    local_54 = &local_30;
    local_58 = (float *)local_20;
    fVar11 = (float10)fpatan((float10)local_3c,SQRT(fVar9 * fVar9 + fVar10 * fVar10));
    local_30 = (float)-fVar11;
    fVar10 = (float10)fpatan(fVar10,fVar9);
    local_2c = (float)fVar10;
    local_28 = 0.0;
    pfStack_5c = (float *)0xb24e29;
    FUN_00ddb590();
    pfVar1 = (float *)(param_1 + 0x430);
    local_54 = (float *)0xb24e43;
    fVar10 = (float10)FUN_00fdc1f0();
    local_58 = (float *)local_20;
    local_54 = (float *)(float)((float10)1 - fVar10);
    pfStack_5c = pfVar1;
    D3DXQuaternionSlerp(pfVar1);
    FUN_00ddb9f0(param_1 + 0x2c,pfVar1);
    D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
    if ((float)param_1[0x24a] < 2.0) {
      fVar5 = (float)param_1[0x24f] * (float)param_1[0x244] + (float)param_1[0x24a];
      param_1[0x24a] = (int)fVar5;
      pfStack_5c = (float *)0x0;
      local_58 = (float *)0x0;
      local_54 = (float *)0x0;
      FUN_00a581b0(&pfStack_5c,0,fVar5);
      fVar12 = (float)local_58 - (float)param_1[0x15];
      param_1[600] = 0;
      param_1[0x259] = 0;
      param_1[0x25a] = 0;
      param_1[0x259] = 0;
      param_1[0x14] = (int)pfStack_5c;
      param_1[0x15] = (int)local_58;
      param_1[0x16] = (int)local_54;
      FUN_00a585a0(&pfStack_5c,0,param_1[0x24a]);
      fVar10 = (float10)fpatan((float10)(float)pfStack_5c,(float10)(float)local_54);
      param_1[0x25] = (int)(float)fVar10;
      fVar5 = (float)param_1[0x24a];
      if (!NAN(fVar5) && 2.0 < fVar5 != (fVar5 == 2.0)) {
        FUN_00b03020(1);
        param_1[0x225] = (int)fVar12;
        FUN_008e0c50(fVar12);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 3:
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0xb24f94;
    FUN_00ac80a0();
    if ((0.0 < (float)param_1[0x249]) && ((float)param_1[0x249] < 1.0)) {
      local_54 = (float *)((float)param_1[0x244] * 0.08 + (float)param_1[0x249]);
      param_1[0x249] = (int)local_54;
      if ((float)local_54 < 1.0) {
        local_38 = 0.0;
        local_58 = &local_40;
        local_3c = 0.0;
        pfStack_5c = (float *)(param_1 + 0x430);
        local_40 = 0.0;
        local_34 = 1.0;
        D3DXQuaternionSlerp(local_58);
        FUN_00ddb9f0(param_1 + 0x2c,&stack0xffffffb0);
        D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
        local_30 = (float)param_1[600] + (float)param_1[0x10];
        pfStack_5c = &local_30;
        local_2c = (float)param_1[0x11] + (float)param_1[0x259];
        local_28 = (float)param_1[0x12] + (float)param_1[0x25a];
        local_24 = (float)param_1[0x13] + (float)param_1[0x25b];
        local_54 = (float *)0x3db2b8c2;
        local_58 = (float *)0x3e4ccccd;
        FUN_00b02610();
      }
      else {
        param_1[0x3a] = 0;
        param_1[0x39] = 0;
        param_1[0x38] = 0;
        param_1[0x37] = 0;
        param_1[0x35] = 0;
        param_1[0x34] = 0;
        param_1[0x33] = 0;
        param_1[0x32] = 0;
        param_1[0x30] = 0;
        param_1[0x2f] = 0;
        param_1[0x2e] = 0;
        param_1[0x2d] = 0;
        param_1[0x3b] = 0x3f800000;
        param_1[0x36] = 0x3f800000;
        param_1[0x31] = 0x3f800000;
        param_1[0x2c] = 0x3f800000;
        param_1[0x4a] = 0;
        param_1[0x49] = 0;
        param_1[0x48] = 0;
        param_1[0x47] = 0;
        param_1[0x45] = 0;
        param_1[0x44] = 0;
        param_1[0x43] = 0;
        param_1[0x42] = 0;
        param_1[0x40] = 0;
        param_1[0x3f] = 0;
        param_1[0x3e] = 0;
        param_1[0x3d] = 0;
        param_1[0x4b] = 0x3f800000;
        param_1[0x46] = 0x3f800000;
        param_1[0x41] = 0x3f800000;
        param_1[0x3c] = 0x3f800000;
        param_1[0x4b8] = 0x3f800000;
        param_1[0x249] = 0x3f800000;
      }
    }
    local_54 = (float *)0x0;
    local_58 = (float *)0xb2516a;
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[600]);
      param_1[0x15] = (int)((float)param_1[0x259] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x25a] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x25b] + (float)param_1[0x17]);
    }
    local_54 = (float *)0x3d888889;
    local_58 = (float *)0xb251b4;
    iVar8 = (**(code **)(*param_1 + 800))();
    if (iVar8 != 0) {
      param_1[0x3a] = 0;
      param_1[0x39] = 0;
      param_1[0x38] = 0;
      param_1[0x37] = 0;
      param_1[0x35] = 0;
      param_1[0x34] = 0;
      param_1[0x33] = 0;
      param_1[0x32] = 0;
      param_1[0x30] = 0;
      param_1[0x2f] = 0;
      param_1[0x2e] = 0;
      param_1[0x2d] = 0;
      param_1[0x3b] = 0x3f800000;
      param_1[0x36] = 0x3f800000;
      param_1[0x31] = 0x3f800000;
      param_1[0x2c] = 0x3f800000;
      param_1[0x4b] = 0x3f800000;
      param_1[0x46] = 0x3f800000;
      param_1[0x41] = 0x3f800000;
      param_1[0x3c] = 0x3f800000;
      param_1[0x4a] = 0;
      param_1[0x49] = 0;
      param_1[0x48] = 0;
      param_1[0x47] = 0;
      param_1[0x45] = 0;
      param_1[0x44] = 0;
      param_1[0x43] = 0;
      param_1[0x42] = 0;
      param_1[0x40] = 0;
      param_1[0x3f] = 0;
      param_1[0x3e] = 0;
      param_1[0x3d] = 0;
      local_58 = (float *)0x3f800000;
      pfStack_5c = (float *)0xbf800000;
      FUN_00aa4080(0x52,0,0x3e4ccccd,0x3f800000,0x8000000);
      param_1[0x187] = 5;
      return;
    }
    break;
  case 4:
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[600]);
    param_1[0x15] = (int)((float)param_1[0x259] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x25a] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x25b] + (float)param_1[0x17]);
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0xb25304;
    FUN_00ac80a0();
    local_54 = (float *)0x3d888889;
    local_58 = (float *)0xb2531a;
    iVar8 = (**(code **)(*param_1 + 800))();
    if (iVar8 != 0) {
      local_58 = (float *)0x3f800000;
      pfStack_5c = (float *)0xbf800000;
      FUN_00aa4080(0x52,0,0x3d888889,0x3f800000,0x8000000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0xb25372;
    FUN_00ac80a0();
    local_54 = (float *)0x0;
    local_58 = (float *)0xb2537b;
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      local_54 = (float *)0x0;
      local_58 = (float *)0x4;
      pfStack_5c = (float *)0xb2538e;
      FUN_00a88b50();
      pcVar6 = *(code **)(*param_1 + 0x34c);
      param_1[0x34a] = 0;
      local_54 = (float *)0xb253a4;
      (*pcVar6)();
    }
  }
  return;
}

// 00B253D0  FUN_00b253d0  size=187  [between]
void __fastcall FUN_00b253d0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x1124))) &&
      (*(int *)(param_1 + 0x1680) == 0)) &&
     (((*(uint *)(param_1 + 0x1124) & 0x20000000) == 0 && (*(int *)(param_1 + 0x61c) < 2)))) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00a7c8a0();
      iVar1 = FUN_00a8cab0();
      if (iVar1 == 0x10c) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x61c) = 2;
    FUN_00b1b630(0,1);
    fVar2 = (float10)FUN_00dde300(0,0x3f800000);
    *(undefined4 *)(param_1 + 0x95c) = 1;
    *(float *)(param_1 + 0x14cc) =
         (float)(fVar2 * (float10)0.15 + (float10)*(float *)(param_1 + 0x14c8));
  }
  return;
}

// 00B25490  FUN_00b25490  size=1688  [between]
/* WARNING: Removing unreachable block (ram,0x00b25623) */

void __fastcall FUN_00b25490(int *param_1)

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
  undefined4 uVar11;
  float10 fVar12;
  float10 fVar13;
  float local_130;
  float local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_a4;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x1bb] = 0;
    param_1[0x449] = param_1[0x449] | 0x20000;
    param_1[0x449] = param_1[0x449] & 0xffffffbf;
    FUN_00aa4120(*(undefined4 *)(&DAT_016a0c74 + param_1[0x456] * 4),0,0x3e4ccccd,0x3f800000,0,
                 0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x532] = 0;
    param_1[0x188] = 0;
    param_1[599] = 0;
    param_1[0x256] = 0;
    param_1[0x3a] = 0;
    param_1[0x39] = 0;
    param_1[0x38] = 0;
    param_1[0x37] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x30] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x2d] = 0;
    param_1[0x3b] = 0x3f800000;
    param_1[0x36] = 0x3f800000;
    param_1[0x31] = 0x3f800000;
    param_1[0x2c] = 0x3f800000;
    param_1[0x4b] = 0x3f800000;
    param_1[0x46] = 0x3f800000;
    param_1[0x41] = 0x3f800000;
    param_1[0x3c] = 0x3f800000;
    param_1[0x4a] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x40] = 0;
    param_1[0x3f] = 0;
    param_1[0x3e] = 0;
    param_1[0x3d] = 0;
    param_1[0x4b8] = 0x3f800000;
    DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
    fVar4 = (float)(DAT_01dd0814 >> 8) * 5.960465e-08;
    param_1[0x533] = (int)(((1.0 - (fVar4 + fVar4)) * 0.1 + (float)param_1[0x56c]) * 60.0);
    param_1[0x531] = (int)((float)param_1[0x56d] * 60.0);
    iVar10 = FUN_00a81330();
    if ((iVar10 != 0) && (iVar10 = FUN_00a7c8a0(), iVar10 != 0)) {
      uVar11 = FUN_009f8b40();
      FUN_009f8ae0(uVar11);
    }
    FUN_00c27f40(0xd,0xbf800000);
    break;
  case 1:
    break;
  case 2:
    iVar10 = FUN_00c27ef0();
    if (iVar10 < param_1[0x256]) {
      iVar10 = param_1[0x256];
    }
    param_1[0x256] = iVar10;
    iVar10 = FUN_00a81330();
    if (iVar10 != 0) {
      FUN_00a7c8a0();
      iVar10 = FUN_00a12210(param_1[0x442]);
      FUN_00c4d1a0(param_1[0x13c],0);
      if (iVar10 != 0) {
        param_1[0x14] = *(int *)(iVar10 + 0x40);
        param_1[0x15] = *(int *)(iVar10 + 0x44);
        param_1[0x16] = *(int *)(iVar10 + 0x48);
        param_1[0x17] = *(int *)(iVar10 + 0x4c);
        local_130 = SQRT(*(float *)(iVar10 + 0x14) * *(float *)(iVar10 + 0x14) +
                         *(float *)(iVar10 + 0x10) * *(float *)(iVar10 + 0x10) +
                         *(float *)(iVar10 + 0x18) * *(float *)(iVar10 + 0x18));
        local_12c = SQRT(*(float *)(iVar10 + 0x20) * *(float *)(iVar10 + 0x20) +
                         *(float *)(iVar10 + 0x24) * *(float *)(iVar10 + 0x24) +
                         *(float *)(iVar10 + 0x28) * *(float *)(iVar10 + 0x28));
        fVar1 = SQRT(*(float *)(iVar10 + 0x38) * *(float *)(iVar10 + 0x38) +
                     *(float *)(iVar10 + 0x34) * *(float *)(iVar10 + 0x34) +
                     *(float *)(iVar10 + 0x30) * *(float *)(iVar10 + 0x30));
        fVar4 = *(float *)(iVar10 + 0x28);
        fVar5 = *(float *)(iVar10 + 0x38);
        fVar12 = (float10)FUN_00ddbaa0(-(*(float *)(iVar10 + 0x18) / fVar1));
        fVar6 = *(float *)(iVar10 + 0x14);
        fVar7 = *(float *)(iVar10 + 0x10);
        fVar13 = (float10)fpatan((float10)(fVar4 / fVar1),(float10)(fVar5 / fVar1));
        param_1[0x24] = (int)(float)fVar13;
        param_1[0x25] = (int)(float)fVar12;
        fVar12 = (float10)fpatan((float10)fVar6 / (float10)local_12c,
                                 (float10)fVar7 / (float10)local_130);
        param_1[0x26] = (int)(float)fVar12;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar4 = (float)param_1[0x532];
    param_1[0x532] = (int)((float)param_1[0x244] + fVar4);
    if ((float)param_1[0x244] + fVar4 <= (float)param_1[0x533]) {
      return;
    }
    FUN_009f8b10();
    param_1[0x187] = 3;
    return;
  case 3:
    param_1[0x187] = 4;
    param_1[0x139] = 1;
    if (param_1[0x256] != 1) {
      FUN_00b1b700(0,0);
      if (param_1[0x456] == 0) {
        FUN_00b0a710(param_1[0x256]);
        iVar10 = FUN_00a12210(3);
        if (iVar10 != 0) {
          local_130 = *(float *)(iVar10 + 0x40);
          local_12c = *(float *)(iVar10 + 0x44);
          local_128 = *(undefined4 *)(iVar10 + 0x48);
          local_124 = *(undefined4 *)(iVar10 + 0x4c);
          uVar11 = FUN_00e01ca0();
          FUN_00e013e0(0x20040,3,&local_130,uVar11);
          local_a4 = 0;
        }
      }
      FUN_00b10f60(0x46);
      return;
    }
    FUN_00b1b700(1,1);
    FUN_00b0a710(1);
    FUN_00b10f60(0x46);
    return;
  default:
    return;
  }
  iVar10 = FUN_00c27ef0();
  if (iVar10 < param_1[0x256]) {
    iVar10 = param_1[0x256];
  }
  param_1[0x256] = iVar10;
  if (param_1[0x456] == 0) {
    fVar4 = (float)param_1[0x56e];
    iVar9 = FUN_0041ca10(param_1[0x2a1]);
    if (iVar9 != 0) {
      FUN_00bc3000((float)(iVar10 + -1) * 0.5 + fVar4);
    }
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  fVar4 = (float)param_1[0x532];
  param_1[0x532] = (int)((float)param_1[0x244] + fVar4);
  if ((param_1[0x188] == 0) && ((float)param_1[0x531] < (float)param_1[0x244] + fVar4)) {
    iVar10 = param_1[0x221];
    FUN_00b1b630(1,0);
    FUN_00b03020(iVar10 == 0);
    param_1[0x188] = 1;
  }
  if ((float)param_1[0x533] < (float)param_1[0x532]) {
    FUN_009f8b10();
    param_1[0x187] = 3;
  }
  FUN_00a81330();
  FUN_00a7c8a0();
  iVar10 = FUN_00a12210(param_1[0x442]);
  FUN_00c4d1a0(param_1[0x13c],0);
  if (iVar10 != 0) {
    param_1[0x14] = *(int *)(iVar10 + 0x40);
    param_1[0x15] = *(int *)(iVar10 + 0x44);
    param_1[0x16] = *(int *)(iVar10 + 0x48);
    param_1[0x17] = *(int *)(iVar10 + 0x4c);
    fVar4 = *(float *)(iVar10 + 0x10);
    fVar5 = *(float *)(iVar10 + 0x14);
    fVar6 = *(float *)(iVar10 + 0x18);
    local_130 = SQRT(*(float *)(iVar10 + 0x20) * *(float *)(iVar10 + 0x20) +
                     *(float *)(iVar10 + 0x24) * *(float *)(iVar10 + 0x24) +
                     *(float *)(iVar10 + 0x28) * *(float *)(iVar10 + 0x28));
    fVar8 = SQRT(*(float *)(iVar10 + 0x38) * *(float *)(iVar10 + 0x38) +
                 *(float *)(iVar10 + 0x34) * *(float *)(iVar10 + 0x34) +
                 *(float *)(iVar10 + 0x30) * *(float *)(iVar10 + 0x30));
    fVar7 = *(float *)(iVar10 + 0x28);
    fVar1 = *(float *)(iVar10 + 0x38);
    fVar12 = (float10)FUN_00ddbaa0(-(*(float *)(iVar10 + 0x18) / fVar8));
    fVar2 = *(float *)(iVar10 + 0x14);
    fVar3 = *(float *)(iVar10 + 0x10);
    fVar13 = (float10)fpatan((float10)(fVar7 / fVar8),(float10)(fVar1 / fVar8));
    param_1[0x24] = (int)(float)fVar13;
    param_1[0x25] = (int)(float)fVar12;
    fVar12 = (float10)fpatan((float10)fVar2 / (float10)local_130,
                             (float10)fVar3 /
                             (float10)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6));
    param_1[0x26] = (int)(float)fVar12;
  }
  iVar10 = FUN_00a81330();
  if ((iVar10 != 0) && (iVar10 = FUN_00a7c8a0(), iVar10 != 0)) {
    FUN_00b03790(iVar10);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00B25B40  FUN_00b25b40  size=939  [between]
void __fastcall FUN_00b25b40(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [76];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b1b630(0,0);
    param_1[0x449] = param_1[0x449] & 0xff3fffff;
    FUN_00aa4080(*(undefined4 *)(&DAT_016a0c88 + param_1[0x456] * 4),0,0,0x3f800000,0x8038000,
                 0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x139] = 1;
    iVar5 = FUN_00a81330();
    if ((iVar5 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      piVar4 = (int *)(**(code **)(*piVar3 + 0x68))();
      iVar5 = *piVar3;
      param_1[0x14] = *piVar4;
      param_1[0x15] = piVar4[1];
      param_1[0x16] = piVar4[2];
      pcVar2 = *(code **)(iVar5 + 0x84);
      param_1[0x17] = piVar4[3];
      piVar3 = (int *)(*pcVar2)();
      param_1[0x24] = *piVar3;
      param_1[0x25] = piVar3[1];
      param_1[0x26] = piVar3[2];
      param_1[0x27] = piVar3[3];
    }
    if ((float)param_1[0x533] < (float)param_1[0x532] + 40.0) {
      param_1[0x533] = (int)((float)param_1[0x532] + 40.0);
    }
    FUN_00b03020(0);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(0x77,0,0x3d088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00b07f30();
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      iVar5 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar5 == 0) {
        pfVar6 = &fStack_60;
        FUN_00a92f90(pfVar6);
        FUN_0044fd10(pfVar6);
        iVar5 = (**(code **)(*param_1 + 0x84))();
        D3DXMatrixRotationY(auStack_50,*(undefined4 *)(iVar5 + 4));
        D3DXVec3TransformNormal(auStack_68,auStack_68,&fStack_58);
        fVar1 = 1.0 / (float)param_1[0x244];
        fStack_60 = fStack_60 * fVar1;
        fStack_5c = fStack_5c * fVar1;
        fStack_58 = fStack_58 * fVar1;
        fStack_54 = fStack_54 * fVar1;
        param_1[0x227] = (int)fStack_54;
        param_1[0x224] = (int)fStack_60;
        param_1[0x225] = (int)fStack_5c;
        param_1[0x226] = (int)fStack_58;
        FUN_008e0c00(&fStack_60);
        param_1[0x187] = 3;
        FUN_00aa3f60(0x29);
      }
      else {
        param_1[0x248] = 0x3f333333;
        param_1[0x187] = 4;
        FUN_00aa3f60(0x2a);
      }
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar5 != 0) {
      param_1[0x248] = 0x3f333333;
      param_1[0x187] = 4;
      FUN_00aa3f60(0x2a);
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar5 = FUN_00a94ce0(0);
    if ((iVar5 != 0) || ((float)param_1[0x248] <= 0.0)) {
      FUN_00b1b700(1,0);
      FUN_00b10f60(0x46);
    }
  }
  fVar1 = (float)param_1[0x532];
  param_1[0x532] = (int)((float)param_1[0x244] + fVar1);
  if ((float)param_1[0x533] < (float)param_1[0x244] + fVar1) {
    FUN_00b1b700(1,0);
    FUN_00b10f60(0x46);
  }
  return;
}

// 00B25F00  FUN_00b25f00  size=61  [between]
void __fastcall FUN_00b25f00(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    FUN_00b1b700(1,0);
    FUN_00b0a710(1);
    FUN_00b10f60(0x46);
  }
  return;
}

// 00B25F40  FUN_00b25f40  size=777  [between]
void __fastcall FUN_00b25f40(int *param_1)

{
  float fVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uVar3;
  undefined1 *local_78;
  int local_74;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [80];
  
  local_74 = 0xb25f59;
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_74 = 0xb25f68;
    uVar3 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x51,0,0x3e4ccccd,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    local_78 = (undefined1 *)0xb25fc0;
    local_74 = uVar3;
    FUN_00b03790();
    param_1[0x248] = 0x3f333333;
    goto LAB_00b25fd0;
  case 1:
LAB_00b25fd0:
    if (0.0 < (float)param_1[0x248]) {
      fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668;
      param_1[0x248] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        local_74 = 1;
        local_78 = (undefined1 *)0x0;
        FUN_00b1b630();
      }
    }
    local_74 = 0xb26016;
    FUN_00b07f30();
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0;
    local_78 = (undefined1 *)0xb26032;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 0xb26041;
      FUN_009f8b10();
      local_74 = 0xb2604c;
      FUN_00a7c950();
      param_1[0x195] = -1;
      param_1[0x449] = param_1[0x449] & 0xffffffdf;
      local_74 = 0x3d888889;
      local_78 = (undefined1 *)0xb26073;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_78 = auStack_64;
        param_1[0x187] = 2;
        FUN_00a92f90();
        FUN_0044fd10();
        local_78 = (undefined1 *)0xb260c4;
        iVar2 = (**(code **)(*param_1 + 0x84))();
        local_78 = *(undefined1 **)(iVar2 + 4);
        D3DXMatrixRotationY(auStack_54);
        D3DXVec3TransformNormal(&stack0xffffff94,&stack0xffffff94,auStack_5c);
        local_74 = -0x42333333;
        if (param_1[0x1d9] != 0) {
          (**(code **)(*param_1 + 0x314))();
          if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
            *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
          }
        }
        param_1[0x224] = (int)local_78;
        param_1[0x225] = local_74;
        param_1[0x226] = unaff_EDI;
        param_1[0x227] = unaff_ESI;
        FUN_008e0c00(&local_78);
        FUN_00aa3f60(0x29);
        return;
      }
      local_78 = (undefined1 *)0x2a;
      param_1[0x248] = 0x3f333333;
      param_1[0x187] = 3;
      FUN_00aa3f60();
      return;
    }
    local_74 = 10;
    local_78 = (undefined1 *)0xb2616e;
    iVar2 = FUN_00a8c760();
    if (iVar2 == 0) {
      local_78 = (undefined1 *)0xb2617e;
      local_74 = uVar3;
      FUN_00b03700();
      return;
    }
    break;
  case 2:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0x3d888889;
    local_78 = (undefined1 *)0xb261b0;
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 != 0) {
      local_78 = (undefined1 *)0x2a;
      param_1[0x248] = 0x3f333333;
      param_1[0x187] = 3;
      FUN_00aa3f60();
      return;
    }
    break;
  case 3:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0;
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    local_78 = (undefined1 *)0xb26214;
    iVar2 = FUN_00a94ce0();
    if ((iVar2 != 0) || ((float)param_1[0x248] <= 0.0)) {
      local_74 = 0;
      local_78 = (undefined1 *)0x1;
      FUN_00b1b700();
      local_74 = 0x46;
      local_78 = (undefined1 *)0xb2623b;
      FUN_00b10f60();
      return;
    }
  }
  return;
}

// 00B26260  Em0040::vf32C  size=1059  [class]
undefined4 __fastcall Em0040::vf32C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  int iVar5;
  uint uVar6;
  int *piVar7;
  float10 fVar8;
  undefined8 uVar9;
  undefined4 local_8;
  
  iVar5 = 0;
  param_1[0x1a1] = 0;
  iVar1 = FUN_00a8ef10();
  if (((iVar1 != 0) || ((param_1[0x449] & 0x20U) != 0)) || ((*(byte *)(param_1 + 0x130) & 1) == 0))
  {
    return 0;
  }
  if (param_1[0x139] != 0) {
    uVar2 = FUN_00b1a990();
    return uVar2;
  }
  if ((param_1[0x449] & 0x40000U) != 0) {
    uVar2 = FUN_00b1aa80();
    return uVar2;
  }
  FUN_00ac2080(0);
  local_8 = 0x41200000;
  piVar7 = (int *)param_1[0x19f];
  piVar3 = piVar7 + param_1[0x1a1] * 0x54;
  if (piVar7 == piVar3) {
    return 0;
  }
  do {
    iVar1 = *piVar7;
    if ((((iVar1 != 0) && (iVar1 != 1)) && ((iVar1 != 2 && ((iVar1 != 0x1b0 && (iVar1 != 0x147))))))
       && (iVar1 != 0xe0)) {
      iVar1 = FUN_00a81330();
      if ((*piVar7 == 0x129) || (*piVar7 == 0x12a)) {
        uVar9 = FUN_00b02780();
        if (((int)uVar9 != 0) && ((int)((ulonglong)uVar9 >> 0x20) != 0)) {
          uVar2 = FUN_00a7c8a0();
          FUN_00b13f80(uVar2);
          return 0;
        }
      }
      else if (iVar1 != param_1[0x13c]) {
        if (iVar1 != 0) {
          iVar5 = FUN_00a7c8a0();
        }
        iVar1 = FUN_00a8f040(piVar7);
        if (iVar1 == 0) {
          iVar1 = FUN_00a8eea0();
          if (((0 < iVar1) && (iVar5 != 0)) && ((*(byte *)(iVar5 + 0x4c0) & 0x10) != 0)) {
            (**(code **)(*param_1 + 0x21c))(iVar5,(char)piVar7[4],0x3c23d70a,0);
            local_8 = 0x40000000;
            iVar1 = FUN_00b0a570(iVar5,piVar7);
            if (iVar1 != 0) {
              return 0;
            }
          }
          iVar1 = FUN_00b138b0(iVar5,piVar7);
          if (iVar1 != 0) {
            return 0;
          }
          uVar6 = 1;
          if ((*(byte *)(piVar7 + 0x23) & 0x10) == 0) {
            (**(code **)(*param_1 + 0x30c))(piVar7[1],0);
          }
          if (*piVar7 == 0x145) {
            iVar1 = *param_1;
            uVar2 = FUN_00a8eea0(0);
            (**(code **)(iVar1 + 0x30c))(uVar2);
            FUN_00b03340();
          }
          if (((0 < param_1[0x540]) && (*piVar7 != 0x58)) || ((param_1[0x449] & 0x400000U) != 0)) {
            FUN_009f8b10();
            if (param_1[0x1d9] != 0) {
              FUN_008e71f0(0x10000);
            }
            FUN_00a8ee20(0);
          }
          (**(code **)(*param_1 + 0x220))(local_8);
          iVar1 = FUN_00b0a4b0(piVar7);
          if (iVar1 != 0) {
            if (iVar5 != 0) {
              param_1[0x53c] = *(int *)(iVar5 + 0x40);
              param_1[0x53d] = *(int *)(iVar5 + 0x44);
              param_1[0x53e] = *(int *)(iVar5 + 0x48);
              param_1[0x53f] = *(int *)(iVar5 + 0x4c);
            }
            param_1[0x538] = piVar7[8];
            param_1[0x539] = piVar7[9];
            param_1[0x53a] = piVar7[10];
            param_1[0x53b] = piVar7[0xb];
            return 1;
          }
          iVar1 = FUN_00a8eea0();
          if (iVar1 < 1) {
            FUN_00b0f910();
            param_1[0x139] = 1;
            FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
            if ((*(byte *)((int)piVar7 + 0x92) & 1) != 0) {
              piVar3 = (int *)FUN_00c209f0();
              (**(code **)(*piVar3 + 0x14))(0xe);
            }
            uVar2 = 0;
            if ((piVar7[0x23] & 0x100000U) != 0) {
              uVar2 = 2;
            }
            if ((piVar7[0x24] & 0x200U) != 0) {
              uVar2 = 4;
            }
            (**(code **)(*param_1 + 0x344))(10,uVar2,(uint)piVar7[0x24] >> 0xb & 1);
            uVar6 = 0x81;
            iVar1 = FUN_00a8cab0();
            if (iVar1 == 0x20) {
              FUN_00b1a5d0();
            }
          }
          fVar8 = (float10)FUN_00ddba30((float)piVar7[0xc] - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar8;
          param_1[0x441] = (int)(float)fVar8;
          if (iVar5 != 0) {
            fVar8 = (float10)FUN_00a8ec30(iVar5 + 0x40);
            param_1[0x441] = (int)(float)fVar8;
          }
          if (param_1[0x128] == 0x10) {
            uVar6 = FUN_00b1b500(piVar7);
            if ((*(byte *)(param_1 + 0x2c0) & 0x80) != 0) {
              uVar6 = uVar6 | 0x8000;
            }
            if (uVar6 == 0xffffffff) {
              return 1;
            }
            (**(code **)(*param_1 + 0x198))(iVar5,piVar7,uVar6);
            return unaff_EBX;
          }
          param_1[0x42e] = 0;
          uVar4 = FUN_00b1ab50(piVar7);
          uVar6 = uVar6 | uVar4;
          if ((*(byte *)(param_1 + 0x2c0) & 0x82) != 0) {
            uVar6 = uVar6 | 0x8000;
          }
          (**(code **)(*param_1 + 0x198))(iVar5,piVar7,uVar6);
          return unaff_EBX;
        }
      }
    }
    piVar7 = piVar7 + 0x54;
    if (piVar7 == piVar3) {
      return 0;
    }
  } while( true );
}

// 00B26690  FUN_00b26690  size=182  [callgraph]
void __fastcall FUN_00b26690(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00b17eb0();
  if (iVar1 != 0) {
    return;
  }
  if (*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) < *(float *)(param_1 + 0x10d4)
      != (*(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14) ==
         *(float *)(param_1 + 0x10d4))) {
    return;
  }
  if ((*(int *)(param_1 + 0x1138) == 2) && (iVar1 = FUN_00b07ca0(0), iVar1 != -1)) {
LAB_00b26710:
    FUN_00b10f60(iVar1);
  }
  else {
    if (*(int *)(param_1 + 0x10d0) != 0) {
      fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x10d0) + 0x50);
      fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)*(float *)(param_1 + 0x94)));
      if ((float10)0.7853982 < ABS(fVar2)) {
        iVar1 = FUN_00b033c0(param_1 + 0x10e0);
        goto LAB_00b26710;
      }
    }
    if (((*(float *)(param_1 + 0x1440) <= 0.0) && (*(int *)(param_1 + 0x61c) == 1)) &&
       ((*(uint *)(param_1 + 0x1124) & 0x2000000) != 0)) {
      FUN_00b236c0();
      return;
    }
  }
  return;
}

// 00B26750  FUN_00b26750  size=419  [callgraph]
void __fastcall FUN_00b26750(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar6 = &DAT_01b34e80;
      (**(code **)(*piVar3 + 4))(&DAT_01b34e80);
      iVar2 = FUN_00dd6d70(puVar6);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x449] = param_1[0x449] | 0x100000;
    param_1[0x4c5] = 0;
    param_1[0x4c6] = -1;
    param_1[0x449] = param_1[0x449] | 0x100;
    param_1[0x449] = param_1[0x449] & 0xffdfffff;
    param_1[0x449] = param_1[0x449] | 0x40;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x438);
  *pfVar1 = *(float *)(uVar4 + 0x40);
  uVar5 = 8;
  param_1[0x439] = *(int *)(uVar4 + 0x44);
  param_1[0x43a] = *(int *)(uVar4 + 0x48);
  param_1[0x43b] = *(int *)(uVar4 + 0x4c);
  param_1[0x439] = (int)((float)param_1[0x439] + 1.0);
  if ((*(byte *)(param_1 + 0x449) & 1) != 0) {
    uVar5 = 7;
  }
  iVar2 = FUN_00b24210(pfVar1,uVar5);
  if (iVar2 == 0) {
    param_1[0x449] = param_1[0x449] | 0x80;
  }
  else {
    param_1[0x449] = param_1[0x449] & 0xffffff7f;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((iVar2 != 0) &&
     (((float)param_1[0x10] - *pfVar1) * ((float)param_1[0x10] - *pfVar1) +
      ((float)param_1[0x11] - (float)param_1[0x439]) *
      ((float)param_1[0x11] - (float)param_1[0x439]) +
      ((float)param_1[0x12] - (float)param_1[0x43a]) *
      ((float)param_1[0x12] - (float)param_1[0x43a]) < 2.25)) {
    (**(code **)(*param_1 + 0x34c))();
  }
  if ((*(byte *)(param_1 + 0x449) & 0x10) != 0) {
    param_1[0x449] = param_1[0x449] | 0x200000;
    return;
  }
  param_1[0x449] = param_1[0x449] & 0xffdfffff;
  return;
}

// 00B26900  FUN_00b26900  size=180  [callgraph]
void __fastcall FUN_00b26900(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x10d0) != 0) {
    fVar3 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x10d0) + 0x50);
    fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
    if ((float10)0.7853982 < ABS(fVar3)) {
      uVar1 = FUN_00b033c0(param_1 + 0x10e0);
      FUN_00b10f60(uVar1);
      return;
    }
  }
  iVar2 = FUN_00b151c0();
  if ((((iVar2 == 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
      (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
     (((*(float *)(param_1 + 0x1440) <= 0.0 &&
       (*(float *)(param_1 + 0xa90) < *(float *)(&DAT_018a7aa8 + *(int *)(param_1 + 0x1138) * 0x14))
       ) && ((*(uint *)(param_1 + 0x1124) & 0x2000000) != 0)))) {
    FUN_00b236c0();
    return;
  }
  return;
}

// 00B269C0  FUN_00b269c0  size=440  [callgraph]
void __fastcall FUN_00b269c0(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b34e80;
    (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
    iVar1 = FUN_00dd6d70(puVar4);
    if ((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) {
      FUN_00a7c8a0();
    }
  }
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    fVar3 = (float10)FUN_00dde300(0x3f000000,0x3fc00000);
    *(float *)(param_1 + 0x920) = (float)fVar3;
    *(undefined4 *)(param_1 + 0x1314) = 0;
    *(undefined4 *)(param_1 + 0x1318) = 0xffffffff;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x100;
    *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffdfffff;
    if (*(int *)(param_1 + 0x4a0) == 5) {
      *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x40;
    }
  }
  else {
    if (iVar1 == 1) {
      iVar1 = FUN_00b24210(param_1 + 0x10e0,8);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) | 0x80;
      }
      else {
        *(uint *)(param_1 + 0x1124) = *(uint *)(param_1 + 0x1124) & 0xffffff7f;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    if ((iVar1 == 2) && (iVar1 = FUN_00b07a80(param_1 + 0x620,0x3e4ccccd,0x3da3d70a), iVar1 != 0)) {
      FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 1;
      return;
    }
  }
  return;
}

// 00B29030  Em0040::vf4C  size=93  [class]
void __fastcall Em0040::vf4C(int param_1)

{
  BehaviorEmBase::vf4C();
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 6:
  case 7:
    FUN_00b1ff10();
    return;
  case 8:
    FUN_00b0da30();
    return;
  case 9:
    FUN_00b16330();
    return;
  case 10:
    FUN_00b26de0();
    return;
  case 0xb:
    FUN_00b20af0();
    return;
  case 0xc:
    FUN_00b04ac0();
    return;
  case 0xd:
    FUN_00b0e290();
    return;
  default:
    switchD_00b29046::default();
    return;
  }
}

