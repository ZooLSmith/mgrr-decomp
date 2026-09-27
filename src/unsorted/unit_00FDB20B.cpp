// src/unsorted/unit_00FDB20B.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDB20B..00FDB5A5, 15 functions

#include "mgrr.h"

// 00FDB20B  FUN_00fdb20b  size=18  [run]
void FUN_00fdb20b(undefined4 *param_1)

{
  __Mtxlock((_Rmtx *)*param_1);
  return;
}

// 00FDB21D  FUN_00fdb21d  size=18  [run]
void FUN_00fdb21d(undefined4 *param_1)

{
  __Mtxunlock((_Rmtx *)*param_1);
  return;
}

// 00FDB22F  thunk_FUN_00fe2e0d  size=5  [run]
bool thunk_FUN_00fe2e0d(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return p_Var1->_ProcessingThrow != 0;
}

// 00FDB234  __CreateLocForCP  size=66  [run]
/* Library Function - Single Match
    __CreateLocForCP
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __CreateLocForCP(uint param_1)

{
  char local_28;
  char local_27 [31];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_28 = '.';
  __ui64toa_s((ulonglong)param_1,local_27,0x1f,10);
  __create_locale(0,&local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FDB276  __GetLocaleForCP  size=155  [run]
/* Library Function - Single Match
    __GetLocaleForCP
   
   Library: Visual Studio 2010 Release */

_locale_t __cdecl __GetLocaleForCP(uint param_1)

{
  undefined4 *Comperand;
  int iVar1;
  undefined4 *puVar2;
  int *_Memory;
  
  _Memory = (int *)0x0;
  do {
    Comperand = *(undefined4 **)(&DAT_01f8ee00 + (param_1 % 0x3e) * 4);
    for (puVar2 = Comperand; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      if (puVar2[1] == param_1) {
        if (_Memory != (int *)0x0) {
          __free_locale((_locale_t)_Memory[2]);
          _free(_Memory);
        }
        return (_locale_t)puVar2[2];
      }
    }
    if (_Memory == (int *)0x0) {
      _Memory = __malloc_crt(0xc);
      if (_Memory == (int *)0x0) {
        return (_locale_t)0x0;
      }
      iVar1 = __CreateLocForCP(param_1);
      _Memory[2] = iVar1;
      if (iVar1 == 0) {
        _free(_Memory);
        return (_locale_t)0x0;
      }
      _Memory[1] = param_1;
    }
    *_Memory = (int)Comperand;
    puVar2 = (undefined4 *)
             InterlockedCompareExchange
                       ((LONG *)(&DAT_01f8ee00 + (param_1 % 0x3e) * 4),(LONG)_Memory,(LONG)Comperand
                       );
    if (puVar2 == Comperand) {
      return (_locale_t)_Memory[2];
    }
  } while( true );
}

// 00FDB311  FUN_00fdb311  size=64  [run]
void FUN_00fdb311(void)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  LONG *Target;
  
  Target = (LONG *)&DAT_01f8ee00;
  do {
    _Memory = (undefined4 *)InterlockedExchange(Target,0);
    while (_Memory != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*_Memory;
      __free_locale((_locale_t)_Memory[2]);
      _free(_Memory);
      _Memory = puVar1;
    }
    Target = Target + 1;
  } while ((int)Target < 0x1f8eef8);
  return;
}

// 00FDB364  __Mbrtowc  size=371  [run]
/* Library Function - Single Match
    __Mbrtowc
   
   Library: Visual Studio 2010 Release */

int __cdecl
__Mbrtowc(wchar_t *param_1,char *param_2,size_t param_3,mbstate_t *param_4,_Cvtvec *param_5)

{
  ushort uVar1;
  int iVar2;
  uint CodePage;
  _locale_t plVar3;
  int *piVar4;
  ushort *puVar5;
  uint uVar6;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    return 0;
  }
  if (*param_2 == '\0') {
    if (param_1 == (wchar_t *)0x0) {
      return 0;
    }
    *param_1 = L'\0';
    return 0;
  }
  if (param_5 == (_Cvtvec *)0x0) {
    iVar2 = ____lc_handle_func();
    uVar6 = *(uint *)(iVar2 + 8);
    CodePage = ____lc_codepage_func();
  }
  else {
    uVar6 = param_5->_Page;
    CodePage = param_5->_Mbcurmax;
  }
  if (uVar6 == 0) {
    if (param_1 != (wchar_t *)0x0) {
      *param_1 = (ushort)(byte)*param_2;
    }
    return 1;
  }
  plVar3 = __GetLocaleForCP(CodePage);
  if (*param_4 == 0) {
    if (plVar3 == (_locale_t)0x0) {
      puVar5 = ___pctype_func();
      uVar1 = puVar5[(byte)*param_2] & 0x8000;
    }
    else {
      uVar1 = plVar3->mbcinfo->mbctype[(byte)*param_2 + 5] & 4;
    }
    if (uVar1 == 0) {
      iVar2 = MultiByteToWideChar(CodePage,9,param_2,1,param_1,(uint)(param_1 != (wchar_t *)0x0));
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_00fdb419;
    }
    uVar6 = ____mb_cur_max_l_func(plVar3);
    if (param_3 < uVar6) {
      *(char *)param_4 = *param_2;
      return -2;
    }
    iVar2 = ____mb_cur_max_l_func(plVar3);
    if (1 < iVar2) {
      uVar6 = (uint)(param_1 != (wchar_t *)0x0);
      iVar2 = ____mb_cur_max_l_func(plVar3);
      iVar2 = MultiByteToWideChar(CodePage,9,param_2,iVar2,param_1,uVar6);
      if (iVar2 != 0) goto LAB_00fdb40a;
    }
    if (param_2[1] != '\0') goto LAB_00fdb40a;
  }
  else {
    *(char *)((int)param_4 + 1) = *param_2;
    iVar2 = ____mb_cur_max_l_func(plVar3);
    if ((1 < iVar2) &&
       (iVar2 = MultiByteToWideChar(CodePage,9,(LPCSTR)param_4,2,param_1,
                                    (uint)(param_1 != (wchar_t *)0x0)), iVar2 != 0)) {
      *param_4 = 0;
LAB_00fdb40a:
      iVar2 = ____mb_cur_max_l_func(plVar3);
      return iVar2;
    }
  }
  *param_4 = 0;
LAB_00fdb419:
  piVar4 = __errno();
  *piVar4 = 0x2a;
  return -1;
}

// 00FDB4D7  __Once  size=59  [run]
/* Library Function - Single Match
    __Once
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cdecl __Once(_Once_t *param_1,_func_10707 *param_2)

{
  LONG LVar1;
  
  if (*param_1 != 2) {
    LVar1 = InterlockedExchange(param_1,1);
    if (LVar1 == 0) {
      (*param_2)();
    }
    else if (LVar1 != 2) {
      while (*param_1 != 2) {
        Sleep(1);
      }
      return;
    }
    *param_1 = 2;
  }
  return;
}

// 00FDB512  __Mtxinit  size=16  [run]
/* Library Function - Single Match
    __Mtxinit
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cdecl __Mtxinit(_Rmtx *param_1)

{
  InitializeCriticalSection(param_1);
  return;
}

// 00FDB522  __Mtxdst  size=16  [run]
/* Library Function - Single Match
    __Mtxdst
   
   Library: Visual Studio */

void __cdecl __Mtxdst(_Rmtx *param_1)

{
  DeleteCriticalSection(param_1);
  return;
}

// 00FDB532  __Mtxlock  size=16  [run]
/* Library Function - Single Match
    __Mtxlock
   
   Library: Visual Studio 2010 Release */

void __cdecl __Mtxlock(_Rmtx *param_1)

{
  EnterCriticalSection(param_1);
  return;
}

// 00FDB542  __Mtxunlock  size=16  [run]
/* Library Function - Single Match
    __Mtxunlock
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __Mtxunlock(_Rmtx *param_1)

{
  LeaveCriticalSection(param_1);
  return;
}

// 00FDB552  _Atexit  size=50  [run]
/* Library Function - Single Match
    void __cdecl _Atexit(void (__cdecl*)(void))
   
   Library: Visual Studio 2010 Release */

void __cdecl _Atexit(_func_void *param_1)

{
  PVOID pvVar1;
  
  if (DAT_018e86a8 == 0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  DAT_018e86a8 = DAT_018e86a8 + -1;
  pvVar1 = EncodePointer(param_1);
  *(PVOID *)(DAT_018e86a8 * 4 + 0x1f8ef18) = pvVar1;
  return;
}

// 00FDB584  thunk_FUN_00fdb5a5  size=2  [run]
void thunk_FUN_00fdb5a5(void)

{
  int iVar1;
  code *pcVar2;
  
  while (DAT_018e86a8 < 10) {
    iVar1 = DAT_018e86a8 * 4;
    DAT_018e86a8 = DAT_018e86a8 + 1;
    pcVar2 = DecodePointer(*(PVOID *)(iVar1 + 0x1f8ef18));
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  return;
}

// 00FDB5A5  FUN_00fdb5a5  size=41  [run]
void FUN_00fdb5a5(void)

{
  int iVar1;
  code *pcVar2;
  
  while (DAT_018e86a8 < 10) {
    iVar1 = DAT_018e86a8 * 4;
    DAT_018e86a8 = DAT_018e86a8 + 1;
    pcVar2 = DecodePointer(*(PVOID *)(iVar1 + 0x1f8ef18));
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  return;
}

