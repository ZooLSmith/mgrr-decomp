// src/unsorted/unit_00FE3CB2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FE3CB2..00FE3D98, 2 functions

#include "mgrr.h"

// 00FE3CB2  ___InternalCxxFrameHandler  size=230  [run]
/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2010 Release */

undefined4
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  
  p_Var1 = __getptd();
  if ((((*(int *)((p_Var1->_setloc_data)._cacheout + 0x27) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if ((param_5->nTryBlocks != 0) ||
         ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff) &&
          (param_5->pESTypeList != (ESTypeList *)0x0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)))) {
          uVar2 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar2;
        }
        FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      ___FrameUnwindToState(param_2,param_4,param_5,0xffffffff);
    }
  }
  return 1;
}

// 00FE3D98  xtoa_s  size=186  [run]
/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2010 Release
   __stdcall xtoa_s,20 */

int xtoa_s(uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  int *piVar3;
  char *in_ECX;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  int iStack_14;
  
  if (in_ECX == (char *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00fe56c2();
    return 0x16;
  }
  if (param_1 == 0) {
LAB_00fe3dc3:
    piVar3 = __errno();
    iStack_14 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_00fe3dc3;
      pcVar7 = in_ECX;
      if (param_3 != 0) {
        *in_ECX = '-';
        pcVar7 = in_ECX + 1;
        in_EAX = -in_EAX;
      }
      uVar6 = (uint)(param_3 != 0);
      pcVar2 = pcVar7;
      do {
        pcVar4 = pcVar2;
        uVar1 = (ulonglong)in_EAX;
        in_EAX = in_EAX / param_2;
        cVar5 = (char)(uVar1 % (ulonglong)param_2);
        if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
          cVar5 = cVar5 + '0';
        }
        else {
          cVar5 = cVar5 + 'W';
        }
        *pcVar4 = cVar5;
        uVar6 = uVar6 + 1;
      } while ((in_EAX != 0) && (pcVar2 = pcVar4 + 1, uVar6 < param_1));
      if (uVar6 < param_1) {
        pcVar4[1] = '\0';
        do {
          cVar5 = *pcVar4;
          *pcVar4 = *pcVar7;
          pcVar4 = pcVar4 + -1;
          *pcVar7 = cVar5;
          pcVar7 = pcVar7 + 1;
        } while (pcVar7 < pcVar4);
        return 0;
      }
      *in_ECX = '\0';
    }
    piVar3 = __errno();
    iStack_14 = 0x22;
  }
  *piVar3 = iStack_14;
  FUN_00fe56c2();
  return iStack_14;
}

