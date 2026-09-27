// src/unsorted/unit_00931CA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00931CA0..00932740, 48 functions

#include "types.h"

// 00931CA0  FUN_00931ca0  size=203  [run]
void FUN_00931ca0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0) {
    FUN_00ce19b0(param_1[1]);
  }
  FUN_00d45270(param_1);
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x24))(param_1);
  if (*param_1 == 0) {
    FUN_00cae000();
  }
  if (DAT_018b9174 == 0x470) {
    uVar2 = 0;
  }
  else {
    if (DAT_018b9174 != 0x138) {
      if ((((DAT_018b9174 == 0x430) &&
           (piVar1 = (int *)FUN_00e678d0(2,0xc444,0xffffffff), *piVar1 == *param_1)) &&
          (piVar1[1] == param_1[1])) && (piVar1[2] == param_1[2])) {
        return;
      }
      goto LAB_00931d59;
    }
    uVar2 = 0xc444;
  }
  piVar1 = (int *)FUN_00e678d0(2,uVar2,0xffffffff);
  if (((*piVar1 == *param_1) && (piVar1[1] == param_1[1])) && (piVar1[2] == param_1[2])) {
    return;
  }
LAB_00931d59:
  piVar1 = (int *)FUN_00c209f0();
                    /* WARNING: Could not recover jumptable at 0x00931d69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x18))();
  return;
}

// 00931D70  FUN_00931d70  size=44  [run]
void FUN_00931d70(undefined4 param_1)

{
  int *piVar1;
  
  cXmlBinary::cXmlBinary_15(param_1);
  FUN_00d45460(param_1);
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x24))(param_1);
  return;
}

// 00931DA0  FUN_00931da0  size=52  [run]
void FUN_00931da0(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    FUN_009395c0();
  }
  FUN_00d45480(param_1,param_2);
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x24))(param_1);
  return;
}

// 00931DE0  FUN_00931de0  size=119  [run]
void FUN_00931de0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00e77480(param_1);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      piVar1 = (int *)FUN_00c13920();
      uVar2 = 1;
    }
    else {
      if (*piVar1 != 1) goto LAB_00931e15;
      piVar1 = (int *)FUN_00c13920();
      uVar2 = 0;
    }
    (**(code **)(*piVar1 + 0x30))(uVar2);
  }
LAB_00931e15:
  if (*param_1 == 0) {
    FUN_00cae000();
    FUN_00cca030();
  }
  piVar1 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar1 + 0x2c))(param_1);
  FUN_00d45470(param_1);
  piVar1 = (int *)FUN_00c13920();
                    /* WARNING: Could not recover jumptable at 0x00931e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x3c))();
  return;
}

// 00931E60  FUN_00931e60  size=59  [run]
void FUN_00931e60(int param_1)

{
  if (param_1 == 0) {
    DAT_01bea064 = DAT_01bea064 & 0xffffbfff;
  }
  else if (param_1 == 1) {
    if ((DAT_01bea064 & 0x4000) != 0) {
      FUN_00dd5650(&DAT_0164eb30);
    }
    DAT_01bea064 = DAT_01bea064 | 0x4000;
    return;
  }
  return;
}

// 00931EA0  FUN_00931ea0  size=35  [run]
undefined4 FUN_00931ea0(void)

{
  undefined4 uVar1;
  
  if (((DAT_01bea060 & 0x40000000) == 0) || (uVar1 = 2, (DAT_01bea064 & 0x4000) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

// 00931ED0  FUN_00931ed0  size=44  [run]
uint FUN_00931ed0(int param_1)

{
  if ((((DAT_01bea060 & 0x40000000) != 0) && ((DAT_01bea064 & 0x4000) != 0)) && (param_1 == 1)) {
    return DAT_01bea064 >> 0xd & 1;
  }
  return 1;
}

// 00931F00  FUN_00931f00  size=39  [run]
uint FUN_00931f00(void)

{
  if (((DAT_01bea060 & 0x40000000) != 0) && ((DAT_01bea064 & 0x4000) != 0)) {
    return ~(DAT_01bea064 >> 0xd) & 1;
  }
  return 1;
}

// 00931F30  FUN_00931f30  size=24  [run]
void FUN_00931f30(int *param_1)

{
  if (*param_1 == 0) {
    FUN_00cc9f90(param_1[1]);
  }
  return;
}

// 00931F50  FUN_00931f50  size=34  [run]
undefined4 FUN_00931f50(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = FUN_00ce1930(param_1[1]);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00931F80  FUN_00931f80  size=24  [run]
void FUN_00931f80(int *param_1)

{
  if (*param_1 == 0) {
    FUN_00ce18a0(param_1[1]);
  }
  return;
}

// 00931FA0  FUN_00931fa0  size=29  [run]
int FUN_00931fa0(int param_1)

{
  if (((DAT_01bea090 & 0x80000000) != 0) && (param_1 == 0x10010)) {
    param_1 = 0x10100;
  }
  return param_1;
}

// 00931FC0  FUN_00931fc0  size=41  [run]
uint FUN_00931fc0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  switch(*param_3) {
  case 0:
    return -(uint)(param_2 != 0x20040) & 0xfffffffe;
  default:
    return 0xfffffffe;
  }
}

// 00932000  FUN_00932000  size=32  [run]
float10 FUN_00932000(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1 == -1) {
    iVar1 = FUN_00e03960();
    return (float10)*(float *)(iVar1 + 0x7c);
  }
  FUN_00e03960(param_1);
  fVar2 = (float10)FUN_00e03a90(param_1);
  return fVar2;
}

// 00932020  FUN_00932020  size=26  [run]
void FUN_00932020(undefined4 param_1,undefined4 param_2)

{
  FUN_00e03960(param_1,param_2);
  FUN_00e03a70(param_1,param_2);
  return;
}

// 00932040  FUN_00932040  size=44  [run]
bool FUN_00932040(int param_1)

{
  if (((param_1 != 0x10010) && (param_1 != 0x10100)) && (param_1 != 0x11400)) {
    return param_1 == 0x11500;
  }
  return true;
}

// 00932070  FUN_00932070  size=154  [run]
int FUN_00932070(int param_1,undefined4 *param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  int iVar2;
  
  if ((((param_1 != 0x10010) && (param_1 != 0x10100)) && (param_1 != 0x11400)) &&
     (param_1 != 0x11500)) {
    switch(*param_2) {
    case 1:
      iVar2 = FUN_00a18cf0(param_2[1]);
      if (iVar2 == 0) {
        piVar1 = (int *)FUN_00c18350();
        iVar2 = (**(code **)(*piVar1 + 0x40))(param_2[1]);
        return iVar2;
      }
      break;
    case 2:
      if ((param_4 & 1) == 0) {
        iVar2 = FUN_00c19c00(param_2[1],param_2[2],param_2[3]);
        return iVar2;
      }
    case 0:
      iVar2 = FUN_00a82090(0,param_1,param_3);
      return iVar2;
    default:
      iVar2 = 0;
    }
    return iVar2;
  }
  return DAT_01be8e58;
}

// 00932120  FUN_00932120  size=43  [run]
undefined4 FUN_00932120(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 0x10c))(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

// 00932150  FUN_00932150  size=57  [run]
void FUN_00932150(int param_1,undefined4 *param_2,byte param_3)

{
  if ((param_1 != DAT_01be8e58) && (param_2[5] != 1)) {
    switch(*param_2) {
    case 0:
      FUN_00a805f0();
      return;
    case 2:
      if ((param_3 & 1) != 0) {
        FUN_00a805f0();
        return;
      }
    }
  }
  return;
}

// 009321A0  FUN_009321a0  size=41  [run]
void FUN_009321a0(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x009321be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xfc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009321c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x100))();
  return;
}

// 009321D0  FUN_009321d0  size=133  [run]
void FUN_009321d0(undefined4 param_1,int *param_2,int param_3)

{
  int *piVar1;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    if (param_2 == (int *)0x0) {
      param_2 = piVar1 + 0x14;
    }
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
    local_30 = piVar1[0x24];
    local_2c = piVar1[0x25];
    local_28 = piVar1[0x26];
    local_24 = piVar1[0x27];
    if (param_3 != 0) {
      local_2c = *(int *)(param_3 + 4);
    }
    (**(code **)(*piVar1 + 0x7c))(&local_20,&local_30);
  }
  return;
}

// 00932260  FUN_00932260  size=36  [run]
void FUN_00932260(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x108))(param_2,param_3);
  }
  return;
}

// 00932290  FUN_00932290  size=35  [run]
void FUN_00932290(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x240))(param_2);
    }
  }
  return;
}

// 009322C0  FUN_009322c0  size=1  [run]
void FUN_009322c0(void)

{
  return;
}

// 009322D0  FUN_009322d0  size=31  [run]
void FUN_009322d0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xf8))(param_2);
  }
  return;
}

// 009322F0  FUN_009322f0  size=37  [run]
void FUN_009322f0(undefined4 param_1)

{
  int *piVar1;
  
  if (DAT_01be8e58 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xf8))(param_1);
    }
  }
  return;
}

// 00932320  FUN_00932320  size=15  [run]
void FUN_00932320(undefined4 param_1,undefined4 param_2)

{
  cModelBase::setRootPartsNo(param_2);
  return;
}

// 00932330  FUN_00932330  size=27  [run]
void FUN_00932330(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    return;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  return;
}

// 00932350  FUN_00932350  size=14  [run]
uint FUN_00932350(int param_1)

{
  return *(uint *)(param_1 + 0x364) & 2;
}

// 00932360  FUN_00932360  size=56  [run]
void FUN_00932360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 100))(param_1,param_2,param_3);
  piVar1 = (int *)FUN_00c18350();
  (**(code **)(*piVar1 + 0x94))(param_1,param_2,param_3);
  return;
}

// 009323A0  FUN_009323a0  size=99  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009323a0(int param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x34);
  if (*(float *)(param_1 + 0x34) <= 0.0) {
    fVar1 = _DAT_01bea264;
  }
  FUN_00da4f60(param_1,param_1 + 0x10,param_1 + 0x20,*(undefined4 *)(param_1 + 0x30),fVar1,param_2,
               0xffffffff);
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  _DAT_01bea860 = 1;
  return;
}

// 00932410  FUN_00932410  size=24  [run]
void FUN_00932410(void)

{
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  return;
}

// 00932430  FUN_00932430  size=38  [run]
void FUN_00932430(int param_1)

{
  if (param_1 == 0) {
    FUN_00da8ea0();
    return;
  }
  FUN_00dc1270((float)param_1,0);
  return;
}

// 00932460  FUN_00932460  size=85  [run]
void FUN_00932460(undefined4 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = local_14;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xbf800000;
  param_1[7] = local_14;
  param_1[8] = 0;
  param_1[9] = 0x3f800000;
  param_1[10] = 0;
  param_1[0xb] = local_14;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f5f66f3;
  return;
}

// 009324C0  FUN_009324c0  size=3  [run]
undefined4 FUN_009324c0(void)

{
  return 0;
}

// 009324D0  FUN_009324d0  size=3  [run]
undefined4 FUN_009324d0(void)

{
  return 0;
}

// 009324E0  FUN_009324e0  size=1  [run]
void FUN_009324e0(void)

{
  return;
}

// 009324F0  FUN_009324f0  size=28  [run]
undefined4 FUN_009324f0(int param_1)

{
  if ((param_1 != 0) && (param_1 != 1)) {
    if (param_1 != 2) {
      return 0xffffffff;
    }
    return 0;
  }
  return 1;
}

// 00932510  FUN_00932510  size=1  [run]
void FUN_00932510(void)

{
  return;
}

// 00932520  FUN_00932520  size=117  [run]
uint FUN_00932520(undefined4 param_1,undefined1 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  switch(*param_2) {
  default:
    return 0;
  case 1:
    pcVar4 = "Codec";
    pbVar2 = param_2 + 4;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_00932560:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00932565;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_00932560;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00932565:
    if (iVar3 == 0) {
      return ~(DAT_01bea060 >> 0x12) & 1;
    }
switchD_0093252c_caseD_2:
    FUN_00dd5650(&DAT_0164eb60);
    return 0;
  case 2:
    goto switchD_0093252c_caseD_2;
  case 3:
    FUN_00dd5650(&DAT_0164eb60);
    return 0xffffffff;
  }
}

// 009325B0  FUN_009325b0  size=111  [run]
void FUN_009325b0(int *param_1,char *param_2)

{
  if (*param_2 == '\0') {
    if (param_2[0x24] != '\0') {
      FUN_0093b4a0(param_2 + 0x24,0,0);
    }
  }
  else if (*param_2 == '\x01') {
    if (*(int *)(param_2 + 4) == 0) {
      if (((*param_1 != 2) || ((param_1[2] == 0) != 0x370)) || (param_1[1] != 0x1000)) {
        FUN_00dc1300(0);
        return;
      }
    }
    else if (*(int *)(param_2 + 4) == 1) {
      FUN_00dc1300(5);
      return;
    }
  }
  return;
}

// 00932620  FUN_00932620  size=58  [run]
void FUN_00932620(undefined4 param_1,char *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a7c8a0();
  if ((piVar1 != (int *)0x0) && (*param_2 == '\0')) {
    if (*(int *)(param_2 + 4) == 1) {
      (**(code **)(*piVar1 + 0x110))(1);
    }
    else if (*(int *)(param_2 + 4) == 2) {
      (**(code **)(*piVar1 + 0x110))(0);
      return;
    }
  }
  return;
}

// 00932660  FUN_00932660  size=71  [run]
void FUN_00932660(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_8 [8];
  
  iVar1 = _strncmp((char *)*param_1,"DAT",4);
  if (iVar1 == 0) {
    FUN_00de3610(*param_1,0);
    piVar2 = (int *)FUN_0092c060();
    (**(code **)(*piVar2 + 0xc))(local_8,param_1[4]);
  }
  return;
}

// 009326B0  FUN_009326b0  size=82  [run]
void FUN_009326b0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_8 [8];
  
  iVar1 = _strncmp((char *)*param_1,"DAT",4);
  if (iVar1 == 0) {
    FUN_00de3610(*param_1,0);
    piVar2 = (int *)FUN_0092c060();
    (**(code **)(*piVar2 + 0x10))(local_8);
  }
  FUN_00a27fe0(*param_1,param_1[1]);
  return;
}

// 00932710  FUN_00932710  size=6  [run]
undefined4 FUN_00932710(void)

{
  return DAT_01be8e40;
}

// 00932720  FUN_00932720  size=6  [run]
undefined4 FUN_00932720(void)

{
  return DAT_018b9174;
}

// 00932730  FUN_00932730  size=6  [run]
undefined4 FUN_00932730(void)

{
  return DAT_01be8e58;
}

// 00932740  FUN_00932740  size=16  [run]
void FUN_00932740(undefined4 param_1)

{
  FUN_00a4c830(param_1);
  return;
}

