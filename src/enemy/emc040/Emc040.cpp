// src/enemy/emc040/Emc040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00751190..00AB9E10, 375 functions

#include "mgrr.h"
#include "Emc040.h"

// 00751190  Emc040::vf300  size=1  [class]
void Emc040::vf300(void)

{
  return;
}

// 007511A0  Emc040::vf304  size=1  [class]
void Emc040::vf304(void)

{
  return;
}

// 007511B0  Emc040::vf3C  size=55  [class]
void __thiscall Emc040::vf3C(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e26e0(param_2);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(param_2);
  }
  return;
}

// 007511F0  Emc040::vf2F8  size=46  [class]
void __fastcall Emc040::vf2F8(int *param_1)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(10,0,0);
    param_1[0x1af] = 1;
  }
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00751240  FUN_00751240  size=197  [between]
void __fastcall FUN_00751240(int param_1)

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
    goto switchD_00751260_caseD_4;
  case 0xe:
  case 0xf:
    uVar4 = 0xf;
    break;
  case 0x10:
    uVar4 = 0x15;
    break;
  default:
    goto switchD_00751260_default;
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(uVar4);
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x5c);
    break;
  default:
    goto switchD_00751260_caseD_4;
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
switchD_00751260_caseD_4:
switchD_00751260_default:
  FUN_00a8edf0(uVar3);
  return;
}

// 00751350  FUN_00751350  size=90  [between]
void __fastcall FUN_00751350(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x00751370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x007513a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x34))();
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0075137e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 100))();
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x0075138c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x6c))();
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0075139a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x74))();
    return;
  }
}

// 007513C0  FUN_007513c0  size=142  [between]
void __thiscall FUN_007513c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))(param_2);
    FUN_00fdbc60();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x0075144c. Too many branches */
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

// 00751470  FUN_00751470  size=16  [between]
int __fastcall FUN_00751470(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}

// 00751480  FUN_00751480  size=259  [between]
undefined4 FUN_00751480(void)

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

// 00751590  Emc040::vf1B0  size=5  [class]
undefined4 Emc040::vf1B0(void)

{
  return 0;
}

// 007515A0  FUN_007515a0  size=201  [between]
float10 __thiscall FUN_007515a0(int param_1,undefined4 param_2,float param_3,float param_4)

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

// 00751670  FUN_00751670  size=36  [between]
void __thiscall FUN_00751670(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_007515a0(*(int *)(param_1 + 0xa84) + 0x40,param_2,param_3);
  return;
}

// 007516A0  FUN_007516a0  size=37  [between]
float10 __thiscall FUN_007516a0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 007516D0  FUN_007516d0  size=40  [between]
float10 __fastcall FUN_007516d0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 00751710  FUN_00751710  size=36  [between]
undefined4 __fastcall FUN_00751710(int param_1)

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

// 007517C0  FUN_007517c0  size=112  [between]
void __fastcall FUN_007517c0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x186] < 0x2d) {
    switch(param_1[0x186]) {
    case 0:
      break;
    default:
      iVar1 = (**(code **)(*param_1 + 0x1fc))();
      if (((((iVar1 == 0) && (param_1[0x574] < 1)) &&
           ((param_1[0x1d9] == 0 || (iVar1 = FUN_008e2740(), iVar1 != 0)))) &&
          (iVar1 = param_1[0x186], iVar1 != 0x1f)) && ((iVar1 < 0x24 || (0x2a < iVar1)))) {
                    /* WARNING: Could not recover jumptable at 0x0075182c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 007518C0  FUN_007518c0  size=266  [between]
void __fastcall FUN_007518c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(5,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x920) = 0;
    if (*(int *)(param_1 + 0x1208) == 2) {
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
    *(float *)(param_1 + 0x1674) = *(float *)(param_1 + 0x1674) - *(float *)(param_1 + 0x910);
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

// 00751A60  FUN_00751a60  size=366  [between]
void __fastcall FUN_00751a60(int *param_1)

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

// 00751BD0  FUN_00751bd0  size=53  [between]
void __fastcall FUN_00751bd0(int param_1)

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

// 00751C10  FUN_00751c10  size=55  [between]
void __fastcall FUN_00751c10(int *param_1)

{
  float fVar1;
  
  if (0.0 < (float)param_1[0x248]) {
    fVar1 = (float)param_1[0x248] - (float)param_1[0x244];
    param_1[0x248] = (int)fVar1;
    if (!NAN(fVar1) && fVar1 < 0.0 != (fVar1 == 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x00751c42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00751C50  FUN_00751c50  size=65  [between]
void __fastcall FUN_00751c50(int param_1)

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

// 00751CC0  FUN_00751cc0  size=105  [between]
void __fastcall FUN_00751cc0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00751d27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00751D80  FUN_00751d80  size=493  [between]
void __fastcall FUN_00751d80(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 *puVar3;
  float fStack_84;
  float fStack_78;
  float local_74;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  if ((float)param_1[0x485] <= 0.0) {
    local_74 = (float)param_1[0x22a] * (float)param_1[0x244];
    fStack_84 = 1.0755546e-38;
    fVar2 = (float10)FUN_00fdc1f0();
    fVar2 = ((float10)(float)param_1[0x485] -
            (float10)local_74 * (float10)0.1 * (float10)(float)param_1[0x489]) * fVar2;
    param_1[0x485] = (int)(float)fVar2;
    if (fVar2 < (float10)0.7) {
      param_1[0x485] = (int)(float)(fVar2 - (float10)(float)param_1[0x25d] * (float10)local_74);
    }
    fVar2 = (float10)0.1 + (float10)(float)param_1[0x25d];
    param_1[0x25d] = (int)(float)fVar2;
    if ((float10)0.5 < fVar2) {
      param_1[0x25d] = (int)(float)(float10)0.5;
    }
  }
  else {
    local_74 = (float)param_1[0x485] -
               (float)param_1[0x22a] * (float)param_1[0x244] * (float)param_1[0x489];
    param_1[0x485] = (int)local_74;
    param_1[0x25d] = 0;
    if (local_74 < 0.0) {
      fStack_84 = 1.0755476e-38;
      fVar2 = (float10)FUN_00fdc1f0();
      param_1[0x485] = (int)(float)(fVar2 * (float10)local_74);
    }
  }
  if (param_1[0x1d9] != 0) {
    if (*(float *)(*(int *)(param_1[0x1d9] + 0xd0) + 4) < 0.0) {
      fStack_84 = 1.0755757e-38;
      iVar1 = FUN_008e2740();
      if (iVar1 != 0) {
        param_1[0x228] = 1;
        param_1[0x485] = 0;
        param_1[0x489] = 0x3f800000;
      }
    }
    fStack_84 = 1.0755816e-38;
    iVar1 = (**(code **)(*param_1 + 0x84))();
    fStack_84 = *(float *)(iVar1 + 4);
    puVar3 = auStack_50;
    D3DXMatrixRotationY(puVar3);
    D3DXVec3TransformNormal(&fStack_78,param_1 + 0x484,auStack_58);
    D3DXVec3TransformNormal(&fStack_84,&fStack_84,param_1 + 0x2c);
    fStack_78 = ((float)param_1[0x3a] + (float)puVar3) * (float)param_1[0x244];
    local_74 = (float)param_1[0x244] * fStack_84;
    FUN_008e0c00(&stack0xffffff80);
  }
  return;
}

// 00751F80  FUN_00751f80  size=36  [between]
undefined4 __fastcall FUN_00751f80(int param_1)

{
  if (((*(int *)(param_1 + 0x1784) != 0) && (*(int *)(param_1 + 0xf70) != 0)) &&
     (*(int *)(param_1 + 0xf74) == 0)) {
    return 1;
  }
  return 0;
}

// 00751FB0  FUN_00751fb0  size=148  [between]
void __thiscall FUN_00751fb0(int *param_1,int param_2)

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

// 00752050  FUN_00752050  size=134  [between]
undefined4 __thiscall FUN_00752050(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xf70);
  }
  if (*(int *)(param_1 + 0xf74) != 0) {
    *(undefined4 *)(param_1 + 0x13c0) = *(undefined4 *)(param_1 + 0xf90);
    *(undefined4 *)(param_1 + 0x13c4) = *(undefined4 *)(param_1 + 0xf94);
    *(undefined4 *)(param_1 + 0x13c8) = *(undefined4 *)(param_1 + 0xf98);
    *(undefined4 *)(param_1 + 0x13cc) = *(undefined4 *)(param_1 + 0xf9c);
    *(undefined4 *)(param_1 + 0x13d0) = *(undefined4 *)(param_1 + 0xf80);
    *(undefined4 *)(param_1 + 0x13d4) = *(undefined4 *)(param_1 + 0xf84);
    *(undefined4 *)(param_1 + 0x13d8) = *(undefined4 *)(param_1 + 0xf88);
    *(undefined4 *)(param_1 + 0x13dc) = *(undefined4 *)(param_1 + 0xf8c);
    return 1;
  }
  return 0;
}

// 007520E0  FUN_007520e0  size=123  [between]
undefined4 __fastcall FUN_007520e0(int param_1)

{
  if ((*(int *)(param_1 + 0xfa4) != 0) && (*(int *)(param_1 + 0xfd4) != 0)) {
    *(undefined4 *)(param_1 + 0x13c0) = *(undefined4 *)(param_1 + 0xff0);
    *(undefined4 *)(param_1 + 0x13c4) = *(undefined4 *)(param_1 + 0xff4);
    *(undefined4 *)(param_1 + 0x13c8) = *(undefined4 *)(param_1 + 0xff8);
    *(undefined4 *)(param_1 + 0x13cc) = *(undefined4 *)(param_1 + 0xffc);
    *(undefined4 *)(param_1 + 0x13d0) = *(undefined4 *)(param_1 + 0xfe0);
    *(undefined4 *)(param_1 + 0x13d4) = *(undefined4 *)(param_1 + 0xfe4);
    *(undefined4 *)(param_1 + 0x13d8) = *(undefined4 *)(param_1 + 0xfe8);
    *(undefined4 *)(param_1 + 0x13dc) = *(undefined4 *)(param_1 + 0xfec);
    return 1;
  }
  return 0;
}

// 00752160  FUN_00752160  size=114  [between]
undefined4 __fastcall FUN_00752160(int param_1)

{
  if (*(int *)(param_1 + 0x1004) != 0) {
    *(undefined4 *)(param_1 + 0x13c0) = *(undefined4 *)(param_1 + 0x1020);
    *(undefined4 *)(param_1 + 0x13c4) = *(undefined4 *)(param_1 + 0x1024);
    *(undefined4 *)(param_1 + 0x13c8) = *(undefined4 *)(param_1 + 0x1028);
    *(undefined4 *)(param_1 + 0x13cc) = *(undefined4 *)(param_1 + 0x102c);
    *(undefined4 *)(param_1 + 0x13d0) = *(undefined4 *)(param_1 + 0x1010);
    *(undefined4 *)(param_1 + 0x13d4) = *(undefined4 *)(param_1 + 0x1014);
    *(undefined4 *)(param_1 + 0x13d8) = *(undefined4 *)(param_1 + 0x1018);
    *(undefined4 *)(param_1 + 0x13dc) = *(undefined4 *)(param_1 + 0x101c);
    return 1;
  }
  return 0;
}

// 007522C0  FUN_007522c0  size=94  [between]
void __fastcall FUN_007522c0(int param_1)

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

// 00752340  FUN_00752340  size=116  [between]
undefined4 __thiscall FUN_00752340(int param_1,undefined4 param_2)

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

// 007523C0  FUN_007523c0  size=237  [between]
undefined4 FUN_007523c0(float *param_1,float *param_2,float *param_3,float param_4)

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

// 007524F0  Emc040::vf158  size=5  [class]
undefined4 Emc040::vf158(void)

{
  return 0;
}

// 00752540  FUN_00752540  size=72  [between]
void __fastcall FUN_00752540(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
  }
  else if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0075257a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00752590  FUN_00752590  size=72  [between]
void __fastcall FUN_00752590(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
  }
  else if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007525ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00752650  FUN_00752650  size=33  [between]
void __fastcall FUN_00752650(int param_1)

{
  int iVar1;
  
  if (1 < *(int *)(param_1 + 0x61c)) {
    iVar1 = FUN_00a8c760(0xb);
    if (iVar1 != 0) {
      FUN_00878ee0();
      return;
    }
  }
  return;
}

// 00752680  FUN_00752680  size=129  [between]
void __thiscall FUN_00752680(int param_1,int param_2)

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

// 00752710  FUN_00752710  size=101  [between]
void FUN_00752710(int param_1)

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

// 007527E0  FUN_007527e0  size=150  [between]
void __fastcall FUN_007527e0(int param_1)

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
    FUN_00752680(uVar2);
    return;
  }
  FUN_00752710(uVar2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00752680(uVar2);
  return;
}

// 00752880  FUN_00752880  size=150  [between]
void __fastcall FUN_00752880(int param_1)

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
    FUN_00752680(uVar2);
    return;
  }
  FUN_00752710(uVar2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00752680(uVar2);
  return;
}

// 00752980  FUN_00752980  size=74  [between]
uint FUN_00752980(float param_1)

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

// 007529D0  FUN_007529d0  size=115  [between]
void __fastcall FUN_007529d0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (((*(int *)(param_1 + 0x4a0) != 0x10) && ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
     (*(int *)(param_1 + 0x177c) == 0)) {
    if (*(int *)(param_1 + 0x4a0) != 5) {
      EmBaseDLC::vf364(0xffffffff);
      return;
    }
    iVar1 = FUN_00c2a5b0(param_1 + 0xab0);
    if (iVar1 != 0) {
      fVar2 = (float10)FUN_00dde300(0,0x3f800000);
      if (fVar2 < (float10)*(float *)(param_1 + 0x1390)) {
        FUN_00ac9650(0);
      }
    }
  }
  return;
}

// 00752B80  FUN_00752b80  size=225  [between]
void __fastcall FUN_00752b80(int *param_1)

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

// 00752C80  FUN_00752c80  size=684  [between]
void __fastcall FUN_00752c80(int *param_1)

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
    FUN_00751fb0(0);
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

// 00753020  FUN_00753020  size=32  [between]
void FUN_00753020(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 00753040  FUN_00753040  size=260  [between]
void __fastcall FUN_00753040(int param_1)

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
LAB_00753100:
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_00753105;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar3[1];
            bVar8 = bVar2 < pbVar5[1];
            if (bVar2 != pbVar5[1]) goto LAB_00753100;
            pbVar5 = pbVar5 + 2;
            pbVar3 = pbVar3 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_00753105:
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

// 00753150  FUN_00753150  size=130  [between]
void __fastcall FUN_00753150(int param_1)

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
LAB_007531a5:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_007531aa;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar4[1];
        bVar9 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_007531a5;
        pcVar4 = pcVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_007531aa:
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

// 00753490  FUN_00753490  size=134  [between]
void __thiscall FUN_00753490(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (*param_3 - *(float *)(param_1 + 0x1660)) * *(float *)(param_1 + 0x1650) +
          *(float *)(param_1 + 0x1654) * (param_3[1] - *(float *)(param_1 + 0x1664)) +
          *(float *)(param_1 + 0x1658) * (param_3[2] - *(float *)(param_1 + 0x1668));
  fVar1 = *(float *)(param_1 + 0x1654);
  fVar2 = *(float *)(param_1 + 0x1658);
  fVar3 = *(float *)(param_1 + 0x165c);
  *param_2 = fVar4 * *(float *)(param_1 + 0x1650) + *(float *)(param_1 + 0x1660);
  param_2[1] = fVar1 * fVar4 + *(float *)(param_1 + 0x1664);
  param_2[2] = fVar2 * fVar4 + *(float *)(param_1 + 0x1668);
  param_2[3] = fVar3 * fVar4 + *(float *)(param_1 + 0x166c);
  return;
}

// 007535E0  FUN_007535e0  size=38  [between]
void __fastcall FUN_007535e0(int param_1)

{
  if ((*(int *)(param_1 + 0x7b0) != 0) && (*(int *)(param_1 + 0xf14) != 0)) {
    FUN_008f7700(param_1);
    switchD_0080dbae::default();
    return;
  }
  return;
}

// 00753610  FUN_00753610  size=47  [between]
void __fastcall FUN_00753610(int param_1)

{
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a92a00();
  FUN_00a92ef0();
  return;
}

// 00753670  FUN_00753670  size=66  [between]
void FUN_00753670(void)

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

// 007536D0  FUN_007536d0  size=94  [between]
void __fastcall FUN_007536d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xf18) != 0) {
      FUN_00a9e290(&DAT_01647974,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    FUN_00a9e290(&DAT_0164796c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 00753740  FUN_00753740  size=136  [between]
void __fastcall FUN_00753740(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xf18) != 0) {
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

// 007537F0  FUN_007537f0  size=75  [between]
void __fastcall FUN_007537f0(int param_1)

{
  FUN_00a9e060(0);
  FUN_00a805f0();
  *(undefined4 *)(param_1 + 0xf24) = 0;
  if (*(int *)(param_1 + 0xf1c) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xf1c));
    *(undefined4 *)(param_1 + 0xf1c) = 0;
  }
  FUN_00a944d0();
  FUN_00a92ef0();
  return;
}

// 00753870  FUN_00753870  size=327  [between]
void __fastcall FUN_00753870(int param_1)

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

// 00753A40  FUN_00753a40  size=43  [between]
void FUN_00753a40(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x9f) {
    FUN_00a8cac0();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00753AA0  FUN_00753aa0  size=443  [between]
void __fastcall FUN_00753aa0(int param_1)

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
LAB_00753af0:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00753af5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar8 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00753af0;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00753af5:
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
LAB_00753b60:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00753b65;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar8 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00753b60;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00753b65:
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
LAB_00753bd0:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00753bd5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar8 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00753bd0;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00753bd5:
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
LAB_00753c40:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00753c45;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar8 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00753c40;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00753c45:
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

// 00753C70  FUN_00753c70  size=334  [between]
void __fastcall FUN_00753c70(int param_1)

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
LAB_00753cc0:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00753cc5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar9 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00753cc0;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00753cc5:
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
LAB_00753d30:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00753d35;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar9 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_00753d30;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00753d35:
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
LAB_00753da0:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00753da5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar9 = bVar2 < (byte)pcVar5[1];
          if (bVar2 != pcVar5[1]) goto LAB_00753da0;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00753da5:
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

// 00753E30  Emc040::vf294  size=1  [class]
void Emc040::vf294(void)

{
  return;
}

// 00753E40  Emc040::vf298  size=1  [class]
void Emc040::vf298(void)

{
  return;
}

// 00753E50  Emc040::vf29C  size=1  [class]
void Emc040::vf29C(void)

{
  return;
}

// 00753E60  Emc040::vf2A0  size=1  [class]
void Emc040::vf2A0(void)

{
  return;
}

// 00753E70  Emc040::vf2A4  size=1  [class]
void Emc040::vf2A4(void)

{
  return;
}

// 00753E80  Emc040::vf2A8  size=1  [class]
void Emc040::vf2A8(void)

{
  return;
}

// 00753E90  Emc040::vf2AC  size=1  [class]
void Emc040::vf2AC(void)

{
  return;
}

// 00753EA0  Emc040::vf2B0  size=1  [class]
void Emc040::vf2B0(void)

{
  return;
}

// 00753EB0  Emc040::vf2B4  size=1  [class]
void Emc040::vf2B4(void)

{
  return;
}

// 00753EC0  Emc040::vf2B8  size=1  [class]
void Emc040::vf2B8(void)

{
  return;
}

// 00753ED0  Emc040::vf2BC  size=1  [class]
void Emc040::vf2BC(void)

{
  return;
}

// 00753EE0  Emc040::vf2C0  size=1  [class]
void Emc040::vf2C0(void)

{
  return;
}

// 00753EF0  Emc040::vf2C4  size=1  [class]
void Emc040::vf2C4(void)

{
  return;
}

// 00753F00  Emc040::vf2C8  size=1  [class]
void Emc040::vf2C8(void)

{
  return;
}

// 00753F10  Emc040::vf2CC  size=1  [class]
void Emc040::vf2CC(void)

{
  return;
}

// 00753F20  Emc040::vf2D0  size=1  [class]
void Emc040::vf2D0(void)

{
  return;
}

// 00754310  FUN_00754310  size=72  [between]
void __fastcall FUN_00754310(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00754356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00754360  FUN_00754360  size=59  [between]
void __thiscall FUN_00754360(int param_1,float param_2)

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

// 00754430  FUN_00754430  size=89  [between]
void __fastcall FUN_00754430(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00c19c90(DAT_01d5bad4,(int)*(short *)(param_1 + 0xab2),0x2c060);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a7c8a0();
    uVar2 = FUN_009f8b40();
    FUN_008e26e0(uVar2);
  }
  return;
}

// 00754570  FUN_00754570  size=42  [between]
uint FUN_00754570(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b357f0;
  (**(code **)(*param_1 + 4))(&DAT_01b357f0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 007545A0  FUN_007545a0  size=42  [between]
uint FUN_007545a0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34c60;
  (**(code **)(*param_1 + 4))(&DAT_01b34c60);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00754CD0  Emc040::vf118  size=68  [class]
void __thiscall Emc040::vf118(int param_1,undefined4 param_2)

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

// 00754D20  Emc040::thunk_vf34  size=5  [class]
void __fastcall Emc040::thunk_vf34(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
  }
  return;
}

// 00754D30  Emc040::vf110  size=126  [class]
void __thiscall Emc040::vf110(int param_1,int param_2)

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
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x10000000;
    return;
  }
  *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xefffffff;
  return;
}

// 00754DB0  Emc040::vf1D0  size=56  [class]
void __thiscall Emc040::vf1D0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4a0);
  if (((iVar1 == 6) || (iVar1 == 7)) || (iVar1 == 10)) {
    if (*(int *)(param_1 + 0xf00) != 0) {
      *(undefined4 *)(param_1 + 0xf04) = 1;
    }
    FUN_00a8e5d0(param_1,param_2,0);
  }
  return;
}

// 00754E10  FUN_00754e10  size=225  [between]
void __fastcall FUN_00754e10(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 0:
    uVar3 = 0x30020;
    pcVar2 = "Emc040_Smg";
    break;
  case 1:
    uVar3 = 0x30010;
    pcVar2 = "Emc040_HandGun";
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x1208) = 1;
    return;
  case 3:
  case 5:
  case 0x10:
  case 0x11:
  case 0x12:
    *(undefined4 *)(param_1 + 0x1208) = 2;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x1208) = 3;
    FUN_00754430();
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
    goto switchD_00754e2a_default;
  default:
    return;
  }
  iVar1 = FUN_00a82090(pcVar2,uVar3,0);
  *(undefined4 *)(param_1 + 0x1208) = 0;
  FUN_00aa4080(0x35,1,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
  if (iVar1 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x701,0xffffffff,1);
  }
switchD_00754e2a_default:
  return;
}

// 00754F20  FUN_00754f20  size=563  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00754f20(int *param_1)

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
  pfVar2 = (float *)(param_1 + 0x4f0);
  D3DXVec3TransformNormal(pfVar2,local_30,piVar1);
  *pfVar2 = *pfVar2 + (float)param_1[0x38];
  param_1[0x4f1] = (int)((float)param_1[0x39] + (float)param_1[0x4f1]);
  param_1[0x4f2] = (int)((float)param_1[0x3a] + (float)param_1[0x4f2]);
  fVar7 = (float10)fcos((float10)0.7853981852531433);
  if (fVar7 < (float10)(float)param_1[0x4f1] * (float10)unaff_EBX +
              (float10)*pfVar2 * (float10)unaff_ESI +
              (float10)(float)param_1[0x4f2] * (float10)fStack_34) {
    *pfVar2 = unaff_ESI;
    param_1[0x4f1] = (int)unaff_EBX;
    param_1[0x4f2] = (int)fStack_34;
    param_1[0x4f3] = (int)local_30[0];
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
  local_30[0] = local_30[0] - (float)param_1[0x4f3];
  if (0.001 < SQRT((unaff_EBX - (float)param_1[0x4f1]) * (unaff_EBX - (float)param_1[0x4f1]) +
                   (unaff_ESI - *pfVar2) * (unaff_ESI - *pfVar2) +
                   (fStack_34 - (float)param_1[0x4f2]) * (fStack_34 - (float)param_1[0x4f2]))) {
    param_1[0x47d] = param_1[0x47d] | 1;
    param_1[0x4ec] = 0x3f800000;
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
    if (0.0 < (float)param_1[0x4f2] * 0.0 + (float)param_1[0x4f1] * 0.0 + *pfVar2) {
      fVar8 = -1.0;
      fVar4 = 1.0;
    }
    fVar5 = *pfVar2 * fVar4;
    fVar6 = (float)param_1[0x4f1] * fVar4;
    fVar4 = (float)param_1[0x4f2] * fVar4;
    fVar7 = (float10)FUN_00ddbb50(((fVar6 + fVar5) * 0.0 + fVar4) /
                                  (SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) * 1.0));
    if (fVar8 < 0.0) {
      fVar7 = fVar7 - (float10)3.1415927;
    }
    param_1[0x4ea] = (int)(float)fVar7;
    param_1[0x25] = (int)(float)fVar7;
  }
  return;
}

// 00755160  FUN_00755160  size=187  [between]
void __fastcall FUN_00755160(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x754) != 0) {
    uVar1 = FUN_007513c0(0x13);
    *(undefined4 *)(param_1 + 0x1678) = uVar1;
    uVar1 = FUN_007513c0(0x14);
    *(undefined4 *)(param_1 + 0x167c) = uVar1;
    fVar2 = (float10)FUN_00751350(0x12);
    *(float *)(param_1 + 0x1680) = (float)fVar2;
    fVar2 = (float10)FUN_00751350(0x10);
    *(float *)(param_1 + 0x1684) = (float)fVar2;
    fVar2 = (float10)FUN_00751350(0x11);
    *(float *)(param_1 + 0x1688) = (float)fVar2;
    fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x16);
    *(float *)(param_1 + 0x1694) = (float)fVar2;
    fVar2 = (float10)FUN_00751350(0x17);
    *(float *)(param_1 + 0x1390) = (float)fVar2;
    fVar2 = (float10)FUN_00751350(0x18);
    *(float *)(param_1 + 0x1394) = (float)fVar2;
    fVar2 = (float10)FUN_00751350(0x19);
    *(float *)(param_1 + 0x1698) = (float)fVar2;
    fVar2 = (float10)FUN_00751350(0x1a);
    *(float *)(param_1 + 0x1630) = (float)fVar2;
    fVar2 = (float10)FUN_00751350(0x1b);
    *(float *)(param_1 + 0x13a4) = (float)fVar2;
  }
  return;
}

// 00755220  Emc040::vf1A0  size=267  [class]
undefined4 __thiscall Emc040::vf1A0(int *param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)FUN_00a7c8a0();
  if (*param_2 != 0xda) {
    return 0;
  }
  fVar1 = (float)param_1[0x5dd];
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
    param_1[0x48a] = iVar3;
    if (iVar3 != -1) {
      iVar3 = FUN_00c15910(iVar3);
      param_1[0x476] = iVar3;
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      (**(code **)(*piVar2 + 0x150))(0x2a,param_1[0x13c]);
      FUN_00c27d60(0x2a,param_1[0x13c]);
      if (param_1[0x461] == -1) {
        param_1[0x461] = 0x26;
      }
      param_1[0x47d] = param_1[0x47d] | 0x800;
      (**(code **)(*param_1 + 0x220))(0x40a00000);
    }
  }
  return 1;
}

// 00755330  Emc040::getAttackInfo  size=530  [class]
undefined4 __thiscall Emc040::getAttackInfo(int param_1,ushort *param_2)

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
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_016479b0);
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
    break;
  default:
    goto switchD_00755409_caseD_5;
  case 6:
    *puVar1 = 0xd8;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x40000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    goto switchD_00755409_caseD_5;
  case 8:
    *puVar1 = 0xda;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1800;
    break;
  case 0xc:
    *puVar1 = 0xde;
    *(undefined1 *)((int)puVar1 + 0x11) = 0;
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    goto switchD_00755409_caseD_5;
  case 0xe:
    *puVar1 = 0xdf;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    goto switchD_00755409_caseD_5;
  case 0x10:
    *puVar1 = 0xe0;
    puVar1[0x23] = puVar1[0x23] | 0x40000;
    goto switchD_00755409_caseD_5;
  case 0x12:
    *puVar1 = 0xdb;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1801;
    break;
  case 0x14:
    *puVar1 = 0xdc;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1801;
    break;
  case 0x16:
    *puVar1 = 0xdd;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1801;
  }
  *(undefined1 *)((int)puVar1 + 0x11) = 5;
switchD_00755409_caseD_5:
  FUN_00aa56a0(puVar1);
  return unaff_EBX;
}

// 00755580  FUN_00755580  size=77  [between]
undefined4 __fastcall FUN_00755580(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9c38;
    (**(code **)(*piVar1 + 4))(&DAT_01be9c38);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      iVar2 = FUN_00a8cab0();
      if ((iVar2 != 0x10006b) && (iVar2 = (**(code **)(*piVar1 + 0x354))(), iVar2 == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

// 007555D0  FUN_007555d0  size=395  [between]
void __thiscall FUN_007555d0(int *param_1,float param_2)

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
     ((((param_1[0x47d] & 1U) == 0 || ((param_1[0x47d] & 2U) == 0)) ||
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

// 00755760  FUN_00755760  size=330  [between]
void __thiscall FUN_00755760(int *param_1,float *param_2,float param_3)

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

// 007558B0  FUN_007558b0  size=242  [between]
void __fastcall FUN_007558b0(int *param_1)

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
         (fVar1 = (float)param_1[0x469], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = param_1[0x46c];
        local_1c = param_1[0x46d];
        local_18 = param_1[0x46e];
        local_14 = param_1[0x46f];
        FUN_00755760(&local_20,0x3da3d70a);
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

// 007559B0  FUN_007559b0  size=242  [between]
void __fastcall FUN_007559b0(int *param_1)

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
         (fVar1 = (float)param_1[0x469], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = param_1[0x46c];
        local_1c = param_1[0x46d];
        local_18 = param_1[0x46e];
        local_14 = param_1[0x46f];
        FUN_00755760(&local_20,0x3da3d70a);
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

// 00755AB0  FUN_00755ab0  size=195  [between]
void __fastcall FUN_00755ab0(int *param_1)

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
    local_20 = param_1[0x46c];
    local_1c = param_1[0x46d];
    local_18 = param_1[0x46e];
    local_14 = param_1[0x46f];
    FUN_00755760(&local_20,0x3dcccccd);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00755B80  FUN_00755b80  size=195  [between]
void __fastcall FUN_00755b80(int *param_1)

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
    local_20 = param_1[0x46c];
    local_1c = param_1[0x46d];
    local_18 = param_1[0x46e];
    local_14 = param_1[0x46f];
    FUN_00755760(&local_20,0x3dcccccd);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00755C50  FUN_00755c50  size=234  [between]
void __fastcall FUN_00755c50(int *param_1)

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
         (fVar1 = (float)param_1[0x469], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = param_1[0x46c];
        local_1c = param_1[0x46d];
        local_18 = param_1[0x46e];
        local_14 = param_1[0x46f];
        FUN_00755760(&local_20,0x3da3d70a);
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

// 00755D40  FUN_00755d40  size=419  [between]
void __fastcall FUN_00755d40(int param_1)

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
      local_20 = *(float *)(iVar2 + 0x40) - *(float *)(param_1 + 0x11b0);
      local_1c = *(float *)(iVar2 + 0x44) - *(float *)(param_1 + 0x11b4);
      local_18 = *(float *)(iVar2 + 0x48) - *(float *)(param_1 + 0x11b8);
      local_14 = *(float *)(iVar2 + 0x4c) - *(float *)(param_1 + 0x11bc);
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

// 00755EF0  FUN_00755ef0  size=205  [between]
void __fastcall FUN_00755ef0(int param_1)

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
         (fVar1 = *(float *)(param_1 + 0x11a4), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = *(undefined4 *)(param_1 + 0x11b0);
        local_1c = *(undefined4 *)(param_1 + 0x11b4);
        local_18 = *(undefined4 *)(param_1 + 0x11b8);
        local_14 = *(undefined4 *)(param_1 + 0x11bc);
        FUN_00755760(&local_20,0x3d75c28f);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00755FC0  FUN_00755fc0  size=205  [between]
void __fastcall FUN_00755fc0(int param_1)

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
         (fVar1 = *(float *)(param_1 + 0x11a4), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = *(undefined4 *)(param_1 + 0x11b0);
        local_1c = *(undefined4 *)(param_1 + 0x11b4);
        local_18 = *(undefined4 *)(param_1 + 0x11b8);
        local_14 = *(undefined4 *)(param_1 + 0x11bc);
        FUN_00755760(&local_20,0x3d75c28f);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00756090  FUN_00756090  size=205  [between]
void __fastcall FUN_00756090(int param_1)

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
         (fVar1 = *(float *)(param_1 + 0x11a4), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = *(undefined4 *)(param_1 + 0x11b0);
        local_1c = *(undefined4 *)(param_1 + 0x11b4);
        local_18 = *(undefined4 *)(param_1 + 0x11b8);
        local_14 = *(undefined4 *)(param_1 + 0x11bc);
        FUN_00755760(&local_20,0x3d75c28f);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00756160  FUN_00756160  size=911  [between]
void __fastcall FUN_00756160(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x007561a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00a5dcc0(iVar1);
    FUN_00aa4080(0x1a,0,0x3ecccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_00751fb0(0);
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
                    /* WARNING: Could not recover jumptable at 0x007564ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_0075617b_default;
  }
  FUN_00aa4080(0x1c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = 4;
switchD_0075617b_default:
  return;
}

// 007566B0  FUN_007566b0  size=338  [between]
void __fastcall FUN_007566b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *local_8 [2];
  
  if ((param_1[0x4e7] == 0) || (iVar1 = FUN_00a81330(), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    uVar2 = (int)(short)param_1[0x2ad] & 1;
    local_8[0] = &DAT_01645724;
    local_8[1] = &DAT_01645740;
    if (param_1[0x482] == 0) {
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
    param_1[0x5d8] = *(int *)(iVar1 + 0x50);
    param_1[0x5d9] = *(int *)(iVar1 + 0x54);
    param_1[0x5da] = *(int *)(iVar1 + 0x58);
    param_1[0x5db] = *(int *)(iVar1 + 0x5c);
    param_1[0x5d9] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e0d30(param_1 + 0x5d8);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x250] != 0) && (iVar1 = FUN_00a94ce0(0), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00756800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00756810  FUN_00756810  size=514  [between]
undefined4 __thiscall FUN_00756810(int *param_1,int *param_2,int param_3,int param_4)

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
    FUN_00751fb0(0);
    FUN_00aa4120(0x1a,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *param_2 = *param_2 + 1;
    param_1[0x485] = param_3;
    param_1[0x484] = 0;
    param_1[0x486] = param_4;
    return 0;
  case 1:
    iVar3 = FUN_00a94db0(0x1a);
    if (iVar3 == 0) goto LAB_007568d2;
    uVar5 = 0x8000000;
    uVar4 = 0x1b;
    break;
  case 2:
    iVar3 = FUN_00a94db0(0x1b);
    if (iVar3 == 0) goto LAB_007568d2;
    uVar5 = 0;
    uVar4 = 0x1d;
    break;
  case 3:
    pcVar1 = *(code **)(*param_1 + 800);
    param_1[0x225] = param_1[0x485];
    iVar3 = (*pcVar1)(0x3d888889);
    if (iVar3 == 0) {
      bVar2 = true;
    }
    else {
      FUN_00aa4120(0x1c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if ((*(byte *)(param_1 + 0x47d) & 1) == 0) {
        FUN_00751fb0(1);
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
    FUN_00751d80();
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
LAB_007568d2:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00751d80();
  return 0;
}

// 00756A30  FUN_00756a30  size=474  [between]
int __thiscall FUN_00756a30(int param_1,int param_2)

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
  
  if (((((*(uint *)(param_1 + 0x11f4) & 0x200) == 0) && (*(float *)(param_1 + 0x11a4) <= 12.25)) &&
      (iVar2 = *(int *)(param_1 + 0xa84), iVar2 != 0)) && (*(int *)(iVar2 + 0xb78) != 0)) {
    uVar9 = 0;
    FUN_00a92f90(0);
    fVar8 = (float10)FUN_00407b40(uVar9);
    if (fVar8 <= (float10)0.4) {
      *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x200;
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
          fVar1 = *(float *)(param_1 + 0x11a4);
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

// 00756C60  FUN_00756c60  size=35  [between]
void __thiscall FUN_00756c60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x13e4);
  *(undefined4 *)(param_1 + 0x13e4) = param_2;
  *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
  return;
}

// 00756C90  FUN_00756c90  size=44  [between]
undefined4 __fastcall FUN_00756c90(int param_1)

{
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x11f4))) &&
      (*(int *)(param_1 + 0x1750) == 0)) && ((*(uint *)(param_1 + 0x11f4) & 0x20000000) == 0)) {
    return 1;
  }
  return 0;
}

// 00756CC0  FUN_00756cc0  size=190  [between]
void __fastcall FUN_00756cc0(int *param_1)

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

// 00756D80  FUN_00756d80  size=125  [between]
void __fastcall FUN_00756d80(int param_1)

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
  local_38 = 0x2c040;
  local_30 = 2;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 00756E50  FUN_00756e50  size=328  [between]
float10 __thiscall FUN_00756e50(int param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*(byte *)(param_1 + 0x11f4) & 1) == 0) {
    return (float10)0;
  }
  fVar2 = (float10)0;
  fVar3 = (float10)*(float *)(param_1 + 0x13c4) * fVar2;
  fVar1 = fVar3 - (float10)*(float *)(param_1 + 0x13c8);
  local_20 = (float)fVar1;
  fVar4 = (float10)*(float *)(param_1 + 0x13c8) * fVar2 -
          (float10)*(float *)(param_1 + 0x13c0) * fVar2;
  local_1c = (float)fVar4;
  fVar3 = (float10)*(float *)(param_1 + 0x13c0) - fVar3;
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

// 00756FA0  FUN_00756fa0  size=47  [between]
void __fastcall FUN_00756fa0(int param_1)

{
  if ((*(byte *)(param_1 + 0x11f7) & 1) != 0) {
    FUN_00a8c9b0(0,0x37,0x3f800000,0);
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xfeffffff;
  }
  return;
}

// 00756FD0  FUN_00756fd0  size=84  [between]
void __fastcall FUN_00756fd0(int param_1)

{
  if ((*(uint *)(param_1 + 0x11f4) & 0x4000000) != 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    if ((*(byte *)(param_1 + 0xb00) & 8) != 0) {
      FUN_00a8c9b0(0,0x12,0x3f800000,0);
    }
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xfbffffff;
  }
  return;
}

// 00757030  FUN_00757030  size=1077  [between]
void __fastcall FUN_00757030(int param_1)

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
  switch(*(undefined4 *)(param_1 + 0x10c0)) {
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
    if ((*(byte *)(param_1 + 0x11f4) & 1) == 0) {
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
    goto LAB_0075716b;
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
LAB_0075716b:
    local_16c = pfVar2[1] + local_16c;
    local_168 = pfVar2[2] + local_168;
    local_164 = pfVar2[3] + local_164;
    local_160 = local_160 - local_170;
    local_15c = local_15c - local_16c;
    local_158 = local_158 - local_168;
    local_154 = local_154 - local_164;
    goto switchD_00757051_default;
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
    goto LAB_007570a7;
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
    goto switchD_00757051_default;
  }
  pfVar2 = (float *)FUN_00a8b8a0(puVar5,uVar6);
LAB_007570a7:
  local_160 = *pfVar2;
  local_15c = pfVar2[1];
  local_158 = pfVar2[2];
  local_154 = pfVar2[3];
switchD_00757051_default:
  iVar3 = FUN_009f8b40();
  local_130 = local_170;
  local_10c = iVar3 << 0x10 | 7;
  local_12c = local_16c;
  local_128 = local_168;
  local_140[0] = param_1 + 0x10c4;
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

// 007574C0  FUN_007574c0  size=283  [between]
void __fastcall FUN_007574c0(int param_1)

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
    local_60[0] = param_1 + 0x1204;
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

// 007575E0  FUN_007575e0  size=51  [between]
void __fastcall FUN_007575e0(undefined4 param_1)

{
  int *piVar1;
  
  FUN_00e5e0c0("em0040_vo_separate",param_1,0xffffffff,0);
  FUN_00c81b30(0x4f);
  piVar1 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar1 + 0x44))(0xb,0);
  return;
}

// 00757620  FUN_00757620  size=1026  [between]
void __thiscall FUN_00757620(int param_1,undefined4 *param_2,float *param_3,int param_4)

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
    *(float *)(param_1 + 0x13a8) = (float)fVar5;
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
  *(undefined4 *)(param_1 + 0x13a8) = 0;
  return;
}

// 00757A30  FUN_00757a30  size=73  [between]
void __fastcall FUN_00757a30(int *param_1)

{
  if ((*(byte *)(param_1 + 0x47d) & 1) != 0) {
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x47d] = param_1[0x47d] & 0xfffffffe;
    param_1[0x4ec] = 0;
  }
  return;
}

// 00757A80  FUN_00757a80  size=469  [between]
void __fastcall FUN_00757a80(int *param_1)

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
  
  if ((*(byte *)(param_1 + 0x47d) & 1) == 0) {
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
    param_1[0x4ec] = 0x3f800000;
    return;
  }
  if (param_1[0x1d9] != 0) {
    (**(code **)(*param_1 + 0x314))();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
  }
  param_1[0x47d] = param_1[0x47d] & 0xfffffffe;
  local_20 = 0;
  local_1c = 0x3f800000;
  param_1[0x4ec] = 0x3f800000;
  local_18 = 0;
  fVar1 = (float)param_1[0x4ea];
  FUN_00757620(param_1 + 0x2c,&local_20,0);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
  uStack_30 = *puVar2;
  fStack_2c = (float)puVar2[1];
  uStack_28 = puVar2[2];
  uStack_24 = puVar2[3];
  fVar3 = (float10)FUN_00ddba30((fVar1 - (float)param_1[0x4ea]) + (float)param_1[0x4eb]);
  param_1[0x4eb] = (int)(float)fVar3;
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 + (float10)fStack_2c));
  fStack_2c = (float)fVar3;
  (**(code **)(*param_1 + 0x88))(&uStack_30);
  D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
  return;
}

// 00757C60  FUN_00757c60  size=429  [between]
void __fastcall FUN_00757c60(int *param_1)

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
  
  if ((float)param_1[0x4ec] < 1.0) {
    fVar1 = (float)param_1[0x4ec] + 0.025;
    param_1[0x4ec] = (int)fVar1;
    local_30 = 0.0;
    local_28 = 0.0;
    local_2c = 1.0;
    if (NAN(fVar1) || 1.0 < fVar1 == (fVar1 == 1.0)) {
      iVar2 = FUN_007523c0(&local_30,param_1 + 0x4f0,&local_30,fVar1);
      if (iVar2 == 0) {
        param_1[0x4ec] = 0x3f800000;
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
      param_1[0x4ec] = 0x3f800000;
    }
    fVar1 = (float)param_1[0x4ea];
    FUN_00757620(param_1 + 0x2c,&local_30,0);
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
    uStack_20 = *puVar3;
    fStack_1c = (float)puVar3[1];
    uStack_18 = puVar3[2];
    uStack_14 = puVar3[3];
    fVar4 = (float10)FUN_00ddba30((fVar1 - (float)param_1[0x4ea]) + (float)param_1[0x4eb]);
    param_1[0x4eb] = (int)(float)fVar4;
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 + (float10)fStack_1c));
    fStack_1c = (float)fVar4;
    (**(code **)(*param_1 + 0x88))(&uStack_20);
    D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
    return;
  }
  return;
}

// 00757E40  FUN_00757e40  size=177  [between]
void __thiscall FUN_00757e40(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_2 == 0) {
    param_1[0x47d] = param_1[0x47d] & 0xfffffffe;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
  }
  else {
    param_1[0x47d] = param_1[0x47d] | 1;
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

// 00757F00  Emc040::vf14C  size=188  [class]
bool __thiscall Emc040::vf14C(int param_1,int param_2)

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
  if ((((*(uint *)(param_1 + 0x11f4) & 0x20000) == 0) && (*(int *)(param_1 + 0x4e4) == 0)) &&
     (0x52 < param_2)) {
    if (param_2 < 0x56) {
      iVar1 = FUN_00a8cab0();
      if (((iVar1 != 0x8b) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x7c)) &&
         (iVar1 = FUN_00a8cab0(), iVar1 != 0x7d)) {
        return *(int *)(param_1 + 0x1208) == 2;
      }
    }
    else if ((param_2 == 0x56) && (*(int *)(param_1 + 0x618) == 0x7b)) {
      return true;
    }
  }
  return false;
}

// 00757FC0  FUN_00757fc0  size=290  [between]
void __fastcall FUN_00757fc0(int *param_1)

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
    FUN_00756cc0();
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
      FUN_007515a0(param_1[0x2a1] + 0x40,uVar1,uVar2);
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
                    /* WARNING: Could not recover jumptable at 0x0075809d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00758120  FUN_00758120  size=106  [between]
void __fastcall FUN_00758120(int *param_1)

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
    FUN_00752710(uVar2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0075817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 007581A0  FUN_007581a0  size=432  [between]
void __fastcall FUN_007581a0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[0x187] == 0) {
    param_1[0x47d] = param_1[0x47d] | 0x20000;
    param_1[0x47d] = param_1[0x47d] & 0xffffffbf;
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
    FUN_00756cc0();
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
      FUN_007515a0(param_1[0x2a1] + 0x40,uVar2,uVar3);
      param_1[0x250] = param_1[0x250] + 1;
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      iVar4 = FUN_00a92f90();
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 4;
      }
                    /* WARNING: Could not recover jumptable at 0x007582b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00758350  FUN_00758350  size=656  [between]
void __fastcall FUN_00758350(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1[0x187] == 0) {
    param_1[0x47d] = param_1[0x47d] | 0x20000;
    FUN_00757a30();
    param_1[0x4f9] = 0;
    param_1[0x4fa] = -1;
    param_1[0x47d] = param_1[0x47d] | 0x100;
    param_1[0x47d] = param_1[0x47d] & 0xffdfffff;
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
    FUN_00ddba00(param_1 + 0x464,param_1 + 0x2c);
    param_1[0x489] = 0x3f000000;
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
      D3DXQuaternionSlerp(&local_20,param_1 + 0x464,&local_20,fVar1);
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
      param_1[0x4ec] = 0x3f800000;
      param_1[0x248] = 0x3f800000;
    }
  }
  iVar2 = FUN_00756810(param_1 + 0x188,0x3e3851ec,0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 007585F0  FUN_007585f0  size=1070  [between]
void __fastcall FUN_007585f0(int *param_1)

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
    param_1[0x47d] = param_1[0x47d] | 0x20000;
    param_1[0x47d] = param_1[0x47d] & 0xffffffbf;
    FUN_00aa4120(0x57,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 != 0) {
      *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffffb;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    FUN_00757a30();
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
    FUN_00ddba00(param_1 + 0x464,param_1 + 0x2c);
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
        D3DXQuaternionSlerp(&local_30,param_1 + 0x464,&local_30,fVar1);
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
        param_1[0x4ec] = 0x3f800000;
        param_1[0x249] = 0x3f800000;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      FUN_00756cc0();
    }
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_007515a0(param_1[0x2a1] + 0x40,0x3e19999a,0x3c8efa35);
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
        param_1[0x4ec] = 0x3f800000;
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

// 00758A30  FUN_00758a30  size=516  [between]
void __fastcall FUN_00758a30(int *param_1)

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
  FUN_007515a0(param_1[0x2a1] + 0x40,0x3df5c28f,0x3d8efa35);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x250] == 0) && (iVar4 = FUN_00a12210(0), iVar4 != 0)) {
    param_1[0x5d8] = *(int *)(iVar4 + 0x50);
    param_1[0x5d9] = *(int *)(iVar4 + 0x54);
    param_1[0x5da] = *(int *)(iVar4 + 0x58);
    param_1[0x5db] = *(int *)(iVar4 + 0x5c);
    param_1[0x5d9] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e0d30(param_1 + 0x5d8);
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
  param_1[0x5d8] = 0;
  param_1[0x5d9] = 0;
  param_1[0x5da] = 0;
  param_1[0x5db] = 0;
  if ((param_1[0x1d9] != 0) && (param_1[0x250] == 0)) {
    FUN_008e0d30(param_1 + 0x5d8);
  }
                    /* WARNING: Could not recover jumptable at 0x00758c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00758C40  FUN_00758c40  size=188  [between]
void __fastcall FUN_00758c40(int *param_1)

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
      FUN_007515a0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3c8efa35);
    }
    FUN_00756cc0();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00758cba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00758D10  FUN_00758d10  size=871  [between]
void __fastcall FUN_00758d10(int *param_1)

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
      puVar8 = &DAT_01b357f0;
      (**(code **)(*piVar5 + 4))(&DAT_01b357f0);
      iVar4 = FUN_00dd6d80(puVar8);
      iVar3 = 3;
      if (iVar4 != 0) {
        local_28 = piVar5[0x59e];
        iVar3 = piVar5[0x59f];
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
    goto LAB_00758dbe;
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
LAB_00758dbe:
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00759080  FUN_00759080  size=75  [between]
void __fastcall FUN_00759080(int param_1)

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
  *(undefined4 *)(param_1 + 0x1220) = 0x44160000;
  *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x20;
  return;
}

// 007590D0  FUN_007590d0  size=38  [between]
void __fastcall FUN_007590d0(int param_1)

{
  FUN_009f8b10();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x654) = 0xffffffff;
  *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffffffdf;
  return;
}

// 00759100  FUN_00759100  size=87  [between]
void __fastcall FUN_00759100(int *param_1)

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
    param_1[0x47d] = param_1[0x47d] & 0xffffffdf;
                    /* WARNING: Could not recover jumptable at 0x00759152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00759160  FUN_00759160  size=216  [between]
void __fastcall FUN_00759160(int *param_1)

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
    FUN_00752680(uVar2);
    return;
  }
  FUN_00752710(uVar2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_009f8b10();
    FUN_00a7c950();
    param_1[0x195] = -1;
    param_1[0x47d] = param_1[0x47d] & 0xffffffdf;
  }
  FUN_00752680(uVar2);
  return;
}

// 00759240  FUN_00759240  size=198  [between]
undefined4 __thiscall FUN_00759240(int param_1,int param_2)

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
LAB_007592bf:
      if (*(int *)(param_2 + 0xec) == 0) {
        FUN_00acf110(param_2,0,0x3e4ccccd);
      }
      *(undefined4 *)(param_1 + 0x1774) = 0x41700000;
      FUN_00ac8d00(param_1,param_2,0);
      FUN_00a9ba90(param_2);
      return 1;
    }
    if (*(int *)(param_2 + 0x94) != 0) {
      iVar3 = FUN_00ac82f0();
      if (iVar3 != 0) {
        iVar3 = FUN_00ac8350();
        if (iVar3 != 0) {
          iVar3 = FUN_00ac8ca0(param_2);
          if (iVar3 != 0) goto LAB_007592bf;
        }
      }
      if ((*(int *)(param_2 + 0x94) != 0) && (bVar2)) goto LAB_007592bf;
    }
  }
  return 0;
}

// 00759310  FUN_00759310  size=135  [between]
undefined4 __thiscall FUN_00759310(int *param_1,int *param_2,undefined4 *param_3)

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

// 007593A0  FUN_007593a0  size=70  [between]
void __fastcall FUN_007593a0(int *param_1)

{
  (**(code **)(*param_1 + 200))(1);
  if (param_1[0x1d9] != 0) {
    FUN_008e0ae0(1);
  }
  if ((param_1[0x1d9] != 0) && (param_1[0x5e3] != 0)) {
    param_1[0x5e3] = 0;
    FUN_008e5ac0(2);
  }
  return;
}

// 007593F0  FUN_007593f0  size=34  [between]
undefined4 FUN_007593f0(int *param_1)

{
  if (((param_1[0x24] & 0x2000000U) != 0) && (*param_1 != 0x1f)) {
    return 1;
  }
  return 0;
}

// 00759460  FUN_00759460  size=41  [between]
undefined4 FUN_00759460(int *param_1)

{
  if ((((param_1[0x24] & 0x10000000U) == 0) && (*param_1 != 0x4b)) && (*param_1 != 0x4c)) {
    return 0;
  }
  return 1;
}

// 007594B0  FUN_007594b0  size=423  [between]
void __fastcall FUN_007594b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined1 uVar7;
  int iStack_8;
  
  uVar7 = (undefined1)((uint)unaff_EBX >> 0x18);
  iVar1 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar1 != 0) {
    iVar1 = CollisionAttackData::CollisionAttackData();
    if (iVar1 != 0) {
      puVar4 = *(undefined4 **)(iVar1 + 8);
      *(undefined4 *)(iVar1 + 4) = 1;
      iVar2 = FUN_00ac8520(10);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(10);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(10);
      uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(10);
      if (1 < iStack_8) {
        iVar2 = iVar2 + (iVar2 >> 2) * (iStack_8 + -1);
      }
      if (*(int *)(param_1 + 0xe80) != 0) {
        FUN_00aa28e0();
        iVar2 = FUN_00fdbc60();
      }
      puVar4[2] = uVar3;
      puVar4[1] = iVar2;
      puVar4[3] = unaff_EBP;
      *(undefined1 *)(puVar4 + 4) = uVar7;
      *puVar4 = 0xd9;
      puVar4[0x23] = puVar4[0x23] | 0x20800;
      *(undefined1 *)((int)puVar4 + 0x11) = 10;
      puVar4 = (undefined4 *)FUN_009f8b60();
      piVar5 = (int *)FUN_00602cb0(2,*puVar4,iVar1);
      if (piVar5 != (int *)0x0) {
        iVar1 = FUN_00a12210(0);
        if (iVar1 == 0) {
          iVar1 = param_1;
        }
        (**(code **)(*piVar5 + 0x6c))(iVar1 + 0x40);
        iVar1 = piVar5[0x21c];
        piVar5[0x21d] = 0x3e800000;
        piVar6 = (int *)FUN_00d773c0();
        (**(code **)(*piVar6 + 8))(iVar1);
        FUN_00d7b0f0();
        FUN_00d77c50(piVar5[0x13c],0xffffffff);
        *(undefined4 *)(iVar1 + 0x510) = 0x3dcccccd;
        FUN_00d77580(0x3dcccccd,0x3f000000,0x3dcccccd);
        *(undefined4 *)(iVar1 + 0x380) = 0xd9;
        FUN_00d7b890();
      }
      return;
    }
  }
  FUN_00dd5650(&DAT_016479e4);
  return;
}

// 00759660  FUN_00759660  size=242  [between]
void __fastcall FUN_00759660(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[0x187] == 0) {
    FUN_007593a0();
    FUN_00757a30();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
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
  FUN_00757c60();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00759750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00759760  FUN_00759760  size=242  [between]
void __fastcall FUN_00759760(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[0x187] == 0) {
    FUN_007593a0();
    FUN_00757a30();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
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
  FUN_00757c60();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00759850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00759860  FUN_00759860  size=521  [between]
void __fastcall FUN_00759860(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_007593a0();
    FUN_00757a80();
    uVar2 = 0x3e4ccccd;
    param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
    if (param_1[0x460] == 0x2f) {
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
                    /* WARNING: Could not recover jumptable at 0x00759a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00759C30  FUN_00759c30  size=545  [between]
void __fastcall FUN_00759c30(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_007593a0();
    FUN_00757a80();
    FUN_00aa9280(0x2d);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x489] = 0x3f19999a;
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar3 = (float10)-1.0;
    }
    else {
      fVar3 = (float10)FUN_00e36a50(0);
    }
    pcVar1 = *(code **)(*param_1 + 0x1f8);
    param_1[0x485] =
         (int)(float)((float10)(float)param_1[0x22a] * (float10)0.6 * fVar3 * (float10)60.0 *
                     (float10)0.9);
    (*pcVar1)(1);
    FUN_00751fb0(0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x489] = 0x3f99999a;
      param_1[0x47d] = param_1[0x47d] & 0xffffffdf;
      uVar4 = 0x2e;
LAB_00759d2c:
      FUN_00aa4120(uVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
LAB_00759d39:
    FUN_00751d80();
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = param_1[0x485];
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 == 0) goto LAB_00759d39;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    uVar4 = 0x2f;
    goto LAB_00759d2c;
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
                    /* WARNING: Could not recover jumptable at 0x00759e4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00759E70  FUN_00759e70  size=565  [between]
void __fastcall FUN_00759e70(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_007593a0();
    FUN_00757a80();
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x225] = param_1[0x485];
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    FUN_00751fb0(0);
    param_1[0x489] = 0x41f00000;
    param_1[0x485] = -0x41800000;
    param_1[0x187] = 1;
    FUN_00aa4120(0x2e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = param_1[0x485];
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
    FUN_00751d80();
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
                    /* WARNING: Could not recover jumptable at 0x0075a0a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0075A0C0  FUN_0075a0c0  size=271  [between]
void __fastcall FUN_0075a0c0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_007593a0();
    FUN_00757a80();
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
                    /* WARNING: Could not recover jumptable at 0x0075a19f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00aa4080(0x33,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  return;
}

// 0075A1D0  FUN_0075a1d0  size=208  [between]
void __fastcall FUN_0075a1d0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_007593a0();
    FUN_00757a80();
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
                    /* WARNING: Could not recover jumptable at 0x0075a29e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0075A350  FUN_0075a350  size=312  [between]
undefined4 __thiscall FUN_0075a350(int param_1,undefined4 param_2)

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
     (fVar1 = *(float *)(param_1 + 0x1410), 0 < *(int *)(local_4 + 0x14))) {
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

// 0075A490  FUN_0075a490  size=127  [between]
void __thiscall FUN_0075a490(int param_1,undefined4 param_2)

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

// 0075A510  FUN_0075a510  size=63  [between]
uint FUN_0075a510(void)

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
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 0075A5A0  FUN_0075a5a0  size=72  [between]
bool FUN_0075a5a0(void)

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
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        return piVar2[0x42e] == 1;
      }
    }
  }
  return false;
}

// 0075A640  FUN_0075a640  size=539  [between]
void __fastcall FUN_0075a640(int *param_1)

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
    param_1[0x47d] = param_1[0x47d] & 0xffffffbf;
    param_1[0x47d] = param_1[0x47d] | 0x20000;
    FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00756cc0();
    iVar2 = FUN_00a81330();
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    iVar2 = FUN_00a8c760(0);
    if ((iVar2 != 0) && (iVar3 != 0)) {
      FUN_00755760(iVar3 + 0x40,0x3eb33333);
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
  fVar1 = (float)param_1[0x565];
  param_1[0x565] = (int)(fVar1 - (float)param_1[0x244]);
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

// 0075A860  FUN_0075a860  size=300  [between]
void __fastcall FUN_0075a860(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0075a8de. Too many branches */
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
    param_1[0x47d] = param_1[0x47d] | 0x20000;
    param_1[0x47d] = param_1[0x47d] & 0xffffffbf;
    uVar9 = 0x3f800000;
    uVar8 = 0xbf800000;
    uVar7 = 0;
    uVar6 = 0x3f800000;
    uVar5 = 0x3e4ccccd;
    uVar4 = 0;
    uVar2 = FUN_004b5e10(param_1[0x564],iVar1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
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

// 0075AC50  FUN_0075ac50  size=299  [between]
void __fastcall FUN_0075ac50(int *param_1)

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
      iVar4 = FUN_00dd6d80(puVar8);
      uVar6 = -(uint)(iVar4 != 0) & (uint)piVar5;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x47d] = param_1[0x47d] | 0x40;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if (uVar6 != 0) {
    fVar7 = (float10)FUN_00fdc1f0();
    FUN_00755760((float *)(uVar6 + 0x40),(float)((float10)1 - fVar7));
    fVar1 = *(float *)(uVar6 + 0x40) - (float)param_1[0x10];
    fVar3 = *(float *)(uVar6 + 0x44) - (float)param_1[0x11];
    fVar2 = *(float *)(uVar6 + 0x48) - (float)param_1[0x12];
    if (16.0 <= fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) {
      iVar4 = FUN_004b5e90();
      if (iVar4 != 0) goto LAB_0075ad64;
    }
                    /* WARNING: Could not recover jumptable at 0x0075ad56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  (**(code **)(*param_1 + 0x34c))();
LAB_0075ad64:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0075B120  FUN_0075b120  size=1397  [between]
void __fastcall FUN_0075b120(int *param_1)

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
    FUN_00468970(param_1 + 0x47e,0,&local_a0,&local_80,7,0,0,0,"em0040",0,0);
    HavokRayCastManager::set(local_60);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 1:
  case 2:
    break;
  case 3:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    iVar5 = FUN_00756810(param_1 + 0x188,0x3e4ccccd,0x3d99999a);
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
  iVar5 = FUN_00907560(param_1 + 0x47e,afStack_70,0,&iStack_88,&fStack_84,0,0,0);
  if (iVar5 == 0) goto LAB_0075b425;
  if ((iStack_88 != 0) && (bVar4 = FUN_009184c0(iStack_88), (bVar4 & 0x1f) == 0x14)) {
    fStack_a4 = 1.4013e-45;
  }
  if (fStack_84 == 0.0) {
LAB_0075b411:
    if (fStack_a4 == 0.0) {
      param_1[0x187] = 2;
      goto LAB_0075b425;
    }
  }
  else {
    local_a0 = fStack_84;
    local_9c = 0.0;
    local_98 = 0.0;
    local_94 = 0.0;
    iVar5 = FUN_00901570();
    if (iVar5 != 0x14) goto LAB_0075b411;
  }
  param_1[0x187] = 1;
  if (((fStack_68 - (float)param_1[0x12]) * (fStack_68 - (float)param_1[0x12]) +
       (afStack_70[0] - (float)param_1[0x10]) * (afStack_70[0] - (float)param_1[0x10]) < 1.0) &&
     (local_a8 < 0.17453292)) {
    param_1[0x1bb] = 0;
    FUN_008e5c50(0x1f);
    FUN_00751fb0(0);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = 3;
    param_1[0x248] = param_1[0x11];
    (*pcVar1)(0x40a00000);
    return;
  }
LAB_0075b425:
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
  FUN_00468970(param_1 + 0x47e,0,&local_80,&local_a0,7,0,0,0,"em0040",0,0);
  HavokRayCastManager::set(local_60);
  return;
}

// 0075B6B0  FUN_0075b6b0  size=52  [between]
void __fastcall FUN_0075b6b0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1fc))();
  if ((iVar1 == 0) && (param_1[0x139] == 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
    param_1[0x59d] = 0x42700000;
                    /* WARNING: Could not recover jumptable at 0x0075b6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

// 0075B6F0  FUN_0075b6f0  size=602  [between]
void __thiscall FUN_0075b6f0(int param_1,int param_2)

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
    *(undefined4 *)(param_1 + 0x1650) = *puVar5;
    pfVar7 = (float *)(param_1 + 0x1650);
    *(undefined4 *)(param_1 + 0x1654) = puVar5[1];
    *(undefined4 *)(param_1 + 0x1658) = puVar5[2];
    *(undefined4 *)(param_1 + 0x165c) = puVar5[3];
    fVar8 = (*(float *)(param_1 + 0x48) - *(float *)(iVar4 + 0x48)) * *(float *)(param_1 + 0x1658) +
            *(float *)(param_1 + 0x1654) * (*(float *)(param_1 + 0x44) - *(float *)(iVar4 + 0x44)) +
            *pfVar7 * (*(float *)(param_1 + 0x40) - *(float *)(iVar4 + 0x40));
    local_3c = *(float *)(iVar4 + 0x44) + *(float *)(param_1 + 0x1654) * fVar8;
    local_38 = *(float *)(iVar4 + 0x48) + *(float *)(param_1 + 0x1658) * fVar8;
    pfVar1 = (float *)(param_1 + 0x1640);
    local_34 = *(float *)(iVar4 + 0x4c) + *(float *)(param_1 + 0x165c) * fVar8;
    *pfVar1 = *(float *)(param_1 + 0x40) - (*(float *)(iVar4 + 0x40) + *pfVar7 * fVar8);
    *(float *)(param_1 + 0x1644) = *(float *)(param_1 + 0x44) - local_3c;
    *(float *)(param_1 + 0x1648) = *(float *)(param_1 + 0x48) - local_38;
    *(float *)(param_1 + 0x164c) = *(float *)(param_1 + 0x4c) - local_34;
    fVar8 = *(float *)(param_1 + 0x1648) * *(float *)(param_1 + 0x1648) +
            *pfVar1 * *pfVar1 + *(float *)(param_1 + 0x1644) * *(float *)(param_1 + 0x1644);
    if (fVar8 < 0.0 == (fVar8 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      *(undefined4 *)(param_1 + 0x1644) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1648) = 0;
    }
    fVar3 = 1.0;
    fVar8 = *pfVar1 * 0.0 + *(float *)(param_1 + 0x1644) + *(float *)(param_1 + 0x1648) * 0.0;
    fVar2 = -1.0;
    if ((fVar8 < -1.0) || (fVar2 = fVar8, fVar8 <= 1.0)) {
      fVar3 = fVar2;
    }
    fVar6 = (float10)FUN_00ddbb50(fVar3);
    if (*pfVar7 * *(float *)(param_1 + 0x1648) - *(float *)(param_1 + 0x1658) * *pfVar1 < 0.0) {
      fVar6 = -fVar6;
    }
    *(float *)(param_1 + 0x1670) = (float)fVar6;
    fVar8 = (float)fVar6;
    D3DXQuaternionRotationAxis(local_30);
    FUN_00ddb9f0(param_1 + 0xb0,&local_3c);
    D3DXMatrixInverse(param_1 + 0xf0,0,param_1 + 0xb0);
    *pfVar1 = 0.0;
    *(undefined4 *)(param_1 + 0x1644) = 0x40000000;
    *(undefined4 *)(param_1 + 0x1648) = 0;
    *(float **)(param_1 + 0x1660) = pfVar7;
    *(float *)(param_1 + 0x1664) = fVar8;
    *(undefined4 *)(param_1 + 0x1668) = unaff_EDI;
    *(undefined4 *)(param_1 + 0x166c) = unaff_ESI;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x800000;
  }
  return;
}

// 0075B950  FUN_0075b950  size=159  [between]
undefined4 __fastcall FUN_0075b950(int param_1)

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
      iVar7 = FUN_00dd6d80(puVar9);
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

// 0075B9F0  FUN_0075b9f0  size=324  [between]
void __fastcall FUN_0075b9f0(int *param_1)

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
      iVar1 = FUN_00dd6d80(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
      goto LAB_0075ba38;
    }
  }
  uVar3 = 0;
LAB_0075ba38:
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
    param_1[0x59c] = 0;
    param_1[0x47d] = param_1[0x47d] | 0x400000;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0075BB40  FUN_0075bb40  size=788  [between]
void __fastcall FUN_0075bb40(int *param_1)

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
    iVar3 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  if ((uVar5 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    param_1[0x47d] = param_1[0x47d] | 0x400000;
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
      param_1[0x5e3] = 1;
      FUN_008e59c0(2);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = param_1[0x59c];
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  bVar2 = true;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00753490(&uStack_20,param_1 + 0x10);
  fStack_1c = (float)param_1[0x591] + fStack_1c;
  FUN_007515a0(&uStack_20,0x3df5c28f,0x3c8efa35);
  fVar1 = (float)param_1[0x59c];
  if ((float)param_1[0x248] <= 0.0) {
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) goto LAB_0075bd06;
  }
  else if (0.0 >= fVar1) goto LAB_0075bd06;
  bVar2 = false;
LAB_0075bd06:
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
    param_1[0x47d] = param_1[0x47d] & 0xffbfffff;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    (**(code **)(*param_1 + 0x34c))();
    if (param_1[0x1d9] != 0) {
      param_1[0x5e3] = 0;
      FUN_008e5ac0(2);
    }
  }
  return;
}

// 0075BE60  FUN_0075be60  size=758  [between]
void __fastcall FUN_0075be60(int *param_1)

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
    iVar3 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  if ((uVar5 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    param_1[0x47d] = param_1[0x47d] | 0x400000;
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
    param_1[0x248] = param_1[0x59c];
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
  FUN_00753490(&uStack_20,param_1 + 0x10);
  fStack_1c = (float)param_1[0x591] + fStack_1c;
  FUN_007515a0(&uStack_20,0x3df5c28f,0x3c8efa35);
  fVar1 = (float)param_1[0x59c];
  if ((float)param_1[0x248] <= 0.0) {
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) goto LAB_0075c023;
  }
  else if (0.0 >= fVar1) goto LAB_0075c023;
  bVar2 = false;
LAB_0075c023:
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
    param_1[0x47d] = param_1[0x47d] & 0xffbfffff;
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

// 0075C160  FUN_0075c160  size=1221  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0075c160(int param_1)

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
    local_b0 = *(float *)(param_1 + 0xeb0);
    local_ac = *(undefined4 *)(param_1 + 0xeb4);
    pfVar8 = &local_b0;
    local_a8 = *(undefined4 *)(param_1 + 0xeb8);
    local_a4 = *(undefined4 *)(param_1 + 0xebc);
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
         (*(float *)(param_1 + 0xeb0) - *(float *)(param_1 + 0x50)) * 0.2 +
         *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) =
         (*(float *)(param_1 + 0xeb4) - *(float *)(param_1 + 0x54)) * 0.2 +
         *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) =
         (*(float *)(param_1 + 0xeb8) - *(float *)(param_1 + 0x58)) * 0.2 +
         *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) =
         (*(float *)(param_1 + 0xebc) - *(float *)(param_1 + 0x5c)) * 0.2 +
         *(float *)(param_1 + 0x5c);
    fVar2 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0xeb0);
    fVar4 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xeb4);
    fVar3 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0xeb8);
    if (SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) < 0.1) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xeb0);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xeb4);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xeb8);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xebc);
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
         (*(float *)(param_1 + 0xe90) - *(float *)(param_1 + 0x50)) * 0.2 +
         *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) =
         (*(float *)(param_1 + 0xe94) - *(float *)(param_1 + 0x54)) * 0.2 +
         *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) =
         (*(float *)(param_1 + 0xe98) - *(float *)(param_1 + 0x58)) * 0.2 +
         *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) =
         (*(float *)(param_1 + 0xe9c) - *(float *)(param_1 + 0x5c)) * 0.2 +
         *(float *)(param_1 + 0x5c);
    FUN_00ddefe0(puVar1,puVar1,(undefined4 *)(param_1 + 0xea0),0x3e4ccccd,5);
    fVar2 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0xe90);
    fVar4 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xe94);
    fVar3 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0xe98);
    if (SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) < 0.2) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xe90);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xe94);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xe98);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xe9c);
      *puVar1 = *(undefined4 *)(param_1 + 0xea0);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xea4);
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xea8);
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xeac);
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
      if (*(float *)(param_1 + 0xea8) != 0.0) {
        D3DXMatrixRotationZ(local_50,*(undefined4 *)(param_1 + 0xea8));
        D3DXMatrixMultiply(local_9c + 1,local_9c + 0x11,local_9c + 1);
      }
      if (*(float *)(param_1 + 0xea4) != 0.0) {
        D3DXMatrixRotationY(local_50,*(undefined4 *)(param_1 + 0xea4));
        D3DXMatrixMultiply(local_9c + 1,local_9c + 0x11,local_9c + 1);
      }
      if (*(float *)(param_1 + 0xea0) != 0.0) {
        D3DXMatrixRotationX(local_50,*(undefined4 *)(param_1 + 0xea0));
        D3DXMatrixMultiply(local_9c + 1,local_9c + 0x11,local_9c + 1);
      }
      D3DXMatrixMultiply(local_9c + 3,local_9c + 3,param_1 + 0xb0);
      local_9c[0xc] = *(float *)(param_1 + 0xe90) + local_9c[0xc];
      local_9c[0xd] = *(float *)(param_1 + 0xe94) + local_9c[0xd];
      local_9c[0xe] = *(float *)(param_1 + 0xe98) + local_9c[0xe];
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

// 0075C640  FUN_0075c640  size=102  [between]
void __fastcall FUN_0075c640(int param_1)

{
  float10 fVar1;
  
  switchD_0080dbae::default();
  if ((*(int *)(param_1 + 0x7b0) != 0) && (*(int *)(param_1 + 0xf14) == 0)) {
    FUN_008f3cb0(param_1);
  }
  if (0.0 < *(float *)(param_1 + 0xf08)) {
    fVar1 = (float10)FUN_00a93060();
    fVar1 = (float10)*(float *)(param_1 + 0xf08) - fVar1;
    *(float *)(param_1 + 0xf08) = (float)fVar1;
    if (fVar1 <= (float10)0) {
      *(float *)(param_1 + 0xf08) = (float)(float10)0;
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 0075C6B0  FUN_0075c6b0  size=335  [between]
undefined4 __fastcall FUN_0075c6b0(int param_1)

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
  *(undefined4 *)(param_1 + 0xf08) = 0;
  *(undefined4 *)(param_1 + 0xf00) = 0;
  *(undefined4 *)(param_1 + 0xf04) = 0;
  *(undefined4 *)(param_1 + 0xf14) = 0;
  FUN_00753c70();
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

// 0075C800  FUN_0075c800  size=201  [between]
void __fastcall FUN_0075c800(int param_1)

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
      if (*(int *)(param_1 + 0xf18) == 0) {
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
    FUN_00753740();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0075C8D0  FUN_0075c8d0  size=218  [between]
void __fastcall FUN_0075c8d0(int param_1)

{
  int *piVar1;
  float10 fVar2;
  undefined4 local_4;
  
  switchD_0080dbae::default();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    if (*(int *)(param_1 + 0xf14) == 0) {
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
  if (0.0 < *(float *)(param_1 + 0xf08)) {
    fVar2 = (float10)FUN_00a93060();
    fVar2 = (float10)*(float *)(param_1 + 0xf08) - fVar2;
    *(float *)(param_1 + 0xf08) = (float)fVar2;
    if (fVar2 <= (float10)0) {
      *(float *)(param_1 + 0xf08) = (float)(float10)0;
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 0075C9B0  FUN_0075c9b0  size=347  [between]
undefined4 __fastcall FUN_0075c9b0(int param_1)

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
  *(undefined4 *)(param_1 + 0xf08) = 0;
  *(undefined4 *)(param_1 + 0xf14) = 0;
  *(undefined4 *)(param_1 + 0xf40) = 0;
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  FUN_00753c70();
  if (*(int *)(param_1 + 0x4ac) == 9) {
    FUN_00a8caf0(0x9c,0,0,0);
    return 1;
  }
  FUN_00a8caf0(0x98,0,0,0);
  return 1;
}

// 0075CB10  FUN_0075cb10  size=74  [between]
void __fastcall FUN_0075cb10(int param_1)

{
  FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0xf40) = 0;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a92ef0();
  FUN_00a92a00();
  return;
}

// 0075CB60  FUN_0075cb60  size=83  [between]
undefined4 __fastcall FUN_0075cb60(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  FUN_00753c70();
  FUN_00a8caf0(0x9f,0,0,0);
  return 1;
}

// 0075CBC0  FUN_0075cbc0  size=53  [between]
void __fastcall FUN_0075cbc0(int param_1)

{
  FUN_00a8c9b0(0,4,0,0);
  FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  return;
}

// 0075CC00  FUN_0075cc00  size=1101  [between]
void __fastcall FUN_0075cc00(int *param_1)

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
      param_1[0x3db] = 0;
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
    iVar5 = param_1[0x3db];
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
      iVar5 = param_1[0x3db];
      param_1[0x14] = aiStack_e8[iVar5 * 4];
      param_1[0x15] = aiStack_e8[iVar5 * 4 + 1];
      param_1[0x16] = aiStack_e8[iVar5 * 4 + 2];
      param_1[0x17] = aiStack_e8[iVar5 * 4 + 3];
      param_1[0x3db] = param_1[0x3db] + 1;
      FUN_00a9e290(&DAT_01647a5c,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      local_f8 = 0x3f800000;
      local_f4 = 0x40000000;
      uStack_f0 = 0x3f800000;
      FUN_00a95ff0(&local_f8);
      if (2 < (uint)param_1[0x3db]) {
        pcVar2 = *(code **)(*param_1 + 0x20);
        param_1[0x187] = param_1[0x187] + 1;
        (*pcVar2)();
      }
    }
  }
  return;
}

// 0075D090  FUN_0075d090  size=29  [between]
void __fastcall FUN_0075d090(int param_1)

{
  FUN_00a93170();
  FUN_00c5bc40(*(undefined4 *)(param_1 + 0x4f0),1);
  return;
}

// 0075D0B0  FUN_0075d0b0  size=76  [between]
void __fastcall FUN_0075d0b0(int param_1)

{
  FUN_00a8ca80(0,0,0);
  FUN_00c62bb0(*(undefined4 *)(param_1 + 0x4f0),1);
  FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  FUN_00a92a00();
  return;
}

// 0075D100  FUN_0075d100  size=63  [between]
uint __fastcall FUN_0075d100(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4a0) == 5) && ((*(uint *)(param_1 + 0x11f4) & 0x80000) == 0)) {
    iVar1 = FUN_0075a5a0();
    if (iVar1 == 0) {
      return ~(*(uint *)(param_1 + 0x11f4) >> 4) & 1;
    }
  }
  return *(uint *)(param_1 + 0xd44) >> 0x19 & 1;
}

// 0075D140  FUN_0075d140  size=63  [between]
uint FUN_0075d140(void)

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
  puVar3 = &DAT_01b357f0;
  (**(code **)(*piVar2 + 4))(&DAT_01b357f0);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 0075D180  FUN_0075d180  size=310  [between]
void __fastcall FUN_0075d180(int param_1)

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
      puVar5 = &DAT_01b357f0;
      (**(code **)(*piVar2 + 4))(&DAT_01b357f0);
      iVar1 = FUN_00dd6d80(puVar5);
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

// 0075D2C0  FUN_0075d2c0  size=310  [between]
void __fastcall FUN_0075d2c0(int param_1)

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
      puVar5 = &DAT_01b357f0;
      (**(code **)(*piVar2 + 4))(&DAT_01b357f0);
      iVar1 = FUN_00dd6d80(puVar5);
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

// 0075D400  FUN_0075d400  size=345  [between]
void __fastcall FUN_0075d400(int *param_1)

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
      puVar5 = &DAT_01b357f0;
      (**(code **)(*piVar2 + 4))(&DAT_01b357f0);
      iVar1 = FUN_00dd6d80(puVar5);
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

// 0075D560  FUN_0075d560  size=345  [between]
void __fastcall FUN_0075d560(int *param_1)

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
      puVar5 = &DAT_01b357f0;
      (**(code **)(*piVar2 + 4))(&DAT_01b357f0);
      iVar1 = FUN_00dd6d80(puVar5);
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

// 0075D6C0  FUN_0075d6c0  size=338  [between]
void __fastcall FUN_0075d6c0(int *param_1)

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
      puVar5 = &DAT_01b357f0;
      (**(code **)(*piVar2 + 4))(&DAT_01b357f0);
      iVar1 = FUN_00dd6d80(puVar5);
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

// 0075D820  FUN_0075d820  size=338  [between]
void __fastcall FUN_0075d820(int *param_1)

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
      puVar5 = &DAT_01b357f0;
      (**(code **)(*piVar2 + 4))(&DAT_01b357f0);
      iVar1 = FUN_00dd6d80(puVar5);
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

// 0075D980  FUN_0075d980  size=290  [between]
void __fastcall FUN_0075d980(int *param_1)

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
      puVar5 = &DAT_01b357f0;
      (**(code **)(*piVar2 + 4))(&DAT_01b357f0);
      iVar1 = FUN_00dd6d80(puVar5);
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

// 0075DAB0  Emc040::vf33C  size=1576  [class]
void __thiscall Emc040::vf33C(int *param_1,int *param_2,uint *param_3)

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
      param_1[0x577] = param_1[0x577] + 1;
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
  if (param_1[0x1d9] == 0) goto LAB_0075de00;
  iVar6 = FUN_00a8c760(5);
  iVar4 = FUN_00a8c760(6);
  if (((param_1[0x1d9] == 0) || (iVar5 = (**(code **)(*param_1 + 800))(0x3d888889), iVar5 == 0)) ||
     (bVar2)) {
    if (-1 < (int)param_3[4]) {
LAB_0075e0c2:
      *param_2 = 0xc;
      param_3[6] = param_1[0x12d];
      return;
    }
    if (-1 < (int)param_3[2]) {
      if ((-1 < (int)param_3[4]) || ((~(*param_3 >> 0x1f) & 1) == 0)) goto LAB_0075e0c2;
      if (param_2[0x33] - param_1[0x577] < 2) {
        *param_2 = 0xb - (uint)bVar2;
        param_3[6] = param_1[0x12d];
        return;
      }
    }
    goto LAB_0075de00;
  }
  iVar5 = param_2[0x33];
  iVar1 = param_1[0x577];
  if (((1 < iVar5 - iVar1) || (iVar6 != 0)) || (iVar4 != 0)) {
    uVar8 = param_3[4];
    if (((int)uVar8 < 0) &&
       (((int)param_3[2] < 0 || (((int)uVar8 < 0 && ((~(*param_3 >> 0x1f) & 1) != 0)))))) {
      if (param_1[0x5a4] == 0) goto LAB_0075de00;
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
        goto LAB_0075de00;
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
        goto LAB_0075de00;
      }
    }
  }
  uVar8 = param_3[4];
  if ((int)uVar8 < 0) {
    if ((int)param_3[2] < 0) goto LAB_0075de00;
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
      goto LAB_0075de00;
    }
  }
  bVar2 = false;
  if (((param_2[0x1f] != 0) && ((9 < param_2[0x1e] && (*(int *)(param_2[0x1f] + 0x24) == 2)))) ||
     (iVar6 = FUN_0043f830(5), iVar6 != 0)) {
    bVar2 = true;
  }
  if (((uVar8 & 0x40000000) == 0) || ((~(*param_3 >> 0x1e) & 1) == 0)) {
    if (bVar2) goto LAB_0075df46;
  }
  else if (bVar2) {
LAB_0075df46:
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
LAB_0075de00:
  param_3[6] = 0x42000;
  return;
}

// 0075E0E0  FUN_0075e0e0  size=381  [between]
undefined4 FUN_0075e0e0(float *param_1)

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

// 0075E260  FUN_0075e260  size=403  [between]
void __fastcall FUN_0075e260(int param_1)

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
  
  iVar2 = FUN_0075e0e0(&local_30);
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

// 0075E400  FUN_0075e400  size=98  [between]
void __fastcall FUN_0075e400(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b34b40;
    (**(code **)(*piVar2 + 4))(&DAT_01b34b40);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_00408e60(*(undefined4 *)(param_1 + 0x4f0));
      *(int *)(param_1 + 0x10c8) = iVar1;
      if (iVar1 != -1) {
        *(undefined4 *)(param_1 + 0x10cc) = (&DAT_0163bb84)[iVar1];
      }
    }
  }
  return;
}

// 0075E470  FUN_0075e470  size=123  [between]
void __fastcall FUN_0075e470(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x4a0) == 0x11) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01b34b40;
      (**(code **)(*piVar2 + 4))(&DAT_01b34b40);
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && (*(int *)(param_1 + 0x10c8) != -1)) {
        FUN_00408ec0(*(int *)(param_1 + 0x10c8),0);
      }
    }
    (**(code **)(*(int *)(param_1 + 0x10d0) + 8))(0x3f800000,0,0);
  }
  return;
}

// 0075E4F0  FUN_0075e4f0  size=11  [between]
void FUN_0075e4f0(void)

{
  FUN_00a805f0();
  return;
}

// 0075E530  FUN_0075e530  size=60  [between]
void __fastcall FUN_0075e530(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x20;
    FUN_00aa9280(5);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0075E590  FUN_0075e590  size=70  [between]
void __fastcall FUN_0075e590(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffffffdf;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x40000;
    FUN_00aa9280(5);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0075E7A0  Emc040::vf30  size=209  [class]
void __fastcall Emc040::vf30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  BehaviorEmBase::vf30();
  FUN_0075e470();
  FUN_00c1a1c0(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xb9c));
  iVar2 = *(int *)(param_1 + 0x4a0);
  if ((iVar2 == 6) || (iVar2 == 7)) {
    iVar2 = FUN_00a12210(0);
    *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) & 0xfffb;
  }
  else if (iVar2 == 10) {
    FUN_00c4d1a0(*(undefined4 *)(param_1 + 0x4f0),0);
    if (*(int *)(param_1 + 0xf40) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xf40) + 0x34) = 0;
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

// 0075E880  Emc040::vf44  size=310  [class]
void __fastcall Emc040::vf44(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 6:
  case 7:
    FUN_00753610();
    break;
  case 8:
    FUN_007537f0();
    break;
  case 9:
    FUN_00753670();
    break;
  case 10:
    FUN_0075cb10();
    break;
  case 0xb:
    FUN_0075cbc0();
    break;
  case 0xd:
    FUN_0075d0b0();
  }
  if (*(int *)(param_1 + 0x11e4) != 0) {
    FUN_00d8a1d0(0x16,*(int *)(param_1 + 0x11e4));
  }
  iVar1 = FUN_00ac46e0();
  if (iVar1 == 0) {
    FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  }
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  RayCastManager::getWork(param_1 + 0x11f8);
  RayCastManager::getWork(param_1 + 0x1200);
  RayCastManager::getWork(param_1 + 0x11fc);
  RayCastManager::getWork(param_1 + 0x1204);
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
  (**(code **)(*(int *)(param_1 + 0x10d0) + 4))();
  BehaviorEmBase::vf44();
  return;
}

// 0075E9E0  FUN_0075e9e0  size=171  [between]
undefined4 __thiscall FUN_0075e9e0(int param_1,int param_2)

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
            if ((iVar1 != 0) && (*(int *)(param_1 + 0x11a0) != 0)) {
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

// 0075EA90  FUN_0075ea90  size=222  [between]
void __fastcall FUN_0075ea90(int *param_1)

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
  param_1[0x47d] = param_1[0x47d] | 0x20000000;
  (**(code **)(*param_1 + 0x110))(1);
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if ((param_1[0x47d] & 0x4000000U) != 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    if ((*(byte *)(param_1 + 0x2c0) & 8) != 0) {
      FUN_00a8c9b0(0,0x12,0x3f800000,0);
    }
    param_1[0x47d] = param_1[0x47d] & 0xfbffffff;
  }
  pcVar1 = *(code **)(*param_1 + 0x358);
  param_1[0x5a3] = 0x42c99999;
  (*pcVar1)(0x208,param_1 + 0x5a8);
  return;
}

// 0075EC00  FUN_0075ec00  size=159  [between]
void __fastcall FUN_0075ec00(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(*param_1 + 0x110))(0);
  if ((param_1[0x47d] & 0x4000000U) != 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    if ((*(byte *)(param_1 + 0x2c0) & 8) != 0) {
      FUN_00a8c9b0(0,0x12,0x3f800000,0);
    }
    param_1[0x47d] = param_1[0x47d] & 0xfbffffff;
  }
  (**(code **)(*param_1 + 0x20))();
  E3_EnemyBoardDebrisSokushi::vf4C();
  param_1[0x139] = 1;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0075ec9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x20))();
      return;
    }
  }
  return;
}

// 0075ECA0  FUN_0075eca0  size=160  [between]
void __fastcall FUN_0075eca0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     ((param_1[0x47d] & 0x20000000U) == 0)) {
    if ((float)param_1[0x469] < *(float *)(&DAT_01882c80 + param_1[0x482] * 0x14)) {
      iVar2 = FUN_0075d100();
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0075ecff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    iVar2 = FUN_00ac4670(param_1 + 0x10,1);
    if ((iVar2 != 0) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)((float)param_1[0x244] + fVar1),
       30.0 <= (float)param_1[0x244] + fVar1)) {
                    /* WARNING: Could not recover jumptable at 0x0075ed3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0075ED40  FUN_0075ed40  size=53  [between]
void __fastcall FUN_0075ed40(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     (((param_1[0x47d] & 0x20000000U) == 0 && (param_1[0x187] == 2)))) {
                    /* WARNING: Could not recover jumptable at 0x0075ed72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0075ED80  FUN_0075ed80  size=112  [between]
void __fastcall FUN_0075ed80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x620) = 0;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_00756810(param_1 + 0x620,0x3e800000,0);
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

// 0075EDF0  FUN_0075edf0  size=468  [between]
void __fastcall FUN_0075edf0(int *param_1)

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
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     ((param_1[0x47d] & 0x20000000U) == 0)) {
    fVar1 = (float)param_1[0x469];
    if (*(float *)(&DAT_01882c80 + param_1[0x482] * 0x14) * 0.7225 < fVar1 ==
        (*(float *)(&DAT_01882c80 + param_1[0x482] * 0x14) * 0.7225 == fVar1)) {
      bVar2 = false;
      if (fVar1 < *(float *)(&DAT_01882c8c + param_1[0x482] * 0x14) ==
          (fVar1 == *(float *)(&DAT_01882c8c + param_1[0x482] * 0x14))) {
        iVar3 = FUN_00ac4640(1);
        if (iVar3 == 0) {
LAB_0075eeb1:
          if (param_1[0x47e] != 0) {
            iVar3 = FUN_00907560(param_1 + 0x47e,0,0,0,0,0,0,0);
            if (iVar3 != 0) {
              (**(code **)(*param_1 + 0x34c))();
              param_1[0x47d] = param_1[0x47d] | 8;
              return;
            }
          }
          iVar3 = FUN_007520e0();
          if (iVar3 != 0) {
            (**(code **)(*param_1 + 0x34c))();
            param_1[0x47d] = param_1[0x47d] | 8;
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
          FUN_00468970(param_1 + 0x47e,0,&local_90,&local_80,7,0,0,0,"em0040",0,0);
          HavokRayCastManager::set(local_60);
          return;
        }
        iVar3 = FUN_00ac4670(param_1 + 0x10,1);
        if (iVar3 != 0) goto LAB_0075eeb1;
      }
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      param_1[0x47d] = param_1[0x47d] | 8;
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    param_1[0x47d] = param_1[0x47d] & 0xfffffff7;
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 0075EFD0  FUN_0075efd0  size=81  [between]
void __fastcall FUN_0075efd0(int *param_1)

{
  float fVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     (((param_1[0x47d] & 0x20000000U) == 0 &&
      (fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668,
      param_1[0x248] = (int)fVar1, fVar1 <= 0.0)))) {
                    /* WARNING: Could not recover jumptable at 0x0075f01e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0075F030  FUN_0075f030  size=537  [between]
void __fastcall FUN_0075f030(int param_1)

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
  if (*(int *)(param_1 + 0x11a0) == 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  if (*(int *)(param_1 + 0x620) != 0) {
    if (*(int *)(param_1 + 0x620) == 1) {
      if (((*(int *)(param_1 + 0xa84) != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) &&
         (fVar1 = *(float *)(param_1 + 0x11a4), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        FUN_00755760(param_1 + 0x11b0,0x3da3d70a);
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x620) = 0;
      }
    }
    goto LAB_0075f1d9;
  }
  fVar3 = (float10)FUN_00a8ec30(param_1 + 0x11b0);
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
  if (ABS(fVar3) < (float10)0.61086524) goto LAB_0075f1d9;
  iVar2 = FUN_00752340(param_1 + 0x11b0);
  if (iVar2 == 8) {
    uVar4 = 10;
LAB_0075f1c7:
    FUN_00aa4120(uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  else {
    if (iVar2 == 9) {
      uVar4 = 9;
      goto LAB_0075f1c7;
    }
    if (iVar2 == 0xc) {
      uVar4 = 0xd;
      goto LAB_0075f1c7;
    }
  }
  *(undefined4 *)(param_1 + 0x620) = 1;
LAB_0075f1d9:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0075F3C0  FUN_0075f3c0  size=64  [between]
void __fastcall FUN_0075f3c0(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     ((param_1[0x47d] & 0x20000000U) == 0)) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0075f3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0075F400  FUN_0075f400  size=64  [between]
void __fastcall FUN_0075f400(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     ((param_1[0x47d] & 0x20000000U) == 0)) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0075f43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0075F440  FUN_0075f440  size=64  [between]
void __fastcall FUN_0075f440(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     ((param_1[0x47d] & 0x20000000U) == 0)) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0075f47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0075F480  FUN_0075f480  size=403  [between]
void __fastcall FUN_0075f480(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00aa4080(0x4a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x47d] = param_1[0x47d] | 0x20;
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
      param_1[0x47d] = param_1[0x47d] & 0xffffffdf;
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

// 0075F620  FUN_0075f620  size=599  [between]
void __fastcall FUN_0075f620(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x53,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00751fb0(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    goto LAB_0075f680;
  case 1:
LAB_0075f680:
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
                    /* WARNING: Could not recover jumptable at 0x0075f873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0075F890  FUN_0075f890  size=102  [between]
void __fastcall FUN_0075f890(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     (((param_1[0x47d] & 0x20000000U) == 0 &&
      (((float)param_1[0x12] - (float)param_1[0x2e5]) *
       ((float)param_1[0x12] - (float)param_1[0x2e5]) +
       ((float)param_1[0x11] - (float)param_1[0x2e4]) *
       ((float)param_1[0x11] - (float)param_1[0x2e4]) +
       ((float)param_1[0x10] - (float)param_1[0x2e3]) *
       ((float)param_1[0x10] - (float)param_1[0x2e3]) < 2.25)))) {
                    /* WARNING: Could not recover jumptable at 0x0075f8f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0075FAD0  FUN_0075fad0  size=181  [between]
void __thiscall FUN_0075fad0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffffffbf;
  iVar1 = FUN_00a8cab0();
  *(int *)(param_1 + 0x1180) = iVar1;
  if (iVar1 == 0x58) {
    FUN_008e5c50(7);
  }
  FUN_00a8caf0(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x1184) = 0xffffffff;
  *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xf7effd7f;
  if (*(int *)(param_1 + 0x1378) != 0) {
    (**(code **)(*(int *)(param_1 + 0x12e0) + 8))(0,0,0);
  }
  if (*(int *)(param_1 + 0x1778) != 0) {
    FUN_00a8c9b0(0,0x22,0x3f800000,0);
    *(undefined4 *)(param_1 + 0x1778) = 0;
    return;
  }
  return;
}

// 0075FB90  FUN_0075fb90  size=104  [between]
void __thiscall FUN_0075fb90(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1788) = 0xffffffff;
  FUN_00aa9280(param_3);
  if ((*(byte *)(param_1 + 0x11f4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x13e4);
    *(undefined4 *)(param_1 + 0x13e4) = 2;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
    return;
  }
  *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x13e4);
  *(undefined4 *)(param_1 + 0x13e4) = 1;
  *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
  return;
}

// 0075FC00  FUN_0075fc00  size=266  [between]
void __thiscall FUN_0075fc00(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  if ((param_1[0x47d] & 0x100U) == 0) {
    fVar1 = (float)param_1[0x25];
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x4f8] - fVar1);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)0.1 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar4;
    iVar3 = (**(code **)(*param_1 + 0x84))();
    param_1[0x4eb] = (int)(*(float *)(iVar3 + 4) - (float)param_1[0x4ea]);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (param_1[0x4fa] != 1) {
        param_3 = 7;
      }
      FUN_00aa3f60(param_3);
      iVar3 = param_1[0x4fa];
      param_1[0x4fa] = param_1[0x4f9];
      param_1[0x4f9] = iVar3;
      param_1[0x47d] = param_1[0x47d] | 0x100;
    }
    return;
  }
  fVar4 = (float10)FUN_00ddba30((float)param_1[0x4f8] - (float)param_1[0x25]);
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

// 0075FD10  FUN_0075fd10  size=334  [between]
void __fastcall FUN_0075fd10(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if ((param_1[0x47d] & 0x100U) != 0) {
    if ((param_1[0x47d] & 1U) != 0) {
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      param_1[0x47d] = param_1[0x47d] & 0xfffffffe;
      param_1[0x4ec] = 0;
    }
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    return;
  }
  if (1.0 <= (float)param_1[0x4ec]) {
    iVar3 = FUN_00a94db0(0x1c);
    if (iVar3 != 0) {
      param_1[0x4fa] = param_1[0x4f9];
      param_1[0x4f9] = 0;
      param_1[0x47d] = param_1[0x47d] | 0x100;
    }
  }
  else {
    FUN_00757c60();
  }
  pbVar2 = (byte *)FUN_00a95df0(0);
  if (pbVar2 != (byte *)0x0) {
    pbVar4 = &DAT_01646d88;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_0075fe05:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_0075fe0a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_0075fe05;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0075fe0a:
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar3 != 0) {
        FUN_00aa4080(0x1c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
    }
  }
  return;
}

// 0075FE60  FUN_0075fe60  size=564  [between]
undefined4 __fastcall FUN_0075fe60(int param_1)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x1788) < 0) {
    return 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x13e4);
  *(int *)(param_1 + 0x13e4) = *(int *)(param_1 + 0x1788);
  *(undefined4 *)(param_1 + 0x13e8) = uVar1;
  *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
  switch(*(undefined4 *)(param_1 + 0x1788)) {
  case 3:
    FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x13e4);
    *(undefined4 *)(param_1 + 0x13e4) = 3;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
    FUN_00757e40(1);
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 2;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x13c0) = 0;
    *(undefined4 *)(param_1 + 0x13c4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x13c8) = 0;
    *(undefined4 *)(param_1 + 0x13cc) = local_14;
    FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x13e4);
    *(undefined4 *)(param_1 + 0x13e4) = 4;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
    break;
  case 5:
    FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x13e4);
    *(undefined4 *)(param_1 + 0x13e4) = 5;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xfffffffd;
    FUN_00757e40(1);
    break;
  case 6:
    FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x13e4);
    *(undefined4 *)(param_1 + 0x13e4) = 6;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e0ae0(0);
    }
    *(undefined4 *)(param_1 + 0x13c0) = 0;
    *(undefined4 *)(param_1 + 0x13c4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x13c8) = 0;
    *(undefined4 *)(param_1 + 0x13cc) = local_14;
  default:
    goto switchD_0075feae_default;
  }
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e0ae0(0);
  }
switchD_0075feae_default:
  *(undefined4 *)(param_1 + 0x1788) = 0xffffffff;
  return 1;
}

// 007600B0  FUN_007600b0  size=394  [between]
void __fastcall FUN_007600b0(int param_1)

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
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && (piVar2[0x42e] == 2)) {
        return;
      }
    }
    if ((*(uint *)(param_1 + 0x11f4) & 0x80000) != 0) {
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

// 00760240  FUN_00760240  size=179  [between]
void __thiscall FUN_00760240(int *param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  fVar1 = (float)param_1[0x4ea];
  FUN_00757620(param_1 + 0x2c,param_1 + 0x4f0,param_2);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
  uStack_20 = *puVar2;
  fStack_1c = (float)puVar2[1];
  uStack_18 = puVar2[2];
  uStack_14 = puVar2[3];
  fVar3 = (float10)FUN_00ddba30((fVar1 - (float)param_1[0x4ea]) + (float)param_1[0x4eb]);
  param_1[0x4eb] = (int)(float)fVar3;
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 + (float10)fStack_1c));
  fStack_1c = (float)fVar3;
  (**(code **)(*param_1 + 0x88))(&uStack_20);
  D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
  return;
}

// 00760300  FUN_00760300  size=567  [between]
void __fastcall FUN_00760300(int param_1)

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
    *(undefined4 *)(param_1 + 0x139c) = 0;
    iVar1 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),0x40060a92
                         ,*(undefined4 *)(param_1 + 0x1394),0);
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
      FUN_004688f0(param_1 + 0x1204,0,&local_a0,&local_70,0x3e4ccccd,iVar1 << 0x10 | 7,0,0x10,0,
                   "em0040_mgzn");
      FUN_0090fb00(local_60);
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      *(undefined4 *)(param_1 + 0x13a0) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x139c) != 0) {
      RayCastManager::getWork(param_1 + 0x1204);
      return;
    }
    if (*(int *)(param_1 + 0x1204) != 0) {
      iVar1 = FUN_00907640(param_1 + 0x1204,&local_74,0);
      if (((iVar1 != 0) && (local_74 != 0)) && (0 < *(int *)(local_74 + 0x14))) {
        iVar1 = FUN_00445ca0(*(undefined4 *)(*(int *)(local_74 + 0x10) + 0x28));
        if (iVar1 != 0) {
          uVar2 = FUN_009184c0(iVar1);
          iVar1 = FUN_00a7c8a0();
          if ((iVar1 != 0) && (uVar3 = FUN_009f8b40(), uVar2 >> 0x10 == uVar3)) {
            *(undefined4 *)(param_1 + 0x139c) = 1;
            return;
          }
        }
        FUN_00a7c950();
        return;
      }
      *(undefined4 *)(param_1 + 0x139c) = 1;
      FUN_007574c0();
      return;
    }
  }
  return;
}

// 007605E0  FUN_007605e0  size=58  [between]
undefined4 __fastcall FUN_007605e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x139c) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_0075fad0(0x1a);
        return 1;
      }
    }
  }
  return 0;
}

// 00760620  Emc040::vf150  size=338  [class]
void __thiscall Emc040::vf150(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_2) {
  case 0x2a:
    if (param_3 != 0) {
      param_1[0x566] = 0;
    }
    break;
  case 0x2b:
    if (param_3 != 0) {
      uVar1 = FUN_00a7c7f0();
      FUN_00a7c960(uVar1);
    }
    param_1[0x47d] = param_1[0x47d] | 0x20000;
    FUN_0075fad0(0x27);
    return;
  case 0x2c:
    if (param_3 != 0) {
      uVar1 = FUN_00a7c7f0();
      FUN_00a7c960(uVar1);
    }
    param_1[0x47d] = param_1[0x47d] | 0x20000;
    FUN_0075fad0(0x22);
    return;
  case 0x53:
  case 0x54:
  case 0x55:
    param_1[0x47d] = param_1[0x47d] | 0x20000;
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    if (param_2 != 0) {
      uVar1 = FUN_00a7c7f0();
      FUN_00a7c960(uVar1);
    }
    param_1[0x47d] = param_1[0x47d] | 0x4000;
    param_1[0x543] = param_2;
    return;
  case 0x56:
    if (param_3 != 0) {
      uVar1 = FUN_00a7c8a0();
      iVar2 = FUN_0065f540(uVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_004b55e0();
        param_1[0x564] = iVar2;
        if (-1 < iVar2) {
          param_1[0x47d] = param_1[0x47d] | 0x20000;
          (**(code **)(*param_1 + 0x220))(0x40a00000);
          FUN_00753020(param_3);
          param_1[0x543] = 0x56;
          param_1[0x47d] = param_1[0x47d] | 0x4000;
          return;
        }
      }
    }
  }
  return;
}

// 007607C0  FUN_007607c0  size=96  [between]
undefined4 FUN_007607c0(int *param_1,int param_2)

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

// 00760820  FUN_00760820  size=496  [between]
undefined4 __thiscall
FUN_00760820(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,int param_6
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
            if ((*(byte *)(param_1 + 0x11f4) & 1) == 0) {
              fVar10 = (float10)fcos((float10)0.7853981852531433);
              pfVar6 = (float *)FUN_00a926e0(local_30);
              fVar4 = pfVar6[2] * fVar3 + *pfVar6 * fVar1 + pfVar6[1] * fVar2;
              if ((fVar4 <= (float)fVar10) && (-(float)fVar10 <= fVar4)) {
LAB_00760974:
                pfVar6 = (float *)FUN_00a925a0(local_20);
                fVar1 = pfVar6[2] * fVar3 + fVar1 * *pfVar6 + pfVar6[1] * fVar2;
                if (param_5 == 0) {
                  if (0.0 <= fVar1) goto LAB_007609ab;
                }
                else if (fVar1 <= 0.0) {
LAB_007609ab:
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
                            (float10)fVar3 * (float10)0) goto LAB_00760974;
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

// 00760A10  FUN_00760a10  size=345  [between]
void __fastcall FUN_00760a10(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    *(undefined4 *)(param_1 + 0x940) = uVar2;
    FUN_00a9e290(&DAT_01645740,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1760) = 0;
    *(undefined4 *)(param_1 + 0x1764) = 0;
    *(undefined4 *)(param_1 + 0x1768) = 0;
    *(undefined4 *)(param_1 + 0x176c) = 0;
    FUN_00e5e0c0("em0040_vo_matador",param_1,0xffffffff,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a12210(0);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x1760) = *(undefined4 *)(iVar3 + 0x50);
    *(undefined4 *)(param_1 + 0x1764) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x1768) = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x176c) = *(undefined4 *)(iVar3 + 0x5c);
    *(undefined4 *)(param_1 + 0x1764) = 0;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e0d30((undefined4 *)(param_1 + 0x1760));
    }
  }
  if (*(int *)(param_1 + 0x11a0) != 0) {
    iVar3 = FUN_00a12210(0);
    if (iVar3 != 0) {
      FUN_007515a0(iVar3 + 0x40,0x3e4ccccd,0x3d567750);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if ((fVar1 <= 0.0) && ((*(byte *)(param_1 + 0xb00) & 0x40) == 0)) {
    FUN_0075fad0(0xb5);
  }
  return;
}

// 00760B70  FUN_00760b70  size=1597  [between]
void __fastcall FUN_00760b70(int param_1)

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
      FUN_007515a0(pfVar5,0x3dcccccd,0x3c8efa35);
      return;
    }
    fVar1 = *pfVar5 - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x48);
    if (fVar2 * fVar2 + fVar1 * fVar1 < 25.0) {
      FUN_0075fad0(0x29);
      return;
    }
    fVar6 = (float10)FUN_00756e50(pfVar5);
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
        pfVar5 = (float *)(param_1 + 0x1400);
        fVar3 = *(float *)(param_1 + 0x13c8) * local_1c - *(float *)(param_1 + 0x13c4) * local_18;
        fVar1 = *(float *)(param_1 + 0x13c0) * local_18 - *(float *)(param_1 + 0x13c8) * local_20;
        fVar2 = *(float *)(param_1 + 0x13c4) * local_20 - *(float *)(param_1 + 0x13c0) * local_1c;
        *pfVar5 = *(float *)(param_1 + 0x13c4) * fVar2 - fVar1 * *(float *)(param_1 + 0x13c8);
        *(float *)(param_1 + 0x1404) =
             fVar3 * *(float *)(param_1 + 0x13c8) - *(float *)(param_1 + 0x13c0) * fVar2;
        *(float *)(param_1 + 0x1408) =
             *(float *)(param_1 + 0x13c0) * fVar1 - fVar3 * *(float *)(param_1 + 0x13c4);
        fVar1 = *(float *)(param_1 + 0x1404) * *(float *)(param_1 + 0x1404) + *pfVar5 * *pfVar5 +
                *(float *)(param_1 + 0x1408) * *(float *)(param_1 + 0x1408);
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(pfVar5,pfVar5);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          *pfVar5 = 0.0;
          *(undefined4 *)(param_1 + 0x1404) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x1408) = 0;
        }
        *(float *)(param_1 + 0x960) = *(float *)(param_1 + 0x40) + *pfVar5;
        *(float *)(param_1 + 0x964) = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x1404);
        *(float *)(param_1 + 0x968) = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x1408);
        *(float *)(param_1 + 0x96c) = *(float *)(param_1 + 0x140c) + *(float *)(param_1 + 0x4c);
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
        *(float *)(param_1 + 0x960) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x1400);
        *(float *)(param_1 + 0x964) = *(float *)(param_1 + 0x1404) + *(float *)(param_1 + 0x44);
        *(float *)(param_1 + 0x968) = *(float *)(param_1 + 0x1408) + *(float *)(param_1 + 0x48);
        *(float *)(param_1 + 0x96c) = *(float *)(param_1 + 0x140c) + *(float *)(param_1 + 0x4c);
      }
      fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) + 2.1;
      if (*(float *)(param_1 + 0x964) < fVar1) {
        *(float *)(param_1 + 0x964) = fVar1;
      }
      FUN_007515a0(param_1 + 0x960,0x3dcccccd,0x3c8efa35);
      return;
    }
    FUN_0075fad0(0x15);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_007515a0(param_1 + 0x960,0x3dcccccd,0x3c8efa35);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 2;
  }
  return;
}

// 007611B0  FUN_007611b0  size=170  [between]
void __fastcall FUN_007611b0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)*(float *)(param_1 + 0x94)));
  if ((float10)0.43633232 < ABS(fVar4)) {
    FUN_0075fad0(0x16);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xa84);
  if ((ABS(*(float *)(iVar1 + 0x44) - *(float *)(param_1 + 0x44)) < 2.0) &&
     (fVar2 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 0x40),
     fVar3 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x48),
     fVar3 * fVar3 + fVar2 * fVar2 < 25.0)) {
    FUN_0075fad0(0x29);
    return;
  }
  fVar4 = (float10)FUN_00756e50(iVar1 + 0x40);
  if ((float10)2.0 < ABS(fVar4)) {
    FUN_0075fad0(0x14);
  }
  return;
}

// 007612F0  FUN_007612f0  size=294  [between]
void __fastcall FUN_007612f0(int param_1)

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
       (fVar1 = *(float *)(param_1 + 0x11a4), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
      FUN_007515a0(*(int *)(param_1 + 0xa84) + 0x40,0x3da3d70a,0x3c8efa35);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_0075fad0(0x15);
  }
  return;
}

// 00761420  FUN_00761420  size=117  [between]
void __fastcall FUN_00761420(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x187];
  if ((((iVar1 != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     ((param_1[0x47d] & 0x20000000U) == 0)) {
    if (iVar1 == 1) {
      if (0.5235988 < (float)param_1[0x2a8]) {
        uVar2 = FUN_00752340(param_1 + 0x46c);
        FUN_0075fad0(uVar2);
      }
    }
    else if (iVar1 == 3) {
      iVar1 = FUN_00a94db0(0x21);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00761468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 007614A0  FUN_007614a0  size=893  [between]
void __fastcall FUN_007614a0(int param_1)

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
    if (5.0 < *(float *)(param_1 + 0x11a4)) {
      FUN_00751670(0x3dcccccd,0x3c8efa35);
    }
    if ((*(int *)(param_1 + 0x11a0) != 0) && (iVar4 = FUN_00a12210(0), iVar4 != 0)) {
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
    goto switchD_007614c0_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_007614c0_default:
  return;
}

// 00761830  FUN_00761830  size=139  [between]
void __fastcall FUN_00761830(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x187];
  if ((((iVar1 != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     ((param_1[0x47d] & 0x20000000U) == 0)) {
    if (iVar1 == 1) {
      if (0.34906584 < (float)param_1[0x2a8]) {
        uVar2 = FUN_00752340(param_1 + 0x46c);
        FUN_0075fad0(uVar2);
      }
      if (param_1[0x250] < 1) {
                    /* WARNING: Could not recover jumptable at 0x007618b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    else if (iVar1 == 4) {
      iVar1 = FUN_00a94db0(0x1f);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00761878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 007618C0  FUN_007618c0  size=971  [between]
void __fastcall FUN_007618c0(int param_1)

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
    if ((*(int *)(param_1 + 0x11a0) != 0) && (iVar7 = FUN_00a12210(0), iVar7 != 0)) {
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
    goto LAB_00761c75;
  case 3:
    iVar7 = FUN_00a94db0(0x22);
    if (iVar7 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    break;
  case 4:
    break;
  default:
    goto switchD_007618e4_default;
  }
LAB_00761c75:
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_007618e4_default:
  return;
}

// 00761D50  FUN_00761d50  size=194  [between]
void __fastcall FUN_00761d50(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar1 = (float)param_1[0x488];
  param_1[0x488] = (int)(fVar1 - (float)param_1[0x244]);
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
    FUN_0075fad0(0x49);
    param_1[0x195] = iVar3;
    return;
  case 2:
    FUN_0075fad0(0x4a);
    param_1[0x195] = iVar3;
    break;
  case 6:
    FUN_0075fad0(0x4b);
    param_1[0x195] = iVar3;
    return;
  case -1:
    FUN_009f8b10();
    FUN_00a7c950();
    param_1[0x195] = -1;
    param_1[0x47d] = param_1[0x47d] & 0xffffffdf;
                    /* WARNING: Could not recover jumptable at 0x00761dd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00761E40  FUN_00761e40  size=194  [between]
void __fastcall FUN_00761e40(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar1 = (float)param_1[0x488];
  param_1[0x488] = (int)(fVar1 - (float)param_1[0x244]);
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
    FUN_0075fad0(0x48);
    param_1[0x195] = iVar3;
    return;
  case 2:
    FUN_0075fad0(0x4a);
    param_1[0x195] = iVar3;
    break;
  case 6:
    FUN_0075fad0(0x4b);
    param_1[0x195] = iVar3;
    return;
  case -1:
    FUN_009f8b10();
    FUN_00a7c950();
    param_1[0x195] = -1;
    param_1[0x47d] = param_1[0x47d] & 0xffffffdf;
                    /* WARNING: Could not recover jumptable at 0x00761ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00761F30  FUN_00761f30  size=759  [between]
void __fastcall FUN_00761f30(int *param_1)

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
  
  local_74 = 0x761f49;
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_74 = 0x761f58;
    uVar3 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x51,0,0x3e4ccccd,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    local_78 = (undefined1 *)0x761fb0;
    local_74 = uVar3;
    FUN_00752710();
    goto LAB_00761fb4;
  case 1:
LAB_00761fb4:
    local_74 = 0x761fbb;
    FUN_00756cc0();
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0;
    local_78 = (undefined1 *)0x761fd7;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 0x761fe6;
      FUN_009f8b10();
      local_74 = 0x761ff1;
      FUN_00a7c950();
      param_1[0x195] = -1;
      param_1[0x47d] = param_1[0x47d] & 0xffffffdf;
      local_74 = 0x3d888889;
      local_78 = (undefined1 *)0x762018;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_78 = auStack_64;
        param_1[0x187] = 2;
        FUN_00a92f90();
        FUN_0044fd10();
        local_78 = (undefined1 *)0x76208d;
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
        local_78 = (undefined1 *)0x76203b;
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
    local_78 = (undefined1 *)0x762137;
    iVar2 = FUN_00a8c760();
    if (iVar2 == 0) {
      local_78 = (undefined1 *)0x762147;
      local_74 = uVar3;
      FUN_00752680();
      return;
    }
    break;
  case 2:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0x3d888889;
    local_78 = (undefined1 *)0x762179;
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
    local_78 = (undefined1 *)0x7621b9;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 0x2c;
      param_1[0x187] = 4;
      local_78 = (undefined1 *)0x7621d0;
      FUN_00aa3f60();
      return;
    }
    break;
  case 4:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0;
    local_78 = (undefined1 *)0x7621f5;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      param_1[0x47d] = param_1[0x47d] & 0xffffff5f;
      pcVar1 = *(code **)(*param_1 + 0x34c);
      param_1[0x1ae] = 0;
      local_74 = 0x762219;
      (*pcVar1)();
      return;
    }
  }
  return;
}

// 00762240  Emc040::vf19C  size=179  [class]
void __thiscall Emc040::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 00762300  FUN_00762300  size=239  [between]
void __thiscall FUN_00762300(int param_1,undefined4 param_2)

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
  *(undefined4 *)(param_1 + 0x11dc) = 0xffffffff;
  FUN_0075e470();
  if ((*(int *)(param_1 + 0x814) < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
    *(undefined4 *)(param_1 + 0xd28) = 1;
    FUN_00a88b50(4,1);
    *(undefined4 *)(param_1 + 0xd28) = 0;
  }
  FUN_0075fad0(param_2);
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e5c50(7);
    *(undefined4 *)(param_1 + 0x1760) = 0;
    *(undefined4 *)(param_1 + 0x1764) = 0;
    *(undefined4 *)(param_1 + 0x1768) = 0;
    *(undefined4 *)(param_1 + 0x176c) = 0;
    FUN_008e0d30((undefined4 *)(param_1 + 0x1760));
  }
  return;
}

// 00762420  FUN_00762420  size=119  [between]
undefined4 __thiscall FUN_00762420(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != (int *)0x0) && (*param_3 == 0xde)) {
    iVar1 = (**(code **)(*param_2 + 0x14c))(0x2c,*(undefined4 *)(param_1 + 0x4f0));
    if (iVar1 != 0) {
      (**(code **)(*param_2 + 0x150))(0x2c,*(undefined4 *)(param_1 + 0x4f0));
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_0075fad0(0x23);
      return 1;
    }
  }
  return 0;
}

// 007624A0  FUN_007624a0  size=634  [between]
void __fastcall FUN_007624a0(int *param_1)

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
    local_74 = 1.0849782e-38;
    FUN_007593a0();
    local_74 = 1.0849792e-38;
    FUN_00757a80();
    local_74 = 0.0;
    local_78 = (undefined1 *)0x7624d7;
    FUN_00751fb0();
    param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
    param_1[0x25] = param_1[0x475];
    local_74 = 1.0;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x28,0,0x3e4ccccd,0x3f800000,0x8038000);
    local_74 = 1.4013e-45;
    local_78 = (undefined1 *)0x76252d;
    (**(code **)(*param_1 + 0x1f8))();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 1.084997e-38;
    FUN_00756cc0();
    local_74 = 0.0;
    local_78 = (undefined1 *)0x762556;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      if (param_1[0x1d9] != 0) {
        local_74 = 1.0850023e-38;
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      local_74 = 0.06666667;
      local_78 = (undefined1 *)0x7625a2;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_78 = auStack_64;
        FUN_00a92f90();
        FUN_0044fd10();
        local_78 = (undefined1 *)0x7625db;
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
    local_78 = (undefined1 *)0x762699;
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
    local_78 = (undefined1 *)0x7626cf;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 6.16571e-44;
      param_1[0x187] = 4;
      local_78 = (undefined1 *)0x7626e6;
      FUN_00aa3f60();
      return;
    }
    break;
  case 4:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0.0;
    local_78 = (undefined1 *)0x762705;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 1.0850609e-38;
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 00762890  FUN_00762890  size=458  [between]
void __fastcall FUN_00762890(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_007593a0();
    FUN_00757a80();
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
      if (param_1[0x574] < 1) {
        FUN_00aa4080(0x2c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      param_1[0x575] = 0x2b;
      FUN_0075fad0(0xa5);
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00762a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00762A70  FUN_00762a70  size=99  [between]
void __fastcall FUN_00762a70(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[0x47d] & 0x4000U) == 0) {
    return;
  }
  switch(param_1[0x543]) {
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
    goto switchD_00762a8d_default;
  }
  FUN_0075fad0(uVar1);
switchD_00762a8d_default:
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  param_1[0x47d] = param_1[0x47d] | 0x20000;
  param_1[0x47d] = param_1[0x47d] & 0xffffbfff;
  return;
}

// 00762AF0  FUN_00762af0  size=699  [between]
void __thiscall FUN_00762af0(int param_1,int param_2)

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
  
  if ((((param_2 != 0) && ((*(uint *)(param_1 + 0x11f4) & 0x800000) == 0)) &&
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
      FUN_0075fad0(0x83);
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
      FUN_0075fad0(0x85);
      return;
    }
    FUN_0075fad0(0x84);
  }
  return;
}

// 00762DB0  FUN_00762db0  size=515  [between]
void __fastcall FUN_00762db0(int *param_1)

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
       (fVar1 = (float)param_1[0x469], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
      local_20 = *(undefined4 *)(iVar5 + 0x40);
      local_1c = *(undefined4 *)(iVar5 + 0x44);
      local_18 = *(undefined4 *)(iVar5 + 0x48);
      local_14 = *(undefined4 *)(iVar5 + 0x4c);
      FUN_00755760(&local_20,0x3da3d70a);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    FUN_0075fad0(0x79);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (iVar5 != 0) {
    D3DXVec3TransformNormal(&local_20,param_1 + 0x560,iVar5 + 0x10);
    fVar1 = *(float *)(iVar5 + 0x40);
    fVar2 = *(float *)(iVar5 + 0x48);
    FUN_00755760(&stack0xffffffd4,0x3dcccccd);
    fVar1 = (fVar1 + unaff_ESI) - (float)param_1[0x10];
    fVar2 = (fVar2 + fStack_24) - (float)param_1[0x12];
    if (fVar2 * fVar2 + fVar1 * fVar1 < 6.25) {
      uVar4 = 10;
      iVar3 = FUN_00752340(iVar5 + 0x40);
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

// 00762FC0  FUN_00762fc0  size=94  [between]
void __fastcall FUN_00762fc0(int *param_1)

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
        FUN_0075fad0(0x7d);
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

// 00763020  FUN_00763020  size=1255  [between]
void __fastcall FUN_00763020(int *param_1)

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
    FUN_00ddba00(param_1 + 0x464,piVar6);
    param_1[0x25] = (int)(float)fVar8;
    param_1[0x259] = (int)(float)fVar8;
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0x8000000;
    uVar9 = 0x3f800000;
    uVar2 = 0;
    uVar13 = 0;
    iVar3 = iVar1;
    uVar4 = FUN_004b5e30(param_1[0x564],iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4520(uVar4,iVar3,uVar13,uVar2,uVar9,uVar10,uVar11,uVar12);
    FUN_009f8b10();
    FUN_008e6d00();
    iVar3 = FUN_0065f540(local_ec);
    if (((iVar3 != 0) && (iVar3 = FUN_00a8cab0(), iVar3 == 0xe0006)) &&
       ((*(byte *)(param_1 + 0x564) & 1) != 0)) {
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
      FUN_00a82090("Emc040_FallBodyExp",0x20040,auStack_d0);
      if (iVar1 != 0) {
        uVar4 = FUN_00a7c8a0();
        iVar3 = FUN_00754570(uVar4);
        if (iVar3 != 0) {
          FUN_00753020(iVar1);
          FUN_00753040();
          FUN_0075fad0(0x77);
        }
      }
    }
    param_1[0x248] = 0;
    FUN_00751fb0(0);
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
    iVar3 = param_1[0x564];
    goto LAB_007634b4;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_00763066_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  if ((param_1[0x250] == 0) && (iVar3 = FUN_00a8c760(10), iVar3 != 0)) {
    param_1[0x250] = 1;
  }
  if (param_1[0x250] == 1) {
    if ((float)param_1[0x248] <= 16.0) {
      local_e0 = 0;
      piVar6 = param_1 + 0x464;
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
      uVar2 = FUN_004b5e50(param_1[0x564],iVar1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00aa4520(uVar2,iVar1,uVar9,uVar10,uVar11,uVar12,uVar4,uVar13);
      return;
    }
    iVar3 = param_1[0x564];
LAB_007634b4:
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
switchD_00763066_default:
  return;
}

// 00763520  FUN_00763520  size=38  [between]
void __fastcall FUN_00763520(int *param_1)

{
  if ((param_1[0x47d] & 0x10U) != 0) {
    if ((param_1[0x47d] & 0x800000U) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00763539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_0075fad0(0x80);
  }
  return;
}

// 00763550  FUN_00763550  size=446  [between]
void __fastcall FUN_00763550(int *param_1)

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
  
  if ((((param_1[0x187] != 0) && (uVar1 = param_1[0x47d], -1 < (char)uVar1)) &&
      (param_1[0x5d4] == 0)) && ((uVar1 & 0x20000000) == 0)) {
    if (((float)param_1[0x24a] * 3.2399998 < (float)param_1[0x469]) || ((uVar1 & 0x10) == 0)) {
      FUN_0075fad0(0x7f);
      return;
    }
    fVar2 = (float)param_1[0x244] * 0.016666668 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar2;
    if (2.5 < fVar2) {
LAB_007635e4:
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (ABS((float)param_1[0x25] - (float)param_1[0x24b]) < 0.08726646) {
      local_a4 = 0;
      if (0 < param_1[0x188]) {
        iVar3 = FUN_00907560(param_1 + 0x47e,0,0,&local_a4,0,0,0,0);
        if (iVar3 != 0) {
          FUN_00910a40(local_a4);
          iVar3 = FUN_0091a9e0();
          if (iVar3 != 0) goto LAB_007635e4;
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
      FUN_00468970(param_1 + 0x47e,0,&local_a0,&local_80,7,0,0,0,"em0040",0,0);
      HavokRayCastManager::set(local_60);
      param_1[0x188] = 1;
    }
  }
  return;
}

// 00763710  FUN_00763710  size=192  [between]
void __fastcall FUN_00763710(int param_1)

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
    iVar4 = FUN_00dd6d80(puVar6);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x11b0) = piVar5[0x10];
      *(int *)(param_1 + 0x11b4) = piVar5[0x11];
      *(int *)(param_1 + 0x11b8) = piVar5[0x12];
      *(int *)(param_1 + 0x11bc) = piVar5[0x13];
      *(float *)(param_1 + 0x11b4) = *(float *)(param_1 + 0x11b4) + 1.0;
      fVar1 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x11b0);
      fVar3 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x11b4);
      fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x11b8);
      if (3.2399998 < fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) {
        FUN_0075fad0(0x82);
      }
    }
  }
  return;
}

// 007637D0  FUN_007637d0  size=683  [between]
void __fastcall FUN_007637d0(int *param_1)

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
      iVar3 = FUN_00dd6d80(puVar6);
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
  FUN_007515a0(param_1 + 600,0x3e4ccccd,0x3c8efa35);
  fVar1 = (float)param_1[0x10] - (float)param_1[600];
  fVar2 = (float)(int)(short)param_1[0x2ad] * 0.25 + 0.8;
  if (((float)param_1[0x12] - (float)param_1[0x25a]) *
      ((float)param_1[0x12] - (float)param_1[0x25a]) + fVar1 * fVar1 < fVar2 * fVar2) {
    if (param_1[0x5dc] != 0) {
      FUN_0075fad0(0x8d);
      return;
    }
    FUN_0075fad0(0x88);
  }
  return;
}

// 00763AE0  FUN_00763ae0  size=585  [between]
void __fastcall FUN_00763ae0(int param_1)

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
  
  if ((*(uint *)(param_1 + 0x11f4) & 0x400000) == 0) {
    if ((*(uint *)(param_1 + 0x11f4) & 0x800000) != 0) {
      fVar1 = (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x1668)) *
              *(float *)(param_1 + 0x1658) +
              (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x1660)) *
              *(float *)(param_1 + 0x1650) +
              *(float *)(param_1 + 0x1654) *
              (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x1664));
      *(float *)(param_1 + 0x50) =
           *(float *)(param_1 + 0x1660) + fVar1 * *(float *)(param_1 + 0x1650);
      *(float *)(param_1 + 0x58) =
           fVar1 * *(float *)(param_1 + 0x1658) + *(float *)(param_1 + 0x1668);
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
  FUN_00753490((float *)(param_1 + 0x1660),&local_70);
  pfVar7 = (float *)FUN_00a926e0(&local_70);
  pfVar6 = (float *)(param_1 + 0x1650);
  fVar3 = (*(float *)(param_1 + 0x1654) * pfVar7[2] - pfVar7[1] * *(float *)(param_1 + 0x1658)) *
          fVar1 + fVar2 * (*pfVar7 * *(float *)(param_1 + 0x1658) - pfVar7[2] * *pfVar6) +
          local_78[0] * (pfVar7[1] * *pfVar6 - *(float *)(param_1 + 0x1654) * *pfVar7);
  if (1e-05 < ABS(fVar3)) {
    fVar4 = SQRT(*(float *)(param_1 + 0x1648) * *(float *)(param_1 + 0x1648) +
                 *(float *)(param_1 + 0x1640) * *(float *)(param_1 + 0x1640) +
                 *(float *)(param_1 + 0x1644) * *(float *)(param_1 + 0x1644));
    *(float *)(param_1 + 0x1670) =
         (fVar3 / ((fVar4 + fVar4) * 3.1415927)) * 6.2831855 + *(float *)(param_1 + 0x1670);
  }
  D3DXQuaternionRotationAxis(local_50,pfVar6,*(undefined4 *)(param_1 + 0x1670));
  iVar5 = param_1 + 0xb0;
  FUN_00ddb9f0(iVar5,auStack_5c);
  D3DXMatrixInverse(param_1 + 0xf0,0,iVar5);
  D3DXVec3TransformNormal(local_78,param_1 + 0x1640,iVar5);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x1660) + *(float *)(param_1 + 0xe0) + fStack_84
  ;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x1664) + *(float *)(param_1 + 0xe4) + fVar1;
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0xe8) + fVar2 + *(float *)(param_1 + 0x1668);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x166c) + local_78[0];
  return;
}

// 00763D30  FUN_00763d30  size=315  [between]
undefined4 __fastcall FUN_00763d30(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  if (((*(uint *)(param_1 + 0x11f4) & 0x400) == 0) && (iVar8 = FUN_0075a510(), iVar8 != 0)) {
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
      fVar2 = fVar2 * fVar2 * *(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14);
      if (fVar2 < *(float *)(param_1 + 0x11a4) != (fVar2 == *(float *)(param_1 + 0x11a4))) {
        *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xfffffff7;
        FUN_00756d80();
        FUN_0075fad0(2);
        return 1;
      }
    }
    else if ((*(byte *)(param_1 + 0x11f4) & 0x10) == 0) {
      if (fVar6 <= 25.0) {
        return 0;
      }
      FUN_0075fad0(0x7f);
      return 1;
    }
    iVar8 = FUN_004be0f0();
    if ((float)iVar8 * 0.071428575 < 0.5 != ((float)iVar8 * 0.071428575 == 0.5)) {
      FUN_0075fad0(0x8c);
    }
  }
  return 0;
}

// 00763E70  FUN_00763e70  size=371  [between]
void __fastcall FUN_00763e70(int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  if ((((param_1[0x187] != 0) && (uVar2 = param_1[0x47d], -1 < (char)uVar2)) &&
      (param_1[0x5d4] == 0)) &&
     ((((uVar2 & 0x20000000) == 0 && (1.0 <= (float)param_1[0x4ec])) &&
      ((param_1[0x187] < 2 && (((uVar2 & 1) == 0 || ((uVar2 & 2) == 0)))))))) {
    iVar8 = FUN_0075a510();
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
                    /* WARNING: Could not recover jumptable at 0x00763f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    param_1[0x250] = param_1[0x250] + 1;
    if (((0x1e < param_1[0x250]) && ((*(byte *)(param_1 + 0x47d) & 1) == 0)) &&
       (iVar8 = FUN_00aa4a90(), iVar8 != 0)) {
      param_1[0x250] = 0;
      iVar8 = FUN_0075d100();
      if (iVar8 == 0) {
        FUN_0075fad0(3);
        return;
      }
    }
    if (param_1[0x468] != 0) {
      fVar1 = (float)param_1[0x248];
      iVar8 = FUN_0075d100();
      if (iVar8 == 0) {
        fVar1 = fVar1 + 0.5;
      }
      if ((float)param_1[0x469] <= fVar1 * fVar1 * *(float *)(&DAT_01882c80 + param_1[0x482] * 0x14)
         ) {
                    /* WARNING: Could not recover jumptable at 0x00763fe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 00763FF0  FUN_00763ff0  size=1694  [between]
void __fastcall FUN_00763ff0(int param_1)

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
      iVar3 = FUN_00dd6d80(puVar7);
      uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
    }
    if ((uVar5 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
      FUN_00a7c8a0();
    }
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x400000;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e6fe0(0x10000);
    }
    FUN_00751fb0(0);
    *(undefined4 *)(param_1 + 0x1670) = 0;
    pfVar1 = (float *)(param_1 + 0x960);
    fStack_78 = *(float *)(param_1 + 0x1654) * 0.0;
    fStack_80 = fStack_78 - *(float *)(param_1 + 0x1658);
    fStack_7c = *(float *)(param_1 + 0x1658) * 0.0 - *(float *)(param_1 + 0x1650) * 0.0;
    fStack_78 = *(float *)(param_1 + 0x1650) - fStack_78;
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
      FUN_007515a0(&fStack_70,0x3e0f5c29,0x3c8efa35);
    }
    if (0.34906584 <= ABS(*(float *)(param_1 + 0x1670))) {
      *(undefined4 *)(param_1 + 0x940) = 0;
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    iVar3 = FUN_004b5e90();
    if (iVar3 != 0) {
      return;
    }
LAB_0076428a:
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  case 2:
    if (uVar5 != 0) {
      if (*(float *)(param_1 + 0x1670) <= 0.0) {
        uVar8 = 0xbefeadae;
      }
      else {
        uVar8 = 0x3efeadae;
      }
      D3DXQuaternionRotationAxis(auStack_60,param_1 + 0x1650,uVar8);
      FUN_00ddb9f0(auStack_5c,&fStack_6c);
      D3DXVec3TransformNormal(&stack0xffffff74,(float *)(param_1 + 0x1640),auStack_5c);
      fStack_80 = (fStack_80 + *(float *)(uVar5 + 0x40)) - *(float *)(param_1 + 0x1640);
      fStack_7c = (fStack_7c + *(float *)(uVar5 + 0x44)) - *(float *)(param_1 + 0x1644);
      fStack_78 = (fStack_78 + *(float *)(uVar5 + 0x48)) - *(float *)(param_1 + 0x1648);
      fStack_74 = (*(float *)(uVar5 + 0x4c) + fStack_74) - *(float *)(param_1 + 0x164c);
      fVar2 = ABS((*(float *)(uVar5 + 0x48) - *(float *)(param_1 + 0x48)) *
                  *(float *)(param_1 + 0x1658) +
                  *(float *)(param_1 + 0x1654) *
                  (*(float *)(uVar5 + 0x44) - *(float *)(param_1 + 0x44)) +
                  *(float *)(param_1 + 0x1650) *
                  (*(float *)(uVar5 + 0x40) - *(float *)(param_1 + 0x40)));
      if ((fVar2 <= 2.0) &&
         (ABS(*(float *)(param_1 + 0x1670)) < 0.6632251 !=
          (ABS(*(float *)(param_1 + 0x1670)) == 0.6632251))) {
        *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
      }
      if (((fVar2 < 0.15) &&
          (ABS(*(float *)(param_1 + 0x1670)) < 0.567232 !=
           (ABS(*(float *)(param_1 + 0x1670)) == 0.567232))) ||
         ((*(float *)(param_1 + 0x924) <= 0.0 || (iVar3 = FUN_004b5e90(), iVar3 == 0))))
      goto LAB_0076428a;
      fVar6 = (float10)FUN_007516a0(&fStack_80);
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
      FUN_007515a0(&fStack_80,0x3e0f5c29,0x3c8efa35);
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
      FUN_007515a0(param_1 + 0x960,0x3e4ccccd,0x3c8efa35);
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
                    *(float *)(param_1 + 0x1658) +
                    *(float *)(param_1 + 0x1654) *
                    (*(float *)(uVar5 + 0x44) - *(float *)(param_1 + 0x44)) +
                    *(float *)(param_1 + 0x1650) *
                    (*(float *)(uVar5 + 0x40) - *(float *)(param_1 + 0x40)))) ||
        (0.6981317 <= ABS(*(float *)(param_1 + 0x1670)))) && (iVar3 = FUN_004b5e90(), iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x924) = 0x41c00000;
      *(undefined4 *)(param_1 + 0x61c) = 2;
      FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      return;
    }
    break;
  default:
    goto switchD_00764062_default;
  }
  iVar3 = FUN_004be0f0();
  if (6 < iVar3) {
    FUN_0075fad0(0x8e);
    return;
  }
switchD_00764062_default:
  return;
}

// 007646B0  FUN_007646b0  size=61  [between]
void __fastcall FUN_007646b0(int param_1)

{
  if (*(int *)(param_1 + 0x4a0) == 5) {
    FUN_00762a70();
  }
  if ((*(int *)(param_1 + 0x764) == 0) || (*(int *)(*(int *)(param_1 + 0x764) + 0x10c) != 0)) {
    FUN_00a93170();
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 007646F0  FUN_007646f0  size=789  [between]
void __fastcall FUN_007646f0(int param_1)

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
      puVar8 = (undefined4 *)(param_1 + 0xec0);
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

// 00764A10  FUN_00764a10  size=1160  [between]
void __fastcall FUN_00764a10(int param_1)

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
        *(int *)(param_1 + 0xf30) = *(int *)(param_1 + 0xf30) + 1;
        fVar15 = (float10)fpatan((float10)fVar9 /
                                 (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                                 (float10)fVar10 /
                                 (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
        local_11c = (float)fVar15;
        if (*(int *)(param_1 + 0xf30) < 10) {
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
        iVar12 = FUN_00754570(uVar17);
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
        if (*(int *)(param_1 + 0xf30) < 10) {
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
            *(uint *)(param_1 + 0xf2c) = *(uint *)(param_1 + 0xf2c) ^ 1;
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
          *(undefined4 *)(param_1 + 0xf30) = 0;
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

// 00764EA0  FUN_00764ea0  size=57  [between]
void FUN_00764ea0(void)

{
  int iVar1;
  
  FUN_00a9d860();
  FUN_00a8cab0();
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x97) {
    FUN_00764a10();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00764EE0  FUN_00764ee0  size=130  [between]
void __fastcall FUN_00764ee0(int param_1)

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
  
  if ((*(int **)(param_1 + 0x7b0) != (int *)0x0) && (*(int *)(param_1 + 0xf14) != 0)) {
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

// 00764F70  FUN_00764f70  size=780  [between]
void __thiscall FUN_00764f70(int *param_1,undefined4 param_2,int param_3)

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
    FUN_0075fad0(0x61);
    return;
  case 3:
    FUN_0075fad0(99);
    return;
  case 4:
    FUN_0075fad0(0x65);
    return;
  case 5:
    FUN_0075fad0(0x67);
    return;
  case 6:
    if (param_1[0x128] == 0xf) {
      uVar1 = 0x6e;
    }
    else {
      uVar1 = 0x6d;
    }
    FUN_0075fad0(uVar1);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    uVar1 = FUN_00a8eea0();
    FUN_00a8ee20(uVar1);
    return;
  case 7:
    FUN_0075fad0(0x69);
    return;
  case 8:
    if (param_1[0x128] != 0xf) {
      FUN_0075fad0(0x6b);
      return;
    }
    FUN_0075fad0(0x6c);
    return;
  case 9:
    iVar3 = (**(code **)(*param_1 + 0x1fc))();
    if (iVar3 != 0) {
      return;
    }
    if (param_1[0x139] != 0) {
      return;
    }
    FUN_00751fb0(1);
    if (param_1[0x128] == 0xf) {
      iVar3 = FUN_00a12210(0xf00);
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x1000;
      }
      FUN_0075fad0(0x2d);
      FUN_007575e0((int)(char)param_1[0x2ea]);
    }
    else {
      FUN_0075fad0(0x31);
      if (param_1[0x1d9] != 0) {
        FUN_008e0ae0(1);
      }
    }
    pcVar4 = *(code **)(*param_1 + 0x220);
    param_1[0x245] = *(int *)(param_3 + 0x914);
    param_1[0x475] = *(int *)(param_3 + 0x11d4);
    (*pcVar4)(0x40a00000);
    param_1[0x128] = 3;
    param_1[0x482] = 2;
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
      goto switchD_00765148_caseD_1;
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
switchD_00765148_caseD_1:
    iVar2 = FUN_00a8eea0();
    if (iVar3 < iVar2) {
      FUN_00a8ee20(iVar3);
      return;
    }
    break;
  case 10:
    iVar3 = (**(code **)(*param_1 + 0x1fc))();
    if ((iVar3 == 0) && (param_1[0x139] == 0)) {
      FUN_00751fb0(1);
      if (param_1[0x128] == 0xf) {
        iVar3 = FUN_00a12210(0xf00);
        if (iVar3 != 0) {
          *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x1000;
        }
        FUN_0075fad0(0x34);
        FUN_007575e0((int)(char)param_1[0x2ea]);
      }
      else {
        FUN_0075fad0(0x3b);
        if (param_1[0x1d9] != 0) {
          FUN_008e0ae0(1);
        }
      }
      pcVar4 = *(code **)(*param_1 + 0x220);
      param_1[0x245] = *(int *)(param_3 + 0x914);
      param_1[0x475] = *(int *)(param_3 + 0x11d4);
      (*pcVar4)(0x40a00000);
      param_1[0x128] = 3;
      param_1[0x482] = 2;
    }
  }
  return;
}

// 007652C0  FUN_007652c0  size=75  [between]
void __thiscall FUN_007652c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b357f0;
    (**(code **)(*piVar2 + 4))(&DAT_01b357f0);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00764f70(param_2,param_1);
    }
  }
  return;
}

// 00765310  FUN_00765310  size=429  [between]
void __fastcall FUN_00765310(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if ((*(int *)(param_1 + 0x1750) == 0) && ((*(uint *)(param_1 + 0x11f4) & 0x20000000) == 0)) {
    fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x11a0) + 0x50);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)*(float *)(param_1 + 0x94)));
    if ((3.2399998 < *(float *)(param_1 + 0xa90)) || ((float10)0.7853982 <= ABS(fVar4))) {
      if (*(float *)(param_1 + 0xa90) < *(float *)(param_1 + 0x13a4) * *(float *)(param_1 + 0x13a4))
      {
        FUN_0075fad0(100);
        FUN_007652c0(3);
        return;
      }
    }
    else {
      if ((*(float *)(param_1 + 0xa90) <= 2.25) && (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 1) != 0))
      {
        FUN_0075fad0(0x6c);
        FUN_007652c0(8);
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
            FUN_0075fad0(0x66);
            FUN_007652c0(4);
            return;
          }
          FUN_0075fad0(0x68);
          FUN_007652c0(5);
          return;
        }
        FUN_0075fad0(0x6a);
        FUN_007652c0(7);
      }
    }
  }
  return;
}

// 007654C0  FUN_007654c0  size=310  [between]
void __fastcall FUN_007654c0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  undefined *puVar6;
  
  if (*(int *)(param_1 + 0x1750) != 0) {
    FUN_0075fad0(0x62);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01b357f0;
      (**(code **)(*piVar3 + 4))(&DAT_01b357f0);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        FUN_0075fad0(0x61);
      }
    }
  }
  fVar5 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x11a0) + 0x50);
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 - (float10)*(float *)(param_1 + 0x94)));
  if ((*(float *)(param_1 + 0xa90) <= 3.2399998) && (ABS(fVar5) < (float10)0.7853982)) {
    uVar4 = FUN_00dde2d0(0,100);
    if ((uVar4 & 1) == 0) {
      FUN_0075fad0(0x66);
      FUN_007652c0(4);
    }
    else {
      FUN_0075fad0(0x68);
      FUN_007652c0(5);
    }
  }
  fVar1 = *(float *)(param_1 + 0x13a4) * 1.1;
  if (fVar1 * fVar1 < *(float *)(param_1 + 0xa90)) {
    FUN_0075fad0(0x62);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01b357f0;
      (**(code **)(*piVar3 + 4))(&DAT_01b357f0);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        FUN_0075fad0(0x61);
      }
    }
  }
  return;
}

// 00765600  FUN_00765600  size=102  [between]
void __fastcall FUN_00765600(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x1750) == 0) {
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x11a0) + 0x50);
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)*(float *)(param_1 + 0x94)));
    if ((ABS(fVar2) < (float10)0.7853982) && (*(int *)(param_1 + 0x1180) != 0x68)) {
      iVar1 = FUN_00a8c760(0xf);
      if (iVar1 != 0) {
        FUN_0075fad0(0x68);
        FUN_007652c0(5);
      }
    }
  }
  return;
}

// 00765670  FUN_00765670  size=102  [between]
void __fastcall FUN_00765670(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x1750) == 0) {
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x11a0) + 0x50);
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)*(float *)(param_1 + 0x94)));
    if ((ABS(fVar2) < (float10)0.7853982) && (*(int *)(param_1 + 0x1180) != 0x66)) {
      iVar1 = FUN_00a8c760(0xf);
      if (iVar1 != 0) {
        FUN_0075fad0(0x66);
        FUN_007652c0(4);
      }
    }
  }
  return;
}

// 007656E0  FUN_007656e0  size=370  [between]
void __fastcall FUN_007656e0(int *param_1)

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
      puVar5 = &DAT_01b357f0;
      (**(code **)(*piVar2 + 4))(&DAT_01b357f0);
      iVar1 = FUN_00dd6d80(puVar5);
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
    FUN_0075fad0(0x69);
  }
  return;
}

// 00765860  FUN_00765860  size=89  [between]
void __fastcall FUN_00765860(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(float *)(param_1 + 0xa90) <= 9.0)) {
    uVar2 = FUN_00dde2d0(0,100);
    if ((uVar2 & 1) != 0) {
      FUN_0075fad0(0x68);
      FUN_007652c0(5);
      return;
    }
    FUN_0075fad0(0x66);
    FUN_007652c0(4);
  }
  return;
}

// 00765960  FUN_00765960  size=218  [between]
void __fastcall FUN_00765960(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_007593a0();
    FUN_00757a80();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(param_1[0x575],0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x47d] = param_1[0x47d] & 0xffffefff;
    if (param_1[0x574] == 0) {
      param_1[0x574] = 1;
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_0075fad0(0xaa);
  }
  return;
}

// 00765A40  FUN_00765a40  size=76  [between]
void __thiscall FUN_00765a40(int param_1,int param_2)

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
  FUN_0075fad0(0x5b);
  return;
}

// 00765AA0  FUN_00765aa0  size=8  [between]
void FUN_00765aa0(void)

{
  FUN_0075fad0(0x5b);
  return;
}

// 00765AB0  Emc040::vf54  size=50  [class]
void __fastcall Emc040::vf54(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 6:
  case 7:
    FUN_007535e0();
    BehaviorEmBase::vf54();
    return;
  case 10:
    FUN_00764ee0();
  }
  BehaviorEmBase::vf54();
  return;
}

// 00765B10  Emc040::vf268  size=1686  [class]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall Emc040::vf268(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

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
      if ((((param_1[0x128] != 5) && (param_1[0x482] == 2)) && (param_1[0x186] != 0x1f)) &&
         (((iVar2 = (**(code **)(*param_1 + 0x1fc))(), iVar2 == 0 && (param_1[0x139] == 0)) &&
          ((param_1[0x47d] & 0x20800U) == 0)))) {
        if (param_1[0x461] == -1) {
          param_1[0x461] = 6;
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
          iVar2 = FUN_00a9b930();
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
          piVar3 = (int *)FUN_00a9b930();
          if ((piVar3 == (int *)0x0) ||
             ((iVar2 = (**(code **)(*piVar3 + 0x230))(), iVar2 == 0 &&
              (iVar2 = (**(code **)(*piVar3 + 0x234))(), iVar2 == 0)))) {
            FUN_0075fad0(0x2a);
            return 1;
          }
        }
      }
      else {
        iVar2 = FUN_00a8cab0();
        if (iVar2 == 0xb5) {
          FUN_0075fad0(0xb6);
          return 1;
        }
      }
      break;
    case 0xb:
      if ((((param_1[0x47d] & 0x80000U) == 0) && (param_2 != 0)) &&
         (((param_1[0x47d] & 0x20000U) == 0 && (param_1[0x482] == 2)))) {
        FUN_00a7c970(*(undefined4 *)(param_2 + 0x4f0));
        iVar2 = FUN_00a8cab0();
        if ((iVar2 != 0x78) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x79)) {
          uVar1 = FUN_00dde2a0(0,100);
          if ((uVar1 & 1) == 0) {
            param_1[0x560] = _DAT_01880d30;
            param_1[0x561] = _DAT_01880d34;
            param_1[0x562] = _DAT_01880d38;
            iVar2 = _DAT_01880d3c;
          }
          else {
            param_1[0x560] = _DAT_01880d20;
            param_1[0x561] = _DAT_01880d24;
            param_1[0x562] = _DAT_01880d28;
            iVar2 = _DAT_01880d2c;
          }
          param_1[0x563] = iVar2;
          FUN_0075fad0(0x78);
        }
        return 1;
      }
      break;
    case 0xc:
      if (((((param_1[0x47d] & 0x80000U) == 0) && (param_2 != 0)) &&
          ((param_1[0x47d] & 0x20000U) == 0)) && (param_1[0x482] == 2)) {
        FUN_00a7c970(*(undefined4 *)(param_2 + 0x4f0));
        iVar2 = FUN_00a8cab0();
        if ((iVar2 != 0x78) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x79)) {
          param_1[0x560] = _DAT_01b34e60;
          param_1[0x561] = _DAT_01b34e64;
          param_1[0x562] = _DAT_01b34e68;
          param_1[0x563] = _DAT_01b34e6c;
          FUN_0075fad0(0x78);
        }
        return 1;
      }
      break;
    case 0xd:
      if (param_2 != 0) {
        uVar5 = FUN_00751710();
        if (((int)uVar5 != 0) && (param_1[0x482] == 2)) {
          FUN_00a7c970(*(undefined4 *)((int)((ulonglong)uVar5 >> 0x20) + 0x4f0));
          FUN_0075fad0(0x82);
          return 1;
        }
      }
      break;
    case 0xe:
      if (((((param_1[0x47d] & 0x400000U) == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
          (iVar2 = FUN_0065f540(param_2), iVar2 != 0)) &&
         (((param_1[0x47d] & 0x20000U) == 0 && (param_1[0x482] == 2)))) {
        fVar4 = (float10)FUN_00dde300(0x3dcccccd,0x3f000000);
        param_1[0x565] = (int)(float)(fVar4 * (float10)60.0);
        FUN_00a7c970(*(undefined4 *)(param_2 + 0x4f0));
        FUN_0075fad0(0x7b);
        return 1;
      }
      break;
    case 0x11:
      if ((param_1[0x482] == 2) && (param_1[0x128] == 5)) {
        param_1[0x47d] = param_1[0x47d] | 0x80000;
        return 1;
      }
      break;
    case 0x12:
      if ((param_1[0x128] == 5) &&
         ((iVar2 = FUN_00a8cab0(), iVar2 == 0x88 || (iVar2 = FUN_00a8cab0(), iVar2 == 0x89)))) {
        param_1[0x545] = param_4[0xb];
        param_1[0x546] = param_4[8];
        param_1[0x547] = param_4[9];
        param_1[0x568] = param_4[10];
        FUN_0075fad0(0x87);
        return 1;
      }
      break;
    case 0x13:
      if ((param_1[0x128] == 5) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
        param_1[0x5dc] = 1;
        iVar2 = FUN_00a8cab0();
        if ((iVar2 == 0x88) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x89)) {
          FUN_0075fad0(0x8d);
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
        FUN_0075fad0(0x8f);
        return 1;
      }
    default:
      break;
    case 0x15:
      iVar2 = FUN_00ac4710(param_4[0xb]);
      if ((iVar2 != 0) && (param_1[0x186] == 4)) {
        FUN_0075fad0(4);
      }
      return 1;
    case 0x1a:
      param_1[0x139] = 1;
      FUN_00a8ee20(0);
      (**(code **)(*param_1 + 0x220))(0x41200000);
      FUN_0075fad0(0x44);
      return 1;
    case 0x1d:
      if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
        FUN_0075ea90();
        return 0;
      }
    }
  }
  return 0;
}

// 00766200  FUN_00766200  size=811  [between]
void __fastcall FUN_00766200(int param_1)

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
  
  if ((*(byte *)(param_1 + 0x11f4) & 0x40) == 0) {
    return;
  }
  *(int *)(param_1 + 0x11c0) = *(int *)(param_1 + 0x11c0) + -1;
  if (1 < *(int *)(param_1 + 0x11c0)) {
    return;
  }
  if (*(int *)(param_1 + 0x11c0) < 1) {
    *(undefined4 *)(param_1 + 0x11c0) = 10;
    local_94 = 0;
    iVar4 = param_1 + 0x1200;
    if (*(int *)(param_1 + 0x11c4) == 0) {
      iVar2 = FUN_00907640(iVar4,&local_94,0);
      if ((iVar2 == 0) || (iVar2 = FUN_0075e9e0(local_94), iVar2 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x10;
      }
      else {
        *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffffffef;
      }
      *(undefined4 *)(param_1 + 0x11c4) = 1;
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
      *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xfffffffb;
      *(undefined4 *)(param_1 + 0x11c4) = 0;
      RayCastManager::getWork(iVar4);
      return;
    }
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 4;
    *(undefined4 *)(param_1 + 0x11c4) = 0;
    RayCastManager::getWork(iVar4);
    return;
  }
  if (*(float *)(&DAT_01882c90 + *(int *)(param_1 + 0x1208) * 0x14) < *(float *)(param_1 + 0x11a4))
  {
    *(undefined4 *)(param_1 + 0x11c0) = 10;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xfffffffb;
    return;
  }
  local_b0 = *(float *)(param_1 + 0x40);
  local_ac = *(float *)(param_1 + 0x44);
  local_a8 = *(float *)(param_1 + 0x48);
  local_a4 = *(float *)(param_1 + 0x4c);
  local_90 = *(float *)(param_1 + 0x11b0);
  local_8c = *(float *)(param_1 + 0x11b4);
  local_88 = *(float *)(param_1 + 0x11b8);
  local_84 = *(float *)(param_1 + 0x11bc);
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
  if (*(int *)(param_1 + 0x11a0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_009f8b40();
  }
  uVar5 = iVar4 << 0x10 | 7;
  if (*(int *)(param_1 + 0x11c4) == 0) {
    local_70 = local_90 - local_b0;
    local_6c = local_8c - local_ac;
    local_68 = local_88 - local_a8;
    local_64 = local_84 - local_a4;
    FUN_0090fa30(param_1 + 0x1200,0,&local_b0,0x3e4ccccd,&local_70,uVar5,"em0040");
    return;
  }
  FUN_00468970(param_1 + 0x1200,0,&local_b0,&local_90,uVar5,0,0,0,"em0040",0,0);
  HavokRayCastManager::set(local_60);
  return;
}

// 00766530  Emc040::vf188  size=79  [class]
void __thiscall Emc040::vf188(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  if (param_2 == 9) {
    FUN_0075fad0(0x47);
    (**(code **)(*param_1 + 0x220))(0x41200000);
  }
  return;
}

// 00766580  FUN_00766580  size=60  [between]
undefined4 FUN_00766580(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00dde300(0,0x3f800000);
  if (fVar1 < (float10)0.7) {
    FUN_0075fad0(0x2b);
    return 1;
  }
  return 0;
}

// 007665C0  FUN_007665c0  size=200  [between]
undefined4 __fastcall FUN_007665c0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  fVar1 = *(float *)(param_1 + 0x40) - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
  fVar2 = *(float *)(param_1 + 0x48) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
  if (NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0)) {
    if ((fVar1 < 2.25 != (fVar1 == 2.25)) && (iVar3 = FUN_00755580(), iVar3 == 0)) {
      FUN_0075fad0(0x25);
      return 1;
    }
    iVar3 = FUN_00ac4640(1);
    if ((iVar3 == 0) || (iVar3 = FUN_00ac4670(param_1 + 0x11b0,1), iVar3 != 0)) {
      if (((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0x4a0) != 0x10)) &&
         ((uVar4 = FUN_00dde2d0(0,100), (uVar4 & 3) != 0 || (iVar3 = FUN_00755580(), iVar3 != 0))))
      {
        FUN_0075fad0(0x24);
        return 1;
      }
      FUN_0075fad0(0x1f);
      return 1;
    }
  }
  return 0;
}

// 00766690  FUN_00766690  size=91  [between]
undefined4 __fastcall FUN_00766690(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x11f4) & 0x400) == 0) {
    iVar1 = FUN_00ac4640(1);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4670(param_1 + 0x11b0,1);
      if ((iVar1 == 0) && (*(short *)(param_1 + 0xab2) != -1)) {
        iVar1 = FUN_00ac4690();
        if (iVar1 != 0) {
          FUN_0075fad0(4);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 007666F0  FUN_007666f0  size=238  [between]
undefined4 __fastcall FUN_007666f0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x11f4) & 0x400) == 0) {
    if (((*(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14) <
          *(float *)(param_1 + 0x11a4) ==
          (*(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14) ==
          *(float *)(param_1 + 0x11a4))) && (iVar1 = FUN_0075d100(), iVar1 != 0)) &&
       (*(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44) <= 2.0)) {
      return 0;
    }
    iVar1 = FUN_00ac4640(1);
    if ((iVar1 != 0) && (iVar1 = FUN_00ac4670(param_1 + 0x11b0,1), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x4a0) == 5) || (3 < *(int *)(param_1 + 0x814))) {
      *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xfffffff7;
      iVar1 = FUN_0075d100();
      if (iVar1 == 0) {
        iVar1 = FUN_00aa4a90();
        if ((((iVar1 != 0) && ((*(byte *)(param_1 + 0x11f4) & 1) == 0)) &&
            (*(int *)(param_1 + 0x1784) == 0)) && (*(int *)(param_1 + 0x4a0) != 5)) {
          FUN_0075fad0(3);
          return 1;
        }
        iVar1 = FUN_00751f80();
        if (iVar1 != 0) {
          return 0;
        }
      }
      FUN_0075fad0(2);
      return 1;
    }
  }
  return 0;
}

// 007667E0  FUN_007667e0  size=157  [between]
undefined4 __fastcall FUN_007667e0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0x11f4) & 0x400) != 0) ||
     ((*(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14) < *(float *)(param_1 + 0x11a4)
       == (*(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14) ==
          *(float *)(param_1 + 0x11a4)) && (iVar2 = FUN_0075d100(), iVar2 != 0)))) {
    return 0;
  }
  *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xfffffff7;
  fVar1 = *(float *)(param_1 + 0x11a4);
  if ((!NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0)) &&
     ((((iVar2 = FUN_00aa4a90(), iVar2 != 0 && ((*(byte *)(param_1 + 0x11f4) & 1) == 0)) &&
       (*(int *)(param_1 + 0x1784) == 0)) && (*(int *)(param_1 + 0x4a0) != 5)))) {
    FUN_0075fad0(3);
    return 1;
  }
  FUN_0075fad0(2);
  return 1;
}

// 00766880  Emc040::vf34C  size=253  [class]
void __fastcall Emc040::vf34C(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xfffdffff;
  if (*(int *)(param_1 + 0x1184) != -1) {
    FUN_0075fad0(*(int *)(param_1 + 0x1184));
    return;
  }
  if ((((*(uint *)(param_1 + 0x11f4) & 0x10000000) != 0) && (*(int *)(param_1 + 0x4a0) != 0xe)) &&
     (*(int *)(param_1 + 0x4a0) != 0xf)) {
    FUN_0075fad0(0x19);
    return;
  }
  if (*(int *)(param_1 + 0x1208) == 3) {
    FUN_0075fad0(0x5b);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4a0);
  if (iVar1 == 5) {
    iVar1 = FUN_0075a510();
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0xdc0) & 0x800000) != 0)) {
      FUN_0075fad0(0x81);
      return;
    }
    FUN_0075fad0(0x7e);
    return;
  }
  if (iVar1 == 0x11) {
    FUN_0075fad0(0xb0);
    return;
  }
  if (iVar1 == 0x10) {
    FUN_0075fad0(0xad);
    return;
  }
  if (iVar1 == 0x12) {
    if ((*(byte *)(param_1 + 0xb00) & 0x40) != 0) {
      FUN_0075fad0(0xb6);
      return;
    }
    FUN_0075fad0(0xb5);
    return;
  }
  if (iVar1 == 0xe) {
    FUN_0075fad0(0x61);
    return;
  }
  if (iVar1 == 0xf) {
    FUN_0075fad0(0x62);
    return;
  }
  FUN_0075fad0(0);
  return;
}

// 00766980  FUN_00766980  size=337  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00766980(int param_1)

{
  float fVar1;
  int iVar2;
  int local_8 [2];
  
  iVar2 = *(int *)(param_1 + 0x1750);
  local_8[0] = 0;
  local_8[1] = 0;
  if (iVar2 == 0) {
    FUN_00ac81f0(param_1 + 0x40,local_8,local_8 + 1);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,local_8,local_8 + 1);
  }
  if (local_8[0] == 0) {
    fVar1 = *(float *)(param_1 + 0x1758) - *(float *)(param_1 + 0x910);
    if (0.0 <= fVar1) goto LAB_007669d5;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1758);
    if (fVar1 < 0.0) {
LAB_007669d5:
      fVar1 = 0.0;
    }
  }
  *(float *)(param_1 + 0x1758) = fVar1;
  fVar1 = *(float *)(param_1 + 0x1758);
  if (NAN(fVar1) || 15.0 < fVar1 == (fVar1 == 15.0)) {
    if (*(float *)(param_1 + 0x1758) <= -15.0) {
      *(undefined4 *)(param_1 + 0x1750) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1750) = 1;
  }
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x1750) == 0)) {
    switch(*(undefined4 *)(param_1 + 0x618)) {
    case 0:
    case 0x5b:
    case 0x79:
    case 0x7e:
    case 0x81:
      *(undefined4 *)(param_1 + 0x1674) = 0x42280000;
      *(undefined2 *)(param_1 + 0x824) = 2;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
    }
  }
  if (*(int *)(param_1 + 0x1754) != 0) {
    if (*(int *)(param_1 + 0x1750) != 0) goto LAB_00766a98;
    *(undefined4 *)(param_1 + 0x1754) = 0;
  }
  if (*(int *)(param_1 + 0x1750) == 0) {
    return;
  }
LAB_00766a98:
  if (*(int *)(param_1 + 0x1754) == 0) {
    switch(*(undefined4 *)(param_1 + 0x618)) {
    case 0:
    case 0x5b:
    case 0x79:
    case 0x7e:
    case 0x81:
      *(undefined4 *)(param_1 + 0x1754) = 1;
      FUN_0075fad0(0x3a);
    }
  }
  return;
}

// 00766BF0  FUN_00766bf0  size=8  [callgraph]
void FUN_00766bf0(void)

{
  FUN_0075fad0(0x46);
  return;
}

// 00766C00  FUN_00766c00  size=59  [callgraph]
void __fastcall FUN_00766c00(int *param_1)

{
  if (param_1[0x2e1] != 0) {
    if (*(int *)(&DAT_01647ab0 + param_1[0x2e1] * 4) != -1) {
      FUN_0075fad0(*(int *)(&DAT_01647ab0 + param_1[0x2e1] * 4));
    }
    return;
  }
  if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
    FUN_0075fad0(0x89);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00766c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00766C40  FUN_00766c40  size=168  [callgraph]
void __fastcall FUN_00766c40(int *param_1)

{
  float fVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     (((param_1[0x47d] & 0x20000000U) == 0 && (param_1[0x468] != 0)))) {
    FUN_007515a0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3c8efa35);
    if ((float)param_1[0x469] <= 25.0) {
                    /* WARNING: Could not recover jumptable at 0x00766cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 + 0.016666668);
    if (3.0 <= fVar1 + 0.016666668) {
      FUN_0075fad0(2);
    }
  }
  return;
}

// 00766CF0  FUN_00766cf0  size=499  [callgraph]
void __fastcall FUN_00766cf0(int *param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  
  if ((((((param_1[0x187] != 0) && (uVar1 = param_1[0x47d], -1 < (char)uVar1)) &&
        (param_1[0x5d4] == 0)) && (((uVar1 & 0x20000000) == 0 && (1.0 <= (float)param_1[0x4ec]))))
      && (param_1[0x187] < 2)) && (((uVar1 & 1) == 0 && (iVar3 = FUN_007605e0(), iVar3 == 0)))) {
    param_1[0x250] = param_1[0x250] + 1;
    if ((0x1e < param_1[0x250]) &&
       ((((*(byte *)(param_1 + 0x47d) & 1) == 0 && (iVar3 = FUN_00aa4a90(), iVar3 != 0)) &&
        (param_1[0x128] != 5)))) {
      param_1[0x250] = 0;
      iVar3 = FUN_0075d100();
      if (iVar3 == 0) {
        if ((param_1[0x5e1] == 0) &&
           ((param_1[0x5e0] == 0 || (*(int *)(param_1[0x5e0] + 0xc) != param_1[0x477])))) {
          FUN_0075fad0(3);
          return;
        }
        if (((*(byte *)(param_1 + 0x47d) & 1) == 0) && (iVar3 = FUN_00751f80(), iVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00766de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
      }
    }
    if (param_1[0x205] < 4) {
                    /* WARNING: Could not recover jumptable at 0x00766dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (param_1[0x468] != 0) {
      if ((((float)param_1[0x469] <=
            *(float *)(&DAT_01882c80 + param_1[0x482] * 0x14) * (float)param_1[0x248]) &&
          (fVar2 = *(float *)(param_1[0x2a1] + 0x44) - (float)param_1[0x11],
          fVar2 < 1.5 != (fVar2 == 1.5))) && (iVar3 = FUN_0075d100(), iVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00766e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      iVar3 = FUN_00ac4640(1);
      if ((iVar3 != 0) && (iVar3 = FUN_00ac4670(param_1 + 0x46c,1), iVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00766e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    if (((param_1[0x482] == 2) && ((*(byte *)(param_1 + 0x47d) & 1) == 0)) &&
       (((float)param_1[0x469] < 36.0 &&
        ((fVar2 = *(float *)(param_1[0x2a1] + 0x44) - (float)param_1[0x11],
         fVar2 < 1.5 != (fVar2 == 1.5) && (iVar3 = FUN_0075d100(), iVar3 == 0)))))) {
      FUN_0075fad0(0xf);
    }
  }
  return;
}

// 00766EF0  FUN_00766ef0  size=408  [callgraph]
void __fastcall FUN_00766ef0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((((param_1[0x187] != 0) && (uVar1 = param_1[0x47d], -1 < (char)uVar1)) &&
      (param_1[0x5d4] == 0)) && (((uVar1 & 0x20000000) == 0 && ((uVar1 & 1) == 0)))) {
    if (param_1[0x187] == 3) {
                    /* WARNING: Could not recover jumptable at 0x00766f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar2 = FUN_007605e0();
    if (((iVar2 == 0) && (param_1[0x187] != 2)) && (iVar2 = FUN_00751090(), iVar2 == 0)) {
      if (param_1[0x205] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00766f85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      if ((param_1[0x468] != 0) && ((*(byte *)(param_1 + 0x47d) & 1) == 0)) {
        param_1[0x251] = param_1[0x251] + 1;
        if ((param_1[0x251] < 0x1f) ||
           (((param_1[0x251] = 0,
             *(float *)(&DAT_01882c90 + param_1[0x482] * 0x14) < (float)param_1[0x469] ||
             (0.2 <= (float)param_1[0x2a6])) || (iVar2 = FUN_0075d100(), iVar2 == 0)))) {
          iVar2 = param_1[0x1f6];
          if (((iVar2 == 0) || (*(int *)(iVar2 + 0x838) != 3)) || (*(int *)(iVar2 + 0x82c) != 0)) {
            if (((float)param_1[0x469] <= *(float *)(&DAT_01882c80 + param_1[0x482] * 0x14)) &&
               (iVar2 = FUN_0075d100(), iVar2 != 0)) {
              FUN_00a8d2f0();
                    /* WARNING: Could not recover jumptable at 0x00767059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0x34c))();
              return;
            }
            iVar2 = FUN_00ac4640(1);
            if (iVar2 == 0) {
              return;
            }
            iVar2 = FUN_00ac4670(param_1 + 0x46c,1);
            if (iVar2 != 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x00767086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
          param_1[0x5e1] = 1;
        }
        FUN_0075fad0(2);
      }
    }
  }
  return;
}

// 00767090  FUN_00767090  size=63  [callgraph]
void __fastcall FUN_00767090(int param_1)

{
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x11f4))) &&
      (*(int *)(param_1 + 0x1750) == 0)) &&
     (((*(uint *)(param_1 + 0x11f4) & 0x20000000) == 0 && (3 < *(int *)(param_1 + 0x814))))) {
    FUN_00756d80();
    FUN_0075fad0(2);
  }
  return;
}

// 007670D0  FUN_007670d0  size=195  [callgraph]
void __fastcall FUN_007670d0(int param_1)

{
  float fVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar2 = *(int *)(param_1 + 0x61c);
  if (iVar2 == 0) {
    return;
  }
  if ((char)*(uint *)(param_1 + 0x11f4) < '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x1750) != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x11f4) & 0x20000000) != 0) {
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
    if ((fVar1 < 0.0 != (fVar1 == 0.0)) || (2 < *(int *)(param_1 + 0x940))) goto LAB_0076718b;
    if ((*(int *)(param_1 + 0x948) == 0) &&
       (iVar2 = FUN_007520e0(), param_1 = extraout_ECX, iVar2 != 0)) {
      FUN_0075fad0(0xe);
      return;
    }
  }
  if (*(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14) * 3.2399998 <
      *(float *)(param_1 + 0x11a4) ==
      (*(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14) * 3.2399998 ==
      *(float *)(param_1 + 0x11a4))) {
    return;
  }
LAB_0076718b:
  FUN_0075fad0(0xe);
  return;
}

// 007671A0  FUN_007671a0  size=1285  [callgraph]
void __fastcall FUN_007671a0(int *param_1)

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
    RayCastManager::getWork(param_1 + 0x47e);
  case 1:
    if (0.0 < (float)param_1[0x248]) {
      fVar1 = (float)param_1[0x248] - (float)param_1[0x244];
      param_1[0x248] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        fVar7 = (float10)FUN_00dde300(0x40400000,0x40a00000);
        param_1[0x248] = (int)(float)fVar7;
        fVar7 = (float10)FUN_00a8ec30(param_1 + 0x46c);
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
      if ((param_1[0x47e] != 0) && (iVar3 = FUN_00907560(param_1 + 0x47e,0,0,0,0,0,0,0), iVar3 != 0)
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
      FUN_00468970(param_1 + 0x47e,0,&local_b0,&local_90,7,0,0,0,"em0040",0,0);
      HavokRayCastManager::set(local_60);
    }
    fVar1 = (float)param_1[0x25];
    fVar7 = (float10)FUN_00ddba30((float)param_1[0x249] - fVar1);
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)0.1 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar7;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00757c60();
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
      FUN_0075fad0(0xe);
      return;
    }
  }
  return;
}

// 007676C0  FUN_007676c0  size=454  [callgraph]
void __fastcall FUN_007676c0(int param_1)

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
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x11f4))) &&
      (*(int *)(param_1 + 0x1750) == 0)) && ((*(uint *)(param_1 + 0x11f4) & 0x20000000) == 0)) {
    if (*(float *)(param_1 + 0x928) * 1.5625 < *(float *)(param_1 + 0x11a4)) {
      FUN_0075fad0(2);
      return;
    }
    iVar2 = FUN_0075d100();
    if (iVar2 != 0) {
      FUN_0075fad0(2);
      return;
    }
    fVar1 = *(float *)(param_1 + 0x910) * 0.016666668 + *(float *)(param_1 + 0x924);
    *(float *)(param_1 + 0x924) = fVar1;
    if (2.5 < fVar1) {
LAB_00767763:
      FUN_0075fad0(0xe);
      return;
    }
    if (ABS(*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x92c)) < 0.08726646) {
      local_a4 = 0;
      if (0 < *(int *)(param_1 + 0x620)) {
        iVar2 = FUN_00907560(param_1 + 0x11f8,0,0,&local_a4,0,0,0,0);
        if (iVar2 != 0) {
          FUN_00910a40(local_a4);
          iVar2 = FUN_0091a9e0();
          if (iVar2 != 0) goto LAB_00767763;
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
      FUN_00468970(param_1 + 0x11f8,0,&local_a0,&local_80,7,0,0,0,"em0040",0,0);
      HavokRayCastManager::set(local_60);
      *(undefined4 *)(param_1 + 0x620) = 1;
    }
  }
  return;
}

// 00767890  FUN_00767890  size=137  [callgraph]
void __fastcall FUN_00767890(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     (((param_1[0x47d] & 0x20000000U) == 0 && (param_1[0x187] == 3)))) {
    FUN_00c4d1a0(param_1[0x13c],1);
    param_1[0x47d] = param_1[0x47d] & 0xffffffdf;
    if (param_1[0x2e1] == 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        FUN_0075fad0(0x89);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00767901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (*(int *)(&DAT_01647ab0 + param_1[0x2e1] * 4) != -1) {
      FUN_0075fad0(*(int *)(&DAT_01647ab0 + param_1[0x2e1] * 4));
    }
  }
  return;
}

// 00767920  FUN_00767920  size=108  [callgraph]
void __fastcall FUN_00767920(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     (((param_1[0x47d] & 0x20000000U) == 0 && (param_1[0x187] == 5)))) {
    param_1[0x47d] = param_1[0x47d] & 0xffffffdf;
    if (param_1[0x2e1] == 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        FUN_0075fad0(0x89);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00767977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (*(int *)(&DAT_01647ab0 + param_1[0x2e1] * 4) != -1) {
      FUN_0075fad0(*(int *)(&DAT_01647ab0 + param_1[0x2e1] * 4));
    }
  }
  return;
}

// 00767990  FUN_00767990  size=579  [callgraph]
void __fastcall FUN_00767990(int *param_1)

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
    param_1[0x47d] = param_1[0x47d] | 3;
    return;
  case 1:
    iVar4 = FUN_007520e0();
    if (iVar4 != 0) {
      FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if (param_1[0x1d9] != 0) {
        FUN_008e0ae0(0);
      }
      param_1[0x4f0] = 0;
      param_1[0x4f1] = 0x3f800000;
      param_1[0x4f2] = 0;
      param_1[0x4f3] = local_14;
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = (**(code **)(*param_1 + 0x84))();
    param_1[0x4eb] = (int)(*(float *)(iVar4 + 4) - (float)param_1[0x4ea]);
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
      param_1[0x4fc] = (int)((float)param_1[0x4f4] - *(float *)(iVar4 + 0x40));
      param_1[0x4fd] = (int)((float)param_1[0x4f5] - fVar1);
      param_1[0x4fe] = (int)((float)param_1[0x4f6] - fVar2);
      param_1[0x4ff] = (int)((float)param_1[0x4f7] - fVar3);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    param_1[0x15] = (int)((float)param_1[0x4fd] * 0.1 + (float)param_1[0x15]);
    param_1[0x4fd] = (int)((float)param_1[0x4fd] - (float)param_1[0x4fd] * 0.1);
    iVar4 = FUN_00a94db0(0x39);
    if (iVar4 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00760240(0);
      param_1[0x15] = (int)((float)param_1[0x4fd] + (float)param_1[0x15]);
      param_1[0x4fc] = 0;
      param_1[0x4fd] = 0;
      param_1[0x4fe] = 0;
      param_1[0x4ff] = 0;
      param_1[0x47d] = param_1[0x47d] & 0xfffffffe;
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

// 00767BF0  FUN_00767bf0  size=354  [callgraph]
void __fastcall FUN_00767bf0(int *param_1)

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
    FUN_0075a490(param_1 + 0x47f);
    return;
  }
  if (iVar2 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    piVar1 = param_1 + 0x47f;
    iVar2 = FUN_0075a350(piVar1);
    if (iVar2 == 0) {
      FUN_0075a490(piVar1);
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
      FUN_00766c00();
      if (((param_1[0x128] == 5) && (param_1[0x186] == 0x7e)) &&
         ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
        FUN_0075fad0(0x89);
        return;
      }
    }
  }
  return;
}

// 00767D60  FUN_00767d60  size=316  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00767d60(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_28 [3];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((*(int *)(param_1 + 0x61c) != 0) && ((*(uint *)(param_1 + 0x11f4) & 0x20000000) == 0)) &&
     ((*(byte *)(param_1 + 0xb00) & 4) == 0)) {
    local_28[2] = *(undefined4 *)(param_1 + 0x40);
    local_1c = *(undefined4 *)(param_1 + 0x44);
    local_18 = *(undefined4 *)(param_1 + 0x48);
    local_14 = *(undefined4 *)(param_1 + 0x4c);
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_00ac81f0(local_28 + 2,local_28,local_28 + 1);
    if (local_28[0] == 0) {
      iVar1 = FUN_00a9b930();
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
      piVar2 = (int *)FUN_00a9b930();
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
        FUN_0075fad0(0x2a);
      }
    }
  }
  return;
}

// 00767EA0  FUN_00767ea0  size=94  [callgraph]
void __fastcall FUN_00767ea0(int param_1)

{
  float fVar1;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x11f4))) &&
      (*(int *)(param_1 + 0x1750) == 0)) && ((*(uint *)(param_1 + 0x11f4) & 0x20000000) == 0)) {
    if (*(int *)(param_1 + 0x13a0) == 0) {
      *(undefined4 *)(param_1 + 0x92c) = 0x41200000;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x92c) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x92c) = fVar1;
      if (fVar1 <= 0.0) {
        FUN_0075fad0(0x1a);
        return;
      }
    }
  }
  return;
}

// 00767F00  FUN_00767f00  size=796  [callgraph]
void __thiscall FUN_00767f00(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  
  if ((param_1[0x47d] & 0x100U) != 0) {
    if (param_1[0x1d9] == 0) {
      return;
    }
    FUN_008e0ae0(1);
    return;
  }
  iVar4 = FUN_0075fe60();
  uVar3 = param_2;
  if (iVar4 != 0) {
    return;
  }
  fVar6 = (float10)FUN_00a8ec30(param_2);
  param_2 = (float)fVar6;
  iVar4 = (**(code **)(*param_1 + 0x84))();
  fVar6 = (float10)FUN_00ddba30(*(float *)(iVar4 + 4) - param_2);
  if (ABS(fVar6) < (float10)0.2617994 != (ABS(fVar6) == (float10)0.2617994)) {
    iVar4 = FUN_00752050(&param_2);
    if (iVar4 != 0) {
      fVar6 = (float10)fpatan(-(float10)(float)param_1[0x4f0],-(float10)(float)param_1[0x4f2]);
      param_1[0x4f8] = (int)(float)fVar6;
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)(float)param_1[0x25]));
      if ((float10)0.2617994 < ABS(fVar6)) {
        param_1[0x5e2] = 3;
        param_1[0x4fa] = param_1[0x4f9];
        param_1[0x4f9] = 7;
        param_1[0x47d] = param_1[0x47d] | 0x100;
        return;
      }
      FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x4fa] = param_1[0x4f9];
      param_1[0x4f9] = 3;
      param_1[0x47d] = param_1[0x47d] | 0x100;
      FUN_00757e40(1);
      param_1[0x47d] = param_1[0x47d] | 2;
LAB_0076810b:
      if (param_1[0x1d9] == 0) {
        return;
      }
      FUN_008e0ae0(0);
      return;
    }
    if ((param_2 == 0.0) && (iVar4 = FUN_007520e0(), iVar4 != 0)) {
      fVar6 = (float10)fpatan((float10)(float)param_1[0x4f0],(float10)(float)param_1[0x4f2]);
      param_1[0x4f8] = (int)(float)fVar6;
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)(float)param_1[0x25]));
      if ((float10)0.2617994 < ABS(fVar6)) {
        param_1[0x5e2] = 5;
        FUN_00756c60(7);
        return;
      }
      FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00756c60(5);
      param_1[0x47d] = param_1[0x47d] & 0xfffffffd;
      FUN_00757e40(1);
      goto LAB_0076810b;
    }
  }
  if ((param_1[0x47d] & 0x200000U) == 0) {
    FUN_00755760(uVar3,0x3dcccccd);
    goto LAB_007681fb;
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
      if ((uVar5 & 1) != 0) goto LAB_0076817c;
      fVar1 = -1.0471976;
    }
  }
  else {
LAB_0076817c:
    fVar1 = 1.0471976;
  }
  fVar2 = (float)param_1[0x25];
  fVar6 = (float10)FUN_00ddba30((fVar1 + param_2) - fVar2);
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.1 + (float10)fVar2));
  param_1[0x25] = (int)(float)fVar6;
LAB_007681fb:
  iVar4 = (**(code **)(*param_1 + 0x84))();
  param_1[0x4eb] = (int)(*(float *)(iVar4 + 4) - (float)param_1[0x4ea]);
  return;
}

// 00768220  FUN_00768220  size=1056  [callgraph]
void __thiscall FUN_00768220(int *param_1,float *param_2)

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
  
  if ((param_1[0x47d] & 0x100U) == 0) {
    iVar3 = FUN_0075fe60();
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
      pfVar1 = (float *)(param_1 + 0x4f0);
      fVar2 = local_38 * (float)param_1[0x4f2] +
              (float)param_1[0x4f0] * local_40 + (float)param_1[0x4f1] * local_3c;
      if (ABS(fVar2) < 1e-05) {
        fVar2 = 1.0;
      }
      if (0.25 <= ABS(fVar2)) {
        if (0.0 <= fVar2) {
          param_1[0x47d] = param_1[0x47d] & 0xfffffffd;
        }
        else {
          param_1[0x47d] = param_1[0x47d] | 2;
        }
      }
      if (param_1[0x419] != 0) {
        param_1[0x4fa] = param_1[0x4f9];
        param_1[0x4f9] = 8;
        param_1[0x47d] = param_1[0x47d] | 0x100;
        return;
      }
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
      if ((*(byte *)(param_1 + 0x47d) & 2) == 0) {
        iVar3 = FUN_00752160();
        if (iVar3 != 0) {
          local_30 = *pfVar1 * -1.0;
          local_2c = (float)param_1[0x4f1] * -1.0;
          local_28 = (float)param_1[0x4f2] * -1.0;
          local_24 = (float)param_1[0x4f3] * -1.0;
          D3DXVec4Transform(local_20,&local_30,param_1 + 0x3c);
          fVar4 = (float10)fpatan((float10)local_2c,(float10)local_24);
          param_1[0x4f8] = (int)(float)fVar4;
          fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)(float)param_1[0x25]));
          if (ABS(fVar4) <= (float10)0.2617994) {
            FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            FUN_00756c60(6);
            if (param_1[0x1d9] != 0) {
              FUN_008e0ae0(0);
            }
            *pfVar1 = 0.0;
            param_1[0x4f1] = 0x3f800000;
            param_1[0x4f2] = 0;
            param_1[0x4f3] = local_20[0];
            return;
          }
          param_1[0x5e2] = 6;
          FUN_00756c60(7);
          return;
        }
        local_2c = -1.0;
      }
      else {
        iVar3 = FUN_007520e0();
        if (iVar3 != 0) {
          D3DXVec4Transform(&local_30,pfVar1,param_1 + 0x3c);
          fVar4 = (float10)fpatan((float10)local_3c,(float10)local_34);
          param_1[0x4f8] = (int)(float)fVar4;
          fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)(float)param_1[0x25]));
          if ((float10)0.2617994 < ABS(fVar4)) {
            param_1[0x5e2] = 4;
            FUN_00756c60(7);
            return;
          }
          *pfVar1 = 0.0;
          param_1[0x4f1] = 0x3f800000;
          param_1[0x4f2] = 0;
          param_1[0x4f3] = local_20[0];
          FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          FUN_00756c60(4);
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
      FUN_00755760(&local_30,0x3dcccccd);
      iVar3 = (**(code **)(*param_1 + 0x84))();
      param_1[0x4eb] = (int)(*(float *)(iVar3 + 4) - (float)param_1[0x4ea]);
    }
  }
  else if (param_1[0x1d9] != 0) {
    FUN_008e0ae0(1);
    return;
  }
  return;
}

// 00768640  FUN_00768640  size=478  [callgraph]
void __fastcall FUN_00768640(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if ((*(uint *)(param_1 + 0x11f4) & 0x100) == 0) {
    fVar1 = *(float *)(param_1 + 0x13f0) * 0.1;
    fVar2 = *(float *)(param_1 + 0x13f4) * 0.1;
    fVar3 = *(float *)(param_1 + 0x13f8) * 0.1;
    fVar4 = *(float *)(param_1 + 0x13fc) * 0.1;
    *(float *)(param_1 + 0x50) = fVar1 + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar2;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + fVar3;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar4;
    *(float *)(param_1 + 0x13f0) = *(float *)(param_1 + 0x13f0) - fVar1;
    *(float *)(param_1 + 0x13f4) = *(float *)(param_1 + 0x13f4) - fVar2;
    *(float *)(param_1 + 0x13f8) = *(float *)(param_1 + 0x13f8) - fVar3;
    *(float *)(param_1 + 0x13fc) = *(float *)(param_1 + 0x13fc) - fVar4;
    iVar5 = FUN_00a94db0(0x38);
    if (iVar5 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x13e4);
      *(undefined4 *)(param_1 + 0x13e4) = 2;
      *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x13f0) + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x13f4);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x13f8);
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x13fc);
      *(undefined4 *)(param_1 + 0x13f0) = 0;
      *(undefined4 *)(param_1 + 0x13f4) = 0;
      *(undefined4 *)(param_1 + 0x13f8) = 0;
      *(undefined4 *)(param_1 + 0x13fc) = 0;
      FUN_00760240(0);
    }
  }
  else {
    iVar5 = FUN_00a12210(0xf00);
    if (iVar5 != 0) {
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      *(float *)(param_1 + 0x13f0) = *(float *)(param_1 + 0x13d0) - *(float *)(iVar5 + 0x40);
      *(float *)(param_1 + 0x13f4) = *(float *)(param_1 + 0x13d4) - fVar1;
      *(float *)(param_1 + 0x13f8) = *(float *)(param_1 + 0x13d8) - fVar2;
      *(float *)(param_1 + 0x13fc) = *(float *)(param_1 + 0x13dc) - fVar3;
      *(undefined4 *)(param_1 + 0x13f4) = 0;
      return;
    }
  }
  return;
}

// 00768820  FUN_00768820  size=396  [callgraph]
void __thiscall FUN_00768820(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if ((param_1[0x47d] & 0x100U) == 0) {
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x4fd] * 0.1);
    param_1[0x4fd] = (int)((float)param_1[0x4fd] - (float)param_1[0x4fd] * 0.1);
    iVar4 = FUN_00a94db0(0x39);
    if (iVar4 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(param_3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x4fa] = param_1[0x4f9];
      param_1[0x4f9] = 1;
      param_1[0x47d] = param_1[0x47d] | 0x100;
      FUN_00760240(0);
      param_1[0x15] = (int)((float)param_1[0x4fd] + (float)param_1[0x15]);
      param_1[0x4fc] = 0;
      param_1[0x4fd] = 0;
      param_1[0x4fe] = 0;
      param_1[0x4ff] = 0;
      param_1[0x47d] = param_1[0x47d] & 0xfffffffe;
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
      param_1[0x4fc] = (int)((float)param_1[0x4f4] - *(float *)(iVar4 + 0x40));
      param_1[0x4fd] = (int)((float)param_1[0x4f5] - fVar1);
      param_1[0x4fe] = (int)((float)param_1[0x4f6] - fVar2);
      param_1[0x4ff] = (int)((float)param_1[0x4f7] - fVar3);
      return;
    }
  }
  return;
}

// 007689B0  FUN_007689b0  size=478  [callgraph]
void __fastcall FUN_007689b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if ((*(uint *)(param_1 + 0x11f4) & 0x100) == 0) {
    fVar1 = *(float *)(param_1 + 0x13f0) * 0.1;
    fVar2 = *(float *)(param_1 + 0x13f4) * 0.1;
    fVar3 = *(float *)(param_1 + 0x13f8) * 0.1;
    fVar4 = *(float *)(param_1 + 0x13fc) * 0.1;
    *(float *)(param_1 + 0x50) = fVar1 + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar2;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + fVar3;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar4;
    *(float *)(param_1 + 0x13f0) = *(float *)(param_1 + 0x13f0) - fVar1;
    *(float *)(param_1 + 0x13f4) = *(float *)(param_1 + 0x13f4) - fVar2;
    *(float *)(param_1 + 0x13f8) = *(float *)(param_1 + 0x13f8) - fVar3;
    *(float *)(param_1 + 0x13fc) = *(float *)(param_1 + 0x13fc) - fVar4;
    iVar5 = FUN_00a94db0(0x39);
    if (iVar5 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x13e8) = *(undefined4 *)(param_1 + 0x13e4);
      *(undefined4 *)(param_1 + 0x13e4) = 2;
      *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
      FUN_00760240(0);
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x13f0) + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x13f4);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x13f8);
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x13fc);
      *(undefined4 *)(param_1 + 0x13f0) = 0;
      *(undefined4 *)(param_1 + 0x13f4) = 0;
      *(undefined4 *)(param_1 + 0x13f8) = 0;
      *(undefined4 *)(param_1 + 0x13fc) = 0;
    }
  }
  else {
    iVar5 = FUN_00a12210(0xf00);
    if (iVar5 != 0) {
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      *(float *)(param_1 + 0x13f0) = *(float *)(param_1 + 0x13d0) - *(float *)(iVar5 + 0x40);
      *(float *)(param_1 + 0x13f4) = *(float *)(param_1 + 0x13d4) - fVar1;
      *(float *)(param_1 + 0x13f8) = *(float *)(param_1 + 0x13d8) - fVar2;
      *(float *)(param_1 + 0x13fc) = *(float *)(param_1 + 0x13dc) - fVar3;
      *(undefined4 *)(param_1 + 0x13f4) = 0;
      return;
    }
  }
  return;
}

// 00768B90  FUN_00768b90  size=396  [callgraph]
void __thiscall FUN_00768b90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if ((param_1[0x47d] & 0x100U) == 0) {
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x4fd] * 0.1);
    param_1[0x4fd] = (int)((float)param_1[0x4fd] - (float)param_1[0x4fd] * 0.1);
    iVar4 = FUN_00a94db0(0x38);
    if (iVar4 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(param_3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x4fa] = param_1[0x4f9];
      param_1[0x4f9] = 1;
      param_1[0x47d] = param_1[0x47d] | 0x100;
      param_1[0x15] = (int)((float)param_1[0x4fd] + (float)param_1[0x15]);
      param_1[0x4fc] = 0;
      param_1[0x4fd] = 0;
      param_1[0x4fe] = 0;
      param_1[0x4ff] = 0;
      FUN_00760240(0);
      param_1[0x47d] = param_1[0x47d] & 0xfffffffe;
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
      param_1[0x4fc] = (int)((float)param_1[0x4f4] - *(float *)(iVar4 + 0x40));
      param_1[0x4fd] = (int)((float)param_1[0x4f5] - fVar1);
      param_1[0x4fe] = (int)((float)param_1[0x4f6] - fVar2);
      param_1[0x4ff] = (int)((float)param_1[0x4f7] - fVar3);
      return;
    }
  }
  return;
}

// 00768D20  FUN_00768d20  size=275  [callgraph]
void __fastcall FUN_00768d20(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  undefined *puVar4;
  
  switch(param_1[299]) {
  case 0:
    FUN_00766c00();
    return;
  case 1:
    FUN_0075fad0(0x4d);
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
    FUN_0075fad0(0x8b);
    FUN_00c4d1a0(param_1[0x13c],0);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(unaff_ESI), piVar2 != (int *)0x0)) {
      puVar4 = &DAT_01b34e80;
      (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
      FUN_00dd6d80(puVar4);
    }
    uVar3 = FUN_00a81330();
    FUN_0075b6f0(uVar3);
    return;
  case 7:
    FUN_0075fad0(0x51);
    return;
  case 8:
    FUN_0075fad0(0x52);
    return;
  case 9:
    FUN_0075fad0(0x53);
    return;
  }
  FUN_0075fad0(uVar3);
  (**(code **)(*param_1 + 200))(0);
  FUN_00c4d1a0(param_1[0x13c],0);
  return;
}

// 00768E10  FUN_00768e10  size=242  [callgraph]
void __fastcall FUN_00768e10(int param_1)

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
  iVar1 = FUN_0090dc50((undefined4 *)(param_1 + 0x13d0),param_1 + 0x13c0,0,&local_20,&local_30,
                       iVar1 << 0x10 | 0x1e,"em0040WallStick");
  if (iVar1 != 0) {
    FUN_00760240(1);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x13d0);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x13d4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x13d8);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x13dc);
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 1;
    return;
  }
  FUN_00dd5650(&DAT_01646dbc);
  return;
}

// 00768F10  FUN_00768f10  size=88  [callgraph]
void __fastcall FUN_00768f10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if ((*(byte *)(param_1 + 0x11f7) & 1) == 0) {
    iVar1 = FUN_00ac89d0();
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    uVar2 = FUN_00a8c890(0);
    FUN_004117d0(0x37,iVar1,uVar2);
    FUN_00a963e0(local_160);
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x1000000;
  }
  return;
}

// 00768F70  FUN_00768f70  size=149  [callgraph]
void __fastcall FUN_00768f70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if ((*(uint *)(param_1 + 0x11f4) & 0x4000000) == 0) {
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
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x4000000;
  }
  return;
}

// 00769010  FUN_00769010  size=677  [callgraph]
void __fastcall FUN_00769010(int param_1)

{
  float *pfVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  uint uVar12;
  int local_c;
  float *local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 0x10c4) == 0) goto LAB_007692aa;
  piVar2 = (int *)(param_1 + 0xf70 + *(int *)(param_1 + 0x10c0) * 0x30);
  pfVar1 = (float *)(piVar2 + 4);
  local_c = 0;
  FUN_00907640(param_1 + 0x10c4,&local_c,pfVar1);
  *piVar2 = 0;
  piVar2[1] = 0;
  if ((local_c != 0) && (0 < *(int *)(local_c + 0x14))) {
    FUN_0112bcf0();
    *piVar2 = 1;
  }
  if (*(int *)(param_1 + 0x10c4) == 0) goto LAB_007692aa;
  switch(*(undefined4 *)(param_1 + 0x10c0)) {
  case 0:
    if (*piVar2 != 0) {
      local_8 = (float *)(piVar2 + 8);
      iVar7 = FUN_00760820(local_c,pfVar1,local_8,1,*(uint *)(param_1 + 0x11f4) >> 0x14 & 1);
      if (iVar7 != 0) {
        fVar4 = *pfVar1 - *(float *)(param_1 + 0x40);
        fVar5 = (float)piVar2[6] - *(float *)(param_1 + 0x48);
        if (fVar5 * fVar5 + fVar4 * fVar4 <= 0.36) {
          piVar2[1] = 1;
        }
        else {
          piVar2[1] = 0;
        }
      }
      if ((*(int *)(param_1 + 0x1034) != 0) &&
         (fVar10 = (float10)*local_8 * (float10)0 + (float10)local_8[1] +
                   (float10)local_8[2] * (float10)0,
         fVar9 = (float10)fcos((float10)1.1344640254974365), fVar9 < fVar10 != (fVar9 == fVar10))) {
        *(undefined4 *)(param_1 + 0x1034) = 0;
      }
    }
    break;
  case 1:
    piVar2[1] = 1;
    if ((*piVar2 != 0) && (iVar7 = 0, 0 < *(int *)(local_c + 0x14))) {
      local_8 = (float *)0x0;
      iVar8 = local_c;
      do {
        iVar6 = *(int *)(*(int *)(iVar8 + 0x10) + 0x28 + (int)local_8);
        if ((*(char *)(iVar6 + 0x18) == '\x01') &&
           (iVar6 = *(char *)(iVar6 + 0x10) + iVar6, iVar6 != 0)) {
          FUN_00910a40(iVar6);
          iVar6 = FUN_007607c0(local_4,1);
          iVar8 = local_c;
          if (iVar6 != 0) goto LAB_0076923b;
        }
        local_8 = local_8 + 0xc;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar8 + 0x14));
    }
    break;
  case 2:
    if (*piVar2 != 0) {
      uVar12 = *(uint *)(param_1 + 0x11f4) & 1;
      uVar11 = 0;
LAB_007691e5:
      iVar7 = FUN_00760820(local_c,pfVar1,piVar2 + 8,uVar11,uVar12);
      if (iVar7 != 0) {
        piVar2[1] = 1;
      }
    }
    break;
  case 3:
    if (*piVar2 != 0) {
      uVar12 = 1;
      uVar11 = 1;
      goto LAB_007691e5;
    }
    break;
  case 4:
    piVar2[1] = (uint)(*piVar2 == 0);
    if ((*(int *)(param_1 + 0xf70) != 0) &&
       (fVar10 = (float10)*(float *)(param_1 + 0xf90) * (float10)0 +
                 (float10)*(float *)(param_1 + 0xf94) +
                 (float10)*(float *)(param_1 + 0xf98) * (float10)0,
       fVar9 = (float10)fcos((float10)1.1344640254974365), fVar9 < fVar10 != (fVar9 == fVar10))) {
LAB_0076923b:
      piVar2[1] = 0;
    }
    break;
  case 5:
    piVar2[1] = (uint)(*piVar2 == 0);
    break;
  case 6:
    piVar2[1] = *piVar2;
  }
  *(int *)(param_1 + 0x10c0) = *(int *)(param_1 + 0x10c0) + 1;
  iVar7 = *(int *)(param_1 + 0x10c0);
  if ((*(byte *)(param_1 + 0x11f4) & 1) == 0) {
    while ((0 < iVar7 && ((iVar7 < 4 || (iVar7 == 5))))) {
      puVar3 = (undefined4 *)(param_1 + 0xf70 + iVar7 * 0x30);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(int *)(param_1 + 0x10c0) = *(int *)(param_1 + 0x10c0) + 1;
      iVar7 = *(int *)(param_1 + 0x10c0);
    }
  }
  if (6 < iVar7) {
    *(undefined4 *)(param_1 + 0x10c0) = 0;
  }
LAB_007692aa:
  FUN_00757030();
  return;
}

// 007692E0  FUN_007692e0  size=239  [callgraph]
undefined4 __fastcall FUN_007692e0(int *param_1)

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
      iVar1 = FUN_00759240(piVar4);
      if (iVar1 != 0) {
        if (iVar3 != 0) {
          param_1[0x570] = *(int *)(iVar3 + 0x40);
          param_1[0x571] = *(int *)(iVar3 + 0x44);
          param_1[0x572] = *(int *)(iVar3 + 0x48);
          param_1[0x573] = *(int *)(iVar3 + 0x4c);
        }
        param_1[0x56c] = piVar4[8];
        param_1[0x56d] = piVar4[9];
        param_1[0x56e] = piVar4[10];
        param_1[0x56f] = piVar4[0xb];
        (**(code **)(*param_1 + 0x198))(iVar3,piVar4,0x100);
        return 1;
      }
    }
    piVar4 = piVar4 + 0x54;
  } while( true );
}

// 007693D0  FUN_007693d0  size=202  [callgraph]
undefined4 __fastcall FUN_007693d0(int *param_1)

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
        iVar1 = FUN_00759240(piVar4);
        if (iVar1 != 0) {
          (**(code **)(*param_1 + 0x198))(uVar3,piVar4,0x100);
          param_1[0x56c] = piVar4[8];
          param_1[0x56d] = piVar4[9];
          param_1[0x56e] = piVar4[10];
          param_1[0x56f] = piVar4[0xb];
        }
        return 1;
      }
    }
    piVar4 = piVar4 + 0x54;
  } while (piVar4 != piVar2);
  return 0;
}

// 007694A0  FUN_007694a0  size=2498  [callgraph]
undefined4 __thiscall FUN_007694a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if ((param_1[0x128] == 0xe) || (param_1[0x128] == 0xf)) {
    param_1[0x474] = param_1[0x474] + 1;
    iVar1 = FUN_00a8eea0();
    iVar2 = FUN_00a8eeb0();
    uVar3 = (uint)param_2[0x23] >> 0x11 & 1;
    if (((((float)iVar1 / (float)iVar2 < (float)param_1[0x5a6]) &&
         (((param_2[0x24] & 0x2000000U) != 0 && (*param_2 != 0x1f)))) || (param_1[0x139] != 0)) ||
       (uVar3 != 0)) {
      if (param_1[0x128] == 0xf) {
        if (uVar3 == 0) {
          uVar5 = 0x2d;
          if (param_1[0x139] != 0) {
            uVar5 = 0x3c;
          }
        }
        else {
          uVar5 = 0x34;
          if (param_1[0x139] != 0) {
            uVar5 = 0x42;
          }
        }
        FUN_00ac8ab0();
        param_1[0x24] = 0;
        param_1[0x477] = -1;
        FUN_0075e470();
        if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
          param_1[0x34a] = 1;
          FUN_00a88b50(4,1);
          param_1[0x34a] = 0;
        }
        FUN_0075fad0(uVar5);
        if (param_1[0x1d9] != 0) {
          FUN_008e5c50(7);
          param_1[0x5d8] = 0;
          param_1[0x5d9] = 0;
          param_1[0x5da] = 0;
          param_1[0x5db] = 0;
          FUN_008e0d30(param_1 + 0x5d8);
        }
        FUN_00e5e0c0("em0040_vo_separate",param_1,0xffffffff,0);
        FUN_00c81b30(0x4f);
        piVar4 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar4 + 0x44))(0xb,0);
      }
      else {
        if (uVar3 == 0) {
          FUN_00762300(0x31);
        }
        else {
          uVar5 = 0x3b;
          if (param_1[0x139] != 0) {
            uVar5 = 0x3c;
          }
          FUN_00ac8ab0();
          param_1[0x24] = 0;
          param_1[0x477] = -1;
          FUN_0075e470();
          if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
            param_1[0x34a] = 1;
            FUN_00a88b50(4,1);
            param_1[0x34a] = 0;
          }
          FUN_0075fad0(uVar5);
          if (param_1[0x1d9] != 0) {
            FUN_008e5c50(7);
            param_1[0x5d8] = 0;
            param_1[0x5d9] = 0;
            param_1[0x5da] = 0;
            param_1[0x5db] = 0;
            FUN_008e0d30(param_1 + 0x5d8);
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
      param_1[0x482] = 2;
      if (uVar3 == 0) {
        FUN_007652c0(9);
        return 0;
      }
      FUN_007652c0(10);
      return 0;
    }
    if (*param_2 == 0x4f) {
      if (param_1[0x128] == 0xf) {
        uVar5 = 0x6e;
      }
      else {
        uVar5 = 0x6d;
      }
      FUN_0075fad0(uVar5);
      FUN_007652c0(6);
      return 0x21;
    }
    iVar1 = FUN_00a8c760(0x10);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_0075d140();
    if ((iVar1 != 0) && (iVar1 = FUN_00a8c760(0x10), iVar1 != 0)) {
      return 0;
    }
    if (param_1[0x128] != 0xf) {
      FUN_0075fad0(0x6d);
      FUN_007652c0(6);
      return 0;
    }
    FUN_0075fad0(0x6e);
    FUN_007652c0(6);
    return 0;
  }
  iVar1 = *param_2;
  if (iVar1 < 0x146) {
    if (iVar1 == 0x145) {
      FUN_00762300(0x31);
      return 1;
    }
    if (iVar1 == 0x59) {
LAB_00769e33:
      if (param_1[0x574] < 1) {
        return 0;
      }
      FUN_0075fad0(0xa5);
      param_1[0x575] = 0x83;
      return 1;
    }
    if (iVar1 == 0x144) {
      uVar5 = 0x2d;
      if (param_1[0x139] != 0) {
        uVar5 = 0x3c;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x477] = -1;
      FUN_0075e470();
      if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_0075fad0(uVar5);
      if (param_1[0x1d9] != 0) {
        FUN_008e5c50(7);
        param_1[0x5d8] = 0;
        param_1[0x5d9] = 0;
        param_1[0x5da] = 0;
        param_1[0x5db] = 0;
        FUN_008e0d30(param_1 + 0x5d8);
      }
      return 1;
    }
  }
  else if (iVar1 == 0x188) goto LAB_00769e33;
  if ((param_1[0x574] < 1) && ((param_1[0x47d] & 0x400000U) == 0)) {
    if ((param_2[0x23] & 0x20000U) != 0) {
      iVar1 = FUN_00751050();
      if (iVar1 != 0) {
        uVar5 = 0x39;
        if (param_1[0x139] != 0) {
          uVar5 = 0x43;
        }
        FUN_00ac8ab0();
        param_1[0x24] = 0;
        param_1[0x477] = -1;
        FUN_0075e470();
        if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
          param_1[0x34a] = 1;
          FUN_00a88b50(4,1);
          param_1[0x34a] = 0;
        }
        FUN_0075fad0(uVar5);
        if (param_1[0x1d9] == 0) {
          return 0;
        }
        FUN_008e5c50(7);
        param_1[0x5d8] = 0;
        param_1[0x5d9] = 0;
        param_1[0x5da] = 0;
        param_1[0x5db] = 0;
        FUN_008e0d30(param_1 + 0x5d8);
        return 0;
      }
      uVar5 = 0x34;
      if (param_1[0x139] != 0) {
        uVar5 = 0x42;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x477] = -1;
      FUN_0075e470();
      if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_0075fad0(uVar5);
      if (param_1[0x1d9] == 0) {
        return 0;
      }
      FUN_008e5c50(7);
      param_1[0x5d8] = 0;
      param_1[0x5d9] = 0;
      param_1[0x5da] = 0;
      param_1[0x5db] = 0;
      FUN_008e0d30(param_1 + 0x5d8);
      return 0;
    }
    iVar1 = FUN_00759460(param_2);
    if (iVar1 != 0) {
      FUN_00762300(0x30);
      param_1[0x47d] = param_1[0x47d] | 0x20000;
      return 0x40;
    }
    if ((param_2[0x24] & 0x1000000U) != 0) {
      FUN_00762300(0x33);
      param_1[0x47d] = param_1[0x47d] | 0x20000;
      return 0;
    }
    if ((param_2[0x24] & 0x800000U) != 0) {
      FUN_00762300(0x32);
      param_1[0x47d] = param_1[0x47d] | 0x20000;
      return 0x800;
    }
    iVar1 = FUN_007593f0(param_2);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar1 == 0) {
        if ((param_1[0x139] == 0) && (*param_2 == 0x59)) {
          return 0;
        }
        FUN_00762300(0x2f);
        return 0;
      }
      if (*(byte *)((int)param_2 + 0x11) < 7) {
        if ((param_1[0x139] == 0) && (*param_2 == 0x59)) {
          return 0;
        }
        uVar5 = 0x2d;
        if (param_1[0x139] != 0) {
          uVar5 = 0x3c;
        }
        FUN_00ac8ab0();
        param_1[0x24] = 0;
        param_1[0x477] = -1;
        FUN_0075e470();
        if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
          param_1[0x34a] = 1;
          FUN_00a88b50(4,1);
          param_1[0x34a] = 0;
        }
        FUN_0075fad0(uVar5);
        if (param_1[0x1d9] != 0) {
          FUN_008e5c50(7);
          param_1[0x5d8] = 0;
          param_1[0x5d9] = 0;
          param_1[0x5da] = 0;
          param_1[0x5db] = 0;
          FUN_008e0d30(param_1 + 0x5d8);
          param_1[0x47d] = param_1[0x47d] | 0x20000;
          return 0;
        }
      }
      else {
        uVar5 = 0x2e;
        if (param_1[0x139] != 0) {
          uVar5 = 0x3c;
        }
        FUN_00ac8ab0();
        param_1[0x24] = 0;
        param_1[0x477] = -1;
        FUN_0075e470();
        if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
          param_1[0x34a] = 1;
          FUN_00a88b50(4,1);
          param_1[0x34a] = 0;
        }
        FUN_0075fad0(uVar5);
        if (param_1[0x1d9] != 0) {
          FUN_008e5c50(7);
          param_1[0x5d8] = 0;
          param_1[0x5d9] = 0;
          param_1[0x5da] = 0;
          param_1[0x5db] = 0;
          FUN_008e0d30(param_1 + 0x5d8);
          param_1[0x47d] = param_1[0x47d] | 0x20000;
          return 0;
        }
      }
      goto LAB_00769e20;
    }
  }
  else {
    if ((0 < param_1[0x574]) && ((param_2[0x23] & 0x20000U) != 0)) {
      uVar5 = 0x39;
      if (param_1[0x139] != 0) {
        uVar5 = 0x43;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x477] = -1;
      FUN_0075e470();
      if ((param_1[0x205] < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_0075fad0(uVar5);
      if (param_1[0x1d9] == 0) {
        return 0;
      }
      FUN_008e5c50(7);
      param_1[0x5d8] = 0;
      param_1[0x5d9] = 0;
      param_1[0x5da] = 0;
      param_1[0x5db] = 0;
      FUN_008e0d30(param_1 + 0x5d8);
      return 0;
    }
    param_1[0x5df] = (uint)param_1[0x47d] >> 0x16 & 1;
    param_1[0x47d] = param_1[0x47d] & 0xff3fffff;
    if ((param_2[0x24] & 0x800000U) != 0) {
      FUN_00762300(0x32);
      param_1[0x47d] = param_1[0x47d] | 0x20000;
      return 0;
    }
  }
  FUN_00762300(0x31);
LAB_00769e20:
  param_1[0x47d] = param_1[0x47d] | 0x20000;
  return 0;
}

// 00769E70  FUN_00769e70  size=301  [callgraph]
undefined4 __thiscall FUN_00769e70(int param_1,int *param_2)

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
      FUN_00762300(0x31);
      goto LAB_00769f73;
    }
    if (*(int *)(param_1 + 0x618) != 0x35) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        return 0xffffffff;
      }
      uVar2 = 1;
      FUN_00ac8ab0();
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x11dc) = 0xffffffff;
      FUN_0075e470();
      if ((*(int *)(param_1 + 0x814) < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x59)) {
        *(undefined4 *)(param_1 + 0xd28) = 1;
        FUN_00a88b50(4,1);
        *(undefined4 *)(param_1 + 0xd28) = 0;
      }
      FUN_0075fad0(0x3c);
      if (*(int *)(param_1 + 0x764) != 0) {
        FUN_008e5c50(7);
        *(undefined4 *)(param_1 + 0x1760) = 0;
        *(undefined4 *)(param_1 + 0x1764) = 0;
        *(undefined4 *)(param_1 + 0x1768) = 0;
        *(undefined4 *)(param_1 + 0x176c) = 0;
        FUN_008e0d30((undefined4 *)(param_1 + 0x1760));
      }
      goto LAB_00769f73;
    }
    FUN_00a8ee20(0);
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    uVar3 = 0x45;
  }
  FUN_0075fad0(uVar3);
LAB_00769f73:
  *(undefined4 *)(param_1 + 0x1760) = 0;
  *(undefined4 *)(param_1 + 0x1764) = 0;
  *(undefined4 *)(param_1 + 0x1768) = 0;
  *(undefined4 *)(param_1 + 0x176c) = 0;
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e0d30((undefined4 *)(param_1 + 0x1760));
  }
  return uVar2;
}

// 00769FA0  FUN_00769fa0  size=208  [callgraph]
void __thiscall FUN_00769fa0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_164 [352];
  
  if ((param_1[0x47d] & 0x1000U) == 0) {
    param_1[0x47d] = param_1[0x47d] | 0x1000;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    (**(code **)(*param_1 + 200))(1);
    FUN_00756fd0();
    piVar1 = (int *)FUN_00ac89d0();
    if (piVar1 == (int *)0x0) {
      piVar1 = param_1;
    }
    uVar2 = FUN_00a8c890(0);
    FUN_004117d0((param_2 == 0) * '\b' + '\t',piVar1,uVar2);
    FUN_00a963e0(auStack_164);
    FUN_00e5e0c0("em0040_se_dmg_spark",param_1,0xffffffff,0);
    if (param_3 != 0) {
      FUN_007600b0();
    }
  }
  return;
}

// 0076A070  FUN_0076a070  size=411  [callgraph]
void __thiscall FUN_0076a070(int *param_1,int param_2,int param_3)

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
    FUN_00756fd0();
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
      FUN_00e013e0(0x2c040,uVar4,&local_130,uVar2);
    }
    iVar1 = FUN_00e5e0c0("em0040_se_dmg_explosion",param_1,0xffffffff,0);
    param_1[0x5d7] = iVar1;
    FUN_00a94bc0(0,0);
    (**(code **)(*param_1 + 0x20))();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    if ((*(byte *)((int)param_1 + 0x11f7) & 1) != 0) {
      FUN_00a8c9b0(0,0x37,0x3f800000,0);
      param_1[0x47d] = param_1[0x47d] & 0xfeffffff;
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
    FUN_007529d0();
  }
  return;
}

// 0076A210  FUN_0076a210  size=823  [callgraph]
void __fastcall FUN_0076a210(int *param_1)

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
    local_184 = (int *)0x76a23f;
    FUN_007593a0();
    local_184 = (int *)0x76a246;
    FUN_00757a80();
    local_184 = (int *)0x0;
    local_188 = (undefined1 *)0x76a24f;
    FUN_00751fb0();
    param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
    param_1[0x25] = param_1[0x475];
    local_184 = (int *)0x3f800000;
    local_188 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x28,0,0x3e4ccccd,0x3f800000,0x8038000);
    local_184 = (int *)0x1;
    local_188 = (undefined1 *)0x76a2a5;
    (**(code **)(*param_1 + 0x1f8))();
    local_184 = (int *)0x76a2ae;
    FUN_00e01ca0();
    local_184 = param_1 + 0x4b8;
    local_188 = (undefined1 *)0x76a2be;
    FUN_00dffb30();
    local_184 = (int *)auStack_120;
    local_188 = (undefined1 *)0x207;
    FUN_00e02d50(param_1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    local_184 = (int *)0x3f800000;
    local_188 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_184 = (int *)0x76a2f1;
    FUN_00756cc0();
    local_184 = (int *)0x0;
    local_188 = (undefined1 *)0x76a2fa;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      if (param_1[0x1d9] != 0) {
        local_184 = (int *)0x76a317;
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      local_184 = (int *)0x3d888889;
      local_188 = (undefined1 *)0x76a346;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_188 = auStack_174;
        FUN_00a92f90();
        FUN_0044fd10();
        local_188 = (undefined1 *)0x76a36d;
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
LAB_0076a433:
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
    local_188 = (undefined1 *)0x76a42b;
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 == 0) break;
    goto LAB_0076a433;
  case 3:
    local_184 = (int *)0x3f800000;
    local_188 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_184 = (int *)0x0;
    local_188 = (undefined1 *)0x76a461;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_184 = (int *)0x0;
      local_188 = (undefined1 *)0x0;
      (**(code **)(param_1[0x4b8] + 8))(0);
      uVar3 = 0x39;
      if (param_1[0x139] != 0) {
        uVar3 = 0x43;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x477] = -1;
      FUN_0075e470();
      if ((param_1[0x205] < 4) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x59)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_0075fad0(uVar3);
      if (param_1[0x1d9] != 0) {
        FUN_008e5c50(7);
        param_1[0x5d8] = 0;
        param_1[0x5d9] = 0;
        param_1[0x5da] = 0;
        param_1[0x5db] = 0;
        FUN_008e0d30(param_1 + 0x5d8);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  return;
}

// 0076A560  FUN_0076a560  size=330  [callgraph]
void __fastcall FUN_0076a560(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_007593a0();
    FUN_00757a30();
    uVar2 = FUN_00752980(param_1[0x245]);
    FUN_00aa3f60(uVar2);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00769fa0(0,1);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x248] = 0x3f333333;
  }
  else if (iVar3 != 1) {
    if (iVar3 == 2) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668;
      param_1[0x248] = (int)fVar1;
      if (fVar1 < 0.0) {
        FUN_0076a070(1,0);
        FUN_0075fad0(0x46);
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
    FUN_0076a070(1,0);
    FUN_0075fad0(0x46);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00757c60();
  return;
}

// 0076A6B0  FUN_0076a6b0  size=512  [callgraph]
void __fastcall FUN_0076a6b0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_007593a0();
    FUN_00757a80();
    FUN_00769fa0(0,1);
    uVar2 = 0x3e4ccccd;
    param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
    if (param_1[0x460] == 0x2f) {
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
      FUN_0076a070(1,0);
      FUN_0075fad0(0x46);
    }
  }
  return;
}

// 0076AA40  FUN_0076aa40  size=676  [callgraph]
void __fastcall FUN_0076aa40(int *param_1)

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
    local_74 = 1.0897717e-38;
    FUN_007593a0();
    local_74 = 1.0897727e-38;
    FUN_00757a80();
    local_74 = 1.4013e-45;
    local_78 = (undefined1 *)0x0;
    FUN_00769fa0();
    param_1[0x25] = param_1[0x475];
    local_74 = 1.0;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x28,0,0x3e4ccccd,0x3f800000,0x8038000);
    local_74 = 1.4013e-45;
    local_78 = (undefined1 *)0x76aac5;
    (**(code **)(*param_1 + 0x1f8))();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 1.0897894e-38;
    FUN_00756cc0();
    local_74 = 0.0;
    local_78 = (undefined1 *)0x76aaee;
    iVar2 = FUN_00a94ce0();
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x1d9] != 0) {
      local_74 = 1.0897947e-38;
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    local_74 = 0.06666667;
    local_78 = (undefined1 *)0x76ab3a;
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 == 0) {
      local_78 = auStack_64;
      FUN_00a92f90();
      FUN_0044fd10();
      local_78 = (undefined1 *)0x76ab7f;
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
    local_78 = (undefined1 *)0x76ac46;
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 != 0) {
      local_74 = 5.88545e-44;
      param_1[0x248] = 0x3f333333;
      param_1[0x187] = 3;
      local_78 = (undefined1 *)0x76ac69;
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
    local_78 = (undefined1 *)0x76acb8;
    iVar2 = FUN_00a94ce0();
    if ((iVar2 == 0) && (0.0 < (float)param_1[0x248])) {
      return;
    }
    break;
  default:
    goto switchD_0076aa5b_default;
  }
  local_74 = 0.0;
  local_78 = (undefined1 *)0x1;
  FUN_0076a070();
  local_74 = 9.80909e-44;
  local_78 = (undefined1 *)0x76acdf;
  FUN_0075fad0();
switchD_0076aa5b_default:
  return;
}

// 0076AD00  FUN_0076ad00  size=555  [callgraph]
void __fastcall FUN_0076ad00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_007593a0();
    FUN_00757a80();
    FUN_00769fa0(0,1);
    FUN_00aa9280(0x2d);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x489] = 0x3f19999a;
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar3 = (float10)-1.0;
    }
    else {
      fVar3 = (float10)FUN_00e36a50(0);
    }
    pcVar1 = *(code **)(*param_1 + 0x1f8);
    param_1[0x485] =
         (int)(float)((float10)(float)param_1[0x22a] * (float10)0.6 * fVar3 * (float10)60.0 *
                     (float10)0.9);
    (*pcVar1)(1);
    FUN_00751fb0(0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x489] = 0x3f99999a;
      FUN_00aa4120(0x2e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_0076a070(1,0);
      FUN_0075fad0(0x46);
    }
    FUN_00751d80();
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = param_1[0x485];
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
    FUN_00751d80();
    return;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) || ((float)param_1[0x248] <= 0.0)) {
      FUN_0076a070(1,0);
      FUN_0075fad0(0x46);
    }
  default:
    return;
  }
}

// 0076AF40  FUN_0076af40  size=575  [callgraph]
void __fastcall FUN_0076af40(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_007593a0();
    FUN_00757a80();
    FUN_00769fa0(0,1);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x225] = param_1[0x485];
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 == 0) {
      FUN_00751fb0(0);
      param_1[0x489] = 0x41200000;
      param_1[0x485] = -0x41800000;
      param_1[0x187] = 1;
      FUN_00aa4120(0x2e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      goto LAB_0076b062;
    }
    param_1[0x248] = 0x3f333333;
    FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 2;
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else {
    if (iVar1 == 1) {
LAB_0076b062:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x225] = param_1[0x485];
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
      FUN_00751d80();
      return;
    }
    if (iVar1 == 2) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
      iVar1 = FUN_00a94ce0(0);
      if ((iVar1 != 0) || ((float)param_1[0x248] <= 0.0)) {
        FUN_0076a070(1,0);
        FUN_0075fad0(0x46);
        return;
      }
    }
  }
  return;
}

// 0076B180  FUN_0076b180  size=325  [callgraph]
void __fastcall FUN_0076b180(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    FUN_007593a0();
    FUN_00757a80();
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
    FUN_0076a070(1,0);
    FUN_0075fad0(0x46);
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

// 0076B2D0  FUN_0076b2d0  size=280  [callgraph]
void __fastcall FUN_0076b2d0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_007593a0();
    FUN_00757a80();
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
      FUN_0076a070(1,0);
      FUN_0075fad0(0x46);
      return;
    }
    FUN_00aa4080(0x36,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  return;
}

// 0076B580  FUN_0076b580  size=46  [callgraph]
void __fastcall FUN_0076b580(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x1510) = *(float *)(param_1 + 0x1510) - *(float *)(param_1 + 0x910);
    FUN_00763ae0();
    return;
  }
  return;
}

// 0076B5B0  FUN_0076b5b0  size=1267  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0076b788) */
/* WARNING: Removing unreachable block (ram,0x0076b712) */
/* WARNING: Removing unreachable block (ram,0x0076b7d5) */

void __thiscall FUN_0076b5b0(int param_1,int param_2)

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
    iVar5 = FUN_00dd6d80(puVar13);
    if ((iVar5 != 0) && (iVar5 = FUN_00a12210(0), iVar5 != 0)) {
      pfVar1 = (float *)(iVar5 + 0x40);
      iStack_444 = iVar5;
      uVar7 = FUN_00e01ca0();
      FUN_00e013e0(0x20040,0x7c,pfVar1,uVar7);
      piVar2 = *(int **)(param_1 + 0xa84);
      fStack_474 = (float)piVar2[0x11];
      if (piVar2 != (int *)0x0) {
        puVar13 = &DAT_01be9c38;
        (**(code **)(*piVar2 + 4))(&DAT_01be9c38);
        iVar8 = FUN_00dd6d80(puVar13);
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
          fStack_490 = *(float *)(param_1 + 0x1650) * fVar3 + fStack_490;
          fStack_488 = fStack_488 + *(float *)(param_1 + 0x1658) * fVar3;
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
        *(undefined4 *)(param_1 + 0x15a0) = 0;
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
      fVar11 = (float10)FUN_00ddba30((float)(fVar11 + (float10)*(float *)(param_1 + 0x15a0)));
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

// 0076BAB0  FUN_0076bab0  size=1273  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0076bcc8) */
/* WARNING: Removing unreachable block (ram,0x0076be48) */

void FUN_0076bab0(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

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
    puStack_cc = (undefined1 *)0x76bcda;
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

// 0076BFB0  FUN_0076bfb0  size=357  [callgraph]
void __fastcall FUN_0076bfb0(int *param_1)

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
    FUN_00769fa0(0,1);
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
    FUN_0076a070(1,0);
    FUN_0075fad0(0x46);
  }
  return;
}

// 0076C510  FUN_0076c510  size=357  [callgraph]
void __fastcall FUN_0076c510(int *param_1)

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
    FUN_00769fa0(0,1);
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
    FUN_0076a070(1,0);
    FUN_0075fad0(0x46);
  }
  return;
}

// 0076CA70  FUN_0076ca70  size=357  [callgraph]
void __fastcall FUN_0076ca70(int *param_1)

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
    FUN_00769fa0(0,1);
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
    FUN_0076a070(1,0);
    FUN_0075fad0(0x46);
  }
  return;
}

// 0076CFD0  FUN_0076cfd0  size=442  [callgraph]
void __fastcall FUN_0076cfd0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00769fa0(0,1);
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
    FUN_0076a070(1,0);
    FUN_0075fad0(0x46);
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

// 0076D190  FUN_0076d190  size=964  [callgraph]
void __fastcall FUN_0076d190(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  undefined *puVar6;
  int iStack_24;
  float fStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
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
      iVar2 = FUN_00dd6d80(puVar6);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
    }
  }
  FUN_00a92f90();
  iVar2 = FUN_00e26e90();
  if (iVar2 == 0) {
    fVar5 = (float10)-1.0;
  }
  else {
    fVar5 = (float10)FUN_00e36970(0);
  }
  fVar1 = (float)(fVar5 * (float10)60.0);
  if (uVar4 == 0) {
    FUN_00dd5650(&DAT_01647ae4);
    FUN_00a805f0();
    return;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1a,0,0x3ecccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    iVar2 = FUN_00a12210(0xf00);
    if (iVar2 != 0) {
      iStack_24 = *(int *)(iVar2 + 0x40);
      iStack_1c = *(undefined4 *)(iVar2 + 0x48);
      uStack_18 = *(undefined4 *)(iVar2 + 0x4c);
      fStack_20 = *(float *)(iVar2 + 0x44) - 0.15;
      FUN_0076bab0(param_1 + 0x548,param_1 + 0x10,&iStack_24,0x3f000000,0);
    }
    param_1[0x248] = 0;
    FUN_00751fb0(0);
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
LAB_0076d38c:
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
    if ((float)param_1[0x546] < fVar1 == ((float)param_1[0x546] == fVar1)) {
      iVar2 = param_1[0x249];
      goto LAB_0076d38c;
    }
    FUN_00aa4520(0xf1,*(undefined4 *)(uVar4 + 0x4f0),0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
switchD_0076d25d_caseD_3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a12210(param_1[0x545]);
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
    if ((float)param_1[0x547] < fVar1 != ((float)param_1[0x547] == fVar1)) {
      FUN_0076b5b0(0x34);
      FUN_00753150();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x139] = 1;
switchD_0076d25d_caseD_4:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a12210(param_1[0x545]);
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
switchD_0076d25d_default:
    return;
  case 3:
    goto switchD_0076d25d_caseD_3;
  case 4:
    goto switchD_0076d25d_caseD_4;
  default:
    goto switchD_0076d25d_default;
  }
}

// 0076D570  FUN_0076d570  size=1825  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0076d570(int *param_1)

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
    iVar2 = FUN_00dd6d80(puVar16);
    if (iVar2 != 0) {
      if ((_DAT_01b357dc & 1) == 0) {
        _DAT_01b357dc = _DAT_01b357dc | 1;
        _DAT_01b357d8 = 0.04;
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
            FUN_0076bab0(param_1 + 0x548,param_1 + 0x10,&fStack_194,0x3f000000,0);
          }
          param_1[0x248] = 0;
          param_1[0x249] = 0;
          FUN_00751fb0(0);
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
        param_1[0x249] = (int)((float)param_1[0x244] * _DAT_01b357d8 + (float)param_1[0x249]);
        param_1[0x14] = (int)fStack_194;
        param_1[0x15] = (int)fStack_190;
        param_1[0x16] = (int)fStack_18c;
        iVar2 = FUN_00a952e0(0,0x42480000);
        if (iVar2 != 0) {
          iVar2 = FUN_004b55e0();
          param_1[0x564] = iVar2;
          if (-1 < iVar2) {
            param_1[0x47d] = param_1[0x47d] | 0x20000;
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
          param_1[0x47d] = param_1[0x47d] | 0x20000;
          param_1[0x47d] = param_1[0x47d] & 0xffffffbf;
          iVar2 = piVar3[0x13c];
          uVar14 = 0x3f800000;
          uVar13 = 0xbf800000;
          uVar12 = 0;
          uVar11 = 0x3f800000;
          uVar10 = 0x3e4ccccd;
          uVar5 = 0;
          uVar6 = FUN_004b5e10(param_1[0x564],iVar2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000)
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
          FUN_00ddba00(param_1 + 0x464,piVar3);
          param_1[0x25] = (int)fStack_18c;
          param_1[0x259] = (int)fStack_18c;
          uVar6 = *(undefined4 *)((int)fStack_190 + 0x4f0);
          uVar15 = 0x3f800000;
          uVar14 = 0xbf800000;
          uVar13 = 0x8000000;
          uVar12 = 0x3f800000;
          uVar11 = 0;
          uVar10 = 0;
          uVar5 = FUN_004b5e30(param_1[0x564],uVar6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          FUN_00aa4520(uVar5,uVar6,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
          FUN_009f8b10();
          FUN_008e6d00();
          uVar6 = 0;
          param_1[0x248] = 0;
          FUN_00a92f90(0);
          fVar9 = (float10)FUN_0043f390(uVar6);
          param_1[0x249] =
               (int)(float)((fVar9 - (float10)param_1[0x564] * (float10)0.016666668) * (float10)60.0
                           );
          FUN_00751fb0(0);
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
            piVar3 = param_1 + 0x464;
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
            FUN_00751fb0(1);
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
          FUN_0076a070(0,0);
          FUN_0075fad0(0x46);
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

// 0076DCD0  FUN_0076dcd0  size=256  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0076dcd0(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 0x4a0) == 5) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    *(float *)(param_1 + 0x1510) = *(float *)(param_1 + 0x1510) - *(float *)(param_1 + 0x910);
    FUN_00763ae0();
  }
  if (*(int *)(param_1 + 0x4a0) != 0x10) {
    iVar3 = FUN_00751480();
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xfdffffff;
    }
    else {
      *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x2000000;
    }
    FUN_00766980();
  }
  if ((*(int *)(param_1 + 0x4a0) == 0xe) || (*(int *)(param_1 + 0x4a0) == 0xf)) {
    bVar2 = false;
    iVar3 = FUN_00a8c760(4);
    if ((iVar3 != 0) ||
       ((iVar3 = FUN_0075d140(), iVar3 != 0 && (iVar3 = FUN_00a8c760(4), iVar3 != 0)))) {
      bVar2 = true;
    }
    if (((*(int *)(param_1 + 0x1750) == 0) && (bVar2)) && (iVar3 = FUN_00756a30(1), iVar3 != -1)) {
      if (*(int *)(param_1 + 0x4a0) == 0xf) {
        uVar4 = 0x6c;
      }
      else {
        uVar4 = 0x6b;
      }
      FUN_0075fad0(uVar4);
      FUN_007652c0(8);
    }
  }
  fVar1 = *(float *)(param_1 + 0x1774);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0x1774) = *(float *)(param_1 + 0x1774) - _DAT_01be942c;
  }
  return;
}

// 0076E3B0  FUN_0076e3b0  size=82  [callgraph]
void __fastcall FUN_0076e3b0(int *param_1)

{
  undefined4 uVar1;
  
  FUN_00a8ca80(0,0,0);
  uVar1 = FUN_004039a0(0x3d,param_1,0);
  FUN_00a963e0(uVar1);
  (**(code **)(*param_1 + 0x20))();
  param_1[0x3c2] = 0x40400000;
  return;
}

// 0076E410  FUN_0076e410  size=82  [callgraph]
void __fastcall FUN_0076e410(int *param_1)

{
  undefined4 uVar1;
  
  FUN_00a8ca80(0,0,0);
  uVar1 = FUN_004039a0(10,param_1,0);
  FUN_00a963e0(uVar1);
  (**(code **)(*param_1 + 0x20))();
  param_1[0x3c2] = 0x40400000;
  return;
}

// 0076E470  FUN_0076e470  size=214  [callgraph]
void __thiscall FUN_0076e470(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined1 local_1f0 [492];
  
  *(int *)(param_1 + 0xf00) = param_2;
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

// 0076E550  FUN_0076e550  size=373  [callgraph]
void __fastcall FUN_0076e550(int param_1)

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
        puVar9 = (undefined4 *)(param_1 + 0xec0);
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

// 0076E6D0  FUN_0076e6d0  size=415  [callgraph]
void __fastcall FUN_0076e6d0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    uVar3 = FUN_004039a0(0x2a,param_1,0);
    FUN_00a8c8b0(0x2c040,uVar3);
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
      *(undefined4 *)(param_1 + 0xf14) = 1;
      fVar4 = (float10)FUN_00dde300(0,0x40400000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(float *)(param_1 + 0xf10) = (float)(fVar4 + (float10)3.0);
      *(float *)(param_1 + 0xf0c) = (float)(fVar4 + (float10)3.0);
      return;
    }
  }
  else if (iVar2 == 2) {
    fVar1 = *(float *)(param_1 + 0xf0c);
    fVar4 = (float10)FUN_00a93060();
    fVar4 = (float10)fVar1 - fVar4;
    *(float *)(param_1 + 0xf0c) = (float)fVar4;
    if (fVar4 <= (float10)0) {
      FUN_0076e3b0();
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0xf0c) = 0;
      return;
    }
  }
  return;
}

// 0076E870  FUN_0076e870  size=154  [callgraph]
void __fastcall FUN_0076e870(int param_1)

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
    FUN_0076e550();
    break;
  case 0x91:
    FUN_0075c160();
    break;
  case 0x92:
    FUN_0076e6d0();
    break;
  case 0x93:
    FUN_007646f0();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0076E920  FUN_0076e920  size=142  [callgraph]
void __fastcall FUN_0076e920(int *param_1)

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
      param_1[0x3c2] = 0x40400000;
      (**(code **)(*param_1 + 0x20))();
      FUN_00a8caf0(0x9d,0,0,0);
    }
  }
  return;
}

// 0076E9B0  FUN_0076e9b0  size=128  [callgraph]
undefined4 __fastcall FUN_0076e9b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xf2c) = 0;
  *(undefined4 *)(param_1 + 0xf30) = 0;
  FUN_00a8caf0(0x97,0,0,0);
  FUN_00753c70();
  uVar2 = FUN_004039a0(4,param_1,0);
  FUN_00a963e0(uVar2);
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
  }
  return 1;
}

// 0076EA30  FUN_0076ea30  size=142  [callgraph]
void __fastcall FUN_0076ea30(int *param_1)

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
      param_1[0x3c2] = 0x40400000;
      (**(code **)(*param_1 + 0x20))();
      FUN_00a8caf0(0x9d,0,0,0);
    }
  }
  return;
}

// 0076EAC0  FUN_0076eac0  size=371  [callgraph]
undefined4 __fastcall FUN_0076eac0(int param_1)

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
  FUN_00753aa0();
  *(undefined4 *)(param_1 + 0xf18) = 0;
  *(undefined4 *)(param_1 + 0xf1c) = 0;
  *(undefined4 *)(param_1 + 0xf20) = 0;
  if (*(int *)(param_1 + 0x4ac) == 4) {
    *(undefined4 *)(param_1 + 0xf18) = 1;
    puVar3 = (undefined4 *)FUN_00dd3580(0x50,&DAT_01b7bd48);
    *(undefined4 **)(param_1 + 0xf1c) = puVar3;
    *puVar3 = 0x240004;
    *(int *)(param_1 + 0xf20) = *(int *)(param_1 + 0xf20) + 1;
    *(undefined4 *)(*(int *)(param_1 + 0xf1c) + 4) = 0x250005;
    *(int *)(param_1 + 0xf20) = *(int *)(param_1 + 0xf20) + 1;
    *(undefined4 *)(*(int *)(param_1 + 0xf1c) + 8) = 0x260006;
    *(int *)(param_1 + 0xf20) = *(int *)(param_1 + 0xf20) + 1;
    *(undefined4 *)(*(int *)(param_1 + 0xf1c) + 0xc) = 0x270007;
    *(int *)(param_1 + 0xf20) = *(int *)(param_1 + 0xf20) + 1;
    *(undefined4 *)(*(int *)(param_1 + 0xf1c) + 0x10) = 0x7020700;
    *(int *)(param_1 + 0xf20) = *(int *)(param_1 + 0xf20) + 1;
    FUN_00a95e20(*(undefined4 *)(param_1 + 0xf1c),*(undefined4 *)(param_1 + 0xf20));
  }
  uVar2 = FUN_00a82090(&DAT_01647b2c,0x40620,0);
  *(undefined4 *)(param_1 + 0xf24) = uVar2;
  FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),uVar2,0x701,0);
  return 1;
}

// 0076EC40  FUN_0076ec40  size=1305  [callgraph]
void __fastcall FUN_0076ec40(int *param_1)

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
    param_1[0x3d1] = 1;
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
  if ((param_1[0x3d1] != 0) && (param_1[0x3d1] = (uint)(3.0 < fStack_378), 3.0 < fStack_378 == 0)) {
    param_1[0x3d4] = (int)fStack_3c4;
    param_1[0x3d5] = (int)fStack_3c0;
    param_1[0x3d6] = (int)fStack_3bc;
    param_1[0x3d7] = (int)fStack_3b8;
    param_1[0x3d8] = 0x3f000000;
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
  if (param_1[0x3d1] == 0) {
    fStack_3a8 = (float)param_1[0x3d8];
    fStack_3b4 = (float)param_1[0x3d4] * fStack_3a8;
    fStack_3b0 = (float)param_1[0x3d5] * fStack_3a8;
    fStack_3ac = (float)param_1[0x3d6] * fStack_3a8;
    fStack_3a8 = fStack_3a8 * (float)param_1[0x3d7];
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
  if (param_1[0x3d1] != 0) {
    fVar6 = (float10)fpatan((float10)fStack_3bc - ((float10)(float)param_1[0x48] + fVar6),
                            (float10)fStack_3b4 - ((float10)(float)param_1[0x4a] + fVar1));
    param_1[0x25] = (int)(float)fVar6;
  }
  iVar3 = FUN_009f8b40();
  iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_4
                    (0,0,0,0,auStack_37c,&fStack_36c,iVar3 << 0x10 | 0x1e,&DAT_0163d54c);
  if (iVar3 != 0) {
    FUN_00c4d000(param_1[0x13c]);
    param_1[0x3d0] = 0;
    param_1[0x1bb] = 0;
    FUN_00a8c9b0(0,0x7a,0,0);
    FUN_00a8ca80(0,0,0);
    uVar7 = FUN_004039a0(0x3d,param_1,0);
    FUN_00a963e0(uVar7);
    (**(code **)(*param_1 + 0x20))();
    param_1[0x3c2] = 0x40400000;
    FUN_00a8caf0(0x9d,0,0,0);
  }
  return;
}

// 0076F160  FUN_0076f160  size=91  [callgraph]
void __fastcall FUN_0076f160(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xf0c) = 0x40800000;
  }
  else if (iVar1 == 1) {
    FUN_00a955a0(&DAT_01647b30,0x8c);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_0076e410();
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      DAT_01bea09c = DAT_01bea09c | 0x40000000;
      return;
    }
  }
  return;
}

// 0076F1C0  FUN_0076f1c0  size=637  [callgraph]
void __fastcall FUN_0076f1c0(int param_1)

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
      *(float *)(param_1 + 0xf68) = (float)(int)sVar3 * 0.1;
      return;
    }
    break;
  case 2:
    fVar7 = (float10)FUN_00a93060();
    fVar7 = (float10)*(float *)(param_1 + 0xf68) - fVar7;
    *(float *)(param_1 + 0xf68) = (float)fVar7;
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
      FUN_0075cbc0();
      *(undefined4 *)(param_1 + 0x4a0) = 3;
      *(undefined4 *)(param_1 + 0x4ac) = 2;
      HoldEntitySlot::HoldEntitySlot_4();
    }
  }
  return;
}

// 0076F480  FUN_0076f480  size=259  [callgraph]
undefined4 __fastcall FUN_0076f480(int param_1)

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
  FUN_00753c70();
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

// 0076F590  FUN_0076f590  size=271  [callgraph]
undefined4 __fastcall FUN_0076f590(int param_1)

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
  FUN_00a8c8b0(0x2c040,uVar1);
  FUN_00753c70();
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

// 0076F6A0  FUN_0076f6a0  size=490  [callgraph]
void __fastcall FUN_0076f6a0(int *param_1)

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
        puVar4 = &DAT_01b357f0;
        (**(code **)(*piVar3 + 4))(&DAT_01b357f0);
        iVar1 = FUN_00dd6d80(puVar4);
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

// 0076F890  Emc040::vf334  size=1418  [class]
void __thiscall Emc040::vf334(int *param_1,undefined4 param_2,int *param_3)

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
  
  EmBaseDLC::vf334(param_2,param_3);
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
    puVar10 = &DAT_01b357f0;
    (**(code **)(*piVar5 + 4))(&DAT_01b357f0);
    iVar7 = FUN_00dd6d80(puVar10);
    if ((iVar7 != 0) && (piVar5 != param_1)) {
      FUN_0040ac60(piVar5 + 0x2ac);
      param_1[0x56c] = piVar5[0x56c];
      param_1[0x56d] = piVar5[0x56d];
      param_1[0x56e] = piVar5[0x56e];
      param_1[0x56f] = piVar5[0x56f];
      param_1[0x570] = piVar5[0x570];
      param_1[0x571] = piVar5[0x571];
      param_1[0x572] = piVar5[0x572];
      param_1[0x573] = piVar5[0x573];
      param_1[0x577] = piVar5[0x577];
      uVar6 = FUN_009f8b40();
      FUN_00ac8a80(uVar6);
    }
  }
  FUN_009fd240();
  piVar5 = (int *)FUN_00ac8a30();
  param_1[0x576] = *piVar5;
  param_1[0x574] = piVar5[1];
  param_1[0x578] = piVar5[2];
  param_1[0x57a] = piVar5[3];
  bVar2 = false;
  param_1[0x579] = 0;
  if ((param_1[0x128] == 0xe) || (param_1[0x128] == 0xf)) {
    iVar7 = FUN_00a81330();
    if ((iVar7 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      puVar10 = &DAT_01b357f0;
      (**(code **)(*piVar5 + 4))(&DAT_01b357f0);
      iVar7 = FUN_00dd6d80(puVar10);
      if (iVar7 != 0) {
        FUN_00764f70(9,param_1);
      }
    }
    if (param_1[0x128] == 0xf) {
      FUN_00e5e0c0("em0040_vo_separate",param_1,0xffffffff,0);
      FUN_00c81b30(0x4f);
      piVar5 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar5 + 0x44))(0xb,0);
    }
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x128] = 3;
    param_1[0x482] = 2;
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
  local_30 = (float)param_1[0x570] - (float)param_1[0x10];
  local_2c = (float)param_1[0x571] - (float)param_1[0x11];
  local_28 = (float)param_1[0x572] - (float)param_1[0x12];
  local_24 = (float)param_1[0x573] - (float)param_1[0x13];
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
    fVar1 = (float)param_1[0x56e] * pfVar8[2] +
            *pfVar8 * (float)param_1[0x56c] + (float)param_1[0x56d] * pfVar8[1];
  }
  bVar3 = 0.0 <= fVar1;
  switch(param_1[0x576]) {
  case 0:
    iVar7 = 0xa3;
    param_1[0x575] = (-(uint)bVar3 & 0xfffffff6) + 0x89;
    break;
  case 1:
    iVar7 = 0xa3;
    param_1[0x575] = (-(uint)bVar3 & 0xfffffffb) + 0x8a;
    break;
  case 2:
    iVar7 = 0xa4;
    param_1[0x575] = 0x81;
    break;
  case 3:
    iVar7 = 0xa4;
    param_1[0x575] = 0x80;
    break;
  case 4:
    iVar7 = 0xa4;
    param_1[0x575] = (uint)!bVar3 * 2 + 0x82;
    break;
  case 5:
    iVar7 = 0xa5;
    param_1[0x575] = 0x83;
    break;
  case 6:
    param_1[0x5a4] = 0;
    iVar7 = 0xa2;
    bVar2 = true;
    param_1[0x575] = 0x7a - (uint)bVar3;
    break;
  case 7:
    param_1[0x5a4] = 0;
    iVar7 = 0xa2;
    bVar2 = true;
    param_1[0x575] = 0x7b;
    break;
  case 8:
    param_1[0x5a4] = 0;
    iVar7 = 0xa2;
    bVar2 = true;
    param_1[0x575] = 0x7d;
    break;
  case 9:
    param_1[0x5a4] = 0;
    iVar7 = 0xa2;
    bVar2 = true;
    param_1[0x575] = 0x7c;
    break;
  case 10:
    param_1[0x5a4] = 0;
    iVar7 = 0xa7;
    iVar9 = FUN_00a8cbe0(0x5e);
    if (iVar9 != 0) {
      iVar7 = 0xab;
    }
    bVar2 = true;
    param_1[0x579] = 1;
    if (iVar7 == -1) goto switchD_0076fc22_default;
    break;
  case 0xb:
    param_1[0x5a4] = 0;
    iVar7 = 0xa8;
    bVar2 = true;
    break;
  case 0xc:
    param_1[0x5a4] = 0;
    iVar7 = 0xa9;
    iVar9 = FUN_00a8cbe0(0x5e);
    if (iVar9 != 0) {
      iVar7 = 0xac;
    }
    break;
  case 0xd:
    param_1[0x5a4] = 0;
    iVar7 = 0xa2;
    bVar2 = true;
    param_1[0x575] = 0x83;
    param_1[0x579] = 1;
    break;
  default:
    goto switchD_0076fc22_default;
  }
  FUN_00a8caf0(iVar7,0,0,0);
switchD_0076fc22_default:
  param_1[0x47d] = param_1[0x47d] & 0xfbffffff;
  if (bVar2) {
    (**(code **)(*param_1 + 0x344))(10,1,1);
    return;
  }
  FUN_00768f70();
  return;
}

// 0076FE60  FUN_0076fe60  size=398  [between]
void __fastcall FUN_0076fe60(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x187] == 0) {
    FUN_007593a0();
    FUN_00757a80();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(param_1[0x575],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x575] == 0x83) {
      fVar2 = (float10)FUN_00dde300(0,0x3f800000);
      FUN_00a95e60(0,(float)(fVar2 * (float10)12.0 * (float10)0.016666668));
    }
    if (param_1[0x579] != 0) {
      FUN_0075e260();
    }
    FUN_00769fa0(0,1);
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
    FUN_0076a070(1,0);
    FUN_0075fad0(0x46);
  }
  return;
}

// 0076FFF0  FUN_0076fff0  size=429  [between]
void __fastcall FUN_0076fff0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_007593a0();
    FUN_00757a80();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(param_1[0x575],0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0x2b,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = (int)((float)param_1[0x5a5] * 60.0);
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)) {
      FUN_00769fa0(0,1);
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
      FUN_0076a070(1,0);
      FUN_0075fad0(0x46);
      return;
    }
  }
  return;
}

// 00770570  FUN_00770570  size=679  [between]
void __fastcall FUN_00770570(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_007593a0();
    FUN_00757a80();
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
    if (param_1[0x578] != 0) {
      FUN_00754360(0x3f19999a);
    }
    if (param_1[0x579] != 0) {
      FUN_0075e260();
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
    FUN_00769fa0(0,1);
    param_1[0x187] = 3;
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00769fa0(0,1);
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
    goto switchD_00770582_default;
  }
  FUN_0076a070(1,0);
  FUN_0075fad0(0x46);
switchD_00770582_default:
  return;
}

// 00770830  FUN_00770830  size=2118  [between]
void __fastcall FUN_00770830(int *param_1)

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
    FUN_007593a0();
    FUN_00757a80();
    FUN_00aa4080(0x28,0,0x3dcccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x24f] = 0x43960000;
    if (param_1[0x578] != 0) {
      FUN_00754360(0x3f19999a);
    }
    iVar9 = FUN_0075e0e0(&local_110);
    if (iVar9 != 0) {
      fStack_d0 = (float)param_1[0x570] - (float)param_1[0x10];
      fStack_cc = (float)param_1[0x571] - (float)param_1[0x11];
      fStack_c8 = (float)param_1[0x572] - (float)param_1[0x12];
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
      piVar1 = param_1 + 0x57c;
      FUN_00ddb9f0(piVar1,auStack_bc);
      fVar10 = (float10)FUN_00a8ec30(param_1 + 0x570);
      fStack_c0 = (float)fVar10;
      iVar9 = (**(code **)(*param_1 + 0x84))();
      fVar10 = (float10)FUN_00ddba30(fStack_c0 - *(float *)(iVar9 + 4));
      D3DXMatrixRotationY(auStack_9c,(float)fVar10);
      D3DXMatrixMultiply(piVar1,auStack_a4,piVar1);
      D3DXMatrixScaling(auStack_70,0x3f400000,0x3f400000,0x3f400000);
      D3DXMatrixMultiply(piVar1,auStack_80,piVar1);
    }
    FUN_00769fa0(0,1);
    FUN_00751fb0(0);
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
    D3DXVec3TransformNormal(&local_110,&local_110,param_1 + 0x57c);
    fVar4 = (float)param_1[0x588];
    fVar2 = (float)param_1[0x589];
    fVar3 = (float)param_1[0x58a];
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
LAB_00771054:
    if (0.0 < fVar4) {
      return;
    }
    goto LAB_0077105b;
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
    D3DXVec3TransformNormal(&local_110,&local_110,param_1 + 0x57c);
    local_110 = (float)param_1[0x589] + local_110;
    local_10c = (float)param_1[0x58a] + local_10c;
    param_1[0x14] = (int)((float)param_1[0x588] + fStack_114 + local_104);
    param_1[0x15] = (int)(local_110 + local_100);
    param_1[0x16] = (int)(local_10c + local_fc);
    param_1[0x17] = (int)(local_108 + local_f8);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar9 = FUN_00a94ce0(0);
    if (iVar9 == 0) {
      fVar4 = (float)param_1[0x248];
      goto LAB_00771054;
    }
LAB_0077105b:
    FUN_0076a070(1,0);
    FUN_0075fad0(0x46);
    break;
  default:
    break;
  }
  return;
}

// 00771090  FUN_00771090  size=718  [between]
void __fastcall FUN_00771090(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_007593a0();
    FUN_00757a80();
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
    if (param_1[0x578] != 0) {
      FUN_00754360(0x3e3851ec);
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
      if (param_1[0x574] < 3) {
        uVar3 = 0x2b;
      }
      else {
        uVar3 = 0x86;
      }
      FUN_00aa4080(uVar3,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = (int)((float)param_1[0x5a5] * 60.0);
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)) {
      FUN_00769fa0(0,1);
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
      FUN_0076a070(1,0);
      FUN_0075fad0(0x46);
      return;
    }
  }
  return;
}

// 00771380  FUN_00771380  size=294  [between]
void __fastcall FUN_00771380(int *param_1)

{
  float fVar1;
  
  if (param_1[0x187] == 0) {
    FUN_007593a0();
    FUN_00757a80();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(8,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00769fa0(1,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)param_1[0x58c] * 60.0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x5d4] == 0) {
    FUN_007515a0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3e0efa35);
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_0075fad0(0x28);
  }
  return;
}

// 007714B0  Emc040::startup  size=198  [class]
void __fastcall Emc040::startup(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = EmBaseDLC::startup();
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x4b0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(uVar1,0x20040);
    switch(*(undefined4 *)(param_1 + 0x4a0)) {
    case 6:
    case 7:
      FUN_0075c6b0();
      break;
    case 8:
      FUN_0076eac0();
      break;
    case 9:
      FUN_0076e9b0();
      break;
    case 10:
      FUN_0075c9b0();
      break;
    case 0xb:
      FUN_0076f480();
      break;
    case 0xc:
      FUN_0075cb60();
      break;
    case 0xd:
      FUN_0076f590();
      break;
    default:
      HoldEntitySlot::HoldEntitySlot_4();
    }
    *(undefined4 *)(param_1 + 0x82c) = 0;
    *(undefined4 *)(param_1 + 0x830) = 0;
    *(undefined4 *)(param_1 + 0x878) = 0;
    *(undefined4 *)(param_1 + 0x87c) = 7;
    *(undefined4 *)(param_1 + 0x880) = 0x27;
    *(undefined4 *)(param_1 + 0x177c) = 0;
    *(undefined4 *)(param_1 + 0x178c) = 0;
    return;
  }
  return;
}

// 007715A0  Emc040::vf48  size=44  [class]
void __fastcall Emc040::vf48(int param_1)

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
    FUN_0076dcd0();
  }
  EmBaseDLC::vf48();
  return;
}

// 007715E0  Emc040::vf50  size=214  [class]
void __fastcall Emc040::vf50(int param_1)

{
  switch(*(int *)(param_1 + 0x4a0)) {
  case 6:
  case 7:
    FUN_0075c640();
    BehaviorEmBase::vf50();
    return;
  case 8:
    FUN_0076ea30();
    BehaviorEmBase::vf50();
    return;
  case 9:
    FUN_0076e920();
    BehaviorEmBase::vf50();
    return;
  case 10:
    FUN_0075c8d0();
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
    FUN_00762a70();
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

// 007716E0  Emc040::setEmSetInfo  size=586  [class]
undefined4 __thiscall Emc040::setEmSetInfo(int param_1,undefined4 param_2)

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
  if (*(int *)(param_1 + 0x4a0) != 5) goto LAB_0077187b;
  *(undefined4 *)(param_1 + 0x814) = 4;
  FUN_00a7c950();
  iVar1 = FUN_00c19c90(*(int *)(param_1 + 0xb9c) + -1,0,0x20110);
  if (iVar1 == 0) {
    iVar1 = FUN_00c19c90(*(int *)(param_1 + 0xb9c) + -3,0,0x20110);
    if (iVar1 != 0) goto LAB_007717e9;
    iVar1 = FUN_00c19c90(*(int *)(param_1 + 0xb9c) + -5,0,0x20110);
    if (iVar1 != 0) goto LAB_007717e9;
    iVar1 = FUN_00c19c90(0,0,0x20110);
    if (iVar1 != 0) goto LAB_007717e9;
    FUN_00dd5650(&DAT_01646e58);
    *(undefined4 *)(param_1 + 0x4a0) = 3;
  }
  else {
LAB_007717e9:
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x10b8) == 1) && ((*(byte *)(param_1 + 0xb00) & 2) == 0)) {
        uVar2 = FUN_00a81330();
        FUN_0075b6f0(uVar2);
      }
      *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x80000;
    }
  }
  *(undefined4 *)(param_1 + 0xd28) = 0;
  *(undefined4 *)(param_1 + 0x814) = 4;
  if ((*(byte *)(param_1 + 0xb00) & 2) != 0) {
    FUN_008e59c0(2);
  }
LAB_0077187b:
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
      FUN_0075e400();
    }
  }
  FUN_00768d20();
  if ((*(int *)(param_1 + 0x4a0) == 0xe) || (*(int *)(param_1 + 0x4a0) == 0xf)) {
    FUN_0076f6a0();
  }
  if (*(int *)(param_1 + 0xaf4) == 0x12) {
    if ((*(byte *)(param_1 + 0xb00) & 0x40) != 0) {
      FUN_0075fad0(0xb6);
      return 1;
    }
    FUN_0075fad0(0xb5);
  }
  return 1;
}

// 00771930  Emc040::vf1A4  size=350  [class]
void __thiscall Emc040::vf1A4(int param_1,int *param_2,byte param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 & 6) == 0) {
    if ((param_3 & 1) != 0) {
      if (*(int *)(param_1 + 0x4a0) == 10) {
        FUN_00a8caf0(0x9d,0,0,0);
        FUN_0076e3b0();
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
          FUN_0075fad0(0x6c);
          FUN_007652c0(8);
          return;
        }
        FUN_0075fad0(0x6b);
        FUN_007652c0(8);
        return;
      }
    }
    else {
      if (iVar1 == 10) {
        FUN_0075cb10();
        *(undefined4 *)(param_1 + 0x4a0) = 3;
        *(undefined4 *)(param_1 + 0x4ac) = 2;
        HoldEntitySlot::HoldEntitySlot_4();
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

// 00771A90  FUN_00771a90  size=235  [between]
undefined4 __fastcall FUN_00771a90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1208) == 2) {
    iVar2 = FUN_00c15850();
  }
  else {
    iVar2 = FUN_00c158c0();
  }
  if (iVar2 != 0) {
    switch(*(undefined4 *)(param_1 + 0x4a0)) {
    case 0:
      FUN_00c272a0(0x40a00000);
      FUN_0075fad0(0x1e);
      return 1;
    case 1:
      FUN_00c272a0(0x40a00000);
      FUN_0075fad0(0x1d);
      return 1;
    case 2:
      FUN_00c272a0(0x40a00000);
      FUN_0075fad0(0);
      return 1;
    case 3:
    case 5:
    case 0x10:
    case 0x11:
      iVar2 = FUN_007665c0();
      if (iVar2 != 0) {
        iVar2 = FUN_00755580();
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

// 00771BB0  FUN_00771bb0  size=462  [between]
void __fastcall FUN_00771bb0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x11f4))) &&
      (*(int *)(param_1 + 0x1750) == 0)) &&
     ((((*(uint *)(param_1 + 0x11f4) & 0x20000000) == 0 &&
       (*(float *)(param_1 + 0x924) * 0.1 <= *(float *)(param_1 + 0x920))) &&
      ((fVar1 = *(float *)(param_1 + 0x1674), NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0) &&
       (DAT_01bea740 == 0)))))) {
    if (*(int *)(param_1 + 0x1184) != -1) {
      FUN_0075fad0(*(int *)(param_1 + 0x1184));
      return;
    }
    iVar2 = FUN_007605e0();
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0x1208) == 2) && (iVar2 = FUN_00756a30(0), iVar2 != -1)) {
        FUN_0075fad0(iVar2);
        return;
      }
      if ((((*(uint *)(param_1 + 0x11f4) & 0x400) == 0) &&
          (((iVar2 = *(int *)(param_1 + 0x1208), iVar2 == 0 || (iVar2 == 1)) &&
           ((*(uint *)(param_1 + 0x11f4) & 8) == 0)))) &&
         ((*(float *)(param_1 + 0x11a4) <= *(float *)(&DAT_01882c88 + iVar2 * 0x14) &&
          (*(float *)(&DAT_01882c8c + iVar2 * 0x14) < *(float *)(param_1 + 0x11a4) !=
           (*(float *)(&DAT_01882c8c + iVar2 * 0x14) == *(float *)(param_1 + 0x11a4)))))) {
        FUN_0075fad0(0xd);
        return;
      }
      if (*(int *)(param_1 + 0x11a0) != 0) {
        fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x11a0) + 0x50);
        fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)*(float *)(param_1 + 0x94)));
        if ((float10)0.7853982 < ABS(fVar4)) {
          uVar3 = FUN_00752340(param_1 + 0x11b0);
          FUN_0075fad0(uVar3);
        }
      }
      iVar2 = FUN_00766690();
      if (((iVar2 == 0) && (iVar2 = FUN_007666f0(), iVar2 == 0)) &&
         ((*(float *)(param_1 + 0x924) <= *(float *)(param_1 + 0x920) &&
          ((((*(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14) <
              *(float *)(param_1 + 0x11a4) ==
              (*(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14) ==
              *(float *)(param_1 + 0x11a4)) && (3 < *(int *)(param_1 + 0x814))) &&
            (iVar2 = FUN_00771a90(), iVar2 == 0)) && (*(int *)(param_1 + 0x95c) == 0)))))) {
        *(undefined4 *)(param_1 + 0x95c) = 1;
        FUN_00766580();
        return;
      }
    }
  }
  return;
}

// 00771D80  FUN_00771d80  size=340  [between]
void __fastcall FUN_00771d80(int *param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x47d] = param_1[0x47d] | 0x20;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    return;
  case 1:
    fVar1 = (float)param_1[0x485];
    if (param_1[0x188] == 0) {
      piVar2 = (int *)FUN_00ac89d0();
      if (piVar2 == (int *)0x0) {
        piVar2 = param_1;
      }
      uVar3 = FUN_00a8c890(0);
      FUN_004117d0(8,piVar2,uVar3);
      FUN_00a963e0(local_160);
    }
    iVar4 = FUN_00756810(param_1 + 0x188,0x3e75c28f,0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3f800000;
      FUN_00aa3f60(5);
      return;
    }
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && ((float)param_1[0x485] < 0.0)) {
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
    goto switchD_00771da0_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_00771da0_default:
  return;
}

// 00771EF0  FUN_00771ef0  size=118  [between]
void __fastcall FUN_00771ef0(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x47d])) && (param_1[0x5d4] == 0)) &&
     (((param_1[0x47d] & 0x20000000U) == 0 && (param_1[0x187] == 2)))) {
    FUN_00768f70();
    if (param_1[0x2e1] == 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        FUN_0075fad0(0x89);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00771f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (*(int *)(&DAT_01647ab0 + param_1[0x2e1] * 4) != -1) {
      FUN_0075fad0(*(int *)(&DAT_01647ab0 + param_1[0x2e1] * 4));
    }
  }
  return;
}

// 00771F70  FUN_00771f70  size=356  [between]
void __fastcall FUN_00771f70(int param_1)

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
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x11f4))) &&
      (*(int *)(param_1 + 0x1750) == 0)) &&
     ((((*(uint *)(param_1 + 0x11f4) & 0x20000000) == 0 && (*(int *)(param_1 + 0x11a0) != 0)) &&
      ((iVar2 = FUN_0075d100(), iVar2 != 0 &&
       (*(float *)(param_1 + 0x11a4) <=
        *(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14))))))) {
    local_30 = *(float *)(param_1 + 0x11b0) - *(float *)(param_1 + 0x40);
    local_2c = *(float *)(param_1 + 0x11b4) - *(float *)(param_1 + 0x44);
    local_28 = *(float *)(param_1 + 0x11b8) - *(float *)(param_1 + 0x48);
    local_24 = *(float *)(param_1 + 0x11bc) - *(float *)(param_1 + 0x4c);
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
      FUN_00771a90();
    }
  }
  return;
}

// 007720E0  FUN_007720e0  size=1055  [between]
void __fastcall FUN_007720e0(int *param_1)

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
    FUN_0076bab0(param_1 + 0x548,param_1 + 0x10,&local_20,0x40266666,0);
    param_1[0x248] = 0;
    param_1[0x24a] = (int)((local_1c - (float)param_1[0x11]) - 2.6);
    FUN_00751fb0(0);
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
      FUN_0075fad0(0x89);
      return;
    }
  }
  return;
}

// 00772520  FUN_00772520  size=189  [between]
void __fastcall FUN_00772520(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x187] == 0) {
    FUN_00768e10();
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

// 007725E0  FUN_007725e0  size=251  [between]
undefined4 __thiscall FUN_007725e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x11f4);
  uVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0x13e4)) {
  case 0:
    FUN_0075fb90(param_2,param_3);
    break;
  case 1:
    FUN_00767f00(param_2,param_3);
    uVar2 = 1;
    break;
  case 2:
    FUN_00768220(param_2,param_3);
    break;
  case 3:
    FUN_00768640(param_2,param_3);
    break;
  case 4:
    FUN_00768820(param_2,param_3);
    break;
  case 5:
    FUN_007689b0(param_2,param_3);
    break;
  case 6:
    FUN_00768b90(param_2,param_3);
    break;
  case 7:
    FUN_0075fc00(param_2,param_3);
    break;
  case 8:
    FUN_0075fd10(param_2,param_3);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xfffffeff;
  }
  if (*(int *)(param_1 + 0x13e4) == 1) {
    return uVar2;
  }
  return 0;
}

// 00772870  FUN_00772870  size=1102  [between]
void __fastcall FUN_00772870(int param_1)

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
      FUN_007515a0(*(int *)(param_1 + 0xa84) + 0x40,iVar4,iVar1);
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
    FUN_00756cc0();
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
         ((*(int *)(param_1 + 0x11f8) != 0 &&
          (iVar4 = FUN_00907560(param_1 + 0x11f8,0,0,&local_9c,&local_94,0,0,0), iVar4 != 0)))) {
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
            if (iVar4 == local_98) goto LAB_00772c65;
          }
          if (!bVar6) {
            return;
          }
LAB_00772c65:
          *(undefined4 *)(param_1 + 0x61c) = 4;
          *(undefined4 *)(param_1 + 0x920) = 0x42100000;
          return;
        }
        if (bVar6) goto LAB_00772c65;
        goto LAB_00772ba9;
      }
      FUN_00468970(param_1 + 0x11f8,0,&local_90,&local_80,7,0,0,0,"em0040",0,0);
      HavokRayCastManager::set(local_60);
    }
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      FUN_00751670(0x3dcccccd,0x3c8efa35);
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
LAB_00772ba9:
  FUN_0076a070(1,0);
  FUN_0075fad0(0x46);
  return;
}

// 00772CE0  FUN_00772ce0  size=198  [between]
void __fastcall FUN_00772ce0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x4f9] = 0;
    param_1[0x4fa] = -1;
    param_1[0x47d] = param_1[0x47d] | 0x100;
    param_1[0x47d] = param_1[0x47d] & 0xffdfffff;
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
  iVar1 = FUN_007725e0(param_1 + 600,7);
  if (iVar1 == 0) {
    param_1[0x47d] = param_1[0x47d] | 0x80;
  }
  else {
    param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (((*(byte *)(param_1 + 0x47d) & 1) == 0) && (iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00772da1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00772DB0  FUN_00772db0  size=2409  [between]
void __fastcall FUN_00772db0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
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
    param_1[0x47d] = param_1[0x47d] | 0x20000;
    param_1[0x47d] = param_1[0x47d] & 0xffffffbf;
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0xbf800000;
    pfStack_5c = (float *)0x8000000;
    FUN_00aa4120(0x56,0,0x3d088889,0x3f800000);
    param_1[0x248] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    local_54 = (float *)0x772e3b;
    FUN_00757a30();
    local_54 = (float *)0x0;
    local_58 = (float *)0x772e44;
    FUN_00751fb0();
    local_54 = (float *)(param_1 + 0x2c);
    local_58 = (float *)(param_1 + 0x464);
    pfStack_5c = (float *)0x772e57;
    FUN_00ddba00();
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0x772e67;
    FUN_00ac80a0();
    local_54 = (float *)0x772e6e;
    FUN_00a92f90();
    local_54 = (float *)0x772e77;
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) {
      fVar6 = (float10)-1.0;
    }
    else {
      local_54 = (float *)0x0;
      local_58 = (float *)0x772e90;
      fVar6 = (float10)FUN_00e36a50();
    }
    local_54 = (float *)0x772e9b;
    FUN_00a92f90();
    local_54 = (float *)0x772ea4;
    iVar4 = FUN_00e26e90();
    if (iVar4 == 0) {
      fVar5 = (float10)-1.0;
    }
    else {
      local_54 = (float *)0x0;
      local_58 = (float *)0x772ebd;
      fVar5 = (float10)FUN_00e36970();
    }
    iVar4 = param_1[0x2a1];
    pfVar1 = (float *)(param_1 + 600);
    *pfVar1 = *(float *)(iVar4 + 0x40);
    param_1[0x259] = *(int *)(iVar4 + 0x44);
    param_1[0x25a] = *(int *)(iVar4 + 0x48);
    param_1[0x25b] = *(int *)(iVar4 + 0x4c);
    local_40 = *pfVar1 - (float)param_1[0x10];
    local_38 = (float)param_1[0x25a] - (float)param_1[0x12];
    local_34 = (float)param_1[0x25b] - (float)param_1[0x13];
    local_3c = 0.0;
    if ((local_40 == 0.0) && (local_38 == 0.0)) {
      local_38 = 0.5;
    }
    else {
      fVar2 = local_38 * local_38 + local_40 * local_40;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        local_58 = &local_40;
        pfStack_5c = (float *)0x772f7c;
        local_54 = local_58;
        FUN_00ddf460();
      }
      else {
        local_54 = (float *)&DAT_0163d0ac;
        local_58 = (float *)0x772f9b;
        FUN_00dd5650();
        local_38 = 0.0;
        local_40 = 0.0;
        local_3c = 1.0;
      }
      local_40 = local_40 * 0.5;
      local_3c = local_3c * 0.5;
      local_38 = local_38 * 0.5;
      local_34 = local_34 * 0.5;
    }
    *pfVar1 = local_40 + *pfVar1;
    param_1[0x259] = (int)(local_3c + (float)param_1[0x259]);
    param_1[0x25a] = (int)(local_38 + (float)param_1[0x25a]);
    param_1[0x25b] = (int)(local_34 + (float)param_1[0x25b]);
    param_1[0x259] = (int)((float)param_1[0x259] + 1.1);
    param_1[0x24f] = (int)(2.0 / ((float)(((float10)(float)fVar6 - fVar5) * (float10)60.0) - 26.0));
    local_30 = (float)param_1[0x10];
    local_2c = (float)param_1[0x11];
    local_28 = (float)param_1[0x12];
    local_24 = (float)param_1[0x13];
    local_58 = (float *)(((float)param_1[0x259] - local_2c) * 0.3);
    pfStack_5c = pfVar1;
    local_54 = local_58;
    FUN_0076bab0(param_1 + 0x548,&local_30);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 1:
    local_54 = (float *)0xa;
    local_58 = (float *)0x773076;
    iVar4 = FUN_00a8c760();
    if (iVar4 != 0) {
      local_54 = (float *)0x3f800000;
      local_58 = (float *)0x3f800000;
      pfStack_5c = (float *)0x77308d;
      FUN_00ac80a0();
      return;
    }
  case 2:
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0x7730a7;
    FUN_00ac80a0();
    local_40 = (float)param_1[600] - (float)param_1[0x10];
    local_3c = (float)param_1[0x259] - (float)param_1[0x11];
    local_38 = (float)param_1[0x25a] - (float)param_1[0x12];
    local_34 = (float)param_1[0x25b] - (float)param_1[0x13];
    fVar2 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      local_58 = &local_40;
      pfStack_5c = (float *)0x773128;
      local_54 = local_58;
      FUN_00ddf460();
      fVar6 = (float10)local_40;
      fVar5 = (float10)local_38;
    }
    else {
      local_54 = (float *)&DAT_0163d0ac;
      local_58 = (float *)0x773147;
      FUN_00dd5650();
      fVar6 = (float10)0;
      local_40 = (float)fVar6;
      local_3c = 1.0;
      local_38 = (float)fVar6;
      fVar5 = fVar6;
    }
    local_54 = &local_30;
    local_58 = (float *)local_20;
    fVar7 = (float10)fpatan((float10)local_3c,SQRT(fVar5 * fVar5 + fVar6 * fVar6));
    local_30 = (float)-fVar7;
    fVar6 = (float10)fpatan(fVar6,fVar5);
    local_2c = (float)fVar6;
    local_28 = 0.0;
    pfStack_5c = (float *)0x773193;
    FUN_00ddb590();
    pfVar1 = (float *)(param_1 + 0x464);
    local_54 = (float *)0x7731ad;
    fVar6 = (float10)FUN_00fdc1f0();
    local_58 = (float *)local_20;
    local_54 = (float *)(float)((float10)1 - fVar6);
    pfStack_5c = pfVar1;
    D3DXQuaternionSlerp(pfVar1);
    FUN_00ddb9f0(param_1 + 0x2c,pfVar1);
    D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
    if ((float)param_1[0x24a] < 2.0) {
      fVar2 = (float)param_1[0x244] * (float)param_1[0x24f] + (float)param_1[0x24a];
      param_1[0x24a] = (int)fVar2;
      pfStack_5c = (float *)0x0;
      local_58 = (float *)0x0;
      local_54 = (float *)0x0;
      FUN_00a581b0(&pfStack_5c,0,fVar2);
      fVar8 = (float)local_58 - (float)param_1[0x15];
      param_1[600] = 0;
      param_1[0x259] = 0;
      param_1[0x25a] = 0;
      param_1[0x259] = 0;
      param_1[0x14] = (int)pfStack_5c;
      param_1[0x15] = (int)local_58;
      param_1[0x16] = (int)local_54;
      FUN_00a585a0(&pfStack_5c,0,param_1[0x24a]);
      fVar6 = (float10)fpatan((float10)(float)pfStack_5c,(float10)(float)local_54);
      param_1[0x25] = (int)(float)fVar6;
      fVar2 = (float)param_1[0x24a];
      if (!NAN(fVar2) && 2.0 < fVar2 != (fVar2 == 2.0)) {
        FUN_00751fb0(1);
        param_1[0x225] = (int)fVar8;
        FUN_008e0c50(fVar8);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 3:
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0x773302;
    FUN_00ac80a0();
    fVar2 = (float)param_1[0x249];
    if ((!NAN(fVar2) && 0.0 < fVar2 != (fVar2 == 0.0)) && ((float)param_1[0x249] < 1.0)) {
      local_54 = (float *)((float)param_1[0x244] * 0.08 + (float)param_1[0x249]);
      param_1[0x249] = (int)local_54;
      if ((float)local_54 < 1.0) {
        local_38 = 0.0;
        local_58 = &local_40;
        local_3c = 0.0;
        pfStack_5c = (float *)(param_1 + 0x464);
        local_40 = 0.0;
        local_34 = 1.0;
        D3DXQuaternionSlerp(local_58);
        FUN_00ddb9f0(param_1 + 0x2c,&stack0xffffffb0);
        D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
        local_30 = (float)param_1[0x10] + (float)param_1[600];
        pfStack_5c = &local_30;
        local_2c = (float)param_1[0x11] + (float)param_1[0x259];
        local_28 = (float)param_1[0x12] + (float)param_1[0x25a];
        local_24 = (float)param_1[0x13] + (float)param_1[0x25b];
        local_54 = (float *)0x3db2b8c2;
        local_58 = (float *)0x3e4ccccd;
        FUN_007515a0();
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
        param_1[0x4ec] = 0x3f800000;
        param_1[0x249] = 0x3f800000;
      }
    }
    local_54 = (float *)0x0;
    local_58 = (float *)0x7734d8;
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[600]);
      param_1[0x15] = (int)((float)param_1[0x259] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x25a] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x25b] + (float)param_1[0x17]);
    }
    local_54 = (float *)0x3d888889;
    local_58 = (float *)0x773522;
    iVar4 = (**(code **)(*param_1 + 800))();
    if (iVar4 != 0) {
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
    pfStack_5c = (float *)0x773672;
    FUN_00ac80a0();
    local_54 = (float *)0x3d888889;
    local_58 = (float *)0x773688;
    iVar4 = (**(code **)(*param_1 + 800))();
    if (iVar4 != 0) {
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
    pfStack_5c = (float *)0x7736e0;
    FUN_00ac80a0();
    local_54 = (float *)0x0;
    local_58 = (float *)0x7736e9;
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      local_54 = (float *)0x0;
      local_58 = (float *)0x4;
      pfStack_5c = (float *)0x7736fc;
      FUN_00a88b50();
      pcVar3 = *(code **)(*param_1 + 0x34c);
      param_1[0x34a] = 0;
      local_54 = (float *)0x773712;
      (*pcVar3)();
    }
  }
  return;
}

// 00773740  FUN_00773740  size=187  [between]
void __fastcall FUN_00773740(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x11f4))) &&
      (*(int *)(param_1 + 0x1750) == 0)) &&
     (((*(uint *)(param_1 + 0x11f4) & 0x20000000) == 0 && (*(int *)(param_1 + 0x61c) < 2)))) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00a7c8a0();
      iVar1 = FUN_00a8cab0();
      if (iVar1 == 0x10006b) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x61c) = 2;
    FUN_00769fa0(0,1);
    fVar2 = (float10)FUN_00dde300(0,0x3f800000);
    *(undefined4 *)(param_1 + 0x95c) = 1;
    *(float *)(param_1 + 0x159c) =
         (float)(fVar2 * (float10)0.15 + (float10)*(float *)(param_1 + 0x1598));
  }
  return;
}

// 00773800  FUN_00773800  size=1688  [between]
/* WARNING: Removing unreachable block (ram,0x00773993) */

void __fastcall FUN_00773800(int *param_1)

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
    param_1[0x47d] = param_1[0x47d] | 0x20000;
    param_1[0x47d] = param_1[0x47d] & 0xffffffbf;
    FUN_00aa4120(*(undefined4 *)(&DAT_01647b38 + param_1[0x48a] * 4),0,0x3e4ccccd,0x3f800000,0,
                 0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x566] = 0;
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
    param_1[0x4ec] = 0x3f800000;
    DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
    fVar4 = (float)(DAT_01dd0814 >> 8) * 5.960465e-08;
    param_1[0x567] = (int)(((1.0 - (fVar4 + fVar4)) * 0.1 + (float)param_1[0x5a0]) * 60.0);
    param_1[0x565] = (int)((float)param_1[0x5a1] * 60.0);
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
      iVar10 = FUN_00a12210(param_1[0x476]);
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
    fVar4 = (float)param_1[0x566];
    param_1[0x566] = (int)((float)param_1[0x244] + fVar4);
    if ((float)param_1[0x244] + fVar4 <= (float)param_1[0x567]) {
      return;
    }
    FUN_009f8b10();
    param_1[0x187] = 3;
    return;
  case 3:
    param_1[0x187] = 4;
    param_1[0x139] = 1;
    if (param_1[0x256] != 1) {
      FUN_0076a070(0,0);
      if (param_1[0x48a] == 0) {
        FUN_007594b0(param_1[0x256]);
        iVar10 = FUN_00a12210(3);
        if (iVar10 != 0) {
          local_130 = *(float *)(iVar10 + 0x40);
          local_12c = *(float *)(iVar10 + 0x44);
          local_128 = *(undefined4 *)(iVar10 + 0x48);
          local_124 = *(undefined4 *)(iVar10 + 0x4c);
          uVar11 = FUN_00e01ca0();
          FUN_00e013e0(0x2c040,3,&local_130,uVar11);
          local_a4 = 0;
        }
      }
      FUN_0075fad0(0x46);
      return;
    }
    FUN_0076a070(1,1);
    FUN_007594b0(1);
    FUN_0075fad0(0x46);
    return;
  default:
    return;
  }
  iVar10 = FUN_00c27ef0();
  if (iVar10 < param_1[0x256]) {
    iVar10 = param_1[0x256];
  }
  param_1[0x256] = iVar10;
  if (param_1[0x48a] == 0) {
    fVar4 = (float)param_1[0x5a2];
    iVar9 = FUN_00606c90(param_1[0x2a1]);
    if (iVar9 != 0) {
      FUN_00bc3000((float)(iVar10 + -1) * 0.5 + fVar4);
    }
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  fVar4 = (float)param_1[0x566];
  param_1[0x566] = (int)((float)param_1[0x244] + fVar4);
  if ((param_1[0x188] == 0) && ((float)param_1[0x565] < (float)param_1[0x244] + fVar4)) {
    iVar10 = param_1[0x221];
    FUN_00769fa0(1,0);
    FUN_00751fb0(iVar10 == 0);
    param_1[0x188] = 1;
  }
  if ((float)param_1[0x567] < (float)param_1[0x566]) {
    FUN_009f8b10();
    param_1[0x187] = 3;
  }
  FUN_00a81330();
  FUN_00a7c8a0();
  iVar10 = FUN_00a12210(param_1[0x476]);
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
    FUN_00752710(iVar10);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00773EB0  FUN_00773eb0  size=939  [between]
void __fastcall FUN_00773eb0(int *param_1)

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
    FUN_00769fa0(0,0);
    param_1[0x47d] = param_1[0x47d] & 0xff3fffff;
    FUN_00aa4080(*(undefined4 *)(&DAT_01647b4c + param_1[0x48a] * 4),0,0,0x3f800000,0x8038000,
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
    if ((float)param_1[0x567] < (float)param_1[0x566] + 40.0) {
      param_1[0x567] = (int)((float)param_1[0x566] + 40.0);
    }
    FUN_00751fb0(0);
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
    FUN_00756cc0();
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
      FUN_0076a070(1,0);
      FUN_0075fad0(0x46);
    }
  }
  fVar1 = (float)param_1[0x566];
  param_1[0x566] = (int)((float)param_1[0x244] + fVar1);
  if ((float)param_1[0x567] < (float)param_1[0x244] + fVar1) {
    FUN_0076a070(1,0);
    FUN_0075fad0(0x46);
  }
  return;
}

// 007742B0  FUN_007742b0  size=777  [between]
void __fastcall FUN_007742b0(int *param_1)

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
  
  local_74 = 0x7742c9;
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_74 = 0x7742d8;
    uVar3 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x51,0,0x3e4ccccd,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    local_78 = (undefined1 *)0x774330;
    local_74 = uVar3;
    FUN_00752710();
    param_1[0x248] = 0x3f333333;
    goto LAB_00774340;
  case 1:
LAB_00774340:
    if (0.0 < (float)param_1[0x248]) {
      fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668;
      param_1[0x248] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        local_74 = 1;
        local_78 = (undefined1 *)0x0;
        FUN_00769fa0();
      }
    }
    local_74 = 0x774386;
    FUN_00756cc0();
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0;
    local_78 = (undefined1 *)0x7743a2;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 0x7743b1;
      FUN_009f8b10();
      local_74 = 0x7743bc;
      FUN_00a7c950();
      param_1[0x195] = -1;
      param_1[0x47d] = param_1[0x47d] & 0xffffffdf;
      local_74 = 0x3d888889;
      local_78 = (undefined1 *)0x7743e3;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_78 = auStack_64;
        param_1[0x187] = 2;
        FUN_00a92f90();
        FUN_0044fd10();
        local_78 = (undefined1 *)0x774434;
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
    local_78 = (undefined1 *)0x7744de;
    iVar2 = FUN_00a8c760();
    if (iVar2 == 0) {
      local_78 = (undefined1 *)0x7744ee;
      local_74 = uVar3;
      FUN_00752680();
      return;
    }
    break;
  case 2:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0x3d888889;
    local_78 = (undefined1 *)0x774520;
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
    local_78 = (undefined1 *)0x774584;
    iVar2 = FUN_00a94ce0();
    if ((iVar2 != 0) || ((float)param_1[0x248] <= 0.0)) {
      local_74 = 0;
      local_78 = (undefined1 *)0x1;
      FUN_0076a070();
      local_74 = 0x46;
      local_78 = (undefined1 *)0x7745ab;
      FUN_0075fad0();
      return;
    }
  }
  return;
}

// 007745D0  Emc040::vf32C  size=1043  [class]
undefined4 __fastcall Emc040::vf32C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  float10 fVar8;
  undefined8 uVar9;
  int local_c;
  undefined4 local_8;
  
  param_1[0x1a1] = 0;
  iVar1 = FUN_00a8ef10();
  if (((iVar1 != 0) || ((param_1[0x47d] & 0x20U) != 0)) || ((*(byte *)(param_1 + 0x130) & 1) == 0))
  {
    return 0;
  }
  if (param_1[0x139] != 0) {
    uVar2 = FUN_007692e0();
    return uVar2;
  }
  if ((param_1[0x47d] & 0x40000U) != 0) {
    uVar2 = FUN_007693d0();
    return uVar2;
  }
  FUN_00ac2080(0);
  local_8 = 0x41200000;
  local_c = 0;
  piVar7 = (int *)param_1[0x19f];
  piVar5 = piVar7 + param_1[0x1a1] * 0x54;
  if (piVar7 == piVar5) {
    return 0;
  }
  do {
    iVar1 = *piVar7;
    if (iVar1 == 0x1b0) {
      (**(code **)(*param_1 + 0x370))(piVar7);
    }
    else {
      iVar3 = FUN_004025b0();
      if ((iVar3 != 0) && (iVar1 != 0xe0)) {
        iVar1 = FUN_00a81330();
        if ((*piVar7 == 0x129) || (*piVar7 == 0x12a)) {
          uVar9 = FUN_00751710();
          if (((int)uVar9 != 0) && ((int)((ulonglong)uVar9 >> 0x20) != 0)) {
            uVar2 = FUN_00a7c8a0();
            FUN_00762af0(uVar2);
            return 0;
          }
        }
        else if (iVar1 != param_1[0x13c]) {
          if (iVar1 != 0) {
            local_c = FUN_00a7c8a0();
          }
          iVar1 = FUN_00a8f040(piVar7);
          if (iVar1 == 0) {
            iVar1 = FUN_00a8eea0();
            if (((0 < iVar1) && (local_c != 0)) && ((*(byte *)(local_c + 0x4c0) & 0x10) != 0)) {
              (**(code **)(*param_1 + 0x21c))(local_c,(char)piVar7[4],0x3c23d70a,0);
              local_8 = 0x40000000;
              iVar1 = FUN_00759310(local_c,piVar7);
              if (iVar1 != 0) {
                return 0;
              }
            }
            iVar1 = FUN_00762420(local_c,piVar7);
            if (iVar1 != 0) {
              return 0;
            }
            if ((*(byte *)(piVar7 + 0x23) & 0x10) == 0) {
              (**(code **)(*param_1 + 0x30c))(piVar7[1],0);
            }
            if (*piVar7 == 0x145) {
              iVar1 = *param_1;
              uVar2 = FUN_00a8eea0(0);
              (**(code **)(iVar1 + 0x30c))(uVar2);
              FUN_007522c0();
            }
            uVar6 = 1;
            if (((0 < param_1[0x574]) && (*piVar7 != 0x58)) || ((param_1[0x47d] & 0x400000U) != 0))
            {
              FUN_009f8b10();
              if (param_1[0x1d9] != 0) {
                FUN_008e71f0(0x10000);
              }
              FUN_00a8ee20(0);
            }
            (**(code **)(*param_1 + 0x220))(local_8);
            iVar1 = FUN_00759240(piVar7);
            if (iVar1 != 0) {
              if (local_c != 0) {
                param_1[0x570] = *(int *)(local_c + 0x40);
                param_1[0x571] = *(int *)(local_c + 0x44);
                param_1[0x572] = *(int *)(local_c + 0x48);
                param_1[0x573] = *(int *)(local_c + 0x4c);
              }
              param_1[0x56c] = piVar7[8];
              param_1[0x56d] = piVar7[9];
              param_1[0x56e] = piVar7[10];
              param_1[0x56f] = piVar7[0xb];
              return 1;
            }
            iVar1 = FUN_00a8eea0();
            if (iVar1 < 1) {
              FUN_0075e470();
              param_1[0x139] = 1;
              FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
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
                FUN_00768f10();
              }
            }
            fVar8 = (float10)FUN_00ddba30((float)piVar7[0xc] - (float)param_1[0x25]);
            param_1[0x245] = (int)(float)fVar8;
            param_1[0x475] = (int)(float)fVar8;
            if (local_c != 0) {
              fVar8 = (float10)FUN_00a8ec30(local_c + 0x40);
              param_1[0x475] = (int)(float)fVar8;
            }
            if (param_1[0x128] == 0x10) {
              uVar6 = FUN_00769e70(piVar7);
              if ((*(byte *)(param_1 + 0x2c0) & 0x80) != 0) {
                uVar6 = uVar6 | 0x8000;
              }
              if (uVar6 == 0xffffffff) {
                return 1;
              }
              (**(code **)(*param_1 + 0x198))(local_c,piVar7,uVar6);
              return unaff_ESI;
            }
            param_1[0x462] = 0;
            uVar4 = FUN_007694a0(piVar7);
            uVar6 = uVar6 | uVar4;
            if ((*(byte *)(param_1 + 0x2c0) & 0x82) != 0) {
              uVar6 = uVar6 | 0x8000;
            }
            (**(code **)(*param_1 + 0x198))(local_c,piVar7,uVar6);
            return unaff_ESI;
          }
        }
      }
    }
    piVar7 = piVar7 + 0x54;
    if (piVar7 == piVar5) {
      return 0;
    }
  } while( true );
}

// 007749F0  FUN_007749f0  size=182  [callgraph]
void __fastcall FUN_007749f0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_007667e0();
  if (iVar1 != 0) {
    return;
  }
  if (*(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14) < *(float *)(param_1 + 0x11a4)
      != (*(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14) ==
         *(float *)(param_1 + 0x11a4))) {
    return;
  }
  if ((*(int *)(param_1 + 0x1208) == 2) && (iVar1 = FUN_00756a30(0), iVar1 != -1)) {
LAB_00774a70:
    FUN_0075fad0(iVar1);
  }
  else {
    if (*(int *)(param_1 + 0x11a0) != 0) {
      fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x11a0) + 0x50);
      fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)*(float *)(param_1 + 0x94)));
      if ((float10)0.7853982 < ABS(fVar2)) {
        iVar1 = FUN_00752340(param_1 + 0x11b0);
        goto LAB_00774a70;
      }
    }
    if (((*(float *)(param_1 + 0x1510) <= 0.0) && (*(int *)(param_1 + 0x61c) == 1)) &&
       ((*(uint *)(param_1 + 0x11f4) & 0x2000000) != 0)) {
      FUN_00771a90();
      return;
    }
  }
  return;
}

// 00774AB0  FUN_00774ab0  size=419  [callgraph]
void __fastcall FUN_00774ab0(int *param_1)

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
      iVar2 = FUN_00dd6d80(puVar6);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x47d] = param_1[0x47d] | 0x100000;
    param_1[0x4f9] = 0;
    param_1[0x4fa] = -1;
    param_1[0x47d] = param_1[0x47d] | 0x100;
    param_1[0x47d] = param_1[0x47d] & 0xffdfffff;
    param_1[0x47d] = param_1[0x47d] | 0x40;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x46c);
  *pfVar1 = *(float *)(uVar4 + 0x40);
  uVar5 = 8;
  param_1[0x46d] = *(int *)(uVar4 + 0x44);
  param_1[0x46e] = *(int *)(uVar4 + 0x48);
  param_1[0x46f] = *(int *)(uVar4 + 0x4c);
  param_1[0x46d] = (int)((float)param_1[0x46d] + 1.0);
  if ((*(byte *)(param_1 + 0x47d) & 1) != 0) {
    uVar5 = 7;
  }
  iVar2 = FUN_007725e0(pfVar1,uVar5);
  if (iVar2 == 0) {
    param_1[0x47d] = param_1[0x47d] | 0x80;
  }
  else {
    param_1[0x47d] = param_1[0x47d] & 0xffffff7f;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((iVar2 != 0) &&
     (((float)param_1[0x10] - *pfVar1) * ((float)param_1[0x10] - *pfVar1) +
      ((float)param_1[0x11] - (float)param_1[0x46d]) *
      ((float)param_1[0x11] - (float)param_1[0x46d]) +
      ((float)param_1[0x12] - (float)param_1[0x46e]) *
      ((float)param_1[0x12] - (float)param_1[0x46e]) < 2.25)) {
    (**(code **)(*param_1 + 0x34c))();
  }
  if ((*(byte *)(param_1 + 0x47d) & 0x10) != 0) {
    param_1[0x47d] = param_1[0x47d] | 0x200000;
    return;
  }
  param_1[0x47d] = param_1[0x47d] & 0xffdfffff;
  return;
}

// 00774C60  FUN_00774c60  size=180  [callgraph]
void __fastcall FUN_00774c60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x11a0) != 0) {
    fVar3 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x11a0) + 0x50);
    fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
    if ((float10)0.7853982 < ABS(fVar3)) {
      uVar1 = FUN_00752340(param_1 + 0x11b0);
      FUN_0075fad0(uVar1);
      return;
    }
  }
  iVar2 = FUN_00763d30();
  if ((((iVar2 == 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
      (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
     (((*(float *)(param_1 + 0x1510) <= 0.0 &&
       (*(float *)(param_1 + 0xa90) < *(float *)(&DAT_01882c80 + *(int *)(param_1 + 0x1208) * 0x14))
       ) && ((*(uint *)(param_1 + 0x11f4) & 0x2000000) != 0)))) {
    FUN_00771a90();
    return;
  }
  return;
}

// 00774D20  FUN_00774d20  size=440  [callgraph]
void __fastcall FUN_00774d20(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b34e80;
    (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
    iVar1 = FUN_00dd6d80(puVar4);
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
    *(undefined4 *)(param_1 + 0x13e4) = 0;
    *(undefined4 *)(param_1 + 0x13e8) = 0xffffffff;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x100;
    *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffdfffff;
    if (*(int *)(param_1 + 0x4a0) == 5) {
      *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x40;
    }
  }
  else {
    if (iVar1 == 1) {
      iVar1 = FUN_007725e0(param_1 + 0x11b0,8);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) | 0x80;
      }
      else {
        *(uint *)(param_1 + 0x11f4) = *(uint *)(param_1 + 0x11f4) & 0xffffff7f;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    if ((iVar1 == 2) && (iVar1 = FUN_00756810(param_1 + 0x620,0x3e4ccccd,0x3da3d70a), iVar1 != 0)) {
      FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 1;
      return;
    }
  }
  return;
}

// 00776D00  Emc040::vf4C  size=179  [class]
void __fastcall Emc040::vf4C(int param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  
  BehaviorEmBase::vf4C();
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 6:
  case 7:
    FUN_0076e870();
    return;
  case 8:
    FUN_0075c800();
    return;
  case 9:
    FUN_00764ea0();
    return;
  case 10:
    FUN_00775140();
    return;
  case 0xb:
    iVar1 = FUN_00a8cab0(unaff_ESI);
    if (iVar1 == 0x9e) {
      FUN_0076f1c0();
    }
    break;
  case 0xc:
    FUN_00753a40();
    return;
  case 0xd:
    iVar1 = FUN_00a8cab0(unaff_ESI);
    if (iVar1 == 0xa0) {
      FUN_0075cc00();
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    switchD_00776d16::default();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00AB2430  Emc040::Emc040  size=282  [class]
undefined4 * __fastcall Emc040::Emc040(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = EmBaseDLC::vftable;
  cEspControler::cEspControler();
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
  param_1[0x47d] = 0;
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

// 00AB2550  Emc040::vf04  size=6  [class]
undefined * Emc040::vf04(void)

{
  return &DAT_01b357f0;
}

// 00AB2560  FUN_00ab2560  size=143  [callgraph]
void FUN_00ab2560(void)

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
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  return;
}

// 00AB9E10  Emc040::destruct  size=30  [class]
undefined4 __thiscall Emc040::destruct(undefined4 param_1,byte param_2)

{
  FUN_00ab2560();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

