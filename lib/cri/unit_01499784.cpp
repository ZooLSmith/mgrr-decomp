// lib/cri/unit_01499784.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01499784..014A5E0C, 381 functions

#include "types.h"

// 01499784  FUN_01499784  size=147  [run]
undefined4 *
FUN_01499784(void *param_1,size_t param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  uintptr_t uVar1;
  undefined4 *_ArgList;
  uint local_8;
  
  FUN_014a36be();
  _memset(param_1,0,param_2);
  _ArgList = (undefined4 *)((int)param_1 + 7U & 0xfffffff8);
  *_ArgList = param_4;
  _ArgList[1] = param_5;
  _ArgList[7] = DAT_0225bd2c;
  _ArgList[5] = param_6;
  uVar1 = __beginthreadex((void *)0x0,0x4000,FUN_0149967d,_ArgList,0,&local_8);
  _ArgList[3] = uVar1;
  if (uVar1 == 0) {
    FUN_01293f1f(0,"E2008073001:Failed to create thread.");
    FUN_0149964c(_ArgList);
    _ArgList = (undefined4 *)0x0;
  }
  else {
    FUN_014995eb(local_8);
    while (_ArgList[2] == 0) {
      Sleep(10);
    }
  }
  return _ArgList;
}

// 01499817  FUN_01499817  size=21  [run]
void * FUN_01499817(void *param_1)

{
  _memset(param_1,0,0x14);
  return param_1;
}

// 0149982D  FUN_0149982d  size=39  [run]
void FUN_0149982d(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1[4] != 0) {
    FUN_01293f1f(0,"E2009072402:Can not change allocator. Allocated memory is still active.");
    return;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 01499854  FUN_01499854  size=40  [run]
void FUN_01499854(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_01293f1f(0,"E2009072404:Can not change allocator. Allocated memory is still active.");
    return;
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

// 0149987C  FUN_0149987c  size=58  [run]
undefined4 FUN_0149987c(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_2 < 0x80000000) {
    param_1[4] = param_1[4] + 1;
    if ((code *)*param_1 != (code *)0x0) {
      uVar1 = (*(code *)*param_1)(param_1[1],param_2);
      return uVar1;
    }
    pcVar2 = "E2009081901:Memory allocator is not registered.";
  }
  else {
    pcVar2 = "E2010052660:Invalid allocation size.";
  }
  FUN_01293f1f(0,pcVar2);
  return 0;
}

// 014998B6  FUN_014998b6  size=42  [run]
void FUN_014998b6(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    FUN_01293f1f(0,"E2009081902:Memory allocator is not registered.");
  }
  else {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_2);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  }
  return;
}

// 014998F7  FUN_014998f7  size=1  [run]
void FUN_014998f7(void)

{
  return;
}

// 014998F8  FUN_014998f8  size=1  [run]
void FUN_014998f8(void)

{
  return;
}

// 014998F9  FUN_014998f9  size=15  [run]
void FUN_014998f9(LONG *param_1,LONG param_2)

{
  InterlockedExchange(param_1,param_2);
  return;
}

// 01499908  FUN_01499908  size=47  [run]
int FUN_01499908(int param_1,int param_2)

{
  return (((int)(param_1 + 7 + (param_1 + 7 >> 0x1f & 7U)) >> 3) * param_2 +
         ((int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3)) * 8 + 0x70;
}

// 01499937  FUN_01499937  size=107  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_01499937(int param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  _DAT_0225bd30 = "\nCRI Handle Manager/PCx86 Ver.1.00.07 Build:Sep  3 2012 18:07:27\n";
  _memset(param_3,0,param_4);
  piVar3 = (int *)((int)param_3 + 7U & 0xfffffff8);
  iVar1 = FUN_01294159(piVar3 + 7,0x48);
  piVar3[6] = iVar1;
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    iVar1 = ((int)(param_1 + 7 + (param_1 + 7 >> 0x1f & 7U)) >> 3) * 8;
    *piVar3 = iVar1;
    piVar3[5] = (int)(iVar1 * param_2 + (int)(piVar3 + 0x1a));
    piVar3[4] = (int)(piVar3 + 0x1a);
    piVar3[1] = param_2;
    piVar2 = piVar3;
  }
  return piVar2;
}

// 014999A2  FUN_014999a2  size=66  [run]
void FUN_014999a2(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(char *)(*(int *)(param_1 + 0x14) + iVar2) != '\0') break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (iVar2 != iVar1) {
    FUN_01293f1f(0,"E2008071801:Handle manager is destroyed though some handles are still used.");
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_01294197(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

// 01499AA3  FUN_01499aa3  size=51  [run]
int FUN_01499aa3(int *param_1,int param_2)

{
  if (param_2 < param_1[1]) {
    if (*(char *)(param_2 + param_1[5]) != '\0') {
      return *param_1 * param_2 + param_1[4];
    }
  }
  else {
    FUN_01293f69(0,"E2008091141",0xfffffffe);
  }
  return 0;
}

// 01499AD6  FUN_01499ad6  size=8  [run]
undefined4 FUN_01499ad6(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 01499ADE  FUN_01499ade  size=44  [run]
void FUN_01499ade(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xc);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 4);
  }
  return;
}

// 01499B0A  FUN_01499b0a  size=125  [run]
void * FUN_01499b0a(size_t *param_1,size_t *param_2)

{
  size_t sVar1;
  void *_Dst;
  bool bVar2;
  
  FUN_012941d9(param_1[6]);
  if (param_2 != (size_t *)0x0) {
    *param_2 = 0xffffffff;
  }
  sVar1 = 0;
  bVar2 = param_1[1] == 0;
  if (0 < (int)param_1[1]) {
    do {
      if (*(char *)(param_1[5] + sVar1) == '\0') {
        *(undefined1 *)(param_1[5] + sVar1) = 1;
        break;
      }
      sVar1 = sVar1 + 1;
    } while ((int)sVar1 < (int)param_1[1]);
    bVar2 = sVar1 == param_1[1];
  }
  if (bVar2) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)(*param_1 * sVar1 + param_1[4]);
    _memset(_Dst,0,*param_1);
    param_1[2] = param_1[2] + 1;
    if ((int)param_1[3] < (int)param_1[2]) {
      param_1[3] = param_1[2];
    }
    if (param_2 != (size_t *)0x0) {
      *param_2 = *param_1;
    }
  }
  FUN_0129420c(param_1[6]);
  return _Dst;
}

// 01499B87  FUN_01499b87  size=66  [run]
void FUN_01499b87(int *param_1,int param_2)

{
  char *pcVar1;
  
  FUN_012941d9(param_1[6]);
  pcVar1 = (char *)((param_2 - param_1[4]) / *param_1 + param_1[5]);
  if (*pcVar1 == '\0') {
    FUN_01293f1f(0,"E2008081920:Handle has been freed twice.");
  }
  else {
    *pcVar1 = '\0';
    param_1[2] = param_1[2] + -1;
  }
  FUN_0129420c(param_1[6]);
  return;
}

// 01499BC9  FUN_01499bc9  size=36  [run]
void FUN_01499bc9(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  _memset(param_1,0,4);
  return;
}

// 01499BED  FUN_01499bed  size=25  [run]
void FUN_01499bed(undefined4 *param_1)

{
  WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  ResetEvent((HANDLE)*param_1);
  return;
}

// 01499C06  FUN_01499c06  size=13  [run]
void FUN_01499c06(undefined4 *param_1)

{
  SetEvent((HANDLE)*param_1);
  return;
}

// 01499C13  FUN_01499c13  size=74  [run]
undefined4 * FUN_01499c13(void *param_1,size_t param_2)

{
  HANDLE pvVar1;
  undefined4 *puVar2;
  
  _memset(param_1,0,param_2);
  puVar2 = (undefined4 *)((int)param_1 + 7U & 0xfffffff8);
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *puVar2 = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    FUN_01293f1f(0,"E2008070324:Can not create event object.");
    FUN_01499bc9(puVar2);
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}

// 01499C5D  FUN_01499c5d  size=75  [run]
void FUN_01499c5d(void *param_1)

{
  while (*(undefined4 *)((int)param_1 + 0x40) = 1, *(int *)((int)param_1 + 0x3c) == 0) {
    if (*(code **)((int)param_1 + 0x10) != (code *)0x0) {
      (**(code **)((int)param_1 + 0x10))(*(undefined4 *)((int)param_1 + 0x14));
    }
    FUN_014996ef(10);
  }
  if (*(int *)((int)param_1 + 0x34) != 0) {
    FUN_0149964c(*(int *)((int)param_1 + 0x34));
    *(undefined4 *)((int)param_1 + 0x34) = 0;
  }
  _memset(param_1,0,0x48);
  return;
}

// 01499CA8  FUN_01499ca8  size=18  [run]
void FUN_01499ca8(int param_1)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0x14));
  }
  return;
}

// 01499CBA  FUN_01499cba  size=8  [run]
undefined4 FUN_01499cba(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}

// 01499CC2  FUN_01499cc2  size=19  [run]
void FUN_01499cc2(int param_1,undefined4 param_2)

{
  FUN_01499700(*(undefined4 *)(param_1 + 0x34),param_2);
  return;
}

// 01499CE3  FUN_01499ce3  size=100  [run]
void FUN_01499ce3(undefined4 *param_1)

{
  DWORD DVar1;
  int iVar2;
  
  iVar2 = 0;
  DVar1 = GetCurrentThreadId();
  param_1[0x11] = DVar1;
  param_1[0xe] = 1;
  if ((code *)param_1[7] != (code *)0x0) {
    (*(code *)param_1[7])(param_1[8]);
  }
  while (param_1[0x10] == 0) {
    if ((iVar2 == 0) && ((code *)param_1[2] != (code *)0x0)) {
      (*(code *)param_1[2])(param_1[3]);
    }
    if (param_1[0x10] != 0) break;
    if ((code *)*param_1 != (code *)0x0) {
      iVar2 = (*(code *)*param_1)(param_1[1]);
    }
  }
  if ((code *)param_1[9] != (code *)0x0) {
    (*(code *)param_1[9])(param_1[10]);
  }
  param_1[0xf] = 1;
  return;
}

// 01499D47  FUN_01499d47  size=76  [run]
uint FUN_01499d47(void *param_1,size_t param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000038;
  
  _memset(param_1,0,param_2);
  puVar2 = (undefined4 *)((int)param_1 + 7U & 0xfffffff8);
  puVar3 = (undefined4 *)&stack0x0000000c;
  puVar4 = puVar2;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_01499784(puVar2 + 0x12,0x48,in_stack_00000038,FUN_01499ce3,puVar2,in_stack_00000024);
  puVar2[0xd] = iVar1;
  return -(uint)(iVar1 != 0) & (uint)puVar2;
}

// 01499D93  FUN_01499d93  size=12  [run]
bool FUN_01499d93(void)

{
  return DAT_0225be24 != 0;
}

// 01499D9F  FUN_01499d9f  size=6  [run]
undefined4 FUN_01499d9f(void)

{
  return DAT_0225bed8;
}

// 01499DA5  FUN_01499da5  size=16  [run]
uint FUN_01499da5(void)

{
  return -(uint)(DAT_0225be24 != 0) & DAT_0225be6c;
}

// 01499DB5  FUN_01499db5  size=57  [run]
bool FUN_01499db5(int param_1)

{
  int iVar1;
  
  if (DAT_0225be24 == 0) {
    return false;
  }
  FUN_012941d9(DAT_0225bd84);
  iVar1 = (&DAT_0225be28)[param_1];
  FUN_0129420c(DAT_0225bd84);
  return iVar1 != 0;
}

// 01499DEE  FUN_01499dee  size=94  [run]
void FUN_01499dee(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (DAT_0225be24 != 0) {
    FUN_012941d9(DAT_0225bd84);
    if (DAT_0225be48 == 1) {
      puVar2 = &DAT_0225be4c;
      puVar3 = &DAT_0225be28;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      DAT_0225be48 = 0;
    }
    FUN_0129420c(DAT_0225bd84);
    puVar2 = &DAT_0225be28;
    do {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      puVar2 = puVar2 + 1;
    } while ((int)puVar2 < 0x225be48);
  }
  return;
}

// 01499E4C  FUN_01499e4c  size=16  [run]
uint FUN_01499e4c(void)

{
  return -(uint)(DAT_0225be24 != 0) & DAT_0225bed0;
}

// 01499E5C  FUN_01499e5c  size=91  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01499e5c(undefined4 param_1)

{
  if (DAT_0225be24 != 0) {
    if (DAT_0225bed0 == 0) {
      _DAT_0225becc = param_1;
      _DAT_0225bebc = FUN_00fdbc96();
      _DAT_0225bec0 = FUN_0149b24c();
      DAT_0225bed0 = 1;
      return 1;
    }
    FUN_01293f1f(0,"E2010042609:Server frequency has already been set.");
  }
  return 0;
}

// 01499EB7  FUN_01499eb7  size=23  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_01499eb7(void)

{
  if (DAT_0225be24 == 0) {
    return (float10)60.0;
  }
  return (float10)_DAT_0225becc;
}

// 01499F9C  FUN_01499f9c  size=107  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01499f9c(void)

{
  if (DAT_0225be24 == 1) {
    if (DAT_0225be6c != 0) {
      FUN_01499c5d(DAT_0225be6c);
      DAT_0225be6c = 0;
    }
    if ((DAT_0225be70 != 0) && (DAT_0225bed4 == 0)) {
      FUN_01499bc9(DAT_0225be70);
      DAT_0225be70 = 0;
    }
    FUN_01294197(DAT_0225bd84);
    FUN_0149b240();
    DAT_0225bed0 = 0;
    _DAT_0225becc = 0x42700000;
  }
  DAT_0225be24 = DAT_0225be24 + -1;
  return;
}

// 0149A007  FUN_0149a007  size=31  [run]
void FUN_0149a007(void)

{
  if (DAT_0225be24 != 0) {
    if (DAT_0225be6c == 0) {
      FUN_01499dee();
      return;
    }
    FUN_01499ca8(DAT_0225be6c);
  }
  return;
}

// 0149A026  FUN_0149a026  size=104  [run]
void FUN_0149a026(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (DAT_0225be24 != 0) {
    FUN_012941d9(DAT_0225bd84);
    uVar1 = DAT_0225bd84;
    (&DAT_0225be4c)[param_2] = param_1;
    DAT_0225be48 = 1;
    FUN_0129420c(uVar1);
    if (param_1 == 0) {
      while (FUN_0149a007(), DAT_0225be48 != 0) {
        FUN_014996ef(10);
      }
    }
    return;
  }
  FUN_01293f1f(0,
               "E2012051810:Failed to register server function. (SVM is not initialized or is already finalized.)"
              );
  return;
}

// 0149A08E  FUN_0149a08e  size=396  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0149a08e(undefined4 param_1,undefined4 param_2)

{
  int *in_EAX;
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  undefined4 auStack_78 [8];
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  undefined4 **ppuStack_4c;
  char *pcStack_48;
  undefined4 *local_38 [4];
  undefined1 *local_28;
  undefined4 *local_24;
  char *local_20;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_0225be24 != 0) {
    if (DAT_0225bed8 == *in_EAX) {
      if ((DAT_0225bed8 != 0) || (DAT_0225bed4 == in_EAX[1])) goto LAB_0149a20f;
      pcStack_48 = "E2010021002:Server drive type are different from previous initialization.";
    }
    else {
      pcStack_48 = "E2010021001:Thread model are different from previous initialization.";
    }
    ppuStack_4c = (undefined4 **)0x0;
    uStack_50 = 0x149a0b7;
    FUN_01293f1f();
    return;
  }
  pcStack_48 = (char *)0x149a0e0;
  FUN_0149b21f();
  pcStack_48 = (char *)0x48;
  ppuStack_4c = (undefined4 **)&DAT_0225bd38;
  uStack_50 = 0x149a0ec;
  DAT_0225bd84 = FUN_01294159();
  uStack_50 = 0xb4;
  puStack_54 = &DAT_0225be28;
  uStack_58 = 0x149a101;
  FUN_0129432c();
  DAT_0225be48 = 0;
  DAT_0225bed8 = *in_EAX;
  if (*in_EAX != 0) goto LAB_0149a20f;
  ppuStack_4c = local_38;
  pcStack_48 = (char *)0x34;
  uStack_50 = 0x149a124;
  FUN_0129432c();
  iVar1 = in_EAX[1];
  local_20 = "CRI Server Manager";
  local_38[0] = (undefined4 *)&LAB_01499ece;
  if (iVar1 == 0) {
    pcStack_48 = (char *)0x48;
    ppuStack_4c = (undefined4 **)&DAT_0225be74;
    uStack_50 = 0x149a188;
    DAT_0225be70 = (undefined4 *)FUN_01499c13();
    local_38[2] = (undefined4 *)&DAT_01499ed6;
    local_28 = &LAB_01499edb;
    local_38[3] = DAT_0225be70;
    local_24 = DAT_0225be70;
  }
  else {
    if (iVar1 == 1) {
      _DAT_0225bebc = 0x11;
      _DAT_0225becc = 0x42700000;
      pcStack_48 = (char *)0x149a165;
      _DAT_0225bec0 = FUN_0149b24c();
      local_38[2] = (undefined4 *)&LAB_01499ee0;
    }
    else {
      if (iVar1 != 2) goto LAB_0149a1a3;
      local_38[2] = (undefined4 *)&DAT_01499f71;
    }
    local_28 = (undefined1 *)0x0;
    local_38[3] = &DAT_0225be28;
    local_24 = (undefined4 *)0x0;
  }
LAB_0149a1a3:
  DAT_0225bed4 = in_EAX[1];
  pcStack_48 = (char *)0x1;
  local_c = 0;
  local_8 = 2;
  DAT_0225bed0 = 0;
  ppuStack_4c = (undefined4 **)0x149a1c2;
  thunk_FUN_0149977a();
  ppuVar2 = local_38;
  puVar3 = auStack_78;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_0225be6c = FUN_01499d47(param_1,param_2);
  thunk_FUN_0149977a(0);
  if (DAT_0225be6c == 0) {
    pcStack_48 = "E2012040402:criServer Create return NULL.";
    ppuStack_4c = (undefined4 **)0x0;
    uStack_50 = 0x149a1fc;
    FUN_01293f1f();
    pcStack_48 = (char *)0x149a203;
    FUN_01499f9c();
    return;
  }
  pcStack_48 = (char *)0x2;
  ppuStack_4c = (undefined4 **)DAT_0225be6c;
  uStack_50 = 0x149a20d;
  FUN_01499cc2();
LAB_0149a20f:
  DAT_0225be24 = DAT_0225be24 + 1;
  return;
}

// 0149A21A  FUN_0149a21a  size=22  [run]
void FUN_0149a21a(void)

{
  FUN_0149a08e(&DAT_0225bd88,0x98);
  return;
}

// 0149A243  FUN_0149a243  size=14  [run]
void FUN_0149a243(int param_1)

{
  FUN_01499772(*(undefined4 *)(param_1 + 0x34));
  return;
}

// 0149A251  thunk_FUN_0149977a  size=5  [run]
void thunk_FUN_0149977a(undefined4 param_1)

{
  DAT_0225bd2c = param_1;
  return;
}

// 0149A269  FUN_0149a269  size=9  [run]
undefined2 FUN_0149a269(int param_1)

{
  return *(undefined2 *)(param_1 + 0x2c);
}

// 0149A2C4  FUN_0149a2c4  size=72  [run]
uint FUN_0149a2c4(int param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(short *)(param_1 + 0x2c) != 0) {
    iVar3 = 0;
    do {
      iVar1 = _strcmp(param_2,*(char **)(*(int *)(param_1 + 0x34) + 4 + iVar3));
      if (iVar1 == 0) break;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while ((int)uVar2 < (int)(uint)*(ushort *)(param_1 + 0x2c));
  }
  if (uVar2 == *(ushort *)(param_1 + 0x2c)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// 0149A30C  FUN_0149a30c  size=8  [run]
undefined4 FUN_0149a30c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}

// 0149A38E  FUN_0149a38e  size=153  [run]
ushort FUN_0149a38e(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_3 * 0x28 + *(int *)(param_1 + 0x34));
  if ((*(char *)((int)piVar5 + 9) == '\0') || (*(uint *)(param_1 + 0x30) <= param_2)) {
    if (((char)piVar5[2] != '\0') && (iVar3 = *piVar5, -1 < iVar3)) {
      if (iVar3 < 2) {
        bVar1 = *(byte *)(piVar5 + 6);
        goto LAB_0149a41e;
      }
      if ((iVar3 < 4) || (iVar3 < 6)) {
        return *(ushort *)(piVar5 + 6);
      }
    }
  }
  else {
    iVar3 = *piVar5;
    pbVar4 = (byte *)(*(ushort *)(param_1 + 0x2e) * param_2 + (uint)*(ushort *)((int)piVar5 + 10) +
                     *(int *)(param_1 + 0x24));
    if (-1 < iVar3) {
      if (1 < iVar3) {
        if (iVar3 < 4) {
          bVar1 = *pbVar4;
          bVar2 = pbVar4[1];
        }
        else {
          if (5 < iVar3) {
            return 0;
          }
          bVar1 = pbVar4[2];
          bVar2 = pbVar4[3];
        }
        return CONCAT11(bVar1,bVar2);
      }
      bVar1 = *pbVar4;
LAB_0149a41e:
      return (ushort)bVar1;
    }
  }
  return 0;
}

// 0149A42C  FUN_0149a42c  size=161  [run]
uint FUN_0149a42c(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  
  piVar3 = (int *)(param_3 * 0x28 + *(int *)(param_1 + 0x34));
  if ((*(char *)((int)piVar3 + 9) == '\0') || (*(uint *)(param_1 + 0x30) <= param_2)) {
    if (((char)piVar3[2] != '\0') && (iVar2 = *piVar3, -1 < iVar2)) {
      if (iVar2 < 2) {
        return (uint)*(byte *)(piVar3 + 6);
      }
      if (iVar2 < 4) {
        return (uint)*(ushort *)(piVar3 + 6);
      }
      if (iVar2 < 6) {
        return piVar3[6];
      }
    }
  }
  else {
    iVar2 = *piVar3;
    pbVar5 = (byte *)(*(ushort *)(param_1 + 0x2e) * param_2 + (uint)*(ushort *)((int)piVar3 + 10) +
                     *(int *)(param_1 + 0x24));
    if (-1 < iVar2) {
      if (iVar2 < 2) {
        return (uint)*pbVar5;
      }
      if (iVar2 < 4) {
        uVar4 = (uint)*pbVar5;
        bVar1 = pbVar5[1];
      }
      else {
        if (5 < iVar2) {
          return 0;
        }
        bVar1 = pbVar5[3];
        uVar4 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]);
      }
      return uVar4 << 8 | (uint)bVar1;
    }
  }
  return 0;
}

// 0149A4CD  thunk_FUN_0149a42c  size=5  [run]
uint thunk_FUN_0149a42c(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  
  piVar3 = (int *)(param_3 * 0x28 + *(int *)(param_1 + 0x34));
  if ((*(char *)((int)piVar3 + 9) == '\0') || (*(uint *)(param_1 + 0x30) <= param_2)) {
    if (((char)piVar3[2] != '\0') && (iVar2 = *piVar3, -1 < iVar2)) {
      if (iVar2 < 2) {
        return (uint)*(byte *)(piVar3 + 6);
      }
      if (iVar2 < 4) {
        return (uint)*(ushort *)(piVar3 + 6);
      }
      if (iVar2 < 6) {
        return piVar3[6];
      }
    }
  }
  else {
    iVar2 = *piVar3;
    pbVar5 = (byte *)(*(ushort *)(param_1 + 0x2e) * param_2 + (uint)*(ushort *)((int)piVar3 + 10) +
                     *(int *)(param_1 + 0x24));
    if (-1 < iVar2) {
      if (iVar2 < 2) {
        return (uint)*pbVar5;
      }
      if (iVar2 < 4) {
        uVar4 = (uint)*pbVar5;
        bVar1 = pbVar5[1];
      }
      else {
        if (5 < iVar2) {
          return 0;
        }
        bVar1 = pbVar5[3];
        uVar4 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]);
      }
      return uVar4 << 8 | (uint)bVar1;
    }
  }
  return 0;
}

// 0149A4D2  FUN_0149a4d2  size=202  [run]
undefined8 FUN_0149a4d2(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_3 * 0x28 + *(int *)(param_1 + 0x34);
  if ((*(char *)(iVar2 + 9) != '\0') && (param_2 < *(uint *)(param_1 + 0x30))) {
    pbVar1 = (byte *)(*(ushort *)(param_1 + 0x2e) * param_2 + (uint)*(ushort *)(iVar2 + 10) +
                     *(int *)(param_1 + 0x24));
    uVar3 = CONCAT31(CONCAT21(CONCAT11(*pbVar1,pbVar1[1]),pbVar1[2]),pbVar1[3]);
    return CONCAT44((((uint)*pbVar1 << 8 | (uVar3 & 0xffffff) >> 0x10) << 8 | (uVar3 & 0xffff) >> 8)
                    << 8 | (uint)pbVar1[3],
                    CONCAT31(CONCAT21(CONCAT11(pbVar1[4],pbVar1[5]),pbVar1[6]),pbVar1[7]));
  }
  if (*(char *)(iVar2 + 8) != '\0') {
    return *(undefined8 *)(iVar2 + 0x18);
  }
  return 0;
}

// 0149A5A1  FUN_0149a5a1  size=106  [run]
float10 FUN_0149a5a1(int param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = param_3 * 0x28 + *(int *)(param_1 + 0x34);
  if ((*(char *)(iVar2 + 9) == '\0') || (*(uint *)(param_1 + 0x30) <= param_2)) {
    if (*(char *)(iVar2 + 8) == '\0') {
      fVar3 = 0.0;
    }
    else {
      fVar3 = *(float *)(iVar2 + 0x18);
    }
  }
  else {
    puVar1 = (undefined1 *)
             (*(ushort *)(param_1 + 0x2e) * param_2 + (uint)*(ushort *)(iVar2 + 10) +
             *(int *)(param_1 + 0x24));
    fVar3 = (float)CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]);
  }
  return (float10)fVar3;
}

// 0149A60B  FUN_0149a60b  size=205  [run]
float10 FUN_0149a60b(int param_1,uint param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  float10 fVar4;
  
  iVar1 = param_3 * 0x28 + *(int *)(param_1 + 0x34);
  if ((*(char *)(iVar1 + 9) == '\0') || (*(uint *)(param_1 + 0x30) <= param_2)) {
    if (*(char *)(iVar1 + 8) == '\0') {
      fVar4 = (float10)0;
    }
    else {
      fVar4 = (float10)*(double *)(iVar1 + 0x18);
    }
  }
  else {
    pbVar2 = (byte *)(*(ushort *)(param_1 + 0x2e) * param_2 + (uint)*(ushort *)(iVar1 + 10) +
                     *(int *)(param_1 + 0x24));
    uVar3 = CONCAT31(CONCAT21(CONCAT11(*pbVar2,pbVar2[1]),pbVar2[2]),pbVar2[3]);
    fVar4 = (float10)(double)CONCAT44((((uint)*pbVar2 << 8 | (uVar3 & 0xffffff) >> 0x10) << 8 |
                                      (uVar3 & 0xffff) >> 8) << 8 | (uint)pbVar2[3],
                                      CONCAT31(CONCAT21(CONCAT11(pbVar2[4],pbVar2[5]),pbVar2[6]),
                                               pbVar2[7]));
  }
  return fVar4;
}

// 0149A6D8  FUN_0149a6d8  size=100  [run]
int FUN_0149a6d8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = param_3 * 0x28 + *(int *)(param_1 + 0x34);
  iVar1 = 0;
  if ((*(char *)(iVar3 + 9) != '\0') && (param_2 < *(uint *)(param_1 + 0x30))) {
    puVar2 = (undefined1 *)
             (*(ushort *)(param_1 + 0x2e) * param_2 + (uint)*(ushort *)(iVar3 + 10) +
             *(int *)(param_1 + 0x24));
    iVar1 = CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]),puVar2[3]);
    if (iVar1 == 0) {
      return 0;
    }
    return *(int *)(param_1 + 0x1c) + iVar1;
  }
  if (*(char *)(iVar3 + 8) != '\0') {
    iVar1 = *(int *)(iVar3 + 0x18);
  }
  return iVar1;
}

// 0149A73C  FUN_0149a73c  size=40  [run]
undefined4 FUN_0149a73c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0149a2c4(param_1,param_3);
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = FUN_0149a42c(param_1,param_2,iVar1);
  return uVar2;
}

// 0149A764  FUN_0149a764  size=40  [run]
undefined4 FUN_0149a764(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0149a2c4(param_1,param_3);
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = FUN_0149a42c(param_1,param_2,iVar1);
  return uVar2;
}

// 0149A859  FUN_0149a859  size=795  [run]
void __fastcall FUN_0149a859(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined1 *unaff_ESI;
  uint uVar4;
  
  *unaff_ESI = (char)in_EAX;
  switch(in_EAX) {
  case 0:
  case 1:
    unaff_ESI[8] = *param_1;
    break;
  case 2:
  case 3:
    *(ushort *)(unaff_ESI + 8) = CONCAT11(*param_1,param_1[1]);
    break;
  case 4:
  case 5:
    *(uint *)(unaff_ESI + 8) =
         CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
    break;
  case 6:
  case 7:
    bVar1 = *param_1;
    bVar2 = param_1[3];
    uVar4 = CONCAT31(CONCAT21(CONCAT11(bVar1,param_1[1]),param_1[2]),bVar2);
    *(uint *)(unaff_ESI + 8) =
         CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
    *(uint *)(unaff_ESI + 0xc) =
         (((uint)bVar1 << 8 | (uVar4 & 0xffffff) >> 0x10) << 8 | (uVar4 & 0xffff) >> 8) << 8 |
         (uint)bVar2;
    break;
  case 8:
    *(uint *)(unaff_ESI + 8) =
         CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
    break;
  case 9:
    uVar4 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
    *(ulonglong *)(unaff_ESI + 8) =
         CONCAT44((((uint)*param_1 << 8 | (uVar4 & 0xffffff) >> 0x10) << 8 | (uVar4 & 0xffff) >> 8)
                  << 8 | (uint)param_1[3],
                  CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]));
    break;
  case 10:
    iVar3 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_ESI + 8) = 0;
    }
    else {
      *(int *)(unaff_ESI + 8) = *(int *)(param_2 + 0x1c) + iVar3;
    }
    break;
  case 0xb:
    *(int *)(unaff_ESI + 8) =
         CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) +
         *(int *)(param_2 + 0x20);
    *(uint *)(unaff_ESI + 0xc) =
         CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
    break;
  case 0xc:
    bVar1 = *param_1;
    bVar2 = param_1[3];
    uVar4 = CONCAT31(CONCAT21(CONCAT11(bVar1,param_1[1]),param_1[2]),bVar2);
    *(uint *)(unaff_ESI + 8) =
         CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
    *(uint *)(unaff_ESI + 0xc) =
         (((uint)bVar1 << 8 | (uVar4 & 0xffffff) >> 0x10) << 8 | (uVar4 & 0xffff) >> 8) << 8 |
         (uint)bVar2;
    bVar1 = param_1[8];
    bVar2 = param_1[0xb];
    uVar4 = CONCAT31(CONCAT21(CONCAT11(bVar1,param_1[9]),param_1[10]),bVar2);
    *(uint *)(unaff_ESI + 0x10) =
         CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
    *(uint *)(unaff_ESI + 0x14) =
         (((uint)bVar1 << 8 | (uVar4 & 0xffffff) >> 0x10) << 8 | (uVar4 & 0xffff) >> 8) << 8 |
         (uint)bVar2;
  }
  return;
}

// 0149ABA9  FUN_0149aba9  size=221  [run]
int FUN_0149aba9(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  int local_8;
  
  piVar1 = (int *)(param_4 * 0x28 + *(int *)(param_1 + 0x34));
  param_5 = param_5 + -1;
  uVar3 = -param_5 - 1;
  local_8 = 0;
  if (*piVar1 == 2) {
    if (*(char *)((int)piVar1 + 9) != '\0') {
      puVar2 = (undefined1 *)
               ((uint)*(ushort *)(param_1 + 0x2e) * param_2 + (uint)*(ushort *)((int)piVar1 + 10) +
               *(int *)(param_1 + 0x24));
      do {
        local_8 = local_8 + ((uint)CONCAT11(*puVar2,puVar2[1]) + param_5 & uVar3);
        puVar2 = puVar2 + *(ushort *)(param_1 + 0x2e);
        bVar4 = param_3 != 0;
        param_3 = param_3 + -1;
      } while (bVar4);
      return local_8;
    }
    uVar3 = (uint)(ushort)((short)piVar1[6] + (short)param_5) & uVar3 & 0xffff;
  }
  else {
    if (*piVar1 != 4) {
      return 0;
    }
    if (*(char *)((int)piVar1 + 9) != '\0') {
      puVar2 = (undefined1 *)
               ((uint)*(ushort *)(param_1 + 0x2e) * param_2 + (uint)*(ushort *)((int)piVar1 + 10) +
               *(int *)(param_1 + 0x24));
      do {
        local_8 = local_8 + (CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]),puVar2[3]) +
                             param_5 & uVar3);
        puVar2 = puVar2 + *(ushort *)(param_1 + 0x2e);
        bVar4 = param_3 != 0;
        param_3 = param_3 + -1;
      } while (bVar4);
      return local_8;
    }
    uVar3 = piVar1[6] + param_5 & uVar3;
  }
  return uVar3 * param_3;
}

// 0149AC86  FUN_0149ac86  size=248  [run]
int FUN_0149ac86(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  bool bVar4;
  int local_c;
  
  local_c = 0;
  piVar1 = (int *)(param_4 * 0x28 + *(int *)(param_1 + 0x34));
  param_5 = param_5 + -1;
  uVar2 = -param_5 - 1;
  if (*piVar1 == 2) {
    if (*(char *)((int)piVar1 + 9) == '\0') {
      local_c = __allmul((short)piVar1[6] + (short)param_5 & (ushort)uVar2,0,param_3,0);
    }
    else {
      puVar3 = (undefined1 *)
               ((uint)*(ushort *)(param_1 + 0x2e) * param_2 + (uint)*(ushort *)((int)piVar1 + 10) +
               *(int *)(param_1 + 0x24));
      do {
        local_c = local_c + ((uint)CONCAT11(*puVar3,puVar3[1]) + param_5 & uVar2);
        puVar3 = puVar3 + *(ushort *)(param_1 + 0x2e);
        bVar4 = param_3 != 0;
        param_3 = param_3 + -1;
      } while (bVar4);
    }
  }
  else if (*piVar1 == 4) {
    if (*(char *)((int)piVar1 + 9) == '\0') {
      local_c = (piVar1[6] + param_5 & uVar2) * param_3;
    }
    else {
      puVar3 = (undefined1 *)
               ((uint)*(ushort *)(param_1 + 0x2e) * param_2 + (uint)*(ushort *)((int)piVar1 + 10) +
               *(int *)(param_1 + 0x24));
      do {
        local_c = local_c + (CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]) +
                             param_5 & uVar2);
        puVar3 = puVar3 + *(ushort *)(param_1 + 0x2e);
        bVar4 = param_3 != 0;
        param_3 = param_3 + -1;
      } while (bVar4);
    }
  }
  return local_c;
}

// 0149AD7E  FUN_0149ad7e  size=121  [run]
undefined4 FUN_0149ad7e(uint param_1,int param_2,char *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *_Str1;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  iVar4 = param_1;
  iVar2 = *(int *)(param_1 + 0x3c + param_2 * 8);
  puVar1 = (uint *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x38 + param_2 * 8);
  param_1 = 0;
  uVar7 = *puVar1 - 1 >> 1;
  uVar9 = *(undefined4 *)(iVar2 + uVar7 * 4);
  uVar6 = *puVar1;
  while( true ) {
    _Str1 = (char *)FUN_0149a6d8(iVar4,uVar9,uVar3);
    if (_Str1 == (char *)0x0) {
      return 0xffffffff;
    }
    iVar5 = _strcmp(_Str1,param_3);
    if (iVar5 == 0) break;
    if (iVar5 < 1) {
      param_1 = uVar7 + 1;
      uVar7 = uVar6;
    }
    if (param_1 == uVar7) {
      return 0xffffffff;
    }
    uVar8 = (uVar7 - 1) + param_1 >> 1;
    uVar9 = *(undefined4 *)(iVar2 + uVar8 * 4);
    uVar6 = uVar7;
    uVar7 = uVar8;
  }
  return *(undefined4 *)(iVar2 + uVar7 * 4);
}

// 0149ADF7  FUN_0149adf7  size=77  [run]
undefined4 FUN_0149adf7(int param_1,uint param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = param_3 * 0x28 + *(int *)(param_1 + 0x34);
  if ((*(char *)(iVar1 + 9) == '\0') || (*(uint *)(param_1 + 0x30) <= param_2)) {
    puVar3 = (undefined4 *)(iVar1 + 0x10);
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_4 = *puVar3;
      puVar3 = puVar3 + 1;
      param_4 = param_4 + 1;
    }
  }
  else {
    FUN_0149a859();
  }
  return 1;
}

// 0149AE44  FUN_0149ae44  size=181  [run]
int FUN_0149ae44(int param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  bVar1 = *param_2;
  *param_3 = bVar1 & 0xf;
  pbVar4 = param_2 + 1;
  *(byte *)(param_3 + 2) = bVar1 >> 5 & 1;
  if ((bVar1 & 0x10) == 0) {
    param_3[1] = 0;
  }
  else {
    iVar2 = CONCAT31(CONCAT21(CONCAT11(*pbVar4,param_2[2]),param_2[3]),param_2[4]);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(param_1 + 0x1c) + iVar2;
    }
    param_3[1] = uVar3;
    iVar2 = FUN_014a383d(10);
    pbVar4 = pbVar4 + iVar2;
  }
  if ((bVar1 >> 5 & 1) == 0) {
    param_3[6] = 0;
    param_3[7] = 0;
    *(undefined1 *)(param_3 + 4) = 0xff;
  }
  else {
    FUN_0149a859();
    iVar2 = FUN_014a383d(*param_3);
    pbVar4 = pbVar4 + iVar2;
  }
  *(byte *)((int)param_3 + 9) = bVar1 >> 6 & 1;
  return (int)pbVar4 - (int)param_2;
}

// 0149AEF9  FUN_0149aef9  size=173  [run]
uint FUN_0149aef9(uint param_1,uint param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *local_18;
  
  iVar1 = param_1;
  piVar3 = (int *)(param_2 * 0x28 + *(int *)(param_1 + 0x34));
  if ((*(char *)((int)piVar3 + 9) == '\0') || (*piVar3 != 10)) {
    param_2 = 0xffffffff;
  }
  else {
    param_1 = 0;
    piVar3 = (int *)(iVar1 + 0x38);
    do {
      if (*piVar3 == param_2) break;
      param_1 = param_1 + 1;
      piVar3 = piVar3 + 2;
    } while (param_1 < 4);
    if (param_1 < 4) {
      param_2 = FUN_0149ad7e(iVar1,param_1,param_3);
    }
    else {
      param_2 = 0;
      if (*(int *)(iVar1 + 0x30) != 0) {
        do {
          FUN_0149a859();
          iVar2 = _strcmp(param_3,local_18);
          if (iVar2 == 0) {
            return param_2;
          }
          param_2 = param_2 + 1;
        } while (param_2 < *(uint *)(iVar1 + 0x30));
      }
    }
  }
  return param_2;
}

// 0149AFA6  FUN_0149afa6  size=112  [run]
uint FUN_0149afa6(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int local_14;
  
  piVar1 = (int *)(param_2 * 0x28 + *(int *)(param_1 + 0x34));
  if (((*(char *)((int)piVar1 + 9) != '\0') && (*piVar1 == 4)) &&
     (param_2 = 0, *(int *)(param_1 + 0x30) != 0)) {
    do {
      FUN_0149a859();
      if (param_3 == local_14) {
        return param_2;
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(uint *)(param_1 + 0x30));
  }
  return 0xffffffff;
}

// 0149B020  FUN_0149b020  size=25  [run]
uint FUN_0149b020(uint param_1,uint param_2)

{
  if (param_1 % param_2 != 0) {
    param_1 = (param_1 - param_1 % param_2) + param_2;
  }
  return param_1;
}

// 0149B039  FUN_0149b039  size=28  [run]
void FUN_0149b039(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (*(code *)*param_1)(param_1[2],param_2,param_3,param_4,param_5);
  return;
}

// 0149B055  FUN_0149b055  size=17  [run]
void FUN_0149b055(int param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 8),param_2);
  return;
}

// 0149B071  FUN_0149b071  size=75  [run]
void FUN_0149b071(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  if ((param_1[0xd] != 0) && (iVar1 != 0)) {
    FUN_0149b055(iVar1,param_1[0x17]);
  }
  uVar2 = 0;
  piVar3 = param_1 + 0xf;
  do {
    if (*piVar3 != 0) {
      FUN_014a3d37(param_1,uVar2);
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 2;
  } while (uVar2 < 4);
  FUN_0149b055(iVar1,param_1[0x16]);
  return;
}

// 0149B0D7  FUN_0149b0d7  size=305  [run]
int * FUN_0149b0d7(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *_Dst;
  uint uVar1;
  void *_Dst_00;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  size_t _Size;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_01293f69(0,"E06100303",0xfffffffe);
    return (int *)0x0;
  }
  _Dst = (int *)(*(code *)*param_1)(param_1[2],0x60,"@UTF1",0x10,param_2);
  if (_Dst == (int *)0x0) {
    if (DAT_0225bedc == 0) {
      return (int *)0x0;
    }
    pcVar5 = "E06100310";
  }
  else {
    _memset(_Dst,0,0x60);
    piVar4 = _Dst;
    if (((uint)_Dst & 0xf) != 0) {
      piVar4 = (int *)((int)_Dst + (0x10 - ((uint)_Dst & 0xf)));
    }
    uVar1 = FUN_014a3984(param_3,param_4);
    _Size = (uVar1 & 0xffff) * 0x28;
    _Dst_00 = (void *)FUN_0149b039(param_1,_Size,"@UTF2",0x10,param_2);
    if (_Dst_00 != (void *)0x0) {
      _memset(_Dst_00,0,_Size);
      pvVar2 = _Dst_00;
      if (((uint)_Dst_00 & 0xf) != 0) {
        pvVar2 = (void *)((int)_Dst_00 + (0x10 - ((uint)_Dst_00 & 0xf)));
      }
      iVar3 = FUN_014a3db7(piVar4,_Dst,uVar1 & 0xffff,pvVar2,_Dst_00,param_3,param_4,param_1,param_2
                          );
      if (iVar3 == 0) {
        FUN_0149b071(piVar4);
        return (int *)0x0;
      }
      return piVar4;
    }
    piVar4[0x16] = (int)_Dst;
    *piVar4 = (int)(piVar4 + 1);
    piVar4[1] = *param_1;
    piVar4[2] = param_1[1];
    piVar4[3] = param_1[2];
    piVar4[4] = param_2;
    piVar4[0xd] = 0;
    piVar4[0x17] = 0;
    FUN_0149b071(piVar4);
    if (DAT_0225bedc == 0) {
      return (int *)0x0;
    }
    pcVar5 = "E06100312";
  }
  FUN_01293f69(0,pcVar5,0xfffffffd);
  return (int *)0x0;
}

// 0149B208  FUN_0149b208  size=23  [run]
void FUN_0149b208(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0149b0d7(param_1,1,param_2,param_3);
  return;
}

// 0149B21F  FUN_0149b21f  size=33  [run]
void FUN_0149b21f(void)

{
  DAT_0225bee0 = DAT_0225bee0 + 1;
  if (DAT_0225bee0 == 1) {
    FUN_014a3f2f();
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_0225bee8);
  }
  return;
}

// 0149B240  FUN_0149b240  size=12  [run]
int FUN_0149b240(void)

{
  DAT_0225bee0 = DAT_0225bee0 + -1;
  return DAT_0225bee0;
}

// 0149B24C  FUN_0149b24c  size=54  [run]
void FUN_0149b24c(void)

{
  undefined8 uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = __allmul(local_c.s.LowPart,local_c.s.HighPart,1000,0);
  __alldiv(uVar1,DAT_0225bee8,DAT_0225beec);
  return;
}

// 0149B282  FUN_0149b282  size=9  [run]
int FUN_0149b282(int param_1,int param_2)

{
  return param_2 - param_1;
}

// 0149B28B  FUN_0149b28b  size=21  [run]
void FUN_0149b28b(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_1;
  param_3[1] = param_1;
  param_3[2] = param_2;
  return;
}

// 0149B2A0  FUN_0149b2a0  size=1  [run]
void FUN_0149b2a0(void)

{
  return;
}

// 0149B2A1  FUN_0149b2a1  size=34  [run]
void FUN_0149b2a1(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_1 + 4) = param_2 + (((param_3 - 1) + *(int *)(param_1 + 4)) / param_3) * param_3;
  return;
}

// 0149B2C3  FUN_0149b2c3  size=5  [run]
undefined4 FUN_0149b2c3(undefined4 param_1)

{
  return param_1;
}

// 0149B2C9  FUN_0149b2c9  size=110  [run]
undefined8
FUN_0149b2c9(int param_1,int param_2,int param_3,undefined4 param_4,void *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  FID_conflict__memcpy((void *)(param_1 + 4),(void *)(param_3 + -0x100 + param_2),0x100);
  iVar1 = FUN_014a3f59(0,param_2,param_3 + -0x100,(int)param_5 + 0x100,param_6 + -0x100);
  if (iVar1 < 1) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    FID_conflict__memcpy(param_5,(void *)(param_1 + 4),0x100);
    iVar1 = iVar1 + 0x100;
    iVar2 = iVar1 >> 0x1f;
  }
  return CONCAT44(iVar2,iVar1);
}

// 0149B337  FUN_0149b337  size=49  [run]
void FUN_0149b337(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int local_8;
  
  FUN_014a41a9(param_1,param_2,&local_8);
  if (local_8 < 0) {
    *param_3 = -1;
    return;
  }
  *param_3 = local_8 + 0x100;
  return;
}

// 0149B368  FUN_0149b368  size=35  [run]
bool FUN_0149b368(void *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 8) {
    return false;
  }
  iVar1 = _memcmp(param_1,"CRILAYLA",8);
  return iVar1 == 0;
}

// 0149B38B  FUN_0149b38b  size=1  [run]
void FUN_0149b38b(void)

{
  return;
}

// 0149B38C  FUN_0149b38c  size=60  [run]
void FUN_0149b38c(undefined4 *param_1)

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
  return;
}

// 0149B3C8  FUN_0149b3c8  size=1  [run]
void FUN_0149b3c8(void)

{
  return;
}

// 0149B3C9  FUN_0149b3c9  size=72  [run]
undefined4 FUN_0149b3c9(undefined4 *param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = (undefined4 *)*param_1;
  }
  else if (param_2 == 1) {
    param_1 = (undefined4 *)param_1[3];
  }
  else if (param_2 == 2) {
    param_1 = (undefined4 *)param_1[6];
  }
  else if (param_2 == 3) {
    param_1 = (undefined4 *)param_1[9];
  }
  else {
    if (param_2 != 4) {
      return 0;
    }
    param_1 = (undefined4 *)param_1[0xc];
  }
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *param_1;
}

// 0149B411  FUN_0149b411  size=67  [run]
undefined4 FUN_0149b411(int param_1,int param_2)

{
  if (param_2 == 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  if (param_2 == 1) {
    return *(undefined4 *)(param_1 + 0x14);
  }
  if (param_2 == 2) {
    return *(undefined4 *)(param_1 + 0x20);
  }
  if (param_2 != 3) {
    if (param_2 != 4) {
      return 0;
    }
    return *(undefined4 *)(param_1 + 0x38);
  }
  return *(undefined4 *)(param_1 + 0x2c);
}

// 0149B454  FUN_0149b454  size=48  [run]
undefined4 FUN_0149b454(int param_1,int param_2)

{
  if ((param_2 != 0) && (param_2 != 1)) {
    if (param_2 == 2) {
      return *(undefined4 *)(param_1 + 0x3c);
    }
    if (param_2 == 3) {
      return *(undefined4 *)(param_1 + 0x40);
    }
    if (param_2 == 4) {
      return *(undefined4 *)(param_1 + 0x44);
    }
  }
  return 0;
}

// 0149B484  FUN_0149b484  size=14  [run]
int FUN_0149b484(int param_1)

{
  return *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x3c);
}

// 0149B492  FUN_0149b492  size=80  [run]
undefined4 __fastcall FUN_0149b492(int param_1)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)*in_EAX;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    iVar1 = puVar2[1];
    *in_EAX = iVar1;
    if (iVar1 == 0) {
      in_EAX[1] = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    puVar2 = (undefined4 *)in_EAX[1];
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    iVar1 = puVar2[2];
    in_EAX[1] = iVar1;
    if (iVar1 == 0) {
      *in_EAX = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  puVar2[1] = 0;
  puVar2[2] = 0;
  in_EAX[2] = in_EAX[2] + -1;
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar2;
}

// 0149B4E2  FUN_0149b4e2  size=35  [run]
void FUN_0149b4e2(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = param_1;
  return;
}

// 0149B505  FUN_0149b505  size=1  [run]
void FUN_0149b505(void)

{
  return;
}

// 0149B506  FUN_0149b506  size=7  [run]
undefined4 FUN_0149b506(undefined4 *param_1)

{
  return *param_1;
}

// 0149B50D  FUN_0149b50d  size=8  [run]
undefined4 FUN_0149b50d(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 0149B515  FUN_0149b515  size=8  [run]
undefined4 FUN_0149b515(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0149B51D  FUN_0149b51d  size=12  [run]
void FUN_0149b51d(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 0149B529  FUN_0149b529  size=12  [run]
void FUN_0149b529(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// 0149B535  FUN_0149b535  size=8  [run]
undefined4 FUN_0149b535(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 0149B53D  FUN_0149b53d  size=8  [run]
int FUN_0149b53d(int param_1)

{
  return param_1 + 0x14;
}

// 0149B545  FUN_0149b545  size=12  [run]
void FUN_0149b545(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

// 0149B551  FUN_0149b551  size=8  [run]
undefined4 FUN_0149b551(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// 0149B559  FUN_0149b559  size=36  [run]
void __fastcall FUN_0149b559(int *param_1)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = in_EAX + 0x14;
  if (param_1[1] == 0) {
    *param_1 = iVar1;
  }
  else {
    *(undefined4 *)(in_EAX + 0x18) = 0;
    *(int *)(in_EAX + 0x1c) = param_1[1];
    *(int *)(param_1[1] + 4) = iVar1;
  }
  param_1[2] = param_1[2] + 1;
  param_1[1] = iVar1;
  return;
}

// 0149B57D  FUN_0149b57d  size=107  [run]
int FUN_0149b57d(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  if (((((unaff_EDI == 0) || (unaff_EDI == 1)) || (unaff_EDI == 2)) ||
      ((unaff_EDI == 3 || (unaff_EDI == 4)))) &&
     ((iVar1 = FUN_0149b492(), iVar1 != 0 && (-1 < unaff_EDI)))) {
    if (unaff_EDI < 2) {
      return iVar1;
    }
    if (unaff_EDI == 2) {
      *(int *)(unaff_ESI + 0x3c) =
           *(int *)(unaff_ESI + 0x3c) + (*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8));
      return iVar1;
    }
    if (unaff_EDI == 3) {
      *(int *)(unaff_ESI + 0x40) =
           *(int *)(unaff_ESI + 0x40) + (*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8));
      return iVar1;
    }
    if (unaff_EDI == 4) {
      *(int *)(unaff_ESI + 0x44) =
           *(int *)(unaff_ESI + 0x44) + (*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8));
      return iVar1;
    }
  }
  return 0;
}

// 0149B5F5  FUN_0149b5f5  size=130  [run]
void FUN_0149b5f5(int param_1,int param_2,int param_3)

{
  if ((param_3 != 0) && (param_3 != 1)) {
    if (param_3 == 2) {
      FUN_0149b559();
      *(int *)(param_1 + 0x3c) =
           *(int *)(param_1 + 0x3c) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 0xc));
    }
    else if (param_3 == 3) {
      FUN_0149b559();
      *(int *)(param_1 + 0x40) =
           *(int *)(param_1 + 0x40) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 0xc));
    }
    else if (param_3 == 4) {
      FUN_0149b559();
      *(int *)(param_1 + 0x44) =
           *(int *)(param_1 + 0x44) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 0xc));
    }
    return;
  }
  FUN_0149b559();
  return;
}

// 0149B677  FUN_0149b677  size=20  [run]
void FUN_0149b677(void)

{
  FUN_0149b57d();
  return;
}

// 0149B68B  FUN_0149b68b  size=21  [run]
void FUN_0149b68b(void)

{
  FUN_0149b57d();
  return;
}

// 0149B6A0  FUN_0149b6a0  size=75  [run]
undefined4 FUN_0149b6a0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)*param_1;
  }
  else if (param_2 == 1) {
    piVar1 = (int *)param_1[3];
  }
  else if (param_2 == 2) {
    piVar1 = (int *)param_1[6];
  }
  else if (param_2 == 3) {
    piVar1 = (int *)param_1[9];
  }
  else {
    if (param_2 != 4) {
      return 0;
    }
    piVar1 = (int *)param_1[0xc];
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *(undefined4 *)(*piVar1 + 8);
}

// 0149B6EB  FUN_0149b6eb  size=99  [run]
void FUN_0149b6eb(undefined4 param_1)

{
  int iVar1;
  
  while (iVar1 = FUN_0149b677(param_1,4), iVar1 != 0) {
    FUN_0149b559();
  }
  while (iVar1 = FUN_0149b677(param_1,3), iVar1 != 0) {
    FUN_0149b559();
  }
  while (iVar1 = FUN_0149b677(param_1,2), iVar1 != 0) {
    FUN_0149b559();
  }
  while (iVar1 = FUN_0149b677(param_1,1), iVar1 != 0) {
    FUN_0149b559();
  }
  return;
}

// 0149B787  FUN_0149b787  size=118  [run]
void FUN_0149b787(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_ESI + 0x1c) == unaff_EDI) {
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  }
  *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x30) + -1;
  fVar2 = *(float *)(unaff_ESI + 0x3c);
  iVar3 = (**(code **)(*(int *)(unaff_EDI + 4) + 0xc))(*(undefined4 *)(unaff_EDI + 8));
  iVar4 = *(int *)(unaff_ESI + 0x20);
  iVar1 = unaff_EDI + 0xc;
  *(float *)(unaff_ESI + 0x3c) = fVar2 - (float)iVar3;
  if (iVar1 == iVar4) {
    iVar1 = *(int *)(iVar4 + 4);
    *(int *)(unaff_ESI + 0x20) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_ESI + 0x24) = 0;
    }
  }
  else if (iVar4 != 0) {
    do {
      iVar3 = *(int *)(iVar4 + 4);
      if (iVar3 == iVar1) break;
      iVar4 = iVar3;
    } while (iVar3 != 0);
    if ((iVar4 != 0) &&
       (*(undefined4 *)(iVar4 + 4) = *(undefined4 *)(*(int *)(iVar4 + 4) + 4),
       iVar1 == *(int *)(unaff_ESI + 0x24))) {
      *(int *)(unaff_ESI + 0x24) = iVar4;
    }
  }
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(int *)(unaff_ESI + 0x28) = *(int *)(unaff_ESI + 0x28) + -1;
  return;
}

// 0149B7FD  FUN_0149b7fd  size=112  [run]
float10 FUN_0149b7fd(float param_1,float param_2,int param_3,int param_4)

{
  float10 fVar1;
  
  param_1 = (param_1 * 2.1474836e+09) /
            (((float)(param_3 << 3) / param_1 + param_2) * (float)param_4 * param_1 + 2.1474836e+09)
  ;
  if (DAT_01b34838 != 0) {
    fVar1 = (float10)FUN_00fdef84((double)param_4);
    param_1 = param_1 / (float)fVar1;
  }
  return (float10)param_1;
}

// 0149B86D  FUN_0149b86d  size=170  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0149b86d(float param_1,float param_2,float param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_0149b7fd(param_1,param_3,param_4,param_5);
  if (param_2 <= (float)fVar2) {
    fVar2 = (float10)(((float)(param_4 << 3) / param_1 +
                       ((float)(param_5 + 1) * param_3 * param_1) / (param_1 - param_2) + 0.001) *
                     _DAT_01b3483c);
  }
  else {
    uVar1 = FUN_00fdbc96();
    FUN_01293f35(0,
                 "E2010052705:too high bit-rate. (Decrease max_bps of CriAtomDbasConfig under %u.)",
                 uVar1);
    fVar2 = (float10)-1.0;
  }
  return fVar2;
}

// 0149B937  FUN_0149b937  size=65  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0149b937(void)

{
  float fVar1;
  int in_EAX;
  
  fVar1 = _DAT_0225bf18;
  if (DAT_0225bf1c == 0) {
    fVar1 = *(float *)(in_EAX + 8);
  }
  return (float10)(32768.0 / *(float *)(in_EAX + 0x10) +
                  *(float *)(in_EAX + 0x14) + fVar1 + *(float *)(in_EAX + 4));
}

// 0149B978  FUN_0149b978  size=44  [run]
float10 FUN_0149b978(void)

{
  int in_EAX;
  
  return (float10)(32768.0 / *(float *)(in_EAX + 0x10) +
                  *(float *)(in_EAX + 0xc) + *(float *)(in_EAX + 4) + *(float *)(in_EAX + 0x14));
}

// 0149B9B8  FUN_0149b9b8  size=22  [run]
undefined4 FUN_0149b9b8(void)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    FUN_0149cd40(0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0x4c0;
}

// 0149B9CE  FUN_0149b9ce  size=12  [run]
bool FUN_0149b9ce(void)

{
  return 0 < DAT_0225bf10;
}

// 0149B9DA  FUN_0149b9da  size=15  [run]
float10 FUN_0149b9da(int param_1)

{
  return (float10)*(float *)((&DAT_0225bef0)[param_1] + 0x44);
}

// 0149BABE  FUN_0149babe  size=25  [run]
void FUN_0149babe(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_01294197(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

// 0149BAD7  FUN_0149bad7  size=151  [run]
bool __fastcall FUN_0149bad7(undefined4 *param_1)

{
  float fVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  iVar2 = in_EAX + 0xc;
  if (param_1[9] == 0) {
    param_1[8] = iVar2;
  }
  else {
    *(undefined4 *)(in_EAX + 0x10) = 0;
    *(int *)(param_1[9] + 4) = iVar2;
  }
  param_1[10] = param_1[10] + 1;
  param_1[0xc] = param_1[0xc] + 1;
  param_1[9] = iVar2;
  iVar2 = (**(code **)(*(int *)(in_EAX + 4) + 0xc))(*(undefined4 *)(in_EAX + 8));
  param_1[0xf] = (float)iVar2 + (float)param_1[0xf];
  fVar4 = (float10)FUN_0149b7fd(param_1[0x10],param_1[0xd],*param_1,param_1[0xc]);
  fVar1 = (float)param_1[0xf];
  if (fVar1 > (float)fVar4) {
    FUN_0149b787();
    uVar3 = FUN_00fdbc96();
    FUN_01293f35(0,
                 "E2010071601:too high streaming bit-rate. (limit total bps is %u. cannot start streaming)"
                 ,uVar3);
  }
  return fVar1 <= (float)fVar4;
}

// 0149BB6E  FUN_0149bb6e  size=119  [run]
undefined4 FUN_0149bb6e(float param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  float10 fVar2;
  
  unaff_ESI[0xf] = ((float)unaff_ESI[0xf] - param_1) + param_2;
  fVar2 = (float10)FUN_0149b7fd(unaff_ESI[0x10],unaff_ESI[0xd],*unaff_ESI,unaff_ESI[0xc]);
  if ((float)fVar2 < (float)unaff_ESI[0xf]) {
    unaff_ESI[0xf] = ((float)unaff_ESI[0xf] - param_2) + param_1;
    uVar1 = FUN_00fdbc96();
    FUN_01293f35(0,
                 "E10092103B:too high streaming bit-rate. (limit total bps is %u. cannot start streaming)"
                 ,uVar1);
    return 0;
  }
  return 1;
}

// 0149BC01  FUN_0149bc01  size=769  [run]
void FUN_0149bc01(void)

{
  undefined4 uVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *unaff_ESI;
  float10 fVar9;
  float *local_8;
  
  iVar6 = unaff_ESI[0xc];
  if (iVar6 == 0) {
    unaff_ESI[0x11] = 0;
    return;
  }
  if (iVar6 == 1) {
    uVar1 = unaff_ESI[0xe];
  }
  else {
    uVar1 = unaff_ESI[0xd];
  }
  fVar9 = (float10)FUN_0149b86d(unaff_ESI[0x10],unaff_ESI[0xf],uVar1,*unaff_ESI,iVar6);
  puVar8 = (undefined4 *)unaff_ESI[8];
  fVar2 = (float)fVar9;
  local_8 = (float *)0x0;
  unaff_ESI[0x11] = fVar2;
  bVar5 = true;
  if (puVar8 != (undefined4 *)0x0) {
    do {
      pfVar3 = (float *)*puVar8;
      iVar6 = (**(code **)((int)pfVar3[1] + 0x14))(pfVar3[2]);
      if ((iVar6 == 0) && (iVar6 = (**(code **)pfVar3[1])(pfVar3[2]), iVar6 != 0)) {
        iVar6 = (**(code **)((int)pfVar3[1] + 4))(pfVar3[2]);
        iVar7 = (**(code **)((int)pfVar3[1] + 0xc))(pfVar3[2]);
        fVar4 = (float)(iVar6 << 3) / (float)iVar7;
        if (fVar2 <= fVar4) {
          *pfVar3 = fVar2;
          iVar6 = (**(code **)((int)pfVar3[1] + 0x18))(pfVar3[2]);
          if ((iVar6 != 0) && ((float)unaff_ESI[5] == 0.0)) {
            (**(code **)((int)pfVar3[1] + 0x10))(pfVar3[2],0);
          }
        }
        else {
          iVar6 = (**(code **)((int)pfVar3[1] + 0x1c))();
          if ((iVar6 != 0) && (fVar4 < 3.4028235e+38)) {
            if (fVar2 != *pfVar3) {
              bVar5 = false;
              *pfVar3 = fVar2;
            }
            (**(code **)((int)pfVar3[1] + 0xc))(pfVar3[2]);
            iVar6 = FUN_00fdbc60();
            iVar7 = FUN_00fdbc60();
            local_8 = (float *)(iVar6 + ((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3));
            if ((int)local_8 < 0x8001) {
              local_8 = (float *)0x8000;
            }
            (**(code **)((int)pfVar3[1] + 0x10))(pfVar3[2],local_8);
            local_8 = pfVar3;
          }
        }
      }
      puVar8 = (undefined4 *)puVar8[1];
    } while (puVar8 != (undefined4 *)0x0);
    if (local_8 != (float *)0x0) {
      unaff_ESI[7] = local_8;
    }
    if (!bVar5) {
      return;
    }
  }
  for (puVar8 = (undefined4 *)unaff_ESI[8]; puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)puVar8[1]) {
    pfVar3 = (float *)*puVar8;
    iVar6 = (**(code **)pfVar3[1])(pfVar3[2]);
    if ((iVar6 != 0) && (iVar6 = (**(code **)((int)pfVar3[1] + 0x14))(pfVar3[2]), iVar6 == 0)) {
      iVar6 = (**(code **)((int)pfVar3[1] + 0x18))(pfVar3[2]);
      if (iVar6 == 0) {
        iVar6 = (**(code **)((int)pfVar3[1] + 0x1c))(pfVar3[2]);
        if (iVar6 == 0) {
          bVar5 = false;
          (**(code **)((int)pfVar3[1] + 0xc))(pfVar3[2]);
          local_8 = (float *)FUN_00fdbc60();
          (**(code **)((int)pfVar3[1] + 8))(pfVar3[2]);
          (**(code **)((int)pfVar3[1] + 4))(pfVar3[2]);
          if ((int)local_8 < 0x8001) {
            local_8 = (float *)0x8000;
          }
          *pfVar3 = fVar2;
          (**(code **)((int)pfVar3[1] + 0x10))(pfVar3[2],local_8);
          local_8 = pfVar3;
        }
      }
      else {
        (**(code **)((int)pfVar3[1] + 0x10))(pfVar3[2],0);
      }
    }
  }
  if (local_8 != (float *)0x0) {
    unaff_ESI[7] = local_8;
  }
  if (((bVar5) && (iVar6 = unaff_ESI[7], iVar6 != 0)) &&
     (iVar6 = (**(code **)(*(int *)(iVar6 + 4) + 0x14))(*(undefined4 *)(iVar6 + 8)), iVar6 == 0)) {
    iVar6 = (*(code *)**(undefined4 **)(unaff_ESI[7] + 4))(*(undefined4 *)(unaff_ESI[7] + 8));
    if (iVar6 != 0) {
      (**(code **)(*(int *)(unaff_ESI[7] + 4) + 0xc))(*(undefined4 *)(unaff_ESI[7] + 8));
      local_8 = (float *)FUN_00fdbc60();
      iVar6 = unaff_ESI[7];
      iVar7 = (**(code **)(*(int *)(iVar6 + 4) + 8))(*(undefined4 *)(iVar6 + 8));
      iVar6 = (**(code **)(*(int *)(iVar6 + 4) + 4))(*(undefined4 *)(iVar6 + 8));
      if ((int)local_8 < 0x8001) {
        local_8 = (float *)0x8000;
      }
      (**(code **)(*(int *)(unaff_ESI[7] + 4) + 0x10))(*(undefined4 *)(unaff_ESI[7] + 8),local_8);
      if ((int)local_8 < iVar7 - iVar6) {
        return;
      }
    }
    unaff_ESI[7] = 0;
  }
  return;
}

// 0149BF02  FUN_0149bf02  size=107  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0149bf02(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *extraout_EDX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 local_24 [6];
  undefined4 local_c;
  float local_8;
  
  puVar1 = (undefined4 *)FUN_0149cd40(DAT_0225bf14);
  puVar3 = puVar1;
  puVar4 = local_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (DAT_0225bf1c != 0) {
    local_24[2] = _DAT_0225bf18;
  }
  local_c = puVar1[4];
  fVar5 = (float10)FUN_0149b937();
  local_8 = (float)fVar5;
  FUN_0149b86d(local_c,param_1,local_8,*extraout_EDX,param_2);
  return;
}

// 0149BF6D  FUN_0149bf6d  size=50  [run]
void FUN_0149bf6d(void)

{
  undefined4 *puVar1;
  
  if (DAT_0225bf10 != 0) {
    if (DAT_0225bf10 == 1) {
      puVar1 = &DAT_0225bef0;
      do {
        FUN_0149babe(*puVar1);
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      } while ((int)puVar1 < 0x225bf10);
    }
    DAT_0225bf10 = DAT_0225bf10 + -1;
  }
  return;
}

// 0149BF9F  FUN_0149bf9f  size=43  [run]
void FUN_0149bf9f(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (&DAT_0225bef0)[param_2];
  FUN_012941d9(*(undefined4 *)(iVar1 + 0x18));
  FUN_0149b787();
  FUN_0129420c(*(undefined4 *)(iVar1 + 0x18));
  return;
}

// 0149BFCA  FUN_0149bfca  size=202  [run]
undefined4 * FUN_0149bfca(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 extraout_ST0;
  undefined1 local_10 [12];
  
  FUN_0149b28b(param_2,param_3,local_10);
  puVar1 = (undefined4 *)FUN_0149b2a1(local_10,0x48,8);
  puVar4 = puVar1;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1[6] = 0;
  puVar1[7] = 0;
  iVar3 = FUN_0149b937();
  puVar1[0xd] = (float)extraout_ST0;
  puVar1[0xe] = 32768.0 / *(float *)(iVar3 + 0x10) +
                *(float *)(iVar3 + 0xc) + *(float *)(iVar3 + 4) + *(float *)(iVar3 + 0x14);
  puVar1[0x10] = *(undefined4 *)(iVar3 + 0x10);
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  uVar2 = FUN_0149b2a1(local_10,0x48,1);
  iVar3 = FUN_01294159(uVar2,0x48);
  puVar1[6] = iVar3;
  if (iVar3 == 0) {
    FUN_01293f1f(0,"E09030326B:Failed in criCs_Create().");
    if (puVar1[6] != 0) {
      FUN_01294197(puVar1[6]);
      puVar1[6] = 0;
    }
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[0x11] = 0;
  }
  return puVar1;
}

// 0149C0EA  FUN_0149c0ea  size=30  [run]
void FUN_0149c0ea(int param_1)

{
  FUN_012941d9(*(undefined4 *)(param_1 + 0x18));
  FUN_0149bc01();
  FUN_0129420c(*(undefined4 *)(param_1 + 0x18));
  return;
}

// 0149C108  FUN_0149c108  size=71  [run]
undefined4 FUN_0149c108(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (DAT_0225bf10 < 1) {
    puVar2 = &DAT_0225bef0;
    do {
      uVar1 = FUN_0149cd40(0);
      uVar1 = FUN_0149bfca(uVar1,param_1,0x98);
      param_1 = param_1 + 0x98;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    } while ((int)puVar2 < 0x225bf10);
  }
  DAT_0225bf10 = DAT_0225bf10 + 1;
  return 1;
}

// 0149C14F  FUN_0149c14f  size=27  [run]
void FUN_0149c14f(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_0225bef0;
  do {
    FUN_0149c0ea(*puVar1);
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x225bf10);
  return;
}

// 0149C16A  FUN_0149c16a  size=49  [run]
undefined4 FUN_0149c16a(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (&DAT_0225bef0)[param_2];
  FUN_012941d9(*(undefined4 *)(iVar1 + 0x18));
  uVar2 = FUN_0149bad7();
  FUN_0129420c(*(undefined4 *)(iVar1 + 0x18));
  return uVar2;
}

// 0149C19B  FUN_0149c19b  size=59  [run]
undefined4 FUN_0149c19b(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (&DAT_0225bef0)[param_1];
  FUN_012941d9(*(undefined4 *)(iVar1 + 0x18));
  uVar2 = FUN_0149bb6e(param_2,param_3);
  FUN_0129420c(*(undefined4 *)(iVar1 + 0x18));
  return uVar2;
}

// 0149C1D6  FUN_0149c1d6  size=76  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0149c1d6(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_10 [12];
  
  _DAT_0225bf20 = "\nCRI Random Number Generator/PCx86 Ver.1.00.00 Build:Sep  3 2012 18:07:26\n";
  FUN_0149b28b(param_1,param_2,local_10);
  puVar1 = (undefined4 *)FUN_0149b2a1(local_10,0x10,8);
  *puVar1 = 0x75bcd15;
  puVar1[1] = 0x159a55e5;
  puVar1[2] = 0x1f123bb5;
  puVar1[3] = 0x5491333;
  return;
}

// 0149C2A6  FUN_0149c2a6  size=26  [run]
float10 FUN_0149c2a6(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdef84((double)param_1);
  return (float10)(float)fVar1;
}

// 0149C2C0  FUN_0149c2c0  size=78  [run]
float10 FUN_0149c2c0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1 * param_1;
  fVar3 = fVar1 * fVar1 * param_1;
  fVar2 = fVar1 * fVar3;
  return (float10)((fVar2 * fVar1) / 362880.0 +
                  ((fVar3 / 120.0 + (param_1 - (fVar1 * param_1) / 6.0)) - fVar2 / 5040.0));
}

// 0149C30E  FUN_0149c30e  size=78  [run]
float10 FUN_0149c30e(float param_1)

{
  float fVar1;
  
  param_1 = param_1 * param_1;
  fVar1 = param_1 * param_1 * param_1;
  return (float10)((fVar1 * param_1) / 40320.0 +
                  (((param_1 * param_1) / 24.0 + (1.0 - param_1 * 0.5)) - fVar1 / 720.0));
}

// 0149C35C  FUN_0149c35c  size=35  [run]
float10 FUN_0149c35c(float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdecd0((double)param_1,(double)param_2);
  return (float10)(float)fVar1;
}

// 0149C37F  FUN_0149c37f  size=81  [run]
float10 FUN_0149c37f(float param_1,float param_2,float param_3)

{
  return (float10)(float)((((uint)param_2 ^ (uint)param_1) & (int)(param_2 - param_1) >> 0x1f ^
                           (uint)param_3 ^ (uint)param_2) & (int)(param_1 - param_3) >> 0x1f ^
                         (uint)param_3);
}

// 0149C3D0  FUN_0149c3d0  size=80  [run]
float10 FUN_0149c3d0(undefined4 param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  float10 extraout_ST0;
  
  iVar2 = FUN_00fdbc60();
  fVar1 = (float)(extraout_ST0 - (float10)iVar2 * (float10)(param_3 - param_2));
  return (float10)((float)((int)fVar1 >> 0x1f & (uint)(param_3 - param_2)) + fVar1 + param_2);
}

// 0149C420  FUN_0149c420  size=45  [run]
float10 FUN_0149c420(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60(~param_1 >> 0x1f);
  return (float10)iVar1;
}

// 0149C44D  FUN_0149c44d  size=40  [run]
float10 FUN_0149c44d(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60(~param_1 >> 0x1f);
  return (float10)iVar1;
}

// 0149C475  FUN_0149c475  size=19  [run]
float10 FUN_0149c475(void)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return (float10)iVar1;
}

// 0149C488  FUN_0149c488  size=45  [run]
float10 FUN_0149c488(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60(param_1 & 0xbf000000 | 0x3f000000);
  return (float10)iVar1;
}

// 0149C4B5  FUN_0149c4b5  size=150  [run]
void FUN_0149c4b5(void)

{
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  
  FUN_0149c2a6();
  FUN_0149c2a6(in_XMM0_Db);
  FUN_0149c2a6(in_XMM0_Dc);
  FUN_0149c2a6(in_XMM0_Dd);
  return;
}

// 0149C54B  FUN_0149c54b  size=106  [run]
void FUN_0149c54b(void)

{
  return;
}

// 0149C5B5  FUN_0149c5b5  size=100  [run]
void FUN_0149c5b5(void)

{
  return;
}

// 0149C619  FUN_0149c619  size=189  [run]
void FUN_0149c619(void)

{
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  
  FUN_0149c35c();
  FUN_0149c35c(in_XMM0_Db,in_XMM1_Db);
  FUN_0149c35c(in_XMM0_Dc,in_XMM1_Dc);
  FUN_0149c35c(in_XMM0_Dd,in_XMM1_Dd);
  return;
}

// 0149C6D6  FUN_0149c6d6  size=116  [run]
void FUN_0149c6d6(void)

{
  return;
}

// 0149C7AE  FUN_0149c7ae  size=8  [run]
void FUN_0149c7ae(void)

{
  return;
}

// 0149C7E3  FUN_0149c7e3  size=42  [run]
void FUN_0149c7e3(undefined4 param_1,void *param_2,size_t param_3)

{
  undefined4 *puVar1;
  
  _memset(param_2,0,param_3);
  puVar1 = (undefined4 *)((int)param_2 + 7U & 0xfffffff8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}

// 0149C80D  FUN_0149c80d  size=67  [run]
void FUN_0149c80d(int *param_1,undefined4 param_2,code *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  while (puVar1 = (undefined4 *)*param_1, puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[1];
    *param_1 = iVar2;
    if (iVar2 == 0) {
      param_1[1] = 0;
    }
    puVar1[1] = 0;
    param_1[2] = param_1[2] + -1;
    if (puVar1 == (undefined4 *)0x0) break;
    if (param_3 != (code *)0x0) {
      (*param_3)(param_2,*puVar1);
    }
  }
  FUN_0129432c(param_1,0xc);
  return;
}

// 0149C850  FUN_0149c850  size=71  [run]
void FUN_0149c850(uint *param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  _memset(param_3,0,param_4);
  puVar2 = (undefined4 *)((int)param_3 + 7U & 0xfffffff8);
  puVar2[1] = 0;
  *puVar2 = param_2;
  puVar1 = param_1 + 1;
  if (*puVar1 == 0) {
    *param_1 = (uint)puVar2;
  }
  else {
    puVar2[1] = 0;
    *(undefined4 **)(*puVar1 + 4) = puVar2;
  }
  param_1[2] = param_1[2] + 1;
  *puVar1 = (uint)puVar2;
  return;
}

// 0149C897  FUN_0149c897  size=80  [run]
undefined4 FUN_0149c897(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)*param_1;
  uVar1 = *param_2;
  if (param_2 == puVar4) {
    iVar2 = puVar4[1];
    *param_1 = iVar2;
    if (iVar2 == 0) {
      param_1[1] = 0;
    }
  }
  else if (puVar4 != (undefined4 *)0x0) {
    do {
      puVar3 = (undefined4 *)puVar4[1];
      if (puVar3 == param_2) break;
      puVar4 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    if ((puVar4 != (undefined4 *)0x0) &&
       (puVar4[1] = *(undefined4 *)(puVar4[1] + 4), param_2 == (undefined4 *)param_1[1])) {
      param_1[1] = (int)puVar4;
    }
  }
  param_2[1] = 0;
  param_1[2] = param_1[2] + -1;
  return uVar1;
}

// 0149C8E7  FUN_0149c8e7  size=37  [run]
void FUN_0149c8e7(undefined4 *param_1,undefined4 param_2,code *param_3)

{
  if (param_3 != (code *)0x0) {
    for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
        param_1 = (undefined4 *)param_1[1]) {
      (*param_3)(param_2,*param_1);
    }
  }
  return;
}

// 0149C90C  FUN_0149c90c  size=12  [run]
int FUN_0149c90c(void)

{
  DAT_0225bf24 = DAT_0225bf24 + 1;
  return DAT_0225bf24;
}

// 0149C918  FUN_0149c918  size=12  [run]
int FUN_0149c918(void)

{
  DAT_0225bf24 = DAT_0225bf24 + -1;
  return DAT_0225bf24;
}

// 0149C924  FUN_0149c924  size=23  [run]
undefined8 FUN_0149c924(void)

{
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  return CONCAT44(local_c.s.HighPart,local_c.s.LowPart);
}

// 0149C93B  FUN_0149c93b  size=23  [run]
undefined8 FUN_0149c93b(void)

{
  LARGE_INTEGER local_c;
  
  QueryPerformanceFrequency(&local_c);
  return CONCAT44(local_c.s.HighPart,local_c.s.LowPart);
}

// 0149C952  FUN_0149c952  size=22  [run]
undefined8 FUN_0149c952(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44((param_4 - param_2) - (uint)(param_3 < param_1),param_3 - param_1);
}

// 0149C968  FUN_0149c968  size=21  [run]
void * FUN_0149c968(void *param_1)

{
  _memset(param_1,0,0x38);
  return param_1;
}

// 0149C97D  FUN_0149c97d  size=1  [run]
void FUN_0149c97d(void)

{
  return;
}

// 0149C97E  FUN_0149c97e  size=46  [run]
void FUN_0149c97e(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + param_2 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + param_2 * 4) = *puVar2;
    *puVar2 = 0;
    if (*(int *)(param_1 + param_2 * 4) == 0) {
      *(undefined4 *)(param_1 + 0x10 + param_2 * 4) = 0;
    }
    piVar1 = (int *)(param_1 + 0x20 + param_2 * 4);
    *piVar1 = *piVar1 - puVar2[5];
  }
  return;
}

// 0149C9AC  FUN_0149c9ac  size=39  [run]
void FUN_0149c9ac(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((int)param_2 + 0xb);
  *param_2 = *(int *)(param_1 + uVar2 * 4);
  piVar1 = (int *)(param_1 + 0x20 + uVar2 * 4);
  *piVar1 = *piVar1 + param_2[5];
  *(int **)(param_1 + uVar2 * 4) = param_2;
  if (*param_2 == 0) {
    *(int **)(param_1 + 0x10 + uVar2 * 4) = param_2;
  }
  return;
}

// 0149C9D3  FUN_0149c9d3  size=59  [run]
void FUN_0149c9d3(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10 + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    *(int *)(param_1 + param_2 * 4) = param_3;
  }
  else {
    *piVar1 = param_3;
  }
  *(char *)(param_3 + 0xb) = (char)param_2;
  *(int *)(param_1 + 0x10 + param_2 * 4) = param_3;
  piVar1 = (int *)(param_1 + 0x20 + param_2 * 4);
  *piVar1 = *piVar1 + *(int *)(param_3 + 0x14);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34),param_2);
  }
  return;
}

// 0149CA0E  FUN_0149ca0e  size=23  [run]
int FUN_0149ca0e(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  for (puVar2 = *(undefined4 **)(param_1 + param_2 * 4); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// 0149CA45  FUN_0149ca45  size=26  [run]
void * FUN_0149ca45(void *param_1)

{
  _memset(param_1,0,0x1c);
  *(undefined1 *)((int)param_1 + 9) = 1;
  return param_1;
}

// 0149CA5F  FUN_0149ca5f  size=26  [run]
void * FUN_0149ca5f(void *param_1)

{
  _memset(param_1,0,0x20);
  *(undefined1 *)((int)param_1 + 9) = 2;
  return param_1;
}

// 0149CA79  FUN_0149ca79  size=26  [run]
void * FUN_0149ca79(void *param_1)

{
  _memset(param_1,0,0x38);
  *(undefined1 *)((int)param_1 + 9) = 8;
  return param_1;
}

// 0149CA93  FUN_0149ca93  size=26  [run]
void * FUN_0149ca93(void *param_1)

{
  _memset(param_1,0,0x58);
  *(undefined1 *)((int)param_1 + 9) = 0x10;
  return param_1;
}

// 0149CAAD  FUN_0149caad  size=9  [run]
void FUN_0149caad(int param_1)

{
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}

// 0149CAB6  FUN_0149cab6  size=64  [run]
void FUN_0149cab6(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14);
  if (0 < iVar1) {
    uVar3 = 0;
    if (*(char *)(param_1 + 9) != '\0') {
      piVar2 = (int *)(param_1 + 0x18);
      do {
        *piVar2 = *piVar2 - iVar1;
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < *(byte *)(param_1 + 9));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x18 + param_2 * 4) = param_3;
  return;
}

// 0149CAF6  FUN_0149caf6  size=54  [run]
void FUN_0149caf6(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14);
  if ((0 < iVar1) && (uVar3 = 0, *(char *)(param_1 + 9) != '\0')) {
    piVar2 = (int *)(param_1 + 0x18);
    do {
      *piVar2 = *piVar2 - iVar1;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < *(byte *)(param_1 + 9));
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

// 0149CB2C  FUN_0149cb2c  size=52  [run]
void FUN_0149cb2c(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  uVar3 = 0;
  *(uint *)(param_1 + 0x14) = uVar1 - param_2;
  if (*(char *)(param_1 + 9) != '\0') {
    piVar2 = (int *)(param_1 + 0x18);
    do {
      *piVar2 = *piVar2 + param_2;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < *(byte *)(param_1 + 9));
  }
  return;
}

// 0149CB60  FUN_0149cb60  size=62  [run]
void FUN_0149cb60(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = FUN_0149ca45(param_2);
    FUN_0149c9d3(param_1,3,iVar1);
    param_2 = param_2 + 0x1c;
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined1 *)(iVar1 + 8) = 0;
  }
  return;
}

// 0149CB9E  FUN_0149cb9e  size=62  [run]
void FUN_0149cb9e(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = FUN_0149ca5f(param_2);
    FUN_0149c9d3(param_1,3,iVar1);
    param_2 = param_2 + 0x20;
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined1 *)(iVar1 + 8) = 0;
  }
  return;
}

// 0149CBDC  FUN_0149cbdc  size=62  [run]
void FUN_0149cbdc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = FUN_0149ca79(param_2);
    FUN_0149c9d3(param_1,3,iVar1);
    param_2 = param_2 + 0x38;
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined1 *)(iVar1 + 8) = 0;
  }
  return;
}

// 0149CC1A  FUN_0149cc1a  size=62  [run]
void FUN_0149cc1a(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = FUN_0149ca93(param_2);
    FUN_0149c9d3(param_1,3,iVar1);
    param_2 = param_2 + 0x58;
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined1 *)(iVar1 + 8) = 0;
  }
  return;
}

// 0149CC58  FUN_0149cc58  size=15  [run]
int FUN_0149cc58(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)*param_1)(param_2);
  return iVar1 + 0x14;
}

// 0149CC67  FUN_0149cc67  size=158  [run]
int FUN_0149cc67(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    FUN_01293f69(0,"E2010041621",0xfffffffe);
  }
  else if (param_3 == 0) {
    FUN_01293f69(0,"E2010041622",0xfffffffe);
  }
  else {
    iVar1 = FUN_0149cc58(param_1,param_2);
    if (param_4 < iVar1) {
      FUN_01293f69(0,"E2010041623",0xfffffffd);
    }
    else {
      uVar2 = (**(code **)(param_1 + 0xc))();
      *(undefined4 *)(param_3 + 4) = uVar2;
      iVar1 = (**(code **)(param_1 + 4))(param_3 + 0x14,param_4 + -0x14,param_2);
      *(int *)(param_3 + 8) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(param_3 + 0x10) = 0;
        *(int *)(param_3 + 0xc) = param_3;
        return param_3;
      }
      FUN_01293f1f(0,"E2010041604:failed creation streamer core.");
    }
  }
  return 0;
}

// 0149CD05  FUN_0149cd05  size=51  [run]
void FUN_0149cd05(int param_1,int param_2)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    pcVar1 = "E2010041625";
  }
  else {
    if (param_2 != 0) {
      (**(code **)(param_1 + 8))(*(undefined4 *)(param_2 + 8));
      return;
    }
    pcVar1 = "E2010041606";
  }
  FUN_01293f69(0,pcVar1,0xfffffffe);
  return;
}

// 0149CD38  FUN_0149cd38  size=8  [run]
undefined4 FUN_0149cd38(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 0149CD40  FUN_0149cd40  size=13  [run]
undefined * FUN_0149cd40(int param_1)

{
  return &DAT_01b34858 + param_1 * 0x18;
}

// 0149CD63  FUN_0149cd63  size=301  [run]
undefined4 *
FUN_0149cd63(undefined4 *param_1,int param_2,undefined4 param_3,ushort param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  byte *pbVar7;
  
  iVar1 = param_2 + 8;
  pbVar7 = (byte *)(param_2 + 0x20);
  param_1[1] = (uint)CONCAT11(*(undefined1 *)(param_2 + 10),*(undefined1 *)(param_2 + 0xb)) + iVar1;
  param_1[2] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_2 + 0xc),
                                          *(undefined1 *)(param_2 + 0xd)),
                                 *(undefined1 *)(param_2 + 0xe)),*(undefined1 *)(param_2 + 0xf)) +
               iVar1;
  param_1[3] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_2 + 0x10),
                                          *(undefined1 *)(param_2 + 0x11)),
                                 *(undefined1 *)(param_2 + 0x12)),*(undefined1 *)(param_2 + 0x13)) +
               iVar1;
  *(ushort *)(param_1 + 5) =
       CONCAT11(*(undefined1 *)(param_2 + 0x18),*(undefined1 *)(param_2 + 0x19));
  param_1[4] = (uint)CONCAT11(*(undefined1 *)(param_2 + 0x1a),*(undefined1 *)(param_2 + 0x1b));
  uVar2 = *(undefined1 *)(param_2 + 0x1c);
  uVar3 = *(undefined1 *)(param_2 + 0x1d);
  uVar4 = *(undefined1 *)(param_2 + 0x1e);
  uVar5 = *(undefined1 *)(param_2 + 0x1f);
  param_1[6] = param_1[1];
  *param_1 = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5);
  param_1[8] = param_5;
  param_1[7] = param_6;
  if (param_4 < *(ushort *)(param_1 + 5)) {
    FUN_01293f1f(0,"E2010090700B:The number of Field exceeds the number of MAX Field.");
    param_1 = (undefined4 *)0x0;
  }
  else {
    uVar6 = 0;
    if (*(ushort *)(param_1 + 5) != 0) {
      param_2._0_2_ = 0;
      do {
        *(short *)(param_1[8] + uVar6 * 2) = (short)param_2;
        *(byte *)(uVar6 + param_1[7]) = *pbVar7 & 0xf;
        param_2._0_2_ =
             (short)param_2 + *(short *)(&DAT_01b348b8 + (uint)*(byte *)(param_1[7] + uVar6) * 2);
        pbVar7 = pbVar7 + 5;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_1 + 5));
    }
  }
  return param_1;
}

// 0149CEB0  FUN_0149ceb0  size=762  [run]
void FUN_0149ceb0(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  
  uVar1 = *(undefined1 *)(param_2 + *(int *)(param_1 + 0x1c));
  *param_3 = uVar1;
  switch(uVar1) {
  case 0:
  case 1:
    param_3[8] = *(undefined1 *)
                  ((uint)*(ushort *)(*(int *)(param_1 + 0x20) + param_2 * 2) +
                  *(int *)(param_1 + 0x18));
    break;
  case 2:
  case 3:
    puVar6 = (undefined1 *)
             ((uint)*(ushort *)(*(int *)(param_1 + 0x20) + param_2 * 2) + *(int *)(param_1 + 0x18));
    *(ushort *)(param_3 + 8) = CONCAT11(*puVar6,puVar6[1]);
    break;
  case 4:
  case 5:
  case 8:
    puVar6 = (undefined1 *)
             ((uint)*(ushort *)(*(int *)(param_1 + 0x20) + param_2 * 2) + *(int *)(param_1 + 0x18));
    *(uint *)(param_3 + 8) = CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]),puVar6[3]);
    break;
  case 6:
  case 7:
  case 9:
    pbVar7 = (byte *)(*(int *)(param_1 + 0x18) +
                     (uint)*(ushort *)(*(int *)(param_1 + 0x20) + param_2 * 2));
    bVar2 = *pbVar7;
    bVar3 = pbVar7[3];
    uVar9 = CONCAT31(CONCAT21(CONCAT11(bVar2,pbVar7[1]),pbVar7[2]),bVar3);
    *(uint *)(param_3 + 8) = CONCAT31(CONCAT21(CONCAT11(pbVar7[4],pbVar7[5]),pbVar7[6]),pbVar7[7]);
    *(uint *)(param_3 + 0xc) =
         (((uint)bVar2 << 8 | (uVar9 & 0xffffff) >> 0x10) << 8 | (uVar9 & 0xffff) >> 8) << 8 |
         (uint)bVar3;
    break;
  case 10:
    puVar6 = (undefined1 *)
             ((uint)*(ushort *)(*(int *)(param_1 + 0x20) + param_2 * 2) + *(int *)(param_1 + 0x18));
    iVar8 = CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]),puVar6[3]) +
            *(int *)(param_1 + 8);
    goto LAB_0149d062;
  case 0xb:
    iVar8 = (uint)*(ushort *)(param_2 * 2 + *(int *)(param_1 + 0x20)) + *(int *)(param_1 + 0x18);
    *(uint *)(param_3 + 0xc) =
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar8 + 4),*(undefined1 *)(iVar8 + 5)),
                           *(undefined1 *)(iVar8 + 6)),*(undefined1 *)(iVar8 + 7));
    puVar6 = (undefined1 *)
             ((uint)*(ushort *)(param_2 * 2 + *(int *)(param_1 + 0x20)) + *(int *)(param_1 + 0x18));
    iVar8 = CONCAT31(CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]),puVar6[3]) +
            *(int *)(param_1 + 0xc);
LAB_0149d062:
    *(int *)(param_3 + 8) = iVar8;
    break;
  case 0xc:
    pbVar7 = (byte *)((uint)*(ushort *)(param_2 * 2 + *(int *)(param_1 + 0x20)) +
                     *(int *)(param_1 + 0x18));
    uVar9 = CONCAT31(CONCAT21(CONCAT11(*pbVar7,pbVar7[1]),pbVar7[2]),pbVar7[3]);
    bVar2 = pbVar7[4];
    bVar3 = pbVar7[5];
    bVar4 = pbVar7[6];
    bVar5 = pbVar7[7];
    *(uint *)(param_3 + 0xc) =
         (((uint)*pbVar7 << 8 | (uVar9 & 0xffffff) >> 0x10) << 8 | (uVar9 & 0xffff) >> 8) << 8 |
         (uint)pbVar7[3];
    *(uint *)(param_3 + 8) = CONCAT31(CONCAT21(CONCAT11(bVar2,bVar3),bVar4),bVar5);
    iVar8 = *(int *)(param_1 + 0x18) + (uint)*(ushort *)(param_2 * 2 + *(int *)(param_1 + 0x20));
    bVar2 = *(byte *)(iVar8 + 8);
    bVar3 = *(byte *)(iVar8 + 0xb);
    uVar9 = CONCAT31(CONCAT21(CONCAT11(bVar2,*(undefined1 *)(iVar8 + 9)),*(undefined1 *)(iVar8 + 10)
                             ),bVar3);
    *(uint *)(param_3 + 0x10) =
         CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar8 + 0xc),*(undefined1 *)(iVar8 + 0xd)),
                           *(undefined1 *)(iVar8 + 0xe)),*(undefined1 *)(iVar8 + 0xf));
    *(uint *)(param_3 + 0x14) =
         (((uint)bVar2 << 8 | (uVar9 & 0xffffff) >> 0x10) << 8 | (uVar9 & 0xffff) >> 8) << 8 |
         (uint)bVar3;
  }
  return;
}

// 0149D355  FUN_0149d355  size=43  [run]
void FUN_0149d355(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           ((uint)*(ushort *)(*(int *)(param_1 + 0x20) + param_3 * 2) +
            *(int *)(param_1 + 0x10) * param_2 + *(int *)(param_1 + 4));
  *puVar1 = (char)((uint)param_4 >> 8);
  puVar1[1] = (char)param_4;
  return;
}

// 0149D4DF  FUN_0149d4df  size=59  [run]
void FUN_0149d4df(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           ((uint)*(ushort *)(*(int *)(param_1 + 0x20) + param_3 * 2) +
            *(int *)(param_1 + 0x10) * param_2 + *(int *)(param_1 + 4));
  *puVar1 = (char)((uint)param_4 >> 0x18);
  puVar1[1] = (char)((uint)param_4 >> 0x10);
  puVar1[2] = (char)((uint)param_4 >> 8);
  puVar1[3] = (char)param_4;
  return;
}

// 0149D61E  FUN_0149d61e  size=27  [run]
void FUN_0149d61e(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = uVar1 + 0x10;
    } while (uVar1 < param_2);
  }
  return;
}

// 0149D639  FUN_0149d639  size=60  [run]
bool FUN_0149d639(void *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x10) {
    return false;
  }
  iVar1 = _memcmp(param_1,&DAT_0182e294,4);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = _memcmp(param_1,&DAT_0182e28c,4);
  return iVar1 == 0;
}

// 0149D675  FUN_0149d675  size=69  [run]
uint __fastcall FUN_0149d675(int param_1)

{
  int in_EAX;
  uint uVar1;
  byte *pbVar2;
  
  if (*(char *)(in_EAX + 6) == '\x02') {
    pbVar2 = (byte *)(in_EAX + 0x10 + param_1 * 2);
    uVar1 = (uint)pbVar2[1];
  }
  else {
    if (*(char *)(in_EAX + 6) != '\x04') {
      return 0;
    }
    pbVar2 = (byte *)(in_EAX + 0x10 + param_1 * 4);
    uVar1 = (uint)*(uint3 *)(pbVar2 + 1);
  }
  return uVar1 << 8 | (uint)*pbVar2;
}

// 0149D6BA  FUN_0149d6ba  size=267  [run]
ulonglong FUN_0149d6ba(int param_1)

{
  uint *puVar1;
  int in_EAX;
  uint uVar2;
  
  puVar1 = (uint *)((uint)*(byte *)(in_EAX + 5) * param_1 + 0x10 +
                   *(int *)(in_EAX + 8) * (uint)*(byte *)(in_EAX + 6) + in_EAX);
  if (*(byte *)(in_EAX + 5) == 2) {
    return (longlong)(int)(uint)(ushort)*puVar1;
  }
  if (*(char *)(in_EAX + 5) == '\x04') {
    uVar2 = *puVar1;
  }
  else {
    if (*(char *)(in_EAX + 5) == '\b') {
      uVar2 = puVar1[1];
      return CONCAT44((((uint)(*(ushort *)((int)puVar1 + 6) >> 8) << 8 | (uVar2 & 0xffffff) >> 0x10)
                       << 8 | (uVar2 & 0xffff) >> 8) << 8 | (uint)(byte)puVar1[1],*puVar1);
    }
    uVar2 = 0;
  }
  return (ulonglong)uVar2;
}

// 0149D7C5  FUN_0149d7c5  size=141  [run]
uint FUN_0149d7c5(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EDI;
  uint local_8;
  
  local_8 = 0;
  uVar3 = *(int *)(unaff_EDI + 8) - 1;
  uVar4 = uVar3;
  if (param_1 < 0) {
    uVar3 = 0xffffffff;
  }
  else {
    while( true ) {
      uVar3 = (int)uVar3 / 2;
      uVar2 = uVar3 & 0xffff;
      iVar1 = FUN_0149d675();
      if (param_1 == iVar1) break;
      if ((int)uVar4 <= (int)local_8) {
        return 0xffffffff;
      }
      if (param_1 - iVar1 < 0) {
        if ((short)uVar3 != 0) {
          if ((short)uVar3 == (short)local_8) {
            return 0xffffffff;
          }
          uVar2 = uVar2 + 0xffff;
        }
        uVar4 = uVar2 & 0xffff;
      }
      else {
        local_8 = uVar2 + 1 & 0xffff;
      }
      uVar3 = local_8 + uVar4;
    }
    uVar3 = uVar3 & 0xffff;
  }
  return uVar3;
}

// 0149D852  FUN_0149d852  size=148  [run]
undefined4 FUN_0149d852(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  longlong lVar4;
  undefined8 uVar5;
  
  if (param_1 < 0) {
    return 0;
  }
  uVar1 = (uint)*(ushort *)(unaff_EDI + 0xc);
  lVar4 = FUN_0149d6ba(param_1);
  uVar5 = __alldiv(lVar4 + (int)(uVar1 - 1),uVar1,0);
  uVar5 = __allmul(uVar5,uVar1,0);
  *(undefined8 *)(unaff_ESI + 2) = uVar5;
  iVar2 = FUN_0149d6ba(param_1 + 1);
  unaff_ESI[1] = iVar2 - unaff_ESI[2];
  uVar3 = FUN_0149d675();
  *unaff_ESI = uVar3;
  return 1;
}

// 0149D8E6  FUN_0149d8e6  size=80  [run]
int FUN_0149d8e6(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0149d639(param_1,param_2);
  if (iVar1 == 0) {
    return -1;
  }
  return (uint)*(byte *)(param_1 + 5) * (*(int *)(param_1 + 8) + 1) + 0x10 +
         (uint)*(byte *)(param_1 + 6) * *(int *)(param_1 + 8);
}

// 0149D936  FUN_0149d936  size=56  [run]
undefined4 FUN_0149d936(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0149d639(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 8);
}

// 0149D997  FUN_0149d997  size=48  [run]
void FUN_0149d997(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0149d639(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_0149d7c5(param_3);
  FUN_0149d852(uVar2);
  return;
}

// 0149D9C7  FUN_0149d9c7  size=113  [run]
undefined4 FUN_0149d9c7(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != param_3) && (iVar1 = FUN_0149d639(param_1,param_2), iVar1 != 0)) {
    *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)(param_3 + 5) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)(param_3 + 6) = *(undefined1 *)(param_1 + 6);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(param_1 + 0xc);
    return 1;
  }
  return 0;
}

// 0149DA38  FUN_0149da38  size=507  [run]
int FUN_0149da38(uint param_1,uint param_2,byte *param_3,uint param_4,int *param_5,
                undefined4 param_6,int param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int local_18;
  int local_8;
  
  iVar7 = param_1;
  param_1 = param_4 / ((uint)*(byte *)(param_1 + 0xa0) * 0x12);
  if (param_8 >> 5 <= param_1) {
    param_1 = param_8 >> 5;
  }
  uVar8 = param_2 + 0x1f >> 5;
  if (uVar8 <= param_1) {
    param_1 = uVar8;
  }
  sVar3 = *(short *)(iVar7 + 0xa8);
  sVar4 = *(short *)(iVar7 + 0xaa);
  param_2 = 0;
  if (param_1 != 0) {
    local_8 = 0;
    do {
      param_8 = 0;
      if (*(char *)(iVar7 + 0xa0) != '\0') {
        psVar9 = (short *)(iVar7 + 0xae);
        do {
          bVar1 = *param_3;
          bVar2 = param_3[1];
          if ((bVar1 & 0x80) != 0) goto LAB_0149dc18;
          param_3 = param_3 + 2;
          uVar5 = *(ushort *)(iVar7 + 0xa2);
          local_18 = 0x10;
          *(ushort *)(iVar7 + 0xa2) =
               *(short *)(iVar7 + 0xa4) * uVar5 + *(short *)(iVar7 + 0xa6) & 0x7fff;
          param_4 = (uint)psVar9[-1];
          iVar11 = (int)*psVar9;
          psVar12 = (short *)(*(int *)(param_7 + param_8 * 4) + local_8);
          iVar10 = (int)(short)(((uVar5 ^ CONCAT11(bVar1,bVar2)) & 0x1fff) + 1);
          do {
            bVar1 = *param_3;
            iVar6 = *(int *)(&DAT_0182e338 + ((int)(char)bVar1 & 0xfU) * 4);
            param_3 = param_3 + 1;
            iVar11 = ((int)(iVar11 * sVar4 + param_4 * (int)sVar3) >> 0xc) +
                     iVar10 * ((int)(char)bVar1 >> 4);
            if ((0x7fff < iVar11) || (iVar11 < -0x8000)) {
              if (iVar11 < -0x8000) {
                iVar11 = -0x8000;
              }
              else if (0x7fff < iVar11) {
                iVar11 = 0x7fff;
              }
            }
            *psVar12 = (short)iVar11;
            param_4 = ((int)(iVar11 * sVar3 + param_4 * (int)sVar4) >> 0xc) + iVar10 * iVar6;
            if ((0x7fff < (int)param_4) || ((int)param_4 < -0x8000)) {
              if ((int)param_4 < -0x8000) {
                param_4 = -0x8000;
              }
              else if (0x7fff < (int)param_4) {
                param_4 = 0x7fff;
              }
            }
            psVar12[1] = (short)param_4;
            psVar12 = psVar12 + 2;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
          param_8 = param_8 + 1;
          psVar9[-1] = (short)param_4;
          *psVar9 = (short)iVar11;
          psVar9 = psVar9 + 2;
        } while (param_8 < *(byte *)(iVar7 + 0xa0));
      }
      param_2 = param_2 + 1;
      local_8 = local_8 + 0x40;
    } while (param_2 < param_1);
  }
LAB_0149dc18:
  *param_5 = *(byte *)(iVar7 + 0xa0) * param_2 * 0x12;
  return param_2 << 5;
}

// 0149DC33  FUN_0149dc33  size=831  [run]
/* WARNING: Removing unreachable block (ram,0x0149dd5d) */

int FUN_0149dc33(float *param_1,int param_2,byte *param_3,uint param_4,int *param_5,uint param_6,
                int param_7,uint param_8)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  float *pfVar37;
  float *pfVar38;
  ushort uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint local_88;
  float *local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  int local_74;
  
  fVar18 = param_1[8];
  fVar19 = param_1[9];
  fVar20 = param_1[10];
  fVar21 = param_1[0xb];
  fVar10 = *param_1;
  fVar11 = param_1[1];
  fVar12 = param_1[2];
  fVar13 = param_1[3];
  fVar14 = param_1[4];
  fVar15 = param_1[5];
  fVar16 = param_1[6];
  fVar17 = param_1[7];
  fVar22 = param_1[0xc];
  fVar23 = param_1[0xd];
  fVar24 = param_1[0xe];
  fVar25 = param_1[0xf];
  uVar34 = (uint)*(byte *)(param_1 + 0x28);
  fVar26 = param_1[0x10];
  fVar27 = param_1[0x11];
  fVar28 = param_1[0x12];
  fVar29 = param_1[0x13];
  fVar30 = param_1[0x14];
  fVar31 = param_1[0x15];
  fVar32 = param_1[0x16];
  fVar33 = param_1[0x17];
  if (param_6 == uVar34) {
    sVar7 = *(short *)(param_1 + 0x29);
    sVar8 = *(short *)((int)param_1 + 0xa6);
    local_88 = param_4 / (uVar34 * 0x12);
    uVar39 = *(ushort *)((int)param_1 + 0xa2);
    if (param_8 >> 5 <= local_88) {
      local_88 = param_8 >> 5;
    }
    uVar36 = param_2 + 0x1fU >> 5;
    if (uVar36 <= local_88) {
      local_88 = uVar36;
    }
    local_80 = 0;
    if (local_88 != 0) {
      local_74 = 0;
      do {
        local_78 = 0;
        if (uVar34 != 0) {
          pfVar37 = param_1 + 0x19;
          do {
            bVar6 = *param_3;
            pbVar1 = param_3 + 1;
            if ((bVar6 & 0x80) != 0) goto LAB_0149df54;
            param_3 = param_3 + 2;
            fVar9 = (float)(ushort)(((CONCAT11(bVar6,*pbVar1) ^ uVar39) & 0x1fff) + 1) *
                    3.0517578e-05;
            fVar43 = pfVar37[-1];
            fVar41 = *pfVar37;
            uVar39 = sVar7 * uVar39 + sVar8;
            pfVar38 = (float *)(*(int *)(param_7 + local_78 * 4) + local_74);
            local_7c = 4;
            local_84 = pfVar38;
            do {
              fVar2 = *(float *)(&DAT_0182e2f8 + (uint)(*param_3 >> 4) * 4);
              fVar3 = *(float *)(&DAT_0182e2f8 + (*param_3 & 0xf) * 4);
              fVar4 = *(float *)(&DAT_0182e2f8 + (uint)(param_3[1] >> 4) * 4);
              fVar5 = *(float *)(&DAT_0182e2f8 + (param_3[1] & 0xf) * 4);
              fVar40 = fVar41 * fVar16 + fVar43 * fVar12 + fVar2 * fVar9 * fVar20 +
                       fVar3 * fVar9 * fVar24 + fVar4 * fVar9 * fVar28 + fVar5 * fVar9 * fVar32;
              fVar42 = fVar41 * fVar17 + fVar43 * fVar13 + fVar2 * fVar9 * fVar21 +
                       fVar3 * fVar9 * fVar25 + fVar4 * fVar9 * fVar29 + fVar5 * fVar9 * fVar33;
              *local_84 = fVar41 * fVar14 + fVar43 * fVar10 + fVar2 * fVar9 * fVar18 +
                          fVar3 * fVar9 * fVar22 + fVar4 * fVar9 * fVar26 + fVar5 * fVar9 * fVar30;
              local_84[1] = fVar41 * fVar15 + fVar43 * fVar11 + fVar2 * fVar9 * fVar19 +
                            fVar3 * fVar9 * fVar23 + fVar4 * fVar9 * fVar27 + fVar5 * fVar9 * fVar31
              ;
              local_84[2] = fVar40;
              local_84[3] = fVar42;
              fVar2 = *(float *)(&DAT_0182e2f8 + (uint)(param_3[2] >> 4) * 4);
              fVar3 = *(float *)(&DAT_0182e2f8 + (param_3[2] & 0xf) * 4);
              fVar4 = *(float *)(&DAT_0182e2f8 + (uint)(param_3[3] >> 4) * 4);
              fVar5 = *(float *)(&DAT_0182e2f8 + (param_3[3] & 0xf) * 4);
              fVar41 = fVar42 * fVar12 + fVar40 * fVar16 + fVar2 * fVar9 * fVar20 +
                       fVar3 * fVar9 * fVar24 + fVar4 * fVar9 * fVar28 + fVar5 * fVar9 * fVar32;
              fVar43 = fVar42 * fVar13 + fVar40 * fVar17 + fVar2 * fVar9 * fVar21 +
                       fVar3 * fVar9 * fVar25 + fVar4 * fVar9 * fVar29 + fVar5 * fVar9 * fVar33;
              param_3 = param_3 + 4;
              local_7c = local_7c + -1;
              local_84[4] = fVar42 * fVar10 + fVar40 * fVar14 + fVar2 * fVar9 * fVar18 +
                            fVar3 * fVar9 * fVar22 + fVar4 * fVar9 * fVar26 + fVar5 * fVar9 * fVar30
              ;
              local_84[5] = fVar42 * fVar11 + fVar40 * fVar15 + fVar2 * fVar9 * fVar19 +
                            fVar3 * fVar9 * fVar23 + fVar4 * fVar9 * fVar27 + fVar5 * fVar9 * fVar31
              ;
              local_84[6] = fVar41;
              local_84[7] = fVar43;
              local_84 = local_84 + 8;
            } while (local_7c != 0);
            local_78 = local_78 + 1;
            pfVar37[-1] = pfVar38[0x1f] + 1.9074068e-06;
            *pfVar37 = pfVar38[0x1e] + 1.9074068e-06;
            pfVar37 = pfVar37 + 2;
          } while (local_78 < uVar34);
        }
        local_80 = local_80 + 1;
        local_74 = local_74 + 0x80;
      } while (local_80 < local_88);
    }
    *(ushort *)((int)param_1 + 0xa2) = uVar39;
LAB_0149df54:
    *param_5 = local_80 * uVar34 * 0x12;
    iVar35 = local_80 << 5;
  }
  else {
    FUN_01293e63(0,"E05122202A",param_6,uVar34,param_1);
    iVar35 = 0;
  }
  return iVar35;
}

// 0149DF72  FUN_0149df72  size=20  [run]
void FUN_0149df72(void *param_1)

{
  _memset(param_1,0,0xcc);
  return;
}

// 0149DF86  FUN_0149df86  size=15  [run]
void FUN_0149df86(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xa0) = param_2;
  return;
}

// 0149DF95  FUN_0149df95  size=41  [run]
void FUN_0149df95(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  *(undefined2 *)(param_1 + 0xa2) = param_2;
  *(undefined2 *)(param_1 + 0xa4) = param_3;
  *(undefined2 *)(param_1 + 0xa6) = param_4;
  return;
}

// 0149DFBE  FUN_0149dfbe  size=47  [run]
void FUN_0149dfbe(int param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  *param_2 = *(undefined2 *)(param_1 + 0xa2);
  *param_3 = *(undefined2 *)(param_1 + 0xa4);
  *param_4 = *(undefined2 *)(param_1 + 0xa6);
  return;
}

// 0149DFED  FUN_0149dfed  size=75  [run]
void FUN_0149dfed(int param_1,int param_2,short param_3,short param_4)

{
  *(short *)(param_1 + 0xac + param_2 * 4) = param_3;
  *(short *)(param_1 + 0xae + param_2 * 4) = param_4;
  *(float *)(param_1 + 0x60 + param_2 * 8) = (float)(int)param_3 / 32767.0;
  *(float *)(param_1 + 100 + param_2 * 8) = (float)(int)param_4 / 32767.0;
  return;
}

// 0149E038  FUN_0149e038  size=25  [run]
void FUN_0149e038(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x60 + param_2 * 8) = param_3;
  *(undefined4 *)(param_1 + 100 + param_2 * 8) = param_4;
  return;
}

// 0149E051  FUN_0149e051  size=390  [run]
void FUN_0149e051(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  
  FUN_00fdef84(0x4000000000000000);
  fVar1 = (float)param_2;
  if (param_2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)param_3;
  if (param_3 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  FUN_00fdecf0((double)((fVar1 * 6.2831855) / fVar2));
  FUN_00fdef84(0x4000000000000000);
  FUN_00fdef84();
  sVar3 = FUN_00fdbc60();
  *(short *)(param_1 + 0x2a) = sVar3;
  sVar4 = FUN_00fdbc60();
  *(short *)((int)param_1 + 0xaa) = sVar4;
  fVar1 = (float)(int)sVar3 * 0.00024414062;
  fVar2 = (float)(int)sVar4 * 0.00024414062;
  *param_1 = fVar1;
  param_1[4] = fVar2;
  param_1[8] = 1.0;
  param_1[0xc] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x14] = 0.0;
  param_1[1] = fVar2 + fVar1 * fVar1;
  param_1[5] = fVar1 * fVar2;
  param_1[9] = fVar1;
  param_1[0xd] = 1.0;
  param_1[0x11] = 0.0;
  pfVar5 = param_1 + 0x12;
  param_1[0x15] = 0.0;
  iVar8 = 2;
  do {
    iVar7 = 6;
    pfVar6 = param_1;
    do {
      iVar7 = iVar7 + -1;
      pfVar6[2] = fVar2 * *pfVar6 + fVar1 * pfVar6[1];
      pfVar6 = pfVar6 + 4;
    } while (iVar7 != 0);
    param_1 = param_1 + 1;
    *pfVar5 = 1.0;
    pfVar5 = pfVar5 + 5;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}

// 0149E245  FUN_0149e245  size=100  [run]
undefined4 FUN_0149e245(short *param_1,uint param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined4 uStack_8;
  
  if (0x13 < param_2) {
    if ((ushort)((ushort)*(byte *)((int)param_1 + 1) | *param_1 << 8) != 0x8000) {
      uStack_8 = 0xfffffffe;
      goto LAB_0149e251;
    }
    if (0xf < (int)((uint)((ushort)param_1[1] >> 8) | (int)(short)(param_1[1] << 8))) {
      *param_3 = (char)param_1[9];
      *param_4 = *(undefined1 *)((int)param_1 + 0x13);
      return 0;
    }
  }
  uStack_8 = 0xffffffff;
LAB_0149e251:
  *param_3 = 0;
  *param_4 = 0;
  return uStack_8;
}

// 0149E2A9  FUN_0149e2a9  size=222  [run]
undefined4
FUN_0149e2a9(undefined1 *param_1,uint param_2,short *param_3,undefined1 *param_4,char *param_5,
            char *param_6,undefined1 *param_7,undefined4 *param_8,undefined4 *param_9,int *param_10)

{
  if (param_2 < 0x10) {
    return 0xffffffff;
  }
  if (CONCAT11(*param_1,param_1[1]) != -0x8000) {
    return 0xfffffffe;
  }
  *param_3 = CONCAT11(param_1[2],param_1[3]) + 4;
  *param_4 = param_1[4];
  *param_6 = param_1[5];
  *param_5 = param_1[6];
  *param_7 = param_1[7];
  *param_8 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  *param_9 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  if (*param_5 == '\0') {
    *param_10 = 0;
  }
  else {
    *param_10 = (*param_6 * 8 + -0x10) / (int)*param_5;
  }
  return 0;
}

// 0149E38C  FUN_0149e38c  size=273  [run]
int FUN_0149e38c(int param_1,undefined4 param_2,ushort *param_3,ushort *param_4)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined1 local_6;
  byte local_5;
  
  iVar1 = FUN_0149e245(param_1,param_2,&local_5,&local_6);
  if (-1 < iVar1) {
    if (local_5 < 4) {
      param_4[1] = 0;
      param_3[1] = 0;
      *param_4 = 0;
      *param_3 = 0;
    }
    else {
      if ((int)((uint)(*(ushort *)(param_1 + 2) >> 8) | (int)(short)(*(ushort *)(param_1 + 2) << 8))
          < 0x1c) {
        return -1;
      }
      *param_3 = *(ushort *)(param_1 + 0x18) >> 8 | *(ushort *)(param_1 + 0x18) << 8;
      *param_4 = *(ushort *)(param_1 + 0x1a) >> 8 | *(ushort *)(param_1 + 0x1a) << 8;
      param_3[1] = *(ushort *)(param_1 + 0x1c) >> 8 | *(ushort *)(param_1 + 0x1c) << 8;
      param_4[1] = *(ushort *)(param_1 + 0x1e) >> 8 | *(ushort *)(param_1 + 0x1e) << 8;
      uVar2 = (uint)*(char *)(param_1 + 7);
      if ((2 < uVar2) && (2 < uVar2)) {
        puVar3 = (ushort *)(param_1 + 0x20);
        puVar4 = param_4 + 2;
        iVar1 = uVar2 - 2;
        do {
          *(ushort *)(((int)param_3 - (int)param_4) + (int)puVar4) = *puVar3 >> 8 | *puVar3 << 8;
          *puVar4 = puVar3[1] >> 8 | puVar3[1] << 8;
          puVar3 = puVar3 + 2;
          puVar4 = puVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

// 0149E49D  FUN_0149e49d  size=420  [run]
int FUN_0149e49d(int param_1,uint param_2,uint *param_3,ushort *param_4,ushort *param_5,
                uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_5;
  
  puVar1 = param_4;
  *param_4 = 0;
  iVar3 = FUN_0149e245(param_1,param_2,(int)&param_4 + 3,&local_5);
  if (-1 < iVar3) {
    uVar4 = 0x30;
    if (param_4._3_1_ == '\x04') {
      uVar4 = 0x3c;
      if (2 < *(byte *)(param_1 + 7)) {
        uVar4 = (char)*(byte *)(param_1 + 7) * 4 + 0x34;
      }
    }
    if (param_2 < uVar4) {
      iVar3 = -1;
    }
    else if ((uint)((int)(uint)*(ushort *)(param_1 + 2) >> 8 |
                   (int)(short)(*(ushort *)(param_1 + 2) << 8)) < uVar4 - 4) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0x14;
      if (param_4._3_1_ == '\x04') {
        iVar3 = 0x20;
        if (2 < *(byte *)(param_1 + 7)) {
          iVar3 = (char)*(byte *)(param_1 + 7) * 4 + 0x18;
        }
      }
      *param_3 = (uint)(*(ushort *)(iVar3 + param_1) >> 8) |
                 (int)(short)(*(ushort *)(iVar3 + param_1) << 8);
      uVar2 = *(ushort *)(iVar3 + 2 + param_1);
      uVar2 = uVar2 >> 8 | uVar2 << 8;
      *puVar1 = uVar2;
      if (uVar2 == 1) {
        uVar2 = *(ushort *)(iVar3 + 6 + param_1);
        *param_5 = uVar2 >> 8 | uVar2 << 8;
        iVar5 = iVar3 + 8;
        *param_6 = (*(uint *)(iVar5 + param_1) << 0x10 | *(uint *)(iVar5 + param_1) & 0xff00) << 8 |
                   *(int *)(iVar5 + param_1) >> 0x18 & 0xffU |
                   *(int *)(iVar5 + param_1) >> 8 & 0xff00U;
        iVar5 = iVar3 + 0xc;
        *param_7 = (*(uint *)(iVar5 + param_1) << 0x10 | *(uint *)(iVar5 + param_1) & 0xff00) << 8 |
                   *(int *)(iVar5 + param_1) >> 0x18 & 0xffU |
                   *(int *)(iVar5 + param_1) >> 8 & 0xff00U;
        iVar5 = iVar3 + 0x10;
        *param_8 = (*(uint *)(iVar5 + param_1) << 0x10 | *(uint *)(iVar5 + param_1) & 0xff00) << 8 |
                   *(int *)(iVar5 + param_1) >> 0x18 & 0xffU |
                   *(int *)(iVar5 + param_1) >> 8 & 0xff00U;
        uVar4 = *(uint *)(iVar3 + 0x14 + param_1);
        *param_9 = (uVar4 << 0x10 | uVar4 & 0xff00) << 8 | (int)uVar4 >> 0x18 & 0xffU |
                   (int)uVar4 >> 8 & 0xff00U;
        iVar3 = 0;
      }
      else {
        iVar3 = -2;
      }
    }
  }
  return iVar3;
}

// 0149E641  FUN_0149e641  size=377  [run]
int FUN_0149e641(int param_1,uint param_2,uint *param_3,void *param_4,ushort *param_5,
                ushort *param_6)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_6;
  char local_5;
  
  *param_3 = 0;
  iVar3 = FUN_0149e245(param_1,param_2,&local_5,&local_6);
  if (-1 < iVar3) {
    uVar4 = 0x3c;
    if (local_5 == '\x04') {
      uVar4 = 0x48;
      if (2 < *(byte *)(param_1 + 7)) {
        uVar4 = (char)*(byte *)(param_1 + 7) * 4 + 0x40;
      }
    }
    if (param_2 < uVar4) {
      iVar3 = -1;
    }
    else if ((uint)((int)(uint)*(ushort *)(param_1 + 2) >> 8 |
                   (int)(short)(*(ushort *)(param_1 + 2) << 8)) < uVar4 - 4) {
      iVar3 = -1;
    }
    else {
      iVar3 = 0x14;
      if (local_5 == '\x04') {
        iVar3 = 0x20;
        if (2 < *(byte *)(param_1 + 7)) {
          iVar3 = (char)*(byte *)(param_1 + 7) * 4 + 0x18;
        }
      }
      uVar2 = *(ushort *)(iVar3 + 2 + param_1);
      iVar5 = iVar3 + 4;
      if (uVar2 >> 8 != 0 || (uVar2 & 0xff) != 0) {
        iVar5 = iVar3 + 0x18;
      }
      puVar1 = (undefined1 *)(iVar5 + param_1);
      if (CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),puVar1[2]),puVar1[3]) == 0x41494e46) {
        uVar4 = *(uint *)(iVar5 + 4 + param_1);
        *param_3 = (uVar4 << 0x10 | uVar4 & 0xff00) << 8 | (int)uVar4 >> 0x18 & 0xffU |
                   (int)uVar4 >> 8 & 0xff00U;
        FID_conflict__memcpy(param_4,(void *)(iVar5 + 8 + param_1),0x10);
        uVar2 = *(ushort *)(iVar5 + 0x18 + param_1);
        *param_5 = uVar2 >> 8 | uVar2 << 8;
        uVar2 = *(ushort *)(iVar5 + 0x1c + param_1);
        *param_6 = uVar2 >> 8 | uVar2 << 8;
        uVar2 = *(ushort *)(iVar5 + 0x1e + param_1);
        param_6[1] = uVar2 >> 8 | uVar2 << 8;
        iVar3 = 0;
      }
      else {
        iVar3 = -2;
      }
    }
  }
  return iVar3;
}

// 0149E7BA  FUN_0149e7ba  size=92  [run]
undefined4 FUN_0149e7ba(short *param_1,int param_2,ushort *param_3)

{
  if (0x11 < param_2) {
    if ((ushort)((ushort)*(byte *)((int)param_1 + 1) | *param_1 << 8) != 0x8000) {
      return 0xfffffffe;
    }
    if (0xd < (int)((uint)((ushort)param_1[1] >> 8) | (int)(short)(param_1[1] << 8))) {
      *param_3 = (ushort)param_1[8] >> 8 | param_1[8] << 8;
      return 0;
    }
  }
  return 0xffffffff;
}

// 0149E869  FUN_0149e869  size=210  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0149e869(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = 0;
  _DAT_0225bf28 = "\nCRI ADX Decoder/PCx86 Ver.1.00.08 Build:Sep  3 2012 18:07:27\n";
  iVar1 = FUN_0149e245(param_1,param_2,param_3,param_3 + 1);
  if (((-1 < iVar1) &&
      (iVar1 = FUN_0149e2a9(param_1,param_2,&local_8,param_3 + 2,param_3 + 3,param_3 + 4,param_3 + 5
                            ,param_3 + 8,param_3 + 0xc,param_3 + 0x10), -1 < iVar1)) &&
     ((local_8 & 0xffff) <= param_2)) {
    FUN_0149e38c(param_1,param_2,param_3 + 0x16,param_3 + 0x26);
    FUN_0149e49d(param_1,param_2,param_3 + 0x38,param_3 + 0x3c,param_3 + 0x3e,param_3 + 0x40,
                 param_3 + 0x44,param_3 + 0x48,param_3 + 0x4c);
    FUN_0149e641(param_1,param_2,local_c,param_3 + 0x50,param_3 + 0x60,param_3 + 0x62);
    FUN_0149e7ba(param_1,param_2,param_3 + 0x14);
    return local_8 & 0xffff;
  }
  return 0;
}

// 0149E93B  FUN_0149e93b  size=202  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0149e93b(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = 0;
  _DAT_0225bf28 = "\nCRI ADX Decoder/PCx86 Ver.1.00.08 Build:Sep  3 2012 18:07:27\n";
  iVar1 = FUN_0149e245(param_1,param_2,param_3,param_3 + 1);
  if ((-1 < iVar1) &&
     (iVar1 = FUN_0149e2a9(param_1,param_2,&local_8,param_3 + 2,param_3 + 3,param_3 + 4,param_3 + 5,
                           param_3 + 8,param_3 + 0xc,param_3 + 0x10), -1 < iVar1)) {
    FUN_0149e38c(param_1,param_2,param_3 + 0x16,param_3 + 0x26);
    FUN_0149e49d(param_1,param_2,param_3 + 0x38,param_3 + 0x3c,param_3 + 0x3e,param_3 + 0x40,
                 param_3 + 0x44,param_3 + 0x48,param_3 + 0x4c);
    FUN_0149e641(param_1,param_2,local_c,param_3 + 0x50,param_3 + 0x60,param_3 + 0x62);
    FUN_0149e7ba(param_1,param_2,param_3 + 0x14);
    return local_8 & 0xffff;
  }
  return 0;
}

// 0149EA20  FUN_0149ea20  size=74  [run]
char * FUN_0149ea20(void)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = 1;
  while (('\x1f' < "\nCopyright (c) 2009-2010 CRI Middleware Co., Ltd.\n"[uVar2] &&
         ("\nCopyright (c) 2009-2010 CRI Middleware Co., Ltd.\n"[uVar2] < '\x7f'))) {
    uVar2 = uVar2 + 1;
    if (0x30 < uVar2) {
      sVar1 = FUN_014a41f0(0,"\nCopyright (c) 2009-2010 CRI Middleware Co., Ltd.\n",0x32);
      if (sVar1 == 0x64f5) {
        return "\nCopyright (c) 2009-2010 CRI Middleware Co., Ltd.\n";
      }
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

// 0149EA70  FUN_0149ea70  size=29  [run]
undefined4 FUN_0149ea70(void)

{
  DAT_0225bf2c = DAT_0225bf2c + 1;
  if (DAT_0225bf2c == 1) {
    FUN_0149ea20();
    FUN_014a4230();
  }
  return 0;
}

// 0149EA90  FUN_0149ea90  size=17  [run]
undefined4 FUN_0149ea90(void)

{
  DAT_0225bf2c = DAT_0225bf2c + -1;
  if (DAT_0225bf2c == 0) {
    FUN_014a4250();
  }
  return 0;
}

// 0149EAB0  FUN_0149eab0  size=81  [run]
undefined4 FUN_0149eab0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = param_1[iVar3 + 0x15];
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x508) != 0)) {
          FUN_014a4290(*(int *)(iVar2 + 0x508));
          *(undefined4 *)(iVar2 + 0x508) = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    return 0;
  }
  return 1;
}

// 0149EB10  FUN_0149eb10  size=55  [run]
undefined4 FUN_0149eb10(int param_1,char *param_2,int param_3)

{
  if (param_1 == 0) {
    return 1;
  }
  if (((param_3 == 0x100) && (*param_2 == '\0')) && (param_2[0xff] == -1)) {
    *(char **)(param_1 + 0xc0) = param_2;
    return 0;
  }
  return 2;
}

// 0149EB50  FUN_0149eb50  size=108  [run]
undefined4 FUN_0149eb50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        if (*(int *)(param_1[iVar2 + 0x15] + 0x508) != 0) {
          FUN_014a42a0(*(int *)(param_1[iVar2 + 0x15] + 0x508));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    param_1[10] = 0;
    param_1[0x27] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = -1;
    param_1[0x2f] = 0x7fffffff;
    return 0;
  }
  return 1;
}

// 0149EBC0  FUN_0149ebc0  size=315  [run]
undefined4 FUN_0149ebc0(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int local_40 [16];
  
  if ((((*(int *)(unaff_ESI + 0x18) <= *in_EAX) &&
       (*(uint *)(unaff_ESI + 0x14) <= (uint)in_EAX[0x2a])) && (*(int *)(unaff_ESI + 0x20) == 1)) &&
     (*(int *)(unaff_ESI + 0x1c) == 0xf)) {
    in_EAX[1] = *(int *)(unaff_ESI + 0x18);
    in_EAX[2] = *(int *)(unaff_ESI + 4);
    in_EAX[3] = *(int *)(unaff_ESI + 8);
    in_EAX[4] = *(int *)(unaff_ESI + 0xc);
    in_EAX[5] = *(int *)(unaff_ESI + 0x10);
    in_EAX[0xb] = *(int *)(unaff_ESI + 0x14);
    in_EAX[0xc] = *(int *)(unaff_ESI + 0x14) * 8;
    in_EAX[6] = *(int *)(unaff_ESI + 0x3c);
    in_EAX[7] = *(int *)(unaff_ESI + 0x40);
    in_EAX[8] = *(int *)(unaff_ESI + 0x44);
    in_EAX[9] = *(int *)(unaff_ESI + 0x48);
    in_EAX[0xd] = *(int *)(unaff_ESI + 0x24);
    in_EAX[0xe] = *(int *)(unaff_ESI + 0x28);
    in_EAX[0xf] = *(int *)(unaff_ESI + 0x2c);
    in_EAX[0x11] = *(int *)(unaff_ESI + 0x30);
    in_EAX[0x12] = *(int *)(unaff_ESI + 0x34);
    in_EAX[0x13] = *(int *)(unaff_ESI + 0x38);
    in_EAX[0x14] = *(int *)(unaff_ESI + 0x50);
    iVar4 = *(int *)(unaff_ESI + 0x30);
    if (iVar4 < 1) {
      in_EAX[0x10] = 0;
    }
    else {
      iVar2 = (*(int *)(unaff_ESI + 0x24) - *(int *)(unaff_ESI + 0x28)) - *(int *)(unaff_ESI + 0x2c)
      ;
      iVar3 = iVar2 / iVar4;
      if (0 < iVar2 % iVar4) {
        iVar3 = iVar3 + 1;
      }
      in_EAX[0x10] = iVar3;
    }
    FUN_014a4820();
    iVar4 = 0;
    if (0 < *(int *)(unaff_ESI + 0x18)) {
      do {
        iVar2 = *(int *)(unaff_ESI + 0x28);
        iVar3 = in_EAX[iVar4 + 0x15];
        if (local_40[iVar4] != 2) {
          iVar2 = iVar2 + *(int *)(unaff_ESI + 0x2c);
        }
        *(int *)(iVar3 + 0x510) = iVar2;
        piVar1 = local_40 + iVar4;
        iVar4 = iVar4 + 1;
        *(int *)(iVar3 + 0x50c) = *piVar1;
      } while (iVar4 < *(int *)(unaff_ESI + 0x18));
    }
    return 0;
  }
  return 0xb;
}

// 0149ED00  FUN_0149ed00  size=52  [run]
undefined4 FUN_0149ed00(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    puVar1 = &param_2;
  }
  *puVar1 = 0xffffffff;
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    return 6;
  }
  *puVar1 = *(undefined4 *)(param_1 + 4);
  return 0;
}

// 0149ED40  FUN_0149ed40  size=52  [run]
undefined4 FUN_0149ed40(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    puVar1 = &param_2;
  }
  *puVar1 = 0xffffffff;
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    return 6;
  }
  *puVar1 = *(undefined4 *)(param_1 + 8);
  return 0;
}

// 0149EE80  FUN_0149ee80  size=52  [run]
undefined4 FUN_0149ee80(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    puVar1 = &param_2;
  }
  *puVar1 = 0xffffffff;
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    return 6;
  }
  *puVar1 = *(undefined4 *)(param_1 + 0x2c);
  return 0;
}

// 0149EEC0  FUN_0149eec0  size=104  [run]
undefined4 FUN_0149eec0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    puVar3 = &param_2;
  }
  *puVar3 = 0;
  puVar2 = param_3;
  if (param_3 == (undefined4 *)0x0) {
    puVar2 = &param_2;
  }
  *puVar2 = 0;
  puVar1 = param_4;
  if (param_4 == (undefined4 *)0x0) {
    puVar1 = &param_2;
  }
  *puVar1 = 0;
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    return 6;
  }
  *puVar3 = *(undefined4 *)(param_1 + 0xc);
  *puVar2 = *(undefined4 *)(param_1 + 0x10);
  *puVar1 = *(undefined4 *)(param_1 + 0x14);
  return 0;
}

// 0149EF30  FUN_0149ef30  size=131  [run]
undefined4
FUN_0149ef30(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    puVar4 = &param_2;
  }
  *puVar4 = 0;
  puVar3 = param_3;
  if (param_3 == (undefined4 *)0x0) {
    puVar3 = &param_2;
  }
  *puVar3 = 0;
  puVar2 = param_4;
  if (param_4 == (undefined4 *)0x0) {
    puVar2 = &param_2;
  }
  *puVar2 = 0;
  puVar1 = param_5;
  if (param_5 == (undefined4 *)0x0) {
    puVar1 = &param_2;
  }
  *puVar1 = 0;
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    return 6;
  }
  *puVar4 = *(undefined4 *)(param_1 + 0x18);
  *puVar3 = *(undefined4 *)(param_1 + 0x1c);
  *puVar2 = *(undefined4 *)(param_1 + 0x20);
  *puVar1 = *(undefined4 *)(param_1 + 0x24);
  return 0;
}

// 0149EFC0  FUN_0149efc0  size=83  [run]
undefined4 FUN_0149efc0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  if (((param_1 != 0) && (-1 < param_3)) && (-1 < param_5)) {
    *(int *)(param_1 + 0xb4) = param_3;
    *(undefined4 *)(param_1 + 0xb0) = param_2;
    *(undefined4 *)(param_1 + 0xb8) = param_4;
    *(int *)(param_1 + 0xbc) = param_5;
    return 0;
  }
  return 1;
}

// 0149F020  FUN_0149f020  size=70  [run]
undefined4 FUN_0149f020(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    puVar1 = &param_2;
  }
  *puVar1 = 0;
  if (param_1 == 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xbc) < 1) &&
     (((*(int *)(param_1 + 0xbc) < 0 || (*(int *)(param_1 + 0xb8) == 0)) &&
      (10 < *(int *)(param_1 + 0x9c))))) {
    *puVar1 = 1;
  }
  return 0;
}

// 0149F070  FUN_0149f070  size=311  [run]
undefined4 __thiscall FUN_0149f070(int param_1,void *param_2,void *param_3,uint *param_4)

{
  int iVar1;
  char *_Dst;
  uint uVar2;
  undefined2 uVar3;
  short sVar4;
  uint in_EAX;
  char *pcVar5;
  uint uVar6;
  int unaff_EBX;
  uint _MaxCount;
  
  iVar1 = *(int *)(unaff_EBX + 0xc0);
  _Dst = *(char **)(unaff_EBX + 0xa4);
  uVar2 = *(uint *)(unaff_EBX + 0x2c);
  if (in_EAX + param_1 < uVar2) {
    return 9;
  }
  if (in_EAX < uVar2) {
    _MaxCount = uVar2 - in_EAX;
  }
  else {
    _MaxCount = 0;
    in_EAX = uVar2;
  }
  uVar3 = FUN_014a41f0(0,param_2,in_EAX);
  sVar4 = FUN_014a41f0(uVar3,param_3,_MaxCount);
  if (sVar4 == 0) {
    if (iVar1 == 0) {
      if (param_2 != (void *)0x0) {
        _memcpy_s(_Dst,*(rsize_t *)(unaff_EBX + 0xa8),param_2,in_EAX);
      }
      if (param_3 != (void *)0x0) {
        _memcpy_s(_Dst + in_EAX,*(int *)(unaff_EBX + 0xa8) - in_EAX,param_3,_MaxCount);
      }
    }
    else {
      uVar6 = 0;
      pcVar5 = _Dst;
      if (in_EAX != 0) {
        do {
          *pcVar5 = *(char *)((uint)*(byte *)(uVar6 + (int)param_2) + iVar1);
          uVar6 = uVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 < in_EAX);
      }
      uVar6 = 0;
      if (_MaxCount != 0) {
        do {
          *pcVar5 = *(char *)((uint)*(byte *)(uVar6 + (int)param_3) + iVar1);
          uVar6 = uVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 < _MaxCount);
      }
    }
    if ((*_Dst == -1) && (_Dst[1] == -1)) {
      *(undefined4 *)(unaff_EBX + 0xa0) = 0;
      *(undefined4 *)(unaff_EBX + 0x9c) = 1;
      *param_4 = uVar2;
      return 0;
    }
    return 10;
  }
  return 0xc;
}

// 0149F1D0  FUN_0149f1d0  size=56  [run]
undefined4 FUN_0149f1d0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    puVar1 = &param_2;
  }
  *puVar1 = 0;
  if (param_1 == 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x9c) < 1) || (10 < *(int *)(param_1 + 0x9c))) {
    *puVar1 = 1;
  }
  return 0;
}

// 0149F210  FUN_0149f210  size=51  [run]
undefined4 FUN_0149f210(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x9c) == 1) {
    *(undefined4 *)(in_EAX + 0x9c) = 2;
  }
  *(int *)(in_EAX + 0x9c) = *(int *)(in_EAX + 0x9c) + 1;
  if (*(int *)(in_EAX + 0x9c) == 10) {
    *(undefined4 *)(in_EAX + 0x9c) = 0xb;
  }
  return 0;
}

// 0149F250  FUN_0149f250  size=2471  [run]
undefined4 FUN_0149f250(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  byte *local_70;
  float *local_64;
  int local_60;
  int local_58;
  int local_3c;
  
  uVar9 = *(uint *)(param_1 + 0xa0);
  iVar13 = *(int *)(param_1 + 0xa4);
  iVar10 = *(int *)(param_1 + 4);
  puVar18 = (undefined1 *)(((int)uVar9 >> 3) + iVar13);
  iVar16 = 0x10 - (uVar9 & 7);
  uVar20 = (uint)CONCAT11(*puVar18,puVar18[1]);
  pbVar19 = puVar18 + 2;
  local_58 = 0;
  if (0 < iVar10) {
    do {
      iVar11 = *(int *)(param_1 + 0x54 + local_58 * 4);
      iVar15 = *(int *)(iVar11 + 0x510);
      local_60 = 0;
      if (0 < iVar15 + -7) {
        local_3c = (iVar15 - 8U >> 3) + 1;
        local_70 = (byte *)(iVar11 + 0x482);
        local_60 = local_3c * 8;
        pfVar12 = (float *)(iVar11 + 0x208);
        do {
          uVar17 = (uint)local_70[-2];
          if (iVar16 < 0x10) {
            iVar16 = iVar16 + 0x10;
            uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
            pbVar19 = pbVar19 + 2;
          }
          iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
          uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                   *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
          if (uVar17 < 8) {
            iVar21 = (int)(char)(&DAT_0182e618)[uVar17 * 0x10 + uVar22];
            fVar1 = *(float *)(&DAT_0182e418 + (uVar22 + uVar17 * 0x10) * 4);
          }
          else {
            iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
            if (iVar14 == 0) {
              iVar21 = iVar21 + -1;
            }
            fVar1 = (float)iVar14;
          }
          iVar16 = iVar16 - iVar21;
          uVar17 = (uint)local_70[-1];
          if (iVar16 < 0x10) {
            iVar16 = iVar16 + 0x10;
            uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
            pbVar19 = pbVar19 + 2;
          }
          iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
          uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                   *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
          if (uVar17 < 8) {
            iVar21 = (int)(char)(&DAT_0182e618)[uVar17 * 0x10 + uVar22];
            fVar2 = *(float *)(&DAT_0182e418 + (uVar22 + uVar17 * 0x10) * 4);
          }
          else {
            iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
            if (iVar14 == 0) {
              iVar21 = iVar21 + -1;
            }
            fVar2 = (float)iVar14;
          }
          iVar16 = iVar16 - iVar21;
          uVar17 = (uint)*local_70;
          if (iVar16 < 0x10) {
            iVar16 = iVar16 + 0x10;
            uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
            pbVar19 = pbVar19 + 2;
          }
          iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
          uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                   *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
          if (uVar17 < 8) {
            iVar21 = (int)(char)(&DAT_0182e618)[uVar17 * 0x10 + uVar22];
            fVar3 = *(float *)(&DAT_0182e418 + (uVar22 + uVar17 * 0x10) * 4);
          }
          else {
            iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
            if (iVar14 == 0) {
              iVar21 = iVar21 + -1;
            }
            fVar3 = (float)iVar14;
          }
          iVar16 = iVar16 - iVar21;
          uVar17 = (uint)local_70[1];
          if (iVar16 < 0x10) {
            iVar16 = iVar16 + 0x10;
            uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
            pbVar19 = pbVar19 + 2;
          }
          iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
          uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                   *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
          if (uVar17 < 8) {
            iVar21 = (int)(char)(&DAT_0182e618)[uVar17 * 0x10 + uVar22];
            fVar4 = *(float *)(&DAT_0182e418 + (uVar22 + uVar17 * 0x10) * 4);
          }
          else {
            iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
            if (iVar14 == 0) {
              iVar21 = iVar21 + -1;
            }
            fVar4 = (float)iVar14;
          }
          iVar16 = iVar16 - iVar21;
          uVar17 = (uint)local_70[2];
          if (iVar16 < 0x10) {
            iVar16 = iVar16 + 0x10;
            uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
            pbVar19 = pbVar19 + 2;
          }
          iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
          uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                   *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
          if (uVar17 < 8) {
            iVar21 = (int)(char)(&DAT_0182e618)[uVar17 * 0x10 + uVar22];
            fVar5 = *(float *)(&DAT_0182e418 + (uVar22 + uVar17 * 0x10) * 4);
          }
          else {
            iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
            if (iVar14 == 0) {
              iVar21 = iVar21 + -1;
            }
            fVar5 = (float)iVar14;
          }
          iVar16 = iVar16 - iVar21;
          uVar17 = (uint)local_70[3];
          if (iVar16 < 0x10) {
            iVar16 = iVar16 + 0x10;
            uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
            pbVar19 = pbVar19 + 2;
          }
          iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
          uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                   *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
          if (uVar17 < 8) {
            iVar21 = (int)(char)(&DAT_0182e618)[uVar17 * 0x10 + uVar22];
            fVar6 = *(float *)(&DAT_0182e418 + (uVar22 + uVar17 * 0x10) * 4);
          }
          else {
            iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
            if (iVar14 == 0) {
              iVar21 = iVar21 + -1;
            }
            fVar6 = (float)iVar14;
          }
          iVar16 = iVar16 - iVar21;
          uVar17 = (uint)local_70[4];
          if (iVar16 < 0x10) {
            iVar16 = iVar16 + 0x10;
            uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
            pbVar19 = pbVar19 + 2;
          }
          iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
          uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                   *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
          if (uVar17 < 8) {
            iVar21 = (int)(char)(&DAT_0182e618)[uVar17 * 0x10 + uVar22];
            fVar7 = *(float *)(&DAT_0182e418 + (uVar22 + uVar17 * 0x10) * 4);
          }
          else {
            iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
            if (iVar14 == 0) {
              iVar21 = iVar21 + -1;
            }
            fVar7 = (float)iVar14;
          }
          iVar16 = iVar16 - iVar21;
          uVar17 = (uint)local_70[5];
          if (iVar16 < 0x10) {
            iVar16 = iVar16 + 0x10;
            uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
            pbVar19 = pbVar19 + 2;
          }
          iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
          uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                   *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
          if (uVar17 < 8) {
            iVar21 = (int)(char)(&DAT_0182e618)[uVar17 * 0x10 + uVar22];
            fVar8 = *(float *)(&DAT_0182e418 + (uVar22 + uVar17 * 0x10) * 4);
          }
          else {
            iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
            if (iVar14 == 0) {
              iVar21 = iVar21 + -1;
            }
            fVar8 = (float)iVar14;
          }
          local_70 = local_70 + 8;
          iVar16 = iVar16 - iVar21;
          local_3c = local_3c + -1;
          pfVar12[-0x82] = fVar1 * pfVar12[-2];
          pfVar12[-0x81] = fVar2 * pfVar12[-1];
          pfVar12[-0x80] = fVar3 * *pfVar12;
          pfVar12[-0x7f] = fVar4 * pfVar12[1];
          pfVar12[-0x7e] = fVar5 * pfVar12[2];
          pfVar12[-0x7d] = fVar6 * pfVar12[3];
          pfVar12[-0x7c] = fVar7 * pfVar12[4];
          pfVar12[-0x7b] = fVar8 * pfVar12[5];
          pfVar12 = pfVar12 + 8;
        } while (local_3c != 0);
      }
      if (local_60 < iVar15) {
        if (3 < iVar15 - local_60) {
          local_64 = (float *)(iVar11 + 0x204 + local_60 * 4);
          do {
            uVar17 = (uint)*(byte *)(iVar11 + 0x480 + local_60);
            if (iVar16 < 0x10) {
              iVar16 = iVar16 + 0x10;
              uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
              pbVar19 = pbVar19 + 2;
            }
            iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
            uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                     *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
            if (uVar17 < 8) {
              iVar21 = uVar22 + uVar17 * 0x10;
              fVar1 = *(float *)(&DAT_0182e418 + iVar21 * 4);
              iVar21 = (int)(char)(&DAT_0182e618)[iVar21];
            }
            else {
              iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
              if (iVar14 == 0) {
                iVar21 = iVar21 + -1;
              }
              fVar1 = (float)iVar14;
            }
            iVar16 = iVar16 - iVar21;
            local_64[-0x81] = local_64[-1] * fVar1;
            uVar17 = (uint)*(byte *)(iVar11 + 0x481 + local_60);
            if (iVar16 < 0x10) {
              iVar16 = iVar16 + 0x10;
              uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
              pbVar19 = pbVar19 + 2;
            }
            iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
            uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                     *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
            if (uVar17 < 8) {
              iVar21 = uVar22 + uVar17 * 0x10;
              fVar1 = *(float *)(&DAT_0182e418 + iVar21 * 4);
              iVar21 = (int)(char)(&DAT_0182e618)[iVar21];
            }
            else {
              iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
              if (iVar14 == 0) {
                iVar21 = iVar21 + -1;
              }
              fVar1 = (float)iVar14;
            }
            iVar16 = iVar16 - iVar21;
            local_64[-0x80] = *local_64 * fVar1;
            uVar17 = (uint)*(byte *)(iVar11 + 0x482 + local_60);
            if (iVar16 < 0x10) {
              iVar16 = iVar16 + 0x10;
              uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
              pbVar19 = pbVar19 + 2;
            }
            iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
            uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                     *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
            if (uVar17 < 8) {
              iVar21 = uVar22 + uVar17 * 0x10;
              fVar1 = *(float *)(&DAT_0182e418 + iVar21 * 4);
              iVar21 = (int)(char)(&DAT_0182e618)[iVar21];
            }
            else {
              iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
              if (iVar14 == 0) {
                iVar21 = iVar21 + -1;
              }
              fVar1 = (float)iVar14;
            }
            iVar16 = iVar16 - iVar21;
            local_64[-0x7f] = local_64[1] * fVar1;
            uVar17 = (uint)*(byte *)(iVar11 + 0x483 + local_60);
            if (iVar16 < 0x10) {
              iVar16 = iVar16 + 0x10;
              uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
              pbVar19 = pbVar19 + 2;
            }
            iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
            uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                     *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
            if (uVar17 < 8) {
              iVar21 = (int)(char)(&DAT_0182e618)[uVar17 * 0x10 + uVar22];
              fVar1 = *(float *)(&DAT_0182e418 + (uVar22 + uVar17 * 0x10) * 4);
            }
            else {
              iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
              if (iVar14 == 0) {
                iVar21 = iVar21 + -1;
              }
              fVar1 = (float)iVar14;
            }
            local_60 = local_60 + 4;
            iVar16 = iVar16 - iVar21;
            local_64[-0x7e] = local_64[2] * fVar1;
            local_64 = local_64 + 4;
          } while (local_60 < iVar15 + -3);
        }
        while (local_60 < iVar15) {
          uVar17 = (uint)*(byte *)(iVar11 + 0x480 + local_60);
          if (iVar16 < 0x10) {
            iVar16 = iVar16 + 0x10;
            uVar20 = (uVar20 << 8 | (uint)*pbVar19) << 8 | (uint)pbVar19[1];
            pbVar19 = pbVar19 + 2;
          }
          iVar21 = (int)(char)(&DAT_0182e408)[uVar17];
          uVar22 = uVar20 >> ((char)iVar16 - (&DAT_0182e408)[uVar17] & 0x1fU) &
                   *(uint *)(&DAT_0182e3c8 + iVar21 * 4);
          if (uVar17 < 8) {
            iVar21 = uVar22 + uVar17 * 0x10;
            fVar1 = *(float *)(&DAT_0182e418 + iVar21 * 4);
            iVar21 = (int)(char)(&DAT_0182e618)[iVar21];
          }
          else {
            iVar14 = ((uVar22 & 1) * -2 + 1) * ((int)uVar22 >> 1);
            if (iVar14 == 0) {
              iVar21 = iVar21 + -1;
            }
            fVar1 = (float)iVar14;
          }
          iVar16 = iVar16 - iVar21;
          iVar21 = local_60 * 4;
          local_60 = local_60 + 1;
          *(float *)(iVar11 + -4 + local_60 * 4) = *(float *)(iVar11 + 0x200 + iVar21) * fVar1;
        }
      }
      if (local_60 < 0x80) {
        puVar23 = (undefined4 *)(iVar11 + local_60 * 4);
        for (iVar15 = 0x80 - local_60; iVar15 != 0; iVar15 = iVar15 + -1) {
          *puVar23 = 0;
          puVar23 = puVar23 + 1;
        }
      }
      local_58 = local_58 + 1;
    } while (local_58 < iVar10);
  }
  iVar13 = uVar9 + (((int)(pbVar19 + (-iVar13 - ((int)uVar9 >> 3))) * 8 - (uVar9 & 7)) - iVar16);
  if (iVar13 <= *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0xa0) = iVar13;
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  return 0;
}

// 0149FC30  FUN_0149fc30  size=383  [run]
undefined4 FUN_0149fc30(int param_1,int param_2,undefined1 *param_3,uint *param_4)

{
  undefined1 *puVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = param_1;
  uVar4 = ((uint)CONCAT11(*(undefined1 *)(((int)in_EAX >> 3) + param_1),
                          *(undefined1 *)(((int)in_EAX >> 3) + 1 + param_1)) &
          *(uint *)(&DAT_0182e3a8 + (in_EAX & 7) * 4)) >> (7U - (char)(in_EAX & 7) & 0x1f);
  uVar6 = uVar4 >> 6;
  if (uVar6 == 0) {
    _memset(param_3,0,0x80);
    *param_4 = in_EAX + 3;
    return 0;
  }
  uVar4 = uVar4 & 0x3f;
  uVar5 = in_EAX + 9;
  *param_3 = (char)uVar4;
  if (uVar6 < 6) {
    param_1 = 1;
    uVar2 = (1 << ((byte)uVar6 & 0x1f)) - 1;
    if (1 < param_2) {
      do {
        uVar3 = ((uint)CONCAT11(*(undefined1 *)(((int)uVar5 >> 3) + iVar7),
                                *(undefined1 *)(((int)uVar5 >> 3) + 1 + iVar7)) &
                *(uint *)(&DAT_0182e3a8 + (uVar5 & 7) * 4)) >>
                (('\x10' - (char)(uVar5 & 7)) - (byte)uVar6 & 0x1f);
        uVar5 = uVar5 + uVar6;
        if (uVar3 == uVar2) {
          puVar1 = (undefined1 *)(((int)uVar5 >> 3) + iVar7);
          uVar4 = ((uint)CONCAT11(*puVar1,puVar1[1]) & *(uint *)(&DAT_0182e3a8 + (uVar5 & 7) * 4))
                  >> (10U - (char)(uVar5 & 7) & 0x1f);
          uVar5 = uVar5 + 6;
        }
        else {
          uVar4 = uVar4 + (uVar3 - ((int)uVar2 >> 1));
        }
        param_3[param_1] = (char)uVar4;
        param_1 = param_1 + 1;
      } while (param_1 < param_2);
      *param_4 = uVar5;
      return 0;
    }
  }
  else {
    iVar7 = 1;
    if (1 < param_2) {
      do {
        puVar1 = (undefined1 *)(((int)uVar5 >> 3) + param_1);
        uVar4 = uVar5 & 7;
        iVar8 = iVar7 + 1;
        uVar5 = uVar5 + 6;
        param_3[iVar7] =
             (char)(((uint)CONCAT11(*puVar1,puVar1[1]) & *(uint *)(&DAT_0182e3a8 + uVar4 * 4)) >>
                   (10U - (char)uVar4 & 0x1f));
        iVar7 = iVar8;
      } while (iVar8 < param_2);
    }
  }
  *param_4 = uVar5;
  return 0;
}

// 0149FDB0  FUN_0149fdb0  size=158  [run]
undefined4 __thiscall FUN_0149fdb0(uint param_1,uint *param_2)

{
  undefined1 *puVar1;
  byte *in_EAX;
  uint uVar2;
  byte bVar3;
  int unaff_EBX;
  int iVar4;
  byte *pbVar5;
  
  puVar1 = (undefined1 *)(((int)param_1 >> 3) + unaff_EBX);
  uVar2 = ((uint)CONCAT11(*puVar1,puVar1[1]) & *(uint *)(&DAT_0182e3a8 + (param_1 & 7) * 4)) >>
          (8U - (char)(param_1 & 7) & 0x1f);
  bVar3 = (byte)(uVar2 >> 4);
  *in_EAX = bVar3;
  if (bVar3 < 0xf) {
    in_EAX[1] = (byte)uVar2 & 0xf;
    param_1 = param_1 + 8;
    iVar4 = 3;
    pbVar5 = in_EAX + 3;
    do {
      uVar2 = ((uint)CONCAT11(*(undefined1 *)(((int)param_1 >> 3) + unaff_EBX),
                              *(undefined1 *)(((int)param_1 >> 3) + unaff_EBX + 1)) &
              *(uint *)(&DAT_0182e3a8 + (param_1 & 7) * 4)) >> (8U - (char)(param_1 & 7) & 0x1f);
      param_1 = param_1 + 8;
      iVar4 = iVar4 + -1;
      pbVar5[-1] = (byte)(uVar2 >> 4);
      *pbVar5 = (byte)uVar2 & 0xf;
      pbVar5 = pbVar5 + 2;
    } while (iVar4 != 0);
    *param_2 = param_1;
  }
  return 0;
}

// 0149FE50  FUN_0149fe50  size=98  [run]
undefined4 __fastcall
FUN_0149fe50(undefined4 param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (param_4 < 1) {
    *param_5 = in_EAX;
    return 0;
  }
  do {
    iVar1 = (int)in_EAX >> 3;
    uVar2 = in_EAX & 7;
    iVar4 = iVar3 + 1;
    in_EAX = in_EAX + 6;
    *(char *)(iVar3 + param_2) =
         (char)(((uint)CONCAT11(*(undefined1 *)(param_3 + iVar1),
                                *(undefined1 *)(param_3 + iVar1 + 1)) &
                *(uint *)(&DAT_0182e3a8 + uVar2 * 4)) >> (10U - (char)uVar2 & 0x1f));
    iVar3 = iVar4;
  } while (iVar4 < param_4);
  *param_5 = in_EAX;
  return 0;
}

// 0149FEC0  FUN_0149fec0  size=231  [run]
undefined4 FUN_0149fec0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int local_14;
  int local_c;
  
  iVar2 = *(int *)(param_1 + 4);
  local_c = 0;
  if (0 < iVar2) {
    iVar9 = *(int *)(param_1 + 0x94) * 0x100 - *(int *)(param_1 + 0x98);
    do {
      iVar3 = *(int *)(param_1 + 0x54 + local_c * 4);
      iVar4 = *(int *)(iVar3 + 0x510);
      pbVar1 = (byte *)(iVar3 + 0x480);
      iVar6 = 0;
      if (iVar4 < 1) {
LAB_0149ff7b:
        _memset(pbVar1 + iVar6,0,0x80 - iVar6);
      }
      else {
        pbVar8 = pbVar1;
        local_14 = iVar4;
        do {
          bVar5 = (pbVar8 + (iVar9 - (int)pbVar1))[(iVar3 + 0x400) - iVar9];
          if (bVar5 == 0) {
            *pbVar8 = bVar5;
          }
          else {
            iVar6 = ((int)(pbVar8 + (iVar9 - (int)pbVar1)) >> 8) - ((int)((uint)bVar5 * 5) >> 1);
            iVar7 = iVar6 + 1;
            if (iVar7 < 0) {
              bVar5 = 0xf;
            }
            else if (iVar7 < 0x39) {
              bVar5 = (&DAT_0182e70d)[iVar6];
            }
            else {
              bVar5 = 1;
            }
            *pbVar8 = bVar5;
          }
          pbVar8 = pbVar8 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        iVar6 = iVar4;
        if (iVar4 < 0x80) goto LAB_0149ff7b;
      }
      local_c = local_c + 1;
    } while (local_c < iVar2);
  }
  return 0;
}

// 0149FFB0  FUN_0149ffb0  size=62  [run]
undefined4 FUN_0149ffb0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  
  iVar1 = *(int *)(unaff_EBX + 4);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(unaff_EBX + 0x54 + iVar3 * 4);
      FUN_014a50d0(iVar2 + 0x400,iVar2 + 0x480,*(undefined4 *)(iVar2 + 0x510),iVar2 + 0x200);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 014A0000  FUN_014a0000  size=489  [run]
undefined4 FUN_014a0000(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int local_14;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x44);
  if (0 < iVar2) {
    iVar3 = *(int *)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 4);
    iVar5 = *(int *)(param_1 + 0x40);
    iVar8 = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x38);
    local_8 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = *(int *)(param_1 + 0x54 + local_8 * 4);
        if (*(int *)(iVar6 + 0x50c) != 2) {
          iVar13 = 0;
          iVar11 = iVar8 + -1;
          iVar10 = iVar8;
          if (0 < iVar5) {
            do {
              local_14 = 0;
              iVar9 = iVar10;
              iVar7 = 0;
              if (3 < iVar2) {
                pfVar12 = (float *)(iVar6 + -8 + iVar11 * 4);
                do {
                  iVar9 = iVar10;
                  if (iVar3 <= iVar10) goto LAB_014a01ab;
                  iVar9 = iVar10 + 1;
                  *(float *)(iVar6 + -4 + iVar9 * 4) =
                       *(float *)(&DAT_0182e884 +
                                 ((uint)*(byte *)(iVar13 + iVar6 + 0x400 + iVar8) -
                                 (uint)*(byte *)(iVar11 + 0x400 + iVar6)) * 4) * pfVar12[2];
                  if (iVar3 <= iVar9) {
                    iVar11 = iVar11 + -1;
                    goto LAB_014a01ab;
                  }
                  iVar9 = iVar10 + 2;
                  *(float *)(iVar6 + -4 + iVar9 * 4) =
                       *(float *)(&DAT_0182e884 +
                                 ((uint)*(byte *)(iVar13 + iVar6 + 0x400 + iVar8) -
                                 (uint)*(byte *)(iVar11 + 0x3ff + iVar6)) * 4) * pfVar12[1];
                  if (iVar3 <= iVar9) {
                    iVar11 = iVar11 + -2;
                    goto LAB_014a01ab;
                  }
                  iVar9 = iVar10 + 3;
                  *(float *)(iVar6 + -4 + iVar9 * 4) =
                       *(float *)(&DAT_0182e884 +
                                 ((uint)*(byte *)(iVar13 + iVar6 + 0x400 + iVar8) -
                                 (uint)*(byte *)(iVar11 + 0x3fe + iVar6)) * 4) * *pfVar12;
                  if (iVar3 <= iVar9) {
                    iVar11 = iVar11 + -3;
                    goto LAB_014a01ab;
                  }
                  iVar9 = iVar11 + 0x3fd;
                  local_14 = local_14 + 4;
                  iVar10 = iVar10 + 4;
                  iVar11 = iVar11 + -4;
                  pfVar1 = pfVar12 + -1;
                  pfVar12 = pfVar12 + -4;
                  *(float *)(iVar6 + -4 + iVar10 * 4) =
                       *(float *)(&DAT_0182e884 +
                                 ((uint)*(byte *)(iVar13 + iVar6 + 0x400 + iVar8) -
                                 (uint)*(byte *)(iVar9 + iVar6)) * 4) * *pfVar1;
                  iVar9 = iVar10;
                  iVar7 = local_14;
                } while (local_14 < iVar2 + -3);
              }
              while ((iVar7 < iVar2 && (iVar9 < iVar3))) {
                iVar10 = iVar11 + 0x400;
                iVar11 = iVar11 + -1;
                *(float *)(iVar6 + -4 + (iVar9 + 1) * 4) =
                     *(float *)(&DAT_0182e884 +
                               ((uint)*(byte *)(iVar13 + iVar6 + 0x400 + iVar8) -
                               (uint)*(byte *)(iVar10 + iVar6)) * 4) *
                     *(float *)(iVar6 + 4 + iVar11 * 4);
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 1;
              }
LAB_014a01ab:
              iVar13 = iVar13 + 1;
              iVar10 = iVar9;
            } while (iVar13 < iVar5);
          }
          *(undefined4 *)(iVar6 + 0x1fc) = 0;
        }
        local_8 = local_8 + 1;
      } while (local_8 < iVar4);
    }
  }
  return 0;
}

// 014A01F0  FUN_014a01f0  size=664  [run]
undefined4 FUN_014a01f0(void)

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
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float *pfVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int unaff_EBX;
  int iVar22;
  int local_34;
  int local_24;
  
  if (0 < *(int *)(unaff_EBX + 0x3c)) {
    iVar10 = *(int *)(unaff_EBX + 0x34);
    iVar11 = *(int *)(unaff_EBX + 0x38);
    iVar12 = *(int *)(unaff_EBX + 0x9c);
    iVar20 = *(int *)(unaff_EBX + 4) + -1;
    local_34 = 0;
    if (0 < iVar20) {
      do {
        if (*(int *)(*(int *)(unaff_EBX + 0x54 + local_34 * 4) + 0x50c) == 1) {
          iVar13 = *(int *)(unaff_EBX + 0x58 + local_34 * 4);
          fVar1 = *(float *)(&DAT_0182e748 + (uint)*(byte *)(iVar13 + iVar12 + 0x4fd) * 4);
          fVar16 = 2.0 - fVar1;
          iVar21 = iVar11;
          if (iVar11 < iVar10 + -7) {
            iVar14 = *(int *)(unaff_EBX + 0x54 + local_34 * 4);
            local_24 = (((iVar10 + -7) - iVar11) - 1U >> 3) + 1;
            iVar21 = iVar11 + local_24 * 8;
            pfVar17 = (float *)(iVar14 + iVar11 * 4);
            pfVar18 = (float *)(iVar13 + 8 + iVar11 * 4);
            do {
              fVar2 = *pfVar17;
              fVar3 = pfVar17[1];
              local_24 = local_24 + -1;
              fVar4 = pfVar17[2];
              fVar5 = pfVar17[3];
              fVar6 = pfVar17[4];
              fVar7 = pfVar17[5];
              fVar8 = pfVar17[6];
              fVar9 = pfVar17[7];
              *pfVar17 = fVar2 * fVar1;
              pfVar17[1] = fVar3 * fVar1;
              pfVar17[2] = fVar4 * fVar1;
              pfVar17[3] = fVar5 * fVar1;
              pfVar17[4] = fVar6 * fVar1;
              pfVar17[5] = fVar7 * fVar1;
              pfVar17[6] = fVar8 * fVar1;
              pfVar17[7] = fVar9 * fVar1;
              *(float *)((iVar13 - iVar14) + -0x20 + (int)(pfVar17 + 8)) = fVar16 * fVar2;
              pfVar18[-1] = fVar16 * fVar3;
              *pfVar18 = fVar4 * fVar16;
              pfVar18[1] = fVar5 * fVar16;
              pfVar18[2] = fVar6 * fVar16;
              pfVar18[3] = fVar7 * fVar16;
              pfVar18[4] = fVar8 * fVar16;
              pfVar18[5] = fVar9 * fVar16;
              pfVar17 = pfVar17 + 8;
              pfVar18 = pfVar18 + 8;
            } while (local_24 != 0);
          }
          if (iVar21 < iVar10) {
            if (3 < iVar10 - iVar21) {
              iVar15 = *(int *)(unaff_EBX + 0x54 + local_34 * 4);
              iVar14 = iVar21 * 4;
              iVar19 = ((iVar10 - iVar21) - 4U >> 2) + 1;
              iVar22 = iVar21 * 4;
              iVar21 = iVar21 + iVar19 * 4;
              pfVar17 = (float *)(iVar15 + 4 + iVar14);
              pfVar18 = (float *)(iVar13 + 0xc + iVar22);
              do {
                fVar2 = pfVar17[-1];
                iVar19 = iVar19 + -1;
                pfVar17[-1] = fVar2 * fVar1;
                pfVar18[-3] = fVar2 * fVar16;
                fVar2 = *pfVar17;
                *pfVar17 = fVar2 * fVar1;
                *(float *)((int)pfVar17 + (iVar13 - iVar15)) = fVar2 * fVar16;
                fVar2 = pfVar17[1];
                pfVar17[1] = fVar2 * fVar1;
                pfVar18[-1] = fVar2 * fVar16;
                fVar2 = pfVar17[2];
                pfVar17[2] = fVar2 * fVar1;
                *pfVar18 = fVar2 * fVar16;
                pfVar17 = pfVar17 + 4;
                pfVar18 = pfVar18 + 4;
              } while (iVar19 != 0);
            }
            if (iVar21 < iVar10) {
              iVar14 = *(int *)(unaff_EBX + 0x54 + local_34 * 4);
              iVar22 = iVar10 - iVar21;
              pfVar17 = (float *)(iVar14 + iVar21 * 4);
              do {
                fVar2 = *pfVar17;
                iVar22 = iVar22 + -1;
                *pfVar17 = fVar2 * fVar1;
                *(float *)((iVar13 - iVar14) + -4 + (int)(pfVar17 + 1)) = fVar2 * fVar16;
                pfVar17 = pfVar17 + 1;
              } while (iVar22 != 0);
            }
          }
        }
        local_34 = local_34 + 1;
      } while (local_34 < iVar20);
    }
  }
  return 0;
}

// 014A04A0  FUN_014a04a0  size=79  [run]
undefined4 __fastcall FUN_014a04a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(in_EAX + 4);
  iVar5 = 0;
  if (0 < iVar1) {
    iVar4 = (in_EAX + 0x54) - (int)param_1;
    do {
      iVar2 = *(int *)((int)param_1 + iVar4);
      iVar3 = *(int *)(iVar2 + 0x508);
      if (iVar3 == 0) {
        return 6;
      }
      if (*param_1 != 0) {
        FUN_014a42c0(iVar3,iVar2,*param_1);
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
    } while (iVar5 < iVar1);
  }
  return 0;
}

// 014A0500  FUN_014a0500  size=137  [run]
undefined4 FUN_014a0500(int param_1,undefined4 *param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  if (param_4 == (int *)0x0) {
    param_4 = &local_4;
  }
  *param_4 = -1;
  if (param_5 == (int *)0x0) {
    param_5 = &local_4;
  }
  *param_5 = -1;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 <= param_3) {
      if (0 < iVar1) {
        iVar2 = (param_1 + 0x54) - (int)param_2;
        iVar3 = iVar1;
        do {
          *param_2 = *(undefined4 *)(iVar2 + (int)param_2);
          param_2 = param_2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      *param_4 = iVar1;
      *param_5 = *(int *)(param_1 + 0x34);
      return 0;
    }
    return 2;
  }
  return 1;
}

// 014A05B0  FUN_014a05b0  size=381  [run]
undefined4 FUN_014a05b0(int param_1,int param_2,void *param_3,uint param_4,uint *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int local_4;
  
  iVar3 = DAT_0225bf2c;
  if (param_5 == (uint *)0x0) {
    return 1;
  }
  *param_5 = 0;
  if (iVar3 < 1) {
    return 5;
  }
  if (0xf < param_1 - 1U) {
    return 2;
  }
  uVar5 = ((uint)(param_2 == 0) * 0x628 + 0x71c) * param_1 + 0x130;
  if ((param_3 != (void *)0x0) && (uVar5 <= param_4)) {
    _memset(param_3,0,uVar5);
    piVar1 = (int *)((int)param_3 + 7U & 0xfffffff8);
    piVar6 = piVar1 + 0x32;
    local_4 = 0;
    if (0 < param_1) {
      puVar7 = (uint *)(piVar1 + 0x15);
      do {
        uVar2 = (int)piVar6 + 7U & 0xfffffff8;
        *puVar7 = uVar2;
        piVar6 = (int *)(uVar2 + 0x514);
        if (param_2 == 0) {
          uVar4 = FUN_014a4260(piVar6,0x628);
          *(undefined4 *)(*puVar7 + 0x508) = uVar4;
          piVar6 = (int *)(uVar2 + 0xb3c);
          if (*(int *)(*puVar7 + 0x508) == 0) {
            FUN_0149eab0(piVar1);
            return 7;
          }
        }
        local_4 = local_4 + 1;
        puVar7 = puVar7 + 1;
      } while (local_4 < param_1);
    }
    if ((uint)((int)piVar6 - (int)param_3) <= uVar5) {
      uVar5 = (uVar5 - (int)piVar6) + (int)param_3;
      if (uVar5 < param_1 * 0x200 + 0x60U) {
        return 7;
      }
      piVar1[0x29] = (int)piVar6;
      piVar1[0x2a] = uVar5;
      *piVar1 = param_1;
      FUN_0149eb50(piVar1);
      *param_5 = (uint)piVar1;
      return 0;
    }
    return 8;
  }
  return 7;
}

// 014A0730  FUN_014a0730  size=410  [run]
int FUN_014a0730(int param_1,byte *param_2,uint param_3,byte *param_4,uint param_5,int *param_6)

{
  uint uVar1;
  void *_Dst;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint _MaxCount;
  int local_5c;
  int local_58 [22];
  
  pbVar2 = param_4;
  if (param_6 == (int *)0x0) {
    param_6 = &local_5c;
  }
  *param_6 = 0;
  if (((param_1 == 0) || ((param_2 == (byte *)0x0 && (param_3 != 0)))) ||
     ((param_4 == (byte *)0x0 && (param_5 != 0)))) {
    iVar3 = 1;
  }
  else {
    _MaxCount = param_5;
    if (param_2 == (byte *)0x0) {
      param_4 = param_2;
      param_2 = pbVar2;
      _MaxCount = 0;
      param_3 = param_5;
    }
    if (param_3 == 0) {
      return 9;
    }
    if ((*param_2 & 0x7f) != 0x48) {
      iVar3 = FUN_014a46b0(param_2 + 1,param_3 - 1);
      *param_6 = iVar3 + 1;
      return 10;
    }
    uVar1 = *(uint *)(param_1 + 0xa8);
    if (param_3 < uVar1) {
      uVar4 = param_3 + _MaxCount;
      if (uVar1 < param_3 + _MaxCount) {
        _MaxCount = uVar1 - param_3;
        uVar4 = uVar1;
      }
    }
    else {
      _MaxCount = 0;
      uVar4 = uVar1;
      param_3 = uVar1;
    }
    iVar3 = FUN_014a4990(param_2,param_3,local_58);
    if (iVar3 == 1) {
      _Dst = *(void **)(param_1 + 0xa4);
      _memcpy_s(_Dst,*(rsize_t *)(param_1 + 0xa8),param_2,param_3);
      if (param_4 != (byte *)0x0) {
        _memcpy_s((void *)((int)_Dst + param_3),*(int *)(param_1 + 0xa8) - param_3,param_4,_MaxCount
                 );
      }
      iVar3 = FUN_014a4990(_Dst,uVar4,local_58);
      if (iVar3 == 1) {
        return 9;
      }
    }
    if (iVar3 != 0) {
      iVar3 = FUN_014a46b0(param_2 + 1,param_3 - 1);
      *param_6 = iVar3 + 1;
      return 10;
    }
    iVar3 = FUN_0149ebc0();
    if (iVar3 == 0) {
      *param_6 = local_58[0];
      *(int *)(param_1 + 0x28) = local_58[0];
      return 0;
    }
  }
  return iVar3;
}

// 014A08D0  FUN_014a08d0  size=230  [run]
int FUN_014a08d0(int param_1,char *param_2,int param_3,char *param_4,int param_5,int *param_6)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = param_6;
  if (param_6 == (int *)0x0) {
    piVar4 = (int *)&param_6;
  }
  *piVar4 = 0;
  if (((param_1 == 0) || ((param_2 == (char *)0x0 && (param_3 != 0)))) ||
     ((param_4 == (char *)0x0 && (param_5 != 0)))) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    return 6;
  }
  pcVar1 = param_4;
  if (param_2 == (char *)0x0) {
    pcVar1 = (char *)0x0;
    param_3 = param_5;
    param_2 = param_4;
  }
  if (param_3 != 0) {
    if (*param_2 != -1) {
      uVar2 = 0;
      if (param_3 != 1) {
        do {
          if (param_2[uVar2 + 1] == -1) break;
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_3 - 1U);
      }
      *piVar4 = uVar2 + 1;
      return 10;
    }
    iVar3 = FUN_0149f070(param_2,pcVar1,piVar4);
    if (iVar3 != 9) {
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = 0;
      if (param_3 != 1) {
        do {
          if (param_2[uVar2 + 1] == -1) break;
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_3 - 1U);
      }
      *piVar4 = uVar2 + 1;
      return iVar3;
    }
  }
  return 9;
}

// 014A09C0  FUN_014a09c0  size=342  [run]
undefined4 FUN_014a09c0(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_EDI;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_8 = *(int *)(unaff_EDI + 0x3c) + *(int *)(unaff_EDI + 0x38);
  iVar2 = *(int *)(unaff_EDI + 0xa4);
  local_14 = *(int *)(unaff_EDI + 0xa0);
  iVar4 = (int)(local_14 + 0x10U) >> 3;
  local_c = *(int *)(unaff_EDI + 0x40);
  local_4 = *(int *)(unaff_EDI + 4);
  uVar3 = local_14 + 0x10U & 7;
  puVar1 = (undefined1 *)(((int)(local_14 + 0x19U) >> 3) + iVar2);
  *(uint *)(unaff_EDI + 0x94) =
       ((uint)CONCAT11(*(undefined1 *)(iVar4 + iVar2),*(undefined1 *)(iVar4 + iVar2 + 1)) &
       *(uint *)(&DAT_0182e3a8 + uVar3 * 4)) >> (7U - (char)uVar3 & 0x1f);
  uVar3 = local_14 + 0x19U & 7;
  local_14 = local_14 + 0x20;
  *(uint *)(unaff_EDI + 0x98) =
       ((uint)CONCAT11(*puVar1,puVar1[1]) & *(uint *)(&DAT_0182e3a8 + uVar3 * 4)) >>
       (9U - (char)uVar3 & 0x1f);
  local_10 = 0;
  if (0 < local_4) {
    do {
      iVar4 = *(int *)(unaff_EDI + 0x54 + local_10 * 4);
      FUN_0149fc30(iVar2,*(undefined4 *)(iVar4 + 0x510),iVar4 + 0x400,&local_14);
      if (*(int *)(iVar4 + 0x50c) == 2) {
        FUN_0149fdb0(&local_14);
      }
      else if (0 < local_c) {
        FUN_0149fe50(iVar2,local_c,&local_14);
      }
      local_10 = local_10 + 1;
    } while (local_10 < local_4);
  }
  iVar2 = local_14;
  FUN_0149fec0();
  FUN_0149ffb0();
  if (iVar2 <= *(int *)(unaff_EDI + 0x30)) {
    *(int *)(unaff_EDI + 0xa0) = iVar2;
  }
  *(int *)(unaff_EDI + 0x9c) = *(int *)(unaff_EDI + 0x9c) + 1;
  return 0;
}

// 014A0B50  FUN_014a0b50  size=88  [run]
int FUN_014a0b50(void)

{
  int in_EAX;
  int iVar1;
  int unaff_ESI;
  
  if ((*(int *)(in_EAX + 0x9c) == 1) && (iVar1 = FUN_014a09c0(), iVar1 != 0)) {
    return iVar1;
  }
  iVar1 = FUN_0149f250();
  if (iVar1 == 0) {
    FUN_014a0000();
    FUN_014a01f0();
    if (unaff_ESI != 0) {
      FUN_014a04a0();
    }
    if (*(int *)(in_EAX + 0x9c) == 10) {
      *(undefined4 *)(in_EAX + 0x9c) = 0xb;
    }
    iVar1 = 0;
  }
  return iVar1;
}

// 014A0BB0  FUN_014a0bb0  size=672  [run]
int FUN_014a0bb0(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_14;
  uint local_10 [2];
  uint local_8;
  int local_4;
  
  if (param_3 == (uint *)0x0) {
    param_3 = local_10;
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 0x28) < 1) {
    return 6;
  }
  if ((*(int *)(param_1 + 0x9c) < 1) || (10 < *(int *)(param_1 + 0x9c))) {
    return 0;
  }
  local_4 = *(int *)(param_1 + 0xb4);
  local_10[0] = *(uint *)(param_1 + 0xb8);
  uVar8 = *(uint *)(param_1 + 0xb0);
  iVar3 = *(int *)(param_1 + 0xbc);
  local_8 = uVar8;
  if ((local_4 < 1) && ((local_4 < 0 || (uVar8 == 0)))) {
    if (iVar3 < 0) goto LAB_014a0c8c;
    if ((0 < iVar3) || (0x7f < local_10[0])) {
      iVar3 = FUN_014a0b50();
      if (iVar3 != 0) {
        return iVar3;
      }
      puVar1 = (uint *)(param_1 + 0xb8);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 - 0x80;
      *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + -1 + (uint)(0x7f < uVar8);
      if ((*(int *)(param_1 + 0xbc) < 1) &&
         ((*(int *)(param_1 + 0xbc) < 0 || (*(int *)(param_1 + 0xb8) == 0)))) {
        *(undefined4 *)(param_1 + 0x9c) = 0xb;
      }
      *param_3 = 0x80;
      return 0;
    }
  }
  if ((iVar3 < 1) && ((iVar3 < 0 || (local_10[0] == 0)))) {
LAB_014a0c8c:
    *(undefined4 *)(param_1 + 0x9c) = 0xb;
    return 0;
  }
  if (-1 < local_4) {
    if ((local_4 < 1) && (uVar8 < 0x481)) {
      if ((local_4 < 0) ||
         (((local_4 < 1 && (uVar8 < 0x101)) && ((local_4 < 0 || ((local_4 < 1 && (uVar8 < 0x80))))))
         )) goto LAB_014a0cfc;
      iVar3 = FUN_014a0b50();
    }
    else {
      iVar3 = FUN_0149f210();
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    puVar1 = (uint *)(param_1 + 0xb0);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 - 0x80;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1 + (uint)(0x7f < uVar8);
    return 0;
  }
LAB_014a0cfc:
  iVar4 = FUN_014a0b50();
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar3 = iVar3 + local_4 + (uint)CARRY4(local_10[0],uVar8);
  if ((iVar3 < 1) && ((iVar3 < 0 || (local_10[0] + uVar8 < 0x80)))) {
    local_10[0] = local_10[0] + uVar8;
  }
  else {
    local_10[0] = 0x80;
  }
  if ((-1 < local_4) && (((0 < local_4 || (uVar8 != 0)) && (param_2 != 0)))) {
    iVar3 = *(int *)(param_1 + 4);
    local_10[0] = local_10[0] - uVar8;
    local_14 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = *(int *)(param_2 + local_14 * 4);
        iVar9 = 0;
        iVar4 = iVar2 + uVar8 * 4;
        if (3 < (int)local_10[0]) {
          iVar7 = (local_10[0] - 4 >> 2) + 1;
          iVar9 = iVar7 * 4;
          puVar5 = (undefined4 *)(iVar2 + 4);
          puVar6 = (undefined4 *)(iVar4 + 0xc);
          do {
            puVar5[-1] = puVar6[-3];
            iVar7 = iVar7 + -1;
            *puVar5 = *(undefined4 *)((iVar4 - iVar2) + -0x10 + (int)(puVar5 + 4));
            puVar5[1] = puVar6[-1];
            puVar5[2] = *puVar6;
            puVar5 = puVar5 + 4;
            puVar6 = puVar6 + 4;
          } while (iVar7 != 0);
        }
        if (iVar9 < (int)local_10[0]) {
          iVar7 = local_10[0] - iVar9;
          puVar5 = (undefined4 *)(iVar2 + iVar9 * 4);
          do {
            iVar7 = iVar7 + -1;
            *puVar5 = *(undefined4 *)((int)puVar5 + (iVar4 - iVar2));
            puVar5 = puVar5 + 1;
          } while (iVar7 != 0);
        }
        local_14 = local_14 + 1;
        uVar8 = local_8;
      } while (local_14 < iVar3);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  puVar1 = (uint *)(param_1 + 0xb8);
  uVar8 = *puVar1;
  *puVar1 = *puVar1 - local_10[0];
  *(int *)(param_1 + 0xbc) =
       (*(int *)(param_1 + 0xbc) - ((int)local_10[0] >> 0x1f)) - (uint)(uVar8 < local_10[0]);
  if ((*(int *)(param_1 + 0xbc) < 1) &&
     ((*(int *)(param_1 + 0xbc) < 0 || (*(int *)(param_1 + 0xb8) == 0)))) {
    *(undefined4 *)(param_1 + 0x9c) = 0xb;
  }
  *param_3 = local_10[0];
  return 0;
}

// 014A0E60  FUN_014a0e60  size=45  [run]
undefined4 FUN_014a0e60(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = param_2;
  if (param_2 == (undefined4 *)0x0) {
    puVar1 = &param_2;
  }
  *puVar1 = 0;
  if (param_1 == 0) {
    return 1;
  }
  uVar2 = FUN_014a0bb0(param_1,0,puVar1);
  return uVar2;
}

// 014A0E90  FUN_014a0e90  size=95  [run]
undefined4 FUN_014a0e90(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_5;
  if (param_5 == (undefined4 *)0x0) {
    puVar2 = &param_5;
  }
  *puVar2 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (-1 < param_3)) && (-1 < param_4)) {
    if ((*(int *)(param_1 + 4) <= param_3) && (0x7f < param_4)) {
      uVar1 = FUN_014a0bb0(param_1,param_2,puVar2);
      return uVar1;
    }
    return 2;
  }
  return 1;
}

// 014A0FC0  FUN_014a0fc0  size=29  [run]
undefined4 FUN_014a0fc0(void)

{
  DAT_0225bf30 = DAT_0225bf30 + 1;
  if (DAT_0225bf30 == 1) {
    FUN_014a4230();
    FUN_0149ea70();
  }
  return 0;
}

// 014A0FE0  FUN_014a0fe0  size=22  [run]
undefined4 FUN_014a0fe0(void)

{
  DAT_0225bf30 = DAT_0225bf30 + -1;
  if (DAT_0225bf30 == 0) {
    FUN_0149ea70();
    FUN_014a4250();
  }
  return 0;
}

// 014A1040  FUN_014a1040  size=67  [run]
undefined4 FUN_014a1040(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x84);
    if (0 < iVar2) {
      puVar1 = (undefined4 *)(param_1 + 0x40);
      do {
        FUN_014a42a0(*puVar1);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    return 0;
  }
  return 1;
}

// 014A1090  FUN_014a1090  size=192  [run]
undefined4 FUN_014a1090(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = param_3;
  if (param_3 == (int *)0x0) {
    piVar7 = (int *)&param_3;
  }
  *piVar7 = -1;
  if ((param_1 == 0) || (param_2 == 0)) {
    return 1;
  }
  iVar5 = *(int *)(param_1 + 0x88);
  piVar1 = *(int **)(param_1 + 0x90);
  iVar6 = 0;
  piVar3 = piVar1;
  if (0 < iVar5) {
    do {
      if (*piVar3 == 0) {
        piVar1[iVar6 * 5] = param_2;
        break;
      }
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 5;
    } while (iVar6 < iVar5);
  }
  if (iVar6 != iVar5) {
    iVar5 = 0;
    piVar1[iVar6 * 5 + 3] = 0;
    piVar1[iVar6 * 5 + 4] = 0x80;
    if (0 < *(int *)(param_1 + 0x80)) {
      iVar4 = *(int *)(param_1 + 0x84);
      do {
        iVar2 = 0;
        if (0 < iVar4) {
          do {
            *(undefined4 *)(*(int *)(piVar1[iVar6 * 5 + 2] + iVar5 * 4) + iVar2 * 4) = 0;
            iVar4 = *(int *)(param_1 + 0x84);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x80));
    }
    *piVar7 = iVar6;
    return 0;
  }
  return 7;
}

// 014A1150  FUN_014a1150  size=49  [run]
undefined4 FUN_014a1150(int param_1,int param_2)

{
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x88))) {
    *(undefined4 *)(*(int *)(param_1 + 0x90) + param_2 * 0x14) = 0;
    return 0;
  }
  return 1;
}

// 014A1190  FUN_014a1190  size=1053  [run]
void __fastcall FUN_014a1190(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
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
  float fVar14;
  float fVar15;
  int iVar16;
  int in_EAX;
  float *pfVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 *puVar25;
  float *pfVar26;
  int iVar27;
  int iVar28;
  int local_18;
  int local_10;
  
  iVar24 = *(int *)(*(int *)(param_3 + 0x90) + 0xc + in_EAX * 0x14);
  iVar23 = *(int *)(param_3 + 0x90) + in_EAX * 0x14;
  if (param_1 < iVar24) {
    iVar24 = param_1;
  }
  iVar18 = *(int *)(iVar23 + 0x10);
  if (param_1 - iVar24 < iVar18) {
    iVar18 = param_1 - iVar24;
  }
  local_10 = *(int *)(param_3 + 0x80);
  if (param_2 < *(int *)(param_3 + 0x80)) {
    local_10 = param_2;
  }
  iVar16 = *(int *)(param_3 + 0x84);
  puVar25 = *(undefined4 **)(iVar23 + 8);
  if (0 < local_10) {
    param_4 = param_4 - (int)puVar25;
    do {
      iVar23 = *(int *)((int)puVar25 + param_4) + iVar24 * 4;
      if (0 < iVar16) {
        pfVar26 = (float *)*puVar25;
        iVar21 = param_3 - (int)pfVar26;
        local_18 = iVar16;
        do {
          if (5.9604645e-08 < *pfVar26) {
            fVar2 = *pfVar26;
            iVar22 = *(int *)(iVar21 + (int)pfVar26) + iVar24 * 4;
            iVar27 = 0;
            if (fVar2 < 1.0) {
              if (0 < iVar18 + -7) {
                iVar28 = (iVar18 - 8U >> 3) + 1;
                iVar27 = iVar28 * 8;
                pfVar17 = (float *)(iVar22 + 0xc);
                pfVar20 = (float *)(iVar23 + 8);
                do {
                  iVar28 = iVar28 + -1;
                  fVar3 = pfVar20[-1];
                  fVar4 = *pfVar20;
                  fVar5 = pfVar20[1];
                  fVar6 = pfVar20[2];
                  fVar7 = pfVar20[3];
                  fVar8 = pfVar20[4];
                  fVar9 = pfVar20[5];
                  fVar10 = *(float *)((int)pfVar20 + (iVar22 - iVar23));
                  fVar11 = *pfVar17;
                  fVar12 = pfVar17[1];
                  fVar13 = pfVar17[2];
                  fVar14 = pfVar17[3];
                  fVar15 = pfVar17[4];
                  pfVar17[-3] = pfVar20[-2] * fVar2 + pfVar17[-3];
                  pfVar17[-2] = fVar3 * fVar2 + pfVar17[-2];
                  *(float *)((int)pfVar20 + (iVar22 - iVar23)) = fVar4 * fVar2 + fVar10;
                  *pfVar17 = fVar5 * fVar2 + fVar11;
                  pfVar17[1] = fVar6 * fVar2 + fVar12;
                  pfVar17[2] = fVar7 * fVar2 + fVar13;
                  pfVar17[3] = fVar8 * fVar2 + fVar14;
                  pfVar17[4] = fVar9 * fVar2 + fVar15;
                  pfVar17 = pfVar17 + 8;
                  pfVar20 = pfVar20 + 8;
                } while (iVar28 != 0);
              }
              if (iVar27 < iVar18) {
                if (3 < iVar18 - iVar27) {
                  iVar19 = ((iVar18 - iVar27) - 4U >> 2) + 1;
                  iVar28 = iVar27 * 4;
                  iVar1 = iVar27 * 4;
                  iVar27 = iVar27 + iVar19 * 4;
                  pfVar17 = (float *)(iVar22 + 4 + iVar1);
                  pfVar20 = (float *)(iVar23 + 0xc + iVar28);
                  do {
                    iVar19 = iVar19 + -1;
                    pfVar17[-1] = pfVar20[-3] * fVar2 + pfVar17[-1];
                    *pfVar17 = *(float *)((int)pfVar17 + (iVar23 - iVar22)) * fVar2 + *pfVar17;
                    pfVar17[1] = pfVar20[-1] * fVar2 + pfVar17[1];
                    pfVar17[2] = *pfVar20 * fVar2 + pfVar17[2];
                    pfVar17 = pfVar17 + 4;
                    pfVar20 = pfVar20 + 4;
                  } while (iVar19 != 0);
                }
                if (iVar27 < iVar18) {
                  iVar28 = iVar18 - iVar27;
                  pfVar17 = (float *)(iVar22 + iVar27 * 4);
                  do {
                    iVar28 = iVar28 + -1;
                    *pfVar17 = *(float *)((int)pfVar17 + (iVar23 - iVar22)) * fVar2 + *pfVar17;
                    pfVar17 = pfVar17 + 1;
                  } while (iVar28 != 0);
                }
              }
            }
            else {
              if (0 < iVar18 + -7) {
                iVar28 = (iVar18 - 8U >> 3) + 1;
                iVar27 = iVar28 * 8;
                pfVar17 = (float *)(iVar22 + 0xc);
                pfVar20 = (float *)(iVar23 + 8);
                do {
                  iVar28 = iVar28 + -1;
                  fVar2 = pfVar20[-1];
                  fVar3 = *pfVar20;
                  fVar4 = pfVar20[1];
                  fVar5 = pfVar20[2];
                  fVar6 = pfVar20[3];
                  fVar7 = pfVar20[4];
                  fVar8 = pfVar20[5];
                  fVar9 = *(float *)((int)pfVar20 + (iVar22 - iVar23));
                  fVar10 = *pfVar17;
                  fVar11 = pfVar17[1];
                  fVar12 = pfVar17[2];
                  fVar13 = pfVar17[3];
                  fVar14 = pfVar17[4];
                  pfVar17[-3] = pfVar17[-3] + pfVar20[-2];
                  pfVar17[-2] = fVar2 + pfVar17[-2];
                  *(float *)((int)pfVar20 + (iVar22 - iVar23)) = fVar9 + fVar3;
                  *pfVar17 = fVar10 + fVar4;
                  pfVar17[1] = fVar11 + fVar5;
                  pfVar17[2] = fVar6 + fVar12;
                  pfVar17[3] = fVar13 + fVar7;
                  pfVar17[4] = fVar8 + fVar14;
                  pfVar17 = pfVar17 + 8;
                  pfVar20 = pfVar20 + 8;
                } while (iVar28 != 0);
              }
              if (iVar27 < iVar18) {
                if (3 < iVar18 - iVar27) {
                  iVar19 = ((iVar18 - iVar27) - 4U >> 2) + 1;
                  iVar28 = iVar27 * 4;
                  iVar1 = iVar27 * 4;
                  iVar27 = iVar27 + iVar19 * 4;
                  pfVar17 = (float *)(iVar22 + 4 + iVar1);
                  pfVar20 = (float *)(iVar23 + 0xc + iVar28);
                  do {
                    iVar19 = iVar19 + -1;
                    pfVar17[-1] = pfVar20[-3] + pfVar17[-1];
                    *pfVar17 = *(float *)((int)pfVar17 + (iVar23 - iVar22)) + *pfVar17;
                    pfVar17[1] = pfVar20[-1] + pfVar17[1];
                    pfVar17[2] = *pfVar20 + pfVar17[2];
                    pfVar17 = pfVar17 + 4;
                    pfVar20 = pfVar20 + 4;
                  } while (iVar19 != 0);
                }
                if (iVar27 < iVar18) {
                  iVar28 = iVar18 - iVar27;
                  pfVar17 = (float *)(iVar22 + iVar27 * 4);
                  do {
                    iVar28 = iVar28 + -1;
                    *pfVar17 = *(float *)((int)pfVar17 + (iVar23 - iVar22)) + *pfVar17;
                    pfVar17 = pfVar17 + 1;
                  } while (iVar28 != 0);
                }
              }
            }
          }
          pfVar26 = pfVar26 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      puVar25 = puVar25 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

// 014A15C0  FUN_014a15c0  size=103  [run]
undefined4 FUN_014a15c0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  if (param_1 == 0) {
    return 1;
  }
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x88))) {
    if ((((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x80))) && (-1 < param_4)) &&
       (param_4 < *(int *)(param_1 + 0x84))) {
      *(undefined4 *)
       (*(int *)(*(int *)(*(int *)(param_1 + 0x90) + 8 + param_2 * 0x14) + param_3 * 4) +
       param_4 * 4) = param_5;
      return 0;
    }
    return 2;
  }
  return 2;
}

// 014A1630  FUN_014a1630  size=76  [run]
undefined4 FUN_014a1630(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    return 1;
  }
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x88))) {
    *(undefined4 *)(*(int *)(param_1 + 0x90) + 0xc + param_2 * 0x14) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x10 + param_2 * 0x14) = param_4;
    return 0;
  }
  return 2;
}

// 014A1680  FUN_014a1680  size=56  [run]
undefined4 FUN_014a1680(int param_1,int param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    return 1;
  }
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x88))) {
    *(undefined4 *)(*(int *)(param_1 + 0x90) + 4 + param_2 * 0x14) = param_3;
    return 0;
  }
  return 2;
}

// 014A16C0  FUN_014a16c0  size=82  [run]
undefined4 FUN_014a16c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (0 < iVar2) {
      piVar1 = (int *)(param_1 + 0x40);
      do {
        if (*piVar1 != 0) {
          FUN_014a4290(*piVar1);
          *piVar1 = 0;
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    return 0;
  }
  return 1;
}

// 014A1720  FUN_014a1720  size=558  [run]
undefined4 FUN_014a1720(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *unaff_EDI;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  iVar4 = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &local_44;
  }
  *param_2 = 0;
  iVar1 = unaff_EDI[0x21];
  local_50 = unaff_EDI[0x22];
  iVar2 = unaff_EDI[0x24];
  local_64 = unaff_EDI[0x23] & 1;
  local_4c = unaff_EDI + 0x10;
  local_68 = 0;
  if (0 < iVar1) {
    do {
      _memset((void *)unaff_EDI[iVar4],0,0x200);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  local_5c = 0;
  if (0 < local_50) {
    local_54 = local_50 + -1;
    local_6c = local_50 * 0x14 + -0x14;
    local_58 = 0;
    do {
      iVar4 = local_6c;
      if (local_64 == 0) {
        iVar4 = local_58;
      }
      if ((*(int *)(iVar4 + iVar2) != 0) && (*(int *)(iVar4 + 4 + iVar2) == 0)) {
        local_70 = 0;
        iVar3 = FUN_0149f1d0(*(undefined4 *)(iVar4 + iVar2),&local_60);
        while ((iVar3 == 0 && (local_60 == 0))) {
          FUN_014a0e60(*(undefined4 *)(iVar4 + iVar2),&local_70);
          if (0 < local_70) goto LAB_014a184d;
          iVar3 = FUN_0149f1d0(*(undefined4 *)(iVar4 + iVar2),&local_60);
        }
        if (0 < local_70) {
LAB_014a184d:
          iVar4 = FUN_014a0500(*(undefined4 *)(iVar4 + iVar2),local_40,0x10,&local_48,&local_44);
          if ((iVar4 == 0) && (local_48 <= iVar1)) {
            FUN_014a1190();
            local_68 = local_68 + 1;
          }
        }
      }
      local_6c = local_6c + -0x14;
      local_5c = local_5c + 1;
      local_58 = local_58 + 0x14;
      local_54 = local_54 + -1;
    } while (local_5c < local_50);
    if (0 < local_68) {
      if (0 < iVar1) {
        iVar4 = (int)local_4c - (int)unaff_EDI;
        puVar5 = unaff_EDI;
        local_4c = (undefined4 *)iVar1;
        do {
          FUN_014a42c0(*(undefined4 *)((int)puVar5 + iVar4),*puVar5,
                       *(undefined4 *)((param_1 - (int)unaff_EDI) + (int)puVar5));
          puVar5 = puVar5 + 1;
          local_4c = (undefined4 *)((int)local_4c + -1);
        } while (local_4c != (undefined4 *)0x0);
      }
      unaff_EDI[0x23] = unaff_EDI[0x23] + 1;
      *param_2 = 0x80;
      return 0;
    }
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      FUN_014a42a0(local_4c[iVar4]);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  *param_2 = 0;
  return 0;
}

// 014A1960  FUN_014a1960  size=499  [run]
undefined4
FUN_014a1960(int param_1,int param_2,int param_3,void *param_4,uint param_5,uint *param_6)

{
  uint _Size;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint local_10;
  int *local_c;
  int local_8;
  
  if (DAT_0225bf30 < 1) {
    return 5;
  }
  if ((param_4 == (void *)0x0) || (param_6 == (uint *)0x0)) {
    return 1;
  }
  if ((param_2 < 1) || (0xf < param_3 - 1U)) {
    return 2;
  }
  _Size = param_3 * 0x828 + 0xa4 + (param_3 * 4 + 4) * param_1 * param_2 + param_1 * 0x14;
  if (param_5 < _Size) {
    return 7;
  }
  _memset(param_4,0,_Size);
  uVar1 = (int)param_4 + 7U & 0xfffffff8;
  iVar5 = uVar1 + 0x98;
  iVar3 = 0;
  *param_6 = 0;
  local_10 = 0;
  if (0 < param_3) {
    do {
      *(int *)(uVar1 + iVar3 * 4) = iVar5;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x200;
    } while (iVar3 < param_3);
  }
  iVar3 = 0;
  if (0 < param_3) {
    piVar6 = (int *)(uVar1 + 0x40);
    do {
      iVar4 = FUN_014a4260(iVar5,0x628);
      *piVar6 = iVar4;
      if (iVar4 == 0) {
        FUN_014a16c0(uVar1);
        return 7;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x628;
      piVar6 = piVar6 + 1;
    } while (iVar3 < param_3);
  }
  *(int *)(uVar1 + 0x90) = iVar5;
  iVar5 = iVar5 + param_1 * 0x14;
  if (0 < param_1) {
    local_c = (int *)(*(int *)(uVar1 + 0x90) + 8);
    local_8 = param_1;
    do {
      iVar4 = 0;
      iVar3 = iVar5 + param_2 * 4;
      if (0 < param_2) {
        do {
          *(int *)(iVar5 + iVar4 * 4) = iVar3;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + param_3 * 4;
        } while (iVar4 < param_2);
      }
      iVar4 = iVar5;
      uVar2 = iVar3 - iVar5;
      if (0xffff < (uint)(iVar3 - iVar5)) {
        iVar4 = 0;
        uVar2 = local_10;
      }
      local_10 = uVar2;
      iVar5 = iVar5 + local_10;
      *local_c = iVar4;
      local_c = local_c + 5;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if (_Size < (uint)(iVar5 - (int)param_4)) {
    return 8;
  }
  *(int *)(uVar1 + 0x80) = param_2;
  *(int *)(uVar1 + 0x84) = param_3;
  *(int *)(uVar1 + 0x88) = param_1;
  FUN_014a1040(uVar1);
  *param_6 = uVar1;
  return 0;
}

// 014A1B60  FUN_014a1b60  size=79  [run]
undefined4 FUN_014a1b60(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (-1 < param_3)) && (-1 < param_4)) {
    if ((*(int *)(param_1 + 0x84) <= param_3) && (0x7f < param_4)) {
      uVar1 = FUN_014a1720(param_2,param_5);
      return uVar1;
    }
    return 2;
  }
  return 1;
}

// 014A1C7F  FUN_014a1c7f  size=64  [run]
void * FUN_014a1c7f(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  void *_Dst;
  
  _Dst = (void *)FUN_01293b2b(param_2,param_1 + 4U,param_4,param_5,param_3);
  if (_Dst != (void *)0x0) {
    _memset(_Dst,0,param_1 + 4U);
    *(undefined4 *)((int)_Dst + param_1) = param_2;
  }
  return _Dst;
}

// 014A1CBF  FUN_014a1cbf  size=20  [run]
void FUN_014a1cbf(int param_1,int param_2)

{
  FUN_01293b75(*(undefined4 *)(param_1 + param_2),param_1);
  return;
}

// 014A1D15  FUN_014a1d15  size=16  [run]
void FUN_014a1d15(undefined4 param_1,undefined4 param_2)

{
  FUN_01293b75(param_2,param_1);
  return;
}

// 014A1D35  FUN_014a1d35  size=14  [run]
int FUN_014a1d35(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_012939cc(param_1);
  return iVar1 + 4;
}

// 014A1D79  FUN_014a1d79  size=27  [run]
void FUN_014a1d79(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_014a1c7f(param_1,param_2,1,param_3,param_4);
  return;
}

// 014A1DAB  FUN_014a1dab  size=76  [run]
void FUN_014a1dab(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  
  if (param_5 != 0) {
    if (param_5 == 1) {
      uVar1 = 1;
      goto LAB_014a1dd2;
    }
    if (param_5 == 2) {
      uVar1 = 2;
      goto LAB_014a1dd2;
    }
    if (param_5 == 3) {
      uVar1 = 3;
      goto LAB_014a1dd2;
    }
    FUN_01293f69(0,"E08092651B",0xfffffffd);
  }
  uVar1 = 0;
LAB_014a1dd2:
  FUN_01293b2b(param_1,param_2,param_3,param_4,uVar1);
  return;
}

// 014A1DFC  FUN_014a1dfc  size=97  [run]
void FUN_014a1dfc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar1 = 1;
      goto LAB_014a1e26;
    }
    if (param_2 == 2) {
      uVar1 = 2;
      goto LAB_014a1e26;
    }
    if (param_2 == 3) {
      uVar1 = 3;
      goto LAB_014a1e26;
    }
    FUN_01293f69(0,"E08092650B",0xfffffffd);
  }
  uVar1 = 0;
LAB_014a1e26:
  local_10 = FUN_014a1dab;
  local_c = &LAB_014a1df7;
  local_8 = param_1;
  FUN_0149b0d7(&local_10,uVar1,param_3,param_4);
  return;
}

// 014A1E5D  FUN_014a1e5d  size=23  [run]
void FUN_014a1e5d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_014a1dfc(param_1,1,param_2,param_3);
  return;
}

// 014A1E74  FUN_014a1e74  size=104  [run]
undefined4 FUN_014a1e74(undefined1 *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 < 0x10) {
    *param_3 = 0;
    *param_4 = 0;
    return 0;
  }
  *param_3 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  *param_4 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  return 1;
}

// 014A1EDC  FUN_014a1edc  size=34  [run]
undefined4 FUN_014a1edc(int param_1,uint param_2,undefined1 *param_3)

{
  if (param_2 < 0x10) {
    *param_3 = 0;
    return 0;
  }
  *param_3 = *(undefined1 *)(param_1 + 9);
  return 1;
}

// 014A1EFE  FUN_014a1efe  size=49  [run]
undefined4 FUN_014a1efe(int param_1,uint param_2,undefined2 *param_3)

{
  if (param_2 < 0x10) {
    *param_3 = 0;
    return 0;
  }
  *param_3 = CONCAT11(*(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb));
  return 1;
}

// 014A1F2F  FUN_014a1f2f  size=346  [run]
uint __thiscall FUN_014a1f2f(uint3 param_1,undefined1 *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uStack_8;
  
  uStack_8 = (uint)param_1;
  FUN_014a1edc(param_2,param_3,(int)&uStack_8 + 3);
  if ((uStack_8._3_1_ == 0) || (uVar1 = (uint)uStack_8._3_1_, param_3 < uVar1)) {
    uVar1 = 0;
  }
  else {
    *param_4 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
    param_4[1] = CONCAT31(CONCAT21(CONCAT11(param_2[4],param_2[5]),param_2[6]),param_2[7]);
    *(undefined1 *)(param_4 + 2) = param_2[8];
    *(undefined1 *)((int)param_4 + 9) = param_2[9];
    *(ushort *)((int)param_4 + 10) = CONCAT11(param_2[10],param_2[0xb]);
    *(undefined1 *)(param_4 + 3) = param_2[0xc];
    *(undefined1 *)((int)param_4 + 0xd) = param_2[0xd];
    *(undefined1 *)((int)param_4 + 0xe) = param_2[0xe];
    *(byte *)((int)param_4 + 0xf) = param_2[0xf] & 3;
    *(byte *)(param_4 + 4) = (byte)param_2[0xf] >> 4;
    param_4[5] = CONCAT31(CONCAT21(CONCAT11(param_2[0x10],param_2[0x11]),param_2[0x12]),
                          param_2[0x13]);
    param_4[6] = CONCAT31(CONCAT21(CONCAT11(param_2[0x14],param_2[0x15]),param_2[0x16]),
                          param_2[0x17]);
    param_4[7] = CONCAT31(CONCAT21(CONCAT11(param_2[0x18],param_2[0x19]),param_2[0x1a]),
                          param_2[0x1b]);
    param_4[8] = CONCAT31(CONCAT21(CONCAT11(param_2[0x1c],param_2[0x1d]),param_2[0x1e]),
                          param_2[0x1f]);
  }
  return uVar1;
}

// 014A219A  FUN_014a219a  size=109  [run]
int FUN_014a219a(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int local_c;
  uint local_8;
  
  piVar1 = param_3;
  *param_3 = 0;
  iVar2 = FUN_014a1e74(param_1,param_2,&param_3,&local_c);
  if (((iVar2 != 0) && (iVar2 = FUN_014a1edc(param_1,param_2,(int)&param_3 + 3), iVar2 != 0)) &&
     (iVar2 = FUN_014a1efe(param_1,param_2,&local_8), iVar2 != 0)) {
    *piVar1 = (local_c - (local_8 & 0xffff)) - ((uint)param_3 >> 0x18);
    return ((uint)param_3 >> 0x18) + 8 + param_1;
  }
  return 0;
}

// 014A2207  FUN_014a2207  size=26  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014a2207(void)

{
  if (DAT_0225bf38 == 0) {
    _DAT_0225bf34 = "\nCRI UsfDmx/PCx86 Ver.1.01.03 Build:Sep  3 2012 18:07:27\n";
  }
  DAT_0225bf38 = DAT_0225bf38 + 1;
  return;
}

// 014A2221  FUN_014a2221  size=7  [run]
void FUN_014a2221(void)

{
  DAT_0225bf38 = DAT_0225bf38 + -1;
  return;
}

// 014A2228  FUN_014a2228  size=110  [run]
int FUN_014a2228(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_10 = 1;
  local_8 = 0x80;
  iVar1 = FUN_014a2a71(&local_10);
  local_8 = 0x80;
  iVar2 = FUN_014a2a71(&local_10);
  iVar3 = param_1 * 0xc + 0x13;
  return ((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3) * 8 + 0x30 +
         (((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3) +
         ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3)) * 8;
}

// 014A2296  FUN_014a2296  size=76  [run]
void FUN_014a2296(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if ((iVar1 != 0) && (param_1[4] != 0)) {
      FUN_01293b75(iVar1,param_1[4]);
    }
    if (param_1[5] != 0) {
      FUN_014a34e8(param_1[5]);
    }
    if (param_1[6] != 0) {
      FUN_014a34e8(param_1[6]);
    }
    if (iVar1 != 0) {
      FUN_01293b75(iVar1,param_1);
    }
  }
  return;
}

// 014A22E2  FUN_014a22e2  size=14  [run]
int FUN_014a22e2(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return (int)*(char *)(param_1 + 5);
}

// 014A22F0  FUN_014a22f0  size=13  [run]
void FUN_014a22f0(int param_1)

{
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}

// 014A22FD  FUN_014a22fd  size=12  [run]
void FUN_014a22fd(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// 014A2309  FUN_014a2309  size=45  [run]
void FUN_014a2309(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  param_2 = param_2 * 0xc;
  *(undefined4 *)(param_2 + *(int *)(param_1 + 0x10)) = param_3;
  *(undefined4 *)(param_2 + 4 + *(int *)(param_1 + 0x10)) = param_4;
  *(undefined4 *)(param_2 + 8 + *(int *)(param_1 + 0x10)) = param_5;
  return;
}

// 014A2336  FUN_014a2336  size=12  [run]
void FUN_014a2336(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 7) = param_2;
  return;
}

// 014A2342  FUN_014a2342  size=9  [run]
void FUN_014a2342(int param_1)

{
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

// 014A234B  FUN_014a234b  size=164  [run]
void FUN_014a234b(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  undefined4 local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  local_8 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = 1;
  FUN_014a3509(uVar2,1,0x7fffffff,&local_10);
  if (1 < local_c) {
    do {
      if (*(char *)(local_10 + iVar3) != '\0') {
        FUN_014a3560(&local_10,iVar3,&local_10,local_18);
        FUN_014a3523(uVar2,1,local_18);
        FUN_014a3539(uVar1,1,&local_10);
        FUN_014a3539(*(undefined4 *)(param_1 + 0x18),1,&local_10);
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_c);
  }
  FUN_014a3539(uVar1,1,&local_10);
  FUN_014a3539(local_8,1,&local_10);
  return;
}

// 014A23EF  FUN_014a23ef  size=72  [run]
void FUN_014a23ef(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(param_2 * 0xc + *(int *)(param_1 + 0x10));
  if (*piVar1 != 0) {
    uVar2 = FUN_014a354f(*piVar1,1);
    *param_3 = uVar2;
    uVar2 = FUN_014a354f(*piVar1,0);
    *param_4 = uVar2;
    uVar2 = FUN_014a354f(*piVar1,2);
    *param_5 = uVar2;
  }
  return;
}

// 014A2452  FUN_014a2452  size=290  [run]
undefined4 * FUN_014a2452(int param_1,void *param_2,size_t param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_20 [12];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  _memset(param_2,0,param_3);
  FUN_0149b28b(param_2,param_3,local_20);
  puVar1 = (undefined4 *)FUN_0149b2a1(local_20,0x24,8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_1;
    *puVar1 = 0;
    *(undefined1 *)((int)puVar1 + 5) = 0;
    puVar1[3] = 0;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    iVar2 = FUN_0149b2a1(local_20,(param_1 + 1) * 0xc,8);
    puVar1[4] = iVar2;
    if (iVar2 != 0) {
      local_14 = 1;
      local_10 = 0;
      local_c = 0x80;
      local_8 = FUN_014a2a71(&local_14);
      uVar3 = FUN_0149b2a1(local_20,local_8,8);
      iVar2 = FUN_014a2afc(&local_14,uVar3,local_8);
      puVar1[5] = iVar2;
      if (iVar2 != 0) {
        local_c = 0x80;
        uVar3 = FUN_014a2a71(&local_14);
        uVar4 = FUN_0149b2a1(local_20,uVar3,8);
        iVar2 = FUN_014a2afc(&local_14,uVar4,uVar3);
        puVar1[6] = iVar2;
        if (iVar2 != 0) {
          FUN_014a2309(puVar1,puVar1[2],iVar2,0,0xffffffff);
          *(undefined1 *)(puVar1 + 1) = 1;
          _memset(puVar1 + 7,0,8);
          FUN_0149b2a0(local_20);
          return puVar1;
        }
      }
      FUN_014a2296(puVar1);
      return (undefined4 *)0x0;
    }
    FUN_014a2296(puVar1);
  }
  return (undefined4 *)0x0;
}

// 014A2574  FUN_014a2574  size=197  [run]
undefined4 * FUN_014a2574(undefined4 param_1,int param_2)

{
  undefined4 *_Dst;
  void *_Dst_00;
  int iVar1;
  size_t _Size;
  
  _Dst = (undefined4 *)FUN_01293a92(param_1,0x24,"CriUsfDmx",0);
  if (_Dst != (undefined4 *)0x0) {
    _memset(_Dst,0,0x24);
    *_Dst = param_1;
    _Dst[2] = param_2;
    _Size = (param_2 + 1) * 0xc;
    *(undefined1 *)((int)_Dst + 5) = 0;
    _Dst[3] = 0;
    _Dst_00 = (void *)FUN_01293a92(param_1,_Size,"CriUsfDmxOut",0);
    _Dst[4] = _Dst_00;
    if (_Dst_00 != (void *)0x0) {
      _memset(_Dst_00,0,_Size);
      *(undefined1 *)((int)_Dst + 6) = 0;
      iVar1 = FUN_014a32bd(param_1,0,0x80);
      _Dst[5] = iVar1;
      if (iVar1 != 0) {
        iVar1 = FUN_014a32bd(param_1,0,0x80);
        _Dst[6] = iVar1;
        if (iVar1 != 0) {
          FUN_014a2309(_Dst,_Dst[2],iVar1,0,0xffffffff);
          *(undefined1 *)(_Dst + 1) = 1;
          _memset(_Dst + 7,0,8);
          return _Dst;
        }
      }
    }
    FUN_014a2296(_Dst);
  }
  return (undefined4 *)0x0;
}

// 014A2639  FUN_014a2639  size=143  [run]
void FUN_014a2639(int param_1)

{
  int iVar1;
  undefined1 local_c [8];
  
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  iVar1 = FUN_014a354f(*(undefined4 *)(param_1 + 0x14),1);
  while (iVar1 != 0) {
    FUN_014a3509(*(undefined4 *)(param_1 + 0x14),1,0xffffffff,local_c);
    FUN_014a3539(*(undefined4 *)(param_1 + 0x14),0,local_c);
    iVar1 = FUN_014a354f(*(undefined4 *)(param_1 + 0x14),1);
  }
  _memset(*(void **)(param_1 + 0x10),0,(*(int *)(param_1 + 8) + 1) * 0xc);
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_014a34fd(*(undefined4 *)(param_1 + 0x14));
  FUN_014a34fd(*(undefined4 *)(param_1 + 0x18));
  FUN_014a2309(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0,0xffffffff);
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

// 014A26C8  FUN_014a26c8  size=875  [run]
void FUN_014a26c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char **ppcVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint local_60;
  int local_5c;
  byte local_54;
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  char *local_2c;
  uint local_28;
  char *local_24;
  int local_20;
  char *local_1c;
  uint local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_c = *(int *)(param_1 + 8);
  local_10 = *(undefined4 *)(param_1 + 0x14);
  local_14 = *(int **)(param_1 + 0x10);
  if (*(char *)(param_1 + 7) == '\x01') {
    piVar7 = local_14 + local_c * 3;
    FUN_014a3509(*piVar7,1,0xffffffff,&local_1c);
    while (local_18 != 0) {
      FUN_014a3539(*piVar7,0,&local_1c);
      FUN_014a3509(*piVar7,1,0xffffffff,&local_1c);
    }
    local_c = local_c + 1;
  }
  do {
    FUN_014a3509(local_10,1,0xffffffff,&local_1c);
    if (local_18 == 0) {
      if (*(char *)(param_1 + 5) == '\x02') {
        *(undefined1 *)(param_1 + 5) = 3;
        return;
      }
      goto LAB_014a29b4;
    }
    local_8 = 0;
    piVar7 = local_14;
    if (0 < local_c) {
      do {
        if (*piVar7 != 0) {
          FUN_014a3509(*piVar7,0,0xffffffff,&local_2c);
          if (local_1c == local_2c) {
            uVar8 = local_18;
            if (local_28 <= local_18) {
              uVar8 = local_28;
            }
            FUN_014a3560(&local_1c,uVar8,&local_1c,local_34);
            FUN_014a3560(&local_2c,uVar8,&local_2c,local_3c);
            FUN_014a3539(uVar1,0,&local_1c);
            FUN_014a3523(local_10,1,local_34);
            FUN_014a3523(local_14[local_8 * 3],0,local_3c);
            break;
          }
          FUN_014a3523(*piVar7,0,&local_2c);
        }
        local_8 = local_8 + 1;
        piVar7 = piVar7 + 3;
      } while (local_8 < local_c);
    }
  } while (local_8 != local_c);
  FUN_014a3523(local_10,1,&local_1c);
LAB_014a29b4:
  do {
    while( true ) {
      uVar6 = FUN_014a354f(uVar1,1);
      FUN_014a3509(uVar1,1,0x7fffffff,&local_1c);
      uVar8 = local_18;
      if (local_18 == 0) {
        if (*(char *)(param_1 + 6) != '\x01') {
          return;
        }
        *(undefined1 *)(param_1 + 5) = 2;
        return;
      }
      iVar9 = uVar6 - local_18;
      if (*local_1c != '\0') break;
      FUN_014a3523(uVar1,1,&local_1c);
      FUN_014a234b(param_1);
    }
    local_20 = 0;
    local_24 = (char *)0x0;
    iVar2 = FUN_014a1f2f(local_1c,local_18,&local_60);
    if (iVar2 == 0) goto LAB_014a2a1e;
    uVar3 = local_5c + 8;
    if (local_18 < uVar3) {
      if (uVar6 == uVar8 || iVar9 < 0) goto LAB_014a2a1e;
      FUN_014a3509(uVar1,1,0x7fffffff,&local_24);
      if (local_20 + local_18 < local_5c + 8U) {
        FUN_014a3523(uVar1,1,&local_24);
        FUN_014a3523(uVar1,1,&local_1c);
        return;
      }
      ppcVar4 = &local_24;
      uVar3 = (local_5c - local_18) + 8;
    }
    else {
      ppcVar4 = &local_1c;
    }
    FUN_014a3560(ppcVar4,uVar3,ppcVar4,&local_2c);
    FUN_014a3523(uVar1,1,&local_2c);
    piVar7 = local_14;
    local_8 = 0;
    if (0 < local_c) {
      puVar5 = (uint *)(local_14 + 2);
      do {
        if (((puVar5[-2] != 0) && ((puVar5[-1] == 0 || (puVar5[-1] == local_60)))) &&
           ((*puVar5 == 0xffffffff || (*puVar5 == (uint)local_54)))) {
          iVar9 = FUN_014a2bdf(local_10);
          if (iVar9 < 3) goto LAB_014a2a08;
          piVar7 = piVar7 + local_8 * 3;
          iVar9 = FUN_014a2bdf(*piVar7);
          if (iVar9 < 3) goto LAB_014a2a08;
          FUN_014a3539(*piVar7,1,&local_1c);
          FUN_014a3539(local_10,1,&local_1c);
          local_1c = (char *)0x0;
          local_18 = 0;
          if (local_24 != (char *)0x0) {
            FUN_014a3539(*piVar7,1,&local_24);
            FUN_014a3539(local_10,1,&local_24);
            local_24 = (char *)0x0;
            local_20 = 0;
          }
          break;
        }
        local_8 = local_8 + 1;
        puVar5 = puVar5 + 3;
      } while (local_8 < local_c);
    }
  } while (local_8 != local_c);
LAB_014a2a08:
  if (local_24 != (char *)0x0) {
    FUN_014a3523(uVar1,1,&local_24);
  }
LAB_014a2a1e:
  FUN_014a3523(uVar1,1,&local_1c);
  return;
}

// 014A2A33  FUN_014a2a33  size=62  [run]
void FUN_014a2a33(int param_1)

{
  if ((*(char *)(param_1 + 5) == '\x01') || (*(char *)(param_1 + 5) == '\x02')) {
    FUN_014a26c8(param_1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_014a3509(*(int *)(param_1 + 0x14),1,0xffffffff,param_1 + 0x1c);
    FUN_014a3523(*(undefined4 *)(param_1 + 0x14),1,param_1 + 0x1c);
  }
  return;
}

// 014A2A71  FUN_014a2a71  size=26  [run]
int FUN_014a2a71(int *param_1)

{
  int iVar1;
  
  iVar1 = 0x30;
  if (*param_1 == 1) {
    iVar1 = 0x78;
  }
  return param_1[2] * 0x10 + 8 + iVar1;
}

// 014A2A8B  FUN_014a2a8b  size=36  [run]
undefined4 * __fastcall FUN_014a2a8b(int param_1)

{
  undefined4 *_Dst;
  
  _Dst = *(undefined4 **)(param_1 + 0x24);
  if (_Dst == (undefined4 *)0x0) {
    _Dst = (undefined4 *)0x0;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = *_Dst;
    _memset(_Dst,0,0x10);
  }
  return _Dst;
}

// 014A2AAF  FUN_014a2aaf  size=22  [run]
void FUN_014a2aaf(void)

{
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  _memset(unaff_ESI,0,0x10);
  *unaff_ESI = *(undefined4 *)(unaff_EDI + 0x24);
  *(undefined4 **)(unaff_EDI + 0x24) = unaff_ESI;
  return;
}

// 014A2AC5  FUN_014a2ac5  size=25  [run]
void FUN_014a2ac5(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_01294197(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 014A2ADE  FUN_014a2ade  size=15  [run]
void FUN_014a2ade(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 8) != 0) {
    FUN_012941d9(*(int *)(in_EAX + 8));
  }
  return;
}

// 014A2AED  FUN_014a2aed  size=15  [run]
void FUN_014a2aed(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 8) != 0) {
    FUN_0129420c(*(int *)(in_EAX + 8));
  }
  return;
}

// 014A2AFC  FUN_014a2afc  size=227  [run]
undefined4 * FUN_014a2afc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *_Dst;
  undefined4 uVar1;
  int iVar2;
  undefined1 local_18 [12];
  uint local_c;
  int local_8;
  
  FUN_0149b28b(param_2,param_3,local_18);
  _Dst = (undefined4 *)FUN_0149b2a1(local_18,0x28,8);
  _memset(_Dst,0,0x28);
  *_Dst = &PTR_FUN_01b34908;
  _Dst[1] = "CriSjUni";
  if (*param_1 == 1) {
    uVar1 = FUN_0149b2a1(local_18,0x48,1);
    iVar2 = FUN_01294159(uVar1,0x48);
    _Dst[2] = iVar2;
    if (iVar2 == 0) {
      FUN_01293f1f(0,"E09021213:Failed in criCs_Create().");
      return (undefined4 *)0x0;
    }
  }
  else {
    _Dst[2] = 0;
  }
  _Dst[3] = param_1[1];
  _Dst[4] = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  uVar1 = FUN_0149b2a1(local_18,param_1[2] << 4,8);
  _Dst[8] = uVar1;
  _Dst[9] = 0;
  local_c = 0;
  if (param_1[2] != 0) {
    local_8 = 0;
    do {
      FUN_014a2aaf();
      local_c = local_c + 1;
      local_8 = local_8 + 0x10;
    } while (local_c < (uint)param_1[2]);
  }
  FUN_0149b2a0(local_18);
  return _Dst;
}

// 014A2BDF  FUN_014a2bdf  size=39  [run]
int FUN_014a2bdf(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_014a2ade();
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x24); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  FUN_014a2aed();
  return iVar2;
}

// 014A2C06  FUN_014a2c06  size=57  [run]
void FUN_014a2c06(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_014a2ade();
  puVar1 = (undefined4 *)(param_1 + 0x10);
  iVar2 = 4;
  do {
    while ((undefined4 *)*puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)*puVar1;
      FUN_014a2aaf();
    }
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_014a2aed();
  return;
}

// 014A2C6D  FUN_014a2c6d  size=154  [run]
void FUN_014a2c6d(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  FUN_014a2ade();
  piVar1 = (int *)(param_1 + 0x10 + param_2 * 4);
  piVar2 = (int *)*piVar1;
  if (piVar2 == (int *)0x0) {
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    local_c = piVar2[2];
    local_8 = piVar2[3];
    if (param_3 < local_8) {
      if (*(int *)(param_1 + 0xc) == 1) {
        FUN_014a3560(&local_c,param_3,&local_c,&local_14);
        *param_4 = local_c;
        param_4[1] = local_8;
        piVar2[2] = local_14;
        piVar2[3] = local_10;
      }
      else {
        *param_4 = 0;
        param_4[1] = 0;
      }
    }
    else {
      *param_4 = local_c;
      param_4[1] = local_8;
      *piVar1 = *piVar2;
      FUN_014a2aaf();
    }
  }
  FUN_014a2aed();
  return;
}

// 014A2D07  FUN_014a2d07  size=119  [run]
void FUN_014a2d07(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_3[1] != 0) && (*param_3 != 0)) {
    FUN_014a2ade();
    piVar1 = (int *)0;
    piVar2 = (int *)(param_1 + 0x10 + param_2 * 4);
    do {
      piVar4 = piVar2;
      iVar3 = (int)piVar1;
      piVar1 = (int *)*piVar4;
      piVar2 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (((*(int *)(param_1 + 0xc) == 1) && (iVar3 != 0)) &&
       (*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0xc) == *param_3)) {
      *(int *)(iVar3 + 0xc) = param_3[1] + *(int *)(iVar3 + 0xc);
    }
    else {
      iVar3 = FUN_014a2a8b();
      if (iVar3 != 0) {
        *(int *)(iVar3 + 8) = *param_3;
        *(int *)(iVar3 + 0xc) = param_3[1];
        *piVar4 = iVar3;
      }
    }
    FUN_014a2aed();
    return;
  }
  return;
}

// 014A2D7E  FUN_014a2d7e  size=112  [run]
void FUN_014a2d7e(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_3[1] != 0) && (*param_3 != 0)) {
    FUN_014a2ade();
    piVar1 = (int *)(param_1 + 0x10 + param_2 * 4);
    iVar2 = *piVar1;
    if (((*(int *)(param_1 + 0xc) == 1) && (iVar2 != 0)) &&
       (param_3[1] + *param_3 == *(int *)(iVar2 + 8))) {
      *(int *)(iVar2 + 8) = *param_3;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + param_3[1];
    }
    else {
      piVar3 = (int *)FUN_014a2a8b();
      if (piVar3 != (int *)0x0) {
        piVar3[2] = *param_3;
        piVar3[3] = param_3[1];
        *piVar3 = *piVar1;
        *piVar1 = (int)piVar3;
      }
    }
    FUN_014a2aed();
    return;
  }
  return;
}

// 014A2DEE  FUN_014a2dee  size=27  [run]
int FUN_014a2dee(int *param_1)

{
  int iVar1;
  
  iVar1 = 0x44;
  if (*param_1 == 1) {
    iVar1 = 0x8c;
  }
  return param_1[3] + param_1[2] + param_1[1] + iVar1;
}

// 014A2E09  FUN_014a2e09  size=188  [run]
undefined4 * FUN_014a2e09(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *_Dst;
  undefined4 uVar1;
  int iVar2;
  undefined1 local_10 [12];
  
  FUN_0149b28b(param_2,param_3,local_10);
  _Dst = (undefined4 *)FUN_0149b2a1(local_10,0x3c,8);
  _memset(_Dst,0,0x3c);
  *_Dst = &PTR_FUN_01b34920;
  _Dst[1] = "CriSjRbf";
  if (*param_1 == 1) {
    uVar1 = FUN_0149b2a1(local_10,0x48,1);
    iVar2 = FUN_01294159(uVar1,0x48);
    _Dst[2] = iVar2;
    if (iVar2 == 0) {
      FUN_01293f1f(0,"E09021620B:Failed in criCs_Create().");
      return (undefined4 *)0x0;
    }
  }
  else {
    _Dst[2] = 0;
  }
  _Dst[3] = param_1[4];
  uVar1 = FUN_0149b2a1(local_10,param_1[1] + param_1[2],param_1[3]);
  _Dst[8] = uVar1;
  _Dst[9] = param_1[1];
  _Dst[10] = param_1[2];
  FUN_014a34fd(_Dst);
  FUN_0149b2a0(local_10);
  return _Dst;
}

// 014A2EC5  FUN_014a2ec5  size=25  [run]
void FUN_014a2ec5(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_01294197(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 014A2EFF  FUN_014a2eff  size=15  [run]
void FUN_014a2eff(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 8) != 0) {
    FUN_012941d9(*(int *)(in_EAX + 8));
  }
  return;
}

// 014A2F0E  FUN_014a2f0e  size=15  [run]
void FUN_014a2f0e(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 8) != 0) {
    FUN_0129420c(*(int *)(in_EAX + 8));
  }
  return;
}

// 014A2F1D  FUN_014a2f1d  size=49  [run]
void FUN_014a2f1d(int param_1)

{
  FUN_014a2eff();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x24);
  FUN_014a2f0e();
  return;
}

// 014A2F4E  FUN_014a2f4e  size=190  [run]
void FUN_014a2f4e(int param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_014a2eff();
  if (param_2 == 0) {
    uVar1 = (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x24);
    if (*(uint *)(param_1 + 0x14) < uVar1) {
      uVar1 = *(uint *)(param_1 + 0x14);
    }
    param_4[1] = uVar1;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    param_4[1] = param_3;
    *param_4 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = (*(int *)(param_1 + 0x18) + param_3) % *(uint *)(param_1 + 0x24);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - param_4[1];
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + param_4[1];
  }
  else if (param_2 == 1) {
    uVar1 = (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x1c)) + *(int *)(param_1 + 0x24);
    if (*(uint *)(param_1 + 0x10) < uVar1) {
      uVar1 = *(uint *)(param_1 + 0x10);
    }
    param_4[1] = uVar1;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    param_4[1] = param_3;
    *param_4 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x1c) + param_3) % *(uint *)(param_1 + 0x24);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_4[1];
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_4[1];
  }
  else {
    param_4[1] = 0;
    *param_4 = 0;
  }
  FUN_014a2f0e();
  return;
}

// 014A300C  FUN_014a300c  size=198  [run]
void FUN_014a300c(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_3[1];
  if ((uVar3 != 0) && (*param_3 != 0)) {
    if (param_2 == 1) {
      uVar1 = *param_3 - *(int *)(param_1 + 0x20);
      if (uVar1 < *(uint *)(param_1 + 0x28)) {
        uVar2 = *(uint *)(param_1 + 0x28) - uVar1;
        if (uVar3 < uVar2) {
          uVar2 = uVar3;
        }
        FID_conflict__memcpy
                  ((void *)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x20) + uVar1),
                   (void *)*param_3,uVar2);
      }
      uVar3 = param_3[1];
      uVar1 = (uVar3 - *(int *)(param_1 + 0x20)) + *param_3;
      if (*(uint *)(param_1 + 0x24) < uVar1) {
        uVar2 = uVar1 - *(uint *)(param_1 + 0x24);
        if (uVar2 <= uVar3) {
          uVar3 = uVar2;
        }
        FID_conflict__memcpy
                  (*(void **)(param_1 + 0x20),
                   (void *)((int)*(void **)(param_1 + 0x20) + (uVar1 - uVar3)),uVar3);
      }
      FUN_014a2eff();
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3[1];
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_3[1];
    }
    else {
      if (param_2 != 0) {
        param_3[1] = 0;
        *param_3 = 0;
        return;
      }
      FUN_014a2eff();
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3[1];
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_3[1];
    }
    FUN_014a2f0e();
    return;
  }
  return;
}

// 014A30D2  FUN_014a30d2  size=172  [run]
void FUN_014a30d2(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_3[1] != 0) && (*param_3 != 0)) {
    if (param_2 == 0) {
      FUN_014a2eff();
      uVar1 = *(uint *)(param_1 + 0x24);
      uVar2 = ((*(int *)(param_1 + 0x18) - param_3[1]) + uVar1) % uVar1;
      if (uVar2 == (uint)(*param_3 - *(int *)(param_1 + 0x20)) % uVar1) {
        *(uint *)(param_1 + 0x18) = uVar2;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3[1];
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) - param_3[1];
      }
    }
    else {
      if (param_2 != 1) {
        param_3[1] = 0;
        *param_3 = 0;
        return;
      }
      FUN_014a2eff();
      uVar1 = *(uint *)(param_1 + 0x24);
      uVar2 = ((uVar1 - param_3[1]) + *(int *)(param_1 + 0x1c)) % uVar1;
      if (uVar2 == (uint)(*param_3 - *(int *)(param_1 + 0x20)) % uVar1) {
        *(uint *)(param_1 + 0x1c) = uVar2;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3[1];
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - param_3[1];
      }
    }
    FUN_014a2f0e();
    return;
  }
  return;
}

// 014A317E  FUN_014a317e  size=115  [run]
undefined4 * FUN_014a317e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_014a2a71(param_1);
  puVar2 = (undefined4 *)FUN_01293b2b(param_2,iVar1 + 8,"CriSjUni",8,param_3);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_01293f69(0,"E09021217B",0xfffffffd);
  }
  else {
    *puVar2 = param_2;
    puVar3 = (undefined4 *)FUN_014a2afc(param_1,puVar2 + 2,iVar1);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &PTR_LAB_01b34938;
      return puVar3;
    }
    FUN_01293b75(param_2,puVar2);
  }
  return (undefined4 *)0x0;
}

// 014A320F  FUN_014a320f  size=46  [run]
void FUN_014a320f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = *param_4;
  local_c = param_2;
  local_8 = param_3;
  FUN_014a317e(&local_10,param_1,param_4[1]);
  return;
}

// 014A323D  FUN_014a323d  size=53  [run]
int FUN_014a323d(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_012939cc(8);
  local_10 = *param_3;
  local_c = param_1;
  local_8 = param_2;
  iVar2 = FUN_014a2a71(&local_10);
  return iVar2 + iVar1 * 2;
}

// 014A3272  FUN_014a3272  size=39  [run]
void FUN_014a3272(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 1;
  FUN_014a320f(param_1,param_2,param_3,&local_c);
  return;
}

// 014A3299  FUN_014a3299  size=36  [run]
void FUN_014a3299(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 1;
  FUN_014a323d(param_1,param_2,&local_c);
  return;
}

// 014A32BD  FUN_014a32bd  size=37  [run]
void FUN_014a32bd(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 1;
  local_8 = 1;
  FUN_014a320f(param_1,param_2,param_3,&local_c);
  return;
}

// 014A32E2  FUN_014a32e2  size=115  [run]
undefined4 * FUN_014a32e2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_014a2dee(param_1);
  puVar2 = (undefined4 *)FUN_01293b2b(param_2,iVar1 + 8,"CriSjRbf",8,param_3);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_01293f69(0,"E09021703B",0xfffffffd);
  }
  else {
    *puVar2 = param_2;
    puVar3 = (undefined4 *)FUN_014a2e09(param_1,puVar2 + 2,iVar1);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &PTR_LAB_01b34950;
      return puVar3;
    }
    FUN_01293b75(param_2,puVar2);
  }
  return (undefined4 *)0x0;
}

// 014A3373  FUN_014a3373  size=58  [run]
void FUN_014a3373(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = *param_6;
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  local_8 = param_5;
  FUN_014a32e2(&local_18,param_1,param_6[1]);
  return;
}

// 014A33AD  FUN_014a33ad  size=63  [run]
int FUN_014a33ad(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_012939cc(8);
  local_8 = 0;
  local_18 = *param_4;
  local_14 = param_1;
  local_10 = param_2;
  local_c = param_3;
  iVar2 = FUN_014a2dee(&local_18);
  return iVar2 + iVar1 * 2;
}

// 014A33EC  FUN_014a33ec  size=47  [run]
void FUN_014a33ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 1;
  FUN_014a3373(param_1,param_2,param_3,param_4,"SjRbfBuffer",&local_c);
  return;
}

// 014A341B  FUN_014a341b  size=45  [run]
void FUN_014a341b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 1;
  FUN_014a3373(param_1,param_2,param_3,param_4,param_5,&local_c);
  return;
}

// 014A3448  FUN_014a3448  size=39  [run]
void FUN_014a3448(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 1;
  FUN_014a33ad(param_1,param_2,param_3,&local_c);
  return;
}

// 014A346F  FUN_014a346f  size=45  [run]
void FUN_014a346f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 1;
  local_8 = 1;
  FUN_014a3373(param_1,param_2,param_3,param_4,"SjRbfBuffer",&local_c);
  return;
}

// 014A349C  FUN_014a349c  size=43  [run]
void FUN_014a349c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 1;
  local_8 = 1;
  FUN_014a3373(param_1,param_2,param_3,param_4,param_5,&local_c);
  return;
}

// 014A34C7  FUN_014a34c7  size=33  [run]
void FUN_014a34c7(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_014a3373(param_1,param_2,param_3,param_4,"SjRbfBuffer",param_5);
  return;
}

// 014A34E8  FUN_014a34e8  size=21  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014a34e8(undefined4 *param_1)

{
  _DAT_0225bf3c = "\nCRI Stream Joint/PCx86 Ver.1.01.00 Build:Sep  3 2012 18:07:26\n";
  (**(code **)*param_1)(param_1);
  return;
}

// 014A34FD  FUN_014a34fd  size=12  [run]
void FUN_014a34fd(int *param_1)

{
  (**(code **)(*param_1 + 4))(param_1);
  return;
}

// 014A3509  FUN_014a3509  size=26  [run]
void FUN_014a3509(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4);
  return;
}

// 014A3523  FUN_014a3523  size=22  [run]
void FUN_014a3523(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3);
  return;
}

// 014A3539  FUN_014a3539  size=22  [run]
void FUN_014a3539(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  return;
}

// 014A354F  FUN_014a354f  size=17  [run]
void FUN_014a354f(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x14))(param_1,param_2);
  return;
}

// 014A3560  FUN_014a3560  size=60  [run]
void FUN_014a3560(int *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_4[1] = param_3[1];
  if (param_2 < (uint)param_3[1]) {
    param_3[1] = param_2;
  }
  piVar1 = param_4 + 1;
  *piVar1 = *piVar1 - param_3[1];
  if (*piVar1 == 0) {
    *param_4 = 0;
    return;
  }
  *param_4 = param_3[1] + *param_3;
  return;
}

// 014A35AA  FUN_014a35aa  size=21  [run]
void FUN_014a35aa(undefined4 param_1,undefined4 param_2)

{
  FUN_014a3509(param_1,0,0xffffffff,param_2);
  return;
}

// 014A35BF  FUN_014a35bf  size=81  [run]
void FUN_014a35bf(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if ((uint)param_2[1] < param_3) {
    param_3 = param_2[1];
  }
  local_c = *param_2;
  local_8 = param_2[1];
  FUN_014a3560(&local_c,param_3,&local_c,local_14);
  FUN_014a3539(param_1,1,&local_c);
  FUN_014a3523(param_1,0,local_14);
  return;
}

// 014A3633  FUN_014a3633  size=81  [run]
void FUN_014a3633(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if ((uint)param_2[1] < param_3) {
    param_3 = param_2[1];
  }
  local_c = *param_2;
  local_8 = param_2[1];
  FUN_014a3560(&local_c,param_3,&local_c,local_14);
  FUN_014a3539(param_1,0,&local_c);
  FUN_014a3523(param_1,1,local_14);
  return;
}

// 014A36BE  FUN_014a36be  size=11  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014a36be(void)

{
  _DAT_0225bf40 = "\nCRI Thread/PCx86 Ver.1.01.12 Build:Sep  3 2012 18:07:27\n";
  return;
}

// 014A36C9  FUN_014a36c9  size=30  [run]
void FUN_014a36c9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_01499784(param_1,param_2,0,param_3,param_4,param_5);
  return;
}

// 014A36E7  FUN_014a36e7  size=31  [run]
void FUN_014a36e7(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_01499784(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// 014A371D  FUN_014a371d  size=233  [run]
void FUN_014a371d(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  double dVar3;
  
  switch(param_1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
  case 5:
    break;
  case 6:
  case 7:
    dVar3 = *(double *)(param_2 + 8);
    pcVar2 = "%lld";
    goto LAB_014a3776;
  case 8:
    dVar3 = (double)*(float *)(param_2 + 8);
    pcVar2 = "%f";
    goto LAB_014a3776;
  case 9:
    dVar3 = *(double *)(param_2 + 8);
    pcVar2 = "%lf";
    goto LAB_014a3776;
  case 10:
  default:
    pcVar2 = "%s";
    goto LAB_014a37fd;
  case 0xb:
    dVar3 = *(double *)(param_2 + 8);
    pcVar2 = "%08x:%08x";
LAB_014a3776:
    FID_conflict__wprintf(pcVar2,dVar3);
    return;
  case 0xc:
    uVar1 = __aullshr(*(undefined2 *)(param_2 + 10),*(undefined2 *)(param_2 + 8),
                      *(undefined2 *)(param_2 + 0x16),*(undefined2 *)(param_2 + 0x14),
                      *(undefined4 *)(param_2 + 0x10));
    FID_conflict__wprintf("%08x-%04x-%04x-%04x-%04x%08x",uVar1);
    return;
  }
  pcVar2 = "%d";
LAB_014a37fd:
  FID_conflict__wprintf(pcVar2);
  return;
}

// 014A383D  FUN_014a383d  size=20  [run]
undefined4 FUN_014a383d(int param_1)

{
  if (0xc < param_1) {
    return 0;
  }
  return *(undefined4 *)(&DAT_01b3499c + param_1 * 4);
}

// 014A3851  FUN_014a3851  size=80  [run]
undefined4 FUN_014a3851(undefined1 *param_1,undefined4 *param_2)

{
  *param_2 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  param_2[1] = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  return 8;
}

// 014A38A1  FUN_014a38a1  size=223  [run]
undefined4 FUN_014a38a1(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *(ushort *)(param_2 + 2) = CONCAT11(param_1[2],param_1[3]);
  *(uint *)(param_2 + 4) = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7])
  ;
  *(uint *)(param_2 + 8) =
       CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  *(uint *)(param_2 + 0xc) =
       CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  *(ushort *)(param_2 + 0x10) = CONCAT11(param_1[0x10],param_1[0x11]);
  *(ushort *)(param_2 + 0x12) = CONCAT11(param_1[0x12],param_1[0x13]);
  *(uint *)(param_2 + 0x14) =
       CONCAT31(CONCAT21(CONCAT11(param_1[0x14],param_1[0x15]),param_1[0x16]),param_1[0x17]);
  return 0x18;
}

// 014A3984  FUN_014a3984  size=28  [run]
undefined2 FUN_014a3984(int param_1,uint param_2)

{
  if (param_2 < 0x1a) {
    return 0;
  }
  return CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19));
}

// 014A3D37  FUN_014a3d37  size=84  [run]
void FUN_014a3d37(int *param_1,uint param_2)

{
  int iVar1;
  
  if (3 < param_2) {
    FUN_01293f1f(0,"E08012804:Invalid table no");
    return;
  }
  iVar1 = param_1[param_2 * 2 + 0xf];
  if (iVar1 == 0) {
    FUN_01293f1f(0,"E08012805:Internal Error");
  }
  else {
    if (*param_1 != 0) {
      FUN_0149b055(*param_1,iVar1);
    }
    param_1[param_2 * 2 + 0xe] = -1;
    param_1[param_2 * 2 + 0xf] = 0;
  }
  return;
}

// 014A3DB7  FUN_014a3db7  size=376  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_014a3db7(int *param_1,int param_2,undefined4 param_3,int param_4,uint param_5,uint param_6
                  ,uint param_7,undefined4 *param_8,int param_9)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_24 [2];
  ushort local_22;
  int local_20;
  int local_1c;
  int local_18;
  short local_14;
  undefined2 local_12;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = param_1;
  _DAT_0225bf4c = "\nCRI UTF Retriever/PCx86 Ver.1.00.02 Build:Sep  3 2012 18:07:27\n";
  _memset(param_1,0,0x60);
  param_1[0x16] = param_2;
  param_1[0x17] = param_5;
  param_1[1] = *param_8;
  param_1[2] = param_8[1];
  param_1[3] = param_8[2];
  *param_1 = (int)(param_1 + 1);
  param_1[4] = param_9;
  iVar3 = FUN_014a3851(param_6,&local_c);
  iVar3 = iVar3 + param_6;
  if (local_c == 0x40555446) {
    if (local_8 + 8U <= param_7) {
      param_1[6] = local_8;
      param_1[5] = iVar3;
      iVar4 = FUN_014a38a1(iVar3,local_24);
      iVar3 = iVar3 + iVar4;
      iVar4 = param_1[5];
      param_1[8] = local_1c + iVar4;
      param_1[7] = local_20 + iVar4;
      *(undefined2 *)((int)param_1 + 0x2e) = local_12;
      param_1[0xc] = local_10;
      param_1[10] = local_20 + iVar4 + local_18;
      param_1[9] = (uint)local_22 + iVar4;
      *(short *)(param_1 + 0xb) = local_14;
      param_1[0xd] = param_4;
      if (param_4 == 0) {
        FUN_01293f69(0,"E06100302",0xfffffffd);
        return (int *)0x0;
      }
      param_6 = 0;
      if (local_14 != 0) {
        param_1 = (int *)0x0;
        do {
          iVar4 = FUN_0149ae44(piVar1,iVar3,piVar1[0xd] + (int)param_1);
          iVar3 = iVar3 + iVar4;
          puVar6 = (undefined4 *)piVar1[0xd];
          param_2._0_2_ = 0;
          if (param_6 != 0) {
            param_5 = param_6;
            param_2._0_2_ = 0;
            do {
              if (*(char *)((int)puVar6 + 9) != '\0') {
                sVar2 = FUN_014a383d(*puVar6);
                param_2._0_2_ = (short)param_2 + sVar2;
              }
              puVar6 = puVar6 + 10;
              param_5 = param_5 - 1;
            } while (param_5 != 0);
          }
          param_6 = param_6 + 1;
          *(short *)((int)param_1 + 10 + piVar1[0xd]) = (short)param_2;
          param_1 = (int *)((int)param_1 + 0x28);
        } while (param_6 < *(ushort *)(piVar1 + 0xb));
      }
      piVar5 = piVar1 + 0xf;
      iVar3 = 4;
      do {
        piVar5[-1] = -1;
        *piVar5 = 0;
        piVar5 = piVar5 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return piVar1;
    }
    pcVar7 = "E06100311:Size error.";
  }
  else {
    pcVar7 = "E06100301:Invalid IFF header (mismatched four_cc).";
  }
  FUN_01293f1f(0,pcVar7);
  return (int *)0x0;
}

// 014A3F2F  FUN_014a3f2f  size=11  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014a3f2f(void)

{
  _DAT_0225bf50 = "\nCRI Timer/PCx86 Ver.0.50.03 Build:Sep  3 2012 18:07:27\n";
  return;
}

// 014A3F59  FUN_014a3f59  size=513  [run]
int FUN_014a3f59(undefined4 param_1,undefined1 *param_2,int param_3,undefined1 *param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  puVar4 = param_4;
  puVar1 = param_4 + param_5;
  bVar15 = param_2 <= param_4;
  param_4 = (undefined1 *)0x0;
  puVar12 = puVar1;
  iVar13 = 0;
  pbVar5 = param_2 + param_3;
  while (puVar8 = puVar12, puVar12 != puVar4) {
    if (iVar13 < 0x19) {
      param_5 = (0x18U - iVar13 >> 3) + 1;
      iVar13 = iVar13 + param_5 * 8;
      do {
        pbVar5 = pbVar5 + -1;
        param_4 = (undefined1 *)((int)param_4 << 8 | (uint)*pbVar5);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    cVar3 = (char)iVar13;
    puVar8 = puVar1;
    if ((*(uint *)(iVar13 * 4 + 0x1b349f8) & (uint)param_4) == 0) {
      if ((bVar15) && (puVar12 + -1 < pbVar5)) break;
      puVar12 = puVar12 + -1;
      *puVar12 = (char)((uint)param_4 >> (cVar3 - 9U & 0x1f));
      iVar13 = iVar13 + -9;
    }
    else {
      param_5 = 0;
      uVar9 = (uint)param_4 >> (cVar3 - 0xeU & 0x1f);
      uVar10 = (uint)param_4 >> (cVar3 - 0x10U & 0x1f) & 3;
      pbVar6 = pbVar5;
      iVar14 = iVar13 + -0x10;
      if (uVar10 == 3) {
        param_5 = 3;
        iVar14 = iVar13 + -0x13;
        uVar10 = (uint)param_4 >> (cVar3 - 0x13U & 0x1f) & 7;
        if (uVar10 == 7) {
          iVar14 = iVar13 + -0x18;
          param_5 = 10;
          uVar10 = (uint)param_4 >> ((char)(iVar13 + -0x10) - 8U & 0x1f) & 0x1f;
          if (uVar10 == 0x1f) {
            pbVar6 = pbVar5 + -1;
            param_4 = (undefined1 *)((int)param_4 << 8 | (uint)*pbVar6);
            bVar7 = (byte)iVar14;
            iVar14 = iVar13 + -0x18;
            param_5 = 0x29;
            uVar10 = (uint)param_4 >> (bVar7 & 0x1f) & 0xff;
            if (uVar10 == 0xff) {
              pbVar6 = pbVar5 + -2;
              param_4 = (undefined1 *)((int)param_4 << 8 | (uint)*pbVar6);
              bVar7 = (byte)iVar14;
              iVar14 = iVar13 + -0x18;
              param_5 = 0x128;
              uVar10 = (uint)param_4 >> (bVar7 & 0x1f);
              while (uVar10 = uVar10 & 0xff, uVar10 == 0xff) {
                param_5 = param_5 + 0xff;
                pbVar6 = pbVar6 + -1;
                param_4 = (undefined1 *)((int)param_4 << 8 | (uint)*pbVar6);
                uVar10 = (uint)param_4 >> (cVar3 - 0x18U & 0x1f);
              }
            }
          }
        }
      }
      iVar2 = param_5 + 3 + uVar10;
      if ((bVar15) && (puVar12 + -iVar2 < pbVar6)) break;
      puVar8 = puVar12 + (uVar9 & 0x1fff) + 3;
      iVar13 = iVar14;
      pbVar5 = pbVar6;
      if (iVar2 == 3) {
LAB_014a4130:
        puVar12[-1] = puVar8[-1];
        puVar12[-2] = puVar8[-2];
        puVar12 = puVar12 + -3;
        *puVar12 = puVar8[-3];
      }
      else {
        if (iVar2 == 4) {
LAB_014a412a:
          puVar8 = puVar8 + -1;
          puVar12 = puVar12 + -1;
          *puVar12 = *puVar8;
          goto LAB_014a4130;
        }
        if (iVar2 == 5) {
LAB_014a4124:
          puVar8 = puVar8 + -1;
          puVar12 = puVar12 + -1;
          *puVar12 = *puVar8;
          goto LAB_014a412a;
        }
        if (iVar2 == 6) {
LAB_014a411e:
          puVar8 = puVar8 + -1;
          puVar12 = puVar12 + -1;
          *puVar12 = *puVar8;
          goto LAB_014a4124;
        }
        if (iVar2 == 7) {
          puVar8 = puVar8 + -1;
          puVar12 = puVar12 + -1;
          *puVar12 = *puVar8;
          goto LAB_014a411e;
        }
        puVar11 = puVar8 + -iVar2;
        while (puVar11 < puVar8) {
          puVar8 = puVar8 + -1;
          puVar12 = puVar12 + -1;
          *puVar12 = *puVar8;
        }
      }
    }
  }
  return (int)puVar1 - (int)puVar8;
}

// 014A41A9  FUN_014a41a9  size=57  [run]
void FUN_014a41a9(int param_1,uint param_2,undefined4 *param_3)

{
  if (param_2 < 4) {
    *param_3 = 0xffffffff;
    return;
  }
  *param_3 = *(undefined4 *)(param_1 + 8);
  return;
}

// 014A41F0  FUN_014a41f0  size=58  [run]
ushort FUN_014a41f0(ushort param_1,byte *param_2,int param_3)

{
  if (param_3 == 0) {
    return param_1;
  }
  do {
    param_1 = param_1 << 8 ^
              *(ushort *)(&DAT_0182ee18 + ((uint)(param_1 >> 8) ^ (uint)*param_2) * 2);
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  return param_1;
}

// 014A4230  FUN_014a4230  size=22  [run]
void FUN_014a4230(void)

{
  DAT_0225bf5c = DAT_0225bf5c + 1;
  if (DAT_0225bf5c == 1) {
    FUN_014a5260();
    return;
  }
  return;
}

// 014A4250  FUN_014a4250  size=15  [run]
void FUN_014a4250(void)

{
  DAT_0225bf5c = DAT_0225bf5c + -1;
  if (DAT_0225bf5c == 0) {
    FUN_014a5270();
    return;
  }
  return;
}

// 014A4260  FUN_014a4260  size=35  [run]
uint FUN_014a4260(void *param_1,size_t param_2)

{
  _memset(param_1,0,param_2);
  return (int)param_1 + 7U & 0xfffffff8;
}

// 014A4290  FUN_014a4290  size=1  [run]
void FUN_014a4290(void)

{
  return;
}

// 014A42A0  FUN_014a42a0  size=21  [run]
void FUN_014a42a0(void *param_1)

{
  _memset(param_1,0,0x600);
  return;
}

// 014A42C0  FUN_014a42c0  size=1000  [run]
void FUN_014a42c0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *local_2c;
  
  iVar1 = param_1 + 0x400;
  iVar3 = param_3 + 0x100;
  iVar6 = param_1 + 0x500;
  iVar2 = param_1 + 0x100;
  FUN_014a5630(param_2,param_1 + 0x200,iVar1);
  local_2c = (float *)&DAT_0182f018;
  pfVar5 = (float *)(param_1 + 0x504);
  pfVar4 = (float *)(param_3 + 8);
  pfVar7 = (float *)(param_1 + 0x10);
  do {
    pfVar4[-2] = pfVar5[-1] * *local_2c + pfVar7[-4];
    *(float *)((int)pfVar5 + (param_3 - iVar6)) =
         *(float *)((int)pfVar5 + ((int)&DAT_0182f018 - iVar6)) * *pfVar5 +
         *(float *)((int)pfVar5 + (param_1 - iVar6));
    *pfVar4 = *(float *)((int)pfVar5 + ((int)&DAT_0182f01c - iVar6)) * pfVar5[1] +
              *(float *)((int)pfVar4 + (param_1 - param_3));
    pfVar4[1] = *(float *)((int)pfVar5 + ((int)&DAT_0182f020 - iVar6)) * pfVar5[2] + pfVar7[-1];
    pfVar4[2] = *(float *)((int)pfVar5 + ((int)&DAT_0182f024 - iVar6)) * pfVar5[3] + *pfVar7;
    pfVar4[3] = *(float *)((int)pfVar5 + ((int)&DAT_0182f028 - iVar6)) * pfVar5[4] + pfVar7[1];
    pfVar4[4] = *(float *)((int)pfVar5 + ((int)&DAT_0182f02c - iVar6)) * pfVar5[5] + pfVar7[2];
    local_2c = local_2c + 8;
    pfVar4[5] = *(float *)((int)pfVar5 + ((int)&DAT_0182f030 - iVar6)) * pfVar5[6] + pfVar7[3];
    pfVar5 = pfVar5 + 8;
    pfVar4 = pfVar4 + 8;
    pfVar7 = pfVar7 + 8;
  } while ((int)local_2c < 0x182f118);
  pfVar5 = (float *)(param_3 + 0x10c);
  param_3 = 8;
  pfVar4 = (float *)(param_1 + 0x104);
  pfVar7 = (float *)(param_1 + 0x5f8);
  do {
    param_3 = param_3 + -1;
    pfVar5[-3] = *(float *)((int)pfVar4 + ((int)&DAT_0182f114 - iVar2)) * pfVar7[1] - pfVar4[-1];
    *(float *)((int)pfVar4 + (iVar3 - iVar2)) =
         *(float *)((int)pfVar4 + ((int)&DAT_0182f118 - iVar2)) * *pfVar7 - *pfVar4;
    pfVar5[-1] = *(float *)((int)pfVar4 + ((int)&DAT_0182f11c - iVar2)) * pfVar7[-1] - pfVar4[1];
    *pfVar5 = *(float *)((int)pfVar4 + ((int)&DAT_0182f120 - iVar2)) * pfVar7[-2] - pfVar4[2];
    pfVar5[1] = *(float *)((int)pfVar4 + ((int)&DAT_0182f124 - iVar2)) * pfVar7[-3] - pfVar4[3];
    pfVar5[2] = *(float *)((int)pfVar4 + ((int)&DAT_0182f128 - iVar2)) * pfVar7[-4] - pfVar4[4];
    pfVar5[3] = *(float *)((int)pfVar4 + ((int)&DAT_0182f12c - iVar2)) * pfVar7[-5] - pfVar4[5];
    pfVar5[4] = *(float *)((int)pfVar4 + ((int)&DAT_0182f130 - iVar2)) * pfVar7[-6] - pfVar4[6];
    pfVar4 = pfVar4 + 8;
    pfVar7 = pfVar7 + -8;
    pfVar5 = pfVar5 + 8;
  } while (param_3 != 0);
  param_3 = 8;
  pfVar5 = (float *)(param_1 + 0x4fc);
  pfVar4 = (float *)(param_1 + 8);
  do {
    param_3 = param_3 + -1;
    pfVar4[-2] = *(float *)(((int)&DAT_0182f118 - iVar1) + (int)pfVar5) * *pfVar5;
    pfVar4[-1] = *(float *)(((int)&UNK_0182f134 - iVar1) + (int)(pfVar5 + -8)) * pfVar5[-1];
    *pfVar4 = *(float *)((int)pfVar5 + ((int)&DAT_0182f110 - iVar1)) * pfVar5[-2];
    pfVar4[1] = *(float *)((int)pfVar5 + ((int)&DAT_0182f10c - iVar1)) * pfVar5[-3];
    pfVar4[2] = *(float *)((int)pfVar5 + ((int)&DAT_0182f108 - iVar1)) * pfVar5[-4];
    pfVar4[3] = *(float *)((int)pfVar5 + ((int)&DAT_0182f104 - iVar1)) * pfVar5[-5];
    pfVar4[4] = *(float *)((int)pfVar5 + ((int)&DAT_0182f100 - iVar1)) * pfVar5[-6];
    pfVar4[5] = *(float *)((int)pfVar5 + ((int)&DAT_0182f0fc - iVar1)) * pfVar5[-7];
    pfVar5 = pfVar5 + -8;
    pfVar4 = pfVar4 + 8;
  } while (param_3 != 0);
  iVar6 = 0xf8;
  pfVar5 = (float *)(param_1 + 0x104);
  pfVar4 = (float *)(param_1 + 0x40c);
  do {
    iVar3 = iVar6 + -0x20;
    pfVar5[-1] = *(float *)(&DAT_0182f01c + iVar6) * pfVar4[-3];
    *pfVar5 = *(float *)((int)&DAT_0182f018 + iVar6) * *(float *)((int)pfVar5 + (iVar1 - iVar2));
    pfVar5[1] = *(float *)(&UNK_0182f014 + iVar6) * pfVar4[-1];
    pfVar5[2] = *(float *)(&UNK_0182f010 + iVar6) * *pfVar4;
    pfVar5[3] = *(float *)(&UNK_0182f00c + iVar6) * pfVar4[1];
    pfVar5[4] = *(float *)(&UNK_0182f008 + iVar6) * pfVar4[2];
    pfVar5[5] = *(float *)(&UNK_0182f004 + iVar6) * pfVar4[3];
    pfVar5[6] = *(float *)(&UNK_0182f000 + iVar6) * pfVar4[4];
    iVar6 = iVar3;
    pfVar5 = pfVar5 + 8;
    pfVar4 = pfVar4 + 8;
  } while (-8 < iVar3);
  return;
}

// 014A46B0  FUN_014a46b0  size=34  [run]
void FUN_014a46b0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if ((*(byte *)(uVar1 + param_1) & 0x7f) == 0x48) {
        return;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}

// 014A46E0  FUN_014a46e0  size=129  [run]
undefined4 __fastcall FUN_014a46e0(undefined4 param_1,uint *param_2,uint param_3)

{
  byte *in_EAX;
  
  *param_2 = 0;
  if (param_3 < 8) {
    return 1;
  }
  if ((CONCAT21(CONCAT11(in_EAX[1],in_EAX[2]),in_EAX[3]) & 0x7f7f7f7f | (*in_EAX & 0x7f) << 0x18) !=
      0x48434100) {
    return 2;
  }
  if ((CONCAT11(in_EAX[4],in_EAX[5]) < 0x201) && (0x101 < CONCAT11(in_EAX[4],in_EAX[5]))) {
    *param_2 = (uint)CONCAT11(in_EAX[6],in_EAX[7]);
    return 0;
  }
  return 3;
}

// 014A4770  FUN_014a4770  size=174  [run]
undefined4 FUN_014a4770(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  
  if ((*(int *)(in_EAX + 0x18) < 1) || (0x10 < *(int *)(in_EAX + 0x18))) {
    return 2;
  }
  if ((*(int *)(in_EAX + 4) < 1) || (0x7fffff < *(int *)(in_EAX + 4))) {
    return 3;
  }
  if ((*(int *)(in_EAX + 0x14) < 8) || (0xffff < *(int *)(in_EAX + 0x14))) {
    return 7;
  }
  if (((-1 < *(int *)(in_EAX + 0x20)) && (*(int *)(in_EAX + 0x1c) < 0x20)) &&
     (*(int *)(in_EAX + 0x20) <= *(int *)(in_EAX + 0x1c))) {
    iVar1 = *(int *)(in_EAX + 8);
    if (iVar1 < 0) {
      return 4;
    }
    if (((-1 < *(int *)(in_EAX + 0x3c)) && (iVar2 = *(int *)(in_EAX + 0x44), -1 < iVar2)) &&
       ((*(int *)(in_EAX + 0x3c) <= iVar2 && ((iVar1 < 1 || (iVar2 < iVar1)))))) {
      iVar1 = *(int *)(in_EAX + 0x4c);
      if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 0x38)) {
        return 6;
      }
      return 0;
    }
    return 5;
  }
  return 9;
}

// 014A4820  FUN_014a4820  size=340  [run]
void FUN_014a4820(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1 / param_2;
  if ((param_4 == 0) || (iVar1 == 1)) {
    if (0 < param_1) {
      for (; param_1 != 0; param_1 = param_1 + -1) {
        *param_5 = 0;
        param_5 = param_5 + 1;
      }
    }
  }
  else {
    if (0 < param_2) {
      param_4 = param_2;
      do {
        switch(iVar1) {
        case 2:
          *param_5 = 1;
          param_5[1] = 2;
          param_5 = param_5 + 2;
          break;
        case 3:
          *param_5 = 1;
          param_5[1] = 2;
          param_5[2] = 0;
          param_5 = param_5 + 3;
          break;
        case 4:
          *param_5 = 1;
          param_5[1] = 2;
          if (param_3 == 0) {
            param_5[2] = 1;
            param_5[3] = 2;
            param_5 = param_5 + 4;
          }
          else {
            param_5[2] = 0;
            param_5[3] = 0;
            param_5 = param_5 + 4;
          }
          break;
        case 5:
          *param_5 = 1;
          param_5[1] = 2;
          param_5[2] = 0;
          if (param_3 < 3) {
            param_5[3] = 1;
            param_5[4] = 2;
            param_5 = param_5 + 5;
          }
          else {
            param_5[3] = 0;
            param_5[4] = 0;
            param_5 = param_5 + 5;
          }
          break;
        case 6:
          *param_5 = 1;
          param_5[1] = 2;
          param_5[2] = 0;
          param_5[3] = 0;
          param_5[4] = 1;
          param_5[5] = 2;
          param_5 = param_5 + 6;
          break;
        case 7:
          *param_5 = 1;
          param_5[1] = 2;
          param_5[2] = 0;
          param_5[3] = 0;
          param_5[4] = 1;
          param_5[5] = 2;
          param_5[6] = 0;
          param_5 = param_5 + 7;
          break;
        case 8:
          *param_5 = 1;
          param_5[1] = 2;
          param_5[2] = 0;
          param_5[3] = 0;
          param_5[4] = 1;
          param_5[5] = 2;
          param_5[6] = 1;
          param_5[7] = 2;
          param_5 = param_5 + 8;
          break;
        default:
          iVar2 = iVar1;
          puVar3 = param_5;
          if (0 < iVar1) {
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar3 = 0;
              puVar3 = puVar3 + 1;
            }
          }
          param_5 = param_5 + iVar1;
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    iVar1 = iVar1 * param_2;
    if (iVar1 < param_1) {
      puVar3 = param_5 + iVar1;
      for (param_1 = param_1 - iVar1; param_1 != 0; param_1 = param_1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      return;
    }
  }
  return;
}

// 014A4990  FUN_014a4990  size=953  [run]
uint FUN_014a4990(int param_1,void *param_2,void *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  _memset(param_3,0,0x58);
  *(undefined4 *)((int)param_3 + 0x48) = 0x400;
  uVar2 = FUN_014a46e0(param_2);
  if (uVar2 == 0) {
    *(void **)param_3 = param_3;
    if (param_2 < param_3) {
      return 1;
    }
    sVar1 = FUN_014a41f0(0,param_1,param_3);
    if ((sVar1 == 0) &&
       ((CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10)),
                  *(undefined1 *)(param_1 + 0xb)) & 0x7f7f7f7f |
        (*(byte *)(param_1 + 8) & 0x7f) << 0x18) == 0x666d7400)) {
      *(uint *)((int)param_3 + 0x18) = (uint)*(byte *)(param_1 + 0xc);
      *(uint *)((int)param_3 + 4) =
           (uint)CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0xd),*(undefined1 *)(param_1 + 0xe)),
                          *(undefined1 *)(param_1 + 0xf));
      *(uint *)((int)param_3 + 8) =
           CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x10),
                                      *(undefined1 *)(param_1 + 0x11)),
                             *(undefined1 *)(param_1 + 0x12)),*(undefined1 *)(param_1 + 0x13));
      *(uint *)((int)param_3 + 0xc) =
           (uint)CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15));
      *(uint *)((int)param_3 + 0x10) =
           (uint)CONCAT11(*(undefined1 *)(param_1 + 0x16),*(undefined1 *)(param_1 + 0x17));
      uVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x18),
                                         *(undefined1 *)(param_1 + 0x19)),
                                *(undefined1 *)(param_1 + 0x1a)),*(undefined1 *)(param_1 + 0x1b)) &
              0x7f7f7f7f;
      if (uVar2 == 0x636f6d70) {
        *(uint *)((int)param_3 + 0x14) =
             (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d));
        *(uint *)((int)param_3 + 0x20) = (uint)*(byte *)(param_1 + 0x1e);
        *(uint *)((int)param_3 + 0x1c) = (uint)*(byte *)(param_1 + 0x1f);
        *(uint *)((int)param_3 + 0x34) = (uint)*(byte *)(param_1 + 0x20);
        *(uint *)((int)param_3 + 0x38) = (uint)*(byte *)(param_1 + 0x21);
        *(uint *)((int)param_3 + 0x24) = (uint)*(byte *)(param_1 + 0x22);
        *(uint *)((int)param_3 + 0x28) = (uint)*(byte *)(param_1 + 0x23);
        pbVar7 = (byte *)(param_1 + 0x25);
        *(uint *)((int)param_3 + 0x2c) = (uint)*(byte *)(param_1 + 0x24);
        *(uint *)((int)param_3 + 0x30) = (uint)*pbVar7;
LAB_014a4b80:
        pbVar8 = pbVar7 + 3;
        if ((CONCAT21(CONCAT11(pbVar7[4],pbVar7[5]),pbVar7[6]) & 0x7f7f7f7f |
            (*pbVar8 & 0x7f) << 0x18) == 0x61746800) {
          pbVar8 = pbVar7 + 9;
        }
        if ((CONCAT21(CONCAT11(pbVar8[1],pbVar8[2]),pbVar8[3]) & 0x7f7f7f7f |
            (*pbVar8 & 0x7f) << 0x18) == 0x6c6f6f70) {
          *(uint *)((int)param_3 + 0x3c) =
               CONCAT31(CONCAT21(CONCAT11(pbVar8[4],pbVar8[5]),pbVar8[6]),pbVar8[7]);
          *(uint *)((int)param_3 + 0x44) =
               CONCAT31(CONCAT21(CONCAT11(pbVar8[8],pbVar8[9]),pbVar8[10]),pbVar8[0xb]);
          *(uint *)((int)param_3 + 0x40) = (uint)CONCAT11(pbVar8[0xc],pbVar8[0xd]);
          *(uint *)((int)param_3 + 0x48) = (uint)CONCAT11(pbVar8[0xe],pbVar8[0xf]);
          pbVar8 = pbVar8 + 0x10;
        }
        if ((CONCAT21(CONCAT11(pbVar8[1],pbVar8[2]),pbVar8[3]) & 0x7f7f7f7f |
            (*pbVar8 & 0x7f) << 0x18) == 0x63697068) {
          *(uint *)((int)param_3 + 0x4c) = (uint)CONCAT11(pbVar8[4],pbVar8[5]);
          pbVar8 = pbVar8 + 6;
        }
        if ((CONCAT21(CONCAT11(pbVar8[1],pbVar8[2]),pbVar8[3]) & 0x7f7f7f7f |
            (*pbVar8 & 0x7f) << 0x18) == 0x72766100) {
          uVar5 = CONCAT31(CONCAT21(CONCAT11(pbVar8[4],pbVar8[5]),pbVar8[6]),pbVar8[7]);
          pbVar8 = pbVar8 + 8;
        }
        else {
          uVar5 = 0x3f800000;
        }
        *(undefined4 *)((int)param_3 + 0x50) = uVar5;
        if ((CONCAT21(CONCAT11(pbVar8[1],pbVar8[2]),pbVar8[3]) & 0x7f7f7f7f |
            (*pbVar8 & 0x7f) << 0x18) == 0x636f6d6d) {
          *(byte **)((int)param_3 + 0x54) = pbVar8 + 5;
        }
        iVar3 = FUN_014a4770();
        return -(uint)(iVar3 != 0) & 2;
      }
      if (uVar2 == 0x64656300) {
        *(uint *)((int)param_3 + 0x14) =
             (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x1d));
        *(uint *)((int)param_3 + 0x20) = (uint)*(byte *)(param_1 + 0x1e);
        *(uint *)((int)param_3 + 0x1c) = (uint)*(byte *)(param_1 + 0x1f);
        pbVar7 = (byte *)(param_1 + 0x21);
        iVar3 = *(byte *)(param_1 + 0x20) + 1;
        if (*(char *)(param_1 + 0x23) == '\0') {
          iVar6 = 0;
          iVar4 = iVar3;
        }
        else {
          iVar4 = *pbVar7 + 1;
          iVar6 = iVar3 - iVar4;
        }
        *(uint *)((int)param_3 + 0x34) = (uint)(*(byte *)(param_1 + 0x22) >> 4);
        *(uint *)((int)param_3 + 0x38) = *(byte *)(param_1 + 0x22) & 0xf;
        if (*(int *)((int)param_3 + 0x34) < 1) {
          *(undefined4 *)((int)param_3 + 0x34) = 1;
        }
        *(int *)((int)param_3 + 0x24) = iVar3;
        *(int *)((int)param_3 + 0x28) = iVar4;
        *(int *)((int)param_3 + 0x2c) = iVar6;
        goto LAB_014a4b80;
      }
    }
    uVar2 = 2;
  }
  return uVar2;
}

// 014A4D50  FUN_014a4d50  size=891  [run]
undefined4 FUN_014a4d50(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  longlong lVar13;
  
  iVar5 = FUN_014a4770();
  if (iVar5 != 0) {
    return 2;
  }
  if (param_2 != (byte *)0x0) {
    if (param_3 < *param_1) {
      return 1;
    }
    bVar10 = ((int)param_1[0x13] < 2) - 1U & 0x80;
    _memset(param_2,0,*param_1);
    param_2[3] = 0;
    *param_2 = bVar10 | 0x48;
    param_2[1] = bVar10 | 0x43;
    param_2[2] = bVar10 | 0x41;
    param_2[4] = 2;
    param_2[5] = 0;
    param_2[6] = (byte)(*param_1 >> 8);
    param_2[7] = (byte)*param_1;
    param_2[0xb] = 0;
    param_2[8] = bVar10 | 0x66;
    param_2[10] = bVar10 | 0x74;
    bVar3 = bVar10 | 0x6d;
    param_2[9] = bVar3;
    param_2[0xc] = (byte)param_1[6];
    param_2[0xd] = *(byte *)((int)param_1 + 6);
    param_2[0xe] = *(byte *)((int)param_1 + 5);
    param_2[0xf] = (byte)param_1[1];
    param_2[0x10] = *(byte *)((int)param_1 + 0xb);
    param_2[0x11] = *(byte *)((int)param_1 + 10);
    param_2[0x12] = *(byte *)((int)param_1 + 9);
    param_2[0x13] = (byte)param_1[2];
    param_2[0x14] = (byte)(param_1[3] >> 8);
    param_2[0x15] = (byte)param_1[3];
    param_2[0x16] = (byte)(param_1[4] >> 8);
    param_2[0x17] = (byte)param_1[4];
    bVar7 = bVar10 | 99;
    param_2[0x18] = bVar7;
    bVar8 = bVar10 | 0x6f;
    param_2[0x1a] = bVar3;
    param_2[0x19] = bVar8;
    bVar4 = bVar10 | 0x70;
    param_2[0x1b] = bVar4;
    param_2[0x1c] = (byte)(param_1[5] >> 8);
    param_2[0x1d] = (byte)param_1[5];
    param_2[0x1e] = (byte)param_1[8];
    param_2[0x1f] = (byte)param_1[7];
    param_2[0x20] = (byte)param_1[0xd];
    param_2[0x21] = (byte)param_1[0xe];
    param_2[0x22] = (byte)param_1[9];
    param_2[0x23] = (byte)param_1[10];
    param_2[0x24] = (byte)param_1[0xb];
    param_2[0x25] = (byte)param_1[0xc];
    uVar1 = param_1[0x11];
    uVar6 = param_1[0xf];
    pbVar11 = param_2 + 0x28;
    lVar13 = __allmul((uVar1 - uVar6) + 1,
                      ((((int)uVar1 >> 0x1f) - ((int)uVar6 >> 0x1f)) - (uint)(uVar1 < uVar6)) +
                      (uint)(0xfffffffe < uVar1 - uVar6),0x400,0);
    uVar9 = (uint)(lVar13 - (int)param_1[0x12]);
    uVar1 = param_1[0x10];
    iVar5 = (int)((ulonglong)(lVar13 - (int)param_1[0x12]) >> 0x20);
    uVar6 = (uint)(uVar9 < uVar1);
    uVar2 = iVar5 - ((int)uVar1 >> 0x1f);
    if ((-1 < (int)(uVar2 - uVar6)) &&
       ((uVar2 != uVar6 && SBORROW4(iVar5,(int)uVar1 >> 0x1f) == SBORROW4(uVar2,uVar6) ||
        (uVar9 != uVar1)))) {
      param_2[0x29] = bVar8;
      param_2[0x2a] = bVar8;
      param_2[0x2b] = bVar4;
      *pbVar11 = bVar10 | 0x6c;
      param_2[0x2c] = *(byte *)((int)param_1 + 0x3f);
      param_2[0x2d] = *(byte *)((int)param_1 + 0x3e);
      param_2[0x2e] = *(byte *)((int)param_1 + 0x3d);
      param_2[0x2f] = (byte)param_1[0xf];
      param_2[0x30] = *(byte *)((int)param_1 + 0x47);
      param_2[0x31] = *(byte *)((int)param_1 + 0x46);
      param_2[0x32] = *(byte *)((int)param_1 + 0x45);
      param_2[0x33] = (byte)param_1[0x11];
      param_2[0x34] = (byte)(param_1[0x10] >> 8);
      param_2[0x35] = (byte)param_1[0x10];
      param_2[0x36] = (byte)(param_1[0x12] >> 8);
      param_2[0x37] = (byte)param_1[0x12];
      pbVar11 = param_2 + 0x38;
    }
    pbVar11[1] = bVar10 | 0x69;
    pbVar11[2] = bVar4;
    *pbVar11 = bVar7;
    pbVar11[3] = bVar10 | 0x68;
    pbVar11[4] = (byte)(param_1[0x13] >> 8);
    pbVar11[5] = (byte)param_1[0x13];
    pbVar12 = pbVar11 + 6;
    if (((float)param_1[0x14] != 0.0) && ((float)param_1[0x14] != 1.0)) {
      *pbVar12 = bVar10 | 0x72;
      pbVar11[9] = 0;
      pbVar11[7] = bVar10 | 0x76;
      pbVar11[8] = bVar10 | 0x61;
      uVar1 = param_1[0x14];
      pbVar11[10] = (byte)(uVar1 >> 0x18);
      pbVar11[0xb] = (byte)(uVar1 >> 0x10);
      pbVar11[0xc] = (byte)(uVar1 >> 8);
      pbVar11[0xd] = (byte)uVar1;
      pbVar12 = pbVar11 + 0xe;
    }
    uVar1 = *param_1;
    if (param_1[0x15] == 0) {
      *pbVar12 = bVar4;
      pbVar12[1] = bVar10 | 0x61;
      pbVar12[2] = bVar10 | 100;
      pbVar12[3] = 0;
    }
    else {
      *pbVar12 = bVar7;
      pbVar12[1] = bVar8;
      pbVar12[2] = bVar3;
      pbVar12[3] = bVar3;
      pbVar12[4] = 0;
      pbVar11 = pbVar12 + 5;
      iVar5 = 0;
      if (0 < (int)(param_2 + (uVar1 - (int)pbVar12) + -8)) {
        uVar6 = param_1[0x15];
        do {
          *pbVar11 = *(byte *)(uVar6 + iVar5);
          uVar6 = param_1[0x15];
          pbVar11 = pbVar11 + 1;
          if (*(char *)(uVar6 + iVar5) == '\0') break;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(param_2 + (uVar1 - (int)pbVar12) + -8));
      }
    }
    uVar6 = FUN_014a41f0(0,param_2,*param_1 - 2);
    uVar1 = *param_1;
    param_2[uVar1 - 2] = (byte)((uVar6 & 0xffff) >> 8);
    (param_2 + (uVar1 - 2))[1] = (byte)(uVar6 & 0xffff);
  }
  return 0;
}

// 014A50D0  FUN_014a50d0  size=395  [run]
void FUN_014a50d0(int param_1,int param_2,int param_3,int param_4)

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
  float fVar14;
  byte *pbVar15;
  float *pfVar16;
  byte *pbVar17;
  int iVar18;
  
  if (0 < param_3) {
    iVar18 = (param_3 - 1U >> 3) + 1;
    pbVar15 = (byte *)(param_2 + 2);
    pfVar16 = (float *)(param_4 + 8);
    pbVar17 = (byte *)(param_1 + 3);
    do {
      fVar1 = *(float *)(&DAT_0182f218 + (uint)pbVar17[-2] * 4);
      fVar2 = *(float *)(&DAT_0182f318 + (uint)pbVar15[-1] * 4);
      iVar18 = iVar18 + -1;
      fVar3 = *(float *)(&DAT_0182f218 + (uint)pbVar15[param_1 - param_2] * 4);
      fVar4 = *(float *)(&DAT_0182f318 + (uint)*pbVar15 * 4);
      fVar5 = *(float *)(&DAT_0182f318 + (uint)pbVar15[1] * 4);
      fVar6 = *(float *)(&DAT_0182f218 + (uint)*pbVar17 * 4);
      fVar7 = *(float *)(&DAT_0182f218 + (uint)pbVar17[1] * 4);
      fVar8 = *(float *)(&DAT_0182f318 + (uint)pbVar15[2] * 4);
      fVar9 = *(float *)(&DAT_0182f218 + (uint)pbVar17[2] * 4);
      fVar10 = *(float *)(&DAT_0182f318 + (uint)pbVar15[3] * 4);
      fVar11 = *(float *)(&DAT_0182f218 + (uint)pbVar17[3] * 4);
      fVar12 = *(float *)(&DAT_0182f318 + (uint)pbVar15[4] * 4);
      fVar13 = *(float *)(&DAT_0182f218 + (uint)pbVar17[4] * 4);
      fVar14 = *(float *)(&DAT_0182f318 + (uint)pbVar15[5] * 4);
      pfVar16[-2] = *(float *)(&DAT_0182f218 + (uint)pbVar17[-3] * 4) *
                    *(float *)(&DAT_0182f318 + (uint)pbVar15[-2] * 4);
      pfVar16[-1] = fVar1 * fVar2;
      *pfVar16 = fVar3 * fVar4;
      pfVar16[1] = fVar5 * fVar6;
      pfVar16[2] = fVar7 * fVar8;
      pfVar16[3] = fVar9 * fVar10;
      pfVar16[4] = fVar11 * fVar12;
      pfVar16[5] = fVar13 * fVar14;
      pbVar15 = pbVar15 + 8;
      pfVar16 = pfVar16 + 8;
      pbVar17 = pbVar17 + 8;
    } while (iVar18 != 0);
  }
  return;
}

// 014A5260  FUN_014a5260  size=12  [run]
int FUN_014a5260(void)

{
  DAT_0225bf60 = DAT_0225bf60 + 1;
  return DAT_0225bf60;
}

// 014A5270  FUN_014a5270  size=12  [run]
int FUN_014a5270(void)

{
  DAT_0225bf60 = DAT_0225bf60 + -1;
  return DAT_0225bf60;
}

// 014A5280  FUN_014a5280  size=345  [run]
void FUN_014a5280(float *param_1,float *param_2,int *param_3,int *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  uint local_14;
  float *local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = param_2;
  local_8 = 1;
  local_14 = 0x40;
  local_4 = 7;
  pfVar5 = param_1;
  do {
    pfVar7 = local_10;
    local_c = local_8;
    pfVar9 = local_10;
    if (0 < local_8) {
      do {
        pfVar9 = pfVar9 + local_14;
        iVar11 = 0;
        if (3 < local_14) {
          iVar10 = (local_14 - 4 >> 2) + 1;
          iVar11 = iVar10 * 4;
          pfVar4 = pfVar7;
          pfVar6 = pfVar9;
          do {
            pfVar7 = pfVar4 + 4;
            pfVar9 = pfVar6 + 4;
            *pfVar4 = pfVar5[1] + *pfVar5;
            pfVar8 = pfVar5 + 4;
            *pfVar6 = *pfVar5 - pfVar5[1];
            pfVar4[1] = pfVar5[3] + pfVar5[2];
            pfVar1 = pfVar5 + 5;
            pfVar2 = pfVar5 + 6;
            pfVar6[1] = pfVar5[2] - pfVar5[3];
            pfVar4[2] = *pfVar1 + *pfVar8;
            pfVar3 = pfVar5 + 7;
            pfVar5 = pfVar5 + 8;
            iVar10 = iVar10 + -1;
            pfVar6[2] = *pfVar8 - *pfVar1;
            pfVar4[3] = *pfVar3 + *pfVar2;
            pfVar6[3] = *pfVar2 - *pfVar3;
            pfVar4 = pfVar7;
            pfVar6 = pfVar9;
          } while (iVar10 != 0);
        }
        if (iVar11 < (int)local_14) {
          iVar11 = local_14 - iVar11;
          pfVar4 = pfVar5;
          pfVar6 = pfVar7;
          pfVar8 = pfVar9;
          do {
            pfVar5 = pfVar4 + 2;
            pfVar7 = pfVar6 + 1;
            pfVar9 = pfVar8 + 1;
            iVar11 = iVar11 + -1;
            *pfVar6 = pfVar4[1] + *pfVar4;
            *pfVar8 = *pfVar4 - pfVar4[1];
            pfVar4 = pfVar5;
            pfVar6 = pfVar7;
            pfVar8 = pfVar9;
          } while (iVar11 != 0);
        }
        local_c = local_c + -1;
        pfVar7 = pfVar7 + local_14;
      } while (local_c != 0);
    }
    local_8 = local_8 * 2;
    local_14 = (int)local_14 >> 1;
    local_4 = local_4 + -1;
    pfVar9 = pfVar5 + -0x80;
    pfVar5 = local_10;
    local_10 = pfVar9;
  } while (local_4 != 0);
  *param_3 = (int)param_2;
  *param_4 = (int)param_1;
  return;
}

// 014A53E0  FUN_014a53e0  size=575  [run]
void __thiscall FUN_014a53e0(float *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *in_EAX;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *local_28;
  int local_24;
  int local_1c;
  int local_18;
  float *local_14;
  float *local_10;
  int local_c;
  
  local_24 = 0x80;
  local_c = 0;
  iVar12 = 1;
  local_14 = in_EAX;
  local_10 = param_1;
  do {
    pfVar3 = local_10;
    pfVar2 = local_14;
    local_24 = local_24 >> 1;
    iVar1 = iVar12 * 2;
    iVar5 = iVar1 >> 1;
    local_28 = local_10 + iVar12 * 2 + -1;
    pfVar10 = (float *)((int)&DAT_01830058 + local_c);
    pfVar14 = (float *)((int)&DAT_0182f958 + local_c);
    if (local_24 != 0) {
      pfVar16 = local_10;
      local_18 = local_24;
      pfVar7 = local_14;
      do {
        pfVar7 = pfVar7 + iVar5;
        local_1c = 0;
        if (3 < iVar5) {
          iVar12 = (iVar5 - 4U >> 2) + 1;
          local_1c = iVar12 * 4;
          pfVar4 = local_14;
          pfVar6 = pfVar7;
          pfVar9 = pfVar10;
          pfVar11 = local_28;
          pfVar13 = pfVar14;
          pfVar15 = pfVar16;
          do {
            pfVar10 = pfVar9 + 4;
            pfVar14 = pfVar13 + 4;
            local_14 = pfVar4 + 4;
            pfVar7 = pfVar6 + 4;
            pfVar16 = pfVar15 + 4;
            local_28 = pfVar11 + -4;
            iVar12 = iVar12 + -1;
            *pfVar15 = *pfVar4 * *pfVar9 - *pfVar6 * *pfVar13;
            *pfVar11 = *pfVar6 * *pfVar9 + *pfVar4 * *pfVar13;
            pfVar15[1] = pfVar4[1] * pfVar9[1] - pfVar6[1] * pfVar13[1];
            pfVar11[-1] = pfVar6[1] * pfVar9[1] + pfVar13[1] * pfVar4[1];
            pfVar15[2] = pfVar4[2] * pfVar9[2] - pfVar6[2] * pfVar13[2];
            pfVar11[-2] = pfVar6[2] * pfVar9[2] + pfVar13[2] * pfVar4[2];
            pfVar15[3] = pfVar4[3] * pfVar9[3] - pfVar6[3] * pfVar13[3];
            pfVar11[-3] = pfVar6[3] * pfVar9[3] + pfVar13[3] * pfVar4[3];
            pfVar4 = local_14;
            pfVar6 = pfVar7;
            pfVar9 = pfVar10;
            pfVar11 = local_28;
            pfVar13 = pfVar14;
            pfVar15 = pfVar16;
          } while (iVar12 != 0);
        }
        if (local_1c < iVar5) {
          local_1c = iVar5 - local_1c;
          pfVar4 = local_14;
          pfVar6 = pfVar7;
          pfVar9 = pfVar10;
          pfVar11 = local_28;
          pfVar13 = pfVar14;
          pfVar15 = pfVar16;
          do {
            pfVar10 = pfVar9 + 1;
            pfVar14 = pfVar13 + 1;
            local_14 = pfVar4 + 1;
            pfVar7 = pfVar6 + 1;
            pfVar16 = pfVar15 + 1;
            local_28 = pfVar11 + -1;
            local_1c = local_1c + -1;
            *pfVar15 = *pfVar4 * *pfVar9 - *pfVar6 * *pfVar13;
            *pfVar11 = *pfVar6 * *pfVar9 + *pfVar4 * *pfVar13;
            pfVar4 = local_14;
            pfVar6 = pfVar7;
            pfVar9 = pfVar10;
            pfVar11 = local_28;
            pfVar13 = pfVar14;
            pfVar15 = pfVar16;
          } while (local_1c != 0);
        }
        local_28 = local_28 + iVar1 + iVar5;
        local_14 = local_14 + iVar5;
        pfVar16 = pfVar16 + iVar5;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    local_c = local_c + -0x100;
    local_14 = local_10;
    local_10 = pfVar2;
    iVar12 = iVar1;
  } while (-0x601 < local_c);
  iVar12 = 0x10;
  puVar8 = (undefined4 *)(param_2 + 4);
  pfVar10 = pfVar3 + 3;
  do {
    puVar8[-1] = pfVar10[-3];
    iVar12 = iVar12 + -1;
    *puVar8 = *(undefined4 *)((int)pfVar3 + (-0x20 - param_2) + (int)(puVar8 + 8));
    puVar8[1] = pfVar10[-1];
    puVar8[2] = *pfVar10;
    puVar8[3] = pfVar10[1];
    puVar8[4] = pfVar10[2];
    puVar8[5] = pfVar10[3];
    puVar8[6] = pfVar10[4];
    puVar8 = puVar8 + 8;
    pfVar10 = pfVar10 + 8;
  } while (iVar12 != 0);
  return;
}

// 014A5630  FUN_014a5630  size=49  [run]
void FUN_014a5630(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  FUN_014a5280(param_1,param_2,local_4,local_8);
  FUN_014a53e0(param_3);
  return;
}

// 014A5661  FUN_014a5661  size=4  [run]
undefined4 FUN_014a5661(void)

{
  return 0x1c;
}

// 014A5665  FUN_014a5665  size=19  [run]
void FUN_014a5665(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) != 0) {
    FUN_0129c89d(*(int *)(unaff_ESI + 4));
    *(undefined4 *)(unaff_ESI + 4) = 0;
  }
  return;
}

// 014A5678  FUN_014a5678  size=76  [run]
void FUN_014a5678(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = FUN_0129c061(param_1[1],param_2,param_3);
    if (iVar1 == 0) {
      return;
    }
    FUN_01293f35(0,"E09011609F:Failed to register file. (path:%s)",param_3);
  }
  else {
    FUN_01293f1f(0,"E09011612F:File is already opened or some error occurred.");
  }
  *param_1 = 5;
  return;
}

// 014A56C4  FUN_014a56c4  size=93  [run]
void FUN_014a56c4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (*param_1 != 0) {
    FUN_01293f1f(0,"E09031607F:File is already opened or some error occurred.");
    *param_1 = 5;
    return;
  }
  if (param_3 < 0) {
    pcVar2 = "E09031608F:Specified id(%d) is invalid.";
  }
  else {
    iVar1 = FUN_0129c092(param_1[1],param_2,param_3);
    if (iVar1 == 0) {
      return;
    }
    pcVar2 = "E09031609F:Failed to register file. (id:%d)";
  }
  FUN_01293f35(0,pcVar2,param_3);
  *param_1 = 5;
  return;
}

// 014A5721  FUN_014a5721  size=73  [run]
void FUN_014a5721(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    FUN_0129b774(param_1[1],0);
    iVar1 = FUN_0129c85c(param_1[1],0,0,0,0,0,0,0);
    *param_1 = (-(uint)(iVar1 != 0) & 4) + 1;
  }
  else {
    FUN_01293f1f(0,"E09011614F:File is already opened or some error occurred.");
    *param_1 = 5;
  }
  return;
}

// 014A576A  FUN_014a576a  size=55  [run]
void FUN_014a576a(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    if (iVar1 < 4) {
      *param_1 = 4;
      FUN_0129be04(param_1[1]);
    }
    else if (iVar1 == 5) {
      FUN_0129be04(param_1[1]);
      *param_1 = 0;
      param_1[2] = 0;
    }
  }
  return;
}

// 014A57A1  FUN_014a57a1  size=19  [run]
void FUN_014a57a1(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}

// 014A57C6  FUN_014a57c6  size=69  [run]
undefined8 FUN_014a57c6(int *param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*param_1 != 2) {
    FUN_01293f1f(0,"E09012005F:Can not get file size now.");
    return 0xffffffffffffffff;
  }
  iVar1 = FUN_0129b997(param_1[1],&local_c);
  if (iVar1 != 0) {
    local_c = 0xffffffff;
    local_8 = 0xffffffff;
  }
  return CONCAT44(local_8,local_c);
}

// 014A580B  FUN_014a580b  size=42  [run]
undefined8 FUN_014a580b(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_0129be8b(*(undefined4 *)(param_1 + 4),&local_c);
  if (iVar1 != 0) {
    local_c = 0xffffffff;
    local_8 = 0xffffffff;
  }
  return CONCAT44(local_8,local_c);
}

// 014A5835  FUN_014a5835  size=236  [run]
void FUN_014a5835(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_1;
  FUN_0129b6d6(param_1[1],&param_1);
  if (param_1 == (int *)0x3) {
    piVar2[2] = 1;
    if (*piVar2 - 2U < 2) {
      FUN_014a576a(piVar2);
      FUN_0129b6d6(piVar2[1],&param_1);
    }
    else {
      *piVar2 = 5;
    }
  }
  iVar1 = *piVar2;
  if (iVar1 == 1) {
    if (param_1 != (int *)0x2) {
      return;
    }
    FUN_0129be04(piVar2[1]);
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        return;
      }
      if (param_1 == (int *)0x0) {
        if ((piVar2[3] != 0) && (piVar2[4] != 0)) {
          return;
        }
        FUN_0129b524(piVar2[1],0,0);
        FUN_0129b774(piVar2[1],1);
        FUN_0129c85c(piVar2[1],0,0,0,0,0,0,0);
      }
      if ((param_1 != (int *)0x2) && (param_1 != (int *)0x3)) {
        return;
      }
      if (piVar2[2] == 1) {
        *piVar2 = 5;
        piVar2[2] = 0;
        return;
      }
      *piVar2 = 0;
      return;
    }
    if (param_1 != (int *)0x2) {
      return;
    }
    if ((piVar2[3] != 0) && (piVar2[4] != 0)) {
      return;
    }
    FUN_0129b524(piVar2[1],0,0);
  }
  *piVar2 = 2;
  return;
}

// 014A5921  FUN_014a5921  size=7  [run]
undefined4 FUN_014a5921(undefined4 *param_1)

{
  return *param_1;
}

// 014A595E  FUN_014a595e  size=12  [run]
void FUN_014a595e(void)

{
  FUN_014a5665();
  return;
}

// 014A596A  FUN_014a596a  size=101  [run]
void FUN_014a596a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  
  FUN_0129b839(param_1[1],param_9);
  FUN_0129b774(param_1[1],0);
  FUN_0129b524(param_1[1],&LAB_014a57b4,param_1);
  *param_1 = 3;
  iVar1 = FUN_0129c85c(param_1[1],param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    param_1[2] = 1;
    FUN_014a576a(param_1);
  }
  return;
}

// 014A59CF  FUN_014a59cf  size=97  [run]
undefined4 * FUN_014a59cf(undefined4 param_1,void *param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  _memset(param_2,0,param_3);
  puVar3 = (undefined4 *)((int)param_2 + 7U & 0xfffffff8);
  piVar1 = puVar3 + 1;
  *puVar3 = 0;
  *piVar1 = 0;
  puVar3[2] = 0;
  iVar2 = thunk_FUN_0129ca4d(piVar1);
  if (((iVar2 != 0) || (*piVar1 == 0)) || (iVar2 = thunk_FUN_0129b839(*piVar1,2), iVar2 != 0)) {
    FUN_014a5665();
    FUN_01293f1f(0,"E08121829F:Failed to create CriFsStmIoObj.");
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}

// 014A5A30  FUN_014a5a30  size=13  [run]
undefined4 FUN_014a5a30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_01b34a7c;
  return 0;
}

// 014A5A52  FUN_014a5a52  size=884  [run]
undefined4
FUN_014a5a52(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5,
            uint *param_6)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  if (param_2 < 0x40) {
    return 0xfffffffe;
  }
  *param_6 = 0;
  local_10 = 0;
  local_14 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = 0;
  if (((CONCAT21(CONCAT11(param_1[1],param_1[2]),param_1[3]) & 0x7f7f7f7f |
       (*param_1 & 0x7f) << 0x18) == 0x48434100) &&
     (uVar11 = (uint)CONCAT11(param_1[6],param_1[7]),
     (CONCAT21(CONCAT11(param_1[9],param_1[10]),param_1[0xb]) & 0x7f7f7f7f |
     (param_1[8] & 0x7f) << 0x18) == 0x666d7400)) {
    bVar2 = param_1[0xc];
    uVar16 = (uint)CONCAT21(CONCAT11(param_1[0xd],param_1[0xe]),param_1[0xf]);
    bVar3 = param_1[0x11];
    bVar4 = param_1[0x12];
    bVar5 = param_1[0x13];
    uVar12 = (uint)CONCAT11(param_1[0x14],param_1[0x15]);
    bVar6 = param_1[0x17];
    bVar7 = param_1[0x16];
    uVar13 = CONCAT31(CONCAT21(CONCAT11(param_1[0x18],param_1[0x19]),param_1[0x1a]),param_1[0x1b]) &
             0x7f7f7f7f;
    if (uVar13 == 0x636f6d70) {
      uVar8 = CONCAT11(param_1[0x1c],param_1[0x1d]);
      param_1 = param_1 + 0x28;
    }
    else {
      if (uVar13 != 0x64656300) {
        return 0xfffffffe;
      }
      uVar8 = CONCAT11(param_1[0x1c],param_1[0x1d]);
      param_1 = param_1 + 0x24;
    }
    uVar13 = (uint)uVar8;
    if ((CONCAT21(CONCAT11(param_1[1],param_1[2]),param_1[3]) & 0x7f7f7f7f |
        (*param_1 & 0x7f) << 0x18) == 0x61746800) {
      param_1 = param_1 + 6;
    }
    if ((CONCAT21(CONCAT11(param_1[1],param_1[2]),param_1[3]) & 0x7f7f7f7f |
        (*param_1 & 0x7f) << 0x18) == 0x6c6f6f70) {
      iVar14 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
      iVar15 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
      pbVar1 = param_1 + 0xf;
      pbVar9 = param_1 + 0xe;
      local_14 = iVar14 * uVar13 + uVar11;
      local_18 = (iVar14 * 0x400 - uVar12) + (uint)CONCAT11(param_1[0xc],param_1[0xd]);
      local_1c = (iVar15 + 1) * uVar13 + uVar11;
      param_1 = param_1 + 0x10;
      local_20 = ((iVar15 + 1) * 0x400 - (uint)CONCAT11(*pbVar9,*pbVar1)) - uVar12;
      local_10 = 0xffffffff;
    }
    if ((CONCAT21(CONCAT11(param_1[1],param_1[2]),param_1[3]) & 0x7f7f7f7f |
        (*param_1 & 0x7f) << 0x18) == 0x63697068) {
      param_1 = param_1 + 6;
    }
    if ((CONCAT21(CONCAT11(param_1[1],param_1[2]),param_1[3]) & 0x7f7f7f7f |
        (*param_1 & 0x7f) << 0x18) == 0x72766100) {
      local_24 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
    }
    else {
      local_24 = 0x3f800000;
    }
    FUN_0129432c(param_5,0x44);
    param_5[0xc] = local_24;
    param_5[1] = (uint)bVar2;
    param_5[6] = local_10;
    param_5[7] = local_14;
    param_5[9] = local_18;
    param_5[2] = uVar16;
    param_5[8] = local_1c;
    param_5[10] = local_20;
    param_5[0xb] = 1;
    param_5[0x10] = 1;
    *param_5 = 3;
    param_5[3] = ((uint)CONCAT21(CONCAT11(bVar3,bVar4),bVar5) * 0x400 - (uint)CONCAT11(bVar7,bVar6))
                 - uVar12;
    param_5[4] = uVar11;
    param_5[5] = (int)(uVar16 * uVar13) >> 7;
    param_5[0xd] = uVar11;
    param_5[0xe] = uVar13;
    param_5[0xf] = 0x400;
    *param_6 = uVar11;
    uVar10 = 0;
  }
  else {
    uVar10 = 0xfffffffe;
  }
  return uVar10;
}

// 014A5DEE  FUN_014a5dee  size=30  [run]
undefined4 FUN_014a5dee(int *param_1)

{
  if (*param_1 != 0) {
    FUN_0149eab0(*param_1);
    *param_1 = 0;
  }
  FUN_0149ea90();
  return 0;
}

// 014A5E0C  FUN_014a5e0c  size=879  [run]
/* WARNING: Removing unreachable block (ram,0x014a5f73) */

undefined4
FUN_014a5e0c(int *param_1,byte *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7,undefined4 *param_8,int *param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int local_78 [8];
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined8 local_18;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  *param_8 = 0;
  *param_9 = 0;
  if (param_7 < 0x80) {
    return 0;
  }
  iVar2 = *param_1;
  local_10 = 0;
  local_18._4_4_ = 0;
  local_24 = iVar2;
  if (param_1[4] == 0) {
    iVar1 = FUN_014a0730(iVar2,param_2,param_3,param_4,param_5,&local_10);
    if (iVar1 != 9) {
      *param_8 = local_10;
      if (iVar1 != 0) {
        FUN_01293f1f(0,"E2009100101:Failed to decode HCA header.");
        return 0xfffffffe;
      }
      FUN_0149ed00(iVar2,param_1 + 2);
      FUN_0149ee80(iVar2,param_1 + 3);
      param_1[4] = 1;
      FUN_0149eec0(iVar2,&local_30,&local_c,&local_34);
      FUN_0149ef30(iVar2,&local_28,&local_1c,&local_20,&local_2c);
      local_18._4_4_ = (int)local_28 >> 0x1f;
      local_18._0_4_ = local_28;
      local_48._4_4_ = (int)local_1c >> 0x1f;
      local_48._0_4_ = local_1c;
      lVar5 = __allmul(local_28,local_18._4_4_,0x400,0);
      local_40 = (lVar5 - (int)local_c) + CONCAT44(local_48._4_4_,(uint)local_48);
      local_4c = (int)local_2c >> 0x1f;
      local_50 = local_2c;
      lVar5 = __allmul((local_20 - (uint)local_18) + 1,
                       ((((int)local_20 >> 0x1f) - local_18._4_4_) -
                       (uint)(local_20 < (uint)local_18)) +
                       (uint)(0xfffffffe < local_20 - (uint)local_18),0x400,0);
      lVar5 = lVar5 - CONCAT44(local_4c,local_50);
      uVar3 = (uint)lVar5;
      iVar1 = (int)((ulonglong)lVar5 >> 0x20);
      local_58 = uVar3 - (uint)local_48;
      param_1[6] = local_1c;
      local_18._0_4_ = param_1[5];
      uVar3 = (uint)(uVar3 < (uint)local_48);
      iVar2 = iVar1 - local_48._4_4_;
      iVar4 = iVar2 - uVar3;
      local_18._4_4_ = (int)(uint)local_18 >> 0x1f;
      param_1[8] = local_58;
      param_1[9] = iVar4;
      lVar5 = (longlong)(int)(uint)local_18;
      if ((-1 < iVar4) &&
         (((iVar4 != 0 && SBORROW4(iVar1,local_48._4_4_) == SBORROW4(iVar2,uVar3) ||
           (lVar5 = (longlong)(int)(uint)local_18, local_58 != 0)) &&
          (lVar5 = (longlong)(int)(uint)local_18,
          local_40 + CONCAT44(iVar4,local_58) <= (longlong)(int)(uint)local_18)))) {
        lVar5 = __allrem((uint)local_18 - (uint)local_40,
                         (local_18._4_4_ - local_40._4_4_) - (uint)((uint)local_18 < (uint)local_40)
                         ,local_58,iVar4);
        lVar5 = lVar5 + local_40;
      }
      local_18 = lVar5;
      local_48 = __alldiv(lVar5,0x400,0);
      iVar2 = __allrem(local_18,0x400,0);
      local_18._0_4_ = local_c + iVar2;
      local_18._4_4_ = (int)(uint)local_18 >> 0x1f;
      local_c = (uint)local_18;
      if ((iVar4 < 0) || ((iVar4 < 1 && (local_58 == 0)))) {
        lVar5 = __allmul(local_30,local_30 >> 0x1f,0x400,0);
        lVar5 = (lVar5 - (int)local_34) - CONCAT44(local_18._4_4_,(uint)local_18);
      }
      else {
        lVar5 = __allmul(local_20 + 1,(int)(local_20 + 1) >> 0x1f,0x400,0);
        lVar5 = (lVar5 - CONCAT44(local_4c,local_50)) - CONCAT44(local_18._4_4_,(uint)local_18);
      }
      local_54 = (int)((ulonglong)lVar5 >> 0x20);
      param_1[5] = 0;
      uVar6 = __allmul(local_48,0x400,0);
      FUN_0149efc0(local_24,(uint)local_18,local_18._4_4_,(uint)lVar5 - (uint)uVar6,
                   (local_54 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)((uint)lVar5 < (uint)uVar6))
      ;
      FUN_0149eb10(local_24,DAT_0225bf64,DAT_0225bf68);
    }
  }
  else {
    FUN_0149f020(iVar2,&local_8);
    if (local_8 != 0) {
      if ((0 < param_3) && ((*param_2 & 0x7f) == 0x48)) {
        param_1[4] = 0;
        return 0;
      }
      iVar1 = param_1[9];
      if ((-1 < iVar1) && ((0 < iVar1 || (param_1[8] != 0)))) {
        FUN_0149efc0(iVar2,param_1[6],param_1[6] >> 0x1f,param_1[8],iVar1);
      }
    }
    FUN_0149f1d0(iVar2,&local_8);
    if (local_8 != 0) {
      iVar1 = FUN_014a08d0(iVar2,param_2,param_3,param_4,param_5,&local_10);
      *param_8 = local_10;
      if (iVar1 != 0) {
        return 0;
      }
    }
    FUN_0149f1d0(iVar2,&local_8);
    while ((local_8 == 0 && (0x7f < param_7 - local_18._4_4_))) {
      param_8 = (undefined4 *)0x0;
      if (0 < param_1[2]) {
        local_24 = local_18._4_4_ << 2;
        do {
          iVar1 = (int)param_8 + 1;
          local_78[(int)param_8] = *(int *)(param_6 + (int)param_8 * 4) + local_24;
          param_8 = (undefined4 *)iVar1;
        } while (iVar1 < param_1[2]);
      }
      FUN_014a0e90(*param_1,local_78,param_1[1],0x80,&local_38);
      local_18._4_4_ = local_18._4_4_ + local_38;
      FUN_0149f1d0(iVar2,&local_8);
    }
    *param_9 = local_18._4_4_;
  }
  return 0;
}

