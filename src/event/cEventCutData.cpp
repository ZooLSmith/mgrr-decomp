// src/event/cEventCutData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D7E0E0..015F0700, 16 functions

#include "mgrr.h"
#include "cEventCutData.h"

// 00D7E0E0  cEventCutData::vf04  size=31  [class]
undefined4 * __thiscall cEventCutData::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7E1F0  FUN_00d7e1f0  size=262  [between]
undefined4 __thiscall FUN_00d7e1f0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"ViewTargetPos");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"ViewTrans");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x44))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"InterpolationType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x58))(iVar1,param_1 + 0x30);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"Frame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x58))(iVar1,param_1 + 0x34);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"InterpolationValue");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x38);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,&DAT_016c1678);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 0x3c);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,&DAT_016514a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,param_1 + 0x40);
  }
  return 1;
}

// 00D7E4C0  FUN_00d7e4c0  size=111  [between]
void __thiscall FUN_00d7e4c0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  return;
}

// 00D7E590  FUN_00d7e590  size=51  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00d7e590(void)

{
  float10 fVar1;
  
  fVar1 = (float10)*(int *)(DAT_01dc534c + 0x34) - (float10)_DAT_018bbb64;
  if ((float10)0 == fVar1) {
    return (float10)0;
  }
  return ((float10)_DAT_01dc5340 - (float10)_DAT_018bbb64) / fVar1;
}

// 00D7E5D0  FUN_00d7e5d0  size=85  [between]
float10 FUN_00d7e5d0(float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)1.5707964 * (float10)param_1 + (float10)3.1415927);
  if ((float10)param_2 < (float10)10.0) {
    fVar2 = (float10)param_2 * (float10)0.1;
    return fVar2 * (fVar1 + (float10)1) + ((float10)1 - fVar2) * (float10)param_1;
  }
  fVar1 = (float10)FUN_00fdc1f0();
  return fVar1;
}

// 00D7E630  FUN_00d7e630  size=79  [between]
float10 FUN_00d7e630(float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fsin((float10)1.5707964 * (float10)param_1);
  if ((float10)param_2 < (float10)10.0) {
    fVar2 = (float10)param_2 * (float10)0.1;
    return fVar2 * fVar1 + ((float10)1 - fVar2) * (float10)param_1;
  }
  fVar1 = (float10)FUN_00fdc1f0();
  return fVar1;
}

// 00D7E680  FUN_00d7e680  size=229  [between]
float10 FUN_00d7e680(float param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)0.5;
  fVar2 = (float10)param_1;
  if (fVar2 < fVar1) {
    fVar3 = (float10)fcos((float10)1.5707964 * (fVar2 + fVar2) + (float10)3.1415927);
    if ((float10)param_2 < (float10)10.0) {
      fVar4 = (float10)param_2 * (float10)0.1;
      return (fVar4 * (fVar3 + (float10)1) + ((float10)1 - fVar4) * (fVar2 + fVar2)) * fVar1;
    }
    fVar1 = (float10)FUN_00fdc1f0();
    return fVar1 * (float10)0.5;
  }
  if (fVar2 <= fVar1) {
    return fVar2;
  }
  fVar2 = (fVar2 - fVar1) + (fVar2 - fVar1);
  fVar3 = (float10)fsin((float10)1.5707964 * fVar2);
  if ((float10)param_2 < (float10)10.0) {
    fVar4 = (float10)param_2 * (float10)0.1;
    return (fVar4 * fVar3 + ((float10)1 - fVar4) * fVar2) * fVar1 + fVar1;
  }
  fVar1 = (float10)FUN_00fdc1f0();
  return fVar1 * (float10)0.5 + (float10)0.5;
}

// 00D7E770  FUN_00d7e770  size=155  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d7e770(float *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = DAT_01dc534c;
  if (DAT_01dc534c == 0) {
    return;
  }
  fVar2 = (float10)0;
  switch(*(undefined4 *)(DAT_01dc534c + 0x30)) {
  case 0:
    *param_1 = *(float *)(DAT_01dc534c + 0x3c);
    return;
  case 1:
    fVar2 = (float10)FUN_00d7e590();
    break;
  case 2:
    fVar2 = (float10)FUN_00d7e590(*(undefined4 *)(DAT_01dc534c + 0x38));
    fVar2 = (float10)FUN_00d7e5d0((float)fVar2);
    break;
  case 3:
    fVar2 = (float10)FUN_00d7e590(*(undefined4 *)(DAT_01dc534c + 0x38));
    fVar2 = (float10)FUN_00d7e630((float)fVar2);
    break;
  case 4:
    fVar2 = (float10)FUN_00d7e590(*(undefined4 *)(DAT_01dc534c + 0x38));
    fVar2 = (float10)FUN_00d7e680((float)fVar2);
    break;
  default:
    goto switchD_00d7e789_default;
  }
  fVar2 = ((float10)1 - fVar2) * (float10)_DAT_018bbb6c + (float10)*(float *)(iVar1 + 0x3c) * fVar2;
switchD_00d7e789_default:
  *param_1 = (float)fVar2;
  return;
}

// 00D7E880  FUN_00d7e880  size=120  [between]
undefined4 __thiscall FUN_00d7e880(int param_1,int param_2,int *param_3)

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

// 00D7E970  FUN_00d7e970  size=120  [between]
undefined4 __thiscall FUN_00d7e970(int param_1,int param_2,int *param_3)

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

// 00D7EAA0  cEventCutData::vf00  size=57  [class]
void __fastcall cEventCutData::vf00(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f5f66f3;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0xf0000000;
  return;
}

// 00D7FC40  cEventCutData::cEventCutData  size=465  [class]
undefined4 __thiscall cEventCutData::cEventCutData(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  
  iVar2 = (**(code **)(*param_2 + 0x18))(param_3,"CutNo");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0x58))(iVar2,param_1 + 0x4c);
  }
  iVar2 = (**(code **)(*param_2 + 0x18))(param_3,"SynthesisFrame");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0x58))(iVar2,param_1 + 0x48);
  }
  pcVar3 = (char *)(**(code **)(*param_2 + 0x18))(param_3,"EventCutDataArray");
  if (pcVar3 != (char *)0xffffffff) {
    iVar2 = param_3;
    iVar4 = (**(code **)(*param_2 + 0x18))(param_3,"PlayerRot");
    if (iVar4 != -1) {
      (**(code **)(*param_2 + 0x44))(iVar4,param_1 + 0x10);
    }
    pcVar8 = "SoftEvEndCamRot";
    iVar4 = param_3;
    iVar5 = (**(code **)(*param_2 + 0x18))(param_3,"SoftEvEndCamRot");
    if (iVar5 != -1) {
      (**(code **)(*param_2 + 0x44))(iVar5,param_1 + 0x20);
    }
    iVar5 = (**(code **)(*param_2 + 0x18))(param_3,&DAT_016514a4);
    if (iVar5 != -1) {
      (**(code **)(*param_2 + 0x68))(iVar5,param_1 + 0x50);
    }
    iVar5 = (**(code **)(*param_2 + 0x10))(pcVar3);
    if (0 < iVar5) {
      do {
        iVar5 = (**(code **)(*param_2 + 0x14))(pcVar3,iVar2);
        if (iVar5 != -1) {
          puVar6 = (undefined4 *)FUN_00dd3500(0x60,*(undefined4 *)(param_1 + 0x44));
          if (puVar6 == (undefined4 *)0x0) {
            FUN_00dd5650(&DAT_016c16dc);
            return 0;
          }
          *puVar6 = vftable;
          puVar6[0x12] = 0;
          puVar6[0x11] = 0;
          puVar6[0x13] = 0;
          puVar6[0x14] = 0xffffffff;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[7] = 0;
          puVar6[8] = 0;
          puVar6[9] = 0;
          puVar6[10] = 0;
          puVar6[0xb] = 0;
          puVar6[0xe] = 0;
          puVar6[0xc] = 0;
          puVar6[0xd] = 0;
          puVar6[0xf] = 0x3f5f66f3;
          puVar6[0x10] = 0;
          puVar6[0x10] = puVar6[0x10] | 0xf0000000;
          pcVar3 = pcVar8;
          FUN_00d7e1f0(param_2,iVar5);
          pcVar8 = pcVar3;
          if (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x38)) {
            puVar1 = (undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) * 4);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = puVar6;
            }
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
          }
        }
        iVar7 = iVar4 + 1;
        iVar4 = iVar7;
        iVar5 = (**(code **)(*param_2 + 0x10))(pcVar3);
      } while (iVar7 < iVar5);
    }
    return 1;
  }
  return 0;
}

// 00D7FE20  FUN_00d7fe20  size=69  [between]
int __thiscall FUN_00d7fe20(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x48))) {
    piVar2 = *(int **)(param_1 + 0x34);
    if (piVar2 != piVar2 + *(int *)(param_1 + 0x3c)) {
      piVar1 = piVar2 + *(int *)(param_1 + 0x3c);
      do {
        if (param_2 < *(int *)(*piVar2 + 0x34)) {
          return *piVar2;
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != piVar1);
    }
    return 0;
  }
  return 0;
}

// 00D7FE70  cEventCutData::cEventCutData_2  size=348  [class]
int * __thiscall cEventCutData::cEventCutData_2(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  (**(code **)(*param_1 + 8))();
  param_1[0x12] = *(int *)(param_2 + 0x48);
  param_1[4] = *(int *)(param_2 + 0x10);
  param_1[5] = *(int *)(param_2 + 0x14);
  param_1[6] = *(int *)(param_2 + 0x18);
  param_1[7] = *(int *)(param_2 + 0x1c);
  param_1[0x14] = *(int *)(param_2 + 0x50);
  piVar4 = *(int **)(param_2 + 0x34);
  if (piVar4 != piVar4 + *(int *)(param_2 + 0x3c)) {
    while (puVar3 = (undefined4 *)FUN_00dd3500(0x60,param_1[0x11]), puVar3 != (undefined4 *)0x0) {
      *puVar3 = vftable;
      puVar3[0x12] = 0;
      puVar3[0x11] = 0;
      puVar3[0x13] = 0;
      puVar3[0x14] = 0xffffffff;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xe] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xf] = 0x3f5f66f3;
      puVar3[0x10] = 0;
      puVar3[0x10] = puVar3[0x10] | 0xf0000000;
      iVar2 = *piVar4;
      puVar3[4] = *(undefined4 *)(iVar2 + 0x10);
      puVar3[5] = *(undefined4 *)(iVar2 + 0x14);
      puVar3[6] = *(undefined4 *)(iVar2 + 0x18);
      puVar3[7] = *(undefined4 *)(iVar2 + 0x1c);
      puVar3[8] = *(undefined4 *)(iVar2 + 0x20);
      puVar3[9] = *(undefined4 *)(iVar2 + 0x24);
      puVar3[10] = *(undefined4 *)(iVar2 + 0x28);
      puVar3[0xb] = *(undefined4 *)(iVar2 + 0x2c);
      puVar3[0xc] = *(undefined4 *)(iVar2 + 0x30);
      puVar3[0xd] = *(undefined4 *)(iVar2 + 0x34);
      puVar3[0xe] = *(undefined4 *)(iVar2 + 0x38);
      puVar3[0xf] = *(undefined4 *)(iVar2 + 0x3c);
      puVar3[0x10] = *(undefined4 *)(iVar2 + 0x40);
      puVar3[0x11] = *(undefined4 *)(iVar2 + 0x44);
      puVar3[0x12] = *(undefined4 *)(iVar2 + 0x48);
      puVar3[0x13] = *(undefined4 *)(iVar2 + 0x4c);
      puVar3[0x14] = *(undefined4 *)(iVar2 + 0x50);
      if (param_1[0xf] < param_1[0xe]) {
        puVar1 = (undefined4 *)(param_1[0xd] + param_1[0xf] * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = puVar3;
        }
        param_1[0xf] = param_1[0xf] + 1;
      }
      piVar4 = piVar4 + 1;
      if (piVar4 == (int *)(*(int *)(param_2 + 0x34) + *(int *)(param_2 + 0x3c) * 4)) {
        return param_1;
      }
    }
    FUN_00dd5650(&DAT_016c173c);
  }
  return param_1;
}

// 00D800E0  FUN_00d800e0  size=127  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00d800e0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_01dc534c == 0) {
    return 0;
  }
  FUN_00d7e4c0(DAT_01dc534c);
  uVar1 = FUN_00fdbc60();
  iVar2 = FUN_00d7fe20(uVar1);
  if ((((iVar2 != 0) && ((*(uint *)(iVar2 + 0x40) & 0x8000000) == 0)) &&
      (*(int *)(iVar2 + 0x30) != 0)) && ((*(uint *)(DAT_01dc534c + 0x40) & 0x8000000) != 0)) {
    _DAT_018bbb50 = DAT_01bea380;
    _DAT_018bbb54 = DAT_01bea384;
    _DAT_018bbb58 = DAT_01bea388;
    _DAT_018bbb5c = DAT_01bea38c;
  }
  return 1;
}

// 015F0700  cEventCutData::cEventCutData_3  size=11  [class]
void cEventCutData::cEventCutData_3(void)

{
  PTR_vftable_018bbb30 = (undefined *)vftable;
  return;
}

