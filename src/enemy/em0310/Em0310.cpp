// src/enemy/em0310/Em0310.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057B880..00AB6FC0, 218 functions

#include "mgrr.h"
#include "Em0310.h"

// 0057B880  FUN_0057b880  size=71  [callgraph]
void __thiscall FUN_0057b880(int param_1,undefined4 param_2)

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

// 0057BAF0  FUN_0057baf0  size=52  [callgraph]
void __thiscall FUN_0057baf0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1570) = *param_2;
  *(undefined4 *)(param_1 + 0x1574) = param_2[1];
  *(undefined4 *)(param_1 + 0x1578) = param_2[2];
  *(undefined4 *)(param_1 + 0x157c) = param_2[3];
  *(undefined4 *)(param_1 + 0x15d4) = param_3;
  return;
}

// 0057BBC0  Em0310::vf50  size=32  [class]
void __fastcall Em0310::vf50(int param_1)

{
  switchD_0080dbae::default();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf50();
  return;
}

// 0057BBE0  FUN_0057bbe0  size=56  [between]
void __thiscall FUN_0057bbe0(int param_1,int param_2)

{
  if (param_2 == 0) {
    DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
  }
  else {
    DAT_01bea090 = DAT_01bea090 | 0x8000;
  }
  FUN_00cad200(param_2);
  *(int *)(param_1 + 0x19a8) = param_2;
  return;
}

// 0057BC20  Em0310::vf228  size=35  [class]
undefined4 __fastcall Em0310::vf228(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if ((iVar1 != 0x30008) && ((iVar1 < 0x50000 || (0x50002 < iVar1)))) {
    uVar2 = BehaviorEmBase::vf228();
    return uVar2;
  }
  return 0;
}

// 0057BC50  Em0310::vf268  size=5  [class]
undefined4 Em0310::vf268(void)

{
  return 0;
}

// 0057BC60  Em0310::vf108  size=13  [class]
void __fastcall Em0310::vf108(int *param_1)

{
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0057BC70  FUN_0057bc70  size=90  [between]
void __fastcall FUN_0057bc70(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0057bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x0057bcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x34))();
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0057bc9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 100))();
    return;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x0057bcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x6c))();
    return;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0057bcba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x754) + 0x74))();
    return;
  }
}

// 0057BCE0  FUN_0057bce0  size=170  [between]
void __thiscall FUN_0057bce0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00ac4780();
  switch(uVar1) {
  case 0:
    (**(code **)(**(int **)(param_1 + 0x754) + 0x5c))(param_2);
    FUN_00fdbc60();
    return;
  default:
                    /* WARNING: Could not recover jumptable at 0x0057bd88. Too many branches */
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

// 0057BDC0  FUN_0057bdc0  size=150  [between]
float10 __thiscall FUN_0057bdc0(int param_1,undefined4 param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  if (param_3 != 0.0) {
    fVar2 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(param_1 + 0x94)));
    fVar2 = fVar2 * (float10)param_3 * (float10)*(float *)(param_1 + 0x910);
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

// 0057BE60  FUN_0057be60  size=36  [between]
void __thiscall FUN_0057be60(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0057bdc0(*(int *)(param_1 + 0xa84) + 0x40,param_2,param_3);
  return;
}

// 0057BE90  FUN_0057be90  size=37  [between]
float10 __thiscall FUN_0057be90(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 0057BEC0  FUN_0057bec0  size=40  [between]
float10 __fastcall FUN_0057bec0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 0057C080  FUN_0057c080  size=32  [between]
void FUN_0057c080(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    FUN_00e36b50(0,8,param_1);
  }
  return;
}

// 0057C0C0  FUN_0057c0c0  size=33  [between]
undefined4 FUN_0057c0c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (((iVar1 != 0x10000) && (iVar1 != 0x10009)) && (iVar1 != 0x70000)) {
    return 0;
  }
  return 1;
}

// 0057C120  FUN_0057c120  size=39  [between]
float10 __fastcall FUN_0057c120(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac8120();
  if (iVar1 != 0) {
    iVar1 = FUN_00bda170();
    if (iVar1 == 0) {
      return (float10)*(float *)(param_1 + 0x1934);
    }
  }
  return (float10)*(float *)(param_1 + 0x1930);
}

// 0057C150  FUN_0057c150  size=39  [between]
float10 __fastcall FUN_0057c150(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac8120();
  if (iVar1 != 0) {
    iVar1 = FUN_00bda170();
    if (iVar1 == 0) {
      return (float10)*(float *)(param_1 + 0x193c);
    }
  }
  return (float10)*(float *)(param_1 + 0x1938);
}

// 0057C2A0  FUN_0057c2a0  size=64  [between]
void __fastcall FUN_0057c2a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a947e0(0,*(undefined4 *)(param_1 + 0x920),0,0);
    }
  }
  return;
}

// 0057C450  FUN_0057c450  size=620  [between]
void __fastcall FUN_0057c450(int *param_1)

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
  
  switch(param_1[0x187]) {
  case 0:
    iVar1 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar1 != 0) {
      FUN_00a5dcc0(iVar1);
      FUN_00aa4080(7,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 1:
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(8,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
  case 2:
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
      FUN_00aa4080(9,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(5,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  return;
}

// 0057C6E0  FUN_0057c6e0  size=89  [between]
void __fastcall FUN_0057c6e0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0057C7B0  FUN_0057c7b0  size=45  [between]
void FUN_0057c7b0(void)

{
  FUN_00aa4080(0x79,4,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
  return;
}

// 0057C7E0  FUN_0057c7e0  size=84  [between]
void __fastcall FUN_0057c7e0(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x1190)) {
    if (*(int *)(param_1 + 0x19b0) == 0) {
      FUN_0093b4a0("P470_HINT1",0,0);
    }
    else if (*(int *)(param_1 + 0x19b0) == 1) {
      FUN_0093b4a0("P470_HINT2",0,0);
      *(int *)(param_1 + 0x19b0) = *(int *)(param_1 + 0x19b0) + 1;
      return;
    }
  }
  *(int *)(param_1 + 0x19b0) = *(int *)(param_1 + 0x19b0) + 1;
  return;
}

// 0057C840  FUN_0057c840  size=260  [between]
void __thiscall FUN_0057c840(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  if (param_2 < 0) {
    FUN_0057c840(0,param_3);
    FUN_0057c840(1,param_3);
    param_2 = 2;
  }
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  iVar2 = (int)*(short *)(iVar1 + 0x324);
  iVar5 = 0;
  if (0 < iVar2) {
    local_4 = 0;
    do {
      if (((-1 < iVar5) && (iVar5 < iVar2)) && (iVar2 = *(int *)(iVar1 + 800) + local_4, iVar2 != 0)
         ) {
        iVar3 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x40),
                             *(undefined4 *)(param_2 * 4 + 0x188153c));
        if (iVar3 != 0) {
          iVar3 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x40),&DAT_0163ef3c);
          if (iVar3 != 0) {
            iVar4 = FUN_00a4a2d0();
            if ((iVar4 == 0) || (param_3 < 1)) {
              if (*(char *)(iVar3 + 4) == '0') {
                if (param_3 == 0) {
                  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
                }
                else {
LAB_0057c923:
                  *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) & 0xfffffffe;
                }
              }
              else if (*(char *)(iVar3 + 4) == '1') {
                if (param_3 != 1) goto LAB_0057c923;
                *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
              }
            }
          }
        }
      }
      iVar2 = (int)*(short *)(iVar1 + 0x324);
      local_4 = local_4 + 0x70;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}

// 0057C950  FUN_0057c950  size=105  [between]
void __fastcall FUN_0057c950(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 0x1270);
  iVar3 = 6;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x20))();
      }
      FUN_00a805f0();
    }
    *puVar4 = 0;
    puVar4 = puVar4 + 0x38;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_1 + 0x16f8) = 0;
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x16f4) = 0;
  return;
}

// 0057C9C0  FUN_0057c9c0  size=50  [between]
void __fastcall FUN_0057c9c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x1280);
  iVar2 = 6;
  do {
    puVar1[-2] = 0;
    FUN_00c52700(*puVar1,0);
    puVar1 = puVar1 + 0x38;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0057CA00  FUN_0057ca00  size=44  [between]
void __thiscall FUN_0057ca00(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1184) == 0) {
    *(undefined4 *)(param_1 + 0x1188) = 0x41400000;
    *(undefined4 *)(param_1 + 0x1184) = 1;
    *(undefined4 *)(param_1 + 0x118c) = param_2;
  }
  return;
}

// 0057CA90  FUN_0057ca90  size=57  [between]
void __fastcall FUN_0057ca90(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x11c0);
  do {
    if (uVar1 < 6) {
      (**(code **)(*piVar2 + 8))(0,0,0);
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x38;
  } while ((int)uVar1 < 6);
  return;
}

// 0057CB80  FUN_0057cb80  size=126  [between]
void __thiscall
FUN_0057cb80(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  float local_14;
  
  *param_2 = 0.0;
  param_2[1] = 1.4;
  param_2[2] = 0.6;
  param_2[3] = local_14;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = local_14;
  if (param_5 != 0) {
    iVar1 = FUN_00a12210(0);
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    D3DXVec3TransformNormal(param_2,param_2,iVar1 + 0x10);
    *param_2 = *param_2 + *(float *)(iVar1 + 0x40);
    param_2[1] = *(float *)(iVar1 + 0x44) + param_2[1];
    param_2[2] = *(float *)(iVar1 + 0x48) + param_2[2];
  }
  return;
}

// 0057D010  FUN_0057d010  size=198  [between]
undefined4 __fastcall FUN_0057d010(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00dde300(0,0x3f800000);
  iVar2 = FUN_00a8eea0();
  iVar3 = FUN_00a8eeb0();
  if (2 < *(int *)(param_1 + 0x16f4)) {
    iVar2 = FUN_00ac8120();
    if ((iVar2 == 0) || (iVar2 = FUN_00bda170(), iVar2 != 0)) {
      fVar1 = *(float *)(param_1 + 0x1930);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x1934);
    }
    if ((float)fVar4 <= fVar1) {
      return 1;
    }
    return 0;
  }
  if (1.0 - *(float *)(param_1 + 0x18ec) < (float)iVar2 / (float)iVar3) {
    return 0;
  }
  if ((float)fVar4 <= *(float *)(param_1 + 0x18f0)) {
    return 1;
  }
  if (1 < *(int *)(param_1 + 0x16f4)) {
    return 0;
  }
  return 1;
}

// 0057D0E0  FUN_0057d0e0  size=191  [between]
void __fastcall FUN_0057d0e0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x33,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3da0d97c);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0057d19d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0057D620  Em0310::vf14C  size=35  [class]
undefined4 Em0310::vf14C(int param_1,int param_2)

{
  if ((param_2 != 0) && (((param_1 == 0x68 || (param_1 == 0x69)) || (param_1 == 0x6a)))) {
    return 1;
  }
  return 0;
}

// 0057D650  Em0310::vf158  size=5  [class]
undefined4 Em0310::vf158(void)

{
  return 0;
}

// 0057D6A0  FUN_0057d6a0  size=62  [between]
void __thiscall FUN_0057d6a0(int param_1,int param_2)

{
  short sVar1;
  
  *(int *)(param_1 + 0x1708) = *(int *)(param_1 + 0x1708) + 1;
  if ((param_2 != 0) || (2 < *(int *)(param_1 + 0x1708))) {
    sVar1 = FUN_00dde2d0(0,5);
    *(int *)(param_1 + 0x1704) = (int)sVar1;
    *(undefined4 *)(param_1 + 0x1708) = 0;
  }
  return;
}

// 0057D6E0  FUN_0057d6e0  size=154  [between]
void __fastcall FUN_0057d6e0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 local_8 [2];
  
  *(undefined4 *)(param_1 + 0x1178) = 0;
  if (*(int *)(param_1 + 0x16f4) < 3) {
    if (*(int *)(param_1 + 0x16f4) == 1) {
      *(uint *)(param_1 + 0x1178) = 4 - (uint)(*(int *)(param_1 + 0x16f8) != 0);
      return;
    }
  }
  else {
    iVar2 = 0;
    if ((*(int *)(param_1 + 0x1270) != 0) && (*(int *)(param_1 + 0x1350) != 0)) {
      local_8[0] = 2;
      iVar2 = 1;
    }
    if ((*(int *)(param_1 + 0x15f0) != 0) && (*(int *)(param_1 + 0x16d0) != 0)) {
      local_8[(short)iVar2] = 1;
      iVar2 = iVar2 + 1;
    }
    if ((short)iVar2 != 0) {
      sVar1 = FUN_00dde2d0(0,iVar2 + -1);
      *(undefined4 *)(param_1 + 0x1178) = local_8[sVar1];
    }
  }
  return;
}

// 0057D780  FUN_0057d780  size=103  [between]
void __thiscall
FUN_0057d780(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1178);
  if ((iVar1 < 0) || (4 < iVar1)) {
    FUN_00dd5650(&DAT_01641f9c,iVar1);
    iVar1 = 0;
  }
  *param_2 = (&DAT_01641f38)[iVar1 * 5];
  *param_3 = (&DAT_01641f3c)[iVar1 * 5];
  *param_4 = (&DAT_01641f40)[iVar1 * 5];
  *param_5 = (&DAT_01641f44)[iVar1 * 5];
  *param_6 = (&DAT_01641f48)[iVar1 * 5];
  return;
}

// 0057D7F0  FUN_0057d7f0  size=71  [between]
undefined4 FUN_0057d7f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8eea0();
  iVar2 = FUN_00a8eeb0();
  if ((float)iVar1 / (float)iVar2 < 0.1 != ((float)iVar1 / (float)iVar2 == 0.1)) {
    return 1;
  }
  return 0;
}

// 0057D840  FUN_0057d840  size=103  [between]
void __thiscall
FUN_0057d840(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1178);
  if ((iVar1 < 0) || (4 < iVar1)) {
    FUN_00dd5650(&DAT_01641f9c,iVar1);
    iVar1 = 0;
  }
  *param_2 = (&DAT_01641fd0)[iVar1 * 5];
  *param_3 = (&DAT_01641fd4)[iVar1 * 5];
  *param_4 = (&DAT_01641fd8)[iVar1 * 5];
  *param_5 = (&DAT_01641fdc)[iVar1 * 5];
  *param_6 = (&DAT_01641fe0)[iVar1 * 5];
  return;
}

// 0057D8C0  FUN_0057d8c0  size=233  [between]
void __fastcall FUN_0057d8c0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00a93090(2);
    FUN_00aa4080(0x98,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if (param_1[0x188] == 0) {
    iVar1 = FUN_00a8c760(10);
    if (iVar1 == 0) {
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
    }
    else {
      param_1[0x188] = param_1[0x188] + 1;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00a93090(6);
                    /* WARNING: Could not recover jumptable at 0x0057d9a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0057D9D0  FUN_0057d9d0  size=1  [between]
void FUN_0057d9d0(void)

{
  return;
}

// 0057D9E0  FUN_0057d9e0  size=1  [between]
void FUN_0057d9e0(void)

{
  return;
}

// 0057DA00  Em0310::setCutCrerateInfo  size=31  [class]
void Em0310::setCutCrerateInfo(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42310;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 0057DA20  FUN_0057da20  size=75  [between]
undefined4 __thiscall FUN_0057da20(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x19a4) == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    iVar1 = FUN_00a98220(param_2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x19ac) = *(undefined4 *)(param_2 + 0xec);
      FUN_00ac8d00(param_1,param_2,1);
    }
  }
  return 1;
}

// 0057DA70  FUN_0057da70  size=39  [between]
undefined4 __fastcall FUN_0057da70(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x1278);
  while ((piVar1[-2] == 0 || (*piVar1 == 0))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0x38;
    if (5 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// 0057DAA0  Em0310::vf33C  size=429  [class]
void __thiscall Em0310::vf33C(int param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint local_18 [6];
  
  param_3[6] = 0x42000;
  if ((-1 < (int)param_3[4]) ||
     (((~(*param_3 >> 0x1f) & 1) == 0 && ((-1 < (int)param_3[4] || (-1 < (int)param_3[2])))))) {
    param_3[6] = 0x20310;
    local_18[0] = 9;
    local_18[1] = 0x15;
    local_18[2] = 5;
    local_18[3] = 0x11;
    local_18[4] = 1;
    local_18[5] = 0xd;
    *(undefined4 *)(param_1 + 0x16f4) = 0;
    *(undefined4 *)(param_1 + 0x16fc) = 0;
    *(undefined4 *)(param_1 + 0x16f8) = 0;
    uVar1 = 0;
    puVar4 = (undefined4 *)(param_1 + 0x1350);
    do {
      uVar2 = local_18[uVar1];
      puVar4[-0x38] = 0;
      uVar3 = 0x80000000 >> ((byte)uVar2 & 0x1f);
      uVar2 = uVar2 >> 5;
      if (((param_3[uVar2 + 4] & uVar3) == 0) || ((param_3[uVar2 + 2] & uVar3) == 0)) {
        *(int *)(param_1 + 0x16f4) = *(int *)(param_1 + 0x16f4) + 1;
        if ((uVar1 & 1) == 0) {
          *(int *)(param_1 + 0x16f8) = *(int *)(param_1 + 0x16f8) + 1;
        }
        else {
          *(int *)(param_1 + 0x16fc) = *(int *)(param_1 + 0x16fc) + 1;
        }
        puVar4[-0x38] = 1;
      }
      uVar3 = 0x80000000 >> ((byte)local_18[uVar1 + 1] & 0x1f);
      uVar2 = local_18[uVar1 + 1] >> 5;
      *puVar4 = 0;
      if (((param_3[uVar2 + 4] & uVar3) == 0) || ((param_3[uVar2 + 2] & uVar3) == 0)) {
        *(int *)(param_1 + 0x16f4) = *(int *)(param_1 + 0x16f4) + 1;
        if ((uVar1 - 1 & 1) == 0) {
          *(int *)(param_1 + 0x16f8) = *(int *)(param_1 + 0x16f8) + 1;
        }
        else {
          *(int *)(param_1 + 0x16fc) = *(int *)(param_1 + 0x16fc) + 1;
        }
        *puVar4 = 1;
      }
      uVar3 = 0x80000000 >> ((byte)local_18[uVar1 + 2] & 0x1f);
      uVar2 = local_18[uVar1 + 2] >> 5;
      puVar4[0x38] = 0;
      if (((param_3[uVar2 + 4] & uVar3) == 0) || ((param_3[uVar2 + 2] & uVar3) == 0)) {
        *(int *)(param_1 + 0x16f4) = *(int *)(param_1 + 0x16f4) + 1;
        if ((uVar1 & 1) == 0) {
          *(int *)(param_1 + 0x16f8) = *(int *)(param_1 + 0x16f8) + 1;
        }
        else {
          *(int *)(param_1 + 0x16fc) = *(int *)(param_1 + 0x16fc) + 1;
        }
        puVar4[0x38] = 1;
      }
      uVar1 = uVar1 + 3;
      puVar4 = puVar4 + 0xa8;
    } while ((int)uVar1 < 6);
  }
  return;
}

// 0057DD00  FUN_0057dd00  size=61  [callgraph]
void __thiscall FUN_0057dd00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x1194);
  iVar3 = 4;
  do {
    iVar1 = FUN_00c51a30(*puVar2);
    if (iVar1 != 0) {
      FUN_00c52700(*puVar2,param_2);
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 0057DD40  FUN_0057dd40  size=38  [callgraph]
void __fastcall FUN_0057dd40(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x1180)) {
    FUN_00aa92c0(*(undefined4 *)(&DAT_01642034 + *(int *)(param_1 + 0x1180) * 4));
    *(undefined4 *)(param_1 + 0x1180) = 0xffffffff;
  }
  return;
}

// 0057DD70  FUN_0057dd70  size=47  [callgraph]
void __thiscall FUN_0057dd70(int param_1,float param_2)

{
  if (param_2 * 60.0 < *(float *)(param_1 + 0x1134)) {
    *(float *)(param_1 + 0x1134) = *(float *)(param_1 + 0x1134);
    return;
  }
  *(float *)(param_1 + 0x1134) = param_2 * 60.0;
  return;
}

// 0057DDA0  FUN_0057dda0  size=78  [callgraph]
int FUN_0057dda0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 == 0) &&
     ((iVar1 = FUN_00c19c30(2,0), iVar1 != 0 || (iVar1 = FUN_00c19c30(2,1), iVar1 != 0)))) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  return iVar1;
}

// 0057FAD0  Em0310::vf104  size=55  [class]
void __fastcall Em0310::vf104(int param_1)

{
  int iVar1;
  int *piVar2;
  
  Bh0064::vf104();
  if (*(int *)(param_1 + 0x1160) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0057fb03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 100))();
        return;
      }
    }
  }
  return;
}

// 0057FB10  Em0310::vf10C  size=91  [class]
void Em0310::vf10C(int param_1,int param_2)

{
  if (param_1 == 0x30400) {
    if (param_2 == 0) {
      FUN_00a81330();
      return;
    }
    if (param_2 == 1) {
      FUN_00a81330();
      return;
    }
  }
  else if (param_1 == 0x20313) {
    FUN_00a81330();
    return;
  }
  Bh0064::vf10C(param_1,param_2);
  return;
}

// 0057FB70  FUN_0057fb70  size=99  [between]
undefined4 FUN_0057fb70(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00a8cab0();
  if (((iVar1 != 0x10000) && (iVar1 != 0x10009)) && (iVar1 != 0x70000)) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x40000) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x40002) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 != 0x40003) {
          uVar2 = FUN_00a8cab0();
          if ((uVar2 & 0xffff0000) != 0x50000) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

// 0057FBE0  FUN_0057fbe0  size=473  [between]
undefined4 __fastcall FUN_0057fbe0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00a82090("Wp0400",0x30400,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x701,0xffffffff);
  }
  iVar1 = FUN_00a82090("Wp0400",0x30400,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a8c5f0(1,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x700,0xffffffff);
  }
  iVar1 = FUN_00a82090(&DAT_0163ef94,0x20313,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00ac8ad0(3,*(undefined4 *)(param_1 + 0x4f0),iVar1,0xffffffff,0xffffffff,0);
    FUN_00ac8ad0(4,*(undefined4 *)(param_1 + 0x4f0),iVar1,0,0,0);
    FUN_00ac8ad0(5,*(undefined4 *)(param_1 + 0x4f0),iVar1,1,1,0);
    FUN_00ac8ad0(6,*(undefined4 *)(param_1 + 0x4f0),iVar1,2,2,0);
    FUN_00ac8ad0(7,*(undefined4 *)(param_1 + 0x4f0),iVar1,3,3,0);
    FUN_00ac8ad0(8,*(undefined4 *)(param_1 + 0x4f0),iVar1,4,4,0);
    FUN_00ac8ad0(9,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,5,0);
    FUN_00ac8ad0(10,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x500,0x500,0);
    FUN_00ac94e0(&DAT_0163ef94);
    FUN_00ac94e0("head_DEC");
    *(undefined4 *)(param_1 + 0x1160) = 1;
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = FUN_00ac89d0();
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(iVar1 + 0x518) = uVar2;
    }
  }
  return 1;
}

// 0057FDC0  FUN_0057fdc0  size=5285  [between]
void __fastcall FUN_0057fdc0(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  FUN_00a929d0();
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x2b);
  FUN_00a8edf0(uVar1);
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
  uVar4 = 0x61;
  fVar3 = (float10)(*pcVar2)(0x61);
  uVar1 = FUN_00ac4780(uVar4,(float)fVar3);
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
  uVar1 = 0x62;
  fVar3 = (float10)(*pcVar2)(0x62);
  uVar1 = FUN_00ac4780(uVar1,uVar4,(float)fVar3);
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
  (*pcVar2)(99);
  FUN_00a8eeb0();
  uVar1 = FUN_00fdbc60();
  *(undefined4 *)(param_1 + 0x1710) = uVar1;
  *(undefined4 *)(param_1 + 0x170c) = uVar1;
  uVar1 = FUN_00fdbc60();
  *(undefined4 *)(param_1 + 0x1718) = uVar1;
  *(undefined4 *)(param_1 + 0x1714) = uVar1;
  uVar1 = FUN_00fdbc60();
  *(undefined4 *)(param_1 + 0x1720) = uVar1;
  *(undefined4 *)(param_1 + 0x171c) = uVar1;
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
  fVar3 = (float10)(*pcVar2)(0x32);
  *(float *)(param_1 + 0x1878) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x33);
  *(float *)(param_1 + 0x187c) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x36);
  *(float *)(param_1 + 0x1880) = (float)fVar3;
  uVar1 = FUN_0057bce0(0x37);
  *(undefined4 *)(param_1 + 0x1884) = uVar1;
  uVar1 = FUN_0057bce0(0x3a);
  *(undefined4 *)(param_1 + 0x1888) = uVar1;
  uVar1 = FUN_0057bce0(0x38);
  *(undefined4 *)(param_1 + 0x188c) = uVar1;
  uVar1 = FUN_0057bce0(0x3b);
  *(undefined4 *)(param_1 + 0x1890) = uVar1;
  uVar1 = FUN_0057bce0(0x34);
  *(undefined4 *)(param_1 + 0x18a4) = uVar1;
  uVar1 = FUN_0057bce0(0x35);
  *(undefined4 *)(param_1 + 0x18a8) = uVar1;
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
  fVar3 = (float10)(*pcVar2)(0x42);
  *(float *)(param_1 + 0x18ac) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x41);
  *(float *)(param_1 + 0x18b0) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x43);
  *(float *)(param_1 + 0x18b4) = (float)(fVar3 * (float10)60.0);
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
  fVar3 = (float10)(*pcVar2)(0x44);
  *(float *)(param_1 + 0x18b8) = (float)(fVar3 * (float10)60.0);
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
  fVar3 = (float10)(*pcVar2)(0x49);
  *(float *)(param_1 + 0x18bc) = (float)(fVar3 * (float10)60.0);
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
  fVar3 = (float10)(*pcVar2)(0x4a);
  *(float *)(param_1 + 0x18c0) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x4b);
  *(float *)(param_1 + 0x18c4) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x2c);
  *(float *)(param_1 + 0x18d0) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x2d);
  *(float *)(param_1 + 0x18d4) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x30);
  *(float *)(param_1 + 0x18d8) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x31);
  *(float *)(param_1 + 0x18dc) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x2e);
  *(float *)(param_1 + 0x18e0) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x2f);
  *(float *)(param_1 + 0x18e4) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x4e);
  *(float *)(param_1 + 0x18e8) = (float)(fVar3 * (float10)60.0);
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
  fVar3 = (float10)(*pcVar2)(0x45);
  *(float *)(param_1 + 0x18ec) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x46);
  *(float *)(param_1 + 0x18f0) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x4f);
  *(float *)(param_1 + 0x18f4) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x50);
  *(float *)(param_1 + 0x18f8) = (float)fVar3;
  uVar1 = FUN_0057bce0(0x52);
  *(undefined4 *)(param_1 + 0x18fc) = uVar1;
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
  fVar3 = (float10)(*pcVar2)(0x51);
  *(float *)(param_1 + 0x1900) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x54);
  *(float *)(param_1 + 0x1904) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x55);
  *(float *)(param_1 + 0x1908) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x56);
  *(float *)(param_1 + 0x190c) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x57);
  *(float *)(param_1 + 0x1910) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x47);
  *(float *)(param_1 + 0x18c8) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x48);
  *(float *)(param_1 + 0x18cc) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x59);
  *(float *)(param_1 + 0x1914) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x5a);
  *(float *)(param_1 + 0x1918) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x5c);
  *(float *)(param_1 + 0x191c) = (float)fVar3;
  uVar1 = FUN_0057bce0(0x5d);
  *(undefined4 *)(param_1 + 0x1920) = uVar1;
  uVar1 = FUN_0057bce0(0x53);
  *(undefined4 *)(param_1 + 0x1924) = uVar1;
  uVar1 = FUN_0057bce0(0x66);
  *(undefined4 *)(param_1 + 0x1928) = uVar1;
  uVar1 = FUN_0057bce0(0x67);
  *(undefined4 *)(param_1 + 0x192c) = uVar1;
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
  fVar3 = (float10)(*pcVar2)(0x4c);
  *(float *)(param_1 + 0x1930) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x4d);
  *(float *)(param_1 + 0x1934) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x69);
  *(float *)(param_1 + 0x1938) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x6b);
  *(float *)(param_1 + 0x193c) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x6a);
  *(float *)(param_1 + 0x1940) = (float)fVar3;
  uVar1 = FUN_0057bce0(0x3d);
  *(undefined4 *)(param_1 + 0x1944) = uVar1;
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
  fVar3 = (float10)(*pcVar2)(0x6d);
  *(float *)(param_1 + 0x1948) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x6c);
  *(float *)(param_1 + 0x194c) = (float)fVar3;
  uVar1 = FUN_0057bce0(0x39);
  *(undefined4 *)(param_1 + 0x1894) = uVar1;
  uVar1 = FUN_0057bce0(0x3c);
  *(undefined4 *)(param_1 + 0x1898) = uVar1;
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
  fVar3 = (float10)(*pcVar2)(0x3e);
  *(float *)(param_1 + 0x189c) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x3f);
  *(float *)(param_1 + 0x18a0) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x65);
  *(float *)(param_1 + 0x1950) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x40);
  *(float *)(param_1 + 0x1954) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x75);
  *(float *)(param_1 + 0x1958) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x77);
  *(float *)(param_1 + 0x195c) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x78);
  *(float *)(param_1 + 0x1960) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x7a);
  *(float *)(param_1 + 0x1964) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x1970) = 0x3e888889;
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
  fVar3 = (float10)(*pcVar2)(0x6f);
  *(float *)(param_1 + 0x1974) = (float)fVar3;
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
  fVar3 = (float10)(*pcVar2)(0x70);
  *(float *)(param_1 + 0x197c) = (float)fVar3;
  uVar1 = FUN_0057bce0(0x71);
  *(undefined4 *)(param_1 + 0x1980) = uVar1;
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
  fVar3 = (float10)(*pcVar2)(0x68);
  *(float *)(param_1 + 0x1984) = (float)fVar3;
  uVar1 = FUN_0057bce0(0x72);
  *(undefined4 *)(param_1 + 0x1988) = uVar1;
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
  fVar3 = (float10)(*pcVar2)(0x73);
  *(float *)(param_1 + 0x1978) = (float)(fVar3 * (float10)0.017453292);
  *(undefined4 *)(param_1 + 0x1130) = *(undefined4 *)(param_1 + 0x18e8);
  return;
}

// 00581690  FUN_00581690  size=821  [between]
void __fastcall FUN_00581690(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_00a54ae0(&local_4,param_1 + 0x494,"_col.hkx");
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = RigidBodyCollision::RigidBodyCollision();
    }
    *(undefined4 *)(param_1 + 0x7b0) = uVar3;
    iVar1 = FUN_008f6410(*(undefined4 *)(param_1 + 0x4f0),iVar1,local_4);
    if (iVar1 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1f);
      iVar1 = **(int **)(param_1 + 0x7b0);
      uVar3 = FUN_009f8b40();
      (**(code **)(iVar1 + 0x114))(uVar3);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x20);
      FUN_008f18c0(0x100);
    }
  }
  if (*(int **)(param_1 + 0x7b0) == (int *)0x0) {
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(3);
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(iVar1 + 3);
    Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
    iVar2 = 3;
    ppuVar5 = &PTR_DAT_01641e20;
    iVar1 = 6;
    do {
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(iVar2,*ppuVar5);
      uVar7 = 1;
      iVar6 = iVar2;
      uVar3 = FUN_00a8d2a0(iVar2,1);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_4(uVar3,iVar6,uVar7);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_7(2,iVar2);
      FUN_00a938c0(iVar2);
      iVar2 = iVar2 + 1;
      ppuVar5 = ppuVar5 + 6;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00a93730(0x12);
  puVar4 = (undefined4 *)FUN_009f8b60();
  iVar1 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    *(undefined4 *)(iVar1 + 0x594) = 0x3faccccd;
    *(undefined4 *)(iVar1 + 0x590) = 0x3f000000;
    FUN_00d771d0(0xb);
    uVar3 = FUN_00a8d2a0();
    FUN_00a93a00(iVar1,uVar3);
    *(uint *)(iVar1 + 900) = *(uint *)(iVar1 + 900) | 2;
    FUN_00d7b0f0();
    _strncpy_s((char *)(iVar1 + 0x394),0x20,"body",0x1f);
    FUN_00d7b890();
  }
  puVar4 = (undefined4 *)FUN_009f8b60();
  iVar1 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x380) = 1;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    *(undefined4 *)(iVar1 + 0x594) = 0x40000000;
    *(undefined4 *)(iVar1 + 0x590) = 0x3f400000;
    FUN_00d771d0(0x12);
    uVar3 = FUN_00a8d2a0();
    FUN_00a93a00(iVar1,uVar3);
    FUN_00d7b0f0();
    *(uint *)(iVar1 + 900) = *(uint *)(iVar1 + 900) | 2;
    _strncpy_s((char *)(iVar1 + 0x394),0x20,"guard",0x1f);
    FUN_00d7b890();
  }
  puVar4 = (undefined4 *)FUN_009f8b60();
  iVar1 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x4000;
    return;
  }
  *(undefined4 *)(iVar1 + 0x380) = 2;
  FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
  *(undefined4 *)(iVar1 + 0x594) = 0x40066666;
  *(undefined4 *)(iVar1 + 0x590) = 0x40600000;
  FUN_00d771d0(0xb);
  uVar3 = FUN_00a8d2a0();
  FUN_00a93a00(iVar1,uVar3);
  *(uint *)(iVar1 + 900) = *(uint *)(iVar1 + 900) | 2;
  FUN_00d7b0f0();
  _strncpy_s((char *)(iVar1 + 0x394),0x20,"subwp",0x1f);
  FUN_00d7b890();
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x4100;
  return;
}

// 005819D0  FUN_005819d0  size=48  [between]
void FUN_005819d0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8eeb0();
  FUN_00a8ee20(iVar1 / 10);
  FUN_0057c840(0xffffffff,1);
  return;
}

// 00581BF0  FUN_00581bf0  size=88  [between]
undefined4 __fastcall FUN_00581bf0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x10e0) & 0x200) == 0) {
    iVar1 = FUN_00a8eea0();
    iVar2 = FUN_00a8eeb0();
    if (*(float *)(param_1 + 0x18c8) < 1.0 - (float)iVar1 / (float)iVar2) {
      return 1;
    }
  }
  return 0;
}

// 00581C50  FUN_00581c50  size=96  [between]
undefined4 __fastcall FUN_00581c50(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 0x10e0) & 0x200) == 0) {
    fVar1 = *(float *)(param_1 + 0x18c8);
    iVar2 = FUN_00a8eea0();
    iVar3 = FUN_00a8eeb0();
    if (fVar1 < 1.0 - (float)iVar2 / (float)iVar3) {
      return 1;
    }
  }
  return 0;
}

// 00581CB0  FUN_00581cb0  size=184  [between]
void FUN_00581cb0(int param_1)

{
  if ((-1 < param_1) && (param_1 < 3)) {
    FUN_00aa4080(*(undefined4 *)(&DAT_01641eec + param_1 * 4),3,0,0x3f800000,0x8000000,0xbf800000,
                 0x3f800000);
    FUN_00aa4080(*(undefined4 *)(&DAT_01641ed4 + param_1 * 4),1,0,0x3f800000,0x8000000,0xbf800000,
                 0x3f800000);
    FUN_00aa4080(*(undefined4 *)(&DAT_01641ee0 + param_1 * 4),2,0,0x3f800000,0x8000000,0xbf800000,
                 0x3f800000);
  }
  return;
}

// 00581D70  FUN_00581d70  size=71  [between]
void __thiscall FUN_00581d70(int param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x10e0) & 0x200) != 0) {
    FUN_00aa4080(0x2e,1,param_2,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    return;
  }
  FUN_00aa4080(0x2c,1,param_2,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  return;
}

// 00581DC0  FUN_00581dc0  size=453  [between]
void __thiscall FUN_00581dc0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0x1160) != 0) != (param_2 != 0)) {
    *(int *)(param_1 + 0x1160) = param_2;
    if (param_2 == 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a9e060(3);
        FUN_00a9e060(4);
        FUN_00a9e060(5);
        FUN_00a9e060(6);
        FUN_00a9e060(7);
        FUN_00a9e060(8);
        FUN_00a9e060(9);
        FUN_00a9e060(10);
        FUN_00ac9420(&DAT_0163ef94);
        FUN_00ac9420("head_DEC");
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00581f7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar2 + 0xf8))();
          return;
        }
      }
    }
    else {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a8c5f0(3,*(undefined4 *)(param_1 + 0x4f0),iVar1,0xffffffff,0xffffffff);
        FUN_00a8c5f0(4,*(undefined4 *)(param_1 + 0x4f0),iVar1,0,0);
        FUN_00a8c5f0(5,*(undefined4 *)(param_1 + 0x4f0),iVar1,1,1);
        FUN_00a8c5f0(6,*(undefined4 *)(param_1 + 0x4f0),iVar1,2,2);
        FUN_00a8c5f0(7,*(undefined4 *)(param_1 + 0x4f0),iVar1,3,3);
        FUN_00a8c5f0(8,*(undefined4 *)(param_1 + 0x4f0),iVar1,4,4);
        FUN_00a8c5f0(9,*(undefined4 *)(param_1 + 0x4f0),iVar1,5,5);
        FUN_00a8c5f0(10,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x500,0x500);
        FUN_00ac94e0(&DAT_0163ef94);
        FUN_00ac94e0("head_DEC");
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00581eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar2 + 0xf8))();
          return;
        }
      }
    }
  }
  return;
}

// 00581F90  FUN_00581f90  size=510  [between]
void __fastcall FUN_00581f90(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar1 = FUN_00a8c760(0x30);
  iVar3 = FUN_00a8c760(0x31);
  switch(*(undefined4 *)(param_1 + 0x1724)) {
  case 0:
    if (0.0 < *(float *)(param_1 + 0x172c)) {
      (**(code **)(*piVar2 + 100))();
    }
    *(float *)(param_1 + 0x172c) = *(float *)(param_1 + 0x172c) - *(float *)(param_1 + 0x910);
    if (iVar1 == 0) {
      if (iVar3 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x172c) = 0x41200000;
      *(undefined4 *)(param_1 + 0x1724) = 2;
      FUN_00aa4520(0x18d,*(undefined4 *)(param_1 + 0x4f0),0,0x3e2aaaab,0x3f800000,0,0xbf800000,
                   0x3f800000);
      return;
    }
    *(undefined4 *)(param_1 + 0x172c) = 0x41200000;
    *(undefined4 *)(param_1 + 0x1724) = 1;
    FUN_00aa4520(0x18e,*(undefined4 *)(param_1 + 0x4f0),0,0x3e2aaaab,0x3f800000,0,0xbf800000,
                 0x3f800000);
    return;
  case 1:
    if (0.0 < *(float *)(param_1 + 0x172c)) {
      (**(code **)(*piVar2 + 100))();
    }
    *(float *)(param_1 + 0x172c) = *(float *)(param_1 + 0x172c) - *(float *)(param_1 + 0x910);
    break;
  case 2:
    if (0.0 < *(float *)(param_1 + 0x172c)) {
      (**(code **)(*piVar2 + 100))();
    }
    *(float *)(param_1 + 0x172c) = *(float *)(param_1 + 0x172c) - *(float *)(param_1 + 0x910);
    iVar1 = iVar3;
    break;
  case 3:
    (**(code **)(*piVar2 + 100))();
    if (*(int *)(param_1 + 0x1728) < 1) {
      return;
    }
    goto LAB_0058213a;
  default:
    goto switchD_00581fdf_default;
  }
  if (iVar1 == 0) {
LAB_0058213a:
    *(undefined4 *)(param_1 + 0x172c) = 0x41200000;
    *(undefined4 *)(param_1 + 0x1724) = 0;
    FUN_00aa4520(0x18c,*(undefined4 *)(param_1 + 0x4f0),0,0x3e2aaaab,0x3f800000,0,0xbf800000,
                 0x3f800000);
  }
switchD_00581fdf_default:
  return;
}

// 005821A0  FUN_005821a0  size=151  [between]
void __fastcall FUN_005821a0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1724) = 3;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x1728) = 0;
    FUN_00a9f4c0("QZ_TACKLE",0,0,0);
    FUN_00a9f650(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,0,0,0,0,0x191,0,0);
    FUN_00a9f650(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,0,1,0,0,0x192,0,0);
  }
  return;
}

// 00582240  FUN_00582240  size=108  [between]
void __fastcall FUN_00582240(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1724) = 3;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1728) = 0;
      FUN_00aa4520(0x193,*(undefined4 *)(param_1 + 0x4f0),0,0x3d888889,0x3f800000,0,0xbf800000,
                   0x3f800000);
    }
  }
  return;
}

// 005822B0  FUN_005822b0  size=108  [between]
void __fastcall FUN_005822b0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1724) = 3;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1728) = 0;
      FUN_00aa4520(399,*(undefined4 *)(param_1 + 0x4f0),0,0x3d088889,0x3f800000,0,0xbf800000,
                   0x3f800000);
    }
  }
  return;
}

// 00582320  FUN_00582320  size=338  [between]
void __fastcall FUN_00582320(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  int local_80 [4];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_30 [4];
  undefined1 local_20 [28];
  
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x4c);
  fVar5 = *(float *)(param_1 + 0x44) + 0.25;
  local_90 = fVar1;
  local_8c = fVar5;
  local_88 = fVar2;
  local_84 = fVar3;
  iVar6 = FUN_009f8b40();
  iVar4 = *(int *)(param_1 + 0x17d4);
  if (iVar4 == 0) {
    pfVar7 = (float *)FUN_00a8b8a0(local_20,0xc0800000);
  }
  else {
    if (iVar4 == 1) {
      pfVar7 = local_30;
      uVar8 = 0x40800000;
    }
    else {
      local_60 = local_90;
      local_5c = local_8c;
      local_58 = local_88;
      local_54 = local_84;
      if (iVar4 != 2) goto LAB_005823fa;
      pfVar7 = &local_90;
      uVar8 = 0xc0800000;
    }
    pfVar7 = (float *)FUN_00a8b9b0(pfVar7,uVar8);
  }
  local_60 = *pfVar7 + fVar1;
  local_5c = pfVar7[1] + fVar5;
  local_58 = pfVar7[2] + fVar2;
  local_54 = pfVar7[3] + fVar3;
LAB_005823fa:
  local_80[0] = param_1 + 0x17d0;
  local_80[1] = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = "sundowner";
  local_3c = 0;
  local_38 = 0;
  local_70 = fVar1;
  local_6c = fVar5;
  local_68 = fVar2;
  local_64 = fVar3;
  local_50 = iVar6 << 0x10 | 7;
  HavokRayCastManager::set(local_80);
  return;
}

// 00582480  FUN_00582480  size=301  [between]
void __fastcall FUN_00582480(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    bVar5 = false;
    iVar3 = FUN_00a9f6b0(0);
    if (iVar3 != 0) {
      iVar3 = FUN_00a94ce0(0);
      bVar5 = iVar3 == 0;
    }
    if ((*(uint *)(param_1 + 0x10e0) & 0x200) == 0) {
      uVar6 = 0x2c;
    }
    else {
      uVar6 = 0x2e;
    }
    FUN_00aa4080(uVar6,1,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0xa90);
    uVar4 = *(uint *)(param_1 + 0x10e0) >> 9 & 1;
    if (NAN(fVar1) || 196.0 < fVar1 == (fVar1 == 196.0)) {
      if (bVar5) {
        fVar1 = *(float *)(param_1 + 0x18d8 + uVar4 * 4);
      }
      else {
        fVar1 = *(float *)(param_1 + 0x18d0 + uVar4 * 4);
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x18e0 + uVar4 * 4);
    }
    fVar1 = fVar1 * 60.0;
    *(float *)(param_1 + 0x920) = fVar1;
    fVar2 = *(float *)(param_1 + 0x1914 + uVar4 * 4);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_1 + 0x1100);
    *(float *)(param_1 + 0x924) = fVar2 * 60.0;
    *(float *)(param_1 + 0x928) = fVar1 + fVar1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00582970  FUN_00582970  size=173  [between]
int __thiscall FUN_00582970(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xaf4) != 1) && ((*(uint *)(param_1 + 0x10e0) & 0x20000) == 0)) {
    FUN_00581bf0();
    iVar1 = FUN_00fdbc60();
    if ((param_3 != 0) && (iVar1 < 2)) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 0;
}

// 00582A20  FUN_00582a20  size=114  [between]
void FUN_00582a20(undefined4 param_1,int param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = *(undefined4 *)(param_2 + 0xb0);
  local_2c = *(undefined4 *)(param_2 + 0xb4);
  local_28 = *(undefined4 *)(param_2 + 0xb8);
  local_24 = *(undefined4 *)(param_2 + 0xbc);
  local_20 = *(undefined4 *)(param_2 + 0xd0);
  local_1c = *(undefined4 *)(param_2 + 0xd4);
  local_18 = *(undefined4 *)(param_2 + 0xd8);
  local_14 = *(undefined4 *)(param_2 + 0xdc);
  FUN_00d93a90(&local_20,&local_30);
  return;
}

// 00582AA0  FUN_00582aa0  size=345  [between]
int __thiscall FUN_00582aa0(int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)param_1[0x438] >> 9 & 1;
  bVar1 = false;
  if ((param_1[uVar3 + 0x625] < param_1[0x442]) || (param_1[uVar3 + 0x623] < param_1[0x440])) {
    bVar1 = true;
  }
  iVar4 = FUN_00a8c760(6);
  if ((iVar4 == 0) && (iVar4 = FUN_00a8c760(5), iVar4 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((((!bVar1) || ((*(byte *)(param_1 + 0x438) & 4) != 0)) ||
       (iVar4 = FUN_00a8c760(0x10), iVar4 != 0)) ||
      ((*param_2 == 0x146 || ((param_1[0x438] & 0x8000U) != 0)))) || (bVar2)) {
    iVar4 = -1;
  }
  else {
    iVar4 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar4 != 0) {
      return ((*(byte *)((int)param_2 + 0x93) & 1) != 0) + 0x30001;
    }
    if (*param_2 == 0x42) {
      return 0x30003;
    }
    if (param_1[0x65a] == 0) {
      if ((param_2[0x24] & 0x800000U) != 0) {
        param_1[0x65a] = 1;
        return 0x30009;
      }
      if (((param_2[0x24] & 0x2000000U) != 0) || (9 < *(byte *)((int)param_2 + 0x11))) {
        param_1[0x65a] = 1;
        return 0x30004;
      }
    }
    iVar4 = 0x30000;
    if ((param_1[0x438] & 0x200U) == 0) {
      return 0x3000f;
    }
  }
  return iVar4;
}

// 00582C00  FUN_00582c00  size=247  [between]
int __thiscall FUN_00582c00(int param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  
  if ((*param_3 != 0x146) || ((param_3[0x24] & 0x8000U) != 0)) {
    if ((*param_3 == 0x4f) && ((*(uint *)(param_1 + 0x10e0) & 0x800) == 0)) {
      if ((*(uint *)(param_1 + 0x10e0) & 0x200) == 0) {
        *param_4 = *param_4 | 0x20;
        return (uint)(*(int *)(param_1 + 0x16f4) != 1) * 2 + 0x3000e;
      }
      return 0x3000a;
    }
    if (((*(int *)(param_1 + 0x618) == 0x3000f) && (1 < *(int *)(param_1 + 0x16f4))) &&
       ((*(byte *)((int)param_3 + 0x8e) & 1) != 0)) {
      *param_4 = 0x41;
      return 0x30010;
    }
    if ((*(byte *)(param_1 + 0x10e0) & 8) == 0) {
      iVar1 = FUN_00a8c760(6);
      if (((iVar1 != 0) || (iVar1 = FUN_00a8c760(5), iVar1 != 0)) &&
         ((param_2 == 0x30000 || (param_2 == 0x30003)))) {
        param_2 = -1;
      }
      if ((*param_3 != 0x146) && ((param_3[0x23] & 0x20000U) != 0)) {
        param_2 = 0x3000b;
      }
      return param_2;
    }
  }
  return -1;
}

// 00582D00  FUN_00582d00  size=41  [between]
undefined4 FUN_00582d00(int *param_1)

{
  if ((((param_1[0x24] & 0x8000U) == 0) && (*param_1 != 0x57)) && (*param_1 != 0x55)) {
    return 0;
  }
  return 1;
}

// 00582D30  FUN_00582d30  size=27  [between]
undefined4 __fastcall FUN_00582d30(int param_1)

{
  if ((0 < *(int *)(param_1 + 0x16f4)) && ((*(byte *)(param_1 + 0x10e0) & 0x40) == 0)) {
    return 1;
  }
  return 0;
}

// 00582D90  FUN_00582d90  size=187  [between]
void __thiscall FUN_00582d90(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  int local_4;
  
  piVar4 = (int *)(param_1 + 0x1278);
  local_4 = 6;
  do {
    if (piVar4[-2] != 0) {
      if ((param_2 == 0) || (*piVar4 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          puVar5 = &DAT_01b3514c;
          (**(code **)(*piVar3 + 4))(&DAT_01b3514c);
          iVar2 = FUN_00dd6d70(puVar5);
          if (iVar2 != 0) {
            if (bVar1) {
              if (piVar3[0x21e] == 0) {
                piVar3[0x21e] = 1;
                FUN_00a93910(0);
              }
            }
            else if (piVar3[0x21e] != 0) {
              piVar3[0x21e] = 0;
              FUN_00a938c0(0);
            }
          }
        }
      }
    }
    piVar4 = piVar4 + 0x38;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 00582E50  FUN_00582e50  size=394  [between]
void __thiscall FUN_00582e50(int param_1,int param_2,int param_3)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  
  piVar1 = (int *)(param_1 + 0x170c);
  *piVar1 = *piVar1 - param_3;
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0x170c) = 0;
  }
  if ((*(int *)(param_1 + 0x1710) == 0) ||
     ((float10)*(int *)(param_1 + 0x170c) / (float10)*(int *)(param_1 + 0x1710) <= (float10)0)) {
    FUN_0057c840(0,1);
  }
  fVar3 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x94));
  fVar2 = (float10)0;
  if (((fVar3 <= fVar2) && (0 < *(int *)(param_1 + 0x1714))) || (*(int *)(param_1 + 0x171c) < 1)) {
    if ((*(int *)(param_1 + 0x1718) != 0) &&
       (fVar2 < (float10)*(int *)(param_1 + 0x1714) / (float10)*(int *)(param_1 + 0x1718))) {
      piVar1 = (int *)(param_1 + 0x1714);
      *piVar1 = *piVar1 - param_3;
      if (*piVar1 < 0) {
        *(undefined4 *)(param_1 + 0x1714) = 0;
      }
      if (*(int *)(param_1 + 0x1718) == 0) {
        FUN_0057c840(1,1);
        return;
      }
      fVar3 = (float10)*(int *)(param_1 + 0x1714) / (float10)*(int *)(param_1 + 0x1718);
      if (fVar3 < fVar2 != (fVar3 == fVar2)) {
        FUN_0057c840(1,1);
        return;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x1720) != 0) &&
          (fVar2 != (float10)*(int *)(param_1 + 0x171c) / (float10)*(int *)(param_1 + 0x1720))) {
    piVar1 = (int *)(param_1 + 0x171c);
    *piVar1 = *piVar1 - param_3;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x171c) = 0;
    }
    if (*(int *)(param_1 + 0x1720) == 0) {
      FUN_0057c840(2,1);
      return;
    }
    fVar3 = (float10)*(int *)(param_1 + 0x171c) / (float10)*(int *)(param_1 + 0x1720);
    if (fVar3 < fVar2 != (fVar3 == fVar2)) {
      FUN_0057c840(2,1);
      return;
    }
  }
  return;
}

// 00582FE0  FUN_00582fe0  size=126  [between]
undefined4 __fastcall FUN_00582fe0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar1 = *(float *)(param_1 + 0x18ec);
  if (0 < *(int *)(param_1 + 0x16f0)) {
    if (*(int *)(param_1 + 0x16f4) < 3) {
      iVar2 = FUN_00a8eea0();
      iVar3 = FUN_00a8eeb0();
      if (1.0 - fVar1 < (float)iVar2 / (float)iVar3) {
        return 0;
      }
    }
    if (((1 < *(int *)(param_1 + 0x16f4)) && ((*(uint *)(param_1 + 0x10e0) & 0x200) == 0)) &&
       ((*(uint *)(param_1 + 0x10e0) & 0x40) == 0)) {
      return 1;
    }
  }
  return 0;
}

// 00583060  FUN_00583060  size=243  [between]
undefined4 __fastcall FUN_00583060(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_4;
  
  iVar1 = FUN_00582fe0();
  if (iVar1 != 0) {
    fVar3 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar3 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar3));
    if ((ABS(fVar3) < (float10)1.0471976) && (*(float *)(param_1 + 0xa90) <= 64.0)) {
      iVar1 = *(int *)(param_1 + 0x16f4);
      iVar2 = FUN_00ac8120();
      if ((iVar2 == 0) || (iVar2 = FUN_00bda170(), iVar2 != 0)) {
        local_4 = *(float *)(param_1 + 0x1938);
      }
      else {
        local_4 = *(float *)(param_1 + 0x193c);
      }
      local_4 = local_4 - (float)(6 - iVar1) * *(float *)(param_1 + 0x1940);
      iVar1 = FUN_00581bf0();
      if (iVar1 == 0) {
        if (local_4 <= 0.0) {
          return 0;
        }
      }
      else {
        local_4 = 0.95;
      }
      fVar3 = (float10)FUN_00dde300(0,0x3f800000);
      if (fVar3 < (float10)local_4) {
        return 1;
      }
    }
  }
  return 0;
}

// 005831C0  FUN_005831c0  size=141  [between]
undefined4 __fastcall FUN_005831c0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  if (((*(uint *)(param_1 + 0x10e0) & 0x8800) != 0) || (*(int *)(param_1 + 0x618) == 0x70007)) {
    return 0;
  }
  fVar3 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar3 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar3));
  if (ABS(fVar3) < (float10)2.0943952 != (ABS(fVar3) == (float10)2.0943952)) {
    iVar1 = FUN_0057c0c0();
    iVar2 = FUN_00a8c760(4);
    if (iVar2 != 0) {
      iVar1 = 1;
    }
    if ((((*(uint *)(param_1 + 0x10e0) & 0x200) != 0) && (iVar1 != 0)) &&
       ((*(uint *)(param_1 + 0x10e0) & 2) == 0)) {
      return 1;
    }
  }
  return 0;
}

// 00583250  FUN_00583250  size=546  [between]
undefined4 __fastcall FUN_00583250(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float unaff_ESI;
  undefined *puVar4;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [76];
  
  if (((*(int *)(param_1 + 0xa84) != 0) && (iVar3 = FUN_00a8cab0(), iVar3 - 0x82U < 4)) &&
     (piVar1 = *(int **)(param_1 + 0xa84), piVar1 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d70(puVar4);
    if (iVar3 != 0) {
      iStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      iVar3 = (**(code **)(*piVar1 + 0x84))();
      uStack_5c = *(undefined4 *)(iVar3 + 4);
      iStack_60 = piVar1[0x9e3];
      uStack_80 = 0;
      fStack_7c = 0.0;
      fStack_78 = 1.0;
      FUN_00ddc1d0(auStack_50,&iStack_60,5);
      D3DXVec3TransformNormal(&uStack_80,&uStack_80,auStack_50);
      fStack_7c = *(float *)(param_1 + 0x40) - (float)piVar1[0x10];
      fStack_78 = *(float *)(param_1 + 0x44) - (float)piVar1[0x11];
      fStack_74 = *(float *)(param_1 + 0x48) - (float)piVar1[0x12];
      fStack_70 = *(float *)(param_1 + 0x4c) - (float)piVar1[0x13];
      fVar2 = fStack_84 * fStack_84 + fStack_88 * fStack_88 + unaff_ESI * unaff_ESI;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&stack0xffffff74,&stack0xffffff74);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        unaff_ESI = 0.0;
        fStack_88 = 1.0;
        fStack_84 = 0.0;
      }
      fVar2 = fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&fStack_7c,&fStack_7c);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_74 = 0.0;
        fStack_7c = 0.0;
        fStack_78 = 1.0;
      }
      if (0.8 < fStack_74 * fStack_84 + fStack_7c * unaff_ESI + fStack_88 * fStack_78) {
        return 1;
      }
    }
  }
  return 0;
}

// 00583480  FUN_00583480  size=247  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00583480(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_a0 [68];
  undefined4 local_5c;
  
  if ((DAT_01b35030 & 1) == 0) {
    _DAT_01b35020 = 0;
    DAT_01b35030 = DAT_01b35030 | 1;
    _DAT_01b35024 = 0;
    _DAT_01b35028 = 0xbe99999a;
  }
  if ((DAT_01b35030 & 2) == 0) {
    _DAT_01b35010 = 0;
    DAT_01b35030 = DAT_01b35030 | 2;
    _DAT_01b35014 = 0;
    _DAT_01b35018 = 0;
  }
  iVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x1280);
  do {
    if ((param_2 == -1) || (param_2 == iVar3)) {
      FUN_00405140(*(undefined4 *)(param_1 + 0x4f0),0x10,(&DAT_0164211c)[iVar3],&DAT_01b35020,
                   &DAT_01b35010,*(undefined4 *)(param_1 + 0x18b0),0x3f000000,0xbf800000);
      local_5c = 0x41a00000;
      uVar1 = FUN_00c5abe0(local_a0);
      *puVar2 = uVar1;
      FUN_00c52700(uVar1,0);
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x38;
  } while (iVar3 < 6);
  return;
}

// 00583580  FUN_00583580  size=145  [between]
void FUN_00583580(uint param_1)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (((param_1 < 6) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
     (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    puVar2 = (&PTR_s_L_Shield_Bottom_protArmor1_01641e24)[param_1 * 6];
    iVar7 = 0;
    if (0 < *(short *)(iVar4 + 0x324)) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(iVar4 + 800);
        iVar5 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
        if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,puVar2), iVar5 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x70;
      } while (iVar7 < *(short *)(iVar4 + 0x324));
    }
  }
  return;
}

// 00583620  FUN_00583620  size=145  [between]
void FUN_00583620(uint param_1)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (((param_1 < 6) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
     (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    puVar2 = (&PTR_s_L_Shield_Bottom_protArmor1_01641e24)[param_1 * 6];
    iVar7 = 0;
    if (0 < *(short *)(iVar4 + 0x324)) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(iVar4 + 800);
        iVar5 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
        if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,puVar2), iVar5 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
          *puVar1 = *puVar1 | 1;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x70;
      } while (iVar7 < *(short *)(iVar4 + 0x324));
    }
  }
  return;
}

// 005836C0  FUN_005836c0  size=145  [between]
void FUN_005836c0(uint param_1)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (((param_1 < 6) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
     (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    puVar2 = (&PTR_s_L_Shield_Bottom_protArmor2_01641e28)[param_1 * 6];
    iVar7 = 0;
    if (0 < *(short *)(iVar4 + 0x324)) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(iVar4 + 800);
        iVar5 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
        if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,puVar2), iVar5 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x70;
      } while (iVar7 < *(short *)(iVar4 + 0x324));
    }
  }
  return;
}

// 00583760  FUN_00583760  size=145  [between]
void FUN_00583760(uint param_1)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (((param_1 < 6) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
     (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    puVar2 = (&PTR_s_L_Shield_Bottom_protArmor2_01641e28)[param_1 * 6];
    iVar7 = 0;
    if (0 < *(short *)(iVar4 + 0x324)) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(iVar4 + 800);
        iVar5 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
        if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,puVar2), iVar5 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
          *puVar1 = *puVar1 | 1;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x70;
      } while (iVar7 < *(short *)(iVar4 + 0x324));
    }
  }
  return;
}

// 00583900  FUN_00583900  size=85  [between]
uint FUN_00583900(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_1 < 6) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      puVar3 = &DAT_01b3514c;
      (**(code **)(*piVar2 + 4))(&DAT_01b3514c);
      iVar1 = FUN_00dd6d70(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 00583960  FUN_00583960  size=37  [between]
void __fastcall FUN_00583960(int param_1)

{
  if ((*(uint *)(param_1 + 0x10e0) & 0x40000) == 0) {
    FUN_00aa92c0(0x197);
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x40000;
  }
  return;
}

// 005839C0  FUN_005839c0  size=484  [between]
void __fastcall FUN_005839c0(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 unaff_EBX;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar3 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = CollisionAttackData::CollisionAttackData();
  }
  puVar5 = *(undefined4 **)(iVar3 + 8);
  *(undefined4 *)(iVar3 + 4) = 1;
  local_28 = FUN_00ac84d0(0x29);
  local_28 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x29);
  uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x29);
  uStack_34 = CONCAT13(uVar2,(undefined3)uStack_34);
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x29);
  puVar5[1] = uStack_34;
  *(char *)(puVar5 + 4) = (char)((uint)unaff_EBX >> 0x18);
  puVar5[3] = uStack_30;
  puVar5[2] = uVar4;
  *puVar5 = 0x157;
  puVar5[0x24] = puVar5[0x24] | 0x2000000;
  puVar5[0x23] = puVar5[0x23] | 0x2000;
  *(undefined1 *)((int)puVar5 + 0x11) = 10;
  puVar5[0xc] = *(undefined4 *)(param_1 + 0x94);
  puVar5 = (undefined4 *)FUN_009f8b60();
  piVar6 = (int *)FUN_00602cb0(5,*puVar5,iVar3);
  if (piVar6 != (int *)0x0) {
    uStack_2c = 0;
    local_28 = 0x3fb33333;
    uStack_24 = 0x3f19999a;
    iVar3 = FUN_00a12210(0);
    if (iVar3 == 0) {
      iVar3 = param_1;
    }
    D3DXVec3TransformNormal(&uStack_2c,&uStack_2c,iVar3 + 0x10);
    (**(code **)(*piVar6 + 0x6c))(&stack0xffffffc8);
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
    piVar1[0xe0] = 0x157;
    FUN_00d7b890();
  }
  return;
}

// 00583BD0  FUN_00583bd0  size=224  [between]
void __fastcall FUN_00583bd0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    param_1[0x187] = 1;
    param_1[0x248] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00583c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    FUN_00aa4080(0x77,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if ((*(byte *)(param_1 + 0x438) & 0x40) == 0) {
      param_1[0x438] = param_1[0x438] | 0x40;
      param_1[0x449] = param_1[0x62d];
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00583CB0  FUN_00583cb0  size=47  [between]
void __fastcall FUN_00583cb0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_0057dda0();
    if (iVar1 != 0) {
      FUN_00a805f0();
    }
    FUN_00a805f0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 00583CE0  Em0310::getAttackInfo  size=994  [class]
undefined4 __thiscall Em0310::getAttackInfo(int param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_01642138);
    return 0;
  }
  puVar1 = *(undefined4 **)(iVar2 + 8);
  puVar1[5] = *(undefined4 *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  uVar3 = FUN_00ac8520(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = unaff_EBP;
  *(undefined1 *)(puVar1 + 4) = uStack_8;
  switch(*param_2) {
  case 4:
    *puVar1 = 0x158;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    break;
  default:
    goto switchD_00583db9_caseD_5;
  case 6:
    *puVar1 = 0x159;
    goto LAB_00583ddf;
  case 8:
    *puVar1 = 0x15a;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    goto LAB_00583e21;
  case 10:
    *puVar1 = 0x15b;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0x5401;
    return unaff_EBX;
  case 0xc:
    *puVar1 = 0x15b;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0x5401;
    return unaff_EBX;
  case 0xe:
    *puVar1 = 0x15c;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x5400;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return unaff_EBX;
  case 0x10:
    *puVar1 = 0x15d;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    break;
  case 0x12:
    *puVar1 = 0x15e;
LAB_00583ddf:
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    goto LAB_00583de9;
  case 0x14:
    *puVar1 = 0x15f;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x5400;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return unaff_EBX;
  case 0x16:
    *puVar1 = 0x160;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    goto LAB_0058409a;
  case 0x18:
    *puVar1 = 0x161;
    puVar1[0x24] = puVar1[0x24] | 0x4000000;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x5401;
    return unaff_EBX;
  case 0x1a:
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    *puVar1 = 0x162;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return unaff_EBX;
  case 0x1c:
    *puVar1 = 0x163;
    goto LAB_0058409a;
  case 0x1e:
    *puVar1 = 0x164;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    goto LAB_00583de9;
  case 0x20:
    *puVar1 = 0x165;
    puVar1[0x23] = puVar1[0x23] | 0x40002000;
LAB_00583e21:
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
LAB_00583e25:
    *(undefined2 *)(puVar1 + 0x21) = 0x5400;
    return unaff_EBX;
  case 0x22:
    *puVar1 = 0x16b;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] | 0x1000100;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x5402;
    return unaff_EBX;
  case 0x24:
    *puVar1 = 0x165;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    goto LAB_00583ded;
  case 0x26:
    *puVar1 = 0x166;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    goto LAB_00583e25;
  case 0x28:
    *puVar1 = 0x167;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    break;
  case 0x2a:
    *puVar1 = 0x168;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
LAB_00583de9:
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
LAB_00583ded:
    *(undefined2 *)(puVar1 + 0x21) = 0x5400;
    return unaff_EBX;
  case 0x2c:
    *puVar1 = 0x169;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    goto LAB_00583e25;
  case 0x2e:
    *puVar1 = 0x16a;
    puVar1[0x23] = puVar1[0x23] | 0x40002000;
LAB_0058409a:
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
  }
  *(undefined2 *)(puVar1 + 0x21) = 0x5400;
switchD_00583db9_caseD_5:
  return unaff_EBX;
}

// 00584150  Em0310::vf1A0  size=133  [class]
undefined4 __thiscall Em0310::vf1A0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (*param_2 != 0x162) {
    return 0;
  }
  if (param_1[0x186] == 0x2000b) {
    iVar2 = (**(code **)(*piVar1 + 0x14c))(0x68,param_1[0x13c]);
    if (iVar2 != 0) {
      (**(code **)(*piVar1 + 0x150))(0x68,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x68,param_3);
    }
  }
  return 1;
}

// 005841E0  FUN_005841e0  size=66  [callgraph]
undefined4 __fastcall FUN_005841e0(int param_1)

{
  if (((*(uint *)(param_1 + 0x10e0) & 0x200) == 0) &&
     (((*(int *)(param_1 + 0x16f4) < 3 ||
       ((*(int *)(param_1 + 0x1270) != 0 && (*(int *)(param_1 + 0x1350) != 0)))) ||
      ((*(int *)(param_1 + 0x15f0) != 0 && (*(int *)(param_1 + 0x16d0) != 0)))))) {
    return 1;
  }
  return 0;
}

// 00584230  FUN_00584230  size=741  [callgraph]
void __fastcall FUN_00584230(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x3d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    goto LAB_00584297;
  case 1:
LAB_00584297:
    iVar1 = FUN_00a8c760(0);
    if (iVar1 != 0) {
      FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3db2b8c2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(0x3e,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[600] = param_1[0x10];
      param_1[0x259] = param_1[0x11];
      param_1[0x25a] = param_1[0x12];
      param_1[0x25b] = param_1[0x13];
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42700000;
      param_1[0x250] = 0;
      param_1[0x251] = 0;
      return;
    }
    break;
  case 2:
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x251] = param_1[0x251] + 1;
    }
    if (param_1[0x251] == 0) {
      FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3d567750);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_0057b880((float)param_1[0x61e] * (float)param_1[0x244]);
    if ((param_1[0x250] == 0) &&
       (iVar1 = param_1[0x2a1],
       (*(float *)(iVar1 + 0x48) - (float)param_1[0x25a]) *
       (*(float *)(iVar1 + 0x48) - (float)param_1[0x12]) +
       (*(float *)(iVar1 + 0x44) - (float)param_1[0x11]) *
       (*(float *)(iVar1 + 0x44) - (float)param_1[0x259]) +
       (*(float *)(iVar1 + 0x40) - (float)param_1[0x10]) *
       (*(float *)(iVar1 + 0x40) - (float)param_1[600]) < 0.0)) {
      param_1[0x250] = 1;
      fVar2 = (float10)FUN_0043f4b0(0x40c00000,param_1[0x248]);
      param_1[0x248] = (int)(float)fVar2;
    }
    if ((((float)param_1[0x248] <= 0.0) || ((float)param_1[0x2a4] <= 3.2399998)) ||
       ((*(byte *)(param_1 + 0x438) & 0x30) != 0)) {
      FUN_00aa4080(0x3f,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(4), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00584510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00584530  FUN_00584530  size=38  [callgraph]
void __fastcall FUN_00584530(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1174) = 1;
  iVar1 = FUN_00ac8120();
  if (iVar1 != 0) {
    FUN_00b7eba0(*(undefined4 *)(param_1 + 0x4f0));
  }
  return;
}

// 00584560  FUN_00584560  size=117  [callgraph]
void __fastcall FUN_00584560(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0xbfc00000;
  local_18 = 0x3fc00000;
  iVar1 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x41000000,0x40400000,0
                       ,5);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 + 0x44) = 0x3ecccccd;
  }
  return;
}

// 005845E0  FUN_005845e0  size=92  [callgraph]
void __fastcall FUN_005845e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x1864);
  uVar3 = 5;
  if (3 < iVar2) {
    iVar2 = 3;
  }
  uVar1 = *(undefined4 *)(&DAT_01642168 + iVar2 * 4);
  iVar2 = FUN_00ac4780();
  if (2 < iVar2) {
    uVar3 = 6;
  }
  iVar2 = FUN_00c18c10(uVar3,uVar1);
  if ((iVar2 != 0) && (iVar2 = FUN_00c18d20(uVar3,uVar1), iVar2 == 0)) {
    return;
  }
  FUN_00c18610(uVar3,uVar1);
  return;
}

// 00584640  FUN_00584640  size=571  [callgraph]
void __fastcall FUN_00584640(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  uint uVar4;
  float10 fVar5;
  undefined *puVar6;
  float fVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  iVar1 = FUN_00a81330();
  uVar4 = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar6 = &DAT_01b35140;
      (**(code **)(*piVar2 + 4))(&DAT_01b35140);
      iVar3 = FUN_00dd6d70(puVar6);
      uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00bee830();
    FUN_00aa4520(0xfb,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (uVar4 == 0) {
      iVar3 = 10;
    }
    else {
      iVar3 = *(int *)(uVar4 + 0x18a4);
    }
    param_1[0x250] = iVar3;
    FUN_00b80920(iVar1,0x40b00000,0x3f000000,0x3fc00000,0);
  }
  else if (param_1[0x187] == 1) {
    param_1[0x461] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(0x16);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x30c))(param_1[0x250],0);
    }
    iVar1 = FUN_00a8c760(0xb);
    if (iVar1 != 0) {
      fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
      param_1[0x9fb] = (int)(float)fVar5;
      FUN_00ba6810(1,1);
      iVar1 = FUN_00a8eea0();
      if (iVar1 < 1) {
        FUN_00a8caf0(0xda,0,0,0);
        return;
      }
      FUN_00a8caf0(0xc9,0,0,0);
      return;
    }
    if (uVar4 != 0) {
      iVar1 = FUN_00a12210(0xf00);
      if (iVar1 != 0) {
        fVar7 = *(float *)(uVar4 + 0x94);
        D3DXMatrixRotationY(auStack_50);
        D3DXVec3TransformNormal(&stack0xffffff98,iVar1 + 0x50,auStack_58);
        param_1[0x14] = (int)(*(float *)(uVar4 + 0x50) + fVar7);
        param_1[0x15] = (int)(*(float *)(uVar4 + 0x54) + unaff_EDI);
        param_1[0x16] = (int)(*(float *)(uVar4 + 0x58) + unaff_ESI);
        param_1[0x17] = (int)(*(float *)(uVar4 + 0x5c) + unaff_EBX);
        fVar5 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(uVar4 + 0x94));
        param_1[0x25] = (int)(float)fVar5;
        return;
      }
    }
  }
  return;
}

// 00584880  FUN_00584880  size=1705  [callgraph]
void __fastcall FUN_00584880(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  undefined *puVar9;
  int iStack_70;
  int *local_68 [2];
  float afStack_60 [4];
  undefined1 auStack_50 [76];
  
  iVar4 = FUN_00a81330();
  uVar7 = 0;
  if ((iVar4 != 0) && (local_68[0] = (int *)FUN_00a7c8a0(), local_68[0] != (int *)0x0)) {
    puVar9 = &DAT_01b35140;
    (**(code **)(*local_68[0] + 4))(&DAT_01b35140);
    iVar5 = FUN_00dd6d70(puVar9);
    uVar7 = -(uint)(iVar5 != 0) & (uint)local_68[0];
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00bee830();
    param_1[0x248] = 0;
    param_1[599] = *(int *)(uVar7 + 0x18a8);
    FUN_0057d840(param_1 + 0x256,param_1 + 0x252,param_1 + 0x253,param_1 + 0x255,param_1 + 0x254);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 1:
    FUN_00aa4520(param_1[0x256],iVar4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b80920(iVar4,0x40b00000,0x3e4ccccd,0x3f800000,0);
    param_1[0x24e] = *(int *)(uVar7 + 0x18c4);
    param_1[0x24f] = *(int *)(uVar7 + 0x18c0);
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x248] = 0;
    uVar6 = FUN_00dde2d0(0,99);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = uVar6 & 1;
  case 2:
    param_1[0x461] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    local_68[0] = (int *)FUN_00a12210(0xf00);
    if (local_68[0] != (int *)0x0) {
      fVar8 = (float10)FUN_00ddba30((float)local_68[0][0x25] + *(float *)(uVar7 + 0x94));
      param_1[0x25] = (int)(float)fVar8;
      D3DXMatrixRotationY(auStack_50,*(undefined4 *)(uVar7 + 0x94));
      D3DXVec3TransformNormal(local_68,iStack_70 + 0x50,afStack_60 + 2);
      *(float *)(uVar7 + 0x50) = (float)param_1[0x14] - afStack_60[0];
      *(float *)(uVar7 + 0x54) = (float)param_1[0x15] - afStack_60[1];
      *(float *)(uVar7 + 0x58) = (float)param_1[0x16] - afStack_60[2];
      *(float *)(uVar7 + 0x5c) = (float)param_1[0x17] - afStack_60[3];
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00a9f4c0("QZ_TACKLE",0,0,0);
      FUN_00a9f650(iVar4,0xffffffff,0,0,0,0,param_1[0x252],0,0);
      FUN_00a9f650(iVar4,0xffffffff,0,1,0,0,param_1[0x253],0,0);
      FUN_00a947e0(0,0,param_1[0x248],0);
      FUN_00b94790(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    param_1[0x461] = 1;
    FUN_00a947e0(0,param_1[0x248],0,0);
    FUN_00b94790(0x3f800000,0x3f800000);
    local_68[0] = (int *)FUN_00a12210(0xf00);
    if (local_68[0] != (int *)0x0) {
      fVar8 = (float10)FUN_00ddba30((float)local_68[0][0x25] + *(float *)(uVar7 + 0x94));
      param_1[0x25] = (int)(float)fVar8;
      D3DXMatrixRotationY(auStack_50,*(undefined4 *)(uVar7 + 0x94));
      D3DXVec3TransformNormal(local_68,iStack_70 + 0x50,afStack_60 + 2);
      param_1[0x15] = *(int *)(uVar7 + 0x54);
      *(float *)(uVar7 + 0x50) = (float)param_1[0x14] - afStack_60[0];
      *(float *)(uVar7 + 0x54) = (float)param_1[0x15] - afStack_60[1];
      *(float *)(uVar7 + 0x58) = (float)param_1[0x16] - afStack_60[2];
      *(float *)(uVar7 + 0x5c) = (float)param_1[0x17] - afStack_60[3];
    }
    afStack_60[1] = (float)param_1[0x388];
    afStack_60[0] = (float)param_1[0x389];
    local_68[0] = (int *)0x2000;
    local_68[1] = (int *)0x1000;
    FUN_00cbc8f0(local_68[param_1[0x188]],1);
    if ((param_1[0x33f] & (uint)afStack_60[param_1[0x188]]) == 0) {
      fVar1 = *(float *)(uVar7 + 0x920) - (float)param_1[0x244] * (float)param_1[0x24f];
    }
    else {
      fVar1 = (float)param_1[0x244] * (float)param_1[0x24e] + *(float *)(uVar7 + 0x920);
    }
    *(float *)(uVar7 + 0x920) = fVar1;
    fVar1 = *(float *)(uVar7 + 0x920);
    fVar3 = 0.0;
    if ((0.0 <= fVar1) && (fVar3 = fVar1, 1.0 < fVar1)) {
      fVar3 = 1.0;
    }
    *(float *)(uVar7 + 0x920) = fVar3;
    param_1[0x248] = (int)fVar3;
    iVar5 = FUN_00a8cac0();
    if (iVar5 == 4) {
      FUN_00aa4520(param_1[0x255],iVar4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 4;
      return;
    }
    iVar5 = FUN_00a8cac0();
    if (iVar5 == 5) {
      FUN_00aa4520(param_1[0x254],iVar4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 5;
      return;
    }
    break;
  case 4:
    iVar4 = FUN_00a8c760(0x20);
    if (iVar4 != 0) {
      if (param_1[0x250] == 0) {
        FUN_00b85350(0x40400000,0x3dcccccd,0x3dcccccd,1,1,0x3dcccccd);
      }
      else {
        FUN_00b7ab30(0x40400000);
      }
      param_1[0x250] = param_1[0x250] + 1;
      iVar4 = FUN_00416db0();
      if (((iVar4 != 0) && (param_1[0x251] == 0)) && (iVar4 = FUN_00b7a500(), iVar4 != 0)) {
        FUN_00ba6810(1,0);
        DAT_01dc08d4 = 0;
        FUN_00b85350(0x40400000,0x3f800000,0x3dcccccd,1,1,0x3dcccccd);
        FUN_00b7e090(0);
        return;
      }
    }
    iVar4 = FUN_00b7a500();
    param_1[0x251] = iVar4;
    goto LAB_00584e1c;
  case 5:
LAB_00584e1c:
    FUN_00b94790(0x3f800000,0x3f800000);
    if ((param_1[0x187] == 5) && (iVar4 = FUN_00a8c760(0xb), iVar4 != 0)) {
      FUN_00ba6810(1,1);
      (**(code **)(*param_1 + 0x30c))(param_1[599],0);
      iVar4 = FUN_00a8eea0();
      if (0 < iVar4) {
        fVar8 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
        param_1[0x9fb] = (int)(float)fVar8;
        FUN_00a8caf0(0xc9,0,0,0);
        return;
      }
      FUN_00a8caf0(0xda,0,0,0);
      return;
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      if (param_1[0x187] != 4) {
        FUN_00ba6810(1,1);
        FUN_00a8caf0(0xce,0,0,0);
        return;
      }
      FUN_00ba6810(1,1);
      pcVar2 = *(code **)(*param_1 + 0x388);
      param_1[0x2dd] = 0;
      (*pcVar2)(0);
      return;
    }
  }
  return;
}

// 00584F50  FUN_00584f50  size=355  [callgraph]
void __thiscall FUN_00584f50(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  *(undefined4 *)(param_2 * 0xe0 + 0x1270 + param_1) = 0;
  *(undefined4 *)(param_1 + 0x16f4) = 0;
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x16f8) = 0;
  iVar3 = 0;
  if (*(int *)(param_1 + 0x1270) != 0) {
    *(int *)(param_1 + 0x16f4) = *(int *)(param_1 + 0x16f4) + 1;
    *(int *)(param_1 + 0x16f8) = *(int *)(param_1 + 0x16f8) + 1;
    if (*(int *)(param_1 + 0x1278) != 0) {
      iVar3 = 1;
    }
  }
  if (*(int *)(param_1 + 0x1350) != 0) {
    *(int *)(param_1 + 0x16f4) = *(int *)(param_1 + 0x16f4) + 1;
    *(int *)(param_1 + 0x16fc) = *(int *)(param_1 + 0x16fc) + 1;
    if (*(int *)(param_1 + 0x1358) != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  if (*(int *)(param_1 + 0x1430) != 0) {
    *(int *)(param_1 + 0x16f4) = *(int *)(param_1 + 0x16f4) + 1;
    *(int *)(param_1 + 0x16f8) = *(int *)(param_1 + 0x16f8) + 1;
    if (*(int *)(param_1 + 0x1438) != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  if (*(int *)(param_1 + 0x1510) != 0) {
    *(int *)(param_1 + 0x16f4) = *(int *)(param_1 + 0x16f4) + 1;
    *(int *)(param_1 + 0x16fc) = *(int *)(param_1 + 0x16fc) + 1;
    if (*(int *)(param_1 + 0x1518) != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  if (*(int *)(param_1 + 0x15f0) != 0) {
    *(int *)(param_1 + 0x16f4) = *(int *)(param_1 + 0x16f4) + 1;
    *(int *)(param_1 + 0x16f8) = *(int *)(param_1 + 0x16f8) + 1;
    if (*(int *)(param_1 + 0x15f8) != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  if (*(int *)(param_1 + 0x16d0) != 0) {
    *(int *)(param_1 + 0x16f4) = *(int *)(param_1 + 0x16f4) + 1;
    *(int *)(param_1 + 0x16fc) = *(int *)(param_1 + 0x16fc) + 1;
    if (*(int *)(param_1 + 0x16d8) != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  if ((iVar3 == 0) && (piVar1 = *(int **)(param_1 + 0xa84), piVar1 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d70(puVar5);
    if (iVar3 != 0) {
      FUN_00b8a140(0,1);
      pcVar2 = *(code **)(*piVar1 + 0x388);
      piVar1[0x2dd] = 0;
      (*pcVar2)(0);
    }
  }
  if (*(int *)(param_1 + 0x16f4) == 0) {
    uVar4 = FUN_00e678d0(2,0xcf0a,0xffffffff);
    FUN_00e80d00(uVar4);
  }
  *(undefined4 *)(param_1 + 0x1190) = 0xbf800000;
  return;
}

// 005850C0  FUN_005850c0  size=101  [callgraph]
void FUN_005850c0(void)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  
  FUN_00ac8d40(0);
  uVar2 = 0;
  ppuVar3 = &PTR_s_Lshield_Bottom_01641e2c;
  do {
    if (uVar2 < 6) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x370) != 0)) {
          FUN_00a1bd80(*ppuVar3,0);
        }
      }
    }
    ppuVar3 = ppuVar3 + 6;
    uVar2 = uVar2 + 1;
  } while ((int)ppuVar3 < 0x1641ebc);
  return;
}

// 00585130  FUN_00585130  size=101  [callgraph]
void FUN_00585130(void)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  
  FUN_00ac8d40(1);
  uVar2 = 0;
  ppuVar3 = &PTR_s_Lshield_Bottom_01641e2c;
  do {
    if (uVar2 < 6) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x370) != 0)) {
          FUN_00a1bd80(*ppuVar3,1);
        }
      }
    }
    ppuVar3 = ppuVar3 + 6;
    uVar2 = uVar2 + 1;
  } while ((int)ppuVar3 < 0x1641ebc);
  return;
}

// 00585210  FUN_00585210  size=493  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00585210(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *local_bc;
  int local_b4;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  int local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
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
  
  if ((_DAT_01b35050 & 1) == 0) {
    _DAT_01b35050 = _DAT_01b35050 | 1;
    _DAT_01b35040 = 0;
    _DAT_01b35044 = 0;
    _DAT_01b35048 = 0;
  }
  local_bc = (undefined4 *)(param_1 + 0x1194);
  puVar4 = (undefined4 *)(param_3 + 8);
  param_4 = param_4 - (int)param_2;
  *(undefined4 *)(param_1 + 0x11a4) = 0;
  local_b4 = 4;
  do {
    if ((*(int *)(param_4 + (int)param_2) != 0) && (iVar1 = *param_2, iVar1 != -1)) {
      uVar3 = *(undefined4 *)(param_1 + 0x18ac);
      FUN_00a7c930();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      local_90 = puVar4[-2];
      local_8c = puVar4[-1];
      local_60 = 1;
      local_88 = *puVar4;
      local_54 = 1;
      local_84 = puVar4[1];
      local_80 = _DAT_01b35040;
      local_9c = 0x10;
      local_7c = _DAT_01b35044;
      local_68 = 0;
      local_14 = 0xffffffff;
      local_78 = _DAT_01b35048;
      local_50 = 0;
      local_4c = 0;
      local_74 = _DAT_01b3504c;
      local_18 = 0;
      local_1c = 0;
      local_20 = 0xffffffff;
      local_6c = 0x40400000;
      local_64 = 0xbf800000;
      local_58 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0x3f800000;
      local_24 = 0x3f800000;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_5c = 0x41200000;
      local_98 = iVar1;
      local_70 = uVar3;
      uVar3 = FUN_00c5abe0(local_a0);
      *local_bc = uVar3;
      *(int *)(param_1 + 0x11a4) = *(int *)(param_1 + 0x11a4) + 1;
    }
    local_bc = local_bc + 1;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 4;
    local_b4 = local_b4 + -1;
  } while (local_b4 != 0);
  return;
}

// 00585400  FUN_00585400  size=127  [callgraph]
uint FUN_00585400(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    iVar1 = FUN_00c19c30(2,0);
    if ((iVar1 != 0) || (iVar1 = FUN_00c19c30(2,1), iVar1 != 0)) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  piVar3 = (int *)FUN_00a7c8a0();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  puVar4 = &DAT_01b34f20;
  (**(code **)(*piVar3 + 4))(&DAT_01b34f20);
  iVar1 = FUN_00dd6d70(puVar4);
  return -(uint)(iVar1 != 0) & (uint)piVar3;
}

// 005854C0  FUN_005854c0  size=304  [callgraph]
int __fastcall FUN_005854c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fVar1 = -1.0;
  iVar5 = -1;
  if (*(int *)(param_1 + 0x17e0) != 0) {
    iVar5 = 0;
    fVar3 = *(float *)(param_1 + 0x17f0) - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x17f4) - *(float *)(param_1 + 0x44);
    fVar1 = *(float *)(param_1 + 0x17f8) - *(float *)(param_1 + 0x48);
    fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  }
  if ((*(int *)(param_1 + 0x1800) != 0) &&
     ((fVar4 = *(float *)(param_1 + 0x1810) - *(float *)(param_1 + 0x40),
      fVar3 = *(float *)(param_1 + 0x1814) - *(float *)(param_1 + 0x44),
      fVar2 = *(float *)(param_1 + 0x1818) - *(float *)(param_1 + 0x48),
      fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2, fVar2 < fVar1 || (iVar5 == -1)))) {
    iVar5 = 1;
    fVar1 = fVar2;
  }
  if ((*(int *)(param_1 + 0x1820) != 0) &&
     ((fVar4 = *(float *)(param_1 + 0x1830) - *(float *)(param_1 + 0x40),
      fVar3 = *(float *)(param_1 + 0x1834) - *(float *)(param_1 + 0x44),
      fVar2 = *(float *)(param_1 + 0x1838) - *(float *)(param_1 + 0x48),
      fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2, fVar2 < fVar1 || (iVar5 == -1)))) {
    iVar5 = 2;
    fVar1 = fVar2;
  }
  if ((*(int *)(param_1 + 0x1840) != 0) &&
     ((fVar4 = *(float *)(param_1 + 0x1850) - *(float *)(param_1 + 0x40),
      fVar3 = *(float *)(param_1 + 0x1854) - *(float *)(param_1 + 0x44),
      fVar2 = *(float *)(param_1 + 0x1858) - *(float *)(param_1 + 0x48),
      fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 < fVar1 || (iVar5 == -1)))) {
    return 3;
  }
  return iVar5;
}

// 005855F0  FUN_005855f0  size=82  [callgraph]
uint FUN_005855f0(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_1 < 4) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      puVar3 = &DAT_01b35148;
      (**(code **)(*piVar2 + 4))(&DAT_01b35148);
      iVar1 = FUN_00dd6d70(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 00585650  FUN_00585650  size=128  [callgraph]
undefined4 FUN_00585650(float *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_2 < 4) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01b35148;
        (**(code **)(*piVar2 + 4))(&DAT_01b35148);
        iVar1 = FUN_00dd6d70(puVar3);
        if (iVar1 != 0) {
          D3DXVec3TransformNormal(param_1,&DAT_018815a0,piVar2 + 4);
          *param_1 = (float)piVar2[0x10] + *param_1;
          param_1[1] = (float)piVar2[0x11] + param_1[1];
          param_1[2] = (float)piVar2[0x12] + param_1[2];
          return 1;
        }
      }
    }
  }
  return 0;
}

// 005856D0  FUN_005856d0  size=123  [callgraph]
float10 FUN_005856d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_4 == 0) {
    iVar1 = FUN_005855f0(param_1);
    if (iVar1 != 0) {
      local_20 = *(undefined4 *)(iVar1 + 0x40);
      local_1c = *(undefined4 *)(iVar1 + 0x44);
      local_18 = *(undefined4 *)(iVar1 + 0x48);
      local_14 = *(undefined4 *)(iVar1 + 0x4c);
      goto LAB_00585728;
    }
  }
  else {
    iVar1 = FUN_00585650(&local_20,param_1);
    if (iVar1 != 0) {
LAB_00585728:
      fVar2 = (float10)FUN_0057bdc0(&local_20,param_2,param_3);
      return fVar2;
    }
  }
  return (float10)0;
}

// 00585750  FUN_00585750  size=87  [callgraph]
float10 __thiscall FUN_00585750(int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = FUN_00585650(&local_20,param_2);
  if (iVar1 != 0) {
    fVar2 = (float10)*(float *)(param_1 + 0x40) - (float10)local_20;
    fVar3 = (float10)*(float *)(param_1 + 0x44) - (float10)local_1c;
    fVar4 = (float10)*(float *)(param_1 + 0x48) - (float10)local_18;
    return fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  }
  return (float10)0;
}

// 005858B0  FUN_005858b0  size=687  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005858b0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x248] = 0x41700000;
    if ((*(byte *)(param_1 + 0x438) & 1) != 0) {
      FUN_00aa4080(0xe6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
      return;
    }
    FUN_00aa4080(0xe6,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00585973;
  case 1:
LAB_00585973:
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d32b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0xe7,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
      return;
    }
    break;
  case 2:
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d32b8c2);
    fVar1 = (float)param_1[0x2a4];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (fVar1 <= 100.0) {
      uVar5 = 1;
      uVar4 = 0x8000000;
      uVar3 = 0;
      FUN_00a92f90(0,0x8000000,1);
      FUN_00e3a1a0(uVar3,uVar4,uVar5);
      param_1[0x187] = param_1[0x187] + 1;
      _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
      return;
    }
    break;
  case 3:
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d32b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0xe8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
      return;
    }
  }
  _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
  return;
}

// 00588B20  Em0310::vf44  size=317  [class]
void __fastcall Em0310::vf44(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x19a8) != 0) {
    DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
    FUN_00cad200(0);
    *(undefined4 *)(param_1 + 0x19a8) = 0;
  }
  FUN_00a5dc60();
  iVar2 = 6;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x1874) != 0) {
    FUN_00cad200(0);
    *(undefined4 *)(param_1 + 0x1874) = 0;
  }
  RayCastManager::getWork(param_1 + 0x17d0);
  if (*(int *)(param_1 + 0xeb8) != 0) {
    (**(code **)(*(int *)(param_1 + 0xe20) + 8))(0,0,0);
  }
  FUN_00a92a00();
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a944d0();
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  BehaviorEmBase::vf44();
  return;
}

// 00588C60  Em0310::vf248  size=193  [class]
void __fastcall Em0310::vf248(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00e03080(iVar1,1);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00e03080(iVar1,2);
  }
  if ((*(uint *)(param_1 + 0x10e0) & 0x800) != 0) {
    iVar1 = FUN_005855f0(*(undefined4 *)(param_1 + 0x1864));
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4f0) != 0)) {
      FUN_00e03080(*(int *)(iVar1 + 0x4f0),3);
    }
  }
  uVar2 = 0;
  do {
    if (uVar2 < 6) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00e03080(iVar1,uVar2 + 4 & 0xff);
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return;
}

// 00588D30  Em0310::vfFC  size=258  [class]
void __fastcall Em0310::vfFC(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  BehaviorAppBase::vfFC();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b35144;
      (**(code **)(*piVar2 + 4))(&DAT_01b35144);
      iVar1 = FUN_00dd6d70(puVar3);
      if (iVar1 != 0) {
        FUN_00aa4520(0x124,*(undefined4 *)(param_1 + 0x4f0),0,0,0x3f800000,0,0xbf800000,0x3f800000);
        (**(code **)(*piVar2 + 100))();
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b35144;
      (**(code **)(*piVar2 + 4))(&DAT_01b35144);
      iVar1 = FUN_00dd6d70(puVar3);
      if (iVar1 != 0) {
        FUN_00aa4520(0x123,*(undefined4 *)(param_1 + 0x4f0),0,0,0x3f800000,0,0xbf800000,0x3f800000);
        (**(code **)(*piVar2 + 100))();
      }
    }
  }
  FUN_00a9e120(0,0x702,0xffffffff);
  return;
}

// 00588E40  FUN_00588e40  size=240  [callgraph]
void __thiscall FUN_00588e40(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x200;
  if (param_2 != 0) {
    FUN_00a8eeb0();
    iVar1 = FUN_00fdbc60();
    FUN_00a8ee20(iVar1 + -1);
  }
  FUN_0057c950();
  FUN_00a9e120(0,0x702,0xffffffff);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35144;
    (**(code **)(*piVar2 + 4))(&DAT_01b35144);
    iVar1 = FUN_00dd6d70(puVar3);
    if (iVar1 != 0) {
      FUN_00aa4520(0x123,*(undefined4 *)(param_1 + 0x4f0),0,0,0x3f800000,0,0xbf800000,0x3f800000);
      (**(code **)(*piVar2 + 100))();
    }
  }
  FUN_00581cb0(2);
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x400;
  *(undefined4 *)(param_1 + 0x1868) = 0;
  *(undefined4 *)(param_1 + 0x1190) = 0xbf800000;
  return;
}

// 00588F30  FUN_00588f30  size=76  [callgraph]
void FUN_00588f30(void)

{
  FUN_00581cb0(0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a94bc0(1,0);
  FUN_00a94bc0(2,0);
  FUN_00a94bc0(3,0);
  return;
}

// 00588F80  FUN_00588f80  size=214  [callgraph]
void __fastcall FUN_00588f80(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x17d0) != 0) {
    piVar2 = (int *)((*(int *)(param_1 + 0x17d4) * 3 + 0x174) * 0x10 + param_1);
    local_8 = 0;
    local_4 = 0;
    iVar1 = FUN_00907560(param_1 + 0x17d0,piVar2 + 4,piVar2 + 8,&local_8,&local_4,0,0,0);
    *piVar2 = iVar1;
    if (iVar1 != 0) {
      uVar3 = 0;
      if (local_8 != 0) {
        iVar1 = FUN_008f7780(local_8);
        if (iVar1 != 0) {
          uVar3 = *(uint *)(iVar1 + 0x4c0) >> 4 & 1;
        }
      }
      if (local_4 != 0) {
        iVar1 = FUN_008f7780(local_4);
        if (iVar1 != 0) {
          uVar3 = *(uint *)(iVar1 + 0x4c0) >> 4 & 1;
        }
      }
      if (uVar3 != 0) {
        *piVar2 = 0;
      }
    }
    *(int *)(param_1 + 0x17d4) = (*(int *)(param_1 + 0x17d4) + 1) % 3;
  }
  FUN_00582320();
  return;
}

// 00589060  FUN_00589060  size=379  [callgraph]
void __fastcall FUN_00589060(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  
  if (0 < *(int *)(param_1 + 0x1100)) {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1110);
    *(float *)(param_1 + 0x1110) = fVar1;
    fVar2 = *(float *)(param_1 + 0x189c + (*(uint *)(param_1 + 0x10e0) >> 9 & 1) * 4) * 60.0;
    if (fVar2 < fVar1 != (fVar2 == fVar1)) {
      *(undefined4 *)(param_1 + 0x1110) = 0;
      *(undefined4 *)(param_1 + 0x1100) = 0;
      *(undefined4 *)(param_1 + 0x1104) = 0;
      *(undefined4 *)(param_1 + 0x110c) = 0;
      *(undefined4 *)(param_1 + 0x1108) = 0;
      *(undefined4 *)(param_1 + 0x1968) = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x10e0) & 0x40) != 0) {
    fVar1 = *(float *)(param_1 + 0x1124) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1124) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(undefined4 *)(param_1 + 0x1124) = 0;
      *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xffffffbf;
    }
  }
  iVar3 = FUN_00a8e520();
  if (iVar3 == 0) {
    if ((*(uint *)(param_1 + 0x10e0) & 0x100) != 0) {
      FUN_00582d90(0);
      *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xfffffeff;
    }
  }
  else if ((*(uint *)(param_1 + 0x10e0) & 0x100) == 0) {
    FUN_00582d90(1);
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x100;
  }
  iVar3 = FUN_00a8e520();
  if (iVar3 != 0) {
    iVar3 = 0;
    piVar4 = (int *)(param_1 + 0x1278);
    do {
      if ((piVar4[-2] != 0) && (*piVar4 != 0)) {
        if ((*(uint *)(param_1 + 0x10e0) & 0x4000) != 0) {
          FUN_00a938c0(0);
          FUN_00a938c0(2);
          *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xffffbfff;
        }
        goto LAB_00589193;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x38;
    } while (iVar3 < 6);
  }
  if ((*(uint *)(param_1 + 0x10e0) & 0x4000) == 0) {
    FUN_00a93910(0);
    FUN_00a93910(2);
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x4000;
  }
LAB_00589193:
  iVar3 = FUN_00a94ce0(4);
  if (iVar3 != 0) {
    FUN_00a94bc0(4,0);
  }
  return;
}

// 005891E0  FUN_005891e0  size=201  [callgraph]
void __thiscall FUN_005891e0(int param_1,int param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xfffffffd;
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x10e0) & 0x200) == 0) {
    FUN_0057dd00(0);
  }
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xffffff7f;
  *(undefined4 *)(param_1 + 0x1164) = 0;
  if (param_2 != 0) {
    FUN_0057ca90();
  }
  (**(code **)(*(int *)(param_1 + 0xf80) + 8))(0,0,0);
  (**(code **)(*(int *)(param_1 + 0x1030) + 8))(0,0,0);
  if ((*(uint *)(param_1 + 0x10e0) & 0x40000) != 0) {
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xfffbffff;
    FUN_00a8c9b0(0,0x197,0,0);
  }
  *(undefined4 *)(param_1 + 0x1700) = 0xbf800000;
  do {
    FUN_00a938c0(iVar1 + 3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}

// 005892B0  FUN_005892b0  size=249  [callgraph]
void __fastcall FUN_005892b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x16f4) = 0;
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x16f8) = 0;
  puVar5 = (undefined4 *)(param_1 + 0x1278);
  do {
    puVar5[1] = 0;
    puVar5[-1] = 1;
    *puVar5 = 0;
    puVar5[-2] = 1;
    puVar5[2] = 0xffffffff;
    iVar1 = FUN_00a82090("Em0310Shield",(&DAT_01642284)[uVar4],0);
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        puVar6 = &DAT_01b3514c;
        (**(code **)(*piVar3 + 4))(&DAT_01b3514c);
        iVar1 = FUN_00dd6d70(puVar6);
        if ((iVar1 != 0) && (*(int *)(param_1 + 0x4f0) != 0)) {
          piVar3[0x21c] = uVar4;
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c960(uVar2);
        }
      }
    }
    FUN_00583620(uVar4);
    FUN_005836c0(uVar4);
    *(int *)(param_1 + 0x16f4) = *(int *)(param_1 + 0x16f4) + 1;
    if ((uVar4 & 1) == 0) {
      *(int *)(param_1 + 0x16f8) = *(int *)(param_1 + 0x16f8) + 1;
    }
    else {
      *(int *)(param_1 + 0x16fc) = *(int *)(param_1 + 0x16fc) + 1;
    }
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 0x38;
  } while ((int)uVar4 < 6);
  return;
}

// 005893B0  FUN_005893b0  size=584  [callgraph]
void __thiscall
FUN_005893b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int aiStack_40 [4];
  int local_30 [12];
  
  if (param_4 == 0) {
    if ((-1 < *(int *)(&DAT_0164229c + *(int *)(param_1 + 0x1178) * 8)) &&
       (iVar5 = *(int *)(&DAT_0164229c + *(int *)(param_1 + 0x1178) * 8) * 0xe0,
       *(int *)(iVar5 + 0x1270 + param_1) != 0)) {
      *(undefined4 *)(iVar5 + 0x1278 + param_1) = 1;
    }
    if ((-1 < *(int *)(&DAT_016422a0 + *(int *)(param_1 + 0x1178) * 8)) &&
       (iVar5 = *(int *)(&DAT_016422a0 + *(int *)(param_1 + 0x1178) * 8) * 0xe0,
       *(int *)(iVar5 + 0x1270 + param_1) != 0)) {
      *(undefined4 *)(iVar5 + 0x1278 + param_1) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x16f4) < 3) {
    *(undefined4 *)(param_1 + 0x1438) = 1;
    *(undefined4 *)(param_1 + 0x1518) = 1;
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    iVar5 = param_1 + 0x11b0;
    do {
      if (((iVar3 != 2) && (iVar3 != 3)) && (*(int *)(iVar5 + 0xc0) != 0)) {
        aiStack_40[iVar4] = iVar5;
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xe0;
    } while (iVar3 < 6);
    if (iVar4 < 3) {
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          piVar6 = aiStack_40 + iVar5;
          iVar5 = iVar5 + 1;
          *(undefined4 *)(*piVar6 + 200) = 1;
        } while (iVar5 < iVar4);
      }
    }
    else {
      local_30[0] = 0;
      local_30[1] = 1;
      local_30[2] = 0;
      local_30[3] = 2;
      local_30[4] = 1;
      local_30[5] = 2;
      local_30[6] = 0;
      local_30[7] = 3;
      local_30[8] = 1;
      local_30[9] = 3;
      local_30[10] = 2;
      local_30[0xb] = 3;
      uVar2 = 5;
      if (iVar4 == 3) {
        uVar2 = 2;
      }
      sVar1 = FUN_00dde2d0(0,uVar2);
      iVar5 = aiStack_40[local_30[sVar1 * 2 + 1]];
      *(undefined4 *)(aiStack_40[local_30[sVar1 * 2]] + 200) = 1;
      *(undefined4 *)(iVar5 + 200) = 1;
    }
  }
  param_4 = 5;
  iVar5 = 0;
  puVar7 = &DAT_01641e30;
  piVar6 = (int *)(param_1 + 0x1278);
  do {
    if ((piVar6[-2] != 0) && (FUN_00a93910(iVar5 + 3), *piVar6 != 0)) {
      if ((-1 < iVar5) && (iVar5 < 6)) {
        iVar3 = FUN_00a81330();
        if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (*(int *)(iVar3 + 0x370) != 0)
           ) {
          FUN_00a1bd80(puVar7[-1],1);
        }
        (**(code **)(piVar6[-0x2e] + 8))(0,0,0);
      }
      if (param_5 == 0) {
        FUN_00aa4080(*puVar7,param_4,param_3,0x3f800000,0x8040000,param_2,0x3f800000);
      }
      param_4 = param_4 + 1;
    }
    puVar7 = puVar7 + 6;
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 0x38;
  } while ((int)puVar7 < 0x1641ec0);
  return;
}

// 00589610  FUN_00589610  size=177  [callgraph]
void __fastcall FUN_00589610(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint local_8;
  
  piVar7 = (int *)(param_1 + 0x1278);
  local_8 = 0;
  do {
    if (((((piVar7[-2] != 0) && (*piVar7 != 0)) && (local_8 < 6)) &&
        ((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)))) &&
       (iVar6 = 0, 0 < *(short *)(iVar3 + 0x324))) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(iVar3 + 800);
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_01642134), iVar4 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < *(short *)(iVar3 + 0x324));
    }
    local_8 = local_8 + 1;
    piVar7 = piVar7 + 0x38;
  } while ((int)local_8 < 6);
  return;
}

// 005896D0  FUN_005896d0  size=113  [callgraph]
void __fastcall FUN_005896d0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = 0;
  ppuVar2 = &PTR_s_Lshield_Bottom_01641e2c;
  puVar4 = (undefined4 *)(param_1 + 0x1278);
  do {
    if (puVar4[-2] != 0) {
      FUN_00a938c0(uVar3 + 3);
      *puVar4 = 0;
      if (uVar3 < 6) {
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          iVar1 = FUN_00a7c8a0();
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x370) != 0)) {
            FUN_00a1bd80(*ppuVar2,0);
          }
        }
      }
    }
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 0x38;
    ppuVar2 = ppuVar2 + 6;
  } while ((int)uVar3 < 6);
  return;
}

// 00589750  FUN_00589750  size=175  [callgraph]
void __fastcall FUN_00589750(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_8;
  
  param_1 = param_1 + 0x11b0;
  local_8 = 0;
  do {
    if ((((*(int *)(param_1 + 0xc0) != 0) && (local_8 < 6)) && (iVar3 = FUN_00a81330(), iVar3 != 0))
       && ((iVar3 = FUN_00a7c8a0(), iVar3 != 0 && (iVar6 = 0, 0 < *(short *)(iVar3 + 0x324))))) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(iVar3 + 800);
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_01642134), iVar4 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < *(short *)(iVar3 + 0x324));
    }
    local_8 = local_8 + 1;
    param_1 = param_1 + 0xe0;
  } while ((int)local_8 < 6);
  return;
}

// 00589800  FUN_00589800  size=158  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00589800(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (((DAT_01bea060 & 0x2000000) == 0) && ((*(uint *)(param_1 + 0x10e0) & 0x200) == 0)) {
    if ((*(uint *)(param_1 + 0x10e0) & 2) != 0) {
      *(float *)(param_1 + 0x1700) = *(float *)(param_1 + 0x1700) - _DAT_01be942c;
    }
    *(undefined4 *)(param_1 + 0x16f0) = 0;
    piVar2 = (int *)(param_1 + 0x1274);
    iVar1 = 0;
    do {
      if (piVar2[-1] != 0) {
        if (*piVar2 == 0) {
          piVar2[2] = (int)(*(float *)(param_1 + 0x910) + (float)piVar2[2]);
          if (*(int *)(param_1 + 0xf68) != 0) goto LAB_0058988c;
          piVar2[2] = 0;
          *piVar2 = 1;
          piVar2[1] = 0;
          FUN_00583760(iVar1);
        }
        *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + 1;
      }
LAB_0058988c:
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x38;
    } while (iVar1 < 6);
  }
  return;
}

// 005898A0  FUN_005898a0  size=148  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005898a0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x1184) != 0) &&
     (fVar1 = *(float *)(param_1 + 0x1188) - _DAT_01be942c, *(float *)(param_1 + 0x1188) = fVar1,
     fVar1 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x1184) = 0;
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x80;
    FUN_005839c0(*(undefined4 *)(param_1 + 0x118c));
    FUN_00c27f40(0xf,0xbf800000);
    FUN_0057c7e0();
    iVar2 = FUN_00ac8120();
    if (iVar2 != 0) {
      FUN_00b7ab80(0x41a00000,0x3d4ccccd);
    }
  }
  return;
}

// 005899D0  FUN_005899d0  size=111  [callgraph]
void FUN_005899d0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  iVar3 = 6;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01b3514c;
        (**(code **)(*piVar2 + 4))(&DAT_01b3514c);
        iVar1 = FUN_00dd6d70(puVar4);
        if (iVar1 != 0) {
          piVar2[0x260] = 0;
        }
      }
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_005896d0();
  FUN_00589750();
  return;
}

// 00589A40  FUN_00589a40  size=33  [callgraph]
void FUN_00589a40(void)

{
  int iVar1;
  
  iVar1 = FUN_00585400();
  if (iVar1 != 0) {
    iVar1 = FUN_004fbac0();
    if (iVar1 != 0) {
      FUN_004fbae0();
      return;
    }
  }
  return;
}

// 00589A90  FUN_00589a90  size=54  [callgraph]
void __thiscall FUN_00589a90(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00585400();
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xeb0) = param_2;
  }
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x1000;
    return;
  }
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xffffefff;
  return;
}

// 00589AF0  FUN_00589af0  size=52  [callgraph]
void __fastcall FUN_00589af0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00585400();
  if (iVar1 == 0) {
    FUN_00c18610(2,0);
    iVar1 = FUN_00585400();
    if (iVar1 != 0) {
      FUN_004fbb20(*(undefined4 *)(param_1 + 0x4f0));
    }
  }
  return;
}

// 00589B50  FUN_00589b50  size=42  [callgraph]
undefined4 FUN_00589b50(void)

{
  int iVar1;
  
  iVar1 = FUN_00585400();
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0xeb4) != 0 || (0.0 < *(float *)(iVar1 + 0xec8))))) {
    return 1;
  }
  return 0;
}

// 00589B80  FUN_00589b80  size=265  [callgraph]
void __fastcall FUN_00589b80(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (((*(uint *)(param_1 + 0x1864) < 4) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b35148;
    (**(code **)(*piVar2 + 4))(&DAT_01b35148);
    iVar1 = FUN_00dd6d70(puVar4);
    if (iVar1 != 0) {
      FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],9,0xffffffff);
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
      }
      FUN_0057e3f0();
      FUN_009f8c10(0);
      if ((undefined4 *)piVar2[0xdc] != (undefined4 *)0x0) {
        piVar2[0xd9] = piVar2[0xd9] | 0x400000;
        *(undefined4 *)piVar2[0xdc] = 0;
      }
    }
  }
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xffffdfff;
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x800;
  *(undefined4 *)(param_1 + 0x186c) = 0;
  *(undefined4 *)(param_1 + 0x1870) = *(undefined4 *)(param_1 + 0x1924);
  FUN_0057de10(*(undefined4 *)(param_1 + 0x1864),0);
  FUN_005891e0(1);
  return;
}

// 00589C90  FUN_00589c90  size=1932  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00589c90(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_005845e0();
    param_1[0x438] = param_1[0x438] | 0xc;
    if (param_1[0x221] == 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar6 = param_1[0x1d9];
      if (*(int *)(iVar6 + 0x104) != 1) {
        *(undefined4 *)(iVar6 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 4) = 0;
      }
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(0xd);
      FUN_008e0ae0(0);
    }
    iVar6 = FUN_00ac9790();
    if ((iVar6 != 0) && (iVar6 = FUN_00ac8120(), iVar6 != 0)) {
      FUN_00b7ec60();
    }
    FUN_00aa4080(0xd8,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_005855f0(param_1[0x619]);
    if (iVar6 != 0) {
      local_70 = *(float *)(iVar6 + 0x40);
      local_6c = *(float *)(iVar6 + 0x44);
      local_68 = *(float *)(iVar6 + 0x48);
      local_64 = *(float *)(iVar6 + 0x4c);
      FUN_0057bdc0(&local_70,0x3f000000,0x3db2b8c2);
    }
    param_1[0x664] = param_1[0x10];
    param_1[0x665] = param_1[0x11];
    param_1[0x666] = param_1[0x12];
    param_1[0x667] = param_1[0x13];
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      iVar6 = FUN_005855f0(param_1[0x619]);
      if (iVar6 != 0) {
        local_70 = *(float *)(iVar6 + 0x40);
        local_6c = *(float *)(iVar6 + 0x44);
        local_68 = *(float *)(iVar6 + 0x48);
        local_64 = *(float *)(iVar6 + 0x4c);
        FUN_0057bdc0(&local_70,0x3f800000,0x40490fdb);
      }
      FUN_00aa4080(0xd9,0,0x3d088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      param_1[600] = 0;
      param_1[0x259] = 0;
      param_1[0x25a] = 0;
      param_1[0x25b] = 0;
LAB_00589ea4:
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00585650(&local_60,param_1[0x619]);
    if ((iVar6 != 0) && (iVar6 = FUN_00a12210(0xf00), iVar6 != 0)) {
      D3DXMatrixRotationY(local_50,param_1[0x25]);
      D3DXVec3TransformNormal(&stack0xffffff88,iVar6 + 0x50,&fStack_58);
      param_1[0x14] =
           (int)((float)param_1[0x14] + (local_60 - ((float)param_1[0x14] + local_70)) * 0.12);
      param_1[0x15] =
           (int)((float)param_1[0x15] + (fStack_5c - ((float)param_1[0x15] + local_6c)) * 0.12);
      param_1[0x16] =
           (int)((fStack_58 - ((float)param_1[0x16] + local_68)) * 0.12 + (float)param_1[0x16]);
      param_1[0x17] =
           (int)((fStack_54 - ((float)param_1[0x17] + local_64)) * 0.12 + (float)param_1[0x17]);
    }
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00aa4080(0xda,0,0x3d088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x438] = param_1[0x438] | 0x20000;
    _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
    return;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a8c760(0);
    if (iVar6 != 0) {
      FUN_005856d0(param_1[0x619],0x3e800000,0x3e32b8c2,0);
    }
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 == 0) break;
    FUN_00aa4080(0xdb,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4080(0xdc,1,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    iVar6 = FUN_005855f0(param_1[0x619]);
    if (iVar6 != 0) {
      FUN_00aa4520(0xdd,param_1[0x13c],0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    goto LAB_00589ea4;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_005855f0(param_1[0x619]);
    if (iVar6 != 0) {
      iVar5 = FUN_00a8c760(10);
      if (iVar5 != 0) {
        FUN_00589b80();
      }
      iVar5 = FUN_00a8c760(0);
      if ((iVar5 != 0) && (iVar5 = FUN_00a12210(0xf00), iVar5 != 0)) {
        fVar1 = *(float *)(iVar6 + 0x48);
        fVar2 = *(float *)(iVar5 + 0x48);
        fVar3 = *(float *)(iVar6 + 0x4c);
        fVar4 = *(float *)(iVar5 + 0x4c);
        param_1[0x14] =
             (int)((float)param_1[0x14] +
                  (*(float *)(iVar6 + 0x40) - *(float *)(iVar5 + 0x40)) * 0.1);
        param_1[0x15] = param_1[0x15];
        param_1[0x16] = (int)((fVar1 - fVar2) * 0.1 + (float)param_1[0x16]);
        param_1[0x17] = (int)((fVar3 - fVar4) * 0.1 + (float)param_1[0x17]);
      }
    }
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00aa4080(0xde,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      iVar6 = FUN_005855f0(param_1[0x619]);
      if ((iVar6 != 0) &&
         (FUN_00aa4520(0xdf,param_1[0x13c],0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000),
         *(int *)(iVar6 + 0x370) != 0)) {
        *(undefined4 *)(*(int *)(iVar6 + 0x370) + 4) = 0;
        *(undefined4 *)(*(int *)(iVar6 + 0x370) + 8) = 0;
      }
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00aa4080(0xe0,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      iVar6 = FUN_005855f0(param_1[0x619]);
      if (iVar6 != 0) {
        FUN_00aa4520(0xe1,param_1[0x13c],0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      if (param_1[0x221] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      iVar6 = FUN_00585400();
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0xeb0) = 0;
      }
      param_1[0x438] = param_1[0x438] & 0xffffefff;
      if (param_1[0x1d9] != 0) {
        FUN_008e5c50(7);
        FUN_008e0ae0(1);
        FUN_008e4320(&local_60);
        iVar6 = FUN_009f8b40();
        iVar6 = FUN_0090dc50(0,0,0,&local_60,param_1 + 0x664,iVar6 << 0x10 | 5,"em0310_atarinuke");
        if (iVar6 != 0) {
          (**(code **)(*param_1 + 0x7c))(param_1 + 0x664,param_1 + 0x24);
        }
      }
      iVar6 = FUN_005855f0(param_1[0x619]);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x370) != 0)) {
        *(undefined4 *)(*(int *)(iVar6 + 0x370) + 4) = 0;
        *(undefined4 *)(*(int *)(iVar6 + 0x370) + 8) = 1;
      }
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
    return;
  }
  param_1[0x438] = param_1[0x438] | 0x20000;
  _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
  return;
}

// 0058AD70  FUN_0058ad70  size=67  [callgraph]
void __fastcall FUN_0058ad70(int param_1)

{
  undefined1 local_120 [284];
  
  if (*(int *)(param_1 + 0xeb8) == 0) {
    FUN_00e01eb0(param_1 + 0xe20);
    FUN_00e028c0(*(undefined4 *)(param_1 + 0x4f0),0,local_120);
  }
  return;
}

// 0058ADC0  FUN_0058adc0  size=67  [callgraph]
undefined4 __fastcall FUN_0058adc0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 - 0x82U < 4) {
      iVar1 = FUN_00585400();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4e4) == 0)) {
        return 1;
      }
    }
  }
  return 0;
}

// 0058AE10  FUN_0058ae10  size=113  [callgraph]
void __thiscall FUN_0058ae10(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  param_1[0x439] = iVar1;
  FUN_00a8caf0(param_2,0,0,0);
  param_1[0x438] = param_1[0x438] & 0xffffffe3;
  (**(code **)(*param_1 + 0x1f8))(0);
  param_1[0x438] = param_1[0x438] & 0xffffffdf;
  iVar1 = FUN_00585400();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xea8) = 0;
  }
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    FUN_00e36b50(0,8,1);
  }
  return;
}

// 0058AE90  Em0310::vf34C  size=154  [class]
void __fastcall Em0310::vf34C(int *param_1)

{
  (**(code **)(*param_1 + 0x1f8))(0);
  (**(code **)(*param_1 + 0x1d4))(0);
  param_1[0x438] = param_1[0x438] & 0xfffffffe;
  if (param_1[0x221] != 0) {
    (**(code **)(*param_1 + 0x314))();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
  }
  param_1[0x438] = param_1[0x438] & 0xffff7fff;
  if ((param_1[0x438] & 0x800U) != 0) {
    FUN_0058ae10(0x70000);
    return;
  }
  if ((param_1[0x438] & 0x200U) != 0) {
    FUN_0058ae10(0x10009);
    return;
  }
  FUN_0058ae10(0x10000);
  return;
}

// 0058AF30  FUN_0058af30  size=415  [between]
void __thiscall FUN_0058af30(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float10 fVar6;
  undefined1 local_20 [28];
  
  fVar6 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar6 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar6));
  if (ABS(fVar6) <= (float10)2.443461) {
    fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
    fVar2 = *(float *)(param_1 + 0x40);
    fVar3 = *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
    fVar4 = *(float *)(param_1 + 0x48);
    pfVar5 = (float *)FUN_00a925a0(local_20);
    if (0.0 <= *pfVar5 * (fVar3 - fVar4) - pfVar5[2] * (fVar1 - fVar2)) {
      if ((*(uint *)(param_1 + 0x10e0) & 0x800) == 0) {
        if (*(int *)(param_1 + 0x16fc) < 1) {
          param_2 = 0;
        }
        FUN_0058ae10((-(uint)(param_2 != 0) & 0x10001) + 0x10004);
        return;
      }
      FUN_0058ae10(0x70003);
      return;
    }
    if ((*(uint *)(param_1 + 0x10e0) & 0x800) == 0) {
      if (0 < *(int *)(param_1 + 0x16f8)) {
        FUN_0058ae10((-(uint)(param_2 != 0) & 0x10003) + 0x10003);
        return;
      }
      FUN_0058ae10(0x10003);
      return;
    }
    FUN_0058ae10(0x70002);
    return;
  }
  if ((*(uint *)(param_1 + 0x10e0) & 0x800) != 0) {
    FUN_0058ae10(0x70004);
    return;
  }
  if ((0 < *(int *)(param_1 + 0x16f8)) && (0 < *(int *)(param_1 + 0x16fc))) {
    FUN_0058ae10((-(uint)(param_2 != 0) & 0x10002) + 0x10005);
    return;
  }
  FUN_0058ae10(0x10005);
  return;
}

// 0058B0D0  FUN_0058b0d0  size=655  [between]
void __fastcall FUN_0058b0d0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x248] = 0x41700000;
    if ((*(byte *)(param_1 + 0x438) & 1) != 0) {
      FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0058b183;
  case 1:
LAB_0058b183:
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d32b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(8,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d32b8c2);
    fVar1 = (float)param_1[0x2a4];
    fVar2 = (float)param_1[0x2a4];
    if ((NAN(fVar2) || 144.0 < fVar2 == (fVar2 == 144.0)) || (iVar3 = FUN_0058adc0(), iVar3 != 0)) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      if (fVar1 <= 25.0) {
        uVar6 = 1;
        uVar5 = 0x8000000;
        uVar4 = 0;
        FUN_00a92f90(0,0x8000000,1);
        FUN_00e3a1a0(uVar4,uVar5,uVar6);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    else {
      FUN_0058ae10(0x10002);
    }
    return;
  case 3:
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d32b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(9,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0058b35b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0058B380  FUN_0058b380  size=646  [between]
void __fastcall FUN_0058b380(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x248] = 0x41700000;
    if ((*(byte *)(param_1 + 0x438) & 1) != 0) {
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    FUN_00aa4080(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if ((param_1[0x438] & 0x200U) == 0) {
      FUN_0057c080(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0058b448;
  case 1:
LAB_0058b448:
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d32b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d32b8c2);
    fVar1 = (float)param_1[0x2a4];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((fVar1 <= 64.0) || (iVar2 = FUN_00589b50(), iVar2 != 0)) {
      uVar5 = 1;
      uVar4 = 0x8000000;
      uVar3 = 0;
      FUN_00a92f90(0,0x8000000,1);
      FUN_00e3a1a0(uVar3,uVar4,uVar5);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d32b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0xd,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0058b602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0058B6D0  FUN_0058b6d0  size=92  [between]
undefined4 __thiscall FUN_0058b6d0(int param_1,int *param_2)

{
  if (((*(byte *)(param_2 + 0x23) & 0x20) != 0) && (*param_2 == 0x187)) {
    *(int *)(param_1 + 0x1140) = param_2[0x40];
    *(int *)(param_1 + 0x1144) = param_2[0x41];
    *(int *)(param_1 + 0x1148) = param_2[0x42];
    *(int *)(param_1 + 0x114c) = param_2[0x43];
    FUN_0058ae10(0x3000c);
    return 1;
  }
  return 0;
}

// 0058B730  FUN_0058b730  size=304  [between]
undefined4 __thiscall FUN_0058b730(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  float10 fVar2;
  
  *param_3 = 0;
  if ((((param_2[0x24] & 0x8000U) == 0) && (*param_2 != 0x57)) && (*param_2 != 0x55)) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x1140);
  if ((*(byte *)(param_1 + 0x10e0) & 2) == 0) {
    *piVar1 = param_2[0x40];
    *(int *)(param_1 + 0x1144) = param_2[0x41];
    *(int *)(param_1 + 0x1148) = param_2[0x42];
    *(int *)(param_1 + 0x114c) = param_2[0x43];
    fVar2 = (float10)FUN_00a8ec30(piVar1);
    fVar2 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar2));
    if ((ABS(fVar2) < (float10)0.03655409 != (ABS(fVar2) == (float10)0.03655409)) ||
       (*param_2 == 0x57)) {
      if ((*(uint *)(param_1 + 0x10e0) & 0x200) != 0) {
        FUN_0058ae10(0x40006);
        *param_3 = 1;
        return 1;
      }
      FUN_0058ae10(0x40004);
    }
  }
  else {
    fVar2 = (float10)FUN_00a8ec30(piVar1);
    fVar2 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar2));
    if ((ABS(fVar2) < (float10)0.03655409 != (ABS(fVar2) == (float10)0.03655409)) &&
       ((*(uint *)(param_1 + 0x10e0) & 0x200) != 0)) {
      *(undefined4 *)(param_1 + 0x1164) = 0;
      FUN_0058ae10(0x40008);
      *param_3 = 1;
      return 1;
    }
  }
  return 1;
}

// 0058B860  FUN_0058b860  size=44  [between]
void __fastcall FUN_0058b860(int *param_1)

{
  (**(code **)(*param_1 + 0x1f8))(1);
  FUN_005891e0(1);
  param_1[0x438] = param_1[0x438] & 0xfffeffff;
  param_1[1099] = 0;
  return;
}

// 0058B890  FUN_0058b890  size=81  [between]
void __fastcall FUN_0058b890(int param_1)

{
  short sVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x8000;
  sVar1 = FUN_00dde2d0(*(undefined2 *)(param_1 + 0x1928),*(undefined2 *)(param_1 + 0x192c));
  *(int *)(param_1 + 0x116c) = (int)sVar1;
  *(undefined4 *)(param_1 + 0x1170) = 0;
  iVar2 = FUN_00585400();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xea8) = 1;
  }
  return;
}

// 0058B930  FUN_0058b930  size=371  [between]
void __thiscall FUN_0058b930(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  
  fVar1 = ABS(param_2);
  *(undefined4 *)(param_1 + 0x1100) = 0;
  *(undefined4 *)(param_1 + 0x1108) = 0;
  *(undefined4 *)(param_1 + 0x110c) = 0;
  if (0.6981317 < fVar1) {
    if (fVar1 < 2.268928 == (fVar1 == 2.268928)) {
      iVar4 = 0x50003;
    }
    else if (param_2 <= 0.0) {
      iVar4 = 0x50002;
    }
    else {
      iVar4 = 0x50001;
    }
  }
  else {
    iVar4 = 0x50000;
  }
  iVar2 = FUN_00582fe0();
  if ((iVar2 != 0) &&
     ((((*(uint *)(param_1 + 0x10e0) & 0x200) != 0 ||
       (((2 < *(int *)(param_1 + 0x16f4) &&
         ((*(int *)(param_1 + 0x1270) == 0 || (*(int *)(param_1 + 0x1350) == 0)))) &&
        ((*(int *)(param_1 + 0x15f0) == 0 || (*(int *)(param_1 + 0x16d0) == 0)))))) &&
      ((iVar4 == 0x50000 && (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 7) != 0)))))) {
    iVar4 = 0x50004;
  }
  switch(iVar4) {
  case 0x50000:
  case 0x50004:
    if (*(int *)(param_1 + 0x1740) != 0) {
      iVar4 = 0x50008;
    }
    break;
  case 0x50001:
    if (*(int *)(param_1 + 6000) != 0) {
      iVar4 = (uint)(*(int *)(param_1 + 0x1740) != 0) * 2 + 0x50000;
    }
    break;
  case 0x50002:
    if (*(int *)(param_1 + 0x17a0) != 0) {
      iVar4 = (*(int *)(param_1 + 0x1740) != 0) + 0x50000;
    }
  }
  iVar2 = FUN_00582fe0();
  if (((iVar2 != 0) && (iVar4 == 0x50000)) &&
     (fVar5 = (float10)FUN_00dde300(0,0x3f800000), fVar5 < (float10)*(float *)(param_1 + 0x1954))) {
    iVar4 = 0x50004;
  }
  FUN_0058ae10(iVar4);
  return;
}

// 0058BAC0  FUN_0058bac0  size=89  [between]
void FUN_0058bac0(uint param_1)

{
  int iVar1;
  undefined1 local_160 [348];
  
  if (param_1 < 6) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_004cb9a0(0x32);
      FUN_00e020f0(iVar1);
      FUN_00a963e0(local_160);
    }
  }
  return;
}

// 0058BB20  FUN_0058bb20  size=101  [between]
void FUN_0058bb20(void)

{
  int iVar1;
  uint uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  do {
    if (uVar2 < 6) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_004cb9a0(0x32);
        FUN_00e020f0(iVar1);
        FUN_00a963e0(local_160);
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return;
}

// 0058BB90  FUN_0058bb90  size=236  [between]
void __thiscall FUN_0058bb90(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0x1018) != 0)) {
    (**(code **)(*(int *)(param_1 + 0xf80) + 8))(0,0,0);
    if ((1 < *(int *)(param_1 + 0x16f4)) && (-1 < *(int *)(param_1 + 0x1180))) {
      piVar3 = (int *)(&DAT_01642300 + *(int *)(param_1 + 0x1180) * 0x24);
      iVar4 = 3;
      do {
        if (*piVar3 != 0xffff) {
          iVar1 = 0;
          piVar2 = piVar3;
          do {
            piVar2 = piVar2 + 1;
            if (*piVar2 == -1) break;
            if (*(int *)(*piVar2 * 0xe0 + 0x1270 + param_1) == 0) goto LAB_0058bc6a;
            iVar1 = iVar1 + 1;
          } while (iVar1 < 2);
          FUN_00e01ca0();
          FUN_00dffb30(param_1 + 0xf80);
          FUN_00e020f0(*(undefined4 *)(param_1 + 0x4f0));
          FUN_00e028c0(*(undefined4 *)(param_1 + 0x4f0),*piVar3,&stack0xfffffed4);
        }
LAB_0058bc6a:
        piVar3 = piVar3 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

// 0058BC80  FUN_0058bc80  size=226  [between]
void __fastcall FUN_0058bc80(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_128;
  undefined1 local_120 [284];
  
  if (*(int *)(param_1 + 0x1018) == 0) {
    piVar4 = &DAT_01642374;
    do {
      local_128 = 4;
      do {
        if (piVar4[-1] != 0xffff) {
          iVar3 = 0;
          piVar2 = piVar4;
          do {
            piVar2 = piVar2 + 1;
            if (*piVar2 == -1) break;
            iVar1 = *piVar2 * 0xe0;
            if (*piVar4 == 0) {
              if (*(int *)(iVar1 + 0x1270 + param_1) == 0) goto LAB_0058bd42;
            }
            else if (*(int *)(iVar1 + 0x1270 + param_1) != 0) goto LAB_0058bd01;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 4);
          if (*piVar4 == 0) {
LAB_0058bd01:
            FUN_00e01ca0();
            FUN_00dffb30(param_1 + 0x1030);
            FUN_00e020f0(*(undefined4 *)(param_1 + 0x4f0));
            FUN_00e028c0(*(undefined4 *)(param_1 + 0x4f0),piVar4[-1],local_120);
          }
        }
LAB_0058bd42:
        piVar4 = piVar4 + 6;
        local_128 = local_128 + -1;
      } while (local_128 != 0);
    } while ((int)piVar4 < 0x1642494);
  }
  return;
}

// 0058BD70  FUN_0058bd70  size=229  [between]
void __thiscall FUN_0058bd70(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_178 [6];
  undefined1 local_160 [348];
  
  if (param_2 == -1) {
    FUN_00aa92c0(5);
    FUN_0058bb20();
    return;
  }
  param_2 = param_2 + -3;
  local_178[0] = 0xe;
  local_178[1] = 0xb;
  local_178[2] = 0xd;
  local_178[3] = 10;
  local_178[4] = 0xc;
  local_178[5] = 9;
  FUN_004cb9a0(local_178[param_2]);
  FUN_00dffb30(param_1 + 0xed0);
  FUN_00e020f0(*(undefined4 *)(param_1 + 0x4f0));
  FUN_00a963e0(local_160);
  if ((-1 < param_2) && (param_2 < 6)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_004cb9a0(0x32);
      FUN_00e020f0(iVar1);
      FUN_00a963e0(local_160);
    }
  }
  return;
}

// 0058BE60  FUN_0058be60  size=332  [between]
void __fastcall FUN_0058be60(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  short sVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    if (1.5707964 <= ABS((float)param_1[0x245])) {
      sVar1 = FUN_00dde2d0(0,1);
      iVar2 = *(int *)(&DAT_01642490 + sVar1 * 4);
      if (param_1[0x445] == iVar2) {
        param_1[0x446] = param_1[0x446] + 1;
        if (param_1[0x446] < 2) {
          param_1[0x446] = 0;
        }
        else {
          iVar2 = *(int *)(&DAT_01642490 + ((int)sVar1 - 1U & 1) * 4);
        }
      }
    }
    else {
      iVar2 = 0x68;
    }
    param_1[0x445] = iVar2;
    FUN_00aa4080(iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x438] & 0x40U) == 0) {
    if (param_1[((uint)param_1[0x438] >> 9 & 1) + 0x621] <= param_1[0x441]) goto LAB_0058bf98;
  }
  else if (param_1[0x651] <= param_1[0x441]) {
LAB_0058bf98:
    FUN_0058b930(param_1[0x447]);
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
  param_1[0x440] = 0;
  param_1[0x441] = 0;
  param_1[0x443] = 0;
  param_1[0x442] = 0;
  param_1[0x65a] = 0;
                    /* WARNING: Could not recover jumptable at 0x0058bf81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 0058BFB0  FUN_0058bfb0  size=612  [between]
void __fastcall FUN_0058bfb0(int *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  short sVar3;
  int iVar4;
  float10 fVar5;
  
  switch(param_1[0x187]) {
  case 0:
    sVar3 = FUN_00dde2d0(0,1);
    iVar4 = *(int *)(&DAT_01642498 + sVar3 * 4);
    if (param_1[0x445] == iVar4) {
      param_1[0x446] = param_1[0x446] + 1;
      if (param_1[0x446] < 2) {
        param_1[0x446] = 0;
      }
      else {
        iVar4 = *(int *)(&DAT_01642498 + ((int)sVar3 - 1U & 1) * 4);
      }
    }
    param_1[0x445] = iVar4;
    if (param_1[0x221] == 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(iVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      if (param_1[0x221] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      FUN_00aa3f60(0x70);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x22a] = param_1[0x448];
      iVar4 = FUN_00582d30();
      if ((iVar4 != 0) &&
         (fVar5 = (float10)FUN_00dde300(0,0x3f800000),
         fVar5 < (float10)(float)param_1[0x620] != (fVar5 == (float10)(float)param_1[0x620]))) {
        FUN_0058ae10(0x50007);
        return;
      }
      FUN_00aa4080(0x71,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    bVar2 = false;
    iVar4 = FUN_00a8c760(4);
    if ((iVar4 != 0) && ((param_1[0x438] & 0x200U) != 0)) {
      bVar2 = true;
    }
    iVar4 = FUN_00a94ce0(0);
    if ((iVar4 != 0) || (bVar2)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x440] = 0;
      param_1[0x441] = 0;
      param_1[0x443] = 0;
      param_1[0x442] = 0;
      param_1[0x65a] = 0;
                    /* WARNING: Could not recover jumptable at 0x0058c212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 0058C230  FUN_0058c230  size=389  [between]
void __fastcall FUN_0058c230(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  float10 fVar2;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = -0x41b33333;
    if (param_1[0x221] != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    FUN_00aa3f60(0x70);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x22a] = param_1[0x448];
      if ((0 < param_1[0x5bd]) && ((*(byte *)(param_1 + 0x438) & 0x40) == 0)) {
        fVar2 = (float10)FUN_00dde300(0,0x3f800000);
        if (fVar2 < (float10)(float)param_1[0x620] != (fVar2 == (float10)(float)param_1[0x620])) {
          FUN_0058ae10(0x50007);
          return;
        }
      }
      FUN_00aa4080(0x71,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  else if (iVar1 == 2) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x440] = 0;
      param_1[0x441] = 0;
      param_1[0x443] = 0;
      param_1[0x442] = 0;
      param_1[0x65a] = 0;
                    /* WARNING: Could not recover jumptable at 0x0058c299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 0058C3C0  FUN_0058c3c0  size=300  [between]
void __fastcall FUN_0058c3c0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  short sVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    sVar1 = FUN_00dde2d0(0,1);
    iVar2 = *(int *)(&DAT_016424a0 + sVar1 * 4);
    if (param_1[0x445] == iVar2) {
      param_1[0x446] = param_1[0x446] + 1;
      if (param_1[0x446] < 2) {
        param_1[0x446] = 0;
      }
      else {
        iVar2 = *(int *)(&DAT_016424a0 + ((int)sVar1 - 1U & 1) * 4);
      }
    }
    param_1[0x445] = iVar2;
    FUN_00aa4080(iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x438] & 0x40U) == 0) {
    if (param_1[((uint)param_1[0x438] >> 9 & 1) + 0x621] <= param_1[0x441]) goto LAB_0058c4d8;
  }
  else if (param_1[0x651] <= param_1[0x441]) {
LAB_0058c4d8:
    FUN_0058b930(param_1[0x447]);
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
  param_1[0x440] = 0;
  param_1[0x441] = 0;
  param_1[0x443] = 0;
  param_1[0x442] = 0;
  param_1[0x65a] = 0;
                    /* WARNING: Could not recover jumptable at 0x0058c4c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 0058C650  FUN_0058c650  size=429  [between]
void __fastcall FUN_0058c650(int *param_1)

{
  float fVar1;
  int iVar2;
  float local_20 [7];
  
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    switchD_0080dbae::default();
    if (iVar2 != 0) {
      local_20[0] = 0.0;
      local_20[1] = 0.0;
      local_20[2] = 2.4;
      D3DXVec3TransformNormal(local_20,local_20,iVar2 + 0x10);
      fVar1 = *(float *)(iVar2 + 0x48);
      param_1[0x14] = (int)(*(float *)(iVar2 + 0x40) + local_20[0]);
      param_1[0x16] = (int)(fVar1 + local_20[2]);
    }
    FUN_005891e0(1);
    param_1[0x45c] = 0;
    param_1[0x438] = param_1[0x438] & 0xffff7fff;
    iVar2 = FUN_00585400();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0xea8) = 0;
    }
    FUN_005891e0(1);
    param_1[0x248] = 0x42200000;
    FUN_00aa4080(0x6b,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3f4ccccd,0x3edf66f3);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 0058C800  FUN_0058c800  size=227  [between]
void __fastcall FUN_0058c800(int param_1)

{
  float fVar1;
  int iVar2;
  float local_20 [7];
  
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00a7c8a0();
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    switchD_0080dbae::default();
    if (iVar2 != 0) {
      local_20[0] = 0.0;
      local_20[1] = 0.0;
      local_20[2] = 2.4;
      D3DXVec3TransformNormal(local_20,local_20,iVar2 + 0x10);
      fVar1 = *(float *)(iVar2 + 0x48);
      *(float *)(param_1 + 0x50) = *(float *)(iVar2 + 0x40) + local_20[0];
      *(float *)(param_1 + 0x58) = fVar1 + local_20[2];
    }
    *(undefined4 *)(param_1 + 0x920) = 0x40400000;
    FUN_0057bdc0(*(int *)(param_1 + 0xa84) + 0x40,0x3f800000,0x40490fdb);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_0058ae10(0x40006);
  return;
}

// 0058C8F0  FUN_0058c8f0  size=672  [between]
void __fastcall FUN_0058c8f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00a7c8a0();
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    switchD_0080dbae::default();
    if (iVar4 != 0) {
      local_40 = 0.0;
      local_3c = 0.0;
      local_38 = 2.4;
      D3DXVec3TransformNormal(&local_40,&local_40,iVar4 + 0x10);
      fVar1 = *(float *)(iVar4 + 0x48);
      *(float *)(param_1 + 0x50) = *(float *)(iVar4 + 0x40) + local_40;
      *(float *)(param_1 + 0x58) = fVar1 + local_38;
    }
    fVar6 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar6 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar6));
    if (ABS(fVar6) < (float10)2.1816616) {
      FUN_0057bdc0(*(int *)(param_1 + 0xa84) + 0x40,0x3f800000,0x40490fdb);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x40400000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (iVar4 != 0) {
    local_40 = *(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x40);
    local_38 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x48);
    local_34 = *(float *)(iVar4 + 0x4c) - *(float *)(param_1 + 0x4c);
    local_3c = 0.0;
    if ((local_40 != 0.0) || (local_38 != 0.0)) {
      fVar1 = local_40 * local_40 + local_38 * local_38;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_40 = 0.0;
        local_3c = 1.0;
        local_38 = 0.0;
      }
      pfVar5 = (float *)FUN_00a925a0(local_30);
      fVar1 = pfVar5[2] * local_38 + *pfVar5 * local_40 + pfVar5[1] * local_3c;
      pfVar5 = (float *)FUN_00a925a0(local_20);
      fVar2 = pfVar5[2] * local_3c - pfVar5[1] * local_38;
      fVar3 = *pfVar5 * local_38 - pfVar5[2] * local_40;
      local_38 = pfVar5[1] * local_40 - *pfVar5 * local_3c;
      local_40 = fVar2;
      local_3c = fVar3;
      if (0.0 < fVar3) {
        fVar6 = (float10)FUN_00ddbb50(fVar1);
        FUN_0058b930((float)fVar6);
        return;
      }
      fVar6 = (float10)FUN_00ddbb50(fVar1);
      FUN_0058b930((float)-fVar6);
      return;
    }
  }
  FUN_0058b930(0);
  return;
}

// 0058CB90  FUN_0058cb90  size=488  [between]
void __fastcall FUN_0058cb90(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float local_20 [7];
  
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00a7c8a0();
  }
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    switchD_0080dbae::default();
    if (iVar3 != 0) {
      local_20[0] = 0.0;
      local_20[1] = 0.0;
      local_20[2] = 2.4;
      D3DXVec3TransformNormal(local_20,local_20,iVar3 + 0x10);
      fVar1 = *(float *)(iVar3 + 0x48);
      param_1[0x14] = (int)(*(float *)(iVar3 + 0x40) + local_20[0]);
      param_1[0x16] = (int)(fVar1 + local_20[2]);
    }
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3f800000,0x40490fdb);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41700000;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    (**(code **)(*param_1 + 0x220))(0x40400000);
    iVar3 = FUN_00a8c760(0);
    if (iVar3 != 0) {
      FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e19999a,0x3db2b8c2);
    }
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 == 0) && (iVar3 = FUN_00a8c760(4), iVar3 == 0)) {
      return;
    }
    FUN_0058ae10(0x20011);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    uVar4 = FUN_00dde2d0(1,100);
    FUN_00aa4080(~uVar4 & 1 | 0x14,0,0x3d888889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 0058CD80  FUN_0058cd80  size=571  [between]
void __fastcall FUN_0058cd80(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  int iVar2;
  float10 fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x6f,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x22a] = (int)((float)param_1[0x448] * 0.5);
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar3 = (float10)-1.0;
    }
    else {
      fVar3 = (float10)FUN_00e36a50(0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1d4);
    param_1[0x225] =
         (int)(float)(fVar3 * (float10)(float)param_1[0x22a] * (float10)60.0 * (float10)0.9);
    (*UNRECOVERED_JUMPTABLE)(1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x22a] = param_1[0x448];
      FUN_00aa3f60(0x70);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x22a] = param_1[0x448];
      iVar2 = FUN_00582d30();
      if ((iVar2 != 0) &&
         (fVar3 = (float10)FUN_00dde300(0,0x3f800000),
         fVar3 < (float10)(float)param_1[0x620] != (fVar3 == (float10)(float)param_1[0x620]))) {
        FUN_0058ae10(0x50007);
        return;
      }
      FUN_00aa4080(0x71,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    bVar1 = false;
    iVar2 = FUN_00a8c760(4);
    if ((iVar2 != 0) && ((param_1[0x438] & 0x200U) != 0)) {
      bVar1 = true;
    }
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) || (bVar1)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x440] = 0;
      param_1[0x441] = 0;
      param_1[0x443] = 0;
      param_1[0x442] = 0;
      param_1[0x65a] = 0;
                    /* WARNING: Could not recover jumptable at 0x0058cfb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 0058D0B0  FUN_0058d0b0  size=1169  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058d0b0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = (int *)FUN_00ac8120();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x9d,0,0x3e99999a,0x3f800000,0x8000000,0x3eaaaaab,0x3f800000);
    FUN_00582240();
    FUN_00ac8e10(0);
    param_1[0x438] = param_1[0x438] | 0xc;
    FUN_005893b0(0x3eaaaaab,0x3e99999a,1,0);
    iVar7 = FUN_00585400();
    if (iVar7 != 0) {
      *(undefined4 *)(iVar7 + 0xea8) = 1;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x40a00000;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x24b] = 0;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar7 = FUN_00a8c760(0);
  if (iVar7 != 0) {
    FUN_0057bdc0(param_1 + 0x450,0x3e4ccccd,0x3db2b8c2);
  }
  if (param_1[0x188] == 0) {
    (**(code **)(*param_1 + 0x220))(0x40400000);
    fVar1 = (float)param_1[0x248] - _DAT_01be942c;
    param_1[0x248] = (int)fVar1;
    if ((fVar1 <= 0.0) && (piVar6 != (int *)0x0)) {
      param_1[0x188] = param_1[0x188] + 1;
      param_1[0x248] = 0x42200000;
    }
  }
  else if (((param_1[0x188] == 1) && (param_1[0x251] == 0)) && (param_1[0x250] == 0)) {
    (**(code **)(*param_1 + 0x220))(0x40400000);
    param_1[0x248] = (int)((float)param_1[0x248] - _DAT_01be942c);
    FUN_00b7ab80(0x40400000,0x3d4ccccd);
    if (((float)param_1[0x248] <= 0.0) && (piVar6 != (int *)0x0)) {
      iVar7 = (**(code **)(*piVar6 + 0x32c))();
      if (iVar7 != 0) {
        FUN_00b8a140(0,1);
        pcVar5 = *(code **)(*piVar6 + 0x388);
        piVar6[0x2dd] = 0;
        (*pcVar5)(0);
      }
      DAT_01bea090 = DAT_01bea090 | 0x8000;
      param_1[0x251] = param_1[0x251] + 1;
    }
  }
  iVar7 = FUN_00a8c760(10);
  if ((iVar7 == 0) || (param_1[0x251] == 0)) {
LAB_0058d3a7:
    if (piVar6 != (int *)0x0) {
      FUN_00b8c350(0x41200000);
    }
  }
  else if (piVar6 != (int *)0x0) {
    iVar7 = (**(code **)(*piVar6 + 0x1fc))();
    if (iVar7 == 0) {
      if (param_1[0x250] == 0) {
        FUN_0049cc90(0x10);
        FUN_00b7aa80();
        FUN_00b85350(0x40a00000,0x3f800000,0x3dcccccd,1,1,0x3dcccccd);
        FUN_00589610();
        (**(code **)(*param_1 + 0x220))(0);
        piVar6[0xef3] = 1;
      }
      else {
        FUN_00b7ab30(0x40400000);
      }
      param_1[0x250] = param_1[0x250] + 1;
    }
    else {
      FUN_00b7aa80();
      DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
    }
    goto LAB_0058d3a7;
  }
  if (param_1[0x250] == 0) goto LAB_0058d482;
  iVar7 = param_1[0x189];
  if (iVar7 == 0) {
    iVar7 = FUN_00ac82f0();
    if (iVar7 == 0) goto LAB_0058d428;
  }
  else if (iVar7 == 1) {
    iVar7 = FUN_00ac82f0();
    if (iVar7 != 0) goto LAB_0058d428;
  }
  else if ((iVar7 == 2) &&
          ((iVar7 = FUN_00ac82f0(), iVar7 == 0 || (iVar7 = FUN_0057da70(), iVar7 == 0)))) {
    FUN_005896d0();
    FUN_0057c9c0();
    FUN_00589750();
    FUN_0057ca90();
LAB_0058d428:
    param_1[0x189] = param_1[0x189] + 1;
  }
  iVar7 = FUN_00a8e520();
  if (iVar7 == 0) {
    if (0.0 < (float)param_1[0x24b]) {
      FUN_005896d0();
      FUN_0057c9c0();
      FUN_00589750();
      FUN_0057ca90();
      param_1[0x189] = 3;
    }
  }
  else {
    param_1[0x24b] = (int)((float)param_1[0x244] + (float)param_1[0x24b]);
  }
LAB_0058d482:
  fVar1 = (float)param_1[0x14];
  fVar2 = (float)param_1[0x15];
  fVar3 = (float)param_1[0x16];
  fVar4 = (float)param_1[0x17];
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x14] = (int)(((float)param_1[0x14] - fVar1) + fVar1);
  param_1[0x15] = (int)(((float)param_1[0x15] - fVar2) + fVar2);
  param_1[0x16] = (int)(((float)param_1[0x16] - fVar3) + fVar3);
  param_1[0x17] = (int)(((float)param_1[0x17] - fVar4) + fVar4);
  iVar7 = FUN_00a94ce0(0);
  if (iVar7 != 0) {
    FUN_005896d0();
    FUN_00589750();
    FUN_0057ca90();
    iVar7 = FUN_00585400();
    if (iVar7 != 0) {
      *(undefined4 *)(iVar7 + 0xea8) = 0;
    }
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5ca] = 1;
  }
  return;
}

// 0058D550  FUN_0058d550  size=853  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058d550(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = FUN_00ac8120();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x9d,0,0x3d888889,0x3f800000,0x8000000,0x3ed55555,0x3f800000);
    FUN_00582240();
    FUN_00ac8e10(0);
    param_1[0x438] = param_1[0x438] | 0xc;
    FUN_005893b0(0x3ed55555,0x3d888889,1,0);
    FUN_00589610();
    iVar6 = FUN_00585400();
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0xea8) = 1;
    }
    FUN_00582d90(1);
    param_1[0x438] = param_1[0x438] | 0x100;
    param_1[0x248] = 0x40a00000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24b] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar6 = FUN_00a8c760(0);
  if (iVar6 != 0) {
    FUN_0057bdc0(param_1 + 0x450,0x3e4ccccd,0x3db2b8c2);
  }
  if (param_1[0x188] == 0) {
    iVar6 = FUN_00a8e520();
    if (iVar6 == 0) {
      FUN_00a96030(0,0x3f800000);
      FUN_00a96030(5,0x3f800000);
      fVar1 = 1.0;
    }
    else {
      fVar1 = _DAT_01be942c / (float)param_1[0x244];
      FUN_00a96030(0,fVar1);
      FUN_00a96030(5,fVar1);
    }
    FUN_00a96030(6,fVar1);
    iVar6 = FUN_00a8c760(10);
    if (iVar6 != 0) {
      FUN_00a96030(0,0x3f800000);
      FUN_00a96030(5,0x3f800000);
      FUN_00a96030(6,0x3f800000);
      param_1[0x188] = param_1[0x188] + 1;
    }
  }
  if (iVar5 != 0) {
    FUN_00b8c350(0x41200000);
  }
  if (param_1[0x189] == 0) {
    iVar5 = FUN_00ac82f0();
    if (iVar5 == 0) goto LAB_0058d793;
  }
  else {
    if (param_1[0x189] != 2) goto LAB_0058d793;
    iVar5 = FUN_00ac82f0();
    if (iVar5 != 0) {
      iVar5 = FUN_0057da70();
      if (iVar5 != 0) goto LAB_0058d793;
    }
    FUN_005896d0();
    FUN_0057c9c0();
    FUN_00589750();
    FUN_0057ca90();
  }
  param_1[0x189] = param_1[0x189] + 1;
LAB_0058d793:
  iVar5 = FUN_00a8e520();
  if (iVar5 == 0) {
    if (0.0 < (float)param_1[0x24b]) {
      FUN_005896d0();
      FUN_0057c9c0();
      FUN_00589750();
      FUN_0057ca90();
      param_1[0x189] = 2;
    }
  }
  else {
    param_1[0x24b] = (int)((float)param_1[0x244] + (float)param_1[0x24b]);
  }
  fVar1 = (float)param_1[0x14];
  fVar2 = (float)param_1[0x15];
  fVar3 = (float)param_1[0x16];
  fVar4 = (float)param_1[0x17];
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x14] = (int)(((float)param_1[0x14] - fVar1) + fVar1);
  param_1[0x15] = (int)(((float)param_1[0x15] - fVar2) + fVar2);
  param_1[0x16] = (int)(((float)param_1[0x16] - fVar3) + fVar3);
  param_1[0x17] = (int)(((float)param_1[0x17] - fVar4) + fVar4);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    FUN_005896d0();
    FUN_00589750();
    FUN_0057ca90();
    iVar5 = FUN_00585400();
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0xea8) = 0;
    }
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5ca] = 1;
  }
  return;
}

// 0058D9C0  FUN_0058d9c0  size=121  [between]
void __fastcall FUN_0058d9c0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x61c) == 1) &&
      (iVar2 = FUN_00583250(), *(float *)(param_1 + 0xa90) <= 7.8399997)) &&
     ((iVar3 = FUN_00ac82f0(), iVar3 != 0 || (iVar2 != 0)))) {
    fVar1 = 1.0;
    if (iVar2 != 0) {
      fVar1 = 2.0;
    }
    fVar1 = *(float *)(param_1 + 0x93c) - fVar1 * *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x93c) = fVar1;
    if (fVar1 <= 0.0) {
      FUN_005891e0(1);
      FUN_0058ae10(0x2000c);
    }
  }
  return;
}

// 0058DA40  FUN_0058da40  size=599  [between]
void __fastcall FUN_0058da40(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar3 = FUN_00583250();
  iVar4 = param_1[0x187];
  if (iVar4 == 0) {
    param_1[0x188] = 0;
    param_1[0x249] = 0;
    iVar4 = FUN_00585400();
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0xea8) = 1;
    }
    FUN_00aa4080(0x8a,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x24f] = (int)((float)param_1[0x63e] * 60.0);
    param_1[0x24e] = 0;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar4 != 1) {
    if (iVar4 == 2) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 != 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
    }
    goto LAB_0058dc0f;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = 1.0;
  if (iVar3 != 0) {
    fVar1 = 0.25;
  }
  fVar1 = (float)param_1[0x248] - fVar1 * (float)param_1[0x244];
  param_1[0x248] = (int)fVar1;
  bVar2 = 0.0 < fVar1;
  if (param_1[0x439] == 0x40004) {
LAB_0058db76:
    if (!bVar2) goto LAB_0058db7b;
  }
  else {
    if ((bVar2) && ((*(byte *)(param_1 + 0x438) & 2) != 0)) {
      fVar5 = (float10)FUN_0057bec0();
      bVar2 = fVar5 < (float10)1.3962634;
      goto LAB_0058db76;
    }
LAB_0058db7b:
    FUN_005891e0(1);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aa4080(0x8b,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  iVar4 = FUN_00ac82f0();
  if (((iVar4 == 0) && (fVar1 = (float)param_1[0x24e], !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))
      ) && (fVar1 = (float)param_1[0x24e], param_1[0x24e] = (int)((float)param_1[0x244] + fVar1),
           60.0 <= (float)param_1[0x244] + fVar1)) {
    FUN_00589a40();
    param_1[0x24e] = -0x40800000;
  }
LAB_0058dc0f:
  if ((((*(byte *)(param_1 + 0x438) & 0x80) != 0) && (param_1[0x439] != 0x40004)) &&
     ((fVar1 = (float)param_1[0x249], param_1[0x249] = (int)((float)param_1[0x244] + fVar1),
      10.0 <= (float)param_1[0x244] + fVar1 && (param_1[0x187] == 1)))) {
    FUN_005891e0(1);
    FUN_00aa4080(0x8b,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 2;
  }
  return;
}

// 0058DCA0  FUN_0058dca0  size=121  [between]
void __fastcall FUN_0058dca0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x61c) == 1) &&
      (iVar2 = FUN_00583250(), *(float *)(param_1 + 0xa90) <= 7.8399997)) &&
     ((iVar3 = FUN_00ac82f0(), iVar3 != 0 || (iVar2 != 0)))) {
    fVar1 = 1.0;
    if (iVar2 != 0) {
      fVar1 = 2.0;
    }
    fVar1 = *(float *)(param_1 + 0x93c) - fVar1 * *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x93c) = fVar1;
    if (fVar1 <= 0.0) {
      FUN_005891e0(1);
      FUN_0058ae10(0x2000c);
    }
  }
  return;
}

// 0058E3C0  FUN_0058e3c0  size=476  [between]
void __fastcall FUN_0058e3c0(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar3 = FUN_00583250();
  iVar4 = param_1[0x187];
  bVar2 = false;
  if (iVar4 == 0) {
    param_1[0x249] = 0;
    param_1[0x188] = 0;
    iVar4 = FUN_00585400();
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0xea8) = 1;
    }
    FUN_00aa4080(0x83,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24f] = (int)((float)param_1[0x63e] * 60.0);
  }
  else if (iVar4 != 1) {
    if (iVar4 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0058e416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = 1.0;
  if (iVar3 != 0) {
    fVar1 = 0.25;
  }
  param_1[0x248] = (int)((float)param_1[0x248] - fVar1 * (float)param_1[0x244]);
  iVar4 = FUN_00a9f6b0(4);
  if ((0.0 < (float)param_1[0x248]) && ((*(byte *)(param_1 + 0x438) & 2) != 0)) {
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if (((ABS(fVar5) < (float10)2.0943952) && (iVar4 == 0)) &&
       ((iVar3 != 0 ||
        (fVar1 = (float)param_1[0x2a4], NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0)))))
    goto LAB_0058e52c;
  }
  bVar2 = true;
LAB_0058e52c:
  iVar4 = FUN_00585400();
  if (((iVar4 == 0) || ((*(int *)(iVar4 + 0xeb4) == 0 && (*(float *)(iVar4 + 0xec8) <= 0.0)))) &&
     (bVar2)) {
    FUN_005891e0(1);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aa4080(0x84,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  return;
}

// 0058E6D0  FUN_0058e6d0  size=428  [between]
void __fastcall FUN_0058e6d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    if (param_1[0x221] == 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
    }
    FUN_00aa4080(0x1c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
  }
  iVar1 = FUN_00a8c760(9);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
  }
  iVar1 = FUN_00a8c760(0xc);
  if ((iVar1 == 0) && (param_1[0x221] != 0)) {
    (**(code **)(*param_1 + 0x314))();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
  }
  iVar1 = FUN_00a8c760(4);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) || (iVar1 != 0)) {
    if ((((param_1[0x438] & 0x200U) != 0) ||
        (((2 < param_1[0x5bd] && ((param_1[0x49c] == 0 || (param_1[0x4d4] == 0)))) &&
         ((param_1[0x57c] == 0 || (param_1[0x5b4] == 0)))))) || ((param_1[0x438] & 0x10000U) == 0))
    {
                    /* WARNING: Could not recover jumptable at 0x0058e87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_0058ae10(0x20009);
  }
  return;
}

// 0058E880  FUN_0058e880  size=332  [between]
undefined4 __fastcall FUN_0058e880(int param_1)

{
  uint uVar1;
  float10 fVar2;
  
  if ((*(uint *)(param_1 + 0x10e0) & 0x800) == 0) {
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar2 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar2));
    if (ABS(fVar2) < (float10)0.87266463 != (ABS(fVar2) == (float10)0.87266463)) {
      if (9.0 < *(float *)(param_1 + 0xa90)) {
        if (16.0 < *(float *)(param_1 + 0xa90)) {
          return 0;
        }
        uVar1 = FUN_00dde2d0(0,99);
        if ((uVar1 & 1) != 0) goto LAB_0058e9b5;
      }
      else {
        fVar2 = (float10)FUN_00dde300(0,0x3f800000);
        if (fVar2 <= (float10)0.6) {
          FUN_0058ae10(0x20010);
          return 1;
        }
        if (fVar2 < (float10)0.8 != (fVar2 == (float10)0.8)) {
LAB_0058e9b5:
          FUN_0058ae10(0x2000e);
          return 1;
        }
      }
      FUN_0058ae10(0x2000f);
      return 1;
    }
  }
  else if (*(float *)(param_1 + 0xa90) <= 400.0) {
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar2 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar2));
    if (ABS(fVar2) < (float10)2.0943952 != (ABS(fVar2) == (float10)2.0943952)) {
      FUN_0058ae10(0x70005);
      return 1;
    }
  }
  return 0;
}

// 0058E9D0  FUN_0058e9d0  size=285  [between]
undefined4 __fastcall FUN_0058e9d0(int param_1)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  
  uVar2 = FUN_00a8cab0();
  if ((*(int *)(param_1 + 0xaf4) == 1) || ((uVar2 & 0xffff0000) == 0x70000)) {
    return 0;
  }
  piVar3 = (int *)FUN_00ac8120();
  if (piVar3 != (int *)0x0) {
    iVar4 = FUN_00a8cab0();
    if (((iVar4 == 0x7a) || (iVar4 == 0x5e)) &&
       (uVar2 = FUN_00a8cab0(), (uVar2 & 0xffff0000) != 0x40000)) {
      fVar5 = (float10)FUN_00a8ec30(param_1 + 0x40);
      iVar4 = (**(code **)(*piVar3 + 0x84))();
      fVar5 = (float10)FUN_00ddba30(*(float *)(iVar4 + 4) - (float)fVar5);
      if ((ABS(fVar5) < (float10)0.87266463) &&
         (fVar5 = (float10)FUN_0057bec0(),
         fVar5 < (float10)2.1816616 != (fVar5 == (float10)2.1816616))) {
        fVar1 = *(float *)(param_1 + 0x196c) - *(float *)(param_1 + 0x910);
        *(float *)(param_1 + 0x196c) = fVar1;
        if (0.0 < fVar1) {
          return 0;
        }
        if ((*(uint *)(param_1 + 0x10e0) & 0x200) == 0) {
          FUN_0058ae10(0x40005);
          return 1;
        }
        FUN_0058ae10(0x40006);
        return 1;
      }
    }
    *(undefined4 *)(param_1 + 0x196c) = 0x41200000;
  }
  return 0;
}

// 0058F310  FUN_0058f310  size=414  [between]
void __fastcall FUN_0058f310(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    sVar2 = FUN_00dde2d0(0,1);
    param_1[599] = (int)sVar2;
    param_1[0x45c] = param_1[0x45c] + 1;
    FUN_00aa4080(*(undefined4 *)(&DAT_016424ac + param_1[599] * 0xc),0,0x3d888889,0x3f800000,
                 0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4080(*(undefined4 *)(&DAT_016424b0 + param_1[599] * 0xc),1,0x3d888889,0x3f800000,
                 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3db2b8c2);
  }
  if ((*(int *)(&DAT_016424b4 + param_1[599] * 0xc) != 0) && (iVar3 = FUN_00a8c760(0xf), iVar3 != 0)
     ) {
    fVar1 = (float)param_1[0x2a4];
    if (!NAN(fVar1) && 30.25 < fVar1 != (fVar1 == 30.25)) {
      FUN_00581d70(0x3e4ccccd);
      if (param_1[0x250] == 0) {
        FUN_0058ae10(0x20003);
        return;
      }
      FUN_0058ae10(0x20004);
      return;
    }
    param_1[0x250] = param_1[0x250] + 1;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0058f4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0058F4B0  FUN_0058f4b0  size=1578  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058f4b0(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  
  iVar3 = FUN_00a81330();
  uVar6 = 0;
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d70(puVar7);
    uVar6 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00a93090(2);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x249] = param_1[0x62f];
    param_1[0x188] = 0;
    param_1[0x24a] = 0;
    param_1[0x24b] = 0;
    FUN_005891e0(0);
    FUN_0057d780(param_1 + 0x256,param_1 + 0x252,param_1 + 0x253,param_1 + 0x255,param_1 + 0x254);
    param_1[0x5c2] = param_1[0x5c2] + 1;
    if (2 < param_1[0x5c2]) {
      sVar2 = FUN_00dde2d0(0,5);
      param_1[0x5c1] = (int)sVar2;
      param_1[0x5c2] = 0;
    }
    if (uVar6 != 0) {
      uVar5 = FUN_009f8b40();
      FUN_00ac8a80(uVar5);
      *(undefined4 *)(uVar6 + 0x50) = _DAT_01881590;
      *(undefined4 *)(uVar6 + 0x54) = _DAT_01881594;
      *(undefined4 *)(uVar6 + 0x58) = _DAT_01881598;
      *(undefined4 *)(uVar6 + 0x5c) = _DAT_0188159c;
    }
    iVar3 = FUN_00585400();
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0xea8) = 1;
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) & 0xfffffffd;
      return;
    }
    break;
  case 1:
    FUN_00aa4080(param_1[0x256],0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0058f65b;
  case 2:
LAB_0058f65b:
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a9f4c0("QZ_TACKLE",0,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,param_1[0x252],0,0);
      FUN_00a9f600(0xffffffff,0,1,0,0,param_1[0x253],0,0);
      FUN_00a947e0(0,param_1[0x248],0,0);
      FUN_005821a0();
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00a947e0(0,param_1[0x248],0,0);
    FUN_0057c2a0(param_1[0x248]);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00ac8ab0();
      param_1[0x5ca] = 1;
      FUN_00aa4080(param_1[0x254],0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 5;
      FUN_0057ca90();
      return;
    }
    fVar1 = (float)param_1[0x248];
    if ((!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) &&
       (fVar1 = (float)param_1[0x24a], param_1[0x24a] = (int)(fVar1 + (float)param_1[0x244]),
       5.0 < fVar1 + (float)param_1[0x244])) {
      FUN_00ac8ab0();
      FUN_00582240();
      FUN_00aa4080(param_1[0x255],0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac8e10(0);
      param_1[0x438] = param_1[0x438] | 4;
      param_1[0x187] = 4;
      param_1[0x189] = 0;
      FUN_005893b0(0xbf800000,0,0,2 < param_1[0x5bd]);
      return;
    }
    break;
  case 4:
    iVar3 = FUN_00a8e520();
    if (iVar3 != 0) {
      FUN_00589610();
    }
    if (uVar6 != 0) {
      FUN_00b8c350(0x41200000);
    }
    goto LAB_0058f93a;
  case 5:
LAB_0058f93a:
    if ((param_1[0x187] == 5) && (iVar3 = FUN_00a8c760(10), iVar3 != 0)) {
      param_1[0x188] = param_1[0x188] + 1;
    }
    if (param_1[0x187] == 4) {
      if (param_1[0x189] == 0) {
        iVar3 = FUN_00ac82f0();
        if (iVar3 != 0) goto LAB_0058f9b9;
      }
      else if ((param_1[0x189] == 1) &&
              ((iVar3 = FUN_00ac82f0(), iVar3 == 0 || (iVar3 = FUN_0057da70(), iVar3 == 0)))) {
        FUN_005896d0();
        FUN_0057c9c0();
        FUN_00589750();
        FUN_0057ca90();
LAB_0058f9b9:
        param_1[0x189] = param_1[0x189] + 1;
      }
    }
    iVar3 = FUN_00a8e520();
    if (iVar3 == 0) {
      if (0.0 < (float)param_1[0x24b]) {
        FUN_005896d0();
        FUN_0057c9c0();
        FUN_00589750();
        FUN_0057ca90();
        param_1[0x189] = 2;
      }
    }
    else {
      param_1[0x24b] = (int)((float)param_1[0x244] + (float)param_1[0x24b]);
    }
    iVar3 = FUN_00ac82f0();
    if ((iVar3 == 0) && (param_1[0x188] == 0)) {
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
    }
    else {
      param_1[0x188] = 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_005896d0();
      FUN_00589750();
      FUN_00ac8e10(1);
      FUN_0057ca90();
      iVar3 = FUN_00a81330();
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) | 2;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x5ca] = 1;
                    /* WARNING: Could not recover jumptable at 0x0058fad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 0058FB00  FUN_0058fb00  size=804  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0058fb00(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined *puVar5;
  float local_20 [7];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    DAT_01bea060 = DAT_01bea060 | 0x2000000;
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    FUN_00581cb0(1);
    FUN_00aa4080(0xa0,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x200;
    iVar2 = *(int *)(param_1 + 0xa84);
    if (iVar2 != 0) {
      local_20[0] = *(float *)(iVar2 + 0x40) - *(float *)(param_1 + 0x40);
      local_20[2] = *(float *)(iVar2 + 0x48) - *(float *)(param_1 + 0x48);
      local_20[3] = *(float *)(iVar2 + 0x4c) - *(float *)(param_1 + 0x4c);
      local_20[1] = 0.0;
      fVar1 = local_20[2] * local_20[2] + local_20[0] * local_20[0];
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(local_20,local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_20[0] = 0.0;
        local_20[1] = 1.0;
        local_20[2] = 0.0;
      }
      fVar4 = (float10)fpatan((float10)local_20[0],(float10)local_20[2]);
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 + (float10)3.1415927));
      local_20[2] = local_20[2] * 12.0 + *(float *)(param_1 + 0x48);
      *(float *)(*(int *)(param_1 + 0xa84) + 0x50) = *(float *)(param_1 + 0x40) + local_20[0] * 12.0
      ;
      *(float *)(*(int *)(param_1 + 0xa84) + 0x58) = local_20[2];
      *(float *)(*(int *)(param_1 + 0xa84) + 0x94) = (float)fVar4;
    }
    FUN_00cad200(1);
    *(undefined4 *)(param_1 + 0x1874) = 1;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xfffffffd;
    }
    FUN_00d5ea40("P470_SUNDOWNER_2",1,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    FUN_00a9e120(0,0x702,0xffffffff);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      puVar5 = &DAT_01b35144;
      (**(code **)(*piVar3 + 4))(&DAT_01b35144);
      iVar2 = FUN_00dd6d70(puVar5);
      if (iVar2 != 0) {
        FUN_00aa4520(0x123,*(undefined4 *)(param_1 + 0x4f0),0,0,0x3f800000,0,0xbf800000,0x3f800000);
        (**(code **)(*piVar3 + 100))();
      }
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
    DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
    FUN_00581cb0(2);
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x400;
    *(undefined4 *)(param_1 + 0x1868) = 0;
    FUN_00cad200(0);
    *(undefined4 *)(param_1 + 0x1874) = 0;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) | 2;
    }
    FUN_0058ae10(0x10002);
  }
  return;
}

// 0058FE30  FUN_0058fe30  size=272  [between]
undefined4 __thiscall FUN_0058fe30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((*(byte *)(param_1 + 0x10e0) & 2) != 0) && (*(float *)(param_1 + 0xa90) <= 25.0)) {
    if (0.0 < *(float *)(param_1 + 0x117c)) {
      FUN_005891e0(0);
      if (-1 < *(int *)(param_1 + 0x1180)) {
        FUN_00aa92c0(*(undefined4 *)(&DAT_01642034 + *(int *)(param_1 + 0x1180) * 4));
        *(undefined4 *)(param_1 + 0x1180) = 0xffffffff;
      }
      FUN_0058ae10(0x3000d);
      return 1;
    }
    iVar2 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x1194);
    do {
      iVar1 = FUN_00c51a30(*puVar3);
      if (iVar1 != 0) {
        iVar1 = FUN_00c5fb10(*(undefined4 *)(param_1 + 0x4f0),param_2 + 0xa0,*puVar3,0,0);
        if (iVar1 == 0) {
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 4);
    FUN_005891e0(0);
    if (-1 < *(int *)(param_1 + 0x1180)) {
      FUN_00aa92c0(*(undefined4 *)(&DAT_01642034 + *(int *)(param_1 + 0x1180) * 4));
      *(undefined4 *)(param_1 + 0x1180) = 0xffffffff;
    }
    FUN_0058ae10(0x3000d);
    return 1;
  }
  return 0;
}

// 0058FF40  Em0310::vf334  size=252  [class]
void __thiscall Em0310::vf334(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined **ppuVar4;
  
  BehaviorEmBase::vf334(param_2,param_3);
  FUN_009fd240();
  FUN_005850c0();
  uVar3 = 0;
  ppuVar4 = &PTR_s_Lshield_Bottom_01641e2c;
  piVar2 = param_1 + 0x49e;
  do {
    if (((piVar2[-2] != 0) && (*piVar2 != 0)) && (uVar3 < 6)) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x370) != 0)) {
          FUN_00a1bd80(*ppuVar4,1);
        }
      }
    }
    ppuVar4 = ppuVar4 + 6;
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 0x38;
  } while ((int)ppuVar4 < 0x1641ebc);
  if (param_1[0x5bd] == 0) {
    iVar1 = FUN_00a8cab0();
    param_1[0x439] = iVar1;
    FUN_00a8caf0(0xf0002,0,0,0);
    param_1[0x438] = param_1[0x438] & 0xffffffe3;
    (**(code **)(*param_1 + 0x1f8))(0);
    param_1[0x438] = param_1[0x438] & 0xffffffdf;
    iVar1 = FUN_00585400();
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xea8) = 0;
    }
    iVar1 = FUN_00a92f90();
    if (iVar1 != 0) {
      FUN_00e36b50(0,8,1);
    }
  }
  return;
}

// 00590040  FUN_00590040  size=685  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00590040(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint local_60;
  int local_58;
  int local_50;
  uint auStack_48 [4];
  undefined1 local_38 [56];
  
  if ((_DAT_01b35120 & 1) == 0) {
    _DAT_01b35120 = _DAT_01b35120 | 1;
    _DAT_01b35060 = 0x3e428f5c;
    _DAT_01b35064 = 0;
    _DAT_01b35068 = 0xbefae148;
    _DAT_01b35070 = 0xbe428f5c;
    _DAT_01b35080 = 0xbe428f5c;
    _DAT_01b35090 = 0xbe428f5c;
    _DAT_01b35074 = 0;
    _DAT_01b35084 = 0;
    _DAT_01b35094 = 0;
    _DAT_01b35078 = 0xbefae148;
    _DAT_01b35088 = 0xbefae148;
    _DAT_01b35098 = 0xbefae148;
    _DAT_01b350a0 = 0x3e4ccccd;
    _DAT_01b350a4 = 0;
    _DAT_01b350a8 = 0xbe0f5c29;
    _DAT_01b350b0 = 0x3e4ccccd;
    _DAT_01b350b4 = 0;
    _DAT_01b350b8 = 0xbefae148;
    _DAT_01b350c0 = 0xbe4ccccd;
    _DAT_01b35100 = 0xbe4ccccd;
    _DAT_01b350c4 = 0;
    _DAT_01b350e4 = 0;
    _DAT_01b350f4 = 0;
    _DAT_01b35104 = 0;
    _DAT_01b350c8 = 0xbe0f5c29;
    _DAT_01b350e8 = 0xbe0f5c29;
    _DAT_01b35108 = 0xbe0f5c29;
    _DAT_01b350e0 = 0x3e4ccccd;
    _DAT_01b350f0 = 0x3e4ccccd;
    _DAT_01b350f8 = 0xbefae148;
  }
  puVar7 = auStack_48 + 3;
  local_58 = 0;
  local_60 = 0;
  piVar2 = &DAT_016425b8;
  piVar5 = &DAT_016424c8;
  do {
    *puVar7 = 0;
    local_50 = 4;
    puVar8 = puVar7;
    do {
      puVar8 = puVar8 + 1;
      if (*piVar2 != -1) {
        iVar11 = *piVar5;
        uVar3 = (uint)(iVar11 == 0);
        iVar9 = 0;
        *puVar8 = uVar3;
        piVar6 = piVar5;
        do {
          piVar6 = piVar6 + 1;
          if (*piVar6 == -1) break;
          iVar4 = *piVar6 * 0xe0;
          if (iVar11 == 0) {
            if (*(int *)(iVar4 + 0x1270 + param_1) == 0) {
              *puVar8 = 0;
              goto LAB_005901e7;
            }
          }
          else if (*(int *)(iVar4 + 0x1270 + param_1) != 0) {
            *puVar8 = 1;
            goto LAB_005901e1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 4);
        if (uVar3 != 0) {
LAB_005901e1:
          *puVar7 = *puVar7 + 1;
        }
      }
LAB_005901e7:
      piVar2 = piVar2 + 1;
      piVar5 = piVar5 + 5;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
    if (1 < (int)*puVar7) {
      sVar1 = (short)local_58;
      local_58 = local_58 + 1;
      auStack_48[sVar1] = local_60;
    }
    local_60 = local_60 + 1;
    puVar7 = puVar7 + 5;
    if (0x16425b7 < (int)piVar5) {
      *(undefined4 *)(param_1 + 0x1180) = 0xffffffff;
      if (param_2 == 0) {
        puVar10 = (undefined4 *)(param_1 + 0x1194);
        iVar11 = 4;
        do {
          iVar9 = FUN_00c51a30(*puVar10);
          if (iVar9 != 0) {
            FUN_00c5ad80(*puVar10);
          }
          puVar10 = puVar10 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      else {
        *(undefined4 *)(param_1 + 0x1194) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x1198) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x119c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x11a0) = 0xffffffff;
      }
      if ((short)local_58 != 0) {
        sVar1 = FUN_00dde2d0(0,local_58 + -1);
        uVar3 = auStack_48[sVar1];
        if (uVar3 < 3) {
          *(uint *)(param_1 + 0x1180) = uVar3;
          FUN_00585210(&DAT_016425b8 + uVar3 * 4,&DAT_01b35060 + uVar3 * 0x40,
                       local_38 + uVar3 * 0x14);
          FUN_0058bb90(1);
        }
      }
      return;
    }
  } while( true );
}

// 00590300  FUN_00590300  size=261  [callgraph]
void __fastcall FUN_00590300(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0xaf4) != 1) && ((DAT_01bea060 & 0x2000000) == 0)) {
    iVar2 = FUN_00585400();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x4e4) != 0)) {
      fVar1 = *(float *)(param_1 + 0x1130) - *(float *)(param_1 + 0x910);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x18e8);
    }
    *(float *)(param_1 + 0x1130) = fVar1;
    if ((*(float *)(param_1 + 0x1130) <= 0.0) && ((*(uint *)(param_1 + 0x10e0) & 0x1000) == 0)) {
      FUN_00589af0();
    }
    fVar1 = *(float *)(param_1 + 0x1134) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1134) = fVar1;
    iVar2 = FUN_00585400();
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0xeac) = (uint)(0.0 < fVar1);
    }
    uVar3 = *(uint *)(param_1 + 0x10e0) >> 9 & 1;
    if (*(float *)(param_1 + 0x1134) <= *(float *)(param_1 + 0x190c + uVar3 * 4) * -60.0) {
      fVar1 = *(float *)(param_1 + 0x1904 + uVar3 * 4) * 60.0;
      if (fVar1 < *(float *)(param_1 + 0x1134)) {
        *(float *)(param_1 + 0x1134) = *(float *)(param_1 + 0x1134);
        return;
      }
      *(float *)(param_1 + 0x1134) = fVar1;
    }
  }
  return;
}

// 00590410  FUN_00590410  size=82  [callgraph]
void __fastcall FUN_00590410(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1fc))();
  if (iVar1 == 0) {
    FUN_0058ae10(0x70008);
    (**(code **)(*param_1 + 0x1f8))(1);
    FUN_005891e0(1);
    param_1[0x438] = param_1[0x438] & 0xfffeffff;
    param_1[1099] = 0;
    param_1[0x438] = param_1[0x438] | 0x2000;
  }
  return;
}

// 00590470  FUN_00590470  size=1530  [callgraph]
void __fastcall FUN_00590470(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_28;
  undefined1 auStack_20 [28];
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar3 = FUN_005854c0();
    *(undefined4 *)(param_1 + 0x1864) = uVar3;
    FUN_0057dd70(*(undefined4 *)(param_1 + 0x1904 + (*(uint *)(param_1 + 0x10e0) >> 9 & 1) * 4));
    iVar6 = FUN_00585400();
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0xeb0) = 1;
    }
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x1000;
    iVar6 = FUN_005855f0(*(undefined4 *)(param_1 + 0x1864));
    if ((iVar6 != 0) && (iVar4 = FUN_00585400(), iVar4 != 0)) {
      FUN_0050e0c0(iVar6 + 0x40);
    }
    local_44 = 0.0;
    iVar6 = FUN_005855f0(*(undefined4 *)(param_1 + 0x1864));
    if (iVar6 != 0) {
      D3DXVec3TransformNormal(&local_40,&DAT_018815b0,iVar6 + 0x10);
      local_40 = local_40 + *(float *)(iVar6 + 0x40);
      fStack_3c = *(float *)(iVar6 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar6 + 0x48) + fStack_38;
      fVar7 = (float10)FUN_00a8ec30(&local_40);
      fVar7 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar7));
      local_44 = (float)ABS(fVar7);
    }
    fVar7 = (float10)FUN_00585750(*(undefined4 *)(param_1 + 0x1864));
    if ((float10)272.25 <= fVar7) {
      iVar6 = FUN_005855f0(*(undefined4 *)(param_1 + 0x1864));
      if (iVar6 != 0) {
        D3DXVec3TransformNormal(&local_40,&DAT_018815b0,iVar6 + 0x10);
        local_40 = *(float *)(iVar6 + 0x40) + local_40;
        fStack_3c = *(float *)(iVar6 + 0x44) + fStack_3c;
        fStack_38 = *(float *)(iVar6 + 0x48) + fStack_38;
        fVar1 = *(float *)(param_1 + 0x40) - local_40;
        fVar2 = *(float *)(param_1 + 0x48) - fStack_38;
        fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
        fVar7 = (float10)FUN_0057be90(&local_40);
        if (((float10)1.134464 < fVar7) && (fVar1 <= 25.0)) {
          if ((float10)2.3561945 < fVar7) {
            FUN_00aa4080(0x11,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            *(undefined4 *)(param_1 + 0x61c) = 3;
            return;
          }
          fStack_30 = local_40 - *(float *)(param_1 + 0x40);
          fStack_28 = fStack_38 - *(float *)(param_1 + 0x48);
          pfVar5 = (float *)FUN_00a925a0(auStack_20);
          if (*pfVar5 * fStack_28 - pfVar5[2] * fStack_30 < 0.0) {
            FUN_00aa4080(0xf,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            *(undefined4 *)(param_1 + 0x61c) = 3;
            return;
          }
          FUN_00aa4080(0x10,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          *(undefined4 *)(param_1 + 0x61c) = 3;
          return;
        }
        if (fVar1 < 4.0) {
          FUN_0058ae10(0x50000);
          return;
        }
      }
      FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      goto switchD_0059048c_caseD_1;
    }
    if (0.7853982 <= local_44) {
      FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 4;
      return;
    }
    goto LAB_00590a5a;
  case 1:
switchD_0059048c_caseD_1:
    iVar6 = FUN_005855f0(*(undefined4 *)(param_1 + 0x1864));
    if (iVar6 != 0) {
      D3DXVec3TransformNormal(&local_40,&DAT_018815b0,iVar6 + 0x10);
      local_40 = *(float *)(iVar6 + 0x40) + local_40;
      fStack_3c = *(float *)(iVar6 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar6 + 0x48) + fStack_38;
      FUN_0057bdc0(&local_40,0x3e4ccccd,0x3db2b8c2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    local_44 = 0.0;
    iVar6 = FUN_005855f0(*(undefined4 *)(param_1 + 0x1864));
    if (iVar6 != 0) {
      D3DXVec3TransformNormal(&local_40,&DAT_018815b0,iVar6 + 0x10);
      local_40 = *(float *)(iVar6 + 0x40) + local_40;
      fStack_3c = *(float *)(iVar6 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar6 + 0x48) + fStack_38;
      fVar7 = (float10)FUN_0057bdc0(&local_40,0x3e75c28f,0x3de85696);
      local_44 = (float)fVar7;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar7 = (float10)FUN_00585750(*(undefined4 *)(param_1 + 0x1864));
    if ((fVar7 < (float10)272.25) && (local_44 < 0.7853982)) {
      FUN_0058ae10(0x70007);
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a8c760(0);
    if ((iVar6 != 0) && (iVar6 = FUN_005855f0(*(undefined4 *)(param_1 + 0x1864)), iVar6 != 0)) {
      D3DXVec3TransformNormal(&local_40,&DAT_018815b0,iVar6 + 0x10);
      local_40 = local_40 + *(float *)(iVar6 + 0x40);
      fStack_3c = *(float *)(iVar6 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar6 + 0x48) + fStack_38;
      FUN_0057bdc0(&local_40,0x3e75c28f,0x3de85696);
    }
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 0;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_005855f0(*(undefined4 *)(param_1 + 0x1864));
    if (iVar6 != 0) {
      FUN_0057bdc0(iVar6 + 0x40,0x3e75c28f,0x3de85696);
    }
    iVar6 = FUN_00a94ce0(0);
    if ((iVar6 == 0) && (iVar6 = FUN_00a952e0(0,0x42280000), iVar6 == 0)) {
      return;
    }
LAB_00590a5a:
    FUN_0058ae10(0x70007);
  }
  return;
}

// 005930B0  Em0310::setEmSetInfo  size=299  [class]
undefined4 __thiscall Em0310::setEmSetInfo(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  bool bVar6;
  
  FUN_0040ac60(param_2);
  if (param_1[0x2c9] != -1) {
    iVar2 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar2 != 0) {
      FUN_00a5dcc0(iVar2);
    }
  }
  if (param_1[0x2bd] == 1) {
    param_1[0x1bb] = 0;
    FUN_0058ae10(0xe0001);
    return 1;
  }
  pbVar5 = &DAT_01641f14;
  pbVar3 = DAT_018b925c;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00593143:
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00593148;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00593143;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00593148:
  if (iVar2 == 0) {
    iVar2 = FUN_00a8eeb0();
    FUN_00a8ee20(iVar2 / 10);
    FUN_0057c840(0xffffffff,1);
  }
  else {
    pcVar4 = "P470_SUNDOWNER_2";
    pbVar3 = DAT_018b925c;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_005931b4:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005931b9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_005931b4;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_005931b9:
    if (iVar2 == 0) {
      FUN_00588e40(1);
      (**(code **)(*param_1 + 0x34c))();
      return 1;
    }
  }
  FUN_0058ae10(0x10006);
  return 1;
}

// 005931E0  Em0310::vf100  size=197  [class]
void __fastcall Em0310::vf100(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  undefined *puVar7;
  
  BehaviorAppBase::vf100();
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar7 = &DAT_01b35144;
    (**(code **)(*piVar3 + 4))(&DAT_01b35144);
    iVar2 = FUN_00dd6d70(puVar7);
    if (iVar2 != 0) {
      FUN_00a94bc0(0,0);
      (**(code **)(*piVar3 + 100))();
    }
  }
  pcVar5 = "P470_SUNDOWNER";
  pbVar4 = DAT_018b925c;
  do {
    bVar1 = *pbVar4;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00593261:
      iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00593266;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00593261;
    pbVar4 = pbVar4 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00593266:
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x1174) == 0)) {
    FUN_00588e40(0);
    FUN_00d5ea40("P470_SUNDOWNER_2",1,0);
    FUN_0058ae10(0x10002);
    DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
  }
  return;
}

// 005932B0  FUN_005932b0  size=355  [between]
undefined4 __fastcall FUN_005932b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_4;
  
  if ((param_1[0x438] & 0x20800U) != 0) {
    return 0;
  }
  param_1[0x1a1] = 0;
  local_4 = param_1;
  FUN_00ac2080(2);
  piVar4 = (int *)param_1[0x19f];
  piVar3 = piVar4 + param_1[0x1a1] * 0x54;
  do {
    if (piVar4 == piVar3) {
      return 0;
    }
    iVar1 = *piVar4;
    if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && ((iVar1 != 0x1b0 && (iVar1 != 0x147))))
    {
      iVar1 = FUN_0058b6d0(piVar4);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00a81330();
      if (((iVar1 != param_1[0x13c]) && (iVar1 != 0)) &&
         ((iVar1 = FUN_00a7c8a0(), iVar1 != 0 && ((*(byte *)(iVar1 + 0x4c0) & 0x10) != 0)))) {
        local_4 = (int *)0x0;
        iVar2 = FUN_0058b730(piVar4,&local_4);
        if (iVar2 != 0) {
          if (local_4 == (int *)0x0) {
            return 1;
          }
          iVar2 = FUN_00fdbc60();
          if (iVar2 < 2) {
            iVar2 = 1;
          }
          (**(code **)(*param_1 + 0x30c))(iVar2,0);
          (**(code **)(*param_1 + 0x220))(0x41200000);
          (**(code **)(*param_1 + 0x198))(iVar1,piVar4,2);
          iVar1 = FUN_0057d7f0();
          if (iVar1 == 0) {
            return 1;
          }
          DAT_01bea090 = DAT_01bea090 | 0x8000;
          FUN_00cad200(1);
          param_1[0x66a] = 1;
          FUN_0058ae10(0x30012);
          return 1;
        }
      }
    }
    piVar4 = piVar4 + 0x54;
  } while( true );
}

// 00593420  FUN_00593420  size=336  [between]
int __fastcall FUN_00593420(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_40;
  int local_38;
  undefined1 local_30 [44];
  
  piVar3 = param_1 + 0x49e;
  local_38 = 0;
  local_40 = 0;
  do {
    if ((piVar3[-1] != 0) && (*piVar3 == 0)) {
      param_1[0x1a1] = 0;
      FUN_00ac2080(local_40 + 3);
      iVar5 = param_1[0x19f];
      iVar4 = param_1[0x1a1] * 0x150 + iVar5;
      for (; iVar5 != iVar4; iVar5 = iVar5 + 0x150) {
        if ((((*(int *)(iVar5 + 0xec) != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
            (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) && ((*(byte *)(iVar1 + 0x4c0) & 0x10) != 0)) {
          FUN_00d93a30();
          FUN_00582a20(local_30,iVar5);
          iVar2 = FUN_00583900(local_40);
          if ((iVar2 != 0) && (iVar2 = FUN_0058a620(local_30), iVar2 != 0)) {
            FUN_005836c0(local_40);
            FUN_00583580(local_40);
            piVar3[-1] = 0;
            FUN_0058bd70(local_40 + 3);
            if (local_38 == 0) {
              (**(code **)(*param_1 + 0x198))(iVar1,iVar5,0x4000);
            }
            local_38 = 1;
            break;
          }
        }
      }
    }
    local_40 = local_40 + 1;
    piVar3 = piVar3 + 0x38;
    if (5 < local_40) {
      return local_38;
    }
  } while( true );
}

// 00593570  FUN_00593570  size=405  [between]
undefined4 __thiscall FUN_00593570(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  float10 fVar2;
  
  if ((*param_2 == 0x146) && ((param_2[0x24] & 0x8000U) == 0)) {
    *param_3 = 0x401;
    return 1;
  }
  if ((*(uint *)(param_1 + 0x10e0) & 0x8000) == 0) {
    if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
      *(int *)(param_1 + 0x1100) =
           *(int *)(param_1 + 0x188c + (*(uint *)(param_1 + 0x10e0) >> 9 & 1) * 4) + 1;
      FUN_005891e0(1);
      FUN_0058ae10(0x30000);
      *param_3 = 1;
      return 1;
    }
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar2 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar2));
    if (ABS(fVar2) < (float10)2.0943952) {
      if (*(int *)(param_1 + 0x1164) + 1 < *(int *)(param_1 + 0x1920)) {
        FUN_0058ae10(0x40008);
        if (*param_2 == 0x55) {
          *(undefined4 *)(param_1 + 0x1164) = 0;
        }
        *param_3 = (-(uint)(*param_2 != 0x4f) & 0xfffffe02) + 0x201;
        return 1;
      }
      FUN_005891e0(1);
      FUN_0058ae10(0x40009);
      *param_3 = 0x203;
      return 1;
    }
  }
  else {
    if (*param_2 == 0x4f) {
      FUN_00581d70(0);
      FUN_0058ae10(0x40008);
      return 1;
    }
    FUN_005891e0(1);
    *(undefined4 *)(param_1 + 0x1170) = 0;
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xffff7fff;
    iVar1 = FUN_00585400();
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xea8) = 0;
    }
    FUN_005891e0(1);
  }
  return 0;
}

// 00593740  FUN_00593740  size=132  [between]
void __thiscall FUN_00593740(int param_1,uint param_2)

{
  int iVar1;
  undefined1 local_160 [348];
  
  if (param_2 < 6) {
    param_1 = param_2 * 0xe0 + param_1;
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x1258) == 0)) {
      FUN_004cb9a0((&DAT_01641e34)[param_2 * 6]);
      FUN_00e020f0(iVar1);
      FUN_00dffb30(param_1 + 0x11c0);
      FUN_00a963e0(local_160);
    }
  }
  return;
}

// 005937D0  FUN_005937d0  size=144  [between]
void __fastcall FUN_005937d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint local_168;
  undefined1 local_160 [348];
  
  local_168 = 0;
  puVar2 = &DAT_01641e34;
  param_1 = param_1 + 0x11b0;
  do {
    if (local_168 < 6) {
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (*(int *)(param_1 + 0xa8) == 0)) {
        FUN_004cb9a0(*puVar2);
        FUN_00e020f0(iVar1);
        FUN_00dffb30(param_1 + 0x10);
        FUN_00a963e0(local_160);
      }
    }
    local_168 = local_168 + 1;
    puVar2 = puVar2 + 6;
    param_1 = param_1 + 0xe0;
  } while ((int)puVar2 < 0x1641ec4);
  return;
}

// 00593860  FUN_00593860  size=954  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00593860(int *param_1)

{
  code *pcVar1;
  float fVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  switch(param_1[0x187]) {
  case 0:
    FUN_005891e0(1);
    param_1[0x464] = -0x40800000;
    FUN_009398e0();
    iVar5 = FUN_00ac8120();
    iVar6 = 0;
    if (iVar5 != 0) {
      FUN_00b7ab80(0x42a00000,0x3d4ccccd);
    }
    if (((param_1[0x438] & 0x800U) != 0) && (iVar5 = FUN_005855f0(param_1[0x619]), iVar5 != 0)) {
      FUN_00590f30();
    }
    if ((param_1[0x5bd] != 0) && (iVar5 = FUN_00a12210(3), iVar5 != 0)) {
      FID_conflict__memcpy(&stack0xfffffe98,(void *)(iVar5 + 0x10),0x40);
      uVar3 = FUN_00e01ca0();
      FUN_00e01490(0x20310,0x37,&stack0xfffffe98,uVar3);
    }
    piVar7 = param_1 + 0x49c;
    do {
      if ((*piVar7 != 0) && (piVar4 = (int *)FUN_00583900(iVar6), piVar4 != (int *)0x0)) {
        (**(code **)(*piVar4 + 0x20))();
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
      piVar7 = piVar7 + 0x38;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    pcVar1 = *(code **)(*param_1 + 0x1d8);
    param_1[0x248] = 0x42f00000;
    iVar5 = (*pcVar1)();
    if (iVar5 != 0) {
      FUN_00aa4080(0x7a,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      if (param_1[0x221] == 0) {
        (**(code **)(*param_1 + 0x318))();
        iVar5 = param_1[0x1d9];
        if (*(int *)(iVar5 + 0x104) != 1) {
          *(undefined4 *)(iVar5 + 0x104) = 1;
          *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4) = 0;
        }
      }
      (**(code **)(*param_1 + 0x1d4))(1);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    FUN_00aa4080(0x65,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248] - _DAT_01be942c;
    param_1[0x248] = (int)fVar2;
    if ((fVar2 <= 0.0) || (iVar5 = FUN_00a94ce0(0), iVar5 != 0)) {
      param_1[0x45d] = 1;
      iVar5 = FUN_00ac8120();
      if (iVar5 != 0) {
        FUN_00b7eba0(param_1[0x13c]);
        return;
      }
    }
    break;
  case 2:
    param_1[0x248] = (int)((float)param_1[0x248] - _DAT_01be942c);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      if (param_1[0x221] != 0) {
        (**(code **)(*param_1 + 0x314))();
        if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
          *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
        }
      }
      FUN_00aa3f60(0x70);
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((float)param_1[0x248] <= 0.0) {
      FUN_00584530();
      return;
    }
    break;
  case 3:
    param_1[0x248] = (int)((float)param_1[0x248] - _DAT_01be942c);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((float)param_1[0x248] <= 0.0) ||
       (iVar5 = (**(code **)(*param_1 + 800))(0x3d888889), iVar5 != 0)) {
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x22a] = param_1[0x448];
      FUN_00584530();
    }
  }
  return;
}

// 00593C30  FUN_00593c30  size=372  [between]
undefined4 __fastcall FUN_00593c30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  if ((*(uint *)(param_1 + 0x10e0) & 0x200) != 0) {
    uVar1 = FUN_0058e880();
    return uVar1;
  }
  fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar4 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar4));
  if (ABS(fVar4) < (float10)0.87266463 != (ABS(fVar4) == (float10)0.87266463)) {
    iVar2 = FUN_005841e0();
    if (iVar2 != 0) {
      iVar2 = FUN_0057d010();
      if ((iVar2 != 0) && (*(int *)(param_1 + 0x19a0) == 0)) {
        *(undefined4 *)(param_1 + 0x19a0) = 1;
        if (36.0 < *(float *)(param_1 + 0xa90)) {
          FUN_0058ae10(0x20009);
          return 1;
        }
        if (*(int *)(param_1 + 0x1740) != 0) {
          *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x10000;
          FUN_0058ae10(0x50008);
          return 1;
        }
        FUN_0058ae10(0x10007);
        return 1;
      }
    }
    if (*(float *)(param_1 + 0xa90) <= 9.0) {
      uVar3 = FUN_00dde2d0(0,100);
      if ((uVar3 & 1) == 0) {
        uVar1 = 0x20002;
      }
      else {
        uVar1 = 0x20000;
      }
      FUN_0058ae10(uVar1);
      *(undefined4 *)(param_1 + 0x19a0) = 0;
      return 1;
    }
    if (*(float *)(param_1 + 0xa90) <= 36.0) {
      uVar3 = FUN_00dde2d0(0,100);
      if ((uVar3 & 1) != 0) {
        uVar1 = 0x2000b;
        goto LAB_00593d6e;
      }
    }
    if (*(float *)(param_1 + 0xa90) <= 81.0) {
      uVar1 = 0x20008;
LAB_00593d6e:
      FUN_0058ae10(uVar1);
      *(undefined4 *)(param_1 + 0x19a0) = 0;
      return 1;
    }
  }
  return 0;
}

// 00593DB0  Em0310::vf150  size=142  [class]
void __thiscall Em0310::vf150(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    switch(param_2) {
    case 0x68:
      FUN_0058ae10(0xf0000);
      return;
    case 0x69:
      FUN_0058ae10(0xf0001);
      return;
    case 0x6a:
      FUN_00591180();
      return;
    case 0x6b:
      FUN_0058ae10(0xf0004);
      piVar2 = (int *)FUN_00585400();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x150))(param_2,*(undefined4 *)(param_1 + 0x4f0));
      }
    }
  }
  return;
}

// 00593E50  Em0310::vf30  size=295  [class]
void __fastcall Em0310::vf30(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  BehaviorEmBase::vf30();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b35144;
      (**(code **)(*piVar2 + 4))(&DAT_01b35144);
      iVar1 = FUN_00dd6d70(puVar3);
      if (iVar1 != 0) {
        FUN_00a8b9b0(&fStack_20,0xc1200000);
        FUN_00a9e060(1);
        FUN_00590ae0(&fStack_20);
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b35144;
      (**(code **)(*piVar2 + 4))(&DAT_01b35144);
      iVar1 = FUN_00dd6d70(puVar3);
      if (iVar1 != 0) {
        FUN_00a8b9b0(&fStack_20,0xc1200000);
        fStack_20 = (float)piVar2[0x10] - (float)param_1[0x10];
        fStack_1c = (float)piVar2[0x11] - (float)param_1[0x11];
        fStack_18 = (float)piVar2[0x12] - (float)param_1[0x12];
        fStack_14 = (float)piVar2[0x13] - (float)param_1[0x13];
        FUN_00a9e060(0);
        FUN_00590ae0(&fStack_20);
      }
    }
  }
  if (param_1[0x66b] != 0) {
    (**(code **)(*param_1 + 0x344))(0xb,1,1);
    return;
  }
  (**(code **)(*param_1 + 0x344))(0xb,0,1);
  return;
}

// 00593F80  FUN_00593f80  size=116  [callgraph]
undefined4 __fastcall FUN_00593f80(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined *puVar6;
  
  uVar4 = 0;
  piVar5 = (int *)(param_1 + 0x1278);
  iVar3 = 6;
  do {
    if ((piVar5[-2] != 0) && (*piVar5 != 0)) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
          puVar6 = &DAT_01b3514c;
          (**(code **)(*piVar2 + 4))(&DAT_01b3514c);
          iVar1 = FUN_00dd6d70(puVar6);
          if (iVar1 != 0) {
            iVar1 = FUN_00590fe0(piVar5[2]);
            if (iVar1 != 0) {
              uVar4 = 1;
            }
          }
        }
      }
    }
    piVar5 = piVar5 + 0x38;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar4;
}

// 00594000  FUN_00594000  size=197  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00594000(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (((*(uint *)(param_1 + 0x10e0) & 2) != 0) && ((*(uint *)(param_1 + 0x10e0) & 0x200) == 0)) {
    if (*(int *)(param_1 + 0x1128) != 0) {
      iVar2 = FUN_00ac82f0();
      if (iVar2 == 0) {
        FUN_00590040(0);
        FUN_0057dd00(1);
      }
    }
    uVar3 = FUN_00ac82f0();
    *(undefined4 *)(param_1 + 0x1128) = uVar3;
    iVar2 = FUN_00a8e520();
    if (iVar2 == 0) {
      uVar3 = 0xbf800000;
    }
    else {
      iVar2 = 0;
      puVar5 = (undefined4 *)(param_1 + 0x1194);
      do {
        iVar4 = FUN_00c51a30(*puVar5);
        if (iVar4 != 0) {
          iVar4 = FUN_00c52a30(*puVar5);
          if (iVar4 == 0) goto LAB_005940a0;
        }
        iVar2 = iVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar2 < 4);
      uVar3 = *(undefined4 *)(param_1 + 0x1948);
    }
    *(undefined4 *)(param_1 + 0x117c) = uVar3;
LAB_005940a0:
    fVar1 = *(float *)(param_1 + 0x117c);
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      *(float *)(param_1 + 0x117c) = *(float *)(param_1 + 0x117c) - _DAT_01be942c;
    }
  }
  return;
}

// 005941C0  FUN_005941c0  size=94  [callgraph]
void __fastcall FUN_005941c0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (((*(uint *)(param_1 + 0x1864) < 4) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35148;
    (**(code **)(*piVar2 + 4))(&DAT_01b35148);
    iVar1 = FUN_00dd6d70(puVar3);
    if (iVar1 != 0) {
      FUN_00590f30();
    }
  }
  FUN_0058ae10(0x70008);
  return;
}

// 00594220  FUN_00594220  size=162  [callgraph]
void __fastcall FUN_00594220(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar2 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar2));
    if (((((float10)1.3962634 < ABS(fVar2)) &&
         (iVar1 = *(int *)(param_1 + 0x10e4), iVar1 != 0x70004)) && (iVar1 != 0x70002)) &&
       (iVar1 != 0x70003)) {
      if (*(float *)(param_1 + 0xa90) <= 9.0) {
        FUN_0058af30(1);
        return;
      }
      FUN_0058af30(0);
      return;
    }
    iVar1 = FUN_00593c30();
    if (iVar1 == 0) {
      FUN_0058ae10(0x70001);
    }
  }
  return;
}

// 00594360  Em0310::startup  size=927  [class]
undefined4 __fastcall Em0310::startup(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [124];
  
  iVar2 = BehaviorEmBase::startup();
  if (iVar2 != 0) {
    param_1[0x2c0] = param_1[0x12a];
    param_1[0x2bd] = param_1[0x128];
    FUN_00ac8eb0(1,1);
    local_8c = 0x3f666666;
    local_88 = 0x3f99999a;
    local_84 = 0x3f8ccccd;
    local_a0 = 0x3e4ccccd;
    local_9c = 0x40400000;
    local_98 = 0x40000000;
    FUN_00a8e4d0(&local_a0,&local_8c);
    FUN_005850c0();
    FUN_00ac8e10(1);
    iVar2 = FUN_008ec660(param_1,0x3fe66666,0x3ecccccd,0x41700000,0x43480000,0x78,7,0);
    param_1[0x1d9] = iVar2;
    FUN_008e6d00();
    FUN_00581690();
    iVar2 = FUN_00c5def0(param_1[0x13c]);
    param_1[0x25c] = iVar2;
    FUN_00405230();
    local_a0 = 0;
    local_9c = 0x3e99999a;
    local_98 = 0;
    FUN_00c151f0(1,param_1[0x13c],0,&local_a0,0,0x42c80000,0x3f000000,2,0);
    FUN_00c57830(local_80);
    param_1[0x1bb] = 1;
    FUN_0057fdc0();
    iVar2 = FUN_0057fbe0();
    if (iVar2 != 0) {
      FUN_005892b0();
      param_1[0x5c2] = param_1[0x5c2] + 1;
      sVar1 = FUN_00dde2d0(0,5);
      param_1[0x5c2] = 0;
      param_1[0x5c1] = (int)sVar1;
      param_1[0x5c9] = 0;
      param_1[0x5cb] = 0;
      param_1[0x5ca] = 0;
      param_1[0x5cc] = 0;
      param_1[0x5cd] = 0;
      param_1[0x5ce] = 0;
      param_1[0x5f5] = 0;
      param_1[0x5d0] = 0;
      param_1[0x5dc] = 0;
      param_1[0x5e8] = 0;
      lib::StaticArray<Entity*,4>::StaticArray<Entity*,4>();
      FUN_00588f30();
      DAT_018b4414 = param_1[0x12d];
      DAT_01dc08dc = 0;
      DAT_01dc08e0 = 0;
      param_1[0x447] = 0;
      param_1[0x440] = 0;
      param_1[0x448] = param_1[0x22a];
      param_1[0x441] = 0;
      param_1[0x442] = 0;
      param_1[0x444] = 0;
      param_1[0x446] = 0;
      param_1[1099] = 0;
      param_1[0x61a] = 0;
      param_1[0x439] = -1;
      param_1[0x44d] = 0;
      param_1[0x43a] = -1;
      param_1[0x445] = -1;
      param_1[0x450] = 0;
      param_1[0x451] = 0;
      param_1[0x452] = 0;
      param_1[0x453] = 0;
      param_1[0x454] = 0;
      param_1[0x455] = 0;
      param_1[0x456] = 0;
      param_1[0x457] = 0;
      param_1[0x459] = 0;
      param_1[0x45a] = 0;
      param_1[0x45b] = 0;
      param_1[0x462] = 0;
      param_1[0x45c] = 0;
      param_1[0x45d] = 0;
      param_1[0x45e] = 0;
      param_1[0x443] = 0;
      param_1[0x669] = 0;
      param_1[0x61d] = 0;
      param_1[0x460] = -1;
      param_1[0x461] = 0;
      param_1[0x463] = 0;
      param_1[0x65a] = 0;
      param_1[0x66a] = 0;
      param_1[0x668] = 0;
      param_1[0x66b] = 0;
      param_1[0x66c] = 0;
      if (DAT_018b9174 == 0x470) {
        FUN_0058ad70();
      }
      FUN_00590040(1);
      FUN_0057dd00(0);
      iVar2 = FUN_00ac89d0();
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xffefffff;
      }
      param_1[0xd9] = param_1[0xd9] & 0xffefffff;
      (**(code **)(*param_1 + 0x34c))();
      FUN_0057c840(0xffffffff,0);
      iVar2 = FUN_00585400();
      if (iVar2 != 0) {
        FUN_004fbb20(param_1[0x13c]);
      }
      param_1[0x464] = 0x4528c000;
      if (param_1[0x2bd] == 1) {
        param_1[0x464] = -0x40800000;
      }
      return 1;
    }
  }
  return 0;
}

// 00594700  Em0310::vf48  size=155  [class]
void __fastcall Em0310::vf48(int param_1)

{
  BehaviorEmBase::vf48();
  if (*(int *)(param_1 + 0xaf4) != 1) {
    DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
    DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
    DAT_01dc08ec = 1;
    FUN_00cad2a0();
  }
  FUN_00590300();
  FUN_00589060();
  FUN_00589800();
  FUN_005898a0();
  FUN_00594000();
  *(float *)(param_1 + 0x112c) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x112c);
  if ((*(uint *)(param_1 + 0x10e0) & 0x800) == 0) {
    *(float *)(param_1 + 0x1868) = *(float *)(param_1 + 0x1868) + *(float *)(param_1 + 0x910);
    return;
  }
  *(undefined4 *)(param_1 + 0x1868) = 0;
  return;
}

// 005947A0  FUN_005947a0  size=590  [between]
void __fastcall FUN_005947a0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x928) = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
  if ((0.0 < fVar1) && (*(int *)(param_1 + 0x1100) <= *(int *)(param_1 + 0x940))) {
    return;
  }
  iVar2 = FUN_00583060();
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x10e4) != 0x40002)) {
    FUN_0058ae10(0x40001);
    return;
  }
  fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar4 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar4));
  if ((float10)0.87266463 < ABS(fVar4)) {
LAB_00594858:
    if (9.0 < *(float *)(param_1 + 0xa90)) {
      FUN_0058af30(0);
      return;
    }
    FUN_0058af30(1);
    return;
  }
  iVar2 = FUN_00585400();
  if ((iVar2 != 0) &&
     (((*(int *)(iVar2 + 0xeb4) != 0 || (0.0 < *(float *)(iVar2 + 0xec8))) &&
      (iVar2 = FUN_00582fe0(), iVar2 != 0)))) {
LAB_005948b4:
    FUN_0058ae10(0x40000);
    return;
  }
  if (((*(float *)(param_1 + 0x1110) == 0.0) &&
      (fVar1 = *(float *)(param_1 + 0x112c), !NAN(fVar1) && 1500.0 < fVar1 != (fVar1 == 1500.0))) &&
     (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 7) == 0)) {
    FUN_0058ae10(0x10006);
    return;
  }
  if ((*(int *)(param_1 + 0xa84) != 0) && (iVar2 = FUN_00a8cab0(), iVar2 - 0x82U < 4)) {
    fVar4 = (float10)FUN_0057bec0();
    if ((float10)0.43633232 < fVar4) goto LAB_00594858;
    if (*(float *)(param_1 + 0xa90) <= 16.0) {
      if (*(int *)(param_1 + 0x1740) == 0) {
        FUN_0058ae10(0x50000);
        return;
      }
      FUN_0058ae10(0x50008);
      return;
    }
  }
  iVar2 = FUN_00593c30();
  if (iVar2 == 0) {
    iVar2 = FUN_00583250();
    if ((iVar2 != 0) && (iVar2 = FUN_00582fe0(), iVar2 != 0)) goto LAB_005948b4;
    if ((0.0 < *(float *)(param_1 + 0x924)) && (iVar2 = FUN_0058adc0(), iVar2 != 0)) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0xa90);
    if (!NAN(fVar1) && 225.0 < fVar1 != (fVar1 == 225.0)) {
      FUN_0058ae10(0x10002);
      return;
    }
    fVar1 = *(float *)(param_1 + 0xa90);
    if (!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) {
      FUN_0058ae10(0x10001);
    }
  }
  return;
}

// 005949F0  FUN_005949f0  size=161  [between]
void __fastcall FUN_005949f0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0x10e0) & 0x200) != 0) &&
     (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 144.0 < fVar1 != (fVar1 == 144.0))) {
    FUN_0058ae10(0x10002);
    return;
  }
  if ((*(int *)(param_1 + 0x61c) != 0) &&
     (fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x920) = fVar1, fVar1 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x920) = 0x41700000;
    FUN_00593c30();
  }
  iVar2 = FUN_00585400();
  if ((iVar2 != 0) && ((*(int *)(iVar2 + 0xeb4) != 0 || (0.0 < *(float *)(iVar2 + 0xec8))))) {
    iVar2 = FUN_00582fe0();
    if (iVar2 != 0) {
      FUN_0058ae10(0x40000);
    }
  }
  return;
}

// 00594B10  FUN_00594b10  size=458  [between]
void __fastcall FUN_00594b10(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_10 [4];
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    if ((fVar1 <= 0.0) || (*(int *)(param_1 + 0x940) < *(int *)(param_1 + 0x1100))) {
      if ((0 < *(int *)(param_1 + 0x1860)) &&
         (fVar1 = *(float *)(param_1 + 0x1900) * 60.0,
         fVar1 < *(float *)(param_1 + 0x1868) != (fVar1 == *(float *)(param_1 + 0x1868)))) {
        FUN_0058ae10(0x70006);
        return;
      }
      fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
      fVar4 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar4));
      if ((float10)0.87266463 < ABS(fVar4)) {
        if (9.0 < *(float *)(param_1 + 0xa90)) {
          FUN_0058af30(0);
          return;
        }
        FUN_0058af30(1);
        return;
      }
      iVar3 = FUN_00593c30();
      if (iVar3 == 0) {
        if ((0.0 < *(float *)(param_1 + 0x924)) && (iVar3 = FUN_0058adc0(), iVar3 != 0)) {
          return;
        }
        fVar1 = *(float *)(param_1 + 0xa90);
        if (!NAN(fVar1) && 132.25 < fVar1 != (fVar1 == 132.25)) {
          FUN_0058ae10(0x10002);
          return;
        }
        fVar1 = *(float *)(param_1 + 0xa90);
        if (((!NAN(fVar1) && 9.0 < fVar1 != (fVar1 == 9.0)) &&
            (*(float *)(param_1 + 0xa90) < 17.639997)) ||
           ((*(uint *)(param_1 + 0x10e4) & 0xffff0000) == 0x50000)) {
          FUN_0058ae10(0x1000a);
          return;
        }
        sVar2 = FUN_00dde2d0(0,3);
        local_10[0] = 0x50000;
        local_10[1] = 0x50001;
        local_10[2] = 0x50000;
        local_10[3] = 0x50002;
        FUN_0058ae10(local_10[sVar2]);
      }
    }
  }
  return;
}

// 00594CE0  FUN_00594ce0  size=546  [between]
void __fastcall FUN_00594ce0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    uVar1 = FUN_00dde2d0(0,99);
    uVar1 = uVar1 & 1;
    if (param_1[0x5e8] == 0) {
      if (param_1[0x5dc] != 0) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
    param_1[0x454] = param_1[0x10];
    param_1[0x455] = param_1[0x11];
    param_1[0x456] = param_1[0x12];
    param_1[0x457] = param_1[0x13];
    FUN_00aa4080((&DAT_01642694)[uVar1],0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = (&DAT_0164268c)[uVar1];
    param_1[0x248] = param_1[0x25];
    param_1[0x187] = iVar2;
    param_1[0x250] = 0;
  }
  else {
    if (iVar2 < 1) {
      return;
    }
    if (2 < iVar2) {
      return;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3e32b8c2);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    iVar2 = FUN_00a8c760(4);
    if (((iVar2 != 0) && (iVar2 = FUN_00593c30(), iVar2 == 0)) && (param_1[0x250] < 2)) {
      param_1[0x454] = param_1[0x10];
      param_1[0x455] = param_1[0x11];
      param_1[0x456] = param_1[0x12];
      param_1[0x457] = param_1[0x13];
      if (param_1[0x187] == 1) {
        FUN_00aa4080(0x17,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x250] = param_1[0x250] + 1;
        param_1[0x187] = 2;
        param_1[0x251] = 0;
        return;
      }
      FUN_00aa4080(0x18,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x187] = 1;
      param_1[0x251] = 0;
    }
  }
  else {
    if (1 < param_1[0x250]) {
                    /* WARNING: Could not recover jumptable at 0x00594e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if ((float)param_1[0x2a4] <= 14.44) {
                    /* WARNING: Could not recover jumptable at 0x00594e39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00594F10  FUN_00594f10  size=891  [between]
int __fastcall FUN_00594f10(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int local_18;
  int local_10;
  int local_4;
  
  iVar4 = 0;
  piVar3 = param_1 + 0x49e;
  do {
    if ((piVar3[-2] != 0) && (*piVar3 != 0)) {
      bVar1 = true;
      goto LAB_00594f3d;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0x38;
  } while (iVar4 < 6);
  bVar1 = false;
LAB_00594f3d:
  if ((((((param_1[0x438] & 2U) == 0) && (!bVar1)) || ((param_1[0x438] & 0x200U) != 0)) ||
      ((param_1[0x2bd] == 1 || (iVar4 = FUN_00a8ef10(), iVar4 != 0)))) ||
     (0.0 < (float)param_1[0x5c0])) {
    return 0;
  }
  param_1[0x1a1] = 0;
  FUN_00ac2080(1);
  piVar3 = (int *)param_1[0x19f];
  piVar5 = piVar3 + param_1[0x1a1] * 0x54;
  local_10 = 0;
  bVar6 = true;
  local_18 = 0;
  bVar2 = false;
  local_4 = 0;
  do {
    if (piVar3 == piVar5) {
LAB_00595137:
      iVar4 = FUN_00ac82f0();
      if ((iVar4 != 0) && (bVar1)) {
        iVar4 = FUN_00593420();
        if (iVar4 != 0) {
          FUN_0057ca00(0);
          FUN_00c27f40(0xf,0xbf800000);
          FUN_0057c7e0();
          return 1;
        }
        return 0;
      }
      if (bVar2) {
        FUN_0058ae10(0x3000b);
        return 1;
      }
      if (local_10 != 0) {
        iVar4 = FUN_00a8ef10();
        if ((iVar4 == 0) && (bVar6)) {
          FUN_00aa92c0(5);
          FUN_0058bb20();
          if (local_4 == 0) {
            iVar4 = FUN_00ac8120();
            if (iVar4 != 0) {
              FUN_00b7ab80(0x41a00000,0x3d4ccccd);
            }
            FUN_005839c0(0);
            FUN_00c27f40(0xf,0xbf800000);
            FUN_0057c7e0();
          }
          else {
            FUN_0057ca00(0);
          }
        }
        (**(code **)(*param_1 + 0x220))(0x41200000);
        iVar4 = 0;
        param_1 = param_1 + 0x49d;
        do {
          FUN_005836c0(iVar4);
          FUN_00583580(iVar4);
          *param_1 = 0;
          iVar4 = iVar4 + 1;
          param_1 = param_1 + 0x38;
        } while (iVar4 < 6);
      }
      return local_10;
    }
    iVar4 = *piVar3;
    if (((iVar4 != 0) && (iVar4 != 1)) &&
       ((iVar4 != 2 &&
        (((iVar4 != 0x1b0 && (iVar4 != 0x147)) && (iVar4 = FUN_00a81330(), iVar4 != param_1[0x13c]))
        )))) {
      if (iVar4 != 0) {
        local_18 = FUN_00a7c8a0();
      }
      if (((!bVar1) || (piVar3[0x3b] == 0)) &&
         ((local_18 == 0 || ((*(byte *)(local_18 + 0x4c0) & 0x10) != 0)))) {
        iVar4 = FUN_00582d00(piVar3);
        if (iVar4 == 0) {
          if (((piVar3[0x23] & 0x100000U) != 0) && ((piVar3[0x23] & 0x20000U) != 0)) {
            FUN_0058b860();
            local_10 = 1;
            bVar2 = true;
            goto LAB_00595137;
          }
          iVar4 = FUN_00ac82f0();
          if (((iVar4 == 0) || (iVar4 = FUN_0058fe30(piVar3), iVar4 == 0)) || (piVar3[0x3b] == 0)) {
            if ((local_18 != 0) && ((*(byte *)(local_18 + 0x4c0) & 0x10) != 0)) {
              bVar6 = (piVar3[0x24] & 0x8000U) == 0;
              iVar4 = FUN_00a8ef10();
              if (iVar4 == 0) {
                local_4 = FUN_00ac82f0();
                (**(code **)(*param_1 + 0x198))(local_18,piVar3,0xc000);
              }
              local_10 = 1;
            }
            goto LAB_00595137;
          }
          FUN_005891e0(0);
        }
        else {
          iVar4 = FUN_00a8f040(piVar3);
          if (iVar4 != 0) {
            return 1;
          }
        }
        (**(code **)(*param_1 + 0x198))(local_18,piVar3,1);
        return 1;
      }
    }
    piVar3 = piVar3 + 0x54;
  } while( true );
}

// 00595290  FUN_00595290  size=95  [between]
undefined4 __thiscall FUN_00595290(int *param_1,uint *param_2,uint *param_3)

{
  if (param_1[0x61b] < param_1[0x63f]) {
    *param_3 = *param_3 | 0x401;
    return 0;
  }
  FUN_005941c0();
  (**(code **)(*param_1 + 0x1f8))(1);
  FUN_005891e0(1);
  param_1[0x438] = param_1[0x438] & 0xfffeffff;
  param_1[1099] = 0;
  *param_2 = *param_2 | 1;
  return 1;
}

// 005952F0  FUN_005952f0  size=169  [between]
void __thiscall FUN_005952f0(int param_1,int param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 2;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x1164) = 0;
    return;
  }
  FUN_00590040(0);
  FUN_0057dd00(1);
  FUN_0058bc80();
  FUN_0058bb90(0);
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xffffff7f;
  FUN_005937d0();
  if ((*(uint *)(param_1 + 0x10e0) & 0x40000) == 0) {
    FUN_00aa92c0(0x197);
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x40000;
  }
  if (*(float *)(param_1 + 0x1700) < 0.0) {
    *(float *)(param_1 + 0x1700) = *(float *)(param_1 + 0x195c) * 60.0;
  }
  iVar1 = 0;
  do {
    FUN_00a93910(iVar1 + 3);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}

// 00595570  FUN_00595570  size=367  [between]
void __fastcall FUN_00595570(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar2 = FUN_00a9f760(0x7f);
    if (iVar2 != 0) {
      FUN_005952f0(0);
      *(undefined4 *)(param_1 + 0x920) = 0x41f00000;
      FUN_0058ae10(0x40002);
      return;
    }
    uVar1 = 0x87;
    if (*(int *)(param_1 + 0x618) == 0x40000) {
      uVar1 = 0x7e;
    }
    FUN_00aa4080(uVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 4;
    FUN_005937d0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x620) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(int *)(param_1 + 0x620) == 0) {
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xfffffffb;
      FUN_005952f0(0);
      *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    }
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_0057bdc0(*(int *)(param_1 + 0xa84) + 0x40,0x3e4ccccd,0x3e0efa35);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xfffffffb;
    if (*(int *)(param_1 + 0x620) == 0) {
      FUN_005952f0(0);
      *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
    }
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x18f4) * 60.0;
    FUN_0058ae10(0x40002);
  }
  return;
}

// 005956E0  FUN_005956e0  size=185  [between]
void __fastcall FUN_005956e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_005952f0(0);
    iVar1 = FUN_00a9f760(0x7f);
    if (iVar1 != 0) goto LAB_00595781;
    FUN_00aa4080(0x7e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a96030(0,0x40400000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x620) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
LAB_00595781:
  *(undefined4 *)(param_1 + 0x920) = 0x41f00000;
  FUN_0058ae10(0x40002);
  return;
}

// 005957A0  FUN_005957a0  size=234  [between]
void __fastcall FUN_005957a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_005952f0(0);
    iVar1 = FUN_00a9f760(0x7f);
    if (iVar1 != 0) goto LAB_00595872;
    FUN_00aa4080(0x7e,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a96030(0,0x40400000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x620) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_0057bdc0(*(int *)(param_1 + 0xa84) + 0x40,0x3e99999a,0x3e32b8c2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
LAB_00595872:
  *(undefined4 *)(param_1 + 0x920) = 0x42b40000;
  FUN_0058ae10(0x40002);
  return;
}

// 00595890  FUN_00595890  size=298  [between]
void __fastcall FUN_00595890(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_00a9f760(0x83);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 2;
      *(undefined4 *)(param_1 + 0x920) = 0x41f00000;
      *(undefined4 *)(param_1 + 0x1164) = 0;
      FUN_0058ae10(0x40007);
      return;
    }
    FUN_00aa4120(0x82,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 4;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x620) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(int *)(param_1 + 0x620) == 0) {
    iVar1 = FUN_00a8c760(10);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xfffffffb;
      *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 2;
      *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
      *(undefined4 *)(param_1 + 0x1164) = 0;
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xfffffffb;
    if (*(int *)(param_1 + 0x620) == 0) {
      *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 2;
      *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
      *(undefined4 *)(param_1 + 0x1164) = 0;
    }
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x18f4) * 60.0;
    FUN_0058ae10(0x40007);
  }
  return;
}

// 005959C0  FUN_005959c0  size=597  [between]
void __fastcall FUN_005959c0(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  if (param_1[0x187] == 0) {
    iVar2 = param_1[0x186];
    uVar4 = 0x13;
    if (iVar2 != 0x50000) {
      if (iVar2 == 0x50001) {
        uVar4 = 0x14;
      }
      else if (iVar2 == 0x50002) {
        uVar4 = 0x15;
      }
    }
    FUN_00aa4080(uVar4,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    if ((param_1[0x438] & 0x200U) == 0) {
      FUN_00a92f90();
      FUN_00e36b50(0,8,0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x440] = 0;
    param_1[0x441] = 0;
    param_1[0x443] = 0;
    param_1[0x442] = 0;
    param_1[0x65a] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3dd67750);
  }
  iVar2 = FUN_00a8c760(9);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x220))(0x40400000);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  bVar1 = false;
  if (((param_1[0x438] & 0x200U) != 0) && (iVar2 = FUN_00a8c760(4), iVar2 != 0)) {
    bVar1 = true;
  }
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (!bVar1)) {
    return;
  }
  if (param_1[0x43a] == 0x70006) {
    FUN_0058ae10(0x70006);
    return;
  }
  fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
  if ((ABS(fVar5) < (float10)0.7853982) && (iVar2 = FUN_00582fe0(), iVar2 != 0)) {
    uVar3 = FUN_00dde2d0(0,100);
    if ((uVar3 & 1) != 0) {
      FUN_0058ae10(0x40000);
      return;
    }
    iVar2 = FUN_00593c30();
    if (iVar2 != 0) {
      return;
    }
    FUN_0058ae10(0x40000);
    return;
  }
  if ((param_1[0x438] & 0x200U) != 0) {
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if ((ABS(fVar5) < (float10)0.7853982) && ((float)param_1[0x2a4] <= 25.0)) {
      FUN_0058ae10(0x40006);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00595c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00595D50  FUN_00595d50  size=126  [between]
void __thiscall FUN_00595d50(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x10;
  switch(*param_2) {
  case 0x161:
    if (*(int *)(param_1 + 0x618) == 0x20009) {
      FUN_0058ae10();
      return;
    }
    break;
  case 0x165:
  case 0x16a:
    iVar1 = FUN_00ac8120();
    if (iVar1 != 0) {
      FUN_00b7ab80(0x42340000,0x3d4ccccd);
    }
    break;
  case 0x16b:
    *(int *)(param_1 + 0x1870) = *(int *)(param_1 + 0x1870) + -1;
    if (*(int *)(param_1 + 0x1870) < 1) {
      FUN_005941c0();
      return;
    }
  }
  return;
}

// 00595DF0  FUN_00595df0  size=118  [between]
void __thiscall FUN_00595df0(int param_1,int *param_2)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) | 0x20;
  if (((*(uint *)(param_1 + 0x10e0) & 0x200) == 0) || ((*(uint *)(param_1 + 0x10e0) & 0x8000) == 0))
  {
    if ((*param_2 == 0x16b) &&
       (*(int *)(param_1 + 0x1870) = *(int *)(param_1 + 0x1870) + -1, *(int *)(param_1 + 0x1870) < 1
       )) {
      FUN_005941c0();
    }
  }
  else {
    FUN_005891e0(1);
    *(undefined4 *)(param_1 + 0x1170) = 0;
    *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xffff7fff;
    iVar1 = FUN_00585400();
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xea8) = 0;
      return;
    }
  }
  return;
}

// 00595E70  FUN_00595e70  size=653  [between]
void __fastcall FUN_00595e70(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x438] = param_1[0x438] & 0xfffeffff;
    iVar2 = FUN_00585400();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0xea8) = 1;
    }
    FUN_00aa4080(0x41,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_005937d0();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3e32b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if ((*(byte *)(param_1 + 0x438) & 0x30) != 0) {
        FUN_00aa4080(0x43,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = 3;
        return;
      }
      FUN_005952f0(0);
      FUN_00aa4080(0x42,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x43340000;
    }
    break;
  case 2:
    iVar2 = FUN_00a8c760(0);
    if ((iVar2 != 0) && (fVar3 = (float10)FUN_0057bec0(), fVar3 < (float10)1.3962634)) {
      FUN_0057be60(0x3eb33333,0x3ea0d97c);
    }
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_0057b880((float)param_1[0x61f] * (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (((fVar1 - (float)param_1[0x244] <= 0.0) ||
        (fVar3 = (float10)FUN_0057bec0(), (float10)1.5707964 < fVar3)) ||
       ((*(byte *)(param_1 + 0x438) & 2) == 0)) {
      FUN_0057ca90();
      FUN_005891e0(1);
      FUN_00aa4080(0x43,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) || (iVar2 = FUN_00a8c760(4), iVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x005960fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00596110  FUN_00596110  size=133  [between]
void __fastcall FUN_00596110(int *param_1)

{
  FUN_00cd3bf0(param_1[0x13c]);
  FUN_00ac4770();
  switch(param_1[0x186]) {
  case 0x80008:
    FUN_005923d0();
    break;
  case 0x80009:
    FUN_0057ea60();
    break;
  case 0x8000a:
    FUN_0057ebf0();
    break;
  case 0x8000b:
    FUN_0057edb0();
    break;
  case 0x8000c:
    FUN_0057eeb0();
    break;
  case 0x8000d:
    FUN_0057f200();
  }
  if ((param_1[0x128] == 7) && ((DAT_01bea060 & 0x20000000) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00596191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  return;
}

// 005961B0  FUN_005961b0  size=391  [between]
/* WARNING: Switch with 1 destination removed at 0x0059627c : 17 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x005962f3 : 8 cases all go to same destination */

void __fastcall FUN_005961b0(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_00a8cab0();
  if (((((uVar2 & 0xffff0000) == 0xf0000) ||
       (uVar2 = FUN_00a8cab0(), (uVar2 & 0xffff0000) == 0x30000)) ||
      (iVar3 = FUN_00ac4780(), iVar3 < 2)) || (iVar3 = FUN_0058e9d0(), iVar3 == 0)) {
    iVar3 = *(int *)(param_1 + 0x618);
    if (iVar3 < 0x20001) {
      if (iVar3 == 0x20000) {
        iVar3 = FUN_00a8c760(0xf);
        if ((iVar3 != 0) && (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 1) != 0)) {
          FUN_0058ae10(0x20001);
        }
      }
      else {
        switch(iVar3) {
        case 0x10000:
          FUN_005947a0();
          return;
        case 0x10001:
          FUN_005949f0();
          return;
        case 0x10002:
          if (((*(uint *)(param_1 + 0x10e0) & 0x200) == 0) ||
             (17.639997 <= *(float *)(param_1 + 0xa90))) {
            if ((*(int *)(param_1 + 0x61c) != 0) &&
               (fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910),
               *(float *)(param_1 + 0x920) = fVar1, fVar1 <= 0.0)) {
              *(undefined4 *)(param_1 + 0x920) = 0x41700000;
              FUN_00593c30();
              return;
            }
          }
          else {
            FUN_0058ae10(0x1000a);
          }
          return;
        case 0x10009:
          FUN_00594b10();
          return;
        }
      }
    }
    else if (0x30000 < iVar3) {
      if (iVar3 < 0x40001) {
        switch(iVar3) {
        case 0x30011:
          FUN_0058d9c0();
          return;
        }
      }
      else if (iVar3 < 0x50001) {
        switch(iVar3) {
        case 0x40002:
          FUN_0058dca0();
          return;
        }
      }
      else if ((0x60000 < iVar3) && (iVar3 < 0xe0001)) {
        switch(iVar3) {
        case 0x70000:
          FUN_00594220();
          return;
        case 0x70001:
          if ((*(int *)(param_1 + 0x61c) != 0) &&
             (fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910),
             *(float *)(param_1 + 0x920) = fVar1, fVar1 <= 0.0)) {
            *(undefined4 *)(param_1 + 0x920) = 0x41700000;
            FUN_00593c30();
            return;
          }
          return;
        }
      }
    }
  }
  return;
}

// 005963D0  FUN_005963d0  size=2892  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005963d0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  iVar2 = param_1[0x186];
  if (iVar2 < 0x20001) {
    if (iVar2 == 0x20000) {
      FUN_0057d0e0();
      return;
    }
    switch(iVar2) {
    case 0x10000:
      FUN_00582480();
      return;
    case 0x10001:
      FUN_0058b0d0();
      return;
    case 0x10002:
      FUN_0058b380();
      return;
    case 0x10003:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0xf,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        if (((param_1[0x438] & 0x200U) == 0) && (iVar2 = FUN_00a92f90(), iVar2 != 0)) {
          FUN_00e36b50(0,8,0);
        }
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3d32b8c2);
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00582688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x10004:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x10,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        if (((param_1[0x438] & 0x200U) == 0) && (iVar2 = FUN_00a92f90(), iVar2 != 0)) {
          FUN_00e36b50(0,8,0);
        }
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3d32b8c2);
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00582768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x10005:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x11,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        if (((param_1[0x438] & 0x200U) == 0) && (iVar2 = FUN_00a92f90(), iVar2 != 0)) {
          FUN_00e36b50(0,8,0);
        }
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3d32b8c2);
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00582848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x10006:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x30,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[1099] = 0;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3e0efa35);
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0057c428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x10007:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x13,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        if ((float)param_1[0x2a4] <= 36.0) {
          if (param_1[0x5bd] < 3) {
            FUN_0058ae10(0x50008);
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0058b6be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
        FUN_0058ae10(0x20009);
      }
      return;
    case 0x10009:
      if (param_1[0x187] == 0) {
        uVar7 = 0x3e4ccccd;
        iVar2 = FUN_00a8c760(4);
        if (iVar2 != 0) {
          uVar7 = 0x3ecccccd;
        }
        if ((param_1[0x438] & 0x200U) == 0) {
          uVar6 = 0x2c;
        }
        else {
          uVar6 = 0x2e;
        }
        FUN_00aa4080(uVar6,1,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00aa4120(5,0,uVar7,0x3f800000,0,0xbf800000,0x3f800000);
        fVar8 = (float)param_1[0x2a4];
        uVar4 = (uint)param_1[0x438] >> 9 & 1;
        if (NAN(fVar8) || 196.0 < fVar8 == (fVar8 == 196.0)) {
          fVar8 = (float)param_1[uVar4 + 0x634];
        }
        else {
          fVar8 = (float)param_1[uVar4 + 0x638];
        }
        param_1[0x248] = (int)(fVar8 * 60.0);
        fVar8 = (float)param_1[uVar4 + 0x645];
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x250] = param_1[0x440];
        param_1[0x249] = (int)(fVar8 * 60.0);
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    case 0x1000a:
      FUN_00594ce0();
      return;
    }
switchD_005963ed_caseD_10008:
    return;
  }
  if (iVar2 < 0x30001) {
    if (iVar2 == 0x30000) {
      FUN_0058be60();
      return;
    }
    switch(iVar2) {
    case 0x20001:
      goto LAB_0057d1b0;
    case 0x20002:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x35,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x250] = 0;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3da0d97c);
      }
      iVar2 = FUN_00a8c760(0xf);
      if (iVar2 != 0) {
        fVar8 = (float)param_1[0x2a4];
        if (!NAN(fVar8) && 20.25 < fVar8 != (fVar8 == 20.25)) {
          if (param_1[0x250] != 0) {
            FUN_0058ae10(0x20004);
            return;
          }
          FUN_0058ae10(0x20003);
          return;
        }
        param_1[0x250] = param_1[0x250] + 1;
      }
      iVar2 = FUN_00a94ce0(0);
      if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0058ec2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    case 0x20003:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x33,0,0x3e4ccccd,0x3f800000,0x8000000,0x3fe00000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0057d306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x20004:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x34,0,0x3e4ccccd,0x3f800000,0x8000000,0x3faaaaab,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0057d396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x20005:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x39,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d32b8c2);
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
        return;
      }
      fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
      if ((float10)0.7853982 < ABS(fVar5)) {
        FUN_0058af30(0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0058ed28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    case 0x20006:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x3a,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d32b8c2);
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
        return;
      }
      fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
      if ((float10)0.7853982 < ABS(fVar5)) {
        FUN_0058af30(0);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0058ee28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    case 0x20007:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x3b,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if ((iVar2 != 0) || (iVar2 = FUN_00a8c760(4), iVar2 != 0)) {
        FUN_0058ae10(0x10005);
      }
      return;
    case 0x20008:
      FUN_00584230();
      return;
    case 0x20009:
      FUN_00595e70();
      return;
    case 0x2000a:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x43,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_005891e0(1);
        FUN_0057ca90();
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005899c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x2000b:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x97,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3e0efa35);
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0057d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    case 0x2000c:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x45,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      iVar2 = FUN_00ac82f0();
      if ((iVar2 == 0) || (iVar2 = FUN_00a8e520(), iVar2 == 0)) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = (_DAT_01be942c / (float)param_1[0x244]) * 0.9;
      }
      FUN_00a96030(0,fVar8);
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3da0d97c);
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0057d5d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    default:
      return;
    case 0x2000e:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x47,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00aa4080(0x48,1,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x438] = param_1[0x438] & 0xffff7fff;
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x250] = 0;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3db2b8c2);
      }
      iVar2 = FUN_00a8c760(4);
      if ((iVar2 != 0) && ((float)param_1[0x2a4] <= 20.25)) {
        if ((param_1[0x250] == 0) && (uVar4 = FUN_00dde2d0(0,100), (uVar4 & 1) != 0)) {
          FUN_0058ae10(0x50000);
          return;
        }
        param_1[0x250] = param_1[0x250] + 1;
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0058f009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x2000f:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x4a,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00aa4080(0x4b,1,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x438] = param_1[0x438] & 0xffff7fff;
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x250] = 0;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3db2b8c2);
      }
      iVar2 = FUN_00a8c760(4);
      if ((iVar2 != 0) && ((float)param_1[0x2a4] <= 20.25)) {
        if ((param_1[0x250] == 0) && (uVar4 = FUN_00dde2d0(0,100), (uVar4 & 1) != 0)) {
          FUN_0058ae10(0x50000);
          return;
        }
        param_1[0x250] = param_1[0x250] + 1;
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0058f159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x20010:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x4d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00aa4080(0x4e,1,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x438] = param_1[0x438] & 0xffff7fff;
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x250] = 0;
        param_1[0x251] = 0;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3db2b8c2);
      }
      iVar2 = FUN_00a8c760(0xf);
      if (iVar2 != 0) {
        fVar8 = (float)param_1[0x2a4];
        if (!NAN(fVar8) && 30.25 < fVar8 != (fVar8 == 30.25)) {
          FUN_00581d70(0x3e4ccccd);
          if (param_1[0x250] != 0) {
            FUN_0058ae10(0x20004);
            return;
          }
          FUN_0058ae10(0x20003);
          return;
        }
        param_1[0x250] = param_1[0x250] + 1;
      }
      iVar2 = FUN_00a8c760(4);
      if ((iVar2 != 0) && ((float)param_1[0x2a4] <= 20.25)) {
        if ((param_1[0x251] == 0) && (uVar4 = FUN_00dde2d0(0,100), (uVar4 & 1) != 0)) {
          FUN_0058ae10(0x50000);
          return;
        }
        param_1[0x251] = param_1[0x251] + 1;
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0058f309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x20011:
      FUN_0058f310();
      return;
    }
  }
  if (iVar2 < 0x40001) {
    if (iVar2 != 0x40000) {
      switch(iVar2) {
      case 0x30001:
        FUN_0058bfb0();
        return;
      case 0x30002:
        FUN_0058c230();
        return;
      case 0x30003:
        FUN_0058c3c0();
        return;
      case 0x30004:
        if (param_1[0x187] == 0) {
          FUN_00aa4080(0x6d,0,0x3dcccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
          fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x447]);
          param_1[0x25] = (int)(float)fVar5;
          param_1[0x187] = param_1[0x187] + 1;
          param_1[0x250] = 0;
        }
        else if (param_1[0x187] != 1) {
          return;
        }
        FUN_00ac80a0(0x3f800000,0x3f800000);
        iVar2 = FUN_00a8c760(4);
        if ((((iVar2 != 0) && (0 < param_1[0x5bd])) && ((*(byte *)(param_1 + 0x438) & 0x40) == 0))
           && (param_1[0x250] == 0)) {
          param_1[0x250] = 1;
          fVar5 = (float10)FUN_00dde300(0,0x3f800000);
          if (fVar5 < (float10)(float)param_1[0x620] != (fVar5 == (float10)(float)param_1[0x620])) {
            FUN_0058ae10(0x50007);
            return;
          }
        }
        bVar1 = false;
        if (((param_1[0x250] != 0) && (iVar2 = FUN_00a8c760(4), iVar2 != 0)) &&
           ((param_1[0x438] & 0x200U) != 0)) {
          bVar1 = true;
        }
        iVar2 = FUN_00a94ce0(0);
        if ((iVar2 == 0) && (!bVar1)) {
          return;
        }
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
        param_1[0x440] = 0;
        param_1[0x441] = 0;
        param_1[0x443] = 0;
        param_1[0x442] = 0;
        param_1[0x65a] = 0;
                    /* WARNING: Could not recover jumptable at 0x0058c63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      case 0x30005:
        FUN_0058c650();
        return;
      case 0x30006:
        FUN_0058c800();
        return;
      case 0x30007:
        FUN_0058c8f0();
        return;
      case 0x30008:
        FUN_0058cb90();
        return;
      case 0x30009:
        FUN_0058cd80();
        return;
      case 0x3000a:
        FUN_00583bd0();
        return;
      case 0x3000b:
        if (param_1[0x187] == 0) {
          FUN_00aa4080(0x75,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (param_1[0x187] != 1) {
          return;
        }
        *(undefined2 *)(param_1 + 0x209) = 4;
        param_1[0x20a] = 0x78;
        FUN_00ac80a0(0x3f800000,0x3f800000);
        if ((param_1[0x438] & 0x40U) == 0) {
          if (param_1[((uint)param_1[0x438] >> 9 & 1) + 0x621] <= param_1[0x441]) goto LAB_0058d098;
        }
        else if (param_1[0x651] <= param_1[0x441]) {
LAB_0058d098:
          FUN_0058b930(param_1[0x447]);
          return;
        }
        iVar2 = FUN_00a94ce0(0);
        if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0058d081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      case 0x3000c:
        if (param_1[0x187] == 0) {
          FUN_00aa4080(0x76,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (param_1[0x187] != 1) {
          return;
        }
        iVar2 = FUN_00a8c760(0);
        if (iVar2 != 0) {
          FUN_0057bdc0(param_1 + 0x450,0x3e4ccccd,0x3db2b8c2);
        }
        FUN_00ac80a0(0x3f800000,0x3f800000);
        iVar2 = FUN_00a94ce0(0);
        if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0057cd8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
        return;
      case 0x3000d:
        FUN_0058d0b0();
        return;
      case 0x3000e:
        FUN_0058d550();
        return;
      case 0x3000f:
        if (param_1[0x187] == 0) {
          FUN_00aa4080(0x77,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          param_1[0x438] = param_1[0x438] | 4;
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (param_1[0x187] != 1) {
          return;
        }
        FUN_00ac80a0(0x3f800000,0x3f800000);
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3dd67750);
        if ((param_1[0x438] & 0x40U) == 0) {
          if (param_1[((uint)param_1[0x438] >> 9 & 1) + 0x621] <= param_1[0x441]) goto LAB_0058d9a9;
        }
        else if (param_1[0x651] <= param_1[0x441]) {
LAB_0058d9a9:
          FUN_0058b930(param_1[0x447]);
          return;
        }
        iVar2 = FUN_00a94ce0(0);
        if (iVar2 != 0) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
          param_1[0x440] = 0;
          param_1[0x441] = 0;
          param_1[0x443] = 0;
          param_1[0x442] = 0;
          param_1[0x65a] = 0;
                    /* WARNING: Could not recover jumptable at 0x0058d992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        return;
      case 0x30010:
        goto LAB_005953a0;
      case 0x30011:
        FUN_0058da40();
        return;
      case 0x30012:
        FUN_00593860();
        return;
      default:
        goto switchD_005963ed_caseD_10008;
      }
    }
    goto switchD_00596531_caseD_40001;
  }
  if (0x50000 < iVar2) {
    if (0x60000 < iVar2) {
      if (iVar2 < 0xe0001) {
        if (iVar2 == 0xe0000) {
          FUN_0057c450();
          return;
        }
        switch(iVar2) {
        case 0x70000:
          goto LAB_005857b0;
        case 0x70001:
          FUN_005858b0();
          return;
        case 0x70002:
          if (param_1[0x187] == 0) {
            FUN_00aa4080(0xea,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
            return;
          }
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar2 = FUN_00a8c760(0);
          if (iVar2 != 0) {
            FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3d32b8c2);
          }
          iVar2 = FUN_00a94ce0(0);
          if (iVar2 != 0) {
            (**(code **)(*param_1 + 0x34c))();
          }
          _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
          return;
        case 0x70003:
          if (param_1[0x187] == 0) {
            FUN_00aa4080(0xeb,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
            return;
          }
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar2 = FUN_00a8c760(0);
          if (iVar2 != 0) {
            FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3d32b8c2);
          }
          iVar2 = FUN_00a94ce0(0);
          if (iVar2 != 0) {
            (**(code **)(*param_1 + 0x34c))();
          }
          _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
          return;
        case 0x70004:
          if (param_1[0x187] == 0) {
            FUN_00aa4080(0xec,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
            return;
          }
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar2 = FUN_00a8c760(0);
          if (iVar2 != 0) {
            FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3d32b8c2);
          }
          iVar2 = FUN_00a94ce0(0);
          if (iVar2 != 0) {
            (**(code **)(*param_1 + 0x34c))();
          }
          _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
          return;
        case 0x70005:
          if (param_1[0x187] == 0) {
            FUN_00aa4080(0xee,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
            return;
          }
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar2 = FUN_00a94ce0(0);
          if (iVar2 != 0) {
            (**(code **)(*param_1 + 0x34c))();
          }
          _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
          return;
        case 0x70006:
          FUN_00590470();
          return;
        case 0x70007:
          FUN_00589c90();
          return;
        case 0x70008:
          if (param_1[0x187] == 0) {
            FUN_00aa4080(0x65,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            param_1[0x438] = param_1[0x438] & 0xfffff7ff;
            param_1[0x187] = param_1[0x187] + 1;
            param_1[0x61b] = 0;
            param_1[0x619] = -1;
          }
          else if (param_1[0x187] != 1) {
            _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
            return;
          }
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar2 = FUN_00a94ce0(0);
          if (iVar2 != 0) {
            (**(code **)(*param_1 + 0x34c))();
          }
          _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
          return;
        default:
          return;
        }
      }
      if (0xf0000 < iVar2) {
        switch(iVar2) {
        case 0xf0001:
          FUN_0058f4b0();
          return;
        case 0xf0002:
          FUN_0058fb00();
          return;
        case 0xf0003:
          FUN_00586730();
          return;
        case 0xf0004:
          FUN_00586b20();
          return;
        default:
          return;
        }
      }
      if (iVar2 != 0xf0000) {
        if (iVar2 != 0xe0001) {
          return;
        }
        FUN_0057c6e0();
        return;
      }
      FUN_0057d8c0();
      return;
    }
    if (iVar2 == 0x60000) {
      FUN_00583cb0();
      return;
    }
    switch(iVar2) {
    case 0x50001:
    case 0x50002:
      goto switchD_00596577_caseD_50001;
    case 0x50003:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x16,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d567750);
      }
      iVar2 = FUN_00a8c760(9);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x220))(0x40a00000);
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0057cf53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x50004:
      if (param_1[0x187] == 0) {
        param_1[0x438] = param_1[0x438] | 4;
        FUN_00aa4080(0x1a,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d8efa35);
      }
      if ((param_1[0x188] == 0) && (iVar2 = FUN_00a8c760(10), iVar2 != 0)) {
        FUN_005952f0(0);
        param_1[0x188] = param_1[0x188] + 1;
      }
      iVar2 = FUN_00a8c760(9);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x220))(0x40a00000);
      }
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        param_1[0x438] = param_1[0x438] & 0xfffffffb;
        if (param_1[0x188] == 0) {
          FUN_005952f0(0);
          param_1[0x188] = param_1[0x188] + 1;
        }
        param_1[0x248] = (int)((float)param_1[0x63d] * 60.0);
        FUN_0058ae10(0x40002);
      }
      return;
    default:
      return;
    case 0x50007:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x73,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0057cff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x50008:
      FUN_0058e6d0();
      return;
    }
  }
  if (iVar2 == 0x50000) {
switchD_00596577_caseD_50001:
    FUN_005959c0();
    return;
  }
  switch(iVar2) {
  case 0x40001:
switchD_00596531_caseD_40001:
    FUN_00595570();
    return;
  case 0x40002:
    goto LAB_0058dd20;
  case 0x40003:
    iVar2 = param_1[0x187];
    if (iVar2 == 0) {
      FUN_00aa4080(0x8d,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (iVar2 != 1) {
      if (iVar2 == 2) {
        FUN_00ac80a0(0x3f800000,0x3f800000);
        iVar2 = FUN_00a94ce0(0);
        if (iVar2 != 0) {
          (**(code **)(*param_1 + 0x34c))();
        }
      }
      goto LAB_0058e32a;
    }
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3dd67750);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if ((16.0 < (float)param_1[0x2a4]) || ((float10)0.5235988 < ABS(fVar5))) {
      if ((float10)1.7453293 < ABS(fVar5)) {
        FUN_005891e0(1);
        FUN_00aa4080(0x80,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      iVar2 = FUN_00ac82f0();
      if (((iVar2 == 0) &&
          (fVar8 = (float)param_1[0x24e], !NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0))) &&
         (fVar8 = (float)param_1[0x24e], param_1[0x24e] = (int)((float)param_1[0x244] + fVar8),
         60.0 <= (float)param_1[0x244] + fVar8)) {
        FUN_00589a40();
        param_1[0x24e] = -0x40800000;
      }
    }
    else {
      FUN_0058ae10(0x40002);
    }
LAB_0058e32a:
    if ((((*(byte *)(param_1 + 0x438) & 0x80) != 0) && (param_1[0x439] != 0x40004)) &&
       ((fVar8 = (float)param_1[0x249], param_1[0x249] = (int)((float)param_1[0x244] + fVar8),
        10.0 <= (float)param_1[0x244] + fVar8 && (param_1[0x187] == 1)))) {
      FUN_005891e0(1);
      FUN_00aa4080(0x80,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
    }
    return;
  case 0x40004:
    FUN_005956e0();
    return;
  case 0x40005:
    FUN_005957a0();
    return;
  case 0x40006:
    FUN_00595890();
    return;
  case 0x40007:
    FUN_0058e3c0();
    return;
  case 0x40008:
  case 0x40009:
    if (param_1[0x187] == 0) {
      FUN_00aa4080(0x85,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x25] = param_1[0x45a];
      param_1[0x459] = param_1[0x459] + 1;
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x40a00000;
      param_1[0x249] = 0x40a00000;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar8 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar8 - (float)param_1[0x244]);
    if ((fVar8 - (float)param_1[0x244] <= 0.0) && ((param_1[0x438] & 0x8000U) != 0)) {
LAB_0058e657:
      FUN_0058ae10(0x20011);
      return;
    }
    if (param_1[0x186] == 0x40009) {
      fVar8 = (float)param_1[0x249] - (float)param_1[0x244];
      param_1[0x249] = (int)fVar8;
      if (fVar8 < 0.0 != (fVar8 == 0.0)) {
        FUN_0058ae10(0x20011);
        return;
      }
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if ((param_1[0x438] & 0x8000U) != 0) goto LAB_0058e657;
      param_1[0x248] = 0x42700000;
      FUN_0058ae10(0x40007);
    }
    return;
  default:
    goto switchD_005963ed_caseD_10008;
  }
LAB_005857b0:
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xe3,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    iVar2 = FUN_005855f0(param_1[0x619]);
    if (iVar2 != 0) {
      FUN_00aa4520(0xe4,param_1[0x13c],0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
    fVar8 = (float)param_1[0x2a4];
    uVar4 = (uint)param_1[0x438] >> 9 & 1;
    if (NAN(fVar8) || 196.0 < fVar8 == (fVar8 == 196.0)) {
      fVar8 = (float)param_1[uVar4 + 0x634];
    }
    else {
      fVar8 = (float)param_1[uVar4 + 0x638];
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)(fVar8 * 60.0);
  }
  else if (param_1[0x187] != 1) {
    _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  _DAT_01beaa88 = _DAT_01beaa88 | 0x40000000;
  return;
LAB_0057d1b0:
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x34,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3da0d97c);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0057d26d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
LAB_005953a0:
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x89,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x438] = param_1[0x438] | 4;
    FUN_005937d0();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x188] = 0;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8e520();
  if (iVar2 == 0) {
LAB_00595499:
    FUN_00a96030(0,0x3f800000);
  }
  else {
    if (param_1[0x250] == 0) {
      iVar2 = FUN_00ac82f0();
      if (iVar2 == 0) goto LAB_00595499;
      if (param_1[0x250] == 0) {
        uVar7 = 0x3f800000;
        fVar5 = (float10)FUN_00a958c0(0);
        FUN_00aa4080(0x89,0,0x3c888889,0x3f800000,0x8000000,(float)fVar5,uVar7);
      }
    }
    FUN_00a96030(0,_DAT_01be942c / (float)param_1[0x244]);
    param_1[0x250] = param_1[0x250] + 1;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x188] == 0) && (iVar2 = FUN_00a8c760(10), iVar2 != 0)) {
    param_1[0x438] = param_1[0x438] & 0xfffffffb;
    FUN_005952f0(0);
    param_1[0x188] = param_1[0x188] + 1;
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3e0efa35);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x438] = param_1[0x438] & 0xfffffffb;
    if (param_1[0x188] == 0) {
      FUN_005952f0(0);
      param_1[0x188] = param_1[0x188] + 1;
    }
    param_1[0x248] = (int)((float)param_1[0x63d] * 60.0);
    FUN_0058ae10(0x30011);
  }
  return;
LAB_0058dd20:
  iVar3 = FUN_00583250();
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    param_1[0x188] = 0;
    param_1[0x249] = 0;
    param_1[0x189] = 0;
    iVar2 = FUN_00585400();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0xea8) = 1;
    }
    uVar7 = 0x3d088889;
    if (param_1[0x439] == 0x40003) {
      uVar7 = 0x3e888889;
    }
    FUN_00aa4080(0x7f,0,uVar7,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x24f] = (int)((float)param_1[0x63e] * 60.0);
    param_1[0x24d] = 0;
    param_1[0x24e] = 0;
    param_1[0x189] = 0;
    param_1[599] = 0;
    param_1[0x24d] = 0;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
    }
    goto LAB_0058e0e1;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar8 = 1.0;
  if (iVar3 != 0) {
    fVar8 = 0.25;
  }
  iVar2 = FUN_00ac82f0();
  if (iVar2 != 0) {
    if (param_1[599] == 0) {
      fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
      fVar5 = ABS(fVar5);
      if (((float10)0.7853982 < fVar5 != ((float10)0.7853982 == fVar5)) &&
         (fVar5 < (float10)2.0943952 != (fVar5 == (float10)2.0943952))) {
        param_1[0x189] = 1;
        param_1[0x24d] = 0x42700000;
        FUN_00aa4080(0x8d,0,0x3dcccccd,0x3f800000,0x80,0xbf800000,0x3f800000);
      }
    }
    param_1[599] = param_1[599] + 1;
  }
  if (param_1[0x189] == 1) {
    param_1[0x24d] = (int)((float)param_1[0x24d] - (float)param_1[0x244]);
    FUN_0057bdc0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3d8efa35);
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if ((ABS(fVar5) < (float10)0.17453292 != (ABS(fVar5) == (float10)0.17453292)) ||
       ((float)param_1[0x24d] <= 0.0)) {
      FUN_00aa4080(0x7f,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x189] = 0;
    }
LAB_0058dfb6:
    fVar8 = (float)param_1[0x2a4];
    if ((!NAN(fVar8) && 56.25 < fVar8 != (fVar8 == 56.25)) &&
       (fVar8 = (float)param_1[0x24d], param_1[0x24d] = (int)((float)param_1[0x244] + fVar8),
       30.0 <= (float)param_1[0x244] + fVar8)) {
      FUN_0058ae10(0x40003);
      goto LAB_0058e0e1;
    }
  }
  else {
    fVar8 = (float)param_1[0x248] - (float)param_1[0x244] * fVar8;
    param_1[0x248] = (int)fVar8;
    bVar1 = 0.0 < fVar8;
    if (param_1[0x439] == 0x40004) {
LAB_0058e046:
      if (bVar1) goto LAB_0058dfb6;
    }
    else if ((bVar1) && ((*(byte *)(param_1 + 0x438) & 2) != 0)) {
      fVar5 = (float10)FUN_0057bec0();
      bVar1 = fVar5 < (float10)1.3962634;
      goto LAB_0058e046;
    }
    FUN_005891e0(1);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aa4080(0x80,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  iVar2 = FUN_00ac82f0();
  if (((iVar2 == 0) && (fVar8 = (float)param_1[0x24e], !NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0))
      ) && (fVar8 = (float)param_1[0x24e], param_1[0x24e] = (int)((float)param_1[0x244] + fVar8),
           60.0 <= (float)param_1[0x244] + fVar8)) {
    FUN_00589a40();
    param_1[0x24e] = -0x40800000;
  }
LAB_0058e0e1:
  if ((((*(byte *)(param_1 + 0x438) & 0x80) != 0) && (param_1[0x439] != 0x40004)) &&
     ((fVar8 = (float)param_1[0x249], param_1[0x249] = (int)((float)param_1[0x244] + fVar8),
      10.0 <= (float)param_1[0x244] + fVar8 && (param_1[0x187] == 1)))) {
    FUN_005891e0(1);
    FUN_00aa4080(0x80,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 2;
  }
  return;
}

// 00596760  FUN_00596760  size=319  [between]
undefined4 __thiscall FUN_00596760(int *param_1,int *param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00a8eea0();
  if ((iVar2 < 1) && (param_1[0x139] == 0)) {
    param_1[0x139] = 1;
    FUN_0058ae10(0x60000);
    *param_3 = 0x81;
    return 1;
  }
  if ((((param_1[0x438] & 2U) != 0) && ((param_1[0x438] & 0x200U) != 0)) &&
     (iVar2 = FUN_00593570(param_2,param_3), iVar2 != 0)) {
    return 1;
  }
  if (((param_1[0x438] & 0x800U) != 0) && ((param_1[0x438] & 8U) == 0)) {
    uVar3 = FUN_00595290(param_2,param_3);
    return uVar3;
  }
  uVar3 = FUN_00582aa0(param_2,param_3);
  iVar2 = FUN_00582c00(uVar3,param_2,param_3);
  *param_3 = *param_3 | 1;
  if (iVar2 != -1) {
    FUN_0058ae10(iVar2);
    (**(code **)(*param_1 + 0x1f8))(1);
    FUN_005891e0(1);
    param_1[0x438] = param_1[0x438] & 0xfffeffff;
    param_1[1099] = 0;
    param_1[0x441] = param_1[0x441] + 1;
    return 1;
  }
  *param_3 = *param_3 | 0x400;
  bVar1 = false;
  if ((*param_2 == 0x146) && ((param_2[0x24] & 0x8000U) == 0)) {
    bVar1 = true;
  }
  if (((*(byte *)(param_1 + 0x438) & 8) == 0) && (!bVar1)) {
    FUN_0057c7b0();
  }
  if ((param_1[0x186] == 0x3000f) && (1 < param_1[0x5bd])) {
    param_1[0x441] = param_1[0x441] + 1;
  }
  return 0;
}

// 005968A0  FUN_005968a0  size=140  [between]
void __thiscall FUN_005968a0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1[0x438] & 0x200U) != 0) {
    param_1[0x438] = param_1[0x438] | 2;
    param_1[0x459] = 0;
    FUN_0058ae10(0x40006);
    FUN_00a8eea0();
    uVar1 = FUN_00582970(param_2,1);
    (**(code **)(*param_1 + 0x30c))(uVar1,0);
    FUN_00a8eea0();
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00582e50(param_2,uVar1);
    return;
  }
  FUN_0058ae10(0x40004);
  return;
}

// 00596930  Em0310::vf1A4  size=564  [class]
void __thiscall Em0310::vf1A4(int *param_1,int *param_2,byte param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  FUN_00a7c960(param_2 + 0x48);
  iVar1 = FUN_00a81330();
  if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0x4c0) & 0x10) == 0)) {
    return;
  }
  if ((param_3 & 4) == 0) {
    if ((param_3 & 10) == 0) {
      if ((param_3 & 1) != 0) {
        FUN_00595d50(param_2);
      }
    }
    else {
      FUN_00595df0(param_2);
    }
  }
  else {
    if ((param_1[0x438] & 0x200U) == 0) {
      uVar6 = 0x2c;
    }
    else {
      uVar6 = 0x2e;
    }
    FUN_00aa4080(uVar6,1,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar2 = (uint)param_1[0x438] >> 0xf & 1;
    if ((uVar2 != 0) && (param_1[0x45c] < param_1[0x45b])) {
      fVar5 = (float10)FUN_00dde300(0,0x3f800000);
      if (fVar5 <= (float10)(float)param_1[0x654]) {
        FUN_0058ae10(0x30006);
        return;
      }
      FUN_0058ae10(0x30008);
      return;
    }
    if (uVar2 != 0) {
      FUN_0058ae10(0x30005);
      return;
    }
    if (((param_1[0x438] & 0x200U) != 0) && (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 7) != 0)) {
      FUN_0058b890();
      FUN_0058ae10(0x30006);
      return;
    }
    if ((*param_2 == 0x15b) || (((uint)param_1[0x438] >> 9 & 1) != 0)) {
      FUN_0058ae10(0x30007);
    }
    else {
      fVar5 = (float10)FUN_00dde300(0,0x3f800000);
      if ((float10)(float)param_1[0x658] <= fVar5) {
        FUN_0058ae10(0x30005);
      }
      else {
        FUN_0058ae10(0x30007);
      }
    }
  }
  if (((((param_3 & 6) != 0) && (*param_2 == 0x161)) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
     (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    FUN_0057d6e0();
    iVar4 = (**(code **)(*piVar3 + 0x14c))(0x69,param_1[0x13c]);
    if (iVar4 != 0) {
      (**(code **)(*piVar3 + 0x150))(0x69,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x69,iVar1);
    }
  }
  return;
}

// 00596B70  Em0310::vf4C  size=58  [class]
void __fastcall Em0310::vf4C(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x10e0) = *(uint *)(param_1 + 0x10e0) & 0xfffdffff;
  BehaviorEmBase::vf4C();
  iVar1 = FUN_00ac4770();
  if (iVar1 == 0) {
    FUN_005961b0();
  }
  FUN_005963d0();
  FUN_00588f80();
  FUN_00581f90();
  return;
}

// 00596BB0  Em0310::vf32C  size=1630  [class]
undefined4 __fastcall Em0310::vf32C(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  int *piVar9;
  float10 fVar10;
  ulonglong uVar11;
  int local_70;
  undefined4 local_68;
  undefined4 local_60;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  if (param_1[0x2bd] != 1) {
    iVar3 = FUN_00594f10();
    if (iVar3 == 0) {
      iVar3 = FUN_00a8e520();
      if (((iVar3 == 0) || (iVar3 = FUN_00593f80(), iVar3 == 0)) &&
         (iVar3 = FUN_005932b0(), iVar3 == 0)) goto LAB_00596c2d;
    }
    else {
      (**(code **)(*param_1 + 0x220))(0x41200000);
      if (param_1[0x461] == 0) {
        param_1[0x438] = param_1[0x438] | 0x80;
      }
      FUN_005899d0();
    }
    return 1;
  }
LAB_00596c2d:
  iVar3 = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  piVar9 = (int *)param_1[0x19f];
  piVar4 = piVar9 + param_1[0x1a1] * 0x54;
  local_60 = 0;
  local_70 = 0;
  do {
    if (piVar9 == piVar4) {
      return local_60;
    }
    iVar5 = *piVar9;
    if ((((iVar5 != 0) && (iVar5 != 1)) && ((iVar5 != 2 && ((iVar5 != 0x1b0 && (iVar5 != 0x147))))))
       && (iVar5 = FUN_00a81330(), iVar5 != param_1[0x13c])) {
      if (iVar5 != 0) {
        iVar3 = FUN_00a7c8a0();
        local_70 = iVar3;
      }
      iVar5 = FUN_00a8ef10();
      if (iVar5 == 0) {
        if (param_1[0x669] != 0) {
          if ((*(byte *)((int)piVar9 + 0x92) & 1) != 0) {
            (**(code **)(*param_1 + 0x198))(iVar3,piVar9,1);
            uVar8 = FUN_0057da20(piVar9);
            return uVar8;
          }
          (**(code **)(*param_1 + 0x198))(iVar3,piVar9,0x100);
          uVar8 = FUN_0057da20(piVar9);
          return uVar8;
        }
        iVar5 = FUN_00a8f040(piVar9);
        if (iVar5 == 0) {
          iVar5 = FUN_00a8eea0();
          local_68 = 0;
          if (((0 < iVar5) && (iVar3 != 0)) && ((*(byte *)(iVar3 + 0x4c0) & 0x10) != 0)) {
            local_68 = 1;
            (**(code **)(*param_1 + 0x21c))(iVar3,(char)piVar9[4],0x3c23d70a,0);
            param_1[0x440] = param_1[0x440] + 1;
            if (piVar9[0x3b] != 0) {
              param_1[0x443] = param_1[0x443] + 1;
            }
            param_1[0x444] = 0;
          }
          if ((param_1[0x2bd] == 1) || ((param_1[0x438] & 0x20000U) != 0)) {
            (**(code **)(*param_1 + 0x198))(iVar3,piVar9,0);
            return 1;
          }
          uVar11 = FUN_00582d00(piVar9);
          if ((((int)uVar11 != 0) && ((uVar11 & 0x200000000) == 0)) &&
             ((uVar11 & 0x80000000000) == 0)) {
            FUN_005968a0(piVar9);
            (**(code **)(*param_1 + 0x198))(iVar3,piVar9,0);
            iVar3 = FUN_0057d7f0();
            if (iVar3 == 0) {
              return 1;
            }
LAB_005971ba:
            DAT_01bea090 = DAT_01bea090 | 0x8000;
            FUN_00cad200(1);
            param_1[0x66a] = 1;
            FUN_0058ae10(0x30012);
            return 1;
          }
          fVar10 = (float10)FUN_00ddba30((float)piVar9[0xc] - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar10;
          fVar10 = (float10)FUN_00ddba30((float)piVar9[0xc] - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar10;
          param_1[0x45a] = 0;
          if (iVar3 != 0) {
            fStack_40 = *(float *)(iVar3 + 0x40) - (float)param_1[0x10];
            fStack_38 = *(float *)(iVar3 + 0x48) - (float)param_1[0x12];
            fStack_34 = *(float *)(iVar3 + 0x4c) - (float)param_1[0x13];
            uStack_3c = 0;
            if ((fStack_38 != 0.0) || (fStack_40 != 0.0)) {
              fVar7 = fStack_38 * fStack_38 + fStack_40 * fStack_40;
              if (fVar7 < 0.0 == (fVar7 == 0.0)) {
                FUN_00ddf460(&fStack_40,&fStack_40);
                fVar10 = (float10)fpatan((float10)fStack_40,(float10)fStack_38);
                param_1[0x45a] = (int)(float)fVar10;
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                uStack_3c = 0x3f800000;
                fVar10 = (float10)fpatan((float10)0,(float10)0);
                param_1[0x45a] = (int)(float)fVar10;
              }
            }
          }
          param_1[0x447] = 0;
          if (iVar3 != 0) {
            fStack_50 = *(float *)(iVar3 + 0x40) - (float)param_1[0x10];
            fStack_48 = *(float *)(iVar3 + 0x48) - (float)param_1[0x12];
            fStack_44 = *(float *)(iVar3 + 0x4c) - (float)param_1[0x13];
            fStack_4c = 0.0;
            if ((fStack_50 != 0.0) || (fStack_48 != 0.0)) {
              fVar7 = fStack_50 * fStack_50 + fStack_48 * fStack_48;
              if (fVar7 < 0.0 == (fVar7 == 0.0)) {
                FUN_00ddf460(&fStack_50,&fStack_50);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                fStack_50 = 0.0;
                fStack_4c = 1.0;
                fStack_48 = 0.0;
              }
              pfVar6 = (float *)FUN_00a925a0(auStack_30);
              fVar7 = pfVar6[2] * fStack_48 + fStack_50 * *pfVar6 + pfVar6[1] * fStack_4c;
              pfVar6 = (float *)FUN_00a925a0(auStack_20);
              fVar1 = pfVar6[2] * fStack_4c - pfVar6[1] * fStack_48;
              fVar2 = fStack_48 * *pfVar6 - pfVar6[2] * fStack_50;
              fStack_48 = pfVar6[1] * fStack_50 - *pfVar6 * fStack_4c;
              fStack_50 = fVar1;
              fStack_4c = fVar2;
              if (fVar2 <= 0.0) {
                fVar10 = (float10)FUN_00ddbb50(fVar7);
                param_1[0x447] = (int)(float)-fVar10;
              }
              else {
                fVar10 = (float10)FUN_00ddbb50(fVar7);
                param_1[0x447] = (int)(float)fVar10;
              }
            }
          }
          local_60 = 1;
          fVar7 = (float)FUN_00a8eea0();
          uVar8 = FUN_00582970(piVar9,local_68);
          (**(code **)(*param_1 + 0x30c))(uVar8,0);
          iVar3 = FUN_00a8eea0();
          if (iVar3 < 1) {
            FUN_00a8ee20(1);
          }
          iVar3 = FUN_00a8eea0();
          if (((*piVar9 != 0x146) || ((piVar9[0x24] & 0x8000U) != 0)) && (0.0 < fVar7)) {
            (**(code **)(*param_1 + 0x220))(fVar7);
          }
          FUN_00582e50(piVar9,uVar8);
          if ((param_1[0x438] & 0x800U) != 0) {
            param_1[0x61b] = param_1[0x61b] + (unaff_ESI - iVar3);
          }
          param_1[0x442] = param_1[0x442] + (unaff_ESI - iVar3);
          iVar3 = FUN_0057d7f0();
          if (iVar3 != 0) goto LAB_005971ba;
          unaff_ESI = 0;
          if (param_1[0x2bd] != 1) {
            if ((param_1[0x438] & 0x20000U) != 0) {
              unaff_ESI = 0x8000;
            }
            FUN_00596760(piVar9,&stack0xffffff84);
          }
          (**(code **)(*param_1 + 0x198))(unaff_EBX,piVar9,unaff_ESI | 1);
          if (*piVar9 != 0x146) {
            return 1;
          }
          iVar3 = local_70;
          if ((piVar9[0x24] & 0x8000U) != 0) {
            return 1;
          }
        }
      }
    }
    piVar9 = piVar9 + 0x54;
  } while( true );
}

// 00AAD3E0  Em0310::Em0310  size=246  [class]
undefined4 * __fastcall Em0310::Em0310(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = vftable;
  FUN_00a603a0();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  param_1[0x438] = 0;
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  iVar1 = 5;
  do {
    FUN_00a7c930();
    cEspControler::cEspControler();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x5c3] = 0;
  param_1[0x5c4] = 0;
  param_1[0x5c5] = 0;
  param_1[0x5c6] = 0;
  param_1[0x5c7] = 0;
  param_1[0x5c8] = 0;
  FUN_00904d60();
  iVar1 = 3;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00AAD4E0  Em0310::vf04  size=6  [class]
undefined * Em0310::vf04(void)

{
  return &DAT_01b35140;
}

// 00AAD4F0  FUN_00aad4f0  size=110  [callgraph]
void FUN_00aad4f0(void)

{
  int iVar1;
  
  FUN_00905ce0();
  iVar1 = 5;
  do {
    cEspControler::~cEspControler();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cXml::cXml_7();
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  return;
}

// 00AB6FC0  Em0310::destruct  size=30  [class]
undefined4 __thiscall Em0310::destruct(undefined4 param_1,byte param_2)

{
  FUN_00aad4f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

