// src/animation/Animation.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009312F0..00E81B00, 617 functions

#include "mgrr.h"

// 009312F0  Animation::EspCtrlCustom::vf08  size=6  [class]
undefined4 Animation::EspCtrlCustom::vf08(void)

{
  return 1;
}

// 00931300  Animation::EspCtrlCustom::vf0C  size=1  [class]
void Animation::EspCtrlCustom::vf0C(void)

{
  return;
}

// 00931310  Animation::EspCtrlCustom::vf10  size=1  [class]
void Animation::EspCtrlCustom::vf10(void)

{
  return;
}

// 00931320  Animation::EspCtrlCustom::vf14  size=1  [class]
void Animation::EspCtrlCustom::vf14(void)

{
  return;
}

// 00931330  Animation::EspCtrlCustom::vf18  size=1  [class]
void Animation::EspCtrlCustom::vf18(void)

{
  return;
}

// 00931340  Animation::EspCtrlCustom::vf00  size=31  [class]
undefined4 * __thiscall Animation::EspCtrlCustom::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009313F0  FUN_009313f0  size=15  [callgraph]
float10 FUN_009313f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00e03960();
  return (float10)*(float *)(iVar1 + 0x7c) * (float10)0.016666668;
}

// 00931400  FUN_00931400  size=67  [callgraph]
void FUN_00931400(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  
  if (param_1 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x248))(param_5,param_2,param_3);
    }
  }
  FUN_00e01020(param_2,param_3,param_4,param_5);
  return;
}

// 00931460  FUN_00931460  size=6  [callgraph]
undefined4 FUN_00931460(void)

{
  return 0xfff;
}

// 009315F0  FUN_009315f0  size=34  [callgraph]
void FUN_009315f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00dda360(0,param_2,param_3,param_4);
  return;
}

// 009316C0  FUN_009316c0  size=16  [callgraph]
void FUN_009316c0(undefined4 param_1)

{
  cModelDataManager::EntryModelData(param_1,0);
  return;
}

// 009316D0  FUN_009316d0  size=16  [callgraph]
undefined4 FUN_009316d0(undefined4 param_1)

{
  FUN_00a06db0();
  return param_1;
}

// 009316E0  thunk_FUN_00a0c7b0  size=5  [callgraph]
void thunk_FUN_00a0c7b0(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0xf8) != 0)) {
    FUN_00a06520();
    return;
  }
  return;
}

// 009316F0  FUN_009316f0  size=54  [callgraph]
void FUN_009316f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a7c8a0();
  *param_1 = 1;
  param_1[4] = *param_2;
  param_1[5] = *(undefined4 *)(iVar1 + 0x54);
  param_1[6] = param_2[2];
  param_1[8] = 0;
  param_1[9] = 0x3f800000;
  param_1[10] = 0;
  return;
}

// 009317C0  FUN_009317c0  size=10  [callgraph]
void FUN_009317c0(void)

{
  FUN_00da4fe0();
  return;
}

// 00E22DE0  FUN_00e22de0  size=54  [callgraph]
float10 FUN_00e22de0(int *param_1,int *param_2,undefined4 param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)(*param_1 + *param_2 * 0xc + 3)])
                             (param_1,param_2,param_3);
  *param_2 = *param_2 + 1;
  return (float10)(float)fVar1;
}

// 00E22E40  FUN_00e22e40  size=34  [callgraph]
void __fastcall FUN_00e22e40(int param_1)

{
  if (((*(byte *)(param_1 + 0x94) & 1) != 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0xf4) + 0x50))(*(int *)(param_1 + 0x9c));
  }
  return;
}

// 00E22E70  FUN_00e22e70  size=63  [callgraph]
float10 __fastcall FUN_00e22e70(int param_1)

{
  float10 fVar1;
  
  if ((*(uint *)(param_1 + 0x94) & 0x10) != 0) {
    return (float10)0.016666668;
  }
  if ((*(int *)(param_1 + 0x9c) != 0) && ((*(uint *)(param_1 + 0x94) & 2) != 0)) {
    FUN_00a7c910(param_1);
    fVar1 = (float10)FUN_00e049b0();
    return (float10)(float)(fVar1 * (float10)0.01666666753590107);
  }
  return (float10)0;
}

// 00E22F10  FUN_00e22f10  size=24  [callgraph]
void __thiscall FUN_00e22f10(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = 1;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 4) = 3;
  }
  return;
}

// 00E22F60  FUN_00e22f60  size=104  [callgraph]
void __thiscall FUN_00e22f60(undefined4 *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)param_1[1] +
          (param_2 * (1.0 - (float)param_1[1])) / ((float)param_1[3] - (float)param_1[2]);
  param_1[1] = fVar1;
  if (1.0 < fVar1) {
    param_1[1] = 0x3f800000;
  }
  param_2 = (float)param_1[2] + param_2;
  param_1[2] = param_2;
  if ((float)param_1[3] < param_2 != ((float)param_1[3] == param_2)) {
    *param_1 = 3;
    param_1[1] = 0x3f800000;
    return;
  }
  return;
}

// 00E22FD0  FUN_00e22fd0  size=97  [callgraph]
void __thiscall FUN_00e22fd0(undefined4 *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)param_1[1] -
          (param_2 * (float)param_1[1]) / ((float)param_1[3] - (float)param_1[2]);
  param_1[1] = fVar1;
  if (fVar1 < 0.0) {
    param_1[1] = 0;
  }
  param_2 = (float)param_1[2] + param_2;
  param_1[2] = param_2;
  if ((float)param_1[3] < param_2 != ((float)param_1[3] == param_2)) {
    *param_1 = 6;
    param_1[1] = 0;
    return;
  }
  return;
}

// 00E23040  FUN_00e23040  size=119  [callgraph]
void __thiscall FUN_00e23040(undefined4 *param_1,float param_2,int param_3)

{
  if (param_2 < 0.0) {
    *param_1 = 1;
    return;
  }
  switch(*param_1) {
  case 0:
    param_1[1] = 0;
    break;
  case 2:
    if ((float)param_1[3] - (float)param_1[2] < param_2 !=
        ((float)param_1[3] - (float)param_1[2] == param_2)) {
      return;
    }
    break;
  case 3:
  case 5:
  case 6:
    if (param_3 == 0) {
      return;
    }
  }
  if (param_2 <= 0.0) {
    *param_1 = 3;
    param_1[1] = 0x3f800000;
    return;
  }
  *param_1 = 2;
  param_1[2] = 0;
  param_1[3] = param_2;
  return;
}

// 00E230E0  FUN_00e230e0  size=107  [callgraph]
void __thiscall FUN_00e230e0(int *param_1,float param_2)

{
  int iVar1;
  
  if (param_2 < 0.0) {
    *param_1 = 4;
    return;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
    param_1[1] = 0x3f800000;
  }
  else if (iVar1 == 5) {
    if ((float)param_1[3] - (float)param_1[2] < param_2 !=
        ((float)param_1[3] - (float)param_1[2] == param_2)) {
      return;
    }
  }
  else if (iVar1 == 6) {
    return;
  }
  if (0.0 < param_2) {
    *param_1 = 5;
    param_1[2] = 0;
    param_1[3] = (int)param_2;
    return;
  }
  *param_1 = 6;
  param_1[1] = 0;
  return;
}

// 00E23150  FUN_00e23150  size=226  [callgraph]
undefined4 FUN_00e23150(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_3[2] * param_5[2] + param_3[1] * param_5[1] + *param_3 * *param_5;
  if (fVar4 == 0.0) {
    return 0;
  }
  fVar4 = ((param_4[2] * param_5[2] + *param_4 * *param_5 + param_4[1] * param_5[1]) -
          (param_5[2] * param_2[2] + param_2[1] * param_5[1] + *param_2 * *param_5)) / fVar4;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_1 = *param_2 + fVar4 * *param_3;
  param_1[1] = param_2[1] + fVar4 * fVar1;
  param_1[2] = fVar2 * fVar4 + param_2[2];
  param_1[3] = param_2[3] + fVar4 * fVar3;
  return 1;
}

// 00E23240  FUN_00e23240  size=197  [callgraph]
void FUN_00e23240(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_3[2];
  fVar4 = param_2[2];
  fVar5 = param_3[3];
  fVar6 = param_2[3];
  fVar10 = ((fVar1 - fVar2) * param_4[1] + (*param_3 - *param_2) * *param_4 +
           (fVar3 - fVar4) * param_4[2]) * -1.0;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar9 = param_4[3];
  *param_1 = fVar10 * *param_4 + (*param_3 - *param_2);
  param_1[1] = (fVar1 - fVar2) + fVar7 * fVar10;
  param_1[2] = (fVar3 - fVar4) + fVar8 * fVar10;
  param_1[3] = fVar10 * fVar9 + (fVar5 - fVar6);
  return;
}

// 00E23310  FUN_00e23310  size=176  [callgraph]
void FUN_00e23310(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  if (*param_4 == 0.0) {
    fVar1 = (*param_3 - *param_4) + *param_2;
  }
  else {
    fVar1 = ABS(*param_3 / *param_4) * *param_2;
  }
  *param_1 = fVar1;
  if (param_4[1] == 0.0) {
    fVar1 = (param_3[1] - param_4[1]) + param_2[1];
  }
  else {
    fVar1 = ABS(param_3[1] / param_4[1]) * param_2[1];
  }
  param_1[1] = fVar1;
  if (param_4[2] != 0.0) {
    param_1[2] = ABS(param_3[2] / param_4[2]) * param_2[2];
    return;
  }
  param_1[2] = (param_3[2] - param_4[2]) + param_2[2];
  return;
}

// 00E233C0  FUN_00e233c0  size=201  [callgraph]
float10 FUN_00e233c0(void)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  uVar1 = FUN_00a06de0(0);
  FUN_00a06e70(local_20,uVar1);
  uVar1 = FUN_00a06de0(0);
  FUN_00a06e70(local_30,uVar1);
  fVar2 = (float10)FUN_00fdef70();
  if ((float)fVar2 == 0.0) {
    return (float10)1;
  }
  fVar3 = (float10)FUN_00fdef70();
  return (float10)((float)fVar3 / (float)fVar2);
}

// 00E23490  Animation::Control::Node::vf1C  size=23  [class]
undefined4 Animation::Control::Node::vf1C(undefined4 param_1)

{
  FUN_00dd5650(&DAT_016cc9f8,param_1);
  return 0;
}

// 00E234B0  Animation::Control::Node::vf20  size=23  [class]
undefined4 Animation::Control::Node::vf20(undefined4 param_1)

{
  FUN_00dd5650(&DAT_016cc9f8,param_1);
  return 0;
}

// 00E234D0  Animation::Control::Node::getParamF32  size=23  [class]
undefined4 Animation::Control::Node::getParamF32(undefined4 param_1,undefined4 param_2)

{
  FUN_00dd5650(&DAT_016cca40,param_2);
  return 0;
}

// 00E234F0  Animation::Control::Node::setParamNode  size=23  [class]
undefined4 Animation::Control::Node::setParamNode(undefined4 param_1)

{
  FUN_00dd5650(&DAT_016cca88,param_1);
  return 0;
}

// 00E23530  FUN_00e23530  size=50  [between]
undefined4 __thiscall FUN_00e23530(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    return 0;
  }
  FUN_00dd7240();
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}

// 00E236C0  FUN_00e236c0  size=72  [between]
undefined4 __fastcall FUN_00e236c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  param_1 = param_1 + 0x24;
  do {
    if (*(int *)(param_1 + -0x18) != -1) {
      iVar1 = FUN_00de3560();
      iVar2 = FUN_00de3560();
      if (iVar1 == iVar2) {
        return 1;
      }
    }
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 0x20;
  } while (uVar3 < 4);
  return 0;
}

// 00E23740  FUN_00e23740  size=80  [between]
undefined4 FUN_00e23740(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  if ((*param_1 < '0') || ('9' < *param_1)) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(param_1 + 1);
    if (param_2 < iVar3) {
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          if ((param_1[iVar4] == '/') || (param_1[iVar4] == '\\')) {
            return 2;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
      return 1;
    }
  }
  return 0;
}

// 00E23840  FUN_00e23840  size=30  [between]
char FUN_00e23840(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  if ((*(uint *)(param_1 + 4) < 0x20111109) || (cVar1 = *(char *)(param_1 + 0x15), cVar1 == '\0')) {
    cVar1 = '<';
  }
  return cVar1;
}

// 00E23860  FUN_00e23860  size=63  [between]
int FUN_00e23860(short *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (short *)0x0) {
    return -1;
  }
  iVar1 = 0;
  while( true ) {
    if ((param_1 != (short *)0x0) && (*param_1 == param_2)) {
      return iVar1;
    }
    if ((*param_1 == 0x7fff) || (param_2 < *param_1)) break;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 6;
  }
  return -1;
}

// 00E23900  FUN_00e23900  size=88  [between]
undefined4 FUN_00e23900(int *param_1,int *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = *param_2;
  psVar1 = (short *)(*param_1 + iVar2 * 0xc);
  while( true ) {
    if ((psVar1 != (short *)0x0) && (*psVar1 == param_3)) {
      *param_2 = iVar2;
      return 1;
    }
    if ((*psVar1 == 0x7fff) || (param_3 < *psVar1)) break;
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 6;
  }
  *param_2 = iVar2;
  return 0;
}

// 00E23960  FUN_00e23960  size=108  [between]
undefined4 FUN_00e23960(int *param_1,int *param_2,int param_3,uint param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = *param_2;
  psVar2 = (short *)(*param_1 + iVar3 * 0xc);
  while( true ) {
    if (((psVar2 != (short *)0x0) && (*psVar2 == param_3)) && (*(byte *)(psVar2 + 1) == param_4)) {
      *param_2 = iVar3;
      return 1;
    }
    sVar1 = *psVar2;
    if (((sVar1 == 0x7fff) || (param_3 < sVar1)) ||
       ((sVar1 == param_3 && ((int)param_4 < (int)(uint)*(byte *)(psVar2 + 1))))) break;
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 6;
  }
  *param_2 = iVar3;
  return 0;
}

// 00E239D0  FUN_00e239d0  size=239  [between]
void FUN_00e239d0(float *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  short *psVar1;
  float10 fVar2;
  
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    *param_1 = *param_1 * -1.0;
  }
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\0')) {
    fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    *param_1 = (float)fVar2;
  }
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x01')) {
    fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    param_1[1] = (float)fVar2;
  }
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x02')) {
    fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    param_1[2] = (float)fVar2;
  }
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    *param_1 = *param_1 * -1.0;
  }
  return;
}

// 00E23AC0  FUN_00e23ac0  size=238  [between]
void FUN_00e23ac0(float *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  short *psVar1;
  float fVar2;
  float10 fVar3;
  
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\0')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  *param_1 = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x01')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[1] = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x02')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[2] = fVar2;
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    *param_1 = *param_1 * -1.0;
  }
  return;
}

// 00E23BB0  FUN_00e23bb0  size=276  [between]
void FUN_00e23bb0(float *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5,
                 float *param_6)

{
  short *psVar1;
  float fVar2;
  float10 fVar3;
  
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\0')) {
    if ((*(byte *)(param_3 + 2) & 1) == 0) {
      fVar2 = *param_6;
    }
    else {
      fVar2 = -*param_6;
    }
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  *param_1 = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x01')) {
    fVar2 = param_6[1];
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[1] = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x02')) {
    fVar2 = param_6[2];
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[2] = fVar2;
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    *param_1 = *param_1 * -1.0;
  }
  return;
}

// 00E23DF0  FUN_00e23df0  size=257  [between]
void FUN_00e23df0(float *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  short *psVar1;
  float fVar2;
  float10 fVar3;
  
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  *param_1 = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[1] = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[2] = fVar2;
  FUN_00ddbdb0(param_1,param_1);
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    param_1[1] = param_1[1] * -1.0;
    param_1[2] = param_1[2] * -1.0;
  }
  return;
}

// 00E23F00  FUN_00e23f00  size=208  [between]
void FUN_00e23f00(float *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  short *psVar1;
  float10 fVar2;
  
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\a')) {
    fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    *param_1 = (float)fVar2;
  }
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\b')) {
    fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    param_1[1] = (float)fVar2;
  }
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\t')) {
    fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    param_1[2] = (float)fVar2;
  }
  return;
}

// 00E23FD0  FUN_00e23fd0  size=225  [between]
void FUN_00e23fd0(float *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  short *psVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\a')) {
    fVar2 = 1.0;
  }
  else {
    fVar4 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar4;
  }
  *param_1 = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\b')) {
    fVar2 = 1.0;
  }
  else {
    fVar4 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar4;
  }
  iVar3 = *param_3;
  param_1[1] = fVar2;
  psVar1 = (short *)(iVar3 + *param_4 * 0xc);
  if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\t')) {
    fVar4 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,param_5);
    *param_4 = *param_4 + 1;
    param_1[2] = (float)fVar4;
    return;
  }
  param_1[2] = 1.0;
  return;
}

// 00E240C0  FUN_00e240c0  size=16  [between]
void __fastcall FUN_00e240c0(undefined4 *param_1)

{
  param_1[4] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[10] = 0;
  return;
}

// 00E240D0  FUN_00e240d0  size=30  [between]
void __fastcall FUN_00e240d0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x10),0);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// 00E240F0  FUN_00e240f0  size=109  [between]
int __thiscall FUN_00e240f0(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
  psVar1 = *(short **)(param_1 + 0x28);
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x2c) == 0) {
    return param_2;
  }
  while( true ) {
    iVar2 = (int)psVar1[1];
    if (param_2 == *psVar1) {
      if (iVar2 != -1) {
        return iVar2;
      }
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffe;
      return param_2;
    }
    if ((iVar2 != -1) && (param_2 == iVar2)) break;
    uVar3 = uVar3 + 1;
    psVar1 = psVar1 + 2;
    if (*(uint *)(param_1 + 0x2c) <= uVar3) {
      return param_2;
    }
  }
  return (int)*psVar1;
}

// 00E24230  FUN_00e24230  size=193  [between]
void __thiscall FUN_00e24230(uint *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  undefined2 local_8;
  float local_4;
  
  fVar1 = (float10)FUN_00fddce0((double)param_2);
  if ((float)fVar1 == param_2) {
    *param_1 = *param_1 | 1;
    local_4 = param_2;
  }
  else {
    *param_1 = *param_1 & 0xfffffffe;
    fVar2 = (float10)FUN_00fde300((double)param_2);
    local_4 = (float)fVar2;
  }
  param_1[1] = (uint)param_2;
  local_8 = (undefined2)(int)ROUND((float)fVar1);
  *(undefined2 *)(param_1 + 2) = local_8;
  local_4._0_2_ = (undefined2)(int)ROUND(local_4);
  *(undefined2 *)((int)param_1 + 10) = local_4._0_2_;
  return;
}

// 00E24360  FUN_00e24360  size=157  [between]
float10 FUN_00e24360(float param_1,float param_2,float param_3,float param_4,float param_5,
                    float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_7 - param_1) / (param_4 - param_1);
  fVar3 = fVar1 * fVar1;
  fVar2 = fVar3 * fVar1;
  return (float10)((fVar2 - fVar3) * param_6 +
                  (((fVar2 - fVar3) - fVar3) + fVar1) * param_3 +
                  (fVar3 * 3.0 - (fVar2 + fVar2)) * param_5 +
                  (((fVar2 + fVar2) - fVar3 * 3.0) + 1.0) * param_2);
}

// 00E24400  FUN_00e24400  size=754  [between]
void FUN_00e24400(void)

{
  float fVar1;
  float *pfVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  pfVar2 = (float *)&DAT_01dd91a0;
  iVar6 = -0x2d;
  do {
    bVar3 = (byte)iVar6;
    if (iVar6 + 0x2dU < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x2dU);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 - 2 & 0x1f));
    }
    *pfVar2 = fVar1;
    pfVar2[0x40] = *pfVar2 * -1.0;
    if (iVar6 + 0x2eU < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x2eU);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 - 1 & 0x1f));
    }
    pfVar2[1] = fVar1;
    pfVar2[0x41] = pfVar2[1] * -1.0;
    if (iVar6 + 0x2fU < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x2fU);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 & 0x1f));
    }
    pfVar2[2] = fVar1;
    pfVar2[0x42] = pfVar2[2] * -1.0;
    if (iVar6 + 0x30U < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x30U);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 + 1 & 0x1f));
    }
    pfVar2[3] = fVar1;
    pfVar2[0x43] = pfVar2[3] * -1.0;
    if (iVar6 + 0x31U < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x31U);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 + 2 & 0x1f));
    }
    pfVar2[4] = fVar1;
    pfVar2[0x44] = pfVar2[4] * -1.0;
    if (iVar6 + 0x32U < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x32U);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 + 3 & 0x1f));
    }
    pfVar2[5] = fVar1;
    pfVar2[0x45] = pfVar2[5] * -1.0;
    if (iVar6 + 0x33U < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x33U);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 + 4 & 0x1f));
    }
    pfVar2[6] = fVar1;
    pfVar2[0x46] = pfVar2[6] * -1.0;
    if (iVar6 + 0x34U < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x34U);
      bVar3 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar3 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar3 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 + 5 & 0x1f));
    }
    pfVar2[7] = fVar1;
    uVar5 = iVar6 + 0x35;
    pfVar2[0x47] = pfVar2[7] * -1.0;
    pfVar2 = pfVar2 + 8;
    iVar6 = iVar6 + 8;
  } while (uVar5 < 0x40);
  return;
}

// 00E24700  FUN_00e24700  size=82  [between]
float10 FUN_00e24700(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 9 & 0x3f;
  if ((short)uVar1 == 0) {
    return (float10)0;
  }
  return (float10)((float)(&DAT_01dd91a0)[((param_1 & 0xffff) >> 0xf) * 0x40 + uVar1] *
                  (float)((param_1 & 0x1ff) + 0x200) * 0.001953125);
}

// 00E24880  FUN_00e24880  size=54  [between]
float10 FUN_00e24880(int *param_1,int *param_2,undefined4 param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)(*param_1 + *param_2 * 0xc + 3)])
                             (param_1,param_2,param_3);
  *param_2 = *param_2 + 1;
  return (float10)(float)fVar1;
}

// 00E24B50  FUN_00e24b50  size=315  [between]
float10 FUN_00e24b50(undefined4 param_1,float param_2,float param_3)

{
  float fVar1;
  
  switch(param_1) {
  case 0:
    return (float10)(param_2 + param_3);
  case 1:
    return (float10)(param_2 - param_3);
  case 2:
    return (float10)(param_2 * param_3);
  case 3:
    break;
  case 4:
    if (param_3 <= param_2) {
      return (float10)0.0;
    }
    return (float10)1.0;
  case 5:
    if (param_2 <= param_3) {
      return (float10)0.0;
    }
    return (float10)1.0;
  case 6:
    fVar1 = 0.0;
    if ((param_2 != 0.0) && (fVar1 = 0.0, param_3 != 0.0)) {
      fVar1 = 1.0;
    }
    return (float10)fVar1;
  case 7:
    fVar1 = 0.0;
    if ((param_2 != 0.0) || (param_3 != 0.0)) {
      fVar1 = 1.0;
    }
    return (float10)fVar1;
  default:
    return (float10)0;
  }
  if (param_3 == 0.0) {
    return (float10)param_2;
  }
  return (float10)(param_2 / param_3);
}

// 00E24CB0  FUN_00e24cb0  size=32  [between]
undefined4 FUN_00e24cb0(undefined4 *param_1)

{
  if ((*(char *)*param_1 != '\0') && (*(char *)*param_1 != '\x02')) {
    return 0;
  }
  return 1;
}

// 00E24CD0  FUN_00e24cd0  size=255  [between]
float10 FUN_00e24cd0(int *param_1)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = *param_1;
  sVar2 = *(short *)(iVar3 + 2);
  uVar1 = *(undefined1 *)(iVar3 + 1);
  *param_1 = iVar3 + 8;
  iVar3 = FUN_00a12210((int)sVar2);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016ccbe8,(int)sVar2);
    return (float10)0;
  }
  switch(uVar1) {
  case 0:
    return (float10)(*(float *)(iVar3 + 0x50) * 10.0);
  case 1:
    return (float10)(*(float *)(iVar3 + 0x54) * 10.0);
  case 2:
    return (float10)(*(float *)(iVar3 + 0x58) * 10.0);
  case 3:
    return (float10)(*(float *)(iVar3 + 0x90) * 57.29578);
  case 4:
    return (float10)(*(float *)(iVar3 + 0x94) * 57.29578);
  case 5:
    return (float10)(*(float *)(iVar3 + 0x98) * 57.29578);
  default:
    FUN_00dd5650(&DAT_016ccbac);
    return (float10)0;
  case 7:
    return (float10)*(float *)(iVar3 + 0x70);
  case 8:
    return (float10)*(float *)(iVar3 + 0x74);
  case 9:
    return (float10)*(float *)(iVar3 + 0x78);
  }
}

// 00E24E20  FUN_00e24e20  size=442  [between]
void FUN_00e24e20(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float local_28;
  float local_24 [8];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_28;
  iVar1 = *param_1;
  uVar2 = (uint)*(byte *)(iVar1 + 1);
  local_28 = (float)(int)*(short *)(iVar1 + 2);
  if (uVar2 - 1 < 8) {
    iVar3 = 0;
    *param_1 = iVar1 + 8;
    if (uVar2 != 0) {
      do {
        fVar4 = (float10)FUN_00e30d90(param_1);
        local_24[iVar3] = (float)fVar4;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
    }
    if (*(char *)*param_1 != '\a') {
      FUN_00dd5650();
    }
    *param_1 = *param_1 + 8;
    switch(local_28) {
    case 0.0:
      if (local_24[0] == 0.0) {
        local_28 = local_24[2];
        __security_check_cookie(local_4 ^ (uint)&local_28);
        return;
      }
      local_28 = local_24[1];
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    case 1.4013e-45:
      local_28 = ABS(local_24[0]);
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    case 2.8026e-45:
      fVar4 = (float10)FUN_00fde300((double)local_24[0]);
      local_28 = (float)fVar4;
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    case 4.2039e-45:
      fVar4 = (float10)FUN_00fddce0((double)local_24[0]);
      local_28 = (float)fVar4;
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    case 5.60519e-45:
      fVar4 = (float10)FUN_00fe090a();
      local_28 = (float)fVar4;
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    }
  }
  FUN_00dd5650();
  __security_check_cookie(local_4 ^ (uint)&local_28);
  return;
}

// 00E24FF0  FUN_00e24ff0  size=191  [between]
void FUN_00e24ff0(int param_1,undefined4 param_2,float param_3)

{
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x50) = param_3 / 10.0;
    return;
  case 1:
    *(float *)(param_1 + 0x54) = param_3 / 10.0;
    return;
  case 2:
    *(float *)(param_1 + 0x58) = param_3 / 10.0;
    return;
  case 3:
    *(float *)(param_1 + 0x90) = param_3 * 0.017453292;
    return;
  case 4:
    *(float *)(param_1 + 0x94) = param_3 * 0.017453292;
    return;
  case 5:
    *(float *)(param_1 + 0x98) = param_3 * 0.017453292;
    return;
  case 7:
    *(float *)(param_1 + 0x70) = param_3;
    return;
  case 8:
    *(float *)(param_1 + 0x74) = param_3;
    return;
  case 9:
    *(float *)(param_1 + 0x78) = param_3;
  }
  return;
}

// 00E250E0  FUN_00e250e0  size=35  [between]
void __fastcall FUN_00e250e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  return;
}

// 00E25110  FUN_00e25110  size=10  [between]
void __thiscall FUN_00e25110(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// 00E25120  FUN_00e25120  size=144  [between]
void __thiscall FUN_00e25120(int param_1,float param_2)

{
  float fVar1;
  
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0x19c) = 1;
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x19c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0x1a8) - *(float *)(param_1 + 0x1a4);
    if (fVar1 < param_2 != (fVar1 == param_2)) {
      return;
    }
  }
  if (param_2 <= 0.0) {
    *(undefined4 *)(param_1 + 0x19c) = 3;
    *(undefined4 *)(param_1 + 0x1a0) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x19c) = 2;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(float *)(param_1 + 0x1a8) = param_2;
  return;
}

// 00E251D0  FUN_00e251d0  size=22  [between]
void FUN_00e251d0(undefined4 param_1)

{
  FUN_00e230e0(param_1);
  return;
}

// 00E25290  FUN_00e25290  size=189  [between]
void __fastcall FUN_00e25290(int *param_1)

{
  int iVar1;
  
  if (param_1[0x16] != 0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x90) = param_1[4];
      *(int *)(iVar1 + 0x94) = param_1[5];
      *(int *)(iVar1 + 0x98) = param_1[6];
      *(int *)(iVar1 + 0x9c) = param_1[7];
    }
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x90) = param_1[8];
      *(int *)(iVar1 + 0x94) = param_1[9];
      *(int *)(iVar1 + 0x98) = param_1[10];
      *(int *)(iVar1 + 0x9c) = param_1[0xb];
    }
    iVar1 = param_1[2];
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x90) = param_1[0xc];
      *(int *)(iVar1 + 0x94) = param_1[0xd];
      *(int *)(iVar1 + 0x98) = param_1[0xe];
      *(int *)(iVar1 + 0x9c) = param_1[0xf];
    }
    iVar1 = param_1[3];
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x90) = param_1[0x10];
      *(int *)(iVar1 + 0x94) = param_1[0x11];
      *(int *)(iVar1 + 0x98) = param_1[0x12];
      *(int *)(iVar1 + 0x9c) = param_1[0x13];
    }
    param_1[0x16] = 0;
  }
  return;
}

// 00E253A0  FUN_00e253a0  size=87  [between]
void __thiscall FUN_00e253a0(undefined4 *param_1,undefined4 param_2,float param_3,float param_4)

{
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  local_1c = param_3 * param_4;
  param_1[2] = *(undefined4 *)(param_1[1] + 0x54);
  if (local_1c != 0.0) {
    param_1[3] = 1;
  }
  local_20 = 0;
  local_18 = 0;
  FUN_00a12330(&local_20,*param_1);
  return;
}

// 00E25400  FUN_00e25400  size=13  [between]
void __thiscall FUN_00e25400(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  return;
}

// 00E25450  FUN_00e25450  size=144  [between]
void __thiscall FUN_00e25450(int param_1,float param_2)

{
  float fVar1;
  
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0xd0) = 1;
    return;
  }
  switch(*(undefined4 *)(param_1 + 0xd0)) {
  case 0:
    *(undefined4 *)(param_1 + 0xd4) = 0;
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xd8);
    if (fVar1 < param_2 != (fVar1 == param_2)) {
      return;
    }
  }
  if (param_2 <= 0.0) {
    *(undefined4 *)(param_1 + 0xd0) = 3;
    *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0xd0) = 2;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(float *)(param_1 + 0xdc) = param_2;
  return;
}

// 00E25500  FUN_00e25500  size=22  [between]
void FUN_00e25500(undefined4 param_1)

{
  FUN_00e230e0(param_1);
  return;
}

// 00E25520  Animation::HandIk::vf04  size=502  [class]
void __thiscall Animation::HandIk::vf04(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_64;
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = FUN_00a12210(*param_3);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = FUN_00a12210(param_3[1]);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  iVar3 = FUN_00a12210(param_3[2]);
  *(int *)(param_1 + 0x1c) = iVar3;
  if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x18) != 0)) && (iVar3 != 0)) {
    if (*(int *)(iVar1 + 0x330) != 0) {
      uVar2 = FUN_00a06de0(*param_3);
      FUN_00a06ec0(&local_50,uVar2);
    }
    if (*(int *)(iVar1 + 0x330) != 0) {
      uVar2 = FUN_00a06de0(param_3[1]);
      FUN_00a06ec0(&local_40,uVar2);
    }
    if (*(int *)(iVar1 + 0x330) != 0) {
      uVar2 = FUN_00a06de0(param_3[2]);
      FUN_00a06ec0(&local_30,uVar2);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    local_60 = local_40 - local_50;
    local_5c = local_3c - local_4c;
    local_58 = local_38 - local_48;
    local_64 = local_58 * local_58 + local_60 * local_60 + local_5c * local_5c;
    fVar4 = (float10)FUN_00fdef70();
    *(float *)(param_1 + 0x54) = (float)fVar4;
    local_60 = local_30 - local_40;
    local_5c = local_2c - local_3c;
    local_58 = local_28 - local_38;
    local_64 = local_58 * local_58 + local_60 * local_60 + local_5c * local_5c;
    fVar4 = (float10)FUN_00fdef70();
    local_64 = (float)fVar4;
    *(float *)(param_1 + 0x58) = local_64;
    if (*(int *)(iVar1 + 0x330) != 0) {
      uVar2 = FUN_00a06de0(param_3[1]);
      FUN_00a06e70(param_1 + 0x60,uVar2);
    }
    if (*(int *)(iVar1 + 0x330) != 0) {
      uVar2 = FUN_00a06de0(param_3[2]);
      FUN_00a06e70(param_1 + 0x70,uVar2);
    }
    *(int *)(param_1 + 0x10) = iVar1;
    *(undefined4 *)(param_1 + 0xc) = 1;
    __security_check_cookie(local_14 ^ (uint)&local_64);
    return;
  }
  __security_check_cookie(local_14 ^ (uint)&local_64);
  return;
}

// 00E25720  Animation::HandIk::vf0C  size=153  [class]
void __fastcall Animation::HandIk::vf0C(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xe0) != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x2c);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x3c);
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x4c);
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  return;
}

// 00E257C0  Animation::HandIk::vf10  size=1  [class]
void Animation::HandIk::vf10(void)

{
  return;
}

// 00E257F0  FUN_00e257f0  size=119  [between]
int __thiscall FUN_00e257f0(int param_1,uint param_2)

{
  int iVar1;
  
  if (8 < param_2) {
    if (*(int *)(param_1 + 0x430) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e25865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(**(int **)(param_1 + 0x430) + 4))();
      return iVar1;
    }
switchD_00e25800_caseD_e2582d:
    return 0;
  }
  do {
    switch((&switchD_00e25800::switchdataD_00e25868)[param_2]) {
    case (undefined *)0xe25807:
      param_2 = 1;
      break;
    case (undefined *)0xe2580e:
      param_2 = 6;
      break;
    case (undefined *)0xe25815:
      return param_1 + 0x10;
    case (undefined *)0xe2581b:
      return param_1 + 0xc0;
    case (undefined *)0xe25824:
      return param_1 + 0x170;
    case (undefined *)0xe2582d:
      goto switchD_00e25800_caseD_e2582d;
    case (undefined *)0xe25832:
      return param_1 + 0x220;
    case (undefined *)0xe2583b:
      return param_1 + 0x2d0;
    case (undefined *)0xe25844:
      return param_1 + 0x380;
    }
  } while( true );
}

// 00E258F0  Animation::EspUnit::holdPilot  size=177  [class]
undefined4 * __fastcall Animation::EspUnit::holdPilot(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + uVar2 * 4) == 0) {
      puVar1 = (undefined4 *)FUN_00dd3500(0x440,&DAT_01b7bd48);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        cEspControler::cEspControler();
        cEspControler::cEspControler();
        cEspControler::cEspControler();
        cEspControler::cEspControler();
        cEspControler::cEspControler();
        cEspControler::cEspControler();
        puVar1[0x10c] = 0;
        puVar1[0x10c] = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 **)(param_1 + uVar2 * 4) = puVar1;
        return puVar1;
      }
      FUN_00dd5650(&DAT_016ccca0);
      return (undefined4 *)0x0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  FUN_00dd5650(&DAT_016ccd00);
  return (undefined4 *)0x0;
}

// 00E259B0  FUN_00e259b0  size=23  [between]
uint __fastcall FUN_00e259b0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 100);
  if ((uVar1 & 0x10) != 0) {
    return 2;
  }
  return uVar1 >> 0x12 & 1;
}

// 00E259D0  FUN_00e259d0  size=74  [between]
void __thiscall FUN_00e259d0(int param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 100);
  if ((((uVar1 & 0x40000) == 0) && ((uVar1 & 0x10) == 0)) &&
     (!NAN(param_2) && 0.0 < param_2 != (param_2 == 0.0))) {
    FUN_00e230e0(0);
    return;
  }
  FUN_00e230e0(param_2);
  return;
}

// 00E25A20  FUN_00e25a20  size=116  [between]
float10 __fastcall FUN_00e25a20(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x74);
  if ((iVar2 == 0) || (iVar2 == 3)) {
    return (float10)0;
  }
  if ((iVar2 != 6) && (fVar1 = *(float *)(param_1 + 0x84), fVar1 < 0.0 == (fVar1 == 0.0))) {
    fVar1 = (*(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x7c)) / fVar1;
    if (iVar2 != 2) {
      return (float10)(1.0 - fVar1 / (fVar1 + 1.0));
    }
    return (float10)(1.0 - 1.0 / (fVar1 + 1.0));
  }
  return (float10)1;
}

// 00E25AA0  FUN_00e25aa0  size=107  [between]
undefined4 __thiscall FUN_00e25aa0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x90);
  uVar2 = *(uint *)(param_1 + 0x94);
  if ((iVar1 != 0) && (uVar2 != 0)) {
    if ((*(byte *)(param_1 + 8) & 4) == 0) {
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          iVar3 = (int)*(short *)(iVar1 + uVar4 * 2);
          if (param_2 == iVar3) {
            return 1;
          }
        } while ((iVar3 <= param_2) && (uVar4 = uVar4 + 1, uVar4 < uVar2));
      }
      return 0;
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        iVar3 = (int)*(short *)(iVar1 + uVar4 * 2);
        if (param_2 == iVar3) {
          return 0;
        }
      } while ((iVar3 <= param_2) && (uVar4 = uVar4 + 1, uVar4 < uVar2));
    }
    return 1;
  }
  return 1;
}

// 00E25B50  FUN_00e25b50  size=91  [between]
void __thiscall FUN_00e25b50(undefined4 *param_1,float param_2,float param_3,undefined4 param_4)

{
  *param_1 = 1;
  param_1[7] = param_4;
  param_1[9] = 0;
  param_1[1] = param_3;
  param_1[3] = 0xbf800000;
  param_1[4] = 0;
  if ((param_2 == -1.0) && (param_2 = 0.0, NAN(param_3) || 0.0 < param_3 == (param_3 == 0.0))) {
    param_1[2] = param_4;
    return;
  }
  param_1[2] = param_2;
  return;
}

// 00E25BB0  FUN_00e25bb0  size=338  [between]
void __thiscall FUN_00e25bb0(int param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  fVar1 = *(float *)(param_1 + 0x1c);
  iVar3 = 0;
  fVar2 = *(float *)(param_1 + 8);
  if (param_3 != 0) {
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      if (fVar1 < fVar2 == (fVar1 == fVar2)) {
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(float *)(param_1 + 8) = fVar2;
        return;
      }
      do {
        iVar4 = iVar3;
        iVar3 = iVar4 + 1;
        fVar2 = fVar2 - fVar1;
      } while (fVar1 < fVar2);
      if ((0.0 < param_2) && (fVar1 - fVar2 < 0.001)) {
        iVar4 = iVar4 + 2;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar4;
        *(int *)(param_1 + 0x20) = iVar4;
        *(undefined4 *)(param_1 + 8) = 0;
        return;
      }
    }
    else {
      for (; fVar2 < 0.0; fVar2 = fVar1 + fVar2) {
        iVar3 = iVar3 + -1;
      }
      if ((param_2 < 0.0) && (fVar2 < 0.001)) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar3;
        *(int *)(param_1 + 0x20) = iVar3;
        *(undefined4 *)(param_1 + 8) = 0;
        return;
      }
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar3;
    *(float *)(param_1 + 8) = fVar2;
    *(int *)(param_1 + 0x20) = iVar3;
    return;
  }
  if (fVar2 < 0.0 != (fVar2 == 0.0)) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  if (fVar1 < fVar2 == (fVar1 == fVar2)) {
    *(float *)(param_1 + 8) = fVar2;
    return;
  }
  *(float *)(param_1 + 8) = fVar1;
  return;
}

// 00E25D10  FUN_00e25d10  size=88  [between]
undefined4 __fastcall FUN_00e25d10(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (*(float *)(param_1 + 4) <= 0.0) {
      if (0.0 <= *(float *)(param_1 + 4)) {
        return 0;
      }
      if (0.001 < *(float *)(param_1 + 8)) {
        return 0;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x1c) - 0.001;
      if (fVar1 < *(float *)(param_1 + 8) == (fVar1 == *(float *)(param_1 + 8))) {
        return 0;
      }
    }
  }
  return 1;
}

// 00E25E50  FUN_00e25e50  size=89  [between]
undefined4 __fastcall FUN_00e25e50(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0xffffffff;
  return 1;
}

// 00E25F10  FUN_00e25f10  size=88  [between]
int __thiscall FUN_00e25f10(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = 0;
  do {
    pbVar3 = *(byte **)(param_1 + iVar2 * 4);
    pbVar5 = param_2;
    if (pbVar3 != (byte *)0x0) {
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00e25f50:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00e25f55;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00e25f50;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00e25f55:
      if (iVar4 == 0) {
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
    if (0x17 < iVar2) {
      return -1;
    }
  } while( true );
}

// 00E25F70  FUN_00e25f70  size=332  [between]
undefined4
FUN_00e25f70(float param_1,float param_2,float param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  
  if (param_4 == 0) {
    if (0.0 <= param_3) {
      return 0;
    }
    bVar1 = (byte)((ushort)((ushort)(NAN(param_2) || NAN(param_1)) << 10) >> 8) |
            (byte)((ushort)((ushort)(param_2 == param_1) << 0xe) >> 8);
  }
  else {
    if (param_4 < 1) {
      if (0.0 <= param_3) {
        if (param_2 < param_3 == (param_2 == param_3)) {
          if (param_5 == 0) {
            return 0;
          }
          if (param_3 <= param_1) {
            if (param_2 < param_1 != (param_2 == param_1)) {
              return 1;
            }
            return 0;
          }
          return 1;
        }
        if (param_3 <= param_1) {
          return 0;
        }
        bVar1 = param_2 < param_1 | (byte)((ushort)((ushort)(param_2 == param_1) << 0xe) >> 8);
        goto LAB_00e25f98;
      }
      if ((param_6 != 0) && (param_2 <= param_1)) {
        return 1;
      }
    }
    else {
      if (0.0 <= param_3) {
        if (param_2 < param_3) {
          if (param_5 == 0) {
            return 0;
          }
          if (param_3 < param_1) {
            return 1;
          }
          if (param_1 <= param_2) {
            return 1;
          }
          return 0;
        }
        if (param_1 <= param_3) {
          return 0;
        }
        if (param_2 < param_1) {
          return 0;
        }
        return 1;
      }
      if ((param_6 != 0) && (param_1 < param_2 != (param_1 == param_2))) {
        return 1;
      }
    }
    bVar1 = (byte)((ushort)((ushort)(NAN(param_1) || NAN(param_2)) << 10) >> 8) |
            (byte)((ushort)((ushort)(param_1 == param_2) << 0xe) >> 8);
  }
LAB_00e25f98:
  if ((POPCOUNT(bVar1) & 1U) != 0) {
    return 1;
  }
  return 0;
}

// 00E260C0  FUN_00e260c0  size=361  [between]
undefined4
FUN_00e260c0(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
            int param_7)

{
  byte bVar1;
  
  if (param_5 == 0) {
    bVar1 = param_1 < param_3 | (byte)((ushort)((ushort)(param_1 == param_3) << 0xe) >> 8);
  }
  else {
    if (param_5 < 1) {
      if (0.0 <= param_4) {
        if (param_4 <= param_3) {
          if (param_6 != 0) {
            if (param_3 <= param_1) {
              return 1;
            }
            if (param_2 < param_4) {
              return 1;
            }
            return 0;
          }
          if (param_1 <= param_4) {
            return 0;
          }
          bVar1 = param_2 < param_3 | (byte)((ushort)((ushort)(param_2 == param_3) << 0xe) >> 8);
        }
        else {
          if (param_1 < param_3) {
            return 0;
          }
          bVar1 = param_2 < param_4 |
                  (byte)((ushort)((ushort)(NAN(param_2) || NAN(param_4)) << 10) >> 8);
        }
        if ((POPCOUNT(bVar1) & 1U) == 0) {
          return 0;
        }
        return 1;
      }
      if ((param_7 != 0) && (param_3 <= param_1)) {
        return 1;
      }
    }
    else {
      if (0.0 <= param_4) {
        if (param_3 <= param_4) {
          if (param_6 == 0) {
            if (param_4 <= param_1) {
              return 0;
            }
            if (param_2 < param_3) {
              return 0;
            }
            return 1;
          }
          if (param_1 < param_3 != (param_1 == param_3)) {
            return 1;
          }
          if (param_4 < param_2) {
            return 1;
          }
          return 0;
        }
        bVar1 = param_1 < param_3 | (byte)((ushort)((ushort)(param_1 == param_3) << 0xe) >> 8);
        param_3 = param_4;
        goto LAB_00e260d2;
      }
      if ((param_7 != 0) && (param_1 < param_3 != (param_1 == param_3))) {
        return 1;
      }
    }
    bVar1 = param_1 < param_3 | (byte)((ushort)((ushort)(param_1 == param_3) << 0xe) >> 8);
  }
LAB_00e260d2:
  if (((POPCOUNT(bVar1) & 1U) != 0) && (param_3 < param_2)) {
    return 1;
  }
  return 0;
}

// 00E263A0  FUN_00e263a0  size=132  [between]
void FUN_00e263a0(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 4);
  fVar1 = (param_3 - fVar1) / (((float)(int)*(short *)(param_1 + 10) / 60.0 + fVar1) - fVar1);
  FUN_009315f0(param_2,(1.0 - fVar1) * *(float *)(param_1 + 0xc) +
                       *(float *)(param_1 + 0x10) * fVar1,
               *(float *)(param_1 + 0x14) * (1.0 - fVar1) + *(float *)(param_1 + 0x18) * fVar1,
               (int)*(short *)(param_1 + 10));
  return;
}

// 00E26430  FUN_00e26430  size=26  [between]
undefined4 __fastcall FUN_00e26430(int *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  (**(code **)(*param_1 + 100))();
  return 1;
}

// 00E26500  FUN_00e26500  size=59  [between]
undefined4 __thiscall FUN_00e26500(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  
  if (((param_3 != param_1) && ((int *)param_1[0x18] != (int *)0x0)) &&
     ((int *)param_1[0x18] != param_3)) {
    FUN_00dd5650(&DAT_016cce10);
    return 0;
  }
  pcVar1 = *(code **)(*param_1 + 100);
  param_1[0x1a] = param_2;
  (*pcVar1)();
  return 1;
}

// 00E26540  Animation::Motion::Node::vf48  size=5  [class]
undefined4 Animation::Motion::Node::vf48(void)

{
  return 0;
}

// 00E26550  Animation::Motion::Node::vf44  size=5  [class]
undefined4 Animation::Motion::Node::vf44(void)

{
  return 0;
}

// 00E26560  Animation::Motion::Node::vf4C  size=5  [class]
undefined4 Animation::Motion::Node::vf4C(void)

{
  return 0;
}

// 00E26570  Animation::Motion::Node::getEspPilot  size=59  [class]
int __fastcall Animation::Motion::Node::getEspPilot(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_00dd5650(&DAT_016cce48);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 == 0) {
    iVar1 = EspUnit::holdPilot();
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)(param_1 + 0x84) = iVar1;
  }
  return iVar1;
}

// 00E265E0  FUN_00e265e0  size=148  [between]
undefined4 __thiscall FUN_00e265e0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x90) != 0) || (*(int *)(param_1 + 0x94) != 0)) {
    return 0;
  }
  if ((int)param_2 < 1) {
    if (param_2 == 0xffffffff) {
LAB_00e2663a:
      *(uint *)(param_1 + 0x94) = param_2;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      return 1;
    }
  }
  else {
    iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x10 >> 0x20) != 0) |
                         (uint)((ulonglong)param_2 * 0x10),&DAT_01b7bd48);
    *(int *)(param_1 + 0x90) = iVar1;
    if (iVar1 != 0) goto LAB_00e2663a;
  }
  return 0;
}

// 00E26680  Animation::Motion::NodeBlend::vf5C  size=3  [class]
void Animation::Motion::NodeBlend::vf5C(void)

{
  return;
}

// 00E26690  FUN_00e26690  size=185  [between]
float10 __thiscall FUN_00e26690(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((((param_2[3] != 0.0) && (fVar1 = ABS(*param_2 - *(float *)(param_1 + 0x9c)), fVar1 < 1.0)) &&
      (fVar2 = ABS(param_2[1] - *(float *)(param_1 + 0xa0)), fVar2 < 1.0)) &&
     (fVar3 = ABS(param_2[2] - *(float *)(param_1 + 0xa4)), fVar3 < 1.0)) {
    return (float10)((1.0 - fVar2) * (1.0 - fVar1) * (1.0 - fVar3));
  }
  return (float10)0;
}

// 00E26760  Animation::Motion::NodeParallel::getCurrentTime  size=20  [class]
float10 Animation::Motion::NodeParallel::getCurrentTime(void)

{
  FUN_00dd5650(&DAT_016cce80);
  return (float10)-1.0;
}

// 00E26780  Animation::Motion::NodeParallel::getElapsedTime  size=20  [class]
float10 Animation::Motion::NodeParallel::getElapsedTime(void)

{
  FUN_00dd5650(&DAT_016ccec0);
  return (float10)-1.0;
}

// 00E267A0  Animation::Motion::NodeParallel::getMaxTime  size=20  [class]
float10 Animation::Motion::NodeParallel::getMaxTime(void)

{
  FUN_00dd5650(&DAT_016ccf00);
  return (float10)-1.0;
}

// 00E267C0  Animation::Motion::NodeParallel::vf5C  size=3  [class]
void Animation::Motion::NodeParallel::vf5C(void)

{
  return;
}

// 00E267D0  Animation::Motion::NodePlay::vf0C  size=66  [class]
bool __fastcall Animation::Motion::NodePlay::vf0C(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x19] & 0x200U) == 0) && ((param_1[0x19] & 0x8000000U) != 0)) {
    iVar1 = (**(code **)(*param_1 + 0x20))();
    if ((iVar1 != 0) && (((param_1[0x19] & 0x10U) != 0 || ((param_1[0x19] & 0x40000U) != 0)))) {
      return true;
    }
  }
  return param_1[0x47] == 6;
}

// 00E26820  Animation::Motion::NodePlay::vf20  size=10  [class]
uint __fastcall Animation::Motion::NodePlay::vf20(int param_1)

{
  return *(uint *)(param_1 + 0xf4) & 0x40;
}

// 00E26830  Animation::Motion::NodePlay::vf24  size=30  [class]
void __thiscall Animation::Motion::NodePlay::vf24(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xfffffffb;
  *(undefined4 *)(param_1 + 0x138) = param_2;
  *(undefined4 *)(param_1 + 0x13c) = param_3;
  return;
}

// 00E26850  Animation::Motion::NodePlay::vf28  size=30  [class]
void __thiscall Animation::Motion::NodePlay::vf28(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 4;
  *(undefined4 *)(param_1 + 0x138) = param_2;
  *(undefined4 *)(param_1 + 0x13c) = param_3;
  return;
}

// 00E26870  Animation::Motion::NodePlay::vf34  size=7  [class]
float10 __fastcall Animation::Motion::NodePlay::vf34(int param_1)

{
  return (float10)*(float *)(param_1 + 0xfc);
}

// 00E26880  Animation::Motion::NodePlay::vf38  size=27  [class]
float10 __fastcall Animation::Motion::NodePlay::vf38(int param_1)

{
  return (float10)((float)*(int *)(param_1 + 0x118) * *(float *)(param_1 + 0x110) +
                  *(float *)(param_1 + 0xfc));
}

// 00E268A0  Animation::Motion::NodePlay::vf3C  size=7  [class]
float10 __fastcall Animation::Motion::NodePlay::vf3C(int param_1)

{
  return (float10)*(float *)(param_1 + 0x110);
}

// 00E268B0  Animation::Motion::NodePlay::vf40  size=69  [class]
void __thiscall Animation::Motion::NodePlay::vf40(int *param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(**(code **)(*param_1 + 0x3c))();
  fVar2 = (float10)0;
  if (fVar2 < fVar1) {
    fVar2 = (float10)(**(code **)(*param_1 + 0x3c))();
    *param_2 = (float)fVar2;
    *param_3 = (float)param_1[0x1b];
    return;
  }
  *param_2 = (float)fVar2;
  *param_3 = (float)fVar2;
  return;
}

// 00E26920  Animation::Motion::NodePlay::vf5C  size=3  [class]
void Animation::Motion::NodePlay::vf5C(void)

{
  return;
}

// 00E269C0  FUN_00e269c0  size=88  [between]
int __thiscall FUN_00e269c0(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  iVar2 = 0;
  piVar6 = (int *)(param_1 + 0xc);
  do {
    if (*piVar6 != 0) {
      pbVar3 = (byte *)(*piVar6 + 0x20);
      pbVar5 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00e26a00:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00e26a05;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00e26a00;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00e26a05:
      if (iVar4 == 0) {
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
    piVar6 = piVar6 + 4;
    if (0xf < iVar2) {
      return -1;
    }
  } while( true );
}

// 00E26A20  FUN_00e26a20  size=113  [between]
void FUN_00e26a20(int *param_1,undefined4 *param_2,int param_3)

{
  int iStack_44;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [28];
  
  local_30 = *param_2;
  local_2c = param_2[1];
  iStack_44 = param_3;
  local_28 = param_2[2];
  local_24 = 0x3f800000;
  D3DXQuaternionInverse();
  D3DXQuaternionMultiply(auStack_38);
  D3DXQuaternionMultiply(&iStack_44,auStack_34,&iStack_44);
  *param_1 = (int)auStack_38;
  param_1[1] = param_3;
  param_1[2] = (int)local_20;
  return;
}

// 00E26B20  FUN_00e26b20  size=30  [between]
void __fastcall FUN_00e26b20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 00E26B40  FUN_00e26b40  size=28  [between]
void __fastcall FUN_00e26b40(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_00a0c7b0(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

// 00E26D90  FUN_00e26d90  size=93  [between]
void __thiscall FUN_00e26d90(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x70) = param_2[8];
  *(undefined4 *)(iVar1 + 0x74) = param_2[9];
  *(undefined4 *)(iVar1 + 0x78) = param_2[10];
  *(undefined4 *)(iVar1 + 0x7c) = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x50) = *param_2;
  *(undefined4 *)(iVar1 + 0x54) = param_2[1];
  *(undefined4 *)(iVar1 + 0x58) = param_2[2];
  *(undefined4 *)(iVar1 + 0x5c) = param_2[3];
  *(undefined4 *)(iVar1 + 0x90) = param_2[4];
  *(undefined4 *)(iVar1 + 0x94) = param_2[5];
  *(undefined4 *)(iVar1 + 0x98) = param_2[6];
  *(undefined4 *)(iVar1 + 0x9c) = param_2[7];
  return;
}

// 00E26DF0  FUN_00e26df0  size=69  [between]
void __thiscall FUN_00e26df0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x50) = *param_2;
  *(undefined4 *)(iVar1 + 0x54) = param_2[1];
  *(undefined4 *)(iVar1 + 0x58) = param_2[2];
  *(undefined4 *)(iVar1 + 0x5c) = param_2[3];
  *(undefined4 *)(iVar1 + 0x90) = param_2[4];
  *(undefined4 *)(iVar1 + 0x94) = param_2[5];
  *(undefined4 *)(iVar1 + 0x98) = param_2[6];
  *(undefined4 *)(iVar1 + 0x9c) = param_2[7];
  return;
}

// 00E26E50  FUN_00e26e50  size=62  [between]
void __thiscall FUN_00e26e50(int param_1,int param_2)

{
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_4;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 1;
    __security_check_cookie(local_4 ^ (uint)&local_4);
    return;
  }
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xfffffffe;
  __security_check_cookie(local_4 ^ (uint)&local_4);
  return;
}

// 00E26E90  FUN_00e26e90  size=157  [between]
void __fastcall FUN_00e26e90(int param_1)

{
  int iVar1;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  if ((*(byte *)(param_1 + 0x94) & 1) != 0) {
    __security_check_cookie(local_4 ^ (uint)local_14);
    return;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_009f8ea0(local_14,0x10,*(undefined4 *)(iVar1 + 0x4b0),0);
      FUN_00dd5650(&DAT_016cd108,local_14);
      __security_check_cookie(local_4 ^ (uint)local_14);
      return;
    }
  }
  FUN_00dd5650(&DAT_016cd0d4);
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E26FA0  Animation::Control::Node::vf08  size=38  [class]
void __thiscall Animation::Control::Node::vf08(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 8))(param_2);
  }
  return;
}

// 00E26FD0  Animation::Control::Node::vf0C  size=26  [class]
void __fastcall Animation::Control::Node::vf0C(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}

// 00E26FF0  Animation::Control::Node::vf10  size=26  [class]
void __fastcall Animation::Control::Node::vf10(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x10))();
  }
  return;
}

// 00E27010  Animation::Control::Node::vf18  size=58  [class]
undefined4 __thiscall
Animation::Control::Node::vf18(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    iVar2 = (**(code **)(*piVar1 + 0x18))(param_2,param_3);
    if (iVar2 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

// 00E27220  FUN_00e27220  size=59  [between]
int __fastcall FUN_00e27220(int param_1)

{
  int iVar1;
  
  FUN_00de3530();
  iVar1 = 3;
  do {
    FUN_00de3530();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

// 00E27260  FUN_00e27260  size=78  [between]
void __thiscall FUN_00e27260(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[0xb] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[3] = param_3;
  param_1[4] = param_3;
  FUN_009f8ea0(param_1 + 5,0x10,param_3 & 0xffffff,0);
  param_1[9] = *param_2;
  param_1[10] = param_2[1];
  return;
}

// 00E272B0  FUN_00e272b0  size=122  [between]
void __thiscall FUN_00e272b0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_3 == 0xffffffff) {
    param_3 = param_2;
  }
  if (param_2 != 0xffffffff) {
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    FUN_00de3530();
    iVar1 = FUN_009fe6b0(&local_8,param_2);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x10) = param_3;
      *(uint *)(param_1 + 0xc) = param_2;
      FUN_009f8ea0(param_1 + 0x14,0x10,param_3 & 0xffffff,0);
      *(undefined4 *)(param_1 + 0x24) = local_8;
      *(undefined4 *)(param_1 + 0x28) = local_4;
    }
  }
  return;
}

// 00E27330  FUN_00e27330  size=167  [between]
undefined4 __thiscall FUN_00e27330(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_8;
  int local_4;
  
  if (param_2 == -1) {
    return 0;
  }
  if (param_3 == 0xffffffff) {
    param_3 = *(uint *)(param_1 + 0x10);
  }
  uVar3 = 1;
  piVar1 = (int *)(param_1 + 0x2c);
  do {
    if (*piVar1 == -1) {
      FUN_00de3530();
      iVar2 = FUN_009fe6b0(&local_8,param_2);
      if (iVar2 != 0) {
        piVar1 = (int *)(uVar3 * 0x20 + 0xc + param_1);
        piVar1[1] = param_3;
        *piVar1 = param_2;
        FUN_009f8ea0(piVar1 + 2,0x10,param_3 & 0xffffff,0);
        piVar1[6] = local_8;
        piVar1[7] = local_4;
      }
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar1 = piVar1 + 8;
  } while (uVar3 < 4);
  return 0;
}

// 00E273E0  FUN_00e273e0  size=154  [between]
void __thiscall FUN_00e273e0(int param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *_Src;
  uint uVar3;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  uVar3 = 0;
  _Src = (char *)(param_1 + 0x14);
  do {
    if (*(int *)(_Src + -8) != -1) {
      _strcpy_s(local_24,0x20,_Src);
      _strcat_s(local_24,0x20,"_");
      _strcat_s(local_24,0x20,param_2);
      _strcat_s(local_24,0x20,param_3);
      uVar1 = FUN_00e03ea0(local_24);
      iVar2 = FUN_00de3e90(0,uVar1);
      if (iVar2 != 0) break;
    }
    uVar3 = uVar3 + 1;
    _Src = _Src + 0x20;
  } while (uVar3 < 4);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E27480  FUN_00e27480  size=131  [between]
void __thiscall FUN_00e27480(int param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _strcpy_s(local_24,0x20,param_2);
  _strcat_s(local_24,0x20,param_3);
  uVar1 = FUN_00e03ea0(local_24);
  uVar3 = 0;
  param_1 = param_1 + 0x24;
  do {
    if ((*(int *)(param_1 + -0x18) != -1) && (iVar2 = FUN_00de3e90(0,uVar1), iVar2 != 0)) break;
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 0x20;
  } while (uVar3 < 4);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E27510  FUN_00e27510  size=78  [between]
void FUN_00e27510(char *param_1,char *param_2)

{
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_44;
  _strcpy_s(local_44,0x40,param_1);
  _strcat_s(local_44,0x40,param_2);
  FUN_00de4850(local_44);
  __security_check_cookie(local_4 ^ (uint)local_44);
  return;
}

// 00E278A0  FUN_00e278a0  size=1231  [between]
void FUN_00e278a0(float *param_1,int param_2,int *param_3,int *param_4,byte *param_5)

{
  short *psVar1;
  float10 fVar2;
  int local_48;
  float local_44;
  uint local_40;
  uint local_3c;
  float local_38;
  ushort local_34;
  ushort local_32;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    param_1[1] = param_1[1] * -1.0;
    param_1[2] = param_1[2] * -1.0;
  }
  if ((*param_5 & 1) == 0) {
    local_3c = 1;
    local_44 = *(float *)(param_5 + 4) - (float)*(ushort *)(param_5 + 8);
    if (local_44 < 0.001) {
      local_34 = *(ushort *)(param_5 + 8);
      local_44 = (float)(uint)local_34;
      local_38 = (float)(int)local_44;
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      local_32 = local_34;
      if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x03')) {
        fVar2 = (float10)FUN_00e22de0(param_3,param_4,&local_3c);
        *param_1 = (float)fVar2;
      }
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x04')) {
        fVar2 = (float10)FUN_00e22de0(param_3,param_4,&local_3c);
        param_1[1] = (float)fVar2;
      }
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x05')) {
        fVar2 = (float10)FUN_00e22de0(param_3,param_4,&local_3c);
        param_1[2] = (float)fVar2;
      }
      FUN_00ddbdb0(param_1,param_1);
      goto LAB_00e27d4c;
    }
    if (local_44 <= 0.999) {
      local_34 = *(ushort *)(param_5 + 8);
      local_40 = (uint)local_34;
      local_48 = *param_4;
      local_38 = (float)local_40;
      psVar1 = (short *)(*param_3 + local_48 * 0xc);
      local_32 = local_34;
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
        fVar2 = (float10)*param_1;
      }
      else {
        fVar2 = (float10)FUN_00e22de0(param_3,&local_48,&local_3c);
      }
      local_20 = (float)fVar2;
      psVar1 = (short *)(*param_3 + local_48 * 0xc);
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
        fVar2 = (float10)param_1[1];
      }
      else {
        fVar2 = (float10)FUN_00e22de0(param_3,&local_48,&local_3c);
      }
      local_1c = (float)fVar2;
      psVar1 = (short *)(*param_3 + local_48 * 0xc);
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
        fVar2 = (float10)param_1[2];
      }
      else {
        fVar2 = (float10)FUN_00e22de0(param_3,&local_48,&local_3c);
      }
      local_18 = (float)fVar2;
      FUN_00ddbdb0(&local_20,&local_20);
      local_34 = *(ushort *)(param_5 + 10);
      local_40 = (uint)local_34;
      local_38 = (float)local_40;
      local_3c = local_3c | 3;
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      local_32 = local_34;
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
        fVar2 = (float10)*param_1;
      }
      else {
        fVar2 = (float10)FUN_00e22de0(param_3,param_4,&local_3c);
      }
      local_30 = (float)fVar2;
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
        fVar2 = (float10)param_1[1];
      }
      else {
        fVar2 = (float10)FUN_00e22de0(param_3,param_4,&local_3c);
      }
      local_2c = (float)fVar2;
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
        fVar2 = (float10)param_1[2];
      }
      else {
        fVar2 = (float10)FUN_00e22de0(param_3,param_4,&local_3c);
      }
      local_28 = (float)fVar2;
      FUN_00ddbdb0(&local_30,&local_30);
      FUN_00de21a0(param_1,&local_20,&local_30,local_44);
      goto LAB_00e27d4c;
    }
    local_34 = *(ushort *)(param_5 + 10);
    local_44 = (float)(uint)local_34;
    local_38 = (float)(int)local_44;
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    local_32 = local_34;
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x03')) {
      fVar2 = (float10)FUN_00e22de0(param_3,param_4,&local_3c);
      *param_1 = (float)fVar2;
    }
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x04')) {
      fVar2 = (float10)FUN_00e22de0(param_3,param_4,&local_3c);
      param_1[1] = (float)fVar2;
    }
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x05')) {
      fVar2 = (float10)FUN_00e22de0(param_3,param_4,&local_3c);
      param_1[2] = (float)fVar2;
    }
  }
  else {
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x03')) {
      fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      local_44 = (float)fVar2;
      *param_4 = *param_4 + 1;
      *param_1 = local_44;
    }
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x04')) {
      fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      local_44 = (float)fVar2;
      *param_4 = *param_4 + 1;
      param_1[1] = local_44;
    }
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x05')) {
      fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      local_44 = (float)fVar2;
      *param_4 = *param_4 + 1;
      param_1[2] = local_44;
    }
  }
  FUN_00ddbdb0(param_1,param_1);
LAB_00e27d4c:
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    param_1[1] = param_1[1] * -1.0;
    param_1[2] = param_1[2] * -1.0;
  }
  return;
}

// 00E27D70  FUN_00e27d70  size=1231  [between]
void FUN_00e27d70(float *param_1,int param_2,int *param_3,int *param_4,byte *param_5)

{
  short *psVar1;
  float10 fVar2;
  int local_48;
  float local_44;
  uint local_40;
  uint local_3c;
  float local_38;
  ushort local_34;
  ushort local_32;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    param_1[1] = param_1[1] * -1.0;
    param_1[2] = param_1[2] * -1.0;
  }
  if ((*param_5 & 1) == 0) {
    local_3c = 1;
    local_44 = *(float *)(param_5 + 4) - (float)*(ushort *)(param_5 + 8);
    if (local_44 < 0.001) {
      local_34 = *(ushort *)(param_5 + 8);
      local_44 = (float)(uint)local_34;
      local_38 = (float)(int)local_44;
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      local_32 = local_34;
      if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x03')) {
        fVar2 = (float10)FUN_00e24880(param_3,param_4,&local_3c);
        *param_1 = (float)fVar2;
      }
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x04')) {
        fVar2 = (float10)FUN_00e24880(param_3,param_4,&local_3c);
        param_1[1] = (float)fVar2;
      }
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x05')) {
        fVar2 = (float10)FUN_00e24880(param_3,param_4,&local_3c);
        param_1[2] = (float)fVar2;
      }
      FUN_00ddbdb0(param_1,param_1);
      goto LAB_00e2821c;
    }
    if (local_44 <= 0.999) {
      local_34 = *(ushort *)(param_5 + 8);
      local_40 = (uint)local_34;
      local_48 = *param_4;
      local_38 = (float)local_40;
      psVar1 = (short *)(*param_3 + local_48 * 0xc);
      local_32 = local_34;
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
        fVar2 = (float10)*param_1;
      }
      else {
        fVar2 = (float10)FUN_00e24880(param_3,&local_48,&local_3c);
      }
      local_20 = (float)fVar2;
      psVar1 = (short *)(*param_3 + local_48 * 0xc);
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
        fVar2 = (float10)param_1[1];
      }
      else {
        fVar2 = (float10)FUN_00e24880(param_3,&local_48,&local_3c);
      }
      local_1c = (float)fVar2;
      psVar1 = (short *)(*param_3 + local_48 * 0xc);
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
        fVar2 = (float10)param_1[2];
      }
      else {
        fVar2 = (float10)FUN_00e24880(param_3,&local_48,&local_3c);
      }
      local_18 = (float)fVar2;
      FUN_00ddbdb0(&local_20,&local_20);
      local_34 = *(ushort *)(param_5 + 10);
      local_40 = (uint)local_34;
      local_38 = (float)local_40;
      local_3c = local_3c | 3;
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      local_32 = local_34;
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
        fVar2 = (float10)*param_1;
      }
      else {
        fVar2 = (float10)FUN_00e24880(param_3,param_4,&local_3c);
      }
      local_30 = (float)fVar2;
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
        fVar2 = (float10)param_1[1];
      }
      else {
        fVar2 = (float10)FUN_00e24880(param_3,param_4,&local_3c);
      }
      local_2c = (float)fVar2;
      psVar1 = (short *)(*param_3 + *param_4 * 0xc);
      if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
        fVar2 = (float10)param_1[2];
      }
      else {
        fVar2 = (float10)FUN_00e24880(param_3,param_4,&local_3c);
      }
      local_28 = (float)fVar2;
      FUN_00ddbdb0(&local_30,&local_30);
      FUN_00de21a0(param_1,&local_20,&local_30,local_44);
      goto LAB_00e2821c;
    }
    local_34 = *(ushort *)(param_5 + 10);
    local_44 = (float)(uint)local_34;
    local_38 = (float)(int)local_44;
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    local_32 = local_34;
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x03')) {
      fVar2 = (float10)FUN_00e24880(param_3,param_4,&local_3c);
      *param_1 = (float)fVar2;
    }
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x04')) {
      fVar2 = (float10)FUN_00e24880(param_3,param_4,&local_3c);
      param_1[1] = (float)fVar2;
    }
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x05')) {
      fVar2 = (float10)FUN_00e24880(param_3,param_4,&local_3c);
      param_1[2] = (float)fVar2;
    }
  }
  else {
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x03')) {
      fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      local_44 = (float)fVar2;
      *param_4 = *param_4 + 1;
      *param_1 = local_44;
    }
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x04')) {
      fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      local_44 = (float)fVar2;
      *param_4 = *param_4 + 1;
      param_1[1] = local_44;
    }
    psVar1 = (short *)(*param_3 + *param_4 * 0xc);
    if (((psVar1 != (short *)0x0) && (*psVar1 == param_2)) && ((char)psVar1[1] == '\x05')) {
      fVar2 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      local_44 = (float)fVar2;
      *param_4 = *param_4 + 1;
      param_1[2] = local_44;
    }
  }
  FUN_00ddbdb0(param_1,param_1);
LAB_00e2821c:
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    param_1[1] = param_1[1] * -1.0;
    param_1[2] = param_1[2] * -1.0;
  }
  return;
}

// 00E28240  FUN_00e28240  size=893  [between]
void FUN_00e28240(float *param_1,int param_2,int *param_3,float *param_4,byte *param_5)

{
  short *psVar1;
  float fVar2;
  float10 fVar3;
  float local_44;
  float local_40;
  uint local_3c;
  float local_38;
  ushort local_34;
  ushort local_32;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar2 = *param_4;
  if ((*param_5 & 1) == 0) {
    local_34 = *(ushort *)(param_5 + 8);
    local_40 = (float)(uint)local_34;
    local_38 = (float)(int)local_40;
    psVar1 = (short *)(*param_3 + (int)fVar2 * 0xc);
    local_3c = 1;
    local_32 = local_34;
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
      local_20 = 0.0;
    }
    else {
      local_44 = fVar2;
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,&local_44,&local_3c);
      local_20 = (float)fVar3;
      fVar2 = (float)((int)local_44 + 1);
      local_40 = local_20;
    }
    psVar1 = (short *)(*param_3 + (int)fVar2 * 0xc);
    local_44 = fVar2;
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
      fStack_1c = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,&local_44,&local_3c);
      fStack_1c = (float)fVar3;
      local_44 = (float)((int)local_44 + 1);
      local_40 = fStack_1c;
    }
    psVar1 = (short *)(*param_3 + (int)local_44 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
      fStack_18 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,&local_44,&local_3c);
      local_44 = (float)((int)local_44 + 1);
      fStack_18 = (float)fVar3;
      local_40 = fStack_18;
    }
    FUN_00ddbdb0(&local_20,&local_20);
    local_34 = *(ushort *)(param_5 + 10);
    local_40 = (float)(uint)local_34;
    local_38 = (float)(int)local_40;
    local_3c = local_3c | 3;
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    local_32 = local_34;
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
      fStack_30 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,&local_3c);
      *param_4 = (float)((int)*param_4 + 1);
      fStack_30 = (float)fVar3;
      local_40 = fStack_30;
    }
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
      fStack_2c = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,&local_3c);
      *param_4 = (float)((int)*param_4 + 1);
      fStack_2c = (float)fVar3;
      local_40 = fStack_2c;
    }
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
      fStack_28 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,&local_3c);
      *param_4 = (float)((int)*param_4 + 1);
      fStack_28 = (float)fVar3;
      local_40 = fStack_28;
    }
    FUN_00ddbdb0(&fStack_30,&fStack_30);
    local_40 = *(float *)(param_5 + 4) - (float)*(ushort *)(param_5 + 8);
    FUN_00de21a0(param_1,&local_20,&fStack_30,local_40);
  }
  else {
    psVar1 = (short *)(*param_3 + (int)fVar2 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
      fVar2 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      fVar2 = (float)fVar3;
      *param_4 = (float)((int)*param_4 + 1);
      local_44 = fVar2;
    }
    *param_1 = fVar2;
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
      fVar2 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      fVar2 = (float)fVar3;
      *param_4 = (float)((int)*param_4 + 1);
      local_44 = fVar2;
    }
    param_1[1] = fVar2;
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
      param_1[2] = 0.0;
      FUN_00ddbdb0(param_1,param_1);
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      *param_4 = (float)((int)*param_4 + 1);
      local_44 = (float)fVar3;
      param_1[2] = local_44;
      FUN_00ddbdb0(param_1,param_1);
    }
  }
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    param_1[1] = param_1[1] * -1.0;
    param_1[2] = param_1[2] * -1.0;
  }
  return;
}

// 00E285C0  FUN_00e285c0  size=893  [between]
void FUN_00e285c0(float *param_1,int param_2,int *param_3,float *param_4,byte *param_5)

{
  short *psVar1;
  float fVar2;
  float10 fVar3;
  float local_44;
  float local_40;
  uint local_3c;
  float local_38;
  ushort local_34;
  ushort local_32;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar2 = *param_4;
  if ((*param_5 & 1) == 0) {
    local_34 = *(ushort *)(param_5 + 8);
    local_40 = (float)(uint)local_34;
    local_38 = (float)(int)local_40;
    psVar1 = (short *)(*param_3 + (int)fVar2 * 0xc);
    local_3c = 1;
    local_32 = local_34;
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
      local_20 = 0.0;
    }
    else {
      local_44 = fVar2;
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,&local_44,&local_3c);
      local_20 = (float)fVar3;
      fVar2 = (float)((int)local_44 + 1);
      local_40 = local_20;
    }
    psVar1 = (short *)(*param_3 + (int)fVar2 * 0xc);
    local_44 = fVar2;
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
      fStack_1c = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,&local_44,&local_3c);
      fStack_1c = (float)fVar3;
      local_44 = (float)((int)local_44 + 1);
      local_40 = fStack_1c;
    }
    psVar1 = (short *)(*param_3 + (int)local_44 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
      fStack_18 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,&local_44,&local_3c);
      local_44 = (float)((int)local_44 + 1);
      fStack_18 = (float)fVar3;
      local_40 = fStack_18;
    }
    FUN_00ddbdb0(&local_20,&local_20);
    local_34 = *(ushort *)(param_5 + 10);
    local_40 = (float)(uint)local_34;
    local_38 = (float)(int)local_40;
    local_3c = local_3c | 3;
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    local_32 = local_34;
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
      fStack_30 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,&local_3c);
      *param_4 = (float)((int)*param_4 + 1);
      fStack_30 = (float)fVar3;
      local_40 = fStack_30;
    }
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
      fStack_2c = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,&local_3c);
      *param_4 = (float)((int)*param_4 + 1);
      fStack_2c = (float)fVar3;
      local_40 = fStack_2c;
    }
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
      fStack_28 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,&local_3c);
      *param_4 = (float)((int)*param_4 + 1);
      fStack_28 = (float)fVar3;
      local_40 = fStack_28;
    }
    FUN_00ddbdb0(&fStack_30,&fStack_30);
    local_40 = *(float *)(param_5 + 4) - (float)*(ushort *)(param_5 + 8);
    FUN_00de21a0(param_1,&local_20,&fStack_30,local_40);
  }
  else {
    psVar1 = (short *)(*param_3 + (int)fVar2 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
      fVar2 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      fVar2 = (float)fVar3;
      *param_4 = (float)((int)*param_4 + 1);
      local_44 = fVar2;
    }
    *param_1 = fVar2;
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
      fVar2 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      fVar2 = (float)fVar3;
      *param_4 = (float)((int)*param_4 + 1);
      local_44 = fVar2;
    }
    param_1[1] = fVar2;
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
      param_1[2] = 0.0;
      FUN_00ddbdb0(param_1,param_1);
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      *param_4 = (float)((int)*param_4 + 1);
      local_44 = (float)fVar3;
      param_1[2] = local_44;
      FUN_00ddbdb0(param_1,param_1);
    }
  }
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    param_1[1] = param_1[1] * -1.0;
    param_1[2] = param_1[2] * -1.0;
  }
  return;
}

// 00E28B70  FUN_00e28b70  size=999  [between]
void FUN_00e28b70(undefined4 param_1,int param_2,int *param_3,float *param_4,byte *param_5)

{
  short *psVar1;
  ushort uVar2;
  float10 fVar3;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  if ((*param_5 & 1) != 0) {
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
      local_60 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      local_60 = (float)fVar3;
      *param_4 = (float)((int)*param_4 + 1);
      local_68 = local_60;
    }
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
      local_5c = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      local_5c = (float)fVar3;
      *param_4 = (float)((int)*param_4 + 1);
      local_68 = local_5c;
    }
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
      local_58 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      *param_4 = (float)((int)*param_4 + 1);
      local_58 = (float)fVar3;
      local_68 = local_58;
    }
    FUN_00ddbdb0(&local_60,&local_60);
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      local_5c = local_5c * -1.0;
      local_58 = local_58 * -1.0;
    }
    FUN_00ddb590(param_1,&local_60);
    return;
  }
  uVar2 = *(ushort *)(param_5 + 8);
  local_64 = (float)(uint)uVar2;
  local_68 = *param_4;
  local_58 = (float)CONCAT22(uVar2,uVar2);
  local_5c = (float)(int)local_64;
  psVar1 = (short *)(*param_3 + (int)local_68 * 0xc);
  local_60 = 1.4013e-45;
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
    local_50 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,&local_68,&local_60);
    local_50 = (float)fVar3;
    local_68 = (float)((int)local_68 + 1);
    local_64 = local_50;
  }
  psVar1 = (short *)(*param_3 + (int)local_68 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
    fStack_4c = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,&local_68,&local_60);
    fStack_4c = (float)fVar3;
    local_68 = (float)((int)local_68 + 1);
    local_64 = fStack_4c;
  }
  psVar1 = (short *)(*param_3 + (int)local_68 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
    fStack_48 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,&local_68,&local_60);
    local_68 = (float)((int)local_68 + 1);
    fStack_48 = (float)fVar3;
    local_64 = fStack_48;
  }
  FUN_00ddbdb0(&local_50,&local_50);
  uVar2 = *(ushort *)(param_5 + 10);
  local_64 = (float)(uint)uVar2;
  local_58 = (float)CONCAT22(uVar2,uVar2);
  local_5c = (float)(int)local_64;
  local_60 = (float)((uint)local_60 | 3);
  psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
    fStack_40 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,&local_60);
    *param_4 = (float)((int)*param_4 + 1);
    fStack_40 = (float)fVar3;
    local_64 = fStack_40;
  }
  psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
    fStack_3c = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,&local_60);
    *param_4 = (float)((int)*param_4 + 1);
    fStack_3c = (float)fVar3;
    local_64 = fStack_3c;
  }
  psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
    fStack_38 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,&local_60);
    *param_4 = (float)((int)*param_4 + 1);
    fStack_38 = (float)fVar3;
    local_64 = fStack_38;
  }
  FUN_00ddbdb0(&fStack_40,&fStack_40);
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    fStack_4c = fStack_4c * -1.0;
    fStack_48 = fStack_48 * -1.0;
    fStack_3c = fStack_3c * -1.0;
    fStack_38 = fStack_38 * -1.0;
  }
  FUN_00ddb590(auStack_20,&local_50);
  FUN_00ddb590(auStack_30,&fStack_40);
  local_64 = *(float *)(param_5 + 4) - (float)*(ushort *)(param_5 + 8);
  D3DXQuaternionSlerp(param_1,auStack_20,auStack_30,local_64);
  return;
}

// 00E28F60  FUN_00e28f60  size=999  [between]
void FUN_00e28f60(undefined4 param_1,int param_2,int *param_3,float *param_4,byte *param_5)

{
  short *psVar1;
  ushort uVar2;
  float10 fVar3;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  if ((*param_5 & 1) != 0) {
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
      local_60 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      local_60 = (float)fVar3;
      *param_4 = (float)((int)*param_4 + 1);
      local_68 = local_60;
    }
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
      local_5c = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      local_5c = (float)fVar3;
      *param_4 = (float)((int)*param_4 + 1);
      local_68 = local_5c;
    }
    psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
    if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
      local_58 = 0.0;
    }
    else {
      fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                                 (param_3,param_4,param_5);
      *param_4 = (float)((int)*param_4 + 1);
      local_58 = (float)fVar3;
      local_68 = local_58;
    }
    FUN_00ddbdb0(&local_60,&local_60);
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      local_5c = local_5c * -1.0;
      local_58 = local_58 * -1.0;
    }
    FUN_00ddb590(param_1,&local_60);
    return;
  }
  uVar2 = *(ushort *)(param_5 + 8);
  local_64 = (float)(uint)uVar2;
  local_68 = *param_4;
  local_58 = (float)CONCAT22(uVar2,uVar2);
  local_5c = (float)(int)local_64;
  psVar1 = (short *)(*param_3 + (int)local_68 * 0xc);
  local_60 = 1.4013e-45;
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
    local_50 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                               (param_3,&local_68,&local_60);
    local_50 = (float)fVar3;
    local_68 = (float)((int)local_68 + 1);
    local_64 = local_50;
  }
  psVar1 = (short *)(*param_3 + (int)local_68 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
    fStack_4c = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                               (param_3,&local_68,&local_60);
    fStack_4c = (float)fVar3;
    local_68 = (float)((int)local_68 + 1);
    local_64 = fStack_4c;
  }
  psVar1 = (short *)(*param_3 + (int)local_68 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
    fStack_48 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                               (param_3,&local_68,&local_60);
    local_68 = (float)((int)local_68 + 1);
    fStack_48 = (float)fVar3;
    local_64 = fStack_48;
  }
  FUN_00ddbdb0(&local_50,&local_50);
  uVar2 = *(ushort *)(param_5 + 10);
  local_64 = (float)(uint)uVar2;
  local_58 = (float)CONCAT22(uVar2,uVar2);
  local_5c = (float)(int)local_64;
  local_60 = (float)((uint)local_60 | 3);
  psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
    fStack_40 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,&local_60);
    *param_4 = (float)((int)*param_4 + 1);
    fStack_40 = (float)fVar3;
    local_64 = fStack_40;
  }
  psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
    fStack_3c = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,&local_60);
    *param_4 = (float)((int)*param_4 + 1);
    fStack_3c = (float)fVar3;
    local_64 = fStack_3c;
  }
  psVar1 = (short *)(*param_3 + (int)*param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
    fStack_38 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)((int)psVar1 + 3)])
                               (param_3,param_4,&local_60);
    *param_4 = (float)((int)*param_4 + 1);
    fStack_38 = (float)fVar3;
    local_64 = fStack_38;
  }
  FUN_00ddbdb0(&fStack_40,&fStack_40);
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    fStack_4c = fStack_4c * -1.0;
    fStack_48 = fStack_48 * -1.0;
    fStack_3c = fStack_3c * -1.0;
    fStack_38 = fStack_38 * -1.0;
  }
  FUN_00ddb590(auStack_20,&local_50);
  FUN_00ddb590(auStack_30,&fStack_40);
  local_64 = *(float *)(param_5 + 4) - (float)*(ushort *)(param_5 + 8);
  D3DXQuaternionSlerp(param_1,auStack_20,auStack_30,local_64);
  return;
}

// 00E29510  FUN_00e29510  size=229  [between]
void FUN_00e29510(float *param_1,int param_2,int *param_3,int *param_4)

{
  short *psVar1;
  float fVar2;
  float10 fVar3;
  
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\0')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf978)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  *param_1 = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x01')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf978)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[1] = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x02')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf978)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[2] = fVar2;
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    *param_1 = *param_1 * -1.0;
  }
  return;
}

// 00E29600  FUN_00e29600  size=248  [between]
void FUN_00e29600(float *param_1,int param_2,int *param_3,int *param_4)

{
  short *psVar1;
  float fVar2;
  float10 fVar3;
  
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf978)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  *param_1 = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf978)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[1] = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf978)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[2] = fVar2;
  FUN_00ddbdb0(param_1,param_1);
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    param_1[1] = param_1[1] * -1.0;
    param_1[2] = param_1[2] * -1.0;
  }
  return;
}

// 00E297E0  FUN_00e297e0  size=229  [between]
void FUN_00e297e0(float *param_1,int param_2,int *param_3,int *param_4)

{
  short *psVar1;
  float fVar2;
  float10 fVar3;
  
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\0')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9f0)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  *param_1 = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x01')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9f0)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[1] = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x02')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9f0)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[2] = fVar2;
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    *param_1 = *param_1 * -1.0;
  }
  return;
}

// 00E298D0  FUN_00e298d0  size=248  [between]
void FUN_00e298d0(float *param_1,int param_2,int *param_3,int *param_4)

{
  short *psVar1;
  float fVar2;
  float10 fVar3;
  
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x03')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9f0)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  *param_1 = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x04')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9f0)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[1] = fVar2;
  psVar1 = (short *)(*param_3 + *param_4 * 0xc);
  if (((psVar1 == (short *)0x0) || (*psVar1 != param_2)) || ((char)psVar1[1] != '\x05')) {
    fVar2 = 0.0;
  }
  else {
    fVar3 = (float10)(*(code *)(&PTR_LAB_018cf9f0)[*(byte *)((int)psVar1 + 3)])(param_3,param_4);
    *param_4 = *param_4 + 1;
    fVar2 = (float)fVar3;
  }
  param_1[2] = fVar2;
  FUN_00ddbdb0(param_1,param_1);
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    param_1[1] = param_1[1] * -1.0;
    param_1[2] = param_1[2] * -1.0;
  }
  return;
}

// 00E29AB0  FUN_00e29ab0  size=358  [between]
void FUN_00e29ab0(float *param_1,int *param_2,int *param_3,byte *param_4)

{
  float fVar1;
  ushort uVar2;
  byte *pbVar3;
  float10 fVar4;
  float10 fVar5;
  uint local_c;
  float local_8;
  ushort local_4;
  ushort local_2;
  
  pbVar3 = param_4;
  if ((*param_4 & 1) != 0) {
    fVar4 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)(*param_2 + *param_3 * 0xc + 3)])
                               (param_2,param_3,param_4);
    *param_3 = *param_3 + 1;
    param_4 = (byte *)(float)fVar4;
    fVar4 = (float10)FUN_00ddba30(param_4);
    *param_1 = (float)fVar4;
    return;
  }
  local_4 = *(ushort *)(param_4 + 8);
  param_4 = (byte *)*param_3;
  local_8 = (float)local_4;
  local_c = 1;
  local_2 = local_4;
  fVar4 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)(*param_2 + (int)param_4 * 0xc + 3)])
                             (param_2,&param_4,&local_c);
  local_4 = *(ushort *)(pbVar3 + 10);
  param_4 = (byte *)((int)param_4 + 1);
  local_8 = (float)local_4;
  local_c = local_c | 3;
  local_2 = local_4;
  fVar5 = (float10)(*(code *)(&PTR_LAB_018cf9c8)[*(byte *)(*param_2 + 3 + *param_3 * 0xc)])
                             (param_2,param_3,&local_c);
  *param_3 = *param_3 + 1;
  uVar2 = *(ushort *)(pbVar3 + 8);
  fVar1 = *(float *)(pbVar3 + 4);
  fVar5 = (float10)FUN_00ddba30((float)fVar5 - (float)fVar4);
  fVar4 = (float10)FUN_00ddba30((float)(fVar5 * (float10)(fVar1 - (float)uVar2)) + (float)fVar4);
  fVar4 = (float10)FUN_00ddba30((float)fVar4);
  *param_1 = (float)fVar4;
  return;
}

// 00E29C20  FUN_00e29c20  size=358  [between]
void FUN_00e29c20(float *param_1,int *param_2,int *param_3,byte *param_4)

{
  float fVar1;
  ushort uVar2;
  byte *pbVar3;
  float10 fVar4;
  float10 fVar5;
  uint local_c;
  float local_8;
  ushort local_4;
  ushort local_2;
  
  pbVar3 = param_4;
  if ((*param_4 & 1) != 0) {
    fVar4 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)(*param_2 + *param_3 * 0xc + 3)])
                               (param_2,param_3,param_4);
    *param_3 = *param_3 + 1;
    param_4 = (byte *)(float)fVar4;
    fVar4 = (float10)FUN_00ddba30(param_4);
    *param_1 = (float)fVar4;
    return;
  }
  local_4 = *(ushort *)(param_4 + 8);
  param_4 = (byte *)*param_3;
  local_8 = (float)local_4;
  local_c = 1;
  local_2 = local_4;
  fVar4 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)(*param_2 + (int)param_4 * 0xc + 3)])
                             (param_2,&param_4,&local_c);
  local_4 = *(ushort *)(pbVar3 + 10);
  param_4 = (byte *)((int)param_4 + 1);
  local_8 = (float)local_4;
  local_c = local_c | 3;
  local_2 = local_4;
  fVar5 = (float10)(*(code *)(&PTR_LAB_018cf9a0)[*(byte *)(*param_2 + 3 + *param_3 * 0xc)])
                             (param_2,param_3,&local_c);
  *param_3 = *param_3 + 1;
  uVar2 = *(ushort *)(pbVar3 + 8);
  fVar1 = *(float *)(pbVar3 + 4);
  fVar5 = (float10)FUN_00ddba30((float)fVar5 - (float)fVar4);
  fVar4 = (float10)FUN_00ddba30((float)(fVar5 * (float10)(fVar1 - (float)uVar2)) + (float)fVar4);
  fVar4 = (float10)FUN_00ddba30((float)fVar4);
  *param_1 = (float)fVar4;
  return;
}

// 00E29E30  FUN_00e29e30  size=30  [between]
void __fastcall FUN_00e29e30(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x10),0);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// 00E29E50  Animation::MotReader  size=168  [class]
undefined4 __thiscall Animation::MotReader(int *param_1,int param_2)

{
  char cVar1;
  size_t _Size;
  void *_Dst;
  
  if (param_1[4] != 0) {
    FUN_00dd48d0(param_1[4],0);
    param_1[4] = 0;
  }
  *param_1 = param_2;
  if (param_2 == 0) {
    param_1[3] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
  else {
    param_1[3] = *(int *)(param_2 + 0xc) + param_2;
    param_1[5] = 0;
    _Size = *(int *)(param_2 + 0x10) * 4;
    _Dst = (void *)FUN_00dd29b0(_Size,0x20,0,0);
    param_1[4] = (int)_Dst;
    if (_Dst == (void *)0x0) {
      FUN_00dd5650(&DAT_016cd248);
      return 0;
    }
    _memset(_Dst,0,_Size);
    if ((*(uint *)(*param_1 + 4) < 0x20111109) ||
       (cVar1 = *(char *)(*param_1 + 0x15), cVar1 == '\0')) {
      *(undefined1 *)(param_1 + 1) = 0x3c;
    }
    else {
      *(char *)(param_1 + 1) = cVar1;
    }
  }
  param_1[6] = 0;
  param_1[2] = -1;
  return 1;
}

// 00E29F00  FUN_00e29f00  size=53  [between]
void __thiscall FUN_00e29f00(int param_1,undefined4 param_2)

{
  int extraout_ECX;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    param_2 = FUN_00e240f0(param_2);
    param_1 = extraout_ECX;
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_00e23900(param_1 + 0xc,param_1 + 0x18,param_2);
  return;
}

// 00E29F40  FUN_00e29f40  size=58  [between]
void __thiscall FUN_00e29f40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int extraout_ECX;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    param_2 = FUN_00e240f0(param_2);
    param_1 = extraout_ECX;
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_00e23960(param_1 + 0xc,param_1 + 0x18,param_2,param_3);
  return;
}

// 00E2A030  FUN_00e2a030  size=218  [between]
float10 FUN_00e2a030(int *param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  uint uVar5;
  
  fVar3 = 0.0;
  iVar1 = *param_1 + *param_2 * 0xc;
  puVar4 = (ushort *)(*(int *)(iVar1 + 8) + iVar1);
  uVar2 = *puVar4;
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)((float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
                     (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125);
  }
  uVar2 = puVar4[1];
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 != 0) {
    fVar3 = (float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
            (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125;
  }
  return (float10)((float)(byte)puVar4[2] * fVar3 + (float)param_1);
}

// 00E2A170  FUN_00e2a170  size=218  [between]
float10 FUN_00e2a170(int *param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  uint uVar5;
  
  fVar3 = 0.0;
  iVar1 = *param_1 + *param_2 * 0xc;
  puVar4 = (ushort *)(*(int *)(iVar1 + 8) + iVar1);
  uVar2 = *puVar4;
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)((float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
                     (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125);
  }
  uVar2 = puVar4[1];
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 != 0) {
    fVar3 = (float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
            (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125;
  }
  return (float10)((float)*(byte *)((int)puVar4 + 0xd) * fVar3 + (float)param_1);
}

// 00E2A250  FUN_00e2a250  size=218  [between]
float10 FUN_00e2a250(int *param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  uint uVar5;
  
  fVar3 = 0.0;
  iVar1 = *param_1 + *param_2 * 0xc;
  puVar4 = (ushort *)(*(int *)(iVar1 + 8) + iVar1);
  uVar2 = *puVar4;
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)((float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
                     (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125);
  }
  uVar2 = puVar4[1];
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 != 0) {
    fVar3 = (float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
            (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125;
  }
  return (float10)((float)*(byte *)((int)puVar4 + 0xd) * fVar3 + (float)param_1);
}

// 00E2A330  FUN_00e2a330  size=218  [between]
float10 FUN_00e2a330(int *param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  uint uVar5;
  
  fVar3 = 0.0;
  iVar1 = *param_1 + *param_2 * 0xc;
  puVar4 = (ushort *)(*(int *)(iVar1 + 8) + iVar1);
  uVar2 = *puVar4;
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)((float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
                     (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125);
  }
  uVar2 = puVar4[1];
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 != 0) {
    fVar3 = (float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
            (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125;
  }
  return (float10)((float)(byte)puVar4[7] * fVar3 + (float)param_1);
}

// 00E2A490  FUN_00e2a490  size=218  [between]
float10 FUN_00e2a490(int *param_1,int *param_2,byte *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *param_1 + *param_2 * 0xc;
  fVar2 = *(float *)(*(int *)(iVar1 + 8) + iVar1);
  iVar5 = *(int *)(iVar1 + 8) + iVar1;
  fVar3 = *(float *)(iVar5 + 4);
  uVar6 = (uint)*(ushort *)(param_3 + 10);
  if ((int)(*(ushort *)(iVar1 + 4) - 1) < (int)uVar6) {
    return (float10)((float)*(ushort *)(iVar5 + 6 + (uint)*(ushort *)(iVar1 + 4) * 2) * fVar3 +
                    fVar2);
  }
  fVar4 = fVar2 + fVar3 * (float)*(ushort *)(iVar5 + 8 + (uint)*(ushort *)(param_3 + 8) * 2);
  if ((*param_3 & 1) != 0) {
    return (float10)fVar4;
  }
  return (float10)(((float)uVar6 - *(float *)(param_3 + 4)) * fVar4 +
                  (1.0 - ((float)uVar6 - *(float *)(param_3 + 4))) *
                  ((float)*(ushort *)(iVar5 + 8 + uVar6 * 2) * fVar3 + fVar2));
}

// 00E2A570  FUN_00e2a570  size=367  [between]
float10 FUN_00e2a570(int *param_1,int *param_2,byte *param_3)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  ushort *puVar5;
  uint uVar6;
  
  fVar3 = 0.0;
  iVar1 = *param_1 + *param_2 * 0xc;
  puVar5 = (ushort *)(*(int *)(iVar1 + 8) + iVar1);
  uVar2 = *puVar5;
  uVar6 = uVar2 >> 9 & 0x3f;
  if ((short)uVar6 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)((float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar6] *
                     (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125);
  }
  uVar2 = puVar5[1];
  uVar6 = uVar2 >> 9 & 0x3f;
  if ((short)uVar6 != 0) {
    fVar3 = (float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar6] *
            (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125;
  }
  uVar6 = (uint)*(ushort *)(param_3 + 10);
  if ((int)uVar6 <= (int)(*(ushort *)(iVar1 + 4) - 1)) {
    fVar4 = (float)param_1 + fVar3 * (float)*(byte *)(*(ushort *)(param_3 + 8) + 4 + (int)puVar5);
    if ((*param_3 & 1) == 0) {
      return (float10)(((float)uVar6 - *(float *)(param_3 + 4)) * fVar4 +
                      (1.0 - ((float)uVar6 - *(float *)(param_3 + 4))) *
                      ((float)*(byte *)(uVar6 + 4 + (int)puVar5) * fVar3 + (float)param_1));
    }
    return (float10)fVar4;
  }
  return (float10)((float)*(byte *)(*(ushort *)(iVar1 + 4) + 3 + (int)puVar5) * fVar3 +
                  (float)param_1);
}

// 00E2B180  FUN_00e2b180  size=216  [between]
float10 FUN_00e2b180(int *param_1,int *param_2,byte *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *param_1 + *param_2 * 0xc;
  fVar2 = *(float *)(*(int *)(iVar1 + 8) + iVar1);
  iVar5 = *(int *)(iVar1 + 8) + iVar1;
  fVar3 = *(float *)(iVar5 + 4);
  uVar6 = (uint)*(ushort *)(param_3 + 10);
  if ((int)(*(ushort *)(iVar1 + 4) - 1) < (int)uVar6) {
    return (float10)((float)*(ushort *)(iVar5 + 6 + (uint)*(ushort *)(iVar1 + 4) * 2) * fVar3 +
                    fVar2);
  }
  fVar4 = fVar2 + fVar3 * (float)*(ushort *)(iVar5 + 8 + (uint)*(ushort *)(param_3 + 8) * 2);
  if ((*param_3 & 1) != 0) {
    return (float10)fVar4;
  }
  return (float10)(((float)uVar6 - *(float *)(param_3 + 4)) * fVar4 +
                  (1.0 - ((float)uVar6 - *(float *)(param_3 + 4))) *
                  (fVar3 * (float)*(ushort *)(iVar5 + 8 + uVar6 * 2) + fVar2));
}

// 00E2B260  FUN_00e2b260  size=365  [between]
float10 FUN_00e2b260(int *param_1,int *param_2,byte *param_3)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  ushort *puVar5;
  uint uVar6;
  
  fVar3 = 0.0;
  iVar1 = *param_1 + *param_2 * 0xc;
  puVar5 = (ushort *)(*(int *)(iVar1 + 8) + iVar1);
  uVar2 = *puVar5;
  uVar6 = uVar2 >> 9 & 0x3f;
  if ((short)uVar6 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)((float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar6] *
                     (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125);
  }
  uVar2 = puVar5[1];
  uVar6 = uVar2 >> 9 & 0x3f;
  if ((short)uVar6 != 0) {
    fVar3 = (float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar6] *
            (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125;
  }
  uVar6 = (uint)*(ushort *)(param_3 + 10);
  if ((int)uVar6 <= (int)(*(ushort *)(iVar1 + 4) - 1)) {
    fVar4 = (float)param_1 + fVar3 * (float)*(byte *)(*(ushort *)(param_3 + 8) + 4 + (int)puVar5);
    if ((*param_3 & 1) == 0) {
      return (float10)(((float)uVar6 - *(float *)(param_3 + 4)) * fVar4 +
                      (1.0 - ((float)uVar6 - *(float *)(param_3 + 4))) *
                      (fVar3 * (float)*(byte *)(uVar6 + 4 + (int)puVar5) + (float)param_1));
    }
    return (float10)fVar4;
  }
  return (float10)((float)*(byte *)(*(ushort *)(iVar1 + 4) + 3 + (int)puVar5) * fVar3 +
                  (float)param_1);
}

// 00E2B500  FUN_00e2b500  size=494  [between]
float10 FUN_00e2b500(int *param_1,int *param_2,uint *param_3)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  float10 fVar12;
  
  iVar9 = *param_1 + *param_2 * 0xc;
  fVar2 = *(float *)(*(int *)(iVar9 + 8) + iVar9);
  iVar7 = *(int *)(iVar9 + 8) + iVar9;
  uVar11 = (uint)*(ushort *)(iVar9 + 4);
  fVar3 = *(float *)(iVar7 + 4);
  uVar6 = param_3[2];
  uVar4 = *(ushort *)((int)param_3 + 10);
  puVar1 = (ushort *)(param_1[1] + *param_2 * 4);
  if (uVar4 < puVar1[1]) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  uVar8 = (uint)*puVar1;
  if (uVar8 < uVar11) {
    puVar10 = (ushort *)(iVar7 + 0x18 + uVar8 * 8);
    do {
      if (uVar4 <= *puVar10) {
        uVar5 = *param_3;
        if ((((uVar5 & 1) != 0) && (*puVar10 == (ushort)uVar6)) || (uVar8 == 0)) {
          if ((uVar5 & 2) == 0) {
            *puVar1 = (ushort)uVar8;
            puVar1[1] = *(ushort *)(iVar7 + 0x18 + uVar8 * 8);
          }
          return (float10)((float)puVar10[1] * fVar3 + fVar2);
        }
        iVar9 = uVar8 - 1;
        if ((uVar5 & 2) == 0) {
          *puVar1 = (ushort)iVar9;
          puVar1[1] = *(ushort *)(iVar7 + 0x18 + iVar9 * 8);
        }
        if (uVar11 <= uVar8) {
          return (float10)((float)*(ushort *)(iVar7 + 0x1a + iVar9 * 8) * fVar3 + fVar2);
        }
        fVar12 = (float10)FUN_00e24360((float)*(ushort *)(iVar7 + 0x18 + iVar9 * 8),
                                       fVar3 * (float)*(ushort *)(iVar7 + 0x1a + iVar9 * 8) + fVar2,
                                       (float)*(ushort *)(iVar7 + 0x1e + iVar9 * 8) *
                                       *(float *)(iVar7 + 0x14) + *(float *)(iVar7 + 0x10),
                                       (float)*(ushort *)(iVar7 + 0x18 + uVar8 * 8),
                                       fVar2 + fVar3 * (float)*(ushort *)(iVar7 + 0x1a + uVar8 * 8),
                                       (float)*(ushort *)(iVar7 + 0x1c + uVar8 * 8) *
                                       *(float *)(iVar7 + 0xc) + *(float *)(iVar7 + 8),param_3[1]);
        return fVar12;
      }
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 4;
    } while (uVar8 < uVar11);
  }
  return (float10)((float)*(ushort *)(iVar7 + 0x12 + uVar11 * 8) * fVar3 + fVar2);
}

// 00E2B990  FUN_00e2b990  size=729  [between]
float10 FUN_00e2b990(int *param_1,int *param_2,uint *param_3)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  
  piVar7 = param_1;
  iVar10 = *param_2;
  fVar5 = 0.0;
  iVar16 = *param_1;
  uVar12 = (uint)*(ushort *)(iVar16 + 4 + iVar10 * 0xc);
  puVar14 = (ushort *)(*(int *)(iVar16 + 8 + iVar10 * 0xc) + iVar16 + iVar10 * 0xc);
  uVar3 = *puVar14;
  uVar11 = uVar3 >> 9 & 0x3f;
  if ((short)uVar11 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)((float)(&DAT_01dd91a0)[(uint)(uVar3 >> 0xf) * 0x40 + uVar11] *
                     (float)(ushort)((uVar3 & 0x1ff) + 0x200) * 0.001953125);
  }
  uVar3 = puVar14[1];
  uVar11 = uVar3 >> 9 & 0x3f;
  if ((short)uVar11 != 0) {
    fVar5 = (float)(&DAT_01dd91a0)[(uint)(uVar3 >> 0xf) * 0x40 + uVar11] *
            (float)(ushort)((uVar3 & 0x1ff) + 0x200) * 0.001953125;
  }
  uVar11 = param_3[2];
  uVar3 = *(ushort *)((int)param_3 + 10);
  puVar1 = (ushort *)(piVar7[1] + iVar10 * 4);
  if ((uint)uVar3 < (uint)puVar1[1]) {
    puVar1[0] = 0;
    puVar1[1] = 0;
  }
  uVar15 = (uint)*puVar1;
  if (uVar15 < uVar12) {
    puVar13 = puVar14 + uVar15 * 2 + 6;
    uVar9 = (uint)puVar1[1];
    do {
      uVar8 = (byte)*puVar13 + uVar9;
      if ((int)(uint)uVar3 <= (int)uVar8) {
        uVar4 = *param_3;
        if ((((uVar4 & 1) != 0) && (uVar8 == (ushort)uVar11)) || (uVar15 == 0)) {
          if ((uVar4 & 2) == 0) {
            *puVar1 = (ushort)uVar15;
            puVar1[1] = (ushort)uVar9;
          }
          return (float10)((float)*(byte *)((int)puVar13 + 1) * fVar5 + (float)param_1);
        }
        iVar16 = uVar15 - 1;
        iVar10 = uVar9 - (byte)puVar14[uVar15 * 2 + 4];
        if ((uVar4 & 2) == 0) {
          *puVar1 = (ushort)iVar16;
          puVar1[1] = (ushort)iVar10;
        }
        if (uVar15 < uVar12) {
          fVar6 = (float)iVar10;
          if (iVar10 < 0) {
            fVar6 = fVar6 + 4.2949673e+09;
          }
          fVar6 = fVar6 + (float)(byte)puVar14[iVar16 * 2 + 6];
          fVar17 = (float10)FUN_00e24700(puVar14[3],param_3[1]);
          uVar3 = puVar14[uVar15 * 2 + 7];
          fVar18 = (float10)FUN_00e24700(puVar14[2]);
          fVar17 = (float10)FUN_00e24700(puVar14[5],(float)(byte)puVar14[uVar15 * 2 + 6] + fVar6,
                                         (float)*(byte *)((int)puVar14 + uVar15 * 4 + 0xd) * fVar5 +
                                         (float)param_1,
                                         (float)(fVar18 + (float10)(double)(fVar17 * (float10)(byte)
                                                  uVar3)));
          bVar2 = *(byte *)((int)puVar14 + iVar16 * 4 + 0xf);
          fVar18 = (float10)FUN_00e24700(puVar14[4]);
          fVar17 = (float10)FUN_00e24360(fVar6,(float)*(byte *)((int)puVar14 + iVar16 * 4 + 0xd) *
                                               fVar5 + (float)param_1,
                                         (float)(fVar18 + (float10)(double)(fVar17 * (float10)bVar2)
                                                ));
          return fVar17;
        }
        return (float10)((float)*(byte *)((int)puVar14 + iVar16 * 4 + 0xd) * fVar5 + (float)param_1)
        ;
      }
      uVar15 = uVar15 + 1;
      puVar13 = puVar13 + 2;
      uVar9 = uVar8;
    } while (uVar15 < uVar12);
  }
  return (float10)((float)*(byte *)((int)puVar14 + uVar12 * 4 + 9) * fVar5 + (float)param_1);
}

// 00E2BF80  FUN_00e2bf80  size=225  [between]
float10 FUN_00e2bf80(int *param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  uint uVar5;
  
  fVar3 = 0.0;
  iVar1 = *param_1 + *param_2 * 0xc;
  puVar4 = (ushort *)(*(int *)(iVar1 + 8) + iVar1);
  uVar2 = *puVar4;
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)((float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
                     (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125);
  }
  uVar2 = puVar4[1];
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 != 0) {
    fVar3 = (float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
            (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125;
  }
  return (float10)((float)*(byte *)(*(ushort *)(iVar1 + 4) + 3 + (int)puVar4) * fVar3 +
                  (float)param_1);
}

// 00E2C0E0  FUN_00e2c0e0  size=225  [between]
float10 FUN_00e2c0e0(int *param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  uint uVar5;
  
  fVar3 = 0.0;
  iVar1 = *param_1 + *param_2 * 0xc;
  puVar4 = (ushort *)(*(int *)(iVar1 + 8) + iVar1);
  uVar2 = *puVar4;
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)((float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
                     (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125);
  }
  uVar2 = puVar4[1];
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 != 0) {
    fVar3 = (float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
            (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125;
  }
  return (float10)((float)*(byte *)((int)puVar4 + (uint)*(ushort *)(iVar1 + 4) * 4 + 9) * fVar3 +
                  (float)param_1);
}

// 00E2C1D0  FUN_00e2c1d0  size=225  [between]
float10 FUN_00e2c1d0(int *param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  uint uVar5;
  
  fVar3 = 0.0;
  iVar1 = *param_1 + *param_2 * 0xc;
  puVar4 = (ushort *)(*(int *)(iVar1 + 8) + iVar1);
  uVar2 = *puVar4;
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)((float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
                     (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125);
  }
  uVar2 = puVar4[1];
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 != 0) {
    fVar3 = (float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
            (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125;
  }
  return (float10)((float)*(byte *)((int)puVar4 + (uint)*(ushort *)(iVar1 + 4) * 4 + 9) * fVar3 +
                  (float)param_1);
}

// 00E2C2C0  FUN_00e2c2c0  size=229  [between]
float10 FUN_00e2c2c0(int *param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  ushort *puVar4;
  uint uVar5;
  
  fVar3 = 0.0;
  iVar1 = *param_1 + *param_2 * 0xc;
  puVar4 = (ushort *)(*(int *)(iVar1 + 8) + iVar1);
  uVar2 = *puVar4;
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)((float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
                     (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125);
  }
  uVar2 = puVar4[1];
  uVar5 = uVar2 >> 9 & 0x3f;
  if ((short)uVar5 != 0) {
    fVar3 = (float)(&DAT_01dd91a0)[(uint)(uVar2 >> 0xf) * 0x40 + uVar5] *
            (float)(ushort)((uVar2 & 0x1ff) + 0x200) * 0.001953125;
  }
  return (float10)((float)*(byte *)((int)puVar4 + (uint)*(ushort *)(iVar1 + 4) * 5 + 9) * fVar3 +
                  (float)param_1);
}

// 00E2C3B0  FUN_00e2c3b0  size=46  [between]
void __thiscall
FUN_00e2c3b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = DAT_01dd9180;
  DAT_01dd9180 = param_1;
  return;
}

// 00E2C3E0  FUN_00e2c3e0  size=101  [between]
undefined4 __thiscall FUN_00e2c3e0(int *param_1,int param_2)

{
  if (param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return 1;
  }
  *param_1 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    FUN_00dd5650(&DAT_016cd27c);
    *param_1 = 0;
    return 1;
  }
  param_1[1] = *(int *)(param_2 + 8) + param_2;
  param_1[2] = *(int *)(param_2 + 0x10) + param_2;
  return 1;
}

// 00E2C450  FUN_00e2c450  size=100  [between]
float10 __thiscall FUN_00e2c450(int param_1,int param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
  
  uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 8) + param_2 * 8);
  iVar2 = *(int *)(param_1 + 8) + param_2 * 8;
  pfVar4 = (float *)(*(int *)(iVar2 + 4) + iVar2);
  uVar1 = 0;
  pfVar5 = pfVar4;
  if (uVar3 != 0) {
    do {
      if (param_3 <= *pfVar5) {
        if (uVar1 == 0) {
          return (float10)pfVar5[1];
        }
        iVar2 = uVar1 - 1;
        if (uVar1 < uVar3) {
          fVar6 = (float10)FUN_00e24360(pfVar4[iVar2 * 4],pfVar4[iVar2 * 4 + 1],
                                        pfVar4[iVar2 * 4 + 3],pfVar4[uVar1 * 4],
                                        pfVar4[uVar1 * 4 + 1],pfVar4[uVar1 * 4 + 2],param_3);
          return fVar6;
        }
        return (float10)pfVar4[iVar2 * 4 + 1];
      }
      uVar1 = uVar1 + 1;
      pfVar5 = pfVar5 + 4;
    } while (uVar1 < uVar3);
  }
  return (float10)pfVar4[uVar3 * 4 + -3];
}

// 00E2C4B4  FUN_00e2c4b4  size=67  [between]
void __fastcall FUN_00e2c4b4(int param_1)

{
  int in_EAX;
  int unaff_ESI;
  float10 in_ST0;
  
  FUN_00e24360(*(undefined4 *)(unaff_ESI + param_1 * 8),*(undefined4 *)(unaff_ESI + 4 + param_1 * 8)
               ,*(undefined4 *)(unaff_ESI + 0xc + param_1 * 8),
               *(undefined4 *)(unaff_ESI + in_EAX * 0x10),
               *(undefined4 *)(unaff_ESI + 4 + in_EAX * 0x10),
               *(undefined4 *)(unaff_ESI + 8 + in_EAX * 0x10),(float)in_ST0);
  return;
}

// 00E2C500  FUN_00e2c500  size=37  [between]
void FUN_00e2c500(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_00e2c3e0(0);
    return;
  }
  FUN_00e2c3e0(param_1);
  return;
}

// 00E2C540  FUN_00e2c540  size=102  [between]
float10 FUN_00e2c540(undefined4 *param_1)

{
  float fVar1;
  undefined1 *puVar2;
  float10 fVar3;
  
  puVar2 = (undefined1 *)*param_1;
  switch(*puVar2) {
  case 1:
    fVar3 = (float10)FUN_00e30d90();
    return fVar3;
  default:
    FUN_00dd5650(&DAT_016cd2a4);
    return (float10)0;
  case 3:
    fVar3 = (float10)FUN_00e24cd0();
    return fVar3;
  case 4:
    fVar1 = *(float *)(puVar2 + 4);
    *param_1 = puVar2 + 8;
    return (float10)fVar1;
  case 6:
    fVar3 = (float10)FUN_00e24e20();
    return fVar3;
  case 8:
    fVar3 = (float10)FUN_00e30de0();
    return fVar3;
  }
}

// 00E2C5D0  Animation::PostControl::Work::Work_2  size=7  [class]
void __fastcall Animation::PostControl::Work::Work_2(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 00E2C5E0  Animation::EaseControl::update  size=71  [class]
void __thiscall Animation::EaseControl::update(int param_1,undefined4 param_2)

{
  switch(*(undefined4 *)(param_1 + 0x19c)) {
  case 1:
  case 4:
    FUN_00dd5650(&DAT_016cd140);
    break;
  case 2:
    FUN_00e22f60(param_2);
    return;
  case 5:
    FUN_00e22fd0(param_2);
    return;
  }
  return;
}

// 00E2C640  Animation::FootIk2::vf0C  size=62  [class]
void __fastcall Animation::FootIk2::vf0C(int param_1)

{
  int extraout_EDX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00e25290();
    FUN_00e25290();
    if (*(int *)(extraout_EDX + 0x18c) != 0) {
      *(undefined4 *)(*(int *)(extraout_EDX + 0x184) + 0x54) = *(undefined4 *)(extraout_EDX + 0x188)
      ;
      *(undefined4 *)(extraout_EDX + 0x18c) = 0;
    }
  }
  return;
}

// 00E2C680  FUN_00e2c680  size=265  [between]
void __thiscall FUN_00e2c680(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  float local_2c;
  float local_28;
  undefined1 local_20 [4];
  float local_1c;
  
  iVar1 = FUN_00a12210(param_4);
  param_1[3] = iVar1;
  iVar1 = FUN_00a12210(param_3);
  param_1[2] = iVar1;
  local_2c = 0.0;
  iVar1 = *(int *)(iVar1 + 0xa8);
  param_1[1] = iVar1;
  *param_1 = *(int *)(iVar1 + 0xa8);
  for (iVar1 = param_1[3]; iVar1 != param_2; iVar1 = *(int *)(iVar1 + 0xa8)) {
    uVar2 = FUN_00a06de0((int)*(short *)(iVar1 + 0xa0));
    FUN_00a06e70(local_20,uVar2);
    local_2c = local_1c + local_2c;
  }
  local_28 = 0.0;
  for (iVar1 = *param_1; iVar1 != param_2; iVar1 = *(int *)(iVar1 + 0xa8)) {
    uVar2 = FUN_00a06de0((int)*(short *)(iVar1 + 0xa0));
    FUN_00a06e70(local_20,uVar2);
    local_28 = local_1c + local_28;
  }
  param_1[0x14] = (int)local_2c;
  param_1[0x16] = 0;
  param_1[0x15] = (int)local_28;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}

// 00E2C790  FUN_00e2c790  size=683  [between]
void __thiscall FUN_00e2c790(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  local_40 = 0.0;
  local_3c = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x50);
  local_38 = 0;
  local_50 = 0.0;
  local_4c = -*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x54) * 0.5;
  local_48 = 0.0;
  D3DXVec3TransformNormal(&local_40,&local_40,param_3);
  D3DXVec3TransformNormal(&fStack_5c,&fStack_5c,param_3);
  iVar2 = *(int *)(param_1 + 0xc);
  local_48 = *(float *)(iVar2 + 0x40);
  fStack_44 = *(float *)(iVar2 + 0x44);
  local_40 = *(float *)(iVar2 + 0x48);
  local_3c = *(float *)(iVar2 + 0x4c);
  fStack_58 = local_48 + fStack_58;
  fStack_54 = fStack_44 + fStack_54;
  local_50 = local_40 + local_50;
  local_4c = local_3c + local_4c;
  fStack_5c = local_3c + fStack_5c;
  FUN_009316f0((int *)(param_1 + 0x70),&fStack_58,&stack0xffffff98,param_2,
               (int)*(short *)(iVar2 + 0xa0));
  if ((*(int *)(param_1 + 0x70) != 0) && (*(float *)(param_1 + 0xa8) != *(float *)(param_1 + 0xa4)))
  {
    iVar2 = FUN_00a7c800();
    local_38 = *(undefined4 *)(iVar2 + 0x40);
    uStack_34 = *(undefined4 *)(iVar2 + 0x44);
    uStack_30 = *(undefined4 *)(iVar2 + 0x48);
    local_48 = 0.0;
    fStack_44 = 1.0;
    local_40 = 0.0;
    D3DXVec3TransformNormal(&local_48,&local_48,iVar2 + 0xb0);
    fVar1 = fStack_54 * (*(float *)(param_1 + 0x80) - fStack_44) +
            local_50 * (*(float *)(param_1 + 0x84) - local_40) +
            local_4c * (*(float *)(param_1 + 0x88) - local_3c);
    if ((fVar1 < *(float *)(param_1 + 0xa4)) || (*(float *)(param_1 + 0xa8) < fVar1)) {
      fVar3 = *(float *)(param_1 + 0xa4);
      if ((*(float *)(param_1 + 0xa4) <= fVar1) &&
         (fVar3 = *(float *)(param_1 + 0xa8), fVar1 <= *(float *)(param_1 + 0xa8))) {
        fVar3 = fVar1;
      }
      fVar1 = fVar1 - fVar3;
      *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) - fVar1 * fStack_54;
      *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) - fVar1 * local_50;
      *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) - fVar1 * local_4c;
      *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) - fVar1 * local_48;
      return;
    }
  }
  return;
}

// 00E2CA40  FUN_00e2ca40  size=750  [between]
void __thiscall FUN_00e2ca40(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float10 fVar6;
  float local_48;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar4 = *(int *)(param_1 + 8);
    fVar1 = *(float *)(iVar4 + 0x40);
    fVar2 = *(float *)(iVar4 + 0x44);
    fVar3 = *(float *)(iVar4 + 0x48);
    fVar5 = param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1];
    if (fVar5 != 0.0) {
      fVar5 = ((param_2[2] * param_3[2] + *param_2 * *param_3 + param_2[1] * param_3[1]) -
              (param_3[2] * fVar3 + fVar2 * param_3[1] + *param_3 * fVar1)) / fVar5;
      local_20 = fVar5 * *param_3 + fVar1;
      local_1c = fVar5 * param_3[1] + fVar2;
      local_18 = fVar5 * param_3[2] + fVar3;
    }
    fVar5 = param_3[2] * *(float *)(param_1 + 0x98) +
            *(float *)(param_1 + 0x90) * *param_3 + *(float *)(param_1 + 0x94) * param_3[1];
    if (fVar5 != 0.0) {
      fVar5 = ((*(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x98) +
               *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x90) +
               *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x94)) -
              (fVar3 * *(float *)(param_1 + 0x98) +
              *(float *)(param_1 + 0x90) * fVar1 + *(float *)(param_1 + 0x94) * fVar2)) / fVar5;
      local_30 = fVar5 * *param_3 + fVar1;
      local_2c = fVar5 * param_3[1] + fVar2;
      local_28 = fVar3 + fVar5 * param_3[2];
    }
    fVar6 = (float10)FUN_00fdef70();
    local_48 = (float)fVar6;
    if (param_3[2] * (local_28 - local_18) +
        (local_2c - local_1c) * param_3[1] + *param_3 * (local_30 - local_20) < 0.0) {
      local_48 = local_48 * -1.0;
    }
    if (((*(byte *)(param_1 + 100) & 1) != 0) &&
       (fVar1 = *(float *)(param_1 + 0x84) -
                (-*(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x94) +
                *(float *)(*(int *)(param_1 + 0xc) + 0x44)), local_48 < fVar1)) {
      local_48 = fVar1;
    }
    *(float *)(param_1 + 0x60) = local_48;
    *(float *)(param_1 + 0x5c) =
         (1.0 - *(float *)(param_1 + 0xa0)) * (local_48 - *(float *)(param_1 + 0x5c)) +
         *(float *)(param_1 + 0x5c);
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0x5c);
  return;
}

// 00E2CD30  FUN_00e2cd30  size=62  [between]
void __thiscall FUN_00e2cd30(int param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_20 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_1c = 0x3f800000;
  local_18 = 0;
  D3DXVec3TransformNormal(&local_20,&local_20,param_2 + 0xb0);
  return;
}

// 00E2CD70  Animation::HandIk::HandIk  size=60  [class]
void __fastcall Animation::HandIk::HandIk(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = vftable;
  param_1[3] = 0;
  param_1[0x20] = 0;
  param_1[0x35] = 0x3f800000;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  return;
}

// 00E2CDB0  Animation::PostControl::Work::Work  size=7  [class]
void __fastcall Animation::PostControl::Work::Work(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 00E2CDC0  Animation::EaseControl::update_2  size=77  [class]
void __thiscall Animation::EaseControl::update_2(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    switch(*(undefined4 *)(param_1 + 0xd0)) {
    case 1:
    case 4:
      FUN_00dd5650(&DAT_016cd140);
      break;
    case 2:
      FUN_00e22f60(param_2);
      return;
    case 5:
      FUN_00e22fd0(param_2);
      return;
    }
  }
  return;
}

// 00E2CE30  FUN_00e2ce30  size=323  [between]
void __thiscall FUN_00e2ce30(int *param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  float *pfStack_114;
  undefined1 *puStack_110;
  float *pfStack_10c;
  float *pfStack_108;
  undefined4 uStack_104;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined1 auStack_6c [64];
  uint uStack_2c;
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_fc;
  piVar2 = (int *)param_1[4];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)*param_1;
  }
  uStack_104 = param_3;
  pfStack_108 = &local_a0;
  pfStack_10c = &local_e0;
  puStack_110 = (undefined1 *)0xe2ce6e;
  iVar1 = (**(code **)(*piVar2 + 0x44))();
  if (iVar1 != 0) {
    puStack_110 = (undefined1 *)0x5;
    pfStack_114 = &fStack_fc;
    *param_2 = fStack_ec - fStack_ac;
    param_2[1] = fStack_e8 - fStack_a8;
    param_2[2] = fStack_e4 - fStack_a4;
    param_2[3] = local_e0 - local_a0;
    param_2[4] = fStack_dc - fStack_9c;
    param_2[5] = fStack_d8 - fStack_98;
    param_2[6] = fStack_d4 - fStack_94;
    param_2[7] = fStack_d0 - fStack_90;
    fStack_fc = fStack_9c * -1.0;
    fStack_f8 = fStack_98 * -1.0;
    fStack_f4 = fStack_94 * -1.0;
    fStack_f0 = fStack_90 * -1.0;
    FUN_00ddc1d0(auStack_6c);
    puStack_110 = auStack_6c;
    pfStack_114 = param_2;
    D3DXVec3TransformNormal(param_2);
    __security_check_cookie(uStack_2c ^ (uint)&pfStack_114);
    return;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  pfStack_10c = (float *)0xe2cf6d;
  __security_check_cookie(uStack_20 ^ (uint)&pfStack_108);
  return;
}

// 00E2CF80  FUN_00e2cf80  size=92  [between]
int FUN_00e2cf80(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar3 = (byte *)(param_1 + 0x20);
  pbVar5 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00e2cfb0:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00e2cfb5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00e2cfb0;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00e2cfb5:
  if (iVar4 != 0) {
    for (iVar4 = *(int *)(param_1 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
      iVar2 = FUN_00e2cf80(iVar4,param_2);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    param_1 = 0;
  }
  return param_1;
}

// 00E2CFE0  FUN_00e2cfe0  size=145  [between]
void FUN_00e2cfe0(void)

{
  FUN_00eaa6e0(0x41700000,0);
  FUN_00eaa6e0(0x41700000,0);
  FUN_00eaa840();
  FUN_00eaa840();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  return;
}

// 00E2D0E0  FUN_00e2d0e0  size=185  [between]
void __fastcall FUN_00e2d0e0(int param_1)

{
  if (*(int *)(param_1 + 0xac) == -0x54325433) {
    FUN_00eaa6e0(0x41700000,0);
  }
  else if (*(int *)(param_1 + 0xac) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 0x15c) == -0x54325433) {
    (**(code **)(*(int *)(param_1 + 0xc0) + 4))();
  }
  else if (*(int *)(param_1 + 0x15c) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 0x20c) == -0x54325433) {
    (**(code **)(*(int *)(param_1 + 0x170) + 4))();
  }
  else if (*(int *)(param_1 + 0x20c) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 0x430) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e2d195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x430) + 0xc))();
    return;
  }
  return;
}

// 00E2D1A0  FUN_00e2d1a0  size=188  [between]
void __fastcall FUN_00e2d1a0(int param_1)

{
  if (*(int *)(param_1 + 700) == -0x54325433) {
    FUN_00eaa6e0(0x41700000,0);
  }
  else if (*(int *)(param_1 + 700) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 0x36c) == -0x54325433) {
    (**(code **)(*(int *)(param_1 + 0x2d0) + 4))();
  }
  else if (*(int *)(param_1 + 0x36c) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 0x41c) == -0x54325433) {
    (**(code **)(*(int *)(param_1 + 0x380) + 4))();
  }
  else if (*(int *)(param_1 + 0x41c) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 0x430) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e2d258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x430) + 0x10))();
    return;
  }
  return;
}

// 00E2D260  FUN_00e2d260  size=313  [between]
void __fastcall FUN_00e2d260(int param_1)

{
  if (*(int *)(param_1 + 0xac) == -0x54325433) {
    (**(code **)(*(int *)(param_1 + 0x10) + 4))();
  }
  else if (*(int *)(param_1 + 0xac) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 0x15c) == -0x54325433) {
    (**(code **)(*(int *)(param_1 + 0xc0) + 4))();
  }
  else if (*(int *)(param_1 + 0x15c) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 0x20c) == -0x54325433) {
    (**(code **)(*(int *)(param_1 + 0x170) + 4))();
  }
  else if (*(int *)(param_1 + 0x20c) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 700) == -0x54325433) {
    (**(code **)(*(int *)(param_1 + 0x220) + 4))();
  }
  else if (*(int *)(param_1 + 700) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 0x36c) == -0x54325433) {
    (**(code **)(*(int *)(param_1 + 0x2d0) + 4))();
  }
  else if (*(int *)(param_1 + 0x36c) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 0x41c) == -0x54325433) {
    (**(code **)(*(int *)(param_1 + 0x380) + 4))();
  }
  else if (*(int *)(param_1 + 0x41c) != -0x21124111) {
    FUN_00dd5650(&DAT_0163eef4);
  }
  if (*(int *)(param_1 + 0x430) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e2d395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x430) + 0x14))();
    return;
  }
  return;
}

// 00E2D3C0  FUN_00e2d3c0  size=57  [between]
void __thiscall FUN_00e2d3c0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((*(int *)(param_1 + uVar1 * 4) == param_2) &&
       (*(undefined4 *)(param_1 + uVar1 * 4) = 0, param_2 != 0)) {
      FUN_00e2cfe0();
      FUN_00dd4920(param_2);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}

// 00E2D400  FUN_00e2d400  size=213  [between]
void __fastcall FUN_00e2d400(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + uVar2 * 4);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0xac) == -0x54325433) {
        FUN_00eaa6e0(0x41700000,0);
      }
      else if (*(int *)(iVar1 + 0xac) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 0x15c) == -0x54325433) {
        (**(code **)(*(int *)(iVar1 + 0xc0) + 4))();
      }
      else if (*(int *)(iVar1 + 0x15c) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 0x20c) == -0x54325433) {
        (**(code **)(*(int *)(iVar1 + 0x170) + 4))();
      }
      else if (*(int *)(iVar1 + 0x20c) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 0x430) != 0) {
        (**(code **)(**(int **)(iVar1 + 0x430) + 0xc))();
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

// 00E2D4E0  FUN_00e2d4e0  size=216  [between]
void __fastcall FUN_00e2d4e0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + uVar2 * 4);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 700) == -0x54325433) {
        FUN_00eaa6e0(0x41700000,0);
      }
      else if (*(int *)(iVar1 + 700) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 0x36c) == -0x54325433) {
        (**(code **)(*(int *)(iVar1 + 0x2d0) + 4))();
      }
      else if (*(int *)(iVar1 + 0x36c) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 0x41c) == -0x54325433) {
        (**(code **)(*(int *)(iVar1 + 0x380) + 4))();
      }
      else if (*(int *)(iVar1 + 0x41c) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 0x430) != 0) {
        (**(code **)(**(int **)(iVar1 + 0x430) + 0x10))();
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

// 00E2D5C0  FUN_00e2d5c0  size=341  [between]
void __fastcall FUN_00e2d5c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + uVar2 * 4);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0xac) == -0x54325433) {
        (**(code **)(*(int *)(iVar1 + 0x10) + 4))();
      }
      else if (*(int *)(iVar1 + 0xac) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 0x15c) == -0x54325433) {
        (**(code **)(*(int *)(iVar1 + 0xc0) + 4))();
      }
      else if (*(int *)(iVar1 + 0x15c) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 0x20c) == -0x54325433) {
        (**(code **)(*(int *)(iVar1 + 0x170) + 4))();
      }
      else if (*(int *)(iVar1 + 0x20c) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 700) == -0x54325433) {
        (**(code **)(*(int *)(iVar1 + 0x220) + 4))();
      }
      else if (*(int *)(iVar1 + 700) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 0x36c) == -0x54325433) {
        (**(code **)(*(int *)(iVar1 + 0x2d0) + 4))();
      }
      else if (*(int *)(iVar1 + 0x36c) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 0x41c) == -0x54325433) {
        (**(code **)(*(int *)(iVar1 + 0x380) + 4))();
      }
      else if (*(int *)(iVar1 + 0x41c) != -0x21124111) {
        FUN_00dd5650(&DAT_0163eef4);
      }
      if (*(int *)(iVar1 + 0x430) != 0) {
        (**(code **)(**(int **)(iVar1 + 0x430) + 0x14))();
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

// 00E2D720  FUN_00e2d720  size=46  [between]
void __fastcall FUN_00e2d720(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + uVar2 * 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x430) != 0)) {
      (**(code **)(**(int **)(iVar1 + 0x430) + 0x18))();
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}

// 00E2D750  Animation::EaseControl::update_3  size=88  [class]
void __thiscall Animation::EaseControl::update_3(undefined4 *param_1,undefined4 param_2)

{
  switch(*param_1) {
  case 0:
  case 3:
  case 6:
    param_1[4] = 0;
    break;
  case 2:
  case 5:
    param_1[4] = param_2;
  }
  switch(*param_1) {
  case 1:
  case 4:
    FUN_00dd5650(&DAT_016cd140);
    return;
  case 2:
    FUN_00e22f60(param_2);
    return;
  default:
    return;
  case 5:
    FUN_00e22fd0(param_2);
    return;
  }
}

// 00E2D7E0  FUN_00e2d7e0  size=112  [between]
float10 __thiscall FUN_00e2d7e0(int param_1,float param_2)

{
  float10 fVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 100) & 0x100000) != 0) {
    fVar1 = (float10)FUN_00fddce0((double)(param_2 * 60.0 * 512.0 + 0.5));
    fVar1 = (float10)FUN_00fddce0((double)((float)fVar1 * 0.001953125));
    return (float10)(float)fVar1;
  }
  return (float10)(param_2 * 60.0);
}

// 00E2D850  FUN_00e2d850  size=112  [between]
float10 __thiscall FUN_00e2d850(int param_1,float param_2)

{
  float10 fVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 0x10) + 100) & 0x100000) != 0) {
    fVar1 = (float10)FUN_00fddce0((double)(param_2 * 60.0 * 512.0 + 0.5));
    fVar1 = (float10)FUN_00fddce0((double)((float)fVar1 * 0.001953125));
    return (float10)(float)fVar1;
  }
  return (float10)(param_2 * 60.0);
}

// 00E2D8E0  FUN_00e2d8e0  size=294  [between]
float10 __thiscall FUN_00e2d8e0(int param_1,float param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)0;
  if (fVar4 != (float10)param_2) {
    fVar4 = (float10)FUN_00fddce0((double)((float)((float10)param_2 + (float10)param_3) * 30720.0 +
                                          0.5));
    fVar3 = ((float)fVar4 * 0.001953125) / 60.0;
    fVar5 = (float10)0;
    fVar4 = (float10)param_2;
    fVar2 = (float10)0;
    if (fVar4 <= fVar5) {
      fVar1 = (float)ABS((float10)fVar3);
      if (fVar1 < 0.001 == (fVar1 == 0.001)) {
        fVar5 = (float10)fVar3 - fVar2;
      }
    }
    else {
      fVar1 = ABS(*(float *)(param_1 + 0x1c) - fVar3);
      if (fVar1 < 0.001 == (fVar1 == 0.001)) {
        fVar5 = (float10)fVar3 + fVar2;
      }
      else {
        fVar5 = (float10)*(float *)(param_1 + 0x1c) + fVar2;
      }
    }
    if (fVar2 < (float10)((float)fVar5 - param_3) * fVar4) {
      return (float10)((float)fVar5 - param_3);
    }
  }
  return fVar4;
}

// 00E2DAA0  Animation::AttackTrack::update  size=281  [class]
void __thiscall Animation::AttackTrack::update(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return;
  }
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar7 = *(uint *)(param_2 + 0x18);
  iVar8 = *(int *)(param_1 + 0xc);
  puVar12 = *(uint **)(param_1 + 4);
  param_2 = 0;
  if (0 < iVar8) {
    piVar10 = (int *)(param_1 + 0x18);
    do {
      if ((int)uVar11 < 0x40) {
        if ((((puVar12[3] & 0x8000) == 0) && ((*puVar12 & uVar7) != 0)) &&
           (iVar9 = FUN_00e25f70(puVar12[1],uVar2,uVar3,uVar4,uVar5,uVar6), iVar9 != 0)) {
          if (7 < param_2) break;
          param_2 = param_2 + 1;
          puVar1 = (uint *)(param_1 + 0x3c + (uVar11 >> 5) * 4);
          *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
          *(short *)(puVar12 + 6) = (short)uVar11;
          *piVar10 = (int)(puVar12 + 4);
          piVar10 = piVar10 + 1;
        }
      }
      else {
        FUN_00dd5650(&DAT_016cd2e8);
      }
      uVar11 = uVar11 + 1;
      puVar12 = puVar12 + 0x10;
    } while ((int)uVar11 < iVar8);
  }
  *(int *)(param_1 + 0x38) = param_2;
  return;
}

// 00E2DBC0  Animation::AttackTrack::update_2  size=242  [class]
int __thiscall
Animation::AttackTrack::update_2(int param_1,int param_2,int param_3,float param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  uVar5 = 0;
  puVar6 = *(uint **)(param_1 + 4);
  if (0 < iVar1) {
    do {
      if ((int)uVar5 < 0x40) {
        if (((((*(uint *)(param_1 + 0x3c + (uVar5 >> 5) * 4) & 0x80000000U >> ((byte)uVar5 & 0x1f))
               == 0) && ((puVar6[3] & 0x8000) == 0)) && ((*puVar6 & param_5) != 0)) &&
           ((((float)puVar6[2] != (float)puVar6[1] && ((float)puVar6[1] <= param_4)) &&
            ((float)puVar6[2] < param_4 == ((float)puVar6[2] == param_4))))) {
          if (param_3 <= iVar4) break;
          *(short *)(puVar6 + 6) = (short)uVar5;
          *(uint **)(param_2 + iVar4 * 4) = puVar6 + 4;
          iVar4 = iVar4 + 1;
        }
      }
      else {
        FUN_00dd5650(&DAT_016cd2e8);
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x10;
    } while ((int)uVar5 < iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = 0;
  if (0 < iVar1) {
    puVar3 = (undefined4 *)(param_1 + 0x18);
    do {
      if (param_3 <= iVar4) {
        return iVar4;
      }
      *(undefined4 *)(param_2 + iVar4 * 4) = *puVar3;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return iVar4;
}

// 00E2DCC0  FUN_00e2dcc0  size=187  [between]
void __thiscall FUN_00e2dcc0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int extraout_ECX;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar8 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(uint *)(param_2 + 0x18);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    param_2 = *(int *)(param_1 + 0xc);
    uVar9 = 0;
    puVar7 = *(uint **)(param_1 + 4);
    if (0 < param_2) {
      do {
        *(undefined1 *)((int)puVar7 + 0xe) = 0;
        if ((((puVar7[3] & 0x8000) == 0) && ((*puVar7 & uVar4) != 0)) && ((puVar7[3] & 1) != 0)) {
          uVar10 = FUN_00e25f70(puVar7[1],uVar1,uVar2,uVar5,uVar3,uVar6);
          puVar7 = (uint *)((ulonglong)uVar10 >> 0x20);
          param_1 = extraout_ECX;
          if ((int)uVar10 != 0) {
            uVar8 = uVar8 | puVar7[4];
            uVar9 = uVar9 | puVar7[5];
            *(undefined1 *)((int)puVar7 + 0xe) = 1;
          }
        }
        puVar7 = puVar7 + 8;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    *(uint *)(param_1 + 0x1c) = uVar9;
    *(uint *)(param_1 + 0x18) = uVar8;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 00E2DD80  FUN_00e2dd80  size=325  [between]
uint __thiscall FUN_00e2dd80(int param_1,int param_2,float param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar2 = *(uint **)(param_1 + 4);
    iVar6 = *(int *)(param_1 + 0xc);
    uVar5 = 0;
    iVar1 = 0;
    if (3 < iVar6) {
      iVar4 = (iVar6 - 4U >> 2) + 1;
      iVar1 = iVar4 * 4;
      do {
        if (((((puVar2[3] & 1) == 0) && ((*puVar2 & param_4) != 0)) && ((float)puVar2[1] <= param_3)
            ) && ((float)puVar2[2] < param_3 == ((float)puVar2[2] == param_3))) {
          uVar5 = uVar5 | puVar2[param_2 + 4];
        }
        if ((((puVar2[0xb] & 1) == 0) && ((puVar2[8] & param_4) != 0)) &&
           (((float)puVar2[9] <= param_3 &&
            ((float)puVar2[10] < param_3 == ((float)puVar2[10] == param_3))))) {
          uVar5 = uVar5 | puVar2[param_2 + 0xc];
        }
        if ((((puVar2[0x13] & 1) == 0) && ((puVar2[0x10] & param_4) != 0)) &&
           (((float)puVar2[0x11] <= param_3 &&
            ((float)puVar2[0x12] < param_3 == ((float)puVar2[0x12] == param_3))))) {
          uVar5 = uVar5 | puVar2[param_2 + 0x14];
        }
        if (((((puVar2[0x1b] & 1) == 0) && ((puVar2[0x18] & param_4) != 0)) &&
            ((float)puVar2[0x19] <= param_3)) &&
           ((float)puVar2[0x1a] < param_3 == ((float)puVar2[0x1a] == param_3))) {
          uVar5 = uVar5 | puVar2[param_2 + 0x1c];
        }
        puVar2 = puVar2 + 0x20;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (iVar1 < iVar6) {
      pfVar3 = (float *)(puVar2 + 1);
      iVar6 = iVar6 - iVar1;
      do {
        if (((((uint)pfVar3[2] & 1) == 0) && (((uint)pfVar3[-1] & param_4) != 0)) &&
           ((*pfVar3 <= param_3 && (pfVar3[1] < param_3 == (pfVar3[1] == param_3))))) {
          uVar5 = uVar5 | (uint)pfVar3[param_2 + 3];
        }
        pfVar3 = pfVar3 + 8;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    return *(uint *)(param_1 + 0x18 + param_2 * 4) | uVar5;
  }
  return 0;
}

// 00E2DED0  FUN_00e2ded0  size=195  [between]
int __thiscall
FUN_00e2ded0(int param_1,int param_2,int param_3,int param_4,float param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  iVar2 = param_3;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  puVar6 = *(uint **)(param_1 + 4);
  param_3 = 0;
  if (0 < iVar1) {
    do {
      if ((*puVar6 & param_6) != 0) {
        if ((puVar6[3] & 1) == 0) {
          if (((float)puVar6[1] <= param_5) &&
             ((float)puVar6[2] < param_5 == ((float)puVar6[2] == param_5))) goto LAB_00e2df41;
        }
        else if (*(char *)((int)puVar6 + 0xe) != '\0') {
LAB_00e2df41:
          if (param_4 < 0) {
            iVar4 = 0;
            puVar3 = puVar6 + 6;
            do {
              *(short *)(param_2 + iVar5 * 2) = (short)*puVar3;
              iVar5 = iVar5 + 1;
              if (iVar5 == iVar2) {
                return iVar5;
              }
              iVar4 = iVar4 + 1;
              puVar3 = (uint *)((int)puVar3 + 2);
            } while (iVar4 < 4);
          }
          else {
            *(undefined2 *)(param_2 + iVar5 * 2) = *(undefined2 *)((int)puVar6 + param_4 * 2 + 0x18)
            ;
            iVar5 = iVar5 + 1;
            if (iVar5 == iVar2) {
              return iVar5;
            }
          }
        }
      }
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 8;
    } while (param_3 < iVar1);
  }
  return iVar5;
}

// 00E2DFA0  FUN_00e2dfa0  size=108  [between]
void FUN_00e2dfa0(int param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  piVar5 = (int *)(param_1 + 0x10);
  do {
    cVar2 = *(char *)(param_1 + 10 + iVar4);
    if (cVar2 == '\x01') {
      iVar3 = *piVar5;
      if (((-1 < iVar3) && (iVar3 < *(short *)(param_2 + 0x324))) &&
         (iVar3 = iVar3 * 0x70 + *(int *)(param_2 + 800), iVar3 != 0)) {
        puVar1 = (uint *)(iVar3 + 0x38);
        *puVar1 = *puVar1 | 1;
      }
    }
    else if (((cVar2 == '\x02') && (iVar3 = *piVar5, -1 < iVar3)) &&
            ((iVar3 < *(short *)(param_2 + 0x324) &&
             (iVar3 = iVar3 * 0x70 + *(int *)(param_2 + 800), iVar3 != 0)))) {
      puVar1 = (uint *)(iVar3 + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 4);
  return;
}

// 00E2E010  FUN_00e2e010  size=168  [between]
void __thiscall FUN_00e2e010(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = param_2[1];
    uVar3 = *param_2;
    uVar2 = param_2[2];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    puVar9 = *(uint **)(param_1 + 4);
    uVar6 = param_2[3];
    uVar7 = param_2[6];
    param_2 = *(undefined4 **)(param_1 + 0xc);
    if (0 < (int)param_2) {
      do {
        if ((((puVar9[2] & 0x8000) == 0) && ((*puVar9 & uVar7) != 0)) &&
           (iVar8 = FUN_00e25f70(puVar9[1],uVar1,uVar2,uVar6,uVar4,uVar5), iVar8 != 0)) {
          FUN_00932f40(uVar3,puVar9 + 3);
        }
        puVar9 = puVar9 + 0x11;
        param_2 = (undefined4 *)((int)param_2 + -1);
      } while (param_2 != (undefined4 *)0x0);
    }
  }
  return;
}

// 00E2E0F0  FUN_00e2e0f0  size=99  [between]
undefined4 __thiscall FUN_00e2e0f0(int param_1,uint *param_2,float param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  puVar1 = *(uint **)(param_1 + 4);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      if ((((*puVar1 & param_4) != 0) && ((float)puVar1[1] <= param_3)) &&
         ((float)puVar1[2] < param_3 == ((float)puVar1[2] == param_3))) {
        *param_2 = puVar1[4];
        return 1;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 5;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return 0;
}

// 00E2E1C0  FUN_00e2e1c0  size=255  [between]
void __thiscall FUN_00e2e1c0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int local_18;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    fVar1 = (float)param_2[1];
    uVar3 = *param_2;
    uVar4 = param_2[5];
    fVar2 = (float)param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[6];
    if (fVar2 != fVar1) {
      local_18 = *(int *)(param_1 + 0xc);
      puVar9 = *(uint **)(param_1 + 4);
      if (0 < local_18) {
        do {
          if ((((puVar9[2] & 0x8000) == 0) && ((*puVar9 & uVar7) != 0)) &&
             (iVar8 = FUN_00e260c0(puVar9[1],
                                   (float)puVar9[1] +
                                   (float)(int)*(short *)((int)puVar9 + 10) / 60.0,fVar1,fVar2,uVar5
                                   ,uVar6,uVar4), iVar8 != 0)) {
            FUN_00e263a0(puVar9,uVar3,fVar1);
          }
          puVar9 = puVar9 + 7;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
    }
  }
  return;
}

// 00E2E390  Animation::Motion::Node::vf08  size=70  [class]
void __thiscall Animation::Motion::Node::vf08(int param_1,float param_2,undefined4 param_3)

{
  int *piVar1;
  float10 fVar2;
  
  if ((*(uint *)(param_1 + 100) & 0x800000) != 0) {
    fVar2 = (float10)FUN_009313f0();
    param_2 = (float)fVar2;
  }
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 8))(param_2,param_3);
  }
  return;
}

// 00E2E3E0  Animation::Motion::Node::vf0C  size=39  [class]
undefined4 __fastcall Animation::Motion::Node::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 == 0) break;
    piVar1 = (int *)piVar1[5];
  }
  return 0;
}

// 00E2E410  Animation::Motion::Node::vf14  size=58  [class]
void __thiscall Animation::Motion::Node::vf14(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & ~param_2;
  }
  else {
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | param_2;
  }
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x14))(param_2,param_3);
  }
  return;
}

// 00E2E450  Animation::Motion::Node::vf18  size=133  [class]
void __thiscall Animation::Motion::Node::vf18(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x18))(param_2,param_3);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_00e2d0e0();
    iVar2 = *(int *)(param_1 + 0x84);
    iVar3 = *(int *)(param_1 + 0x80);
    uVar4 = 0;
    do {
      if ((*(int *)(iVar3 + uVar4 * 4) == iVar2) &&
         (*(undefined4 *)(iVar3 + uVar4 * 4) = 0, iVar2 != 0)) {
        FUN_00e2cfe0();
        FUN_00dd4920(iVar2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 1;
  return;
}

// 00E2E4E0  FUN_00e2e4e0  size=81  [between]
void __thiscall FUN_00e2e4e0(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  if ((param_1[0x19] & param_4) == param_4) {
    (**(code **)(*param_1 + 0x18))(param_2,param_3);
    return;
  }
  for (iVar1 = param_1[2]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    FUN_00e2e4e0(param_2,param_3,param_4);
  }
  return;
}

// 00E2E540  FUN_00e2e540  size=78  [between]
void __thiscall FUN_00e2e540(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (((param_1[0x19] & 0x40010U) != 0) && ((param_1[0x19] & 0x20U) != 0)) {
    (**(code **)(*param_1 + 0x18))(param_2,param_3);
    return;
  }
  for (iVar1 = param_1[2]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    FUN_00e2e540(param_2,param_3);
  }
  return;
}

// 00E2E590  Animation::Motion::Node::vf1C  size=38  [class]
void __thiscall Animation::Motion::Node::vf1C(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x1c))(param_2);
  }
  return;
}

// 00E2E5C0  Animation::Motion::Node::vf20  size=39  [class]
undefined4 __fastcall Animation::Motion::Node::vf20(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    iVar2 = (**(code **)(*piVar1 + 0x20))();
    if (iVar2 == 0) break;
    piVar1 = (int *)piVar1[5];
  }
  return 0;
}

// 00E2E5F0  Animation::Motion::Node::vf24  size=42  [class]
void __thiscall Animation::Motion::Node::vf24(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x24))(param_2,param_3);
  }
  return;
}

// 00E2E620  Animation::Motion::Node::vf28  size=42  [class]
void __thiscall Animation::Motion::Node::vf28(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x28))(param_2,param_3);
  }
  return;
}

// 00E2E650  Animation::Motion::Node::vf60  size=53  [class]
void __fastcall Animation::Motion::Node::vf60(int param_1)

{
  int *piVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    fVar2 = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x70);
  }
  else {
    fVar2 = *(float *)(*(int *)(param_1 + 4) + 0x78) * *(float *)(param_1 + 0x70) *
            *(float *)(param_1 + 0x74);
  }
  *(float *)(param_1 + 0x78) = fVar2;
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x60))();
  }
  return;
}

// 00E2E690  Animation::Motion::Node::vf40  size=212  [class]
void __thiscall Animation::Motion::Node::vf40(int param_1,float *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  piVar1 = *(int **)(param_1 + 8);
  local_10 = 0.0;
  local_14 = 0.0;
  iVar2 = 0;
  local_c = 0.0;
  if (piVar1 != (int *)0x0) {
    do {
      (**(code **)(*piVar1 + 0x40))(&local_8,&local_4);
      piVar1 = (int *)piVar1[5];
      iVar2 = iVar2 + 1;
      local_10 = local_10 + local_4 * local_8;
      local_14 = local_4 + local_14;
      local_c = local_8 + local_c;
    } while (piVar1 != (int *)0x0);
    if (1.1920929e-07 < local_14) {
      *param_2 = local_10 / local_14;
      *param_3 = local_14;
      return;
    }
    if (iVar2 != 0) {
      *param_2 = local_c / (float)iVar2;
      *param_3 = 0.0;
      return;
    }
  }
  *param_2 = 0.0;
  *param_3 = 0.0;
  return;
}

// 00E2E770  Animation::Motion::Node::vf64  size=50  [class]
void __fastcall Animation::Motion::Node::vf64(int param_1)

{
  float fVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    fVar1 = *(float *)(param_1 + 0x68);
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 4) + 0x6c) * *(float *)(param_1 + 0x68);
  }
  *(float *)(param_1 + 0x6c) = fVar1;
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[5]) {
    (**(code **)(*piVar2 + 100))();
  }
  return;
}

// 00E2E7B0  Animation::Motion::Node::vf50  size=162  [class]
void __thiscall Animation::Motion::Node::vf50(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  float local_8;
  
  if ((*(uint *)(param_1 + 100) & 0x2000) != 0) {
    piVar1 = *(int **)(param_1 + 8);
    local_8 = -1.0;
    piVar3 = (int *)0x0;
    for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[5]) {
      if (local_8 < (float)piVar2[0x1a]) {
        piVar3 = piVar2;
        local_8 = (float)piVar2[0x1a];
      }
    }
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
      (**(code **)(*piVar1 + 0x14))(0x1000,piVar1 != piVar3);
    }
  }
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[5]) {
    (**(code **)(*piVar2 + 0x50))(param_2);
  }
  return;
}

// 00E2E860  Animation::Motion::Node::vf54  size=42  [class]
void __thiscall Animation::Motion::Node::vf54(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x54))(param_2,param_3);
  }
  return;
}

// 00E2E890  Animation::Motion::Node::vf5C  size=54  [class]
void __fastcall Animation::Motion::Node::vf5C(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    uVar1 = FUN_00fdbc60();
    do {
      (**(code **)(*piVar2 + 0x5c))(uVar1);
      piVar2 = (int *)piVar2[5];
    } while (piVar2 != (int *)0x0);
  }
  return;
}

// 00E2E8D0  Animation::Motion::NodeBlend::vf08  size=112  [class]
void __thiscall Animation::Motion::NodeBlend::vf08(int param_1,float param_2,float param_3)

{
  int *piVar1;
  float10 fVar2;
  
  if ((*(uint *)(param_1 + 100) & 0x800000) != 0) {
    fVar2 = (float10)FUN_009313f0();
    param_2 = (float)fVar2;
  }
  if (param_3 == -1.0) {
    param_3 = *(float *)(param_1 + 0xa8);
  }
  if (param_3 != 0.0) {
    for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
      (**(code **)(*piVar1 + 8))(param_2,param_3);
    }
  }
  return;
}

// 00E2E950  Animation::Motion::NodeBlend::setCurrentTime  size=130  [class]
void __thiscall Animation::Motion::NodeBlend::setCurrentTime(int param_1,float param_2,int param_3)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (((param_3 != param_1) && (*(int *)(param_1 + 0x60) != 0)) &&
     (*(int *)(param_1 + 0x60) != param_3)) {
    FUN_00dd5650(&DAT_016cd39c);
    return;
  }
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 8) + 0x3c))();
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    fVar3 = (float10)(**(code **)(*piVar1 + 0x3c))();
    (**(code **)(*piVar1 + 0x2c))
              ((float)(fVar3 * (float10)(float)((float10)param_2 / fVar2)),param_1);
  }
  return;
}

// 00E2E9E0  Animation::Motion::NodeBlend::setCurrentTimeSlide  size=130  [class]
void __thiscall
Animation::Motion::NodeBlend::setCurrentTimeSlide(int param_1,float param_2,int param_3)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (((param_3 != param_1) && (*(int *)(param_1 + 0x60) != 0)) &&
     (*(int *)(param_1 + 0x60) != param_3)) {
    FUN_00dd5650(&DAT_016cd3d8);
    return;
  }
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 8) + 0x3c))();
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    fVar3 = (float10)(**(code **)(*piVar1 + 0x3c))();
    (**(code **)(*piVar1 + 0x30))
              ((float)(fVar3 * (float10)(float)((float10)param_2 / fVar2)),param_1);
  }
  return;
}

// 00E2EA70  Animation::Motion::NodeBlend::vf34  size=123  [class]
float10 __fastcall Animation::Motion::NodeBlend::vf34(int *param_1)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 == (int *)0x0) {
    return (float10)-1.0;
  }
  fVar2 = (float10)(**(code **)(*piVar1 + 0x34))();
  fVar3 = (float10)(**(code **)(*piVar1 + 0x3c))();
  fVar4 = (float10)-1.0;
  if ((fVar4 != (float10)(float)fVar2) && (fVar4 != (float10)(float)fVar3)) {
    fVar4 = (float10)(**(code **)(*param_1 + 0x3c))();
    fVar4 = (float10)(float)((fVar4 * (float10)(float)fVar2) / (float10)(float)fVar3);
  }
  return fVar4;
}

// 00E2EAF0  Animation::Motion::NodeBlend::vf38  size=21  [class]
float10 __fastcall Animation::Motion::NodeBlend::vf38(int param_1)

{
  float10 fVar1;
  
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    return (float10)-1.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00e2eb03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 8) + 0x38))();
  return fVar1;
}

// 00E2EB10  Animation::Motion::NodeBlend::vf40  size=42  [class]
void __thiscall
Animation::Motion::NodeBlend::vf40(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  Node::vf40(param_2,param_3);
  *(undefined4 *)(param_1 + 0xa8) = *param_2;
  *(undefined4 *)(param_1 + 0xac) = *param_3;
  return;
}

// 00E2EB40  Animation::Motion::NodeBlend::vf48  size=439  [class]
undefined4 __thiscall
Animation::Motion::NodeBlend::vf48(int param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_20;
  
  *param_2 = 0.0;
  piVar2 = *(int **)(param_1 + 8);
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[0xc] = 0.0;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[5]) {
    iVar3 = (**(code **)(*piVar2 + 0x48))(&local_50,param_3);
    if ((iVar3 != 0) && (fStack_20 != 0.0)) {
      *param_2 = *param_2 + local_50 * fStack_20;
      param_2[1] = param_2[1] + fStack_4c * fStack_20;
      param_2[2] = param_2[2] + fStack_48 * fStack_20;
      param_2[3] = fStack_44 * fStack_20 + param_2[3];
      param_2[4] = param_2[4] + fStack_40 * fStack_20;
      param_2[5] = fStack_3c * fStack_20 + param_2[5];
      param_2[6] = fStack_38 * fStack_20 + param_2[6];
      param_2[7] = fStack_34 * fStack_20 + param_2[7];
      param_2[0xc] = param_2[0xc] + fStack_20;
    }
  }
  if (param_2[0xc] <= 1.1920929e-07) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[0xc] = 0.0;
    return 0;
  }
  fVar1 = param_2[0xc];
  *param_2 = *param_2 / fVar1;
  param_2[1] = param_2[1] / fVar1;
  param_2[2] = param_2[2] / fVar1;
  param_2[3] = param_2[3] / fVar1;
  fVar1 = param_2[0xc];
  param_2[4] = param_2[4] / fVar1;
  param_2[5] = param_2[5] / fVar1;
  param_2[6] = param_2[6] / fVar1;
  param_2[7] = param_2[7] / fVar1;
  return 1;
}

// 00E2ED00  Animation::Motion::NodeBlend::vf44  size=758  [class]
undefined4 __thiscall
Animation::Motion::NodeBlend::vf44(int param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_60;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_20;
  
  piVar2 = *(int **)(param_1 + 8);
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[0xc] = 0.0;
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[4] = 0.0;
  param_3[5] = 0.0;
  param_3[6] = 0.0;
  param_3[0xc] = 0.0;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[5]) {
    iVar3 = (**(code **)(*piVar2 + 0x44))(&local_90,&local_50,param_4);
    if (iVar3 != 0) {
      if (0.0 < fStack_60) {
        *param_2 = *param_2 + local_90 * fStack_60;
        param_2[1] = fStack_8c * fStack_60 + param_2[1];
        param_2[2] = param_2[2] + fStack_88 * fStack_60;
        param_2[3] = fStack_84 * fStack_60 + param_2[3];
        param_2[4] = param_2[4] + fStack_80 * fStack_60;
        param_2[5] = param_2[5] + fStack_7c * fStack_60;
        param_2[6] = param_2[6] + fStack_78 * fStack_60;
        param_2[7] = param_2[7] + fStack_74 * fStack_60;
        param_2[0xc] = fStack_60 + param_2[0xc];
      }
      if (0.0 < fStack_20) {
        *param_3 = *param_3 + local_50 * fStack_20;
        param_3[1] = param_3[1] + fStack_4c * fStack_20;
        param_3[2] = fStack_48 * fStack_20 + param_3[2];
        param_3[3] = fStack_44 * fStack_20 + param_3[3];
        param_3[4] = param_3[4] + fStack_40 * fStack_20;
        param_3[5] = param_3[5] + fStack_3c * fStack_20;
        param_3[6] = param_3[6] + fStack_38 * fStack_20;
        param_3[7] = fStack_34 * fStack_20 + param_3[7];
        param_3[0xc] = fStack_20 + param_3[0xc];
      }
    }
  }
  if ((1.1920929e-07 < param_2[0xc]) && (1.1920929e-07 < param_3[0xc])) {
    fVar1 = param_2[0xc];
    *param_2 = *param_2 / fVar1;
    param_2[1] = param_2[1] / fVar1;
    param_2[2] = param_2[2] / fVar1;
    param_2[3] = param_2[3] / fVar1;
    fVar1 = param_2[0xc];
    param_2[4] = param_2[4] / fVar1;
    param_2[5] = param_2[5] / fVar1;
    param_2[6] = param_2[6] / fVar1;
    param_2[7] = param_2[7] / fVar1;
    fVar1 = param_3[0xc];
    *param_3 = *param_3 / fVar1;
    param_3[1] = param_3[1] / fVar1;
    param_3[2] = param_3[2] / fVar1;
    param_3[3] = param_3[3] / fVar1;
    fVar1 = param_3[0xc];
    param_3[4] = param_3[4] / fVar1;
    param_3[5] = param_3[5] / fVar1;
    param_3[6] = param_3[6] / fVar1;
    param_3[7] = param_3[7] / fVar1;
    return 1;
  }
  return 0;
}

// 00E2F000  Animation::Motion::NodeBlend::vf58  size=26  [class]
void __fastcall Animation::Motion::NodeBlend::vf58(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x58))();
  }
  return;
}

// 00E2F020  Animation::Motion::NodeGridBlend::vf40  size=264  [class]
void __thiscall Animation::Motion::NodeGridBlend::vf40(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  float local_8;
  
  local_8 = 0.0;
  iVar3 = param_1[0x26];
  iVar6 = param_1[0x24];
  iVar4 = iVar3;
  if (0 < iVar3) {
    do {
      fVar7 = (float10)FUN_00e26690(iVar6);
      iVar6 = iVar6 + 0x10;
      iVar4 = iVar4 + -1;
      local_8 = (float)(fVar7 + (float10)local_8);
    } while (iVar4 != 0);
  }
  iVar6 = param_1[0x24];
  if (local_8 <= 0.0) {
    if (0 < iVar3) {
      puVar5 = (undefined4 *)(iVar6 + 0xc);
      do {
        piVar1 = (int *)*puVar5;
        if (piVar1 != (int *)0x0) {
          if (((param_1 == piVar1) || ((int *)piVar1[0x18] == (int *)0x0)) ||
             ((int *)piVar1[0x18] == param_1)) {
            pcVar2 = *(code **)(*piVar1 + 100);
            piVar1[0x1a] = 0;
            (*pcVar2)();
          }
          else {
            FUN_00dd5650(&DAT_016cce10);
          }
        }
        puVar5 = puVar5 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if (0 < iVar3) {
    do {
      piVar1 = *(int **)(iVar6 + 0xc);
      if (piVar1 != (int *)0x0) {
        fVar7 = (float10)FUN_00e26690(iVar6);
        if (((param_1 == piVar1) || ((int *)piVar1[0x18] == (int *)0x0)) ||
           ((int *)piVar1[0x18] == param_1)) {
          pcVar2 = *(code **)(*piVar1 + 100);
          piVar1[0x1a] = (int)((float)fVar7 / local_8);
          (*pcVar2)();
        }
        else {
          FUN_00dd5650(&DAT_016cce10);
        }
      }
      iVar6 = iVar6 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  Node::vf40(param_2,param_3);
  param_1[0x2a] = *param_2;
  param_1[0x2b] = *param_3;
  return;
}

// 00E2F130  Animation::Motion::NodeParallel::vf08  size=126  [class]
void __thiscall Animation::Motion::NodeParallel::vf08(int param_1,float param_2,float param_3)

{
  int *piVar1;
  float10 fVar2;
  
  if ((*(uint *)(param_1 + 100) & 0x800000) != 0) {
    fVar2 = (float10)FUN_009313f0();
    param_2 = (float)fVar2;
  }
  if (param_3 != 0.0) {
    if (param_3 != -1.0) {
      param_2 = (*(float *)(param_1 + 0x90) / param_3) * param_2;
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      do {
        (**(code **)(*piVar1 + 8))(param_2,0xbf800000);
        piVar1 = (int *)piVar1[5];
      } while (piVar1 != (int *)0x0);
      return;
    }
  }
  return;
}

// 00E2F1B0  Animation::Motion::NodeParallel::vf40  size=42  [class]
void __thiscall
Animation::Motion::NodeParallel::vf40(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  Node::vf40(param_2,param_3);
  *(undefined4 *)(param_1 + 0x90) = *param_2;
  *(undefined4 *)(param_1 + 0x94) = *param_3;
  return;
}

// 00E2F1E0  Animation::Motion::NodeParallel::setCurrentTime  size=78  [class]
void __thiscall
Animation::Motion::NodeParallel::setCurrentTime(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if (((param_3 != param_1) && (*(int *)(param_1 + 0x60) != 0)) &&
     (*(int *)(param_1 + 0x60) != param_3)) {
    FUN_00dd5650(&DAT_016cd418);
    return;
  }
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x2c))(param_2,param_1);
  }
  return;
}

// 00E2F230  Animation::Motion::NodeParallel::setCurrentTimeSlide  size=78  [class]
void __thiscall
Animation::Motion::NodeParallel::setCurrentTimeSlide(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if (((param_3 != param_1) && (*(int *)(param_1 + 0x60) != 0)) &&
     (*(int *)(param_1 + 0x60) != param_3)) {
    FUN_00dd5650(&DAT_016cd458);
    return;
  }
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x30))(param_2,param_1);
  }
  return;
}

// 00E2F280  Animation::Motion::NodeParallel::vf48  size=227  [class]
undefined4 __thiscall
Animation::Motion::NodeParallel::vf48(int param_1,float *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_20;
  
  *param_2 = 0.0;
  piVar1 = *(int **)(param_1 + 8);
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[0xc] = 0.0;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    iVar2 = (**(code **)(*piVar1 + 0x48))(&local_50,param_3);
    if ((iVar2 != 0) && (fStack_20 != 0.0)) {
      *param_2 = *param_2 + local_50;
      param_2[1] = param_2[1] + fStack_4c;
      param_2[2] = param_2[2] + fStack_48;
      param_2[3] = param_2[3] + fStack_44;
      param_2[4] = param_2[4] + fStack_40;
      param_2[5] = param_2[5] + fStack_3c;
      param_2[6] = param_2[6] + fStack_38;
      param_2[7] = param_2[7] + fStack_34;
      param_2[0xc] = fStack_20 + param_2[0xc];
    }
  }
  if (1.1920929e-07 < param_2[0xc]) {
    return 1;
  }
  return 0;
}

// 00E2F370  Animation::Motion::NodeParallel::vf44  size=384  [class]
undefined4 __thiscall
Animation::Motion::NodeParallel::vf44(int param_1,float *param_2,float *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_60;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_20;
  
  piVar1 = *(int **)(param_1 + 8);
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[0xc] = 0.0;
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[4] = 0.0;
  param_3[5] = 0.0;
  param_3[6] = 0.0;
  param_3[0xc] = 0.0;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    iVar2 = (**(code **)(*piVar1 + 0x44))(&local_90,&local_50,param_4);
    if (iVar2 != 0) {
      if (0.0 < fStack_60) {
        *param_2 = *param_2 + local_90;
        param_2[1] = param_2[1] + fStack_8c;
        param_2[2] = param_2[2] + fStack_88;
        param_2[3] = fStack_84 + param_2[3];
        param_2[4] = param_2[4] + fStack_80;
        param_2[5] = param_2[5] + fStack_7c;
        param_2[6] = param_2[6] + fStack_78;
        param_2[7] = param_2[7] + fStack_74;
        param_2[0xc] = fStack_60 + param_2[0xc];
      }
      if (0.0 < fStack_20) {
        *param_3 = *param_3 + local_50;
        param_3[1] = param_3[1] + fStack_4c;
        param_3[2] = fStack_48 + param_3[2];
        param_3[3] = param_3[3] + fStack_44;
        param_3[4] = param_3[4] + fStack_40;
        param_3[5] = param_3[5] + fStack_3c;
        param_3[6] = fStack_38 + param_3[6];
        param_3[7] = fStack_34 + param_3[7];
        param_3[0xc] = fStack_20 + param_3[0xc];
      }
    }
  }
  if ((1.1920929e-07 < param_2[0xc]) && (1.1920929e-07 < param_3[0xc])) {
    return 1;
  }
  return 0;
}

// 00E2F4F0  Animation::Motion::NodeParallel::vf58  size=26  [class]
void __fastcall Animation::Motion::NodeParallel::vf58(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x58))();
  }
  return;
}

// 00E2F510  Animation::Motion::NodePlay::vf1C  size=99  [class]
void __thiscall Animation::Motion::NodePlay::vf1C(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x1c))(param_2);
  }
  if (*(int *)(param_1 + 0x11c) == 1) {
    FUN_00e40750(param_2);
  }
  else if (*(int *)(param_1 + 0x11c) == 4) {
    FUN_00e259d0(param_2);
    return;
  }
  return;
}

// 00E2F580  Animation::Motion::NodePlay::vf60  size=66  [class]
void __fastcall Animation::Motion::NodePlay::vf60(int param_1)

{
  int *piVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    fVar2 = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x70);
  }
  else {
    fVar2 = *(float *)(*(int *)(param_1 + 4) + 0x78) * *(float *)(param_1 + 0x70) *
            *(float *)(param_1 + 0x74);
  }
  piVar1 = *(int **)(param_1 + 8);
  *(float *)(param_1 + 0x78) = fVar2;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x60))();
  }
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x78);
  return;
}

// 00E2F5D0  Animation::Motion::NodePlay::setCurrentTime  size=126  [class]
void __thiscall Animation::Motion::NodePlay::setCurrentTime(int param_1,float param_2,float param_3)

{
  float fVar1;
  
  if (((param_3 != (float)param_1) && (*(int *)(param_1 + 0x60) != 0)) &&
     ((float)*(int *)(param_1 + 0x60) != param_3)) {
    FUN_00dd5650(&DAT_016cd49c);
    return;
  }
  param_3 = param_2;
  if (param_2 == -1.0) {
    param_3 = 0.0;
    fVar1 = *(float *)(param_1 + 0xf8);
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      param_3 = *(float *)(param_1 + 0x110);
    }
  }
  *(float *)(param_1 + 0xfc) = param_3;
  *(undefined4 *)(param_1 + 0x100) = 0xbf800000;
  *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) & 0xfffffffe | 4;
  return;
}

// 00E2F650  Animation::Motion::NodePlay::setCurrentTimeSlide  size=132  [class]
void __thiscall
Animation::Motion::NodePlay::setCurrentTimeSlide(int param_1,float param_2,float param_3)

{
  float fVar1;
  
  if (((param_3 != (float)param_1) && (*(int *)(param_1 + 0x60) != 0)) &&
     ((float)*(int *)(param_1 + 0x60) != param_3)) {
    FUN_00dd5650(&DAT_016cd4d8);
    return;
  }
  param_3 = param_2;
  if (param_2 == -1.0) {
    param_3 = 0.0;
    fVar1 = *(float *)(param_1 + 0xf8);
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      param_3 = *(float *)(param_1 + 0x110);
    }
  }
  if ((*(uint *)(param_1 + 0xf4) & 5) == 0) {
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xfc);
  }
  *(float *)(param_1 + 0xfc) = param_3;
  *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) & 0xfffffffe | 0x14;
  return;
}

// 00E2F6E0  Animation::Motion::NodePlay::vf64  size=60  [class]
void __fastcall Animation::Motion::NodePlay::vf64(int param_1)

{
  float fVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    fVar1 = *(float *)(param_1 + 0x68);
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 4) + 0x6c) * *(float *)(param_1 + 0x68);
  }
  piVar2 = *(int **)(param_1 + 8);
  *(float *)(param_1 + 0x6c) = fVar1;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[5]) {
    (**(code **)(*piVar2 + 100))();
  }
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x6c);
  return;
}

// 00E2F720  Animation::Motion::NodePlay::vf58  size=41  [class]
void __fastcall Animation::Motion::NodePlay::vf58(int param_1)

{
  *(undefined4 *)(param_1 + 0xf4) = 1;
  *(undefined4 *)(param_1 + 0x100) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  return;
}

// 00E2F750  Animation::Motion::NodeRingBlend::vf40  size=1133  [class]
void __thiscall Animation::Motion::NodeRingBlend::vf40(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float local_50;
  float local_4c;
  float *local_48;
  float local_44;
  float local_40;
  int *local_3c;
  int *local_38;
  float local_34 [9];
  float local_10;
  float local_c;
  float local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_50;
  local_34[0] = -1.0;
  local_34[1] = -1.0;
  local_34[2] = -1.0;
  local_34[3] = -1.0;
  local_34[4] = -1.0;
  local_34[5] = -1.0;
  local_34[6] = -1.0;
  local_34[7] = -1.0;
  local_38 = param_2;
  local_3c = param_3;
  fVar9 = (float10)FUN_00fddce0((double)(float)param_1[0x27]);
  local_44 = (float)fVar9;
  local_40 = local_44;
  fVar9 = (float10)FUN_00fddce0((double)(float)param_1[0x29]);
  iVar8 = param_1[0x26];
  local_44 = (float)fVar9;
  pfVar7 = (float *)param_1[0x24];
  local_48 = (float *)iVar8;
  if (0 < iVar8) {
    do {
      local_4c = *pfVar7 - local_40;
      if ((((0.0 <= local_4c) && (local_4c <= 1.0)) &&
          (local_4c = pfVar7[2] - local_44, 0.0 <= local_4c)) && (local_4c <= 1.0)) {
        iVar5 = FUN_00fdbc60();
        iVar6 = FUN_00fdbc60();
        iVar6 = iVar6 + iVar5 * 2;
        local_4c = (float)((float10)pfVar7[1] * extraout_ST0);
        local_50 = local_4c - (float)(extraout_ST0 * (float10)(float)param_1[0x28]);
        fVar9 = (float10)FUN_00ddba30();
        local_50 = (float)fVar9;
        if (local_50 < 0.0 == (local_50 == 0.0)) {
          if ((local_34[iVar6 * 2 + 1] == -1.0) || (local_50 < local_34[iVar6 * 2 + 1])) {
            local_34[iVar6 * 2 + 1] = local_50;
          }
        }
        else if ((local_34[iVar6 * 2] == -1.0) || (local_34[iVar6 * 2] < local_50)) {
          local_34[iVar6 * 2] = local_50;
        }
      }
      pfVar7 = pfVar7 + 4;
      local_48 = (float *)((int)local_48 + -1);
    } while (local_48 != (float *)0x0);
  }
  pfVar7 = (float *)param_1[0x24];
  fVar3 = 1.0 - ((float)param_1[0x27] - local_40);
  local_10 = 1.0 - ((float)param_1[0x29] - local_44);
  local_50 = 1.0 - local_10;
  local_34[8] = local_10 * fVar3;
  local_10 = (1.0 - fVar3) * local_10;
  local_c = local_50 * fVar3;
  local_8 = local_50 * (1.0 - fVar3);
  local_48 = pfVar7;
  if (0 < iVar8) {
    do {
      piVar1 = (int *)pfVar7[3];
      if (piVar1 != (int *)0x0) {
        local_50 = *pfVar7 - local_40;
        local_4c = pfVar7[2] - local_44;
        local_48 = pfVar7;
        if ((((local_50 < 0.0) || (1.0 < local_50)) || (local_4c < 0.0)) || (1.0 < local_4c)) {
          if (((param_1 == piVar1) || ((int *)piVar1[0x18] == (int *)0x0)) ||
             ((int *)piVar1[0x18] == param_1)) {
            piVar1[0x1a] = 0;
            (**(code **)(*piVar1 + 100))();
          }
          else {
            FUN_00dd5650();
          }
        }
        else {
          iVar5 = FUN_00fdbc60();
          iVar6 = FUN_00fdbc60();
          iVar6 = iVar6 + iVar5 * 2;
          local_4c = (float)(extraout_ST0_00 * (float10)(float)param_1[0x28]);
          local_50 = (float)((float10)local_48[1] * extraout_ST0_00) - local_4c;
          fVar9 = (float10)FUN_00ddba30();
          local_50 = (float)fVar9;
          if ((local_34[iVar6 * 2] == -1.0) || (local_34[iVar6 * 2 + 1] == -1.0)) {
            local_4c = 1.0;
          }
          else if ((local_50 < local_34[iVar6 * 2]) || (local_34[iVar6 * 2 + 1] < local_50)) {
            local_4c = 0.0;
          }
          else {
            fVar3 = ABS(local_34[iVar6 * 2]) + ABS(local_34[iVar6 * 2 + 1]);
            if (fVar3 <= 0.0) {
              local_4c = 1.0;
              local_50 = fVar3;
            }
            else {
              local_4c = (fVar3 - ABS(local_50)) / fVar3;
              local_50 = ABS(local_50);
            }
          }
          local_4c = local_34[iVar6 + 8] * local_4c;
          if (((param_1 == piVar1) || ((int *)piVar1[0x18] == (int *)0x0)) ||
             ((int *)piVar1[0x18] == param_1)) {
            pcVar2 = *(code **)(*piVar1 + 100);
            piVar1[0x1a] = (int)local_4c;
            (*pcVar2)();
            pfVar7 = local_48;
          }
          else {
            FUN_00dd5650();
            pfVar7 = local_48;
          }
        }
      }
      pfVar7 = pfVar7 + 4;
      iVar8 = iVar8 + -1;
      local_48 = pfVar7;
    } while (iVar8 != 0);
  }
  piVar4 = local_38;
  piVar1 = local_3c;
  Node::vf40(local_38,local_3c);
  param_1[0x2a] = *piVar4;
  param_1[0x2b] = *piVar1;
  __security_check_cookie(local_4 ^ (uint)&local_50);
  return;
}

// 00E2FBC0  FUN_00e2fbc0  size=52  [between]
void __fastcall FUN_00e2fbc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_00dd7270();
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_00dd7270();
    return;
  }
  return;
}

// 00E2FC30  FUN_00e2fc30  size=33  [between]
void __thiscall FUN_00e2fc30(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    FUN_00e41890(param_2);
  }
  return;
}

// 00E2FD20  FUN_00e2fd20  size=62  [between]
void FUN_00e2fd20(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((&DAT_018cfa38)[uVar2 * 2] == param_1) {
      iVar1 = *(int *)(uVar2 * 8 + 0x18cfa3c);
      if (iVar1 != 0) {
        FUN_00dd5650(&DAT_016cd584,iVar1);
        return;
      }
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x2f);
  FUN_00dd5650(&DAT_016cd5b8,param_1);
  return;
}

// 00E2FDE0  FUN_00e2fde0  size=53  [between]
void __fastcall FUN_00e2fde0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_00a0c7b0(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

// 00E2FE20  FUN_00e2fe20  size=110  [between]
int __fastcall FUN_00e2fe20(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_8;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  local_8 = -1.0;
  if (iVar2 == 0) {
    return 0;
  }
  do {
    fVar1 = *(float *)(iVar2 + 0x78) * *(float *)(iVar2 + 0x44);
    if (local_8 < fVar1) {
      iVar3 = iVar2;
      local_8 = fVar1;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while (iVar2 != 0);
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x14);
    if (iVar2 != 0) {
      if (*(uint *)(iVar2 + 4) < 0x20111109) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + 0x18;
      }
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    return *(int *)(iVar3 + 0x10) + 0x20;
  }
  return 0;
}

// 00E2FE90  FUN_00e2fe90  size=75  [between]
bool __thiscall FUN_00e2fe90(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_00a0c7b0(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (param_2 != 0) {
    iVar1 = FUN_009316d0(param_2);
    *(int *)(param_1 + 0x30) = iVar1;
    return iVar1 != 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return true;
}

// 00E2FEE0  FUN_00e2fee0  size=75  [between]
bool __thiscall FUN_00e2fee0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_00a0c7b0(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (param_2 != 0) {
    iVar1 = FUN_009316c0(param_2);
    *(int *)(param_1 + 0x30) = iVar1;
    return iVar1 != 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return true;
}

// 00E2FF90  FUN_00e2ff90  size=40  [between]
undefined4 __fastcall FUN_00e2ff90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(byte *)(*(int *)(iVar1 + 0x14) + 8) & 2) != 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return 1;
}

// 00E30000  FUN_00e30000  size=104  [between]
uint __fastcall FUN_00e30000(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = 0;
  if (((*(byte *)(iVar1 + 8) & 2) == 0) || (*(float *)(iVar1 + 0x84) != 0.0)) {
    uVar2 = 1;
  }
  if ((*(int *)(param_1 + 0x30) != 0) && ((*(uint *)(*(int *)(iVar1 + 0x10) + 100) & 0x200000) == 0)
     ) {
    uVar2 = uVar2 | 2;
  }
  if (*(int *)(iVar1 + 0x90) != 0) {
    uVar2 = uVar2 | 4;
  }
  if ((*(uint *)(*(int *)(iVar1 + 0x10) + 100) & 0x80000) != 0) {
    uVar2 = uVar2 | 8;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar2 = uVar2 | 0x20;
  }
  return uVar2;
}

// 00E30070  FUN_00e30070  size=118  [between]
void FUN_00e30070(int param_1,float *param_2,float param_3,undefined4 param_4)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00e23bb0(&local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,param_1 + 0x18,param_1 + 0x1c,
               param_4);
  *param_2 = *param_2 + param_3 * (local_20 - *param_2);
  param_2[1] = (local_1c - param_2[1]) * param_3 + param_2[1];
  param_2[2] = (local_18 - param_2[2]) * param_3 + param_2[2];
  param_2[3] = (local_14 - param_2[3]) * param_3 + param_2[3];
  return;
}

// 00E300F0  FUN_00e300f0  size=70  [between]
void FUN_00e300f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_20 [28];
  
  FUN_00e23df0(local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,param_1 + 0x18,param_1 + 0x1c);
  FUN_00de21a0(param_2,param_2,local_20,param_3);
  return;
}

// 00E30140  FUN_00e30140  size=114  [between]
void FUN_00e30140(int param_1,float *param_2,float param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00e23fd0(&local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,param_1 + 0x18,param_1 + 0x1c);
  *param_2 = *param_2 + param_3 * (local_20 - *param_2);
  param_2[1] = (local_1c - param_2[1]) * param_3 + param_2[1];
  param_2[2] = (local_18 - param_2[2]) * param_3 + param_2[2];
  param_2[3] = (local_14 - param_2[3]) * param_3 + param_2[3];
  return;
}

// 00E301E0  FUN_00e301e0  size=51  [between]
void __fastcall FUN_00e301e0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x10),0);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    thunk_FUN_00a0c7b0(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00E30220  FUN_00e30220  size=602  [between]
void __thiscall FUN_00e30220(int param_1,float *param_2)

{
  int iVar1;
  float unaff_ESI;
  float unaff_EDI;
  float *pfStack_dc;
  float *pfStack_d8;
  float fStack_d4;
  undefined1 auStack_c4 [4];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined1 auStack_ac [4];
  undefined4 uStack_a8;
  float local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
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
  undefined1 auStack_60 [52];
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_c4;
  local_c0 = *param_2;
  local_bc = param_2[1];
  local_b8 = param_2[2];
  local_b4 = param_2[3];
  if (*(float *)(param_1 + 0x48) != 1.0) {
    local_a4 = *(float *)(param_1 + 0x48);
    local_c0 = local_a4 * local_c0;
    local_bc = local_bc * local_a4;
    local_b8 = local_b8 * local_a4;
    local_b4 = local_a4 * local_b4;
  }
  fStack_d4 = *(float *)(param_1 + 0x58);
  local_c0 = *(float *)(param_1 + 0x4c) * local_c0;
  local_bc = *(float *)(param_1 + 0x50) * local_bc;
  local_b8 = *(float *)(param_1 + 0x54) * local_b8;
  if (fStack_d4 != 0.0) {
    pfStack_dc = &local_c0;
    pfStack_d8 = pfStack_dc;
    D3DXVec3TransformNormal();
  }
  iVar1 = *(int *)(param_1 + 8);
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_64 = 0x3f800000;
  local_78 = 0x3f800000;
  uStack_8c = 0x3f800000;
  uStack_a0 = 0x3f800000;
  if (*(float *)(iVar1 + 0x98) != 0.0) {
    fStack_d4 = *(float *)(iVar1 + 0x98);
    pfStack_d8 = (float *)auStack_60;
    pfStack_dc = (float *)0xe3034c;
    D3DXMatrixRotationZ();
    pfStack_dc = (float *)&uStack_a8;
    D3DXMatrixMultiply(pfStack_dc,&local_68);
  }
  if (*(float *)(iVar1 + 0x94) != 0.0) {
    fStack_d4 = *(float *)(iVar1 + 0x94);
    pfStack_d8 = (float *)auStack_60;
    pfStack_dc = (float *)0xe30387;
    D3DXMatrixRotationY();
    pfStack_dc = (float *)&uStack_a8;
    D3DXMatrixMultiply(pfStack_dc,&local_68);
  }
  if (*(float *)(iVar1 + 0x90) != 0.0) {
    fStack_d4 = *(float *)(iVar1 + 0x90);
    pfStack_d8 = (float *)auStack_60;
    pfStack_dc = (float *)0xe303be;
    D3DXMatrixRotationX();
    pfStack_dc = (float *)&uStack_a8;
    D3DXMatrixMultiply(pfStack_dc,&local_68);
  }
  fStack_d4 = (float)(*(int *)(param_1 + 8) + 0xb0);
  pfStack_dc = (float *)&uStack_a0;
  pfStack_d8 = pfStack_dc;
  D3DXMatrixMultiply();
  D3DXVec3TransformNormal(&stack0xffffff34,&stack0xffffff34,auStack_ac);
  iVar1 = *(int *)(param_1 + 8);
  *(float *)(iVar1 + 0x50) = *(float *)(iVar1 + 0x50) + (float)pfStack_d8;
  *(float *)(iVar1 + 0x54) = *(float *)(iVar1 + 0x54) + fStack_d4;
  *(float *)(iVar1 + 0x58) = unaff_EDI + *(float *)(iVar1 + 0x58);
  *(float *)(iVar1 + 0x5c) = *(float *)(iVar1 + 0x5c) + unaff_ESI;
  iVar1 = *(int *)(param_1 + 8);
  *(float *)(iVar1 + 0x90) = *(float *)(iVar1 + 0x90) + param_2[4];
  *(float *)(iVar1 + 0x94) = param_2[5] + *(float *)(iVar1 + 0x94);
  *(float *)(iVar1 + 0x98) = param_2[6] + *(float *)(iVar1 + 0x98);
  *(float *)(iVar1 + 0x9c) = param_2[7] + *(float *)(iVar1 + 0x9c);
  __security_check_cookie(uStack_2c ^ (uint)&pfStack_dc);
  return;
}

// 00E30480  thunk_FUN_00e24400  size=5  [between]
void thunk_FUN_00e24400(void)

{
  float fVar1;
  float *pfVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  pfVar2 = (float *)&DAT_01dd91a0;
  iVar6 = -0x2d;
  do {
    bVar3 = (byte)iVar6;
    if (iVar6 + 0x2dU < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x2dU);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 - 2 & 0x1f));
    }
    *pfVar2 = fVar1;
    pfVar2[0x40] = *pfVar2 * -1.0;
    if (iVar6 + 0x2eU < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x2eU);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 - 1 & 0x1f));
    }
    pfVar2[1] = fVar1;
    pfVar2[0x41] = pfVar2[1] * -1.0;
    if (iVar6 + 0x2fU < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x2fU);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 & 0x1f));
    }
    pfVar2[2] = fVar1;
    pfVar2[0x42] = pfVar2[2] * -1.0;
    if (iVar6 + 0x30U < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x30U);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 + 1 & 0x1f));
    }
    pfVar2[3] = fVar1;
    pfVar2[0x43] = pfVar2[3] * -1.0;
    if (iVar6 + 0x31U < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x31U);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 + 2 & 0x1f));
    }
    pfVar2[4] = fVar1;
    pfVar2[0x44] = pfVar2[4] * -1.0;
    if (iVar6 + 0x32U < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x32U);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 + 3 & 0x1f));
    }
    pfVar2[5] = fVar1;
    pfVar2[0x45] = pfVar2[5] * -1.0;
    if (iVar6 + 0x33U < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x33U);
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar4 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar4 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 + 4 & 0x1f));
    }
    pfVar2[6] = fVar1;
    pfVar2[0x46] = pfVar2[6] * -1.0;
    if (iVar6 + 0x34U < 0x2f) {
      uVar5 = 0x2f - (iVar6 + 0x34U);
      bVar3 = (byte)uVar5;
      if (uVar5 < 0x1f) {
        fVar1 = 1.0 / (float)(1 << (bVar3 & 0x1f));
      }
      else {
        fVar1 = 9.313226e-10 / (float)(1 << (bVar3 - 0x1e & 0x1f));
      }
    }
    else {
      fVar1 = (float)(1 << (bVar3 + 5 & 0x1f));
    }
    pfVar2[7] = fVar1;
    uVar5 = iVar6 + 0x35;
    pfVar2[0x47] = pfVar2[7] * -1.0;
    pfVar2 = pfVar2 + 8;
    iVar6 = iVar6 + 8;
  } while (uVar5 < 0x40);
  return;
}

// 00E30490  FUN_00e30490  size=29  [between]
void __fastcall FUN_00e30490(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x32c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    FUN_00e41880();
  }
  return;
}

// 00E304B0  FUN_00e304b0  size=91  [between]
void __fastcall FUN_00e304b0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x32c);
  bVar1 = false;
  if (piVar3 != (int *)0x0) {
    do {
      iVar2 = (**(code **)(*piVar3 + 0x14))();
      if (iVar2 != 0) {
        bVar1 = true;
      }
      piVar3 = (int *)piVar3[2];
    } while (piVar3 != (int *)0x0);
    if (bVar1) {
      FUN_00a17b00();
      FUN_00a07820(*(undefined4 *)(param_1 + 0xa0));
    }
  }
  return;
}

// 00E30510  FUN_00e30510  size=51  [between]
void __fastcall FUN_00e30510(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf4) + 0x58))();
  }
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x220 + iVar2 * 4);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  return;
}

// 00E30580  FUN_00e30580  size=481  [between]
void FUN_00e30580(int param_1)

{
  float10 fVar1;
  int iStack_d4;
  undefined1 *puStack_d0;
  undefined1 *puStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_bc [4];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 auStack_ac [4];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined1 auStack_6c [12];
  undefined1 local_60 [52];
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_bc;
  fStack_c4 = (float)(*(int *)(param_1 + 0xa8) + 0x10);
  fStack_c8 = 0.0;
  puStack_cc = local_60;
  puStack_d0 = (undefined1 *)0xe305b4;
  D3DXMatrixInverse();
  puStack_d0 = auStack_6c;
  iStack_d4 = param_1 + 0x10;
  D3DXMatrixMultiply(auStack_ac);
  puStack_d0 = (undefined1 *)(fStack_b4 * fStack_b4 + fStack_b8 * fStack_b8 + fStack_b0 * fStack_b0)
  ;
  fVar1 = (float10)FUN_00fdef70();
  fStack_c4 = (float)fVar1;
  puStack_d0 = (undefined1 *)(fStack_a4 * fStack_a4 + fStack_a8 * fStack_a8 + fStack_a0 * fStack_a0)
  ;
  FUN_00fdef70();
  puStack_d0 = (undefined1 *)(fStack_94 * fStack_94 + fStack_98 * fStack_98 + fStack_90 * fStack_90)
  ;
  fVar1 = (float10)FUN_00fdef70();
  puStack_d0 = (undefined1 *)(float)fVar1;
  puStack_cc = (undefined1 *)(fStack_90 / (float)puStack_d0);
  fVar1 = (float10)FUN_00fdecda();
  fStack_c8 = (float)fVar1;
  puStack_cc = (undefined1 *)(-fStack_b0 / (float)puStack_d0);
  fVar1 = (float10)FUN_00ddbaa0(puStack_cc);
  puStack_cc = (undefined1 *)(float)fVar1;
  *(float *)(param_1 + 0x90) = fStack_c8;
  *(undefined1 **)(param_1 + 0x94) = puStack_cc;
  fStack_c8 = fStack_b8 / fStack_c4;
  fVar1 = (float10)FUN_00fdecda();
  fStack_c8 = (float)fVar1;
  *(float *)(param_1 + 0x98) = fStack_c8;
  __security_check_cookie(uStack_2c ^ (uint)&iStack_d4);
  return;
}

// 00E307A0  Animation::Control::Node::vf14  size=27  [class]
bool Animation::Control::Node::vf14(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e433a0(param_1,param_2);
  return iVar1 != 0;
}

// 00E30810  FUN_00e30810  size=92  [between]
undefined4 __thiscall FUN_00e30810(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(param_3 + 4) == 0) && (*(int *)(param_3 + 8) == 0)) {
    if (*param_1 == 0) {
      *param_1 = param_3;
    }
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) != 0) {
        *(int *)(*(int *)(iVar1 + 8) + 4) = param_3;
      }
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar1 + 8);
      *(int *)(param_3 + 4) = iVar1;
      *(int *)(iVar1 + 8) = param_3;
    }
    param_1[1] = param_3;
    *(undefined4 *)(param_3 + 0xc) = param_2;
    return 1;
  }
  FUN_00dd5650(&DAT_016c5d80);
  return 0;
}

// 00E308C0  Animation::Control::NodeSlot::NodeHandler::NodeHandler  size=105  [class]
void __fastcall Animation::Control::NodeSlot::NodeHandler::NodeHandler(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = vftable;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = vftable;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = vftable;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = vftable;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = vftable;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = vftable;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = vftable;
  return;
}

// 00E30930  FUN_00e30930  size=28  [between]
undefined4 * __fastcall FUN_00e30930(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  Animation::Control::NodeSlot::NodeHandler::NodeHandler();
  return param_1;
}

// 00E30950  FUN_00e30950  size=191  [between]
void FUN_00e30950(char *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_44;
  iVar1 = FUN_00e23740(param_1,param_3);
  if (iVar1 == 0) {
    FUN_00e273e0(param_1,param_2);
    __security_check_cookie(local_4 ^ (uint)local_44);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      __security_check_cookie(local_4 ^ (uint)local_44);
      return;
    }
    _strcpy_s(local_44,0x40,param_1);
    _strcat_s(local_44,0x40,param_2);
    FUN_00de4850(local_44);
    __security_check_cookie(local_4 ^ (uint)local_44);
    return;
  }
  FUN_00e27480(param_1,param_2);
  __security_check_cookie(local_4 ^ (uint)local_44);
  return;
}

// 00E30A10  Animation::MotReader::pullCameraParam  size=622  [class]
void __thiscall Animation::MotReader::pullCameraParam(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  short *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&uStack_c4;
  if ((*(byte *)(*param_1 + 8) & 2) == 0) {
    FUN_00dd5650(&DAT_016cd720);
    __security_check_cookie(local_14 ^ (uint)&uStack_c4);
    return;
  }
  piVar1 = param_1 + 6;
  *piVar1 = 0;
  param_1[2] = -1;
  iVar2 = param_3 * 2 + 0x7000;
  if (param_1[10] != 0) {
    param_1[2] = -1;
    *piVar1 = 0;
    iVar2 = FUN_00e240f0(iVar2);
  }
  param_1[2] = iVar2;
  iVar2 = FUN_00e23900(param_1 + 3,piVar1,iVar2);
  if (iVar2 != 0) {
    local_b8 = (short *)(param_1[3] + *piVar1 * 0xc);
    if (((local_b8 != (short *)0x0) && ((int)*local_b8 == param_3 * 2 + 0x7000)) &&
       ((char)local_b8[1] == '\0')) {
      FUN_00e239d0(&local_a0,param_1[2],param_1 + 3,piVar1,param_1 + 7);
      FUN_00e28240(local_70,param_1[2],param_1 + 3,piVar1,param_1 + 7);
      iVar2 = FUN_00e29f40(param_3 * 2 + 0x7000,0xe);
      if (iVar2 == 0) {
        local_b4 = 0;
      }
      else {
        FUN_00e29ab0(&local_b4,param_1 + 3,piVar1,param_1 + 7);
      }
      iVar2 = FUN_00e29f40(param_3 * 2 + 0x7000,0xf);
      if (iVar2 == 0) {
        local_b8 = (short *)0xbf800000;
      }
      else {
        FUN_00e29ab0(&local_b8,param_1 + 3,piVar1,param_1 + 7);
      }
      FUN_00e29f00(param_3 * 2 + 0x7001);
      FUN_00e239d0(&local_b0,param_1[2],param_1 + 3,piVar1,param_1 + 7);
      local_80 = 0;
      local_7c = 0x3f800000;
      local_78 = 0;
      FUN_00ddc1d0(local_60,local_70,5);
      D3DXVec3TransformNormal(local_90,&local_80,local_60);
      *param_2 = uStack_ac;
      param_2[1] = uStack_a8;
      param_2[2] = uStack_a4;
      param_2[3] = local_a0;
      param_2[4] = uStack_bc;
      param_2[5] = local_b8;
      param_2[6] = local_b4;
      param_2[7] = local_b0;
      param_2[8] = uStack_9c;
      param_2[9] = uStack_98;
      param_2[10] = uStack_94;
      param_2[0xb] = local_90[0];
      param_2[0xc] = uStack_c0;
      param_2[0xd] = uStack_c4;
      __security_check_cookie(uStack_20 ^ (uint)&stack0xffffff30);
      return;
    }
  }
  FUN_00dd5650(&DAT_016cd6d0);
  __security_check_cookie(local_14 ^ (uint)&uStack_c4);
  return;
}

// 00E30C80  FUN_00e30c80  size=229  [between]
float10 FUN_00e30c80(undefined4 *param_1)

{
  float fVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  float10 fVar5;
  float local_4;
  
  fVar5 = (float10)FUN_00e2c540(param_1);
  local_4 = (float)fVar5;
  if ((*(char *)*param_1 != '\0') && (*(char *)*param_1 != '\x02')) {
    do {
      pcVar2 = (char *)*param_1;
      if (*pcVar2 == '\x05') {
        iVar4 = (int)*(short *)(pcVar2 + 2);
        *param_1 = pcVar2 + 8;
      }
      else {
        FUN_00dd5650(&DAT_016ccb80);
        iVar4 = -1;
      }
      puVar3 = (undefined1 *)*param_1;
      switch(*puVar3) {
      case 1:
        fVar5 = (float10)FUN_00e30d90(param_1);
        break;
      default:
        FUN_00dd5650(&DAT_016cd2a4);
        fVar5 = (float10)0;
        break;
      case 3:
        fVar5 = (float10)FUN_00e24cd0(param_1);
        break;
      case 4:
        fVar1 = *(float *)(puVar3 + 4);
        *param_1 = puVar3 + 8;
        fVar5 = (float10)fVar1;
        break;
      case 6:
        fVar5 = (float10)FUN_00e24e20(param_1);
        break;
      case 8:
        fVar5 = (float10)FUN_00e30de0(param_1);
      }
      fVar5 = (float10)FUN_00e24b50(iVar4,local_4,(float)fVar5);
      local_4 = (float)fVar5;
      iVar4 = FUN_00e24cb0(param_1);
    } while (iVar4 == 0);
  }
  return (float10)local_4;
}

// 00E30D90  FUN_00e30d90  size=75  [between]
float10 FUN_00e30d90(int *param_1)

{
  float10 fVar1;
  
  if (*(char *)*param_1 != '\x01') {
    FUN_00dd5650(&DAT_016cd7a0);
  }
  *param_1 = *param_1 + 8;
  fVar1 = (float10)FUN_00e30c80(param_1);
  if (*(char *)*param_1 != '\x02') {
    FUN_00dd5650(&DAT_016cd76c);
  }
  *param_1 = *param_1 + 8;
  return (float10)(float)fVar1;
}

// 00E30DE0  FUN_00e30de0  size=122  [between]
void FUN_00e30de0(int *param_1)

{
  short sVar1;
  char *pcVar2;
  float10 fVar3;
  
  sVar1 = *(short *)(*param_1 + 2);
  pcVar2 = (char *)(*param_1 + 8);
  *param_1 = (int)pcVar2;
  if (*pcVar2 != '\x01') {
    FUN_00dd5650(&DAT_016cd7a0);
  }
  *param_1 = *param_1 + 8;
  fVar3 = (float10)FUN_00e30c80(param_1);
  if (*(char *)*param_1 != '\x02') {
    FUN_00dd5650(&DAT_016cd76c);
  }
  *param_1 = *param_1 + 8;
  if (*(char *)*param_1 != '\a') {
    FUN_00dd5650(&DAT_016cd7d0);
  }
  *param_1 = *param_1 + 8;
  FUN_00e2c450((int)sVar1,(float)fVar3);
  return;
}

// 00E30E60  Animation::FootIk2::FootIk2  size=45  [class]
void __fastcall Animation::FootIk2::FootIk2(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = vftable;
  param_1[0x68] = 0x3f800000;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  return;
}

// 00E30E90  FUN_00e30e90  size=170  [between]
void __fastcall FUN_00e30e90(int param_1)

{
  float fVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  local_20 = 0;
  local_1c = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  local_18 = 0;
  D3DXVec3TransformNormal(&local_20,&local_20,*(int *)(param_1 + 0x10) + 0xb0);
  switch(*(undefined4 *)(param_1 + 0x19c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0x1a8) - *(float *)(param_1 + 0x1a4);
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x19c) = 3;
  *(undefined4 *)(param_1 + 0x1a0) = 0x3f800000;
  return;
}

// 00E30F60  Animation::FootIk2::vf10  size=53  [class]
void __fastcall Animation::FootIk2::vf10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x4f0);
    iVar1 = *(int *)(param_1 + 0x10) + 0xb0;
    FUN_00e2c790(uVar2,iVar1);
    FUN_00e2c790(uVar2,iVar1);
  }
  return;
}

// 00E30FA0  FUN_00e30fa0  size=5404  [between]
void __thiscall FUN_00e30fa0(int *param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar8;
  float *pfStack_284;
  float **ppfStack_280;
  float fStack_27c;
  float *pfStack_278;
  int iStack_274;
  int iStack_270;
  float **ppfStack_26c;
  int iStack_268;
  int iStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  undefined4 *puStack_254;
  undefined8 *puStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float **ppfStack_240;
  float *pfStack_23c;
  float *pfStack_238;
  float *pfStack_234;
  undefined1 *puStack_230;
  float **ppfStack_22c;
  float fStack_228;
  undefined1 *puStack_224;
  float **ppfStack_220;
  float fStack_21c;
  float fStack_218;
  undefined1 *puStack_214;
  float fStack_210;
  undefined8 *puStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float *pfStack_1f4;
  float *pfStack_1f0;
  float fStack_1ec;
  float *pfStack_1e8;
  float *pfStack_1e4;
  undefined8 uStack_1e0;
  float *pfStack_1d8;
  float *pfStack_1d4;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float afStack_18c [4];
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined8 uStack_160;
  float fStack_158;
  float afStack_154 [2];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 uStack_140;
  float fStack_138;
  float fStack_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 auStack_108 [4];
  undefined1 auStack_104 [8];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint uStack_d4;
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [172];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_1c4;
  param_2 = param_2 * param_3;
  local_130 = -1.0;
  pfStack_1d4 = (float *)(param_1[1] + 0x10);
  local_12c = 0.0;
  pfStack_1d8 = &local_130;
  local_128 = (double)((ulonglong)local_128 & 0xffffffff00000000);
  uStack_1e0._0_4_ = 2.08524e-38;
  uStack_1e0._4_4_ = pfStack_1d8;
  D3DXVec3TransformNormal();
  fStack_1c0 = fStack_138 * fStack_138 + uStack_140._4_4_ * uStack_140._4_4_ +
               fStack_134 * fStack_134;
  if (fStack_1c0 < 0.0 == (fStack_1c0 == 0.0)) {
    pfStack_1e4 = (float *)((int)&uStack_140 + 4);
    uStack_1e0 = (double)CONCAT44(uStack_1e0._4_4_,pfStack_1e4);
    pfStack_1e8 = (float *)0xe3107b;
    FUN_00ddf460();
  }
  else {
    uStack_1e0 = (double)CONCAT44(uStack_1e0._4_4_,&DAT_0163d0ac);
    pfStack_1e4 = (float *)0xe31094;
    FUN_00dd5650();
    uStack_140._4_4_ = 0.0;
    fStack_138 = 1.0;
    fStack_134 = 0.0;
  }
  iVar3 = *param_1;
  iVar4 = param_1[3];
  fStack_158 = *(float *)(iVar3 + 0x44);
  afStack_154[0] = *(float *)(iVar3 + 0x48);
  iVar5 = param_1[1];
  fStack_16c = *(float *)(iVar5 + 0x40);
  fStack_168 = *(float *)(iVar5 + 0x44);
  fStack_164 = *(float *)(iVar5 + 0x48);
  iVar6 = param_1[2];
  uStack_160 = (double)CONCAT44(*(float *)(iVar3 + 0x40),*(float *)(iVar5 + 0x4c));
  uStack_11c = *(undefined4 *)(iVar4 + 0x40);
  uStack_118 = *(undefined4 *)(iVar4 + 0x44);
  uStack_114 = *(undefined4 *)(iVar4 + 0x48);
  uStack_110 = *(undefined4 *)(iVar4 + 0x4c);
  fStack_14c = *(float *)(iVar6 + 0x40);
  fStack_148 = *(float *)(iVar6 + 0x44);
  fStack_144 = *(float *)(iVar6 + 0x48);
  uStack_140._0_4_ = *(float *)(iVar6 + 0x4c);
  local_12c = fStack_16c - *(float *)(iVar3 + 0x40);
  fVar1 = uStack_140._4_4_ * local_12c + fStack_138 * (fStack_168 - fStack_158) +
          fStack_134 * (fStack_164 - afStack_154[0]);
  local_12c = local_12c - fVar1 * uStack_140._4_4_;
  local_128 = (double)CONCAT44((fStack_164 - afStack_154[0]) - fVar1 * fStack_134,
                               (fStack_168 - fStack_158) - fStack_138 * fVar1);
  uStack_1e0 = (double)CONCAT44(uStack_1e0._4_4_,iVar4 + 0x10);
  pfStack_1e8 = &fStack_19c;
  afStack_18c[3] = (float)uStack_140 - *(float *)(iVar5 + 0x4c);
  fStack_1c0 = (fStack_144 - fStack_164) * fStack_134 +
               (fStack_14c - fStack_16c) * uStack_140._4_4_ + (fStack_148 - fStack_168) * fStack_138
  ;
  fStack_1a0 = fStack_1c0 * local_130;
  fStack_17c = (fStack_14c - fStack_16c) - fStack_1c0 * uStack_140._4_4_;
  fStack_178 = (fStack_148 - fStack_168) - fStack_1c0 * fStack_138;
  fStack_174 = (fStack_144 - fStack_164) - fStack_1c0 * fStack_134;
  fStack_170 = afStack_18c[3] - fStack_1a0;
  fStack_19c = 1.0;
  afStack_18c[2] = 1.0;
  fStack_198 = 0.0;
  fStack_194 = 0.0;
  uStack_1ac = 0;
  uStack_1a8 = 5.26354424712089e-315;
  afStack_18c[0] = 0.0;
  afStack_18c[1] = 0.0;
  fStack_1ec = 2.0853496e-38;
  pfStack_1e4 = pfStack_1e8;
  fStack_fc = fStack_17c;
  fStack_f8 = fStack_178;
  fStack_f4 = fStack_174;
  fStack_f0 = fStack_170;
  D3DXVec3TransformNormal();
  fStack_1ec = (float)(param_1[3] + 0x10);
  pfStack_1f4 = &fStack_1b8;
  fStack_1f8 = 2.0853524e-38;
  pfStack_1f0 = pfStack_1f4;
  D3DXVec3TransformNormal();
  fStack_1f8 = (float)(param_1[3] + 0x10);
  fStack_200 = (float)((int)&uStack_1a8 + 4);
  fStack_204 = 2.0853552e-38;
  fStack_1fc = fStack_200;
  D3DXVec3TransformNormal();
  pfStack_1e8 = (float *)(unaff_EDI * unaff_EDI + unaff_ESI * unaff_ESI + unaff_EBX * unaff_EBX);
  pfStack_1d4 = (float *)(param_5[2] * param_5[2] + *param_5 * *param_5 + param_5[1] * param_5[1]);
  pfStack_1e4 = (float *)(unaff_EBX * param_5[2] + unaff_EDI * *param_5 + param_5[1] * unaff_ESI);
  uStack_1e0 = (double)(float)pfStack_1e4;
  fStack_204 = 2.0853699e-38;
  fVar8 = (float10)FUN_00fdef70();
  pfStack_1e4 = (float *)(float)fVar8;
  fStack_204 = 2.0853729e-38;
  fVar8 = (float10)FUN_00fdef70();
  fStack_204 = (float)uStack_1e0 / ((float)fVar8 * (float)pfStack_1e4);
  fStack_208 = 2.0853775e-38;
  pfStack_1e8 = (float *)fStack_204;
  fVar8 = (float10)FUN_00ddbb50();
  if (fVar8 < (float10)1.0471976 == (fVar8 == (float10)1.0471976)) {
    pfStack_1e4 = (float *)0x0;
  }
  else {
    fStack_1c0 = (float)uStack_140 - (float)param_1[0x20];
    fStack_1bc = uStack_140._4_4_ - (float)param_1[0x21];
    fStack_1b8 = fStack_138 - (float)param_1[0x22];
    fVar1 = fStack_1b8 * (float)param_1[0x26] +
            fStack_1c0 * (float)param_1[0x24] + fStack_1bc * (float)param_1[0x25];
    fVar10 = fVar1 * (float)param_1[0x24];
    fVar11 = fVar1 * (float)param_1[0x25];
    fVar1 = fVar1 * (float)param_1[0x26];
    pfStack_1e8 = (float *)(fVar1 * fVar1 + fVar10 * fVar10 + fVar11 * fVar11);
    fStack_204 = 2.0854038e-38;
    fVar8 = (float10)FUN_00fdef70();
    pfStack_1e4 = (float *)(float)fVar8;
    if (fVar1 * (float)param_1[0x26] + fVar10 * (float)param_1[0x24] + fVar11 * (float)param_1[0x25]
        < 0.0) {
      pfStack_1e4 = (float *)((float)pfStack_1e4 * -1.0);
    }
    fStack_1c0 = (float)uStack_140 - *param_4;
    fStack_1bc = uStack_140._4_4_ - param_4[1];
    fStack_1b8 = fStack_138 - param_4[2];
    fVar1 = fStack_1b8 * param_5[2] + fStack_1c0 * *param_5 + fStack_1bc * param_5[1];
    fVar10 = fVar1 * *param_5;
    fVar11 = fVar1 * param_5[1];
    fVar1 = fVar1 * param_5[2];
    pfStack_1e8 = (float *)(fVar1 * fVar1 + fVar10 * fVar10 + fVar11 * fVar11);
    fStack_204 = 2.0854345e-38;
    fVar8 = (float10)FUN_00fdef70();
    pfStack_1d4 = (float *)(float)fVar8;
    pfStack_1e8 = (float *)(fVar1 * param_5[2] + fVar10 * *param_5 + fVar11 * param_5[1]);
    if ((float)pfStack_1e8 < 0.0) {
      pfStack_1d4 = (float *)((float)pfStack_1d4 * -1.0);
    }
    pfVar7 = pfStack_1d4;
    if ((float)pfStack_1e4 < (float)pfStack_1d4) {
      pfVar7 = pfStack_1e4;
    }
    pfStack_1e4 = (float *)(1.0 - ((float)pfVar7 - (float)param_1[0x14]) / (float)param_1[0x14]);
    if (0.0 <= (float)pfStack_1e4) {
      if (1.0 < (float)pfStack_1e4) {
        pfStack_1e4 = (float *)0x3f800000;
      }
    }
    else {
      pfStack_1e4 = (float *)0x0;
    }
  }
  fStack_208 = (float)(param_1[3] + 0x50);
  puStack_20c = &uStack_140;
  fStack_1c4 = param_2 * param_5[3];
  iVar3 = param_1[2];
  fStack_204 = (float)(iVar3 + 0x10);
  uStack_140 = (double)CONCAT44(param_5[1] * param_2 + uStack_140._4_4_,
                                param_2 * *param_5 + (float)uStack_140);
  fStack_138 = param_2 * param_5[2] + fStack_138;
  fStack_134 = fStack_1c4 + fStack_134;
  fStack_170 = fStack_170 + param_2 * *param_5;
  fStack_16c = fStack_16c + param_5[1] * param_2;
  fStack_168 = param_2 * param_5[2] + fStack_168;
  fStack_164 = fStack_1c4 + fStack_164;
  fStack_210 = 2.0854876e-38;
  D3DXVec3TransformNormal();
  fStack_14c = *(float *)(iVar3 + 0x40) + fStack_14c;
  fStack_210 = (float)(param_1[2] + 0x10);
  puStack_214 = &stack0xfffffe34;
  fStack_218 = (float)((int)&uStack_1e0 + 4);
  fStack_148 = *(float *)(iVar3 + 0x44) + fStack_148;
  fStack_144 = *(float *)(iVar3 + 0x48) + fStack_144;
  fVar10 = 1.0;
  fVar11 = 0.0;
  fStack_1c4 = 0.0;
  fStack_21c = 2.0855001e-38;
  D3DXVec3TransformNormal();
  pfStack_1d8 = (float *)0x0;
  fStack_21c = (float)(param_1[2] + 0x10);
  pfStack_1d4 = (float *)0x3f800000;
  fVar9 = 0.0;
  ppfStack_220 = &pfStack_1d8;
  puStack_224 = auStack_108;
  fStack_228 = 2.0855058e-38;
  D3DXVec3TransformNormal();
  pfStack_1e4 = (float *)0x0;
  fStack_228 = (float)(param_1[2] + 0x10);
  ppfStack_22c = &pfStack_1e4;
  uStack_1e0 = 0.0078125;
  puStack_230 = auStack_104;
  pfStack_234 = (float *)0xe31794;
  D3DXVec3TransformNormal();
  fVar1 = (float)param_1[0x26] * (float)param_1[0x26] +
          (float)param_1[0x24] * (float)param_1[0x24] + (float)param_1[0x25] * (float)param_1[0x25];
  if (fVar1 != 0.0) {
    fVar1 = (((float)param_1[0x22] * (float)param_1[0x26] +
             (float)param_1[0x24] * (float)param_1[0x20] +
             (float)param_1[0x21] * (float)param_1[0x25]) -
            (fStack_198 * (float)param_1[0x26] +
            (float)param_1[0x24] * fStack_1a0 + fStack_19c * (float)param_1[0x25])) / fVar1;
    fVar9 = fVar1 * (float)param_1[0x24] + fStack_1a0;
    fVar10 = (float)param_1[0x25] * fVar1 + fStack_19c;
    fVar11 = fStack_198 + (float)param_1[0x26] * fVar1;
    fStack_1c4 = fVar1 * (float)param_1[0x27] + fStack_194;
  }
  fStack_218 = (float)param_1[0x14];
  pfStack_234 = &fStack_200;
  pfStack_238 = (float *)&stack0xfffffe30;
  pfStack_23c = &fStack_1a0;
  uStack_1e0._0_4_ = fStack_218 * (float)param_1[0x24];
  ppfStack_240 = (float **)&uStack_140;
  uStack_1e0._4_4_ = (float *)((float)param_1[0x25] * fStack_218);
  pfStack_1d8 = (float *)((float)param_1[0x26] * fStack_218);
  pfStack_1d4 = (float *)(fStack_218 * (float)param_1[0x27]);
  fVar9 = fVar9 + (float)uStack_1e0;
  fVar10 = (float)uStack_1e0._4_4_ + fVar10;
  fVar11 = (float)pfStack_1d8 + fVar11;
  fStack_1c4 = (float)pfStack_1d4 + fStack_1c4;
  fStack_244 = 2.0855717e-38;
  FUN_00e23240();
  fVar1 = *(float *)(param_1[3] + 0x54);
  fVar2 = *(float *)(param_1[3] + 0x58);
  fStack_204 = fVar1 * fVar1 + fVar2 * fVar2;
  fStack_218 = fStack_138 * fStack_138 +
               (float)uStack_140 * (float)uStack_140 + uStack_140._4_4_ * uStack_140._4_4_;
  if (fStack_204 <= fStack_218) {
    fStack_204 = 0.0;
  }
  else {
    fStack_218 = fStack_204 - fStack_218;
    pfStack_234 = (float *)0xe319c6;
    fVar8 = (float10)FUN_00fdef70();
    fStack_204 = (float)fVar8;
    fVar9 = fStack_1fc * (float)param_1[0x26] - fStack_1f8 * (float)param_1[0x25];
    fVar10 = fStack_1f8 * (float)param_1[0x24] - fStack_200 * (float)param_1[0x26];
    uStack_160 = (double)CONCAT44(fVar10,fVar9);
    fVar11 = fStack_200 * (float)param_1[0x25] - (float)param_1[0x24] * fStack_1fc;
    fStack_218 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
    fStack_158 = fVar11;
    if (fStack_218 < 0.0 == (fStack_218 == 0.0)) {
      pfStack_238 = (float *)&stack0xfffffe30;
      pfStack_23c = (float *)0xe31ac0;
      pfStack_234 = pfStack_238;
      FUN_00ddf460();
    }
    else {
      pfStack_234 = (float *)&DAT_0163d0ac;
      pfStack_238 = (float *)0xe31ad5;
      FUN_00dd5650();
      fVar9 = 0.0;
      fVar10 = 1.0;
      fVar11 = 0.0;
    }
    pfStack_234 = &fStack_200;
    pfStack_238 = &fStack_170;
    fVar9 = fStack_204 * fVar9;
    pfStack_23c = &fStack_1a0;
    ppfStack_240 = &pfStack_1f0;
    fVar10 = fVar10 * fStack_204;
    fVar11 = fVar11 * fStack_204;
    fStack_1c4 = fStack_204 * fStack_1c4;
    uStack_1e0._0_4_ = fVar9 + (float)uStack_140;
    uStack_1e0._4_4_ = (float *)(fVar10 + uStack_140._4_4_);
    pfStack_1d8 = (float *)(fVar11 + fStack_138);
    fStack_244 = 2.0856481e-38;
    FUN_00e23240();
    local_128 = (double)(float)uStack_1e0._4_4_;
    uStack_140 = (double)(float)uStack_1e0;
    uStack_160 = (double)(float)pfStack_1d8;
    fStack_210 = (float)pfStack_1e8 * (float)pfStack_1d8 +
                 (float)uStack_1e0 * (float)pfStack_1f0 + (float)uStack_1e0._4_4_ * fStack_1ec;
    fStack_218 = fStack_1ec * fStack_1ec + (float)pfStack_1f0 * (float)pfStack_1f0 +
                 (float)pfStack_1e8 * (float)pfStack_1e8;
    pfStack_234 = (float *)0xe31bd3;
    fVar8 = (float10)FUN_00fdef70();
    fStack_204 = (float)fVar8;
    fStack_218 = (float)((float10)uStack_160 * (float10)uStack_160 +
                        (float10)uStack_140 * (float10)uStack_140 +
                        (float10)local_128 * (float10)local_128);
    pfStack_234 = (float *)0xe31c0b;
    fVar8 = (float10)FUN_00fdef70();
    fStack_218 = (float)fVar8;
    pfStack_234 = (float *)(fStack_210 / (fStack_218 * fStack_204));
    pfStack_238 = (float *)0xe31c2c;
    fStack_210 = (float)pfStack_234;
    fVar8 = (float10)FUN_00ddbb50();
    fStack_204 = (float)fVar8;
    if (fStack_204 != 0.0) {
      fVar1 = fStack_1ec * (float)pfStack_1d8 - (float)pfStack_1e8 * (float)uStack_1e0._4_4_;
      fVar2 = (float)uStack_1e0 * (float)pfStack_1e8 - (float)pfStack_1f0 * (float)pfStack_1d8;
      uStack_160 = (double)CONCAT44(fVar2,fVar1);
      fStack_158 = (float)uStack_1e0._4_4_ * (float)pfStack_1f0 - fStack_1ec * (float)uStack_1e0;
      if (fStack_1f8 * fStack_158 + fVar1 * fStack_200 + fStack_1fc * fVar2 < 0.0) {
        fStack_204 = fStack_204 * -1.0 * (float)puStack_214;
        goto LAB_00e31cf3;
      }
    }
    fStack_204 = fStack_204 * (float)puStack_214;
  }
LAB_00e31cf3:
  pfStack_238 = &fStack_200;
  pfStack_234 = (float *)(fStack_204 * param_3);
  pfStack_23c = (float *)auStack_c0;
  ppfStack_240 = (float **)0xe31d1c;
  fStack_210 = (float)pfStack_234;
  D3DXMatrixRotationAxis();
  ppfStack_240 = (float **)auStack_cc;
  fStack_248 = (float)(param_1[2] + 0x10);
  fStack_24c = 2.085713e-38;
  fStack_244 = fStack_248;
  D3DXMatrixMultiply();
  fStack_208 = fStack_1b8 - fVar11;
  fStack_204 = fStack_1b4 - fStack_1c4;
  fStack_200 = fStack_1b0 - fStack_1c0;
  fVar1 = fStack_1a0 * fStack_200 + fStack_204 * uStack_1a8._4_4_ + (float)uStack_1a8 * fStack_208;
  fStack_1f8 = fVar1 * (float)uStack_1a8;
  pfStack_1f4 = (float *)(fVar1 * uStack_1a8._4_4_);
  pfStack_1f0 = (float *)(fStack_1a0 * fVar1);
  fStack_218 = fStack_208 - fStack_1f8;
  puStack_214 = (undefined1 *)(fStack_204 - (float)pfStack_1f4);
  fStack_210 = fStack_200 - (float)pfStack_1f0;
  fStack_228 = fStack_190 * fStack_190 + fStack_194 * fStack_194 + fStack_198 * fStack_198;
  fStack_24c = 2.085745e-38;
  fVar8 = (float10)FUN_00fdef70();
  puStack_230 = (undefined1 *)(float)fVar8;
  fStack_228 = (float)uStack_160 * (float)uStack_160 +
               fStack_168 * fStack_168 + fStack_164 * fStack_164;
  fStack_24c = 2.0857537e-38;
  fStack_21c = (float)puStack_230;
  fVar8 = (float10)FUN_00fdef70();
  ppfStack_22c = (float **)(float)fVar8;
  fStack_228 = fStack_210 * fStack_210 +
               (float)puStack_214 * (float)puStack_214 + fStack_218 * fStack_218;
  fStack_24c = 2.0857612e-38;
  fVar8 = (float10)FUN_00fdef70();
  fVar1 = (float)fVar8;
  ppfStack_22c = (float **)
                 (((fVar1 * fVar1 + (float)puStack_230 * (float)puStack_230) -
                  (float)ppfStack_22c * (float)ppfStack_22c) /
                 (((float)puStack_230 + (float)puStack_230) * fVar1));
  if (-1.0 <= (float)ppfStack_22c) {
    if (1.0 < (float)ppfStack_22c) {
      ppfStack_22c = (float **)0x3f800000;
    }
  }
  else {
    ppfStack_22c = (float **)0xbf800000;
  }
  iVar3 = *param_1;
  if (iVar3 != 0) {
    param_1[4] = *(int *)(iVar3 + 0x90);
    param_1[5] = *(int *)(iVar3 + 0x94);
    param_1[6] = *(int *)(iVar3 + 0x98);
    param_1[7] = *(int *)(iVar3 + 0x9c);
  }
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    param_1[8] = *(int *)(iVar3 + 0x90);
    param_1[9] = *(int *)(iVar3 + 0x94);
    param_1[10] = *(int *)(iVar3 + 0x98);
    param_1[0xb] = *(int *)(iVar3 + 0x9c);
  }
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    param_1[0xc] = *(int *)(iVar3 + 0x90);
    param_1[0xd] = *(int *)(iVar3 + 0x94);
    param_1[0xe] = *(int *)(iVar3 + 0x98);
    param_1[0xf] = *(int *)(iVar3 + 0x9c);
  }
  iVar3 = param_1[3];
  if (iVar3 != 0) {
    param_1[0x10] = *(int *)(iVar3 + 0x90);
    param_1[0x11] = *(int *)(iVar3 + 0x94);
    param_1[0x12] = *(int *)(iVar3 + 0x98);
    param_1[0x13] = *(int *)(iVar3 + 0x9c);
  }
  fStack_24c = (fStack_190 * fStack_210 + fStack_218 * fStack_198 + fStack_194 * (float)puStack_214)
               / (fStack_21c * fVar1);
  puStack_250 = (undefined8 *)0xe31ffa;
  fStack_228 = fStack_24c;
  fVar8 = (float10)FUN_00ddbb50();
  puStack_230 = (undefined1 *)(float)fVar8;
  fStack_24c = 2.0858151e-38;
  fVar8 = (float10)FUN_00fdc4e0();
  fStack_24c = (float)fVar8 - (float)puStack_230;
  puStack_250 = &uStack_1a8;
  puStack_254 = &uStack_118;
  fStack_258 = 2.0858214e-38;
  fStack_228 = fStack_24c;
  D3DXMatrixRotationAxis();
  fStack_258 = (float)((int)&local_128 + 4);
  fStack_260 = (float)(*param_1 + 0x10);
  iStack_264 = 0xe3204b;
  fStack_25c = fStack_260;
  D3DXMatrixMultiply();
  iVar3 = *param_1;
  *(float *)(iVar3 + 0x40) = (float)uStack_1e0;
  *(float **)(iVar3 + 0x44) = uStack_1e0._4_4_;
  *(float **)(iVar3 + 0x48) = pfStack_1d8;
  iVar3 = *param_1;
  iStack_264 = iVar3 + 0x10;
  iStack_268 = param_1[1] + 0x50;
  ppfStack_26c = &pfStack_1f0;
  iStack_270 = 0xe32082;
  D3DXVec3TransformNormal();
  fStack_1fc = fStack_1fc + *(float *)(iVar3 + 0x40);
  iVar4 = param_1[1];
  pfStack_278 = afStack_18c;
  fStack_1f8 = *(float *)(iVar3 + 0x44) + fStack_1f8;
  pfStack_1f4 = (float *)(*(float *)(iVar3 + 0x48) + (float)pfStack_1f4);
  *(float *)(iVar4 + 0x40) = fStack_1fc;
  *(float *)(iVar4 + 0x44) = fStack_1f8;
  *(float **)(iVar4 + 0x48) = pfStack_1f4;
  iVar3 = param_1[1];
  iStack_270 = iVar3 + 0x10;
  iStack_274 = param_1[2] + 0x50;
  fStack_27c = 2.0858437e-38;
  D3DXVec3TransformNormal();
  fStack_248 = (*(float *)(iVar3 + 0x40) + fStack_198) - fStack_208;
  fStack_244 = (*(float *)(iVar3 + 0x44) + fStack_194) - fStack_204;
  fVar1 = (*(float *)(iVar3 + 0x48) + fStack_190) - fStack_200;
  fStack_1ec = afStack_18c[0] - fStack_1fc;
  fVar11 = fVar9 * fVar1 + (float)pfStack_1d4 * fStack_244 + (float)pfStack_1d8 * fStack_248;
  fStack_1bc = fVar11 * fVar10;
  fStack_248 = fStack_248 - fVar11 * (float)pfStack_1d8;
  fStack_244 = fStack_244 - (float)pfStack_1d4 * fVar11;
  ppfStack_240 = (float **)(fVar1 - fVar9 * fVar11);
  pfStack_23c = (float *)(fStack_1ec - fStack_1bc);
  fStack_1c4 = (float)pfStack_1e4 - fStack_204;
  fStack_1c0 = (float)uStack_1e0 - fStack_200;
  fVar1 = fVar9 * fStack_1c0 +
          (float)pfStack_1d4 * fStack_1c4 + ((float)pfStack_1e8 - fStack_208) * (float)pfStack_1d8;
  pfStack_238 = (float *)(fVar1 * (float)pfStack_1d8);
  pfStack_234 = (float *)((float)pfStack_1d4 * fVar1);
  puStack_230 = (undefined1 *)(fVar1 * fVar9);
  fStack_1f8 = ((float)pfStack_1e8 - fStack_208) - (float)pfStack_238;
  pfStack_1f4 = (float *)(fStack_1c4 - (float)pfStack_234);
  pfStack_1f0 = (float *)(fStack_1c0 - (float)puStack_230);
  fStack_260 = fStack_248 * fStack_248 + fStack_244 * fStack_244 +
               (float)ppfStack_240 * (float)ppfStack_240;
  uStack_1a8 = (double)(fStack_1f8 * fStack_248 + (float)pfStack_1f4 * fStack_244 +
                       (float)pfStack_1f0 * (float)ppfStack_240);
  fStack_258 = fStack_1f8 * fStack_1f8 + (float)pfStack_1f4 * (float)pfStack_1f4 +
               (float)pfStack_1f0 * (float)pfStack_1f0;
  fStack_27c = 2.0859348e-38;
  fStack_198 = fStack_248;
  fStack_194 = fStack_244;
  fStack_190 = (float)ppfStack_240;
  afStack_18c[0] = (float)pfStack_23c;
  fVar8 = (float10)FUN_00fdef70();
  fStack_25c = (float)fVar8;
  fStack_27c = 2.0859377e-38;
  fStack_258 = fStack_25c;
  fVar8 = (float10)FUN_00fdef70();
  fStack_27c = (float)uStack_1a8 / ((float)fVar8 * fStack_25c);
  ppfStack_280 = (float **)0xe32399;
  fStack_258 = fStack_27c;
  fVar8 = (float10)FUN_00ddbb50();
  fStack_258 = (float)fVar8;
  ppfStack_280 = &pfStack_1d8;
  pfStack_284 = &fStack_148;
  fStack_27c = -fStack_258;
  D3DXMatrixRotationAxis();
  D3DXMatrixMultiply(param_1[1] + 0x10,param_1[1] + 0x10,afStack_154);
  iVar3 = param_1[1];
  *(float ***)(iVar3 + 0x40) = ppfStack_220;
  *(float *)(iVar3 + 0x44) = fStack_21c;
  *(float *)(iVar3 + 0x48) = fStack_218;
  FUN_00e30580(*param_1);
  FUN_00e30580(param_1[1]);
  FUN_00e30580(param_1[2]);
  *(ushort *)(*param_1 + 0xa2) = *(ushort *)(*param_1 + 0xa2) | 0x10;
  iVar3 = *param_1;
  if ((*(ushort *)(iVar3 + 0xa2) & 0x4002) == 0) {
    FUN_00ddb590(iVar3 + 0x60,iVar3 + 0x90);
  }
  iVar3 = param_1[1];
  if ((*(ushort *)(iVar3 + 0xa2) & 0x4002) == 0) {
    FUN_00ddb590(iVar3 + 0x60,iVar3 + 0x90);
  }
  iVar3 = param_1[2];
  if ((*(ushort *)(iVar3 + 0xa2) & 0x4002) == 0) {
    FUN_00ddb590(iVar3 + 0x60,iVar3 + 0x90);
  }
  iVar3 = param_1[3];
  if ((*(ushort *)(iVar3 + 0xa2) & 0x4002) == 0) {
    FUN_00ddb590(iVar3 + 0x60,iVar3 + 0x90);
  }
  param_1[0x16] = 1;
  __security_check_cookie(uStack_d4 ^ (uint)&pfStack_284);
  return;
}

// 00E324C0  FUN_00e324c0  size=95  [between]
void __thiscall FUN_00e324c0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *param_1 = param_3;
  if (param_3 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00a12210(param_3);
  }
  param_1[4] = 0;
  param_1[1] = iVar1;
  local_20 = 0;
  local_1c = 0x3f800000;
  param_1[3] = 0;
  local_18 = 0;
  D3DXVec3TransformNormal(&local_20,&local_20,param_2 + 0xb0);
  return;
}

// 00E32520  Animation::HandIk::vf14  size=3393  [class]
void __fastcall Animation::HandIk::vf14(int param_1)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float unaff_EBX;
  float fVar5;
  float10 fVar6;
  float **ppfStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  float *pfStack_294;
  float *pfStack_290;
  float **ppfStack_28c;
  float fStack_288;
  int iStack_284;
  int iStack_280;
  float *pfStack_27c;
  float *pfStack_278;
  float *pfStack_274;
  float *pfStack_270;
  float *pfStack_26c;
  float fStack_268;
  float *pfStack_264;
  float *pfStack_260;
  float *pfStack_25c;
  float fStack_258;
  float *pfStack_254;
  float *pfStack_250;
  float *pfStack_24c;
  float *pfStack_248;
  float fStack_234;
  undefined1 *puStack_230;
  undefined1 *puStack_22c;
  undefined1 *puStack_228;
  float *pfStack_224;
  float *pfStack_220;
  undefined1 *puStack_21c;
  float *pfStack_218;
  float *pfStack_214;
  float *pfStack_210;
  float *pfStack_20c;
  undefined1 *puStack_208;
  float fStack_204;
  float *pfStack_200;
  undefined1 *puStack_1fc;
  float *pfStack_1f8;
  float *pfStack_1f4;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float *pfStack_1c8;
  undefined1 auStack_1c4 [8];
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float local_17c;
  float fStack_178;
  float local_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134 [6];
  undefined1 auStack_11c [12];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [16];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  undefined1 local_e0 [12];
  uint uStack_d4;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 auStack_ac [28];
  undefined1 auStack_90 [124];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_1e4;
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x80) != 0)) {
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar4 + 0x90);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar4 + 0x94);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar4 + 0x98);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar4 + 0x9c);
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar4 + 0x90);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar4 + 0x94);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar4 + 0x98);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar4 + 0x9c);
    }
    iVar4 = *(int *)(param_1 + 0x1c);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar4 + 0x90);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar4 + 0x94);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar4 + 0x98);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x9c);
    }
    local_174 = *(float *)(param_1 + 0xd4);
    if (local_174 != 0.0) {
      iVar4 = *(int *)(param_1 + 0x14);
      local_160 = *(float *)(iVar4 + 0x40);
      local_15c = *(float *)(iVar4 + 0x44);
      local_158 = *(float *)(iVar4 + 0x48);
      local_154 = *(float *)(iVar4 + 0x4c);
      iVar4 = *(int *)(param_1 + 0x18);
      local_150 = *(float *)(iVar4 + 0x40);
      local_14c = *(float *)(iVar4 + 0x44);
      local_148 = *(float *)(iVar4 + 0x48);
      local_144 = *(float *)(iVar4 + 0x4c);
      local_140 = local_150 - local_160;
      local_13c = local_14c - local_15c;
      local_138 = local_148 - local_158;
      local_134[0] = local_144 - local_154;
      local_17c = local_13c * local_13c + local_140 * local_140 + local_138 * local_138;
      if (local_17c < 0.0 == (local_17c == 0.0)) {
        pfStack_1f8 = &local_140;
        puStack_1fc = (undefined1 *)0xe3272e;
        pfStack_1f4 = pfStack_1f8;
        FUN_00ddf460();
      }
      else {
        pfStack_1f4 = (float *)&DAT_0163d0ac;
        pfStack_1f8 = (float *)0xe32743;
        FUN_00dd5650();
        local_140 = 0.0;
        local_13c = 1.0;
        local_138 = 0.0;
      }
      if (*(int *)(param_1 + 0x80) == 0) {
        fVar5 = (float)(param_1 + 0x90);
      }
      else {
        fVar5 = (float)(*(int *)(param_1 + 0x80) + 0x10);
      }
      pfStack_1f4 = (float *)(*(int *)(param_1 + 0x1c) + 0x10);
      pfStack_1f8 = (float *)0x0;
      puStack_1fc = local_e0;
      pfStack_200 = (float *)0xe3278a;
      D3DXMatrixInverse();
      pfStack_200 = &fStack_ec;
      puStack_208 = auStack_ac;
      pfStack_20c = (float *)0xe327a0;
      fStack_204 = fVar5;
      D3DXMatrixMultiply();
      pfStack_20c = &fStack_b8;
      pfStack_210 = (float *)auStack_108;
      pfStack_214 = (float *)0xe327b5;
      FUN_00ddba00();
      iVar4 = *(int *)(param_1 + 0x18);
      fStack_1b8 = *(float *)(iVar4 + 0x40);
      fStack_1b4 = *(float *)(iVar4 + 0x44);
      fStack_1b0 = *(float *)(iVar4 + 0x48);
      fStack_1ac = *(float *)(iVar4 + 0x4c);
      iVar4 = *(int *)(param_1 + 0x1c);
      fStack_1d8 = *(float *)(iVar4 + 0x40);
      fStack_1d4 = *(float *)(iVar4 + 0x44);
      fStack_1d0 = *(float *)(iVar4 + 0x48);
      fStack_1cc = *(float *)(iVar4 + 0x4c);
      local_148 = *(float *)((int)fVar5 + 0x30);
      local_144 = *(float *)((int)fVar5 + 0x34);
      local_140 = *(float *)((int)fVar5 + 0x38);
      local_13c = *(float *)((int)fVar5 + 0x3c);
      pfStack_1f8 = (float *)((local_148 - fStack_1d8) * 0.5 + fStack_1b8);
      pfStack_1f4 = (float *)((local_144 - fStack_1d4) * 0.5 + fStack_1b4);
      fVar5 = (local_13c - fStack_1cc) * 0.5 + fStack_1ac;
      fStack_1bc = local_148 - fStack_178;
      fStack_1a4 = local_144 - local_174;
      fStack_1a0 = local_140 - fStack_170;
      fStack_19c = local_13c - fStack_16c;
      fStack_188 = (float)pfStack_1f8 - fStack_178;
      fStack_184 = (float)pfStack_1f4 - local_174;
      fStack_180 = ((local_140 - fStack_1d0) * 0.5 + fStack_1b0) - fStack_170;
      local_17c = fVar5 - fStack_16c;
      puStack_1fc = (undefined1 *)
                    (fStack_1a4 * fStack_1a4 + fStack_1bc * fStack_1bc + fStack_1a0 * fStack_1a0);
      fStack_1a8 = fStack_1bc;
      fStack_194 = fStack_1a0;
      fStack_190 = fStack_1a4;
      if ((float)puStack_1fc < 0.0 == ((float)puStack_1fc == 0.0)) {
        pfStack_210 = &fStack_1a8;
        pfStack_214 = (float *)0xe329bd;
        pfStack_20c = pfStack_210;
        FUN_00ddf460();
      }
      else {
        pfStack_20c = (float *)&DAT_0163d0ac;
        pfStack_210 = (float *)0xe329d4;
        FUN_00dd5650();
        fStack_1a8 = 0.0;
        fStack_1a4 = 1.0;
        fStack_1a0 = 0.0;
      }
      puStack_1fc = (undefined1 *)
                    (fStack_184 * fStack_184 + fStack_188 * fStack_188 + fStack_180 * fStack_180);
      if ((float)puStack_1fc < 0.0 == ((float)puStack_1fc == 0.0)) {
        pfStack_210 = &fStack_188;
        pfStack_214 = (float *)0xe32a5e;
        pfStack_20c = pfStack_210;
        FUN_00ddf460();
      }
      else {
        pfStack_20c = (float *)&DAT_0163d0ac;
        pfStack_210 = (float *)0xe32a75;
        FUN_00dd5650();
        fStack_188 = 0.0;
        fStack_184 = 1.0;
        fStack_180 = 0.0;
      }
      pfStack_1f8 = (float *)(fStack_1a4 * fStack_180 - fStack_1a0 * fStack_184);
      pfStack_1f4 = (float *)(fStack_188 * fStack_1a0 - fStack_1a8 * fStack_180);
      fVar3 = fStack_184 * fStack_1a8 - fStack_1a4 * fStack_188;
      puStack_1fc = (undefined1 *)
                    ((float)pfStack_1f4 * (float)pfStack_1f4 +
                     (float)pfStack_1f8 * (float)pfStack_1f8 + fVar3 * fVar3);
      fStack_168 = (float)pfStack_1f8;
      fStack_164 = (float)pfStack_1f4;
      local_160 = fVar3;
      if ((float)puStack_1fc < 0.0 == ((float)puStack_1fc == 0.0)) {
        pfStack_210 = &fStack_168;
        pfStack_214 = (float *)0xe32b71;
        pfStack_20c = pfStack_210;
        FUN_00ddf460();
      }
      else {
        pfStack_20c = (float *)&DAT_0163d0ac;
        pfStack_210 = (float *)0xe32b86;
        FUN_00dd5650();
        fStack_168 = 0.0;
        fStack_164 = 1.0;
        local_160 = 0.0;
      }
      fStack_1dc = fStack_180 * fStack_1a0 + fStack_184 * fStack_1a4 + fStack_188 * fStack_1a8;
      fStack_1d8 = fStack_1bc;
      fStack_1d4 = fStack_190;
      fStack_1d0 = fStack_194;
      puStack_1fc = (undefined1 *)
                    (fStack_194 * fStack_194 + fStack_190 * fStack_190 + fStack_1bc * fStack_1bc);
      pfStack_20c = (float *)0xe32c0c;
      fVar6 = (float10)FUN_00fdef70();
      fStack_194 = (float)fVar6;
      fVar2 = *(float *)(param_1 + 0x54);
      fStack_190 = *(float *)(param_1 + 0x58);
      puStack_1fc = (undefined1 *)(fStack_190 * fStack_190);
      fStack_1bc = ((fVar2 * fVar2 + fStack_194 * fStack_194) - (float)puStack_1fc) /
                   ((fVar2 + fVar2) * fStack_194);
      if (-1.0 <= fStack_1bc) {
        if (1.0 < fStack_1bc) {
          fStack_1bc = 1.0;
        }
      }
      else {
        fStack_1bc = -1.0;
      }
      pfStack_20c = &fStack_188;
      pfStack_210 = &local_158;
      pfStack_214 = &fStack_1b8;
      pfStack_218 = (float *)0xe32cb8;
      thunk_FUN_00de1080();
      pfStack_20c = (float *)0xe32cc4;
      fVar6 = (float10)FUN_00fdc4e0();
      puStack_1fc = (undefined1 *)(float)fVar6;
      pfStack_20c = (float *)0xe32cd9;
      fVar6 = (float10)FUN_00fdc4e0();
      pfStack_20c = (float *)((float)puStack_1fc - (float)fVar6);
      pfStack_210 = &fStack_168;
      pfStack_214 = &fStack_1d8;
      pfStack_218 = (float *)0xe32d03;
      fStack_1dc = (float)pfStack_20c;
      D3DXQuaternionRotationAxis();
      pfStack_218 = &fStack_1e4;
      puStack_21c = auStack_1c4;
      pfStack_220 = local_134;
      pfStack_224 = (float *)0xe32d1a;
      D3DXQuaternionMultiply();
      pfStack_224 = &local_140;
      puStack_228 = auStack_90;
      puStack_22c = (undefined1 *)0xe32d2f;
      FUN_00ddb9f0();
      pfStack_224 = (float *)auStack_90;
      puStack_228 = (undefined1 *)(*(int *)(param_1 + 0x14) + 0x10);
      puStack_22c = auStack_110;
      puStack_230 = (undefined1 *)0xe32d4e;
      D3DXMatrixMultiply();
      fStack_ec = fStack_19c;
      puStack_230 = auStack_11c;
      uStack_e8 = uStack_198;
      fStack_e4 = fStack_194;
      fStack_234 = (float)(param_1 + 0x60);
      D3DXVec3TransformNormal();
      puStack_208 = (undefined1 *)((float)puStack_208 + fStack_f8);
      fStack_204 = fStack_f4 + fStack_204;
      pfStack_200 = (float *)(fStack_f0 + (float)pfStack_200);
      pfStack_248 = (float *)0xe32dd1;
      FID_conflict__memcpy(&uStack_e8,(void *)(*(int *)(param_1 + 0x18) + 0x10),0x40);
      fStack_b8 = (float)puStack_208;
      fStack_b4 = fStack_204;
      fStack_b0 = (float)pfStack_200;
      pfStack_248 = (float *)0xe32e0b;
      D3DXVec3TransformNormal();
      pfStack_1f4 = (float *)(fStack_c4 + (float)pfStack_1f4);
      fVar5 = fStack_bc + fVar5;
      fStack_234 = (float)pfStack_1f4 - fStack_c4;
      puStack_230 = (undefined1 *)((fStack_c0 + fVar3) - fStack_c0);
      puStack_22c = (undefined1 *)(fVar5 - fStack_bc);
      puStack_228 = (undefined1 *)(unaff_EBX - fStack_b8);
      fStack_1e4 = fStack_184 - fStack_c4;
      fStack_1e0 = fStack_180 - fStack_c0;
      fStack_1dc = local_17c - fStack_bc;
      fStack_1d8 = fStack_178 - fStack_b8;
      pfStack_218 = (float *)((float)puStack_230 * (float)puStack_230 + fStack_234 * fStack_234 +
                             (float)puStack_22c * (float)puStack_22c);
      if ((float)pfStack_218 < 0.0 == ((float)pfStack_218 == 0.0)) {
        pfStack_24c = &fStack_234;
        pfStack_250 = (float *)0xe32f12;
        pfStack_248 = pfStack_24c;
        FUN_00ddf460();
      }
      else {
        pfStack_248 = (float *)&DAT_0163d0ac;
        pfStack_24c = (float *)0xe32f29;
        FUN_00dd5650();
        fStack_234 = 0.0;
        puStack_230 = (undefined1 *)0x3f800000;
        puStack_22c = (undefined1 *)0x0;
      }
      pfStack_218 = (float *)(fStack_1e0 * fStack_1e0 + fStack_1e4 * fStack_1e4 +
                             fStack_1dc * fStack_1dc);
      if ((float)pfStack_218 < 0.0 == ((float)pfStack_218 == 0.0)) {
        pfStack_24c = &fStack_1e4;
        pfStack_250 = (float *)0xe32fa7;
        pfStack_248 = pfStack_24c;
        FUN_00ddf460();
      }
      else {
        pfStack_248 = (float *)&DAT_0163d0ac;
        pfStack_24c = (float *)0xe32fbc;
        FUN_00dd5650();
        fStack_1e4 = 0.0;
        fStack_1e0 = 1.0;
        fStack_1dc = 0.0;
      }
      pfStack_248 = &fStack_1e4;
      pfStack_24c = &fStack_234;
      pfStack_250 = &local_154;
      pfStack_254 = (float *)0xe32fe6;
      thunk_FUN_00de1080();
      fStack_16c = 0.0;
      fStack_170 = 0.0;
      pfStack_254 = &fStack_164;
      local_174 = 0.0;
      pfStack_250 = &local_174;
      fStack_168 = 1.0;
      pfStack_248 = pfStack_1c8;
      fStack_258 = 2.0863937e-38;
      pfStack_24c = pfStack_254;
      D3DXQuaternionSlerp();
      fStack_258 = fStack_1d8;
      pfStack_264 = &fStack_164;
      pfStack_260 = &fStack_184;
      fStack_268 = 2.0863982e-38;
      pfStack_25c = pfStack_264;
      D3DXQuaternionSlerp();
      pfStack_274 = &fStack_164;
      pfStack_270 = &fStack_194;
      pfStack_278 = (float *)0xe3306b;
      pfStack_26c = pfStack_274;
      fStack_268 = unaff_EBX;
      D3DXQuaternionSlerp();
      pfStack_278 = &fStack_194;
      pfStack_27c = &fStack_164;
      iStack_280 = 0xe33080;
      FUN_00ddb9f0();
      pfStack_278 = &fStack_164;
      iStack_280 = *(int *)(param_1 + 0x14) + 0x10;
      iStack_284 = 0xe33098;
      pfStack_27c = (float *)iStack_280;
      D3DXMatrixMultiply();
      iVar4 = *(int *)(param_1 + 0x14);
      *(float *)(iVar4 + 0x40) = fStack_c0 + fVar3;
      ppfStack_28c = &pfStack_250;
      *(float *)(iVar4 + 0x44) = fVar5;
      *(float *)(iVar4 + 0x48) = unaff_EBX;
      iVar4 = *(int *)(param_1 + 0x14);
      iStack_284 = iVar4 + 0x10;
      pfStack_290 = (float *)0xe330cb;
      fStack_288 = (float)(param_1 + 0x60);
      D3DXVec3TransformNormal();
      pfStack_25c = (float *)(*(float *)(iVar4 + 0x40) + (float)pfStack_25c);
      pfStack_290 = &fStack_19c;
      fStack_258 = *(float *)(iVar4 + 0x44) + fStack_258;
      pfStack_254 = (float *)(*(float *)(iVar4 + 0x48) + (float)pfStack_254);
      pfStack_294 = &local_17c;
      iStack_298 = 0xe33101;
      FUN_00ddb9f0();
      pfStack_290 = &local_17c;
      iStack_298 = *(int *)(param_1 + 0x18) + 0x10;
      iStack_29c = 0xe33119;
      pfStack_294 = (float *)iStack_298;
      D3DXMatrixMultiply();
      iVar4 = *(int *)(param_1 + 0x18);
      *(float *)(iVar4 + 0x40) = fStack_268;
      *(float **)(iVar4 + 0x44) = pfStack_264;
      *(float **)(iVar4 + 0x48) = pfStack_260;
      iVar4 = *(int *)(param_1 + 0x18);
      iStack_29c = iVar4 + 0x10;
      iStack_2a0 = param_1 + 0x70;
      ppfStack_2a4 = &pfStack_248;
      D3DXVec3TransformNormal();
      pfStack_254 = (float *)(*(float *)(iVar4 + 0x40) + (float)pfStack_254);
      pfStack_250 = (float *)(*(float *)(iVar4 + 0x44) + (float)pfStack_250);
      pfStack_24c = (float *)(*(float *)(iVar4 + 0x48) + (float)pfStack_24c);
      FUN_00ddb9f0(&fStack_194,&fStack_1a4);
      iVar4 = *(int *)(param_1 + 0x1c) + 0x10;
      D3DXMatrixMultiply(iVar4,&fStack_194,iVar4);
      iVar4 = *(int *)(param_1 + 0x1c);
      *(float **)(iVar4 + 0x40) = pfStack_260;
      *(float **)(iVar4 + 0x44) = pfStack_25c;
      *(float *)(iVar4 + 0x48) = fStack_258;
      FUN_00e30580(*(undefined4 *)(param_1 + 0x14));
      FUN_00e30580(*(undefined4 *)(param_1 + 0x18));
      FUN_00e30580(*(undefined4 *)(param_1 + 0x1c));
      puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0xa2);
      *puVar1 = *puVar1 | 0x10;
      iVar4 = *(int *)(param_1 + 0x14);
      if ((*(ushort *)(iVar4 + 0xa2) & 0x4002) == 0) {
        FUN_00ddb590(iVar4 + 0x60,iVar4 + 0x90);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if ((*(ushort *)(iVar4 + 0xa2) & 0x4002) == 0) {
        FUN_00ddb590(iVar4 + 0x60,iVar4 + 0x90);
      }
      iVar4 = *(int *)(param_1 + 0x1c);
      if ((*(ushort *)(iVar4 + 0xa2) & 0x4002) == 0) {
        FUN_00ddb590(iVar4 + 0x60,iVar4 + 0x90);
      }
      *(undefined4 *)(param_1 + 0xe0) = 1;
      __security_check_cookie(uStack_d4 ^ (uint)&ppfStack_2a4);
      return;
    }
  }
  __security_check_cookie(local_14 ^ (uint)&fStack_1e4);
  return;
}

// 00E33270  FUN_00e33270  size=58  [between]
int __thiscall FUN_00e33270(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e269c0(param_2);
  if (iVar1 == -1) {
    if (*param_1 != 0) {
      iVar1 = FUN_00e2cf80(*param_1,param_2);
      if (iVar1 != 0) {
        return *(int *)(iVar1 + 0x18);
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}

// 00E332B0  FUN_00e332b0  size=156  [between]
void __thiscall FUN_00e332b0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar1 = (int *)param_1[4];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)*param_1;
  }
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  if (iVar2 != 0) {
    *param_2 = &local_50;
    param_2[1] = param_3;
    param_2[2] = local_50;
    param_2[3] = uStack_4c;
    param_2[4] = uStack_48;
    param_2[5] = uStack_44;
    param_2[6] = uStack_40;
    param_2[7] = uStack_3c;
    param_2[8] = uStack_38;
    param_2[9] = uStack_34;
    param_2[10] = uStack_30;
    param_2[0xb] = uStack_2c;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}

// 00E33350  FUN_00e33350  size=54  [between]
void __fastcall FUN_00e33350(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + uVar2 * 4);
    if (iVar1 != 0) {
      FUN_00e2cfe0();
      FUN_00dd4920(iVar1);
      *(undefined4 *)(param_1 + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 00E333A0  FUN_00e333a0  size=474  [between]
undefined4 __thiscall
FUN_00e333a0(uint *param_1,float param_2,float param_3,float param_4,int param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  if ((float)param_1[7] <= 0.0) {
    return 0;
  }
  if ((float)param_1[1] != 0.0) {
    *param_1 = *param_1 & 0xffffffbf;
  }
  uVar2 = param_1[2];
  if (0.0 < param_4) {
    param_2 = ((float)param_1[7] * param_2) / param_4;
  }
  fVar5 = (float10)FUN_00e2d8e0(param_2 * param_3 * (float)param_1[1],uVar2);
  uVar4 = *param_1;
  fVar1 = (float)fVar5;
  param_1[6] = (uint)fVar1;
  if ((uVar4 & 5) == 0) {
    param_1[2] = (uint)((float)param_1[2] + fVar1);
    param_1[3] = uVar2;
    if (0.0 < fVar1) {
      uVar2 = 1;
      goto LAB_00e33513;
    }
    if (fVar1 < 0.0) {
      uVar2 = 0xffffffff;
      goto LAB_00e33513;
    }
  }
  else {
    if ((float)param_1[3] < 0.0) {
      if ((float)param_1[1] <= 0.0) {
        if (0.0 <= (float)param_1[1]) {
          fVar1 = 0.0;
          uVar2 = 0;
        }
        else {
          fVar1 = 0.0;
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 1;
        fVar1 = 0.0;
      }
      goto LAB_00e33513;
    }
    fVar1 = (float)param_1[2] - (float)param_1[3];
    if (fVar1 < 0.0) {
      fVar1 = fVar1 + (float)param_1[7];
    }
    param_1[2] = (uint)((float)param_1[3] + fVar1);
    if (0.0 < fVar1) {
      uVar2 = 1;
      goto LAB_00e33513;
    }
    if (fVar1 < 0.0) {
      uVar2 = 0xffffffff;
      goto LAB_00e33513;
    }
  }
  uVar2 = 0;
LAB_00e33513:
  param_1[4] = (uint)fVar1;
  param_1[5] = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar4 & 0xfffffffd;
  }
  else {
    uVar4 = uVar4 | 2;
  }
  *param_1 = uVar4;
  if ((uVar4 & 4) == 0) {
    uVar4 = uVar4 & 0xfffffff7;
  }
  else {
    uVar4 = uVar4 | 8;
  }
  *param_1 = uVar4;
  if ((uVar4 & 0x10) == 0) {
    uVar4 = uVar4 & 0xffffffdf;
  }
  else {
    uVar4 = uVar4 | 0x20;
  }
  *param_1 = uVar4;
  *param_1 = *param_1 & 0xffffffea;
  FUN_00e25bb0(fVar1,param_5);
  iVar3 = FUN_00e25d10();
  if ((iVar3 != 0) && (*param_1 = *param_1 | 0x40, param_5 == 0)) {
    param_1[1] = 0;
  }
  return 1;
}

// 00E33580  FUN_00e33580  size=215  [between]
void __thiscall FUN_00e33580(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int local_14;
  
  local_14 = 0;
  if (0 < param_1[1]) {
    piVar2 = param_1 + 2;
    do {
      iVar1 = *piVar2;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (iVar1 < 0x18) {
        iVar1 = *(int *)(*param_1 + iVar1 * 4);
      }
      else {
        iVar1 = 0;
      }
      if ((param_2 & 1) != 0) {
        *(undefined4 *)(iVar1 + 0x38) = param_3;
      }
      if ((param_2 & 2) != 0) {
        *(undefined4 *)(iVar1 + 0x5c) = param_3;
      }
      if ((param_2 & 4) != 0) {
        *(undefined4 *)(iVar1 + 0x74) = param_3;
      }
      if ((param_2 & 8) != 0) {
        *(undefined4 *)(iVar1 + 0x94) = param_3;
      }
      if ((param_2 & 0x10) != 0) {
        *(undefined4 *)(iVar1 + 0xac) = param_3;
      }
      if ((param_2 & 0x20) != 0) {
        *(undefined4 *)(iVar1 + 0xf0) = param_3;
      }
      if ((param_2 & 0x40) != 0) {
        *(undefined4 *)(iVar1 + 0x108) = param_3;
      }
      local_14 = local_14 + 1;
      piVar2 = piVar2 + 1;
    } while (local_14 < param_1[1]);
  }
  return;
}

// 00E33780  FUN_00e33780  size=100  [between]
uint __thiscall FUN_00e33780(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  uint local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  iVar5 = 0;
  local_8 = 0;
  do {
    iVar2 = *(int *)(param_1 + iVar5 * 4);
    if (iVar2 != 0) {
      piVar3 = *(int **)(iVar2 + 0x20);
      if ((piVar3[0x19] & 0x1000U) == 0) {
        fVar6 = (float10)(**(code **)(*piVar3 + 0x34))();
        uVar4 = FUN_00e2dd80(param_2,(float)fVar6,uVar1);
      }
      else {
        uVar4 = 0;
      }
      local_8 = local_8 | uVar4;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x18);
  return local_8;
}

// 00E337F0  FUN_00e337f0  size=115  [between]
int __thiscall FUN_00e337f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar3 = *(int *)(param_1 + iVar4 * 4);
    if (iVar3 != 0) {
      piVar2 = *(int **)(iVar3 + 0x20);
      if ((piVar2[0x19] & 0x1000U) == 0) {
        fVar6 = (float10)(**(code **)(*piVar2 + 0x34))();
        iVar3 = FUN_00e2ded0(param_2 + iVar5 * 2,param_3 - iVar5,param_4,(float)fVar6,uVar1);
      }
      else {
        iVar3 = 0;
      }
      iVar5 = iVar5 + iVar3;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x18);
  return iVar5;
}

// 00E33870  FUN_00e33870  size=113  [between]
int __thiscall FUN_00e33870(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar3 = *(int *)(param_1 + iVar4 * 4);
    if (iVar3 != 0) {
      piVar2 = *(int **)(iVar3 + 0x20);
      if ((piVar2[0x19] & 0x1000U) == 0) {
        fVar6 = (float10)(**(code **)(*piVar2 + 0x34))();
        iVar3 = Animation::AttackTrack::update_2
                          (param_2 + iVar5 * 4,param_3 - iVar5,(float)fVar6,uVar1);
      }
      else {
        iVar3 = 0;
      }
      iVar5 = iVar5 + iVar3;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x18);
  return iVar5;
}

// 00E338F0  FUN_00e338f0  size=192  [between]
void __thiscall FUN_00e338f0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_ECX;
  uint *puVar9;
  
  if ((*(int *)(param_1 + 0x14) != 0) && (iVar7 = FUN_00a7c800(), iVar7 != 0)) {
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 0x14);
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(uint *)(param_2 + 0x18);
    uVar6 = *(undefined4 *)(param_2 + 0xc);
    iVar7 = *(int *)(param_1 + 0xc);
    puVar9 = *(uint **)(param_1 + 4);
    if (0 < iVar7) {
      do {
        if ((((puVar9[2] & 0x8000) == 0) && ((*puVar9 & uVar5) != 0)) &&
           (iVar8 = FUN_00e25f70(puVar9[1],uVar1,uVar2,uVar6,uVar3,uVar4), iVar8 != 0)) {
          FUN_00e2dfa0(puVar9,extraout_ECX);
        }
        puVar9 = puVar9 + 8;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

// 00E339B0  FUN_00e339b0  size=87  [between]
undefined4 __thiscall
FUN_00e339b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  _sprintf_s((char *)(param_1 + 0x20),0x40,"%s",param_3);
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = param_4;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x80) = param_5;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return 1;
}

// 00E33A10  FUN_00e33a10  size=330  [between]
undefined4 __thiscall FUN_00e33a10(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x94);
  if ((iVar2 <= *(int *)(param_1 + 0x98)) && (iVar2 != -1)) {
    return 0;
  }
  if (iVar2 == -1) {
    lVar1 = (ulonglong)(*(int *)(param_1 + 0x98) + 1) * 0x10;
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,&DAT_01b7bd48);
    if (iVar2 == 0) {
      return 0;
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x98)) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x90) + iVar4;
        *(undefined4 *)(iVar4 + iVar2) = *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar4);
        *(undefined4 *)(iVar4 + 4 + iVar2) = *(undefined4 *)(iVar3 + 4);
        *(undefined4 *)(iVar4 + 8 + iVar2) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(iVar4 + 0xc + iVar2) = *(undefined4 *)(iVar3 + 0xc);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar5 < *(int *)(param_1 + 0x98));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x90));
    *(int *)(param_1 + 0x90) = iVar2;
  }
  if (*(int *)(param_2 + 4) != 0) {
    FUN_00dd5650(&DAT_016cd628);
    return 0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    *(int *)(param_1 + 8) = param_2;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *(int *)(*(int *)(param_1 + 0xc) + 0x14) = param_2;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0xc) = param_2;
  *(int *)(param_2 + 4) = param_1;
  *(float *)(*(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x98) * 0x10) = (float)param_3;
  *(float *)(*(int *)(param_1 + 0x90) + 4 + *(int *)(param_1 + 0x98) * 0x10) = (float)param_4;
  *(float *)(*(int *)(param_1 + 0x90) + 8 + *(int *)(param_1 + 0x98) * 0x10) = (float)param_5;
  *(int *)(*(int *)(param_1 + 0x90) + 0xc + *(int *)(param_1 + 0x98) * 0x10) = param_2;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  *(int *)(param_2 + 0x60) = param_1;
  return 1;
}

// 00E33B60  Animation::Motion::NodePlay::NodePlay  size=103  [class]
undefined4 * __fastcall Animation::Motion::NodePlay::NodePlay(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  param_1[0x1a] = 0x3f800000;
  param_1[7] = 0xffffffff;
  param_1[0x1c] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *param_1 = vftable;
  FUN_00e42cb0();
  return param_1;
}

// 00E33BD0  Animation::Motion::Node::Node  size=48  [class]
void __fastcall Animation::Motion::Node::Node(undefined4 *param_1)

{
  *param_1 = NodePlay::vftable;
  if (param_1[0x33] != 0) {
    FUN_00dd48d0(param_1[0x33],0);
    param_1[0x33] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E33C00  Animation::Motion::NodeSequence::vf54  size=57  [class]
void __thiscall
Animation::Motion::NodeSequence::vf54(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  FUN_00e33580(param_2,param_3);
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    (**(code **)(*piVar1 + 0x54))(param_2,param_3);
  }
  return;
}

// 00E33C60  FUN_00e33c60  size=50  [between]
void __fastcall FUN_00e33c60(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_00dd7270();
  }
  FUN_00dd7270();
  FUN_00dd7270();
  return;
}

// 00E33CA0  FUN_00e33ca0  size=77  [between]
undefined4 __thiscall
FUN_00e33ca0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    return 0;
  }
  iVar1 = FUN_00e42e50(param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00dd7240();
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}

// 00E33CF0  FUN_00e33cf0  size=88  [between]
undefined4 __thiscall FUN_00e33cf0(LPCRITICAL_SECTION param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  uVar1 = FUN_00e431e0();
  (**(code **)(*param_2 + 0x10))();
  FUN_00e42ee0(param_2[6]);
  (**(code **)(*param_2 + 4))(1);
  param_1[1].LockSemaphore = (HANDLE)((int)param_1[1].LockSemaphore + -1);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(param_1);
  }
  return uVar1;
}

// 00E33D50  FUN_00e33d50  size=78  [between]
void __fastcall FUN_00e33d50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    if (*param_1 == iVar2) {
      *param_1 = iVar1;
    }
    if (param_1[1] == iVar2) {
      param_1[1] = *(int *)(iVar2 + 4);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 4) + 8) = *(undefined4 *)(iVar2 + 8);
    }
    if (*(int *)(iVar2 + 8) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = *(undefined4 *)(iVar2 + 4);
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = iVar1;
  }
  return;
}

// 00E33DB0  Animation::Motion::NodeSlot::setNode  size=63  [class]
undefined4 __thiscall
Animation::Motion::NodeSlot::setNode(int param_1,uint param_2,undefined4 param_3)

{
  if (0xf < param_2) {
    FUN_00dd5650(&DAT_016cdab4);
    return 0;
  }
  param_1 = param_2 * 0x10 + param_1;
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_00e44030(param_3,param_1);
  }
  return 1;
}

// 00E33DF0  FUN_00e33df0  size=87  [between]
undefined4 __thiscall FUN_00e33df0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 != 0xffffffff) {
    if (param_2 < 0x10) {
      return *(undefined4 *)(param_1 + 0xc + param_2 * 0x10);
    }
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        return *(undefined4 *)(DAT_01dd9498 + 4 + uVar1 * 8);
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
  }
  return 0;
}

// 00E33E50  FUN_00e33e50  size=87  [between]
undefined4 __thiscall FUN_00e33e50(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 != 0xffffffff) {
    if (param_2 < 0x10) {
      return *(undefined4 *)(param_1 + 0xc + param_2 * 0x10);
    }
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        return *(undefined4 *)(DAT_01dd9498 + 4 + uVar1 * 8);
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
  }
  return 0;
}

// 00E33EB0  FUN_00e33eb0  size=122  [between]
undefined4 __thiscall FUN_00e33eb0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_3 + 4))(param_2,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_3[1] == 0) && (param_3[2] == 0)) {
    if (*param_1 == 0) {
      *param_1 = (int)param_3;
    }
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) != 0) {
        *(int **)(*(int *)(iVar1 + 8) + 4) = param_3;
      }
      param_3[2] = *(int *)(iVar1 + 8);
      param_3[1] = iVar1;
      *(int **)(iVar1 + 8) = param_3;
    }
    param_1[1] = (int)param_3;
    return 1;
  }
  FUN_00dd5650(&DAT_016c5d80);
  return 1;
}

// 00E33F30  FUN_00e33f30  size=117  [between]
int FUN_00e33f30(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  if (*(byte *)(*param_1 + 4) != 0) {
    piVar3 = (int *)param_1[1];
    do {
      if (*piVar3 == param_2) {
        return piVar3[1];
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < *(byte *)(*param_1 + 4));
  }
  uVar2 = 0;
  do {
    if ((&DAT_018cfa38)[uVar2 * 2] == param_2) {
      iVar1 = *(int *)(uVar2 * 8 + 0x18cfa3c);
      if (iVar1 != 0) {
        FUN_00dd5650(&DAT_016cd518,"Output",iVar1);
        return -1;
      }
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x2f);
  FUN_00dd5650(&DAT_016cd54c,"Output",param_2);
  return -1;
}

// 00E33FB0  FUN_00e33fb0  size=117  [between]
int FUN_00e33fb0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  if (*(byte *)(*param_1 + 5) != 0) {
    piVar3 = (int *)param_1[2];
    do {
      if (*piVar3 == param_2) {
        return piVar3[1];
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < *(byte *)(*param_1 + 5));
  }
  uVar2 = 0;
  do {
    if ((&DAT_018cfa38)[uVar2 * 2] == param_2) {
      iVar1 = *(int *)(uVar2 * 8 + 0x18cfa3c);
      if (iVar1 != 0) {
        FUN_00dd5650(&DAT_016cd518,"Input",iVar1);
        return -1;
      }
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x2f);
  FUN_00dd5650(&DAT_016cd54c,"Input",param_2);
  return -1;
}

// 00E34030  FUN_00e34030  size=140  [between]
int FUN_00e34030(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  if (*(byte *)(*param_1 + 6) != 0) {
    piVar3 = (int *)param_1[3];
    do {
      if (*piVar3 == param_2) {
        if ((piVar3[1] != 0) && (piVar3[1] != 2)) {
          FUN_00e2fd20(param_2);
          return 0;
        }
        return piVar3[2];
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar2 < *(byte *)(*param_1 + 6));
  }
  uVar2 = 0;
  do {
    if ((&DAT_018cfa38)[uVar2 * 2] == param_2) {
      iVar1 = *(int *)(uVar2 * 8 + 0x18cfa3c);
      if (iVar1 != 0) {
        FUN_00dd5650(&DAT_016cd518,"ParamS32",iVar1);
        return 0;
      }
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x2f);
  FUN_00dd5650(&DAT_016cd54c,"ParamS32",param_2);
  return 0;
}

// 00E340C0  FUN_00e340c0  size=185  [between]
float10 FUN_00e340c0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  if (*(byte *)(*param_1 + 6) != 0) {
    piVar3 = (int *)param_1[3];
    do {
      if (*piVar3 == param_2) {
        if (piVar3[1] == 1) {
          return (float10)(float)piVar3[2];
        }
        uVar2 = 0;
        goto LAB_00e34114;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar2 < *(byte *)(*param_1 + 6));
  }
  uVar2 = 0;
  do {
    if ((&DAT_018cfa38)[uVar2 * 2] == param_2) {
      iVar1 = *(int *)(uVar2 * 8 + 0x18cfa3c);
      if (iVar1 != 0) {
        FUN_00dd5650(&DAT_016cd518,"ParamF32",iVar1);
        return (float10)0;
      }
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x2f);
  FUN_00dd5650(&DAT_016cd54c,"ParamF32",param_2);
  return (float10)0;
  while (uVar2 = uVar2 + 1, uVar2 < 0x2f) {
LAB_00e34114:
    if ((&DAT_018cfa38)[uVar2 * 2] == param_2) {
      iVar1 = *(int *)(uVar2 * 8 + 0x18cfa3c);
      if (iVar1 != 0) {
        FUN_00dd5650(&DAT_016cd584,iVar1);
        return (float10)0;
      }
      break;
    }
  }
  FUN_00dd5650(&DAT_016cd5b8,param_2);
  return (float10)0;
}

// 00E34180  FUN_00e34180  size=168  [between]
undefined4 __fastcall FUN_00e34180(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(*param_1 + 8);
  iVar5 = *(int *)(iVar1 + 0x360);
  if (*(int *)(iVar1 + 0x360) == 0) {
    iVar5 = iVar1;
  }
  iVar5 = (int)*(short *)(iVar5 + 0x358);
  if (iVar5 < 1) {
    param_1[2] = iVar5;
    param_1[1] = 0;
    return 1;
  }
  iVar2 = FUN_00dd29b0(iVar5 * 4,0x20,0,0);
  param_1[1] = iVar2;
  if (iVar2 != 0) {
    iVar2 = 0;
    if (0 < iVar5) {
      iVar3 = 0;
      do {
        iVar4 = *(int *)(iVar1 + 0x360);
        if (*(int *)(iVar1 + 0x360) == 0) {
          iVar4 = iVar1;
        }
        *(int *)(param_1[1] + iVar2 * 4) = *(int *)(iVar4 + 0x350) + iVar3;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xb0;
      } while (iVar2 < iVar5);
    }
    FUN_00e41350(param_1[1],iVar5,&LAB_00e26d40);
    param_1[2] = iVar5;
    return 1;
  }
  return 0;
}

// 00E34230  FUN_00e34230  size=178  [between]
void __fastcall FUN_00e34230(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
    if ((*(uint *)(*(int *)(iVar1 + 0x10) + 100) & 0x100000) != 0) {
      fVar2 = (float10)FUN_00fddce0((double)(*(float *)(iVar1 + 0x54) * 60.0 * 512.0 + 0.5));
      FUN_00fddce0((double)((float)fVar2 * 0.001953125));
    }
    FUN_00e24230();
  }
  return;
}

// 00E342F0  FUN_00e342f0  size=807  [between]
undefined4 __thiscall FUN_00e342f0(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_60;
  int local_5c;
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
  float local_1c;
  
  iVar4 = *(int *)(param_1 + 0xc);
  *param_2 = 0.0;
  param_2[1] = 0.0;
  pfVar1 = param_2 + 8;
  param_2[2] = 0.0;
  param_2[4] = 0.0;
  local_5c = 0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  *pfVar1 = 0.0;
  param_2[9] = 1.0;
  param_2[10] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = -1.0;
  local_60 = 0.0;
  if (iVar4 != 0) {
    do {
      if (((*(byte *)(*(int *)(iVar4 + 0x14) + 8) & 2) != 0) &&
         (fVar2 = *(float *)(iVar4 + 0x44), fVar2 != 0.0)) {
        FUN_00e2d7e0();
        FUN_00e24230();
        iVar3 = Animation::MotReader::pullCameraParam(&local_50,(int)*(char *)(iVar4 + 0x98));
        if (iVar3 != 0) {
          local_60 = fVar2 + local_60;
          fVar2 = fVar2 / local_60;
          *param_2 = *param_2 + fVar2 * (local_50 - *param_2);
          param_2[1] = (local_4c - param_2[1]) * fVar2 + param_2[1];
          param_2[2] = (local_48 - param_2[2]) * fVar2 + param_2[2];
          param_2[3] = (local_44 - param_2[3]) * fVar2 + param_2[3];
          param_2[4] = (local_40 - param_2[4]) * fVar2 + param_2[4];
          param_2[5] = (local_3c - param_2[5]) * fVar2 + param_2[5];
          param_2[6] = (local_38 - param_2[6]) * fVar2 + param_2[6];
          param_2[7] = (local_34 - param_2[7]) * fVar2 + param_2[7];
          *pfVar1 = (local_30 - *pfVar1) * fVar2 + *pfVar1;
          param_2[9] = (local_2c - param_2[9]) * fVar2 + param_2[9];
          param_2[10] = (local_28 - param_2[10]) * fVar2 + param_2[10];
          param_2[0xb] = (local_24 - param_2[0xb]) * fVar2 + param_2[0xb];
          param_2[0xc] = param_2[0xc] * (1.0 - fVar2) + local_20 * fVar2;
          local_5c = local_5c + 1;
          param_2[0xd] = (1.0 - fVar2) * param_2[0xd] + local_1c * fVar2;
        }
      }
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != 0);
    if ((local_5c != 0) && (0.0 < local_60)) {
      if (param_2[9] * param_2[9] + *pfVar1 * *pfVar1 + param_2[10] * param_2[10] <= 0.0) {
        FUN_00dd5650();
        *pfVar1 = 0.0;
        param_2[9] = 1.0;
        param_2[10] = 0.0;
        return 1;
      }
      FUN_00ddf460(pfVar1,pfVar1);
      return 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0xc);
  do {
    if (iVar4 == 0) {
      return 0;
    }
    if ((*(byte *)(*(int *)(iVar4 + 0x14) + 8) & 2) != 0) {
      if ((*(uint *)(*(int *)(iVar4 + 0x10) + 100) & 0x100000) != 0) {
        fVar5 = (float10)FUN_00fddce0((double)(*(float *)(iVar4 + 0x54) * 60.0 * 512.0 + 0.5));
        FUN_00fddce0((double)((float)fVar5 * 0.001953125));
      }
      FUN_00e24230();
      iVar3 = Animation::MotReader::pullCameraParam(param_2,0);
      if (iVar3 != 0) {
        return 1;
      }
    }
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}

// 00E34620  FUN_00e34620  size=1119  [between]
void __thiscall FUN_00e34620(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
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
  float local_1c;
  
  local_90 = 0.0;
  iVar4 = *(int *)(param_1 + 0x18);
  local_8c = 0.0;
  local_88 = 0.0;
  iVar3 = 0;
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  local_70 = 0.0;
  local_6c = 1.0;
  local_68 = 0.0;
  local_60 = 0.0;
  local_5c = -1.0;
  local_94 = 0.0;
  if (iVar4 != 0) {
    do {
      if (((*(byte *)(*(int *)(iVar4 + 0x14) + 8) & 2) != 0) &&
         (fVar1 = *(float *)(iVar4 + 0x44), fVar1 != 0.0)) {
        fVar5 = (float10)FUN_00e2d7e0(*(undefined4 *)(iVar4 + 0x54));
        FUN_00e24230((float)fVar5);
        iVar2 = Animation::MotReader::pullCameraParam(&local_50,(int)*(char *)(iVar4 + 0x98));
        if (iVar2 != 0) {
          local_94 = fVar1 + local_94;
          fVar1 = fVar1 / local_94;
          local_90 = fVar1 * (local_50 - local_90) + local_90;
          local_8c = local_8c + fVar1 * (local_4c - local_8c);
          local_88 = local_88 + fVar1 * (local_48 - local_88);
          local_84 = local_84 + fVar1 * (local_44 - local_84);
          local_80 = local_80 + fVar1 * (local_40 - local_80);
          local_7c = local_7c + fVar1 * (local_3c - local_7c);
          local_78 = local_78 + fVar1 * (local_38 - local_78);
          local_74 = local_74 + fVar1 * (local_34 - local_74);
          local_70 = local_70 + fVar1 * (local_30 - local_70);
          iVar3 = iVar3 + 1;
          local_6c = local_6c + fVar1 * (local_2c - local_6c);
          local_68 = local_68 + fVar1 * (local_28 - local_68);
          local_64 = local_64 + fVar1 * (local_24 - local_64);
          local_60 = local_60 * (1.0 - fVar1) + local_20 * fVar1;
          local_5c = (1.0 - fVar1) * local_5c + local_1c * fVar1;
        }
      }
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != 0);
    if ((iVar3 != 0) && (0.0 < local_94)) {
      if (1.0 < local_94) {
        local_94 = 1.0;
      }
      fVar1 = local_6c * local_6c + local_70 * local_70 + local_68 * local_68;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_70,&local_70);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_70 = 0.0;
        local_6c = 1.0;
        local_68 = 0.0;
      }
      *param_2 = *param_2 + local_94 * (local_90 - *param_2);
      param_2[1] = (local_8c - param_2[1]) * local_94 + param_2[1];
      param_2[2] = (local_88 - param_2[2]) * local_94 + param_2[2];
      param_2[3] = (local_84 - param_2[3]) * local_94 + param_2[3];
      param_2[4] = (local_80 - param_2[4]) * local_94 + param_2[4];
      param_2[5] = (local_7c - param_2[5]) * local_94 + param_2[5];
      param_2[6] = (local_78 - param_2[6]) * local_94 + param_2[6];
      param_2[7] = (local_74 - param_2[7]) * local_94 + param_2[7];
      param_2[8] = (local_70 - param_2[8]) * local_94 + param_2[8];
      param_2[9] = (local_6c - param_2[9]) * local_94 + param_2[9];
      param_2[10] = (local_68 - param_2[10]) * local_94 + param_2[10];
      param_2[0xb] = (local_64 - param_2[0xb]) * local_94 + param_2[0xb];
      param_2[0xc] = param_2[0xc] * (1.0 - local_94) + local_94 * local_60;
      param_2[0xd] = (1.0 - local_94) * param_2[0xd] + local_5c * local_94;
      fVar1 = local_6c * local_6c + local_70 * local_70 + local_68 * local_68;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        FUN_00dd5650(&DAT_0163d0ac);
        return;
      }
      FUN_00ddf460(&local_70,&local_70);
      return;
    }
  }
  return;
}

// 00E34A80  FUN_00e34a80  size=567  [between]
void __thiscall FUN_00e34a80(int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
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
  
  for (iVar3 = *(int *)(param_1 + 0x24); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
    if (((*(byte *)(*(int *)(iVar3 + 0x14) + 8) & 2) != 0) &&
       (fVar2 = *(float *)(iVar3 + 0x44), fVar2 != 0.0)) {
      fVar5 = (float10)FUN_00e2d7e0(*(undefined4 *)(iVar3 + 0x54));
      FUN_00e24230((float)fVar5);
      iVar4 = Animation::MotReader::pullCameraParam(&local_50,(int)*(char *)(iVar3 + 0x98));
      if (iVar4 != 0) {
        local_50 = fVar2 * local_50;
        local_4c = local_4c * fVar2;
        local_48 = local_48 * fVar2;
        local_44 = local_44 * fVar2;
        local_40 = local_40 * fVar2;
        local_3c = local_3c * fVar2;
        local_38 = local_38 * fVar2;
        local_34 = local_34 * fVar2;
        local_30 = local_30 * fVar2;
        local_2c = local_2c * fVar2;
        local_28 = local_28 * fVar2;
        local_24 = local_24 * fVar2;
        local_20 = fVar2 * local_20;
        *param_2 = *param_2 + local_50;
        param_2[1] = param_2[1] + local_4c;
        param_2[2] = param_2[2] + local_48;
        param_2[3] = param_2[3] + local_44;
        param_2[4] = param_2[4] + local_40;
        param_2[5] = param_2[5] + local_3c;
        param_2[6] = param_2[6] + local_38;
        param_2[7] = param_2[7] + local_34;
        param_2[8] = local_30 + param_2[8];
        param_2[9] = param_2[9] + local_2c;
        param_2[10] = param_2[10] + local_28;
        param_2[0xb] = param_2[0xb] + local_24;
        fVar5 = (float10)FUN_00ddba30(param_2[0xc] + local_20);
        param_2[0xc] = (float)fVar5;
      }
    }
  }
  pfVar1 = param_2 + 8;
  fVar2 = param_2[9] * param_2[9] + *pfVar1 * *pfVar1 + param_2[10] * param_2[10];
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(pfVar1,pfVar1);
    return;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  *pfVar1 = 0.0;
  param_2[9] = 1.0;
  param_2[10] = 0.0;
  return;
}

// 00E34CC0  FUN_00e34cc0  size=73  [between]
undefined4 FUN_00e34cc0(undefined4 param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_00e43f00(param_1);
    return 1;
  }
  if (param_2 != 2) {
    FUN_00e43f00(param_1);
    return 1;
  }
  FUN_00e43f00(param_1);
  return 1;
}

// 00E34D10  FUN_00e34d10  size=215  [between]
void __thiscall FUN_00e34d10(int param_1,int *param_2,int param_3)

{
  if (param_3 == 1) {
    if (*(int **)(param_1 + 0x18) == param_2) {
      *(int *)(param_1 + 0x18) = param_2[1];
    }
    if (*(int **)(param_1 + 0x1c) == param_2) {
      *(int *)(param_1 + 0x1c) = *param_2;
    }
    if (*param_2 != 0) {
      *(int *)(*param_2 + 4) = param_2[1];
    }
    if ((int *)param_2[1] != (int *)0x0) {
      *(int *)param_2[1] = *param_2;
    }
    param_2[1] = 0;
    *param_2 = 0;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    return;
  }
  if (param_3 != 2) {
    if (*(int **)(param_1 + 0xc) == param_2) {
      *(int *)(param_1 + 0xc) = param_2[1];
    }
    if (*(int **)(param_1 + 0x10) == param_2) {
      *(int *)(param_1 + 0x10) = *param_2;
    }
    if (*param_2 != 0) {
      *(int *)(*param_2 + 4) = param_2[1];
    }
    if ((int *)param_2[1] != (int *)0x0) {
      *(int *)param_2[1] = *param_2;
    }
    param_2[1] = 0;
    *param_2 = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    return;
  }
  if (*(int **)(param_1 + 0x24) == param_2) {
    *(int *)(param_1 + 0x24) = param_2[1];
  }
  if (*(int **)(param_1 + 0x28) == param_2) {
    *(int *)(param_1 + 0x28) = *param_2;
  }
  if (*param_2 != 0) {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  if ((int *)param_2[1] != (int *)0x0) {
    *(int *)param_2[1] = *param_2;
  }
  param_2[1] = 0;
  *param_2 = 0;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  return;
}

// 00E34DF0  FUN_00e34df0  size=102  [between]
void __fastcall FUN_00e34df0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  for (iVar1 = *(int *)(param_1 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    fVar2 = (float10)FUN_00e2d7e0(*(undefined4 *)(iVar1 + 0x54));
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
    FUN_00e24230((float)fVar2);
    *(float *)(iVar1 + 0x88) = (float)fVar2 / 60.0;
    *(float *)(iVar1 + 0x8c) = *(float *)(iVar1 + 0x78) * *(float *)(iVar1 + 0x44);
  }
  return;
}

// 00E34E60  FUN_00e34e60  size=178  [between]
void __fastcall FUN_00e34e60(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  for (iVar1 = *(int *)(param_1 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
    if ((*(uint *)(*(int *)(iVar1 + 0x10) + 100) & 0x100000) != 0) {
      fVar2 = (float10)FUN_00fddce0((double)(*(float *)(iVar1 + 0x54) * 60.0 * 512.0 + 0.5));
      FUN_00fddce0((double)((float)fVar2 * 0.001953125));
    }
    FUN_00e24230();
  }
  return;
}

// 00E34F20  FUN_00e34f20  size=70  [between]
void FUN_00e34f20(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_20 [28];
  
  FUN_00e28240(local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,param_1 + 0x18,param_1 + 0x1c);
  FUN_00de21a0(param_2,param_2,local_20,param_3);
  return;
}

// 00E34F70  FUN_00e34f70  size=265  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00e34f70(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((DAT_01dd9478 == (undefined4 *)0x0) && (DAT_01dd9498 == (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)FUN_00dd3580(0x3000,&DAT_01b7bd48);
    DAT_01dd9498 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = 0x600;
      do {
        *puVar1 = 0xffffffff;
        puVar1[1] = 0;
        puVar1 = puVar1 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      DAT_01dd9488 = 0x600;
      _DAT_01dd948c = 0;
      _DAT_01dd9490 = 0;
      _DAT_01dd9494 = 0;
      FUN_00dd7240();
      FUN_00dd7240();
      DAT_01dd9478 = &DAT_01b7bd48;
      _DAT_01dd947c = 0x400;
      _DAT_01dd9480 = 0;
      iVar2 = (**(code **)(DAT_01dd93d8 + 0x40))(0x10c,0x400,0x10,&DAT_01b7bd48,"FactoryFixed");
      if ((iVar2 != 0) && (DAT_01dd93c0 == (undefined4 *)0x0)) {
        FUN_00dd7240();
        _DAT_01dd93c8 = 0;
        DAT_01dd93c0 = &DAT_01b7bd48;
        _DAT_01dd93c4 = 0x400;
        return 1;
      }
    }
  }
  return 0;
}

// 00E35080  FUN_00e35080  size=264  [between]
int __fastcall FUN_00e35080(int param_1)

{
  int iVar1;
  
  FUN_00de3530();
  iVar1 = 3;
  do {
    FUN_00de3530();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00a7c930();
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  Animation::Motion::NodeSlot::NodeHandler::NodeHandler();
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  Animation::Control::NodeSlot::NodeHandler::NodeHandler();
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  return param_1;
}

// 00E35190  Animation::Motion::NodeListener::NodeListener  size=74  [class]
void __fastcall Animation::Motion::NodeListener::NodeListener(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x32c);
  iVar2 = 7;
  do {
    puVar1 = puVar1 + -4;
    iVar2 = iVar2 + -1;
    *puVar1 = Control::NodeListener::vftable;
  } while (-1 < iVar2);
  FUN_00e33350();
  puVar1 = (undefined4 *)(param_1 + 0x208);
  iVar2 = 0xf;
  do {
    puVar1 = puVar1 + -4;
    iVar2 = iVar2 + -1;
    *puVar1 = vftable;
  } while (-1 < iVar2);
  *(undefined ***)(param_1 + 0xf8) = vftable;
  return;
}

// 00E352E0  FUN_00e352e0  size=78  [between]
void __fastcall FUN_00e352e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    if (*param_1 == iVar2) {
      *param_1 = iVar1;
    }
    if (param_1[1] == iVar2) {
      param_1[1] = *(int *)(iVar2 + 4);
    }
    if (*(int *)(iVar2 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 4) + 8) = *(undefined4 *)(iVar2 + 8);
    }
    if (*(int *)(iVar2 + 8) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 8) + 4) = *(undefined4 *)(iVar2 + 4);
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = iVar1;
  }
  return;
}

// 00E35340  FUN_00e35340  size=294  [between]
void __fastcall FUN_00e35340(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x28);
  iVar3 = 2;
  do {
    iVar1 = piVar2[-7];
    if (iVar1 != 0) {
      piVar2[-7] = 0;
      if (*(int **)(iVar1 + 0x18) == piVar2 + -10) {
        *(int *)(iVar1 + 0x18) = piVar2[-8];
      }
      if (*(int **)(iVar1 + 0x1c) == piVar2 + -10) {
        *(int *)(iVar1 + 0x1c) = piVar2[-9];
      }
      if (piVar2[-9] != 0) {
        *(int *)(piVar2[-9] + 8) = piVar2[-8];
      }
      if (piVar2[-8] != 0) {
        *(int *)(piVar2[-8] + 4) = piVar2[-9];
      }
      piVar2[-8] = 0;
      piVar2[-9] = 0;
    }
    iVar1 = piVar2[-3];
    if (iVar1 != 0) {
      piVar2[-3] = 0;
      if (*(int **)(iVar1 + 0x18) == piVar2 + -6) {
        *(int *)(iVar1 + 0x18) = piVar2[-4];
      }
      if (*(int **)(iVar1 + 0x1c) == piVar2 + -6) {
        *(int *)(iVar1 + 0x1c) = piVar2[-5];
      }
      if (piVar2[-5] != 0) {
        *(int *)(piVar2[-5] + 8) = piVar2[-4];
      }
      if (piVar2[-4] != 0) {
        *(int *)(piVar2[-4] + 4) = piVar2[-5];
      }
      piVar2[-4] = 0;
      piVar2[-5] = 0;
    }
    iVar1 = piVar2[1];
    if (iVar1 != 0) {
      piVar2[1] = 0;
      if (*(int **)(iVar1 + 0x18) == piVar2 + -2) {
        *(int *)(iVar1 + 0x18) = *piVar2;
      }
      if (*(int **)(iVar1 + 0x1c) == piVar2 + -2) {
        *(int *)(iVar1 + 0x1c) = piVar2[-1];
      }
      if (piVar2[-1] != 0) {
        *(int *)(piVar2[-1] + 8) = *piVar2;
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[-1];
      }
      *piVar2 = 0;
      piVar2[-1] = 0;
    }
    iVar1 = piVar2[5];
    if (iVar1 != 0) {
      piVar2[5] = 0;
      if (*(int **)(iVar1 + 0x18) == piVar2 + 2) {
        *(int *)(iVar1 + 0x18) = piVar2[4];
      }
      if (*(int **)(iVar1 + 0x1c) == piVar2 + 2) {
        *(int *)(iVar1 + 0x1c) = piVar2[3];
      }
      if (piVar2[3] != 0) {
        *(int *)(piVar2[3] + 8) = piVar2[4];
      }
      if (piVar2[4] != 0) {
        *(int *)(piVar2[4] + 4) = piVar2[3];
      }
      piVar2[4] = 0;
      piVar2[3] = 0;
    }
    piVar2 = piVar2 + 0x10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 00E35500  FUN_00e35500  size=61  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e35500(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    FUN_00e43440();
    (**(code **)(*piVar1 + 4))();
    (**(code **)*piVar1)(1);
    _DAT_01dd93c8 = _DAT_01dd93c8 + -1;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_00e35340();
  return;
}

// 00E35540  Animation::Control::Unit::registNode  size=155  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
Animation::Control::Unit::registNode
          (int param_1,uint param_2,uint param_3,int *param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  if (param_3 == 0xffffffff) {
    piVar1 = *(int **)(param_1 + 4);
  }
  else if (param_3 < 8) {
    piVar1 = *(int **)(param_1 + 0x14 + param_3 * 0x10);
  }
  else {
    piVar1 = (int *)0x0;
  }
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x14))(param_4,param_5);
    if (iVar2 != 0) {
      if ((param_2 < 8) && (*(int *)(param_1 + 0x14 + param_2 * 0x10) == 0)) {
        FUN_00e30810(param_4,param_1 + 8 + param_2 * 0x10);
      }
      return 1;
    }
  }
  FUN_00dd5650(&DAT_016cdc64);
  FUN_00e43440();
  (**(code **)(*param_4 + 4))();
  (**(code **)*param_4)(1);
  _DAT_01dd93c8 = _DAT_01dd93c8 + -1;
  return 0;
}

// 00E355E0  FUN_00e355e0  size=180  [between]
void FUN_00e355e0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar2 - (int)(param_1 + 1) == 3) {
    local_24[0] = '0';
    local_24[1] = '\0';
    local_24[2] = '\0';
    local_24[3] = '\0';
    local_24[4] = '\0';
    local_24[5] = '\0';
    local_24[6] = '\0';
    local_24[7] = '\0';
    local_24[8] = '\0';
    local_24[9] = '\0';
    local_24[10] = '\0';
    local_24[0xb] = '\0';
    local_24[0xc] = '\0';
    local_24[0xd] = '\0';
    local_24[0xe] = '\0';
    local_24[0xf] = '\0';
    local_24[0x10] = '\0';
    local_24[0x11] = '\0';
    local_24[0x12] = '\0';
    local_24[0x13] = '\0';
    local_24[0x14] = '\0';
    local_24[0x15] = '\0';
    local_24[0x16] = '\0';
    local_24[0x17] = '\0';
    local_24[0x18] = '\0';
    local_24[0x19] = '\0';
    local_24[0x1a] = '\0';
    local_24[0x1b] = '\0';
    local_24[0x1c] = '\0';
    local_24[0x1d] = '\0';
    local_24[0x1e] = '\0';
    local_24[0x1f] = '\0';
    _strcat_s(local_24,0x20,param_1);
    iVar3 = FUN_00e30950(local_24,&DAT_01665404,4);
    if (iVar3 != 0) goto LAB_00e35684;
  }
  iVar3 = FUN_00e30950(param_1,&DAT_01665404,4);
  if (iVar3 == 0) {
    FUN_00e30950(param_1,"_anim.hkx",4);
  }
LAB_00e35684:
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E356A0  FUN_00e356a0  size=161  [between]
void FUN_00e356a0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar2 - (int)(param_1 + 1) == 5) {
    local_24[0] = '0';
    local_24[1] = '\0';
    local_24[2] = '\0';
    local_24[3] = '\0';
    local_24[4] = '\0';
    local_24[5] = '\0';
    local_24[6] = '\0';
    local_24[7] = '\0';
    local_24[8] = '\0';
    local_24[9] = '\0';
    local_24[10] = '\0';
    local_24[0xb] = '\0';
    local_24[0xc] = '\0';
    local_24[0xd] = '\0';
    local_24[0xe] = '\0';
    local_24[0xf] = '\0';
    local_24[0x10] = '\0';
    local_24[0x11] = '\0';
    local_24[0x12] = '\0';
    local_24[0x13] = '\0';
    local_24[0x14] = '\0';
    local_24[0x15] = '\0';
    local_24[0x16] = '\0';
    local_24[0x17] = '\0';
    local_24[0x18] = '\0';
    local_24[0x19] = '\0';
    local_24[0x1a] = '\0';
    local_24[0x1b] = '\0';
    local_24[0x1c] = '\0';
    local_24[0x1d] = '\0';
    local_24[0x1e] = '\0';
    local_24[0x1f] = '\0';
    _strcat_s(local_24,0x20,param_1);
    iVar3 = FUN_00e30950(local_24,"_seq.bxm",6);
    if (iVar3 != 0) goto LAB_00e35731;
  }
  FUN_00e30950(param_1,"_seq.bxm",6);
LAB_00e35731:
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E35750  FUN_00e35750  size=134  [between]
void __fastcall FUN_00e35750(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  int local_10;
  int local_8;
  float local_4;
  
  if (((*param_1 != 0) && (param_1[1] != 0)) &&
     (local_10 = *(int *)(param_1[1] + 0xc), local_10 != 0)) {
    iVar3 = 0;
    do {
      iVar1 = param_1[2];
      iVar2 = FUN_00a12210((int)*(short *)(iVar1 + iVar3));
      if (iVar2 != 0) {
        local_8 = *(int *)(param_1[2] + 8 + iVar3) + param_1[2] + iVar3;
        fVar4 = (float10)FUN_00e30c80(&local_8);
        local_4 = (float)fVar4;
        FUN_00e24ff0(iVar2,*(undefined1 *)(iVar1 + 2 + iVar3),local_4);
      }
      iVar3 = iVar3 + 0xc;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

// 00E357E0  FUN_00e357e0  size=38  [between]
void __thiscall FUN_00e357e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    return;
  }
  FUN_00e33eb0(param_2 + 0x98,param_1,param_3);
  return;
}

// 00E35810  Animation::FootIk2::vf04  size=254  [class]
void __thiscall Animation::FootIk2::vf04(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_2 + 8);
  FUN_00e2c680(iVar1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_3 + 0x30);
  FUN_00e2c680(iVar1,*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_3 + 0x1c));
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_3 + 0x38);
  iVar2 = *(int *)(param_3 + 0x20);
  *(int *)(param_1 + 0x180) = iVar2;
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00a12210(iVar2);
  }
  *(undefined4 *)(param_1 + 400) = 0;
  local_20 = 0;
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  local_1c = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  local_18 = 0;
  D3DXVec3TransformNormal(&local_20,&local_20,iVar1 + 0xb0);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_3 + 0x3c);
  uVar3 = *(undefined4 *)(param_3 + 0x40);
  *(int *)(param_1 + 0x10) = iVar1;
  *(undefined4 *)(param_1 + 0x198) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

// 00E35910  Animation::FootIk2::vf14  size=405  [class]
undefined4 __fastcall Animation::FootIk2::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined4 unaff_EBX;
  float local_3c [3];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (local_3c[0] = *(float *)(param_1 + 0x1a0), local_3c[0] != 0.0)) {
    iVar3 = *(int *)(param_1 + 0x10);
    local_20 = *(undefined4 *)(iVar3 + 0x40);
    local_1c = *(undefined4 *)(iVar3 + 0x44);
    local_18 = *(undefined4 *)(iVar3 + 0x48);
    local_14 = *(undefined4 *)(iVar3 + 0x4c);
    local_30 = 0;
    local_2c = 0x3f800000;
    local_28 = 0;
    D3DXVec3TransformNormal(&local_30,&local_30,iVar3 + 0xb0);
    FUN_00e2ca40(&local_2c,local_3c);
    FUN_00e2ca40(&local_2c,local_3c);
    fVar1 = *(float *)(param_1 + 0x80);
    fVar2 = *(float *)(param_1 + 0x130);
    fVar4 = fVar2;
    if (fVar1 < fVar2) {
      fVar4 = fVar1;
    }
    fVar4 = *(float *)(param_1 + 0x194) * *(float *)(param_1 + 400) +
            (1.0 - *(float *)(param_1 + 0x194)) * *(float *)(param_1 + 0x198) * fVar4;
    *(float *)(param_1 + 400) = fVar4;
    FUN_00e253a0(*(undefined4 *)(param_1 + 0x10),fVar4,unaff_EBX);
    FUN_00e30fa0(fVar1 - fVar4,unaff_EBX,&local_2c,local_3c);
    FUN_00e30fa0(fVar2 - fVar4,unaff_EBX,&local_2c,local_3c);
    return 1;
  }
  return 0;
}

// 00E35AB0  FUN_00e35ab0  size=38  [between]
void __thiscall FUN_00e35ab0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    return;
  }
  FUN_00e33eb0(param_2 + 0x98,param_1,param_3);
  return;
}

// 00E35AE0  FUN_00e35ae0  size=129  [between]
void __fastcall FUN_00e35ae0(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    FUN_00e33cf0(*param_1);
    *param_1 = 0;
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    param_1[4] = 0;
    if (*(int **)(iVar1 + 0x88) == param_1 + 1) {
      *(int *)(iVar1 + 0x88) = param_1[3];
    }
    if (*(int **)(iVar1 + 0x8c) == param_1 + 1) {
      *(int *)(iVar1 + 0x8c) = param_1[2];
    }
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 8) = param_1[3];
    }
    if (param_1[3] != 0) {
      *(int *)(param_1[3] + 4) = param_1[2];
    }
    param_1[3] = 0;
    param_1[2] = 0;
  }
  FUN_00e33350();
  return;
}

// 00E35B70  FUN_00e35b70  size=239  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e35b70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = *(int **)(*param_1 + 8);
  while (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0xc))();
    if (iVar3 == 0) {
      piVar2 = (int *)piVar2[5];
    }
    else {
      if (DAT_01dd9470 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9458);
      }
      iVar3 = piVar2[1];
      piVar1 = piVar2 + 1;
      if (iVar3 != 0) {
        if (*(int *)(iVar3 + 8) == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(*(int *)(iVar3 + 8) + 4);
        }
        if (piVar4 == piVar1) {
          *(int *)(iVar3 + 8) = piVar2[5];
        }
        iVar3 = *(int *)(*piVar1 + 0xc);
        if (iVar3 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(iVar3 + 4);
        }
        if (piVar4 == piVar1) {
          *(int *)(*piVar1 + 0xc) = piVar2[4];
        }
        *piVar1 = 0;
      }
      piVar1 = (int *)piVar2[5];
      if (piVar2[4] != 0) {
        *(int **)(piVar2[4] + 0x14) = piVar1;
      }
      if (piVar2[5] != 0) {
        *(int *)(piVar2[5] + 0x10) = piVar2[4];
      }
      piVar2[5] = 0;
      piVar2[4] = 0;
      (**(code **)(*piVar2 + 0x10))();
      FUN_00e42ee0(piVar2[6]);
      (**(code **)(*piVar2 + 4))(1);
      _DAT_01dd9480 = _DAT_01dd9480 + -1;
      piVar2 = piVar1;
      if (DAT_01dd9470 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9458);
      }
    }
  }
  return;
}

// 00E35C60  FUN_00e35c60  size=374  [between]
void __thiscall FUN_00e35c60(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_3 == 0xffffffff) goto LAB_00e35cd3;
  if (param_3 < 0x10) {
    piVar1 = *(int **)(param_1 + (param_3 + 2) * 0x10);
  }
  else {
    uVar4 = (int)param_3 >> 8 & 0xffff;
    if (uVar4 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar4 * 8) ^ param_3) & 0xffffff00) == 0) {
        piVar1 = *(int **)(DAT_01dd9498 + 4 + uVar4 * 8);
        goto LAB_00e35c9f;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    piVar1 = (int *)0x0;
  }
LAB_00e35c9f:
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(param_2 + 4),param_4);
  }
  if (param_3 == 0) {
    FUN_00e2e540(*(undefined4 *)(param_2 + 4),param_4);
  }
LAB_00e35cd3:
  uVar4 = 0;
  do {
    if (uVar4 != 0xffffffff) {
      if (uVar4 < 0x10) {
        iVar3 = *(int *)(param_1 + (uVar4 + 2) * 0x10);
      }
      else {
        uVar2 = (int)uVar4 >> 8 & 0xffff;
        if (uVar2 < DAT_01dd9488) {
          if (((*(uint *)(DAT_01dd9498 + uVar2 * 8) ^ uVar4) & 0xffffff00) == 0) {
            iVar3 = *(int *)(DAT_01dd9498 + 4 + uVar2 * 8);
            goto LAB_00e35d27;
          }
        }
        else {
          FUN_00dd5650(&DAT_01663fb0);
        }
        iVar3 = 0;
      }
LAB_00e35d27:
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x7c) != 0)) && (uVar4 < 0x10)) {
        FUN_00e44210();
      }
    }
    uVar4 = uVar4 + 1;
    if (0xf < (int)uVar4) {
      if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x10) + 0x7c) != 0)) {
        iVar3 = *(int *)(param_1 + 0x10);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x10) = 0;
          if (*(int *)(iVar3 + 0x88) == param_1 + 4) {
            *(undefined4 *)(iVar3 + 0x88) = *(undefined4 *)(param_1 + 0xc);
          }
          if (*(int *)(iVar3 + 0x8c) == param_1 + 4) {
            *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(param_1 + 8);
          }
          if (*(int *)(param_1 + 8) != 0) {
            *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0xc);
          }
          if (*(int *)(param_1 + 0xc) != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0xc) + 4) = *(undefined4 *)(param_1 + 8);
          }
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
        }
      }
      return;
    }
  } while( true );
}

// 00E35DE0  FUN_00e35de0  size=164  [between]
void __thiscall FUN_00e35de0(int param_1,float param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  
  if (param_3 == 0xffffffff) {
    return;
  }
  if (param_3 < 0x10) {
    piVar2 = *(int **)(param_1 + (param_3 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_3 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_3) & 0xffffff00) == 0) {
        piVar2 = *(int **)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e35e20;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    piVar2 = (int *)0x0;
  }
LAB_00e35e20:
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x18))(*(undefined4 *)((int)param_2 + 4),param_4);
    if (param_2 <= 0.0) {
      FUN_00e33cf0(piVar2);
    }
    if (param_3 < 0x10) {
      FUN_00e44210();
    }
  }
  return;
}

// 00E35E90  FUN_00e35e90  size=151  [between]
void __thiscall FUN_00e35e90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00e2e4e0(*(undefined4 *)(param_2 + 4),param_3,param_4);
  uVar3 = 0;
  do {
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x10) {
        iVar2 = *(int *)(param_1 + (uVar3 + 2) * 0x10);
      }
      else {
        uVar1 = (int)uVar3 >> 8 & 0xffff;
        if (uVar1 < DAT_01dd9488) {
          if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ uVar3) & 0xffffff00) == 0) {
            iVar2 = *(int *)(DAT_01dd9498 + 4 + uVar1 * 8);
            goto LAB_00e35ee7;
          }
        }
        else {
          FUN_00dd5650(&DAT_01663fb0);
        }
        iVar2 = 0;
      }
LAB_00e35ee7:
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x7c) != 0)) && (uVar3 < 0x10)) {
        FUN_00e44210();
      }
    }
    uVar3 = uVar3 + 1;
    if (0xf < (int)uVar3) {
      return;
    }
  } while( true );
}

// 00E35F30  FUN_00e35f30  size=289  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00e35f30(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  for (piVar1 = *(int **)(*param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    if (iVar3 == 0) {
      (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(param_2 + 4),0);
    }
  }
  piVar1 = *(int **)(*param_1 + 8);
  while (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    if (iVar3 == 0) {
      piVar1 = (int *)piVar1[5];
    }
    else {
      if (DAT_01dd9470 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9458);
      }
      iVar3 = piVar1[1];
      piVar2 = piVar1 + 1;
      if (iVar3 != 0) {
        if (*(int *)(iVar3 + 8) == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(*(int *)(iVar3 + 8) + 4);
        }
        if (piVar4 == piVar2) {
          *(int *)(iVar3 + 8) = piVar1[5];
        }
        iVar3 = *(int *)(*piVar2 + 0xc);
        if (iVar3 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(iVar3 + 4);
        }
        if (piVar4 == piVar2) {
          *(int *)(*piVar2 + 0xc) = piVar1[4];
        }
        *piVar2 = 0;
      }
      piVar2 = (int *)piVar1[5];
      if (piVar1[4] != 0) {
        *(int **)(piVar1[4] + 0x14) = piVar2;
      }
      if (piVar1[5] != 0) {
        *(int *)(piVar1[5] + 0x10) = piVar1[4];
      }
      piVar1[5] = 0;
      piVar1[4] = 0;
      (**(code **)(*piVar1 + 0x10))();
      FUN_00e42ee0(piVar1[6]);
      (**(code **)(*piVar1 + 4))(1);
      _DAT_01dd9480 = _DAT_01dd9480 + -1;
      piVar1 = piVar2;
      if (DAT_01dd9470 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9458);
      }
    }
  }
  return;
}

// 00E36060  FUN_00e36060  size=245  [between]
bool __thiscall FUN_00e36060(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 == 0xffffffff) {
    return true;
  }
  if (param_2 < 0x10) {
    piVar1 = *(int **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar5 = (int)param_2 >> 8 & 0xffff;
    if (uVar5 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar5 * 8) ^ param_2) & 0xffffff00) == 0) {
        piVar1 = *(int **)(DAT_01dd9498 + 4 + uVar5 * 8);
        goto LAB_00e360ad;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    piVar1 = (int *)0x0;
  }
LAB_00e360ad:
  if (piVar1 != (int *)0x0) {
    iVar6 = 0;
    uVar5 = 0;
    iVar4 = DAT_01dd9498;
    do {
      if (uVar5 == 0xffffffff) {
LAB_00e36120:
        iVar6 = iVar6 + 1;
      }
      else {
        if (uVar5 < 0x10) {
          iVar3 = *(int *)(param_1 + (uVar5 + 2) * 0x10);
        }
        else {
          uVar2 = (int)uVar5 >> 8 & 0xffff;
          if (uVar2 < DAT_01dd9488) {
            if (((*(uint *)(iVar4 + uVar2 * 8) ^ uVar5) & 0xffffff00) == 0) {
              iVar3 = *(int *)(iVar4 + 4 + uVar2 * 8);
              goto LAB_00e3611c;
            }
          }
          else {
            FUN_00dd5650(&DAT_01663fb0);
            iVar4 = DAT_01dd9498;
          }
          iVar3 = 0;
        }
LAB_00e3611c:
        if (iVar3 == 0) goto LAB_00e36120;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x10);
    if (iVar6 < 0x10) {
      iVar4 = (**(code **)(*piVar1 + 0x20))();
      return iVar4 != 0;
    }
  }
  return true;
}

// 00E36240  Animation::MotReader::setFps  size=189  [class]
undefined4 __thiscall Animation::MotReader::setFps(int param_1,uint param_2,char param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (param_2 < 0x10) {
    puVar2 = *(undefined4 **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        puVar2 = *(undefined4 **)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e3627c;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    puVar2 = (undefined4 *)0x0;
  }
LAB_00e3627c:
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = &DAT_01dd9448;
    (**(code **)*puVar2)(&DAT_01dd9448);
    iVar3 = FUN_00dd6d70(puVar4);
    if (iVar3 != 0) {
      if (((0x20111108 < *(uint *)(puVar2[0x2f] + 4)) && (*(char *)(puVar2[0x2f] + 0x15) != '\0'))
         && (*(char *)(puVar2 + 0x30) != param_3)) {
        FUN_00dd5650(&DAT_016cc980);
        return 1;
      }
      *(char *)(puVar2 + 0x30) = param_3;
      return 1;
    }
  }
  return 0;
}

// 00E36300  FUN_00e36300  size=129  [between]
undefined4 __thiscall FUN_00e36300(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (param_2 < 0x10) {
    puVar2 = *(undefined4 **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        puVar2 = *(undefined4 **)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e3633c;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    puVar2 = (undefined4 *)0x0;
  }
LAB_00e3633c:
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = &DAT_01dd9448;
    (**(code **)*puVar2)(&DAT_01dd9448);
    iVar3 = FUN_00dd6d70(puVar4);
    if (iVar3 != 0) {
      return puVar2[0x2f];
    }
  }
  return 0;
}

// 00E36390  FUN_00e36390  size=188  [between]
int __thiscall
FUN_00e36390(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  FUN_00e35c60(param_2,param_3,param_6);
  if (*param_1 == 0) {
    return -1;
  }
  iVar1 = Animation::Motion::NodeGridBlend::NodeGridBlend();
  if (iVar1 != 0) {
    iVar2 = FUN_00e339b0(param_3,param_4,param_7,param_1 + 0x46);
    if (iVar2 != 0) {
      iVar2 = FUN_00e265e0(param_5);
      if (iVar2 != 0) {
        iVar2 = FUN_00e44100(iVar1);
        if (iVar2 != 0) {
          iVar2 = FUN_00e26430();
          if (iVar2 != 0) {
            if (param_3 == -1) {
              param_3 = *(int *)(iVar1 + 0x18);
LAB_00e3643b:
              FUN_00e442c0(iVar1);
              return param_3;
            }
            iVar2 = Animation::Motion::NodeSlot::setNode(param_3,iVar1);
            if (iVar2 != 0) goto LAB_00e3643b;
          }
        }
      }
    }
    FUN_00e33cf0(iVar1);
  }
  return -1;
}

// 00E36450  FUN_00e36450  size=188  [between]
int __thiscall
FUN_00e36450(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  FUN_00e35c60(param_2,param_3,param_6);
  if (*param_1 == 0) {
    return -1;
  }
  iVar1 = Animation::Motion::NodeRingBlend::NodeRingBlend();
  if (iVar1 != 0) {
    iVar2 = FUN_00e339b0(param_3,param_4,param_7,param_1 + 0x46);
    if (iVar2 != 0) {
      iVar2 = FUN_00e265e0(param_5);
      if (iVar2 != 0) {
        iVar2 = FUN_00e44100(iVar1);
        if (iVar2 != 0) {
          iVar2 = FUN_00e26430();
          if (iVar2 != 0) {
            if (param_3 == -1) {
              param_3 = *(int *)(iVar1 + 0x18);
LAB_00e364fb:
              FUN_00e442c0(iVar1);
              return param_3;
            }
            iVar2 = Animation::Motion::NodeSlot::setNode(param_3,iVar1);
            if (iVar2 != 0) goto LAB_00e364fb;
          }
        }
      }
    }
    FUN_00e33cf0(iVar1);
  }
  return -1;
}

// 00E36510  Animation::Motion::Unit::setBlendRate  size=171  [class]
undefined4 __thiscall
Animation::Motion::Unit::setBlendRate
          (int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_2 == 0xffffffff) goto LAB_00e36550;
  if (param_2 < 0x10) {
    puVar2 = *(undefined4 **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        puVar2 = *(undefined4 **)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e3654c;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    puVar2 = (undefined4 *)0x0;
  }
LAB_00e3654c:
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = &DAT_01dd943c;
    (**(code **)*puVar2)(&DAT_01dd943c);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 == 0) {
      return 0;
    }
    puVar2[0x27] = param_3;
    puVar2[0x28] = param_4;
    puVar2[0x29] = param_5;
    return 1;
  }
LAB_00e36550:
  FUN_00dd5650(&DAT_016cdcb8);
  return 0;
}

// 00E365C0  FUN_00e365c0  size=120  [between]
undefined4 __thiscall FUN_00e365c0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (param_2 < 0x10) {
    piVar2 = *(int **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        piVar2 = *(int **)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e365fb;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    piVar2 = (int *)0x0;
  }
LAB_00e365fb:
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*piVar2 + 0x14))(param_3,param_4);
  return 1;
}

// 00E36640  FUN_00e36640  size=109  [between]
bool __thiscall FUN_00e36640(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0xffffffff) {
    return false;
  }
  if (param_2 < 0x10) {
    iVar2 = *(int *)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        iVar2 = *(int *)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e36679;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    iVar2 = 0;
  }
LAB_00e36679:
  if (iVar2 == 0) {
    return false;
  }
  return (*(uint *)(iVar2 + 100) & param_3) != 0;
}

// 00E366B0  FUN_00e366b0  size=102  [between]
undefined1 * __thiscall FUN_00e366b0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0xffffffff) {
    return &DAT_016416fa;
  }
  if (param_2 < 0x10) {
    iVar2 = *(int *)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        iVar2 = *(int *)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e366e9;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    iVar2 = 0;
  }
LAB_00e366e9:
  if (iVar2 == 0) {
    return &DAT_016416fa;
  }
  return (undefined1 *)(iVar2 + 0x20);
}

// 00E36720  FUN_00e36720  size=136  [between]
undefined4 __thiscall FUN_00e36720(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (param_2 < 0x10) {
    piVar3 = *(int **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar2 = (int)param_2 >> 8 & 0xffff;
    if (uVar2 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar2 * 8) ^ param_2) & 0xffffff00) == 0) {
        piVar3 = *(int **)(DAT_01dd9498 + 4 + uVar2 * 8);
        goto LAB_00e3675b;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    piVar3 = (int *)0x0;
  }
LAB_00e3675b:
  if (piVar3 != (int *)0x0) {
    if (piVar3[0x18] == 0) {
      pcVar1 = *(code **)(*piVar3 + 0x60);
      piVar3[0x1c] = param_3;
      (*pcVar1)();
      return 1;
    }
    FUN_00dd5650(&DAT_016ccd98);
  }
  return 0;
}

// 00E367B0  Animation::Motion::Node::setLocalPlaybackRate  size=136  [class]
undefined4 __thiscall
Animation::Motion::Node::setLocalPlaybackRate(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (param_2 < 0x10) {
    piVar3 = *(int **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar2 = (int)param_2 >> 8 & 0xffff;
    if (uVar2 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar2 * 8) ^ param_2) & 0xffffff00) == 0) {
        piVar3 = *(int **)(DAT_01dd9498 + 4 + uVar2 * 8);
        goto LAB_00e367eb;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    piVar3 = (int *)0x0;
  }
LAB_00e367eb:
  if (piVar3 != (int *)0x0) {
    if (piVar3[0x18] == 0) {
      pcVar1 = *(code **)(*piVar3 + 0x60);
      piVar3[0x1d] = param_3;
      (*pcVar1)();
      return 1;
    }
    FUN_00dd5650(&DAT_016ccdd4);
  }
  return 0;
}

// 00E36840  FUN_00e36840  size=99  [between]
float10 __thiscall FUN_00e36840(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0xffffffff) goto LAB_00e3687d;
  if (param_2 < 0x10) {
    iVar2 = *(int *)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        iVar2 = *(int *)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e36879;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    iVar2 = 0;
  }
LAB_00e36879:
  if (iVar2 != 0) {
    return (float10)*(float *)(iVar2 + 0x78);
  }
LAB_00e3687d:
  return (float10)0;
}

// 00E368B0  Animation::Motion::Unit::setCurrentTime  size=86  [class]
void __thiscall Animation::Motion::Unit::setCurrentTime(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == -1) {
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 0x2c))(param_3,0);
      return;
    }
  }
  else {
    piVar1 = (int *)FUN_00e33df0(param_2);
    if (piVar1 == (int *)0x0) {
      FUN_00dd5650(&DAT_016cdcf8);
      return;
    }
    (**(code **)(*piVar1 + 0x2c))(param_3,0);
  }
  return;
}

// 00E36910  Animation::Motion::Unit::setCurrentTimeSlide  size=86  [class]
void __thiscall
Animation::Motion::Unit::setCurrentTimeSlide(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == -1) {
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 0x30))(param_3,0);
      return;
    }
  }
  else {
    piVar1 = (int *)FUN_00e33df0(param_2);
    if (piVar1 == (int *)0x0) {
      FUN_00dd5650(&DAT_016cdd40);
      return;
    }
    (**(code **)(*piVar1 + 0x30))(param_3,0);
  }
  return;
}

// 00E36970  FUN_00e36970  size=109  [between]
float10 __thiscall FUN_00e36970(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  float10 fVar3;
  
  if (param_2 == 0xffffffff) goto LAB_00e369af;
  if (param_2 < 0x10) {
    piVar2 = *(int **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        piVar2 = *(int **)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e369ab;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    piVar2 = (int *)0x0;
  }
LAB_00e369ab:
  if (piVar2 != (int *)0x0) {
    fVar3 = (float10)(**(code **)(*piVar2 + 0x34))();
    return fVar3;
  }
LAB_00e369af:
  return (float10)-1.0;
}

// 00E36A50  FUN_00e36a50  size=109  [between]
float10 __thiscall FUN_00e36a50(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  float10 fVar3;
  
  if (param_2 == 0xffffffff) goto LAB_00e36a8f;
  if (param_2 < 0x10) {
    piVar2 = *(int **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        piVar2 = *(int **)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e36a8b;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    piVar2 = (int *)0x0;
  }
LAB_00e36a8b:
  if (piVar2 != (int *)0x0) {
    fVar3 = (float10)(**(code **)(*piVar2 + 0x3c))();
    return fVar3;
  }
LAB_00e36a8f:
  return (float10)-1.0;
}

// 00E36AC0  FUN_00e36ac0  size=136  [between]
undefined4 __thiscall FUN_00e36ac0(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (param_2 < 0x10) {
    piVar3 = *(int **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar2 = (int)param_2 >> 8 & 0xffff;
    if (uVar2 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar2 * 8) ^ param_2) & 0xffffff00) == 0) {
        piVar3 = *(int **)(DAT_01dd9498 + 4 + uVar2 * 8);
        goto LAB_00e36afb;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    piVar3 = (int *)0x0;
  }
LAB_00e36afb:
  if (piVar3 != (int *)0x0) {
    if (piVar3[0x18] == 0) {
      pcVar1 = *(code **)(*piVar3 + 100);
      piVar3[0x1a] = param_3;
      (*pcVar1)();
      return 1;
    }
    FUN_00dd5650(&DAT_016cce10);
  }
  return 0;
}

// 00E36B50  FUN_00e36b50  size=48  [between]
void __thiscall FUN_00e36b50(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  if (param_2 == -1) {
    piVar1 = (int *)*param_1;
  }
  else {
    piVar1 = (int *)FUN_00e33df0(param_2);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x54))(param_3,param_4);
  }
  return;
}

// 00E36B80  Animation::Motion::Unit::setCameraNo  size=148  [class]
void __thiscall Animation::Motion::Unit::setCameraNo(int param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  if (param_2 < 0x10) {
    puVar2 = *(undefined4 **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        puVar2 = *(undefined4 **)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e36bc0;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    puVar2 = (undefined4 *)0x0;
  }
LAB_00e36bc0:
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = &DAT_01dd9448;
    (**(code **)*puVar2)(&DAT_01dd9448);
    iVar3 = FUN_00dd6d70(puVar4);
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016cdd88);
      return;
    }
    *(undefined1 *)(puVar2 + 0x50) = param_3;
  }
  return;
}

// 00E36C20  Animation::Motion::Unit::getSeqNode  size=170  [class]
undefined4 * __thiscall Animation::Motion::Unit::getSeqNode(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_2 == 0xffffffff) goto LAB_00e36c60;
  if (param_2 < 0x10) {
    puVar2 = *(undefined4 **)(param_1 + (param_2 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_2 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_2) & 0xffffff00) == 0) {
        puVar2 = *(undefined4 **)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e36c5c;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    puVar2 = (undefined4 *)0x0;
  }
LAB_00e36c5c:
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = &DAT_01dd9450;
    (**(code **)*puVar2)(&DAT_01dd9450);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      return puVar2;
    }
    if (param_3 == 0) {
      return (undefined4 *)0x0;
    }
    FUN_00dd5650(&DAT_016cddd8);
    return (undefined4 *)0x0;
  }
LAB_00e36c60:
  if (param_3 != 0) {
    FUN_00dd5650(&DAT_016cde28);
  }
  return (undefined4 *)0x0;
}

// 00E36D20  FUN_00e36d20  size=106  [between]
void __thiscall FUN_00e36d20(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [40];
  float fStack_28;
  
  puStack_58 = local_50;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    uStack_54 = param_3;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x4c))();
    if (1.1920929e-07 < fStack_28) {
      FUN_00e40aa0(&puStack_58);
      return;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[8] = 0x3f800000;
  param_2[9] = 0x3f800000;
  param_2[10] = 0x3f800000;
  return;
}

// 00E36F60  FUN_00e36f60  size=257  [between]
undefined4 __thiscall
FUN_00e36f60(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if ((param_3 != 0) && (param_3 != -0xc)) {
    iVar2 = Animation::MotReader(param_4);
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x48) = 0xbf800000;
    *(int *)(param_1 + 0xc) = param_3;
    *(int *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
    iVar2 = *(ushort *)(*(int *)(param_1 + 0x14) + 10) - 1;
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_00e25b50(param_6,param_7,fVar1 / 60.0);
    FUN_00e23040(param_5,extraout_EDX);
    uVar3 = FUN_00e259b0();
    FUN_00e34cc0(param_1,uVar3);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    if ((*(byte *)(param_2 + 100) & 0x40) != 0) {
      uVar3 = *(undefined4 *)(param_3 + 0x44);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_3 + 0x40);
      *(undefined4 *)(param_1 + 0x40) = uVar3;
    }
    return 1;
  }
  return 0;
}

// 00E370C0  FUN_00e370c0  size=68  [between]
void __fastcall FUN_00e370c0(int param_1)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 100);
    if ((uVar1 & 0x10) != 0) {
      FUN_00e34d10(param_1,2);
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
      return;
    }
    FUN_00e34d10(param_1,uVar1 >> 0x12 & 1);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  return;
}

// 00E37110  FUN_00e37110  size=121  [between]
void __thiscall FUN_00e37110(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 100);
  if ((uVar1 & 0x10) == 0) {
    uVar2 = uVar1 >> 0x12 & 1;
  }
  else {
    uVar2 = 2;
  }
  if (param_2 != uVar2) {
    if ((uVar1 & 0x10) == 0) {
      uVar1 = uVar1 >> 0x12 & 1;
    }
    else {
      uVar1 = 2;
    }
    FUN_00e34d10(param_1,uVar1);
    if (param_2 != 1) {
      if (param_2 != 2) {
        FUN_00e43f00(param_1);
        return;
      }
      FUN_00e43f00(param_1);
      return;
    }
    FUN_00e43f00(param_1);
  }
  return;
}

// 00E37190  FUN_00e37190  size=1525  [between]
void __thiscall FUN_00e37190(int param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined1 auStack_114 [12];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  int local_b0;
  int local_ac;
  float local_a8;
  int local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float *local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_114;
  local_a4 = *(int *)(param_1 + 0x10);
  param_2[0xc] = *(float *)(param_1 + 0x44);
  uVar3 = *(uint *)(local_a4 + 100);
  local_84 = param_2;
  if ((char)uVar3 < '\0') {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    goto LAB_00e37769;
  }
  local_ac = FUN_00e23860(*(undefined4 *)(param_1 + 0x20),0xffffffff);
  if (local_ac == -1) {
    __security_check_cookie(local_14 ^ (uint)auStack_114);
    return;
  }
  local_a8 = *(float *)(param_1 + 0x54);
  local_b0 = *(int *)(param_1 + 0x6c);
  local_104 = *(float *)(param_1 + 0x58);
  if (((*(uint *)(param_1 + 0x4c) & 8) != 0) && ((*(uint *)(param_1 + 0x4c) & 0x20) == 0)) {
    local_104 = local_a8;
  }
  if (0.0 <= local_104) {
LAB_00e3730b:
    fVar5 = (float10)FUN_00e2d850(local_104);
    local_108 = (float)fVar5;
    piVar1 = (int *)(param_1 + 0x2c);
    *piVar1 = local_ac;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    FUN_00e24230(local_108);
    FUN_00e23ac0(&local_e0,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,piVar1,param_1 + 0x30);
    FUN_00e28240(&local_f0,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,piVar1,param_1 + 0x30);
  }
  else {
    if (((uVar3 & 0x4000) != 0) && ((uVar3 >> 0x1b & 1) == 0)) {
      local_108 = *(float *)(param_1 + 0x68);
      for (local_104 = local_a8 - *(float *)(param_1 + 100); local_104 < 0.0;
          local_104 = local_108 + local_104) {
        local_b0 = local_b0 + 1;
      }
      if (local_108 < local_104 != (local_108 == local_104)) {
        do {
          local_b0 = local_b0 + -1;
          local_104 = local_104 - local_108;
        } while (local_108 <= local_104);
      }
      if (0.0 <= local_104) goto LAB_00e3730b;
    }
    local_e0 = 0.0;
    local_dc = 0.0;
    local_d8 = 0.0;
    local_f0 = 0.0;
    local_ec = 0.0;
    local_e8 = 0.0;
  }
  fVar5 = (float10)FUN_00e2d850(local_a8);
  local_108 = (float)fVar5;
  piVar1 = (int *)(param_1 + 0x2c);
  *piVar1 = local_ac;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  FUN_00e24230(local_108);
  iVar2 = param_1 + 0x20;
  FUN_00e23ac0(&local_100,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1,param_1 + 0x30);
  FUN_00e28240(&local_d0,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1,param_1 + 0x30);
  local_100 = local_100 - local_e0;
  local_fc = local_fc - local_dc;
  local_f8 = local_f8 - local_d8;
  local_f4 = local_f4 - local_d4;
  local_d0 = local_d0 - local_f0;
  local_cc = local_cc - local_ec;
  local_c8 = local_c8 - local_e8;
  local_c4 = local_c4 - local_e4;
  if (local_b0 != 0) {
    *piVar1 = local_ac;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    FUN_00e29510(&local_80,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1);
    FUN_00e29600(&local_a0,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1);
    *piVar1 = local_ac;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    FUN_00e297e0(&local_c0,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1);
    FUN_00e298d0(&local_70,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1);
    local_108 = (float)local_b0;
    local_100 = local_108 * (local_c0 - local_80) + local_100;
    local_fc = local_108 * (local_bc - local_7c) + local_fc;
    local_f8 = local_108 * (local_b8 - local_78) + local_f8;
    local_f4 = local_108 * (local_b4 - local_74) + local_f4;
    local_c0 = local_70 - local_a0;
    local_bc = local_6c - local_9c;
    local_b8 = local_68 - local_98;
    local_b4 = local_64 - local_94;
    local_e0 = local_108 * local_c0;
    local_dc = local_108 * local_bc;
    local_d8 = local_108 * local_b8;
    local_d4 = local_108 * local_b4;
    local_d0 = local_e0 + local_d0;
    local_cc = local_dc + local_cc;
    local_c8 = local_d8 + local_c8;
    local_c4 = local_d4 + local_c4;
  }
  iVar4 = local_a4;
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x3c);
  if ((iVar2 != 0) && ((*(uint *)(local_a4 + 100) & 0x200000) == 0)) {
    fVar5 = (float10)FUN_00e233c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 8) + 0x330),
                                  iVar2);
    local_108 = (float)fVar5;
    local_100 = local_108 * local_100;
    local_fc = local_fc * local_108;
    local_f8 = local_f8 * local_108;
    local_f4 = local_108 * local_f4;
  }
  if ((*(uint *)(iVar4 + 100) & 0x1000000) == 0) {
    local_f0 = 0.0;
    local_e8 = 0.0;
    local_d0 = 0.0;
    local_c8 = 0.0;
  }
  local_a0 = local_f0 * -1.0;
  local_9c = local_ec * -1.0;
  local_98 = local_e8 * -1.0;
  local_94 = local_e4 * -1.0;
  FUN_00ddc1d0(local_60,&local_a0,0);
  D3DXVec3TransformNormal(&local_100,&local_100,local_60);
  local_108 = *(float *)(param_1 + 0x78);
  uVar3 = *(uint *)(iVar4 + 100);
  local_f0 = local_108;
  if ((uVar3 & 0x8000) != 0) {
    local_f0 = 1.0;
  }
  local_ec = local_108;
  if ((uVar3 & 0x10000) != 0) {
    local_ec = 1.0;
  }
  local_e8 = local_108;
  if ((uVar3 & 0x20000) != 0) {
    local_e8 = 1.0;
  }
  *local_84 = local_100 * local_f0;
  local_84[1] = local_fc * local_ec;
  local_84[2] = local_f8 * local_e8;
  local_84[3] = local_e4 * local_f4;
  local_84[4] = local_108 * local_d0;
  local_84[5] = local_cc * local_108;
  local_84[6] = local_108 * local_c8;
  local_84[7] = local_108 * local_c4;
LAB_00e37769:
  __security_check_cookie(local_14 ^ (uint)auStack_114);
  return;
}

// 00E37790  FUN_00e37790  size=1507  [between]
undefined4 __thiscall FUN_00e37790(int param_1,float *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float10 extraout_ST0;
  float10 fVar6;
  float10 fVar7;
  float local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_58;
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
  float local_1c;
  float local_18;
  float local_14;
  
  local_54 = *(int *)(param_1 + 0x10);
  param_2[0xc] = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  if (NAN(fVar3) || 0.0 < fVar3 == (fVar3 == 0.0)) {
    fVar3 = *(float *)(param_1 + 0x44);
  }
  else {
    fVar3 = *(float *)(param_1 + 0x48);
  }
  param_3[0xc] = fVar3;
  uVar4 = *(uint *)(local_54 + 100);
  if ((char)uVar4 < '\0') {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[4] = 0.0;
    param_3[5] = 0.0;
    param_3[6] = 0.0;
    return 1;
  }
  local_84 = FUN_00e23860(*(undefined4 *)(param_1 + 0x20),0xffffffff);
  if (local_84 == -1) {
    return 0;
  }
  local_58 = *(float *)(param_1 + 0x54);
  local_c4 = *(int *)(param_1 + 0x6c);
  local_c8 = *(float *)(param_1 + 0x58);
  if (((*(uint *)(param_1 + 0x4c) & 8) != 0) && ((*(uint *)(param_1 + 0x4c) & 0x20) == 0)) {
    local_c8 = local_58;
  }
  fVar6 = (float10)local_c8;
  if (extraout_ST0 <= fVar6) {
LAB_00e37936:
    fVar6 = (float10)FUN_00e2d850((float)fVar6);
    piVar1 = (int *)(param_1 + 0x2c);
    *piVar1 = local_84;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    FUN_00e24230((float)fVar6);
    FUN_00e23ac0(&local_80,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,piVar1,param_1 + 0x30);
    FUN_00e28240(&local_50,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,piVar1,param_1 + 0x30);
  }
  else {
    if (((uVar4 & 0x4000) != 0) && ((uVar4 >> 0x1b & 1) == 0)) {
      fVar7 = (float10)*(float *)(param_1 + 0x68);
      fVar3 = local_58 - *(float *)(param_1 + 100);
      while (fVar6 = (float10)fVar3, fVar6 < extraout_ST0) {
        local_c4 = local_c4 + 1;
        fVar3 = (float)(fVar7 + fVar6);
      }
      if (fVar7 < fVar6 != (fVar7 == fVar6)) {
        do {
          local_c4 = local_c4 + -1;
          fVar6 = (float10)(float)(fVar6 - fVar7);
        } while (fVar7 <= fVar6);
      }
      if (extraout_ST0 <= fVar6) goto LAB_00e37936;
    }
    local_80 = (float)extraout_ST0;
    local_7c = (float)extraout_ST0;
    local_78 = (float)extraout_ST0;
    local_50 = (float)extraout_ST0;
    local_4c = (float)extraout_ST0;
    local_48 = (float)extraout_ST0;
  }
  fVar6 = (float10)FUN_00e2d850(local_58);
  piVar1 = (int *)(param_1 + 0x2c);
  *piVar1 = local_84;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  FUN_00e24230((float)fVar6);
  iVar2 = param_1 + 0x20;
  FUN_00e23ac0(&local_a0,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1,param_1 + 0x30);
  FUN_00e28240(&local_70,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1,param_1 + 0x30);
  if (local_c4 != 0) {
    *piVar1 = local_84;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    FUN_00e29510(&local_40,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1);
    FUN_00e29600(&local_20,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1);
    *piVar1 = local_84;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    FUN_00e297e0(&local_b0,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1);
    FUN_00e298d0(&local_30,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1);
    fVar3 = (float)local_c4;
    local_a0 = local_a0 + fVar3 * (local_b0 - local_40);
    local_9c = local_9c + fVar3 * (local_ac - local_3c);
    local_98 = local_98 + fVar3 * (local_a8 - local_38);
    local_94 = local_94 + fVar3 * (local_a4 - local_34);
    local_b0 = local_30 - local_20;
    local_ac = local_2c - local_1c;
    local_a8 = local_28 - local_18;
    local_a4 = local_24 - local_14;
    local_b4 = fVar3 * local_a4;
    local_70 = fVar3 * local_b0 + local_70;
    local_6c = local_6c + fVar3 * local_ac;
    local_68 = fVar3 * local_a8 + local_68;
    local_64 = local_64 + local_b4;
  }
  iVar5 = local_54;
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x3c);
  if ((iVar2 != 0) && ((*(uint *)(local_54 + 100) & 0x200000) == 0)) {
    fVar6 = (float10)FUN_00e233c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 8) + 0x330),
                                  iVar2);
    fVar3 = (float)fVar6;
    local_80 = fVar3 * local_80;
    local_7c = local_7c * fVar3;
    local_78 = local_78 * fVar3;
    local_74 = local_74 * fVar3;
    local_a0 = local_a0 * fVar3;
    local_9c = local_9c * fVar3;
    local_98 = local_98 * fVar3;
    local_94 = fVar3 * local_94;
  }
  if ((*(uint *)(iVar5 + 100) & 0x1000000) == 0) {
    local_50 = 0.0;
    local_48 = 0.0;
    local_70 = 0.0;
    local_68 = 0.0;
  }
  fVar3 = *(float *)(param_1 + 0x78);
  uVar4 = *(uint *)(iVar5 + 100);
  local_c0 = fVar3;
  if ((uVar4 & 0x8000) != 0) {
    local_c0 = 1.0;
  }
  local_bc = fVar3;
  if ((uVar4 & 0x10000) != 0) {
    local_bc = 1.0;
  }
  local_b8 = fVar3;
  if ((uVar4 & 0x20000) != 0) {
    local_b8 = 1.0;
  }
  *param_2 = local_c0 * local_a0;
  param_2[1] = local_bc * local_9c;
  param_2[2] = local_b8 * local_98;
  param_2[3] = local_b4 * local_94;
  param_2[4] = fVar3 * local_70;
  param_2[5] = local_6c * fVar3;
  param_2[6] = fVar3 * local_68;
  param_2[7] = local_64 * fVar3;
  *param_3 = local_80 * local_c0;
  param_3[1] = local_7c * local_bc;
  param_3[2] = local_b8 * local_78;
  param_3[3] = local_b4 * local_74;
  param_3[4] = fVar3 * local_50;
  param_3[5] = local_4c * fVar3;
  param_3[6] = fVar3 * local_48;
  param_3[7] = fVar3 * local_44;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x44);
  return 1;
}

// 00E37D80  FUN_00e37d80  size=171  [between]
undefined4 __thiscall FUN_00e37d80(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x44);
  iVar3 = FUN_00e23860(*(undefined4 *)(param_1 + 0x20),0xffffffff);
  if (iVar3 == -1) {
    return 0;
  }
  fVar4 = (float10)FUN_00e2d7e0(*(undefined4 *)(param_1 + 0x54));
  piVar1 = (int *)(param_1 + 0x2c);
  *piVar1 = iVar3;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  FUN_00e24230((float)fVar4);
  iVar3 = param_1 + 0x30;
  iVar2 = param_1 + 0x20;
  FUN_00e23ac0(param_2,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1,iVar3);
  FUN_00e28240(param_2 + 0x10,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1,iVar3);
  FUN_00e23fd0(param_2 + 0x20,*(undefined4 *)(param_1 + 0x1c),iVar2,piVar1,iVar3);
  return 1;
}

// 00E37E30  FUN_00e37e30  size=116  [between]
float10 __thiscall FUN_00e37e30(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *local_4;
  
  iVar1 = param_1[1];
  iVar2 = *param_1;
  iVar4 = 0;
  if (0 < iVar1) {
    piVar5 = param_1 + 2;
    local_4 = param_1;
    do {
      iVar3 = *piVar5;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (iVar3 < 0x18) {
        iVar3 = *(int *)(iVar2 + iVar3 * 4);
      }
      else {
        iVar3 = 0;
      }
      if ((*(uint *)(*(int *)(iVar3 + 0x20) + 100) & 0x1000) == 0) {
        iVar3 = FUN_00e2e0f0(&local_4,param_2,*(undefined4 *)(iVar2 + 0x60));
        if (iVar3 != 0) {
          return (float10)(float)local_4;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < iVar1);
  }
  return (float10)1;
}

// 00E37EB0  FUN_00e37eb0  size=56  [between]
void __fastcall FUN_00e37eb0(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E37EF0  FUN_00e37ef0  size=439  [between]
void __thiscall
FUN_00e37ef0(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_154 [4];
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_130 [284];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_154;
  local_14c = param_5;
  local_144 = param_4;
  switch(*(undefined4 *)(param_2 + 0xc)) {
  case 0:
    local_150 = FUN_00e00b40(*(undefined4 *)(param_2 + 0x10));
    break;
  case 1:
    local_150 = 0;
    goto LAB_00e37f6b;
  case 2:
    local_150 = FUN_00e001b0(*(undefined4 *)(param_2 + 0x10));
    break;
  case 3:
    local_150 = FUN_00931460(param_4);
    break;
  default:
    goto switchD_00e37f2c_default;
  }
  if (local_150 != 0xfff) {
LAB_00e37f6b:
    if ((*(byte *)(param_2 + 8) & 1) != 0) {
      if ((int)param_3 < 0x40) {
        uVar6 = 0x80000000 >> ((byte)param_3 & 0x1f);
        if ((*(uint *)(param_1 + 0x1c + (param_3 >> 5) * 4) & uVar6) != 0)
        goto switchD_00e37f2c_default;
        puVar1 = (uint *)(param_1 + 0x1c + (param_3 >> 5) * 4);
        *puVar1 = *puVar1 | uVar6;
      }
      else {
        FUN_00dd5650(&DAT_016cdef8);
      }
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (*(int *)(iVar2 + 0x7c) != 0) {
      FUN_00dd5650(&DAT_016cce48);
LAB_00e37fbb:
      FUN_00dd5650(&DAT_016cdeb8);
      __security_check_cookie(local_14 ^ (uint)auStack_154);
      return;
    }
    if (*(int *)(iVar2 + 0x84) == 0) {
      iVar4 = Animation::EspUnit::holdPilot();
      if (iVar4 == 0) goto LAB_00e37fbb;
      *(int *)(iVar2 + 0x84) = iVar4;
    }
    uVar5 = FUN_00e257f0(*(undefined4 *)(param_2 + 0x1c));
    local_148 = *(undefined4 *)(param_2 + 0x18);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    FUN_00e01ca0();
    local_140 = *(undefined4 *)(param_2 + 0x24);
    local_13c = *(undefined4 *)(param_2 + 0x28);
    local_138 = *(undefined4 *)(param_2 + 0x2c);
    FUN_00dffb20(uVar5);
    uVar5 = local_144;
    FUN_00e020f0(local_144);
    FUN_00dffba0(local_14c);
    FUN_00dffb90(*(undefined4 *)(param_2 + 0x20));
    FUN_00dffbc0(local_148);
    FUN_00931400(uVar5,local_150,uVar3,&local_140,local_130);
  }
switchD_00e37f2c_default:
  __security_check_cookie(local_14 ^ (uint)auStack_154);
  return;
}

// 00E380C0  FUN_00e380c0  size=64  [between]
void __thiscall FUN_00e380c0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

// 00E38130  FUN_00e38130  size=45  [between]
void __fastcall FUN_00e38130(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E38160  FUN_00e38160  size=124  [between]
void __thiscall FUN_00e38160(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = FUN_00a7c800();
    if (iVar2 == 0) {
      return;
    }
    uVar1 = *(uint *)(param_3 + 0x18);
    puVar4 = *(uint **)(param_1 + 4);
    iVar3 = *(int *)(param_1 + 0xc);
    if (0 < iVar3) {
      do {
        if (((puVar4[2] & 0x8000) != 0) && ((*puVar4 & uVar1) != 0)) {
          FUN_00e2dfa0(puVar4,iVar2);
        }
        puVar4 = puVar4 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E381E0  FUN_00e381e0  size=128  [between]
void __thiscall FUN_00e381e0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = *param_3;
    uVar2 = param_3[6];
    iVar3 = *(int *)(param_1 + 0xc);
    puVar4 = *(uint **)(param_1 + 4);
    if (0 < iVar3) {
      do {
        if (((puVar4[2] & 0x8000) != 0) && ((*puVar4 & uVar2) != 0)) {
          FUN_00932f40(uVar1,puVar4 + 3);
        }
        puVar4 = puVar4 + 0x11;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E38260  FUN_00e38260  size=292  [between]
void __fastcall FUN_00e38260(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x28),0);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x40),0);
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x60),0);
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x78),0);
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if (*(int *)(param_1 + 200) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xbc),0);
      *(undefined4 *)(param_1 + 200) = 0;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xd4),0);
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  return;
}

// 00E38390  FUN_00e38390  size=292  [between]
void __fastcall FUN_00e38390(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x28),0);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x40),0);
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x60),0);
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x78),0);
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if (*(int *)(param_1 + 200) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xbc),0);
      *(undefined4 *)(param_1 + 200) = 0;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xd4),0);
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  return;
}

// 00E384C0  FUN_00e384c0  size=301  [between]
void __thiscall FUN_00e384c0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x28),0);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x40),0);
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x60),0);
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x78),0);
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if (*(int *)(param_1 + 200) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xbc),0);
      *(undefined4 *)(param_1 + 200) = 0;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xd4),0);
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  return;
}

// 00E385F0  FUN_00e385f0  size=45  [between]
void __fastcall FUN_00e385f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E38620  Animation::Motion::Node::vf10  size=260  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Animation::Motion::Node::vf10(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_00e33d50();
  piVar3 = *(int **)(param_1 + 8);
  while (piVar3 != (int *)0x0) {
    if (DAT_01dd9470 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9458);
    }
    iVar1 = piVar3[1];
    piVar2 = piVar3 + 1;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(*(int *)(iVar1 + 8) + 4);
      }
      if (piVar4 == piVar2) {
        *(int *)(iVar1 + 8) = piVar3[5];
      }
      iVar1 = *(int *)(*piVar2 + 0xc);
      if (iVar1 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(iVar1 + 4);
      }
      if (piVar4 == piVar2) {
        *(int *)(*piVar2 + 0xc) = piVar3[4];
      }
      *piVar2 = 0;
    }
    piVar2 = (int *)piVar3[5];
    if (piVar3[4] != 0) {
      *(int **)(piVar3[4] + 0x14) = piVar2;
    }
    if (piVar3[5] != 0) {
      *(int *)(piVar3[5] + 0x10) = piVar3[4];
    }
    piVar3[5] = 0;
    piVar3[4] = 0;
    (**(code **)(*piVar3 + 0x10))();
    FUN_00e42ee0(piVar3[6]);
    (**(code **)(*piVar3 + 4))(1);
    _DAT_01dd9480 = _DAT_01dd9480 + -1;
    piVar3 = piVar2;
    if (DAT_01dd9470 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9458);
    }
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_00e2d0e0();
    FUN_00e2d3c0(*(undefined4 *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}

// 00E38730  Animation::Motion::NodeBlend::vf10  size=60  [class]
void __fastcall Animation::Motion::NodeBlend::vf10(int param_1)

{
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  Node::vf10();
  return;
}

// 00E38770  Animation::Motion::NodePlay::vf14  size=204  [class]
void __thiscall Animation::Motion::NodePlay::vf14(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if ((param_2 & 0x40000) == 0) {
LAB_00e387ce:
    if (param_3 != 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | param_2;
      goto LAB_00e3881c;
    }
  }
  else {
    iVar1 = param_1 + 0xa8;
    if (param_3 != 0) {
      uVar3 = *(uint *)(*(int *)(param_1 + 0xb8) + 100);
      if (((uVar3 & 0x10) != 0) || ((uVar3 & 0x40000) == 0)) {
        if ((uVar3 & 0x10) == 0) {
          uVar3 = uVar3 >> 0x12 & 1;
        }
        else {
          uVar3 = 2;
        }
        FUN_00e34d10(iVar1,uVar3);
        FUN_00e43f00(iVar1);
      }
      goto LAB_00e387ce;
    }
    uVar3 = *(uint *)(*(int *)(param_1 + 0xb8) + 100);
    if (((uVar3 & 0x10) != 0) || ((uVar3 & 0x40000) != 0)) {
      if ((uVar3 & 0x10) == 0) {
        uVar3 = uVar3 >> 0x12 & 1;
      }
      else {
        uVar3 = 2;
      }
      FUN_00e34d10(iVar1,uVar3);
      FUN_00e43f00(iVar1);
    }
  }
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & ~param_2;
LAB_00e3881c:
  for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[5]) {
    (**(code **)(*piVar2 + 0x14))(param_2,param_3);
  }
  return;
}

// 00E38840  Animation::Motion::NodePlay::vf48  size=11  [class]
void Animation::Motion::NodePlay::vf48(void)

{
  FUN_00e37190();
  return;
}

// 00E38850  Animation::Motion::NodePlay::vf44  size=11  [class]
void Animation::Motion::NodePlay::vf44(void)

{
  FUN_00e37790();
  return;
}

// 00E38860  Animation::Motion::NodePlay::vf4C  size=11  [class]
void Animation::Motion::NodePlay::vf4C(void)

{
  FUN_00e37d80();
  return;
}

// 00E38900  FUN_00e38900  size=43  [between]
bool __fastcall FUN_00e38900(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_00e34180();
  return iVar1 != 0;
}

// 00E38930  FUN_00e38930  size=49  [between]
undefined4 FUN_00e38930(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e342f0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00e34620(param_1);
  FUN_00e34a80(param_1);
  return 1;
}

// 00E38970  FUN_00e38970  size=858  [between]
void __fastcall FUN_00e38970(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar8;
  int local_60;
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
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = *(int *)(param_1 + 0x24);
  if (iVar7 != 0) {
    do {
      if (0.0 <= *(float *)(iVar7 + 0x88)) {
        *(undefined4 *)(iVar7 + 0x2c) = 0;
        *(undefined4 *)(iVar7 + 0x1c) = 0xffffffff;
        FUN_00e24230(*(float *)(iVar7 + 0x88) * 60.0);
      }
      fVar8 = (float10)0;
      iVar7 = *(int *)(iVar7 + 4);
    } while (iVar7 != 0);
    iVar7 = *(int *)(param_1 + 8);
    local_60 = 0;
    if (0 < iVar7) {
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 4) + local_60 * 4);
        if ((*(byte *)(iVar2 + 0xa2) & 8) == 0) {
          iVar6 = (int)*(short *)(iVar2 + 0xa0);
          for (iVar3 = *(int *)(param_1 + 0x24); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
            if (((fVar8 <= (float10)*(float *)(iVar3 + 0x88)) &&
                (fVar1 = *(float *)(iVar3 + 0x8c), fVar8 != (float10)fVar1)) &&
               (iVar4 = FUN_00e25aa0(iVar6), fVar8 = extraout_ST0, iVar4 != 0)) {
              iVar4 = iVar6;
              if (*(int *)(iVar3 + 0x3c) != 0) {
                *(undefined4 *)(iVar3 + 0x2c) = 0;
                *(undefined4 *)(iVar3 + 0x1c) = 0xffffffff;
                iVar4 = FUN_00e240f0(iVar6);
              }
              *(int *)(iVar3 + 0x1c) = iVar4;
              iVar4 = FUN_00e23900(iVar3 + 0x20,iVar3 + 0x2c,iVar4);
              fVar8 = extraout_ST0_00;
              if (iVar4 != 0) {
                uVar5 = FUN_00a06de0(iVar6);
                FUN_00a06e70(&local_20,uVar5);
                iVar4 = iVar3 + 0x30;
                FUN_00e23bb0(&local_50,*(undefined4 *)(iVar3 + 0x1c),iVar3 + 0x20,iVar3 + 0x2c,iVar4
                             ,&local_20);
                FUN_00e28240(&local_30,*(undefined4 *)(iVar3 + 0x1c),iVar3 + 0x20,iVar3 + 0x2c,iVar4
                            );
                FUN_00e23fd0(&local_40,*(undefined4 *)(iVar3 + 0x1c),iVar3 + 0x20,iVar3 + 0x2c,iVar4
                            );
                local_50 = fVar1 * (local_50 - local_20);
                local_4c = (local_4c - local_1c) * fVar1;
                local_48 = (local_48 - local_18) * fVar1;
                local_44 = (local_44 - local_14) * fVar1;
                *(float *)(iVar2 + 0x50) = *(float *)(iVar2 + 0x50) - local_50;
                *(float *)(iVar2 + 0x54) = *(float *)(iVar2 + 0x54) - local_4c;
                *(float *)(iVar2 + 0x58) = *(float *)(iVar2 + 0x58) - local_48;
                *(float *)(iVar2 + 0x5c) = *(float *)(iVar2 + 0x5c) - local_44;
                iVar4 = *(int *)(iVar3 + 0x14);
                if (((iVar4 == 0) || (*(uint *)(iVar4 + 4) < 0x20111109)) ||
                   (*(char *)(iVar4 + 0x14) != '\x01')) {
                  FUN_00de2850(iVar2 + 0x90,iVar2 + 0x90,&local_30,fVar1);
                }
                else {
                  local_30 = local_30 * fVar1;
                  local_2c = local_2c * fVar1;
                  local_28 = local_28 * fVar1;
                  local_24 = fVar1 * local_24;
                  FUN_00ddef20(iVar2 + 0x90,iVar2 + 0x90,&local_30);
                }
                local_40 = fVar1 * (local_40 - 1.0);
                local_3c = (local_3c - 1.0) * fVar1;
                local_38 = (local_38 - 1.0) * fVar1;
                local_34 = fVar1 * (local_34 - local_14);
                *(float *)(iVar2 + 0x70) = *(float *)(iVar2 + 0x70) - local_40;
                *(float *)(iVar2 + 0x74) = *(float *)(iVar2 + 0x74) - local_3c;
                *(float *)(iVar2 + 0x78) = *(float *)(iVar2 + 0x78) - local_38;
                *(float *)(iVar2 + 0x7c) = *(float *)(iVar2 + 0x7c) - local_34;
                fVar8 = (float10)0;
              }
            }
          }
        }
        local_60 = local_60 + 1;
      } while (local_60 < iVar7);
    }
  }
  return;
}

// 00E38CD0  FUN_00e38cd0  size=796  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00e38cd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
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
  float local_1c;
  float local_18;
  float local_14;
  
  if ((_DAT_01dd94d0 & 1) == 0) {
    _DAT_01dd94d0 = _DAT_01dd94d0 | 1;
    _DAT_01dd94c0 = 1.0;
    _DAT_01dd94c4 = 1.0;
    _DAT_01dd94c8 = 1.0;
  }
  for (iVar1 = *(int *)(param_1 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    fVar2 = *(float *)(iVar1 + 0x78) * *(float *)(iVar1 + 0x44);
    if ((fVar2 != 0.0) && (iVar3 = FUN_00e25aa0(param_3), iVar3 != 0)) {
      uVar4 = param_3;
      if (*(int *)(iVar1 + 0x3c) != 0) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
        uVar4 = FUN_00e240f0(param_3);
      }
      *(undefined4 *)(iVar1 + 0x1c) = uVar4;
      iVar3 = FUN_00e23900(iVar1 + 0x20,iVar1 + 0x2c,uVar4);
      if (iVar3 != 0) {
        uVar4 = FUN_00a06de0(param_3);
        FUN_00a06e70(&local_20,uVar4);
        if ((param_5 & 1) == 0) {
          param_5 = param_5 | 1;
          *(float *)(param_2 + 0x50) = local_20;
          *(float *)(param_2 + 0x54) = local_1c;
          *(float *)(param_2 + 0x58) = local_18;
          *(float *)(param_2 + 0x5c) = local_14;
        }
        if ((param_5 & 2) == 0) {
          param_5 = param_5 | 2;
          *(undefined4 *)(param_2 + 0x90) = 0;
          *(undefined4 *)(param_2 + 0x94) = 0;
          *(undefined4 *)(param_2 + 0x98) = 0;
        }
        if ((param_5 & 4) == 0) {
          param_5 = param_5 | 4;
          *(undefined4 *)(param_2 + 0x70) = 0x3f800000;
          *(undefined4 *)(param_2 + 0x74) = 0x3f800000;
          *(undefined4 *)(param_2 + 0x78) = 0x3f800000;
        }
        iVar3 = iVar1 + 0x30;
        FUN_00e23bb0(&local_50,*(undefined4 *)(iVar1 + 0x1c),iVar1 + 0x20,iVar1 + 0x2c,iVar3,
                     &local_20);
        FUN_00e28240(&local_30,*(undefined4 *)(iVar1 + 0x1c),iVar1 + 0x20,iVar1 + 0x2c,iVar3);
        FUN_00e23fd0(&local_40,*(undefined4 *)(iVar1 + 0x1c),iVar1 + 0x20,iVar1 + 0x2c,iVar3);
        local_50 = fVar2 * (local_50 - local_20);
        local_4c = (local_4c - local_1c) * fVar2;
        local_48 = (local_48 - local_18) * fVar2;
        local_44 = (local_44 - local_14) * fVar2;
        *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + local_50;
        *(float *)(param_2 + 0x54) = local_4c + *(float *)(param_2 + 0x54);
        *(float *)(param_2 + 0x58) = local_48 + *(float *)(param_2 + 0x58);
        *(float *)(param_2 + 0x5c) = local_44 + *(float *)(param_2 + 0x5c);
        iVar3 = *(int *)(iVar1 + 0x14);
        if (((iVar3 == 0) || (*(uint *)(iVar3 + 4) < 0x20111109)) ||
           (*(char *)(iVar3 + 0x14) != '\x01')) {
          FUN_00de2760(param_2 + 0x90,param_2 + 0x90,&local_30,fVar2);
        }
        else {
          local_30 = local_30 * fVar2;
          local_2c = local_2c * fVar2;
          local_28 = local_28 * fVar2;
          local_24 = fVar2 * local_24;
          FUN_00ddeec0(param_2 + 0x90,param_2 + 0x90,&local_30);
        }
        local_40 = fVar2 * (local_40 - _DAT_01dd94c0);
        local_3c = (local_3c - _DAT_01dd94c4) * fVar2;
        local_38 = (local_38 - _DAT_01dd94c8) * fVar2;
        local_34 = fVar2 * (local_34 - _DAT_01dd94cc);
        *(float *)(param_2 + 0x70) = *(float *)(param_2 + 0x70) + local_40;
        *(float *)(param_2 + 0x74) = local_3c + *(float *)(param_2 + 0x74);
        *(float *)(param_2 + 0x78) = local_38 + *(float *)(param_2 + 0x78);
        *(float *)(param_2 + 0x7c) = *(float *)(param_2 + 0x7c) + local_34;
      }
    }
  }
  return;
}

// 00E39000  FUN_00e39000  size=70  [between]
void FUN_00e39000(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_20 [28];
  
  FUN_00e28240(local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,param_1 + 0x18,param_1 + 0x1c);
  FUN_00de21a0(param_2,param_2,local_20,param_3);
  return;
}

// 00E39050  FUN_00e39050  size=137  [between]
void FUN_00e39050(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    param_3 = FUN_00e240f0(param_3);
  }
  iVar1 = param_1 + 0x18;
  iVar2 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 8) = param_3;
  iVar3 = FUN_00e23900(iVar2,iVar1,param_3);
  if (iVar3 != 0) {
    iVar3 = param_1 + 0x1c;
    FUN_00e239d0(param_2 + 0x50,*(undefined4 *)(param_1 + 8),iVar2,iVar1,iVar3);
    FUN_00e278a0(param_2 + 0x90,*(undefined4 *)(param_1 + 8),iVar2,iVar1,iVar3);
    FUN_00e23f00(param_2 + 0x70,*(undefined4 *)(param_1 + 8),iVar2,iVar1,iVar3);
  }
  return;
}

// 00E390E0  FUN_00e390e0  size=334  [between]
byte FUN_00e390e0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  
  uVar3 = param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar3 = FUN_00e240f0(param_3);
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  iVar2 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 8) = uVar3;
  iVar4 = FUN_00e23900(iVar2,puVar1,uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  uVar3 = param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar3 = FUN_00e240f0(param_3);
  }
  *(undefined4 *)(param_1 + 8) = uVar3;
  iVar4 = FUN_00e23960(iVar2,puVar1,uVar3,0);
  bVar5 = iVar4 != 0;
  if ((bool)bVar5) {
    FUN_00e239d0(param_2 + 0x50,*(undefined4 *)(param_1 + 8),iVar2,puVar1,param_1 + 0x1c);
  }
  uVar3 = param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar3 = FUN_00e240f0(param_3);
  }
  *(undefined4 *)(param_1 + 8) = uVar3;
  iVar4 = FUN_00e23960(iVar2,puVar1,uVar3,3);
  if (iVar4 != 0) {
    FUN_00e278a0(param_2 + 0x90,*(undefined4 *)(param_1 + 8),iVar2,puVar1,param_1 + 0x1c);
    bVar5 = bVar5 | 2;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    param_3 = FUN_00e240f0(param_3);
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  iVar4 = FUN_00e23960(iVar2,puVar1,param_3,7);
  if (iVar4 != 0) {
    FUN_00e23f00(param_2 + 0x70,*(undefined4 *)(param_1 + 8),iVar2,puVar1,param_1 + 0x1c);
    bVar5 = bVar5 | 4;
  }
  return bVar5;
}

// 00E39230  FUN_00e39230  size=324  [between]
void FUN_00e39230(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  uVar2 = param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = FUN_00e240f0(param_3);
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = uVar2;
  iVar3 = FUN_00e23900(param_1 + 0xc,puVar1,uVar2);
  if (iVar3 != 0) {
    uVar2 = param_3;
    if (*(int *)(param_1 + 0x28) != 0) {
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = FUN_00e240f0(param_3);
    }
    *(undefined4 *)(param_1 + 8) = uVar2;
    iVar3 = FUN_00e23960(param_1 + 0xc,puVar1,uVar2,0);
    if (iVar3 != 0) {
      FUN_00e239d0(&local_40,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
      uVar2 = FUN_00a06de0(param_3);
      FUN_00a06e70(local_20,uVar2);
      uVar2 = FUN_00a06de0(param_3);
      FUN_00a06e70(local_30,uVar2);
      FUN_00e23310(&local_40,&local_40,local_20,local_30);
      *(undefined4 *)(param_2 + 0x50) = local_40;
      *(undefined4 *)(param_2 + 0x54) = local_3c;
      *(undefined4 *)(param_2 + 0x58) = local_38;
      *(undefined4 *)(param_2 + 0x5c) = local_34;
    }
    FUN_00e278a0(param_2 + 0x90,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
    FUN_00e23f00(param_2 + 0x70,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
  }
  return;
}

// 00E39380  FUN_00e39380  size=444  [between]
void FUN_00e39380(int param_1,int param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  uVar2 = param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = FUN_00e240f0(param_3);
  }
  iVar1 = param_1 + 0x18;
  *(undefined4 *)(param_1 + 8) = uVar2;
  iVar3 = FUN_00e23900(param_1 + 0xc,iVar1,uVar2);
  if (iVar3 != 0) {
    if ((*(ushort *)(param_2 + 0xa2) & 0x1000) == 0) {
      uVar2 = FUN_00a06de0(param_3);
      FUN_00a06e70(&local_40,uVar2);
      FUN_00e239d0(&local_40,*(undefined4 *)(param_1 + 8),param_1 + 0xc,iVar1,param_1 + 0x1c);
      *(float *)(param_2 + 0x50) =
           *(float *)(param_2 + 0x50) + param_4 * (local_40 - *(float *)(param_2 + 0x50));
      *(float *)(param_2 + 0x54) =
           (local_3c - *(float *)(param_2 + 0x54)) * param_4 + *(float *)(param_2 + 0x54);
      *(float *)(param_2 + 0x58) =
           (local_38 - *(float *)(param_2 + 0x58)) * param_4 + *(float *)(param_2 + 0x58);
      *(float *)(param_2 + 0x5c) =
           (local_34 - *(float *)(param_2 + 0x5c)) * param_4 + *(float *)(param_2 + 0x5c);
      FUN_00e28240(local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,iVar1,param_1 + 0x1c);
      FUN_00de21a0(param_2 + 0x90,param_2 + 0x90,local_20,param_4);
      FUN_00e23fd0(&local_30,*(undefined4 *)(param_1 + 8),param_1 + 0xc,iVar1,param_1 + 0x1c);
      *(float *)(param_2 + 0x70) =
           *(float *)(param_2 + 0x70) + param_4 * (local_30 - *(float *)(param_2 + 0x70));
      *(float *)(param_2 + 0x74) =
           (local_2c - *(float *)(param_2 + 0x74)) * param_4 + *(float *)(param_2 + 0x74);
      *(float *)(param_2 + 0x78) =
           (local_28 - *(float *)(param_2 + 0x78)) * param_4 + *(float *)(param_2 + 0x78);
      *(float *)(param_2 + 0x7c) =
           (local_24 - *(float *)(param_2 + 0x7c)) * param_4 + *(float *)(param_2 + 0x7c);
      return;
    }
    FUN_00e239d0(param_2 + 0x50,*(undefined4 *)(param_1 + 8),param_1 + 0xc,iVar1,param_1 + 0x1c);
    FUN_00e278a0(param_2 + 0x90,*(undefined4 *)(param_1 + 8),param_1 + 0xc,iVar1,param_1 + 0x1c);
    FUN_00e23f00(param_2 + 0x70,*(undefined4 *)(param_1 + 8),param_1 + 0xc,iVar1,param_1 + 0x1c);
  }
  return;
}

// 00E39540  FUN_00e39540  size=647  [between]
byte FUN_00e39540(int param_1,int param_2,undefined4 param_3,float param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  uVar2 = param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = FUN_00e240f0(param_3);
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 8) = uVar2;
  iVar3 = FUN_00e23900(param_1 + 0xc,puVar1,uVar2);
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 0xa2) & 0x1000) == 0) {
    uVar2 = FUN_00a06de0(param_3);
    FUN_00a06e70(&local_40,uVar2);
    FUN_00e239d0(&local_40,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
    *(float *)(param_2 + 0x50) =
         *(float *)(param_2 + 0x50) + param_4 * (local_40 - *(float *)(param_2 + 0x50));
    *(float *)(param_2 + 0x54) =
         (local_3c - *(float *)(param_2 + 0x54)) * param_4 + *(float *)(param_2 + 0x54);
    *(float *)(param_2 + 0x58) =
         (local_38 - *(float *)(param_2 + 0x58)) * param_4 + *(float *)(param_2 + 0x58);
    *(float *)(param_2 + 0x5c) =
         (local_34 - *(float *)(param_2 + 0x5c)) * param_4 + *(float *)(param_2 + 0x5c);
    FUN_00e28240(local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
    FUN_00de21a0(param_2 + 0x90,param_2 + 0x90,local_20,param_4);
    FUN_00e23fd0(&local_30,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
    *(float *)(param_2 + 0x70) =
         *(float *)(param_2 + 0x70) + param_4 * (local_30 - *(float *)(param_2 + 0x70));
    *(float *)(param_2 + 0x74) =
         (local_2c - *(float *)(param_2 + 0x74)) * param_4 + *(float *)(param_2 + 0x74);
    *(float *)(param_2 + 0x78) =
         (local_28 - *(float *)(param_2 + 0x78)) * param_4 + *(float *)(param_2 + 0x78);
    *(float *)(param_2 + 0x7c) =
         (local_24 - *(float *)(param_2 + 0x7c)) * param_4 + *(float *)(param_2 + 0x7c);
    return 7;
  }
  uVar2 = param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = FUN_00e240f0(param_3);
  }
  *(undefined4 *)(param_1 + 8) = uVar2;
  iVar3 = FUN_00e23960(param_1 + 0xc,puVar1,uVar2,0);
  bVar4 = iVar3 != 0;
  if ((bool)bVar4) {
    FUN_00e239d0(param_2 + 0x50,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
  }
  uVar2 = param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = FUN_00e240f0(param_3);
  }
  *(undefined4 *)(param_1 + 8) = uVar2;
  iVar3 = FUN_00e23960(param_1 + 0xc,puVar1,uVar2,3);
  if (iVar3 != 0) {
    FUN_00e278a0(param_2 + 0x90,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
    bVar4 = bVar4 | 2;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    param_3 = FUN_00e240f0(param_3);
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  iVar3 = FUN_00e23960(param_1 + 0xc,puVar1,param_3,7);
  if (iVar3 != 0) {
    FUN_00e23f00(param_2 + 0x70,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
    bVar4 = bVar4 | 4;
  }
  return bVar4;
}

// 00E397D0  FUN_00e397d0  size=137  [between]
void FUN_00e397d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    param_3 = FUN_00e240f0(param_3);
  }
  iVar1 = param_1 + 0x18;
  iVar2 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 8) = param_3;
  iVar3 = FUN_00e23900(iVar2,iVar1,param_3);
  if (iVar3 != 0) {
    iVar3 = param_1 + 0x1c;
    FUN_00e239d0(param_2 + 0x50,*(undefined4 *)(param_1 + 8),iVar2,iVar1,iVar3);
    FUN_00e278a0(param_2 + 0x90,*(undefined4 *)(param_1 + 8),iVar2,iVar1,iVar3);
    FUN_00e23f00(param_2 + 0x70,*(undefined4 *)(param_1 + 8),iVar2,iVar1,iVar3);
  }
  return;
}

// 00E39860  FUN_00e39860  size=334  [between]
byte FUN_00e39860(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  
  uVar3 = param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar3 = FUN_00e240f0(param_3);
  }
  puVar1 = (undefined4 *)(param_1 + 0x18);
  iVar2 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 8) = uVar3;
  iVar4 = FUN_00e23900(iVar2,puVar1,uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  uVar3 = param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar3 = FUN_00e240f0(param_3);
  }
  *(undefined4 *)(param_1 + 8) = uVar3;
  iVar4 = FUN_00e23960(iVar2,puVar1,uVar3,0);
  bVar5 = iVar4 != 0;
  if ((bool)bVar5) {
    FUN_00e239d0(param_2 + 0x50,*(undefined4 *)(param_1 + 8),iVar2,puVar1,param_1 + 0x1c);
  }
  uVar3 = param_3;
  if (*(int *)(param_1 + 0x28) != 0) {
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar3 = FUN_00e240f0(param_3);
  }
  *(undefined4 *)(param_1 + 8) = uVar3;
  iVar4 = FUN_00e23960(iVar2,puVar1,uVar3,3);
  if (iVar4 != 0) {
    FUN_00e278a0(param_2 + 0x90,*(undefined4 *)(param_1 + 8),iVar2,puVar1,param_1 + 0x1c);
    bVar5 = bVar5 | 2;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    param_3 = FUN_00e240f0(param_3);
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  iVar4 = FUN_00e23960(iVar2,puVar1,param_3,7);
  if (iVar4 != 0) {
    FUN_00e23f00(param_2 + 0x70,*(undefined4 *)(param_1 + 8),iVar2,puVar1,param_1 + 0x1c);
    bVar5 = bVar5 | 4;
  }
  return bVar5;
}

// 00E399B0  FUN_00e399b0  size=737  [between]
void FUN_00e399b0(int param_1,int param_2,undefined4 param_3,float param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*(ushort *)(param_2 + 0xa2) & 0x1000) == 0) {
    uVar2 = FUN_00a06de0(param_3);
    uVar3 = param_3;
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar3 = FUN_00e240f0(param_3);
    }
    puVar1 = (undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 8) = uVar3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,uVar3,0);
    if (iVar4 != 0) {
      FUN_00a06e70(&local_20,uVar2);
      FUN_00e239d0(&local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
      *(float *)(param_2 + 0x50) =
           *(float *)(param_2 + 0x50) + param_4 * (local_20 - *(float *)(param_2 + 0x50));
      *(float *)(param_2 + 0x54) =
           (local_1c - *(float *)(param_2 + 0x54)) * param_4 + *(float *)(param_2 + 0x54);
      *(float *)(param_2 + 0x58) =
           (local_18 - *(float *)(param_2 + 0x58)) * param_4 + *(float *)(param_2 + 0x58);
      *(float *)(param_2 + 0x5c) =
           (local_14 - *(float *)(param_2 + 0x5c)) * param_4 + *(float *)(param_2 + 0x5c);
    }
    uVar3 = param_3;
    if (*(int *)(param_1 + 0x28) != 0) {
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar3 = FUN_00e240f0(param_3);
    }
    *(undefined4 *)(param_1 + 8) = uVar3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,uVar3,3);
    if (iVar4 != 0) {
      FUN_00e28240(&local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
      FUN_00de21a0(param_2 + 0x90,param_2 + 0x90,&local_20,param_4);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      param_3 = FUN_00e240f0(param_3);
    }
    *(undefined4 *)(param_1 + 8) = param_3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,param_3,7);
    if (iVar4 != 0) {
      FUN_00e23fd0(&local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
      *(float *)(param_2 + 0x70) =
           *(float *)(param_2 + 0x70) + param_4 * (local_20 - *(float *)(param_2 + 0x70));
      *(float *)(param_2 + 0x74) =
           (local_1c - *(float *)(param_2 + 0x74)) * param_4 + *(float *)(param_2 + 0x74);
      *(float *)(param_2 + 0x78) =
           (local_18 - *(float *)(param_2 + 0x78)) * param_4 + *(float *)(param_2 + 0x78);
      *(float *)(param_2 + 0x7c) =
           (local_14 - *(float *)(param_2 + 0x7c)) * param_4 + *(float *)(param_2 + 0x7c);
      return;
    }
  }
  else {
    uVar3 = param_3;
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar3 = FUN_00e240f0(param_3);
    }
    puVar1 = (undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 8) = uVar3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,uVar3,0);
    if (iVar4 != 0) {
      FUN_00e239d0(param_2 + 0x50,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
    }
    uVar3 = param_3;
    if (*(int *)(param_1 + 0x28) != 0) {
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar3 = FUN_00e240f0(param_3);
    }
    *(undefined4 *)(param_1 + 8) = uVar3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,uVar3,3);
    if (iVar4 != 0) {
      FUN_00e278a0(param_2 + 0x90,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      param_3 = FUN_00e240f0(param_3);
    }
    *(undefined4 *)(param_1 + 8) = param_3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,param_3,7);
    if (iVar4 != 0) {
      FUN_00e23f00(param_2 + 0x70,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
    }
  }
  return;
}

// 00E39CA0  FUN_00e39ca0  size=789  [between]
byte FUN_00e39ca0(int param_1,int param_2,undefined4 param_3,float param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*(ushort *)(param_2 + 0xa2) & 0x1000) == 0) {
    uVar2 = FUN_00a06de0(param_3);
    uVar3 = param_3;
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar3 = FUN_00e240f0(param_3);
    }
    puVar1 = (undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 8) = uVar3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,uVar3,0);
    bVar5 = iVar4 != 0;
    if ((bool)bVar5) {
      FUN_00a06e70(&local_20,uVar2);
      FUN_00e239d0(&local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
      *(float *)(param_2 + 0x50) =
           *(float *)(param_2 + 0x50) + param_4 * (local_20 - *(float *)(param_2 + 0x50));
      *(float *)(param_2 + 0x54) =
           (local_1c - *(float *)(param_2 + 0x54)) * param_4 + *(float *)(param_2 + 0x54);
      *(float *)(param_2 + 0x58) =
           (local_18 - *(float *)(param_2 + 0x58)) * param_4 + *(float *)(param_2 + 0x58);
      *(float *)(param_2 + 0x5c) =
           (local_14 - *(float *)(param_2 + 0x5c)) * param_4 + *(float *)(param_2 + 0x5c);
    }
    uVar3 = param_3;
    if (*(int *)(param_1 + 0x28) != 0) {
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar3 = FUN_00e240f0(param_3);
    }
    *(undefined4 *)(param_1 + 8) = uVar3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,uVar3,3);
    if (iVar4 != 0) {
      FUN_00e28240(&local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
      FUN_00de21a0(param_2 + 0x90,param_2 + 0x90,&local_20,param_4);
      bVar5 = bVar5 | 2;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      param_3 = FUN_00e240f0(param_3);
    }
    *(undefined4 *)(param_1 + 8) = param_3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,param_3,7);
    if (iVar4 != 0) {
      FUN_00e23fd0(&local_20,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
      *(float *)(param_2 + 0x70) =
           *(float *)(param_2 + 0x70) + param_4 * (local_20 - *(float *)(param_2 + 0x70));
      *(float *)(param_2 + 0x74) =
           (local_1c - *(float *)(param_2 + 0x74)) * param_4 + *(float *)(param_2 + 0x74);
      *(float *)(param_2 + 0x78) =
           (local_18 - *(float *)(param_2 + 0x78)) * param_4 + *(float *)(param_2 + 0x78);
      *(float *)(param_2 + 0x7c) =
           (local_14 - *(float *)(param_2 + 0x7c)) * param_4 + *(float *)(param_2 + 0x7c);
      return bVar5 | 4;
    }
  }
  else {
    uVar3 = param_3;
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar3 = FUN_00e240f0(param_3);
    }
    puVar1 = (undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 8) = uVar3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,uVar3,0);
    bVar5 = iVar4 != 0;
    if ((bool)bVar5) {
      FUN_00e239d0(param_2 + 0x50,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
    }
    uVar3 = param_3;
    if (*(int *)(param_1 + 0x28) != 0) {
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar3 = FUN_00e240f0(param_3);
    }
    *(undefined4 *)(param_1 + 8) = uVar3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,uVar3,3);
    if (iVar4 != 0) {
      FUN_00e278a0(param_2 + 0x90,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
      bVar5 = bVar5 | 2;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      param_3 = FUN_00e240f0(param_3);
    }
    *(undefined4 *)(param_1 + 8) = param_3;
    iVar4 = FUN_00e23960(param_1 + 0xc,puVar1,param_3,7);
    if (iVar4 != 0) {
      FUN_00e23f00(param_2 + 0x70,*(undefined4 *)(param_1 + 8),param_1 + 0xc,puVar1,param_1 + 0x1c);
      return bVar5 | 4;
    }
  }
  return bVar5;
}

// 00E39FC0  FUN_00e39fc0  size=75  [between]
undefined4 __thiscall FUN_00e39fc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  uVar1 = FUN_00a7c800();
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(int *)(param_1 + 0xc) = param_1;
  FUN_00e34180();
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return 1;
}

// 00E3A080  FUN_00e3a080  size=286  [between]
void __thiscall
FUN_00e3a080(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
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
  float fStack_20;
  
  if (*(int **)(param_1 + 0x114) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x114) + 0x4c))(&local_50,*(undefined4 *)(param_1 + 0xa0));
    if (1.1920929e-07 < fStack_20) {
      local_80 = local_50;
      local_7c = uStack_4c;
      local_78 = uStack_48;
      uStack_74 = uStack_44;
      local_70 = uStack_40;
      local_6c = uStack_3c;
      local_68 = uStack_38;
      uStack_64 = uStack_34;
      local_60 = uStack_30;
      local_5c = uStack_2c;
      local_58 = uStack_28;
      uStack_54 = uStack_24;
      goto LAB_00e3a13f;
    }
  }
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
LAB_00e3a13f:
  *param_2 = local_80;
  param_2[1] = local_7c;
  param_2[2] = local_78;
  param_2[3] = uStack_74;
  *param_3 = local_70;
  param_3[1] = local_6c;
  param_3[2] = local_68;
  param_3[3] = uStack_64;
  *param_4 = local_60;
  param_4[1] = local_5c;
  param_4[2] = local_58;
  param_4[3] = uStack_54;
  return;
}

// 00E3A1A0  FUN_00e3a1a0  size=55  [between]
void __thiscall FUN_00e3a1a0(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  if (-1 < (int)param_3) {
    FUN_00e365c0();
    return;
  }
  if (param_4 != 0) {
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | param_3 & 0x7fffffff;
    return;
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & ~(param_3 & 0x7fffffff);
  return;
}

// 00E3A1E0  FUN_00e3a1e0  size=40  [between]
uint __thiscall FUN_00e3a1e0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if ((int)param_3 < 0) {
    return (uint)((*(uint *)(param_1 + 0x98) & param_3) != 0);
  }
  uVar1 = FUN_00e36640();
  return uVar1;
}

// 00E3A2C0  FUN_00e3a2c0  size=148  [between]
void __thiscall FUN_00e3a2c0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((param_2 != -0xc) &&
     (*(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x20) != 0)) {
    if (((param_1[1] & 1) != 0) && ((param_1[1] & 2) == 0)) {
      iVar1 = FUN_00e38930(local_50);
      if (iVar1 == 0) {
        if (param_1[2] == 1) {
          param_1[1] = 0;
        }
      }
      else {
        FUN_009330f0(local_50,local_40,local_30,local_20,local_1c,*param_1,0xffffffff);
      }
    }
    if ((*(byte *)(param_1 + 1) & 4) != 0) {
      FUN_009317c0();
    }
    if (param_1[2] == 0) {
      param_1[1] = 0;
    }
  }
  return;
}

// 00E3A360  Animation::Control::Node::vf04  size=151  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Animation::Control::Node::vf04(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_00e352e0();
  piVar3 = *(int **)(param_1 + 8);
  while (piVar3 != (int *)0x0) {
    iVar1 = piVar3[1];
    piVar2 = piVar3 + 1;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(*(int *)(iVar1 + 8) + 4);
      }
      if (piVar4 == piVar2) {
        *(int *)(iVar1 + 8) = piVar3[5];
      }
      iVar1 = *(int *)(*piVar2 + 0xc);
      if (iVar1 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(iVar1 + 4);
      }
      if (piVar4 == piVar2) {
        *(int *)(*piVar2 + 0xc) = piVar3[4];
      }
      *piVar2 = 0;
    }
    piVar2 = (int *)piVar3[5];
    if (piVar3[4] != 0) {
      *(int **)(piVar3[4] + 0x14) = piVar2;
    }
    if (piVar3[5] != 0) {
      *(int *)(piVar3[5] + 0x10) = piVar3[4];
    }
    piVar3[5] = 0;
    piVar3[4] = 0;
    (**(code **)(*piVar3 + 4))();
    (**(code **)*piVar3)(1);
    _DAT_01dd93c8 = _DAT_01dd93c8 + -1;
    piVar3 = piVar2;
  }
  return;
}

// 00E3A400  Animation::Control::Unit::startup  size=138  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall Animation::Control::Unit::startup(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[1] == 0) {
    iVar1 = 0;
    piVar2 = param_1 + 5;
    do {
      if (*piVar2 != 0) goto LAB_00e3a42c;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < 8);
    iVar1 = Node::Node();
    if (iVar1 != 0) {
      param_1[1] = iVar1;
      *param_1 = param_2;
      return 1;
    }
  }
LAB_00e3a42c:
  FUN_00dd5650(&DAT_016cdf40);
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    FUN_00e43440();
    (**(code **)(*piVar2 + 4))();
    (**(code **)*piVar2)(1);
    _DAT_01dd93c8 = _DAT_01dd93c8 + -1;
    param_1[1] = 0;
  }
  FUN_00e35340();
  return 0;
}

// 00E3A490  FUN_00e3a490  size=45  [between]
void FUN_00e3a490(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Animation::Control::Node::Node();
  if (iVar1 == 0) {
    return;
  }
  Animation::Control::Unit::registNode(param_1,param_2,iVar1,0);
  return;
}

// 00E3A4C0  Animation::Motion::Unit::startup  size=147  [class]
undefined4 __thiscall Animation::Motion::Unit::startup(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == 0) {
    iVar1 = 0;
    piVar3 = param_1 + 8;
    do {
      if (*piVar3 != 0) goto LAB_00e3a522;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar1 < 0x10);
    iVar1 = FUN_00e44c10();
    if (iVar1 != 0) {
      iVar2 = FUN_00e339b0(0xfffffffe,"RootNode",0,param_1 + 0x46);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar1 + 0x94) = 0;
        *(undefined4 *)(iVar1 + 0x90) = 0;
        iVar2 = FUN_00e26430();
        if (iVar2 != 0) {
          *param_1 = iVar1;
          param_1[0x45] = param_2;
          return 1;
        }
      }
    }
  }
LAB_00e3a522:
  FUN_00dd5650(&DAT_016cdf74);
  FUN_00e35ae0();
  return 0;
}

// 00E3A560  FUN_00e3a560  size=66  [between]
void __fastcall FUN_00e3a560(undefined4 *param_1)

{
  undefined1 local_8 [4];
  undefined4 local_4;
  
  FUN_00e35b70();
  (**(code **)(*(int *)*param_1 + 0x40))(&local_4,local_8);
  (**(code **)(*(int *)*param_1 + 8))(local_4,0xbf800000);
  return;
}

// 00E3A7F0  FUN_00e3a7f0  size=204  [between]
void __thiscall FUN_00e3a7f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    uVar4 = param_2[3];
    uVar2 = param_2[2];
    iVar5 = *(int *)(param_1 + 0xc);
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    puVar11 = *(uint **)(param_1 + 4);
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    iVar12 = 0;
    if (0 < iVar5) {
      do {
        if ((((puVar11[2] & 0x8000) == 0) && ((*puVar11 & uVar8) != 0)) &&
           (iVar10 = FUN_00e25f70(puVar11[1],uVar1,uVar2,uVar4,uVar6,uVar7), iVar10 != 0)) {
          FUN_00e37ef0(puVar11,iVar12,uVar3,uVar9);
        }
        iVar12 = iVar12 + 1;
        puVar11 = puVar11 + 0xc;
      } while (iVar12 < iVar5);
    }
  }
  return;
}

// 00E3A8C0  FUN_00e3a8c0  size=153  [between]
void __thiscall FUN_00e3a8c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = *param_3;
    uVar2 = param_3[6];
    uVar3 = param_3[7];
    iVar4 = *(int *)(param_1 + 0xc);
    iVar5 = 0;
    puVar6 = *(uint **)(param_1 + 4);
    if (0 < iVar4) {
      do {
        if (((puVar6[2] & 0x8000) != 0) && ((*puVar6 & uVar2) != 0)) {
          FUN_00e37ef0(puVar6,iVar5,uVar1,uVar3);
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 0xc;
      } while (iVar5 < iVar4);
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E3A9E0  FUN_00e3a9e0  size=217  [between]
void __thiscall FUN_00e3a9e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00e3a8c0(param_2,param_3);
  FUN_00e381e0(param_2,param_3);
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x40),0);
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x78),0);
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if (*(int *)(param_1 + 200) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xbc),0);
      *(undefined4 *)(param_1 + 200) = 0;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_00e38160(param_2,param_3);
  return;
}

// 00E3AAE0  Animation::MotionPlayHavok::initialize  size=136  [class]
undefined4 __thiscall
Animation::MotionPlayHavok::initialize
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          int param_6)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00e36f60(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016cdfa4);
    return 0;
  }
  param_1[0x4c] = -0x40800000;
  param_1[0x4d] = 0;
  pcVar1 = *(code **)(*param_1 + 0x60);
  param_1[0x1c] = param_6;
  (*pcVar1)();
  param_1[0x1a] = 0x3f800000;
  (**(code **)(*param_1 + 100))();
  return 1;
}

// 00E3AB70  Animation::Motion::NodePlay::vf08  size=133  [class]
void __thiscall Animation::Motion::NodePlay::vf08(int param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  
  if ((*(uint *)(param_1 + 100) & 0x800000) != 0) {
    fVar2 = (float10)FUN_009313f0();
    param_2 = (float)fVar2;
  }
  fVar2 = (float10)FUN_00e37e30(*(undefined4 *)(param_1 + 0xfc));
  iVar1 = FUN_00e333a0(param_2,(float)fVar2,param_3,
                       (*(uint *)(*(int *)(param_1 + 0xb8) + 100) >> 0x1b & 1) == 0);
  if (iVar1 != 0) {
    EaseControl::update_3(param_2);
  }
  return;
}

// 00E3AC00  FUN_00e3ac00  size=479  [between]
void FUN_00e3ac00(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  float10 fVar3;
  float *pfVar4;
  undefined1 *puStack_98;
  float *pfStack_94;
  float local_7c;
  float local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  pfStack_94 = (float *)0xffea2d0;
  puStack_98 = param_2;
  pfStack_94 = (float *)FUN_00e33f30();
  if (-1 < (int)pfStack_94) {
    puStack_98 = (undefined1 *)0xe3ac30;
    local_74 = FUN_00a12210();
    if ((local_74 != 0) && ((*(byte *)(local_74 + 0xa2) & 0x80) == 0)) {
      pfStack_94 = (float *)0x1f478d91;
      puStack_98 = param_2;
      pfStack_94 = (float *)FUN_00e33fb0();
      if (-1 < (int)pfStack_94) {
        puStack_98 = (undefined1 *)0xe3ac67;
        iVar1 = FUN_00a12210();
        if (iVar1 != 0) {
          pfStack_94 = (float *)0x721d4591;
          puStack_98 = param_2;
          iVar2 = FUN_00e34030();
          fVar3 = (float10)FUN_00e340c0(param_2,0x28fefc52);
          local_7c = (float)fVar3;
          fVar3 = (float10)FUN_00e340c0(param_2,0x746b1e53);
          local_78 = (float)fVar3;
          local_38 = 0;
          local_3c = 0;
          local_40 = 0;
          local_34 = 0x3f800000;
          if (iVar2 == 0) {
            local_70 = 0xbf800000;
            local_6c = 0;
            local_68 = 0;
          }
          else if (iVar2 == 1) {
            local_70 = 0;
            local_6c = 0xbf800000;
            local_68 = 0;
          }
          else if (iVar2 == 2) {
            local_70 = 0;
            local_6c = 0;
            local_68 = 0xbf800000;
          }
          pfStack_94 = (float *)(iVar1 + 0x90);
          puStack_98 = local_30;
          FUN_00ddb590();
          FUN_00e26a20(local_20,&local_70,local_30);
          thunk_FUN_00de1080(&local_60,&local_70,local_20);
          local_50 = -local_60;
          pfStack_94 = &local_50;
          local_4c = -local_5c;
          puStack_98 = local_30;
          local_48 = -local_58;
          local_44 = local_54;
          D3DXQuaternionMultiply(pfStack_94);
          pfVar4 = &local_5c;
          D3DXQuaternionSlerp(pfVar4,&local_4c,pfVar4,unaff_EBX);
          D3DXQuaternionSlerp(&local_7c,&local_5c,&local_7c,pfStack_94);
          D3DXQuaternionMultiply(&stack0xffffff74,&local_7c,&stack0xffffff74);
          FUN_00ddd760(pfVar4 + 0x24,&puStack_98,5);
        }
      }
    }
  }
  return;
}

// 00E3ADE0  FUN_00e3ade0  size=883  [between]
void FUN_00e3ade0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar5;
  float *pfVar6;
  undefined1 *puVar7;
  float *pfVar8;
  float fVar9;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined1 auStack_7c [4];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 uStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [28];
  
  iVar1 = FUN_00e33f30(param_2,0xffea2d0);
  if ((((-1 < iVar1) && (iVar1 = FUN_00a12210(iVar1), iVar1 != 0)) &&
      ((*(byte *)(iVar1 + 0xa2) & 0x80) == 0)) &&
     ((iVar2 = FUN_00e33fb0(param_2,0x1f478d91), -1 < iVar2 &&
      (local_4c = FUN_00a12210(iVar2), local_4c != 0)))) {
    fVar3 = (float)FUN_00e34030(param_2,0x721d4591);
    fVar4 = (float)FUN_00e34030(param_2,0x7bd01908);
    fVar5 = (float10)FUN_00e340c0(param_2,0x28fefc52);
    local_44 = (float)fVar5;
    fVar5 = (float10)FUN_00e340c0(param_2,0x2aff9948);
    local_78 = (float)fVar5;
    fVar5 = (float10)FUN_00e340c0(param_2,0x16f2a611);
    local_48 = (float)fVar5;
    local_50 = FUN_00e34030(param_2,0x7201c8db);
    fVar5 = (float10)FUN_00e340c0(param_2,0x2133a0cb);
    local_74 = (float)fVar5;
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    local_24 = 0x3f800000;
    if (fVar3 != fVar4) {
      if (fVar3 == 0.0) {
        local_70 = 1.0;
        local_6c = 0.0;
        local_68 = 0.0;
      }
      else if (fVar3 == 1.4013e-45) {
        local_70 = 0.0;
        local_68 = 0.0;
        local_6c = 1.0;
      }
      else if (fVar3 == 2.8026e-45) {
        local_70 = 0.0;
        local_6c = 0.0;
        local_68 = 1.0;
      }
      if (fVar4 == 0.0) {
        local_a0 = 1.0;
        local_9c = 0.0;
        local_98 = 0.0;
      }
      else if (fVar4 == 1.4013e-45) {
        local_a0 = 0.0;
        local_98 = 0.0;
        local_9c = 1.0;
      }
      else if (fVar4 == 2.8026e-45) {
        local_a0 = 0.0;
        local_9c = 0.0;
        local_98 = 1.0;
      }
      local_90 = local_68 * local_9c - local_6c * local_98;
      local_8c = local_70 * local_98 - local_a0 * local_68;
      local_88 = local_a0 * local_6c - local_70 * local_9c;
      FUN_00ddb590(local_20,local_4c + 0x90);
      FUN_00e26a20(&local_a0,&local_70,local_20);
      thunk_FUN_00de1080(&local_40,&local_70,&local_a0);
      local_60 = -local_40;
      pfVar6 = &local_60;
      local_5c = -local_3c;
      puVar7 = local_20;
      local_58 = -local_38;
      local_54 = local_34;
      pfVar8 = pfVar6;
      D3DXQuaternionMultiply(pfVar6,puVar7,pfVar6);
      D3DXQuaternionSlerp(&local_6c,&local_3c,&local_6c,local_50);
      fVar3 = fStack_94;
      fStack_94 = (float)pfVar8 * fVar4 + unaff_ESI * (float)pfVar6 + (float)puVar7 * unaff_EBX;
      local_90 = fStack_94 * local_90;
      fVar5 = (float10)FUN_004fbd50(local_90,fVar3,uStack_64);
      fVar3 = (float)fVar5;
      fVar4 = *(float *)(iVar1 + 0x50);
      fVar9 = *(float *)(iVar1 + 0x54);
      local_a4 = *(float *)(iVar1 + 0x58);
      local_a0 = *(float *)(iVar1 + 0x5c);
      if (local_6c == 0.0) {
        fVar4 = fVar3 / 10.0;
      }
      else if (local_6c == 1.4013e-45) {
        fVar9 = fVar3 / 10.0;
      }
      else if (local_6c == 2.8026e-45) {
        local_a4 = fVar3 / 10.0;
      }
      *(float *)(iVar1 + 0x50) = fVar4;
      *(float *)(iVar1 + 0x54) = fVar9;
      *(float *)(iVar1 + 0x58) = local_a4;
      *(float *)(iVar1 + 0x5c) = local_a0;
      FUN_00ddd760(iVar1 + 0x90,auStack_7c,5);
      return;
    }
  }
  return;
}

// 00E3B160  FUN_00e3b160  size=420  [between]
void FUN_00e3b160(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  float10 fVar3;
  undefined4 uStack_84;
  undefined1 auStack_7c [4];
  float local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar1 = FUN_00e33f30(param_2,0xffea2d0);
  if ((((-1 < iVar1) && (local_74 = FUN_00a12210(iVar1), local_74 != 0)) &&
      ((*(byte *)(local_74 + 0xa2) & 0x80) == 0)) &&
     ((iVar1 = FUN_00e33fb0(param_2,0x1f478d91), -1 < iVar1 &&
      (iVar1 = FUN_00a12210(iVar1), iVar1 != 0)))) {
    iVar2 = FUN_00e34030(param_2,0x721d4591);
    fVar3 = (float10)FUN_00e340c0(param_2,0x28fefc52);
    local_78 = (float)fVar3;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_34 = 0x3f800000;
    if (iVar2 == 0) {
      local_70 = 0xbf800000;
      local_6c = 0;
      local_68 = 0;
    }
    else if (iVar2 == 1) {
      local_70 = 0;
      local_6c = 0xbf800000;
      local_68 = 0;
    }
    else if (iVar2 == 2) {
      local_70 = 0;
      local_6c = 0;
      local_68 = 0xbf800000;
    }
    FUN_00ddb590(local_30,iVar1 + 0x90);
    FUN_00e26a20(local_20,&local_70,local_30);
    thunk_FUN_00de1080(&local_50,&local_70,local_20);
    local_60 = -local_50;
    local_5c = -local_4c;
    local_58 = -local_48;
    local_54 = local_44;
    D3DXQuaternionMultiply(&local_60,local_30,&local_60);
    D3DXQuaternionSlerp(&local_6c,&local_4c,&local_6c,uStack_84);
    FUN_00ddd760(unaff_EDI + 0x90,auStack_7c,5);
  }
  return;
}

// 00E3B310  FUN_00e3b310  size=214  [between]
void FUN_00e3b310(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar1 = FUN_00e33f30(param_2,0xffea2d0);
  if (-1 < iVar1) {
    iVar1 = FUN_00a12210(iVar1);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xa2) & 0x80) == 0)) {
      iVar2 = FUN_00e33fb0(param_2,0x1f478d91);
      if (-1 < iVar2) {
        iVar2 = FUN_00a12210(iVar2);
        if (iVar2 != 0) {
          fVar3 = (float10)FUN_00e340c0(param_2,0x5fec3f39);
          local_38 = 0;
          local_3c = 0;
          local_40 = 0;
          local_34 = 0x3f800000;
          FUN_00ddb590(local_30,iVar2 + 0x90);
          D3DXQuaternionSlerp(local_20,&local_40,local_30,(float)fVar3);
          FUN_00ddd760(iVar1 + 0x90,local_30,5);
        }
      }
    }
  }
  return;
}

// 00E3B3F0  FUN_00e3b3f0  size=1721  [between]
void FUN_00e3b3f0(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  int local_34;
  undefined1 local_30 [16];
  undefined1 auStack_20 [28];
  
  iVar5 = FUN_00e33f30(param_2,0xffea2d0);
  if ((((-1 < iVar5) && (local_34 = FUN_00a12210(iVar5), local_34 != 0)) &&
      ((*(byte *)(local_34 + 0xa2) & 0x80) == 0)) &&
     ((iVar5 = FUN_00e33fb0(param_2,0x1f478d91), -1 < iVar5 &&
      (iVar5 = FUN_00a12210(iVar5), iVar5 != 0)))) {
    iVar6 = FUN_00e34030(param_2,0x488df340);
    iVar7 = FUN_00e34030(param_2,0x4240804d);
    fVar8 = (float10)FUN_00e340c0(param_2,0x126e4a83);
    local_54 = (float)fVar8;
    fVar8 = (float10)FUN_00e340c0(param_2,0x116fffb0);
    local_58 = (float)fVar8;
    fVar8 = (float10)FUN_00e340c0(param_2,0x2d62c0e9);
    local_60 = (float)fVar8;
    fVar8 = (float10)FUN_00e340c0(param_2,0x18a3398e);
    fVar9 = (float10)FUN_00e340c0(param_2,0x39d51eab);
    local_5c = (float)fVar9;
    fVar9 = (float10)FUN_00e340c0(param_2,0x5d821f2);
    local_64 = (float)fVar9;
    if (iVar6 != iVar7) {
      if (iVar6 == 0) {
        local_a0 = 1.0;
        local_9c = 0.0;
        local_98 = 0.0;
      }
      else if (iVar6 == 1) {
        local_a0 = 0.0;
        local_98 = 0.0;
        local_9c = 1.0;
      }
      else if (iVar6 == 2) {
        local_a0 = 0.0;
        local_9c = 0.0;
        local_98 = 1.0;
      }
      if (iVar7 == 0) {
        local_80 = 1.0;
        local_7c = 0.0;
        local_78 = 0.0;
      }
      else if (iVar7 == 1) {
        local_80 = 0.0;
        local_78 = 0.0;
        local_7c = 1.0;
      }
      else if (iVar7 == 2) {
        local_80 = 0.0;
        local_7c = 0.0;
        local_78 = 1.0;
      }
      local_50 = local_9c * local_78 - local_98 * local_7c;
      local_4c = local_80 * local_98 - local_a0 * local_78;
      local_90 = (double)CONCAT44(local_4c,local_50);
      local_88 = local_7c * local_a0 - local_9c * local_80;
      local_48 = local_88;
      FUN_00ddb590(local_30,iVar5 + 0x90);
      FUN_00e26a20(&local_b0,&local_50,local_30);
      local_90 = (double)(local_48 * local_a8 + local_50 * local_b0 + local_ac * local_4c);
      fVar9 = (float10)FUN_00fdef70();
      fVar10 = (float10)FUN_00fdef70();
      fVar9 = (float10)FUN_00ddbb50((float)local_90 / ((float)fVar10 * (float)fVar9));
      fVar2 = local_ac * local_7c;
      fVar3 = local_b0 * local_80;
      fVar1 = local_a8 * local_78;
      local_90._0_4_ = local_a8 * local_98 + local_b0 * local_a0 + local_9c * local_ac;
      fVar10 = (float10)FUN_00fdecda();
      fVar4 = (float)fVar10 * 0.63661975;
      if (0.0 <= (fVar1 + fVar3 + fVar2) * -1.0) {
        fVar1 = 1.0 - fVar4;
      }
      else {
        fVar1 = fVar4 - 1.0;
      }
      local_60 = local_60 * 0.017453292;
      local_58 = local_58 * 0.017453292;
      local_54 = fVar1 * (float)fVar9 * local_54;
      fVar10 = (float10)FUN_004fbd50(local_54,local_58,local_60);
      if ((float)local_90 < 0.0) {
        fVar4 = fVar4 * -1.0;
      }
      local_64 = local_64 * 0.017453292;
      local_5c = local_5c * 0.017453292;
      fVar8 = (float10)FUN_004fbd50(fVar4 * (float)fVar9 * (float)fVar8,local_5c,local_64);
      local_90 = (double)CONCAT44(local_90._4_4_,(float)fVar8);
      local_c0 = 0.0;
      local_c4 = 0.0;
      fVar1 = ABS((float)fVar10) + ABS((float)fVar8);
      if (1e-10 <= fVar1) {
        fVar8 = (float10)FUN_00fdee60();
        fVar9 = (float10)FUN_00fdee60();
        local_c0 = (float)fVar9 * (float)fVar8;
        fVar9 = (float10)FUN_00fdee60();
        local_c4 = (float)fVar9 * (float)fVar8;
      }
      FUN_004fbd50((1.0 - local_c0 * local_c0) - local_c4 * local_c4,0,0x3f800000);
      fVar8 = (float10)FUN_00fdef70();
      fStack_bc = (float)fVar8;
      if (1.5707964 < fVar1) {
        fStack_bc = -fStack_bc;
      }
      fVar1 = local_c0 * local_a0;
      fVar2 = local_9c * local_c0;
      local_90 = (double)CONCAT44(fVar2,fVar1);
      local_88 = local_98 * local_c0;
      fStack_84 = local_c0 * fStack_94;
      local_a0 = local_c4 * local_80;
      local_9c = local_7c * local_c4;
      local_98 = local_78 * local_c4;
      fStack_94 = local_c4 * fStack_74;
      local_b0 = local_a0 + fVar1 + fStack_bc * local_50;
      local_ac = local_9c + fVar2 + local_4c * fStack_bc;
      local_a8 = local_98 + local_88 + local_48 * fStack_bc;
      fStack_a4 = fStack_94 + fStack_84 + fStack_bc * fStack_44;
      thunk_FUN_00de1080(auStack_20,&local_50,&local_b0);
      FUN_00ddd760(local_34 + 0x90,auStack_20,5);
    }
  }
  return;
}

// 00E3BAB0  FUN_00e3bab0  size=2297  [between]
void FUN_00e3bab0(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [16];
  undefined1 auStack_20 [28];
  
  iVar8 = FUN_00e33f30(param_2,0xffea2d0);
  if ((((-1 < iVar8) && (iVar8 = FUN_00a12210(iVar8), iVar8 != 0)) &&
      ((*(byte *)(iVar8 + 0xa2) & 0x80) == 0)) &&
     ((iVar9 = FUN_00e33fb0(param_2,0x1f478d91), -1 < iVar9 &&
      (iVar9 = FUN_00a12210(iVar9), iVar9 != 0)))) {
    fVar10 = (float10)FUN_00e340c0(param_2,0x6eb242a0);
    fVar1 = (float)fVar10;
    fVar10 = (float10)FUN_00e340c0(param_2,0x19b57236);
    fVar2 = (float)fVar10;
    fVar10 = (float10)FUN_00e340c0(param_2,0xbc238c);
    fVar3 = (float)fVar10;
    fVar10 = (float10)FUN_00e340c0(param_2,0x3b9eaff);
    fVar4 = (float)fVar10;
    fVar10 = (float10)FUN_00e340c0(param_2,0x74beda69);
    fVar5 = (float)fVar10;
    fVar10 = (float10)FUN_00e340c0(param_2,0x6db78bd3);
    fVar6 = (float)fVar10;
    fVar10 = (float10)FUN_00e340c0(param_2,0x126e4a83);
    local_44 = (float)fVar10;
    fVar10 = (float10)FUN_00e340c0(param_2,0x116fffb0);
    local_3c = (float)fVar10;
    fVar10 = (float10)FUN_00e340c0(param_2,0x2d62c0e9);
    local_34 = (float)fVar10;
    fVar10 = (float10)FUN_00e340c0(param_2,0x18a3398e);
    fVar11 = (float10)FUN_00e340c0(param_2,0x39d51eab);
    local_40 = (float)fVar11;
    fVar11 = (float10)FUN_00e340c0(param_2,0x5d821f2);
    local_38 = (float)fVar11;
    fVar7 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
    local_70 = fVar1;
    local_6c = fVar2;
    local_68 = fVar3;
    if (fVar7 < 0.0 == (fVar7 == 0.0)) {
      FUN_00ddf460(&local_70,&local_70);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_70 = 0.0;
      local_6c = 1.0;
      local_68 = 0.0;
    }
    fVar1 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
    local_80 = fVar4;
    local_7c = fVar5;
    local_78 = fVar6;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_80,&local_80);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_80 = 0.0;
      local_7c = 1.0;
      local_78 = 0.0;
    }
    local_60 = local_6c * local_78 - local_68 * local_7c;
    local_5c = local_80 * local_68 - local_70 * local_78;
    local_58 = local_7c * local_70 - local_6c * local_80;
    fVar1 = local_60 * local_60 + local_5c * local_5c + local_58 * local_58;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_60,&local_60);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_60 = 0.0;
      local_5c = 1.0;
      local_58 = 0.0;
    }
    local_80 = local_68 * local_5c - local_6c * local_58;
    local_7c = local_70 * local_58 - local_60 * local_68;
    local_78 = local_60 * local_6c - local_70 * local_5c;
    fVar1 = local_80 * local_80 + local_7c * local_7c + local_78 * local_78;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_80,&local_80);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_80 = 0.0;
      local_7c = 1.0;
      local_78 = 0.0;
    }
    FUN_00ddb590(local_30,iVar9 + 0x90);
    FUN_00e26a20(&local_90,&local_70,local_30);
    fVar1 = local_8c * local_6c;
    fVar3 = local_70 * local_90;
    fVar2 = local_68 * local_88;
    fVar11 = (float10)FUN_00fdef70();
    fVar12 = (float10)FUN_00fdef70();
    fVar11 = (float10)FUN_00ddbb50((fVar2 + fVar3 + fVar1) / ((float)fVar12 * (float)fVar11));
    fVar4 = local_8c * local_5c;
    fVar5 = local_90 * local_60;
    fVar3 = local_88 * local_58;
    fVar1 = local_7c * local_8c;
    fVar6 = local_90 * local_80;
    fVar2 = local_88 * local_78;
    fVar12 = (float10)FUN_00fdecda();
    fVar7 = (float)fVar12 * 0.63661975;
    if (0.0 <= (fVar3 + fVar5 + fVar4) * -1.0) {
      fVar3 = 1.0 - fVar7;
    }
    else {
      fVar3 = fVar7 - 1.0;
    }
    local_34 = local_34 * 0.017453292;
    local_3c = local_3c * 0.017453292;
    local_44 = fVar3 * (float)fVar11 * local_44;
    fVar12 = (float10)FUN_004fbd50(local_44,local_3c,local_34);
    if (fVar2 + fVar6 + fVar1 < 0.0) {
      fVar7 = fVar7 * -1.0;
    }
    local_38 = local_38 * 0.017453292;
    local_40 = local_40 * 0.017453292;
    fVar10 = (float10)FUN_004fbd50(fVar7 * (float)fVar11 * (float)fVar10,local_40,local_38);
    local_bc = 0.0;
    local_c4 = 0.0;
    if (1e-10 <= ABS((float)fVar12) + ABS((float)fVar10)) {
      fVar11 = (float10)FUN_00fdee60();
      fVar13 = (float10)FUN_00fdee60();
      local_bc = (float)fVar13 * (float)fVar11;
      fVar13 = (float10)FUN_00fdee60();
      local_c4 = (float)fVar13 * (float)fVar11;
    }
    FUN_004fbd50((1.0 - local_bc * local_bc) - local_c4 * local_c4,0,0x3f800000);
    fVar11 = (float10)FUN_00fdef70();
    local_b8 = (float)fVar11;
    if (1.5707964 < ABS((float)fVar12) + ABS((float)fVar10)) {
      local_b8 = -local_b8;
    }
    local_90 = local_c4 * local_60 + local_bc * local_80 + local_b8 * local_70;
    local_8c = local_5c * local_c4 + local_bc * local_7c + local_b8 * local_6c;
    local_88 = local_58 * local_c4 + local_bc * local_78 + local_b8 * local_68;
    fStack_84 = local_c4 * fStack_54 + local_bc * fStack_74 + local_b8 * fStack_64;
    thunk_FUN_00de1080(auStack_20,&local_70,&local_90);
    FUN_00ddd760(iVar8 + 0x90,auStack_20,5);
  }
  return;
}

// 00E3C3B0  FUN_00e3c3b0  size=272  [between]
void __fastcall FUN_00e3c3b0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  uint *local_4;
  
  if (param_1[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1[1] + 8);
  }
  uVar6 = 0;
  puVar4 = local_10;
  if (uVar5 != 0) {
    do {
      iVar1 = param_1[1];
      if ((iVar1 != 0) && (uVar6 < *(uint *)(iVar1 + 8))) {
        iVar2 = *(int *)(param_1[2] + uVar6 * 4);
        puVar4 = (uint *)(iVar2 + iVar1);
        local_c = puVar4 + 2;
        local_8 = local_c + (uint)*(byte *)(iVar2 + 4 + iVar1) * 2;
        local_4 = local_8 + (uint)*(byte *)((int)puVar4 + 5) * 2;
        local_10 = puVar4;
      }
      uVar3 = *puVar4;
      if (uVar3 < 0x5b25272f) {
        if (uVar3 == 0x5b25272e) {
          FUN_00e3b160(*param_1,&local_10);
        }
        else if (uVar3 == 0xa94fee) {
          FUN_00e3ac00(*param_1,&local_10);
        }
        else if (uVar3 == 0x39156520) {
          FUN_00e3b3f0(*param_1,&local_10);
        }
        else {
          if (uVar3 != 0x55b15e68) goto LAB_00e3c477;
          FUN_00e3ade0(*param_1,&local_10);
        }
      }
      else if (uVar3 == 0x62e1d6b0) {
        FUN_00e3bab0(*param_1,&local_10);
      }
      else if (uVar3 == 0x723769e0) {
        FUN_00e3b310(*param_1,&local_10);
      }
      else {
LAB_00e3c477:
        FUN_00dd5650(&DAT_016cdff0,*(undefined4 *)(*param_1 + 0x4b0),uVar3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  return;
}

// 00E3C4C0  FUN_00e3c4c0  size=811  [between]
byte __thiscall FUN_00e3c4c0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  bool bVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar8;
  float10 extraout_ST0_02;
  float local_74;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  fVar8 = (float10)0;
  local_30 = (float)fVar8;
  iVar2 = *(int *)(param_1 + 0xc);
  local_2c = (float)fVar8;
  local_28 = (float)fVar8;
  local_50 = (float)fVar8;
  local_4c = (float)fVar8;
  local_48 = (float)fVar8;
  local_60 = (float)fVar8;
  local_5c = (float)fVar8;
  local_58 = (float)fVar8;
  local_54 = (float)fVar8;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_74 = (float)fVar8;
  local_70 = (float)fVar8;
  local_6c = (float)fVar8;
  do {
    if (iVar2 == 0) {
      bVar6 = fVar8 != (float10)local_74;
      if ((bool)bVar6) {
        *(float *)(param_2 + 0x50) = local_50;
        *(float *)(param_2 + 0x54) = local_4c;
        *(float *)(param_2 + 0x58) = local_48;
        *(undefined4 *)(param_2 + 0x5c) = local_44;
      }
      if (fVar8 != (float10)local_70) {
        bVar6 = bVar6 | 2;
        *(float *)(param_2 + 0x90) = local_60;
        *(float *)(param_2 + 0x94) = local_5c;
        *(float *)(param_2 + 0x98) = local_58;
        *(float *)(param_2 + 0x9c) = local_54;
      }
      if ((float10)local_6c != fVar8) {
        bVar6 = bVar6 | 4;
        *(undefined4 *)(param_2 + 0x70) = local_40;
        *(undefined4 *)(param_2 + 0x74) = local_3c;
        *(undefined4 *)(param_2 + 0x78) = local_38;
        *(undefined4 *)(param_2 + 0x7c) = local_34;
      }
      return bVar6;
    }
    fVar3 = *(float *)(iVar2 + 0x78) * *(float *)(iVar2 + 0x44);
    if ((fVar8 != (float10)fVar3) &&
       (iVar4 = FUN_00e25aa0(param_3), fVar8 = extraout_ST0, iVar4 != 0)) {
      uVar5 = param_3;
      if (*(int *)(iVar2 + 0x3c) != 0) {
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
        uVar5 = FUN_00e240f0(param_3);
      }
      puVar1 = (undefined4 *)(iVar2 + 0x2c);
      *(undefined4 *)(iVar2 + 0x1c) = uVar5;
      iVar4 = FUN_00e23900(iVar2 + 0x20,puVar1,uVar5);
      fVar8 = extraout_ST0_00;
      if (iVar4 != 0) {
        bVar7 = (*(uint *)(*(int *)(iVar2 + 0x10) + 100) >> 0x13 & 1) == 0;
        if (bVar7) {
LAB_00e3c5e0:
          if ((float10)local_74 == fVar8) {
            uVar5 = FUN_00a06de0(param_3);
            FUN_00a06e70(&local_30,uVar5);
          }
          local_74 = fVar3 + local_74;
          FUN_00e30070(iVar2 + 0x14,&local_50,fVar3 / local_74,&local_30);
          if (!bVar7) goto LAB_00e3c63e;
LAB_00e3c674:
          local_70 = fVar3 + local_70;
          FUN_00e28240(local_20,*(undefined4 *)(iVar2 + 0x1c),iVar2 + 0x20,puVar1,iVar2 + 0x30);
          FUN_00de21a0(&local_60,&local_60,local_20,fVar3 / local_70);
          if (!bVar7) goto LAB_00e3c6ce;
        }
        else {
          uVar5 = param_3;
          if (*(int *)(iVar2 + 0x3c) != 0) {
            *puVar1 = 0;
            *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
            uVar5 = FUN_00e240f0(param_3);
          }
          *(undefined4 *)(iVar2 + 0x1c) = uVar5;
          iVar4 = FUN_00e23960(iVar2 + 0x20,puVar1,uVar5,0);
          fVar8 = extraout_ST0_01;
          if (iVar4 != 0) goto LAB_00e3c5e0;
LAB_00e3c63e:
          uVar5 = param_3;
          if (*(int *)(iVar2 + 0x3c) != 0) {
            *puVar1 = 0;
            *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
            uVar5 = FUN_00e240f0(param_3);
          }
          *(undefined4 *)(iVar2 + 0x1c) = uVar5;
          iVar4 = FUN_00e23960(iVar2 + 0x20,puVar1,uVar5,3);
          if (iVar4 != 0) goto LAB_00e3c674;
LAB_00e3c6ce:
          uVar5 = param_3;
          if (*(int *)(iVar2 + 0x3c) != 0) {
            *puVar1 = 0;
            *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
            uVar5 = FUN_00e240f0(param_3);
          }
          *(undefined4 *)(iVar2 + 0x1c) = uVar5;
          iVar4 = FUN_00e23960(iVar2 + 0x20,puVar1,uVar5,7);
          fVar8 = extraout_ST0_02;
          if (iVar4 == 0) goto LAB_00e3c736;
        }
        local_6c = fVar3 + local_6c;
        FUN_00e30140(iVar2 + 0x14,&local_40,fVar3 / local_6c);
        fVar8 = (float10)0;
      }
    }
LAB_00e3c736:
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}

// 00E3C7F0  FUN_00e3c7f0  size=1238  [between]
byte __thiscall FUN_00e3c7f0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  bool bVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar8;
  float10 extraout_ST0_02;
  float10 fVar9;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
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
  undefined1 local_20 [28];
  
  fVar8 = (float10)0;
  local_30 = (float)fVar8;
  iVar3 = *(int *)(param_1 + 0xc);
  local_2c = (float)fVar8;
  local_28 = (float)fVar8;
  local_60 = (float)fVar8;
  local_5c = (float)fVar8;
  local_58 = (float)fVar8;
  local_40 = (float)fVar8;
  local_3c = (float)fVar8;
  local_38 = (float)fVar8;
  local_34 = (float)fVar8;
  local_50 = 1.0;
  local_4c = 1.0;
  local_48 = 1.0;
  local_80 = (float)fVar8;
  local_7c = (float)fVar8;
  local_78 = (float)fVar8;
  local_74 = (float)fVar8;
  local_70 = (float)fVar8;
  local_6c = (float)fVar8;
  do {
    if (iVar3 == 0) {
      fVar9 = (float10)local_80;
      if ((*(ushort *)(param_2 + 0xa2) & 0x1000) == 0) {
        bVar6 = fVar8 != fVar9;
        if ((bool)bVar6) {
          fVar2 = (float)((float10)1 - (float10)local_74 / fVar9);
          *(float *)(param_2 + 0x50) =
               *(float *)(param_2 + 0x50) + fVar2 * (local_60 - *(float *)(param_2 + 0x50));
          *(float *)(param_2 + 0x54) =
               (local_5c - *(float *)(param_2 + 0x54)) * fVar2 + *(float *)(param_2 + 0x54);
          *(float *)(param_2 + 0x58) =
               (local_58 - *(float *)(param_2 + 0x58)) * fVar2 + *(float *)(param_2 + 0x58);
          *(float *)(param_2 + 0x5c) =
               (local_54 - *(float *)(param_2 + 0x5c)) * fVar2 + *(float *)(param_2 + 0x5c);
        }
        if (fVar8 != (float10)local_7c) {
          FUN_00de21a0(param_2 + 0x90,param_2 + 0x90,&local_40,
                       (float)((float10)1 - (float10)local_70 / (float10)local_7c));
          fVar8 = (float10)0;
          bVar6 = bVar6 | 2;
        }
        if ((float10)local_78 != fVar8) {
          fVar2 = (float)((float10)1 - (float10)local_6c / (float10)local_78);
          *(float *)(param_2 + 0x70) =
               *(float *)(param_2 + 0x70) + fVar2 * (local_50 - *(float *)(param_2 + 0x70));
          *(float *)(param_2 + 0x74) =
               (local_4c - *(float *)(param_2 + 0x74)) * fVar2 + *(float *)(param_2 + 0x74);
          *(float *)(param_2 + 0x78) =
               (local_48 - *(float *)(param_2 + 0x78)) * fVar2 + *(float *)(param_2 + 0x78);
          *(float *)(param_2 + 0x7c) =
               (local_44 - *(float *)(param_2 + 0x7c)) * fVar2 + *(float *)(param_2 + 0x7c);
          return bVar6 | 4;
        }
      }
      else {
        bVar6 = fVar8 != fVar9;
        if ((bool)bVar6) {
          *(float *)(param_2 + 0x50) = local_60;
          *(float *)(param_2 + 0x54) = local_5c;
          *(float *)(param_2 + 0x58) = local_58;
          *(float *)(param_2 + 0x5c) = local_54;
        }
        if (fVar8 != (float10)local_7c) {
          bVar6 = bVar6 | 2;
          *(float *)(param_2 + 0x90) = local_40;
          *(float *)(param_2 + 0x94) = local_3c;
          *(float *)(param_2 + 0x98) = local_38;
          *(float *)(param_2 + 0x9c) = local_34;
        }
        if ((float10)local_78 != fVar8) {
          *(float *)(param_2 + 0x70) = local_50;
          *(float *)(param_2 + 0x74) = local_4c;
          *(float *)(param_2 + 0x78) = local_48;
          *(float *)(param_2 + 0x7c) = local_44;
          return bVar6 | 4;
        }
      }
      return bVar6;
    }
    fVar2 = *(float *)(iVar3 + 0x44);
    if ((fVar8 != (float10)fVar2) &&
       (iVar4 = FUN_00e25aa0(param_3), fVar8 = extraout_ST0, iVar4 != 0)) {
      uVar5 = param_3;
      if (*(int *)(iVar3 + 0x3c) != 0) {
        *(undefined4 *)(iVar3 + 0x2c) = 0;
        *(undefined4 *)(iVar3 + 0x1c) = 0xffffffff;
        uVar5 = FUN_00e240f0(param_3);
      }
      puVar1 = (undefined4 *)(iVar3 + 0x2c);
      *(undefined4 *)(iVar3 + 0x1c) = uVar5;
      iVar4 = FUN_00e23900(iVar3 + 0x20,puVar1,uVar5);
      fVar8 = extraout_ST0_00;
      if (iVar4 != 0) {
        bVar7 = (*(uint *)(*(int *)(iVar3 + 0x10) + 100) >> 0x13 & 1) == 0;
        if (bVar7) {
LAB_00e3c91c:
          if ((float10)local_80 == fVar8) {
            uVar5 = FUN_00a06de0(param_3);
            FUN_00a06e70(&local_30,uVar5);
          }
          local_80 = fVar2 + local_80;
          fVar8 = (float10)FUN_00e25a20();
          local_74 = (float)((float10)local_74 + (float10)fVar2 * fVar8);
          FUN_00e30070(iVar3 + 0x14,&local_60,(float)((float10)fVar2 / (float10)local_80),&local_30)
          ;
          if (!bVar7) goto LAB_00e3c995;
LAB_00e3c9cb:
          local_7c = fVar2 + local_7c;
          fVar8 = (float10)FUN_00e25a20();
          local_70 = (float)(fVar8 * (float10)fVar2 + (float10)local_70);
          FUN_00e28240(local_20,*(undefined4 *)(iVar3 + 0x1c),iVar3 + 0x20,puVar1,iVar3 + 0x30);
          FUN_00de21a0(&local_40,&local_40,local_20,fVar2 / local_7c);
          if (!bVar7) goto LAB_00e3ca3d;
        }
        else {
          uVar5 = param_3;
          if (*(int *)(iVar3 + 0x3c) != 0) {
            *puVar1 = 0;
            *(undefined4 *)(iVar3 + 0x1c) = 0xffffffff;
            uVar5 = FUN_00e240f0(param_3);
          }
          *(undefined4 *)(iVar3 + 0x1c) = uVar5;
          iVar4 = FUN_00e23960(iVar3 + 0x20,puVar1,uVar5,0);
          fVar8 = extraout_ST0_01;
          if (iVar4 != 0) goto LAB_00e3c91c;
LAB_00e3c995:
          uVar5 = param_3;
          if (*(int *)(iVar3 + 0x3c) != 0) {
            *puVar1 = 0;
            *(undefined4 *)(iVar3 + 0x1c) = 0xffffffff;
            uVar5 = FUN_00e240f0(param_3);
          }
          *(undefined4 *)(iVar3 + 0x1c) = uVar5;
          iVar4 = FUN_00e23960(iVar3 + 0x20,puVar1,uVar5,3);
          if (iVar4 != 0) goto LAB_00e3c9cb;
LAB_00e3ca3d:
          uVar5 = param_3;
          if (*(int *)(iVar3 + 0x3c) != 0) {
            *puVar1 = 0;
            *(undefined4 *)(iVar3 + 0x1c) = 0xffffffff;
            uVar5 = FUN_00e240f0(param_3);
          }
          *(undefined4 *)(iVar3 + 0x1c) = uVar5;
          iVar4 = FUN_00e23960(iVar3 + 0x20,puVar1,uVar5,7);
          fVar8 = extraout_ST0_02;
          if (iVar4 == 0) goto LAB_00e3cac0;
        }
        local_78 = fVar2 + local_78;
        fVar8 = (float10)FUN_00e25a20();
        local_6c = (float)((float10)local_6c + (float10)fVar2 * fVar8);
        FUN_00e30140(iVar3 + 0x14,&local_50,(float)((float10)fVar2 / (float10)local_78));
        fVar8 = (float10)0;
      }
    }
LAB_00e3cac0:
    iVar3 = *(int *)(iVar3 + 4);
  } while( true );
}

// 00E3CCD0  FUN_00e3ccd0  size=976  [between]
uint __thiscall FUN_00e3ccd0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar8;
  float10 extraout_ST0_02;
  float10 fVar9;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float local_7c;
  float local_78;
  float local_74;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
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
  undefined1 local_20 [28];
  
  fVar9 = (float10)0;
  local_30 = (float)fVar9;
  iVar2 = *(int *)(param_1 + 0x18);
  local_2c = (float)fVar9;
  local_28 = (float)fVar9;
  local_60 = (float)fVar9;
  local_5c = (float)fVar9;
  local_58 = (float)fVar9;
  local_40 = (float)fVar9;
  local_3c = (float)fVar9;
  local_38 = (float)fVar9;
  local_34 = (float)fVar9;
  fVar8 = (float10)1;
  local_50 = (float)fVar8;
  local_4c = (float)fVar8;
  local_48 = (float)fVar8;
  local_7c = (float)fVar9;
  local_78 = (float)fVar9;
  local_74 = (float)fVar9;
  do {
    if (iVar2 == 0) {
      uVar6 = 0;
      if (fVar9 < (float10)local_7c) {
        if (fVar8 < (float10)local_7c) {
          local_7c = (float)fVar8;
        }
        uVar6 = 1;
        *(float *)(param_2 + 0x50) =
             *(float *)(param_2 + 0x50) + local_7c * (local_60 - *(float *)(param_2 + 0x50));
        *(float *)(param_2 + 0x54) =
             (local_5c - *(float *)(param_2 + 0x54)) * local_7c + *(float *)(param_2 + 0x54);
        *(float *)(param_2 + 0x58) =
             (local_58 - *(float *)(param_2 + 0x58)) * local_7c + *(float *)(param_2 + 0x58);
        *(float *)(param_2 + 0x5c) =
             (local_54 - *(float *)(param_2 + 0x5c)) * local_7c + *(float *)(param_2 + 0x5c);
      }
      if (fVar9 < (float10)local_78) {
        if (fVar8 < (float10)local_78) {
          local_78 = (float)fVar8;
        }
        FUN_00de21a0(param_2 + 0x90,param_2 + 0x90,&local_40,local_78);
        fVar8 = (float10)1;
        fVar9 = (float10)0;
        uVar6 = uVar6 | 2;
      }
      if (fVar9 < (float10)local_74) {
        if (fVar8 < (float10)local_74) {
          local_74 = (float)fVar8;
        }
        *(float *)(param_2 + 0x70) =
             *(float *)(param_2 + 0x70) + local_74 * (local_50 - *(float *)(param_2 + 0x70));
        *(float *)(param_2 + 0x74) =
             (local_4c - *(float *)(param_2 + 0x74)) * local_74 + *(float *)(param_2 + 0x74);
        *(float *)(param_2 + 0x78) =
             (local_48 - *(float *)(param_2 + 0x78)) * local_74 + *(float *)(param_2 + 0x78);
        *(float *)(param_2 + 0x7c) =
             (local_44 - *(float *)(param_2 + 0x7c)) * local_74 + *(float *)(param_2 + 0x7c);
        return uVar6 | 4;
      }
      return uVar6;
    }
    fVar3 = *(float *)(iVar2 + 0x78) * *(float *)(iVar2 + 0x44);
    if ((fVar9 != (float10)fVar3) &&
       (iVar4 = FUN_00e25aa0(param_3), fVar9 = extraout_ST0, fVar8 = extraout_ST1, iVar4 != 0)) {
      uVar5 = param_3;
      if (*(int *)(iVar2 + 0x3c) != 0) {
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
        uVar5 = FUN_00e240f0(param_3);
      }
      puVar1 = (undefined4 *)(iVar2 + 0x2c);
      *(undefined4 *)(iVar2 + 0x1c) = uVar5;
      iVar4 = FUN_00e23900(iVar2 + 0x20,puVar1,uVar5);
      fVar9 = extraout_ST0_00;
      fVar8 = extraout_ST1_00;
      if (iVar4 != 0) {
        bVar7 = (*(uint *)(*(int *)(iVar2 + 0x10) + 100) >> 0x13 & 1) == 0;
        fVar8 = extraout_ST0_00;
        if (bVar7) {
LAB_00e3cdf2:
          if ((float10)local_7c == fVar8) {
            uVar5 = FUN_00a06de0(param_3);
            FUN_00a06e70(&local_30,uVar5);
          }
          local_7c = fVar3 + local_7c;
          FUN_00e30070(iVar2 + 0x14,&local_60,fVar3 / local_7c,&local_30);
          if (!bVar7) goto LAB_00e3ce54;
LAB_00e3ce8c:
          local_78 = fVar3 + local_78;
          FUN_00e28240(local_20,*(undefined4 *)(iVar2 + 0x1c),iVar2 + 0x20,puVar1,iVar2 + 0x30);
          FUN_00de21a0(&local_40,&local_40,local_20,fVar3 / local_78);
          if (!bVar7) goto LAB_00e3cee8;
        }
        else {
          uVar5 = param_3;
          if (*(int *)(iVar2 + 0x3c) != 0) {
            *puVar1 = 0;
            *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
            uVar5 = FUN_00e240f0(param_3);
          }
          *(undefined4 *)(iVar2 + 0x1c) = uVar5;
          iVar4 = FUN_00e23960(iVar2 + 0x20,puVar1,uVar5,0);
          fVar8 = extraout_ST0_01;
          if (iVar4 != 0) goto LAB_00e3cdf2;
LAB_00e3ce54:
          uVar5 = param_3;
          if (*(int *)(iVar2 + 0x3c) != 0) {
            *puVar1 = 0;
            *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
            uVar5 = FUN_00e240f0(param_3);
          }
          *(undefined4 *)(iVar2 + 0x1c) = uVar5;
          iVar4 = FUN_00e23960(iVar2 + 0x20,puVar1,uVar5,3);
          if (iVar4 != 0) goto LAB_00e3ce8c;
LAB_00e3cee8:
          uVar5 = param_3;
          if (*(int *)(iVar2 + 0x3c) != 0) {
            *puVar1 = 0;
            *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
            uVar5 = FUN_00e240f0(param_3);
          }
          *(undefined4 *)(iVar2 + 0x1c) = uVar5;
          iVar4 = FUN_00e23960(iVar2 + 0x20,puVar1,uVar5,7);
          fVar9 = extraout_ST0_02;
          fVar8 = extraout_ST1_01;
          if (iVar4 == 0) goto LAB_00e3cf54;
        }
        local_74 = fVar3 + local_74;
        FUN_00e30140(iVar2 + 0x14,&local_50,fVar3 / local_74);
        fVar8 = (float10)1;
        fVar9 = (float10)0;
      }
    }
LAB_00e3cf54:
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}

// 00E3D0A0  FUN_00e3d0a0  size=206  [between]
void __fastcall FUN_00e3d0a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  local_c = 0;
  if (0 < iVar3) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 4) + local_c * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        iVar6 = (int)*(short *)(iVar5 + 0xa0);
        if (*(int *)(iVar4 + 0x3c) != 0) {
          *(undefined4 *)(iVar4 + 0x2c) = 0;
          *(undefined4 *)(iVar4 + 0x1c) = 0xffffffff;
          iVar6 = FUN_00e240f0(iVar6);
        }
        iVar1 = iVar4 + 0x2c;
        iVar2 = iVar4 + 0x20;
        *(int *)(iVar4 + 0x1c) = iVar6;
        iVar6 = FUN_00e23900(iVar2,iVar1,iVar6);
        if (iVar6 != 0) {
          FUN_00e239d0(iVar5 + 0x50,*(undefined4 *)(iVar4 + 0x1c),iVar2,iVar1,iVar4 + 0x30);
          FUN_00e278a0(iVar5 + 0x90,*(undefined4 *)(iVar4 + 0x1c),iVar2,iVar1,iVar4 + 0x30);
          FUN_00e23f00(iVar5 + 0x70,*(undefined4 *)(iVar4 + 0x1c),iVar2,iVar1,iVar4 + 0x30);
        }
      }
      local_c = local_c + 1;
    } while (local_c < iVar3);
  }
  return;
}

// 00E3D170  FUN_00e3d170  size=113  [between]
void __fastcall FUN_00e3d170(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar6 = (float10)FUN_00e25a20();
  iVar3 = param_1[2];
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + iVar5 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        FUN_00e39380(iVar1 + 0x14,iVar4,(int)*(short *)(iVar4 + 0xa0),(float)((float10)1 - fVar6),
                     uVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}

// 00E3D1F0  FUN_00e3d1f0  size=426  [between]
void __fastcall FUN_00e3d1f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  local_4c = 0;
  if (0 < iVar1) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + local_4c * 4);
      if ((*(byte *)(iVar3 + 0xa2) & 8) == 0) {
        iVar6 = (int)*(short *)(iVar3 + 0xa0);
        iVar4 = iVar6;
        if (*(int *)(iVar2 + 0x3c) != 0) {
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
          iVar4 = FUN_00e240f0(iVar6);
        }
        *(int *)(iVar2 + 0x1c) = iVar4;
        iVar4 = FUN_00e23900(iVar2 + 0x20,iVar2 + 0x2c,iVar4);
        if (iVar4 != 0) {
          iVar4 = iVar6;
          if (*(int *)(iVar2 + 0x3c) != 0) {
            *(undefined4 *)(iVar2 + 0x2c) = 0;
            *(undefined4 *)(iVar2 + 0x1c) = 0xffffffff;
            iVar4 = FUN_00e240f0(iVar6);
          }
          *(int *)(iVar2 + 0x1c) = iVar4;
          iVar4 = FUN_00e23960(iVar2 + 0x20,iVar2 + 0x2c,iVar4,0);
          if (iVar4 != 0) {
            FUN_00e239d0(&local_40,*(undefined4 *)(iVar2 + 0x1c),iVar2 + 0x20,iVar2 + 0x2c,
                         iVar2 + 0x30);
            uVar5 = FUN_00a06de0(iVar6);
            FUN_00a06e70(local_20,uVar5);
            uVar5 = FUN_00a06de0(iVar6);
            FUN_00a06e70(local_30,uVar5);
            FUN_00e23310(&local_40,&local_40,local_20,local_30);
            *(undefined4 *)(iVar3 + 0x50) = local_40;
            *(undefined4 *)(iVar3 + 0x54) = local_3c;
            *(undefined4 *)(iVar3 + 0x58) = local_38;
            *(undefined4 *)(iVar3 + 0x5c) = local_34;
          }
          FUN_00e278a0(iVar3 + 0x90,*(undefined4 *)(iVar2 + 0x1c),iVar2 + 0x20,iVar2 + 0x2c,
                       iVar2 + 0x30);
          FUN_00e23f00(iVar3 + 0x70,*(undefined4 *)(iVar2 + 0x1c),iVar2 + 0x20,iVar2 + 0x2c,
                       iVar2 + 0x30);
        }
      }
      local_4c = local_4c + 1;
    } while (local_4c < iVar1);
  }
  return;
}

// 00E3D3B0  FUN_00e3d3b0  size=101  [between]
void __fastcall FUN_00e3d3b0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 8);
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 4) + iVar6 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0((int)sVar1);
        if (iVar5 != 0) {
          FUN_00e39050(iVar2 + 0x14,iVar4,(int)sVar1);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}

// 00E3D420  FUN_00e3d420  size=146  [between]
void __fastcall FUN_00e3d420(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  
  iVar2 = param_1[3];
  uVar3 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar8 = (float10)FUN_00e25a20();
  iVar4 = param_1[2];
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + iVar7 * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar5 + 0xa0);
        iVar6 = FUN_00e25aa0((int)sVar1);
        if (iVar6 != 0) {
          FUN_00e39380(iVar2 + 0x14,iVar5,(int)sVar1,(float)((float10)1 - fVar8),uVar3);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  return;
}

// 00E3D4C0  FUN_00e3d4c0  size=206  [between]
void __fastcall FUN_00e3d4c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  local_c = 0;
  if (0 < iVar3) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 4) + local_c * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        iVar6 = (int)*(short *)(iVar5 + 0xa0);
        if (*(int *)(iVar4 + 0x3c) != 0) {
          *(undefined4 *)(iVar4 + 0x2c) = 0;
          *(undefined4 *)(iVar4 + 0x1c) = 0xffffffff;
          iVar6 = FUN_00e240f0(iVar6);
        }
        iVar1 = iVar4 + 0x2c;
        iVar2 = iVar4 + 0x20;
        *(int *)(iVar4 + 0x1c) = iVar6;
        iVar6 = FUN_00e23900(iVar2,iVar1,iVar6);
        if (iVar6 != 0) {
          FUN_00e239d0(iVar5 + 0x50,*(undefined4 *)(iVar4 + 0x1c),iVar2,iVar1,iVar4 + 0x30);
          FUN_00e278a0(iVar5 + 0x90,*(undefined4 *)(iVar4 + 0x1c),iVar2,iVar1,iVar4 + 0x30);
          FUN_00e23f00(iVar5 + 0x70,*(undefined4 *)(iVar4 + 0x1c),iVar2,iVar1,iVar4 + 0x30);
        }
      }
      local_c = local_c + 1;
    } while (local_c < iVar3);
  }
  return;
}

// 00E3D590  FUN_00e3d590  size=113  [between]
void __fastcall FUN_00e3d590(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar6 = (float10)FUN_00e25a20();
  iVar3 = param_1[2];
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + iVar5 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        FUN_00e399b0(iVar1 + 0x14,iVar4,(int)*(short *)(iVar4 + 0xa0),(float)((float10)1 - fVar6),
                     uVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}

// 00E3D610  FUN_00e3d610  size=101  [between]
void __fastcall FUN_00e3d610(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 8);
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 4) + iVar6 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0((int)sVar1);
        if (iVar5 != 0) {
          FUN_00e397d0(iVar2 + 0x14,iVar4,(int)sVar1);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}

// 00E3D680  FUN_00e3d680  size=146  [between]
void __fastcall FUN_00e3d680(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  
  iVar2 = param_1[3];
  uVar3 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar8 = (float10)FUN_00e25a20();
  iVar4 = param_1[2];
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + iVar7 * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar5 + 0xa0);
        iVar6 = FUN_00e25aa0((int)sVar1);
        if (iVar6 != 0) {
          FUN_00e399b0(iVar2 + 0x14,iVar5,(int)sVar1,(float)((float10)1 - fVar8),uVar3);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  return;
}

// 00E3D720  FUN_00e3d720  size=116  [between]
void __fastcall FUN_00e3d720(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar3 = param_1[3];
  iVar4 = param_1[2];
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + iVar6 * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar5 + 0xa0);
        FUN_00e39050(iVar3 + 0x14,iVar5,(int)sVar1);
        FUN_00e3ccd0(iVar5,(int)sVar1,uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return;
}

// 00E3D7A0  FUN_00e3d7a0  size=145  [between]
void __fastcall FUN_00e3d7a0(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar2 = param_1[3];
  uVar3 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar7 = (float10)FUN_00e25a20();
  iVar4 = param_1[2];
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + iVar6 * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar5 + 0xa0);
        FUN_00e39380(iVar2 + 0x14,iVar5,(int)sVar1,(float)((float10)1 - fVar7),uVar3);
        FUN_00e3ccd0(iVar5,(int)sVar1,uVar3);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return;
}

// 00E3D840  FUN_00e3d840  size=133  [between]
void __fastcall FUN_00e3d840(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar3 = param_1[2];
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + iVar6 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar7 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar7);
        if (iVar5 != 0) {
          FUN_00e39050(iVar1 + 0x14,iVar4,iVar7);
        }
        FUN_00e3ccd0(iVar4,iVar7,uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}

// 00E3D8D0  FUN_00e3d8d0  size=162  [between]
void __fastcall FUN_00e3d8d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar8 = (float10)FUN_00e25a20();
  iVar3 = param_1[2];
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + iVar6 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar7 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar7);
        if (iVar5 != 0) {
          FUN_00e39380(iVar1 + 0x14,iVar4,iVar7,(float)((float10)1 - fVar8),uVar2);
        }
        FUN_00e3ccd0(iVar4,iVar7,uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}

// 00E3D980  FUN_00e3d980  size=116  [between]
void __fastcall FUN_00e3d980(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar3 = param_1[3];
  iVar4 = param_1[2];
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + iVar6 * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar5 + 0xa0);
        FUN_00e397d0(iVar3 + 0x14,iVar5,(int)sVar1);
        FUN_00e3ccd0(iVar5,(int)sVar1,uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return;
}

// 00E3DA00  FUN_00e3da00  size=145  [between]
void __fastcall FUN_00e3da00(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar2 = param_1[3];
  uVar3 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar7 = (float10)FUN_00e25a20();
  iVar4 = param_1[2];
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + iVar6 * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar5 + 0xa0);
        FUN_00e399b0(iVar2 + 0x14,iVar5,(int)sVar1,(float)((float10)1 - fVar7),uVar3);
        FUN_00e3ccd0(iVar5,(int)sVar1,uVar3);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return;
}

// 00E3DAA0  FUN_00e3daa0  size=133  [between]
void __fastcall FUN_00e3daa0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar3 = param_1[2];
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + iVar6 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar7 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar7);
        if (iVar5 != 0) {
          FUN_00e397d0(iVar1 + 0x14,iVar4,iVar7);
        }
        FUN_00e3ccd0(iVar4,iVar7,uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}

// 00E3DB30  FUN_00e3db30  size=162  [between]
void __fastcall FUN_00e3db30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar8 = (float10)FUN_00e25a20();
  iVar3 = param_1[2];
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + iVar6 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar7 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar7);
        if (iVar5 != 0) {
          FUN_00e399b0(iVar1 + 0x14,iVar4,iVar7,(float)((float10)1 - fVar8),uVar2);
        }
        FUN_00e3ccd0(iVar4,iVar7,uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}

// 00E3DBE0  FUN_00e3dbe0  size=121  [between]
void __fastcall FUN_00e3dbe0(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_c;
  
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar3 = param_1[3];
  iVar4 = param_1[2];
  local_c = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + local_c * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar5 + 0xa0);
        uVar6 = FUN_00e390e0(iVar3 + 0x14,iVar5,(int)sVar1);
        FUN_00e38cd0(iVar5,(int)sVar1,uVar2,uVar6);
      }
      local_c = local_c + 1;
    } while (local_c < iVar4);
  }
  return;
}

// 00E3DC60  FUN_00e3dc60  size=146  [between]
void __fastcall FUN_00e3dc60(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  int local_10;
  
  iVar2 = param_1[3];
  uVar3 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar7 = (float10)FUN_00e25a20();
  iVar4 = param_1[2];
  local_10 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + local_10 * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar5 + 0xa0);
        uVar6 = FUN_00e39540(iVar2 + 0x14,iVar5,(int)sVar1,(float)((float10)1 - fVar7),uVar3);
        FUN_00e38cd0(iVar5,(int)sVar1,uVar3,uVar6);
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar4);
  }
  return;
}

// 00E3DD00  FUN_00e3dd00  size=138  [between]
void __fastcall FUN_00e3dd00(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar3 = param_1[2];
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + iVar7 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar8 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar8);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_00e390e0(iVar1 + 0x14,iVar4,iVar8);
        }
        FUN_00e38cd0(iVar4,iVar8,uVar2,uVar6);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  return;
}

// 00E3DD90  FUN_00e3dd90  size=167  [between]
void __fastcall FUN_00e3dd90(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  int local_c;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar8 = (float10)FUN_00e25a20();
  iVar3 = param_1[2];
  local_c = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + local_c * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar7 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar7);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_00e39540(iVar1 + 0x14,iVar4,iVar7,(float)((float10)1 - fVar8),uVar2);
        }
        FUN_00e38cd0(iVar4,iVar7,uVar2,uVar6);
      }
      local_c = local_c + 1;
    } while (local_c < iVar3);
  }
  return;
}

// 00E3DE40  FUN_00e3de40  size=121  [between]
void __fastcall FUN_00e3de40(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_c;
  
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar3 = param_1[3];
  iVar4 = param_1[2];
  local_c = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + local_c * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar5 + 0xa0);
        uVar6 = FUN_00e39860(iVar3 + 0x14,iVar5,(int)sVar1);
        FUN_00e38cd0(iVar5,(int)sVar1,uVar2,uVar6);
      }
      local_c = local_c + 1;
    } while (local_c < iVar4);
  }
  return;
}

// 00E3DEC0  FUN_00e3dec0  size=146  [between]
void __fastcall FUN_00e3dec0(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  int local_10;
  
  iVar2 = param_1[3];
  uVar3 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar7 = (float10)FUN_00e25a20();
  iVar4 = param_1[2];
  local_10 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + local_10 * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        sVar1 = *(short *)(iVar5 + 0xa0);
        uVar6 = FUN_00e39ca0(iVar2 + 0x14,iVar5,(int)sVar1,(float)((float10)1 - fVar7),uVar3);
        FUN_00e38cd0(iVar5,(int)sVar1,uVar3,uVar6);
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar4);
  }
  return;
}

// 00E3DF60  FUN_00e3df60  size=138  [between]
void __fastcall FUN_00e3df60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar3 = param_1[2];
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + iVar7 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar8 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar8);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_00e39860(iVar1 + 0x14,iVar4,iVar8);
        }
        FUN_00e38cd0(iVar4,iVar8,uVar2,uVar6);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  return;
}

// 00E3DFF0  FUN_00e3dff0  size=167  [between]
void __fastcall FUN_00e3dff0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  int local_c;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar8 = (float10)FUN_00e25a20();
  iVar3 = param_1[2];
  local_c = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + local_c * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar7 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar7);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_00e39ca0(iVar1 + 0x14,iVar4,iVar7,(float)((float10)1 - fVar8),uVar2);
        }
        FUN_00e38cd0(iVar4,iVar7,uVar2,uVar6);
      }
      local_c = local_c + 1;
    } while (local_c < iVar3);
  }
  return;
}

// 00E3E0A0  FUN_00e3e0a0  size=146  [between]
void __fastcall FUN_00e3e0a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_c;
  
  uVar1 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar2 = param_1[3];
  iVar3 = param_1[2];
  local_c = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + local_c * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar7 = (int)*(short *)(iVar4 + 0xa0);
        uVar5 = FUN_00e390e0(iVar2 + 0x14,iVar4,iVar7);
        uVar6 = FUN_00e3ccd0(iVar4,iVar7,uVar1);
        FUN_00e38cd0(iVar4,iVar7,uVar1,uVar5 | uVar6);
      }
      local_c = local_c + 1;
    } while (local_c < iVar3);
  }
  return;
}

// 00E3E140  FUN_00e3e140  size=172  [between]
void __fastcall FUN_00e3e140(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  int local_10;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar8 = (float10)FUN_00e25a20();
  iVar3 = param_1[2];
  local_10 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + local_10 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar7 = (int)*(short *)(iVar4 + 0xa0);
        uVar5 = FUN_00e39540(iVar1 + 0x14,iVar4,iVar7,(float)((float10)1 - fVar8),uVar2);
        uVar6 = FUN_00e3ccd0(iVar4,iVar7,uVar2);
        FUN_00e38cd0(iVar4,iVar7,uVar2,uVar5 | uVar6);
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar3);
  }
  return;
}

// 00E3E1F0  FUN_00e3e1f0  size=162  [between]
void __fastcall FUN_00e3e1f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_c;
  
  uVar1 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  local_c = 0;
  if (0 < iVar2) {
    do {
      iVar4 = *(int *)(param_1[1] + local_c * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar8 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar8);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_00e390e0(iVar3 + 0x14,iVar4,iVar8);
        }
        uVar7 = FUN_00e3ccd0(iVar4,iVar8,uVar1);
        FUN_00e38cd0(iVar4,iVar8,uVar1,uVar6 | uVar7);
      }
      local_c = local_c + 1;
    } while (local_c < iVar2);
  }
  return;
}

// 00E3E2A0  FUN_00e3e2a0  size=191  [between]
void __fastcall FUN_00e3e2a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  int local_10;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar9 = (float10)FUN_00e25a20();
  iVar3 = param_1[2];
  local_10 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + local_10 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar8 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar8);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_00e39540(iVar1 + 0x14,iVar4,iVar8,(float)((float10)1 - fVar9),uVar2);
        }
        uVar7 = FUN_00e3ccd0(iVar4,iVar8,uVar2);
        FUN_00e38cd0(iVar4,iVar8,uVar2,uVar6 | uVar7);
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar3);
  }
  return;
}

// 00E3E400  FUN_00e3e400  size=172  [between]
void __fastcall FUN_00e3e400(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  int local_10;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar8 = (float10)FUN_00e25a20();
  iVar3 = param_1[2];
  local_10 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + local_10 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar7 = (int)*(short *)(iVar4 + 0xa0);
        uVar5 = FUN_00e39ca0(iVar1 + 0x14,iVar4,iVar7,(float)((float10)1 - fVar8),uVar2);
        uVar6 = FUN_00e3ccd0(iVar4,iVar7,uVar2);
        FUN_00e38cd0(iVar4,iVar7,uVar2,uVar5 | uVar6);
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar3);
  }
  return;
}

// 00E3E4B0  FUN_00e3e4b0  size=162  [between]
void __fastcall FUN_00e3e4b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_c;
  
  uVar1 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  local_c = 0;
  if (0 < iVar2) {
    do {
      iVar4 = *(int *)(param_1[1] + local_c * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar8 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar8);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_00e39860(iVar3 + 0x14,iVar4,iVar8);
        }
        uVar7 = FUN_00e3ccd0(iVar4,iVar8,uVar1);
        FUN_00e38cd0(iVar4,iVar8,uVar1,uVar6 | uVar7);
      }
      local_c = local_c + 1;
    } while (local_c < iVar2);
  }
  return;
}

// 00E3E560  FUN_00e3e560  size=191  [between]
void __fastcall FUN_00e3e560(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  int local_10;
  
  iVar1 = param_1[3];
  uVar2 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  fVar9 = (float10)FUN_00e25a20();
  iVar3 = param_1[2];
  local_10 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = *(int *)(param_1[1] + local_10 * 4);
      if ((*(byte *)(iVar4 + 0xa2) & 8) == 0) {
        iVar8 = (int)*(short *)(iVar4 + 0xa0);
        iVar5 = FUN_00e25aa0(iVar8);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_00e39ca0(iVar1 + 0x14,iVar4,iVar8,(float)((float10)1 - fVar9),uVar2);
        }
        uVar7 = FUN_00e3ccd0(iVar4,iVar8,uVar2);
        FUN_00e38cd0(iVar4,iVar8,uVar2,uVar6 | uVar7);
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar3);
  }
  return;
}

// 00E3E620  FUN_00e3e620  size=112  [between]
void __fastcall FUN_00e3e620(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (((*(byte *)(param_1 + 0x94) & 1) != 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    fVar2 = (float10)FUN_00e22e70();
    fVar1 = (float)fVar2;
    FUN_00e3a560(fVar1);
    if (*(int *)(param_1 + 0x2a8) != 0) {
      (**(code **)(**(int **)(param_1 + 0x2a8) + 8))(fVar1);
    }
    FUN_00e2fc30(fVar1);
    *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0x7fffffff;
  }
  return;
}

// 00E3E690  Animation::Motion::Node::getEspPilot_2  size=387  [class]
int __thiscall
Animation::Motion::Node::getEspPilot_2
          (int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,uint param_8,undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3;
  iVar3 = 0;
  if ((param_8 & 0x800) == 0) {
LAB_00e3e6cd:
    param_3 = 0;
  }
  else {
    iVar1 = FUN_00e33df0(param_3);
    if (*(int *)(iVar1 + 0x7c) != 0) {
      FUN_00dd5650(&DAT_016cce48);
      goto LAB_00e3e6cd;
    }
    param_3 = *(int *)(iVar1 + 0x84);
    *(undefined4 *)(iVar1 + 0x84) = 0;
  }
  FUN_00e35c60(param_2,iVar2,param_6);
  if (*param_1 != 0) {
    iVar3 = FUN_00e44ce0();
    if (iVar3 == 0) {
      return -1;
    }
    iVar1 = FUN_00e339b0(iVar2,param_5,param_8,param_1 + 0x46);
    if ((iVar1 != 0) &&
       (iVar1 = MotionPlayHavok::initialize(param_2,param_4,param_6,param_9,param_10), iVar1 != 0))
    {
      if ((param_8 & 0x800) != 0) {
        FUN_00e40240(param_3);
      }
      *(int *)(iVar3 + 0x90) = param_1[0x45];
      *(undefined4 *)(iVar3 + 0x94) = 0;
      FUN_00e26500(param_7,0);
      iVar1 = FUN_00e44100(iVar3);
      if ((iVar1 != 0) && (iVar1 = FUN_00e26430(), iVar1 != 0)) {
        if (iVar2 == -1) {
          iVar2 = *(int *)(iVar3 + 0x18);
        }
        else {
          iVar1 = NodeSlot::setNode(iVar2,iVar3);
          if (iVar1 == 0) goto LAB_00e3e7bb;
        }
        FUN_00e442c0(iVar3);
        return iVar2;
      }
    }
  }
LAB_00e3e7bb:
  if (param_3 != 0) {
    FUN_00e2d3c0(param_3);
  }
  if (iVar3 != 0) {
    FUN_00e33cf0(iVar3);
  }
  return -1;
}

// 00E3E820  Animation::Motion::Unit::setBlendAnimation  size=400  [class]
int __thiscall
Animation::Motion::Unit::setBlendAnimation
          (int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  if (param_4 == 0xffffffff) goto LAB_00e3e864;
  if (param_4 < 0x10) {
    puVar2 = *(undefined4 **)(param_1 + (param_4 + 2) * 0x10);
  }
  else {
    uVar1 = (int)param_4 >> 8 & 0xffff;
    if (uVar1 < DAT_01dd9488) {
      if (((*(uint *)(DAT_01dd9498 + uVar1 * 8) ^ param_4) & 0xffffff00) == 0) {
        puVar2 = *(undefined4 **)(DAT_01dd9498 + 4 + uVar1 * 8);
        goto LAB_00e3e860;
      }
    }
    else {
      FUN_00dd5650(&DAT_01663fb0);
    }
    puVar2 = (undefined4 *)0x0;
  }
LAB_00e3e860:
  if (puVar2 == (undefined4 *)0x0) {
LAB_00e3e864:
    FUN_00dd5650(&DAT_016ce088);
    return -1;
  }
  puVar5 = &DAT_01dd943c;
  (**(code **)*puVar2)(&DAT_01dd943c);
  iVar3 = FUN_00dd6d80(puVar5);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016ce030);
    return -1;
  }
  FUN_00e35c60(param_2,param_3,param_10);
  iVar3 = FUN_00e44ce0();
  if (iVar3 != 0) {
    iVar4 = FUN_00e339b0(param_3,param_9,param_11,param_1 + 0x118);
    if ((iVar4 != 0) &&
       (iVar4 = MotionPlayHavok::initialize(param_2,param_8,param_10,0,0x3f800000), iVar4 != 0)) {
      *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(param_1 + 0x114);
      *(undefined4 *)(iVar3 + 0x94) = 0;
      iVar4 = FUN_00e33a10(iVar3,param_5,param_6,param_7);
      if ((iVar4 != 0) && (iVar4 = FUN_00e26430(), iVar4 != 0)) {
        if (param_3 == -1) {
          param_3 = *(int *)(iVar3 + 0x18);
LAB_00e3e99f:
          FUN_00e442c0(iVar3);
          return param_3;
        }
        iVar4 = NodeSlot::setNode(param_3,iVar3);
        if (iVar4 != 0) goto LAB_00e3e99f;
      }
    }
    FUN_00e33cf0(iVar3);
  }
  return -1;
}

// 00E3E9D0  FUN_00e3e9d0  size=143  [between]
void __thiscall FUN_00e3e9d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = 0xbf800000;
  local_18 = 0xbf800000;
  local_20 = param_2;
  local_8 = *(undefined4 *)(*param_1 + 0x60);
  local_4 = *(undefined4 *)(*param_1 + 100);
  iVar1 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (0 < param_1[1]) {
    do {
      FUN_00e3a9e0(param_3,&local_20);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  return;
}

// 00E3EAC0  FUN_00e3eac0  size=48  [between]
undefined4 __thiscall FUN_00e3eac0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00e45e70(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return 1;
}

// 00E3EAF0  FUN_00e3eaf0  size=164  [between]
bool __thiscall FUN_00e3eaf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00e456f0(param_2,param_3);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = param_4;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar1 = FUN_00e457c0(param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_00e45890(param_2,param_3);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
        iVar1 = FUN_00e45960(param_2,param_3);
        if (iVar1 != 0) {
          iVar1 = FUN_00e3eac0(param_2,param_3);
          if (iVar1 != 0) {
            iVar1 = FUN_00e45a30(param_2,param_3);
            if (iVar1 != 0) {
              iVar1 = FUN_00e45b00(param_2,param_3);
              return iVar1 != 0;
            }
          }
        }
      }
      return false;
    }
  }
  return false;
}

// 00E3EBA0  Animation::Motion::NodeSequence::vf18  size=62  [class]
void Animation::Motion::NodeSequence::vf18(undefined4 param_1,float param_2)

{
  if (0.0 <= param_2) {
    FUN_00e3e9d0(param_1,param_2);
  }
  Node::vf18(param_1,param_2);
  return;
}

// 00E3EBE0  FUN_00e3ebe0  size=171  [callgraph]
void __fastcall FUN_00e3ebe0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_10;
  
  iVar1 = param_1[6];
  iVar2 = param_1[9];
  uVar3 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar4 = param_1[2];
  local_10 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + local_10 * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        iVar8 = (int)*(short *)(iVar5 + 0xa0);
        uVar6 = FUN_00e3c4c0(iVar5,iVar8,uVar3);
        if (iVar1 != 0) {
          uVar7 = FUN_00e3ccd0(iVar5,iVar8,uVar3);
          uVar6 = uVar6 | uVar7;
        }
        if (iVar2 != 0) {
          FUN_00e38cd0(iVar5,iVar8,uVar3,uVar6);
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar4);
  }
  return;
}

// 00E3EC90  FUN_00e3ec90  size=171  [callgraph]
void __fastcall FUN_00e3ec90(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_10;
  
  iVar1 = param_1[6];
  iVar2 = param_1[9];
  uVar3 = *(undefined4 *)(*(int *)(*param_1 + 8) + 0x330);
  iVar4 = param_1[2];
  local_10 = 0;
  if (0 < iVar4) {
    do {
      iVar5 = *(int *)(param_1[1] + local_10 * 4);
      if ((*(byte *)(iVar5 + 0xa2) & 8) == 0) {
        iVar8 = (int)*(short *)(iVar5 + 0xa0);
        uVar6 = FUN_00e3c7f0(iVar5,iVar8,uVar3);
        if (iVar1 != 0) {
          uVar7 = FUN_00e3ccd0(iVar5,iVar8,uVar3);
          uVar6 = uVar6 | uVar7;
        }
        if (iVar2 != 0) {
          FUN_00e38cd0(iVar5,iVar8,uVar3,uVar6);
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar4);
  }
  return;
}

// 00E3ED40  FUN_00e3ed40  size=234  [callgraph]
void __thiscall
FUN_00e3ed40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    local_1c = param_3;
    local_20 = param_2;
    local_18 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    local_c = param_7;
    local_8 = *(undefined4 *)(*param_1 + 0x60);
    local_4 = *(undefined4 *)(*param_1 + 100);
    if (0 < iVar2) {
      piVar3 = param_1 + 2;
      do {
        iVar1 = *piVar3;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else if (iVar1 < 0x18) {
          iVar1 = *(int *)(*param_1 + iVar1 * 4);
        }
        else {
          iVar1 = 0;
        }
        if ((*(uint *)(*(int *)(iVar1 + 0x20) + 100) & 0x1000) == 0) {
          FUN_00e3a7f0(&local_20);
          FUN_00e2e010(&local_20);
          FUN_00e2dcc0(&local_20);
          Animation::AttackTrack::update(&local_20);
          FUN_00e2e1c0(&local_20);
          FUN_00e338f0(&local_20);
        }
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

// 00E3EEE0  Animation::Motion::NodePlay::vf18  size=130  [class]
void __thiscall Animation::Motion::NodePlay::vf18(int param_1,undefined4 param_2,float param_3)

{
  uint uVar1;
  
  if (0.0 <= param_3) {
    FUN_00e3e9d0(param_2,param_3);
  }
  Node::vf18(param_2,param_3);
  uVar1 = *(uint *)(*(int *)(param_1 + 0xb8) + 100);
  if ((((uVar1 & 0x40000) == 0) && ((uVar1 & 0x10) == 0)) &&
     (!NAN(param_3) && 0.0 < param_3 != (param_3 == 0.0))) {
    param_3 = 0.0;
  }
  FUN_00e230e0(param_3);
  return;
}

// 00E3EF70  FUN_00e3ef70  size=210  [between]
void __fastcall FUN_00e3ef70(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00e34230();
    FUN_00e34e60();
    if (*(int *)(param_1 + 0x14) == 1) {
      uVar2 = FUN_00e30000();
      if ((uVar2 & 1) != 0) {
        FUN_00e38970();
      }
      FUN_00e34df0();
      (*(code *)(&PTR_FUN_018cfbb0)[uVar2])();
    }
    else {
      for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        if (((*(byte *)(iVar1 + 8) & 2) == 0) || (*(float *)(iVar1 + 0x84) != 0.0)) {
          FUN_00e38970();
          FUN_00e34df0();
          FUN_00e3ec90();
          goto LAB_00e3efef;
        }
      }
      FUN_00e34df0();
      FUN_00e3ebe0();
    }
LAB_00e3efef:
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 2;
    }
    for (iVar1 = *(int *)(param_1 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 2;
    }
    for (iVar1 = *(int *)(param_1 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 2;
    }
  }
  return;
}

// 00E3F050  FUN_00e3f050  size=371  [between]
void __fastcall FUN_00e3f050(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 local_40 [60];
  
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    return;
  }
  if (((*(byte *)(param_1 + 0x90) & 4) == 0) ||
     ((*(int *)(param_1 + 0xa0) != 0 && (*(char *)(*(int *)(param_1 + 0xa0) + 0x470) == '\0')))) {
    bVar3 = true;
    for (iVar1 = *(int *)(param_1 + 0x32c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      FUN_00e418a0();
    }
    FUN_00e3ef70();
    if ((*(byte *)(param_1 + 0x94) & 4) != 0) {
      FUN_00e35750();
    }
    if ((*(byte *)(param_1 + 0x94) & 8) != 0) {
      FUN_00e3c3b0();
    }
  }
  else {
    bVar3 = false;
  }
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) goto LAB_00e3f1a4;
  uVar2 = *(undefined4 *)(param_1 + 0xa0);
  switch(*(undefined4 *)(param_1 + 0x334)) {
  case 1:
    FUN_00e2ce30(local_40,uVar2);
    goto LAB_00e3f194;
  case 2:
    FUN_00e36d20(local_40,uVar2);
    FUN_00e26d90(local_40);
    break;
  case 3:
    FUN_00e36d20(local_40,uVar2);
    FUN_00e26df0(local_40);
    break;
  case 4:
    FUN_00e332b0(local_40,uVar2);
    break;
  default:
    FUN_00e332b0(local_40,uVar2);
LAB_00e3f194:
    FUN_00e30220(local_40);
  }
LAB_00e3f1a4:
  if (bVar3) {
    FUN_00e3a2c0(param_1 + 0x98);
  }
  return;
}

// 00E3F1E0  Animation::Motion::NodePlay::vf50  size=62  [class]
void __thiscall Animation::Motion::NodePlay::vf50(int param_1,undefined4 param_2)

{
  FUN_00e3ed40(param_2,*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x100),
               *(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x114),
               *(uint *)(param_1 + 0xf4) & 0x20);
  return;
}

// 00E3F250  FUN_00e3f250  size=150  [between]
char * FUN_00e3f250(char *param_1,undefined4 param_2)

{
  char *_Dst;
  
  _Dst = (char *)FUN_00dd2bc0();
  if (_Dst == (char *)0x0) {
    return (char *)0x0;
  }
  _memset(_Dst,0,0x10c);
  FUN_00e46170();
  *_Dst = '\0';
  _Dst[0x20] = '\0';
  _Dst[0x21] = '\0';
  _Dst[0x22] = '\0';
  _Dst[0x23] = '\0';
  FUN_00e38260();
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    _strcpy_s(_Dst,0x20,param_1);
    *(undefined4 *)(_Dst + 0x20) = param_2;
    FUN_00e384c0(param_2);
    return _Dst;
  }
  *_Dst = '\0';
  _Dst[0x20] = '\0';
  _Dst[0x21] = '\0';
  _Dst[0x22] = '\0';
  _Dst[0x23] = '\0';
  FUN_00e38390();
  FUN_00e46040();
  FUN_00dd4920(_Dst);
  return (char *)0x0;
}

// 00E3F340  Animation::Sequence::Unit::getEmptyId  size=101  [class]
int __thiscall Animation::Sequence::Unit::getEmptyId(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + iVar2 * 4) == 0) {
        if (iVar2 != -1) {
          iVar1 = FUN_00e3f250(param_2,param_3);
          if (iVar1 != 0) {
            *(int *)(param_1 + iVar2 * 4) = iVar1;
            return iVar2;
          }
        }
        return -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x18);
    return -1;
  }
  FUN_00dd5650(&DAT_016ccd4c);
  return -1;
}

// 00E3F3B0  FUN_00e3f3b0  size=118  [between]
void __fastcall FUN_00e3f3b0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int *local_c;
  int local_8;
  
  if ((*param_1 != 0) && (local_8 = param_1[1], 0 < local_8)) {
    local_c = param_1 + 2;
    do {
      iVar1 = *local_c;
      iVar2 = *param_1;
      puVar3 = *(undefined1 **)(iVar2 + iVar1 * 4);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 0x20) = 0;
        FUN_00e38390();
        FUN_00e46040();
        FUN_00dd4920(puVar3);
        *(undefined4 *)(iVar2 + iVar1 * 4) = 0;
      }
      local_c = local_c + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  param_1[1] = 0;
  return;
}

// 00E3F430  Animation::Sequence::Holder::debugCreateSequence  size=96  [class]
int __thiscall
Animation::Sequence::Holder::debugCreateSequence(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    FUN_00dd5650(&DAT_016ce138);
  }
  else {
    if (3 < param_1[1]) {
      FUN_00dd5650(&DAT_016ce0d0,4);
      return -1;
    }
    iVar2 = Unit::getEmptyId(param_2,param_3);
    if (iVar2 != -1) {
      iVar1 = param_1[1];
      param_1[1] = iVar1 + 1;
      param_1[iVar1 + 2] = iVar2;
      return iVar1;
    }
  }
  return -1;
}

// 00E3F490  FUN_00e3f490  size=130  [between]
undefined1 * FUN_00e3f490(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *_Dst;
  int iVar1;
  
  _Dst = (undefined1 *)FUN_00dd2bc0();
  if (_Dst == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  _memset(_Dst,0,0x10c);
  FUN_00e46170();
  *_Dst = 0;
  *(undefined4 *)(_Dst + 0x20) = 0;
  FUN_00e38260();
  iVar1 = cXmlBinary::cXmlBinary_26(param_1,param_2,param_3);
  if (iVar1 == 0) {
    *_Dst = 0;
    *(undefined4 *)(_Dst + 0x20) = 0;
    FUN_00e38390();
    FUN_00e46040();
    FUN_00dd4920(_Dst);
    return (undefined1 *)0x0;
  }
  return _Dst;
}

// 00E3F520  FUN_00e3f520  size=68  [between]
void __fastcall FUN_00e3f520(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    puVar1 = *(undefined1 **)(param_1 + iVar2 * 4);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 0x20) = 0;
      FUN_00e38390();
      FUN_00e46040();
      FUN_00dd4920(puVar1);
      *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  return;
}

// 00E3F570  Animation::Sequence::Unit::getEmptyId_2  size=106  [class]
int __thiscall
Animation::Sequence::Unit::getEmptyId_2
          (int param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1 + iVar2 * 4) == 0) {
        if (iVar2 != -1) {
          iVar1 = FUN_00e3f490(param_2,param_3,param_4);
          if (iVar1 != 0) {
            *(int *)(param_1 + iVar2 * 4) = iVar1;
            return iVar2;
          }
        }
        return -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x18);
    return -1;
  }
  FUN_00dd5650(&DAT_016ccd4c);
  return -1;
}

// 00E3F600  FUN_00e3f600  size=210  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e3f600(int param_1)

{
  int *piVar1;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_4;
  piVar1 = *(int **)(param_1 + 0x2a8);
  if (piVar1 != (int *)0x0) {
    FUN_00e43440();
    (**(code **)(*piVar1 + 4))();
    (**(code **)*piVar1)(1);
    _DAT_01dd93c8 = _DAT_01dd93c8 + -1;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
  }
  FUN_00e35340();
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  FUN_00e35ae0();
  FUN_00e3f520();
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0xa8),0);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    thunk_FUN_00a0c7b0(*(int *)(param_1 + 0xd4));
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xfffffffe;
  __security_check_cookie(local_4 ^ (uint)&local_4);
  return;
}

// 00E3F7F0  Animation::Sequence::Holder::registSequence  size=98  [class]
int __thiscall
Animation::Sequence::Holder::registSequence
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    FUN_00dd5650(&DAT_016ce268);
  }
  else {
    if (3 < param_1[1]) {
      FUN_00dd5650(&DAT_016ce200,4);
      return -1;
    }
    iVar2 = Unit::getEmptyId_2(param_2,param_3,param_4);
    if (iVar2 != -1) {
      iVar1 = param_1[1];
      param_1[iVar1 + 2] = iVar2;
      param_1[1] = param_1[1] + 1;
      return iVar1;
    }
  }
  return -1;
}

// 00E3F890  Animation::Motion::NodeSequence::vf10  size=22  [class]
void Animation::Motion::NodeSequence::vf10(void)

{
  FUN_00e3f3b0();
  Node::vf10();
  return;
}

// 00E3F8B0  FUN_00e3f8b0  size=138  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e3f8b0(void)

{
  int iVar1;
  
  DAT_01dd9478 = 0;
  _DAT_01dd947c = 0;
  _DAT_01dd9480 = 0;
  FUN_00dd7270();
  if (DAT_01dd9498 != 0) {
    FUN_00dd4940(DAT_01dd9498);
    DAT_01dd9498 = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(DAT_01dd93d8 + 0xc))();
  if (iVar1 != 0) {
    FUN_00e46340();
    (**(code **)(DAT_01dd93d8 + 8))();
  }
  DAT_01dd93c0 = 0;
  _DAT_01dd93c4 = 0;
  _DAT_01dd93c8 = 0;
  FUN_00dd7270();
  return;
}

// 00E3F940  FUN_00e3f940  size=306  [between]
void __thiscall FUN_00e3f940(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_8;
  if (param_2 != 0) {
    FUN_00a7c970(param_2);
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    local_8 = FUN_00a7c800();
    iVar1 = param_1 + 0x98;
    *(int *)(param_1 + 0x9c) = param_2;
    uVar2 = FUN_00a7c800();
    *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xec) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(int *)(param_1 + 0xa4) = iVar1;
    FUN_00e34180();
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    iVar3 = FUN_00e25e50();
    if (iVar3 != 0) {
      iVar3 = Animation::Motion::Unit::startup(extraout_ECX);
      if ((iVar3 != 0) && (iVar1 != 0)) {
        *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0xa0);
        iVar3 = FUN_00e403f0(iVar1);
        if (iVar3 != 0) {
          iVar3 = Animation::Control::Unit::startup(iVar1);
          iVar1 = local_8;
          if (iVar3 != 0) {
            if (local_8 != 0) {
              FUN_00a7c740(*(undefined4 *)(local_8 + 0x70));
            }
            *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xfffffffe | 0xe;
            *(int *)(param_1 + 0x338) = iVar1;
            *(undefined4 *)(param_1 + 0x334) = 0;
            __security_check_cookie(local_4 ^ (uint)&local_8);
            return;
          }
        }
      }
    }
  }
  FUN_00e3f600();
  __security_check_cookie(local_4 ^ (uint)&local_8);
  return;
}

// 00E3FA90  FUN_00e3fa90  size=37  [between]
undefined4 FUN_00e3fa90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Animation::Motion::Unit::getSeqNode(param_3,1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = Animation::Sequence::Holder::registSequence();
  return uVar2;
}

// 00E3FAC0  Animation::Motion::NodePlay::vf10  size=79  [class]
void __fastcall Animation::Motion::NodePlay::vf10(int param_1)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0xb0) & 1) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xb8) + 100);
    if ((uVar1 & 0x10) == 0) {
      uVar1 = uVar1 >> 0x12 & 1;
    }
    else {
      uVar1 = 2;
    }
    FUN_00e34d10(param_1 + 0xa8,uVar1);
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xfffffffe;
  }
  FUN_00e3f3b0();
  Node::vf10();
  return;
}

// 00E3FB10  FUN_00e3fb10  size=319  [between]
undefined4 __thiscall FUN_00e3fb10(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_00a7c970(param_2);
  iVar1 = FUN_00a7c800();
  uVar2 = *(uint *)(iVar1 + 0x4b0);
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  uVar2 = uVar2 & 0xffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[3] = uVar2;
  param_1[4] = uVar2;
  FUN_009f8ea0(param_1 + 5,0x10,uVar2,0);
  param_1[9] = *param_3;
  param_1[10] = param_3[1];
  iVar1 = FUN_00de4550("_rag.hkx",0);
  if (iVar1 == 0) {
    iVar1 = FUN_00de4550("_rig.hkx",0);
  }
  iVar1 = FUN_00e3f940(param_2,iVar1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = FUN_00de36a0(0,&DAT_016ce2c4,0);
  uVar4 = FUN_00de3cf0(uVar3);
  iVar1 = FUN_00de3ee0(uVar3);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  FUN_00e2c3e0(uVar4);
  uVar3 = FUN_00de36a0(0,&DAT_016ce2c0,0);
  iVar1 = FUN_00de3cf0(uVar3);
  iVar5 = FUN_00de3ee0(uVar3);
  if (iVar5 == 0) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    param_1[0xa7] = iVar1;
    param_1[0xa8] = iVar1 + 0xc;
    return 1;
  }
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  return 1;
}

// 00E3FC50  Animation::Motion::Unit::getSeqNode_2  size=310  [class]
void __thiscall Animation::Motion::Unit::getSeqNode_2(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  char *local_2c;
  int local_28;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_2c;
  local_2c = param_2;
  uVar6 = 0;
  local_28 = param_1;
  do {
    iVar5 = local_28;
    _strcpy_s(local_24,0x20,local_2c);
    _strcat_s(local_24,0x20,*(char **)((int)&PTR_DAT_01885e40 + uVar6));
    iVar1 = FUN_00e356a0(local_24);
    if (iVar1 == 0) break;
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      if (param_3 != 0xffffffff) {
        if (param_3 < 0x10) {
          puVar4 = *(undefined4 **)(iVar5 + 0x114 + param_3 * 0x10);
        }
        else {
          uVar3 = (int)param_3 >> 8 & 0xffff;
          if (uVar3 < DAT_01dd9488) {
            if (((*(uint *)(DAT_01dd9498 + uVar3 * 8) ^ param_3) & 0xffffff00) == 0) {
              puVar4 = *(undefined4 **)(DAT_01dd9498 + 4 + uVar3 * 8);
              goto LAB_00e3fd08;
            }
          }
          else {
            FUN_00dd5650(&DAT_01663fb0);
          }
          puVar4 = (undefined4 *)0x0;
        }
LAB_00e3fd08:
        if (puVar4 != (undefined4 *)0x0) {
          puVar7 = &DAT_01dd9450;
          (**(code **)*puVar4)(&DAT_01dd9450);
          iVar5 = FUN_00dd6d80(puVar7);
          if (iVar5 == 0) {
            FUN_00dd5650(&DAT_016cddd8);
          }
          else {
            Sequence::Holder::registSequence(iVar1,local_24,puVar4);
          }
          goto LAB_00e3fd6d;
        }
      }
      FUN_00dd5650(&DAT_016cde28);
    }
LAB_00e3fd6d:
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x10);
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}

// 00E3FD90  Animation::Unit::setAnimation  size=264  [class]
void __thiscall
Animation::Unit::setAnimation
          (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,uint param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  iVar1 = FUN_00e26e90();
  if (iVar1 != 0) {
    if (param_2 != 0) {
      if ((*(byte *)(param_1 + 0x90) & 2) != 0) {
        param_7 = param_7 | 0x100000;
      }
      uVar2 = Motion::Node::getEspPilot_2
                        (param_1 + 0x98,param_4,param_2,param_3,param_5,param_6,param_7,param_8,
                         param_9);
      if ((param_7 & 0x400) == 0) {
        Motion::Unit::getSeqNode_2(param_3,uVar2);
      }
      __security_check_cookie(local_4 ^ (uint)local_14);
      return;
    }
    iVar1 = FUN_00a7c8a0();
    if (iVar1 == 0) {
      FUN_0099a460(local_14,&DAT_016ce30c);
    }
    else {
      FUN_009f8ea0(local_14,0x10,*(undefined4 *)(iVar1 + 0x4b0),0);
    }
    FUN_00dd5650(&DAT_016ce2c8,local_14,param_3);
  }
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E3FEA0  Animation::Unit::setBlendAnimation  size=229  [class]
void __thiscall
Animation::Unit::setBlendAnimation
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,uint param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  iVar1 = FUN_00e26e90();
  if (iVar1 != 0) {
    if (param_7 != 0) {
      if ((*(byte *)(param_1 + 0x90) & 2) != 0) {
        param_10 = param_10 | 0x100000;
      }
      uVar2 = Motion::Unit::setBlendAnimation
                        (param_1 + 0x98,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10);
      if ((param_10 & 0x400) == 0) {
        Motion::Unit::getSeqNode_2(param_8,uVar2);
      }
      __security_check_cookie(local_4 ^ (uint)local_14);
      return;
    }
    iVar1 = FUN_00a7c8a0();
    FUN_009f8ea0(local_14,0x10,*(undefined4 *)(iVar1 + 0x4b0),0);
    FUN_00dd5650(&DAT_016ce318,local_14,param_8);
  }
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E3FF90  FUN_00e3ff90  size=91  [between]
void __thiscall
FUN_00e3ff90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e355e0(param_2);
  if ((*(byte *)(param_1 + 0x90) & 2) != 0) {
    param_6 = param_6 | 0x100000;
  }
  Animation::Unit::setAnimation(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// 00E40240  FUN_00e40240  size=42  [between]
void __thiscall FUN_00e40240(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 0x84) != 0)) {
    FUN_00dd5650(&DAT_016cc9b8);
    return;
  }
  *(int *)(param_1 + 0x84) = param_2;
  return;
}

// 00E402F0  FUN_00e402f0  size=86  [between]
undefined4 * __fastcall FUN_00e402f0(undefined4 *param_1)

{
  *param_1 = 0;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  param_1[0x10c] = 0;
  return param_1;
}

// 00E403F0  FUN_00e403f0  size=24  [between]
undefined4 __thiscall FUN_00e403f0(undefined4 *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(param_2 + 8);
  return 1;
}

// 00E405F0  FUN_00e405f0  size=15  [between]
undefined4 __fastcall FUN_00e405f0(undefined4 param_1)

{
  FUN_00de3530();
  return param_1;
}

// 00E40670  FUN_00e40670  size=50  [between]
undefined4 __thiscall FUN_00e40670(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x330) == 0) {
    return 0;
  }
  uVar1 = FUN_00a06de0(param_3);
  uVar1 = FUN_00a06e70(param_2,uVar1);
  return uVar1;
}

// 00E40750  FUN_00e40750  size=120  [between]
void __thiscall FUN_00e40750(int param_1,float param_2)

{
  float fVar1;
  
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0x74) = 1;
switchD_00e40775_caseD_3:
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x74)) {
  case 0:
    *(undefined4 *)(param_1 + 0x78) = 0;
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x7c);
    if (fVar1 < param_2 != (fVar1 == param_2)) {
      return;
    }
    break;
  case 3:
  case 5:
  case 6:
    goto switchD_00e40775_caseD_3;
  }
  if (param_2 <= 0.0) {
    *(undefined4 *)(param_1 + 0x74) = 3;
    *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x74) = 2;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(float *)(param_1 + 0x80) = param_2;
  return;
}

// 00E40AA0  FUN_00e40aa0  size=79  [between]
void __thiscall FUN_00e40aa0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  return;
}

// 00E40B20  FUN_00e40b20  size=37  [between]
void __fastcall FUN_00e40b20(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00dd7270();
    return;
  }
  return;
}

// 00E41350  FUN_00e41350  size=142  [between]
void FUN_00e41350(undefined4 *param_1,int param_2,code *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_4;
  
  if (param_2 < 2) {
    return;
  }
  iVar3 = (int)((ulonglong)((longlong)(param_2 * 10) * 0x4ec4ec4f) >> 0x20);
  do {
    iVar3 = (iVar3 >> 2) - (iVar3 >> 0x1f);
    while( true ) {
      local_4 = 0;
      if (iVar3 < param_2) {
        puVar6 = param_1 + iVar3;
        iVar4 = iVar3;
        puVar5 = param_1;
        do {
          iVar2 = (*param_3)(*puVar5,*puVar6);
          if (0 < iVar2) {
            uVar1 = *puVar5;
            local_4 = local_4 + 1;
            *puVar5 = *puVar6;
            *puVar6 = uVar1;
          }
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar4 < param_2);
      }
      if (iVar3 != 1) break;
      if (local_4 == 0) {
        return;
      }
    }
    iVar3 = (int)((ulonglong)((longlong)(iVar3 * 10) * 0x4ec4ec4f) >> 0x20);
  } while( true );
}

// 00E415E0  FUN_00e415e0  size=72  [between]
undefined4 __thiscall FUN_00e415e0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0xc) == 0)) {
    *(int *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x10) != 0) {
      *(int *)(*(int *)(param_2 + 0x10) + 0x14) = param_1 + -4;
    }
    *(int *)(param_2 + 0x10) = param_1 + -4;
    return 1;
  }
  FUN_00dd5650(&DAT_016ccf54);
  return 0;
}

// 00E41770  FUN_00e41770  size=107  [between]
void __thiscall FUN_00e41770(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((int)param_1 + 3) = *(undefined1 *)((int)param_2 + 3);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  return;
}

// 00E41880  FUN_00e41880  size=5  [between]
void __fastcall FUN_00e41880(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e41882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

// 00E41890  FUN_00e41890  size=5  [between]
void __fastcall FUN_00e41890(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e41892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}

// 00E418A0  FUN_00e418a0  size=5  [between]
void __fastcall FUN_00e418a0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e418a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}

// 00E41BA0  Animation::Motion::NodeSlot::NodeHandler::vf00  size=31  [class]
undefined4 * __thiscall
Animation::Motion::NodeSlot::NodeHandler::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = NodeListener::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E41C10  Animation::Motion::Unit::NodeHandler::vf00  size=31  [class]
undefined4 * __thiscall Animation::Motion::Unit::NodeHandler::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = NodeListener::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E41CA0  Animation::PostControl::Work::vf08  size=3  [class]
void Animation::PostControl::Work::vf08(void)

{
  return;
}

// 00E41CB0  Animation::PostControl::Work::vf0C  size=1  [class]
void Animation::PostControl::Work::vf0C(void)

{
  return;
}

// 00E41CC0  Animation::PostControl::Work::vf10  size=1  [class]
void Animation::PostControl::Work::vf10(void)

{
  return;
}

// 00E41CE0  Animation::PostControl::Work::vf00  size=31  [class]
undefined4 * __thiscall Animation::PostControl::Work::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E41D00  FUN_00e41d00  size=698  [between]
undefined4 __thiscall FUN_00e41d00(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float *pfVar4;
  float *pfStack_6c;
  int *piStack_68;
  float *pfStack_64;
  int *piStack_60;
  float *pfStack_5c;
  int *piStack_58;
  float *pfStack_54;
  int *piStack_50;
  float *pfStack_4c;
  int *piStack_48;
  float *pfStack_44;
  int *piStack_40;
  float *pfStack_3c;
  int *piStack_38;
  float *pfStack_34;
  char *pcStack_30;
  float *pfStack_2c;
  int *piStack_28;
  float *pfStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  param_1[1] = 0;
  param_1[8] = 0x3f800000;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  *param_1 = -1;
  param_1[4] = -1;
  param_1[6] = -1;
  uStack_18 = param_4;
  uStack_1c = param_3;
  pcStack_20 = (char *)0xe41d5e;
  pfVar1 = (float *)(**(code **)(*param_2 + 0x14))();
  pcStack_20 = "LayerFlag";
  piStack_28 = (int *)0xe41d72;
  pfStack_24 = pfVar1;
  pfStack_2c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_2c != (float *)0xffffffff) {
    pcStack_30 = (char *)0xe41d85;
    piStack_28 = param_1;
    (**(code **)(*param_2 + 0xe8))();
  }
  piStack_28 = (int *)0x16cd028;
  pcStack_30 = (char *)0xe41d97;
  pfStack_2c = pfVar1;
  pfStack_34 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_34 != (float *)0xffffffff) {
    pcStack_30 = (char *)uStack_1c;
    piStack_38 = (int *)0xe41dae;
    (**(code **)(*param_2 + 0xd4))();
  }
  pcStack_30 = "SeqFlag";
  piStack_38 = (int *)0xe41dc0;
  pfStack_34 = pfVar1;
  pfStack_3c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_3c != (float *)0xffffffff) {
    piStack_40 = (int *)0xe41dd3;
    piStack_38 = param_1 + 2;
    (**(code **)(*param_2 + 0xec))();
  }
  piStack_38 = (int *)0x16cd014;
  piStack_40 = (int *)0xe41de5;
  pfStack_3c = pfVar1;
  pfStack_44 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_44 != (float *)0xffffffff) {
    piStack_40 = param_1 + 3;
    piStack_48 = (int *)0xe41dfb;
    (**(code **)(*param_2 + 0xd8))();
  }
  piStack_40 = (int *)0x16cd008;
  piStack_48 = (int *)0xe41e0d;
  pfStack_44 = pfVar1;
  pfStack_4c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_4c != (float *)0xffffffff) {
    piStack_48 = param_1 + 4;
    piStack_50 = (int *)0xe41e23;
    (**(code **)(*param_2 + 0xd8))();
  }
  piStack_48 = (int *)0x16cd000;
  piStack_50 = (int *)0xe41e35;
  pfStack_4c = pfVar1;
  pfStack_54 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_54 != (float *)0xffffffff) {
    piStack_50 = param_1 + 5;
    piStack_58 = (int *)0xe41e4b;
    (**(code **)(*param_2 + 0xe8))();
  }
  piStack_50 = (int *)0x165147c;
  piStack_58 = (int *)0xe41e5d;
  pfStack_54 = pfVar1;
  pfStack_5c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_5c != (float *)0xffffffff) {
    piStack_58 = param_1 + 6;
    piStack_60 = (int *)0xe41e73;
    (**(code **)(*param_2 + 0xd8))();
  }
  piStack_58 = (int *)0x16ccff4;
  piStack_60 = (int *)0xe41e85;
  pfStack_5c = pfVar1;
  pfStack_64 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_64 != (float *)0xffffffff) {
    piStack_60 = param_1 + 7;
    piStack_68 = (int *)0xe41e9b;
    (**(code **)(*param_2 + 0xe8))();
  }
  piStack_60 = (int *)0x16ccfec;
  piStack_68 = (int *)0xe41ead;
  pfStack_64 = pfVar1;
  pfStack_6c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_6c != (float *)0xffffffff) {
    piStack_68 = param_1 + 8;
    (**(code **)(*param_2 + 0xd4))();
  }
  piStack_68 = (int *)0x16ccfe4;
  pfStack_6c = pfVar1;
  iVar2 = (**(code **)(*param_2 + 0x9c))();
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar2,param_1 + 9);
  }
  pfVar4 = pfVar1;
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"OffsetY");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar2,param_1 + 10);
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"OffsetZ");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar2,param_1 + 0xb);
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"LayerNo");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar2,&pfStack_6c);
    if (-1 < (char)(byte)pfStack_6c) {
      *param_1 = 1 << ((byte)pfStack_6c & 0x1f);
    }
  }
  pfStack_6c = (float *)(*pfVar4 * 30720.0 + 0.5);
  fVar3 = (float10)FUN_00fddce0((double)(float)pfStack_6c);
  *pfVar4 = (float)fVar3 / 30720.0;
  return 1;
}

// 00E41FC0  FUN_00e41fc0  size=436  [between]
undefined4 __thiscall FUN_00e41fc0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float *pfVar4;
  float *pfStack_3c;
  int *piStack_38;
  float *pfStack_34;
  char *pcStack_30;
  float *pfStack_2c;
  int *piStack_28;
  float *pfStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0x10] = 0;
  *param_1 = -1;
  param_1[0xf] = -1;
  uStack_18 = param_4;
  uStack_1c = param_3;
  pcStack_20 = (char *)0xe42006;
  pfVar1 = (float *)(**(code **)(*param_2 + 0x14))();
  pcStack_20 = "LayerFlag";
  piStack_28 = (int *)0xe4201a;
  pfStack_24 = pfVar1;
  pfStack_2c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_2c != (float *)0xffffffff) {
    pcStack_30 = (char *)0xe4202d;
    piStack_28 = param_1;
    (**(code **)(*param_2 + 0xe8))();
  }
  piStack_28 = (int *)0x16cd028;
  pcStack_30 = (char *)0xe4203f;
  pfStack_2c = pfVar1;
  pfStack_34 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_34 != (float *)0xffffffff) {
    pcStack_30 = (char *)uStack_1c;
    piStack_38 = (int *)0xe42056;
    (**(code **)(*param_2 + 0xd4))();
  }
  pcStack_30 = "SeqFlag";
  piStack_38 = (int *)0xe42068;
  pfStack_34 = pfVar1;
  pfStack_3c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_3c != (float *)0xffffffff) {
    piStack_38 = param_1 + 2;
    (**(code **)(*param_2 + 0xec))();
  }
  piStack_38 = (int *)0x1658ee4;
  pfStack_3c = pfVar1;
  iVar2 = (**(code **)(*param_2 + 0x9c))();
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xa4))(iVar2,param_1 + 3,0x30);
  }
  pfVar4 = pfVar1;
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"PartsNo");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar2,param_1 + 0xf);
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,&DAT_016514a4);
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar2,param_1 + 0x10);
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"LayerNo");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar2,&pfStack_3c);
    if (-1 < (char)(byte)pfStack_3c) {
      *param_1 = 1 << ((byte)pfStack_3c & 0x1f);
    }
  }
  pfStack_3c = (float *)(*pfVar4 * 30720.0 + 0.5);
  fVar3 = (float10)FUN_00fddce0((double)(float)pfStack_3c);
  *pfVar4 = (float)fVar3 / 30720.0;
  return 1;
}

// 00E42180  FUN_00e42180  size=481  [between]
undefined4 __thiscall FUN_00e42180(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float *pfVar4;
  float *pfStack_44;
  int *piStack_40;
  float *pfStack_3c;
  int *piStack_38;
  float *pfStack_34;
  char *pcStack_30;
  float *pfStack_2c;
  int *piStack_28;
  float *pfStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = -1;
  param_1[6] = 0;
  param_1[7] = 0;
  uStack_18 = param_4;
  uStack_1c = param_3;
  pcStack_20 = (char *)0xe421cb;
  pfVar1 = (float *)(**(code **)(*param_2 + 0x14))();
  pcStack_20 = "LayerFlag";
  piStack_28 = (int *)0xe421df;
  pfStack_24 = pfVar1;
  pfStack_2c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_2c != (float *)0xffffffff) {
    pcStack_30 = (char *)0xe421f2;
    piStack_28 = param_1;
    (**(code **)(*param_2 + 0xe8))();
  }
  piStack_28 = (int *)0x16cd028;
  pcStack_30 = (char *)0xe42204;
  pfStack_2c = pfVar1;
  pfStack_34 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_34 != (float *)0xffffffff) {
    pcStack_30 = (char *)uStack_1c;
    piStack_38 = (int *)0xe4221b;
    (**(code **)(*param_2 + 0xd4))();
  }
  pcStack_30 = "EndTime";
  piStack_38 = (int *)0xe4222d;
  pfStack_34 = pfVar1;
  pfStack_3c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_3c != (float *)0xffffffff) {
    piStack_40 = (int *)0xe42240;
    piStack_38 = param_1 + 2;
    (**(code **)(*param_2 + 0xd4))();
  }
  piStack_38 = (int *)0x16cd058;
  piStack_40 = (int *)0xe42252;
  pfStack_3c = pfVar1;
  pfStack_44 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_44 != (float *)0xffffffff) {
    piStack_40 = param_1 + 3;
    (**(code **)(*param_2 + 0xec))();
  }
  piStack_40 = (int *)0x16cd050;
  pfStack_44 = pfVar1;
  iVar2 = (**(code **)(*param_2 + 0x9c))();
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar2,param_1 + 4);
  }
  pfVar4 = pfVar1;
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"Flag1");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar2,param_1 + 5);
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"FreeArg");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0x108))();
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"LayerNo");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar2,&pfStack_44);
    if (-1 < (char)(byte)pfStack_44) {
      *param_1 = 1 << ((byte)pfStack_44 & 0x1f);
    }
  }
  pfStack_44 = (float *)(*pfVar4 * 30720.0 + 0.5);
  fVar3 = (float10)FUN_00fddce0((double)(float)pfStack_44);
  *pfVar4 = (float)fVar3 / 30720.0;
  return 1;
}

// 00E42370  FUN_00e42370  size=389  [between]
undefined4 __thiscall FUN_00e42370(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float *pfVar4;
  float *pfStack_34;
  char *pcStack_30;
  float *pfStack_2c;
  int *piStack_28;
  float *pfStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0x3f800000;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = -1;
  uStack_18 = param_4;
  uStack_1c = param_3;
  pcStack_20 = (char *)0xe423b1;
  pfVar1 = (float *)(**(code **)(*param_2 + 0x14))();
  pcStack_20 = "LayerFlag";
  piStack_28 = (int *)0xe423c5;
  pfStack_24 = pfVar1;
  pfStack_2c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_2c != (float *)0xffffffff) {
    pcStack_30 = (char *)0xe423d8;
    piStack_28 = param_1;
    (**(code **)(*param_2 + 0xe8))();
  }
  piStack_28 = (int *)0x16cd028;
  pcStack_30 = (char *)0xe423ea;
  pfStack_2c = pfVar1;
  pfStack_34 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_34 != (float *)0xffffffff) {
    pcStack_30 = (char *)uStack_1c;
    (**(code **)(*param_2 + 0xd4))();
  }
  pcStack_30 = "EndTime";
  pfStack_34 = pfVar1;
  iVar2 = (**(code **)(*param_2 + 0x9c))();
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar2,param_1 + 2);
  }
  pfVar4 = pfVar1;
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"SeqFlag");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar2,param_1 + 3);
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"Speed");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar2,param_1 + 4);
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"LayerNo");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar2,&pfStack_34);
    if (-1 < (char)(byte)pfStack_34) {
      *param_1 = 1 << ((byte)pfStack_34 & 0x1f);
    }
  }
  pfStack_34 = (float *)(*pfVar4 * 30720.0 + 0.5);
  fVar3 = (float10)FUN_00fddce0((double)(float)pfStack_34);
  *pfVar4 = (float)fVar3 / 30720.0;
  return 1;
}

// 00E42550  FUN_00e42550  size=711  [between]
undefined4 __thiscall FUN_00e42550(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float *pfVar5;
  float *pfStack_6c;
  char *pcStack_68;
  float *pfStack_64;
  int *piStack_60;
  float *pfStack_5c;
  char *pcStack_58;
  float *pfStack_54;
  undefined *puStack_50;
  float *pfStack_4c;
  int *piStack_48;
  float *pfStack_44;
  int *piStack_40;
  float *pfStack_3c;
  int *piStack_38;
  float *pfStack_34;
  char *pcStack_30;
  float *pfStack_2c;
  int *piStack_28;
  float *pfStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  param_1[1] = 0;
  *param_1 = -1;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0xffff;
  param_1[7] = 0;
  param_1[8] = 0;
  iVar3 = *param_2;
  param_1[9] = 0;
  pcVar1 = *(code **)(iVar3 + 0x14);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uStack_18 = param_4;
  uStack_1c = param_3;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  pcStack_20 = (char *)0xe425bb;
  pfVar2 = (float *)(*pcVar1)();
  pcStack_20 = "LayerFlag";
  piStack_28 = (int *)0xe425cf;
  pfStack_24 = pfVar2;
  pfStack_2c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_2c != (float *)0xffffffff) {
    pcStack_30 = (char *)0xe425e2;
    piStack_28 = param_1;
    (**(code **)(*param_2 + 0xe8))();
  }
  piStack_28 = (int *)0x16cd028;
  pcStack_30 = (char *)0xe425f4;
  pfStack_2c = pfVar2;
  pfStack_34 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_34 != (float *)0xffffffff) {
    pcStack_30 = (char *)uStack_1c;
    piStack_38 = (int *)0xe4260b;
    (**(code **)(*param_2 + 0xd4))();
  }
  pcStack_30 = "EndTime";
  piStack_38 = (int *)0xe4261d;
  pfStack_34 = pfVar2;
  pfStack_3c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_3c != (float *)0xffffffff) {
    piStack_38 = param_1 + 2;
    piStack_40 = (int *)0xe42633;
    (**(code **)(*param_2 + 0xd4))();
  }
  piStack_38 = (int *)0x16cd020;
  piStack_40 = (int *)0xe42645;
  pfStack_3c = pfVar2;
  pfStack_44 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_44 != (float *)0xffffffff) {
    piStack_40 = param_1 + 3;
    piStack_48 = (int *)0xe4265b;
    (**(code **)(*param_2 + 0xec))();
  }
  piStack_40 = (int *)&DAT_01655cd0;
  piStack_48 = (int *)0xe4266d;
  pfStack_44 = pfVar2;
  pfStack_4c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_4c != (float *)0xffffffff) {
    piStack_48 = param_1 + 4;
    puStack_50 = (undefined *)0xe42683;
    (**(code **)(*param_2 + 0xec))();
  }
  piStack_48 = (int *)0x16cd074;
  puStack_50 = (undefined *)0xe42695;
  pfStack_4c = pfVar2;
  pfStack_54 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_54 != (float *)0xffffffff) {
    puStack_50 = (undefined *)((int)param_1 + 0x12);
    pcStack_58 = (char *)0xe426ab;
    (**(code **)(*param_2 + 0xf0))();
  }
  puStack_50 = &DAT_016cd070;
  pcStack_58 = (char *)0xe426bd;
  pfStack_54 = pfVar2;
  pfStack_5c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_5c != (float *)0xffffffff) {
    pcStack_58 = (char *)((int)param_1 + 0x13);
    piStack_60 = (int *)0xe426d3;
    (**(code **)(*param_2 + 0xf0))();
  }
  pcStack_58 = "Power";
  piStack_60 = (int *)0xe426e5;
  pfStack_5c = pfVar2;
  pfStack_64 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_64 != (float *)0xffffffff) {
    piStack_60 = param_1 + 5;
    pcStack_68 = (char *)0xe426fb;
    (**(code **)(*param_2 + 0xec))();
  }
  piStack_60 = (int *)0x165147c;
  pcStack_68 = (char *)0xe4270d;
  pfStack_64 = pfVar2;
  pfStack_6c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_6c != (float *)0xffffffff) {
    pcStack_68 = (char *)((int)param_1 + 0x16);
    (**(code **)(*param_2 + 0xdc))();
  }
  pcStack_68 = "Offset";
  pfStack_6c = pfVar2;
  iVar3 = (**(code **)(*param_2 + 0x9c))();
  if (iVar3 != -1) {
    (**(code **)(*param_2 + 0xc4))(iVar3,param_1 + 7);
  }
  pfVar5 = pfVar2;
  iVar3 = (**(code **)(*param_2 + 0x9c))(pfVar2,&DAT_016a35a0);
  if (iVar3 != -1) {
    (**(code **)(*param_2 + 0xc4))(iVar3,param_1 + 10);
  }
  iVar3 = (**(code **)(*param_2 + 0x9c))(pfVar2,&DAT_016a3598);
  if (iVar3 != -1) {
    (**(code **)(*param_2 + 0xc4))(iVar3,param_1 + 0xd);
  }
  iVar3 = (**(code **)(*param_2 + 0x9c))(pfVar2,"LayerNo");
  if (iVar3 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar3,&pfStack_6c);
    if (-1 < (char)(byte)pfStack_6c) {
      *param_1 = 1 << ((byte)pfStack_6c & 0x1f);
    }
  }
  pfStack_6c = (float *)(*pfVar5 * 30720.0 + 0.5);
  fVar4 = (float10)FUN_00fddce0((double)(float)pfStack_6c);
  *pfVar5 = (float)fVar4 / 30720.0;
  return 1;
}

// 00E42820  FUN_00e42820  size=524  [between]
undefined4 __thiscall FUN_00e42820(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float *pfVar4;
  float *pfStack_4c;
  int *piStack_48;
  float *pfStack_44;
  char *pcStack_40;
  float *pfStack_3c;
  int *piStack_38;
  float *pfStack_34;
  char *pcStack_30;
  float *pfStack_2c;
  int *piStack_28;
  float *pfStack_24;
  char *pcStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  param_1[1] = 0;
  param_1[3] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 10) = 10;
  param_1[6] = 0;
  *param_1 = -1;
  uStack_18 = param_4;
  uStack_1c = param_3;
  pcStack_20 = (char *)0xe42870;
  pfVar1 = (float *)(**(code **)(*param_2 + 0x14))();
  pcStack_20 = "LayerFlag";
  piStack_28 = (int *)0xe42884;
  pfStack_24 = pfVar1;
  pfStack_2c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_2c != (float *)0xffffffff) {
    pcStack_30 = (char *)0xe42897;
    piStack_28 = param_1;
    (**(code **)(*param_2 + 0xe8))();
  }
  piStack_28 = (int *)0x16cd028;
  pcStack_30 = (char *)0xe428a9;
  pfStack_2c = pfVar1;
  pfStack_34 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_34 != (float *)0xffffffff) {
    pcStack_30 = (char *)uStack_1c;
    piStack_38 = (int *)0xe428c0;
    (**(code **)(*param_2 + 0xd4))();
  }
  pcStack_30 = "SeqFlag";
  piStack_38 = (int *)0xe428d2;
  pfStack_34 = pfVar1;
  pfStack_3c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_3c != (float *)0xffffffff) {
    pcStack_40 = (char *)0xe428e5;
    piStack_38 = param_1 + 2;
    (**(code **)(*param_2 + 0xec))();
  }
  piStack_38 = (int *)0x16cd0bc;
  pcStack_40 = (char *)0xe428f7;
  pfStack_3c = pfVar1;
  pfStack_44 = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_44 != (float *)0xffffffff) {
    pcStack_40 = (char *)((int)param_1 + 10);
    piStack_48 = (int *)0xe4290d;
    (**(code **)(*param_2 + 0xdc))();
  }
  pcStack_40 = "LeftForceBegin";
  piStack_48 = (int *)0xe4291f;
  pfStack_44 = pfVar1;
  pfStack_4c = (float *)(**(code **)(*param_2 + 0x9c))();
  if (pfStack_4c != (float *)0xffffffff) {
    piStack_48 = param_1 + 3;
    (**(code **)(*param_2 + 0xd4))();
  }
  piStack_48 = (int *)0x16cd09c;
  pfStack_4c = pfVar1;
  iVar2 = (**(code **)(*param_2 + 0x9c))();
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar2,param_1 + 4);
  }
  pfVar4 = pfVar1;
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"RightForceBegin");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar2,param_1 + 5);
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"RightForceEnd");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar2,param_1 + 6);
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(pfVar1,"LayerNo");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar2,&pfStack_4c);
    if (-1 < (char)(byte)pfStack_4c) {
      *param_1 = 1 << ((byte)pfStack_4c & 0x1f);
    }
  }
  pfStack_4c = (float *)(*pfVar4 * 30720.0 + 0.5);
  fVar3 = (float10)FUN_00fddce0((double)(float)pfStack_4c);
  *pfVar4 = (float)fVar3 / 30720.0;
  return 1;
}

// 00E42A30  FUN_00e42a30  size=362  [between]
undefined4 __thiscall
FUN_00e42a30(undefined4 *param_1,int *param_2,float *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  puVar3 = param_1 + 4;
  *param_1 = 0xffffffff;
  iVar1 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar1 + 10) = 0;
    *puVar3 = 0;
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 < 4);
  uVar2 = (**(code **)(*param_2 + 0x14))(param_3,param_4);
  pcVar6 = "LayerFlag";
  iVar1 = (**(code **)(*param_2 + 0x9c))(uVar2,"LayerFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1);
  }
  uVar5 = uVar2;
  iVar1 = (**(code **)(*param_2 + 0x9c))(uVar2,"StartTime");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_3);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(uVar2,"SeqFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,pcVar6);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(uVar2,"MeshAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x114))();
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(uVar2,"MeshNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x100))(iVar1,uVar5,4);
  }
  fVar4 = (float10)FUN_00fddce0((double)(*param_3 * 30720.0 + 0.5));
  *param_3 = (float)fVar4 / 30720.0;
  return 1;
}

// 00E42BF0  Animation::Control::NodeSlot::NodeHandler::vf00  size=31  [class]
undefined4 * __thiscall
Animation::Control::NodeSlot::NodeHandler::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = NodeListener::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E42CB0  FUN_00e42cb0  size=101  [between]
void __fastcall FUN_00e42cb0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x16] = 0xbf800000;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xbf800000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  return;
}

// 00E42D20  FUN_00e42d20  size=30  [between]
void __fastcall FUN_00e42d20(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

// 00E42DF0  FUN_00e42df0  size=30  [between]
undefined4 __thiscall FUN_00e42df0(undefined4 param_1,byte param_2)

{
  FUN_00e2cfe0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E42E10  Animation::Motion::Node::vf00  size=6  [class]
undefined * Animation::Motion::Node::vf00(void)

{
  return &DAT_01dd9438;
}

// 00E42E20  FUN_00e42e20  size=43  [between]
void __fastcall FUN_00e42e20(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00dd7270();
  }
  FUN_00dd7270();
  return;
}

// 00E42E50  FUN_00e42e50  size=129  [between]
undefined4 __thiscall FUN_00e42e50(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1[4] != 0) {
    return 0;
  }
  if (param_2 < 0x10000) {
    puVar2 = (undefined4 *)
             FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)param_2 * 8),param_3);
    param_1[4] = (uint)puVar2;
    uVar1 = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0xffffffff;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
      }
      *param_1 = param_2;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_00dd7240();
      return 1;
    }
  }
  return 0;
}

// 00E42EE0  FUN_00e42ee0  size=141  [between]
void __thiscall FUN_00e42ee0(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1[0xc] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  if ((param_2 & 0xffffff00) != 0xffffff00) {
    uVar2 = (int)param_2 >> 8 & 0xffff;
    if (uVar2 < *param_1) {
      puVar1 = (uint *)(param_1[4] + uVar2 * 8);
      if ((*puVar1 & 0xffffff00) == 0xffffff00) {
        puVar3 = &DAT_01663f4c;
      }
      else {
        if ((*puVar1 & 0xffffff00) == (param_2 & 0xffffff00)) {
          *puVar1 = 0xffffffff;
          puVar1[1] = 0;
          param_1[1] = param_1[1] - 1;
          goto LAB_00e42f5b;
        }
        puVar3 = &DAT_01663f18;
      }
    }
    else {
      puVar3 = &DAT_01663f7c;
    }
    FUN_00dd5650(puVar3);
  }
LAB_00e42f5b:
  if (param_1[0xc] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  return;
}

// 00E431E0  FUN_00e431e0  size=105  [between]
void __fastcall FUN_00e431e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(*(int *)(iVar1 + 8) + 4);
    }
    if (piVar2 == param_1) {
      *(int *)(iVar1 + 8) = param_1[4];
    }
    iVar1 = *(int *)(*param_1 + 0xc);
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(iVar1 + 4);
    }
    if (piVar2 == param_1) {
      *(int *)(*param_1 + 0xc) = param_1[3];
    }
    *param_1 = 0;
  }
  if (param_1[3] != 0) {
    *(int *)(param_1[3] + 0x14) = param_1[4];
  }
  if (param_1[4] != 0) {
    *(int *)(param_1[4] + 0x10) = param_1[3];
  }
  param_1[4] = 0;
  param_1[3] = 0;
  return;
}

// 00E433A0  FUN_00e433a0  size=156  [between]
undefined4 __thiscall FUN_00e433a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_2 + 4) == 0) {
    if (param_3 != 0) {
      if (*(int *)(param_3 + 4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_3 + 4) + 4;
      }
      if (iVar1 != param_1) {
        FUN_00dd5650(&DAT_016cd5f0);
        return 0;
      }
    }
    if (*(int *)(param_1 + 4) == param_3) {
      *(int *)(param_1 + 4) = param_2;
    }
    if (param_3 == 0) {
      if (*(int *)(param_1 + 8) != 0) {
        *(int *)(*(int *)(param_1 + 8) + 0x14) = param_2;
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 8);
      }
      *(int *)(param_1 + 8) = param_2;
      *(int *)(param_2 + 4) = param_1 + -4;
      return 1;
    }
    iVar1 = FUN_00e415e0(param_3);
    if (iVar1 != 0) {
      *(int *)(param_2 + 4) = param_1 + -4;
      return 1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016cd628);
  }
  return 0;
}

// 00E43440  FUN_00e43440  size=105  [between]
void __fastcall FUN_00e43440(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(*(int *)(iVar1 + 8) + 4);
    }
    if (piVar2 == param_1) {
      *(int *)(iVar1 + 8) = param_1[4];
    }
    iVar1 = *(int *)(*param_1 + 0xc);
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(iVar1 + 4);
    }
    if (piVar2 == param_1) {
      *(int *)(*param_1 + 0xc) = param_1[3];
    }
    *param_1 = 0;
  }
  if (param_1[3] != 0) {
    *(int *)(param_1[3] + 0x14) = param_1[4];
  }
  if (param_1[4] != 0) {
    *(int *)(param_1[4] + 0x10) = param_1[3];
  }
  param_1[4] = 0;
  param_1[3] = 0;
  return;
}

// 00E434D0  FUN_00e434d0  size=202  [between]
int __thiscall FUN_00e434d0(uint *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 6);
  if (param_1[0xc] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = *param_1;
  if (param_1[1] == uVar1) {
    if (param_1[0xc] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return -1;
  }
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar2 = param_1[4];
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar1 <= uVar4) {
        uVar5 = uVar5 + 1;
        uVar4 = 0;
        if (0xff < uVar5) {
          uVar5 = 0;
        }
      }
      if (*(int *)(uVar2 + uVar4 * 8) == -1) break;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar6 < uVar1);
  }
  while (iVar3 = (uVar5 << 0x10 | uVar4) << 8, iVar3 == -0x100) {
    uVar5 = uVar5 + 1;
    if (0xff < uVar5) {
      uVar5 = 0;
    }
  }
  *(int *)(uVar2 + uVar4 * 8) = iVar3;
  *(undefined4 *)(uVar2 + 4 + uVar4 * 8) = param_2;
  param_1[1] = param_1[1] + 1;
  param_1[2] = uVar4 + 1;
  param_1[3] = uVar5;
  if (param_1[0xc] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar3;
}

// 00E435A0  FUN_00e435a0  size=43  [between]
void __fastcall FUN_00e435a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E435D0  FUN_00e435d0  size=43  [between]
void __fastcall FUN_00e435d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E43600  FUN_00e43600  size=43  [between]
void __fastcall FUN_00e43600(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E43630  FUN_00e43630  size=43  [between]
void __fastcall FUN_00e43630(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E43660  FUN_00e43660  size=43  [between]
void __fastcall FUN_00e43660(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E43690  FUN_00e43690  size=43  [between]
void __fastcall FUN_00e43690(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E436C0  FUN_00e436c0  size=43  [between]
void __fastcall FUN_00e436c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E43710  FUN_00e43710  size=236  [between]
undefined4 __thiscall FUN_00e43710(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_00dd29b0(param_2 * 0x30,0x20,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar4 = 0;
        puVar2 = puVar1;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar7 = puVar2;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x30;
          puVar2 = puVar2 + 0xc;
        } while (iVar5 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        iVar4 = 0;
        puVar2 = puVar1;
        iVar5 = param_2;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar7 = puVar2;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar4 = iVar4 + 0x30;
          puVar2 = puVar2 + 0xc;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E43800  FUN_00e43800  size=247  [between]
undefined4 __thiscall FUN_00e43800(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_00dd29b0(param_2 * 0x44,0x20,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar4 = 0;
        puVar2 = puVar1;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar7 = puVar2;
            for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x44;
          puVar2 = puVar2 + 0x11;
        } while (iVar5 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        iVar4 = 0;
        puVar2 = puVar1;
        iVar5 = param_2;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar7 = puVar2;
            for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar4 = iVar4 + 0x44;
          puVar2 = puVar2 + 0x11;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E43900  FUN_00e43900  size=235  [between]
undefined4 __thiscall FUN_00e43900(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_00dd29b0(param_2 << 5,0x20,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar4 = 0;
        puVar2 = puVar1;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar7 = puVar2;
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x20;
          puVar2 = puVar2 + 8;
        } while (iVar5 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        iVar4 = 0;
        puVar2 = puVar1;
        iVar5 = param_2;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar7 = puVar2;
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar4 = iVar4 + 0x20;
          puVar2 = puVar2 + 8;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E439F0  FUN_00e439f0  size=265  [between]
undefined4 __thiscall FUN_00e439f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_00dd29b0(param_2 * 0x14,0x20,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar4 = 0;
        puVar3 = puVar1;
        do {
          if (puVar3 != (undefined4 *)0x0) {
            iVar2 = *(int *)(param_1 + 4) + iVar4;
            *puVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar3[1] = *(undefined4 *)(iVar2 + 4);
            puVar3[2] = *(undefined4 *)(iVar2 + 8);
            puVar3[3] = *(undefined4 *)(iVar2 + 0xc);
            puVar3[4] = *(undefined4 *)(iVar2 + 0x10);
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x14;
          puVar3 = puVar3 + 5;
        } while (iVar5 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        iVar4 = 0;
        puVar3 = puVar1;
        iVar5 = param_2;
        do {
          if (puVar3 != (undefined4 *)0x0) {
            iVar2 = *(int *)(param_1 + 4) + iVar4;
            *puVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar3[1] = *(undefined4 *)(iVar2 + 4);
            puVar3[2] = *(undefined4 *)(iVar2 + 8);
            puVar3[3] = *(undefined4 *)(iVar2 + 0xc);
            puVar3[4] = *(undefined4 *)(iVar2 + 0x10);
          }
          iVar4 = iVar4 + 0x14;
          puVar3 = puVar3 + 5;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E43B00  FUN_00e43b00  size=249  [between]
undefined4 __thiscall FUN_00e43b00(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_00dd29b0(param_2 * 0x1c,0x20,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar4 = 0;
        puVar2 = puVar1;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar7 = puVar2;
            for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x1c;
          puVar2 = puVar2 + 7;
        } while (iVar5 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        iVar4 = 0;
        puVar2 = puVar1;
        iVar5 = param_2;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar7 = puVar2;
            for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar4 = iVar4 + 0x1c;
          puVar2 = puVar2 + 7;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E43C00  FUN_00e43c00  size=235  [between]
undefined4 __thiscall FUN_00e43c00(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_00dd29b0(param_2 << 5,0x20,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar4 = 0;
        puVar2 = puVar1;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar7 = puVar2;
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x20;
          puVar2 = puVar2 + 8;
        } while (iVar5 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        iVar4 = 0;
        puVar2 = puVar1;
        iVar5 = param_2;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
            puVar7 = puVar2;
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          iVar4 = iVar4 + 0x20;
          puVar2 = puVar2 + 8;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E43F00  FUN_00e43f00  size=82  [between]
void __thiscall FUN_00e43f00(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0) && (param_2[1] == 0)) {
    if (*param_1 == 0) {
      *param_1 = (int)param_2;
    }
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar1 + 4) = param_2;
      }
      param_2[1] = *(int *)(iVar1 + 4);
      *param_2 = iVar1;
      *(int **)(iVar1 + 4) = param_2;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = (int)param_2;
    return;
  }
  FUN_00dd5650(&DAT_016c5d80);
  param_1[2] = param_1[2] + 1;
  return;
}

// 00E44030  FUN_00e44030  size=92  [between]
undefined4 __thiscall FUN_00e44030(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(param_3 + 4) == 0) && (*(int *)(param_3 + 8) == 0)) {
    if (*param_1 == 0) {
      *param_1 = param_3;
    }
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) != 0) {
        *(int *)(*(int *)(iVar1 + 8) + 4) = param_3;
      }
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar1 + 8);
      *(int *)(param_3 + 4) = iVar1;
      *(int *)(iVar1 + 8) = param_3;
    }
    param_1[1] = param_3;
    *(undefined4 *)(param_3 + 0xc) = param_2;
    return 1;
  }
  FUN_00dd5650(&DAT_016c5d80);
  return 0;
}

// 00E440E0  Animation::Motion::Node::vf04  size=31  [class]
undefined4 * __thiscall Animation::Motion::Node::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E44100  FUN_00e44100  size=67  [between]
undefined4 __thiscall FUN_00e44100(int param_1,int param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    FUN_00dd5650(&DAT_016cd628);
    return 0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    *(int *)(param_1 + 8) = param_2;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *(int *)(*(int *)(param_1 + 0xc) + 0x14) = param_2;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  }
  *(int *)(param_1 + 0xc) = param_2;
  *(int *)(param_2 + 4) = param_1;
  return 1;
}

// 00E441C0  Animation::Motion::NodeListener::vf00  size=31  [class]
undefined4 * __thiscall Animation::Motion::NodeListener::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E44210  FUN_00e44210  size=81  [between]
void __fastcall FUN_00e44210(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(iVar1 + 0x88) == param_1) {
      *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(iVar1 + 0x8c) == param_1) {
      *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_1 + 4);
    }
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 00E442C0  FUN_00e442c0  size=38  [between]
void __thiscall FUN_00e442c0(int param_1,int param_2)

{
  if (((*(uint *)(param_2 + 100) & 0x100) != 0) && (*(int *)(param_1 + 0x10) == 0)) {
    FUN_00e44030(param_2,param_1 + 4);
  }
  return;
}

// 00E44430  Animation::Control::NodeListener::vf00  size=31  [class]
undefined4 * __thiscall Animation::Control::NodeListener::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E44450  Animation::FootIk2::vf00  size=31  [class]
undefined4 * __thiscall Animation::FootIk2::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = PostControl::Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E44470  Animation::HandIk::vf00  size=31  [class]
undefined4 * __thiscall Animation::HandIk::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = PostControl::Work::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E44500  Animation::Motion::NodeSequence::vf00  size=6  [class]
undefined * Animation::Motion::NodeSequence::vf00(void)

{
  return &DAT_01dd9450;
}

// 00E44520  Animation::Motion::NodeBlend::NodeBlend  size=102  [class]
void __fastcall Animation::Motion::NodeBlend::NodeBlend(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1c] = 0x3f800000;
  param_1[7] = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *param_1 = vftable;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}

// 00E44590  Animation::Motion::NodeBlend::vf00  size=6  [class]
undefined * Animation::Motion::NodeBlend::vf00(void)

{
  return &DAT_01dd943c;
}

// 00E445A0  Animation::Motion::NodeBlend::vf3C  size=7  [class]
float10 __fastcall Animation::Motion::NodeBlend::vf3C(int param_1)

{
  return (float10)*(float *)(param_1 + 0xa8);
}

// 00E445C0  Animation::Motion::NodeParallel::NodeParallel  size=90  [class]
void __fastcall Animation::Motion::NodeParallel::NodeParallel(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1c] = 0x3f800000;
  param_1[7] = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *param_1 = vftable;
  return;
}

// 00E44620  Animation::Motion::NodeParallel::vf00  size=6  [class]
undefined * Animation::Motion::NodeParallel::vf00(void)

{
  return &DAT_01dd9444;
}

// 00E44640  Animation::Motion::NodeGridBlend::NodeGridBlend_2  size=18  [class]
undefined4 * __fastcall Animation::Motion::NodeGridBlend::NodeGridBlend_2(undefined4 *param_1)

{
  NodeBlend::NodeBlend();
  *param_1 = vftable;
  return param_1;
}

// 00E44660  Animation::Motion::NodeGridBlend::vf00  size=6  [class]
undefined * Animation::Motion::NodeGridBlend::vf00(void)

{
  return &DAT_01dd9440;
}

// 00E44680  Animation::Motion::NodeRingBlend::NodeRingBlend_2  size=18  [class]
undefined4 * __fastcall Animation::Motion::NodeRingBlend::NodeRingBlend_2(undefined4 *param_1)

{
  NodeBlend::NodeBlend();
  *param_1 = vftable;
  return param_1;
}

// 00E446A0  Animation::Motion::NodeRingBlend::vf00  size=6  [class]
undefined * Animation::Motion::NodeRingBlend::vf00(void)

{
  return &DAT_01dd944c;
}

// 00E446C0  Animation::Motion::NodePlay::vf00  size=6  [class]
undefined * Animation::Motion::NodePlay::vf00(void)

{
  return &DAT_01dd9448;
}

// 00E446D0  FUN_00e446d0  size=43  [between]
void __fastcall FUN_00e446d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44700  FUN_00e44700  size=43  [between]
void __fastcall FUN_00e44700(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44730  FUN_00e44730  size=43  [between]
void __fastcall FUN_00e44730(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44760  FUN_00e44760  size=43  [between]
void __fastcall FUN_00e44760(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44790  FUN_00e44790  size=43  [between]
void __fastcall FUN_00e44790(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E447C0  FUN_00e447c0  size=43  [between]
void __fastcall FUN_00e447c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E447F0  FUN_00e447f0  size=43  [between]
void __fastcall FUN_00e447f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44820  FUN_00e44820  size=43  [between]
void __fastcall FUN_00e44820(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44850  FUN_00e44850  size=43  [between]
void __fastcall FUN_00e44850(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44880  FUN_00e44880  size=43  [between]
void __fastcall FUN_00e44880(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E448B0  FUN_00e448b0  size=43  [between]
void __fastcall FUN_00e448b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E448E0  FUN_00e448e0  size=43  [between]
void __fastcall FUN_00e448e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44910  FUN_00e44910  size=43  [between]
void __fastcall FUN_00e44910(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44940  FUN_00e44940  size=43  [between]
void __fastcall FUN_00e44940(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44970  FUN_00e44970  size=43  [between]
void __fastcall FUN_00e44970(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E449A0  FUN_00e449a0  size=43  [between]
void __fastcall FUN_00e449a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E449D0  FUN_00e449d0  size=43  [between]
void __fastcall FUN_00e449d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44A00  FUN_00e44a00  size=43  [between]
void __fastcall FUN_00e44a00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44A30  FUN_00e44a30  size=43  [between]
void __fastcall FUN_00e44a30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44A60  FUN_00e44a60  size=43  [between]
void __fastcall FUN_00e44a60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44A90  FUN_00e44a90  size=43  [between]
void __fastcall FUN_00e44a90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44AC0  FUN_00e44ac0  size=43  [between]
void __fastcall FUN_00e44ac0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44AF0  FUN_00e44af0  size=43  [between]
void __fastcall FUN_00e44af0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44B20  FUN_00e44b20  size=43  [between]
void __fastcall FUN_00e44b20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44B50  FUN_00e44b50  size=43  [between]
void __fastcall FUN_00e44b50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44B80  FUN_00e44b80  size=43  [between]
void __fastcall FUN_00e44b80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44BB0  FUN_00e44bb0  size=43  [between]
void __fastcall FUN_00e44bb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44BE0  FUN_00e44be0  size=43  [between]
void __fastcall FUN_00e44be0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E44C10  FUN_00e44c10  size=202  [between]
int __fastcall FUN_00e44c10(LPCRITICAL_SECTION param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  if (param_1[1].OwningThread <= param_1[1].LockSemaphore) {
    FUN_00dd5650(&DAT_016cdb5c);
    if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(param_1);
    }
    return 0;
  }
  iVar1 = FUN_00dd3500(0x98,param_1[1].RecursionCount);
  if (iVar1 != 0) {
    iVar1 = Animation::Motion::NodeParallel::NodeParallel();
    if (iVar1 != 0) {
      param_1[1].LockSemaphore = (HANDLE)((int)param_1[1].LockSemaphore + 1);
      iVar2 = FUN_00e434d0(iVar1);
      if (iVar2 != -1) {
        if (*(int *)(iVar1 + 0x18) == -1) {
          *(int *)(iVar1 + 0x18) = iVar2;
          if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            LeaveCriticalSection(param_1);
          }
          return iVar1;
        }
        FUN_00e42ee0(iVar2);
      }
      FUN_00e33cf0(iVar1);
      if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(param_1);
      }
      return 0;
    }
  }
  FUN_00dd5650(&DAT_016cdb1c);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(param_1);
  }
  return 0;
}

// 00E44CE0  FUN_00e44ce0  size=202  [between]
int __fastcall FUN_00e44ce0(LPCRITICAL_SECTION param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  if (param_1[1].OwningThread <= param_1[1].LockSemaphore) {
    FUN_00dd5650(&DAT_016cdb5c);
    if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(param_1);
    }
    return 0;
  }
  iVar1 = FUN_00dd3500(0x144,param_1[1].RecursionCount);
  if (iVar1 != 0) {
    iVar1 = Animation::Motion::NodePlay::NodePlay();
    if (iVar1 != 0) {
      param_1[1].LockSemaphore = (HANDLE)((int)param_1[1].LockSemaphore + 1);
      iVar2 = FUN_00e434d0(iVar1);
      if (iVar2 != -1) {
        if (*(int *)(iVar1 + 0x18) == -1) {
          *(int *)(iVar1 + 0x18) = iVar2;
          if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            LeaveCriticalSection(param_1);
          }
          return iVar1;
        }
        FUN_00e42ee0(iVar2);
      }
      FUN_00e33cf0(iVar1);
      if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(param_1);
      }
      return 0;
    }
  }
  FUN_00dd5650(&DAT_016cdb1c);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(param_1);
  }
  return 0;
}

// 00E44DB0  Animation::Motion::NodeGridBlend::NodeGridBlend  size=204  [class]
undefined4 * __fastcall Animation::Motion::NodeGridBlend::NodeGridBlend(LPCRITICAL_SECTION param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  if (param_1[1].OwningThread <= param_1[1].LockSemaphore) {
    FUN_00dd5650(&DAT_016cdb5c);
    if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(param_1);
    }
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_00dd3500(0xb0,param_1[1].RecursionCount);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_016cdb1c);
    if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(param_1);
    }
    return (undefined4 *)0x0;
  }
  NodeBlend::NodeBlend();
  *puVar1 = vftable;
  param_1[1].LockSemaphore = (HANDLE)((int)param_1[1].LockSemaphore + 1);
  iVar2 = FUN_00e434d0(puVar1);
  if (iVar2 != -1) {
    if (puVar1[6] == -1) {
      puVar1[6] = iVar2;
      if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(param_1);
      }
      return puVar1;
    }
    FUN_00e42ee0(iVar2);
  }
  FUN_00e33cf0(puVar1);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(param_1);
  }
  return (undefined4 *)0x0;
}

// 00E44E80  Animation::Motion::NodeRingBlend::NodeRingBlend  size=204  [class]
undefined4 * __fastcall Animation::Motion::NodeRingBlend::NodeRingBlend(LPCRITICAL_SECTION param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  if (param_1[1].OwningThread <= param_1[1].LockSemaphore) {
    FUN_00dd5650(&DAT_016cdb5c);
    if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(param_1);
    }
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_00dd3500(0xb0,param_1[1].RecursionCount);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_016cdb1c);
    if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(param_1);
    }
    return (undefined4 *)0x0;
  }
  NodeBlend::NodeBlend();
  *puVar1 = vftable;
  param_1[1].LockSemaphore = (HANDLE)((int)param_1[1].LockSemaphore + 1);
  iVar2 = FUN_00e434d0(puVar1);
  if (iVar2 != -1) {
    if (puVar1[6] == -1) {
      puVar1[6] = iVar2;
      if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(param_1);
      }
      return puVar1;
    }
    FUN_00e42ee0(iVar2);
  }
  FUN_00e33cf0(puVar1);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(param_1);
  }
  return (undefined4 *)0x0;
}

// 00E44F50  FUN_00e44f50  size=21  [between]
undefined4 * __fastcall FUN_00e44f50(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E450F0  Animation::Control::Node::Node  size=97  [class]
undefined4 * __fastcall Animation::Control::Node::Node(int param_1)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x24) <= *(uint *)(param_1 + 0x28)) {
    FUN_00dd5650(&DAT_016cdc24);
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_00dd3500(0x20,*(undefined4 *)(param_1 + 0x20));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = vftable;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    return puVar1;
  }
  FUN_00dd5650(&DAT_016cdbe4);
  return (undefined4 *)0x0;
}

// 00E45200  FUN_00e45200  size=314  [between]
undefined4 __thiscall FUN_00e45200(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  iVar1 = FUN_00dd29b0(param_2 << 6,0x20,0,0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        puVar4 = (undefined4 *)(iVar1 + 8);
        do {
          if (puVar4 != (undefined4 *)&DAT_00000008) {
            iVar2 = *(int *)(param_1 + 4) + (-8 - iVar1);
            puVar4[-2] = *(undefined4 *)(iVar2 + (int)puVar4);
            puVar4[-1] = *(undefined4 *)((int)puVar4 + iVar2 + 4);
            *puVar4 = *(undefined4 *)((int)puVar4 + iVar2 + 8);
            *(undefined2 *)(puVar4 + 1) = *(undefined2 *)((int)puVar4 + iVar2 + 0xc);
            FUN_00e41770((undefined1 *)((int)puVar4 + iVar2 + 0x10));
          }
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 0x10;
        } while (iVar3 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        puVar4 = (undefined4 *)(iVar1 + 8);
        iVar3 = param_2;
        do {
          if (puVar4 != (undefined4 *)&DAT_00000008) {
            iVar2 = (-8 - iVar1) + *(int *)(param_1 + 4);
            puVar4[-2] = *(undefined4 *)((int)puVar4 + (-8 - iVar1) + *(int *)(param_1 + 4));
            puVar4[-1] = *(undefined4 *)((int)puVar4 + iVar2 + 4);
            *puVar4 = *(undefined4 *)((int)puVar4 + iVar2 + 8);
            *(undefined2 *)(puVar4 + 1) = *(undefined2 *)((int)puVar4 + iVar2 + 0xc);
            FUN_00e41770((undefined1 *)((int)puVar4 + iVar2 + 0x10));
          }
          puVar4 = puVar4 + 0x10;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 4) = iVar1;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E453D0  Animation::Motion::NodeSlot::NodeHandler::NodeHandler  size=84  [class]
void __fastcall Animation::Motion::NodeSlot::NodeHandler::NodeHandler(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = Unit::NodeHandler::vftable;
  puVar1 = param_1 + 5;
  iVar2 = 0xf;
  do {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = vftable;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *param_1 = 0;
  return;
}

// 00E45430  Animation::Motion::NodeListener::NodeListener_2  size=53  [class]
void __fastcall Animation::Motion::NodeListener::NodeListener_2(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00e33350();
  puVar1 = (undefined4 *)(param_1 + 0x114);
  iVar2 = 0xf;
  do {
    puVar1 = puVar1 + -4;
    iVar2 = iVar2 + -1;
    *puVar1 = vftable;
  } while (-1 < iVar2);
  *(undefined ***)(param_1 + 4) = vftable;
  return;
}

// 00E45490  Animation::Control::Node::vf00  size=31  [class]
undefined4 * __thiscall Animation::Control::Node::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E454B0  Animation::Motion::NodeSequence::vf04  size=31  [class]
undefined4 * __thiscall Animation::Motion::NodeSequence::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = Node::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E454D0  Animation::Motion::NodePlay::vf04  size=68  [class]
undefined4 * __thiscall Animation::Motion::NodePlay::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0x33] != 0) {
    FUN_00dd48d0(param_1[0x33],0);
    param_1[0x33] = 0;
  }
  *param_1 = Node::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E45520  Animation::Motion::NodeBlend::vf04  size=31  [class]
undefined4 * __thiscall Animation::Motion::NodeBlend::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = Node::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E45540  Animation::Motion::NodeParallel::vf04  size=31  [class]
undefined4 * __thiscall Animation::Motion::NodeParallel::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = Node::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E45560  Animation::Motion::NodeGridBlend::vf04  size=31  [class]
undefined4 * __thiscall Animation::Motion::NodeGridBlend::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = Node::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E45580  Animation::Motion::NodeRingBlend::vf04  size=31  [class]
undefined4 * __thiscall Animation::Motion::NodeRingBlend::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = Node::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E455A0  FUN_00e455a0  size=43  [callgraph]
void __fastcall FUN_00e455a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E455D0  FUN_00e455d0  size=43  [callgraph]
void __fastcall FUN_00e455d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E45600  FUN_00e45600  size=43  [callgraph]
void __fastcall FUN_00e45600(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E45630  FUN_00e45630  size=43  [callgraph]
void __fastcall FUN_00e45630(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E45660  FUN_00e45660  size=43  [callgraph]
void __fastcall FUN_00e45660(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E45690  FUN_00e45690  size=43  [callgraph]
void __fastcall FUN_00e45690(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E456C0  FUN_00e456c0  size=43  [callgraph]
void __fastcall FUN_00e456c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E456F0  FUN_00e456f0  size=207  [callgraph]
undefined4 __thiscall FUN_00e456f0(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  puStack_c = PTR_s_EffectTrack_018cfa1c;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3);
  iVar2 = (**(code **)(*param_2 + 0x9c))(uVar1);
  if (iVar2 == -1) {
    return 1;
  }
  (**(code **)(*param_2 + 0xd8))(iVar2,&puStack_c);
  if ((*(int *)(param_1 + 8) < 0x16cdf38) && (iVar2 = FUN_00e43710("SeqNum"), iVar2 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  if (*(char **)(param_1 + 0xc) != "SeqNum") {
    *(char **)(param_1 + 0xc) = "SeqNum";
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00e41d00(param_2,param_3,iVar4);
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}

// 00E457C0  FUN_00e457c0  size=207  [callgraph]
undefined4 __thiscall FUN_00e457c0(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  puStack_c = PTR_s_SeTrack_018cfa28;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3);
  iVar2 = (**(code **)(*param_2 + 0x9c))(uVar1);
  if (iVar2 == -1) {
    return 1;
  }
  (**(code **)(*param_2 + 0xd8))(iVar2,&puStack_c);
  if ((*(int *)(param_1 + 8) < 0x16cdf38) && (iVar2 = FUN_00e43800("SeqNum"), iVar2 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  if (*(char **)(param_1 + 0xc) != "SeqNum") {
    *(char **)(param_1 + 0xc) = "SeqNum";
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00e41fc0(param_2,param_3,iVar4);
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}

// 00E45890  FUN_00e45890  size=207  [callgraph]
undefined4 __thiscall FUN_00e45890(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  puStack_c = PTR_s_FlagsTrack_018cfa20;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3);
  iVar2 = (**(code **)(*param_2 + 0x9c))(uVar1);
  if (iVar2 == -1) {
    return 1;
  }
  (**(code **)(*param_2 + 0xd8))(iVar2,&puStack_c);
  if ((*(int *)(param_1 + 8) < 0x16cdf38) && (iVar2 = FUN_00e43900("SeqNum"), iVar2 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  if (*(char **)(param_1 + 0xc) != "SeqNum") {
    *(char **)(param_1 + 0xc) = "SeqNum";
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00e42180(param_2,param_3,iVar4);
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}

// 00E45960  FUN_00e45960  size=207  [callgraph]
undefined4 __thiscall FUN_00e45960(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  puStack_c = PTR_s_SpeedTrack_018cfa2c;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3);
  iVar2 = (**(code **)(*param_2 + 0x9c))(uVar1);
  if (iVar2 == -1) {
    return 1;
  }
  (**(code **)(*param_2 + 0xd8))(iVar2,&puStack_c);
  if ((*(int *)(param_1 + 8) < 0x16cdf38) && (iVar2 = FUN_00e439f0("SeqNum"), iVar2 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  if (*(char **)(param_1 + 0xc) != "SeqNum") {
    *(char **)(param_1 + 0xc) = "SeqNum";
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00e42370(param_2,param_3,iVar4);
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}

// 00E45A30  FUN_00e45a30  size=207  [callgraph]
undefined4 __thiscall FUN_00e45a30(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  puStack_c = PTR_s_VibTrack_018cfa30;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3);
  iVar2 = (**(code **)(*param_2 + 0x9c))(uVar1);
  if (iVar2 == -1) {
    return 1;
  }
  (**(code **)(*param_2 + 0xd8))(iVar2,&puStack_c);
  if ((*(int *)(param_1 + 8) < 0x16cdf38) && (iVar2 = FUN_00e43b00("SeqNum"), iVar2 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  if (*(char **)(param_1 + 0xc) != "SeqNum") {
    *(char **)(param_1 + 0xc) = "SeqNum";
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00e42820(param_2,param_3,iVar4);
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}

// 00E45B00  FUN_00e45b00  size=207  [callgraph]
undefined4 __thiscall FUN_00e45b00(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  puStack_c = PTR_s_MeshTrack_018cfa24;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3);
  iVar2 = (**(code **)(*param_2 + 0x9c))(uVar1);
  if (iVar2 == -1) {
    return 1;
  }
  (**(code **)(*param_2 + 0xd8))(iVar2,&puStack_c);
  if ((*(int *)(param_1 + 8) < 0x16cdf38) && (iVar2 = FUN_00e43c00("SeqNum"), iVar2 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  if (*(char **)(param_1 + 0xc) != "SeqNum") {
    *(char **)(param_1 + 0xc) = "SeqNum";
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00e42a30(param_2,param_3,iVar4);
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}

// 00E45D20  FUN_00e45d20  size=43  [callgraph]
void __fastcall FUN_00e45d20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E45D50  FUN_00e45d50  size=43  [callgraph]
void __fastcall FUN_00e45d50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E45D80  FUN_00e45d80  size=43  [callgraph]
void __fastcall FUN_00e45d80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E45DB0  FUN_00e45db0  size=43  [callgraph]
void __fastcall FUN_00e45db0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E45DE0  FUN_00e45de0  size=43  [callgraph]
void __fastcall FUN_00e45de0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E45E10  FUN_00e45e10  size=43  [callgraph]
void __fastcall FUN_00e45e10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E45E40  FUN_00e45e40  size=43  [callgraph]
void __fastcall FUN_00e45e40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E45E70  FUN_00e45e70  size=207  [callgraph]
undefined4 __thiscall FUN_00e45e70(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puStack_c;
  
  *(undefined4 *)(param_1 + 0x14) = 1;
  puStack_c = PTR_s_AttackTrack_018cfa18;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_3);
  iVar2 = (**(code **)(*param_2 + 0x9c))(uVar1);
  if (iVar2 == -1) {
    return 1;
  }
  (**(code **)(*param_2 + 0xd8))(iVar2,&puStack_c);
  if ((*(int *)(param_1 + 8) < 0x16cdf38) && (iVar2 = FUN_00e45200("SeqNum"), iVar2 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  if (*(char **)(param_1 + 0xc) != "SeqNum") {
    *(char **)(param_1 + 0xc) = "SeqNum";
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_00e42550(param_2,param_3,iVar4);
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}

// 00E46040  FUN_00e46040  size=292  [callgraph]
void __fastcall FUN_00e46040(int param_1)

{
  if (*(int *)(param_1 + 0xd4) != 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xd4),0);
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if (*(int *)(param_1 + 200) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xbc),0);
      *(undefined4 *)(param_1 + 200) = 0;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x78),0);
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x60),0);
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x40),0);
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x28),0);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E46170  FUN_00e46170  size=180  [callgraph]
void __fastcall FUN_00e46170(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 1;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 1;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 1;
  return;
}

// 00E46240  FUN_00e46240  size=15  [callgraph]
undefined4 __fastcall FUN_00e46240(undefined4 param_1)

{
  FUN_00e46170();
  return param_1;
}

// 00E462A0  FUN_00e462a0  size=33  [callgraph]
undefined4 __thiscall FUN_00e462a0(undefined4 param_1,byte param_2)

{
  FUN_00e46040();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E46340  FUN_00e46340  size=67  [callgraph]
void __fastcall FUN_00e46340(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
    if (iVar1 != 0) {
      FUN_00e46040();
      FUN_00dd4920(iVar1);
    }
  }
  return;
}

// 00E81AA0  Animation::MotReader::setFps_2  size=48  [class]
void __thiscall Animation::MotReader::setFps_2(int *param_1,char param_2)

{
  if (((0x20111108 < *(uint *)(*param_1 + 4)) && (*(char *)(*param_1 + 0x15) != '\0')) &&
     ((char)param_1[1] != param_2)) {
    FUN_00dd5650(&DAT_016cc980);
    return;
  }
  *(char *)(param_1 + 1) = param_2;
  return;
}

// 00E81B00  FUN_00e81b00  size=43  [callgraph]
void __thiscall FUN_00e81b00(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00e26e90();
  FUN_00e35e90(param_1 + 0x98,param_2,param_3);
  return;
}

