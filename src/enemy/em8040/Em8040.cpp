// src/enemy/em8040/Em8040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0065C580..00ABA390, 342 functions

#include "mgrr.h"
#include "Em8040.h"

// 0065C580  FUN_0065c580  size=22  [callgraph]
bool FUN_0065c580(void)

{
  int iVar1;
  
  iVar1 = FUN_00a82d50();
  return iVar1 == 4;
}

// 0065C5E0  FUN_0065c5e0  size=18  [callgraph]
bool FUN_0065c5e0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a82d50();
  return iVar1 == 1;
}

// 0065C670  FUN_0065c670  size=36  [callgraph]
undefined4 FUN_0065c670(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(6);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8c760(5);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 0065C6B0  FUN_0065c6b0  size=24  [callgraph]
undefined4 __fastcall FUN_0065c6b0(int param_1)

{
  if (*(float *)(param_1 + 0x1330) < 1.0) {
    return 1;
  }
  return 0;
}

// 0065C7B0  Em8040::vf300  size=1  [class]
void Em8040::vf300(void)

{
  return;
}

// 0065C7C0  Em8040::vf304  size=1  [class]
void Em8040::vf304(void)

{
  return;
}

// 0065C7D0  Em8040::vf3C  size=55  [class]
void __thiscall Em8040::vf3C(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e26e0(param_2);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(param_2);
  }
  return;
}

// 0065C810  Em8040::vf1D0  size=3  [class]
void Em8040::vf1D0(void)

{
  return;
}

// 0065C820  Em8040::thunk_vf54  size=5  [class]
void __fastcall Em8040::thunk_vf54(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  bVar2 = false;
  iVar3 = FUN_00ac8410();
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0x25);
    if ((((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (((((float)param_1[0x218] != 0.0 || ((float)param_1[0x219] != 0.0)) ||
         ((float)param_1[0x21a] != 0.0)) && (iVar3 = FUN_00a12210(0xffffffff), iVar3 != 0)))) {
      iVar1 = *param_1;
      fStack_40 = (float)param_1[0x10] +
                  (((float)param_1[0x218] + *(float *)(iVar3 + 0x40)) - (float)param_1[0x10]);
      fStack_3c = ((*(float *)(iVar3 + 0x44) + (float)param_1[0x219]) - (float)param_1[0x11]) +
                  (float)param_1[0x11];
      fStack_38 = ((*(float *)(iVar3 + 0x48) + (float)param_1[0x21a]) - (float)param_1[0x12]) +
                  (float)param_1[0x12];
      fStack_34 = (((float)param_1[0x21b] + *(float *)(iVar3 + 0x4c)) - (float)param_1[0x13]) +
                  (float)param_1[0x13];
      uVar4 = (**(code **)(iVar1 + 0x84))();
      (**(code **)(iVar1 + 0x7c))(&fStack_40,uVar4);
      bVar2 = true;
    }
    iVar3 = FUN_00a8c760(0x24);
    if (((iVar3 != 0) && (iVar3 = FUN_00ac82f0(), iVar3 == 0)) &&
       ((!bVar2 && ((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0))))))
    {
      FUN_00a8ce90(&fStack_40,auStack_20);
      D3DXVec3TransformNormal(&fStack_40,&fStack_40,iVar3 + 0x10);
      fStack_40 = *(float *)(iVar3 + 0x40) + fStack_40;
      fStack_3c = *(float *)(iVar3 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar3 + 0x48) + fStack_38;
      fStack_30 = fStack_40 - (float)param_1[0x10];
      fStack_2c = fStack_3c - (float)param_1[0x11];
      fStack_28 = fStack_38 - (float)param_1[0x12];
      fStack_24 = fStack_34 - (float)param_1[0x13];
      FUN_00a12310(&fStack_30);
    }
  }
  Behavior::vf54();
  return;
}

// 0065C830  Em8040::vf2F8  size=46  [class]
void __fastcall Em8040::vf2F8(int *param_1)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(10,0,0);
    param_1[0x1af] = 1;
  }
  FUN_009fdde0();
  return;
}

// 0065C880  FUN_0065c880  size=197  [between]
void __fastcall FUN_0065c880(int param_1)

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
    goto switchD_0065c8a0_caseD_4;
  case 0xe:
  case 0xf:
    uVar4 = 0xf;
    break;
  case 0x10:
    uVar4 = 0x15;
    break;
  default:
    goto switchD_0065c8a0_default;
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(uVar4);
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x5c);
    break;
  default:
    goto switchD_0065c8a0_caseD_4;
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
switchD_0065c8a0_caseD_4:
switchD_0065c8a0_default:
  FUN_00a8edf0(uVar3);
  return;
}

// 0065C990  FUN_0065c990  size=90  [between]
void __fastcall FUN_0065c990(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0065c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x0065c9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x34))();
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0065c9be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 100))();
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x0065c9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x6c))();
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0065c9da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x74))();
    return;
  }
}

// 0065CA00  FUN_0065ca00  size=142  [between]
void __thiscall FUN_0065ca00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))(param_2);
    FUN_00fdbc60();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x0065ca8c. Too many branches */
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

// 0065CAB0  FUN_0065cab0  size=16  [between]
int __fastcall FUN_0065cab0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}

// 0065CAC0  FUN_0065cac0  size=259  [between]
undefined4 FUN_0065cac0(void)

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

// 0065CBD0  Em8040::vf1A0  size=5  [class]
undefined4 Em8040::vf1A0(void)

{
  return 0;
}

// 0065CBE0  Em8040::vf1B0  size=5  [class]
undefined4 Em8040::vf1B0(void)

{
  return 0;
}

// 0065CBF0  FUN_0065cbf0  size=201  [between]
float10 __thiscall FUN_0065cbf0(int param_1,undefined4 param_2,float param_3,float param_4)

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

// 0065CCC0  FUN_0065ccc0  size=36  [between]
void __thiscall FUN_0065ccc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0065cbf0(*(int *)(param_1 + 0xa84) + 0x40,param_2,param_3);
  return;
}

// 0065CD20  FUN_0065cd20  size=40  [between]
float10 __fastcall FUN_0065cd20(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 0065CD60  FUN_0065cd60  size=36  [between]
undefined4 __fastcall FUN_0065cd60(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
  case 0x5d:
  case 0x7b:
  case 0x80:
  case 0x83:
    return 1;
  default:
    return 0;
  }
}

// 0065CE10  FUN_0065ce10  size=112  [between]
void __fastcall FUN_0065ce10(int *param_1)

{
  int iVar1;
  
  if (param_1[0x186] < 0x2f) {
    switch(param_1[0x186]) {
    case 0:
      break;
    default:
      iVar1 = (**(code **)(*param_1 + 0x1fc))();
      if (((((iVar1 == 0) && (param_1[0x554] < 1)) &&
           ((param_1[0x1d9] == 0 || (iVar1 = FUN_008e2740(), iVar1 != 0)))) &&
          (iVar1 = param_1[0x186], iVar1 != 0x21)) && ((iVar1 < 0x26 || (0x2c < iVar1)))) {
                    /* WARNING: Could not recover jumptable at 0x0065ce7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 0065CF10  FUN_0065cf10  size=230  [between]
void __fastcall FUN_0065cf10(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(5,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x920) = 0;
    if (*(int *)(param_1 + 0x1188) == 2) {
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
    *(undefined4 *)(param_1 + 0x95c) = 0;
    *(undefined4 *)(param_1 + 0x928) = 0x42f00000;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    *(float *)(param_1 + 0x15f4) = *(float *)(param_1 + 0x15f4) - *(float *)(param_1 + 0x910);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(float *)(param_1 + 0x920) =
         *(float *)(param_1 + 0x910) * 0.016666668 + *(float *)(param_1 + 0x920);
    return;
  }
  return;
}

// 0065D000  FUN_0065d000  size=22  [between]
void __fastcall FUN_0065d000(int *param_1)

{
  if (param_1[0x3af] < 4) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  return;
}

// 0065D0B0  FUN_0065d0b0  size=366  [between]
void __fastcall FUN_0065d0b0(int *param_1)

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

// 0065D220  FUN_0065d220  size=53  [between]
void __fastcall FUN_0065d220(int param_1)

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

// 0065D260  FUN_0065d260  size=55  [between]
void __fastcall FUN_0065d260(int *param_1)

{
  float fVar1;
  
  if (0.0 < (float)param_1[0x248]) {
    fVar1 = (float)param_1[0x248] - (float)param_1[0x244];
    param_1[0x248] = (int)fVar1;
    if (!NAN(fVar1) && fVar1 < 0.0 != (fVar1 == 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x0065d292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0065D2A0  FUN_0065d2a0  size=65  [between]
void __fastcall FUN_0065d2a0(int param_1)

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

// 0065D360  FUN_0065d360  size=493  [between]
void __fastcall FUN_0065d360(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 *puVar3;
  float fStack_84;
  float fStack_78;
  float local_74;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  if ((float)param_1[0x465] <= 0.0) {
    local_74 = (float)param_1[0x22a] * (float)param_1[0x244];
    fStack_84 = 9.351422e-39;
    fVar2 = (float10)FUN_00fdc1f0();
    fVar2 = ((float10)(float)param_1[0x465] -
            (float10)local_74 * (float10)0.1 * (float10)(float)param_1[0x469]) * fVar2;
    param_1[0x465] = (int)(float)fVar2;
    if (fVar2 < (float10)0.7) {
      param_1[0x465] = (int)(float)(fVar2 - (float10)(float)param_1[0x25d] * (float10)local_74);
    }
    fVar2 = (float10)0.1 + (float10)(float)param_1[0x25d];
    param_1[0x25d] = (int)(float)fVar2;
    if ((float10)0.5 < fVar2) {
      param_1[0x25d] = (int)(float)(float10)0.5;
    }
  }
  else {
    local_74 = (float)param_1[0x465] -
               (float)param_1[0x22a] * (float)param_1[0x244] * (float)param_1[0x469];
    param_1[0x465] = (int)local_74;
    param_1[0x25d] = 0;
    if (local_74 < 0.0) {
      fStack_84 = 9.351352e-39;
      fVar2 = (float10)FUN_00fdc1f0();
      param_1[0x465] = (int)(float)(fVar2 * (float10)local_74);
    }
  }
  if (param_1[0x1d9] != 0) {
    if (*(float *)(*(int *)(param_1[0x1d9] + 0xd0) + 4) < 0.0) {
      fStack_84 = 9.351634e-39;
      iVar1 = FUN_008e2740();
      if (iVar1 != 0) {
        param_1[0x228] = 1;
        param_1[0x465] = 0;
        param_1[0x469] = 0x3f800000;
      }
    }
    fStack_84 = 9.351693e-39;
    iVar1 = (**(code **)(*param_1 + 0x84))();
    fStack_84 = *(float *)(iVar1 + 4);
    puVar3 = auStack_50;
    D3DXMatrixRotationY(puVar3);
    D3DXVec3TransformNormal(&fStack_78,param_1 + 0x464,auStack_58);
    D3DXVec3TransformNormal(&fStack_84,&fStack_84,param_1 + 0x2c);
    fStack_78 = ((float)param_1[0x3a] + (float)puVar3) * (float)param_1[0x244];
    local_74 = (float)param_1[0x244] * fStack_84;
    FUN_008e0c00(&stack0xffffff80);
  }
  return;
}

// 0065D560  FUN_0065d560  size=36  [between]
undefined4 __fastcall FUN_0065d560(int param_1)

{
  if (((*(int *)(param_1 + 0x1704) != 0) && (*(int *)(param_1 + 0xef0) != 0)) &&
     (*(int *)(param_1 + 0xef4) == 0)) {
    return 1;
  }
  return 0;
}

// 0065D590  FUN_0065d590  size=148  [between]
void __thiscall FUN_0065d590(int *param_1,int param_2)

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

// 0065D630  FUN_0065d630  size=134  [between]
undefined4 __thiscall FUN_0065d630(int param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xef0);
  }
  if (*(int *)(param_1 + 0xef4) != 0) {
    *(undefined4 *)(param_1 + 0x1340) = *(undefined4 *)(param_1 + 0xf10);
    *(undefined4 *)(param_1 + 0x1344) = *(undefined4 *)(param_1 + 0xf14);
    *(undefined4 *)(param_1 + 0x1348) = *(undefined4 *)(param_1 + 0xf18);
    *(undefined4 *)(param_1 + 0x134c) = *(undefined4 *)(param_1 + 0xf1c);
    *(undefined4 *)(param_1 + 0x1350) = *(undefined4 *)(param_1 + 0xf00);
    *(undefined4 *)(param_1 + 0x1354) = *(undefined4 *)(param_1 + 0xf04);
    *(undefined4 *)(param_1 + 0x1358) = *(undefined4 *)(param_1 + 0xf08);
    *(undefined4 *)(param_1 + 0x135c) = *(undefined4 *)(param_1 + 0xf0c);
    return 1;
  }
  return 0;
}

// 0065D6C0  FUN_0065d6c0  size=123  [between]
undefined4 __fastcall FUN_0065d6c0(int param_1)

{
  if ((*(int *)(param_1 + 0xf24) != 0) && (*(int *)(param_1 + 0xf54) != 0)) {
    *(undefined4 *)(param_1 + 0x1340) = *(undefined4 *)(param_1 + 0xf70);
    *(undefined4 *)(param_1 + 0x1344) = *(undefined4 *)(param_1 + 0xf74);
    *(undefined4 *)(param_1 + 0x1348) = *(undefined4 *)(param_1 + 0xf78);
    *(undefined4 *)(param_1 + 0x134c) = *(undefined4 *)(param_1 + 0xf7c);
    *(undefined4 *)(param_1 + 0x1350) = *(undefined4 *)(param_1 + 0xf60);
    *(undefined4 *)(param_1 + 0x1354) = *(undefined4 *)(param_1 + 0xf64);
    *(undefined4 *)(param_1 + 0x1358) = *(undefined4 *)(param_1 + 0xf68);
    *(undefined4 *)(param_1 + 0x135c) = *(undefined4 *)(param_1 + 0xf6c);
    return 1;
  }
  return 0;
}

// 0065D740  FUN_0065d740  size=114  [between]
undefined4 __fastcall FUN_0065d740(int param_1)

{
  if (*(int *)(param_1 + 0xf84) != 0) {
    *(undefined4 *)(param_1 + 0x1340) = *(undefined4 *)(param_1 + 4000);
    *(undefined4 *)(param_1 + 0x1344) = *(undefined4 *)(param_1 + 0xfa4);
    *(undefined4 *)(param_1 + 0x1348) = *(undefined4 *)(param_1 + 0xfa8);
    *(undefined4 *)(param_1 + 0x134c) = *(undefined4 *)(param_1 + 0xfac);
    *(undefined4 *)(param_1 + 0x1350) = *(undefined4 *)(param_1 + 0xf90);
    *(undefined4 *)(param_1 + 0x1354) = *(undefined4 *)(param_1 + 0xf94);
    *(undefined4 *)(param_1 + 0x1358) = *(undefined4 *)(param_1 + 0xf98);
    *(undefined4 *)(param_1 + 0x135c) = *(undefined4 *)(param_1 + 0xf9c);
    return 1;
  }
  return 0;
}

// 0065D8D0  FUN_0065d8d0  size=94  [between]
void __fastcall FUN_0065d8d0(int param_1)

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

// 0065D950  FUN_0065d950  size=116  [between]
undefined4 __thiscall FUN_0065d950(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  fVar1 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(param_1 + 0x94)));
  if ((fVar1 < (float10)-2.0943952) || ((float10)2.0943952 < fVar1)) {
    return 0xd;
  }
  if (((float10)-0.08726646 <= fVar1) && ((float10)0 < fVar1)) {
    return 9;
  }
  return 10;
}

// 0065D9D0  FUN_0065d9d0  size=237  [between]
undefined4 FUN_0065d9d0(float *param_1,float *param_2,float *param_3,float param_4)

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

// 0065DB00  Em8040::vf158  size=5  [class]
undefined4 Em8040::vf158(void)

{
  return 0;
}

// 0065DB50  FUN_0065db50  size=72  [between]
void __fastcall FUN_0065db50(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
  }
  else if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0065db8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0065DBA0  FUN_0065dba0  size=72  [between]
void __fastcall FUN_0065dba0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
  }
  else if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0065dbda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0065DC60  FUN_0065dc60  size=129  [between]
void __thiscall FUN_0065dc60(int param_1,int param_2)

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

// 0065DCF0  FUN_0065dcf0  size=101  [between]
void FUN_0065dcf0(int param_1)

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

// 0065DDC0  FUN_0065ddc0  size=150  [between]
void __fastcall FUN_0065ddc0(int param_1)

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
    FUN_0065dc60(uVar2);
    return;
  }
  FUN_0065dcf0(uVar2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_0065dc60(uVar2);
  return;
}

// 0065DE60  FUN_0065de60  size=150  [between]
void __fastcall FUN_0065de60(int param_1)

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
    FUN_0065dc60(uVar2);
    return;
  }
  FUN_0065dcf0(uVar2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_0065dc60(uVar2);
  return;
}

// 0065DF60  FUN_0065df60  size=22  [between]
void FUN_0065df60(void)

{
  int iVar1;
  
  iVar1 = FUN_008c6c00();
  if (iVar1 == 0) {
    FUN_008a2b40();
    return;
  }
  return;
}

// 0065DF80  FUN_0065df80  size=549  [between]
void __fastcall FUN_0065df80(int *param_1)

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
    FUN_00aa4520(0xa8,iVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00db3e80(0x41880000,0,&DAT_01bea1d0);
    FUN_00b80920(iVar2,0x3f800000,0x3f000000,0x3f800000,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4520(0xa9,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if (iVar5 != 0) {
        FUN_00a8ccb0(1);
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    if (bVar1) {
      param_1[0x461] = 1;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4520(0xaa,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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

// 0065E1C0  FUN_0065e1c0  size=22  [between]
void FUN_0065e1c0(void)

{
  int iVar1;
  
  iVar1 = FUN_008c6c00();
  if (iVar1 == 0) {
    FUN_008a2b40();
    return;
  }
  return;
}

// 0065E1E0  FUN_0065e1e0  size=303  [between]
void __fastcall FUN_0065e1e0(int *param_1)

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
    FUN_00aa4520(0xae,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b80920(iVar2,0x3f800000,0x3f000000,0x3f800000,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) {
    return;
  }
  if (bVar1) {
    param_1[0x461] = 1;
  }
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a7c950();
    FUN_00ba6810(1,1);
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 0065E340  FUN_0065e340  size=74  [between]
uint FUN_0065e340(float param_1)

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

// 0065E390  FUN_0065e390  size=115  [between]
void __fastcall FUN_0065e390(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (((*(int *)(param_1 + 0x4a0) != 0x10) && ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
     (*(int *)(param_1 + 0x16fc) == 0)) {
    if (*(int *)(param_1 + 0x4a0) != 5) {
      EmBaseDLC::vf364(0xffffffff);
      return;
    }
    iVar1 = FUN_00c2a5b0(param_1 + 0xab0);
    if (iVar1 != 0) {
      fVar2 = (float10)FUN_00dde300(0,0x3f800000);
      if (fVar2 < (float10)*(float *)(param_1 + 0x1310)) {
        FUN_00ac9650(0);
      }
    }
  }
  return;
}

// 0065E540  FUN_0065e540  size=225  [between]
void __fastcall FUN_0065e540(int *param_1)

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

// 0065E640  FUN_0065e640  size=684  [between]
void __fastcall FUN_0065e640(int *param_1)

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
    FUN_0065d590(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    local_30 = 0;
    local_2c = 0.0;
    if (param_1[0x186] == 0x14) {
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

// 0065E9E0  FUN_0065e9e0  size=32  [between]
void FUN_0065e9e0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 0065EA00  FUN_0065ea00  size=260  [between]
void __fastcall FUN_0065ea00(int param_1)

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
LAB_0065eac0:
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_0065eac5;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar3[1];
            bVar8 = bVar2 < pbVar5[1];
            if (bVar2 != pbVar5[1]) goto LAB_0065eac0;
            pbVar5 = pbVar5 + 2;
            pbVar3 = pbVar3 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_0065eac5:
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

// 0065EB10  FUN_0065eb10  size=130  [between]
void __fastcall FUN_0065eb10(int param_1)

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
LAB_0065eb65:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0065eb6a;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar4[1];
        bVar9 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_0065eb65;
        pcVar4 = pcVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_0065eb6a:
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

// 0065EBC0  FUN_0065ebc0  size=134  [between]
void __thiscall FUN_0065ebc0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (*param_3 - *(float *)(param_1 + 0x15e0)) * *(float *)(param_1 + 0x15d0) +
          *(float *)(param_1 + 0x15d4) * (param_3[1] - *(float *)(param_1 + 0x15e4)) +
          *(float *)(param_1 + 0x15d8) * (param_3[2] - *(float *)(param_1 + 0x15e8));
  fVar1 = *(float *)(param_1 + 0x15d4);
  fVar2 = *(float *)(param_1 + 0x15d8);
  fVar3 = *(float *)(param_1 + 0x15dc);
  *param_2 = fVar4 * *(float *)(param_1 + 0x15d0) + *(float *)(param_1 + 0x15e0);
  param_2[1] = fVar1 * fVar4 + *(float *)(param_1 + 0x15e4);
  param_2[2] = fVar2 * fVar4 + *(float *)(param_1 + 0x15e8);
  param_2[3] = fVar3 * fVar4 + *(float *)(param_1 + 0x15ec);
  return;
}

// 0065EC50  FUN_0065ec50  size=34  [between]
void __fastcall FUN_0065ec50(int param_1)

{
  if (*(int *)(param_1 + 0xd80) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xd80));
    *(undefined4 *)(param_1 + 0xd80) = 0;
  }
  return;
}

// 0065EC80  Em8040::vf294  size=1  [class]
void Em8040::vf294(void)

{
  return;
}

// 0065EC90  Em8040::vf298  size=11  [class]
void __fastcall Em8040::vf298(int param_1)

{
  *(undefined4 *)(param_1 + 0xeb8) = 1;
  return;
}

// 0065ECA0  Em8040::vf29C  size=11  [class]
void __fastcall Em8040::vf29C(int param_1)

{
  *(undefined4 *)(param_1 + 0xeb8) = 1;
  return;
}

// 0065ECB0  Em8040::vf2A4  size=1  [class]
void Em8040::vf2A4(void)

{
  return;
}

// 0065ECC0  Em8040::vf2A8  size=1  [class]
void Em8040::vf2A8(void)

{
  return;
}

// 0065ECD0  Em8040::vf2AC  size=1  [class]
void Em8040::vf2AC(void)

{
  return;
}

// 0065ECE0  Em8040::vf2B0  size=1  [class]
void Em8040::vf2B0(void)

{
  return;
}

// 0065ED00  FUN_0065ed00  size=264  [between]
void __fastcall FUN_0065ed00(int param_1)

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

// 0065EE10  FUN_0065ee10  size=73  [between]
undefined4 __fastcall FUN_0065ee10(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x7d8) != 0) {
    iVar1 = FUN_00a8d380();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
      iVar1 = FUN_00a8d400(*(int *)(param_1 + 0xa84) + 0x40);
      if (*(int *)(iVar1 + 0xc) == *(int *)(*(int *)(*(int *)(param_1 + 0x7d8) + 0x818) + 0xc)) {
        return 1;
      }
    }
  }
  return 0;
}

// 0065EE60  FUN_0065ee60  size=62  [between]
undefined4 FUN_0065ee60(void)

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

// 0065EEA0  FUN_0065eea0  size=52  [between]
void __thiscall FUN_0065eea0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xec0) = *param_2;
  *(undefined4 *)(param_1 + 0xec4) = param_2[1];
  *(undefined4 *)(param_1 + 0xec8) = param_2[2];
  *(undefined4 *)(param_1 + 0xecc) = param_2[3];
  *(undefined4 *)(param_1 + 0xebc) = 0;
  return;
}

// 0065F2C0  FUN_0065f2c0  size=72  [between]
void __fastcall FUN_0065f2c0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0065f306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0065F310  FUN_0065f310  size=59  [between]
void __thiscall FUN_0065f310(int param_1,float param_2)

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

// 0065F400  FUN_0065f400  size=89  [between]
void __fastcall FUN_0065f400(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00c19c90(DAT_01d5bad4,(int)*(short *)(param_1 + 0xab2),0x28060);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a7c8a0();
    uVar2 = FUN_009f8b40();
    FUN_008e26e0(uVar2);
  }
  return;
}

// 0065F540  FUN_0065f540  size=42  [between]
uint FUN_0065f540(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34e80;
  (**(code **)(*param_1 + 4))(&DAT_01b34e80);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0065F570  FUN_0065f570  size=42  [between]
uint FUN_0065f570(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9c20;
  (**(code **)(*param_1 + 4))(&DAT_01be9c20);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0065F5A0  FUN_0065f5a0  size=42  [between]
uint FUN_0065f5a0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35590;
  (**(code **)(*param_1 + 4))(&DAT_01b35590);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0065F660  FUN_0065f660  size=42  [between]
undefined4 FUN_0065f660(void)

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

// 0065FD10  Em8040::vf118  size=1  [class]
void __thiscall Em8040::vf118(int param_1,undefined4 param_2)

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

// 0065FD60  Em8040::vf34  size=5  [class]
void __fastcall Em8040::vf34(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
  }
  return;
}

// 0065FD70  Em8040::vf110  size=126  [class]
void __thiscall Em8040::vf110(int param_1,int param_2)

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
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x10000000;
    return;
  }
  *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xefffffff;
  return;
}

// 0065FDF0  Em8040::vf44  size=295  [class]
void __fastcall Em8040::vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xd80) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xd80));
    *(undefined4 *)(param_1 + 0xd80) = 0;
  }
  if (*(int *)(param_1 + 0x1164) != 0) {
    FUN_00d8a1d0(0x16,*(int *)(param_1 + 0x1164));
  }
  iVar1 = FUN_00ac46e0();
  if (iVar1 == 0) {
    FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  }
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  RayCastManager::getWork(param_1 + 0x1178);
  RayCastManager::getWork(param_1 + 0x1180);
  RayCastManager::getWork(param_1 + 0x117c);
  RayCastManager::getWork(param_1 + 0x1184);
  RayCastManager::getWork(param_1 + 0xe90);
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
  (**(code **)(*(int *)(param_1 + 0x1050) + 4))();
  BehaviorEmBase::vf44();
  return;
}

// 0065FF40  FUN_0065ff40  size=225  [between]
void __fastcall FUN_0065ff40(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x4a0)) {
  case 0:
    uVar3 = 0x30020;
    pcVar2 = "Em8040_Smg";
    break;
  case 1:
    uVar3 = 0x30010;
    pcVar2 = "Em8040_HandGun";
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x1188) = 1;
    return;
  case 3:
  case 5:
  case 0x10:
  case 0x11:
  case 0x12:
    *(undefined4 *)(param_1 + 0x1188) = 2;
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x1188) = 3;
    FUN_0065f400();
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
    goto switchD_0065ff5a_default;
  default:
    return;
  }
  iVar1 = FUN_00a82090(pcVar2,uVar3,0);
  *(undefined4 *)(param_1 + 0x1188) = 0;
  FUN_00aa4080(0x35,1,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
  if (iVar1 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x701,0xffffffff,1);
  }
switchD_0065ff5a_default:
  return;
}

// 00660050  FUN_00660050  size=563  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00660050(int *param_1)

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
  pfVar2 = (float *)(param_1 + 0x4d0);
  D3DXVec3TransformNormal(pfVar2,local_30,piVar1);
  *pfVar2 = *pfVar2 + (float)param_1[0x38];
  param_1[0x4d1] = (int)((float)param_1[0x39] + (float)param_1[0x4d1]);
  param_1[0x4d2] = (int)((float)param_1[0x3a] + (float)param_1[0x4d2]);
  fVar7 = (float10)fcos((float10)0.7853981852531433);
  if (fVar7 < (float10)(float)param_1[0x4d1] * (float10)unaff_EBX +
              (float10)*pfVar2 * (float10)unaff_ESI +
              (float10)(float)param_1[0x4d2] * (float10)fStack_34) {
    *pfVar2 = unaff_ESI;
    param_1[0x4d1] = (int)unaff_EBX;
    param_1[0x4d2] = (int)fStack_34;
    param_1[0x4d3] = (int)local_30[0];
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
  local_30[0] = local_30[0] - (float)param_1[0x4d3];
  if (0.001 < SQRT((unaff_EBX - (float)param_1[0x4d1]) * (unaff_EBX - (float)param_1[0x4d1]) +
                   (unaff_ESI - *pfVar2) * (unaff_ESI - *pfVar2) +
                   (fStack_34 - (float)param_1[0x4d2]) * (fStack_34 - (float)param_1[0x4d2]))) {
    param_1[0x45d] = param_1[0x45d] | 1;
    param_1[0x4cc] = 0x3f800000;
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
    if (0.0 < (float)param_1[0x4d2] * 0.0 + (float)param_1[0x4d1] * 0.0 + *pfVar2) {
      fVar8 = -1.0;
      fVar4 = 1.0;
    }
    fVar5 = *pfVar2 * fVar4;
    fVar6 = (float)param_1[0x4d1] * fVar4;
    fVar4 = (float)param_1[0x4d2] * fVar4;
    fVar7 = (float10)FUN_00ddbb50(((fVar6 + fVar5) * 0.0 + fVar4) /
                                  (SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) * 1.0));
    if (fVar8 < 0.0) {
      fVar7 = fVar7 - (float10)3.1415927;
    }
    param_1[0x4ca] = (int)(float)fVar7;
    param_1[0x25] = (int)(float)fVar7;
  }
  return;
}

// 00660290  FUN_00660290  size=187  [between]
void __fastcall FUN_00660290(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x754) != 0) {
    uVar1 = FUN_0065ca00(0x13);
    *(undefined4 *)(param_1 + 0x15f8) = uVar1;
    uVar1 = FUN_0065ca00(0x14);
    *(undefined4 *)(param_1 + 0x15fc) = uVar1;
    fVar2 = (float10)FUN_0065c990(0x12);
    *(float *)(param_1 + 0x1600) = (float)fVar2;
    fVar2 = (float10)FUN_0065c990(0x10);
    *(float *)(param_1 + 0x1604) = (float)fVar2;
    fVar2 = (float10)FUN_0065c990(0x11);
    *(float *)(param_1 + 0x1608) = (float)fVar2;
    fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x16);
    *(float *)(param_1 + 0x1614) = (float)fVar2;
    fVar2 = (float10)FUN_0065c990(0x17);
    *(float *)(param_1 + 0x1310) = (float)fVar2;
    fVar2 = (float10)FUN_0065c990(0x18);
    *(float *)(param_1 + 0x1314) = (float)fVar2;
    fVar2 = (float10)FUN_0065c990(0x19);
    *(float *)(param_1 + 0x1618) = (float)fVar2;
    fVar2 = (float10)FUN_0065c990(0x1a);
    *(float *)(param_1 + 0x15b0) = (float)fVar2;
    fVar2 = (float10)FUN_0065c990(0x1b);
    *(float *)(param_1 + 0x1324) = (float)fVar2;
  }
  return;
}

// 00660350  Em8040::getAttackInfo  size=530  [class]
undefined4 __thiscall Em8040::getAttackInfo(int param_1,ushort *param_2)

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
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_01646c90);
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
    goto switchD_00660429_caseD_5;
  case 6:
    *puVar1 = 0xd8;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x40000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    goto switchD_00660429_caseD_5;
  case 8:
    *puVar1 = 0xda;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1800;
    break;
  case 0xc:
    *puVar1 = 0xde;
    *(undefined1 *)((int)puVar1 + 0x11) = 0;
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    goto switchD_00660429_caseD_5;
  case 0xe:
    *puVar1 = 0xdf;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    goto switchD_00660429_caseD_5;
  case 0x10:
    *puVar1 = 0xe0;
    puVar1[0x23] = puVar1[0x23] | 0x40000;
    goto switchD_00660429_caseD_5;
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
switchD_00660429_caseD_5:
  FUN_00aa56a0(puVar1);
  return unaff_EBX;
}

// 006605A0  FUN_006605a0  size=77  [between]
undefined4 __fastcall FUN_006605a0(int param_1)

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
      if ((iVar2 != 0x10c) && (iVar2 = (**(code **)(*piVar1 + 0x354))(), iVar2 == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

// 006605F0  FUN_006605f0  size=395  [between]
void __thiscall FUN_006605f0(int *param_1,float param_2)

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
     ((((param_1[0x45d] & 1U) == 0 || ((param_1[0x45d] & 2U) == 0)) ||
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

// 00660780  FUN_00660780  size=330  [between]
void __thiscall FUN_00660780(int *param_1,float *param_2,float param_3)

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

// 006608D0  FUN_006608d0  size=242  [between]
void __fastcall FUN_006608d0(int *param_1)

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
         (fVar1 = (float)param_1[0x449], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = param_1[0x44c];
        local_1c = param_1[0x44d];
        local_18 = param_1[0x44e];
        local_14 = param_1[0x44f];
        FUN_00660780(&local_20,0x3da3d70a);
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

// 006609D0  FUN_006609d0  size=242  [between]
void __fastcall FUN_006609d0(int *param_1)

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
         (fVar1 = (float)param_1[0x449], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = param_1[0x44c];
        local_1c = param_1[0x44d];
        local_18 = param_1[0x44e];
        local_14 = param_1[0x44f];
        FUN_00660780(&local_20,0x3da3d70a);
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

// 00660AD0  FUN_00660ad0  size=195  [between]
void __fastcall FUN_00660ad0(int *param_1)

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
    local_20 = param_1[0x44c];
    local_1c = param_1[0x44d];
    local_18 = param_1[0x44e];
    local_14 = param_1[0x44f];
    FUN_00660780(&local_20,0x3dcccccd);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00660BA0  FUN_00660ba0  size=195  [between]
void __fastcall FUN_00660ba0(int *param_1)

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
    local_20 = param_1[0x44c];
    local_1c = param_1[0x44d];
    local_18 = param_1[0x44e];
    local_14 = param_1[0x44f];
    FUN_00660780(&local_20,0x3dcccccd);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00660C70  FUN_00660c70  size=234  [between]
void __fastcall FUN_00660c70(int *param_1)

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
         (fVar1 = (float)param_1[0x449], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = param_1[0x44c];
        local_1c = param_1[0x44d];
        local_18 = param_1[0x44e];
        local_14 = param_1[0x44f];
        FUN_00660780(&local_20,0x3da3d70a);
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

// 00660D60  FUN_00660d60  size=419  [between]
void __fastcall FUN_00660d60(int param_1)

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
      local_20 = *(float *)(iVar2 + 0x40) - *(float *)(param_1 + 0x1130);
      local_1c = *(float *)(iVar2 + 0x44) - *(float *)(param_1 + 0x1134);
      local_18 = *(float *)(iVar2 + 0x48) - *(float *)(param_1 + 0x1138);
      local_14 = *(float *)(iVar2 + 0x4c) - *(float *)(param_1 + 0x113c);
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

// 00660F10  FUN_00660f10  size=205  [between]
void __fastcall FUN_00660f10(int param_1)

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
         (fVar1 = *(float *)(param_1 + 0x1124), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = *(undefined4 *)(param_1 + 0x1130);
        local_1c = *(undefined4 *)(param_1 + 0x1134);
        local_18 = *(undefined4 *)(param_1 + 0x1138);
        local_14 = *(undefined4 *)(param_1 + 0x113c);
        FUN_00660780(&local_20,0x3d75c28f);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00660FE0  FUN_00660fe0  size=205  [between]
void __fastcall FUN_00660fe0(int param_1)

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
         (fVar1 = *(float *)(param_1 + 0x1124), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = *(undefined4 *)(param_1 + 0x1130);
        local_1c = *(undefined4 *)(param_1 + 0x1134);
        local_18 = *(undefined4 *)(param_1 + 0x1138);
        local_14 = *(undefined4 *)(param_1 + 0x113c);
        FUN_00660780(&local_20,0x3d75c28f);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 006610B0  FUN_006610b0  size=205  [between]
void __fastcall FUN_006610b0(int param_1)

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
         (fVar1 = *(float *)(param_1 + 0x1124), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        local_20 = *(undefined4 *)(param_1 + 0x1130);
        local_1c = *(undefined4 *)(param_1 + 0x1134);
        local_18 = *(undefined4 *)(param_1 + 0x1138);
        local_14 = *(undefined4 *)(param_1 + 0x113c);
        FUN_00660780(&local_20,0x3d75c28f);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 00661180  FUN_00661180  size=911  [between]
void __fastcall FUN_00661180(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x006611c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00a5dcc0(iVar1);
    FUN_00aa4080(0x1a,0,0x3ecccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_0065d590(0);
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
                    /* WARNING: Could not recover jumptable at 0x0066150d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_0066119b_default;
  }
  FUN_00aa4080(0x1c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = 4;
switchD_0066119b_default:
  return;
}

// 006616D0  FUN_006616d0  size=514  [between]
undefined4 __thiscall FUN_006616d0(int *param_1,int *param_2,int param_3,int param_4)

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
    FUN_0065d590(0);
    FUN_00aa4120(0x1a,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *param_2 = *param_2 + 1;
    param_1[0x465] = param_3;
    param_1[0x464] = 0;
    param_1[0x466] = param_4;
    return 0;
  case 1:
    iVar3 = FUN_00a94db0(0x1a);
    if (iVar3 == 0) goto LAB_00661792;
    uVar5 = 0x8000000;
    uVar4 = 0x1b;
    break;
  case 2:
    iVar3 = FUN_00a94db0(0x1b);
    if (iVar3 == 0) goto LAB_00661792;
    uVar5 = 0;
    uVar4 = 0x1d;
    break;
  case 3:
    pcVar1 = *(code **)(*param_1 + 800);
    param_1[0x225] = param_1[0x465];
    iVar3 = (*pcVar1)(0x3d888889);
    if (iVar3 == 0) {
      bVar2 = true;
    }
    else {
      FUN_00aa4120(0x1c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if ((*(byte *)(param_1 + 0x45d) & 1) == 0) {
        FUN_0065d590(1);
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
    FUN_0065d360();
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
LAB_00661792:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_0065d360();
  return 0;
}

// 006618F0  FUN_006618f0  size=474  [between]
int __thiscall FUN_006618f0(int param_1,int param_2)

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
  
  if (((((*(uint *)(param_1 + 0x1174) & 0x200) == 0) && (*(float *)(param_1 + 0x1124) <= 12.25)) &&
      (iVar2 = *(int *)(param_1 + 0xa84), iVar2 != 0)) && (*(int *)(iVar2 + 0xb78) != 0)) {
    uVar9 = 0;
    FUN_00a92f90(0);
    fVar8 = (float10)FUN_00407b40(uVar9);
    if (fVar8 <= (float10)0.4) {
      *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x200;
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
          fVar1 = *(float *)(param_1 + 0x1124);
          if (!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) {
            return 0x13;
          }
          if (fVar3 - fVar4 <= 0.0) {
            uVar7 = FUN_00dde2a0(0,100);
            return (uint)((uVar7 & 3) == 0) * 2 + 0x11;
          }
          bVar5 = FUN_00dde2a0(0,100);
          return 0x13 - (uint)((bVar5 & 3) != 0);
        }
      }
    }
  }
  return -1;
}

// 00661B20  FUN_00661b20  size=35  [between]
void __thiscall FUN_00661b20(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(param_1 + 0x1364);
  *(undefined4 *)(param_1 + 0x1364) = param_2;
  *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
  return;
}

// 00661B80  FUN_00661b80  size=190  [between]
void __fastcall FUN_00661b80(int *param_1)

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

// 00661C40  FUN_00661c40  size=125  [between]
void __fastcall FUN_00661c40(int param_1)

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
  local_38 = 0x28040;
  local_30 = 2;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 00661D10  FUN_00661d10  size=328  [between]
float10 __thiscall FUN_00661d10(int param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*(byte *)(param_1 + 0x1174) & 1) == 0) {
    return (float10)0;
  }
  fVar2 = (float10)0;
  fVar3 = (float10)*(float *)(param_1 + 0x1344) * fVar2;
  fVar1 = fVar3 - (float10)*(float *)(param_1 + 0x1348);
  local_20 = (float)fVar1;
  fVar4 = (float10)*(float *)(param_1 + 0x1348) * fVar2 -
          (float10)*(float *)(param_1 + 0x1340) * fVar2;
  local_1c = (float)fVar4;
  fVar3 = (float10)*(float *)(param_1 + 0x1340) - fVar3;
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

// 00661E60  FUN_00661e60  size=47  [between]
void __fastcall FUN_00661e60(int param_1)

{
  if ((*(byte *)(param_1 + 0x1177) & 1) != 0) {
    FUN_00a8c9b0(0,0x37,0x3f800000,0);
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xfeffffff;
  }
  return;
}

// 00661E90  FUN_00661e90  size=84  [between]
void __fastcall FUN_00661e90(int param_1)

{
  if ((*(uint *)(param_1 + 0x1174) & 0x4000000) != 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    if ((*(byte *)(param_1 + 0xb00) & 8) != 0) {
      FUN_00a8c9b0(0,0x12,0x3f800000,0);
    }
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xfbffffff;
  }
  return;
}

// 00661EF0  FUN_00661ef0  size=1077  [between]
void __fastcall FUN_00661ef0(int param_1)

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
  switch(*(undefined4 *)(param_1 + 0x1040)) {
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
    if ((*(byte *)(param_1 + 0x1174) & 1) == 0) {
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
    goto LAB_0066202b;
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
LAB_0066202b:
    local_16c = pfVar2[1] + local_16c;
    local_168 = pfVar2[2] + local_168;
    local_164 = pfVar2[3] + local_164;
    local_160 = local_160 - local_170;
    local_15c = local_15c - local_16c;
    local_158 = local_158 - local_168;
    local_154 = local_154 - local_164;
    goto switchD_00661f11_default;
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
    goto LAB_00661f67;
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
    goto switchD_00661f11_default;
  }
  pfVar2 = (float *)FUN_00a8b8a0(puVar5,uVar6);
LAB_00661f67:
  local_160 = *pfVar2;
  local_15c = pfVar2[1];
  local_158 = pfVar2[2];
  local_154 = pfVar2[3];
switchD_00661f11_default:
  iVar3 = FUN_009f8b40();
  local_130 = local_170;
  local_10c = iVar3 << 0x10 | 7;
  local_12c = local_16c;
  local_128 = local_168;
  local_140[0] = param_1 + 0x1044;
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

// 00662380  FUN_00662380  size=283  [between]
void __fastcall FUN_00662380(int param_1)

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
    local_60[0] = param_1 + 0x1184;
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

// 006624A0  FUN_006624a0  size=229  [between]
void __thiscall FUN_006624a0(int param_1,undefined4 param_2)

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

// 00662590  FUN_00662590  size=190  [between]
void __thiscall FUN_00662590(int param_1,undefined4 param_2)

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
  local_40 = *(float *)(param_1 + 0xea0) - *(float *)(param_1 + 0x40);
  local_2c = iVar1 << 0x10 | 7;
  local_28 = 0;
  local_3c = *(float *)(param_1 + 0xea4) - *(float *)(param_1 + 0x44);
  local_24 = 0;
  local_20 = 0;
  local_38 = *(float *)(param_1 + 0xea8) - *(float *)(param_1 + 0x48);
  local_34 = *(float *)(param_1 + 0xeac) - *(float *)(param_1 + 0x4c);
  local_1c = "Em8220_Patrol2";
  local_30 = 0x3dcccccd;
  FUN_0090fb00(&local_60);
  return;
}

// 00662650  FUN_00662650  size=51  [between]
void __fastcall FUN_00662650(undefined4 param_1)

{
  int *piVar1;
  
  FUN_00e5e0c0("em0040_vo_separate",param_1,0xffffffff,0);
  FUN_00c81b30(0x4f);
  piVar1 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar1 + 0x44))(0xb,0);
  return;
}

// 00662690  FUN_00662690  size=1026  [between]
void __thiscall FUN_00662690(int param_1,undefined4 *param_2,float *param_3,int param_4)

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
    *(float *)(param_1 + 0x1328) = (float)fVar5;
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
  *(undefined4 *)(param_1 + 0x1328) = 0;
  return;
}

// 00662AA0  FUN_00662aa0  size=73  [between]
void __fastcall FUN_00662aa0(int *param_1)

{
  if ((*(byte *)(param_1 + 0x45d) & 1) != 0) {
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x45d] = param_1[0x45d] & 0xfffffffe;
    param_1[0x4cc] = 0;
  }
  return;
}

// 00662AF0  FUN_00662af0  size=469  [between]
void __fastcall FUN_00662af0(int *param_1)

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
  
  if ((*(byte *)(param_1 + 0x45d) & 1) == 0) {
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
    param_1[0x4cc] = 0x3f800000;
    return;
  }
  if (param_1[0x1d9] != 0) {
    (**(code **)(*param_1 + 0x314))();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
  }
  param_1[0x45d] = param_1[0x45d] & 0xfffffffe;
  local_20 = 0;
  local_1c = 0x3f800000;
  param_1[0x4cc] = 0x3f800000;
  local_18 = 0;
  fVar1 = (float)param_1[0x4ca];
  FUN_00662690(param_1 + 0x2c,&local_20,0);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
  uStack_30 = *puVar2;
  fStack_2c = (float)puVar2[1];
  uStack_28 = puVar2[2];
  uStack_24 = puVar2[3];
  fVar3 = (float10)FUN_00ddba30((fVar1 - (float)param_1[0x4ca]) + (float)param_1[0x4cb]);
  param_1[0x4cb] = (int)(float)fVar3;
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 + (float10)fStack_2c));
  fStack_2c = (float)fVar3;
  (**(code **)(*param_1 + 0x88))(&uStack_30);
  D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
  return;
}

// 00662CD0  FUN_00662cd0  size=429  [between]
void __fastcall FUN_00662cd0(int *param_1)

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
  
  if ((float)param_1[0x4cc] < 1.0) {
    fVar1 = (float)param_1[0x4cc] + 0.025;
    param_1[0x4cc] = (int)fVar1;
    local_30 = 0.0;
    local_28 = 0.0;
    local_2c = 1.0;
    if (NAN(fVar1) || 1.0 < fVar1 == (fVar1 == 1.0)) {
      iVar2 = FUN_0065d9d0(&local_30,param_1 + 0x4d0,&local_30,fVar1);
      if (iVar2 == 0) {
        param_1[0x4cc] = 0x3f800000;
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
      param_1[0x4cc] = 0x3f800000;
    }
    fVar1 = (float)param_1[0x4ca];
    FUN_00662690(param_1 + 0x2c,&local_30,0);
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
    uStack_20 = *puVar3;
    fStack_1c = (float)puVar3[1];
    uStack_18 = puVar3[2];
    uStack_14 = puVar3[3];
    fVar4 = (float10)FUN_00ddba30((fVar1 - (float)param_1[0x4ca]) + (float)param_1[0x4cb]);
    param_1[0x4cb] = (int)(float)fVar4;
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 + (float10)fStack_1c));
    fStack_1c = (float)fVar4;
    (**(code **)(*param_1 + 0x88))(&uStack_20);
    D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
    return;
  }
  return;
}

// 00662EB0  FUN_00662eb0  size=177  [between]
void __thiscall FUN_00662eb0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_2 == 0) {
    param_1[0x45d] = param_1[0x45d] & 0xfffffffe;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
  }
  else {
    param_1[0x45d] = param_1[0x45d] | 1;
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

// 00662F70  Em8040::vf14C  size=191  [class]
bool __thiscall Em8040::vf14C(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0x2b) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x28) {
      return true;
    }
  }
  else if (param_2 == 0x56) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x7d) {
      return true;
    }
  }
  else if (((param_2 == 0x2a) && (*(int *)(param_1 + 0x618) == 0x28)) &&
          (*(int *)(param_1 + 0x620) < 1)) {
    return true;
  }
  if (((*(uint *)(param_1 + 0x1174) & 0x20000) == 0) && (*(int *)(param_1 + 0x4e4) == 0)) {
    switch(param_2) {
    case 0x53:
    case 0x54:
    case 0x55:
      iVar1 = FUN_00a8cab0();
      if (((iVar1 != 0x8d) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x7e)) &&
         (iVar1 = FUN_00a8cab0(), iVar1 != 0x7f)) {
        return *(int *)(param_1 + 0x1188) == 2;
      }
      break;
    case 0x56:
      if (*(int *)(param_1 + 0x618) == 0x7d) {
        return true;
      }
      break;
    case 0x78:
      return true;
    }
  }
  return false;
}

// 00663070  FUN_00663070  size=290  [between]
void __fastcall FUN_00663070(int *param_1)

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
    FUN_00661b80();
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
      FUN_0065cbf0(param_1[0x2a1] + 0x40,uVar1,uVar2);
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
                    /* WARNING: Could not recover jumptable at 0x0066314d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 006631D0  FUN_006631d0  size=106  [between]
void __fastcall FUN_006631d0(int *param_1)

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
    FUN_0065dcf0(uVar2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0066322c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00663250  FUN_00663250  size=432  [between]
void __fastcall FUN_00663250(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[0x187] == 0) {
    param_1[0x45d] = param_1[0x45d] | 0x20000;
    param_1[0x45d] = param_1[0x45d] & 0xffffffbf;
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
    FUN_00661b80();
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
      FUN_0065cbf0(param_1[0x2a1] + 0x40,uVar2,uVar3);
      param_1[0x250] = param_1[0x250] + 1;
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      iVar4 = FUN_00a92f90();
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 4;
      }
                    /* WARNING: Could not recover jumptable at 0x00663360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00663400  FUN_00663400  size=656  [between]
void __fastcall FUN_00663400(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1[0x187] == 0) {
    param_1[0x45d] = param_1[0x45d] | 0x20000;
    FUN_00662aa0();
    param_1[0x4d9] = 0;
    param_1[0x4da] = -1;
    param_1[0x45d] = param_1[0x45d] | 0x100;
    param_1[0x45d] = param_1[0x45d] & 0xffdfffff;
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
    FUN_00ddba00(param_1 + 0x444,param_1 + 0x2c);
    param_1[0x469] = 0x3f000000;
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
      D3DXQuaternionSlerp(&local_20,param_1 + 0x444,&local_20,fVar1);
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
      param_1[0x4cc] = 0x3f800000;
      param_1[0x248] = 0x3f800000;
    }
  }
  iVar2 = FUN_006616d0(param_1 + 0x188,0x3e3851ec,0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 006636A0  FUN_006636a0  size=1070  [between]
void __fastcall FUN_006636a0(int *param_1)

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
    param_1[0x45d] = param_1[0x45d] | 0x20000;
    param_1[0x45d] = param_1[0x45d] & 0xffffffbf;
    FUN_00aa4120(0x57,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 != 0) {
      *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffffb;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    FUN_00662aa0();
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
    FUN_00ddba00(param_1 + 0x444,param_1 + 0x2c);
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
        D3DXQuaternionSlerp(&local_30,param_1 + 0x444,&local_30,fVar1);
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
        param_1[0x4cc] = 0x3f800000;
        param_1[0x249] = 0x3f800000;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      FUN_00661b80();
    }
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_0065cbf0(param_1[0x2a1] + 0x40,0x3e19999a,0x3c8efa35);
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
        param_1[0x4cc] = 0x3f800000;
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

// 00663AE0  FUN_00663ae0  size=516  [between]
void __fastcall FUN_00663ae0(int *param_1)

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
  FUN_0065cbf0(param_1[0x2a1] + 0x40,0x3df5c28f,0x3d8efa35);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x250] == 0) && (iVar4 = FUN_00a12210(0), iVar4 != 0)) {
    param_1[0x5b8] = *(int *)(iVar4 + 0x50);
    param_1[0x5b9] = *(int *)(iVar4 + 0x54);
    param_1[0x5ba] = *(int *)(iVar4 + 0x58);
    param_1[0x5bb] = *(int *)(iVar4 + 0x5c);
    param_1[0x5b9] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e0d30(param_1 + 0x5b8);
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
  param_1[0x5b8] = 0;
  param_1[0x5b9] = 0;
  param_1[0x5ba] = 0;
  param_1[0x5bb] = 0;
  if ((param_1[0x1d9] != 0) && (param_1[0x250] == 0)) {
    FUN_008e0d30(param_1 + 0x5b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00663ce2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00663CF0  FUN_00663cf0  size=188  [between]
void __fastcall FUN_00663cf0(int *param_1)

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
      FUN_0065cbf0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3c8efa35);
    }
    FUN_00661b80();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00663d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00663DB0  FUN_00663db0  size=75  [between]
void __fastcall FUN_00663db0(int param_1)

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
  *(undefined4 *)(param_1 + 0x11a0) = 0x44160000;
  *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x20;
  return;
}

// 00663E00  FUN_00663e00  size=38  [between]
void __fastcall FUN_00663e00(int param_1)

{
  FUN_009f8b10();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x654) = 0xffffffff;
  *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffffffdf;
  return;
}

// 00663E30  FUN_00663e30  size=87  [between]
void __fastcall FUN_00663e30(int *param_1)

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
    param_1[0x45d] = param_1[0x45d] & 0xffffffdf;
                    /* WARNING: Could not recover jumptable at 0x00663e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00663E90  FUN_00663e90  size=216  [between]
void __fastcall FUN_00663e90(int *param_1)

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
    FUN_0065dc60(uVar2);
    return;
  }
  FUN_0065dcf0(uVar2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_009f8b10();
    FUN_00a7c950();
    param_1[0x195] = -1;
    param_1[0x45d] = param_1[0x45d] & 0xffffffdf;
  }
  FUN_0065dc60(uVar2);
  return;
}

// 006640E0  FUN_006640e0  size=190  [between]
undefined4 __thiscall FUN_006640e0(int param_1,int param_2)

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
LAB_0066415f:
      if (*(int *)(param_2 + 0xec) == 0) {
        FUN_00acf110(param_2,0,0x3e4ccccd);
      }
      *(undefined4 *)(param_1 + 0x16f4) = 0x41700000;
      FUN_00ac8d00(param_1,param_2,0);
      return 1;
    }
    if (*(int *)(param_2 + 0x94) != 0) {
      iVar3 = FUN_00ac82f0();
      if (iVar3 != 0) {
        iVar3 = FUN_00ac8350();
        if (iVar3 != 0) {
          iVar3 = FUN_00ac8ca0(param_2);
          if (iVar3 != 0) goto LAB_0066415f;
        }
      }
      if ((*(int *)(param_2 + 0x94) != 0) && (bVar2)) goto LAB_0066415f;
    }
  }
  return 0;
}

// 006641A0  FUN_006641a0  size=135  [between]
undefined4 __thiscall FUN_006641a0(int *param_1,int *param_2,undefined4 *param_3)

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

// 00664230  FUN_00664230  size=70  [between]
void __fastcall FUN_00664230(int *param_1)

{
  (**(code **)(*param_1 + 200))(1);
  if (param_1[0x1d9] != 0) {
    FUN_008e0ae0(1);
  }
  if ((param_1[0x1d9] != 0) && (param_1[0x5c3] != 0)) {
    param_1[0x5c3] = 0;
    FUN_008e5ac0(2);
  }
  return;
}

// 00664280  FUN_00664280  size=34  [between]
undefined4 FUN_00664280(int *param_1)

{
  if (((param_1[0x24] & 0x2000000U) != 0) && (*param_1 != 0x1f)) {
    return 1;
  }
  return 0;
}

// 006642F0  FUN_006642f0  size=41  [between]
undefined4 FUN_006642f0(int *param_1)

{
  if ((((param_1[0x24] & 0x10000000U) == 0) && (*param_1 != 0x4b)) && (*param_1 != 0x4c)) {
    return 0;
  }
  return 1;
}

// 00664340  Em8040::createDestructExplosion  size=380  [class]
void __fastcall Em8040::createDestructExplosion(int param_1)

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
    iVar2 = CollisionAttackData::CollisionAttackData_3();
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
  FUN_00dd5650(&DAT_01646d0c);
  return;
}

// 006644C0  FUN_006644c0  size=242  [between]
void __fastcall FUN_006644c0(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00664230();
    FUN_00662aa0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
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
  FUN_00662cd0();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006645b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006645C0  FUN_006645c0  size=242  [between]
void __fastcall FUN_006645c0(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00664230();
    FUN_00662aa0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
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
  FUN_00662cd0();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006646b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006646C0  FUN_006646c0  size=521  [between]
void __fastcall FUN_006646c0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00664230();
    FUN_00662af0();
    uVar2 = 0x3e4ccccd;
    param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
    if (param_1[0x440] == 0x31) {
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
                    /* WARNING: Could not recover jumptable at 0x006648c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00664A90  FUN_00664a90  size=545  [between]
void __fastcall FUN_00664a90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00664230();
    FUN_00662af0();
    FUN_00aa9280(0x2d);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x469] = 0x3f19999a;
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar3 = (float10)-1.0;
    }
    else {
      fVar3 = (float10)FUN_00e36a50(0);
    }
    pcVar1 = *(code **)(*param_1 + 0x1f8);
    param_1[0x465] =
         (int)(float)((float10)(float)param_1[0x22a] * (float10)0.6 * fVar3 * (float10)60.0 *
                     (float10)0.9);
    (*pcVar1)(1);
    FUN_0065d590(0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x469] = 0x3f99999a;
      param_1[0x45d] = param_1[0x45d] & 0xffffffdf;
      uVar4 = 0x2e;
LAB_00664b8c:
      FUN_00aa4120(uVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
LAB_00664b99:
    FUN_0065d360();
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = param_1[0x465];
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 == 0) goto LAB_00664b99;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    uVar4 = 0x2f;
    goto LAB_00664b8c;
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
                    /* WARNING: Could not recover jumptable at 0x00664caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00664CD0  FUN_00664cd0  size=565  [between]
void __fastcall FUN_00664cd0(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00664230();
    FUN_00662af0();
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x225] = param_1[0x465];
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    FUN_0065d590(0);
    param_1[0x469] = 0x41f00000;
    param_1[0x465] = -0x41800000;
    param_1[0x187] = 1;
    FUN_00aa4120(0x2e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = param_1[0x465];
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
    FUN_0065d360();
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
                    /* WARNING: Could not recover jumptable at 0x00664f03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00664F20  FUN_00664f20  size=271  [between]
void __fastcall FUN_00664f20(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00664230();
    FUN_00662af0();
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
                    /* WARNING: Could not recover jumptable at 0x00664fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00aa4080(0x33,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  return;
}

// 00665030  FUN_00665030  size=208  [between]
void __fastcall FUN_00665030(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00664230();
    FUN_00662af0();
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
                    /* WARNING: Could not recover jumptable at 0x006650fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006651B0  FUN_006651b0  size=312  [between]
undefined4 __thiscall FUN_006651b0(int param_1,undefined4 param_2)

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
     (fVar1 = *(float *)(param_1 + 0x1390), 0 < *(int *)(local_4 + 0x14))) {
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

// 006652F0  FUN_006652f0  size=127  [between]
void __thiscall FUN_006652f0(int param_1,undefined4 param_2)

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

// 00665400  FUN_00665400  size=72  [between]
bool FUN_00665400(void)

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

// 006654A0  FUN_006654a0  size=52  [between]
void __fastcall FUN_006654a0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1fc))();
  if ((iVar1 == 0) && (param_1[0x139] == 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
    param_1[0x57d] = 0x42700000;
                    /* WARNING: Could not recover jumptable at 0x006654d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

// 006654E0  FUN_006654e0  size=602  [between]
void __thiscall FUN_006654e0(int param_1,int param_2)

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
    *(undefined4 *)(param_1 + 0x15d0) = *puVar5;
    pfVar7 = (float *)(param_1 + 0x15d0);
    *(undefined4 *)(param_1 + 0x15d4) = puVar5[1];
    *(undefined4 *)(param_1 + 0x15d8) = puVar5[2];
    *(undefined4 *)(param_1 + 0x15dc) = puVar5[3];
    fVar8 = (*(float *)(param_1 + 0x48) - *(float *)(iVar4 + 0x48)) * *(float *)(param_1 + 0x15d8) +
            *(float *)(param_1 + 0x15d4) * (*(float *)(param_1 + 0x44) - *(float *)(iVar4 + 0x44)) +
            *pfVar7 * (*(float *)(param_1 + 0x40) - *(float *)(iVar4 + 0x40));
    local_3c = *(float *)(iVar4 + 0x44) + *(float *)(param_1 + 0x15d4) * fVar8;
    local_38 = *(float *)(iVar4 + 0x48) + *(float *)(param_1 + 0x15d8) * fVar8;
    pfVar1 = (float *)(param_1 + 0x15c0);
    local_34 = *(float *)(iVar4 + 0x4c) + *(float *)(param_1 + 0x15dc) * fVar8;
    *pfVar1 = *(float *)(param_1 + 0x40) - (*(float *)(iVar4 + 0x40) + *pfVar7 * fVar8);
    *(float *)(param_1 + 0x15c4) = *(float *)(param_1 + 0x44) - local_3c;
    *(float *)(param_1 + 0x15c8) = *(float *)(param_1 + 0x48) - local_38;
    *(float *)(param_1 + 0x15cc) = *(float *)(param_1 + 0x4c) - local_34;
    fVar8 = *(float *)(param_1 + 0x15c8) * *(float *)(param_1 + 0x15c8) +
            *pfVar1 * *pfVar1 + *(float *)(param_1 + 0x15c4) * *(float *)(param_1 + 0x15c4);
    if (fVar8 < 0.0 == (fVar8 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      *(undefined4 *)(param_1 + 0x15c4) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x15c8) = 0;
    }
    fVar3 = 1.0;
    fVar8 = *pfVar1 * 0.0 + *(float *)(param_1 + 0x15c4) + *(float *)(param_1 + 0x15c8) * 0.0;
    fVar2 = -1.0;
    if ((fVar8 < -1.0) || (fVar2 = fVar8, fVar8 <= 1.0)) {
      fVar3 = fVar2;
    }
    fVar6 = (float10)FUN_00ddbb50(fVar3);
    if (*pfVar7 * *(float *)(param_1 + 0x15c8) - *(float *)(param_1 + 0x15d8) * *pfVar1 < 0.0) {
      fVar6 = -fVar6;
    }
    *(float *)(param_1 + 0x15f0) = (float)fVar6;
    fVar8 = (float)fVar6;
    D3DXQuaternionRotationAxis(local_30);
    FUN_00ddb9f0(param_1 + 0xb0,&local_3c);
    D3DXMatrixInverse(param_1 + 0xf0,0,param_1 + 0xb0);
    *pfVar1 = 0.0;
    *(undefined4 *)(param_1 + 0x15c4) = 0x40000000;
    *(undefined4 *)(param_1 + 0x15c8) = 0;
    *(float **)(param_1 + 0x15e0) = pfVar7;
    *(float *)(param_1 + 0x15e4) = fVar8;
    *(undefined4 *)(param_1 + 0x15e8) = unaff_EDI;
    *(undefined4 *)(param_1 + 0x15ec) = unaff_ESI;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x800000;
  }
  return;
}

// 00665740  FUN_00665740  size=159  [between]
undefined4 __fastcall FUN_00665740(int param_1)

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

// 006657E0  Em8040::vf2A0  size=61  [class]
void __fastcall Em8040::vf2A0(int param_1)

{
  *(undefined4 *)(param_1 + 0xeb8) = 1;
  if ((*(uint *)(param_1 + 0xb00) & 0x100) != 0) {
    FUN_00a82ac0(*(undefined4 *)(param_1 + 0x4f0),4,1,0);
    *(undefined4 *)(param_1 + 0x814) = 4;
  }
  return;
}

// 00665820  FUN_00665820  size=63  [between]
uint __fastcall FUN_00665820(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4a0) == 5) && ((*(uint *)(param_1 + 0x1174) & 0x80000) == 0)) {
    iVar1 = FUN_00665400();
    if (iVar1 == 0) {
      return ~(*(uint *)(param_1 + 0x1174) >> 4) & 1;
    }
  }
  return *(uint *)(param_1 + 0xd44) >> 0x19 & 1;
}

// 00665860  FUN_00665860  size=286  [between]
undefined4 __fastcall FUN_00665860(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (((((param_1[0x128] == 0xe) || (param_1[0x128] == 0xf)) || (0 < param_1[0x554])) ||
      ((((iVar1 = FUN_00a8c760(6), iVar1 != 0 || (iVar1 = FUN_00a8c760(5), iVar1 != 0)) ||
        ((param_1[0x139] != 0 ||
         ((iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 != 0 || (param_1[0x21c] < 1)))))) ||
       (param_1[0x187] == 0)))) ||
     (((iVar1 = FUN_00a82e80(), iVar1 != 0 || (param_1[0x186] == 0x5b)) ||
      ((*(byte *)(param_1 + 0x130) & 1) == 0)))) {
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
  FUN_00c59410(param_1[0x13c],0xffffffff,&uStack_20,0x40000000,0x3fc00000,0x40490fdb,0x3f490fdb,
               0x1005,10);
  return 1;
}

// 00665980  Em8040::vf13C  size=123  [class]
bool __fastcall Em8040::vf13C(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x128] != 0xe) && (param_1[0x128] != 0xf)) && (param_1[0x554] < 1)) {
    iVar1 = FUN_00a8c760(6);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(5);
      if ((iVar1 == 0) && (param_1[0x139] == 0)) {
        iVar1 = (**(code **)(*param_1 + 0x1d8))();
        if ((iVar1 == 0) && ((0 < param_1[0x21c] && (param_1[0x187] != 0)))) {
          iVar1 = FUN_00a82e80();
          if (iVar1 == 0) {
            return param_1[0x186] != 0x5b;
          }
        }
      }
    }
  }
  return false;
}

// 00665A00  Em8040::vf2D4  size=35  [class]
byte __fastcall Em8040::vf2D4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac8a50();
  if (iVar1 != 0) {
    return 0;
  }
  return (byte)~*(byte *)(param_1 + 0x4c0) >> 2 & 1;
}

// 00665A30  FUN_00665a30  size=311  [between]
void __fastcall FUN_00665a30(int param_1)

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
          fVar1 = 1.21;
        }
        else {
          fVar1 = 12.959999;
        }
        if (fVar3 * fVar3 + fVar2 * fVar2 <= fVar1) {
          if (*(int *)(param_1 + 0xedc) != 0) {
            return;
          }
          fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xee0);
          *(float *)(param_1 + 0xee0) = fVar2;
          if (fVar2 < 30.0) {
            return;
          }
          *(undefined4 *)(param_1 + 0xedc) = 1;
          return;
        }
      }
      if ((*(int *)(param_1 + 0xedc) != 0) &&
         (fVar2 = *(float *)(param_1 + 0xee0) - *(float *)(param_1 + 0x910),
         *(float *)(param_1 + 0xee0) = fVar2, fVar2 <= 0.0)) {
        *(undefined4 *)(param_1 + 0xedc) = 0;
        *(undefined4 *)(param_1 + 0xee0) = 0;
        return;
      }
    }
  }
  return;
}

// 00665B70  FUN_00665b70  size=732  [between]
void __fastcall FUN_00665b70(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iStack_24;
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar2 = *(code **)(*param_1 + 0x110);
    param_1[0x34a] = 0;
    (*pcVar2)(1);
    param_1[0x583] = 0x42700000;
    (**(code **)(*param_1 + 0x358))(0x208,0);
    param_1[0x248] = 0x42c90000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3ae] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x583] = 0x42700000;
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      iVar4 = FUN_00a82d50();
      if (iVar4 == 1) {
        iStack_24 = param_1[0x5c4];
        iStack_1c = param_1[0x5c6];
        iStack_18 = param_1[0x5c7];
        fStack_20 = (float)param_1[0x5c5] + 0.5;
        (**(code **)(*param_1 + 0x7c))(&iStack_24,param_1 + 0x5c8);
        param_1[0x248] = 0x42c90000;
        (**(code **)(*param_1 + 0x20))();
        iVar4 = FUN_00a81330();
        if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
          (**(code **)(*piVar5 + 0x20))();
        }
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
        (**(code **)(*param_1 + 0x110))(0);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      pcVar2 = *(code **)(*param_1 + 0x110);
      param_1[0x583] = 0x42700000;
      (*pcVar2)(1);
      (**(code **)(*param_1 + 0x358))(0x208,0);
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x34a] = 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x583] = 0x42700000;
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      (**(code **)(*param_1 + 0x1c))();
      iVar4 = FUN_00a81330();
      if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 0x1c))();
      }
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      (**(code **)(*param_1 + 0x110))(1);
      (**(code **)(*param_1 + 0x358))(0x208,0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((param_1[0x45d] & 0x10000000U) == 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x34a] = 1;
      (*pcVar2)();
      return;
    }
  }
  return;
}

// 00665E60  FUN_00665e60  size=63  [between]
uint FUN_00665e60(void)

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
  puVar3 = &DAT_01b35590;
  (**(code **)(*piVar2 + 4))(&DAT_01b35590);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 00665EA0  FUN_00665ea0  size=310  [between]
void __fastcall FUN_00665ea0(int param_1)

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
      puVar5 = &DAT_01b35590;
      (**(code **)(*piVar2 + 4))(&DAT_01b35590);
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

// 00665FE0  FUN_00665fe0  size=310  [between]
void __fastcall FUN_00665fe0(int param_1)

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
      puVar5 = &DAT_01b35590;
      (**(code **)(*piVar2 + 4))(&DAT_01b35590);
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

// 00666120  FUN_00666120  size=345  [between]
void __fastcall FUN_00666120(int *param_1)

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
      puVar5 = &DAT_01b35590;
      (**(code **)(*piVar2 + 4))(&DAT_01b35590);
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

// 00666280  FUN_00666280  size=345  [between]
void __fastcall FUN_00666280(int *param_1)

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
      puVar5 = &DAT_01b35590;
      (**(code **)(*piVar2 + 4))(&DAT_01b35590);
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

// 006663E0  FUN_006663e0  size=338  [between]
void __fastcall FUN_006663e0(int *param_1)

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
      puVar5 = &DAT_01b35590;
      (**(code **)(*piVar2 + 4))(&DAT_01b35590);
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

// 00666540  FUN_00666540  size=337  [between]
void __fastcall FUN_00666540(int *param_1)

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
      puVar5 = &DAT_01b35590;
      (**(code **)(*piVar2 + 4))(&DAT_01b35590);
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

// 006666A0  FUN_006666a0  size=290  [between]
void __fastcall FUN_006666a0(int *param_1)

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
      puVar5 = &DAT_01b35590;
      (**(code **)(*piVar2 + 4))(&DAT_01b35590);
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

// 006667D0  Em8040::vf338  size=164  [class]
void __thiscall Em8040::vf338(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 0;
  if (0 < param_4) {
    piVar1 = (int *)(param_3 + 0x18);
    do {
      if (*piVar1 == *(int *)(param_1 + 0x4b4)) {
        iVar2 = iVar2 + 1;
      }
      piVar1 = piVar1 + 9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    if (iVar2 != 0) {
      return;
    }
  }
  if (((*(int *)(param_1 + 0x4a0) != 0x10) && ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
     (*(int *)(param_1 + 0x16fc) == 0)) {
    if (*(int *)(param_1 + 0x4a0) != 5) {
      EmBaseDLC::vf364(0xffffffff);
      return;
    }
    iVar2 = FUN_00c2a5b0(param_1 + 0xab0);
    if ((iVar2 != 0) &&
       (fVar3 = (float10)FUN_00dde300(0,0x3f800000), fVar3 < (float10)*(float *)(param_1 + 0x1310)))
    {
      FUN_00ac9650(0);
    }
  }
  return;
}

// 00666880  Em8040::vf33C  size=1576  [class]
void __thiscall Em8040::vf33C(int *param_1,int *param_2,uint *param_3)

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
      param_1[0x557] = param_1[0x557] + 1;
      return;
    }
  }
  bVar2 = false;
  if ((param_1[0x186] == 0x32) || (param_1[0x186] == 0x40)) {
    bVar2 = true;
    param_2[2] = 1;
  }
  if (param_1[0x186] == 0x60) {
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    bVar2 = true;
  }
  iVar6 = FUN_00a8c760(0x31);
  if (iVar6 != 0) {
    bVar2 = true;
  }
  if (param_1[0x1d9] == 0) goto LAB_00666bd0;
  iVar6 = FUN_00a8c760(5);
  iVar4 = FUN_00a8c760(6);
  if (((param_1[0x1d9] == 0) || (iVar5 = (**(code **)(*param_1 + 800))(0x3d888889), iVar5 == 0)) ||
     (bVar2)) {
    if (-1 < (int)param_3[4]) {
LAB_00666e92:
      *param_2 = 0xc;
      param_3[6] = param_1[0x12d];
      return;
    }
    if (-1 < (int)param_3[2]) {
      if ((-1 < (int)param_3[4]) || ((~(*param_3 >> 0x1f) & 1) == 0)) goto LAB_00666e92;
      if (param_2[0x33] - param_1[0x557] < 2) {
        *param_2 = 0xb - (uint)bVar2;
        param_3[6] = param_1[0x12d];
        return;
      }
    }
    goto LAB_00666bd0;
  }
  iVar5 = param_2[0x33];
  iVar1 = param_1[0x557];
  if (((1 < iVar5 - iVar1) || (iVar6 != 0)) || (iVar4 != 0)) {
    uVar8 = param_3[4];
    if (((int)uVar8 < 0) &&
       (((int)param_3[2] < 0 || (((int)uVar8 < 0 && ((~(*param_3 >> 0x1f) & 1) != 0)))))) {
      if (param_1[0x584] == 0) goto LAB_00666bd0;
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
        goto LAB_00666bd0;
      }
    }
    else {
      (**(code **)(*param_1 + 0x344))(10,1,1);
      iVar6 = FUN_00a8cab0();
      if ((iVar6 != 0xa5) && (iVar6 = FUN_00a8cab0(), iVar6 != 0xac)) {
        if (local_c != 0) {
          *param_2 = 5;
          if ((iVar4 != 0) || ((param_1[0x186] == 0xa7 && (param_1[0x187] < 2)))) {
            param_2[3] = 1;
          }
          param_3[6] = param_1[0x12d];
          if (param_1[0x186] != 0xa8) {
            return;
          }
          *param_2 = 0xc;
          return;
        }
        goto LAB_00666bd0;
      }
    }
  }
  uVar8 = param_3[4];
  if ((int)uVar8 < 0) {
    if ((int)param_3[2] < 0) goto LAB_00666bd0;
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
      goto LAB_00666bd0;
    }
  }
  bVar2 = false;
  if (((param_2[0x1f] != 0) && ((9 < param_2[0x1e] && (*(int *)(param_2[0x1f] + 0x24) == 2)))) ||
     (iVar6 = FUN_0043f830(5), iVar6 != 0)) {
    bVar2 = true;
  }
  if (((uVar8 & 0x40000000) == 0) || ((~(*param_3 >> 0x1e) & 1) == 0)) {
    if (bVar2) goto LAB_00666d16;
  }
  else if (bVar2) {
LAB_00666d16:
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
LAB_00666bd0:
  param_3[6] = 0x42000;
  return;
}

// 00666EB0  FUN_00666eb0  size=381  [between]
undefined4 FUN_00666eb0(float *param_1)

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

// 00667030  FUN_00667030  size=403  [between]
void __fastcall FUN_00667030(int param_1)

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
  
  iVar2 = FUN_00666eb0(&local_30);
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

// 006671D0  FUN_006671d0  size=98  [between]
void __fastcall FUN_006671d0(int param_1)

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
      *(int *)(param_1 + 0x1048) = iVar1;
      if (iVar1 != -1) {
        *(undefined4 *)(param_1 + 0x104c) = (&DAT_0163bb84)[iVar1];
      }
    }
  }
  return;
}

// 00667240  FUN_00667240  size=123  [between]
void __fastcall FUN_00667240(int param_1)

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
      if ((iVar1 != 0) && (*(int *)(param_1 + 0x1048) != -1)) {
        FUN_00408ec0(*(int *)(param_1 + 0x1048),0);
      }
    }
    (**(code **)(*(int *)(param_1 + 0x1050) + 8))(0x3f800000,0,0);
  }
  return;
}

// 006672C0  FUN_006672c0  size=11  [between]
void FUN_006672c0(void)

{
  FUN_00a805f0();
  return;
}

// 00667300  FUN_00667300  size=60  [between]
void __fastcall FUN_00667300(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x20;
    FUN_00aa9280(5);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00667360  FUN_00667360  size=70  [between]
void __fastcall FUN_00667360(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffffffdf;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x40000;
    FUN_00aa9280(5);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00667560  Em8040::vf30  size=93  [class]
void __fastcall Em8040::vf30(int param_1)

{
  undefined4 *puVar1;
  
  BehaviorEmBase::vf30();
  FUN_00667240();
  FUN_00c1a1c0(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xb9c));
  if (*(int *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x34) = 1;
    puVar1 = (undefined4 *)FUN_009f8b60();
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x38) = *puVar1;
  }
  FUN_00c27e80(*(undefined4 *)(param_1 + 0x4f0));
  return;
}

// 006675C0  FUN_006675c0  size=171  [between]
undefined4 __thiscall FUN_006675c0(int param_1,int param_2)

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
            if ((iVar1 != 0) && (*(int *)(param_1 + 0x1120) != 0)) {
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

// 00667670  FUN_00667670  size=222  [between]
void __fastcall FUN_00667670(int *param_1)

{
  code *pcVar1;
  
  switch(param_1[0x186]) {
  case 0:
  case 0x5d:
  case 0x7b:
  case 0x80:
  case 0x83:
    break;
  default:
    if (param_1[0x186] != 0x5b) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  param_1[0x139] = 1;
  param_1[0x45d] = param_1[0x45d] | 0x20000000;
  (**(code **)(*param_1 + 0x110))(1);
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if ((param_1[0x45d] & 0x4000000U) != 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    if ((*(byte *)(param_1 + 0x2c0) & 8) != 0) {
      FUN_00a8c9b0(0,0x12,0x3f800000,0);
    }
    param_1[0x45d] = param_1[0x45d] & 0xfbffffff;
  }
  pcVar1 = *(code **)(*param_1 + 0x358);
  param_1[0x583] = 0x42c99999;
  (*pcVar1)(0x208,param_1 + 0x588);
  return;
}

// 006677E0  FUN_006677e0  size=159  [between]
void __fastcall FUN_006677e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(*param_1 + 0x110))(0);
  if ((param_1[0x45d] & 0x4000000U) != 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    if ((*(byte *)(param_1 + 0x2c0) & 8) != 0) {
      FUN_00a8c9b0(0,0x12,0x3f800000,0);
    }
    param_1[0x45d] = param_1[0x45d] & 0xfbffffff;
  }
  (**(code **)(*param_1 + 0x20))();
  FUN_009fdde0();
  param_1[0x139] = 1;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0066787c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x20))();
      return;
    }
  }
  return;
}

// 00667880  FUN_00667880  size=160  [between]
void __fastcall FUN_00667880(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     ((param_1[0x45d] & 0x20000000U) == 0)) {
    if ((float)param_1[0x449] < *(float *)(&DAT_01882150 + param_1[0x462] * 0x14)) {
      iVar2 = FUN_00665820();
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006678df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    iVar2 = FUN_00ac4670(param_1 + 0x10,1);
    if ((iVar2 != 0) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)((float)param_1[0x244] + fVar1),
       30.0 <= (float)param_1[0x244] + fVar1)) {
                    /* WARNING: Could not recover jumptable at 0x0066791c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00667920  FUN_00667920  size=53  [between]
void __fastcall FUN_00667920(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     (((param_1[0x45d] & 0x20000000U) == 0 && (param_1[0x187] == 2)))) {
                    /* WARNING: Could not recover jumptable at 0x00667952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00667960  FUN_00667960  size=112  [between]
void __fastcall FUN_00667960(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x620) = 0;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_006616d0(param_1 + 0x620,0x3e800000,0);
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

// 006679D0  FUN_006679d0  size=468  [between]
void __fastcall FUN_006679d0(int *param_1)

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
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     ((param_1[0x45d] & 0x20000000U) == 0)) {
    fVar1 = (float)param_1[0x449];
    if (*(float *)(&DAT_01882150 + param_1[0x462] * 0x14) * 0.7225 < fVar1 ==
        (*(float *)(&DAT_01882150 + param_1[0x462] * 0x14) * 0.7225 == fVar1)) {
      bVar2 = false;
      if (fVar1 < *(float *)(&DAT_0188215c + param_1[0x462] * 0x14) ==
          (fVar1 == *(float *)(&DAT_0188215c + param_1[0x462] * 0x14))) {
        iVar3 = FUN_00ac4640(1);
        if (iVar3 == 0) {
LAB_00667a91:
          if (param_1[0x45e] != 0) {
            iVar3 = FUN_00907560(param_1 + 0x45e,0,0,0,0,0,0,0);
            if (iVar3 != 0) {
              (**(code **)(*param_1 + 0x34c))();
              param_1[0x45d] = param_1[0x45d] | 8;
              return;
            }
          }
          iVar3 = FUN_0065d6c0();
          if (iVar3 != 0) {
            (**(code **)(*param_1 + 0x34c))();
            param_1[0x45d] = param_1[0x45d] | 8;
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
          FUN_00468970(param_1 + 0x45e,0,&local_90,&local_80,7,0,0,0,"em0040",0,0);
          HavokRayCastManager::set(local_60);
          return;
        }
        iVar3 = FUN_00ac4670(param_1 + 0x10,1);
        if (iVar3 != 0) goto LAB_00667a91;
      }
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      param_1[0x45d] = param_1[0x45d] | 8;
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    param_1[0x45d] = param_1[0x45d] & 0xfffffff7;
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00667BB0  FUN_00667bb0  size=81  [between]
void __fastcall FUN_00667bb0(int *param_1)

{
  float fVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     (((param_1[0x45d] & 0x20000000U) == 0 &&
      (fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668,
      param_1[0x248] = (int)fVar1, fVar1 <= 0.0)))) {
                    /* WARNING: Could not recover jumptable at 0x00667bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00667C10  FUN_00667c10  size=537  [between]
void __fastcall FUN_00667c10(int param_1)

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
  if (*(int *)(param_1 + 0x1120) == 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  if (*(int *)(param_1 + 0x620) != 0) {
    if (*(int *)(param_1 + 0x620) == 1) {
      if (((*(int *)(param_1 + 0xa84) != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) &&
         (fVar1 = *(float *)(param_1 + 0x1124), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
        FUN_00660780(param_1 + 0x1130,0x3da3d70a);
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x620) = 0;
      }
    }
    goto LAB_00667db9;
  }
  fVar3 = (float10)FUN_00a8ec30(param_1 + 0x1130);
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
  if (ABS(fVar3) < (float10)0.61086524) goto LAB_00667db9;
  iVar2 = FUN_0065d950(param_1 + 0x1130);
  if (iVar2 == 9) {
    uVar4 = 10;
LAB_00667da7:
    FUN_00aa4120(uVar4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  else {
    if (iVar2 == 10) {
      uVar4 = 9;
      goto LAB_00667da7;
    }
    if (iVar2 == 0xd) {
      uVar4 = 0xd;
      goto LAB_00667da7;
    }
  }
  *(undefined4 *)(param_1 + 0x620) = 1;
LAB_00667db9:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00667FA0  FUN_00667fa0  size=64  [between]
void __fastcall FUN_00667fa0(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     ((param_1[0x45d] & 0x20000000U) == 0)) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00667fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00667FE0  FUN_00667fe0  size=64  [between]
void __fastcall FUN_00667fe0(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     ((param_1[0x45d] & 0x20000000U) == 0)) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0066801c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00668020  FUN_00668020  size=64  [between]
void __fastcall FUN_00668020(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     ((param_1[0x45d] & 0x20000000U) == 0)) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0066805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00668060  FUN_00668060  size=403  [between]
void __fastcall FUN_00668060(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00aa4080(0x4a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x45d] = param_1[0x45d] | 0x20;
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
      param_1[0x45d] = param_1[0x45d] & 0xffffffdf;
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

// 00668200  FUN_00668200  size=599  [between]
void __fastcall FUN_00668200(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x53,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_0065d590(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    goto LAB_00668260;
  case 1:
LAB_00668260:
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
                    /* WARNING: Could not recover jumptable at 0x00668453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00668470  FUN_00668470  size=102  [between]
void __fastcall FUN_00668470(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     (((param_1[0x45d] & 0x20000000U) == 0 &&
      (((float)param_1[0x12] - (float)param_1[0x2e5]) *
       ((float)param_1[0x12] - (float)param_1[0x2e5]) +
       ((float)param_1[0x11] - (float)param_1[0x2e4]) *
       ((float)param_1[0x11] - (float)param_1[0x2e4]) +
       ((float)param_1[0x10] - (float)param_1[0x2e3]) *
       ((float)param_1[0x10] - (float)param_1[0x2e3]) < 2.25)))) {
                    /* WARNING: Could not recover jumptable at 0x006684d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 006686B0  FUN_006686b0  size=196  [between]
void __thiscall FUN_006686b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffffffbf;
  iVar1 = FUN_00a8cab0();
  *(int *)(param_1 + 0x1100) = iVar1;
  if (iVar1 == 0x5a) {
    FUN_008e5c50(7);
  }
  FUN_00a8caf0(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x1104) = 0xffffffff;
  *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xf7effd7f;
  FUN_00a96030(0,0x3f800000);
  if (*(int *)(param_1 + 0x12f8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x1260) + 8))(0,0,0);
  }
  if (*(int *)(param_1 + 0x16f8) != 0) {
    FUN_00a8c9b0(0,0x22,0x3f800000,0);
    *(undefined4 *)(param_1 + 0x16f8) = 0;
    return;
  }
  return;
}

// 00668780  FUN_00668780  size=104  [between]
void __thiscall FUN_00668780(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1708) = 0xffffffff;
  FUN_00aa9280(param_3);
  if ((*(byte *)(param_1 + 0x1174) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(param_1 + 0x1364);
    *(undefined4 *)(param_1 + 0x1364) = 2;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
    return;
  }
  *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(param_1 + 0x1364);
  *(undefined4 *)(param_1 + 0x1364) = 1;
  *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
  return;
}

// 006687F0  FUN_006687f0  size=266  [between]
void __thiscall FUN_006687f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  if ((param_1[0x45d] & 0x100U) == 0) {
    fVar1 = (float)param_1[0x25];
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x4d8] - fVar1);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)0.1 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar4;
    iVar3 = (**(code **)(*param_1 + 0x84))();
    param_1[0x4cb] = (int)(*(float *)(iVar3 + 4) - (float)param_1[0x4ca]);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (param_1[0x4da] != 1) {
        param_3 = 7;
      }
      FUN_00aa3f60(param_3);
      iVar3 = param_1[0x4da];
      param_1[0x4da] = param_1[0x4d9];
      param_1[0x4d9] = iVar3;
      param_1[0x45d] = param_1[0x45d] | 0x100;
    }
    return;
  }
  fVar4 = (float10)FUN_00ddba30((float)param_1[0x4d8] - (float)param_1[0x25]);
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

// 00668900  FUN_00668900  size=334  [between]
void __fastcall FUN_00668900(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if ((param_1[0x45d] & 0x100U) != 0) {
    if ((param_1[0x45d] & 1U) != 0) {
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      param_1[0x45d] = param_1[0x45d] & 0xfffffffe;
      param_1[0x4cc] = 0;
    }
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    return;
  }
  if (1.0 <= (float)param_1[0x4cc]) {
    iVar3 = FUN_00a94db0(0x1c);
    if (iVar3 != 0) {
      param_1[0x4da] = param_1[0x4d9];
      param_1[0x4d9] = 0;
      param_1[0x45d] = param_1[0x45d] | 0x100;
    }
  }
  else {
    FUN_00662cd0();
  }
  pbVar2 = (byte *)FUN_00a95df0(0);
  if (pbVar2 != (byte *)0x0) {
    pbVar4 = &DAT_01646d88;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_006689f5:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_006689fa;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_006689f5;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_006689fa:
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar3 != 0) {
        FUN_00aa4080(0x1c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
    }
  }
  return;
}

// 00668A50  FUN_00668a50  size=564  [between]
undefined4 __fastcall FUN_00668a50(int param_1)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x1708) < 0) {
    return 0;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1364);
  *(int *)(param_1 + 0x1364) = *(int *)(param_1 + 0x1708);
  *(undefined4 *)(param_1 + 0x1368) = uVar1;
  *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
  switch(*(undefined4 *)(param_1 + 0x1708)) {
  case 3:
    FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(param_1 + 0x1364);
    *(undefined4 *)(param_1 + 0x1364) = 3;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
    FUN_00662eb0(1);
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 2;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x1340) = 0;
    *(undefined4 *)(param_1 + 0x1344) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1348) = 0;
    *(undefined4 *)(param_1 + 0x134c) = local_14;
    FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(param_1 + 0x1364);
    *(undefined4 *)(param_1 + 0x1364) = 4;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
    break;
  case 5:
    FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(param_1 + 0x1364);
    *(undefined4 *)(param_1 + 0x1364) = 5;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xfffffffd;
    FUN_00662eb0(1);
    break;
  case 6:
    FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(param_1 + 0x1364);
    *(undefined4 *)(param_1 + 0x1364) = 6;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e0ae0(0);
    }
    *(undefined4 *)(param_1 + 0x1340) = 0;
    *(undefined4 *)(param_1 + 0x1344) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1348) = 0;
    *(undefined4 *)(param_1 + 0x134c) = local_14;
  default:
    goto switchD_00668a9e_default;
  }
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e0ae0(0);
  }
switchD_00668a9e_default:
  *(undefined4 *)(param_1 + 0x1708) = 0xffffffff;
  return 1;
}

// 00668CA0  FUN_00668ca0  size=394  [between]
void __fastcall FUN_00668ca0(int param_1)

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
    if ((*(uint *)(param_1 + 0x1174) & 0x80000) != 0) {
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

// 00668E30  FUN_00668e30  size=179  [between]
void __thiscall FUN_00668e30(int *param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  fVar1 = (float)param_1[0x4ca];
  FUN_00662690(param_1 + 0x2c,param_1 + 0x4d0,param_2);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
  uStack_20 = *puVar2;
  fStack_1c = (float)puVar2[1];
  uStack_18 = puVar2[2];
  uStack_14 = puVar2[3];
  fVar3 = (float10)FUN_00ddba30((fVar1 - (float)param_1[0x4ca]) + (float)param_1[0x4cb]);
  param_1[0x4cb] = (int)(float)fVar3;
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 + (float10)fStack_1c));
  fStack_1c = (float)fVar3;
  (**(code **)(*param_1 + 0x88))(&uStack_20);
  D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
  return;
}

// 00668EF0  FUN_00668ef0  size=840  [between]
void __fastcall FUN_00668ef0(int param_1)

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
  
  if (((*(int *)(param_1 + 0x131c) == 0) || (iVar1 = FUN_00a81330(), iVar1 == 0)) ||
     (iVar1 = FUN_00a7c8a0(), iVar1 == 0)) {
    if (0.0 < *(float *)(param_1 + 0xeb4)) {
      *(float *)(param_1 + 0xeb4) = *(float *)(param_1 + 0xeb4) - *(float *)(param_1 + 0x910);
    }
    if ((((*(float *)(param_1 + 0xeb4) <= 0.0) && (*(int *)(param_1 + 0x4a0) != 0xe)) &&
        ((*(int *)(param_1 + 0x4a0) != 0xf &&
         ((iVar1 = FUN_00a8cbe0(0x5b), iVar1 == 0 && (iVar1 = FUN_00a8cbe0(0xb8), iVar1 == 0))))))
       && (iVar1 = FUN_00a8cbe0(0xbd), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xd28) = 1;
      iVar1 = FUN_00a82ec0(1);
      if (iVar1 != 0) {
        lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                  (*(undefined4 *)(param_1 + 0x4f0),0,*(undefined4 *)(param_1 + 0xd80),4);
        FUN_00a88b50(4,1);
      }
    }
  }
  else {
    iVar1 = FUN_00a82d50();
    if (iVar1 != 1) {
      FUN_00a85340(1);
    }
    *(undefined4 *)(param_1 + 0xd28) = 0;
    *(undefined4 *)(param_1 + 0xeb4) = 0x41f00000;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x131c) = 0;
    iVar1 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),0x40060a92
                         ,*(undefined4 *)(param_1 + 0x1314),0);
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
      FUN_004688f0(param_1 + 0x1184,0,&local_a0,&local_70,0x3e4ccccd,iVar1 << 0x10 | 7,0,0x10,0,
                   "em0040_mgzn");
      FUN_0090fb00(local_60);
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      *(undefined4 *)(param_1 + 0x1320) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x131c) != 0) {
      RayCastManager::getWork(param_1 + 0x1184);
      return;
    }
    if (*(int *)(param_1 + 0x1184) != 0) {
      iVar1 = FUN_00907640(param_1 + 0x1184,&local_74,0);
      if (((iVar1 != 0) && (local_74 != 0)) && (0 < *(int *)(local_74 + 0x14))) {
        iVar1 = FUN_00445ca0(*(undefined4 *)(*(int *)(local_74 + 0x10) + 0x28));
        if (iVar1 != 0) {
          uVar2 = FUN_009184c0(iVar1);
          iVar1 = FUN_00a7c8a0();
          if ((iVar1 != 0) && (uVar3 = FUN_009f8b40(), uVar2 >> 0x10 == uVar3)) {
            *(undefined4 *)(param_1 + 0x131c) = 1;
            return;
          }
        }
        FUN_00a7c950();
        return;
      }
      *(undefined4 *)(param_1 + 0x131c) = 1;
      FUN_00662380();
      return;
    }
  }
  return;
}

// 006692E0  FUN_006692e0  size=58  [between]
undefined4 __fastcall FUN_006692e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x131c) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_006686b0(0x1b);
        return 1;
      }
    }
  }
  return 0;
}

// 00669320  Em8040::vf150  size=400  [class]
void __thiscall Em8040::vf150(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 0x2a:
    if (param_3 == 0) {
      return;
    }
    param_1[0x546] = 0;
    return;
  case 0x2b:
    if (param_3 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
    uVar2 = 0x29;
    break;
  case 0x2c:
    if (param_3 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
    uVar2 = 0x24;
    break;
  default:
    goto switchD_0066933b_caseD_2d;
  case 0x53:
  case 0x54:
  case 0x55:
    param_1[0x45d] = param_1[0x45d] | 0x20000;
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    if (param_2 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
    param_1[0x45d] = param_1[0x45d] | 0x4000;
    param_1[0x523] = param_2;
    return;
  case 0x56:
    if (param_3 == 0) {
      return;
    }
    uVar2 = FUN_00a7c8a0();
    iVar1 = FUN_0065f540(uVar2);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_004b55e0();
    param_1[0x544] = iVar1;
    if (iVar1 < 0) {
      return;
    }
    param_1[0x45d] = param_1[0x45d] | 0x20000;
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_0065e9e0(param_3);
    param_1[0x523] = 0x56;
    param_1[0x45d] = param_1[0x45d] | 0x4000;
    return;
  case 0x77:
    if (param_3 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
    uVar2 = 0xb9;
    break;
  case 0x78:
    if (param_3 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
    uVar2 = 0xba;
  }
  param_1[0x45d] = param_1[0x45d] | 0x20000;
  FUN_006686b0(uVar2);
switchD_0066933b_caseD_2d:
  return;
}

// 00669520  FUN_00669520  size=96  [between]
undefined4 FUN_00669520(int *param_1,int param_2)

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

// 00669580  FUN_00669580  size=496  [between]
undefined4 __thiscall
FUN_00669580(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5,int param_6
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
            if ((*(byte *)(param_1 + 0x1174) & 1) == 0) {
              fVar10 = (float10)fcos((float10)0.7853981852531433);
              pfVar6 = (float *)FUN_00a926e0(local_30);
              fVar4 = pfVar6[2] * fVar3 + *pfVar6 * fVar1 + pfVar6[1] * fVar2;
              if ((fVar4 <= (float)fVar10) && (-(float)fVar10 <= fVar4)) {
LAB_006696d4:
                pfVar6 = (float *)FUN_00a925a0(local_20);
                fVar1 = pfVar6[2] * fVar3 + fVar1 * *pfVar6 + pfVar6[1] * fVar2;
                if (param_5 == 0) {
                  if (0.0 <= fVar1) goto LAB_0066970b;
                }
                else if (fVar1 <= 0.0) {
LAB_0066970b:
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
                            (float10)fVar3 * (float10)0) goto LAB_006696d4;
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

// 00669770  FUN_00669770  size=370  [between]
void __fastcall FUN_00669770(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    *(undefined4 *)(param_1 + 0x940) = uVar2;
    FUN_00a9e290(&DAT_01645740,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x16e0) = 0;
    *(undefined4 *)(param_1 + 0x16e4) = 0;
    *(undefined4 *)(param_1 + 0x16e8) = 0;
    *(undefined4 *)(param_1 + 0x16ec) = 0;
    FUN_00e5e0c0("em0040_vo_matador",param_1,0xffffffff,0);
    FUN_00a88b50(4,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xd28) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar3 = FUN_00a12210(0);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x16e0) = *(undefined4 *)(iVar3 + 0x50);
    *(undefined4 *)(param_1 + 0x16e4) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x16e8) = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x16ec) = *(undefined4 *)(iVar3 + 0x5c);
    *(undefined4 *)(param_1 + 0x16e4) = 0;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e0d30((undefined4 *)(param_1 + 0x16e0));
    }
  }
  if (*(int *)(param_1 + 0x1120) != 0) {
    iVar3 = FUN_00a12210(0);
    if (iVar3 != 0) {
      FUN_0065cbf0(iVar3 + 0x40,0x3e4ccccd,0x3d567750);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if ((fVar1 <= 0.0) && ((*(byte *)(param_1 + 0xb00) & 0x40) == 0)) {
    FUN_006686b0(0xb7);
  }
  return;
}

// 006698F0  FUN_006698f0  size=1597  [between]
void __fastcall FUN_006698f0(int param_1)

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
      FUN_0065cbf0(pfVar5,0x3dcccccd,0x3c8efa35);
      return;
    }
    fVar1 = *pfVar5 - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x48);
    if (fVar2 * fVar2 + fVar1 * fVar1 < 25.0) {
      FUN_006686b0(0x2b);
      return;
    }
    fVar6 = (float10)FUN_00661d10(pfVar5);
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
        pfVar5 = (float *)(param_1 + 0x1380);
        fVar3 = *(float *)(param_1 + 0x1348) * local_1c - *(float *)(param_1 + 0x1344) * local_18;
        fVar1 = *(float *)(param_1 + 0x1340) * local_18 - *(float *)(param_1 + 0x1348) * local_20;
        fVar2 = *(float *)(param_1 + 0x1344) * local_20 - *(float *)(param_1 + 0x1340) * local_1c;
        *pfVar5 = *(float *)(param_1 + 0x1344) * fVar2 - fVar1 * *(float *)(param_1 + 0x1348);
        *(float *)(param_1 + 0x1384) =
             fVar3 * *(float *)(param_1 + 0x1348) - *(float *)(param_1 + 0x1340) * fVar2;
        *(float *)(param_1 + 5000) =
             *(float *)(param_1 + 0x1340) * fVar1 - fVar3 * *(float *)(param_1 + 0x1344);
        fVar1 = *(float *)(param_1 + 0x1384) * *(float *)(param_1 + 0x1384) + *pfVar5 * *pfVar5 +
                *(float *)(param_1 + 5000) * *(float *)(param_1 + 5000);
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(pfVar5,pfVar5);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          *pfVar5 = 0.0;
          *(undefined4 *)(param_1 + 0x1384) = 0x3f800000;
          *(undefined4 *)(param_1 + 5000) = 0;
        }
        *(float *)(param_1 + 0x960) = *(float *)(param_1 + 0x40) + *pfVar5;
        *(float *)(param_1 + 0x964) = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x1384);
        *(float *)(param_1 + 0x968) = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 5000);
        *(float *)(param_1 + 0x96c) = *(float *)(param_1 + 0x138c) + *(float *)(param_1 + 0x4c);
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
        *(float *)(param_1 + 0x960) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x1380);
        *(float *)(param_1 + 0x964) = *(float *)(param_1 + 0x1384) + *(float *)(param_1 + 0x44);
        *(float *)(param_1 + 0x968) = *(float *)(param_1 + 5000) + *(float *)(param_1 + 0x48);
        *(float *)(param_1 + 0x96c) = *(float *)(param_1 + 0x138c) + *(float *)(param_1 + 0x4c);
      }
      fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) + 2.1;
      if (*(float *)(param_1 + 0x964) < fVar1) {
        *(float *)(param_1 + 0x964) = fVar1;
      }
      FUN_0065cbf0(param_1 + 0x960,0x3dcccccd,0x3c8efa35);
      return;
    }
    FUN_006686b0(0x16);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_0065cbf0(param_1 + 0x960,0x3dcccccd,0x3c8efa35);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 2;
  }
  return;
}

// 00669F30  FUN_00669f30  size=170  [between]
void __fastcall FUN_00669f30(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)*(float *)(param_1 + 0x94)));
  if ((float10)0.43633232 < ABS(fVar4)) {
    FUN_006686b0(0x17);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xa84);
  if ((ABS(*(float *)(iVar1 + 0x44) - *(float *)(param_1 + 0x44)) < 2.0) &&
     (fVar2 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 0x40),
     fVar3 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x48),
     fVar3 * fVar3 + fVar2 * fVar2 < 25.0)) {
    FUN_006686b0(0x2b);
    return;
  }
  fVar4 = (float10)FUN_00661d10(iVar1 + 0x40);
  if ((float10)2.0 < ABS(fVar4)) {
    FUN_006686b0(0x15);
  }
  return;
}

// 0066A070  FUN_0066a070  size=294  [between]
void __fastcall FUN_0066a070(int param_1)

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
       (fVar1 = *(float *)(param_1 + 0x1124), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
      FUN_0065cbf0(*(int *)(param_1 + 0xa84) + 0x40,0x3da3d70a,0x3c8efa35);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_006686b0(0x16);
  }
  return;
}

// 0066A1A0  FUN_0066a1a0  size=117  [between]
void __fastcall FUN_0066a1a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x187];
  if ((((iVar1 != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     ((param_1[0x45d] & 0x20000000U) == 0)) {
    if (iVar1 == 1) {
      if (0.5235988 < (float)param_1[0x2a8]) {
        uVar2 = FUN_0065d950(param_1 + 0x44c);
        FUN_006686b0(uVar2);
      }
    }
    else if (iVar1 == 3) {
      iVar1 = FUN_00a94db0(0x21);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0066a1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 0066A220  FUN_0066a220  size=893  [between]
void __fastcall FUN_0066a220(int param_1)

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
    if (5.0 < *(float *)(param_1 + 0x1124)) {
      FUN_0065ccc0(0x3dcccccd,0x3c8efa35);
    }
    if ((*(int *)(param_1 + 0x1120) != 0) && (iVar4 = FUN_00a12210(0), iVar4 != 0)) {
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
    goto switchD_0066a240_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_0066a240_default:
  return;
}

// 0066A5B0  FUN_0066a5b0  size=139  [between]
void __fastcall FUN_0066a5b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x187];
  if ((((iVar1 != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     ((param_1[0x45d] & 0x20000000U) == 0)) {
    if (iVar1 == 1) {
      if (0.34906584 < (float)param_1[0x2a8]) {
        uVar2 = FUN_0065d950(param_1 + 0x44c);
        FUN_006686b0(uVar2);
      }
      if (param_1[0x250] < 1) {
                    /* WARNING: Could not recover jumptable at 0x0066a637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    else if (iVar1 == 4) {
      iVar1 = FUN_00a94db0(0x1f);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0066a5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 0066A640  FUN_0066a640  size=971  [between]
void __fastcall FUN_0066a640(int param_1)

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
    if ((*(int *)(param_1 + 0x1120) != 0) && (iVar7 = FUN_00a12210(0), iVar7 != 0)) {
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
    goto LAB_0066a9f5;
  case 3:
    iVar7 = FUN_00a94db0(0x22);
    if (iVar7 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    break;
  case 4:
    break;
  default:
    goto switchD_0066a664_default;
  }
LAB_0066a9f5:
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_0066a664_default:
  return;
}

// 0066AAD0  FUN_0066aad0  size=194  [between]
void __fastcall FUN_0066aad0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar1 = (float)param_1[0x468];
  param_1[0x468] = (int)(fVar1 - (float)param_1[0x244]);
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
    FUN_006686b0(0x4b);
    param_1[0x195] = iVar3;
    return;
  case 2:
    FUN_006686b0(0x4c);
    param_1[0x195] = iVar3;
    break;
  case 6:
    FUN_006686b0(0x4d);
    param_1[0x195] = iVar3;
    return;
  case -1:
    FUN_009f8b10();
    FUN_00a7c950();
    param_1[0x195] = -1;
    param_1[0x45d] = param_1[0x45d] & 0xffffffdf;
                    /* WARNING: Could not recover jumptable at 0x0066ab57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0066ABC0  FUN_0066abc0  size=194  [between]
void __fastcall FUN_0066abc0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar1 = (float)param_1[0x468];
  param_1[0x468] = (int)(fVar1 - (float)param_1[0x244]);
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
    FUN_006686b0(0x4a);
    param_1[0x195] = iVar3;
    return;
  case 2:
    FUN_006686b0(0x4c);
    param_1[0x195] = iVar3;
    break;
  case 6:
    FUN_006686b0(0x4d);
    param_1[0x195] = iVar3;
    return;
  case -1:
    FUN_009f8b10();
    FUN_00a7c950();
    param_1[0x195] = -1;
    param_1[0x45d] = param_1[0x45d] & 0xffffffdf;
                    /* WARNING: Could not recover jumptable at 0x0066ac47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0066ACB0  FUN_0066acb0  size=759  [between]
void __fastcall FUN_0066acb0(int *param_1)

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
  
  local_74 = 0x66acc9;
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_74 = 0x66acd8;
    uVar3 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x51,0,0x3e4ccccd,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    local_78 = (undefined1 *)0x66ad30;
    local_74 = uVar3;
    FUN_0065dcf0();
    goto LAB_0066ad34;
  case 1:
LAB_0066ad34:
    local_74 = 0x66ad3b;
    FUN_00661b80();
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0;
    local_78 = (undefined1 *)0x66ad57;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 0x66ad66;
      FUN_009f8b10();
      local_74 = 0x66ad71;
      FUN_00a7c950();
      param_1[0x195] = -1;
      param_1[0x45d] = param_1[0x45d] & 0xffffffdf;
      local_74 = 0x3d888889;
      local_78 = (undefined1 *)0x66ad98;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_78 = auStack_64;
        param_1[0x187] = 2;
        FUN_00a92f90();
        FUN_0044fd10();
        local_78 = (undefined1 *)0x66ae0d;
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
        local_78 = (undefined1 *)0x66adbb;
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
    local_78 = (undefined1 *)0x66aeb7;
    iVar2 = FUN_00a8c760();
    if (iVar2 == 0) {
      local_78 = (undefined1 *)0x66aec7;
      local_74 = uVar3;
      FUN_0065dc60();
      return;
    }
    break;
  case 2:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0x3d888889;
    local_78 = (undefined1 *)0x66aef9;
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
    local_78 = (undefined1 *)0x66af39;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 0x2c;
      param_1[0x187] = 4;
      local_78 = (undefined1 *)0x66af50;
      FUN_00aa3f60();
      return;
    }
    break;
  case 4:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0;
    local_78 = (undefined1 *)0x66af75;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      param_1[0x45d] = param_1[0x45d] & 0xffffff5f;
      pcVar1 = *(code **)(*param_1 + 0x34c);
      param_1[0x1ae] = 0;
      local_74 = 0x66af99;
      (*pcVar1)();
      return;
    }
  }
  return;
}

// 0066AFC0  FUN_0066afc0  size=668  [between]
void __fastcall FUN_0066afc0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  float10 fVar6;
  undefined *puVar7;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  uVar5 = 0;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar7 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    if (uVar5 != 0) {
      uVar4 = FUN_009f8b40();
      FUN_00ac8a80(uVar4);
    }
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    param_1[0x362] = 1;
    FUN_00a900b0(1);
    (**(code **)(*param_1 + 0x344))(10,3,1);
    param_1[0x139] = 1;
    FUN_00a8ee20(0);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 2:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    uVar4 = 0xa4;
    goto LAB_0066b0e1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) break;
    uVar4 = 0xa5;
LAB_0066b0e1:
    FUN_00aa4080(uVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00ac8ab0();
      (**(code **)(*param_1 + 0xd0))(1);
      FUN_006686b0(0xbb);
      return;
    }
  default:
    break;
  }
  bVar1 = false;
  if ((((uVar5 != 0) && (iVar2 = FUN_00a8c760(0x1c), iVar2 == 0)) && (1 < param_1[0x187])) &&
     (iVar2 = FUN_00a8cbe0(0x100004), iVar2 != 0)) {
    FUN_00a8ce90(&fStack_70,auStack_60);
    fVar6 = (float10)FUN_00ddba30(*(float *)(uVar5 + 0x94) + fStack_5c);
    param_1[0x25] = (int)(float)fVar6;
    D3DXMatrixRotationY(auStack_50,*(undefined4 *)(uVar5 + 0x94));
    D3DXVec3TransformNormal(&stack0xffffff88,&stack0xffffff88,auStack_58);
    bVar1 = true;
    param_1[0x14] = (int)(*(float *)(uVar5 + 0x50) + fStack_70);
    param_1[0x15] = (int)(*(float *)(uVar5 + 0x54) + fStack_6c);
    param_1[0x16] = (int)(*(float *)(uVar5 + 0x58) + fStack_68);
    param_1[0x17] = (int)(*(float *)(uVar5 + 0x5c) + fStack_64);
  }
  (**(code **)(*param_1 + 0xd0))(!bVar1);
  return;
}

// 0066B560  Em8040::vf19C  size=179  [class]
void __thiscall Em8040::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 0066B620  FUN_0066b620  size=239  [between]
void __thiscall FUN_0066b620(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    switch(param_2) {
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
    case 0x35:
      param_2 = 0x43;
      break;
    case 0x36:
      param_2 = 0x44;
      break;
    default:
      param_2 = 0x3e;
      break;
    case 0x3b:
      param_2 = 0x45;
    }
  }
  FUN_00ac8ab0();
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x115c) = 0xffffffff;
  FUN_00667240();
  if ((*(int *)(param_1 + 0x814) < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x5b)) {
    *(undefined4 *)(param_1 + 0xd28) = 1;
    FUN_00a88b50(4,1);
    *(undefined4 *)(param_1 + 0xd28) = 0;
  }
  FUN_006686b0(param_2);
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e5c50(7);
    *(undefined4 *)(param_1 + 0x16e0) = 0;
    *(undefined4 *)(param_1 + 0x16e4) = 0;
    *(undefined4 *)(param_1 + 0x16e8) = 0;
    *(undefined4 *)(param_1 + 0x16ec) = 0;
    FUN_008e0d30((undefined4 *)(param_1 + 0x16e0));
  }
  return;
}

// 0066B740  FUN_0066b740  size=119  [between]
undefined4 __thiscall FUN_0066b740(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != (int *)0x0) && (*param_3 == 0xde)) {
    iVar1 = (**(code **)(*param_2 + 0x14c))(0x2c,*(undefined4 *)(param_1 + 0x4f0));
    if (iVar1 != 0) {
      (**(code **)(*param_2 + 0x150))(0x2c,*(undefined4 *)(param_1 + 0x4f0));
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_006686b0(0x25);
      return 1;
    }
  }
  return 0;
}

// 0066B7C0  FUN_0066b7c0  size=634  [between]
void __fastcall FUN_0066b7c0(int *param_1)

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
    local_74 = 9.433192e-39;
    FUN_00664230();
    local_74 = 9.433202e-39;
    FUN_00662af0();
    local_74 = 0.0;
    local_78 = (undefined1 *)0x66b7f7;
    FUN_0065d590();
    param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
    param_1[0x25] = param_1[0x455];
    local_74 = 1.0;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x28,0,0x3e4ccccd,0x3f800000,0x8038000);
    local_74 = 1.4013e-45;
    local_78 = (undefined1 *)0x66b84d;
    (**(code **)(*param_1 + 0x1f8))();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 9.43338e-39;
    FUN_00661b80();
    local_74 = 0.0;
    local_78 = (undefined1 *)0x66b876;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      if (param_1[0x1d9] != 0) {
        local_74 = 9.433433e-39;
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      local_74 = 0.06666667;
      local_78 = (undefined1 *)0x66b8c2;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_78 = auStack_64;
        FUN_00a92f90();
        FUN_0044fd10();
        local_78 = (undefined1 *)0x66b8fb;
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
    local_78 = (undefined1 *)0x66b9b9;
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
    local_78 = (undefined1 *)0x66b9ef;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 6.16571e-44;
      param_1[0x187] = 4;
      local_78 = (undefined1 *)0x66ba06;
      FUN_00aa3f60();
      return;
    }
    break;
  case 4:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0.0;
    local_78 = (undefined1 *)0x66ba25;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 9.434019e-39;
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 0066BBB0  FUN_0066bbb0  size=458  [between]
void __fastcall FUN_0066bbb0(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00664230();
    FUN_00662af0();
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
      if (param_1[0x554] < 1) {
        FUN_00aa4080(0x2c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      param_1[0x555] = 0x2b;
      FUN_006686b0(0xa7);
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0066bd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0066BD90  FUN_0066bd90  size=99  [between]
void __fastcall FUN_0066bd90(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[0x45d] & 0x4000U) == 0) {
    return;
  }
  switch(param_1[0x523]) {
  case 0x53:
    uVar1 = 0x74;
    break;
  case 0x54:
    uVar1 = 0x76;
    break;
  case 0x55:
    uVar1 = 0x78;
    break;
  case 0x56:
    uVar1 = 0x7e;
    break;
  default:
    goto switchD_0066bdad_default;
  }
  FUN_006686b0(uVar1);
switchD_0066bdad_default:
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  param_1[0x45d] = param_1[0x45d] | 0x20000;
  param_1[0x45d] = param_1[0x45d] & 0xffffbfff;
  return;
}

// 0066BE10  FUN_0066be10  size=699  [between]
void __thiscall FUN_0066be10(int param_1,int param_2)

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
  
  if ((((param_2 != 0) && ((*(uint *)(param_1 + 0x1174) & 0x800000) == 0)) &&
      (iVar4 = *(int *)(param_1 + 0x618), iVar4 != 0x85)) && ((iVar4 != 0x87 && (iVar4 != 0x86)))) {
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
      FUN_006686b0(0x85);
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
      FUN_006686b0(0x87);
      return;
    }
    FUN_006686b0(0x86);
  }
  return;
}

// 0066C130  FUN_0066c130  size=585  [between]
void __fastcall FUN_0066c130(int param_1)

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
  
  if ((*(uint *)(param_1 + 0x1174) & 0x400000) == 0) {
    if ((*(uint *)(param_1 + 0x1174) & 0x800000) != 0) {
      fVar1 = (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x15e8)) *
              *(float *)(param_1 + 0x15d8) +
              (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x15e0)) *
              *(float *)(param_1 + 0x15d0) +
              *(float *)(param_1 + 0x15d4) *
              (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x15e4));
      *(float *)(param_1 + 0x50) =
           *(float *)(param_1 + 0x15e0) + fVar1 * *(float *)(param_1 + 0x15d0);
      *(float *)(param_1 + 0x58) =
           fVar1 * *(float *)(param_1 + 0x15d8) + *(float *)(param_1 + 0x15e8);
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
  FUN_0065ebc0((float *)(param_1 + 0x15e0),&local_70);
  pfVar7 = (float *)FUN_00a926e0(&local_70);
  pfVar6 = (float *)(param_1 + 0x15d0);
  fVar3 = (*(float *)(param_1 + 0x15d4) * pfVar7[2] - pfVar7[1] * *(float *)(param_1 + 0x15d8)) *
          fVar1 + fVar2 * (*pfVar7 * *(float *)(param_1 + 0x15d8) - pfVar7[2] * *pfVar6) +
          local_78[0] * (pfVar7[1] * *pfVar6 - *(float *)(param_1 + 0x15d4) * *pfVar7);
  if (1e-05 < ABS(fVar3)) {
    fVar4 = SQRT(*(float *)(param_1 + 0x15c8) * *(float *)(param_1 + 0x15c8) +
                 *(float *)(param_1 + 0x15c0) * *(float *)(param_1 + 0x15c0) +
                 *(float *)(param_1 + 0x15c4) * *(float *)(param_1 + 0x15c4));
    *(float *)(param_1 + 0x15f0) =
         (fVar3 / ((fVar4 + fVar4) * 3.1415927)) * 6.2831855 + *(float *)(param_1 + 0x15f0);
  }
  D3DXQuaternionRotationAxis(local_50,pfVar6,*(undefined4 *)(param_1 + 0x15f0));
  iVar5 = param_1 + 0xb0;
  FUN_00ddb9f0(iVar5,auStack_5c);
  D3DXMatrixInverse(param_1 + 0xf0,0,iVar5);
  D3DXVec3TransformNormal(local_78,param_1 + 0x15c0,iVar5);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x15e0) + *(float *)(param_1 + 0xe0) + fStack_84
  ;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x15e4) + *(float *)(param_1 + 0xe4) + fVar1;
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0xe8) + fVar2 + *(float *)(param_1 + 0x15e8);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x15ec) + local_78[0];
  return;
}

// 0066C380  FUN_0066c380  size=61  [between]
void __fastcall FUN_0066c380(int param_1)

{
  if (*(int *)(param_1 + 0x4a0) == 5) {
    FUN_0066bd90();
  }
  if ((*(int *)(param_1 + 0x764) == 0) || (*(int *)(*(int *)(param_1 + 0x764) + 0x10c) != 0)) {
    FUN_00a93170();
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 0066C3C0  FUN_0066c3c0  size=196  [between]
void __fastcall FUN_0066c3c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((((param_1[0x187] == 0) || (uVar1 = param_1[0x45d], (char)uVar1 < '\0')) ||
       (param_1[0x5b4] != 0)) || (((uVar1 & 0x20000000) != 0 || ((float)param_1[0x4cc] < 1.0)))) ||
     ((1 < param_1[0x187] || ((uVar1 & 1) != 0)))) {
    return;
  }
  iVar2 = FUN_0065c580();
  if (iVar2 != 0) {
    FUN_006686b0(2);
    return;
  }
  iVar2 = FUN_0065c5e0();
  if (iVar2 == 0) {
    if (((param_1[0x351] & 0x2000000U) == 0) && (iVar2 = FUN_00aa4a90(), iVar2 != 0)) {
      FUN_006686b0(0xbf);
      return;
    }
    if (((float)param_1[0x2a4] <= 25.0) || (iVar2 = FUN_0065c5e0(), iVar2 != 0)) {
      (**(code **)(*param_1 + 0x34c))();
    }
    FUN_006692e0();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0066c42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0066C490  FUN_0066c490  size=121  [between]
void __fastcall FUN_0066c490(int *param_1)

{
  int iVar1;
  
  if ((((param_1[0x187] != 0) && (param_1[0x187] != 2)) && ((*(byte *)(param_1 + 0x45d) & 1) == 0))
     && (1.0 <= (float)param_1[0x4cc])) {
    iVar1 = FUN_006692e0();
    if (iVar1 == 0) {
      iVar1 = FUN_0065c580();
      if (iVar1 != 0) {
        FUN_006686b0(2);
        return;
      }
      iVar1 = FUN_0065c5e0();
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0066c4ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      if ((param_1[0x351] & 0x2000000U) != 0) {
        FUN_006686b0(0xbe);
      }
    }
  }
  return;
}

// 0066C510  FUN_0066c510  size=240  [between]
void __fastcall FUN_0066c510(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (((*(int *)(param_1 + 0x131c) != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_006686b0(0x1b);
      *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0xea4) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0xeac) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0xeb0) = 1;
      return;
    }
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      if (*(float *)(param_1 + 0xaa0) <= 2.0943952) {
        FUN_006686b0(2);
        return;
      }
      FUN_006686b0(0xd);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      FUN_006686b0(0xbe);
      return;
    }
    if (*(int *)(param_1 + 0xedc) != 0) {
      FUN_00a88b50(4,1);
    }
  }
  return;
}

// 0066C600  FUN_0066c600  size=97  [between]
void __fastcall FUN_0066c600(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 3) {
    iVar1 = FUN_00a82d50();
    if (iVar1 != 4) {
      iVar1 = FUN_00a82d50();
      if (iVar1 != 2) {
        iVar1 = FUN_00a82d50();
        if (iVar1 != 3) {
          FUN_006692e0();
          return;
        }
      }
      FUN_006686b0(0xbe);
      return;
    }
    FUN_006686b0(2);
  }
  return;
}

// 0066C670  FUN_0066c670  size=496  [between]
void __fastcall FUN_0066c670(int param_1)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4120(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    bVar2 = false;
    iVar5 = FUN_00a82ec0(4);
    if ((iVar5 != 0) || (iVar5 = FUN_00a82ec0(1), iVar5 != 0)) {
      bVar2 = true;
    }
    if ((*(int *)(param_1 + 0x808) != 0) || (bVar2)) {
      FUN_006624a0(param_1 + 0xe90);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = param_1 + 0xe90;
    iVar4 = FUN_00907640(iVar5,0,param_1 + 0x960);
    if (iVar4 != 0) {
      FUN_00662590(iVar5);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    FUN_00a8d790(&local_c);
    *(undefined4 *)(param_1 + 0xea0) = local_c;
    *(undefined4 *)(param_1 + 0xea4) = local_8;
    *(undefined4 *)(param_1 + 0xea8) = local_4;
    *(undefined4 *)(param_1 + 0xeac) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xeb0) = 1;
    RayCastManager::getWork(iVar5);
    goto LAB_0066c79c;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00907640(param_1 + 0xe90,0,param_1 + 0x960);
    RayCastManager::getWork(param_1 + 0xe90);
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x920) = 0x43340000;
      return;
    }
LAB_0066c79c:
    FUN_006686b0(0xc0);
    return;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (0.0 < fVar1) {
      return;
    }
    break;
  default:
    goto switchD_0066c686_default;
  }
  FUN_006686b0(0xbd);
switchD_0066c686_default:
  return;
}

// 0066C870  FUN_0066c870  size=97  [between]
void __fastcall FUN_0066c870(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 != 4) {
      iVar1 = FUN_00a82d50();
      if (iVar1 != 2) {
        iVar1 = FUN_00a82d50();
        if (iVar1 != 3) {
          FUN_006692e0();
          return;
        }
      }
      FUN_006686b0(0xbe);
      return;
    }
    FUN_006686b0(2);
  }
  return;
}

// 0066C8E0  FUN_0066c8e0  size=220  [between]
void __fastcall FUN_0066c8e0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xeb0) == 0) {
      FUN_006686b0(4);
      return;
    }
    FUN_00aa4080(7,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar3 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_0065cbf0((float *)(param_1 + 0xea0),0x3da3d70a,0x3c8efa35);
    fVar1 = *(float *)(param_1 + 0xea0) - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0xea8) - *(float *)(param_1 + 0x48);
    if (fVar2 * fVar2 + fVar1 * fVar1 < 2.25) {
      FUN_00a8caf0(4,0,0,0);
      return;
    }
  }
  return;
}

// 0066C9C0  FUN_0066c9c0  size=810  [between]
void __thiscall FUN_0066c9c0(int *param_1,undefined4 param_2,int param_3)

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
    FUN_006686b0(99);
    return;
  case 3:
    FUN_006686b0(0x65);
    return;
  case 4:
    FUN_006686b0(0x67);
    return;
  case 5:
    FUN_006686b0(0x69);
    return;
  case 6:
    if (param_1[0x128] == 0xf) {
      uVar1 = 0x70;
    }
    else {
      uVar1 = 0x6f;
    }
    FUN_006686b0(uVar1);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    uVar1 = FUN_00a8eea0();
    FUN_00a8ee20(uVar1);
    return;
  case 7:
    FUN_006686b0(0x6b);
    return;
  case 8:
    if (param_1[0x128] != 0xf) {
      FUN_006686b0(0x6d);
      return;
    }
    FUN_006686b0(0x6e);
    return;
  case 9:
    iVar3 = (**(code **)(*param_1 + 0x1fc))();
    if (iVar3 != 0) {
      return;
    }
    if (param_1[0x139] != 0) {
      return;
    }
    FUN_0065d590(1);
    if (param_1[0x128] == 0xf) {
      iVar3 = FUN_00a12210(0xf00);
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x1000;
      }
      FUN_006686b0(0x2f);
      FUN_00662650((int)(char)param_1[0x2ea]);
    }
    else {
      FUN_006686b0(0x33);
      if (param_1[0x1d9] != 0) {
        FUN_008e0ae0(1);
      }
    }
    pcVar4 = *(code **)(*param_1 + 0x220);
    param_1[0x245] = *(int *)(param_3 + 0x914);
    param_1[0x455] = *(int *)(param_3 + 0x1154);
    (*pcVar4)(0x40a00000);
    param_1[0x128] = 3;
    param_1[0x462] = 2;
    FUN_00a88b50(4,0);
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
      goto switchD_0066cba7_caseD_1;
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
switchD_0066cba7_caseD_1:
    iVar2 = FUN_00a8eea0();
    if (iVar3 < iVar2) {
      FUN_00a8ee20(iVar3);
      return;
    }
    break;
  case 10:
    iVar3 = (**(code **)(*param_1 + 0x1fc))();
    if ((iVar3 == 0) && (param_1[0x139] == 0)) {
      FUN_0065d590(1);
      if (param_1[0x128] == 0xf) {
        iVar3 = FUN_00a12210(0xf00);
        if (iVar3 != 0) {
          *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 0x1000;
        }
        FUN_006686b0(0x36);
        FUN_00662650((int)(char)param_1[0x2ea]);
      }
      else {
        FUN_006686b0(0x3d);
        if (param_1[0x1d9] != 0) {
          FUN_008e0ae0(1);
        }
      }
      pcVar4 = *(code **)(*param_1 + 0x220);
      param_1[0x245] = *(int *)(param_3 + 0x914);
      param_1[0x455] = *(int *)(param_3 + 0x1154);
      (*pcVar4)(0x40a00000);
      param_1[0x128] = 3;
      param_1[0x462] = 2;
      FUN_00a88b50(4,0);
    }
  }
  return;
}

// 0066CD30  FUN_0066cd30  size=75  [between]
void __thiscall FUN_0066cd30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35590;
    (**(code **)(*piVar2 + 4))(&DAT_01b35590);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_0066c9c0(param_2,param_1);
    }
  }
  return;
}

// 0066CD80  FUN_0066cd80  size=429  [between]
void __fastcall FUN_0066cd80(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if ((*(int *)(param_1 + 0x16d0) == 0) && ((*(uint *)(param_1 + 0x1174) & 0x20000000) == 0)) {
    fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x1120) + 0x50);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)*(float *)(param_1 + 0x94)));
    if ((3.2399998 < *(float *)(param_1 + 0xa90)) || ((float10)0.7853982 <= ABS(fVar4))) {
      if (*(float *)(param_1 + 0xa90) < *(float *)(param_1 + 0x1324) * *(float *)(param_1 + 0x1324))
      {
        FUN_006686b0(0x66);
        FUN_0066cd30(3);
        return;
      }
    }
    else {
      if ((*(float *)(param_1 + 0xa90) <= 2.25) && (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 1) != 0))
      {
        FUN_006686b0(0x6e);
        FUN_0066cd30(8);
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
            FUN_006686b0(0x68);
            FUN_0066cd30(4);
            return;
          }
          FUN_006686b0(0x6a);
          FUN_0066cd30(5);
          return;
        }
        FUN_006686b0(0x6c);
        FUN_0066cd30(7);
      }
    }
  }
  return;
}

// 0066CF30  FUN_0066cf30  size=310  [between]
void __fastcall FUN_0066cf30(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  undefined *puVar6;
  
  if (*(int *)(param_1 + 0x16d0) != 0) {
    FUN_006686b0(100);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01b35590;
      (**(code **)(*piVar3 + 4))(&DAT_01b35590);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        FUN_006686b0(99);
      }
    }
  }
  fVar5 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x1120) + 0x50);
  fVar5 = (float10)FUN_00ddba30((float)(fVar5 - (float10)*(float *)(param_1 + 0x94)));
  if ((*(float *)(param_1 + 0xa90) <= 3.2399998) && (ABS(fVar5) < (float10)0.7853982)) {
    uVar4 = FUN_00dde2d0(0,100);
    if ((uVar4 & 1) == 0) {
      FUN_006686b0(0x68);
      FUN_0066cd30(4);
    }
    else {
      FUN_006686b0(0x6a);
      FUN_0066cd30(5);
    }
  }
  fVar1 = *(float *)(param_1 + 0x1324) * 1.1;
  if (fVar1 * fVar1 < *(float *)(param_1 + 0xa90)) {
    FUN_006686b0(100);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01b35590;
      (**(code **)(*piVar3 + 4))(&DAT_01b35590);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        FUN_006686b0(99);
      }
    }
  }
  return;
}

// 0066D070  FUN_0066d070  size=102  [between]
void __fastcall FUN_0066d070(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x16d0) == 0) {
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x1120) + 0x50);
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)*(float *)(param_1 + 0x94)));
    if ((ABS(fVar2) < (float10)0.7853982) && (*(int *)(param_1 + 0x1100) != 0x6a)) {
      iVar1 = FUN_00a8c760(0xf);
      if (iVar1 != 0) {
        FUN_006686b0(0x6a);
        FUN_0066cd30(5);
      }
    }
  }
  return;
}

// 0066D0E0  FUN_0066d0e0  size=102  [between]
void __fastcall FUN_0066d0e0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x16d0) == 0) {
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x1120) + 0x50);
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)*(float *)(param_1 + 0x94)));
    if ((ABS(fVar2) < (float10)0.7853982) && (*(int *)(param_1 + 0x1100) != 0x68)) {
      iVar1 = FUN_00a8c760(0xf);
      if (iVar1 != 0) {
        FUN_006686b0(0x68);
        FUN_0066cd30(4);
      }
    }
  }
  return;
}

// 0066D150  FUN_0066d150  size=370  [between]
void __fastcall FUN_0066d150(int *param_1)

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
      puVar5 = &DAT_01b35590;
      (**(code **)(*piVar2 + 4))(&DAT_01b35590);
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
    FUN_006686b0(0x6b);
  }
  return;
}

// 0066D2D0  FUN_0066d2d0  size=89  [between]
void __fastcall FUN_0066d2d0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(float *)(param_1 + 0xa90) <= 9.0)) {
    uVar2 = FUN_00dde2d0(0,100);
    if ((uVar2 & 1) != 0) {
      FUN_006686b0(0x6a);
      FUN_0066cd30(5);
      return;
    }
    FUN_006686b0(0x68);
    FUN_0066cd30(4);
  }
  return;
}

// 0066D3D0  FUN_0066d3d0  size=218  [between]
void __fastcall FUN_0066d3d0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00664230();
    FUN_00662af0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(param_1[0x555],0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x45d] = param_1[0x45d] & 0xffffefff;
    if (param_1[0x554] == 0) {
      param_1[0x554] = 1;
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_006686b0(0xac);
  }
  return;
}

// 0066D4B0  FUN_0066d4b0  size=76  [between]
void __thiscall FUN_0066d4b0(int param_1,int param_2)

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
  FUN_006686b0(0x5d);
  return;
}

// 0066D510  FUN_0066d510  size=8  [between]
void FUN_0066d510(void)

{
  FUN_006686b0(0x5d);
  return;
}

// 0066D520  Em8040::vf50  size=67  [class]
void __fastcall Em8040::vf50(int param_1)

{
  if (*(int *)(param_1 + 0x4a0) == 5) {
    FUN_0066bd90();
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

// 0066D570  Em8040::vf268  size=1713  [class]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall Em8040::vf268(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
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
    case 1:
      if (param_1[0x186] != 0x5b) {
        uVar6 = 2;
LAB_0066dbc4:
        FUN_00a883f0(uVar6,0,&local_20);
        return 1;
      }
      break;
    case 2:
      if (param_1[0x186] != 0x5b) {
        uVar6 = 4;
        goto LAB_0066dbc4;
      }
      break;
    case 3:
      iVar2 = FUN_00c1a130(DAT_01d5bad4,(int)*(short *)((int)param_1 + 0xab2));
      if (iVar2 == 0) {
        FUN_00c1a160(DAT_01d5bad4,(int)*(short *)((int)param_1 + 0xab2),(int)(short)param_1[0x2ad]);
      }
      if ((((param_1[0x128] != 5) && (param_1[0x462] == 2)) && (param_1[0x186] != 0x21)) &&
         (((iVar2 = (**(code **)(*param_1 + 0x1fc))(), iVar2 == 0 && (param_1[0x139] == 0)) &&
          ((param_1[0x45d] & 0x20800U) == 0)))) {
        if (param_1[0x441] == -1) {
          param_1[0x441] = 7;
        }
        return 1;
      }
      break;
    case 9:
      iVar2 = FUN_00a8cab0();
      if (iVar2 == 0x5b) {
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
            FUN_006686b0(0x2c);
            return 1;
          }
        }
      }
      else {
        iVar2 = FUN_00a8cab0();
        if (iVar2 == 0xb7) {
          FUN_006686b0(0xb8);
          return 1;
        }
      }
      break;
    case 0xb:
      if ((((param_1[0x45d] & 0x80000U) == 0) && (param_2 != 0)) &&
         (((param_1[0x45d] & 0x20000U) == 0 && (param_1[0x462] == 2)))) {
        FUN_00a7c970(*(undefined4 *)(param_2 + 0x4f0));
        iVar2 = FUN_00a8cab0();
        if ((iVar2 != 0x7a) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x7b)) {
          uVar1 = FUN_00dde2a0(0,100);
          if ((uVar1 & 1) == 0) {
            param_1[0x540] = _DAT_01880d30;
            param_1[0x541] = _DAT_01880d34;
            param_1[0x542] = _DAT_01880d38;
            iVar2 = _DAT_01880d3c;
          }
          else {
            param_1[0x540] = _DAT_01880d20;
            param_1[0x541] = _DAT_01880d24;
            param_1[0x542] = _DAT_01880d28;
            iVar2 = _DAT_01880d2c;
          }
          param_1[0x543] = iVar2;
          FUN_006686b0(0x7a);
        }
        return 1;
      }
      break;
    case 0xc:
      if (((((param_1[0x45d] & 0x80000U) == 0) && (param_2 != 0)) &&
          ((param_1[0x45d] & 0x20000U) == 0)) && (param_1[0x462] == 2)) {
        FUN_00a7c970(*(undefined4 *)(param_2 + 0x4f0));
        iVar2 = FUN_00a8cab0();
        if ((iVar2 != 0x7a) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x7b)) {
          param_1[0x540] = _DAT_01b34e60;
          param_1[0x541] = _DAT_01b34e64;
          param_1[0x542] = _DAT_01b34e68;
          param_1[0x543] = _DAT_01b34e6c;
          FUN_006686b0(0x7a);
        }
        return 1;
      }
      break;
    case 0xd:
      if (param_2 != 0) {
        uVar5 = FUN_0065cd60();
        if (((int)uVar5 != 0) && (param_1[0x462] == 2)) {
          FUN_00a7c970(*(undefined4 *)((int)((ulonglong)uVar5 >> 0x20) + 0x4f0));
          FUN_006686b0(0x84);
          return 1;
        }
      }
      break;
    case 0xe:
      if (((((param_1[0x45d] & 0x400000U) == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
          (iVar2 = FUN_0065f540(param_2), iVar2 != 0)) &&
         (((param_1[0x45d] & 0x20000U) == 0 && (param_1[0x462] == 2)))) {
        fVar4 = (float10)FUN_00dde300(0x3dcccccd,0x3f000000);
        param_1[0x545] = (int)(float)(fVar4 * (float10)60.0);
        FUN_00a7c970(*(undefined4 *)(param_2 + 0x4f0));
        FUN_006686b0(0x7d);
        return 1;
      }
      break;
    case 0x11:
      if ((param_1[0x462] == 2) && (param_1[0x128] == 5)) {
        param_1[0x45d] = param_1[0x45d] | 0x80000;
        return 1;
      }
      break;
    case 0x12:
      if ((param_1[0x128] == 5) &&
         ((iVar2 = FUN_00a8cab0(), iVar2 == 0x8a || (iVar2 = FUN_00a8cab0(), iVar2 == 0x8b)))) {
        param_1[0x525] = param_4[0xb];
        param_1[0x526] = param_4[8];
        param_1[0x527] = param_4[9];
        param_1[0x548] = param_4[10];
        FUN_006686b0(0x89);
        return 1;
      }
      break;
    case 0x13:
      if ((param_1[0x128] == 5) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
        param_1[0x5bc] = 1;
        iVar2 = FUN_00a8cab0();
        if ((iVar2 == 0x8a) || (iVar2 = FUN_00a8cab0(), iVar2 == 0x8b)) {
          FUN_006686b0(0x8f);
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
        FUN_006686b0(0x91);
        return 1;
      }
    default:
      break;
    case 0x15:
      FUN_00ac4710(param_4[0xb]);
      FUN_00a8d710(param_1 + 0x10);
      return 1;
    case 0x1a:
      param_1[0x139] = 1;
      FUN_00a8ee20(0);
      (**(code **)(*param_1 + 0x220))(0x41200000);
      FUN_006686b0(0x46);
      return 1;
    case 0x1d:
      if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
        FUN_00667670();
        return 0;
      }
    }
  }
  return 0;
}

// 0066DC90  FUN_0066dc90  size=811  [between]
void __fastcall FUN_0066dc90(int param_1)

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
  
  if ((*(byte *)(param_1 + 0x1174) & 0x40) == 0) {
    return;
  }
  *(int *)(param_1 + 0x1140) = *(int *)(param_1 + 0x1140) + -1;
  if (1 < *(int *)(param_1 + 0x1140)) {
    return;
  }
  if (*(int *)(param_1 + 0x1140) < 1) {
    *(undefined4 *)(param_1 + 0x1140) = 10;
    local_94 = 0;
    iVar4 = param_1 + 0x1180;
    if (*(int *)(param_1 + 0x1144) == 0) {
      iVar2 = FUN_00907640(iVar4,&local_94,0);
      if ((iVar2 == 0) || (iVar2 = FUN_006675c0(local_94), iVar2 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x10;
      }
      else {
        *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffffffef;
      }
      *(undefined4 *)(param_1 + 0x1144) = 1;
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
      *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xfffffffb;
      *(undefined4 *)(param_1 + 0x1144) = 0;
      RayCastManager::getWork(iVar4);
      return;
    }
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 4;
    *(undefined4 *)(param_1 + 0x1144) = 0;
    RayCastManager::getWork(iVar4);
    return;
  }
  if (*(float *)(&DAT_01882160 + *(int *)(param_1 + 0x1188) * 0x14) < *(float *)(param_1 + 0x1124))
  {
    *(undefined4 *)(param_1 + 0x1140) = 10;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xfffffffb;
    return;
  }
  local_b0 = *(float *)(param_1 + 0x40);
  local_ac = *(float *)(param_1 + 0x44);
  local_a8 = *(float *)(param_1 + 0x48);
  local_a4 = *(float *)(param_1 + 0x4c);
  local_90 = *(float *)(param_1 + 0x1130);
  local_8c = *(float *)(param_1 + 0x1134);
  local_88 = *(float *)(param_1 + 0x1138);
  local_84 = *(float *)(param_1 + 0x113c);
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
  if (*(int *)(param_1 + 0x1120) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_009f8b40();
  }
  uVar5 = iVar4 << 0x10 | 7;
  if (*(int *)(param_1 + 0x1144) == 0) {
    local_70 = local_90 - local_b0;
    local_6c = local_8c - local_ac;
    local_68 = local_88 - local_a8;
    local_64 = local_84 - local_a4;
    FUN_0090fa30(param_1 + 0x1180,0,&local_b0,0x3e4ccccd,&local_70,uVar5,"em0040");
    return;
  }
  FUN_00468970(param_1 + 0x1180,0,&local_b0,&local_90,uVar5,0,0,0,"em0040",0,0);
  HavokRayCastManager::set(local_60);
  return;
}

// 0066DFC0  Em8040::vf188  size=79  [class]
void __thiscall Em8040::vf188(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  if (param_2 == 9) {
    FUN_006686b0(0x49);
    (**(code **)(*param_1 + 0x220))(0x41200000);
  }
  return;
}

// 0066E010  Em8040::vf1A4  size=639  [class]
void __thiscall Em8040::vf1A4(int *param_1,int *param_2,byte param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 & 6) != 0) {
    iVar1 = param_1[0x128];
    if ((iVar1 != 0xe) && (iVar1 != 0xf)) {
      switch(*param_2) {
      case 0xd7:
        uVar2 = FUN_00a81330();
        FUN_00a7c970(uVar2);
        FUN_00a8caf0(0x3a,0,0,0);
        return;
      default:
        uVar2 = FUN_00a81330();
        FUN_00a7c970(uVar2);
        FUN_00a8caf0(0x39,0,0,0);
      case 0xdf:
      case 0x146:
        return;
      case 0xda:
        goto switchD_0066e1ff_caseD_da;
      }
    }
    if ((param_3 & 4) != 0) {
      return;
    }
    if (iVar1 != 0xf) {
      FUN_006686b0(0x6d);
      FUN_0066cd30(8);
      return;
    }
    FUN_006686b0(0x6e);
    FUN_0066cd30(8);
    return;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  if (*param_2 == 0xd7) {
    if (param_1[0x128] == 6) {
      return;
    }
    uVar2 = FUN_00a81330();
    FUN_00a7c970(uVar2);
    FUN_00a8caf0(0x14,0,0,0);
    return;
  }
  if (*param_2 != 0xda) {
    return;
  }
  uVar2 = FUN_00a81330();
  FUN_00a7c970(uVar2);
  if (param_1[0x1d9] == 0) goto LAB_0066e089;
  (**(code **)(*param_1 + 0x314))();
LAB_0066e070:
  if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
    *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
  }
LAB_0066e089:
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
  param_1[0x4cc] = 0x3f800000;
  FUN_00a8caf0(0x3a,0,0,0);
  return;
switchD_0066e1ff_caseD_da:
  uVar2 = FUN_00a81330();
  FUN_00a7c970(uVar2);
  if (param_1[0x1d9] == 0) goto LAB_0066e089;
  (**(code **)(*param_1 + 0x314))();
  goto LAB_0066e070;
}

// 0066E310  FUN_0066e310  size=60  [between]
undefined4 FUN_0066e310(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00dde300(0,0x3f800000);
  if (fVar1 < (float10)0.7) {
    FUN_006686b0(0x2d);
    return 1;
  }
  return 0;
}

// 0066E350  FUN_0066e350  size=137  [between]
undefined4 __fastcall FUN_0066e350(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = *(float *)(param_1 + 0x40) - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
  fVar2 = *(float *)(param_1 + 0x48) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
  if (NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0)) {
    if ((fVar1 < 4.0 != (fVar1 == 4.0)) && (iVar3 = FUN_006605a0(), iVar3 == 0)) {
      FUN_006686b0(0x27);
      return 1;
    }
    iVar3 = FUN_00ac4640(1);
    if ((iVar3 == 0) || (iVar3 = FUN_00ac4670(param_1 + 0x1130,1), iVar3 != 0)) {
      FUN_006686b0(0x21);
      return 1;
    }
  }
  return 0;
}

// 0066E3E0  FUN_0066e3e0  size=91  [between]
undefined4 __fastcall FUN_0066e3e0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x1174) & 0x400) == 0) {
    iVar1 = FUN_00ac4640(1);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4670(param_1 + 0x1130,1);
      if ((iVar1 == 0) && (*(short *)(param_1 + 0xab2) != -1)) {
        iVar1 = FUN_00ac4690();
        if (iVar1 != 0) {
          FUN_006686b0(4);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 0066E440  FUN_0066e440  size=238  [between]
undefined4 __fastcall FUN_0066e440(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x1174) & 0x400) == 0) {
    if (((*(float *)(&DAT_01882150 + *(int *)(param_1 + 0x1188) * 0x14) <
          *(float *)(param_1 + 0x1124) ==
          (*(float *)(&DAT_01882150 + *(int *)(param_1 + 0x1188) * 0x14) ==
          *(float *)(param_1 + 0x1124))) && (iVar1 = FUN_00665820(), iVar1 != 0)) &&
       (*(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44) <= 2.0)) {
      return 0;
    }
    iVar1 = FUN_00ac4640(1);
    if ((iVar1 != 0) && (iVar1 = FUN_00ac4670(param_1 + 0x1130,1), iVar1 == 0)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x4a0) == 5) || (3 < *(int *)(param_1 + 0x814))) {
      *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xfffffff7;
      iVar1 = FUN_00665820();
      if (iVar1 == 0) {
        iVar1 = FUN_00aa4a90();
        if ((((iVar1 != 0) && ((*(byte *)(param_1 + 0x1174) & 1) == 0)) &&
            (*(int *)(param_1 + 0x1704) == 0)) && (*(int *)(param_1 + 0x4a0) != 5)) {
          FUN_006686b0(3);
          return 1;
        }
        iVar1 = FUN_0065d560();
        if (iVar1 != 0) {
          return 0;
        }
      }
      FUN_006686b0(2);
      return 1;
    }
  }
  return 0;
}

// 0066E530  FUN_0066e530  size=157  [between]
undefined4 __fastcall FUN_0066e530(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0x1174) & 0x400) != 0) ||
     ((*(float *)(&DAT_01882150 + *(int *)(param_1 + 0x1188) * 0x14) < *(float *)(param_1 + 0x1124)
       == (*(float *)(&DAT_01882150 + *(int *)(param_1 + 0x1188) * 0x14) ==
          *(float *)(param_1 + 0x1124)) && (iVar2 = FUN_00665820(), iVar2 != 0)))) {
    return 0;
  }
  *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xfffffff7;
  fVar1 = *(float *)(param_1 + 0x1124);
  if ((!NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0)) &&
     ((((iVar2 = FUN_00aa4a90(), iVar2 != 0 && ((*(byte *)(param_1 + 0x1174) & 1) == 0)) &&
       (*(int *)(param_1 + 0x1704) == 0)) && (*(int *)(param_1 + 0x4a0) != 5)))) {
    FUN_006686b0(3);
    return 1;
  }
  FUN_006686b0(2);
  return 1;
}

// 0066E5D0  Em8040::vf34C  size=150  [class]
void __fastcall Em8040::vf34C(int param_1)

{
  *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xfffdffff;
  if (*(int *)(param_1 + 0x1104) != -1) {
    FUN_006686b0(*(int *)(param_1 + 0x1104));
    return;
  }
  if ((((*(uint *)(param_1 + 0x1174) & 0x10000000) != 0) && (*(int *)(param_1 + 0x4a0) != 0xe)) &&
     (*(int *)(param_1 + 0x4a0) != 0xf)) {
    FUN_006686b0(0x1a);
    return;
  }
  if ((*(int *)(param_1 + 0xaf4) == 0x12) && ((*(byte *)(param_1 + 0xb00) & 0x40) != 0)) {
    FUN_006686b0(0xb8);
    return;
  }
  if (*(int *)(param_1 + 0x1188) == 3) {
    FUN_006686b0(0x5d);
    return;
  }
  if (*(int *)(param_1 + 0x4a0) == 0xe) {
    FUN_006686b0(99);
    return;
  }
  if (*(int *)(param_1 + 0x4a0) == 0xf) {
    FUN_006686b0(100);
    return;
  }
  FUN_006686b0(0);
  return;
}

// 0066E670  FUN_0066e670  size=337  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0066e670(int param_1)

{
  float fVar1;
  int iVar2;
  int local_8 [2];
  
  iVar2 = *(int *)(param_1 + 0x16d0);
  local_8[0] = 0;
  local_8[1] = 0;
  if (iVar2 == 0) {
    FUN_00ac81f0(param_1 + 0x40,local_8,local_8 + 1);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,local_8,local_8 + 1);
  }
  if (local_8[0] == 0) {
    fVar1 = *(float *)(param_1 + 0x16d8) - *(float *)(param_1 + 0x910);
    if (0.0 <= fVar1) goto LAB_0066e6c5;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x16d8);
    if (fVar1 < 0.0) {
LAB_0066e6c5:
      fVar1 = 0.0;
    }
  }
  *(float *)(param_1 + 0x16d8) = fVar1;
  fVar1 = *(float *)(param_1 + 0x16d8);
  if (NAN(fVar1) || 15.0 < fVar1 == (fVar1 == 15.0)) {
    if (*(float *)(param_1 + 0x16d8) <= -15.0) {
      *(undefined4 *)(param_1 + 0x16d0) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x16d0) = 1;
  }
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x16d0) == 0)) {
    switch(*(undefined4 *)(param_1 + 0x618)) {
    case 0:
    case 0x5d:
    case 0x7b:
    case 0x80:
    case 0x83:
      *(undefined4 *)(param_1 + 0x15f4) = 0x42280000;
      *(undefined2 *)(param_1 + 0x824) = 2;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
    }
  }
  if (*(int *)(param_1 + 0x16d4) != 0) {
    if (*(int *)(param_1 + 0x16d0) != 0) goto LAB_0066e788;
    *(undefined4 *)(param_1 + 0x16d4) = 0;
  }
  if (*(int *)(param_1 + 0x16d0) == 0) {
    return;
  }
LAB_0066e788:
  if (*(int *)(param_1 + 0x16d4) == 0) {
    switch(*(undefined4 *)(param_1 + 0x618)) {
    case 0:
    case 0x5d:
    case 0x7b:
    case 0x80:
    case 0x83:
      *(undefined4 *)(param_1 + 0x16d4) = 1;
      FUN_006686b0(0x3c);
    }
  }
  return;
}

// 0066E8E0  FUN_0066e8e0  size=28  [callgraph]
void __fastcall FUN_0066e8e0(int param_1)

{
  if (*(int *)(param_1 + 0xc04) != 0) {
    FUN_006686b0(0xbb);
    return;
  }
  FUN_006686b0(0x48);
  return;
}

// 0066E900  FUN_0066e900  size=59  [callgraph]
void __fastcall FUN_0066e900(int *param_1)

{
  if (param_1[0x2e1] != 0) {
    if (*(int *)(&DAT_01646d94 + param_1[0x2e1] * 4) != -1) {
      FUN_006686b0(*(int *)(&DAT_01646d94 + param_1[0x2e1] * 4));
    }
    return;
  }
  if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
    FUN_006686b0(0x8b);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0066e926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0066E940  FUN_0066e940  size=251  [callgraph]
void __fastcall FUN_0066e940(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     ((param_1[0x45d] & 0x20000000U) == 0)) {
    iVar2 = FUN_00a82d50();
    if (((iVar2 == 2) || (iVar2 = FUN_00a82d50(), iVar2 == 3)) ||
       (iVar2 = FUN_00a82d50(), iVar2 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0066ea39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (param_1[0x448] != 0) {
      FUN_0065cbf0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3c8efa35);
      if ((float)param_1[0x449] <= 25.0) {
                    /* WARNING: Could not recover jumptable at 0x0066ea00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar1 + 0.016666668);
      if (3.0 <= fVar1 + 0.016666668) {
        FUN_006686b0(2);
      }
    }
  }
  return;
}

// 0066EA40  FUN_0066ea40  size=563  [callgraph]
void __fastcall FUN_0066ea40(int *param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  
  if ((((((param_1[0x187] != 0) && (uVar1 = param_1[0x45d], -1 < (char)uVar1)) &&
        (param_1[0x5b4] == 0)) && (((uVar1 & 0x20000000) == 0 && (1.0 <= (float)param_1[0x4cc]))))
      && (param_1[0x187] < 2)) && (((uVar1 & 1) == 0 && (iVar3 = FUN_006692e0(), iVar3 == 0)))) {
    iVar3 = FUN_0065f660();
    if ((iVar3 != 0) || (iVar3 = FUN_0065c5e0(), iVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0066ec71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    param_1[0x250] = param_1[0x250] + 1;
    if ((((0x1e < param_1[0x250]) && ((*(byte *)(param_1 + 0x45d) & 1) == 0)) &&
        (iVar3 = FUN_00aa4a90(), iVar3 != 0)) && (param_1[0x128] != 5)) {
      param_1[0x250] = 0;
      iVar3 = FUN_00665820();
      if (iVar3 == 0) {
        if ((param_1[0x5c1] == 0) &&
           ((param_1[0x5c0] == 0 || (*(int *)(param_1[0x5c0] + 0xc) != param_1[0x457])))) {
          FUN_006686b0(3);
          return;
        }
        if (((*(byte *)(param_1 + 0x45d) & 1) == 0) && (iVar3 = FUN_0065d560(), iVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0066eb55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
      }
    }
    if (param_1[0x205] < 4) {
                    /* WARNING: Could not recover jumptable at 0x0066eb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (param_1[0x448] != 0) {
      if ((((float)param_1[0x449] <=
            *(float *)(&DAT_01882150 + param_1[0x462] * 0x14) * (float)param_1[0x248]) &&
          (fVar2 = *(float *)(param_1[0x2a1] + 0x44) - (float)param_1[0x11],
          fVar2 < 1.5 != (fVar2 == 1.5))) && (iVar3 = FUN_00665820(), iVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0066ebce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      iVar3 = FUN_00ac4640(1);
      if ((iVar3 != 0) && (iVar3 = FUN_00ac4670(param_1 + 0x44c,1), iVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0066ebfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    if (((param_1[0x462] == 2) && ((*(byte *)(param_1 + 0x45d) & 1) == 0)) &&
       (((float)param_1[0x449] < 36.0 &&
        ((fVar2 = *(float *)(param_1[0x2a1] + 0x44) - (float)param_1[0x11],
         fVar2 < 1.5 != (fVar2 == 1.5) && (iVar3 = FUN_00665820(), iVar3 == 0)))))) {
      FUN_006686b0(0x10);
      return;
    }
  }
  return;
}

// 0066EC80  FUN_0066ec80  size=448  [callgraph]
void __fastcall FUN_0066ec80(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((((param_1[0x187] != 0) && (uVar1 = param_1[0x45d], -1 < (char)uVar1)) &&
       (param_1[0x5b4] == 0)) && (((uVar1 & 0x20000000) == 0 && ((uVar1 & 1) == 0)))) &&
     ((param_1[0x187] != 2 && (iVar2 = FUN_006692e0(), iVar2 == 0)))) {
    iVar2 = FUN_0065f660();
    if ((iVar2 != 0) || (iVar2 = FUN_00a82d50(), iVar2 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0066ee3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if ((param_1[0x187] != 2) && (iVar2 = FUN_0065c6b0(), iVar2 == 0)) {
      if (param_1[0x205] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0066ed2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      if ((param_1[0x448] != 0) && ((*(byte *)(param_1 + 0x45d) & 1) == 0)) {
        param_1[0x251] = param_1[0x251] + 1;
        if ((param_1[0x251] < 0x1f) ||
           (((param_1[0x251] = 0,
             *(float *)(&DAT_01882160 + param_1[0x462] * 0x14) < (float)param_1[0x449] ||
             (0.2 <= (float)param_1[0x2a6])) || (iVar2 = FUN_00665820(), iVar2 == 0)))) {
          iVar2 = param_1[0x1f6];
          if (((iVar2 == 0) || (*(int *)(iVar2 + 0x838) != 3)) || (*(int *)(iVar2 + 0x82c) != 0)) {
            if (((float)param_1[0x449] <= *(float *)(&DAT_01882150 + param_1[0x462] * 0x14)) &&
               (iVar2 = FUN_00665820(), iVar2 != 0)) {
              FUN_00a8d2f0();
                    /* WARNING: Could not recover jumptable at 0x0066ee03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0x34c))();
              return;
            }
            iVar2 = FUN_00ac4640(1);
            if (iVar2 == 0) {
              return;
            }
            iVar2 = FUN_00ac4670(param_1 + 0x44c,1);
            if (iVar2 != 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x0066ee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
          param_1[0x5c1] = 1;
        }
        FUN_006686b0(2);
      }
    }
  }
  return;
}

// 0066EE40  FUN_0066ee40  size=195  [callgraph]
void __fastcall FUN_0066ee40(int param_1)

{
  float fVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar2 = *(int *)(param_1 + 0x61c);
  if (iVar2 == 0) {
    return;
  }
  if ((char)*(uint *)(param_1 + 0x1174) < '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x16d0) != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x1174) & 0x20000000) != 0) {
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
    if ((fVar1 < 0.0 != (fVar1 == 0.0)) || (2 < *(int *)(param_1 + 0x940))) goto LAB_0066eefb;
    if ((*(int *)(param_1 + 0x948) == 0) &&
       (iVar2 = FUN_0065d6c0(), param_1 = extraout_ECX, iVar2 != 0)) {
      FUN_006686b0(0xf);
      return;
    }
  }
  if (*(float *)(&DAT_01882150 + *(int *)(param_1 + 0x1188) * 0x14) * 3.2399998 <
      *(float *)(param_1 + 0x1124) ==
      (*(float *)(&DAT_01882150 + *(int *)(param_1 + 0x1188) * 0x14) * 3.2399998 ==
      *(float *)(param_1 + 0x1124))) {
    return;
  }
LAB_0066eefb:
  FUN_006686b0(0xf);
  return;
}

// 0066EF10  FUN_0066ef10  size=1285  [callgraph]
void __fastcall FUN_0066ef10(int *param_1)

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
    RayCastManager::getWork(param_1 + 0x45e);
  case 1:
    if (0.0 < (float)param_1[0x248]) {
      fVar1 = (float)param_1[0x248] - (float)param_1[0x244];
      param_1[0x248] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        fVar7 = (float10)FUN_00dde300(0x40400000,0x40a00000);
        param_1[0x248] = (int)(float)fVar7;
        fVar7 = (float10)FUN_00a8ec30(param_1 + 0x44c);
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
      if ((param_1[0x45e] != 0) && (iVar3 = FUN_00907560(param_1 + 0x45e,0,0,0,0,0,0,0), iVar3 != 0)
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
      FUN_00468970(param_1 + 0x45e,0,&local_b0,&local_90,7,0,0,0,"em0040",0,0);
      HavokRayCastManager::set(local_60);
    }
    fVar1 = (float)param_1[0x25];
    fVar7 = (float10)FUN_00ddba30((float)param_1[0x249] - fVar1);
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)0.1 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar7;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00662cd0();
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
      FUN_006686b0(0xf);
      return;
    }
  }
  return;
}

// 0066F430  FUN_0066f430  size=454  [callgraph]
void __fastcall FUN_0066f430(int param_1)

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
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x1174))) &&
      (*(int *)(param_1 + 0x16d0) == 0)) && ((*(uint *)(param_1 + 0x1174) & 0x20000000) == 0)) {
    if (*(float *)(param_1 + 0x928) * 1.5625 < *(float *)(param_1 + 0x1124)) {
      FUN_006686b0(2);
      return;
    }
    iVar2 = FUN_00665820();
    if (iVar2 != 0) {
      FUN_006686b0(2);
      return;
    }
    fVar1 = *(float *)(param_1 + 0x910) * 0.016666668 + *(float *)(param_1 + 0x924);
    *(float *)(param_1 + 0x924) = fVar1;
    if (2.5 < fVar1) {
LAB_0066f4d3:
      FUN_006686b0(0xf);
      return;
    }
    if (ABS(*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x92c)) < 0.08726646) {
      local_a4 = 0;
      if (0 < *(int *)(param_1 + 0x620)) {
        iVar2 = FUN_00907560(param_1 + 0x1178,0,0,&local_a4,0,0,0,0);
        if (iVar2 != 0) {
          FUN_00910a40(local_a4);
          iVar2 = FUN_0091a9e0();
          if (iVar2 != 0) goto LAB_0066f4d3;
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
      FUN_00468970(param_1 + 0x1178,0,&local_a0,&local_80,7,0,0,0,"em0040",0,0);
      HavokRayCastManager::set(local_60);
      *(undefined4 *)(param_1 + 0x620) = 1;
    }
  }
  return;
}

// 0066F600  FUN_0066f600  size=137  [callgraph]
void __fastcall FUN_0066f600(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     (((param_1[0x45d] & 0x20000000U) == 0 && (param_1[0x187] == 3)))) {
    FUN_00c4d1a0(param_1[0x13c],1);
    param_1[0x45d] = param_1[0x45d] & 0xffffffdf;
    if (param_1[0x2e1] == 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        FUN_006686b0(0x8b);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0066f671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (*(int *)(&DAT_01646d94 + param_1[0x2e1] * 4) != -1) {
      FUN_006686b0(*(int *)(&DAT_01646d94 + param_1[0x2e1] * 4));
    }
  }
  return;
}

// 0066F690  FUN_0066f690  size=108  [callgraph]
void __fastcall FUN_0066f690(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     (((param_1[0x45d] & 0x20000000U) == 0 && (param_1[0x187] == 5)))) {
    param_1[0x45d] = param_1[0x45d] & 0xffffffdf;
    if (param_1[0x2e1] == 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        FUN_006686b0(0x8b);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0066f6e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (*(int *)(&DAT_01646d94 + param_1[0x2e1] * 4) != -1) {
      FUN_006686b0(*(int *)(&DAT_01646d94 + param_1[0x2e1] * 4));
    }
  }
  return;
}

// 0066F700  FUN_0066f700  size=579  [callgraph]
void __fastcall FUN_0066f700(int *param_1)

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
    param_1[0x45d] = param_1[0x45d] | 3;
    return;
  case 1:
    iVar4 = FUN_0065d6c0();
    if (iVar4 != 0) {
      FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if (param_1[0x1d9] != 0) {
        FUN_008e0ae0(0);
      }
      param_1[0x4d0] = 0;
      param_1[0x4d1] = 0x3f800000;
      param_1[0x4d2] = 0;
      param_1[0x4d3] = local_14;
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = (**(code **)(*param_1 + 0x84))();
    param_1[0x4cb] = (int)(*(float *)(iVar4 + 4) - (float)param_1[0x4ca]);
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
      param_1[0x4dc] = (int)((float)param_1[0x4d4] - *(float *)(iVar4 + 0x40));
      param_1[0x4dd] = (int)((float)param_1[0x4d5] - fVar1);
      param_1[0x4de] = (int)((float)param_1[0x4d6] - fVar2);
      param_1[0x4df] = (int)((float)param_1[0x4d7] - fVar3);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    param_1[0x15] = (int)((float)param_1[0x4dd] * 0.1 + (float)param_1[0x15]);
    param_1[0x4dd] = (int)((float)param_1[0x4dd] - (float)param_1[0x4dd] * 0.1);
    iVar4 = FUN_00a94db0(0x39);
    if (iVar4 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00668e30(0);
      param_1[0x15] = (int)((float)param_1[0x4dd] + (float)param_1[0x15]);
      param_1[0x4dc] = 0;
      param_1[0x4dd] = 0;
      param_1[0x4de] = 0;
      param_1[0x4df] = 0;
      param_1[0x45d] = param_1[0x45d] & 0xfffffffe;
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

// 0066F960  FUN_0066f960  size=357  [callgraph]
void __fastcall FUN_0066f960(int *param_1)

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
    FUN_006652f0(param_1 + 0x45f);
    return;
  }
  if (iVar2 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    piVar1 = param_1 + 0x45f;
    iVar2 = FUN_006651b0(piVar1);
    if (iVar2 == 0) {
      FUN_006652f0(piVar1);
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
      FUN_0066e900();
      if (((param_1[0x128] == 5) && (param_1[0x186] == 0x80)) &&
         ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
        FUN_006686b0(0x8b);
        return;
      }
    }
  }
  return;
}

// 0066FAD0  FUN_0066fad0  size=297  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0066fad0(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_28 [3];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((*(int *)(param_1 + 0x61c) != 0) && ((*(uint *)(param_1 + 0x1174) & 0x20000000) == 0)) &&
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
      if ((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0) {
        *(undefined4 *)(param_1 + 0xd28) = 1;
        FUN_00a88b50(4,1);
        FUN_006686b0(0x2c);
      }
    }
  }
  return;
}

// 0066FC00  FUN_0066fc00  size=139  [callgraph]
void __fastcall FUN_0066fc00(int *param_1)

{
  float fVar1;
  int iVar2;
  
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
  if (((param_1[0x2c0] & 0x200U) != 0) && (iVar2 = FUN_00ac4690(), iVar2 != 0)) {
    FUN_006686b0(4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0066fc89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0066FC90  FUN_0066fc90  size=94  [callgraph]
void __fastcall FUN_0066fc90(int param_1)

{
  float fVar1;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x1174))) &&
      (*(int *)(param_1 + 0x16d0) == 0)) && ((*(uint *)(param_1 + 0x1174) & 0x20000000) == 0)) {
    if (*(int *)(param_1 + 0x1320) == 0) {
      *(undefined4 *)(param_1 + 0x92c) = 0x41200000;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x92c) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x92c) = fVar1;
      if (fVar1 <= 0.0) {
        FUN_006686b0(0x1b);
        return;
      }
    }
  }
  return;
}

// 0066FCF0  FUN_0066fcf0  size=328  [callgraph]
void __fastcall FUN_0066fcf0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *local_8 [2];
  
  if (*(int *)(param_1 + 0x131c) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      goto LAB_0066fd1c;
    }
  }
  iVar1 = 0;
LAB_0066fd1c:
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = (int)*(short *)(param_1 + 0xab4) & 1;
    local_8[0] = &DAT_01645724;
    local_8[1] = &DAT_01645740;
    if (*(int *)(param_1 + 0x1188) == 0) {
      uVar2 = 0;
    }
    FUN_00a9e290(local_8[uVar2],0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x940) = 0;
    FUN_00e5e0c0("em0040_vo_matador",param_1,0xffffffff,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
  if ((*(byte *)(param_1 + 0xab4) & 1) != 0) {
    iVar1 = FUN_00a12210(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x16e0) = *(undefined4 *)(iVar1 + 0x50);
      *(undefined4 *)(param_1 + 0x16e4) = *(undefined4 *)(iVar1 + 0x54);
      *(undefined4 *)(param_1 + 0x16e8) = *(undefined4 *)(iVar1 + 0x58);
      *(undefined4 *)(param_1 + 0x16ec) = *(undefined4 *)(iVar1 + 0x5c);
      *(undefined4 *)(param_1 + 0x16e4) = 0;
      if (*(int *)(param_1 + 0x764) != 0) {
        FUN_008e0d30((undefined4 *)(param_1 + 0x16e0));
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(int *)(param_1 + 0x940) != 0) {
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_006686b0(0x1e);
    }
  }
  return;
}

// 0066FE40  FUN_0066fe40  size=796  [callgraph]
void __thiscall FUN_0066fe40(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  
  if ((param_1[0x45d] & 0x100U) != 0) {
    if (param_1[0x1d9] == 0) {
      return;
    }
    FUN_008e0ae0(1);
    return;
  }
  iVar4 = FUN_00668a50();
  uVar3 = param_2;
  if (iVar4 != 0) {
    return;
  }
  fVar6 = (float10)FUN_00a8ec30(param_2);
  param_2 = (float)fVar6;
  iVar4 = (**(code **)(*param_1 + 0x84))();
  fVar6 = (float10)FUN_00ddba30(*(float *)(iVar4 + 4) - param_2);
  if (ABS(fVar6) < (float10)0.2617994 != (ABS(fVar6) == (float10)0.2617994)) {
    iVar4 = FUN_0065d630(&param_2);
    if (iVar4 != 0) {
      fVar6 = (float10)fpatan(-(float10)(float)param_1[0x4d0],-(float10)(float)param_1[0x4d2]);
      param_1[0x4d8] = (int)(float)fVar6;
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)(float)param_1[0x25]));
      if ((float10)0.2617994 < ABS(fVar6)) {
        param_1[0x5c2] = 3;
        param_1[0x4da] = param_1[0x4d9];
        param_1[0x4d9] = 7;
        param_1[0x45d] = param_1[0x45d] | 0x100;
        return;
      }
      FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x4da] = param_1[0x4d9];
      param_1[0x4d9] = 3;
      param_1[0x45d] = param_1[0x45d] | 0x100;
      FUN_00662eb0(1);
      param_1[0x45d] = param_1[0x45d] | 2;
LAB_0067004b:
      if (param_1[0x1d9] == 0) {
        return;
      }
      FUN_008e0ae0(0);
      return;
    }
    if ((param_2 == 0.0) && (iVar4 = FUN_0065d6c0(), iVar4 != 0)) {
      fVar6 = (float10)fpatan((float10)(float)param_1[0x4d0],(float10)(float)param_1[0x4d2]);
      param_1[0x4d8] = (int)(float)fVar6;
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)(float)param_1[0x25]));
      if ((float10)0.2617994 < ABS(fVar6)) {
        param_1[0x5c2] = 5;
        FUN_00661b20(7);
        return;
      }
      FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00661b20(5);
      param_1[0x45d] = param_1[0x45d] & 0xfffffffd;
      FUN_00662eb0(1);
      goto LAB_0067004b;
    }
  }
  if ((param_1[0x45d] & 0x200000U) == 0) {
    FUN_00660780(uVar3,0x3dcccccd);
    goto LAB_0067013b;
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
      if ((uVar5 & 1) != 0) goto LAB_006700bc;
      fVar1 = -1.0471976;
    }
  }
  else {
LAB_006700bc:
    fVar1 = 1.0471976;
  }
  fVar2 = (float)param_1[0x25];
  fVar6 = (float10)FUN_00ddba30((fVar1 + param_2) - fVar2);
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.1 + (float10)fVar2));
  param_1[0x25] = (int)(float)fVar6;
LAB_0067013b:
  iVar4 = (**(code **)(*param_1 + 0x84))();
  param_1[0x4cb] = (int)(*(float *)(iVar4 + 4) - (float)param_1[0x4ca]);
  return;
}

// 00670160  FUN_00670160  size=1056  [callgraph]
void __thiscall FUN_00670160(int *param_1,float *param_2)

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
  
  if ((param_1[0x45d] & 0x100U) == 0) {
    iVar3 = FUN_00668a50();
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
      pfVar1 = (float *)(param_1 + 0x4d0);
      fVar2 = local_38 * (float)param_1[0x4d2] +
              (float)param_1[0x4d0] * local_40 + (float)param_1[0x4d1] * local_3c;
      if (ABS(fVar2) < 1e-05) {
        fVar2 = 1.0;
      }
      if (0.25 <= ABS(fVar2)) {
        if (0.0 <= fVar2) {
          param_1[0x45d] = param_1[0x45d] & 0xfffffffd;
        }
        else {
          param_1[0x45d] = param_1[0x45d] | 2;
        }
      }
      if (param_1[0x3f9] != 0) {
        param_1[0x4da] = param_1[0x4d9];
        param_1[0x4d9] = 8;
        param_1[0x45d] = param_1[0x45d] | 0x100;
        return;
      }
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
      if ((*(byte *)(param_1 + 0x45d) & 2) == 0) {
        iVar3 = FUN_0065d740();
        if (iVar3 != 0) {
          local_30 = *pfVar1 * -1.0;
          local_2c = (float)param_1[0x4d1] * -1.0;
          local_28 = (float)param_1[0x4d2] * -1.0;
          local_24 = (float)param_1[0x4d3] * -1.0;
          D3DXVec4Transform(local_20,&local_30,param_1 + 0x3c);
          fVar4 = (float10)fpatan((float10)local_2c,(float10)local_24);
          param_1[0x4d8] = (int)(float)fVar4;
          fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)(float)param_1[0x25]));
          if (ABS(fVar4) <= (float10)0.2617994) {
            FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            FUN_00661b20(6);
            if (param_1[0x1d9] != 0) {
              FUN_008e0ae0(0);
            }
            *pfVar1 = 0.0;
            param_1[0x4d1] = 0x3f800000;
            param_1[0x4d2] = 0;
            param_1[0x4d3] = local_20[0];
            return;
          }
          param_1[0x5c2] = 6;
          FUN_00661b20(7);
          return;
        }
        local_2c = -1.0;
      }
      else {
        iVar3 = FUN_0065d6c0();
        if (iVar3 != 0) {
          D3DXVec4Transform(&local_30,pfVar1,param_1 + 0x3c);
          fVar4 = (float10)fpatan((float10)local_3c,(float10)local_34);
          param_1[0x4d8] = (int)(float)fVar4;
          fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)(float)param_1[0x25]));
          if ((float10)0.2617994 < ABS(fVar4)) {
            param_1[0x5c2] = 4;
            FUN_00661b20(7);
            return;
          }
          *pfVar1 = 0.0;
          param_1[0x4d1] = 0x3f800000;
          param_1[0x4d2] = 0;
          param_1[0x4d3] = local_20[0];
          FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          FUN_00661b20(4);
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
      FUN_00660780(&local_30,0x3dcccccd);
      iVar3 = (**(code **)(*param_1 + 0x84))();
      param_1[0x4cb] = (int)(*(float *)(iVar3 + 4) - (float)param_1[0x4ca]);
    }
  }
  else if (param_1[0x1d9] != 0) {
    FUN_008e0ae0(1);
    return;
  }
  return;
}

// 00670580  FUN_00670580  size=478  [callgraph]
void __fastcall FUN_00670580(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if ((*(uint *)(param_1 + 0x1174) & 0x100) == 0) {
    fVar1 = *(float *)(param_1 + 0x1370) * 0.1;
    fVar2 = *(float *)(param_1 + 0x1374) * 0.1;
    fVar3 = *(float *)(param_1 + 0x1378) * 0.1;
    fVar4 = *(float *)(param_1 + 0x137c) * 0.1;
    *(float *)(param_1 + 0x50) = fVar1 + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar2;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + fVar3;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar4;
    *(float *)(param_1 + 0x1370) = *(float *)(param_1 + 0x1370) - fVar1;
    *(float *)(param_1 + 0x1374) = *(float *)(param_1 + 0x1374) - fVar2;
    *(float *)(param_1 + 0x1378) = *(float *)(param_1 + 0x1378) - fVar3;
    *(float *)(param_1 + 0x137c) = *(float *)(param_1 + 0x137c) - fVar4;
    iVar5 = FUN_00a94db0(0x38);
    if (iVar5 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(param_1 + 0x1364);
      *(undefined4 *)(param_1 + 0x1364) = 2;
      *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x1370) + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x1374);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x1378);
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x137c);
      *(undefined4 *)(param_1 + 0x1370) = 0;
      *(undefined4 *)(param_1 + 0x1374) = 0;
      *(undefined4 *)(param_1 + 0x1378) = 0;
      *(undefined4 *)(param_1 + 0x137c) = 0;
      FUN_00668e30(0);
    }
  }
  else {
    iVar5 = FUN_00a12210(0xf00);
    if (iVar5 != 0) {
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      *(float *)(param_1 + 0x1370) = *(float *)(param_1 + 0x1350) - *(float *)(iVar5 + 0x40);
      *(float *)(param_1 + 0x1374) = *(float *)(param_1 + 0x1354) - fVar1;
      *(float *)(param_1 + 0x1378) = *(float *)(param_1 + 0x1358) - fVar2;
      *(float *)(param_1 + 0x137c) = *(float *)(param_1 + 0x135c) - fVar3;
      *(undefined4 *)(param_1 + 0x1374) = 0;
      return;
    }
  }
  return;
}

// 00670760  FUN_00670760  size=396  [callgraph]
void __thiscall FUN_00670760(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if ((param_1[0x45d] & 0x100U) == 0) {
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x4dd] * 0.1);
    param_1[0x4dd] = (int)((float)param_1[0x4dd] - (float)param_1[0x4dd] * 0.1);
    iVar4 = FUN_00a94db0(0x39);
    if (iVar4 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(param_3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x4da] = param_1[0x4d9];
      param_1[0x4d9] = 1;
      param_1[0x45d] = param_1[0x45d] | 0x100;
      FUN_00668e30(0);
      param_1[0x15] = (int)((float)param_1[0x4dd] + (float)param_1[0x15]);
      param_1[0x4dc] = 0;
      param_1[0x4dd] = 0;
      param_1[0x4de] = 0;
      param_1[0x4df] = 0;
      param_1[0x45d] = param_1[0x45d] & 0xfffffffe;
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
      param_1[0x4dc] = (int)((float)param_1[0x4d4] - *(float *)(iVar4 + 0x40));
      param_1[0x4dd] = (int)((float)param_1[0x4d5] - fVar1);
      param_1[0x4de] = (int)((float)param_1[0x4d6] - fVar2);
      param_1[0x4df] = (int)((float)param_1[0x4d7] - fVar3);
      return;
    }
  }
  return;
}

// 006708F0  FUN_006708f0  size=478  [callgraph]
void __fastcall FUN_006708f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if ((*(uint *)(param_1 + 0x1174) & 0x100) == 0) {
    fVar1 = *(float *)(param_1 + 0x1370) * 0.1;
    fVar2 = *(float *)(param_1 + 0x1374) * 0.1;
    fVar3 = *(float *)(param_1 + 0x1378) * 0.1;
    fVar4 = *(float *)(param_1 + 0x137c) * 0.1;
    *(float *)(param_1 + 0x50) = fVar1 + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar2;
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + fVar3;
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar4;
    *(float *)(param_1 + 0x1370) = *(float *)(param_1 + 0x1370) - fVar1;
    *(float *)(param_1 + 0x1374) = *(float *)(param_1 + 0x1374) - fVar2;
    *(float *)(param_1 + 0x1378) = *(float *)(param_1 + 0x1378) - fVar3;
    *(float *)(param_1 + 0x137c) = *(float *)(param_1 + 0x137c) - fVar4;
    iVar5 = FUN_00a94db0(0x39);
    if (iVar5 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x1368) = *(undefined4 *)(param_1 + 0x1364);
      *(undefined4 *)(param_1 + 0x1364) = 2;
      *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
      FUN_00668e30(0);
      *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x1370) + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x1374);
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x1378);
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x137c);
      *(undefined4 *)(param_1 + 0x1370) = 0;
      *(undefined4 *)(param_1 + 0x1374) = 0;
      *(undefined4 *)(param_1 + 0x1378) = 0;
      *(undefined4 *)(param_1 + 0x137c) = 0;
    }
  }
  else {
    iVar5 = FUN_00a12210(0xf00);
    if (iVar5 != 0) {
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      *(float *)(param_1 + 0x1370) = *(float *)(param_1 + 0x1350) - *(float *)(iVar5 + 0x40);
      *(float *)(param_1 + 0x1374) = *(float *)(param_1 + 0x1354) - fVar1;
      *(float *)(param_1 + 0x1378) = *(float *)(param_1 + 0x1358) - fVar2;
      *(float *)(param_1 + 0x137c) = *(float *)(param_1 + 0x135c) - fVar3;
      *(undefined4 *)(param_1 + 0x1374) = 0;
      return;
    }
  }
  return;
}

// 00670AD0  FUN_00670ad0  size=396  [callgraph]
void __thiscall FUN_00670ad0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if ((param_1[0x45d] & 0x100U) == 0) {
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x4dd] * 0.1);
    param_1[0x4dd] = (int)((float)param_1[0x4dd] - (float)param_1[0x4dd] * 0.1);
    iVar4 = FUN_00a94db0(0x38);
    if (iVar4 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00aa4080(param_3,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x4da] = param_1[0x4d9];
      param_1[0x4d9] = 1;
      param_1[0x45d] = param_1[0x45d] | 0x100;
      param_1[0x15] = (int)((float)param_1[0x4dd] + (float)param_1[0x15]);
      param_1[0x4dc] = 0;
      param_1[0x4dd] = 0;
      param_1[0x4de] = 0;
      param_1[0x4df] = 0;
      FUN_00668e30(0);
      param_1[0x45d] = param_1[0x45d] & 0xfffffffe;
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
      param_1[0x4dc] = (int)((float)param_1[0x4d4] - *(float *)(iVar4 + 0x40));
      param_1[0x4dd] = (int)((float)param_1[0x4d5] - fVar1);
      param_1[0x4de] = (int)((float)param_1[0x4d6] - fVar2);
      param_1[0x4df] = (int)((float)param_1[0x4d7] - fVar3);
      return;
    }
  }
  return;
}

// 00670C60  FUN_00670c60  size=275  [callgraph]
void __fastcall FUN_00670c60(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 unaff_ESI;
  undefined *puVar4;
  
  switch(param_1[299]) {
  case 0:
    FUN_0066e900();
    return;
  case 1:
    FUN_006686b0(0x4f);
    (**(code **)(*param_1 + 200))(0);
    FUN_00c4d1a0(param_1[0x13c],0);
    return;
  case 2:
    uVar3 = 0x51;
    break;
  case 3:
    uVar3 = 0x50;
    break;
  case 4:
    uVar3 = 0x52;
    break;
  default:
    return;
  case 6:
    FUN_006686b0(0x8d);
    FUN_00c4d1a0(param_1[0x13c],0);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(unaff_ESI), piVar2 != (int *)0x0)) {
      puVar4 = &DAT_01b34e80;
      (**(code **)(*piVar2 + 4))(&DAT_01b34e80);
      FUN_00dd6d80(puVar4);
    }
    uVar3 = FUN_00a81330();
    FUN_006654e0(uVar3);
    return;
  case 7:
    FUN_006686b0(0x53);
    return;
  case 8:
    FUN_006686b0(0x54);
    return;
  case 9:
    FUN_006686b0(0x55);
    return;
  }
  FUN_006686b0(uVar3);
  (**(code **)(*param_1 + 200))(0);
  FUN_00c4d1a0(param_1[0x13c],0);
  return;
}

// 00670D50  FUN_00670d50  size=242  [callgraph]
void __fastcall FUN_00670d50(int param_1)

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
  iVar1 = FUN_0090dc50((undefined4 *)(param_1 + 0x1350),param_1 + 0x1340,0,&local_20,&local_30,
                       iVar1 << 0x10 | 0x1e,"em0040WallStick");
  if (iVar1 != 0) {
    FUN_00668e30(1);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x1350);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x1354);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x1358);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x135c);
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 1;
    return;
  }
  FUN_00dd5650(&DAT_01646dbc);
  return;
}

// 00670E50  FUN_00670e50  size=88  [callgraph]
void __fastcall FUN_00670e50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if ((*(byte *)(param_1 + 0x1177) & 1) == 0) {
    iVar1 = FUN_00ac89d0();
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    uVar2 = FUN_00a8c890(0);
    FUN_004117d0(0x37,iVar1,uVar2);
    FUN_00a963e0(local_160);
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x1000000;
  }
  return;
}

// 00670EB0  FUN_00670eb0  size=149  [callgraph]
void __fastcall FUN_00670eb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if ((*(uint *)(param_1 + 0x1174) & 0x4000000) == 0) {
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
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x4000000;
  }
  return;
}

// 00670F50  FUN_00670f50  size=677  [callgraph]
void __fastcall FUN_00670f50(int param_1)

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
  
  if (*(int *)(param_1 + 0x1044) == 0) goto LAB_006711ea;
  piVar2 = (int *)(param_1 + 0xef0 + *(int *)(param_1 + 0x1040) * 0x30);
  pfVar1 = (float *)(piVar2 + 4);
  local_c = 0;
  FUN_00907640(param_1 + 0x1044,&local_c,pfVar1);
  *piVar2 = 0;
  piVar2[1] = 0;
  if ((local_c != 0) && (0 < *(int *)(local_c + 0x14))) {
    FUN_0112bcf0();
    *piVar2 = 1;
  }
  if (*(int *)(param_1 + 0x1044) == 0) goto LAB_006711ea;
  switch(*(undefined4 *)(param_1 + 0x1040)) {
  case 0:
    if (*piVar2 != 0) {
      local_8 = (float *)(piVar2 + 8);
      iVar7 = FUN_00669580(local_c,pfVar1,local_8,1,*(uint *)(param_1 + 0x1174) >> 0x14 & 1);
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
      if ((*(int *)(param_1 + 0xfb4) != 0) &&
         (fVar10 = (float10)*local_8 * (float10)0 + (float10)local_8[1] +
                   (float10)local_8[2] * (float10)0,
         fVar9 = (float10)fcos((float10)1.1344640254974365), fVar9 < fVar10 != (fVar9 == fVar10))) {
        *(undefined4 *)(param_1 + 0xfb4) = 0;
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
          iVar6 = FUN_00669520(local_4,1);
          iVar8 = local_c;
          if (iVar6 != 0) goto LAB_0067117b;
        }
        local_8 = local_8 + 0xc;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(iVar8 + 0x14));
    }
    break;
  case 2:
    if (*piVar2 != 0) {
      uVar12 = *(uint *)(param_1 + 0x1174) & 1;
      uVar11 = 0;
LAB_00671125:
      iVar7 = FUN_00669580(local_c,pfVar1,piVar2 + 8,uVar11,uVar12);
      if (iVar7 != 0) {
        piVar2[1] = 1;
      }
    }
    break;
  case 3:
    if (*piVar2 != 0) {
      uVar12 = 1;
      uVar11 = 1;
      goto LAB_00671125;
    }
    break;
  case 4:
    piVar2[1] = (uint)(*piVar2 == 0);
    if ((*(int *)(param_1 + 0xef0) != 0) &&
       (fVar10 = (float10)*(float *)(param_1 + 0xf10) * (float10)0 +
                 (float10)*(float *)(param_1 + 0xf14) +
                 (float10)*(float *)(param_1 + 0xf18) * (float10)0,
       fVar9 = (float10)fcos((float10)1.1344640254974365), fVar9 < fVar10 != (fVar9 == fVar10))) {
LAB_0067117b:
      piVar2[1] = 0;
    }
    break;
  case 5:
    piVar2[1] = (uint)(*piVar2 == 0);
    break;
  case 6:
    piVar2[1] = *piVar2;
  }
  *(int *)(param_1 + 0x1040) = *(int *)(param_1 + 0x1040) + 1;
  iVar7 = *(int *)(param_1 + 0x1040);
  if ((*(byte *)(param_1 + 0x1174) & 1) == 0) {
    while ((0 < iVar7 && ((iVar7 < 4 || (iVar7 == 5))))) {
      puVar3 = (undefined4 *)(param_1 + 0xef0 + iVar7 * 0x30);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(int *)(param_1 + 0x1040) = *(int *)(param_1 + 0x1040) + 1;
      iVar7 = *(int *)(param_1 + 0x1040);
    }
  }
  if (6 < iVar7) {
    *(undefined4 *)(param_1 + 0x1040) = 0;
  }
LAB_006711ea:
  FUN_00661ef0();
  return;
}

// 00671220  FUN_00671220  size=239  [callgraph]
undefined4 __fastcall FUN_00671220(int *param_1)

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
      iVar1 = FUN_006640e0(piVar4);
      if (iVar1 != 0) {
        if (iVar3 != 0) {
          param_1[0x550] = *(int *)(iVar3 + 0x40);
          param_1[0x551] = *(int *)(iVar3 + 0x44);
          param_1[0x552] = *(int *)(iVar3 + 0x48);
          param_1[0x553] = *(int *)(iVar3 + 0x4c);
        }
        param_1[0x54c] = piVar4[8];
        param_1[0x54d] = piVar4[9];
        param_1[0x54e] = piVar4[10];
        param_1[0x54f] = piVar4[0xb];
        (**(code **)(*param_1 + 0x198))(iVar3,piVar4,0x100);
        return 1;
      }
    }
    piVar4 = piVar4 + 0x54;
  } while( true );
}

// 00671310  FUN_00671310  size=202  [callgraph]
undefined4 __fastcall FUN_00671310(int *param_1)

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
        iVar1 = FUN_006640e0(piVar4);
        if (iVar1 != 0) {
          (**(code **)(*param_1 + 0x198))(uVar3,piVar4,0x100);
          param_1[0x54c] = piVar4[8];
          param_1[0x54d] = piVar4[9];
          param_1[0x54e] = piVar4[10];
          param_1[0x54f] = piVar4[0xb];
        }
        return 1;
      }
    }
    piVar4 = piVar4 + 0x54;
  } while (piVar4 != piVar2);
  return 0;
}

// 006713E0  FUN_006713e0  size=2492  [callgraph]
undefined4 __thiscall FUN_006713e0(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  local_4 = 0;
  if ((param_1[0x128] == 0xe) || (param_1[0x128] == 0xf)) {
    param_1[0x454] = param_1[0x454] + 1;
    iVar2 = FUN_00a8eea0();
    iVar3 = FUN_00a8eeb0();
    uVar5 = (uint)param_2[0x23] >> 0x11 & 1;
    if (((((float)iVar2 / (float)iVar3 < (float)param_1[0x586]) &&
         (((param_2[0x24] & 0x2000000U) != 0 && (*param_2 != 0x1f)))) || (param_1[0x139] != 0)) ||
       (uVar5 != 0)) {
      if (param_1[0x128] == 0xf) {
        if (uVar5 == 0) {
          uVar6 = 0x2f;
          if (param_1[0x139] != 0) {
            uVar6 = 0x3e;
          }
        }
        else {
          uVar6 = 0x36;
          if (param_1[0x139] != 0) {
            uVar6 = 0x44;
          }
        }
        FUN_00ac8ab0();
        param_1[0x24] = 0;
        param_1[0x457] = -1;
        FUN_00667240();
        if ((param_1[0x205] < 4) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x5b)) {
          param_1[0x34a] = 1;
          FUN_00a88b50(4,1);
          param_1[0x34a] = 0;
        }
        FUN_006686b0(uVar6);
        if (param_1[0x1d9] != 0) {
          FUN_008e5c50(7);
          param_1[0x5b8] = 0;
          param_1[0x5b9] = 0;
          param_1[0x5ba] = 0;
          param_1[0x5bb] = 0;
          FUN_008e0d30(param_1 + 0x5b8);
        }
        FUN_00e5e0c0("em0040_vo_separate",param_1,0xffffffff,0);
        FUN_00c81b30(0x4f);
        piVar4 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar4 + 0x44))(0xb,0);
      }
      else {
        if (uVar5 == 0) {
          FUN_0066b620(0x33);
        }
        else {
          uVar6 = 0x3d;
          if (param_1[0x139] != 0) {
            uVar6 = 0x3e;
          }
          FUN_00ac8ab0();
          param_1[0x24] = 0;
          param_1[0x457] = -1;
          FUN_00667240();
          if ((param_1[0x205] < 4) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x5b)) {
            param_1[0x34a] = 1;
            FUN_00a88b50(4,1);
            param_1[0x34a] = 0;
          }
          FUN_006686b0(uVar6);
          if (param_1[0x1d9] != 0) {
            FUN_008e5c50(7);
            param_1[0x5b8] = 0;
            param_1[0x5b9] = 0;
            param_1[0x5ba] = 0;
            param_1[0x5bb] = 0;
            FUN_008e0d30(param_1 + 0x5b8);
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
      param_1[0x462] = 2;
      FUN_00a88b50(4,0);
      if (uVar5 == 0) {
        FUN_0066cd30(9);
        return 0;
      }
      FUN_0066cd30(10);
      return 0;
    }
    if (*param_2 == 0x4f) {
      if (param_1[0x128] == 0xf) {
        uVar6 = 0x70;
      }
      else {
        uVar6 = 0x6f;
      }
      FUN_006686b0(uVar6);
      FUN_0066cd30(6);
      return 0x21;
    }
    iVar2 = FUN_00a8c760(0x10);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = FUN_00665e60();
    if ((iVar2 != 0) && (iVar2 = FUN_00a8c760(0x10), iVar2 != 0)) {
      return 0;
    }
    if (param_1[0x128] != 0xf) {
      FUN_006686b0(0x6f);
      FUN_0066cd30(6);
      return 0;
    }
    FUN_006686b0(0x70);
    FUN_0066cd30(6);
    return 0;
  }
  iVar2 = *param_2;
  if (iVar2 < 0x146) {
    if (iVar2 == 0x145) {
      FUN_0066b620(0x33);
      return 1;
    }
    if (iVar2 == 0x59) {
LAB_00671d6e:
      if (param_1[0x554] < 1) {
        return 0;
      }
      FUN_006686b0(0xa7);
      param_1[0x555] = 0x83;
      return 1;
    }
    if (iVar2 == 0x144) {
      uVar6 = 0x2f;
      if (param_1[0x139] != 0) {
        uVar6 = 0x3e;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x457] = -1;
      FUN_00667240();
      if ((param_1[0x205] < 4) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x5b)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_006686b0(uVar6);
      if (param_1[0x1d9] != 0) {
        FUN_008e5c50(7);
        param_1[0x5b8] = 0;
        param_1[0x5b9] = 0;
        param_1[0x5ba] = 0;
        param_1[0x5bb] = 0;
        FUN_008e0d30(param_1 + 0x5b8);
      }
      return 1;
    }
  }
  else if (iVar2 == 0x188) goto LAB_00671d6e;
  bVar1 = false;
  iVar2 = FUN_00a8cbe0(0x2c);
  if ((iVar2 != 0) && (param_1[0x221] != 0)) {
    bVar1 = true;
  }
  if (param_1[0x554] < 1) {
    if ((param_1[0x45d] & 0x400000U) != 0) {
      if (0 < param_1[0x554]) goto LAB_00671c62;
      goto LAB_00671d22;
    }
    if ((param_2[0x23] & 0x20000U) != 0) {
      iVar2 = FUN_0065c670();
      if (iVar2 != 0) {
        uVar6 = 0x3b;
        if (param_1[0x139] != 0) {
          uVar6 = 0x45;
        }
        FUN_00ac8ab0();
        param_1[0x24] = 0;
        param_1[0x457] = -1;
        FUN_00667240();
        if ((param_1[0x205] < 4) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x5b)) {
          param_1[0x34a] = 1;
          FUN_00a88b50(4,1);
          param_1[0x34a] = 0;
        }
        FUN_006686b0(uVar6);
        if (param_1[0x1d9] == 0) {
          return 0;
        }
        FUN_008e5c50(7);
        param_1[0x5b8] = 0;
        param_1[0x5b9] = 0;
        param_1[0x5ba] = 0;
        param_1[0x5bb] = 0;
        FUN_008e0d30(param_1 + 0x5b8);
        return 0;
      }
      uVar6 = 0x36;
      if (param_1[0x139] != 0) {
        uVar6 = 0x44;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x457] = -1;
      FUN_00667240();
      if ((param_1[0x205] < 4) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x5b)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_006686b0(uVar6);
      if (param_1[0x1d9] == 0) {
        return 0;
      }
      FUN_008e5c50(7);
      param_1[0x5b8] = 0;
      param_1[0x5b9] = 0;
      param_1[0x5ba] = 0;
      param_1[0x5bb] = 0;
      FUN_008e0d30(param_1 + 0x5b8);
      return 0;
    }
    iVar2 = FUN_006642f0(param_2);
    if (iVar2 == 0) {
      if ((param_2[0x24] & 0x1000000U) != 0) {
        uVar6 = 0x35;
        goto LAB_00671d52;
      }
      if ((param_2[0x24] & 0x800000U) != 0) {
        FUN_0066b620(0x34);
        param_1[0x45d] = param_1[0x45d] | 0x20000;
        return 0x800;
      }
      iVar2 = FUN_00664280(param_2);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
        if (((iVar2 == 0) || (iVar2 = FUN_00a8cbe0(0x5b), iVar2 != 0)) || (bVar1)) {
          if ((param_1[0x139] == 0) && (*param_2 == 0x59)) {
            return 0;
          }
          FUN_0066b620(0x31);
          return 0;
        }
        if (*(byte *)((int)param_2 + 0x11) < 7) {
          if ((param_1[0x139] == 0) && (*param_2 == 0x59)) {
            return 0;
          }
          uVar6 = 0x2f;
          if (param_1[0x139] != 0) {
            uVar6 = 0x3e;
          }
          FUN_00ac8ab0();
          param_1[0x24] = 0;
          param_1[0x457] = -1;
          FUN_00667240();
          if ((param_1[0x205] < 4) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x5b)) {
            param_1[0x34a] = 1;
            FUN_00a88b50(4,1);
            param_1[0x34a] = 0;
          }
          FUN_006686b0(uVar6);
          if (param_1[0x1d9] != 0) {
            FUN_008e5c50(7);
            param_1[0x5b8] = 0;
            param_1[0x5b9] = 0;
            param_1[0x5ba] = 0;
            param_1[0x5bb] = 0;
            FUN_008e0d30(param_1 + 0x5b8);
            param_1[0x45d] = param_1[0x45d] | 0x20000;
            return 0;
          }
        }
        else {
          uVar6 = 0x30;
          if (param_1[0x139] != 0) {
            uVar6 = 0x3e;
          }
          FUN_00ac8ab0();
          param_1[0x24] = 0;
          param_1[0x457] = -1;
          FUN_00667240();
          if ((param_1[0x205] < 4) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x5b)) {
            param_1[0x34a] = 1;
            FUN_00a88b50(4,1);
            param_1[0x34a] = 0;
          }
          FUN_006686b0(uVar6);
          if (param_1[0x1d9] != 0) {
            FUN_008e5c50(7);
            param_1[0x5b8] = 0;
            param_1[0x5b9] = 0;
            param_1[0x5ba] = 0;
            param_1[0x5bb] = 0;
            FUN_008e0d30(param_1 + 0x5b8);
            param_1[0x45d] = param_1[0x45d] | 0x20000;
            return 0;
          }
        }
        goto LAB_00671d57;
      }
      goto LAB_00671d50;
    }
    local_4 = 0x40;
    uVar6 = 0x32;
  }
  else {
LAB_00671c62:
    if ((param_2[0x23] & 0x20000U) != 0) {
      uVar6 = 0x3b;
      if (param_1[0x139] != 0) {
        uVar6 = 0x45;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x457] = -1;
      FUN_00667240();
      if ((param_1[0x205] < 4) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x5b)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_006686b0(uVar6);
      if (param_1[0x1d9] == 0) {
        return 0;
      }
      FUN_008e5c50(7);
      param_1[0x5b8] = 0;
      param_1[0x5b9] = 0;
      param_1[0x5ba] = 0;
      param_1[0x5bb] = 0;
      FUN_008e0d30(param_1 + 0x5b8);
      return 0;
    }
LAB_00671d22:
    param_1[0x5bf] = (uint)param_1[0x45d] >> 0x16 & 1;
    param_1[0x45d] = param_1[0x45d] & 0xff3fffff;
    if ((param_2[0x24] & 0x800000U) == 0) {
LAB_00671d50:
      uVar6 = 0x33;
    }
    else {
      uVar6 = 0x34;
    }
  }
LAB_00671d52:
  FUN_0066b620(uVar6);
LAB_00671d57:
  param_1[0x45d] = param_1[0x45d] | 0x20000;
  return local_4;
}

// 00671DA0  FUN_00671da0  size=301  [callgraph]
undefined4 __thiscall FUN_00671da0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0xffffffff;
  if (*param_2 == 0x144) {
    if (*(int *)(param_1 + 0x618) == 0x37) {
      return 0xffffffff;
    }
    uVar2 = 1;
    uVar3 = 0x37;
  }
  else {
    if (*param_2 == 0x145) {
      uVar2 = 1;
      FUN_0066b620(0x33);
      goto LAB_00671ea3;
    }
    if (*(int *)(param_1 + 0x618) != 0x37) {
      if (*(int *)(param_1 + 0x4e4) == 0) {
        return 0xffffffff;
      }
      uVar2 = 1;
      FUN_00ac8ab0();
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x115c) = 0xffffffff;
      FUN_00667240();
      if ((*(int *)(param_1 + 0x814) < 4) && (iVar1 = FUN_00a8cab0(), iVar1 == 0x5b)) {
        *(undefined4 *)(param_1 + 0xd28) = 1;
        FUN_00a88b50(4,1);
        *(undefined4 *)(param_1 + 0xd28) = 0;
      }
      FUN_006686b0(0x3e);
      if (*(int *)(param_1 + 0x764) != 0) {
        FUN_008e5c50(7);
        *(undefined4 *)(param_1 + 0x16e0) = 0;
        *(undefined4 *)(param_1 + 0x16e4) = 0;
        *(undefined4 *)(param_1 + 0x16e8) = 0;
        *(undefined4 *)(param_1 + 0x16ec) = 0;
        FUN_008e0d30((undefined4 *)(param_1 + 0x16e0));
      }
      goto LAB_00671ea3;
    }
    FUN_00a8ee20(0);
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    uVar3 = 0x47;
  }
  FUN_006686b0(uVar3);
LAB_00671ea3:
  *(undefined4 *)(param_1 + 0x16e0) = 0;
  *(undefined4 *)(param_1 + 0x16e4) = 0;
  *(undefined4 *)(param_1 + 0x16e8) = 0;
  *(undefined4 *)(param_1 + 0x16ec) = 0;
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e0d30((undefined4 *)(param_1 + 0x16e0));
  }
  return uVar2;
}

// 00671ED0  FUN_00671ed0  size=217  [callgraph]
void __thiscall FUN_00671ed0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_164 [352];
  
  if ((param_1[0x45d] & 0x1000U) == 0) {
    param_1[0x45d] = param_1[0x45d] | 0x1000;
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    (**(code **)(*param_1 + 200))(1);
    FUN_00661e90();
    if (param_1[0x301] == 0) {
      piVar1 = (int *)FUN_00ac89d0();
      if (piVar1 == (int *)0x0) {
        piVar1 = param_1;
      }
      uVar2 = FUN_00a8c890(0);
      FUN_004117d0((param_2 == 0) * '\b' + '\t',piVar1,uVar2);
      FUN_00a963e0(auStack_164);
      FUN_00e5e0c0("em0040_se_dmg_spark",param_1,0xffffffff,0);
      if (param_3 != 0) {
        FUN_00668ca0();
      }
    }
  }
  return;
}

// 00671FB0  FUN_00671fb0  size=441  [callgraph]
void __thiscall FUN_00671fb0(int *param_1,int param_2,int param_3)

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
  if ((iVar1 == 0) && (param_1[0x301] == 0)) {
    FUN_00a8c9b0(0,9,0x3f800000,0);
    FUN_00a8c9b0(0,0x11,0x3f800000,0);
    FUN_00661e90();
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
      FUN_00e013e0(0x28040,uVar4,&local_130,uVar2);
      FUN_00a85670(param_1,1);
    }
    iVar1 = FUN_00e5e0c0("em0040_se_dmg_explosion",param_1,0xffffffff,0);
    param_1[0x5b7] = iVar1;
    FUN_00a94bc0(0,0);
    (**(code **)(*param_1 + 0x20))();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    if ((*(byte *)((int)param_1 + 0x1177) & 1) != 0) {
      FUN_00a8c9b0(0,0x37,0x3f800000,0);
      param_1[0x45d] = param_1[0x45d] & 0xfeffffff;
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
    FUN_0065e390();
  }
  return;
}

// 00672170  FUN_00672170  size=823  [callgraph]
void __fastcall FUN_00672170(int *param_1)

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
    local_184 = (int *)0x67219f;
    FUN_00664230();
    local_184 = (int *)0x6721a6;
    FUN_00662af0();
    local_184 = (int *)0x0;
    local_188 = (undefined1 *)0x6721af;
    FUN_0065d590();
    param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
    param_1[0x25] = param_1[0x455];
    local_184 = (int *)0x3f800000;
    local_188 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x28,0,0x3e4ccccd,0x3f800000,0x8038000);
    local_184 = (int *)0x1;
    local_188 = (undefined1 *)0x672205;
    (**(code **)(*param_1 + 0x1f8))();
    local_184 = (int *)0x67220e;
    FUN_00e01ca0();
    local_184 = param_1 + 0x498;
    local_188 = (undefined1 *)0x67221e;
    FUN_00dffb30();
    local_184 = (int *)auStack_120;
    local_188 = (undefined1 *)0x207;
    FUN_00e02d50(param_1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    local_184 = (int *)0x3f800000;
    local_188 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_184 = (int *)0x672251;
    FUN_00661b80();
    local_184 = (int *)0x0;
    local_188 = (undefined1 *)0x67225a;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      if (param_1[0x1d9] != 0) {
        local_184 = (int *)0x672277;
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      local_184 = (int *)0x3d888889;
      local_188 = (undefined1 *)0x6722a6;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_188 = auStack_174;
        FUN_00a92f90();
        FUN_0044fd10();
        local_188 = (undefined1 *)0x6722cd;
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
LAB_00672393:
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
    local_188 = (undefined1 *)0x67238b;
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 == 0) break;
    goto LAB_00672393;
  case 3:
    local_184 = (int *)0x3f800000;
    local_188 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_184 = (int *)0x0;
    local_188 = (undefined1 *)0x6723c1;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_184 = (int *)0x0;
      local_188 = (undefined1 *)0x0;
      (**(code **)(param_1[0x498] + 8))(0);
      uVar3 = 0x3b;
      if (param_1[0x139] != 0) {
        uVar3 = 0x45;
      }
      FUN_00ac8ab0();
      param_1[0x24] = 0;
      param_1[0x457] = -1;
      FUN_00667240();
      if ((param_1[0x205] < 4) && (iVar2 = FUN_00a8cab0(), iVar2 == 0x5b)) {
        param_1[0x34a] = 1;
        FUN_00a88b50(4,1);
        param_1[0x34a] = 0;
      }
      FUN_006686b0(uVar3);
      if (param_1[0x1d9] != 0) {
        FUN_008e5c50(7);
        param_1[0x5b8] = 0;
        param_1[0x5b9] = 0;
        param_1[0x5ba] = 0;
        param_1[0x5bb] = 0;
        FUN_008e0d30(param_1 + 0x5b8);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  return;
}

// 006724C0  FUN_006724c0  size=367  [callgraph]
void __fastcall FUN_006724c0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    FUN_00664230();
    FUN_00662aa0();
    uVar3 = FUN_0065e340(param_1[0x245]);
    FUN_00aa3f60(uVar3);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00671ed0(0,1);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x248] = 0x3f333333;
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668;
      param_1[0x248] = (int)fVar1;
      if (fVar1 < 0.0) {
        FUN_00671fb0(1,0);
        if (param_1[0x301] == 0) {
          FUN_006686b0(0x48);
          return;
        }
        FUN_006686b0(0xbb);
      }
    }
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00aa4120(0x2b,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668;
  param_1[0x248] = (int)fVar1;
  if (fVar1 < 0.0) {
    FUN_00671fb0(1,0);
    if (param_1[0x301] == 0) {
      uVar3 = 0x48;
    }
    else {
      uVar3 = 0xbb;
    }
    FUN_006686b0(uVar3);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00662cd0();
  return;
}

// 00672630  FUN_00672630  size=533  [callgraph]
void __fastcall FUN_00672630(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00664230();
    FUN_00662af0();
    FUN_00671ed0(0,1);
    uVar2 = 0x3e4ccccd;
    param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
    if (param_1[0x440] == 0x31) {
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
      FUN_00671fb0(1,0);
      if (param_1[0x301] != 0) {
        FUN_006686b0(0xbb);
        return;
      }
      FUN_006686b0(0x48);
    }
  }
  return;
}

// 00672860  FUN_00672860  size=396  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00672860(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00664230();
    FUN_00662af0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
    FUN_00671ed0(0,1);
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
    FUN_00671fb0(1,0);
    if (param_1[0x301] != 0) {
      FUN_006686b0(0xbb);
      return;
    }
    FUN_006686b0(0x48);
  }
  return;
}

// 006729F0  FUN_006729f0  size=725  [callgraph]
void __fastcall FUN_006729f0(int *param_1)

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
    local_74 = 9.474155e-39;
    FUN_00664230();
    local_74 = 9.474165e-39;
    FUN_00662af0();
    local_74 = 1.4013e-45;
    local_78 = (undefined1 *)0x0;
    FUN_00671ed0();
    param_1[0x25] = param_1[0x455];
    local_74 = 1.0;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x28,0,0x3e4ccccd,0x3f800000,0x8038000);
    local_74 = 1.4013e-45;
    local_78 = (undefined1 *)0x672a75;
    (**(code **)(*param_1 + 0x1f8))();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 9.474332e-39;
    FUN_00661b80();
    local_74 = 0.0;
    local_78 = (undefined1 *)0x672a9e;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      if (param_1[0x1d9] != 0) {
        local_74 = 9.474385e-39;
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      local_74 = 0.06666667;
      local_78 = (undefined1 *)0x672aea;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_78 = auStack_64;
        FUN_00a92f90();
        FUN_0044fd10();
        local_78 = (undefined1 *)0x672b2f;
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
    }
    break;
  case 2:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0.06666667;
    local_78 = (undefined1 *)0x672bf6;
    iVar2 = (**(code **)(*param_1 + 800))();
    if (iVar2 != 0) {
      local_78 = (undefined1 *)0x2a;
      param_1[0x248] = 0x3f333333;
      param_1[0x187] = 3;
      FUN_00aa3f60();
      return;
    }
    if ((float)param_1[0x11] - (float)param_1[0x249] < -10.0) {
      local_78 = (undefined1 *)0x0;
      FUN_00671fb0(1);
      local_78 = (undefined1 *)0x672c4a;
      FUN_0066e8e0();
      return;
    }
    break;
  case 3:
    local_74 = 1.0;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0.0;
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    local_78 = (undefined1 *)0x672c81;
    iVar2 = FUN_00a94ce0();
    if ((iVar2 != 0) || ((float)param_1[0x248] <= 0.0)) {
      local_74 = 0.0;
      local_78 = (undefined1 *)0x1;
      FUN_00671fb0();
      if (param_1[0x301] != 0) {
        local_74 = 2.62043e-43;
        local_78 = (undefined1 *)0x672cb4;
        FUN_006686b0();
        return;
      }
      local_74 = 1.00893e-43;
      local_78 = (undefined1 *)0x672cc0;
      FUN_006686b0();
    }
  }
  return;
}

// 00672CE0  FUN_00672ce0  size=603  [callgraph]
void __fastcall FUN_00672ce0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_00672cf2_caseD_1;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = param_1[0x465];
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
    FUN_0065d360();
    return;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) || ((float)param_1[0x248] <= 0.0)) {
      FUN_00671fb0(1,0);
      if (param_1[0x301] != 0) {
        FUN_006686b0(0xbb);
        return;
      }
      FUN_006686b0(0x48);
    }
  default:
    return;
  }
  FUN_00664230();
  FUN_00662af0();
  FUN_00671ed0(0,1);
  FUN_00aa9280(0x2d);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x469] = 0x3f19999a;
  FUN_00a92f90();
  iVar2 = FUN_00e26e90();
  if (iVar2 == 0) {
    fVar3 = (float10)-1.0;
  }
  else {
    fVar3 = (float10)FUN_00e36a50(0);
  }
  pcVar1 = *(code **)(*param_1 + 0x1f8);
  param_1[0x465] =
       (int)(float)((float10)(float)param_1[0x22a] * (float10)0.6 * fVar3 * (float10)60.0 *
                   (float10)0.9);
  (*pcVar1)(1);
  FUN_0065d590(0);
switchD_00672cf2_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x469] = 0x3f99999a;
    FUN_00aa4120(0x2e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00671fb0(1,0);
    if (param_1[0x301] != 0) {
      FUN_006686b0(0xbb);
      FUN_0065d360();
      return;
    }
    FUN_006686b0(0x48);
  }
  FUN_0065d360();
  return;
}

// 00672F50  FUN_00672f50  size=600  [callgraph]
void __fastcall FUN_00672f50(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00664230();
    FUN_00662af0();
    FUN_00671ed0(0,1);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x225] = param_1[0x465];
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 == 0) {
      FUN_0065d590(0);
      param_1[0x469] = 0x41200000;
      param_1[0x465] = -0x41800000;
      param_1[0x187] = 1;
      FUN_00aa4120(0x2e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      goto LAB_0067308b;
    }
    param_1[0x248] = 0x3f333333;
    FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 2;
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else {
    if (iVar1 == 1) {
LAB_0067308b:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x225] = param_1[0x465];
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
      FUN_0065d360();
      return;
    }
    if (iVar1 == 2) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
      iVar1 = FUN_00a94ce0(0);
      if ((iVar1 != 0) || ((float)param_1[0x248] <= 0.0)) {
        FUN_00671fb0(1,0);
        if (param_1[0x301] != 0) {
          FUN_006686b0(0xbb);
          return;
        }
        FUN_006686b0(0x48);
        return;
      }
    }
  }
  return;
}

// 006731B0  FUN_006731b0  size=346  [callgraph]
void __fastcall FUN_006731b0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    FUN_00664230();
    FUN_00662af0();
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
    FUN_00671fb0(1,0);
    if (param_1[0x301] == 0) {
      FUN_006686b0(0x48);
      return;
    }
    FUN_006686b0(0xbb);
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

// 00673310  FUN_00673310  size=301  [callgraph]
void __fastcall FUN_00673310(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00664230();
    FUN_00662af0();
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
      FUN_00671fb0(1,0);
      if (param_1[0x301] != 0) {
        FUN_006686b0(0xbb);
        return;
      }
      FUN_006686b0(0x48);
      return;
    }
    FUN_00aa4080(0x36,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  return;
}

// 00673610  FUN_00673610  size=46  [callgraph]
void __fastcall FUN_00673610(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x1490) = *(float *)(param_1 + 0x1490) - *(float *)(param_1 + 0x910);
    FUN_0066c130();
    return;
  }
  return;
}

// 00673640  FUN_00673640  size=1267  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00673818) */
/* WARNING: Removing unreachable block (ram,0x006737a2) */
/* WARNING: Removing unreachable block (ram,0x00673865) */

void __thiscall FUN_00673640(int param_1,int param_2)

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
      FUN_00e013e0(0x28040,0x7c,pfVar1,uVar7);
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
          fStack_490 = *(float *)(param_1 + 0x15d0) * fVar3 + fStack_490;
          fStack_488 = fStack_488 + *(float *)(param_1 + 0x15d8) * fVar3;
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
        *(undefined4 *)(param_1 + 0x1520) = 0;
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
      fVar11 = (float10)FUN_00ddba30((float)(fVar11 + (float10)*(float *)(param_1 + 0x1520)));
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

// 00673B40  FUN_00673b40  size=1273  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00673d58) */
/* WARNING: Removing unreachable block (ram,0x00673ed8) */

void FUN_00673b40(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

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
    puStack_cc = (undefined1 *)0x673d6a;
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

// 00674040  FUN_00674040  size=262  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00674040(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 0x4a0) == 5) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    *(float *)(param_1 + 0x1490) = *(float *)(param_1 + 0x1490) - *(float *)(param_1 + 0x910);
    FUN_0066c130();
  }
  if (*(int *)(param_1 + 0x4a0) != 0x10) {
    iVar3 = FUN_0065cac0();
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xfdffffff;
    }
    else {
      *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x2000000;
    }
    FUN_0066e670();
  }
  if ((*(int *)(param_1 + 0x4a0) == 0xe) || (*(int *)(param_1 + 0x4a0) == 0xf)) {
    bVar2 = false;
    iVar3 = FUN_00a8c760(4);
    if ((iVar3 != 0) ||
       ((iVar3 = FUN_00665e60(), iVar3 != 0 && (iVar3 = FUN_00a8c760(4), iVar3 != 0)))) {
      bVar2 = true;
    }
    if (((*(int *)(param_1 + 0x16d0) == 0) && (bVar2)) && (iVar3 = FUN_006618f0(1), iVar3 != -1)) {
      if (*(int *)(param_1 + 0x4a0) == 0xf) {
        uVar4 = 0x6e;
      }
      else {
        uVar4 = 0x6d;
      }
      FUN_006686b0(uVar4);
      FUN_0066cd30(8);
    }
  }
  fVar1 = *(float *)(param_1 + 0x16f4);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0x16f4) = *(float *)(param_1 + 0x16f4) - _DAT_01be942c;
  }
  FUN_00665a30();
  return;
}

// 006747D0  FUN_006747d0  size=1242  [callgraph]
undefined4 __fastcall FUN_006747d0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  int local_18;
  float local_14;
  int local_10;
  float local_c [2];
  float local_4;
  
  switch(param_1[0x3af]) {
  case 0:
    FUN_00aa4080(0x1a,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    FUN_00673b40(param_1 + 0x528,param_1 + 0x10,param_1 + 0x3b0,0x40266666,0);
    param_1[0x3b4] = 0;
    param_1[0x3b5] = 0;
    param_1[0x3b6] = 0x3fa00000;
    FUN_0065d590(0);
    param_1[0x3af] = param_1[0x3af] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x1b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x3af] = param_1[0x3af] + 1;
    }
    local_18 = 0;
    local_14 = 0.0;
    local_10 = 0;
    FUN_00a581b0(&local_18,0x3e4ccccd,param_1[0x3b5]);
    param_1[0x3b5] = (int)((float)param_1[0x244] * 0.025 + (float)param_1[0x3b5]);
    param_1[0x14] = local_18;
    param_1[0x15] = (int)local_14;
    param_1[0x16] = local_10;
    FUN_0065cbf0(param_1 + 0x3b0,0x3e4ccccd,0x3e32b8c2);
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_18 = 0;
    local_14 = 0.0;
    local_10 = 0;
    FUN_00a581b0(&local_18,0x3e4ccccd,param_1[0x3b5]);
    FUN_00a585a0(local_c,0x3e4ccccd,param_1[0x3b5]);
    fVar4 = (float10)fpatan((float10)local_c[0],(float10)local_4);
    fVar1 = (float)param_1[0x25];
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)fVar1));
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)0.2 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar4;
    fVar1 = 1.0;
    if (1.0 < (float)param_1[0x3b5]) {
      fVar1 = (float)param_1[0x3b6];
    }
    param_1[0x3b5] = (int)(fVar1 * 0.025 * (float)param_1[0x244] + (float)param_1[0x3b5]);
    param_1[0x14] = local_18;
    param_1[0x15] = (int)local_14;
    param_1[0x16] = local_10;
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x1d,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
      fVar1 = (float)param_1[0x3b5];
      param_1[0x3af] = param_1[0x3af] + 1;
      if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
        FUN_0065d590(1);
        FUN_008e0c50(0);
        return 0;
      }
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x3b5] < 2.0) {
      local_18 = 0;
      local_14 = 0.0;
      local_10 = 0;
      FUN_00a581b0(&local_18,0x3e4ccccd,param_1[0x3b5]);
      FUN_00a585a0(local_c,0x3e4ccccd,param_1[0x3b5]);
      fVar4 = (float10)fpatan((float10)local_c[0],(float10)local_4);
      fVar1 = (float)param_1[0x25];
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)fVar1));
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)0.2 + (float10)fVar1));
      param_1[0x25] = (int)(float)fVar4;
      fVar1 = 1.0;
      if (1.0 < (float)param_1[0x3b5]) {
        fVar1 = (float)param_1[0x3b6];
      }
      fVar1 = fVar1 * 0.025 * (float)param_1[0x244] + (float)param_1[0x3b5];
      param_1[0x3b5] = (int)fVar1;
      fVar2 = local_14 - (float)param_1[0x15];
      param_1[0x14] = local_18;
      param_1[0x15] = (int)local_14;
      param_1[0x16] = local_10;
      if (2.0 <= fVar1) {
        FUN_0065d590(1);
        FUN_008e0c50(fVar2);
      }
    }
    if ((param_1[0x221] == 0) && (iVar3 = (**(code **)(*param_1 + 800))(0x3d888889), iVar3 != 0)) {
      FUN_00aa4080(0x1c,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x3af] = param_1[0x3af] + 1;
      return 0;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00674CC0  FUN_00674cc0  size=490  [callgraph]
void __fastcall FUN_00674cc0(int *param_1)

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
        puVar4 = &DAT_01b35590;
        (**(code **)(*piVar3 + 4))(&DAT_01b35590);
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

// 00674EB0  Em8040::vf334  size=1454  [class]
void __thiscall Em8040::vf334(int *param_1,undefined4 param_2,int *param_3)

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
    puVar10 = &DAT_01b35590;
    (**(code **)(*piVar5 + 4))(&DAT_01b35590);
    iVar7 = FUN_00dd6d80(puVar10);
    if ((iVar7 != 0) && (piVar5 != param_1)) {
      FUN_0040ac60(piVar5 + 0x2ac);
      param_1[0x54c] = piVar5[0x54c];
      param_1[0x54d] = piVar5[0x54d];
      param_1[0x54e] = piVar5[0x54e];
      param_1[0x54f] = piVar5[0x54f];
      param_1[0x550] = piVar5[0x550];
      param_1[0x551] = piVar5[0x551];
      param_1[0x552] = piVar5[0x552];
      param_1[0x553] = piVar5[0x553];
      param_1[0x557] = piVar5[0x557];
      uVar6 = FUN_009f8b40();
      FUN_00ac8a80(uVar6);
    }
  }
  FUN_009fd240();
  piVar5 = (int *)FUN_00ac8a30();
  param_1[0x556] = *piVar5;
  param_1[0x554] = piVar5[1];
  param_1[0x558] = piVar5[2];
  param_1[0x55a] = piVar5[3];
  bVar2 = false;
  param_1[0x559] = 0;
  if ((param_1[0x128] == 0xe) || (param_1[0x128] == 0xf)) {
    iVar7 = FUN_00a81330();
    if ((iVar7 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      puVar10 = &DAT_01b35590;
      (**(code **)(*piVar5 + 4))(&DAT_01b35590);
      iVar7 = FUN_00dd6d80(puVar10);
      if (iVar7 != 0) {
        FUN_0066c9c0(9,param_1);
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
    param_1[0x462] = 2;
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
  local_30 = (float)param_1[0x550] - (float)param_1[0x10];
  local_2c = (float)param_1[0x551] - (float)param_1[0x11];
  local_28 = (float)param_1[0x552] - (float)param_1[0x12];
  local_24 = (float)param_1[0x553] - (float)param_1[0x13];
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
    fVar1 = (float)param_1[0x54e] * pfVar8[2] +
            *pfVar8 * (float)param_1[0x54c] + (float)param_1[0x54d] * pfVar8[1];
  }
  bVar3 = 0.0 <= fVar1;
  switch(param_1[0x556]) {
  case 0:
    if (param_1[0x301] == 0) {
      iVar7 = 0xa5;
      param_1[0x555] = (-(uint)bVar3 & 0xfffffff6) + 0x89;
    }
    else {
      iVar7 = 0xbc;
    }
    break;
  case 1:
    if (param_1[0x301] == 0) {
      iVar7 = 0xa5;
      param_1[0x555] = (-(uint)bVar3 & 0xfffffffb) + 0x8a;
    }
    else {
      iVar7 = 0xbc;
    }
    break;
  case 2:
    iVar7 = 0xa6;
    param_1[0x555] = 0x81;
    break;
  case 3:
    iVar7 = 0xa6;
    param_1[0x555] = 0x80;
    break;
  case 4:
    iVar7 = 0xa6;
    param_1[0x555] = (uint)!bVar3 * 2 + 0x82;
    break;
  case 5:
    iVar7 = 0xa7;
    param_1[0x555] = 0x83;
    break;
  case 6:
    param_1[0x584] = 0;
    iVar7 = 0xa4;
    bVar2 = true;
    param_1[0x555] = 0x7a - (uint)bVar3;
    break;
  case 7:
    param_1[0x584] = 0;
    iVar7 = 0xa4;
    bVar2 = true;
    param_1[0x555] = 0x7b;
    break;
  case 8:
    param_1[0x584] = 0;
    iVar7 = 0xa4;
    bVar2 = true;
    param_1[0x555] = 0x7d;
    break;
  case 9:
    param_1[0x584] = 0;
    iVar7 = 0xa4;
    bVar2 = true;
    param_1[0x555] = 0x7c;
    break;
  case 10:
    param_1[0x584] = 0;
    iVar7 = 0xa9;
    iVar9 = FUN_00a8cbe0(0x60);
    if (iVar9 != 0) {
      iVar7 = 0xad;
    }
    bVar2 = true;
    param_1[0x559] = 1;
    if (iVar7 == -1) goto switchD_00675242_default;
    break;
  case 0xb:
    param_1[0x584] = 0;
    iVar7 = 0xaa;
    bVar2 = true;
    break;
  case 0xc:
    param_1[0x584] = 0;
    iVar7 = 0xab;
    iVar9 = FUN_00a8cbe0(0x60);
    if (iVar9 != 0) {
      iVar7 = 0xae;
    }
    break;
  case 0xd:
    param_1[0x584] = 0;
    iVar7 = 0xa4;
    bVar2 = true;
    param_1[0x555] = 0x83;
    param_1[0x559] = 1;
    break;
  default:
    goto switchD_00675242_default;
  }
  FUN_00a8caf0(iVar7,0,0,0);
switchD_00675242_default:
  param_1[0x45d] = param_1[0x45d] & 0xfbffffff;
  if (bVar2) {
    (**(code **)(*param_1 + 0x344))(10,1,1);
    return;
  }
  FUN_00670eb0();
  return;
}

// 006754A0  FUN_006754a0  size=422  [between]
void __fastcall FUN_006754a0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x187] == 0) {
    FUN_00664230();
    FUN_00662af0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(param_1[0x555],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x555] == 0x83) {
      fVar2 = (float10)FUN_00dde300(0,0x3f800000);
      FUN_00a95e60(0,(float)(fVar2 * (float10)12.0 * (float10)0.016666668));
    }
    if (param_1[0x559] != 0) {
      FUN_00667030();
    }
    FUN_00671ed0(0,1);
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
    FUN_00671fb0(1,0);
    if (param_1[0x301] != 0) {
      FUN_006686b0(0xbb);
      return;
    }
    FUN_006686b0(0x48);
  }
  return;
}

// 00675650  FUN_00675650  size=441  [between]
void __fastcall FUN_00675650(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00664230();
    FUN_00662af0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(param_1[0x555],0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x301] == 0) {
        FUN_00aa4080(0x2b,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = (int)((float)param_1[0x585] * 60.0);
        return;
      }
      FUN_0066e8e0();
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)) {
      FUN_00671ed0(0,1);
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
      FUN_00671fb0(1,0);
      FUN_0066e8e0();
      return;
    }
  }
  return;
}

// 00675820  FUN_00675820  size=537  [between]
void __fastcall FUN_00675820(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00664230();
    FUN_00662af0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4120(param_1[0x555],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x55a] != 0) {
      FUN_00aa4080(0x87,1,0,0x3f800000,0x8000030,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x301] == 0) {
        if (param_1[0x554] < 3) {
          if (param_1[0x555] == 0x2b) {
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
        param_1[0x248] = (int)((float)param_1[0x585] * 60.0);
        return;
      }
      FUN_0066e8e0();
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)) {
      FUN_00671ed0(0,1);
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
      FUN_00671fb0(1,0);
      FUN_0066e8e0();
      return;
    }
  }
  return;
}

// 00675C00  FUN_00675c00  size=697  [between]
void __fastcall FUN_00675c00(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00664230();
    FUN_00662af0();
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
    if (param_1[0x558] != 0) {
      FUN_0065f310(0x3f19999a);
    }
    if (param_1[0x559] != 0) {
      FUN_00667030();
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar2 != 0) {
        FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00671ed0(0,1);
        param_1[0x187] = 3;
        return;
      }
    }
    else {
      FUN_00aa4080(0x2e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00671ed0(0,1);
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x24f];
    param_1[0x24f] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00671fb0(1,0);
      FUN_0066e8e0();
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00671fb0(1,0);
      FUN_0066e8e0();
      return;
    }
  }
  return;
}

// 00675ED0  FUN_00675ed0  size=2175  [between]
void __fastcall FUN_00675ed0(int *param_1)

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
    FUN_00664230();
    FUN_00662af0();
    FUN_00aa4080(0x28,0,0x3dcccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x24f] = 0x43960000;
    if (param_1[0x558] != 0) {
      FUN_0065f310(0x3f19999a);
    }
    iVar9 = FUN_00666eb0(&local_110);
    if (iVar9 != 0) {
      fStack_d0 = (float)param_1[0x550] - (float)param_1[0x10];
      fStack_cc = (float)param_1[0x551] - (float)param_1[0x11];
      fStack_c8 = (float)param_1[0x552] - (float)param_1[0x12];
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
      piVar1 = param_1 + 0x55c;
      FUN_00ddb9f0(piVar1,auStack_bc);
      fVar10 = (float10)FUN_00a8ec30(param_1 + 0x550);
      fStack_c0 = (float)fVar10;
      iVar9 = (**(code **)(*param_1 + 0x84))();
      fVar10 = (float10)FUN_00ddba30(fStack_c0 - *(float *)(iVar9 + 4));
      D3DXMatrixRotationY(auStack_9c,(float)fVar10);
      D3DXMatrixMultiply(piVar1,auStack_a4,piVar1);
      D3DXMatrixScaling(auStack_70,0x3f400000,0x3f400000,0x3f400000);
      D3DXMatrixMultiply(piVar1,auStack_80,piVar1);
    }
    FUN_00671ed0(0,1);
    FUN_0065d590(0);
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
    D3DXVec3TransformNormal(&local_110,&local_110,param_1 + 0x55c);
    fVar4 = (float)param_1[0x568];
    fVar2 = (float)param_1[0x569];
    fVar3 = (float)param_1[0x56a];
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
      if (iVar9 != 0) {
        param_1[0x248] = 0x3f333333;
        param_1[0x187] = 3;
        FUN_00aa4080(0x2a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        return;
      }
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
    fVar4 = (float)param_1[0x24f];
    param_1[0x24f] = (int)(fVar4 - (float)param_1[0x244]);
    if (fVar4 - (float)param_1[0x244] <= 0.0) {
      FUN_00671fb0(1,0);
      FUN_0066e8e0();
      return;
    }
    break;
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
    D3DXVec3TransformNormal(&local_110,&local_110,param_1 + 0x55c);
    param_1[0x14] = (int)((float)param_1[0x568] + unaff_ESI + local_10c);
    param_1[0x15] = (int)((float)param_1[0x569] + unaff_EBX + local_108);
    param_1[0x16] = (int)((float)param_1[0x56a] + fStack_114 + local_104);
    param_1[0x17] = (int)(local_110 + local_100);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 0.016666668);
    iVar9 = FUN_00a94ce0(0);
    if ((iVar9 != 0) || ((float)param_1[0x248] <= 0.0)) {
      FUN_00671fb0(1,0);
      if (param_1[0x301] != 0) {
        FUN_006686b0(0xbb);
        return;
      }
      FUN_006686b0(0x48);
    }
  }
  return;
}

// 00676A50  FUN_00676a50  size=294  [between]
void __fastcall FUN_00676a50(int *param_1)

{
  float fVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00664230();
    FUN_00662af0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa4080(8,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00671ed0(1,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)param_1[0x56c] * 60.0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x5b4] == 0) {
    FUN_0065cbf0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3e0efa35);
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_006686b0(0x2a);
  }
  return;
}

// 00676B80  FUN_00676b80  size=184  [between]
void __fastcall FUN_00676b80(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00664230();
    FUN_00662af0();
    if (param_1[0x1d9] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    if (param_1[0x559] != 0) {
      FUN_00667030();
    }
    FUN_00671ed0(0,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x139] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (param_1[0x301] != 0) {
      FUN_006686b0(0xbb);
      return;
    }
    FUN_006686b0(0x48);
  }
  return;
}

// 00676C40  Em8040::vf40  size=198  [class]
void __fastcall Em8040::vf40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = EmBaseDLC::vf40();
  if (iVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x4b0);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(uVar1,0x20040);
  HoldEntitySlot::HoldEntitySlot_2();
  *(undefined4 *)(param_1 + 0x87c) = 7;
  *(undefined4 *)(param_1 + 0x880) = 0x27;
  *(undefined4 *)(param_1 + 0x82c) = 0;
  *(undefined4 *)(param_1 + 0x830) = 0;
  *(undefined4 *)(param_1 + 0x878) = 0;
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x170c) = 0;
  *(undefined4 *)(param_1 + 0x1710) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x1714) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x1718) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x171c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x1720) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x1724) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x1728) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x172c) = *(undefined4 *)(param_1 + 0x9c);
  return;
}

// 00676D10  Em8040::vf48  size=16  [class]
void Em8040::vf48(void)

{
  FUN_00674040();
  EmBaseDLC::vf48();
  return;
}

// 00676D20  Em8040::vf264  size=1  [class]
undefined4 __thiscall Em8040::vf264(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0040ac60(param_2);
  *(undefined4 *)(param_1 + 0x1710) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1714) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1718) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x171c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1724) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x1720) = 0;
  *(undefined4 *)(param_1 + 0x1728) = 0;
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  FUN_00aa0920(*(undefined4 *)(param_1 + 0xb0c));
  if (*(int *)(param_1 + 0x7d8) != 0) {
    *(undefined4 *)(param_1 + 0x7e0) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x7d8) + 0x85c) = 0x3dcccccd;
    iVar1 = FUN_009f8b40();
    *(uint *)(*(int *)(param_1 + 0x7d8) + 0x860) = iVar1 << 0x10 | 7;
  }
  if (*(int *)(param_1 + 0x4a0) != 5) goto LAB_00676ef4;
  *(undefined4 *)(param_1 + 0x814) = 4;
  FUN_00a7c950();
  iVar1 = FUN_00c19c90(*(int *)(param_1 + 0xb9c) + -1,0,0x20110);
  if (iVar1 == 0) {
    iVar1 = FUN_00c19c90(*(int *)(param_1 + 0xb9c) + -3,0,0x20110);
    if (iVar1 != 0) goto code_r0x00676e63;
    iVar1 = FUN_00c19c90(*(int *)(param_1 + 0xb9c) + -5,0,0x20110);
    if (iVar1 != 0) goto code_r0x00676e63;
    iVar1 = FUN_00c19c90(0,0,0x20110);
    if (iVar1 != 0) goto code_r0x00676e63;
    FUN_00dd5650(&DAT_01646e58);
    *(undefined4 *)(param_1 + 0x4a0) = 3;
  }
  else {
code_r0x00676e63:
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      if ((*(int *)(iVar1 + 0x10b8) == 1) && ((*(byte *)(param_1 + 0xb00) & 2) == 0)) {
        uVar2 = FUN_00a81330();
        FUN_006654e0(uVar2);
      }
      *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x80000;
    }
  }
  *(undefined4 *)(param_1 + 0xd28) = 0;
  *(undefined4 *)(param_1 + 0x814) = 4;
  if ((*(byte *)(param_1 + 0xb00) & 2) != 0) {
    FUN_008e59c0(2);
  }
LAB_00676ef4:
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
      FUN_006671d0();
    }
  }
  FUN_00670c60();
  if ((*(int *)(param_1 + 0x4a0) == 0xe) || (*(int *)(param_1 + 0x4a0) == 0xf)) {
    FUN_00674cc0();
  }
  if (*(int *)(param_1 + 0xaf4) == 0x12) {
    if ((*(byte *)(param_1 + 0xb00) & 0x40) == 0) {
      uVar2 = 0xb7;
    }
    else {
      uVar2 = 0xb8;
    }
    FUN_006686b0(uVar2);
  }
  FUN_0065ed00();
  return 1;
}

// 00676FA0  FUN_00676fa0  size=235  [between]
undefined4 __fastcall FUN_00676fa0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1188) == 2) {
    iVar2 = FUN_00c15850();
  }
  else {
    iVar2 = FUN_00c158c0();
  }
  if (iVar2 != 0) {
    switch(*(undefined4 *)(param_1 + 0x4a0)) {
    case 0:
      FUN_00c272a0(0x40a00000);
      FUN_006686b0(0x20);
      return 1;
    case 1:
      FUN_00c272a0(0x40a00000);
      FUN_006686b0(0x1f);
      return 1;
    case 2:
      FUN_00c272a0(0x40a00000);
      FUN_006686b0(0);
      return 1;
    case 3:
    case 5:
    case 0x10:
    case 0x11:
      iVar2 = FUN_0066e350();
      if (iVar2 != 0) {
        iVar2 = FUN_006605a0();
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

// 006770C0  FUN_006770c0  size=622  [between]
void __fastcall FUN_006770c0(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if ((char)*(uint *)(param_1 + 0x1174) < '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x16d0) != 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x1174) & 0x20000000) != 0) {
    return;
  }
  if (*(float *)(param_1 + 0x920) < *(float *)(param_1 + 0x924) * 0.1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x15f4);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    return;
  }
  if (DAT_01bea740 != 0) {
    return;
  }
  iVar2 = FUN_006692e0();
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_0065c5e0();
  if (iVar2 == 0) {
    iVar2 = FUN_0065f660();
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x1704) != 0) {
        return;
      }
      FUN_006686b0(0xbe);
      return;
    }
    if (*(int *)(param_1 + 0x1104) != -1) {
      FUN_006686b0(*(int *)(param_1 + 0x1104));
      return;
    }
    iVar2 = FUN_006692e0();
    if (iVar2 != 0) {
      return;
    }
    if ((*(int *)(param_1 + 0x1188) == 2) && (iVar2 = FUN_006618f0(0), iVar2 != -1)) {
      FUN_006686b0(iVar2);
      return;
    }
    if ((((*(uint *)(param_1 + 0x1174) & 0x400) == 0) &&
        (((iVar2 = *(int *)(param_1 + 0x1188), iVar2 == 0 || (iVar2 == 1)) &&
         ((*(uint *)(param_1 + 0x1174) & 8) == 0)))) &&
       ((*(float *)(param_1 + 0x1124) <= *(float *)(&DAT_01882158 + iVar2 * 0x14) &&
        (*(float *)(&DAT_0188215c + iVar2 * 0x14) < *(float *)(param_1 + 0x1124) !=
         (*(float *)(&DAT_0188215c + iVar2 * 0x14) == *(float *)(param_1 + 0x1124)))))) {
      FUN_006686b0(0xe);
      return;
    }
    if (*(int *)(param_1 + 0x1120) != 0) {
      fVar3 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0x1120) + 0x50);
      fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
      if ((float10)0.7853982 < ABS(fVar3)) {
        uVar4 = FUN_0065d950(param_1 + 0x1130);
        FUN_006686b0(uVar4);
      }
    }
    iVar2 = FUN_0066e440();
    if (iVar2 != 0) {
      return;
    }
    if (*(float *)(param_1 + 0x920) < *(float *)(param_1 + 0x924)) {
      return;
    }
    if (*(float *)(&DAT_01882150 + *(int *)(param_1 + 0x1188) * 0x14) < *(float *)(param_1 + 0x1124)
        != (*(float *)(&DAT_01882150 + *(int *)(param_1 + 0x1188) * 0x14) ==
           *(float *)(param_1 + 0x1124))) {
      return;
    }
    if (*(int *)(param_1 + 0x814) < 4) {
      return;
    }
    iVar2 = FUN_00676fa0();
    if (iVar2 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x95c) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x95c) = 1;
    FUN_0066e310();
    return;
  }
  if (*(int *)(param_1 + 0xeb8) == 0) {
    iVar2 = FUN_00ac4690();
    if (iVar2 == 0) goto LAB_0067718c;
    uVar4 = 4;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x928) = fVar1;
    if (0.0 < fVar1) goto LAB_0067718c;
    uVar4 = 0xbd;
  }
  FUN_006686b0(uVar4);
LAB_0067718c:
  if (*(int *)(param_1 + 0xedc) == 0) {
    return;
  }
  FUN_00a88b50(4,1);
  return;
}

// 00677330  FUN_00677330  size=114  [between]
void __fastcall FUN_00677330(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a8d790(&local_c);
    *(undefined4 *)(param_1 + 0xec0) = local_c;
    *(undefined4 *)(param_1 + 0xec4) = local_8;
    *(undefined4 *)(param_1 + 0xec8) = local_4;
    *(undefined4 *)(param_1 + 0xecc) = 0x3f800000;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xebc) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar1 = FUN_006747d0();
  if (iVar1 != 0) {
    FUN_006686b0(4);
  }
  return;
}

// 006773B0  FUN_006773b0  size=340  [between]
void __fastcall FUN_006773b0(int *param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x45d] = param_1[0x45d] | 0x20;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    return;
  case 1:
    fVar1 = (float)param_1[0x465];
    if (param_1[0x188] == 0) {
      piVar2 = (int *)FUN_00ac89d0();
      if (piVar2 == (int *)0x0) {
        piVar2 = param_1;
      }
      uVar3 = FUN_00a8c890(0);
      FUN_004117d0(8,piVar2,uVar3);
      FUN_00a963e0(local_160);
    }
    iVar4 = FUN_006616d0(param_1 + 0x188,0x3e75c28f,0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3f800000;
      FUN_00aa3f60(5);
      return;
    }
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && ((float)param_1[0x465] < 0.0)) {
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
    goto switchD_006773d0_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_006773d0_default:
  return;
}

// 00677520  FUN_00677520  size=118  [between]
void __fastcall FUN_00677520(int *param_1)

{
  if ((((param_1[0x187] != 0) && (-1 < (char)param_1[0x45d])) && (param_1[0x5b4] == 0)) &&
     (((param_1[0x45d] & 0x20000000U) == 0 && (param_1[0x187] == 2)))) {
    FUN_00670eb0();
    if (param_1[0x2e1] == 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        FUN_006686b0(0x8b);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0067757e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (*(int *)(&DAT_01646d94 + param_1[0x2e1] * 4) != -1) {
      FUN_006686b0(*(int *)(&DAT_01646d94 + param_1[0x2e1] * 4));
    }
  }
  return;
}

// 006775A0  FUN_006775a0  size=356  [between]
void __fastcall FUN_006775a0(int param_1)

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
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x1174))) &&
      (*(int *)(param_1 + 0x16d0) == 0)) &&
     ((((*(uint *)(param_1 + 0x1174) & 0x20000000) == 0 && (*(int *)(param_1 + 0x1120) != 0)) &&
      ((iVar2 = FUN_00665820(), iVar2 != 0 &&
       (*(float *)(param_1 + 0x1124) <=
        *(float *)(&DAT_01882150 + *(int *)(param_1 + 0x1188) * 0x14))))))) {
    local_30 = *(float *)(param_1 + 0x1130) - *(float *)(param_1 + 0x40);
    local_2c = *(float *)(param_1 + 0x1134) - *(float *)(param_1 + 0x44);
    local_28 = *(float *)(param_1 + 0x1138) - *(float *)(param_1 + 0x48);
    local_24 = *(float *)(param_1 + 0x113c) - *(float *)(param_1 + 0x4c);
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
      FUN_00676fa0();
    }
  }
  return;
}

// 00677710  FUN_00677710  size=1055  [between]
void __fastcall FUN_00677710(int *param_1)

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
    FUN_00673b40(param_1 + 0x528,param_1 + 0x10,&local_20,0x40266666,0);
    param_1[0x248] = 0;
    param_1[0x24a] = (int)((local_1c - (float)param_1[0x11]) - 2.6);
    FUN_0065d590(0);
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
      FUN_006686b0(0x8b);
      return;
    }
  }
  return;
}

// 00677B50  FUN_00677b50  size=189  [between]
void __fastcall FUN_00677b50(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x187] == 0) {
    FUN_00670d50();
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

// 00677C10  FUN_00677c10  size=234  [between]
undefined4 __thiscall FUN_00677c10(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1174);
  uVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0x1364)) {
  case 0:
    FUN_00668780(param_2,param_3);
    break;
  case 1:
    FUN_0066fe40(param_2,param_3);
    uVar2 = 1;
    break;
  case 2:
    FUN_00670160(param_2,param_3);
    break;
  case 3:
    FUN_00670580(param_2,param_3);
    break;
  case 4:
    FUN_00670760(param_2,param_3);
    break;
  case 5:
    FUN_006708f0(param_2,param_3);
    break;
  case 6:
    FUN_00670ad0(param_2,param_3);
    break;
  case 7:
    FUN_006687f0(param_2,param_3);
    break;
  case 8:
    FUN_00668900(param_2,param_3);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xfffffeff;
  }
  return uVar2;
}

// 00677E90  FUN_00677e90  size=1100  [between]
void __fastcall FUN_00677e90(int param_1)

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
      FUN_0065cbf0(*(int *)(param_1 + 0xa84) + 0x40,iVar4,iVar1);
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
    FUN_00661b80();
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
         ((*(int *)(param_1 + 0x1178) != 0 &&
          (iVar4 = FUN_00907560(param_1 + 0x1178,0,0,&local_9c,&local_94,0,0,0), iVar4 != 0)))) {
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
            if (iVar4 == local_98) goto LAB_00678283;
          }
          if (!bVar6) {
            return;
          }
LAB_00678283:
          *(undefined4 *)(param_1 + 0x61c) = 4;
          *(undefined4 *)(param_1 + 0x920) = 0x42100000;
          return;
        }
        if (bVar6) goto LAB_00678283;
        goto LAB_006781c9;
      }
      FUN_00468970(param_1 + 0x1178,0,&local_90,&local_80,7,0,0,0,"em0040",0,0);
      HavokRayCastManager::set(local_60);
    }
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      FUN_0065ccc0(0x3dcccccd,0x3c8efa35);
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
LAB_006781c9:
  FUN_00671fb0(1,0);
  FUN_0066e8e0();
  return;
}

// 006783C0  FUN_006783c0  size=2463  [between]
void __fastcall FUN_006783c0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
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
    param_1[0x45d] = param_1[0x45d] | 0x20000;
    param_1[0x45d] = param_1[0x45d] & 0xffffffbf;
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0xbf800000;
    pfStack_5c = (float *)0x8000000;
    FUN_00aa4120(0x56,0,0x3d088889,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    local_54 = (float *)0x678446;
    FUN_00662aa0();
    local_54 = (float *)0x0;
    local_58 = (float *)0x67844f;
    FUN_0065d590();
    local_54 = (float *)(param_1 + 0x2c);
    local_58 = (float *)(param_1 + 0x444);
    pfStack_5c = (float *)0x678462;
    FUN_00ddba00();
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0x678472;
    FUN_00ac80a0();
    return;
  case 1:
    local_54 = (float *)0xa;
    local_58 = (float *)0x678480;
    iVar3 = FUN_00a8c760();
    if (iVar3 != 0) {
      local_54 = (float *)0x3f800000;
      local_58 = (float *)0x3f800000;
      pfStack_5c = (float *)0x678497;
      FUN_00ac80a0();
      return;
    }
    local_54 = (float *)0x0;
    local_58 = (float *)0x6784a5;
    FUN_00a92f90();
    local_58 = (float *)0x6784ac;
    fVar5 = (float10)FUN_0043f390();
    local_54 = (float *)0x0;
    local_58 = (float *)0x6784b9;
    FUN_00a92f90();
    local_58 = (float *)0x6784c0;
    fVar4 = (float10)FUN_00407b40();
    iVar3 = param_1[0x2a1];
    pfVar1 = (float *)(param_1 + 600);
    fVar5 = ((float10)(float)fVar5 - fVar4) * (float10)60.0;
    *pfVar1 = *(float *)(iVar3 + 0x40);
    param_1[0x259] = *(int *)(iVar3 + 0x44);
    param_1[0x25a] = *(int *)(iVar3 + 0x48);
    param_1[0x25b] = *(int *)(iVar3 + 0x4c);
    local_40 = *pfVar1 - (float)param_1[0x10];
    local_3c = (float)param_1[0x259] - (float)param_1[0x11];
    local_38 = (float)param_1[0x25a] - (float)param_1[0x12];
    local_34 = (float)param_1[0x25b] - (float)param_1[0x13];
    param_1[0x24f] = (int)(float)((float10)2.0 / (fVar5 - (float10)26.0));
    if ((float)param_1[0x2a3] <= 0.0) {
      fVar5 = (float10)1;
    }
    else {
      fVar5 = SQRT((fVar5 * fVar5) / (float10)(float)param_1[0x2a4]) * (float10)0.35;
    }
    param_1[0x24e] = (int)(float)fVar5;
    fVar2 = (float)param_1[0x4d1];
    if (NAN(fVar2) || 0.0 < fVar2 == (fVar2 == 0.0)) {
      param_1[0x259] = (int)((float)param_1[0x259] + 0.25);
    }
    else {
      local_3c = 0.0;
      if ((local_40 == 0.0) && (local_38 == 0.0)) {
        local_38 = 0.3;
      }
      else {
        fVar2 = local_38 * local_38 + local_40 * local_40;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          local_58 = &local_40;
          pfStack_5c = (float *)0x6785db;
          local_54 = local_58;
          FUN_00ddf460();
        }
        else {
          local_54 = (float *)&DAT_0163d0ac;
          local_58 = (float *)0x6785fa;
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
      *pfVar1 = *pfVar1 + local_40;
      param_1[0x259] = (int)((float)param_1[0x259] + local_3c);
      param_1[0x25a] = (int)((float)param_1[0x25a] + local_38);
      param_1[0x25b] = (int)(local_34 + (float)param_1[0x25b]);
      param_1[0x259] = (int)((float)param_1[0x259] + 0.8);
    }
    local_30 = (float)param_1[0x10];
    local_2c = (float)param_1[0x11];
    local_28 = (float)param_1[0x12];
    local_24 = (float)param_1[0x13];
    local_58 = (float *)(((float)param_1[0x259] - local_2c) * 0.3);
    pfStack_5c = pfVar1;
    local_54 = local_58;
    FUN_00673b40(param_1 + 0x528,&local_30);
    param_1[0x187] = param_1[0x187] + 1;
  case 2:
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0x6786e6;
    FUN_00ac80a0();
    local_40 = (float)param_1[600] - (float)param_1[0x10];
    local_3c = (float)param_1[0x259] - (float)param_1[0x11];
    local_38 = (float)param_1[0x25a] - (float)param_1[0x12];
    local_34 = (float)param_1[0x25b] - (float)param_1[0x13];
    fVar2 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      local_58 = &local_40;
      pfStack_5c = (float *)0x678767;
      local_54 = local_58;
      FUN_00ddf460();
      fVar5 = (float10)local_40;
      fVar4 = (float10)local_38;
    }
    else {
      local_54 = (float *)&DAT_0163d0ac;
      local_58 = (float *)0x678786;
      FUN_00dd5650();
      fVar5 = (float10)0;
      local_40 = (float)fVar5;
      local_3c = 1.0;
      local_38 = (float)fVar5;
      fVar4 = fVar5;
    }
    local_54 = &local_30;
    local_58 = (float *)local_20;
    fVar6 = (float10)fpatan((float10)local_3c,SQRT(fVar4 * fVar4 + fVar5 * fVar5));
    local_30 = (float)-fVar6;
    fVar5 = (float10)fpatan(fVar5,fVar4);
    local_2c = (float)fVar5;
    local_28 = 0.0;
    pfStack_5c = (float *)0x6787d2;
    FUN_00ddb590();
    pfVar1 = (float *)(param_1 + 0x444);
    local_54 = (float *)0x6787ec;
    fVar5 = (float10)FUN_00fdc1f0();
    local_58 = (float *)local_20;
    local_54 = (float *)(float)((float10)1 - fVar5);
    pfStack_5c = pfVar1;
    D3DXQuaternionSlerp(pfVar1);
    FUN_00ddb9f0(param_1 + 0x2c,pfVar1);
    D3DXMatrixInverse(param_1 + 0x3c,0,param_1 + 0x2c);
    FUN_00a96030(0,param_1[0x24e]);
    if ((float)param_1[0x24a] < 2.0) {
      fVar2 = (float)param_1[0x244] * (float)param_1[0x24f] * (float)param_1[0x24e] +
              (float)param_1[0x24a];
      param_1[0x24a] = (int)fVar2;
      pfStack_5c = (float *)0x0;
      local_58 = (float *)0x0;
      local_54 = (float *)0x0;
      FUN_00a581b0(&pfStack_5c,0,fVar2);
      fVar7 = (float)local_58 - (float)param_1[0x15];
      param_1[600] = 0;
      param_1[0x259] = 0;
      param_1[0x25a] = 0;
      param_1[0x259] = 0;
      param_1[0x14] = (int)pfStack_5c;
      param_1[0x15] = (int)local_58;
      param_1[0x16] = (int)local_54;
      FUN_00a585a0(&pfStack_5c,0,param_1[0x24a]);
      fVar5 = (float10)fpatan((float10)(float)pfStack_5c,(float10)(float)local_54);
      param_1[0x25] = (int)(float)fVar5;
      fVar2 = (float)param_1[0x24a];
      if (!NAN(fVar2) && 2.0 < fVar2 != (fVar2 == 2.0)) {
        FUN_0065d590(1);
        param_1[0x225] = (int)fVar7;
        FUN_008e0c50(fVar7);
        FUN_00a96030(0,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 3:
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0x678965;
    FUN_00ac80a0();
    if ((0.0 < (float)param_1[0x249]) && ((float)param_1[0x249] < 1.0)) {
      local_54 = (float *)((float)param_1[0x244] * 0.08 + (float)param_1[0x249]);
      param_1[0x249] = (int)local_54;
      if ((float)local_54 < 1.0) {
        local_38 = 0.0;
        local_58 = &local_40;
        local_3c = 0.0;
        pfStack_5c = (float *)(param_1 + 0x444);
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
        FUN_0065cbf0();
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
        param_1[0x4cc] = 0x3f800000;
        param_1[0x249] = 0x3f800000;
      }
    }
    local_54 = (float *)0x0;
    local_58 = (float *)0x678b3b;
    iVar3 = FUN_00a94ce0();
    if (iVar3 != 0) {
      param_1[0x14] = (int)((float)param_1[600] + (float)param_1[0x14]);
      param_1[0x15] = (int)((float)param_1[0x259] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x25a] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x25b] + (float)param_1[0x17]);
    }
    local_54 = (float *)0x3d888889;
    local_58 = (float *)0x678b85;
    iVar3 = (**(code **)(*param_1 + 800))();
    if (iVar3 != 0) {
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
    param_1[0x14] = (int)((float)param_1[600] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x259] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x25a] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x25b] + (float)param_1[0x17]);
    local_54 = (float *)0x3f800000;
    local_58 = (float *)0x3f800000;
    pfStack_5c = (float *)0x678cd5;
    FUN_00ac80a0();
    local_54 = (float *)0x3d888889;
    local_58 = (float *)0x678ceb;
    iVar3 = (**(code **)(*param_1 + 800))();
    if (iVar3 != 0) {
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
    pfStack_5c = (float *)0x678d3f;
    FUN_00ac80a0();
    local_54 = (float *)0x0;
    local_58 = (float *)0x678d48;
    iVar3 = FUN_00a94ce0();
    if (iVar3 != 0) {
      local_54 = (float *)0x678d58;
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 00678D80  FUN_00678d80  size=82  [between]
void __fastcall FUN_00678d80(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(float *)(param_1 + 0x920) <= 0.0)) {
    iVar1 = FUN_00676fa0();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x16e0) = 0;
      *(undefined4 *)(param_1 + 0x16e4) = 0;
      *(undefined4 *)(param_1 + 0x16e8) = 0;
      *(undefined4 *)(param_1 + 0x16ec) = 0;
      if ((*(int *)(param_1 + 0x764) != 0) && (*(int *)(param_1 + 0x940) == 0)) {
        FUN_008e0d30((undefined4 *)(param_1 + 0x16e0));
      }
    }
  }
  return;
}

// 00678DE0  FUN_00678de0  size=187  [between]
void __fastcall FUN_00678de0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && (-1 < (char)*(uint *)(param_1 + 0x1174))) &&
      (*(int *)(param_1 + 0x16d0) == 0)) &&
     (((*(uint *)(param_1 + 0x1174) & 0x20000000) == 0 && (*(int *)(param_1 + 0x61c) < 2)))) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00a7c8a0();
      iVar1 = FUN_00a8cab0();
      if (iVar1 == 0x10c) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x61c) = 2;
    FUN_00671ed0(0,1);
    fVar2 = (float10)FUN_00dde300(0,0x3f800000);
    *(undefined4 *)(param_1 + 0x95c) = 1;
    *(float *)(param_1 + 0x151c) =
         (float)(fVar2 * (float10)0.15 + (float10)*(float *)(param_1 + 0x1518));
  }
  return;
}

// 00678EA0  FUN_00678ea0  size=1700  [between]
/* WARNING: Removing unreachable block (ram,0x00679033) */

void __fastcall FUN_00678ea0(int *param_1)

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
    param_1[0x45d] = param_1[0x45d] | 0x20000;
    param_1[0x45d] = param_1[0x45d] & 0xffffffbf;
    FUN_00aa4120(*(undefined4 *)(&DAT_01646e7c + param_1[0x46a] * 4),0,0x3e4ccccd,0x3f800000,0,
                 0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x546] = 0;
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
    param_1[0x4cc] = 0x3f800000;
    DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
    fVar4 = (float)(DAT_01dd0814 >> 8) * 5.960465e-08;
    param_1[0x547] = (int)(((1.0 - (fVar4 + fVar4)) * 0.1 + (float)param_1[0x580]) * 60.0);
    param_1[0x545] = (int)((float)param_1[0x581] * 60.0);
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
      iVar10 = FUN_00a12210(param_1[0x456]);
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
    fVar4 = (float)param_1[0x546];
    param_1[0x546] = (int)((float)param_1[0x244] + fVar4);
    if ((float)param_1[0x244] + fVar4 <= (float)param_1[0x547]) {
      return;
    }
    FUN_009f8b10();
    param_1[0x187] = 3;
    return;
  case 3:
    param_1[0x187] = 4;
    param_1[0x139] = 1;
    if (param_1[0x256] == 1) {
      FUN_00671fb0(1,1);
      Em8040::createDestructExplosion(1);
    }
    else {
      FUN_00671fb0(0,0);
      if (param_1[0x46a] == 0) {
        Em8040::createDestructExplosion(param_1[0x256]);
        iVar10 = FUN_00a12210(3);
        if (iVar10 != 0) {
          local_130 = *(float *)(iVar10 + 0x40);
          local_12c = *(float *)(iVar10 + 0x44);
          local_128 = *(undefined4 *)(iVar10 + 0x48);
          local_124 = *(undefined4 *)(iVar10 + 0x4c);
          uVar11 = FUN_00e01ca0();
          FUN_00e013e0(0x28040,3,&local_130,uVar11);
          local_a4 = 0;
        }
      }
    }
    if (param_1[0x301] == 0) {
      FUN_006686b0(0x48);
      return;
    }
    FUN_006686b0(0xbb);
    return;
  default:
    return;
  }
  iVar10 = FUN_00c27ef0();
  if (iVar10 < param_1[0x256]) {
    iVar10 = param_1[0x256];
  }
  param_1[0x256] = iVar10;
  if (param_1[0x46a] == 0) {
    fVar4 = (float)param_1[0x582];
    iVar9 = FUN_00606c90(param_1[0x2a1]);
    if (iVar9 != 0) {
      FUN_00bc3000((float)(iVar10 + -1) * 0.5 + fVar4);
    }
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  fVar4 = (float)param_1[0x546];
  param_1[0x546] = (int)((float)param_1[0x244] + fVar4);
  if ((param_1[0x188] == 0) && ((float)param_1[0x545] < (float)param_1[0x244] + fVar4)) {
    iVar10 = param_1[0x221];
    FUN_00671ed0(1,0);
    FUN_0065d590(iVar10 == 0);
    param_1[0x188] = 1;
  }
  if ((float)param_1[0x547] < (float)param_1[0x546]) {
    FUN_009f8b10();
    param_1[0x187] = 3;
  }
  FUN_00a81330();
  FUN_00a7c8a0();
  iVar10 = FUN_00a12210(param_1[0x456]);
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
    FUN_0065dcf0(iVar10);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00679560  FUN_00679560  size=984  [between]
void __fastcall FUN_00679560(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [76];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00671ed0(0,0);
    param_1[0x45d] = param_1[0x45d] & 0xff3fffff;
    FUN_00aa4080(*(undefined4 *)(&DAT_01646e90 + param_1[0x46a] * 4),0,0,0x3f800000,0x8038000,
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
    if ((float)param_1[0x547] < (float)param_1[0x546] + 40.0) {
      param_1[0x547] = (int)((float)param_1[0x546] + 40.0);
    }
    FUN_0065d590(0);
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
    FUN_00661b80();
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
      FUN_00671fb0(1,0);
      if (param_1[0x301] == 0) {
        uVar7 = 0x48;
      }
      else {
        uVar7 = 0xbb;
      }
      FUN_006686b0(uVar7);
    }
  }
  fVar1 = (float)param_1[0x546];
  param_1[0x546] = (int)((float)param_1[0x244] + fVar1);
  if ((float)param_1[0x547] < (float)param_1[0x244] + fVar1) {
    FUN_00671fb0(1,0);
    if (param_1[0x301] != 0) {
      FUN_006686b0(0xbb);
      return;
    }
    FUN_006686b0(0x48);
  }
  return;
}

// 00679950  FUN_00679950  size=82  [between]
void __fastcall FUN_00679950(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    FUN_00671fb0(1,0);
    Em8040::createDestructExplosion(1);
    if (*(int *)(param_1 + 0xc04) != 0) {
      FUN_006686b0(0xbb);
      return;
    }
    FUN_006686b0(0x48);
  }
  return;
}

// 006799B0  FUN_006799b0  size=803  [between]
void __fastcall FUN_006799b0(int *param_1)

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
  
  local_74 = 0x6799c9;
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_74 = 0x6799d8;
    uVar3 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0xbf800000;
    FUN_00aa4080(0x51,0,0x3e4ccccd,0x3f800000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
    local_78 = (undefined1 *)0x679a30;
    local_74 = uVar3;
    FUN_0065dcf0();
    param_1[0x248] = 0x3f333333;
    goto LAB_00679a40;
  case 1:
LAB_00679a40:
    if (0.0 < (float)param_1[0x248]) {
      fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668;
      param_1[0x248] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        local_74 = 1;
        local_78 = (undefined1 *)0x0;
        FUN_00671ed0();
      }
    }
    local_74 = 0x679a86;
    FUN_00661b80();
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0;
    local_78 = (undefined1 *)0x679aa2;
    iVar2 = FUN_00a94ce0();
    if (iVar2 != 0) {
      local_74 = 0x679ab1;
      FUN_009f8b10();
      local_74 = 0x679abc;
      FUN_00a7c950();
      param_1[0x195] = -1;
      param_1[0x45d] = param_1[0x45d] & 0xffffffdf;
      local_74 = 0x3d888889;
      local_78 = (undefined1 *)0x679ae3;
      iVar2 = (**(code **)(*param_1 + 800))();
      if (iVar2 == 0) {
        local_78 = auStack_64;
        param_1[0x187] = 2;
        FUN_00a92f90();
        FUN_0044fd10();
        local_78 = (undefined1 *)0x679b34;
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
    local_78 = (undefined1 *)0x679bde;
    iVar2 = FUN_00a8c760();
    if (iVar2 == 0) {
      local_78 = (undefined1 *)0x679bee;
      local_74 = uVar3;
      FUN_0065dc60();
      return;
    }
    break;
  case 2:
    local_74 = 0x3f800000;
    local_78 = (undefined1 *)0x3f800000;
    FUN_00ac80a0();
    local_74 = 0x3d888889;
    local_78 = (undefined1 *)0x679c20;
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
    local_78 = (undefined1 *)0x679c84;
    iVar2 = FUN_00a94ce0();
    if ((iVar2 != 0) || ((float)param_1[0x248] <= 0.0)) {
      local_74 = 0;
      local_78 = (undefined1 *)0x1;
      FUN_00671fb0();
      if (param_1[0x301] == 0) {
        local_74 = 0x48;
        local_78 = (undefined1 *)0x679cc5;
        FUN_006686b0();
        return;
      }
      local_74 = 0xbb;
      local_78 = (undefined1 *)0x679cb7;
      FUN_006686b0();
      return;
    }
  }
  return;
}

// 00679CF0  Em8040::vf32C  size=1130  [class]
undefined4 __fastcall Em8040::vf32C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  float10 fVar8;
  undefined8 uVar9;
  int local_8;
  
  iVar5 = 0;
  param_1[0x1a1] = 0;
  iVar1 = FUN_00a8ef10();
  if (((iVar1 != 0) || ((param_1[0x45d] & 0x20U) != 0)) || ((*(byte *)(param_1 + 0x130) & 1) == 0))
  {
    return 0;
  }
  if (param_1[0x139] != 0) {
    uVar2 = FUN_00671220();
    return uVar2;
  }
  if ((param_1[0x45d] & 0x40000U) != 0) {
    uVar2 = FUN_00671310();
    return uVar2;
  }
  FUN_00ac2080(0);
  piVar7 = (int *)param_1[0x19f];
  piVar3 = piVar7 + param_1[0x1a1] * 0x54;
  local_8 = 0;
  if (piVar7 == piVar3) {
    return 0;
  }
  do {
    iVar1 = *piVar7;
    if ((((iVar1 != 0) && (iVar1 != 1)) && ((iVar1 != 2 && ((iVar1 != 0x1b0 && (iVar1 != 0x147))))))
       && (iVar1 != 0xe0)) {
      iVar1 = FUN_00a81330();
      if ((*piVar7 == 0x129) || (*piVar7 == 0x12a)) {
        uVar9 = FUN_0065cd60();
        if (((int)uVar9 != 0) && ((int)((ulonglong)uVar9 >> 0x20) != 0)) {
          uVar2 = FUN_00a7c8a0();
          FUN_0066be10(uVar2);
          return 0;
        }
      }
      else if (iVar1 != param_1[0x13c]) {
        if (iVar1 != 0) {
          iVar5 = FUN_00a7c8a0();
          local_8 = iVar5;
        }
        iVar1 = FUN_00a8f040(piVar7);
        if (iVar1 == 0) {
          iVar1 = FUN_00a8eea0();
          if (((0 < iVar1) && (iVar5 != 0)) && ((*(byte *)(iVar5 + 0x4c0) & 0x10) != 0)) {
            (**(code **)(*param_1 + 0x21c))(iVar5,(char)piVar7[4],0x3c23d70a,0);
            iVar1 = FUN_006641a0(iVar5,piVar7);
            if (iVar1 != 0) {
              return 0;
            }
          }
          iVar1 = FUN_0066b740(iVar5,piVar7);
          if (iVar1 != 0) {
            return 0;
          }
          uVar6 = 1;
          if ((*(byte *)(piVar7 + 0x23) & 0x10) == 0) {
            iVar1 = piVar7[1];
            iVar5 = FUN_00a8cbe0(0x5b);
            if ((iVar5 != 0) && (*piVar7 == 0x1c3)) {
              iVar1 = FUN_00a8eea0();
            }
            (**(code **)(*param_1 + 0x30c))(iVar1,0);
          }
          if (*piVar7 == 0x145) {
            iVar1 = *param_1;
            uVar2 = FUN_00a8eea0(0);
            (**(code **)(iVar1 + 0x30c))(uVar2);
            FUN_0065d8d0();
          }
          if (((0 < param_1[0x554]) && (*piVar7 != 0x58)) || ((param_1[0x45d] & 0x400000U) != 0)) {
            FUN_009f8b10();
            if (param_1[0x1d9] != 0) {
              FUN_008e71f0(0x10000);
            }
            FUN_00a8ee20(0);
          }
          iVar1 = FUN_006640e0(piVar7);
          if (iVar1 != 0) {
            if (local_8 != 0) {
              param_1[0x550] = *(int *)(local_8 + 0x40);
              param_1[0x551] = *(int *)(local_8 + 0x44);
              param_1[0x552] = *(int *)(local_8 + 0x48);
              param_1[0x553] = *(int *)(local_8 + 0x4c);
            }
            param_1[0x54c] = piVar7[8];
            param_1[0x54d] = piVar7[9];
            param_1[0x54e] = piVar7[10];
            param_1[0x54f] = piVar7[0xb];
            return 1;
          }
          iVar1 = FUN_00a8eea0();
          if (iVar1 < 1) {
            FUN_00667240();
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
            if (iVar1 == 0x22) {
              FUN_00670e50();
            }
          }
          if ((piVar7[0x24] & 0x800U) != 0) {
            if (*piVar7 == 0x1c3) {
              FUN_00a88320(piVar7[5],piVar7 + 0x40);
            }
            else if (param_1[0x139] == 0) {
              FUN_00a88250(piVar7[5],piVar7 + 0x40);
              piVar3 = (int *)FUN_00c206d0();
              (**(code **)(*piVar3 + 4))(0,param_1[0x13c],param_1 + 0x10);
            }
          }
          fVar8 = (float10)FUN_00ddba30((float)piVar7[0xc] - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar8;
          param_1[0x455] = (int)(float)fVar8;
          if (local_8 != 0) {
            fVar8 = (float10)FUN_00a8ec30(local_8 + 0x40);
            param_1[0x455] = (int)(float)fVar8;
          }
          if (param_1[0x128] == 0x10) {
            uVar6 = FUN_00671da0(piVar7);
            if ((*(byte *)(param_1 + 0x2c0) & 0x80) != 0) {
              uVar6 = uVar6 | 0x8000;
            }
            if (uVar6 == 0xffffffff) {
              return 1;
            }
            (**(code **)(*param_1 + 0x198))(local_8,piVar7,uVar6);
            return unaff_ESI;
          }
          param_1[0x442] = 0;
          uVar4 = FUN_006713e0(piVar7);
          uVar6 = uVar6 | uVar4;
          if ((*(byte *)(param_1 + 0x2c0) & 0x82) != 0) {
            uVar6 = uVar6 | 0x8000;
          }
          (**(code **)(*param_1 + 0x198))(local_8,piVar7,uVar6);
          return unaff_ESI;
        }
      }
    }
    piVar7 = piVar7 + 0x54;
    if (piVar7 == piVar3) {
      return 0;
    }
  } while( true );
}

// 0067A160  FUN_0067a160  size=741  [between]
void __fastcall FUN_0067a160(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
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
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x188] = 0;
    if (param_1[0x448] != 0) {
      iVar1 = FUN_00a979d0();
      if (iVar1 == 0) {
        FUN_00a8d330(param_1 + 0x10,param_1[0x448] + 0x40);
        iVar1 = FUN_00c68b60();
        param_1[0x457] = iVar1;
      }
    }
    param_1[0x4d9] = 0;
    param_1[0x4da] = -1;
    param_1[0x45d] = param_1[0x45d] | 0x100;
    param_1[0x45d] = param_1[0x45d] & 0xffdfffff;
    param_1[0x45d] = param_1[0x45d] | 0x8000000;
  }
  else if (iVar1 == 1) {
    FUN_00a979f0(&local_4c);
    local_30 = local_4c;
    local_2c = local_48;
    local_28 = local_44;
    local_24 = 0x3f800000;
    iVar1 = FUN_00677c10(&local_30,8);
    if (iVar1 == 0) {
      param_1[0x45d] = param_1[0x45d] | 0x80;
    }
    else {
      param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((iVar1 != 0) && ((*(byte *)(param_1 + 0x45d) & 1) == 0)) && (param_1[0x448] != 0)) {
      iVar1 = FUN_00aa09c0(param_1[0x448] + 0x40,0x3f800000,0);
      if (iVar1 != 0) {
        iVar1 = FUN_00a8d380();
        if (iVar1 != 0) {
          FUN_00a8d2f0();
          (**(code **)(*param_1 + 0x34c))();
          param_1[0x5c1] = 1;
          return;
        }
        iVar1 = FUN_00c68b60();
        param_1[0x457] = iVar1;
        iVar1 = FUN_0065ee60();
        if (iVar1 != 0) {
          FUN_00a979f0(&local_40);
          local_20 = local_40;
          puVar2 = &local_20;
          local_1c = local_3c;
          local_18 = local_38;
          local_14 = 0x3f800000;
LAB_0067a34c:
          FUN_0065eea0(puVar2);
          param_1[0x187] = 2;
          return;
        }
      }
      if (param_1[0x405] != 0) {
        FUN_00a8d330(param_1 + 0x10,param_1[0x448] + 0x40);
        return;
      }
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_006747d0();
    if (iVar1 != 0) {
      if (param_1[0x1f6] != 0) {
        FUN_00c70800();
      }
      iVar1 = FUN_0065ee60();
      if (iVar1 != 0) {
        iVar1 = FUN_00a8d380();
        if (iVar1 == 0) {
          FUN_00a979f0(&local_4c);
          local_40 = local_4c;
          puVar2 = &local_40;
          local_3c = local_48;
          local_38 = local_44;
          local_34 = 0x3f800000;
          goto LAB_0067a34c;
        }
      }
      FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 1;
      return;
    }
  }
  return;
}

// 0067A450  FUN_0067a450  size=524  [between]
void __fastcall FUN_0067a450(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = *(int *)(param_1 + 0x61c);
  if (iVar3 == 0) {
    FUN_00aa4120(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00a8d710(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x1364) = 0;
    *(undefined4 *)(param_1 + 0x1368) = 0xffffffff;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffdfffff;
  }
  else {
    if (iVar3 == 1) {
      FUN_00a8d790(&local_2c);
      cVar2 = FUN_00c9db20(0);
      iVar3 = FUN_00a97e60(0x3f000000,(*(uint *)(param_1 + 0x1174) & 1) == 0);
      if (iVar3 != 0) {
        if (cVar2 != '\0') {
          *(undefined4 *)(param_1 + 0x920) = 0x43960000;
          *(undefined4 *)(param_1 + 0x61c) = 2;
          FUN_00aa4120(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
        }
        cVar2 = FUN_00c9db60(1);
        if (cVar2 != '\0') {
          FUN_006686b0(5);
          return;
        }
      }
      local_20 = local_2c;
      local_1c = local_28;
      local_18 = local_24;
      local_14 = 0x3f800000;
      iVar3 = FUN_00677c10(&local_20,7);
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x80;
      }
      else {
        *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffffff7f;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    if (iVar3 == 2) {
      fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x920) = fVar1;
      if (fVar1 <= 0.0) {
        FUN_00aa4120(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x61c) = 1;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
  }
  return;
}

// 0067A660  FUN_0067a660  size=527  [between]
void __fastcall FUN_0067a660(int *param_1)

{
  (**(code **)(*param_1 + 0x1d4))(0);
  switch(param_1[0x186]) {
  case 0:
    FUN_006770c0();
    break;
  case 1:
    FUN_0066e940();
    break;
  case 2:
    FUN_0066ea40();
    break;
  case 3:
    FUN_0066ec80();
    break;
  case 4:
    FUN_0066c510();
    break;
  case 5:
    FUN_0065d000();
    break;
  case 6:
    FUN_00667880();
    break;
  case 7:
    FUN_0066ee40();
    break;
  case 8:
    FUN_00667920();
    break;
  case 0xe:
    FUN_006679d0();
    break;
  case 0xf:
    FUN_00667bb0();
    break;
  case 0x10:
    FUN_0066f430();
    break;
  case 0x11:
    FUN_00667fa0();
    break;
  case 0x12:
    FUN_00667fe0();
    break;
  case 0x13:
    FUN_00668020();
    break;
  case 0x16:
    FUN_00669f30();
    break;
  case 0x1c:
    FUN_0066fc90();
    break;
  case 0x1e:
    FUN_0066c600();
    break;
  case 0x1f:
    FUN_0066a1a0();
    break;
  case 0x20:
    FUN_0066a5b0();
    break;
  case 0x28:
    FUN_00678de0();
    break;
  case 0x2d:
    FUN_00678d80();
    break;
  case 0x4f:
    FUN_0066f600();
    break;
  case 0x50:
    FUN_00677520();
    break;
  case 0x51:
    FUN_0066f690();
    break;
  case 0x56:
    FUN_006775a0();
    break;
  case 0x57:
    FUN_00668470();
    break;
  case 0x58:
    FUN_0065d260();
    break;
  case 0x5b:
    FUN_0066fad0();
    break;
  case 0x60:
    FUN_0067e4a0();
    break;
  case 0x61:
    FUN_0067e4b0();
    break;
  case 0x62:
    FUN_0067faf0();
    break;
  case 100:
    FUN_0066cd80();
    break;
  case 0x66:
    FUN_0066cf30();
    break;
  case 0x68:
    FUN_0066d070();
    break;
  case 0x6a:
    FUN_0066d0e0();
    break;
  case 0x6e:
    FUN_0066d2d0();
    break;
  case 0xad:
    FUN_0067e4c0();
    break;
  case 0xae:
    FUN_0067e4d0();
    break;
  case 0xbe:
    FUN_0066c3c0();
    break;
  case 0xbf:
    FUN_0066c490();
    break;
  case 0xc0:
    FUN_0066c870();
  }
  if (param_1[0x5b4] != 0) {
    FUN_0065ce10();
  }
  FUN_00665860();
  return;
}

// 0067A9F0  FUN_0067a9f0  size=193  [between]
void __fastcall FUN_0067a9f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4120(7,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x1364) = 0;
    *(undefined4 *)(param_1 + 0x1368) = 0xffffffff;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffdfffff;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    iVar1 = FUN_00677c10(param_1 + 0x1130,7);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x80;
    }
    else {
      *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffffff7f;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 0067AAC0  FUN_0067aac0  size=418  [between]
void __fastcall FUN_0067aac0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    fVar2 = (float10)FUN_00dde300(0x3f000000,0x3fc00000);
    *(undefined4 *)(param_1 + 0x1364) = 0;
    *(undefined4 *)(param_1 + 0x1368) = 0xffffffff;
    *(float *)(param_1 + 0x920) = (float)(fVar2 * fVar2);
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffdfffff;
    if (*(int *)(param_1 + 0x4a0) == 5) {
      *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x40;
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      iVar1 = FUN_00677c10(param_1 + 0x1130,8);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x80;
      }
      else {
        *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffffff7f;
      }
      if (((((*(byte *)(param_1 + 0x1174) & 1) == 0) && (*(int *)(param_1 + 0xef0) != 0)) &&
          (*(int *)(param_1 + 0xfb4) != 0)) &&
         ((*(int *)(param_1 + 0x4a0) != 5 && (*(int *)(param_1 + 0x1364) != 8)))) {
        *(undefined4 *)(param_1 + 0x61c) = 2;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    if (iVar1 == 2) {
      iVar1 = FUN_006616d0((undefined4 *)(param_1 + 0x620),0x3e4ccccd,0x3da3d70a);
      if (iVar1 != 0) {
        FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x620) = 0;
        *(undefined4 *)(param_1 + 0x61c) = 1;
      }
    }
  }
  return;
}

// 0067AC70  FUN_0067ac70  size=741  [between]
void __fastcall FUN_0067ac70(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
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
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x188] = 0;
    if (param_1[0x448] != 0) {
      iVar1 = FUN_00a979d0();
      if (iVar1 == 0) {
        FUN_00a8d330(param_1 + 0x10,param_1[0x448] + 0x40);
        iVar1 = FUN_00c68b60();
        param_1[0x457] = iVar1;
      }
    }
    param_1[0x4d9] = 0;
    param_1[0x4da] = -1;
    param_1[0x45d] = param_1[0x45d] | 0x100;
    param_1[0x45d] = param_1[0x45d] & 0xffdfffff;
    param_1[0x45d] = param_1[0x45d] | 0x8000000;
  }
  else if (iVar1 == 1) {
    FUN_00a979f0(&local_4c);
    local_30 = local_4c;
    local_2c = local_48;
    local_28 = local_44;
    local_24 = 0x3f800000;
    iVar1 = FUN_00677c10(&local_30,8);
    if (iVar1 == 0) {
      param_1[0x45d] = param_1[0x45d] | 0x80;
    }
    else {
      param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((iVar1 != 0) && ((*(byte *)(param_1 + 0x45d) & 1) == 0)) && (param_1[0x448] != 0)) {
      iVar1 = FUN_00aa09c0(param_1[0x448] + 0x40,0x3f800000,0);
      if (iVar1 != 0) {
        iVar1 = FUN_00a8d380();
        if (iVar1 != 0) {
          FUN_00a8d2f0();
          (**(code **)(*param_1 + 0x34c))();
          param_1[0x5c1] = 1;
          return;
        }
        iVar1 = FUN_00c68b60();
        param_1[0x457] = iVar1;
        iVar1 = FUN_0065ee60();
        if (iVar1 != 0) {
          FUN_00a979f0(&local_40);
          local_20 = local_40;
          puVar2 = &local_20;
          local_1c = local_3c;
          local_18 = local_38;
          local_14 = 0x3f800000;
LAB_0067ae5c:
          FUN_0065eea0(puVar2);
          param_1[0x187] = 2;
          return;
        }
      }
      if (param_1[0x405] != 0) {
        FUN_00a8d330(param_1 + 0x10,param_1[0x448] + 0x40);
        return;
      }
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_006747d0();
    if (iVar1 != 0) {
      if (param_1[0x1f6] != 0) {
        FUN_00c70800();
      }
      iVar1 = FUN_0065ee60();
      if (iVar1 != 0) {
        iVar1 = FUN_00a8d380();
        if (iVar1 == 0) {
          FUN_00a979f0(&local_4c);
          local_40 = local_4c;
          puVar2 = &local_40;
          local_3c = local_48;
          local_38 = local_44;
          local_34 = 0x3f800000;
          goto LAB_0067ae5c;
        }
      }
      FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 1;
      return;
    }
  }
  return;
}

// 0067AF60  FUN_0067af60  size=455  [between]
void __fastcall FUN_0067af60(int *param_1)

{
  int iVar1;
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
  
  if (param_1[0x187] == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    local_20 = local_4c;
    local_1c = local_48;
    local_18 = local_44;
    local_14 = 0x3f800000;
    FUN_00a8d330(param_1 + 0x10,&local_20);
    param_1[0x4d9] = 0;
    param_1[0x4da] = -1;
    param_1[0x45d] = param_1[0x45d] | 0x100;
    param_1[0x45d] = param_1[0x45d] & 0xffdfffff;
  }
  else if (param_1[0x187] == 1) {
    iVar1 = FUN_00a979d0();
    if (iVar1 == 0) {
      FUN_00ac46b0(&local_4c,1);
      local_40 = local_4c;
      local_3c = local_48;
      local_38 = local_44;
      local_34 = 0x3f800000;
      iVar1 = FUN_00677c10(&local_40,8);
      if (iVar1 == 0) {
        param_1[0x45d] = param_1[0x45d] | 0x80;
      }
      else {
        param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
      }
    }
    else {
      FUN_00a979f0(&local_4c);
      iVar1 = FUN_00aa09c0(param_1[0x448] + 0x40,0x3f800000,param_1[0x45d] & 1);
      if (iVar1 != 0) {
        iVar1 = FUN_00a8d380();
        if (iVar1 != 0) {
          FUN_00a8d2f0();
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
      }
    }
    local_30 = local_4c;
    local_2c = local_48;
    local_28 = local_44;
    local_24 = 0x3f800000;
    iVar1 = FUN_00677c10(&local_30,8);
    if (iVar1 == 0) {
      param_1[0x45d] = param_1[0x45d] | 0x80;
    }
    else {
      param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 0067B130  FUN_0067b130  size=338  [between]
void __fastcall FUN_0067b130(int param_1)

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
    FUN_00aa9280(8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    local_30 = *(undefined4 *)(param_1 + 0xb8c);
    local_2c = *(undefined4 *)(param_1 + 0xb90);
    local_28 = *(undefined4 *)(param_1 + 0xb94);
    local_24 = 0x3f800000;
    FUN_00a8d330(param_1 + 0x40,&local_30);
    *(undefined4 *)(param_1 + 0x1364) = 0;
    *(undefined4 *)(param_1 + 0x1368) = 0xffffffff;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x100;
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffdfffff;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  local_3c = *(undefined4 *)(param_1 + 0xb8c);
  local_38 = *(undefined4 *)(param_1 + 0xb90);
  local_34 = *(undefined4 *)(param_1 + 0xb94);
  iVar1 = FUN_00a979d0();
  if (iVar1 != 0) {
    FUN_00a979f0(&local_3c);
    iVar1 = FUN_00aa09c0(*(int *)(param_1 + 0x1120) + 0x40,0x3f800000,
                         *(uint *)(param_1 + 0x1174) & 1);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8d380();
      if (iVar1 != 0) {
        FUN_00a8d2f0();
      }
    }
  }
  local_20 = local_3c;
  local_1c = local_38;
  local_18 = local_34;
  local_14 = 0x3f800000;
  iVar1 = FUN_00677c10(&local_20,8);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) | 0x80;
  }
  else {
    *(uint *)(param_1 + 0x1174) = *(uint *)(param_1 + 0x1174) & 0xffffff7f;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0067B290  FUN_0067b290  size=734  [between]
void __fastcall FUN_0067b290(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  float10 fVar6;
  
  if ((param_1[0x4c7] == 0) || (iVar2 = FUN_00a81330(), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00a7c8a0();
  }
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00aa4120(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    fVar6 = (float10)FUN_00dde300(0x3f000000,0x3fc00000);
    param_1[0x4d9] = 0;
    param_1[0x4da] = -1;
    param_1[0x248] = (int)(float)(fVar6 * fVar6);
    param_1[0x249] = 0x41200000;
    param_1[0x45d] = param_1[0x45d] | 0x100;
    param_1[0x45d] = param_1[0x45d] & 0xffdfffff;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0);
    if ((iVar3 != 0) && (iVar2 != 0)) {
      FUN_0065cbf0(iVar2 + 0x40,0x3e4ccccd,0x3db2b8c2);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    FUN_006686b0(0x1d);
    return;
  }
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0067b3ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  pfVar5 = (float *)(iVar2 + 0x40);
  iVar3 = FUN_00677c10(pfVar5,8);
  if (iVar3 == 0) {
    param_1[0x45d] = param_1[0x45d] | 0x80;
  }
  else {
    param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
  }
  fVar1 = ((float)param_1[0x25a] - (float)param_1[0x16]) *
          ((float)param_1[0x25a] - (float)param_1[0x16]) +
          ((float)param_1[600] - (float)param_1[0x14]) *
          ((float)param_1[600] - (float)param_1[0x14]);
  if (fVar1 < 0.0121 == (fVar1 == 0.0121)) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)param_1[0x244] + (float)param_1[0x24b];
  }
  param_1[0x24b] = (int)fVar1;
  param_1[600] = param_1[0x14];
  param_1[0x259] = param_1[0x15];
  param_1[0x25a] = param_1[0x16];
  param_1[0x25b] = param_1[0x17];
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x12] - *(float *)(iVar2 + 0x48);
  fVar1 = fVar1 * fVar1 + ((float)param_1[0x10] - *pfVar5) * ((float)param_1[0x10] - *pfVar5);
  if ((2.25 < fVar1) && (((float)param_1[0x24b] <= 10.0 || (fVar1 < 16.0 == (fVar1 == 16.0))))) {
    return;
  }
  fVar6 = (float10)FUN_00a8ec30(pfVar5);
  fVar6 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar6));
  if ((float10)0.5235988 < ABS(fVar6)) {
    uVar4 = 10;
    iVar2 = FUN_0065d950(pfVar5);
    if (iVar2 != 9) {
      if (iVar2 == 10) {
        uVar4 = 9;
      }
      else if (iVar2 == 0xd) {
        uVar4 = 0xd;
      }
    }
    FUN_00aa4080(uVar4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  FUN_006686b0(0x1d);
  return;
}

// 0067B580  FUN_0067b580  size=672  [between]
/* WARNING: Removing unreachable block (ram,0x00668526) */
/* WARNING: Removing unreachable block (ram,0x00668553) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0067b580(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float10 fVar10;
  undefined *puVar11;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 **ppuStack_4c;
  undefined1 **ppuStack_48;
  undefined1 **ppuStack_44;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  float *pfStack_18;
  float fVar12;
  
  switch(param_1[0x186]) {
  case 0:
    FUN_0065cf10();
    return;
  case 1:
    FUN_0067a9f0();
    return;
  case 2:
  case 0xbe:
    FUN_0067aac0();
    return;
  case 3:
    FUN_0067ac70();
    return;
  case 4:
    FUN_0067a450();
    return;
  case 5:
    FUN_00677330();
    return;
  case 6:
    FUN_0067af60();
    return;
  case 7:
    FUN_0066ef10();
    return;
  case 8:
    FUN_00667960();
    return;
  case 9:
    FUN_006608d0();
    return;
  case 10:
    FUN_006609d0();
    return;
  case 0xb:
    FUN_00660ad0();
    return;
  case 0xc:
    FUN_00660ba0();
    return;
  case 0xd:
    FUN_00660c70();
    return;
  case 0xe:
    FUN_00660d60();
    return;
  case 0xf:
    FUN_00667c10();
    return;
  case 0x10:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x0;
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x3e4ccccd;
      iStack_24 = 0;
      uStack_28 = 8;
      uStack_2c = 0x667ed9;
      FUN_00aa4120();
      param_1[0x187] = param_1[0x187] + 1;
      pfStack_18 = (float *)0x667ef8;
      iVar3 = FUN_00c19c30();
      if (((iVar3 == 0) || (iVar7 = FUN_00a7c8a0(), iVar7 == 0)) ||
         ((iVar3 == param_1[0x13c] ||
          (iVar3 = FUN_00a7c8a0(),
          0.0 < ((float)param_1[0x12] - (float)param_1[0x44e]) *
                (*(float *)(iVar3 + 0x40) - (float)param_1[0x44c]) -
                ((float)param_1[0x10] - (float)param_1[0x44c]) *
                (*(float *)(iVar3 + 0x48) - (float)param_1[0x44e]))))) {
        iVar3 = 0x3f860a92;
      }
      else {
        iVar3 = -0x4079f56e;
      }
      param_1[0x248] = iVar3;
      param_1[0x249] = 0;
      param_1[0x24a] = param_1[0x449];
      if (param_1[0x128] == 5) {
        param_1[0x45d] = param_1[0x45d] | 0x40;
      }
      RayCastManager::getWork();
    }
    else if (param_1[0x187] == 1) {
      FUN_00a8e880();
      iVar3 = FUN_00a8e9b0();
      param_1[0x24b] = (int)(*(float *)(iVar3 + 4) + (float)param_1[0x248]);
      FUN_00ddba30();
      fVar10 = (float10)FUN_00ddba30();
      param_1[0x25] = (int)(float)fVar10;
      FUN_00ac80a0();
      return;
    }
    return;
  case 0x11:
    FUN_00660f10();
    return;
  case 0x12:
    FUN_00660fe0();
    return;
  case 0x13:
    FUN_006610b0();
    return;
  case 0x14:
  case 0x3a:
    FUN_0065e640();
    return;
  case 0x15:
    FUN_006698f0();
    return;
  case 0x16:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x3e4ccccd;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x5;
      iStack_24 = 0x66a022;
      FUN_00aa4120();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    fVar12 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar12);
    if (120.0 < (float)param_1[0x244] + fVar12) {
      FUN_006686b0();
    }
    return;
  case 0x17:
    FUN_0066a070();
    return;
  case 0x18:
    if (param_1[0x187] == 0) {
      param_1[0x4d9] = 0;
      param_1[0x4da] = -1;
      param_1[0x45d] = param_1[0x45d] | 0x100;
      param_1[0x45d] = param_1[0x45d] & 0xffdfffff;
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
    iVar3 = FUN_00677c10();
    if (iVar3 == 0) {
      param_1[0x45d] = param_1[0x45d] | 0x80;
    }
    else {
      param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
    }
    FUN_00ac80a0();
    if (((*(byte *)(param_1 + 0x45d) & 1) == 0) && (iVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x006783b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    return;
  case 0x19:
    FUN_00663400();
    return;
  case 0x1a:
    FUN_0066fc00();
    return;
  case 0x1b:
    FUN_0067b290();
    return;
  case 0x1c:
    if ((param_1[0x4c7] == 0) || (iVar3 = FUN_00a81330(), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00a7c8a0();
    }
    if (param_1[0x187] == 0) {
      if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x006615f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      pfStack_18 = (float *)0xbf800000;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x3f800000;
      iStack_24 = 0x3e4ccccd;
      uStack_28 = 0;
      uStack_2c = 8;
      puStack_30 = (undefined1 *)0x661624;
      FUN_00aa4120();
      pfStack_18 = (float *)param_1[0x2e7];
      param_1[0x187] = param_1[0x187] + 1;
      puStack_1c = (undefined1 *)0x661643;
      iVar7 = FUN_00c19c30();
      if ((((iVar7 == 0) || (iVar8 = FUN_00a7c8a0(), iVar8 == 0)) || (iVar7 == param_1[0x13c])) ||
         (iVar7 = FUN_00a7c8a0(),
         0.0 < ((float)param_1[0x12] - (float)param_1[0x44e]) *
               (*(float *)(iVar7 + 0x40) - *(float *)(iVar3 + 0x40)) -
               ((float)param_1[0x10] - (float)param_1[0x44c]) *
               (*(float *)(iVar7 + 0x48) - *(float *)(iVar3 + 0x48)))) {
        iVar3 = 0x3f860a92;
      }
      else {
        iVar3 = -0x4079f56e;
      }
      param_1[0x248] = iVar3;
      param_1[0x249] = 0;
      param_1[0x24a] = param_1[0x449];
      param_1[0x24b] = 0x41200000;
    }
    else if (param_1[0x187] == 1) {
      if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0066157f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      FUN_00a8e880();
      iVar3 = FUN_00a8e9b0();
      param_1[0x24b] = (int)(*(float *)(iVar3 + 4) + (float)param_1[0x248]);
      FUN_00ddba30();
      fVar10 = (float10)FUN_00ddba30();
      param_1[0x25] = (int)(float)fVar10;
      pfStack_18 = (float *)0x6615dd;
      FUN_00ac80a0();
      return;
    }
    return;
  case 0x1d:
    FUN_0066fcf0();
    return;
  case 0x1e:
    FUN_0066c670();
    return;
  case 0x1f:
    FUN_0066a220();
    return;
  case 0x20:
    FUN_0066a640();
    return;
  case 0x21:
    FUN_00663070();
    return;
  case 0x22:
    FUN_00677e90();
    return;
  case 0x23:
    FUN_0065db50();
    return;
  case 0x24:
    FUN_0065dba0();
    return;
  case 0x25:
    FUN_006631d0();
    return;
  case 0x26:
    FUN_00663250();
    return;
  case 0x27:
    FUN_00663cf0();
    return;
  case 0x28:
    FUN_00678ea0();
    return;
  case 0x29:
    FUN_00679560();
    return;
  case 0x2a:
    FUN_00679950();
    return;
  case 0x2b:
    FUN_006636a0();
    return;
  case 0x2c:
    FUN_006783c0();
    return;
  case 0x2d:
    FUN_00663ae0();
    return;
  default:
    return;
  case 0x2f:
    FUN_006644c0();
    return;
  case 0x30:
    FUN_006645c0();
    return;
  case 0x31:
    FUN_006646c0();
    return;
  case 0x32:
    iVar3 = param_1[0x187];
    if (iVar3 == 0) {
      FUN_00664230();
      FUN_00662af0();
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
      puStack_20 = (undefined1 *)0x31;
      if ((float)param_1[0x245] < 0.0) {
        puStack_20 = (undefined1 *)0x30;
      }
      pfStack_18 = (float *)0x3d088889;
      puStack_1c = (undefined1 *)0x0;
      iStack_24 = 0x6649b9;
      FUN_00aa4080();
      (**(code **)(*param_1 + 0x1f8))();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3f800000;
      param_1[0x188] = 0;
    }
    else if (iVar3 != 1) {
      if (iVar3 != 2) {
        return;
      }
      FUN_00ac80a0();
      iVar3 = FUN_00a94ce0();
      if (iVar3 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00664929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00a8e520();
    FUN_00a96030();
    iVar3 = FUN_00a8c760();
    if (iVar3 != 0) {
      param_1[0x188] = param_1[0x188] + 1;
    }
    FUN_00661b80();
    FUN_00ac80a0();
    iVar3 = FUN_00a94ce0();
    if (iVar3 != 0) {
      FUN_00aa3f60();
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      param_1[0x187] = param_1[0x187] + 1;
    }
    return;
  case 0x33:
    FUN_0066b7c0();
    return;
  case 0x34:
    FUN_00664a90();
    return;
  case 0x35:
    FUN_00664cd0();
    return;
  case 0x36:
    FUN_00664f20();
    return;
  case 0x37:
    iVar3 = param_1[0x187];
    if (iVar3 == 0) {
      FUN_00664230();
      FUN_00662af0();
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      pfStack_18 = (float *)0x3e4ccccd;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x81;
      iStack_24 = 0x66bb18;
      FUN_00aa4080();
      param_1[0x458] = param_1[0x458] + 1;
      param_1[0x248] = 0x43960000;
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (iVar3 != 1) {
      if (iVar3 != 2) {
        return;
      }
      FUN_00ac80a0();
      fVar12 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]);
      if (0.0 < fVar12 - (float)param_1[0x244]) {
        return;
      }
      FUN_006686b0();
      return;
    }
    FUN_00ac80a0();
    iVar3 = FUN_00a94ce0();
    if (iVar3 != 0) {
      if (param_1[0x458] < 2) {
        pfStack_18 = (float *)0x3e088889;
        puStack_1c = (undefined1 *)0x0;
        puStack_20 = (undefined1 *)0x2b;
        iStack_24 = 0x66bb88;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      FUN_00661e90();
      param_1[0x187] = 3;
    }
    return;
  case 0x38:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x3e088889;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x2c;
      iStack_24 = 0x65e4f5;
      FUN_00aa4080();
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
                    /* WARNING: Could not recover jumptable at 0x0065e526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x39:
    FUN_0065e540();
    return;
  case 0x3b:
    FUN_0066bbb0();
    return;
  case 0x3c:
    FUN_00665030();
    return;
  case 0x3d:
    FUN_00672170();
    return;
  case 0x3e:
    FUN_006724c0();
    return;
  case 0x3f:
    FUN_00672630();
    return;
  case 0x40:
    FUN_00672860();
    return;
  case 0x41:
    FUN_006729f0();
    return;
  case 0x42:
    FUN_00672ce0();
    return;
  case 0x43:
    FUN_00672f50();
    return;
  case 0x44:
    FUN_006731b0();
    return;
  case 0x45:
    FUN_00673310();
    return;
  case 0x46:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x3e4ccccd;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x5;
      iStack_24 = 0x673482;
      FUN_00aa4120();
      FUN_00671ed0();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x41f00000;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    fVar12 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]);
    if (fVar12 - (float)param_1[0x244] <= 0.0) {
      FUN_00671fb0();
      if (param_1[0x301] != 0) {
        FUN_006686b0();
        param_1[0x2a] = 0;
        return;
      }
      FUN_006686b0();
      param_1[0x2a] = 0;
    }
    return;
  case 0x47:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x3e4ccccd;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x83;
      iStack_24 = 0x673558;
      FUN_00aa4120();
      FUN_00671ed0();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x41f00000;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    fVar12 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]);
    if (fVar12 - (float)param_1[0x244] <= 0.0) {
      FUN_00671fb0();
      if (param_1[0x301] != 0) {
        FUN_006686b0();
        return;
      }
      FUN_006686b0();
    }
    return;
  case 0x48:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
      param_1[0x248] = 0x40000000;
      param_1[0x249] = 0x42700000;
    }
    else if (param_1[0x187] == 1) {
      if ((param_1[0x1af] == 0) &&
         (fVar12 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668,
         param_1[0x248] = (int)fVar12, fVar12 < 0.0)) {
        param_1[0x1af] = 1;
      }
      fVar12 = (float)param_1[0x249] - (float)param_1[0x244];
      param_1[0x249] = (int)fVar12;
      if ((fVar12 < 0.0 != (fVar12 == 0.0)) && (iVar3 = thunk_FUN_00e58ed0(), iVar3 == 0)) {
        FUN_00a805f0();
        return;
      }
    }
    return;
  case 0x4f:
    FUN_006773b0();
    return;
  case 0x50:
    FUN_00668060();
    return;
  case 0x51:
    FUN_0066f700();
    return;
  case 0x52:
    FUN_00668200();
    return;
  case 0x53:
    FUN_0066f960();
    return;
  case 0x54:
    FUN_00661180();
    return;
  case 0x55:
    FUN_0065d0b0();
    return;
  case 0x56:
    FUN_0065d220();
    return;
  case 0x57:
    FUN_0067b130();
    return;
  case 0x58:
    FUN_0065d2a0();
    return;
  case 0x59:
    FUN_00677710();
    return;
  case 0x5a:
    iVar3 = param_1[0x187];
    if (iVar3 == 0) {
      FUN_00aa9280();
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
      DAT_01dd0814 = (DAT_01dd0814 * 0x19660d + 0x3c6ef35f) * 0x19660d + 0x3c6ef35f;
      pfStack_18 = (float *)0x66859f;
      iVar3 = FUN_006616d0();
      if (iVar3 == 0) {
        return;
      }
      FUN_008e5c50();
                    /* WARNING: Could not recover jumptable at 0x006685c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    pfStack_18 = (float *)0x668616;
    FUN_00ac80a0();
    puStack_1c = (undefined1 *)0x66863a;
    pfStack_18 = (float *)(param_1 + 600);
    FUN_0065cbf0();
    fVar12 = (float)param_1[600] - (float)param_1[0x10];
    fVar12 = ((float)param_1[0x25a] - (float)param_1[0x12]) *
             ((float)param_1[0x25a] - (float)param_1[0x12]) + fVar12 * fVar12;
    if (fVar12 < 2.25 != (fVar12 == 2.25)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = *(int *)(param_1[0x1d9] + 0x110);
      FUN_008e5c50();
    }
    return;
  case 0x5b:
    FUN_00677b50();
    return;
  case 0x5c:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    return;
  case 0x5d:
    FUN_00667300();
    return;
  case 0x5e:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    return;
  case 0x5f:
    FUN_00667360();
    return;
  case 0x60:
    FUN_006847e0();
    return;
  case 0x61:
    FUN_00684bc0();
    return;
  case 0x62:
    FUN_00686c30();
    return;
  case 99:
    FUN_00665ea0();
    return;
  case 100:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x3eaaaaab;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x5c;
      iStack_24 = 0x65ef52;
      FUN_00aa4120();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    FUN_00ac80a0();
    return;
  case 0x65:
    FUN_00665fe0();
    return;
  case 0x66:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x3f2aaaab;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x5e;
      iStack_24 = 0x65efe2;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_0065cbf0();
    FUN_00ac80a0();
    return;
  case 0x67:
    FUN_00666120();
    return;
  case 0x68:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x3eaaaaab;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x60;
      iStack_24 = 0x65f085;
      FUN_00aa4080();
      FUN_00a8d280();
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
                    /* WARNING: Could not recover jumptable at 0x0065f0bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x69:
    FUN_00666280();
    return;
  case 0x6a:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x3eaaaaab;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x62;
      iStack_24 = 0x65f115;
      FUN_00aa4080();
      FUN_00a8d280();
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
                    /* WARNING: Could not recover jumptable at 0x0065f14d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x6b:
    FUN_006663e0();
    return;
  case 0x6c:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x3eaaaaab;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x64;
      iStack_24 = 0x65f1b5;
      FUN_00aa4080();
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
                    /* WARNING: Could not recover jumptable at 0x0065f1e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x6d:
    FUN_0066d150();
    return;
  case 0x6e:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x3eaaaaab;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x66;
      iStack_24 = 0x66d375;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar3 = FUN_00a8c760();
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x220))();
    }
    iVar3 = FUN_00a94ce0();
    if (iVar3 != 0) {
      FUN_006686b0();
    }
    return;
  case 0x6f:
    FUN_00666540();
    return;
  case 0x70:
    if (param_1[0x187] == 0) {
      pfStack_18 = (float *)0x3eaaaaab;
      puStack_1c = (undefined1 *)0x0;
      puStack_20 = (undefined1 *)0x68;
      iStack_24 = 0x65f265;
      FUN_00aa4080();
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
                    /* WARNING: Could not recover jumptable at 0x0065f296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x71:
    FUN_006666a0();
    return;
  case 0x72:
    FUN_0065f2c0();
    return;
  case 0x7c:
    pfStack_18 = (float *)0x6673c2;
    puVar4 = (undefined1 *)FUN_00a81330();
    iVar3 = 0;
    if (puVar4 != (undefined1 *)0x0) {
      pfStack_18 = (float *)0x6673d1;
      iVar3 = FUN_00a7c8a0();
    }
    if (param_1[0x187] == 0) {
      if (iVar3 == 0) {
        param_1[0x462] = 2;
        param_1[0x128] = 3;
        pfStack_18 = (float *)0x667410;
        FUN_009f8b10();
        param_1[0x45d] = param_1[0x45d] & 0xfffbffdf;
        pfStack_18 = (float *)0x667425;
        FUN_00a7c950();
        pfStack_18 = (float *)0x667431;
        (**(code **)(*param_1 + 0x34c))();
        param_1[0x1bb] = 1;
      }
      param_1[0x14] = *(int *)(iVar3 + 0x50);
      param_1[0x15] = *(int *)(iVar3 + 0x54);
      param_1[0x16] = *(int *)(iVar3 + 0x58);
      param_1[0x17] = *(int *)(iVar3 + 0x5c);
      pfStack_18 = (float *)0x3f800000;
      puStack_1c = (undefined1 *)0xbf800000;
      puStack_20 = (undefined1 *)0x8000000;
      iStack_24 = 0x3f800000;
      uStack_28 = 0x3e4ccccd;
      uStack_2c = 0;
      uStack_34 = 0xa2;
      uStack_38 = 0x667489;
      puStack_30 = puVar4;
      FUN_00aa4520();
      pfStack_18 = (float *)0x667490;
      FUN_00a92f90();
      pfStack_18 = (float *)0x667499;
      iVar3 = FUN_00e26e90();
      if (iVar3 == 0) {
        fVar10 = (float10)-1.0;
      }
      else {
        pfStack_18 = (float *)0x0;
        puStack_1c = &LAB_006674b2;
        fVar10 = (float10)FUN_00e36970();
      }
      pfStack_18 = (float *)0x6674bd;
      FUN_00a92f90();
      pfStack_18 = (float *)0x6674c6;
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        puStack_1c = (undefined1 *)0x0;
        puStack_20 = &LAB_006674df;
        pfStack_18 = (float *)(float)fVar10;
        Animation::Motion::Unit::setCurrentTime();
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    pfStack_18 = (float *)0x3f800000;
    puStack_1c = (undefined1 *)0x3f800000;
    puStack_20 = (undefined1 *)0x667500;
    FUN_00ac80a0();
    pfStack_18 = (float *)0x0;
    puStack_1c = (undefined1 *)0x667509;
    iVar3 = FUN_00a94ce0();
    if (iVar3 != 0) {
      param_1[0x462] = 2;
      param_1[0x128] = 3;
      pfStack_18 = (float *)0x667528;
      FUN_009f8b10();
      param_1[0x45d] = param_1[0x45d] & 0xfffbffdf;
      pfStack_18 = (float *)0x66753d;
      FUN_00a7c950();
      pfStack_18 = (float *)0x667549;
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x1bb] = 1;
    }
    return;
  case 0xa4:
    FUN_006754a0();
    return;
  case 0xa5:
    FUN_0066d3d0();
    return;
  case 0xa6:
    FUN_00675650();
    return;
  case 0xa7:
    FUN_00675820();
    return;
  case 0xa8:
    iVar3 = param_1[0x187];
    if (iVar3 == 0) {
      FUN_00664230();
      FUN_00662af0();
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      iStack_24 = param_1[0x555];
      pfStack_18 = (float *)0x3f800000;
      puStack_1c = (undefined1 *)0x3dcccccd;
      puStack_20 = (undefined1 *)0x0;
      uStack_28 = 0x675b63;
      FUN_00aa4120();
      FUN_00671ed0();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42400000;
      param_1[0x139] = 1;
    }
    else if (iVar3 != 1) {
      if (iVar3 != 2) {
        return;
      }
      FUN_00ac80a0();
      FUN_00a8ec30();
      fVar10 = (float10)FUN_00ddba30();
      iVar3 = (**(code **)(*param_1 + 0x84))();
      param_1[0x25] = (int)(((float)fVar10 - *(float *)(iVar3 + 4)) * 0.15 + *(float *)(iVar3 + 4));
      fVar12 = (float)param_1[0x2a4];
      if (NAN(fVar12) || 400.0 < fVar12 == (fVar12 == 400.0)) {
        return;
      }
      FUN_00a805f0();
      return;
    }
    FUN_00ac80a0();
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar3 = FUN_00a94ce0();
    if ((iVar3 != 0) || ((float)param_1[0x248] <= 0.0)) {
      FUN_00671fb0();
      if (param_1[0x301] != 0) {
        FUN_006686b0();
        return;
      }
      FUN_006686b0();
    }
    return;
  case 0xa9:
    FUN_00675c00();
    return;
  case 0xaa:
    FUN_00675ed0();
    return;
  case 0xab:
    switch(param_1[0x187]) {
    case 0:
      FUN_00664230();
      FUN_00662af0();
      (**(code **)(*param_1 + 200))();
      pfStack_18 = (float *)0x8000000;
      puStack_1c = (undefined1 *)0x3f800000;
      puStack_20 = (undefined1 *)0x3dcccccd;
      iStack_24 = 0;
      uStack_28 = 0x88;
      uStack_2c = 0x6767cd;
      FUN_00aa4080();
      (**(code **)(*param_1 + 0x1f8))();
      param_1[0x225] = 0x3d75c28f;
      param_1[0x288] = 1;
      param_1[0x289] = 0x41200000;
      if (param_1[0x1d9] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      if (param_1[0x558] != 0) {
        FUN_0065f310();
      }
      param_1[0x187] = param_1[0x187] + 1;
    case 1:
      iVar3 = FUN_00a94ce0();
      if (iVar3 != 0) {
        pfStack_18 = (float *)0x3f800000;
        puStack_1c = (undefined1 *)0x3e4ccccd;
        puStack_20 = (undefined1 *)0x0;
        iStack_24 = 0x2e;
        uStack_28 = 0x676882;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
      }
      FUN_00ac80a0();
      return;
    case 2:
      FUN_00ac80a0();
      iVar3 = (**(code **)(*param_1 + 800))();
      if (iVar3 != 0) {
        pfStack_18 = (float *)0x8000000;
        puStack_1c = (undefined1 *)0x3f800000;
        puStack_20 = (undefined1 *)0x0;
        iStack_24 = 0;
        uStack_28 = 0x2f;
        uStack_2c = 0x6768fb;
        FUN_00aa4120();
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 3:
      FUN_00ac80a0();
      iVar3 = FUN_00a94ce0();
      if (iVar3 != 0) {
        pfStack_18 = (float *)0x3f800000;
        puStack_1c = (undefined1 *)0x3ecccccd;
        puStack_20 = (undefined1 *)0x0;
        if (param_1[0x554] < 3) {
          iStack_24 = 0x2b;
        }
        else {
          iStack_24 = 0x86;
        }
        uStack_28 = 0x676965;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = (int)((float)param_1[0x585] * 60.0);
        return;
      }
      break;
    case 4:
      FUN_00ac80a0();
      fVar12 = (float)param_1[0x248];
      if ((!NAN(fVar12) && 0.0 < fVar12 != (fVar12 == 0.0)) &&
         (fVar12 = (float)param_1[0x248], param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]),
         fVar12 - (float)param_1[0x244] < 0.0)) {
        FUN_00671ed0();
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = 0x42280000;
        param_1[0x139] = 1;
        return;
      }
      break;
    case 5:
      FUN_00ac80a0();
      fVar12 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]);
      if (fVar12 - (float)param_1[0x244] <= 0.0) {
        FUN_00671fb0();
        FUN_0066e8e0();
        return;
      }
    }
    return;
  case 0xac:
    FUN_00676a50();
    return;
  case 0xad:
    FUN_00693cf0();
    return;
  case 0xae:
    FUN_00693f60();
    return;
  case 0xb7:
    if (param_1[0x187] == 0) {
      ppuStack_44 = (undefined1 **)0x3f800000;
      ppuStack_48 = (undefined1 **)0xbf800000;
      ppuStack_4c = (undefined1 **)0x0;
      uStack_50 = 0x3f800000;
      uStack_54 = 0x3e4ccccd;
      uStack_58 = 0;
      fStack_5c = 1.12104e-44;
      uStack_60 = 0x677e47;
      FUN_00aa4120();
      param_1[0x187] = param_1[0x187] + 1;
      ppuStack_44 = (undefined1 **)(param_1 + 0x10);
      ppuStack_48 = (undefined1 **)0x677e58;
      FUN_00a8d710();
      param_1[0x4d9] = 0;
      param_1[0x4da] = -1;
      param_1[0x45d] = param_1[0x45d] | 0x100;
      param_1[0x45d] = param_1[0x45d] & 0xffdfffff;
    }
    else if (param_1[0x187] == 1) {
      ppuStack_44 = (undefined1 **)0x3f800000;
      ppuStack_48 = (undefined1 **)0x3f800000;
      ppuStack_4c = (undefined1 **)0x677d53;
      FUN_00ac80a0();
      puStack_3c = (undefined1 *)0x0;
      ppuStack_44 = &puStack_3c;
      uStack_38 = 0;
      uStack_34 = 0;
      ppuStack_48 = (undefined1 **)0x677d6d;
      FUN_00a8d790();
      ppuStack_44 = (undefined1 **)(~param_1[0x45d] & 1);
      ppuStack_48 = (undefined1 **)0x3f000000;
      ppuStack_4c = (undefined1 **)0x677d8a;
      FUN_00a97e60();
      puStack_30 = puStack_3c;
      ppuStack_4c = &puStack_30;
      uStack_2c = uStack_38;
      uStack_28 = uStack_34;
      iStack_24 = 0x3f800000;
      ppuStack_44 = (undefined1 **)0x3d567750;
      ppuStack_48 = (undefined1 **)0x3dcccccd;
      uStack_50 = 0x677dca;
      FUN_0065cbf0();
      ppuStack_44 = (undefined1 **)0x8;
      puStack_20 = puStack_3c;
      ppuStack_48 = &puStack_20;
      puStack_1c = (undefined1 *)uStack_38;
      pfStack_18 = (float *)uStack_34;
      ppuStack_4c = (undefined1 **)0x677df8;
      iVar3 = FUN_00677c10();
      if (iVar3 == 0) {
        param_1[0x45d] = param_1[0x45d] | 0x80;
        return;
      }
      param_1[0x45d] = param_1[0x45d] & 0xffffff7f;
      return;
    }
    return;
  case 0xb8:
    FUN_00669770();
    return;
  case 0xb9:
    FUN_0066afc0();
    return;
  case 0xba:
    break;
  case 0xbb:
    param_1[0x139] = 1;
    if (param_1[0x187] == 0) {
      FUN_00ac8e10();
      pfStack_18 = (float *)0x663fac;
      FUN_00c4d1a0();
      pcVar1 = *(code **)(*param_1 + 0x344);
      param_1[0xd9] = param_1[0xd9] & 0xffefffff;
      pfStack_18 = (float *)0xa;
      param_1[0x1af] = 1;
      param_1[0x362] = 1;
      puStack_1c = (undefined1 *)0x663fd3;
      (*pcVar1)();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    pfStack_18 = (float *)0x663fec;
    FUN_00ac80a0();
    fVar10 = (float10)FUN_00ac8f80();
    fVar12 = (float)(fVar10 - (float10)0.011111111);
    if (fVar10 - (float10)0.011111111 < (float10)0) {
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a805f0();
      }
      fVar12 = 0.0;
      (**(code **)(*param_1 + 0x20))();
      FUN_0065e390();
      FUN_009fdde0();
    }
    FUN_00ac8fd0();
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      iVar8 = 0;
      iVar7 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        do {
          *(float *)(*(int *)(iVar3 + 800) + 0x1c + iVar8) = fVar12;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x70;
        } while (iVar7 < *(short *)(iVar3 + 0x324));
      }
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      iVar8 = 0;
      iVar7 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        do {
          *(float *)(*(int *)(iVar3 + 800) + 0x1c + iVar8) = fVar12;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x70;
        } while (iVar7 < *(short *)(iVar3 + 0x324));
      }
    }
    return;
  case 0xbc:
    FUN_00676b80();
    return;
  case 0xbd:
    FUN_00665b70();
    return;
  case 0xbf:
    FUN_0067a160();
    return;
  case 0xc0:
    FUN_0066c8e0();
    return;
  }
  uVar9 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar11 = &DAT_01b35b90;
    (**(code **)(*piVar5 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar11);
    uVar9 = -(uint)(iVar3 != 0) & (uint)piVar5;
  }
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    if (uVar9 != 0) {
      uVar6 = FUN_009f8b40();
      FUN_00ac8a80(uVar6);
    }
    FUN_00aa4080(0xac,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    param_1[0x362] = 1;
    FUN_00a900b0(1);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(10,3,1);
    FUN_00a7c950();
    iVar3 = FUN_00a82090("QTEKnife",0x11504,0);
    if ((iVar3 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
      uVar6 = FUN_00a7c7f0();
      FUN_00a7c960(uVar6);
      FUN_00ac8ad0(1,param_1[0x13c],iVar3,0,0,0xffffffff);
      *(uint *)(iVar7 + 0x364) = *(uint *)(iVar7 + 0x364) & 0xfffffffd;
      FUN_00aa4520(0xaf,param_1[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) goto LAB_0066b2d0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      FUN_00a81330();
      piVar5 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar5 + 100))();
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00ac8ab0();
    FUN_006686b0(0xbb);
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
LAB_0066b2d0:
  bVar2 = false;
  if (((uVar9 != 0) && (iVar3 = FUN_00a8c760(0x1c), iVar3 == 0)) &&
     (iVar3 = FUN_00a8cbe0(0x100005), iVar3 != 0)) {
    FUN_00a8ce90(&fStack_70,&uStack_60);
    fVar10 = (float10)FUN_00ddba30(*(float *)(uVar9 + 0x94) + fStack_5c);
    param_1[0x25] = (int)(float)fVar10;
    D3DXMatrixRotationY(&uStack_50,*(undefined4 *)(uVar9 + 0x94));
    D3DXVec3TransformNormal(&stack0xffffff88,&stack0xffffff88,&uStack_58);
    bVar2 = true;
    param_1[0x14] = (int)(*(float *)(uVar9 + 0x50) + fStack_70);
    param_1[0x15] = (int)(*(float *)(uVar9 + 0x54) + fStack_6c);
    param_1[0x16] = (int)(*(float *)(uVar9 + 0x58) + fStack_68);
    param_1[0x17] = (int)(*(float *)(uVar9 + 0x5c) + fStack_64);
  }
  FUN_0065d590(!bVar2);
  return;
}

// 0067BAF0  FUN_0067baf0  size=643  [between]
void __fastcall FUN_0067baf0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  param_1[0x449] = param_1[0x2a4];
  param_1[0x448] = param_1[0x2a1];
  if (((param_1[0x128] == 5) && ((param_1[0x45d] & 0x80000U) == 0)) &&
     (iVar3 = FUN_00665400(), iVar3 == 0)) {
    iVar3 = FUN_00a81330();
    if ((iVar3 == 0) || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) goto LAB_0067bb73;
  }
  else {
    if ((DAT_01bea094 & 0x20000) == 0) goto LAB_0067bb73;
    piVar4 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar4 + 0x28))(1);
    if (iVar3 == 0) goto LAB_0067bb73;
    iVar3 = FUN_00a7c8a0();
  }
  param_1[0x448] = iVar3;
LAB_0067bb73:
  iVar3 = param_1[0x448];
  if (iVar3 != 0) {
    param_1[0x44c] = *(int *)(iVar3 + 0x40);
    param_1[0x44d] = *(int *)(iVar3 + 0x44);
    param_1[0x44e] = *(int *)(iVar3 + 0x48);
    param_1[0x44f] = *(int *)(iVar3 + 0x4c);
    fVar1 = *(float *)(param_1[0x448] + 0x40) - (float)param_1[0x10];
    fVar2 = *(float *)(param_1[0x448] + 0x48) - (float)param_1[0x12];
    param_1[0x449] = (int)(fVar2 * fVar2 + fVar1 * fVar1);
  }
  if ((param_1[0x128] != 5) && (param_1[0x128] != 0x10)) {
    FUN_00670f50();
    iVar3 = FUN_00a8d400(param_1 + 0x44c);
    if ((param_1[0x5c0] != 0) &&
       ((iVar3 != 0 && (*(int *)(param_1[0x5c0] + 0xc) != *(int *)(iVar3 + 0xc))))) {
      param_1[0x5c1] = 0;
    }
    param_1[0x5c0] = iVar3;
  }
  iVar3 = (**(code **)(*param_1 + 0x200))();
  if (iVar3 != 0) {
    FUN_0066dc90();
  }
  fVar1 = (float)param_1[0x452];
  param_1[0x452] = (int)((float)param_1[0x244] + fVar1);
  if (90.0 < (float)param_1[0x244] + fVar1) {
    param_1[0x452] = 0;
    param_1[0x453] = 0;
  }
  if ((param_1[0x45d] & 0x20000000U) == 0) {
    if ((param_1[0x45d] & 0x10000000U) != 0) {
      fVar1 = (float)param_1[0x583] - (float)param_1[0x244];
      param_1[0x583] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        (**(code **)(*param_1 + 0x110))(0);
      }
    }
  }
  else {
    fVar1 = (float)param_1[0x583] - (float)param_1[0x244];
    param_1[0x583] = (int)fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      FUN_006677e0();
    }
  }
  if ((param_1[0x45d] & 0x800U) != 0) {
    FUN_006686b0(param_1[0x441]);
    param_1[0x45d] = param_1[0x45d] & 0xfffff7ff;
  }
  iVar3 = FUN_00ac4770();
  if (iVar3 == 0) {
    FUN_0067a660();
  }
  FUN_0067b580();
  if (param_1[0x128] != 0x10) {
    FUN_00668ef0();
  }
  iVar3 = FUN_00a82ec0(4);
  if (((iVar3 != 0) && ((param_1[0x2c0] & 0x400U) != 0)) &&
     (fVar5 = (float10)FUN_00c3c970(), (float10)75.0 <= fVar5)) {
    lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
              (param_1[0x13c],0,param_1[0x360],4);
    FUN_00a88b50(1,0);
    param_1[0x34a] = 1;
  }
  return;
}

// 0067BD80  Em8040::vf4C  size=16  [class]
void Em8040::vf4C(void)

{
  BehaviorEmBase::vf4C();
  FUN_0067baf0();
  return;
}

// 00AB4BB0  Em8040::vf04  size=6  [class]
undefined * Em8040::vf04(void)

{
  return &DAT_01b35590;
}

// 00AB4BC0  Em8040::vf140  size=7  [class]
float10 Em8040::vf140(void)

{
  return (float10)4.0;
}

// 00AB4BD0  Em8040::vf144  size=7  [class]
float10 Em8040::vf144(void)

{
  return (float10)4.1;
}

// 00AB4BE0  FUN_00ab4be0  size=143  [callgraph]
void FUN_00ab4be0(void)

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
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00ABA390  Em8040::vf00  size=30  [class]
undefined4 __thiscall Em8040::vf00(undefined4 param_1,byte param_2)

{
  FUN_00ab4be0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

