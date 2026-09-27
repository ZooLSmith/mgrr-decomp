// lib/msvc/crt/unit_00FDB68B.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDB68B..00FDF826, 156 functions

#include "types.h"

// 00FDB68B  __purecall  size=42  [run]
/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2010 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = DecodePointer(DAT_01f8f5a0);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  __NMSG_WRITE(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}

// 00FDB6B5  FUN_00fdb6b5  size=39  [run]
PVOID FUN_00fdb6b5(PVOID param_1)

{
  PVOID pvVar1;
  
  pvVar1 = DecodePointer(DAT_01f8f5a0);
  DAT_01f8f5a0 = EncodePointer(param_1);
  return pvVar1;
}

// 00FDB6E9  __cfltcvt_init  size=96  [run]
/* Library Function - Single Match
    __cfltcvt_init
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_018e8a20 = __cfltcvt;
  PTR_LAB_018e8a24 = __cropzeros;
  PTR_LAB_018e8a28 = __fassign;
  PTR_LAB_018e8a2c = __forcdecpt;
  PTR_LAB_018e8a30 = __positive;
  PTR_LAB_018e8a34 = __cfltcvt;
  PTR_LAB_018e8a38 = __cfltcvt_l;
  PTR_LAB_018e8a3c = __fassign_l;
  PTR_LAB_018e8a40 = __cropzeros_l;
  PTR_LAB_018e8a44 = __forcdecpt_l;
  return;
}

// 00FDB749  FUN_00fdb749  size=21  [run]
undefined4 FUN_00fdb749(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_01f8ef44;
  DAT_01f8ef44 = param_1;
  return uVar1;
}

// 00FDB75E  __fpmath  size=25  [run]
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2010 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}

// 00FDB777  __vsnprintf_helper  size=202  [run]
/* Library Function - Single Match
    __vsnprintf_helper
   
   Library: Visual Studio 2010 Release */

int __vsnprintf_helper(code *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,
                      undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  FILE local_24;
  
  local_24._ptr = (char *)0x0;
  ppcVar4 = (char **)&local_24._cnt;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if (param_4 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    iVar3 = -1;
  }
  else if ((param_3 == 0) || (param_2 != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_24._cnt = param_3;
    }
    local_24._flag = 0x42;
    local_24._base = param_2;
    local_24._ptr = param_2;
    iVar3 = (*param_1)(&local_24,param_4,param_5,param_6);
    if (param_2 != (char *)0x0) {
      if (-1 < iVar3) {
        local_24._cnt = local_24._cnt - 1;
        if (-1 < local_24._cnt) {
          *local_24._ptr = '\0';
          return iVar3;
        }
        iVar2 = __flsbuf(0,&local_24);
        if (iVar2 != -1) {
          return iVar3;
        }
      }
      param_2[param_3 - 1] = '\0';
      iVar3 = (-1 < local_24._cnt) - 2;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    iVar3 = -1;
  }
  return iVar3;
}

// 00FDB841  FID_conflict:__vsnprintf_c  size=41  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vsnprintf_c
    __vsprintf_p
   
   Library: Visual Studio 2010 Release */

int __cdecl
FID_conflict___vsnprintf_c(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(FUN_00fe5800,_DstBuf,_MaxCount,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// 00FDB86A  __vsnprintf_c_l  size=42  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vsnprintf_c_l
    __vsprintf_p_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vsnprintf_c_l(char *_DstBuf,size_t _MaxCount,char *param_3,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(FUN_00fe5800,_DstBuf,_MaxCount,param_3,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// 00FDB894  __vsprintf_s_l  size=119  [run]
/* Library Function - Single Match
    __vsprintf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int *piVar1;
  int iVar2;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return -1;
  }
  if ((_DstBuf == (char *)0x0) || (_DstSize == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
  }
  else {
    iVar2 = __vsnprintf_helper(FUN_00fe64c3,_DstBuf,_DstSize,_Format,_Locale,_ArgList);
    if (iVar2 < 0) {
      *_DstBuf = '\0';
    }
    if (iVar2 != -2) {
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x22;
  }
  FUN_00fe56c2();
  return -1;
}

// 00FDB90B  _vsprintf_s  size=29  [run]
/* Library Function - Single Match
    _vsprintf_s
   
   Library: Visual Studio 2010 Release */

int __cdecl _vsprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}

// 00FDB928  __vsnprintf_s_l  size=236  [run]
/* Library Function - Single Match
    __vsnprintf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,
               va_list _ArgList)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (_Format == (char *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (char *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_00fdb969:
      if (_DstSize != 0) {
        piVar2 = __errno();
        if (_MaxCount < _DstSize) {
          iVar1 = *piVar2;
          iVar3 = __vsnprintf_helper(FUN_00fe64c3,_DstBuf,_MaxCount + 1,_Format,_Locale,_ArgList);
          if (iVar3 == -2) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
LAB_00fdb9f0:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          iVar1 = *piVar2;
          iVar3 = __vsnprintf_helper(FUN_00fe64c3,_DstBuf,_DstSize,_Format,_Locale,_ArgList);
          _DstBuf[_DstSize - 1] = '\0';
          if (iVar3 != -2) goto LAB_00fdb9f0;
          if (_MaxCount == 0xffffffff) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
        }
        *_DstBuf = '\0';
        if (iVar3 != -2) {
          return -1;
        }
        piVar2 = __errno();
        *piVar2 = 0x22;
        goto LAB_00fdba07;
      }
    }
  }
  else if (_DstBuf != (char *)0x0) goto LAB_00fdb969;
  piVar2 = __errno();
  *piVar2 = 0x16;
LAB_00fdba07:
  FUN_00fe56c2();
  return -1;
}

// 00FDBA14  __vsnprintf_s  size=32  [run]
/* Library Function - Single Match
    __vsnprintf_s
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vsnprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_SizeInBytes,_MaxCount,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}

// 00FDBA34  FID_conflict:__vsnprintf_c  size=41  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vsnprintf_c
    __vsprintf_p
   
   Library: Visual Studio 2010 Release */

int __cdecl
FID_conflict___vsnprintf_c(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(FUN_00fe72f2,_DstBuf,_MaxCount,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// 00FDBA5D  __vsprintf_p_l  size=42  [run]
/* Library Function - Single Match
    __vsprintf_p_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vsprintf_p_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(FUN_00fe72f2,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// 00FDBA87  __onexit_nolock  size=182  [run]
/* Library Function - Single Match
    __onexit_nolock
   
   Library: Visual Studio 2010 Release */

PVOID __onexit_nolock(PVOID param_1)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  size_t sVar2;
  size_t sVar3;
  PVOID pvVar4;
  int iVar5;
  
  _Memory = DecodePointer(DAT_0225d0b4);
  puVar1 = DecodePointer(DAT_0225d0b0);
  if ((puVar1 < _Memory) || (iVar5 = (int)puVar1 - (int)_Memory, iVar5 + 4U < 4)) {
    return (PVOID)0x0;
  }
  sVar2 = __msize(_Memory);
  if (sVar2 < iVar5 + 4U) {
    sVar3 = 0x800;
    if (sVar2 < 0x800) {
      sVar3 = sVar2;
    }
    if ((sVar3 + sVar2 < sVar2) ||
       (pvVar4 = __realloc_crt(_Memory,sVar3 + sVar2), pvVar4 == (void *)0x0)) {
      if (sVar2 + 0x10 < sVar2) {
        return (PVOID)0x0;
      }
      pvVar4 = __realloc_crt(_Memory,sVar2 + 0x10);
      if (pvVar4 == (void *)0x0) {
        return (PVOID)0x0;
      }
    }
    puVar1 = (undefined4 *)((int)pvVar4 + (iVar5 >> 2) * 4);
    DAT_0225d0b4 = EncodePointer(pvVar4);
  }
  pvVar4 = EncodePointer(param_1);
  *puVar1 = pvVar4;
  DAT_0225d0b0 = EncodePointer(puVar1 + 1);
  return param_1;
}

// 00FDBB6E  __onexit  size=54  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2010 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_00fe868c();
  p_Var1 = (_onexit_t)__onexit_nolock(_Func);
  FUN_00fdbba4();
  return p_Var1;
}

// 00FDBBA4  FUN_00fdbba4  size=6  [run]
void FUN_00fdbba4(void)

{
  FUN_00fe8695();
  return;
}

// 00FDBBAA  _atexit  size=23  [run]
/* Library Function - Single Match
    _atexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}

// 00FDBBD0  FUN_00fdbbd0  size=139  [run]
uint * FUN_00fdbbd0(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    while (((uint)param_1 & 3) != 0) {
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar7 = uVar5 ^ 0xffffffff ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (uint *)0x0;
          }
          if ((uVar5 + 0x7efefeff & 0x80000000) == 0) {
            return (uint *)0x0;
          }
        }
      }
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 8);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
    }
    return (uint *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (uint *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (uint *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar4 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar8 = pcVar8 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}

// 00FDBC60  FUN_00fdbc60  size=28  [run]
ulonglong __fastcall FUN_00fdbc60(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint uStack_20;
  float fStack_1c;
  
  if (DAT_0225d0a8 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    uStack_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((uStack_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(uStack_20 < uVar2),uStack_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}

// 00FDBC96  FUN_00fdbc96  size=117  [run]
ulonglong FUN_00fdbc96(void)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  uStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = uStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)uStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}

// 00FDBD10  _memset  size=122  [run]
/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0x7f < _Size)) && (DAT_0225d0a8 != 0)) {
    pvVar2 = (void *)__VEC_memzero();
    return pvVar2;
  }
  puVar5 = _Dst;
  if (3 < _Size) {
    uVar3 = -(int)_Dst & 3;
    sVar4 = _Size;
    if (uVar3 != 0) {
      sVar4 = _Size - uVar3;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar4 & 3;
    uVar3 = sVar4 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}

// 00FDBD90  FID_conflict:_memcpy  size=708  [run]
/* Library Function - Multiple Matches With Different Base Names
    _memcpy
    _memmove
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar5 = puVar5 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_00fdbf6f_caseD_2;
        case 3:
          goto switchD_00fdbf6f_caseD_3;
        }
        goto switchD_00fdbf6f_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_00fdbf6f_caseD_0;
      case 1:
        goto switchD_00fdbf6f_caseD_1;
      case 2:
        goto switchD_00fdbf6f_caseD_2;
      case 3:
        goto switchD_00fdbf6f_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar2 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00fdbf6f_caseD_2;
            case 3:
              goto switchD_00fdbf6f_caseD_3;
            }
            goto switchD_00fdbf6f_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00fdbf6f_caseD_2;
            case 3:
              goto switchD_00fdbf6f_caseD_3;
            }
            goto switchD_00fdbf6f_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00fdbf6f_caseD_2;
            case 3:
              goto switchD_00fdbf6f_caseD_3;
            }
            goto switchD_00fdbf6f_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar5[7 - uVar2] = puVar4[7 - uVar2];
    case 6:
      puVar5[6 - uVar2] = puVar4[6 - uVar2];
    case 5:
      puVar5[5 - uVar2] = puVar4[5 - uVar2];
    case 4:
      puVar5[4 - uVar2] = puVar4[4 - uVar2];
    case 3:
      puVar5[3 - uVar2] = puVar4[3 - uVar2];
    case 2:
      puVar5[2 - uVar2] = puVar4[2 - uVar2];
    case 1:
      puVar5[1 - uVar2] = puVar4[1 - uVar2];
      puVar4 = puVar4 + -uVar2;
      puVar5 = puVar5 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_00fdbf6f_caseD_1:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      return _Dst;
    case 2:
switchD_00fdbf6f_caseD_2:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      return _Dst;
    case 3:
switchD_00fdbf6f_caseD_3:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return _Dst;
    }
switchD_00fdbf6f_caseD_0:
    return _Dst;
  }
  if (((0x7f < _Size) && (DAT_0225d0a8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    pvVar1 = (void *)FUN_00fe8ca9();
    return pvVar1;
  }
  puVar4 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar4 = puVar4 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_00fdbde9_caseD_2;
      case 3:
        goto switchD_00fdbde9_caseD_3;
      }
      goto switchD_00fdbde9_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_00fdbde9_caseD_0;
    case 1:
      goto switchD_00fdbde9_caseD_1;
    case 2:
      goto switchD_00fdbde9_caseD_2;
    case 3:
      goto switchD_00fdbde9_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00fdbde9_caseD_2;
          case 3:
            goto switchD_00fdbde9_caseD_3;
          }
          goto switchD_00fdbde9_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00fdbde9_caseD_2;
          case 3:
            goto switchD_00fdbde9_caseD_3;
          }
          goto switchD_00fdbde9_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00fdbde9_caseD_2;
          case 3:
            goto switchD_00fdbde9_caseD_3;
          }
          goto switchD_00fdbde9_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar4[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar4[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar4[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar4[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar4[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar4[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar4[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar4 = puVar4 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_00fdbde9_caseD_1:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_00fdbde9_caseD_2:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_00fdbde9_caseD_3:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_00fdbde9_caseD_0:
  return _Dst;
}

// 00FDC0F1  _strncpy_s  size=181  [run]
/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  rsize_t rVar5;
  errno_t eStack_14;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
    }
    else {
LAB_00fdc117:
      if (_SizeInBytes != 0) {
        if (_MaxCount == 0) {
          *_Dst = '\0';
          return 0;
        }
        if (_Src != (char *)0x0) {
          rVar5 = _SizeInBytes;
          if (_MaxCount == 0xffffffff) {
            iVar4 = (int)_Dst - (int)_Src;
            do {
              cVar1 = *_Src;
              _Src[iVar4] = cVar1;
              _Src = _Src + 1;
              if (cVar1 == '\0') break;
              rVar5 = rVar5 - 1;
            } while (rVar5 != 0);
          }
          else {
            pcVar3 = _Dst;
            do {
              cVar1 = pcVar3[(int)_Src - (int)_Dst];
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              if ((cVar1 == '\0') || (rVar5 = rVar5 - 1, rVar5 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pcVar3 = '\0';
            }
          }
          if (rVar5 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInBytes - 1] = '\0';
            return 0x50;
          }
          *_Dst = '\0';
          piVar2 = __errno();
          eStack_14 = 0x22;
          *piVar2 = 0x22;
          goto LAB_00fdc128;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_00fdc117;
  piVar2 = __errno();
  eStack_14 = 0x16;
  *piVar2 = 0x16;
LAB_00fdc128:
  FUN_00fe56c2();
  return eStack_14;
}

// 00FDC1B0  _pow  size=72  [run]
/* Library Function - Single Match
    _pow
   
   Libraries: Visual Studio 2010, Visual Studio 2012, Visual Studio 2015 */

double __cdecl _pow(double _X,double _Y)

{
  ushort in_FPUControlWord;
  float10 fVar1;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    fVar1 = (float10)FUN_00fe8df9();
    return (double)fVar1;
  }
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 00FDC1F0  FUN_00fdc1f0  size=84  [run]
void FUN_00fdc1f0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00fe8de0();
    return;
  }
  FUN_00fdc24d((double)in_ST1,(double)in_ST0);
  return;
}

// 00FDC24D  FUN_00fdc24d  size=78  [run]
void FUN_00fdc24d(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint in_EAX;
  uint extraout_ECX;
  uint uVar1;
  short in_FPUControlWord;
  
  uVar1 = in_EAX;
  if (in_FPUControlWord != 0x27f) {
    in_EAX = FUN_00fe9d85();
    uVar1 = extraout_ECX;
  }
  if ((uVar1 & 0x7ff00000) != 0x7ff00000) {
                    /* WARNING: Subroutine does not return */
    __fload_withFB();
  }
  if ((in_EAX & 0xfffff) == 0 && param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    __fload_withFB();
  }
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 00FDC43A  _strcpy_s  size=95  [run]
/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  errno_t eStack_10;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    if (_Src != (char *)0x0) {
      iVar3 = (int)_Dst - (int)_Src;
      do {
        cVar1 = *_Src;
        _Src[iVar3] = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      piVar2 = __errno();
      eStack_10 = 0x22;
      *piVar2 = 0x22;
      goto LAB_00fdc459;
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  eStack_10 = 0x16;
  *piVar2 = 0x16;
LAB_00fdc459:
  FUN_00fe56c2();
  return eStack_10;
}

// 00FDC4A0  FID_conflict:_cos  size=72  [run]
/* Library Function - Multiple Matches With Different Base Names
    _acos
    _asin
    _atan
    _cos
     8 names - too many to list
   
   Libraries: Visual Studio 2010, Visual Studio 2012, Visual Studio 2015 */

double __cdecl FID_conflict__cos(double _X)

{
  ushort in_FPUControlWord;
  float10 fVar1;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    fVar1 = (float10)FUN_00fea0b8();
    return (double)fVar1;
  }
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 00FDC4E0  FUN_00fdc4e0  size=79  [run]
void FUN_00fdc4e0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00fea0a0();
    return;
  }
  FUN_00fe9df8((double)in_ST0);
  FUN_00fdc538();
  return;
}

// 00FDC538  FUN_00fdc538  size=174  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00fdc538(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = _DAT_016f9690, param_1 != 0)) {
      fVar1 = (float10)FUN_00fe9d9c();
    }
LAB_00fdc5c7:
    if (DAT_01f8ef44 == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_00fe9d85();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else {
      fVar1 = _DAT_016f9690;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_00fdc5c7;
      if ((param_2 & 0x80000000) == 0) {
        fVar1 = (float10)0;
      }
      else {
        fVar1 = (float10)3.141592653589793;
      }
    }
    if (DAT_01f8ef44 == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}

// 00FDC5E6  _sprintf  size=132  [run]
/* Library Function - Single Match
    _sprintf
   
   Library: Visual Studio 2010 Release */

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  int *piVar1;
  int iVar2;
  char **ppcVar3;
  FILE local_24;
  
  local_24._ptr = (char *)0x0;
  ppcVar3 = (char **)&local_24._cnt;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppcVar3 = (char *)0x0;
    ppcVar3 = ppcVar3 + 1;
  }
  if ((_Format == (char *)0x0) || (_Dest == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    iVar2 = -1;
  }
  else {
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = FUN_00fe5800(&local_24,_Format,0,&stack0x0000000c);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}

// 00FDC66A  __sprintf_l  size=28  [run]
/* Library Function - Single Match
    __sprintf_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __sprintf_l(char *_DstBuf,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = __vsprintf_l(_DstBuf,_Format,_Locale,&stack0x00000010);
  return iVar1;
}

// 00FDC686  _sprintf_s  size=30  [run]
/* Library Function - Single Match
    _sprintf_s
   
   Library: Visual Studio 2010 Release */

int __cdecl _sprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,...)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_SizeInBytes,_Format,(_locale_t)0x0,&stack0x00000010);
  return iVar1;
}

// 00FDC6A4  __sprintf_s_l  size=31  [run]
/* Library Function - Single Match
    __sprintf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __sprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_DstSize,_Format,_Locale,&stack0x00000014);
  return iVar1;
}

// 00FDC6C3  __snprintf_s  size=33  [run]
/* Library Function - Single Match
    __snprintf_s
   
   Library: Visual Studio 2010 Release */

int __cdecl __snprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,...)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_SizeInBytes,_MaxCount,_Format,(_locale_t)0x0,&stack0x00000014);
  return iVar1;
}

// 00FDC6E4  __snprintf_s_l  size=34  [run]
/* Library Function - Single Match
    __snprintf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
__snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_DstSize,_MaxCount,_Format,_Locale,&stack0x00000018);
  return iVar1;
}

// 00FDC706  FUN_00fdc706  size=30  [run]
void FUN_00fdc706(char *param_1,size_t param_2,char *param_3)

{
  __vsprintf_p_l(param_1,param_2,param_3,(_locale_t)0x0,&stack0x00000010);
  return;
}

// 00FDC724  FUN_00fdc724  size=31  [run]
void FUN_00fdc724(char *param_1,size_t param_2,char *param_3,_locale_t param_4)

{
  __vsprintf_p_l(param_1,param_2,param_3,param_4,&stack0x00000014);
  return;
}

// 00FDC743  FUN_00fdc743  size=21  [run]
void FUN_00fdc743(wchar_t *param_1)

{
  FID_conflict___vscprintf_p(param_1,&stack0x00000008);
  return;
}

// 00FDC758  FUN_00fdc758  size=21  [run]
void FUN_00fdc758(wchar_t *param_1)

{
  FID_conflict___vscprintf_p(param_1,&stack0x00000008);
  return;
}

// 00FDC76D  FUN_00fdc76d  size=25  [run]
void FUN_00fdc76d(wchar_t *param_1,_locale_t param_2)

{
  FID_conflict___vscprintf_p_l(param_1,param_2,&stack0x0000000c);
  return;
}

// 00FDC786  FUN_00fdc786  size=25  [run]
void FUN_00fdc786(wchar_t *param_1,_locale_t param_2)

{
  FID_conflict___vscprintf_p_l(param_1,param_2,&stack0x0000000c);
  return;
}

// 00FDC7B0  FUN_00fdc7b0  size=190  [run]
uint * FUN_00fdc7b0(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}

// 00FDC8B0  FUN_00fdc8b0  size=79  [run]
void FUN_00fdc8b0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00fea760();
    return;
  }
  FUN_00fe9df8((double)in_ST0);
  FUN_00fdc908();
  return;
}

// 00FDC908  FUN_00fdc908  size=174  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00fdc908(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = _DAT_016f9690, param_1 != 0)) {
      fVar1 = (float10)FUN_00fe9d9c();
    }
LAB_00fdc997:
    if (DAT_01f8ef44 == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_00fe9d85();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else {
      fVar1 = _DAT_016f9690;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_00fdc997;
      fVar1 = _DAT_016f969a;
      if ((param_2 & 0x80000000) != 0) {
        fVar1 = -_DAT_016f969a;
      }
    }
    if (DAT_01f8ef44 == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}

// 00FDC9C0  __alloca_probe  size=43  [run]
/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio 2010 Release */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}

// 00FDC9F0  FID_conflict:_memcpy  size=708  [run]
/* Library Function - Multiple Matches With Different Base Names
    _memcpy
    _memmove
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar5 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar5 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar5 = puVar5 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_00fdcbcf_caseD_2;
        case 3:
          goto switchD_00fdcbcf_caseD_3;
        }
        goto switchD_00fdcbcf_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_00fdcbcf_caseD_0;
      case 1:
        goto switchD_00fdcbcf_caseD_1;
      case 2:
        goto switchD_00fdcbcf_caseD_2;
      case 3:
        goto switchD_00fdcbcf_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar5 & 3);
        switch((uint)puVar5 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
          uVar2 = uVar2 >> 2;
          puVar5 = (undefined4 *)((int)puVar5 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00fdcbcf_caseD_2;
            case 3:
              goto switchD_00fdcbcf_caseD_3;
            }
            goto switchD_00fdcbcf_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          puVar4 = (undefined4 *)((int)puVar4 + -2);
          puVar5 = (undefined4 *)((int)puVar5 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00fdcbcf_caseD_2;
            case 3:
              goto switchD_00fdcbcf_caseD_3;
            }
            goto switchD_00fdcbcf_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
          *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + -3);
          puVar5 = (undefined4 *)((int)puVar5 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + -1;
              puVar5 = puVar5 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_00fdcbcf_caseD_2;
            case 3:
              goto switchD_00fdcbcf_caseD_3;
            }
            goto switchD_00fdcbcf_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar5[7 - uVar2] = puVar4[7 - uVar2];
    case 6:
      puVar5[6 - uVar2] = puVar4[6 - uVar2];
    case 5:
      puVar5[5 - uVar2] = puVar4[5 - uVar2];
    case 4:
      puVar5[4 - uVar2] = puVar4[4 - uVar2];
    case 3:
      puVar5[3 - uVar2] = puVar4[3 - uVar2];
    case 2:
      puVar5[2 - uVar2] = puVar4[2 - uVar2];
    case 1:
      puVar5[1 - uVar2] = puVar4[1 - uVar2];
      puVar4 = puVar4 + -uVar2;
      puVar5 = puVar5 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_00fdcbcf_caseD_1:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      return _Dst;
    case 2:
switchD_00fdcbcf_caseD_2:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      return _Dst;
    case 3:
switchD_00fdcbcf_caseD_3:
      *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar4 + 3);
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return _Dst;
    }
switchD_00fdcbcf_caseD_0:
    return _Dst;
  }
  if (((0x7f < _Size) && (DAT_0225d0a8 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    pvVar1 = (void *)FUN_00fe8ca9();
    return pvVar1;
  }
  puVar4 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar4 = puVar4 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_00fdca49_caseD_2;
      case 3:
        goto switchD_00fdca49_caseD_3;
      }
      goto switchD_00fdca49_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_00fdca49_caseD_0;
    case 1:
      goto switchD_00fdca49_caseD_1;
    case 2:
      goto switchD_00fdca49_caseD_2;
    case 3:
      goto switchD_00fdca49_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar4 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00fdca49_caseD_2;
          case 3:
            goto switchD_00fdca49_caseD_3;
          }
          goto switchD_00fdca49_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar4 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00fdca49_caseD_2;
          case 3:
            goto switchD_00fdca49_caseD_3;
          }
          goto switchD_00fdca49_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar4 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar4 = puVar4 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_00fdca49_caseD_2;
          case 3:
            goto switchD_00fdca49_caseD_3;
          }
          goto switchD_00fdca49_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar4[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar4[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar4[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar4[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar4[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar4[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar4[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar4 = puVar4 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_00fdca49_caseD_1:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_00fdca49_caseD_2:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_00fdca49_caseD_3:
    *(undefined1 *)puVar4 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_00fdca49_caseD_0:
  return _Dst;
}

// 00FDCD51  _LocaleUpdate::_LocaleUpdate  size=135  [run]
/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2010 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)(this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)(this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_018e91b8) && ((p_Var2->_ownlocale & DAT_018e8f70) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_018e8e78) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_018e8f70) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)(this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)(this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
    }
  }
  else {
    *(pthreadlocinfo *)this = param_1->locinfo;
    *(pthreadmbcinfo *)(this + 4) = param_1->mbcinfo;
  }
  return this;
}

// 00FDCDE9  strtoxl  size=555  [run]
/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2010 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  localeinfo_struct local_20;
  int local_18;
  char local_14;
  uint local_c;
  uint local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_20,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00fe56c2();
    if (local_14 != '\0') {
      *(uint *)(local_18 + 0x70) = *(uint *)(local_18 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  local_8 = 0;
  bVar8 = *param_2;
  ptVar5 = local_20.locinfo;
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if ((int)ptVar5->locale_name[3] < 2) {
      uVar4 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2) & 8;
    }
    else {
      uVar4 = __isctype_l((uint)bVar8,8,&local_20);
      ptVar5 = local_20.locinfo;
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_00fdce9a:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_00fdce9a;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char **)0x0) {
      *param_3 = param_2;
    }
    if (local_14 != '\0') {
      *(uint *)(local_18 + 0x70) = *(uint *)(local_18 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_00fdcf02;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_00fdcf02;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_00fdcf02;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_00fdcf02:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  local_c = (uint)(0xffffffff % (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_00fdcf61:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            pbVar9 = (byte *)param_2;
          }
          local_8 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          piVar3 = __errno();
          *piVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            local_8 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          local_8 = -local_8;
        }
        if (local_14 == '\0') {
          return local_8;
        }
        *(uint *)(local_18 + 0x70) = *(uint *)(local_18 + 0x70) & 0xfffffffd;
        return local_8;
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_00fdcf61;
    if ((local_8 < uVar4) || ((local_8 == uVar4 && (uVar6 <= local_c)))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_00fdcf61;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}

// 00FDD014  _strtol  size=43  [run]
/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2010 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_01f8ef68 == 0) {
    ppuVar2 = &PTR_DAT_018e91bc;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}

// 00FDD03F  __strtol_l  size=29  [run]
/* Library Function - Single Match
    __strtol_l
   
   Library: Visual Studio 2010 Release */

long __cdecl __strtol_l(char *_Str,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  ulong uVar1;
  
  uVar1 = strtoxl(_Locale,_Str,_EndPtr,_Radix,0);
  return uVar1;
}

// 00FDD05C  _strtoul  size=44  [run]
/* Library Function - Single Match
    _strtoul
   
   Library: Visual Studio 2010 Release */

ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_01f8ef68 == 0) {
    ppuVar2 = &PTR_DAT_018e91bc;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}

// 00FDD088  __strtoul_l  size=29  [run]
/* Library Function - Single Match
    __strtoul_l
   
   Library: Visual Studio 2010 Release */

ulong __cdecl __strtoul_l(char *_Str,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  ulong uVar1;
  
  uVar1 = strtoxl(_Locale,_Str,_EndPtr,_Radix,1);
  return uVar1;
}

// 00FDD0B0  _strrchr  size=45  [run]
/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2010 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}

// 00FDD0DD  FUN_00fdd0dd  size=13  [run]
int FUN_00fdd0dd(int param_1)

{
  return param_1 + -0x20;
}

// 00FDD0EA  __toupper_l  size=278  [run]
/* Library Function - Single Match
    __toupper_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __toupper_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2) & 2;
    }
    else {
      uVar2 = __isctype_l(_C,2,&local_1c);
    }
    if (uVar2 == 0) {
LAB_00fdd149:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].refcount + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      piVar4 = __errno();
      *piVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x200,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_00fdd149;
    uVar2 = (uint)local_c;
    if (iVar3 != 1) {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}

// 00FDD200  _toupper  size=44  [run]
/* Library Function - Single Match
    _toupper
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _toupper(int _C)

{
  if (DAT_01f8ef68 == 0) {
    if (_C - 0x61U < 0x1a) {
      return _C + -0x20;
    }
  }
  else {
    _C = __toupper_l(_C,(_locale_t)0x0);
  }
  return _C;
}

// 00FDD22C  _strtok_s  size=224  [run]
/* Library Function - Single Match
    _strtok_s
   
   Library: Visual Studio 2010 Release */

char * __cdecl _strtok_s(char *_Str,char *_Delim,char **_Context)

{
  byte bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  if (((_Context == (char **)0x0) || (_Delim == (char *)0x0)) ||
     ((_Str == (char *)0x0 && (*_Context == (char *)0x0)))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
  }
  else {
    pbVar5 = local_28;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5 = pbVar5 + 4;
    }
    do {
      bVar1 = *_Delim;
      local_28[bVar1 >> 3] = local_28[bVar1 >> 3] | '\x01' << (bVar1 & 7);
      _Delim = _Delim + 1;
    } while (bVar1 != 0);
    if (_Str == (char *)0x0) {
      _Str = *_Context;
    }
    for (; (bVar1 = *_Str, (local_28[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0 && (bVar1 != 0));
        _Str = _Str + 1) {
    }
    for (; *_Str != 0; _Str = _Str + 1) {
      if ((local_28[(byte)*_Str >> 3] & (byte)(1 << (*_Str & 7U))) != 0) {
        *_Str = 0;
        _Str = _Str + 1;
        break;
      }
    }
    *_Context = _Str;
  }
  pcVar3 = (char *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pcVar3;
}

// 00FDD30C  _atol  size=22  [run]
/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2010 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}

// 00FDD322  FUN_00fdd322  size=25  [run]
void FUN_00fdd322(char *param_1,_locale_t param_2)

{
  __strtol_l(param_1,(char **)0x0,10,param_2);
  return;
}

// 00FDD33B  FUN_00fdd33b  size=11  [run]
void FUN_00fdd33b(char *param_1)

{
  _atol(param_1);
  return;
}

// 00FDD346  FUN_00fdd346  size=11  [run]
void FUN_00fdd346(void)

{
  FUN_00fdd322();
  return;
}

// 00FDD351  FUN_00fdd351  size=22  [run]
longlong FUN_00fdd351(char *param_1)

{
  longlong lVar1;
  
  lVar1 = __strtoi64(param_1,(char **)0x0,10);
  return lVar1;
}

// 00FDD367  FUN_00fdd367  size=25  [run]
longlong FUN_00fdd367(char *param_1,_locale_t param_2)

{
  longlong lVar1;
  
  lVar1 = __strtoi64_l(param_1,(char **)0x0,10,param_2);
  return lVar1;
}

// 00FDD380  _strncmp  size=192  [run]
/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2010 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (_MaxCount != 0) {
    if ((3 < _MaxCount) && (pbVar1 = (byte *)_Str1, pbVar3 = (byte *)_Str2, _MaxCount != 4)) {
      do {
        _Str1 = (char *)(pbVar1 + 4);
        _Str2 = (char *)(pbVar3 + 4);
        if ((*pbVar1 == 0) || (*pbVar1 != *pbVar3)) {
          uVar2 = (uint)*pbVar1;
          uVar4 = (uint)*pbVar3;
          goto LAB_00fdd43c;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_00fdd43c;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_00fdd43c;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_00fdd43c;
        }
        local_8 = local_8 + 4;
        pbVar1 = (byte *)_Str1;
        pbVar3 = (byte *)_Str2;
      } while (local_8 < _MaxCount - 4);
    }
    for (; local_8 < _MaxCount; local_8 = local_8 + 1) {
      if ((*_Str1 == 0) || (*_Str1 != *_Str2)) {
        uVar2 = (uint)(byte)*_Str1;
        uVar4 = (uint)(byte)*_Str2;
LAB_00fdd43c:
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}

// 00FDD440  ___ascii_stricmp  size=57  [run]
/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2010 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = _Str1 + 1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = _Str2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}

// 00FDD479  __stricmp_l  size=192  [run]
/* Library Function - Single Match
    __stricmp_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
    }
    else {
      iVar4 = (int)_Str1 - (int)_Str2;
      do {
        iVar2 = __tolower_l((uint)(byte)_Str2[iVar4],&local_14);
        iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
        _Str2 = _Str2 + 1;
        if (iVar2 == 0) break;
      } while (iVar2 == iVar3);
      iVar2 = iVar2 - iVar3;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar2;
}

// 00FDD539  __stricmp  size=71  [run]
/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2010 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_01f8ef68 != 0) {
    iVar2 = __stricmp_l(_Str1,_Str2,(_locale_t)0x0);
    return iVar2;
  }
  if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
    iVar2 = ___ascii_stricmp(_Str1,_Str2);
    return iVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00fe56c2();
  return 0x7fffffff;
}

// 00FDD580  __invoke_watson_if_error  size=33  [run]
/* Library Function - Single Match
    __invoke_watson_if_error
   
   Library: Visual Studio 2010 Release */

void __cdecl
__invoke_watson_if_error
          (errno_t _ExpressionError,wchar_t *_Expression,wchar_t *_Function,wchar_t *_File,
          uint _Line,uintptr_t _Reserved)

{
  if (_ExpressionError != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
  }
  return;
}

// 00FDD5A1  __getenv_helper_nolock  size=135  [run]
/* Library Function - Single Match
    __getenv_helper_nolock
   
   Library: Visual Studio 2010 Release */

char * __cdecl __getenv_helper_nolock(char *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_0225d0ac != 0) &&
      ((DAT_01f8f5b8 != (int *)0x0 ||
       (((DAT_01f8f5c0 != 0 && (iVar1 = ___wtomb_environ(), iVar1 == 0)) &&
        (DAT_01f8f5b8 != (int *)0x0)))))) && (piVar3 = DAT_01f8f5b8, param_1 != (char *)0x0)) {
    _MaxCount = _strlen(param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,(uchar *)param_1,_MaxCount), iVar1 == 0)) {
        return (char *)(*piVar3 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}

// 00FDD628  FUN_00fdd628  size=138  [run]
undefined4 FUN_00fdd628(char *param_1,uint param_2,char *param_3)

{
  uint *in_EAX;
  int *piVar1;
  char *_Str;
  size_t sVar2;
  errno_t eVar3;
  
  if (in_EAX != (uint *)0x0) {
    *in_EAX = 0;
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) goto LAB_00fdd65f;
    }
    else if (param_2 != 0) {
LAB_00fdd65f:
      if (param_1 != (char *)0x0) {
        *param_1 = '\0';
      }
      _Str = __getenv_helper_nolock(param_3);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        *in_EAX = sVar2 + 1;
        if (param_2 != 0) {
          if (param_2 < sVar2 + 1) {
            return 0x22;
          }
          eVar3 = _strcpy_s(param_1,param_2,_Str);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00fe56c2();
  return 0x16;
}

// 00FDD6B3  FUN_00fdd6b3  size=155  [run]
int FUN_00fdd6b3(size_t *param_1,char *param_2)

{
  undefined4 *in_EAX;
  int *piVar1;
  char *_Str;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = 0;
    if (param_1 != (size_t *)0x0) {
      *param_1 = 0;
    }
    if (param_2 != (char *)0x0) {
      _Str = __getenv_helper_nolock(param_2);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        sVar2 = sVar2 + 1;
        _Dst = _calloc(sVar2,1);
        *in_EAX = _Dst;
        if (_Dst == (char *)0x0) {
          piVar1 = __errno();
          *piVar1 = 0xc;
          piVar1 = __errno();
          return *piVar1;
        }
        eVar3 = _strcpy_s(_Dst,sVar2,_Str);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (param_1 != (size_t *)0x0) {
          *param_1 = sVar2;
        }
      }
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00fe56c2();
  return 0x16;
}

// 00FDD7C9  _getenv_s  size=196  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _getenv_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _getenv_s(size_t *_ReturnSize,char *_DstBuf,rsize_t _DstSize,char *_VarName)

{
  bool bVar1;
  int *piVar2;
  char *_Str;
  size_t sVar3;
  errno_t eVar4;
  undefined4 local_20;
  
  __lock(7);
  if (_ReturnSize != (size_t *)0x0) {
    *_ReturnSize = 0;
    if (_DstBuf == (char *)0x0) {
LAB_00fdd816:
      if (_DstSize == 0) goto LAB_00fdd81b;
LAB_00fdd820:
      bVar1 = false;
    }
    else {
      if (_DstSize == 0) {
        if (_DstBuf == (char *)0x0) goto LAB_00fdd816;
        goto LAB_00fdd820;
      }
LAB_00fdd81b:
      bVar1 = true;
    }
    if (bVar1) {
      if (_DstBuf != (char *)0x0) {
        *_DstBuf = '\0';
      }
      _Str = __getenv_helper_nolock(_VarName);
      if (_Str != (char *)0x0) {
        sVar3 = _strlen(_Str);
        *_ReturnSize = sVar3 + 1;
        if (_DstSize != 0) {
          if (_DstSize < sVar3 + 1) {
            local_20 = 0x22;
            goto LAB_00fdd86e;
          }
          eVar4 = _strcpy_s(_DstBuf,_DstSize,_Str);
          if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      local_20 = 0;
      goto LAB_00fdd86e;
    }
  }
  piVar2 = __errno();
  *piVar2 = 0x16;
  FUN_00fe56c2();
  local_20 = 0x16;
LAB_00fdd86e:
  FUN_00fdd88d();
  return local_20;
}

// 00FDD88D  FUN_00fdd88d  size=9  [run]
void FUN_00fdd88d(void)

{
  FUN_00fec3c5(7);
  return;
}

// 00FDD96D  __splitpath_s  size=509  [run]
/* Library Function - Single Match
    __splitpath_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
__splitpath_s(char *_FullPath,char *_Drive,size_t _DriveSize,char *_Dir,size_t _DirSize,
             char *_Filename,size_t _FilenameSize,char *_Ext,size_t _ExtSize)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *_Src;
  char *pcVar5;
  char *pcVar6;
  errno_t eVar7;
  
  bVar2 = false;
  if (_FullPath != (char *)0x0) {
    if (_Drive == (char *)0x0) {
      if (_DriveSize == 0) {
LAB_00fdd997:
        if (_Dir == (char *)0x0) {
          if (_DirSize == 0) {
LAB_00fdd9a8:
            if (_Filename == (char *)0x0) {
              if (_FilenameSize == 0) {
LAB_00fdd9b9:
                if (_Ext == (char *)0x0) {
                  if (_ExtSize == 0) {
LAB_00fdd9c3:
                    iVar3 = 1;
                    pcVar5 = _FullPath;
                    do {
                      if (*pcVar5 == '\0') break;
                      iVar3 = iVar3 + -1;
                      pcVar5 = pcVar5 + 1;
                    } while (iVar3 != 0);
                    if (*pcVar5 == ':') {
                      if (_Drive != (char *)0x0) {
                        if (_DriveSize < 3) goto LAB_00fddb08;
                        _strncpy_s(_Drive,_DriveSize,_FullPath,2);
                      }
                      _FullPath = pcVar5 + 1;
                    }
                    else if (_Drive != (char *)0x0) {
                      *_Drive = '\0';
                    }
                    pcVar5 = (char *)0x0;
                    _Src = (char *)0x0;
                    pcVar6 = _FullPath;
                    if (*_FullPath == '\0') {
LAB_00fdda80:
                      pcVar5 = _FullPath;
                      if (_Dir != (char *)0x0) {
                        *_Dir = '\0';
                      }
                    }
                    else {
                      do {
                        iVar3 = __ismbblead((int)*pcVar6);
                        if (iVar3 == 0) {
                          cVar1 = *pcVar6;
                          if ((cVar1 == '/') || (cVar1 == '\\')) {
                            pcVar5 = pcVar6 + 1;
                          }
                          else if (cVar1 == '.') {
                            _Src = pcVar6;
                          }
                        }
                        else {
                          pcVar6 = pcVar6 + 1;
                        }
                        pcVar6 = pcVar6 + 1;
                      } while (*pcVar6 != '\0');
                      if (pcVar5 == (char *)0x0) goto LAB_00fdda80;
                      if (_Dir != (char *)0x0) {
                        if (_DirSize <= (uint)((int)pcVar5 - (int)_FullPath)) goto LAB_00fddb08;
                        _strncpy_s(_Dir,_DirSize,_FullPath,(int)pcVar5 - (int)_FullPath);
                      }
                    }
                    _FullPath = pcVar5;
                    if ((_Src == (char *)0x0) || (_Src < _FullPath)) {
                      if (_Filename != (char *)0x0) {
                        if (_FilenameSize <= (uint)((int)pcVar6 - (int)_FullPath))
                        goto LAB_00fddb08;
                        _strncpy_s(_Filename,_FilenameSize,_FullPath,(int)pcVar6 - (int)_FullPath);
                      }
                      if (_Ext != (char *)0x0) {
                        *_Ext = '\0';
                      }
                      return 0;
                    }
                    if (_Filename != (char *)0x0) {
                      if (_FilenameSize <= (uint)((int)_Src - (int)_FullPath)) goto LAB_00fddb08;
                      _strncpy_s(_Filename,_FilenameSize,_FullPath,(int)_Src - (int)_FullPath);
                    }
                    if (_Ext == (char *)0x0) {
                      return 0;
                    }
                    if ((uint)((int)pcVar6 - (int)_Src) < _ExtSize) {
                      _strncpy_s(_Ext,_ExtSize,_Src,(int)pcVar6 - (int)_Src);
                      return 0;
                    }
                    goto LAB_00fddb08;
                  }
                }
                else if (_ExtSize != 0) goto LAB_00fdd9c3;
              }
            }
            else if (_FilenameSize != 0) goto LAB_00fdd9b9;
          }
        }
        else if (_DirSize != 0) goto LAB_00fdd9a8;
      }
    }
    else if (_DriveSize != 0) goto LAB_00fdd997;
  }
  bVar2 = true;
LAB_00fddb08:
  if ((_Drive != (char *)0x0) && (_DriveSize != 0)) {
    *_Drive = '\0';
  }
  if ((_Dir != (char *)0x0) && (_DirSize != 0)) {
    *_Dir = '\0';
  }
  if ((_Filename != (char *)0x0) && (_FilenameSize != 0)) {
    *_Filename = '\0';
  }
  if ((_Ext != (char *)0x0) && (_ExtSize != 0)) {
    *_Ext = '\0';
  }
  piVar4 = __errno();
  if ((_FullPath == (char *)0x0) || (bVar2)) {
    eVar7 = 0x16;
    *piVar4 = 0x16;
    FUN_00fe56c2();
  }
  else {
    eVar7 = 0x22;
    *piVar4 = 0x22;
  }
  return eVar7;
}

// 00FDDB6A  FID_conflict:_wprintf  size=148  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _printf
    _wprintf
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__wprintf(char *_Format,...)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    iVar2 = -1;
  }
  else {
    iVar3 = FUN_00fec7c3();
    __lock_file2(1,(void *)(iVar3 + 0x20));
    iVar3 = FUN_00fec7c3();
    iVar3 = __stbuf((FILE *)(iVar3 + 0x20));
    iVar4 = FUN_00fec7c3(_Format,0,&stack0x00000008);
    iVar2 = FUN_00fe5800(iVar4 + 0x20);
    iVar4 = FUN_00fec7c3();
    __ftbuf(iVar3,(FILE *)(iVar4 + 0x20));
    FUN_00fddbfe();
  }
  return iVar2;
}

// 00FDDBFE  FUN_00fddbfe  size=19  [run]
void FUN_00fddbfe(void)

{
  int iVar1;
  
  iVar1 = FUN_00fec7c3();
  __unlock_file2(1,(void *)(iVar1 + 0x20));
  return;
}

// 00FDDC11  FUN_00fddc11  size=25  [run]
void FUN_00fddc11(wchar_t *param_1,_locale_t param_2)

{
  FID_conflict___vwprintf_s_l(param_1,param_2,&stack0x0000000c);
  return;
}

// 00FDDC2A  FUN_00fddc2a  size=25  [run]
void FUN_00fddc2a(wchar_t *param_1,_locale_t param_2)

{
  FID_conflict___vwprintf_s_l(param_1,param_2,&stack0x0000000c);
  return;
}

// 00FDDC43  FUN_00fddc43  size=24  [run]
void FUN_00fddc43(wchar_t *param_1)

{
  FID_conflict___vwprintf_s_l(param_1,(_locale_t)0x0,&stack0x00000008);
  return;
}

// 00FDDC5B  FUN_00fddc5b  size=25  [run]
void FUN_00fddc5b(wchar_t *param_1,_locale_t param_2)

{
  FID_conflict___vwprintf_s_l(param_1,param_2,&stack0x0000000c);
  return;
}

// 00FDDC74  FUN_00fddc74  size=24  [run]
void FUN_00fddc74(wchar_t *param_1)

{
  FID_conflict___vwprintf_s_l(param_1,(_locale_t)0x0,&stack0x00000008);
  return;
}

// 00FDDC8C  __set_printf_count_output  size=42  [run]
/* Library Function - Single Match
    __set_printf_count_output
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __set_printf_count_output(int _Value)

{
  bool bVar1;
  
  bVar1 = DAT_01f8ef4c == (DAT_018e8764 | 1);
  DAT_01f8ef4c = -(uint)(_Value != 0) & (DAT_018e8764 | 1);
  return (uint)bVar1;
}

// 00FDDCB6  FUN_00fddcb6  size=22  [run]
bool FUN_00fddcb6(void)

{
  return DAT_01f8ef4c == (DAT_018e8764 | 1);
}

// 00FDDCCC  FUN_00fddccc  size=14  [run]
int FUN_00fddccc(int param_1,int param_2)

{
  return param_1 / param_2;
}

// 00FDDCE0  FUN_00fddce0  size=289  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00fddce0(double param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    uVar6 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
    if ((uVar1 & 0x800) == 0) {
      if (uVar1 < 0x3ff) {
        return (float10)0;
      }
      if (uVar1 < 0x433) {
        return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
      }
    }
    else {
      dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
      if (uVar1 < 0xbff) {
        return (float10)(double)((-(ulonglong)(param_1 < -0.0) | (ulonglong)DAT_016f4710) &
                                0xbff0000000000000);
      }
      if (uVar1 < 0xc33) {
        return (float10)(dVar5 - (double)(-(ulonglong)(param_1 < dVar5) & 0x3ff0000000000000));
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ed);
    }
    return (float10)param_1;
  }
  uVar2 = __ctrlfp(DAT_018e9570,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp(uVar2,0xffff);
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = (float10)__handle_qnan1();
        return fVar4;
      }
    }
    dVar5 = param_1 + 1.0;
    uVar7 = 8;
  }
  else {
    fVar4 = (float10)__frnd(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20));
    dVar5 = (double)fVar4;
    if ((param_1 == dVar5) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      return (float10)dVar5;
    }
    uVar7 = 0x10;
  }
  fVar4 = (float10)__except1(uVar7,0xb,param_1,dVar5,uVar2);
                    /* WARNING: Read-only address (ram,0x016f4710) is written */
  return fVar4;
}

// 00FDDE40  shortsort  size=123  [run]
/* Library Function - Single Match
    _shortsort
   
   Library: Visual Studio 2010 Release */

void __cdecl shortsort(undefined1 *param_1,int param_2,code *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *in_EAX;
  int iVar3;
  undefined1 *puVar4;
  
  for (; puVar2 = param_1, puVar4 = param_1, param_1 < in_EAX; in_EAX = in_EAX + -param_2) {
    while (puVar4 = puVar4 + param_2, puVar4 <= in_EAX) {
      iVar3 = (*param_3)(puVar4,puVar2);
      if (0 < iVar3) {
        puVar2 = puVar4;
      }
    }
    if ((puVar2 != in_EAX) && (param_2 != 0)) {
      puVar4 = in_EAX;
      iVar3 = param_2;
      do {
        uVar1 = puVar4[(int)puVar2 - (int)in_EAX];
        puVar4[(int)puVar2 - (int)in_EAX] = *puVar4;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

// 00FDDED0  _qsort  size=645  [run]
/* Library Function - Single Match
    _qsort
   
   Library: Visual Studio 2010 Release */

void __cdecl
_qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  undefined1 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  size_t sVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 auStack_104 [30];
  undefined4 auStack_8c [30];
  size_t local_14;
  int local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  
  if ((_Base == (void *)0x0) && (_NumOfElements != 0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
    return;
  }
  if ((_SizeOfElements == 0) || (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
  }
  else if (1 < _NumOfElements) {
    local_10 = 0;
    local_8 = _Base;
    local_c = (undefined1 *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
LAB_00fddf40:
    while (puVar7 = local_8, puVar10 = local_c,
          uVar3 = (uint)((int)local_c - (int)local_8) / _SizeOfElements + 1, 8 < uVar3) {
      puVar9 = local_8 + _SizeOfElements * (uVar3 >> 1);
      iVar4 = (*_PtFuncCompare)(local_8,puVar9);
      if ((0 < iVar4) && (puVar7 != puVar9)) {
        puVar5 = puVar9;
        local_14 = _SizeOfElements;
        do {
          local_14 = local_14 - 1;
          uVar1 = puVar5[(int)puVar7 - (int)puVar9];
          puVar5[(int)puVar7 - (int)puVar9] = *puVar5;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (local_14 != 0);
      }
      iVar4 = (*_PtFuncCompare)(puVar7,puVar10);
      puVar5 = puVar7;
      if ((0 < iVar4) && (puVar7 != puVar10)) {
        puVar6 = puVar10;
        sVar8 = _SizeOfElements;
        do {
          uVar1 = puVar6[(int)puVar7 - (int)puVar10];
          puVar6[(int)puVar7 - (int)puVar10] = *puVar6;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
          sVar8 = sVar8 - 1;
          puVar5 = local_8;
        } while (sVar8 != 0);
      }
      iVar4 = (*_PtFuncCompare)(puVar9,puVar10);
      if ((0 < iVar4) && (puVar9 != puVar10)) {
        puVar7 = puVar10;
        sVar8 = _SizeOfElements;
        do {
          uVar1 = puVar7[(int)puVar9 - (int)puVar10];
          puVar7[(int)puVar9 - (int)puVar10] = *puVar7;
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
          sVar8 = sVar8 - 1;
          puVar5 = local_8;
        } while (sVar8 != 0);
      }
LAB_00fde010:
      if (puVar5 < puVar9) {
        do {
          puVar5 = puVar5 + _SizeOfElements;
          if (puVar9 <= puVar5) goto LAB_00fde030;
          iVar4 = (*_PtFuncCompare)(puVar5,puVar9);
        } while (iVar4 < 1);
        if (puVar9 <= puVar5) goto LAB_00fde030;
      }
      else {
LAB_00fde030:
        do {
          puVar5 = puVar5 + _SizeOfElements;
          if (local_c < puVar5) break;
          iVar4 = (*_PtFuncCompare)(puVar5,puVar9);
        } while (iVar4 < 1);
      }
      do {
        puVar10 = puVar10 + -_SizeOfElements;
        if (puVar10 <= puVar9) break;
        iVar4 = (*_PtFuncCompare)(puVar10,puVar9);
      } while (0 < iVar4);
      if (puVar5 <= puVar10) {
        if (puVar5 != puVar10) {
          puVar7 = puVar10;
          local_14 = _SizeOfElements;
          do {
            local_14 = local_14 - 1;
            uVar1 = puVar7[(int)puVar5 - (int)puVar10];
            puVar7[(int)puVar5 - (int)puVar10] = *puVar7;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
          } while (local_14 != 0);
        }
        if (puVar9 == puVar10) {
          puVar9 = puVar5;
        }
        goto LAB_00fde010;
      }
      puVar10 = puVar10 + _SizeOfElements;
      if (puVar9 < puVar10) {
        do {
          puVar10 = puVar10 + -_SizeOfElements;
          if (puVar10 <= puVar9) goto LAB_00fde0b0;
          iVar4 = (*_PtFuncCompare)(puVar10,puVar9);
        } while (iVar4 == 0);
        if (puVar10 <= puVar9) goto LAB_00fde0b0;
      }
      else {
LAB_00fde0b0:
        do {
          puVar10 = puVar10 + -_SizeOfElements;
          if (puVar10 <= local_8) break;
          iVar4 = (*_PtFuncCompare)(puVar10,puVar9);
        } while (iVar4 == 0);
      }
      puVar9 = local_8;
      puVar7 = local_c;
      if ((int)puVar10 - (int)local_8 < (int)local_c - (int)puVar5) goto LAB_00fde103;
      if (local_8 < puVar10) {
        auStack_8c[local_10] = local_8;
        auStack_104[local_10] = puVar10;
        local_10 = local_10 + 1;
      }
      local_8 = puVar5;
      if (puVar7 <= puVar5) goto LAB_00fde131;
    }
    shortsort(local_8,_SizeOfElements,_PtFuncCompare);
    goto LAB_00fde131;
  }
  return;
LAB_00fde103:
  if (puVar5 < local_c) {
    auStack_8c[local_10] = puVar5;
    auStack_104[local_10] = local_c;
    local_10 = local_10 + 1;
  }
  local_c = puVar10;
  if (puVar10 <= puVar9) {
LAB_00fde131:
    local_10 = local_10 + -1;
    if (local_10 < 0) {
      return;
    }
    local_c = (undefined1 *)auStack_104[local_10];
    local_8 = (undefined1 *)auStack_8c[local_10];
  }
  goto LAB_00fddf40;
}

// 00FDE15B  _strcat_s  size=109  [run]
/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  errno_t eStack_10;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        iVar4 = (int)pcVar3 - (int)_Src;
        do {
          cVar1 = *_Src;
          _Src[iVar4] = cVar1;
          _Src = _Src + 1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes != 0) {
          return 0;
        }
        *_Dst = '\0';
        piVar2 = __errno();
        eStack_10 = 0x22;
        *piVar2 = 0x22;
        goto LAB_00fde17a;
      }
    }
    *_Dst = '\0';
  }
  piVar2 = __errno();
  eStack_10 = 0x16;
  *piVar2 = 0x16;
LAB_00fde17a:
  FUN_00fe56c2();
  return eStack_10;
}

// 00FDE1C8  __strnicmp_l  size=226  [run]
/* Library Function - Single Match
    __strnicmp_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar2 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
    if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_00fe56c2();
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
    else if (_MaxCount < 0x80000000) {
      if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
        iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      }
      else {
        iVar4 = (int)_Str1 - (int)_Str2;
        do {
          iVar2 = __tolower_l((uint)(byte)_Str2[iVar4],&local_14);
          iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
          _Str2 = _Str2 + 1;
          _MaxCount = _MaxCount - 1;
          if ((_MaxCount == 0) || (iVar2 == 0)) break;
        } while (iVar2 == iVar3);
        iVar2 = iVar2 - iVar3;
      }
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else {
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_00fe56c2();
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
  }
  return iVar2;
}

// 00FDE2AA  __strnicmp  size=83  [run]
/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2010 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_01f8ef68 != 0) {
    iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
    return iVar2;
  }
  if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
    iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
    return iVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00fe56c2();
  return 0x7fffffff;
}

// 00FDE300  FUN_00fde300  size=285  [run]
float10 FUN_00fde300(double param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    uVar6 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
    if ((uVar1 & 0x800) == 0) {
      dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
      if (uVar1 < 0x3ff) {
        return (float10)(double)(-(ulonglong)(0.0 < param_1) & 0x3ff0000000000000);
      }
      if (uVar1 < 0x433) {
        return (float10)(dVar5 + (double)(-(ulonglong)(dVar5 < param_1) & 0x3ff0000000000000));
      }
    }
    else {
      if (uVar1 < 0xbff) {
        return (float10)-0.0;
      }
      if (uVar1 < 0xc33) {
        return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
      }
    }
    if (NAN(param_1)) {
      ___libm_error_support(&param_1,&param_1,&param_1,0x3ec);
    }
    return (float10)param_1;
  }
  uVar2 = __ctrlfp(DAT_018e9580,0xffff);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp(uVar2,0xffff);
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = (float10)__handle_qnan1();
        return fVar4;
      }
    }
    dVar5 = param_1 + 1.0;
    uVar7 = 8;
  }
  else {
    fVar4 = (float10)__frnd(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20));
    dVar5 = (double)fVar4;
    if ((param_1 == dVar5) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      return (float10)dVar5;
    }
    uVar7 = 0x10;
  }
  fVar4 = (float10)__except1(uVar7,0xc,param_1,dVar5,uVar2);
  return fVar4;
}

// 00FDE41D  __time64  size=81  [run]
/* WARNING: Removing unreachable block (ram,0x00fde454) */
/* Library Function - Single Match
    __time64
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

__time64_t __cdecl __time64(__time64_t *_Time)

{
  longlong lVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  lVar1 = __aulldiv(local_c.dwLowDateTime + 0x2ac18000,
                    local_c.dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < local_c.dwLowDateTime)
                    ,&LAB_00989680,0);
  if (0x793406fff < lVar1) {
    lVar1 = -1;
  }
  if (_Time != (__time64_t *)0x0) {
    *_Time = lVar1;
  }
  return lVar1;
}

// 00FDE46E  _JumpToContinuation  size=45  [run]
/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00fde499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}

// 00FDE4A0  _CallMemberFunction0  size=7  [run]
/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00fde4a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}

// 00FDE4A7  FID_conflict:_CallMemberFunction1  size=7  [run]
/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,code *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00fde4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00FDE4AE  FID_conflict:_CallMemberFunction1  size=7  [run]
/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,code *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00fde4b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00FDE4B5  _UnwindNestedFrames  size=84  [run]
/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2010 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0xfde4e0,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}

// 00FDE509  FID_conflict:___CxxFrameHandler3  size=54  [run]
/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4
FID_conflict____CxxFrameHandler3
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler(param_1,param_2,param_3,param_4);
  return uVar1;
}

// 00FDE53F  FID_conflict:___CxxFrameHandler3  size=54  [run]
/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4
FID_conflict____CxxFrameHandler3
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler(param_1,param_2,param_3,param_4);
  return uVar1;
}

// 00FDE575  FID_conflict:___CxxFrameHandler3  size=54  [run]
/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4
FID_conflict____CxxFrameHandler3
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler(param_1,param_2,param_3,param_4);
  return uVar1;
}

// 00FDE5AB  ___CxxLongjmpUnwind@4  size=31  [run]
/* Library Function - Single Match
    ___CxxLongjmpUnwind@4
   
   Library: Visual Studio 2010 Release */

void ___CxxLongjmpUnwind_4(int param_1)

{
  ___FrameUnwindToState
            (*(undefined4 *)(param_1 + 0x18),0,*(undefined4 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x1c));
  return;
}

// 00FDE5CA  CatchGuardHandler  size=51  [run]
/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl CatchGuardHandler(struct EHExceptionRecord *,struct
   CatchGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
CatchGuardHandler(EHExceptionRecord *param_1,CatchGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  _Var1 = ___InternalCxxFrameHandler
                    (param_1,*(undefined4 *)(param_2 + 0x10),param_3,0,
                     *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x14),param_2,0);
  return _Var1;
}

// 00FDE5FD  _CallSETranslator  size=215  [run]
/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2010 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  int local_3c;
  EHExceptionRecord *local_38;
  void *local_34;
  code *local_30;
  undefined4 *local_2c;
  code *local_28;
  uint local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffc0;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0xfde6a8;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_018e8764 ^ (uint)&local_2c;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_38 = param_1;
    local_34 = param_3;
    p_Var1 = __getptd();
    local_30 = p_Var1->_translator;
    (*local_30)(*(undefined4 *)param_1,&local_38);
    local_3c = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_3c;
}

// 00FDE6D4  TranslatorGuardHandler  size=154  [run]
/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(undefined4 *)(param_2 + 0x10),param_3,0,*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),1);
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00fde76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}

// 00FDE773  _GetRangeOfTrysToCheck  size=115  [run]
/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2010 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  TryBlockMapEntry *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pTVar1 = param_1->pTryBlockMap;
  uVar5 = param_1->nTryBlocks;
  uVar2 = uVar5;
  uVar3 = uVar5;
  while (uVar4 = uVar2, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      _inconsistency();
    }
    uVar5 = uVar5 - 1;
    if (((pTVar1[uVar5].tryHigh < param_3) && (param_3 <= pTVar1[uVar5].catchHigh)) ||
       (uVar2 = uVar4, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar2 = uVar5;
      uVar3 = uVar4;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((param_1->nTryBlocks < uVar3) || (uVar3 < uVar5)) {
    _inconsistency();
  }
  return pTVar1 + uVar5;
}

// 00FDE7E6  __CreateFrameInfo  size=44  [run]
/* Library Function - Single Match
    __CreateFrameInfo
   
   Library: Visual Studio 2010 Release */

undefined4 * __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}

// 00FDE812  __IsExceptionObjectToBeDestroyed  size=39  [run]
/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Library: Visual Studio 2010 Release */

undefined4 __IsExceptionObjectToBeDestroyed(int param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_pFrameInfoChain;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}

// 00FDE839  __FindAndUnlinkFrame  size=82  [run]
/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2010 Release */

void __FindAndUnlinkFrame(void *param_1)

{
  void *pvVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  
  p_Var2 = __getptd();
  if (param_1 == p_Var2->_pFrameInfoChain) {
    p_Var2 = __getptd();
    p_Var2->_pFrameInfoChain = *(void **)((int)param_1 + 4);
  }
  else {
    p_Var2 = __getptd();
    pvVar1 = p_Var2->_pFrameInfoChain;
    do {
      pvVar3 = pvVar1;
      if (*(int *)((int)pvVar3 + 4) == 0) {
        _inconsistency();
        return;
      }
      pvVar1 = *(void **)((int)pvVar3 + 4);
    } while (param_1 != *(void **)((int)pvVar3 + 4));
    *(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)((int)param_1 + 4);
  }
  return;
}

// 00FDE88B  _CallCatchBlock2  size=96  [run]
/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  code *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_018e8764 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = CatchGuardHandler;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}

// 00FDE8EB  __CxxThrowException@8  size=76  [run]
/* Library Function - Single Match
    __CxxThrowException@8
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __CxxThrowException_8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  undefined *local_10;
  undefined4 local_c;
  byte *local_8;
  
  pDVar2 = &DAT_016f4778;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = &DAT_01994000;
  }
  RaiseException(local_24[0],local_24[1],local_14,(ULONG_PTR *)&local_10);
  return;
}

// 00FDE937  FUN_00fde937  size=18  [run]
void FUN_00fde937(ulong param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  p_Var1->_holdrand = param_1;
  return;
}

// 00FDE949  FUN_00fde949  size=33  [run]
uint FUN_00fde949(void)

{
  _ptiddata p_Var1;
  uint uVar2;
  
  p_Var1 = __getptd();
  uVar2 = p_Var1->_holdrand * 0x343fd + 0x269ec3;
  p_Var1->_holdrand = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}

// 00FDE96A  fast_error_exit  size=41  [run]
/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2010 Release */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_01f8ef58 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  ___crtExitProcess(0xff);
  return;
}

// 00FDE9DA  ___tmainCRTStartup  size=319  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00fdea13) */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2010 Release */

int ___tmainCRTStartup(void)

{
  int iVar1;
  undefined4 uVar2;
  _STARTUPINFOW local_6c;
  int local_24;
  int local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_01879d30;
  uStack_c = 0xfde9e6;
  GetStartupInfoW(&local_6c);
  if (DAT_0225d0cc == 0) {
    HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  }
  local_20 = 0;
  iVar1 = __heap_init();
  if (iVar1 == 0) {
    fast_error_exit(0x1c);
  }
  iVar1 = __mtinit();
  if (iVar1 == 0) {
    fast_error_exit(0x10);
  }
  __RTC_Initialize();
  local_8 = (undefined *)0x0;
  iVar1 = __ioinit();
  if (iVar1 < 0) {
    __amsg_exit(0x1b);
  }
  DAT_0225d0c8 = GetCommandLineA();
  DAT_01f8ef50 = ___crtGetEnvironmentStringsA();
  iVar1 = __setargv();
  if (iVar1 < 0) {
    __amsg_exit(8);
  }
  iVar1 = FUN_00fed3ab();
  if (iVar1 < 0) {
    __amsg_exit(9);
  }
  iVar1 = __cinit(1);
  if (iVar1 != 0) {
    __amsg_exit(iVar1);
  }
  uVar2 = __wincmdln();
  if (((byte)local_6c.dwFlags & 1) == 0) {
    local_6c.wShowWindow = 10;
  }
  local_24 = FUN_00a53360(0x400000,0,uVar2,local_6c.wShowWindow);
  if (local_20 != 0) {
    __cexit();
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  _exit(local_24);
}

// 00FDEB47  entry  size=10  [run]
void entry(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
  return;
}

// 00FDEB51  __security_check_cookie  size=15  [run]
/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_018e8764) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}

// 00FDEB60  __endthreadex  size=30  [run]
/* Library Function - Single Match
    __endthreadex
   
   Library: Visual Studio 2010 Release */

void __cdecl __endthreadex(uint _Retval)

{
  _ptiddata _Ptd;
  
  _Ptd = __getptd_noexit();
  if (_Ptd != (_ptiddata)0x0) {
    __freeptd(_Ptd);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(_Retval);
}

// 00FDEB7F  __callthreadstartex  size=53  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __callthreadstartex
   
   Library: Visual Studio 2010 Release */

void __callthreadstartex(void)

{
  _ptiddata p_Var1;
  uint _Retval;
  _EXCEPTION_POINTERS *local_18;
  
  p_Var1 = __getptd();
  _Retval = (*p_Var1->_initaddr)(p_Var1->_initarg);
  __endthreadex(_Retval);
  __XcptFilter(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}

// 00FDEBC0  __threadstartex@4  size=101  [run]
/* Library Function - Single Match
    __threadstartex@4
   
   Library: Visual Studio 2010 Release */

void __threadstartex_4(DWORD *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  
  ___set_flsgetvalue();
  uVar2 = FUN_00feb767();
  iVar3 = ___fls_getvalue_4(uVar2);
  if (iVar3 == 0) {
    pDVar5 = param_1;
    uVar2 = FUN_00feb767(param_1);
    iVar3 = ___fls_setvalue_8(uVar2,pDVar5);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
                    /* WARNING: Subroutine does not return */
      ExitThread(DVar4);
    }
    DVar4 = GetCurrentThreadId();
    *param_1 = DVar4;
  }
  else {
    *(DWORD *)(iVar3 + 0x54) = param_1[0x15];
    *(DWORD *)(iVar3 + 0x58) = param_1[0x16];
    *(DWORD *)(iVar3 + 4) = param_1[1];
    __freefls_4(param_1);
  }
  __callthreadstartex();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// 00FDEC25  __beginthreadex  size=160  [run]
/* Library Function - Single Match
    __beginthreadex
   
   Library: Visual Studio 2010 Release */

uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  _StartAddress *p_Var1;
  int *piVar2;
  _ptiddata _Ptd;
  _ptiddata p_Var3;
  _StartAddress **lpThreadId;
  HANDLE pvVar4;
  DWORD DVar5;
  
  p_Var1 = _StartAddress;
  DVar5 = 0;
  if (_StartAddress == (_StartAddress *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
  }
  else {
    ___set_flsgetvalue();
    _Ptd = __calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      p_Var3 = __getptd();
      __initptd(_Ptd,p_Var3->ptlocinfo);
      _Ptd->_thandle = 0xffffffff;
      _Ptd->_initarg = _ArgList;
      _Ptd->_initaddr = p_Var1;
      lpThreadId = (_StartAddress **)_ThrdAddr;
      if (_ThrdAddr == (uint *)0x0) {
        lpThreadId = &_StartAddress;
      }
      pvVar4 = CreateThread(_Security,_StackSize,__threadstartex_4,_Ptd,_InitFlag,
                            (LPDWORD)lpThreadId);
      if (pvVar4 != (HANDLE)0x0) {
        return (uintptr_t)pvVar4;
      }
      DVar5 = GetLastError();
    }
    _free(_Ptd);
    if (DVar5 != 0) {
      __dosmaperr(DVar5);
    }
  }
  return 0;
}

// 00FDECD0  FUN_00fdecd0  size=10  [run]
void FUN_00fdecd0(void)

{
  __ctrandisp2();
  return;
}

// 00FDECDA  FUN_00fdecda  size=10  [run]
void FUN_00fdecda(void)

{
  __cintrindisp2();
  return;
}

// 00FDECF0  FUN_00fdecf0  size=63  [run]
void FUN_00fdecf0(void)

{
  ushort in_FPUControlWord;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00fedf88();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 00FDED30  FUN_00fded30  size=79  [run]
void FUN_00fded30(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00fedf70();
    return;
  }
  FUN_00fe9df8((double)in_ST0);
  FUN_00fded88();
  return;
}

// 00FDED7F  FUN_00fded7f  size=9  [run]
void FUN_00fded7f(void)

{
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 00FDED88  FUN_00fded88  size=145  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00fded88(int param_1)

{
  ushort uVar1;
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      in_FPUStatusWord = 1;
    }
    else {
      in_FPUStatusWord = FUN_00fe9d9c();
    }
    if (DAT_01f8ef44 == 0) {
      uVar1 = __startOneArgErrorHandling();
      return uVar1;
    }
  }
  else {
    fVar2 = (float10)fcos(in_ST0);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_016f96ca) * _DAT_016f96ca;
      } while ((in_FPUStatusWord & 0x400) != 0);
      fcos(fVar2);
    }
    if (DAT_01f8ef44 == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return in_FPUStatusWord;
}

// 00FDEE20  FUN_00fdee20  size=63  [run]
void FUN_00fdee20(void)

{
  ushort in_FPUControlWord;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00fee138();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 00FDEE60  FUN_00fdee60  size=79  [run]
void FUN_00fdee60(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00fee120();
    return;
  }
  FUN_00fe9df8((double)in_ST0);
  FUN_00fdeeb8();
  return;
}

// 00FDEEAF  FUN_00fdeeaf  size=9  [run]
void FUN_00fdeeaf(void)

{
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 00FDEEB8  FUN_00fdeeb8  size=145  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00fdeeb8(int param_1)

{
  ushort uVar1;
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      in_FPUStatusWord = 1;
    }
    else {
      in_FPUStatusWord = FUN_00fe9d9c();
    }
    if (DAT_01f8ef44 == 0) {
      uVar1 = __startOneArgErrorHandling();
      return uVar1;
    }
  }
  else {
    fVar2 = (float10)fsin(in_ST0);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_016f96ca) * _DAT_016f96ca;
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_01f8ef44 == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return in_FPUStatusWord;
}

// 00FDEF70  FUN_00fdef70  size=20  [run]
void FUN_00fdef70(void)

{
  float10 in_ST0;
  
  FUN_00fe9df8((double)in_ST0);
  FUN_00fdef8d();
  return;
}

// 00FDEF84  FUN_00fdef84  size=9  [run]
void FUN_00fdef84(void)

{
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 00FDEF8D  FUN_00fdef8d  size=157  [run]
uint FUN_00fdef8d(uint param_1,uint param_2)

{
  uint uVar1;
  bool in_ZF;
  short in_FPUControlWord;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_00fe9d9c();
      goto LAB_00fdf00b;
    }
    param_1 = param_2 & 0x80000000;
    param_2 = 0;
joined_r0x00fdeffc:
    if (param_1 == 0) {
LAB_00fdefae:
      if (DAT_01f8ef44 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      param_2 = FUN_00fe9d85();
    }
    if ((param_2 & 0x80000000) == 0) goto LAB_00fdefae;
    if (((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) goto joined_r0x00fdeffc;
  }
  uVar1 = 1;
LAB_00fdf00b:
  if (DAT_01f8ef44 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}

// 00FDF030  __aulldiv  size=104  [run]
/* Library Function - Single Match
    __aulldiv
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}

// 00FDF0A0  __allmul  size=52  [run]
/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio 2010 Release */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}

// 00FDF0D4  __vswprintf_helper  size=246  [run]
/* Library Function - Single Match
    __vswprintf_helper
   
   Library: Visual Studio 2010 Release */

int __vswprintf_helper(code *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,
                      undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char **ppcVar4;
  FILE local_24;
  
  local_24._ptr = (char *)0x0;
  ppcVar4 = (char **)&local_24._cnt;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if (param_4 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return -1;
  }
  if ((param_3 != 0) && (param_2 == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return -1;
  }
  local_24._flag = 0x42;
  local_24._base = param_2;
  local_24._ptr = param_2;
  if (param_3 < 0x40000000) {
    local_24._cnt = param_3 * 2;
  }
  else {
    local_24._cnt = 0x7fffffff;
  }
  iVar3 = (*param_1)(&local_24,param_4,param_5,param_6);
  if (param_2 == (char *)0x0) {
    return iVar3;
  }
  if (-1 < iVar3) {
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      iVar2 = __flsbuf(0,&local_24);
      if (iVar2 == -1) goto LAB_00fdf1b5;
    }
    else {
      *local_24._ptr = '\0';
      local_24._ptr = local_24._ptr + 1;
    }
    local_24._cnt = local_24._cnt + -1;
    if (-1 < local_24._cnt) {
      *local_24._ptr = '\0';
      return iVar3;
    }
    iVar2 = __flsbuf(0,&local_24);
    if (iVar2 != -1) {
      return iVar3;
    }
  }
LAB_00fdf1b5:
  (param_2 + param_3 * 2 + -2)[0] = '\0';
  (param_2 + param_3 * 2 + -2)[1] = '\0';
  return (-1 < local_24._cnt) - 2;
}

// 00FDF1CA  FID_conflict:__vswprintf_c  size=41  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vswprintf_c
    __vswprintf_p
   
   Library: Visual Studio 2010 Release */

int __cdecl
FID_conflict___vswprintf_c(wchar_t *_DstBuf,size_t _SizeInWords,wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vswprintf_helper(FUN_00fee3a5,_DstBuf,_SizeInWords,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// 00FDF1F3  FID_conflict:__vswprintf_p_l  size=42  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vswprintf_c_l
    __vswprintf_p_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
FID_conflict___vswprintf_p_l
          (wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vswprintf_helper(FUN_00fee3a5,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// 00FDF21D  __vswprintf_s_l  size=121  [run]
/* Library Function - Single Match
    __vswprintf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vswprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,wchar_t *_Format,_locale_t _Locale,va_list _ArgList
               )

{
  int *piVar1;
  int iVar2;
  
  if (_Format == (wchar_t *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return -1;
  }
  if ((_DstBuf == (wchar_t *)0x0) || (_DstSize == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
  }
  else {
    iVar2 = __vswprintf_helper(FUN_00fef02a,_DstBuf,_DstSize,_Format,_Locale,_ArgList);
    if (iVar2 < 0) {
      *_DstBuf = L'\0';
    }
    if (iVar2 != -2) {
      return iVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x22;
  }
  FUN_00fe56c2();
  return -1;
}

// 00FDF296  _vswprintf_s  size=29  [run]
/* Library Function - Single Match
    _vswprintf_s
   
   Library: Visual Studio 2010 Release */

int __cdecl _vswprintf_s(wchar_t *_Dst,size_t _SizeInWords,wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vswprintf_s_l(_Dst,_SizeInWords,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}

// 00FDF2B3  __vsnwprintf_s_l  size=240  [run]
/* Library Function - Single Match
    __vsnwprintf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,wchar_t *_Format,
                _locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (_Format == (wchar_t *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (wchar_t *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_00fdf2f4:
      if (_DstSize != 0) {
        piVar2 = __errno();
        if (_MaxCount < _DstSize) {
          iVar1 = *piVar2;
          iVar3 = __vswprintf_helper(FUN_00fef02a,_DstBuf,_MaxCount + 1,_Format,_Locale,_ArgList);
          if (iVar3 == -2) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
LAB_00fdf37d:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          iVar1 = *piVar2;
          iVar3 = __vswprintf_helper(FUN_00fef02a,_DstBuf,_DstSize,_Format,_Locale,_ArgList);
          _DstBuf[_DstSize - 1] = L'\0';
          if (iVar3 != -2) goto LAB_00fdf37d;
          if (_MaxCount == 0xffffffff) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
        }
        *_DstBuf = L'\0';
        if (iVar3 != -2) {
          return -1;
        }
        piVar2 = __errno();
        *piVar2 = 0x22;
        goto LAB_00fdf396;
      }
    }
  }
  else if (_DstBuf != (wchar_t *)0x0) goto LAB_00fdf2f4;
  piVar2 = __errno();
  *piVar2 = 0x16;
LAB_00fdf396:
  FUN_00fe56c2();
  return -1;
}

// 00FDF3A3  __vsnwprintf_s  size=32  [run]
/* Library Function - Single Match
    __vsnwprintf_s
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vsnwprintf_s(wchar_t *_DstBuf,size_t _SizeInWords,size_t _MaxCount,wchar_t *_Format,
              va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnwprintf_s_l(_DstBuf,_SizeInWords,_MaxCount,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}

// 00FDF3C3  FID_conflict:__vswprintf_c  size=41  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vswprintf_c
    __vswprintf_p
   
   Library: Visual Studio 2010 Release */

int __cdecl
FID_conflict___vswprintf_c(wchar_t *_DstBuf,size_t _SizeInWords,wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vswprintf_helper(FUN_00fefdf2,_DstBuf,_SizeInWords,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// 00FDF3EC  FID_conflict:__vswprintf_p_l  size=42  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vswprintf_c_l
    __vswprintf_p_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
FID_conflict___vswprintf_p_l
          (wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vswprintf_helper(FUN_00fefdf2,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// 00FDF416  _wcsncpy_s  size=205  [run]
/* Library Function - Single Match
    _wcsncpy_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _wcsncpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src,rsize_t _MaxCount)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  rsize_t rVar5;
  errno_t eStack_14;
  
  if (_MaxCount == 0) {
    if (_Dst == (wchar_t *)0x0) {
      if (_SizeInWords == 0) {
        return 0;
      }
    }
    else {
LAB_00fdf43c:
      if (_SizeInWords != 0) {
        if (_MaxCount == 0) {
          *_Dst = L'\0';
          return 0;
        }
        if (_Src != (wchar_t *)0x0) {
          rVar5 = _SizeInWords;
          if (_MaxCount == 0xffffffff) {
            iVar4 = (int)_Dst - (int)_Src;
            do {
              wVar1 = *_Src;
              *(wchar_t *)(iVar4 + (int)_Src) = wVar1;
              _Src = _Src + 1;
              if (wVar1 == L'\0') break;
              rVar5 = rVar5 - 1;
            } while (rVar5 != 0);
          }
          else {
            pwVar3 = _Dst;
            do {
              wVar1 = *(wchar_t *)(((int)_Src - (int)_Dst) + (int)pwVar3);
              *pwVar3 = wVar1;
              pwVar3 = pwVar3 + 1;
              if ((wVar1 == L'\0') || (rVar5 = rVar5 - 1, rVar5 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pwVar3 = L'\0';
            }
          }
          if (rVar5 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInWords - 1] = L'\0';
            return 0x50;
          }
          *_Dst = L'\0';
          piVar2 = __errno();
          eStack_14 = 0x22;
          *piVar2 = 0x22;
          goto LAB_00fdf44d;
        }
        *_Dst = L'\0';
      }
    }
  }
  else if (_Dst != (wchar_t *)0x0) goto LAB_00fdf43c;
  piVar2 = __errno();
  eStack_14 = 0x16;
  *piVar2 = 0x16;
LAB_00fdf44d:
  FUN_00fe56c2();
  return eStack_14;
}

// 00FDF4E3  _wcsncat_s  size=214  [run]
/* Library Function - Single Match
    _wcsncat_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _wcsncat_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src,rsize_t _MaxCount)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  rsize_t rVar5;
  errno_t eStack_14;
  
  if (_MaxCount == 0) {
    if (_Dst == (wchar_t *)0x0) {
      if (_SizeInWords == 0) {
        return 0;
      }
    }
    else {
LAB_00fdf509:
      if (_SizeInWords != 0) {
        pwVar4 = _Dst;
        rVar5 = _SizeInWords;
        if ((_MaxCount == 0) || (_Src != (wchar_t *)0x0)) {
          do {
            if (*pwVar4 == L'\0') break;
            pwVar4 = pwVar4 + 1;
            rVar5 = rVar5 - 1;
          } while (rVar5 != 0);
          if (rVar5 != 0) {
            if (_MaxCount == 0xffffffff) {
              iVar3 = (int)pwVar4 - (int)_Src;
              do {
                wVar1 = *_Src;
                *(wchar_t *)(iVar3 + (int)_Src) = wVar1;
                _Src = _Src + 1;
                if (wVar1 == L'\0') break;
                rVar5 = rVar5 - 1;
              } while (rVar5 != 0);
            }
            else {
              if (_MaxCount != 0) {
                iVar3 = (int)_Src - (int)pwVar4;
                do {
                  wVar1 = *(wchar_t *)(iVar3 + (int)pwVar4);
                  *pwVar4 = wVar1;
                  pwVar4 = pwVar4 + 1;
                  if ((wVar1 == L'\0') || (rVar5 = rVar5 - 1, rVar5 == 0)) break;
                  _MaxCount = _MaxCount - 1;
                } while (_MaxCount != 0);
                if (_MaxCount != 0) goto LAB_00fdf586;
              }
              *pwVar4 = L'\0';
            }
LAB_00fdf586:
            if (rVar5 != 0) {
              return 0;
            }
            if (_MaxCount == 0xffffffff) {
              _Dst[_SizeInWords - 1] = L'\0';
              return 0x50;
            }
            *_Dst = L'\0';
            piVar2 = __errno();
            eStack_14 = 0x22;
            *piVar2 = 0x22;
            goto LAB_00fdf51a;
          }
        }
        *_Dst = L'\0';
      }
    }
  }
  else if (_Dst != (wchar_t *)0x0) goto LAB_00fdf509;
  piVar2 = __errno();
  eStack_14 = 0x16;
  *piVar2 = 0x16;
LAB_00fdf51a:
  FUN_00fe56c2();
  return eStack_14;
}

// 00FDF5C0  FID_conflict:_cos  size=72  [run]
/* Library Function - Multiple Matches With Different Base Names
    _acos
    _asin
    _atan
    _cos
     8 names - too many to list
   
   Libraries: Visual Studio 2010, Visual Studio 2012, Visual Studio 2015 */

double __cdecl FID_conflict__cos(double _X)

{
  ushort in_FPUControlWord;
  float10 fVar1;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    fVar1 = (float10)FUN_00ff10e8();
    return (double)fVar1;
  }
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 00FDF710  __alloca_probe_16  size=22  [run]
/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2010 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}

// 00FDF726  __alloca_probe_8  size=22  [run]
/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}

// 00FDF740  __aullshr  size=31  [run]
/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2010 Release */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}

// 00FDF75F  __endthread  size=44  [run]
/* Library Function - Single Match
    __endthread
   
   Library: Visual Studio 2010 Release */

void __cdecl __endthread(void)

{
  _ptiddata _Ptd;
  
  _Ptd = __getptd_noexit();
  if (_Ptd != (_ptiddata)0x0) {
    if ((HANDLE)_Ptd->_thandle != (HANDLE)0xffffffff) {
      CloseHandle((HANDLE)_Ptd->_thandle);
    }
    __freeptd(_Ptd);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}

// 00FDF78C  __callthreadstart  size=53  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __callthreadstart
   
   Library: Visual Studio 2010 Release */

void __callthreadstart(void)

{
  _ptiddata p_Var1;
  _EXCEPTION_POINTERS *local_18;
  
  p_Var1 = __getptd();
  (*p_Var1->_initaddr)(p_Var1->_initarg);
  __endthread();
  __XcptFilter(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}

// 00FDF7CD  __threadstart@4  size=89  [run]
/* Library Function - Single Match
    __threadstart@4
   
   Library: Visual Studio 2010 Release */

void __threadstart_4(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  DWORD dwExitCode;
  
  ___set_flsgetvalue();
  uVar2 = FUN_00feb767();
  iVar3 = ___fls_getvalue_4(uVar2);
  if (iVar3 == 0) {
    uVar2 = FUN_00feb767(param_1);
    iVar3 = ___fls_setvalue_8(uVar2,param_1);
    if (iVar3 == 0) {
      dwExitCode = GetLastError();
                    /* WARNING: Subroutine does not return */
      ExitThread(dwExitCode);
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 4);
    __freefls_4(param_1);
  }
  __callthreadstart();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// 00FDF826  __beginthread  size=167  [run]
/* Library Function - Single Match
    __beginthread
   
   Library: Visual Studio 2010 Release */

uintptr_t __cdecl __beginthread(_StartAddress *_StartAddress,uint _StackSize,void *_ArgList)

{
  int *piVar1;
  _ptiddata _Ptd;
  _ptiddata p_Var2;
  HANDLE hThread;
  DWORD DVar3;
  
  DVar3 = 0;
  if (_StartAddress == (_StartAddress *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  else {
    ___set_flsgetvalue();
    _Ptd = __calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      p_Var2 = __getptd();
      __initptd(_Ptd,p_Var2->ptlocinfo);
      _Ptd->_initaddr = _StartAddress;
      _Ptd->_initarg = _ArgList;
      hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,_StackSize,__threadstart_4,_Ptd,4,
                             &_Ptd->_tid);
      _Ptd->_thandle = (uintptr_t)hThread;
      if ((hThread != (HANDLE)0x0) && (DVar3 = ResumeThread(hThread), DVar3 != 0xffffffff)) {
        return (uintptr_t)hThread;
      }
      DVar3 = GetLastError();
    }
    _free(_Ptd);
    if (DVar3 != 0) {
      __dosmaperr(DVar3);
    }
  }
  return 0xffffffff;
}

