// lib/msvc/crt/unit_01437ABD.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01437ABD..0143E5EC, 92 functions

#include "mgrr.h"

// 01437ABD  __aligned_offset_malloc  size=152  [run]
/* Library Function - Single Match
    __aligned_offset_malloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl __aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset)

{
  uint _Size_00;
  int iVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  
  if ((_Alignment & _Alignment - 1) == 0) {
    if ((_Offset == 0) || (_Offset < _Size)) {
      if (_Alignment < 5) {
        _Alignment = 4;
      }
      iVar1 = (-_Offset & 3) + 4 + (_Alignment - 1);
      _Size_00 = iVar1 + _Size;
      if (_Size_00 < _Size) {
        piVar2 = __errno();
        *piVar2 = 0xc;
      }
      else {
        pvVar3 = _malloc(_Size_00);
        if (pvVar3 != (void *)0x0) {
          pvVar4 = (void *)(((int)pvVar3 + _Offset + iVar1 & ~(_Alignment - 1)) - _Offset);
          *(void **)((int)pvVar4 + (-4 - (-_Offset & 3))) = pvVar3;
          return pvVar4;
        }
      }
    }
    else {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_00fe56c2();
    }
  }
  else {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
  }
  return (void *)0x0;
}

// 01437B55  __aligned_msize  size=73  [run]
/* Library Function - Single Match
    __aligned_msize
   
   Library: Visual Studio 2010 Release */

size_t __cdecl __aligned_msize(void *_Memory,size_t _Alignment,size_t _Offset)

{
  int *piVar1;
  size_t sVar2;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return 0xffffffff;
  }
  sVar2 = __msize(*(void **)(((uint)_Memory & 0xfffffffc) - 4));
  if (_Alignment < 5) {
    _Alignment = 4;
  }
  return ((sVar2 - _Alignment) - (-_Offset & 3)) - 3;
}

// 01437B9E  __aligned_free  size=26  [run]
/* Library Function - Single Match
    __aligned_free
   
   Library: Visual Studio 2010 Release */

void __cdecl __aligned_free(void *_Memory)

{
  if (_Memory != (void *)0x0) {
    _free(*(void **)(((uint)_Memory & 0xfffffffc) - 4));
  }
  return;
}

// 01437BB8  __aligned_malloc  size=23  [run]
/* Library Function - Single Match
    __aligned_malloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl __aligned_malloc(size_t _Size,size_t _Alignment)

{
  void *pvVar1;
  
  pvVar1 = __aligned_offset_malloc(_Size,_Alignment,0);
  return pvVar1;
}

// 01437BCF  __aligned_offset_realloc  size=396  [run]
/* Library Function - Single Match
    __aligned_offset_realloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl
__aligned_offset_realloc(void *_Memory,size_t _NewSize,size_t _Alignment,size_t _Offset)

{
  uint _NewSize_00;
  int iVar1;
  bool bVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  void *local_1c;
  size_t local_14;
  void *local_8;
  
  bVar2 = false;
  if (_Memory == (void *)0x0) {
    pvVar3 = __aligned_offset_malloc(_NewSize,_Alignment,_Offset);
    return pvVar3;
  }
  if (_NewSize == 0) {
    __aligned_free(_Memory);
    return (void *)0x0;
  }
  if ((_Alignment & _Alignment - 1) != 0) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_00fe56c2();
    return (void *)0x0;
  }
  if ((_Offset != 0) && (_NewSize <= _Offset)) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_00fe56c2();
    return (void *)0x0;
  }
  pvVar3 = *(void **)(((uint)_Memory & 0xfffffffc) - 4);
  if (_Alignment < 5) {
    _Alignment = 4;
  }
  iVar5 = (int)_Memory - (int)pvVar3;
  uVar7 = _Alignment - 1;
  uVar8 = -_Offset & 3;
  sVar6 = __msize(pvVar3);
  local_14 = (int)pvVar3 + (sVar6 - (int)_Memory);
  if (_NewSize < local_14) {
    local_14 = _NewSize;
  }
  _NewSize_00 = uVar8 + _NewSize + 4 + uVar7;
  if (_NewSize_00 < _NewSize) {
    piVar4 = __errno();
    *piVar4 = 0xc;
LAB_01437cea:
    _Memory = (void *)0x0;
  }
  else {
    if ((void *)((int)pvVar3 + uVar7 + uVar8 + 4) < _Memory) {
LAB_01437cdd:
      local_8 = _malloc(_NewSize_00);
      if (local_8 == (void *)0x0) goto LAB_01437cea;
      bVar2 = true;
      local_1c = pvVar3;
    }
    else {
      piVar4 = __errno();
      iVar1 = *piVar4;
      local_1c = __expand(pvVar3,_NewSize_00);
      local_8 = local_1c;
      if (local_1c == (void *)0x0) {
        piVar4 = __errno();
        *piVar4 = iVar1;
        goto LAB_01437cdd;
      }
    }
    if ((local_8 != (void *)((int)_Memory - iVar5)) ||
       ((~uVar7 & (int)_Memory + _Offset + uVar8) != 0)) {
      _Memory = (void *)(((int)local_8 + _Offset + uVar7 + uVar8 + 4 & ~uVar7) - _Offset);
      FID_conflict__memcpy(_Memory,(void *)(iVar5 + (int)local_1c),local_14);
      if (bVar2) {
        _free(local_1c);
      }
      *(void **)((int)_Memory + (-4 - uVar8)) = local_8;
    }
  }
  return _Memory;
}

// 01437D5B  __aligned_offset_recalloc  size=126  [run]
/* Library Function - Single Match
    __aligned_offset_recalloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl
__aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset)

{
  int *piVar1;
  void *pvVar2;
  uint _NewSize;
  size_t sVar3;
  
  sVar3 = 0;
  if ((_Count == 0) || (_Size <= 0xffffffe0 / _Count)) {
    _NewSize = _Count * _Size;
    if (_Memory != (void *)0x0) {
      sVar3 = __aligned_msize(_Memory,_Alignment,_Offset);
    }
    pvVar2 = __aligned_offset_realloc(_Memory,_NewSize,_Alignment,_Offset);
    if ((pvVar2 != (void *)0x0) && (sVar3 < _NewSize)) {
      _memset((void *)((int)pvVar2 + sVar3),0,_NewSize - sVar3);
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}

// 01437DD9  __aligned_realloc  size=26  [run]
/* Library Function - Single Match
    __aligned_realloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl __aligned_realloc(void *_Memory,size_t _NewSize,size_t _Alignment)

{
  void *pvVar1;
  
  pvVar1 = __aligned_offset_realloc(_Memory,_NewSize,_Alignment,0);
  return pvVar1;
}

// 01437DF3  __aligned_recalloc  size=29  [run]
/* Library Function - Single Match
    __aligned_recalloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl __aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment)

{
  void *pvVar1;
  
  pvVar1 = __aligned_offset_recalloc(_Memory,_Count,_Size,_Alignment,0);
  return pvVar1;
}

// 01437E10  __vsnprintf_l  size=172  [run]
/* Library Function - Single Match
    __vsnprintf_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

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
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    iVar2 = -1;
  }
  else if ((_MaxCount == 0) || (_DstBuf != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (_MaxCount < 0x80000000) {
      local_24._cnt = _MaxCount;
    }
    local_24._flag = 0x42;
    local_24._base = _DstBuf;
    local_24._ptr = _DstBuf;
    iVar2 = FUN_00fe5800(&local_24,_Format,_Locale,_ArgList);
    if (_DstBuf != (char *)0x0) {
      local_24._cnt = local_24._cnt - 1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = '\0';
      }
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    iVar2 = -1;
  }
  return iVar2;
}

// 01437EBC  __vsnprintf  size=29  [run]
/* Library Function - Single Match
    __vsnprintf
   
   Library: Visual Studio 2010 Release */

int __cdecl __vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsnprintf_l(_Dest,_Count,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}

// 01437EE0  _strncpy  size=292  [run]
/* Library Function - Single Match
    _strncpy
   
   Library: Visual Studio */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x01437f2c;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_01437f73;
        goto LAB_01437fe9;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x01437fe5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_01437fe9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_01437f73;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x01437fe5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x01437fe5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x01437fe5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x01437f2c:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_01437f73:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}

// 01438116  FUN_01438116  size=27  [run]
void FUN_01438116(int param_1)

{
  __local_unwind2(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}

// 01438131  __snprintf  size=172  [run]
/* Library Function - Single Match
    __snprintf
   
   Library: Visual Studio 2010 Release */

int __cdecl __snprintf(char *_Dest,size_t _Count,char *_Format,...)

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
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    iVar2 = -1;
  }
  else if ((_Count == 0) || (_Dest != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (_Count < 0x80000000) {
      local_24._cnt = _Count;
    }
    local_24._flag = 0x42;
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    iVar2 = FUN_00fe5800(&local_24,_Format,0,&stack0x00000010);
    if (_Dest != (char *)0x0) {
      local_24._cnt = local_24._cnt - 1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = '\0';
      }
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    iVar2 = -1;
  }
  return iVar2;
}

// 014381DD  __snprintf_l  size=31  [run]
/* Library Function - Single Match
    __snprintf_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __snprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = __vsnprintf_l(_DstBuf,_MaxCount,_Format,_Locale,&stack0x00000014);
  return iVar1;
}

// 01438200  __alldiv  size=170  [run]
/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}

// 014382AA  __fsopen  size=178  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fsopen
   
   Library: Visual Studio 2010 Release */

FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  int *piVar1;
  FILE *pFVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0187a688;
  uStack_c = 0x14382b6;
  if (((_Filename == (char *)0x0) || (_Mode == (char *)0x0)) || (*_Mode == '\0')) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  else {
    pFVar2 = __getstream();
    if (pFVar2 == (FILE *)0x0) {
      piVar1 = __errno();
      *piVar1 = 0x18;
    }
    else {
      local_8 = (undefined *)0x0;
      if (*_Filename != '\0') {
        pFVar2 = __openfile(_Filename,_Mode,_ShFlag,pFVar2);
        local_8 = (undefined *)0xfffffffe;
        FUN_0143835c();
        return pFVar2;
      }
      piVar1 = __errno();
      *piVar1 = 0x16;
      __local_unwind4(&DAT_018e8764,local_14,0xfffffffe);
    }
  }
  return (FILE *)0x0;
}

// 0143835C  FUN_0143835c  size=10  [run]
void FUN_0143835c(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}

// 01438366  _fopen  size=23  [run]
/* Library Function - Single Match
    _fopen
   
   Library: Visual Studio 2010 Release */

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}

// 0143837D  _fopen_s  size=71  [run]
/* Library Function - Single Match
    _fopen_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _fopen_s(FILE **_File,char *_Filename,char *_Mode)

{
  int *piVar1;
  FILE *pFVar2;
  int iVar3;
  
  if (_File == (FILE **)0x0) {
    piVar1 = __errno();
    iVar3 = 0x16;
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  else {
    pFVar2 = __fsopen(_Filename,_Mode,0x80);
    *_File = pFVar2;
    if (pFVar2 == (FILE *)0x0) {
      piVar1 = __errno();
      iVar3 = *piVar1;
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}

// 014383C4  __fwrite_nolock  size=343  [run]
/* Library Function - Single Match
    __fwrite_nolock
   
   Library: Visual Studio 2010 Release */

size_t __cdecl __fwrite_nolock(void *_DstBuf,size_t _Size,size_t _Count,FILE *_File)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint _Size_00;
  uint uVar5;
  uint uVar6;
  char *_Buf;
  uint local_c;
  char *local_8;
  
  if ((_Size != 0) && (_Count != 0)) {
    if ((_File != (FILE *)0x0) &&
       ((_DstBuf != (void *)0x0 && (_Count <= (uint)(0xffffffff / (ulonglong)_Size))))) {
      uVar6 = _Size * _Count;
      uVar5 = uVar6;
      if ((_File->_flag & 0x10cU) == 0) {
        local_c = 0x1000;
      }
      else {
        local_c = _File->_bufsiz;
      }
      do {
        while( true ) {
          if (uVar5 == 0) {
            return _Count;
          }
          uVar4 = _File->_flag & 0x108;
          if (uVar4 == 0) break;
          uVar3 = _File->_cnt;
          if (uVar3 == 0) break;
          if ((int)uVar3 < 0) {
            _File->_flag = _File->_flag | 0x20;
            goto LAB_01438506;
          }
          _Size_00 = uVar5;
          if (uVar3 <= uVar5) {
            _Size_00 = uVar3;
          }
          FID_conflict__memcpy(_File->_ptr,_DstBuf,_Size_00);
          _File->_cnt = _File->_cnt - _Size_00;
          _File->_ptr = _File->_ptr + _Size_00;
          uVar5 = uVar5 - _Size_00;
LAB_014384c2:
          local_8 = (char *)((int)_DstBuf + _Size_00);
          _DstBuf = local_8;
        }
        if (local_c <= uVar5) {
          if ((uVar4 != 0) && (iVar2 = __flush(_File), iVar2 != 0)) goto LAB_01438506;
          uVar4 = uVar5;
          if (local_c != 0) {
            uVar4 = uVar5 - uVar5 % local_c;
          }
          _Buf = _DstBuf;
          uVar3 = uVar4;
          iVar2 = __fileno(_File);
          uVar3 = __write(iVar2,_Buf,uVar3);
          if (uVar3 != 0xffffffff) {
            _Size_00 = uVar4;
            if (uVar3 <= uVar4) {
              _Size_00 = uVar3;
            }
            uVar5 = uVar5 - _Size_00;
            if (uVar4 <= uVar3) goto LAB_014384c2;
          }
          _File->_flag = _File->_flag | 0x20;
LAB_01438506:
          return (uVar6 - uVar5) / _Size;
        }
        iVar2 = __flsbuf((int)*(char *)_DstBuf,_File);
        if (iVar2 == -1) goto LAB_01438506;
        _DstBuf = (void *)((int)_DstBuf + 1);
        local_c = _File->_bufsiz;
        uVar5 = uVar5 - 1;
        if ((int)local_c < 1) {
          local_c = 1;
        }
      } while( true );
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  return 0;
}

// 0143851B  _fwrite  size=112  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fwrite
   
   Library: Visual Studio 2010 Release */

size_t __cdecl _fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  int *piVar1;
  size_t sVar2;
  
  if ((_Size != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      __lock_file(_File);
      sVar2 = __fwrite_nolock(_Str,_Size,_Count,_File);
      FUN_0143858b();
      return sVar2;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  return 0;
}

// 0143858B  FUN_0143858b  size=10  [run]
void FUN_0143858b(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0x14));
  return;
}

// 01438595  __fseek_nolock  size=138  [run]
/* Library Function - Single Match
    __fseek_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __fseek_nolock(FILE *_File,long _Offset,int _Origin)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  if ((_File->_flag & 0x83U) == 0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    iVar3 = -1;
  }
  else {
    _File->_flag = _File->_flag & 0xffffffef;
    if (_Origin == 1) {
      lVar4 = __ftell_nolock(_File);
      _Offset = _Offset + lVar4;
      _Origin = 0;
    }
    __flush(_File);
    uVar1 = _File->_flag;
    if ((char)uVar1 < '\0') {
      _File->_flag = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      _File->_bufsiz = 0x200;
    }
    iVar3 = __fileno(_File);
    lVar4 = __lseek(iVar3,_Offset,_Origin);
    iVar3 = (lVar4 != -1) - 1;
  }
  return iVar3;
}

// 0143861F  _fseek  size=114  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fseek
   
   Library: Visual Studio 2010 Release */

int __cdecl _fseek(FILE *_File,long _Offset,int _Origin)

{
  int *piVar1;
  int iVar2;
  
  if ((_File == (FILE *)0x0) || (((_Origin != 0 && (_Origin != 1)) && (_Origin != 2)))) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    iVar2 = -1;
  }
  else {
    __lock_file(_File);
    iVar2 = __fseek_nolock(_File,_Offset,_Origin);
    FUN_01438691();
  }
  return iVar2;
}

// 01438691  FUN_01438691  size=10  [run]
void FUN_01438691(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}

// 0143869B  __ftell_nolock  size=404  [run]
/* Library Function - Single Match
    __ftell_nolock
   
   Library: Visual Studio 2010 Release */

long __cdecl __ftell_nolock(FILE *_File)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  uint _FileHandle;
  FILE *pFVar4;
  char *pcVar5;
  FILE *pFVar6;
  long lVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  int local_10;
  int local_8;
  
  pFVar6 = _File;
  if (_File == (FILE *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00fe56c2();
    return -1;
  }
  _FileHandle = __fileno(_File);
  if (_File->_cnt < 0) {
    _File->_cnt = 0;
  }
  local_8 = __lseek(_FileHandle,0,1);
  if (local_8 < 0) {
LAB_014387ed:
    lVar7 = -1;
  }
  else {
    uVar1 = _File->_flag;
    if ((uVar1 & 0x108) == 0) {
      return local_8 - _File->_cnt;
    }
    pcVar5 = _File->_ptr;
    pcVar8 = _File->_base;
    local_10 = (int)pcVar5 - (int)pcVar8;
    if ((uVar1 & 3) == 0) {
      if (-1 < (char)uVar1) {
        piVar3 = __errno();
        *piVar3 = 0x16;
        goto LAB_014387ed;
      }
    }
    else {
      pcVar2 = pcVar8;
      if ((*(byte *)((&DAT_0225bf80)[(int)_FileHandle >> 5] + 4 + (_FileHandle & 0x1f) * 0x40) &
          0x80) != 0) {
        for (; pcVar2 < pcVar5; pcVar2 = pcVar2 + 1) {
          if (*pcVar2 == '\n') {
            local_10 = local_10 + 1;
          }
        }
      }
    }
    if (local_8 == 0) {
      return local_10;
    }
    if ((_File->_flag & 1) != 0) {
      if (_File->_cnt == 0) {
        local_10 = 0;
      }
      else {
        pFVar4 = (FILE *)(pcVar5 + (_File->_cnt - (int)pcVar8));
        iVar9 = (_FileHandle & 0x1f) * 0x40;
        if ((*(byte *)((&DAT_0225bf80)[(int)_FileHandle >> 5] + 4 + iVar9) & 0x80) != 0) {
          lVar7 = __lseek(_FileHandle,0,2);
          if (lVar7 == local_8) {
            pcVar5 = _File->_base;
            pcVar8 = pcVar5 + (int)&pFVar4->_ptr;
            _File = pFVar4;
            for (; pcVar5 < pcVar8; pcVar5 = pcVar5 + 1) {
              if (*pcVar5 == '\n') {
                _File = (FILE *)((int)&_File->_ptr + 1);
              }
            }
            bVar10 = (pFVar6->_flag & 0x2000U) == 0;
          }
          else {
            lVar7 = __lseek(_FileHandle,local_8,0);
            if (lVar7 < 0) goto LAB_014387ed;
            pFVar6 = (FILE *)0x200;
            if ((((FILE *)0x200 < pFVar4) || ((_File->_flag & 8U) == 0)) ||
               ((_File->_flag & 0x400U) != 0)) {
              pFVar6 = (FILE *)_File->_bufsiz;
            }
            bVar10 = (*(byte *)((&DAT_0225bf80)[(int)_FileHandle >> 5] + 4 + iVar9) & 4) == 0;
            _File = pFVar6;
          }
          pFVar4 = _File;
          if (!bVar10) {
            pFVar4 = (FILE *)((int)&_File->_ptr + 1);
          }
        }
        _File = pFVar4;
        local_8 = local_8 - (int)_File;
      }
    }
    lVar7 = local_10 + local_8;
  }
  return lVar7;
}

// 0143882F  _ftell  size=91  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _ftell
   
   Library: Visual Studio 2010 Release */

long __cdecl _ftell(FILE *_File)

{
  int *piVar1;
  long lVar2;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    lVar2 = -1;
  }
  else {
    __lock_file(_File);
    lVar2 = __ftell_nolock(_File);
    FUN_0143888a();
  }
  return lVar2;
}

// 0143888A  FUN_0143888a  size=10  [run]
void FUN_0143888a(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}

// 01438894  __fread_nolock_s  size=444  [run]
/* Library Function - Single Match
    __fread_nolock_s
   
   Library: Visual Studio 2010 Release */

size_t __cdecl
__fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  uint uVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *_DstBuf_00;
  uint local_10;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_DstBuf != (void *)0x0) {
      if ((_File != (FILE *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize))) {
LAB_01438907:
        uVar8 = _ElementSize * _Count;
        uVar7 = uVar8;
        puVar2 = _DstBuf;
        uVar1 = _DstSize;
        if ((_File->_flag & 0x10cU) == 0) {
          local_10 = 0x1000;
        }
        else {
          local_10 = _File->_bufsiz;
        }
        do {
          while( true ) {
            if (uVar7 == 0) {
              return _Count;
            }
            if ((_File->_flag & 0x10cU) != 0) break;
LAB_0143897d:
            if (uVar7 < local_10) {
              iVar5 = __filbuf(_File);
              if (iVar5 == -1) goto LAB_01438a3c;
              if (uVar1 == 0) goto LAB_01438a12;
              *puVar2 = (char)iVar5;
              local_10 = _File->_bufsiz;
              uVar7 = uVar7 - 1;
              uVar1 = uVar1 - 1;
              puVar2 = puVar2 + 1;
            }
            else {
              if (local_10 == 0) {
                uVar4 = 0x7fffffff;
                if (uVar7 < 0x80000000) {
                  uVar4 = uVar7;
                }
              }
              else {
                if (uVar7 < 0x80000000) {
                  uVar6 = uVar7 % local_10;
                  uVar4 = uVar7;
                }
                else {
                  uVar6 = (uint)(0x7fffffff % (ulonglong)local_10);
                  uVar4 = 0x7fffffff;
                }
                uVar4 = uVar4 - uVar6;
              }
              if (uVar1 < uVar4) goto LAB_01438a12;
              _DstBuf_00 = puVar2;
              iVar5 = __fileno(_File);
              iVar5 = __read(iVar5,_DstBuf_00,uVar4);
              if (iVar5 == 0) {
                _File->_flag = _File->_flag | 0x10;
                goto LAB_01438a3c;
              }
              if (iVar5 == -1) goto LAB_01438a38;
              uVar7 = uVar7 - iVar5;
              uVar1 = uVar1 - iVar5;
              puVar2 = puVar2 + iVar5;
            }
          }
          uVar4 = _File->_cnt;
          if (uVar4 == 0) goto LAB_0143897d;
          if ((int)uVar4 < 0) {
LAB_01438a38:
            _File->_flag = _File->_flag | 0x20;
LAB_01438a3c:
            return (uVar8 - uVar7) / _ElementSize;
          }
          uVar6 = uVar7;
          if (uVar4 <= uVar7) {
            uVar6 = uVar4;
          }
          if (uVar1 < uVar6) {
LAB_01438a12:
            if (_DstSize != 0xffffffff) {
              _memset(_DstBuf,0,_DstSize);
            }
            piVar3 = __errno();
            *piVar3 = 0x22;
            goto LAB_014388c7;
          }
          _memcpy_s(puVar2,uVar1,_File->_ptr,uVar6);
          _File->_cnt = _File->_cnt - uVar6;
          _File->_ptr = _File->_ptr + uVar6;
          uVar7 = uVar7 - uVar6;
          uVar1 = uVar1 - uVar6;
          puVar2 = puVar2 + uVar6;
        } while( true );
      }
      if (_DstSize != 0xffffffff) {
        _memset(_DstBuf,0,_DstSize);
      }
      if ((_File != (FILE *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize)))
      goto LAB_01438907;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
LAB_014388c7:
    FUN_00fe56c2();
  }
  return 0;
}

// 01438A50  __fread_nolock  size=29  [run]
/* Library Function - Single Match
    __fread_nolock
   
   Library: Visual Studio 2010 Release */

size_t __cdecl __fread_nolock(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  sVar1 = __fread_nolock_s(_DstBuf,0xffffffff,_ElementSize,_Count,_File);
  return sVar1;
}

// 01438A6D  _fread_s  size=132  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fread_s
   
   Library: Visual Studio 2010 Release */

size_t __cdecl _fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  int *piVar1;
  size_t sVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      __lock_file(_File);
      sVar2 = __fread_nolock_s(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_01438af1();
      return sVar2;
    }
    if (_DstSize != 0xffffffff) {
      _memset(_DstBuf,0,_DstSize);
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  return 0;
}

// 01438AF1  FUN_01438af1  size=10  [run]
void FUN_01438af1(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0x18));
  return;
}

// 01438AFB  _fread  size=29  [run]
/* Library Function - Single Match
    _fread
   
   Library: Visual Studio 2010 Release */

size_t __cdecl _fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  sVar1 = _fread_s(_DstBuf,0xffffffff,_ElementSize,_Count,_File);
  return sVar1;
}

// 01438B18  FUN_01438b18  size=957  [run]
ulonglong FUN_01438b18(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  
  fVar1 = in_XMM0._0_4_;
  fVar2 = ABS(fVar1);
  uVar3 = (int)fVar2 + 0xc2800000;
  if (-1 < (int)(0x3f5db3d7U - (int)fVar2 | uVar3)) {
    return CONCAT44(uVar3 >> 0x10,fVar1) & 0x1fe80000000;
  }
  auVar4._4_12_ = in_XMM1._4_12_;
  if (-1 < (int)((int)&DAT_01feffff - uVar3 | uVar3)) {
    auVar4._0_4_ = fVar1;
    return CONCAT44(((uint)SQRT(1.0 - fVar1 * fVar1) >> 0x10) - 0x3d80,
                    (uint)(SUB161(auVar4 >> 0x1f,0) & 1) << 0xf) & 0xfffeffffffff;
  }
  if ((int)uVar3 < 0) {
    if (-1 < (int)fVar2 + -0x37800000) {
      return CONCAT44((int)fVar2 + -0x37800000,fVar1);
    }
    return CONCAT44((int)fVar2 + 0x20000000,fVar1);
  }
  if ((int)uVar3 < 0x2000000) {
    return CONCAT44(uVar3,(uint)in_XMM0._2_2_) & 0xffffffff00008000;
  }
  fVar1 = ABS(fVar1);
  if (fVar1 == 1.0) {
    return 0x3f8000003f800000;
  }
  if ((uint)fVar1 < 0x7f800001) {
    return 0x7f8000003f800000;
  }
  return CONCAT44(fVar1,0x3f800000);
}

// 01438ED5  FUN_01438ed5  size=1715  [run]
ulonglong FUN_01438ed5(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ushort uVar9;
  float fVar10;
  uint uVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  undefined1 in_XMM0 [16];
  undefined1 auVar18 [16];
  uint in_XMM1_Da;
  float fVar19;
  double dVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong in_XMM3_Qb;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar29;
  longlong lVar30;
  double dVar34;
  longlong lVar35;
  undefined1 auVar33 [16];
  
  auVar31._0_12_ = ZEXT812(0xffffffff);
  auVar31._12_4_ = 0;
  auVar18 = in_XMM0 & auVar31;
  fVar19 = (float)(in_XMM1_Da & auVar31._0_4_);
  fVar16 = auVar18._0_4_;
  fVar10 = (float)(uint)auVar18._2_2_;
  dVar25 = (double)((auVar18._0_8_ & 0x7fffff) << 0x1d | 0x3ff0000000000000);
  dVar20 = (double)fVar19;
  fVar24 = fVar16;
  if ((0x7f7fU - (int)fVar10 | (int)fVar10 - 0x80U) < 0x8000) {
    iVar13 = 0x3f3f;
    uVar12 = 0;
LAB_01438f54:
    uVar11 = ((uint)fVar10 & 0x7f) + 1 & 0xfe;
    dVar28 = (double)((ulonglong)*(double *)(&DAT_018293a0 + uVar11 * 4) & 0xfffffffffc000000);
    dVar26 = dVar25 * (*(double *)(&DAT_018293a0 + uVar11 * 4) - dVar28) +
             (dVar28 * dVar25 - 1.4426950408889634);
    auVar32._8_4_ = SUB84(dVar26,0);
    auVar32._0_8_ = dVar26;
    auVar32._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    dVar34 = auVar32._8_8_;
    dVar29 = dVar26 * dVar26;
    dVar25 = (*(double *)(&DAT_01829190 + uVar11 * 4) + dVar26 +
              (double)((int)(((uint)fVar24 >> 0x10) - iVar13) >> 7) + dVar29 * -0.34657359027997264)
             * dVar20 * 32.0;
    dVar28 = (dVar25 + 6755399441055744.0) - 6755399441055744.0;
    uVar11 = (ushort)((ulonglong)dVar25 >> 0x30) & 0x7ff0;
    fVar10 = (float)(0x41d0 - uVar11);
    if ((uVar11 - 0x3e60 | (uint)fVar10) < 0x80000000) {
      uVar11 = (uint)ROUND(dVar28);
      dVar20 = (dVar25 - dVar28) +
               dVar20 * 32.0 *
               ((dVar26 * 0.04616701971661669 + -0.08325616299723237) * dVar29 * dVar29 +
               dVar34 * 0.16015100463940046 * dVar34 * dVar34);
      auVar27._8_4_ = SUB84(dVar20,0);
      auVar27._0_8_ = dVar20;
      auVar27._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      uVar14 = 0xfbf - uVar11 | uVar11 + 4000;
      if (uVar14 < 0x80000000) {
        return CONCAT44((int)uVar11 >> 1,uVar11) & 0xfffffff00000001f;
      }
      if (0x1fff < (int)uVar11) {
LAB_014394e8:
        return CONCAT44(uVar14,uVar11);
      }
      if (-0x2000 < (int)uVar11) {
        iVar13 = ((int)uVar11 >> 6) << 4;
        dVar25 = (double)((ulonglong)(ushort)((uVar12 | 0x3ff0) + (short)iVar13) << 0x30);
        return CONCAT44(iVar13,(uint)(float)(((auVar27._8_8_ * 0.00023459619820224677 +
                                               0.02166084939249829 +
                                              dVar20 * dVar20 *
                                              (dVar20 * 9.172562701824643e-09 +
                                              1.6938509724371819e-06)) *
                                              dVar20 * *(double *)
                                                        (&DAT_018295b0 + (uVar11 & 0x1f) * 8) *
                                              dVar25 + *(double *)
                                                        (&DAT_018295b0 + (uVar11 & 0x1f) * 8) *
                                                       dVar25) *
                                            (double)((ulonglong)
                                                     (ushort)((((short)((int)uVar11 >> 5) -
                                                               (short)((int)uVar11 >> 6)) + 0x3ff) *
                                                             0x10) << 0x30)) >> 0x10) &
               0xffffffff00007fff;
      }
LAB_014394ff:
      return CONCAT44(uVar14,0x800000);
    }
    fVar24 = fVar16;
    if (fVar16 == 1.0) goto LAB_014393cb;
    if ((uint)ABS(fVar19) < 0x7f800000) {
      fVar15 = fVar16;
      if (ABS(fVar19) == 0.0) {
LAB_0143941f:
        fVar10 = 0.0;
        if (fVar16 != 0.0) {
          fVar10 = ABS(fVar16);
        }
        return CONCAT44(fVar15,fVar10);
      }
      uVar12 = (ushort)((ulonglong)dVar28 >> 0x30);
      uVar11 = (uint)uVar12;
      uVar14 = uVar11 & 0x7ff0;
      if (uVar14 < 0x3e61) {
        return (ulonglong)CONCAT24(uVar12,uVar11) & 0x7ff0ffffffff;
      }
      uVar11 = uVar11 & 0x8000;
      if (((ulonglong)dVar28 & 0x8000000000000000) == 0) goto LAB_014394e8;
      goto LAB_014394ff;
    }
  }
  else {
    uVar11 = (uint)((ulonglong)ABS(dVar20) >> 0x20);
    if (uVar11 < 0x7ff00000) {
      fVar15 = 0.0;
      if (SUB84(dVar20,0) == 0 && uVar11 == 0) goto LAB_0143941f;
      if ((uint)fVar16 < 0x7f800000) {
        uVar12 = 0;
LAB_014391f0:
        fVar15 = fVar16 * 1.8446744e+19;
        if (ABS(fVar15) != 0.0) {
          fVar10 = (float)((uint)fVar15 >> 0x10);
          fVar24 = ABS(fVar15);
          dVar25 = (double)(((ulonglong)(uint)fVar15 & 0x7fffff) << 0x1d | 0x3ff0000000000000);
          iVar13 = 0x5f3f;
          goto LAB_01438f54;
        }
      }
      else {
        iVar13 = (uVar11 >> 0x14) - 0x3f3;
        uVar17 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar13) * (short)((uint)iVar13 >> 0x10),
                          (ushort)(-1 < (short)iVar13) * (short)iVar13);
        lVar30 = ((ulonglong)dVar20 | 0xfff0000000000000) << uVar17;
        lVar35 = (in_XMM3_Qb << 0x34) << uVar17;
        auVar18._0_4_ = -(uint)((int)lVar30 == 0);
        auVar18._4_4_ = -(uint)((int)((ulonglong)lVar30 >> 0x20) == 0);
        auVar18._8_4_ = -(uint)((int)lVar35 == 0);
        auVar18._12_4_ = -(uint)((int)((ulonglong)lVar35 >> 0x20) == 0);
        uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7;
        if (0x7f7fffff < (uint)ABS(fVar16)) {
          uVar9 = (ushort)((ulonglong)dVar20 >> 0x30);
          if (fVar16 == INFINITY) {
            fVar10 = (float)(uVar9 & 0x8000);
            fVar15 = INFINITY;
            if (((ulonglong)dVar20 & 0x8000000000000000) != 0) {
              return CONCAT44(0x7f800000,(uint)uVar9) & 0xffffffff00008000;
            }
          }
          else {
            fVar15 = ABS(fVar16);
            if (0x7f800000 < (uint)fVar15) goto LAB_014391df;
            if (uVar12 == 0xff) {
              uVar17 = (ulonglong)
                       ((((uint)((ulonglong)dVar20 >> 0x20) & 0x7fffffff) >> 0x14) - 0x3f4);
              lVar30 = (longlong)dVar20 << uVar17;
              lVar35 = -0x404aafb95ebc8770 << uVar17;
              iVar13 = -(uint)((int)lVar30 == 0);
              iVar21 = -(uint)((int)((ulonglong)lVar30 >> 0x20) == 0);
              iVar22 = -(uint)((int)lVar35 == 0);
              iVar23 = -(uint)((int)((ulonglong)lVar35 >> 0x20) == 0);
              auVar1._4_4_ = iVar21;
              auVar1._0_4_ = iVar13;
              auVar1._8_4_ = iVar22;
              auVar1._12_4_ = iVar23;
              auVar2._4_4_ = iVar21;
              auVar2._0_4_ = iVar13;
              auVar2._8_4_ = iVar22;
              auVar2._12_4_ = iVar23;
              auVar3._4_4_ = iVar21;
              auVar3._0_4_ = iVar13;
              auVar3._8_4_ = iVar22;
              auVar3._12_4_ = iVar23;
              auVar4._4_4_ = iVar21;
              auVar4._0_4_ = iVar13;
              auVar4._8_4_ = iVar22;
              auVar4._12_4_ = iVar23;
              auVar5._4_4_ = iVar21;
              auVar5._0_4_ = iVar13;
              auVar5._8_4_ = iVar22;
              auVar5._12_4_ = iVar23;
              auVar6._4_4_ = iVar21;
              auVar6._0_4_ = iVar13;
              auVar6._8_4_ = iVar22;
              auVar6._12_4_ = iVar23;
              auVar7._4_4_ = iVar21;
              auVar7._0_4_ = iVar13;
              auVar7._8_4_ = iVar22;
              auVar7._12_4_ = iVar23;
              auVar8._4_4_ = iVar21;
              auVar8._0_4_ = iVar13;
              auVar8._8_4_ = iVar22;
              auVar8._12_4_ = iVar23;
              if ((byte)(SUB161(auVar1 >> 7,0) & 1 | (SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                         (SUB161(auVar3 >> 0x17,0) & 1) << 2 | (SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                         (SUB161(auVar5 >> 0x27,0) & 1) << 4 | (SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                         (SUB161(auVar7 >> 0x37,0) & 1) << 6 | SUB161(auVar8 >> 0x3f,0) << 7) !=
                  0xff) {
                fVar10 = (float)(uVar9 & 0x8000);
                if (((ulonglong)dVar20 & 0x8000000000000000) == 0) {
                  return CONCAT44(fVar16,(uint)uVar9) & 0x7fffffff00008000;
                }
                goto LAB_01439305;
              }
            }
            fVar10 = (float)(uVar9 & 0x8000);
            if (((ulonglong)dVar20 & 0x8000000000000000) != 0) {
              return CONCAT44(fVar16,(uint)uVar9) & 0x7fffffff00008000;
            }
          }
          goto LAB_01439401;
        }
        if (uVar12 == 0xff) {
          uVar17 = (ulonglong)
                   ((((uint)((ulonglong)ABS(dVar20) >> 0x20) & 0x7fffffff) >> 0x14) - 0x3f4);
          lVar30 = (longlong)dVar20 << uVar17;
          lVar35 = auVar18._8_8_ << uVar17;
          auVar33._0_4_ = -(uint)((int)lVar30 == 0);
          auVar33._4_4_ = -(uint)((int)((ulonglong)lVar30 >> 0x20) == -0x80000000);
          auVar33._8_4_ = -(uint)((int)lVar35 == 0);
          auVar33._12_4_ = -(uint)((int)((ulonglong)lVar35 >> 0x20) == 0);
          uVar12 = ((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7) + 0x7f01 & 0x8000;
          if (0x7fffff < (uint)ABS(fVar16)) {
            iVar13 = 0xbf3f;
            goto LAB_01438f54;
          }
          goto LAB_014391f0;
        }
        fVar10 = fVar16;
        fVar15 = fVar16;
        if (fVar16 != -0.0) {
          return CONCAT44(fVar16,fVar16) & 0x7fffffffffffffff;
        }
      }
      if (((uint)fVar19 & 0x80000000) != 0) {
        return CONCAT44((uint)fVar15 & (uint)uVar12 << 0x10,fVar10) | 0x7f80000000000000;
      }
      fVar15 = (float)((uint)fVar15 & (uint)uVar12 << 0x10);
      if (fVar15 == 0.0) {
        return (ulonglong)(uint)fVar10;
      }
LAB_01439305:
      return CONCAT44(fVar15,fVar10);
    }
    fVar24 = ABS(fVar16);
    if (0x7f800000 < (uint)fVar24) {
LAB_014391df:
      return CONCAT44(fVar16,fVar10) & 0x7fffffffffffffff;
    }
  }
  fVar10 = ABS(fVar19);
  if (0x7f800000 < (uint)fVar10) {
    return CONCAT44(fVar24,fVar19) & 0xffffffff7fffffff;
  }
  fVar15 = (float)((uint)fVar16 ^ 0xbf800000);
  fVar24 = 0.0;
  if (fVar15 != 0.0) {
    if (((uint)fVar19 & 0x80000000) == 0) {
      fVar10 = (float)((uint)fVar16 >> 0x10 & 0x7f80);
      if ((uint)fVar10 < 0x3f80) {
        return CONCAT44(fVar16,(uint)fVar16 >> 0x10) & 0xffffffff00007f80 ^ 0xbf80000000000000;
      }
    }
    else {
      fVar10 = ABS(fVar16);
      if (0x3f7fffff < (uint)fVar10) {
        return CONCAT44(fVar16,fVar16) & 0xffffffff7fffffff ^ 0xbf80000000000000;
      }
    }
LAB_01439401:
    return CONCAT44(fVar15,fVar10);
  }
LAB_014393cb:
  MXCSR = MXCSR & 0xffffffde;
  return CONCAT44(fVar24,fVar10);
}

// 014398F0  __allshl  size=31  [run]
/* Library Function - Single Match
    __allshl
   
   Library: Visual Studio */

longlong __fastcall __allshl(byte param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}

// 0143990F  _strncat_s  size=192  [run]
/* Library Function - Single Match
    _strncat_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _strncat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

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
LAB_01439937:
      if (_SizeInBytes != 0) {
        pcVar3 = _Dst;
        rVar5 = _SizeInBytes;
        if ((_MaxCount == 0) || (_Src != (char *)0x0)) {
          do {
            if (*pcVar3 == '\0') break;
            pcVar3 = pcVar3 + 1;
            rVar5 = rVar5 - 1;
          } while (rVar5 != 0);
          if (rVar5 != 0) {
            if (_MaxCount == 0xffffffff) {
              iVar4 = (int)pcVar3 - (int)_Src;
              do {
                cVar1 = *_Src;
                _Src[iVar4] = cVar1;
                _Src = _Src + 1;
                if (cVar1 == '\0') break;
                rVar5 = rVar5 - 1;
              } while (rVar5 != 0);
            }
            else {
              if (_MaxCount != 0) {
                iVar4 = (int)_Src - (int)pcVar3;
                do {
                  cVar1 = pcVar3[iVar4];
                  *pcVar3 = cVar1;
                  pcVar3 = pcVar3 + 1;
                  if ((cVar1 == '\0') || (rVar5 = rVar5 - 1, rVar5 == 0)) break;
                  _MaxCount = _MaxCount - 1;
                } while (_MaxCount != 0);
              }
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
            goto LAB_01439948;
          }
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_01439937;
  piVar2 = __errno();
  eStack_14 = 0x16;
  *piVar2 = 0x16;
LAB_01439948:
  FUN_00fe56c2();
  return eStack_14;
}

// 014399CF  vscan_fn  size=110  [run]
/* Library Function - Single Match
    _vscan_fn
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl vscan_fn(code *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  char *unaff_ESI;
  size_t *psVar5;
  size_t local_20;
  undefined4 local_18;
  
  psVar5 = &local_20;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *psVar5 = 0;
    psVar5 = psVar5 + 1;
  }
  if ((unaff_ESI != (char *)0x0) && (param_2 != 0)) {
    sVar2 = _strlen(unaff_ESI);
    local_18 = 0x49;
    local_20 = 0x7fffffff;
    if (sVar2 < 0x80000000) {
      local_20 = sVar2;
    }
    uVar3 = (*param_1)(&stack0xffffffdc,param_2,param_3,param_4);
    return uVar3;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00fe56c2();
  return 0xffffffff;
}

// 01439A3D  FID_conflict:_sscanf  size=34  [run]
/* Library Function - Multiple Matches With Different Base Names
    _sscanf
    _sscanf_s
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
  iVar1 = vscan_fn(__input_l,_Format,0,&stack0x0000000c);
  return iVar1;
}

// 01439A5F  FID_conflict:__sscanf_s_l  size=35  [run]
/* Library Function - Multiple Matches With Different Base Names
    __sscanf_l
    __sscanf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___sscanf_s_l(char *_Src,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = vscan_fn(__input_l,_Format,_Locale,&stack0x00000010);
  return iVar1;
}

// 01439A82  FID_conflict:_sscanf  size=34  [run]
/* Library Function - Multiple Matches With Different Base Names
    _sscanf
    _sscanf_s
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
  iVar1 = vscan_fn(__input_s_l,_Format,0,&stack0x0000000c);
  return iVar1;
}

// 01439AA4  FID_conflict:__sscanf_s_l  size=35  [run]
/* Library Function - Multiple Matches With Different Base Names
    __sscanf_l
    __sscanf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___sscanf_s_l(char *_Src,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = vscan_fn(__input_s_l,_Format,_Locale,&stack0x00000010);
  return iVar1;
}

// 01439AC7  _memcpy_s  size=117  [run]
/* Library Function - Single Match
    _memcpy_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t eVar1;
  int *piVar2;
  
  if (_MaxCount == 0) {
LAB_01439ad4:
    eVar1 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_01439ade:
      piVar2 = __errno();
      eVar1 = 0x16;
      *piVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FID_conflict__memcpy(_Dst,_Src,_MaxCount);
        goto LAB_01439ad4;
      }
      _memset(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_01439ade;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      piVar2 = __errno();
      eVar1 = 0x22;
      *piVar2 = 0x22;
    }
    FUN_00fe56c2();
  }
  return eVar1;
}

// 01439B40  __allrem  size=178  [run]
/* Library Function - Single Match
    __allrem
   
   Library: Visual Studio */

undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar4 = param_1;
  uVar3 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_01439bed;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar7 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT14((uVar8 & 1) != 0,uVar4) >> 1);
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT44(uVar7,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY4(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_01439bed;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_01439bed:
  return CONCAT44(iVar6,iVar5);
}

// 01439C00  FID_conflict:_cos  size=72  [run]
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
    fVar1 = (float10)FUN_0143d258();
    return (double)fVar1;
  }
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 01439D50  __is_LFH_enabled  size=51  [run]
/* Library Function - Single Match
    __is_LFH_enabled
   
   Library: Visual Studio 2010 Release */

undefined4 __is_LFH_enabled(void)

{
  BOOL BVar1;
  int local_8;
  
  local_8 = -1;
  BVar1 = HeapQueryInformation(DAT_01f8f878,HeapCompatibilityInformation,&local_8,4,(PSIZE_T)0x0);
  if ((BVar1 != 0) && (local_8 == 2)) {
    return 1;
  }
  return 0;
}

// 01439D83  __expand  size=186  [run]
/* Library Function - Single Match
    __expand
   
   Library: Visual Studio 2010 Release */

void * __cdecl __expand(void *_Memory,size_t _NewSize)

{
  int *piVar1;
  void *pvVar2;
  SIZE_T SVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  int local_8;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return (void *)0x0;
  }
  if (_NewSize < 0xffffffe1) {
    if (_NewSize == 0) {
      _NewSize = 1;
    }
    SVar3 = HeapSize(DAT_01f8f878,0,_Memory);
    pvVar2 = HeapReAlloc(DAT_01f8f878,0x10,_Memory,_NewSize);
    if (pvVar2 == (LPVOID)0x0) {
      if ((SVar3 < 0x4001) && (_NewSize <= SVar3)) {
        local_8 = -1;
        BVar4 = HeapQueryInformation
                          (DAT_01f8f878,HeapCompatibilityInformation,&local_8,4,(PSIZE_T)0x0);
        if ((BVar4 != 0) && (local_8 == 2)) {
          return _Memory;
        }
      }
      piVar1 = __errno();
      DVar5 = GetLastError();
      iVar6 = __get_errno_from_oserr(DVar5);
      *piVar1 = iVar6;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}

// 01439E3D  _CallDestructExceptionObject  size=56  [run]
/* Library Function - Single Match
    _CallDestructExceptionObject
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void _CallDestructExceptionObject(int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  
  if ((*param_1 == -0x1f928c9d) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_016f51d0),
     BVar1 != 0)) {
    ___DestructExceptionObject(param_1,param_2);
  }
  return;
}

// 01439E80  _ValidateScopeTableHandlers  size=178  [run]
/* Library Function - Single Match
    _ValidateScopeTableHandlers
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall _ValidateScopeTableHandlers(int param_1,int param_2)

{
  int *piVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  uint uVar4;
  PBYTE unaff_EDI;
  
  p_Var2 = (PIMAGE_SECTION_HEADER)0x0;
  uVar3 = 0xffffffff;
  while( true ) {
    if (param_1 == -1) {
      return 1;
    }
    piVar1 = (int *)(param_2 + param_1 * 0xc);
    uVar4 = piVar1[2] - (int)unaff_EDI & 0xfffff000;
    if (((uVar4 != uVar3) &&
        ((((uVar3 = uVar4, p_Var2 == (PIMAGE_SECTION_HEADER)0x0 || (uVar4 < p_Var2->VirtualAddress))
          || ((p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress <= uVar4)) &&
         ((p_Var2 = __FindPESection(unaff_EDI,uVar4), p_Var2 == (PIMAGE_SECTION_HEADER)0x0 ||
          ((p_Var2->Characteristics & 0x20000000) == 0)))))) ||
       (((piVar1[1] != 0 &&
         ((uVar4 = piVar1[1] - (int)unaff_EDI & 0xfffff000, uVar4 != uVar3 &&
          ((uVar3 = uVar4, uVar4 < p_Var2->VirtualAddress ||
           ((p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress <= uVar4)))))) &&
        ((p_Var2 = __FindPESection(unaff_EDI,uVar4), p_Var2 == (PIMAGE_SECTION_HEADER)0x0 ||
         ((p_Var2->Characteristics & 0x20000000) == 0)))))) break;
    param_1 = *piVar1;
  }
  return 0;
}

// 01439F40  __ValidateEH3RN  size=810  [run]
/* Library Function - Single Match
    __ValidateEH3RN
   
   Library: Visual Studio 2010 Release */

undefined4 __ValidateEH3RN(void *param_1)

{
  uint uVar1;
  PBYTE pBVar2;
  PVOID pImageBase;
  uint uVar3;
  BOOL BVar4;
  int iVar5;
  PIMAGE_SECTION_HEADER p_Var6;
  SIZE_T SVar7;
  uint *puVar8;
  int iVar9;
  PBYTE pBVar10;
  bool bVar11;
  uint uStack_54;
  _MEMORY_BASIC_INFORMATION local_44;
  uint local_28;
  uint local_24;
  uint *local_20;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_018e8764 ^ 0x187a728;
  uStack_54 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_1c = (undefined1 *)&uStack_54;
  local_20 = *(uint **)((int)param_1 + 8);
  if ((((uint)local_20 & 3) != 0) || ((StackLimit <= local_20 && (local_20 < StackBase)))) {
    return 0;
  }
  local_28 = *(uint *)((int)param_1 + 0xc);
  if (local_28 == 0xffffffff) {
    return 1;
  }
  bVar11 = false;
  uVar3 = 0;
  puVar8 = local_20;
  do {
    if ((*puVar8 != 0xffffffff) && (uVar3 <= *puVar8)) {
      return 0;
    }
    if (puVar8[1] != 0) {
      bVar11 = true;
    }
    uVar3 = uVar3 + 1;
    puVar8 = puVar8 + 3;
  } while (uVar3 <= local_28);
  if (bVar11) {
    if (*(void **)((int)param_1 + -8) < StackLimit) {
      return 0;
    }
    if (param_1 <= *(void **)((int)param_1 + -8)) {
      return 0;
    }
  }
  local_24 = (uint)local_20 & 0xfffff000;
  for (iVar9 = 0; ExceptionList = &local_14, puVar8 = &uStack_54, iVar9 < DAT_0225ba00;
      iVar9 = iVar9 + 1) {
    uVar3 = (&DAT_0225ba08)[iVar9 * 2];
    pBVar10 = (PBYTE)(&DAT_0225ba0c)[iVar9 * 2];
    if (uVar3 == local_24) {
      local_8 = 0;
      BVar4 = __ValidateImageBase(pBVar10);
      puVar8 = (uint *)local_1c;
      if (((BVar4 != 0) &&
          (iVar5 = _ValidateScopeTableHandlers(local_20), puVar8 = (uint *)local_1c, iVar5 != 0)) &&
         (p_Var6 = __FindPESection(pBVar10,*(int *)((int)param_1 + 4) - (int)pBVar10),
         puVar8 = (uint *)local_1c, p_Var6 != (PIMAGE_SECTION_HEADER)0x0)) {
        if (iVar9 < 1) {
          ExceptionList = local_14;
          return 1;
        }
        LOCK();
        UNLOCK();
        if (DAT_0225ba04 != 0) {
          DAT_0225ba04 = 1;
          ExceptionList = local_14;
          return 1;
        }
        if ((&DAT_0225ba08)[iVar9 * 2] == local_24) goto LAB_0143a0d6;
        iVar9 = DAT_0225ba00 + -1;
        if (-1 < iVar9) goto LAB_0143a0a7;
        goto LAB_0143a0c7;
      }
      break;
    }
  }
  local_1c = (undefined1 *)puVar8;
  local_8 = 0xfffffffe;
  SVar7 = VirtualQuery(local_20,&local_44,0x1c);
  pImageBase = local_44.AllocationBase;
  if (SVar7 == 0) {
    ExceptionList = local_14;
    return 1;
  }
  if ((local_44.Type != 0x1000000) ||
     (BVar4 = __ValidateImageBase(local_44.AllocationBase), BVar4 == 0)) {
    ExceptionList = local_14;
    return 0xffffffff;
  }
  if (((byte)local_44.Protect & 0xcc) != 0) {
    p_Var6 = __FindPESection(pImageBase,(int)local_20 - (int)pImageBase);
    if (p_Var6 == (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return 0;
    }
    if ((p_Var6->Characteristics & 0x80000000) != 0) {
      ExceptionList = local_14;
      return 0;
    }
  }
  iVar9 = _ValidateScopeTableHandlers(local_20);
  if (iVar9 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  p_Var6 = __FindPESection(pImageBase,*(int *)((int)param_1 + 4) - (int)pImageBase);
  if (p_Var6 == (PIMAGE_SECTION_HEADER)0x0) {
    ExceptionList = local_14;
    return 0;
  }
  LOCK();
  UNLOCK();
  if (DAT_0225ba04 != 0) {
    DAT_0225ba04 = 1;
    ExceptionList = local_14;
    return 1;
  }
  iVar9 = DAT_0225ba00;
  if (0 < DAT_0225ba00) {
    puVar8 = (uint *)(&DAT_0225ba00 + DAT_0225ba00 * 2);
    do {
      if (*puVar8 == local_24) break;
      iVar9 = iVar9 + -1;
      puVar8 = puVar8 + -2;
    } while (0 < iVar9);
  }
  if (iVar9 == 0) {
    iVar9 = 0xf;
    if (DAT_0225ba00 < 0x10) {
      iVar9 = DAT_0225ba00;
    }
    if (-1 < iVar9) {
      puVar8 = &DAT_0225ba08;
      iVar9 = iVar9 + 1;
      do {
        uVar3 = *puVar8;
        pBVar10 = (PBYTE)puVar8[1];
        *puVar8 = local_24;
        puVar8[1] = (uint)local_44.AllocationBase;
        puVar8 = puVar8 + 2;
        iVar9 = iVar9 + -1;
        local_24 = uVar3;
        local_44.AllocationBase = pBVar10;
      } while (iVar9 != 0);
    }
    if (DAT_0225ba00 < 0x10) {
      DAT_0225ba00 = DAT_0225ba00 + 1;
    }
  }
  else {
    (&DAT_0225ba04)[iVar9 * 2] = (int)local_44.AllocationBase;
  }
LAB_0143a266:
  LOCK();
  UNLOCK();
  DAT_0225ba04 = 0;
  ExceptionList = local_14;
  return 1;
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
LAB_0143a0a7:
    if ((&DAT_0225ba08)[iVar9 * 2] == local_24) {
      uVar3 = (&DAT_0225ba08)[iVar9 * 2];
      pBVar10 = (PBYTE)(&DAT_0225ba0c)[iVar9 * 2];
      break;
    }
  }
  bVar11 = false;
  if (iVar9 < 0) {
LAB_0143a0c7:
    if (DAT_0225ba00 < 0x10) {
      DAT_0225ba00 = DAT_0225ba00 + 1;
    }
    iVar9 = DAT_0225ba00 + -1;
LAB_0143a0d6:
    bVar11 = iVar9 < 0;
  }
  if ((iVar9 != 0 && !bVar11) && (iVar5 = 0, -1 < iVar9)) {
    do {
      uVar1 = (&DAT_0225ba08)[iVar5 * 2];
      pBVar2 = (PBYTE)(&DAT_0225ba0c)[iVar5 * 2];
      (&DAT_0225ba08)[iVar5 * 2] = uVar3;
      (&DAT_0225ba0c)[iVar5 * 2] = pBVar10;
      iVar5 = iVar5 + 1;
      uVar3 = uVar1;
      pBVar10 = pBVar2;
    } while (iVar5 <= iVar9);
  }
  goto LAB_0143a266;
}

// 0143A286  __openfile  size=663  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __openfile
   
   Library: Visual Studio 2010 Release */

FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uchar uVar6;
  int *piVar7;
  int iVar8;
  errno_t eVar9;
  uint _OpenFlag;
  char *pcVar10;
  uchar *puVar11;
  uchar *puVar12;
  uint local_8;
  
  _OpenFlag = 0;
  bVar4 = false;
  bVar3 = false;
  bVar5 = false;
  for (pcVar10 = _Mode; *pcVar10 == ' '; pcVar10 = pcVar10 + 1) {
  }
  cVar1 = *pcVar10;
  if (cVar1 == 'a') {
    _OpenFlag = 0x109;
LAB_0143a2e5:
    local_8 = DAT_0225ba88 | 2;
  }
  else {
    if (cVar1 != 'r') {
      if (cVar1 != 'w') {
        piVar7 = __errno();
        *piVar7 = 0x16;
        FUN_00fe56c2();
        return (FILE *)0x0;
      }
      _OpenFlag = 0x301;
      goto LAB_0143a2e5;
    }
    local_8 = DAT_0225ba88 | 1;
  }
  bVar2 = true;
  puVar11 = (uchar *)(pcVar10 + 1);
  uVar6 = *puVar11;
  if (uVar6 != '\0') {
    do {
      if (!bVar2) break;
      if ((char)uVar6 < 'T') {
        if (uVar6 == 'S') {
          if (bVar3) goto LAB_0143a40f;
          bVar3 = true;
          _OpenFlag = _OpenFlag | 0x20;
        }
        else if (uVar6 != ' ') {
          if (uVar6 == '+') {
            if ((_OpenFlag & 2) != 0) goto LAB_0143a40f;
            _OpenFlag = _OpenFlag & 0xfffffffe | 2;
            local_8 = local_8 & 0xfffffffc | 0x80;
          }
          else if (uVar6 == ',') {
            bVar5 = true;
LAB_0143a40f:
            bVar2 = false;
          }
          else if (uVar6 == 'D') {
            if ((_OpenFlag & 0x40) != 0) goto LAB_0143a40f;
            _OpenFlag = _OpenFlag | 0x40;
          }
          else if (uVar6 == 'N') {
            _OpenFlag = _OpenFlag | 0x80;
          }
          else {
            if (uVar6 != 'R') goto LAB_0143a4c4;
            if (bVar3) goto LAB_0143a40f;
            bVar3 = true;
            _OpenFlag = _OpenFlag | 0x10;
          }
        }
      }
      else if (uVar6 == 'T') {
        if ((_OpenFlag & 0x1000) != 0) goto LAB_0143a40f;
        _OpenFlag = _OpenFlag | 0x1000;
      }
      else if (uVar6 == 'b') {
        if ((_OpenFlag & 0xc000) != 0) goto LAB_0143a40f;
        _OpenFlag = _OpenFlag | 0x8000;
      }
      else if (uVar6 == 'c') {
        if (bVar4) goto LAB_0143a40f;
        local_8 = local_8 | 0x4000;
        bVar4 = true;
      }
      else if (uVar6 == 'n') {
        if (bVar4) goto LAB_0143a40f;
        local_8 = local_8 & 0xffffbfff;
        bVar4 = true;
      }
      else {
        if (uVar6 != 't') goto LAB_0143a4c4;
        if ((_OpenFlag & 0xc000) != 0) goto LAB_0143a40f;
        _OpenFlag = _OpenFlag | 0x4000;
      }
      puVar11 = puVar11 + 1;
      uVar6 = *puVar11;
    } while (uVar6 != '\0');
    if (bVar5) {
      for (; *puVar11 == ' '; puVar11 = puVar11 + 1) {
      }
      iVar8 = __mbsnbcmp("ccs",puVar11,3);
      if (iVar8 != 0) goto LAB_0143a4c4;
      for (puVar11 = puVar11 + 3; *puVar11 == ' '; puVar11 = puVar11 + 1) {
      }
      if (*puVar11 != '=') goto LAB_0143a4c4;
      do {
        puVar12 = puVar11;
        puVar11 = puVar12 + 1;
      } while (*puVar11 == ' ');
      iVar8 = __mbsnbicmp(puVar11,(uchar *)"UTF-8",5);
      if (iVar8 == 0) {
        puVar11 = puVar12 + 6;
        _OpenFlag = _OpenFlag | 0x40000;
      }
      else {
        iVar8 = __mbsnbicmp(puVar11,(uchar *)"UTF-16LE",8);
        if (iVar8 == 0) {
          puVar11 = puVar12 + 9;
          _OpenFlag = _OpenFlag | 0x20000;
        }
        else {
          iVar8 = __mbsnbicmp(puVar11,(uchar *)"UNICODE",7);
          if (iVar8 != 0) goto LAB_0143a4c4;
          puVar11 = puVar12 + 8;
          _OpenFlag = _OpenFlag | 0x10000;
        }
      }
    }
  }
  for (; *puVar11 == ' '; puVar11 = puVar11 + 1) {
  }
  if (*puVar11 == '\0') {
    eVar9 = __sopen_s((int *)&_Mode,_Filename,_OpenFlag,_ShFlag,0x180);
    if (eVar9 != 0) {
      return (FILE *)0x0;
    }
    _DAT_01f8f758 = _DAT_01f8f758 + 1;
    _File->_flag = local_8;
    _File->_cnt = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_tmpfname = (char *)0x0;
    _File->_file = (int)_Mode;
    return _File;
  }
LAB_0143a4c4:
  piVar7 = __errno();
  *piVar7 = 0x16;
  FUN_00fe56c2();
  return (FILE *)0x0;
}

// 0143A51D  __getstream  size=295  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __getstream
   
   Library: Visual Studio 2010 Release */

FILE * __cdecl __getstream(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  BOOL BVar5;
  int _Index;
  FILE *pFVar6;
  FILE *_File;
  
  pFVar6 = (FILE *)0x0;
  __lock(1);
  _Index = 0;
  do {
    _File = pFVar6;
    if (DAT_0225d0a0 <= _Index) {
LAB_0143a616:
      if (_File != (FILE *)0x0) {
        _File->_flag = _File->_flag & 0x8000;
        _File->_cnt = 0;
        _File->_base = (char *)0x0;
        _File->_ptr = (char *)0x0;
        _File->_tmpfname = (char *)0x0;
        _File->_file = -1;
      }
      FUN_0143a647();
      return _File;
    }
    piVar1 = (int *)(DAT_0225c084 + _Index * 4);
    if (*piVar1 == 0) {
      pvVar4 = __malloc_crt(0x38);
      *(void **)(DAT_0225c084 + _Index * 4) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        BVar5 = InitializeCriticalSectionAndSpinCount
                          ((LPCRITICAL_SECTION)(*(int *)(DAT_0225c084 + _Index * 4) + 0x20),4000);
        if (BVar5 == 0) {
          _free(*(void **)(DAT_0225c084 + _Index * 4));
          *(undefined4 *)(DAT_0225c084 + _Index * 4) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_0225c084 + _Index * 4) + 0x20));
          _File = *(FILE **)(DAT_0225c084 + _Index * 4);
          _File->_flag = 0;
        }
      }
      goto LAB_0143a616;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && ((uVar2 & 0x8000) == 0)) {
      if ((_Index - 3U < 0x11) && (iVar3 = __mtinitlocknum(_Index + 0x10), iVar3 == 0))
      goto LAB_0143a616;
      __lock_file2(_Index,*(void **)(DAT_0225c084 + _Index * 4));
      _File = *(FILE **)(DAT_0225c084 + _Index * 4);
      if ((_File->_flag & 0x83) == 0) goto LAB_0143a616;
      __unlock_file2(_Index,_File);
    }
    _Index = _Index + 1;
  } while( true );
}

// 0143A647  FUN_0143a647  size=9  [run]
void FUN_0143a647(void)

{
  FUN_00fec3c5(1);
  return;
}

// 0143A650  __lseek_nolock  size=117  [run]
/* Library Function - Single Match
    __lseek_nolock
   
   Library: Visual Studio 2010 Release */

long __cdecl __lseek_nolock(int _FileHandle,long _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
    DVar3 = 0xffffffff;
  }
  else {
    DVar3 = SetFilePointer(hFile,_Offset,(PLONG)0x0,_Origin);
    if (DVar3 == 0xffffffff) {
      uVar4 = GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = (byte *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40);
      *pbVar1 = *pbVar1 & 0xfd;
    }
    else {
      __dosmaperr(uVar4);
      DVar3 = 0xffffffff;
    }
  }
  return DVar3;
}

// 0143A6C5  __lseek  size=201  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseek
   
   Library: Visual Studio 2010 Release */

long __cdecl __lseek(int _FileHandle,long _Offset,int _Origin)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  long local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0225bf70)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __lseek_nolock(_FileHandle,_Offset,_Origin);
        }
        FUN_0143a791();
        return local_20;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00fe56c2();
  }
  return -1;
}

// 0143A791  FUN_0143a791  size=8  [run]
void FUN_0143a791(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}

// 0143A799  __filbuf  size=290  [run]
/* Library Function - Single Match
    __filbuf
   
   Library: Visual Studio 2010 Release */

int __cdecl __filbuf(FILE *_File)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  char *_DstBuf;
  
  if (_File == (FILE *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
  }
  else {
    uVar4 = _File->_flag;
    if (((uVar4 & 0x83) != 0) && ((uVar4 & 0x40) == 0)) {
      if ((uVar4 & 2) == 0) {
        _File->_flag = uVar4 | 1;
        if ((uVar4 & 0x10c) == 0) {
          __getbuf(_File);
        }
        else {
          _File->_ptr = _File->_base;
        }
        uVar4 = _File->_bufsiz;
        _DstBuf = _File->_base;
        iVar3 = __fileno(_File);
        iVar3 = __read(iVar3,_DstBuf,uVar4);
        _File->_cnt = iVar3;
        if ((iVar3 != 0) && (iVar3 != -1)) {
          if ((_File->_flag & 0x82) == 0) {
            iVar3 = __fileno(_File);
            if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
              puVar5 = &DAT_018e9590;
            }
            else {
              iVar3 = __fileno(_File);
              uVar4 = __fileno(_File);
              puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0225bf80)[iVar3 >> 5]);
            }
            if ((puVar5[4] & 0x82) == 0x82) {
              _File->_flag = _File->_flag | 0x2000;
            }
          }
          if (((_File->_bufsiz == 0x200) && ((_File->_flag & 8U) != 0)) &&
             ((_File->_flag & 0x400U) == 0)) {
            _File->_bufsiz = 0x1000;
          }
          _File->_cnt = _File->_cnt + -1;
          bVar1 = *_File->_ptr;
          _File->_ptr = _File->_ptr + 1;
          return (uint)bVar1;
        }
        _File->_flag = _File->_flag | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
        _File->_cnt = 0;
      }
      else {
        _File->_flag = uVar4 | 0x20;
      }
    }
  }
  return -1;
}

// 0143A8BB  __read_nolock  size=1463  [run]
/* Library Function - Single Match
    __read_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __read_nolock(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  ulong *puVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  BOOL BVar8;
  DWORD DVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int unaff_EDI;
  bool bVar14;
  longlong lVar15;
  undefined2 uVar16;
  uint local_1c;
  int local_18;
  byte *local_14;
  byte *local_10;
  undefined2 local_c;
  char local_6;
  char local_5;
  
  uVar1 = _MaxCharCount;
  local_18 = -2;
  if (_FileHandle == -2) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    return -1;
  }
  if ((_FileHandle < 0) || (DAT_0225bf70 <= (uint)_FileHandle)) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    FUN_00fe56c2();
    return -1;
  }
  piVar5 = &DAT_0225bf80 + (_FileHandle >> 5);
  iVar13 = (_FileHandle & 0x1fU) * 0x40;
  bVar2 = *(byte *)(*piVar5 + 4 + iVar13);
  if ((bVar2 & 1) == 0) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    goto LAB_0143a9ba;
  }
  if (_MaxCharCount < 0x80000000) {
    local_10 = (byte *)0x0;
    if ((_MaxCharCount == 0) || ((bVar2 & 2) != 0)) {
      return 0;
    }
    if (_DstBuf != (void *)0x0) {
      local_6 = (char)(*(char *)(*piVar5 + 0x24 + iVar13) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~_MaxCharCount & 1) == 0) goto LAB_0143a9a8;
        uVar6 = _MaxCharCount >> 1;
        _MaxCharCount = 4;
        if (3 < uVar6) {
          _MaxCharCount = uVar6;
        }
        pbVar11 = __malloc_crt(_MaxCharCount);
        local_14 = pbVar11;
        if (pbVar11 == (byte *)0x0) {
          piVar5 = __errno();
          *piVar5 = 0xc;
          puVar4 = ___doserrno();
          *puVar4 = 8;
          return -1;
        }
        lVar15 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
        iVar12 = *piVar5;
        *(int *)(iVar13 + 0x28 + iVar12) = (int)lVar15;
        *(int *)(iVar13 + 0x2c + iVar12) = (int)((ulonglong)lVar15 >> 0x20);
      }
      else {
        if (local_6 == '\x02') {
          if ((~_MaxCharCount & 1) == 0) goto LAB_0143a9a8;
          _MaxCharCount = _MaxCharCount & 0xfffffffe;
        }
        local_14 = _DstBuf;
        pbVar11 = _DstBuf;
      }
      pbVar7 = pbVar11;
      uVar6 = _MaxCharCount;
      if ((((*(byte *)(*piVar5 + iVar13 + 4) & 0x48) != 0) &&
          (bVar2 = *(byte *)(*piVar5 + iVar13 + 5), bVar2 != 10)) && (_MaxCharCount != 0)) {
        uVar6 = _MaxCharCount - 1;
        *pbVar11 = bVar2;
        pbVar7 = pbVar11 + 1;
        local_10 = (byte *)0x1;
        *(undefined1 *)(iVar13 + 5 + *piVar5) = 10;
        if (((local_6 != '\0') && (bVar2 = *(byte *)(iVar13 + 0x25 + *piVar5), bVar2 != 10)) &&
           (uVar6 != 0)) {
          *pbVar7 = bVar2;
          pbVar7 = pbVar11 + 2;
          uVar6 = _MaxCharCount - 2;
          local_10 = (byte *)0x2;
          *(undefined1 *)(iVar13 + 0x25 + *piVar5) = 10;
          if (((local_6 == '\x01') && (bVar2 = *(byte *)(iVar13 + 0x26 + *piVar5), bVar2 != 10)) &&
             (uVar6 != 0)) {
            *pbVar7 = bVar2;
            pbVar7 = pbVar11 + 3;
            local_10 = (byte *)0x3;
            *(undefined1 *)(iVar13 + 0x26 + *piVar5) = 10;
            uVar6 = _MaxCharCount - 3;
          }
        }
      }
      _MaxCharCount = uVar6;
      BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),pbVar7,_MaxCharCount,&local_1c,
                       (LPOVERLAPPED)0x0);
      if (((BVar8 == 0) || ((int)local_1c < 0)) || (_MaxCharCount < local_1c)) {
        uVar10 = GetLastError();
        if (uVar10 != 5) {
          if (uVar10 == 0x6d) {
            local_18 = 0;
            goto LAB_0143acc7;
          }
          goto LAB_0143acbc;
        }
        piVar5 = __errno();
        *piVar5 = 9;
        puVar4 = ___doserrno();
        *puVar4 = 5;
      }
      else {
        local_10 = (byte *)((int)local_10 + local_1c);
        pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
        if ((*pbVar7 & 0x80) == 0) goto LAB_0143acc7;
        if (local_6 == '\x02') {
          if ((local_1c == 0) || (*(short *)pbVar11 != 10)) {
            *pbVar7 = *pbVar7 & 0xfb;
          }
          else {
            *pbVar7 = *pbVar7 | 4;
          }
          local_10 = local_14 + (int)local_10;
          _MaxCharCount = (uint)local_14;
          pbVar11 = local_14;
          if (local_14 < local_10) {
            do {
              sVar3 = *(short *)_MaxCharCount;
              if (sVar3 == 0x1a) {
                pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
                if ((*pbVar7 & 0x40) == 0) {
                  *pbVar7 = *pbVar7 | 2;
                }
                else {
                  *(undefined2 *)pbVar11 = *(undefined2 *)_MaxCharCount;
                  pbVar11 = pbVar11 + 2;
                }
                break;
              }
              if (sVar3 == 0xd) {
                if (_MaxCharCount < local_10 + -2) {
                  if (*(short *)(_MaxCharCount + 2) == 10) {
                    uVar1 = _MaxCharCount + 4;
                    goto LAB_0143ad67;
                  }
LAB_0143adfa:
                  _MaxCharCount = _MaxCharCount + 2;
                  uVar16 = 0xd;
LAB_0143adfc:
                  *(undefined2 *)pbVar11 = uVar16;
                }
                else {
                  uVar1 = _MaxCharCount + 2;
                  BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_c,2,&local_1c,
                                   (LPOVERLAPPED)0x0);
                  if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                  goto LAB_0143adfa;
                  if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                    if ((pbVar11 == local_14) && (local_c == 10)) goto LAB_0143ad67;
                    __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                    if (local_c == 10) goto LAB_0143ae03;
                    goto LAB_0143adfa;
                  }
                  if (local_c == 10) {
LAB_0143ad67:
                    _MaxCharCount = uVar1;
                    uVar16 = 10;
                    goto LAB_0143adfc;
                  }
                  pbVar11[0] = 0xd;
                  pbVar11[1] = 0;
                  *(undefined1 *)(iVar13 + 5 + *piVar5) = (undefined1)local_c;
                  *(undefined1 *)(iVar13 + 0x25 + *piVar5) = local_c._1_1_;
                  *(undefined1 *)(iVar13 + 0x26 + *piVar5) = 10;
                  _MaxCharCount = uVar1;
                }
                pbVar11 = pbVar11 + 2;
                uVar1 = _MaxCharCount;
              }
              else {
                *(short *)pbVar11 = sVar3;
                pbVar11 = pbVar11 + 2;
                uVar1 = _MaxCharCount + 2;
              }
LAB_0143ae03:
              _MaxCharCount = uVar1;
            } while (_MaxCharCount < local_10);
          }
          local_10 = (byte *)((int)pbVar11 - (int)local_14);
          goto LAB_0143acc7;
        }
        if ((local_1c == 0) || (*pbVar11 != 10)) {
          *pbVar7 = *pbVar7 & 0xfb;
        }
        else {
          *pbVar7 = *pbVar7 | 4;
        }
        local_10 = local_14 + (int)local_10;
        _MaxCharCount = (uint)local_14;
        pbVar11 = local_14;
        if (local_14 < local_10) {
          do {
            bVar2 = *(byte *)_MaxCharCount;
            if (bVar2 == 0x1a) {
              pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
              if ((*pbVar7 & 0x40) == 0) {
                *pbVar7 = *pbVar7 | 2;
              }
              else {
                *pbVar11 = *(byte *)_MaxCharCount;
                pbVar11 = pbVar11 + 1;
              }
              break;
            }
            if (bVar2 == 0xd) {
              if (_MaxCharCount < local_10 + -1) {
                if (*(char *)(_MaxCharCount + 1) == '\n') {
                  uVar6 = _MaxCharCount + 2;
                  goto LAB_0143ab47;
                }
LAB_0143abbe:
                _MaxCharCount = _MaxCharCount + 1;
                *pbVar11 = 0xd;
              }
              else {
                uVar6 = _MaxCharCount + 1;
                BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_5,1,&local_1c,
                                 (LPOVERLAPPED)0x0);
                if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                goto LAB_0143abbe;
                if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                  if ((pbVar11 == local_14) && (local_5 == '\n')) goto LAB_0143ab47;
                  __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                  if (local_5 == '\n') goto LAB_0143abc2;
                  goto LAB_0143abbe;
                }
                if (local_5 == '\n') {
LAB_0143ab47:
                  _MaxCharCount = uVar6;
                  *pbVar11 = 10;
                }
                else {
                  *pbVar11 = 0xd;
                  *(char *)(iVar13 + 5 + *piVar5) = local_5;
                  _MaxCharCount = uVar6;
                }
              }
              pbVar11 = pbVar11 + 1;
              uVar6 = _MaxCharCount;
            }
            else {
              *pbVar11 = bVar2;
              pbVar11 = pbVar11 + 1;
              uVar6 = _MaxCharCount + 1;
            }
LAB_0143abc2:
            _MaxCharCount = uVar6;
          } while (_MaxCharCount < local_10);
        }
        local_10 = (byte *)((int)pbVar11 - (int)local_14);
        if ((local_6 != '\x01') || (local_10 == (byte *)0x0)) goto LAB_0143acc7;
        bVar2 = pbVar11[-1];
        if ((char)bVar2 < '\0') {
          iVar12 = 1;
          pbVar11 = pbVar11 + -1;
          while ((((&DAT_01b33db8)[bVar2] == '\0' && (iVar12 < 5)) && (local_14 <= pbVar11))) {
            pbVar11 = pbVar11 + -1;
            bVar2 = *pbVar11;
            iVar12 = iVar12 + 1;
          }
          if ((char)(&DAT_01b33db8)[*pbVar11] == 0) {
            piVar5 = __errno();
            *piVar5 = 0x2a;
            goto LAB_0143acc3;
          }
          if ((char)(&DAT_01b33db8)[*pbVar11] + 1 == iVar12) {
            pbVar11 = pbVar11 + iVar12;
          }
          else if ((*(byte *)(*piVar5 + 4 + iVar13) & 0x48) == 0) {
            __lseeki64_nolock(_FileHandle,CONCAT44(1,-iVar12 >> 0x1f),unaff_EDI);
          }
          else {
            pbVar7 = pbVar11 + 1;
            *(byte *)(*piVar5 + 5 + iVar13) = *pbVar11;
            if (1 < iVar12) {
              *(byte *)(iVar13 + 0x25 + *piVar5) = *pbVar7;
              pbVar7 = pbVar11 + 2;
            }
            if (iVar12 == 3) {
              *(byte *)(iVar13 + 0x26 + *piVar5) = *pbVar7;
              pbVar7 = pbVar7 + 1;
            }
            pbVar11 = pbVar7 + -iVar12;
          }
        }
        iVar12 = (int)pbVar11 - (int)local_14;
        local_10 = (byte *)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_14,iVar12,_DstBuf,uVar1 >> 1);
        if (local_10 != (byte *)0x0) {
          bVar14 = local_10 != (byte *)iVar12;
          local_10 = (byte *)((int)local_10 * 2);
          *(uint *)(iVar13 + 0x30 + *piVar5) = (uint)bVar14;
          goto LAB_0143acc7;
        }
        uVar10 = GetLastError();
LAB_0143acbc:
        __dosmaperr(uVar10);
      }
LAB_0143acc3:
      local_18 = -1;
LAB_0143acc7:
      if (local_14 != _DstBuf) {
        _free(local_14);
      }
      if (local_18 == -2) {
        return (int)local_10;
      }
      return local_18;
    }
  }
LAB_0143a9a8:
  puVar4 = ___doserrno();
  *puVar4 = 0;
  piVar5 = __errno();
  *piVar5 = 0x16;
LAB_0143a9ba:
  FUN_00fe56c2();
  return -1;
}

// 0143AE72  __read  size=235  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __read
   
   Library: Visual Studio 2010 Release */

int __cdecl __read(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    return -1;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0225bf70)) {
    iVar3 = (_FileHandle & 0x1fU) * 0x40;
    if ((*(byte *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      if (_MaxCharCount < 0x80000000) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          puVar1 = ___doserrno();
          *puVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __read_nolock(_FileHandle,_DstBuf,_MaxCharCount);
        }
        FUN_0143af60();
        return local_20;
      }
      puVar1 = ___doserrno();
      *puVar1 = 0;
      piVar2 = __errno();
      *piVar2 = 0x16;
      goto LAB_0143aec0;
    }
  }
  puVar1 = ___doserrno();
  *puVar1 = 0;
  piVar2 = __errno();
  *piVar2 = 9;
LAB_0143aec0:
  FUN_00fe56c2();
  return -1;
}

// 0143AF60  FUN_0143af60  size=8  [run]
void FUN_0143af60(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}

// 0143AF68  ___check_float_string  size=87  [run]
/* Library Function - Single Match
    ___check_float_string
   
   Library: Visual Studio 2010 Release */

undefined4 ___check_float_string(size_t param_1,void *param_2,undefined4 *param_3)

{
  size_t _Count;
  void *pvVar1;
  size_t *unaff_ESI;
  undefined4 *unaff_EDI;
  
  _Count = *unaff_ESI;
  if (param_1 == _Count) {
    if ((void *)*unaff_EDI == param_2) {
      pvVar1 = __calloc_crt(_Count,2);
      *unaff_EDI = pvVar1;
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      *param_3 = 1;
      FID_conflict__memcpy((void *)*unaff_EDI,param_2,*unaff_ESI);
    }
    else {
      pvVar1 = __recalloc_crt((void *)*unaff_EDI,_Count,2);
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      *unaff_EDI = pvVar1;
    }
    *unaff_ESI = *unaff_ESI << 1;
  }
  return 1;
}

// 0143AFBF  FUN_0143afbf  size=18  [run]
undefined4 FUN_0143afbf(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0xbc);
}

// 0143AFD1  __hextodec  size=32  [run]
/* Library Function - Single Match
    __hextodec
   
   Library: Visual Studio 2010 Release */

uint __hextodec(byte param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _isdigit((uint)param_1);
  uVar2 = (uint)(char)param_1;
  if (iVar1 == 0) {
    uVar2 = (uVar2 & 0xffffffdf) - 7;
  }
  return uVar2;
}

// 0143AFF1  __inc  size=22  [run]
/* Library Function - Single Match
    __inc
   
   Library: Visual Studio 2010 Release */

uint __fastcall __inc(undefined4 param_1,FILE *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &param_2->_cnt;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *param_2->_ptr;
    param_2->_ptr = param_2->_ptr + 1;
    return (uint)bVar2;
  }
  uVar3 = __filbuf(param_2);
  return uVar3;
}

// 0143B007  __un_inc  size=19  [run]
/* Library Function - Single Match
    __un_inc
   
   Library: Visual Studio 2010 Release */

void __un_inc(int param_1,FILE *param_2)

{
  if (param_1 != -1) {
    __ungetc_nolock(param_1,param_2);
    return;
  }
  return;
}

// 0143B01A  __whiteout  size=42  [run]
/* Library Function - Single Match
    __whiteout
   
   Library: Visual Studio 2010 Release */

uint __whiteout(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  
  do {
    *unaff_ESI = *unaff_ESI + 1;
    uVar1 = __inc();
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    iVar2 = _isspace(uVar1 & 0xff);
  } while (iVar2 != 0);
  return uVar1;
}

// 0143B044  __input_l  size=4100  [run]
/* Library Function - Single Match
    __input_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __input_l(FILE *_File,uchar *param_2,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  byte bVar10;
  uint uVar11;
  wchar_t *pwVar12;
  byte *pbVar13;
  uint uVar14;
  wchar_t *pwVar15;
  byte *pbVar16;
  bool bVar17;
  longlong lVar18;
  undefined1 *puVar19;
  localeinfo_struct *plVar20;
  va_list local_204;
  localeinfo_struct local_200;
  int local_1f8;
  char local_1f4;
  wchar_t local_1f0 [2];
  va_list local_1ec;
  int local_1e8;
  byte local_1e4;
  undefined1 local_1e3;
  undefined4 local_1e0;
  int local_1dc;
  byte local_1d5;
  int local_1d4;
  int local_1d0;
  undefined8 local_1cc;
  wchar_t *local_1c4;
  byte *local_1c0;
  int local_1bc;
  uint local_1b8;
  undefined1 *local_1b4;
  int local_1b0;
  byte local_1ac;
  char local_1ab;
  char local_1aa;
  char local_1a9;
  FILE *local_1a8;
  char local_1a1;
  int local_1a0;
  char local_199;
  uint local_198;
  char local_191;
  int local_190;
  byte local_189;
  undefined1 local_188 [352];
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_1ec = _ArgList;
  local_1b4 = local_188;
  local_1a8 = _File;
  local_1e0 = 0x15e;
  local_1d4 = 0;
  local_1f0[0] = L'\0';
  local_1f0[1] = L'\0';
  local_198 = 0;
  if ((param_2 == (uchar *)0x0) || (_File == (FILE *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00fe56c2();
    goto LAB_0143c03a;
  }
  if ((_File->_flag & 0x40) == 0) {
    uVar4 = __fileno(_File);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar9 = &DAT_018e9590;
    }
    else {
      puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0225bf80)[(int)uVar4 >> 5]);
    }
    if ((puVar9[0x24] & 0x7f) == 0) {
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar9 = &DAT_018e9590;
      }
      else {
        puVar9 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0225bf80)[(int)uVar4 >> 5]);
      }
      if ((puVar9[0x24] & 0x80) == 0) goto LAB_0143b133;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00fe56c2();
  }
  else {
LAB_0143b133:
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_200,_Locale);
    bVar2 = *param_2;
    local_1a9 = '\0';
    local_190 = 0;
    local_1d0 = 0;
    if (bVar2 != 0) {
LAB_0143b160:
      iVar8 = _isspace((uint)bVar2);
      if (iVar8 != 0) {
        local_190 = local_190 + -1;
        iVar8 = __whiteout(local_1a8);
        if (iVar8 != -1) {
          __ungetc_nolock(iVar8,local_1a8);
        }
        do {
          param_2 = param_2 + 1;
          iVar8 = _isspace((uint)*param_2);
        } while (iVar8 != 0);
        goto LAB_0143bf98;
      }
      if (*param_2 == 0x25) {
        if (param_2[1] == 0x25) {
          if (param_2[1] == 0x25) {
            param_2 = param_2 + 1;
          }
          goto LAB_0143bf22;
        }
        local_1e8 = 0;
        local_1d5 = 0;
        local_1b0 = 0;
        local_1bc = 0;
        local_1a0 = 0;
        local_1ac = 0;
        local_1ab = '\0';
        local_1a1 = '\0';
        local_191 = '\0';
        local_1aa = '\0';
        local_199 = '\0';
        local_189 = 1;
        local_1dc = 0;
        do {
          pbVar13 = param_2 + 1;
          uVar4 = (uint)*pbVar13;
          iVar8 = _isdigit(uVar4);
          pbVar16 = pbVar13;
          if (iVar8 == 0) {
            if (uVar4 < 0x4f) {
              if (uVar4 != 0x4e) {
                if (uVar4 == 0x2a) {
                  local_1a1 = local_1a1 + '\x01';
                }
                else if (uVar4 != 0x46) {
                  if (uVar4 == 0x49) {
                    bVar2 = param_2[2];
                    if ((bVar2 == 0x36) && (pbVar16 = param_2 + 3, *pbVar16 == 0x34))
                    goto LAB_0143b285;
                    if ((((((bVar2 != 0x33) || (pbVar16 = param_2 + 3, *pbVar16 != 0x32)) &&
                          (pbVar16 = pbVar13, bVar2 != 100)) && ((bVar2 != 0x69 && (bVar2 != 0x6f)))
                         ) && (bVar2 != 0x78)) && (bVar2 != 0x58)) goto LAB_0143b2de;
                  }
                  else if (uVar4 == 0x4c) {
                    local_189 = local_189 + 1;
                  }
                  else {
LAB_0143b2de:
                    local_191 = local_191 + '\x01';
                    pbVar16 = pbVar13;
                  }
                }
              }
            }
            else if (uVar4 == 0x68) {
              local_189 = local_189 - 1;
              local_199 = local_199 + -1;
            }
            else {
              if (uVar4 == 0x6c) {
                pbVar16 = param_2 + 2;
                if (*pbVar16 == 0x6c) {
LAB_0143b285:
                  local_1dc = local_1dc + 1;
                  local_1cc = 0;
                  goto LAB_0143b308;
                }
                local_189 = local_189 + 1;
              }
              else if (uVar4 != 0x77) goto LAB_0143b2de;
              local_199 = local_199 + '\x01';
              pbVar16 = pbVar13;
            }
          }
          else {
            local_1bc = local_1bc + 1;
            local_1a0 = local_1a0 * 10 + -0x30 + uVar4;
          }
LAB_0143b308:
          param_2 = pbVar16;
        } while (local_191 == '\0');
        if (local_1a1 == '\0') {
          local_1c4 = *(wchar_t **)local_1ec;
          local_204 = local_1ec;
          local_1ec = local_1ec + 4;
        }
        else {
          local_1c4 = (wchar_t *)0x0;
        }
        local_191 = '\0';
        if ((local_199 == '\0') && ((*pbVar16 == 0x53 || (local_199 = -1, *pbVar16 == 0x43)))) {
          local_199 = '\x01';
        }
        uVar4 = *pbVar16 | 0x20;
        local_1c0 = pbVar16;
        local_1b8 = uVar4;
        if (uVar4 != 0x6e) {
          if ((uVar4 == 99) || (uVar4 == 0x7b)) {
            local_190 = local_190 + 1;
            local_198 = __inc();
          }
          else {
            local_198 = __whiteout(local_1a8);
          }
          if (local_198 == 0xffffffff) goto LAB_0143bfd8;
        }
        uVar11 = local_198;
        if ((local_1bc != 0) && (local_1a0 == 0)) goto LAB_0143bfc3;
        if (uVar4 < 0x70) {
          if (uVar4 == 0x6f) {
LAB_0143bc4d:
            if (local_198 == 0x2d) {
              local_1ab = '\x01';
            }
            else if (local_198 != 0x2b) goto LAB_0143bc94;
            local_1a0 = local_1a0 + -1;
            if ((local_1a0 == 0) && (local_1bc != 0)) {
              local_191 = '\x01';
            }
            else {
              local_190 = local_190 + 1;
              local_198 = __inc();
            }
            goto LAB_0143bc94;
          }
          if (uVar4 == 99) {
            if (local_1bc == 0) {
              local_1a0 = local_1a0 + 1;
              local_1bc = 1;
            }
LAB_0143b820:
            if ('\0' < local_199) {
              local_1aa = '\x01';
            }
LAB_0143b830:
            pwVar12 = local_1c4;
            local_190 = local_190 + -1;
            pwVar15 = pwVar12;
            if (local_198 != 0xffffffff) {
              __ungetc_nolock(local_198,local_1a8);
            }
            do {
              if ((local_1bc != 0) &&
                 (iVar8 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar8, bVar17))
              goto LAB_0143bbfb;
              local_190 = local_190 + 1;
              local_198 = __inc();
              if (local_198 == 0xffffffff) goto LAB_0143bbe2;
              bVar2 = (byte)local_198;
              if (uVar4 != 99) {
                if (uVar4 == 0x73) {
                  if ((8 < (int)local_198) && ((int)local_198 < 0xe)) goto LAB_0143bbe2;
                  if (local_198 != 0x20) goto LAB_0143b8e2;
                }
                if ((uVar4 != 0x7b) ||
                   (uVar4 = local_1b8,
                   ((int)(char)(local_28[(int)local_198 >> 3] ^ local_1ac) & 1 << (bVar2 & 7)) == 0)
                   ) goto LAB_0143bbe2;
              }
LAB_0143b8e2:
              if (local_1a1 == '\0') {
                if (local_1aa == '\0') {
                  *(byte *)pwVar12 = bVar2;
                  pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                  local_1c4 = pwVar12;
                }
                else {
                  local_1e4 = bVar2;
                  iVar8 = _isleadbyte(local_198 & 0xff);
                  if (iVar8 != 0) {
                    local_190 = local_190 + 1;
                    local_1e3 = __inc();
                  }
                  local_1f0[0] = L'?';
                  local_1f0[1] = L'\0';
                  __mbtowc_l(local_1f0,(char *)&local_1e4,
                             (size_t)(local_200.locinfo)->locale_name[3],&local_200);
                  *pwVar12 = local_1f0[0];
                  pwVar12 = pwVar12 + 1;
                  local_1c4 = pwVar12;
                }
              }
              else {
                pwVar15 = (wchar_t *)((int)pwVar15 + 1);
              }
            } while( true );
          }
          if (uVar4 == 100) goto LAB_0143bc4d;
          if (uVar4 < 0x65) {
LAB_0143b996:
            if (*local_1c0 != local_198) goto LAB_0143bfc3;
            local_1a9 = local_1a9 + -1;
            if (local_1a1 == '\0') {
              local_1ec = local_204;
            }
            goto LAB_0143bf03;
          }
          if (0x67 < uVar4) {
            if (uVar4 == 0x69) {
              local_1b8 = 100;
              goto LAB_0143b439;
            }
            if (uVar4 != 0x6e) goto LAB_0143b996;
            iVar8 = local_190;
            lVar18 = local_1cc;
            if (local_1a1 != '\0') goto LAB_0143bf03;
            goto LAB_0143bed7;
          }
          iVar8 = 0;
          if (local_198 == 0x2d) {
            *local_1b4 = 0x2d;
            iVar8 = 1;
LAB_0143b474:
            local_1a0 = local_1a0 + -1;
            local_190 = local_190 + 1;
            local_198 = __inc();
          }
          else if (local_198 == 0x2b) goto LAB_0143b474;
          if (local_1bc == 0) {
            local_1a0 = -1;
          }
          while( true ) {
            iVar7 = _isdigit(local_198 & 0xff);
            if ((iVar7 == 0) ||
               (iVar7 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar7, bVar17)) break;
            local_1b0 = local_1b0 + 1;
            local_1b4[iVar8] = (byte)local_198;
            iVar8 = iVar8 + 1;
            iVar7 = ___check_float_string(iVar8,local_188,&local_1d4);
            if (iVar7 == 0) goto LAB_0143bfd8;
            local_190 = local_190 + 1;
            local_198 = __inc();
          }
          local_1ac = **(byte **)local_200.locinfo[1].lc_codepage;
          if ((local_1ac == (byte)local_198) &&
             (iVar7 = local_1a0 + -1, bVar17 = local_1a0 != 0, local_1a0 = iVar7, bVar17)) {
            local_190 = local_190 + 1;
            local_198 = __inc();
            local_1b4[iVar8] = local_1ac;
            iVar8 = iVar8 + 1;
            iVar7 = ___check_float_string(iVar8,local_188,&local_1d4);
            if (iVar7 == 0) goto LAB_0143bfd8;
            while( true ) {
              iVar7 = _isdigit(local_198 & 0xff);
              if ((iVar7 == 0) ||
                 (iVar7 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar7, bVar17))
              break;
              local_1b0 = local_1b0 + 1;
              local_1b4[iVar8] = (byte)local_198;
              iVar8 = iVar8 + 1;
              iVar7 = ___check_float_string(iVar8,local_188,&local_1d4);
              if (iVar7 == 0) goto LAB_0143bfd8;
              local_190 = local_190 + 1;
              local_198 = __inc();
            }
          }
          iVar7 = iVar8;
          if ((local_1b0 != 0) &&
             (((local_198 == 0x65 || (local_198 == 0x45)) &&
              (iVar5 = local_1a0 + -1, bVar17 = local_1a0 != 0, local_1a0 = iVar5, bVar17)))) {
            local_1b4[iVar8] = 0x65;
            iVar7 = iVar8 + 1;
            iVar5 = ___check_float_string(iVar7,local_188,&local_1d4);
            if (iVar5 == 0) goto LAB_0143bfd8;
            local_190 = local_190 + 1;
            local_198 = __inc();
            if (local_198 == 0x2d) {
              local_1b4[iVar7] = 0x2d;
              iVar7 = iVar8 + 2;
              iVar8 = ___check_float_string(iVar7,local_188,&local_1d4);
              if (iVar8 == 0) goto LAB_0143bfd8;
LAB_0143b6e5:
              if (local_1a0 == 0) {
                local_1a0 = 0;
              }
              else {
                local_190 = local_190 + 1;
                local_1a0 = local_1a0 + -1;
                local_198 = __inc();
              }
            }
            else if (local_198 == 0x2b) goto LAB_0143b6e5;
            while( true ) {
              iVar8 = _isdigit(local_198 & 0xff);
              if ((iVar8 == 0) ||
                 (iVar8 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar8, bVar17))
              break;
              local_1b0 = local_1b0 + 1;
              local_1b4[iVar7] = (byte)local_198;
              iVar7 = iVar7 + 1;
              iVar8 = ___check_float_string(iVar7,local_188,&local_1d4);
              if (iVar8 == 0) goto LAB_0143bfd8;
              local_190 = local_190 + 1;
              local_198 = __inc();
            }
          }
          local_190 = local_190 + -1;
          if (local_198 != 0xffffffff) {
            __ungetc_nolock(local_198,local_1a8);
          }
          if (local_1b0 != 0) {
            if (local_1a1 == '\0') {
              local_1d0 = local_1d0 + 1;
              plVar20 = &local_200;
              local_1b4[iVar7] = 0;
              iVar8 = (char)local_189 + -1;
              pwVar12 = local_1c4;
              puVar19 = local_1b4;
              pcVar6 = DecodePointer(PTR_LAB_018e8a3c);
              (*pcVar6)(iVar8,pwVar12,puVar19,plVar20);
            }
            goto LAB_0143bf03;
          }
          goto LAB_0143bfd8;
        }
        if (uVar4 == 0x70) {
          local_189 = 1;
          goto LAB_0143bc4d;
        }
        if (uVar4 == 0x73) goto LAB_0143b820;
        if (uVar4 == 0x75) goto LAB_0143bc4d;
        if (uVar4 != 0x78) {
          if (uVar4 == 0x7b) {
            if ('\0' < local_199) {
              local_1aa = '\x01';
            }
            pbVar16 = local_1c0 + 1;
            if (local_1c0[1] == 0x5e) {
              pbVar16 = local_1c0 + 2;
              local_1ac = 0xff;
            }
            _memset(local_28,0,0x20);
            bVar2 = local_1d5;
            if (*pbVar16 == 0x5d) {
              local_28[0xb] = 0x20;
              pbVar16 = pbVar16 + 1;
              bVar2 = 0x5d;
            }
            while (bVar10 = *pbVar16, local_1c0 = pbVar16, bVar10 != 0x5d) {
              if (((bVar10 == 0x2d) && (bVar2 != 0)) && (bVar1 = pbVar16[1], bVar1 != 0x5d)) {
                bVar10 = bVar1;
                local_189 = bVar2;
                if (bVar2 < bVar1) {
                  bVar10 = bVar2;
                  local_189 = bVar1;
                }
                if (bVar10 < local_189) {
                  uVar14 = (uint)bVar10;
                  uVar11 = (uint)(byte)(local_189 - bVar10);
                  do {
                    local_28[uVar14 >> 3] = local_28[uVar14 >> 3] | '\x01' << ((byte)uVar14 & 7);
                    uVar14 = uVar14 + 1;
                    uVar11 = uVar11 - 1;
                    uVar4 = local_1b8;
                  } while (uVar11 != 0);
                }
                local_28[local_189 >> 3] = local_28[local_189 >> 3] | '\x01' << (local_189 & 7);
                pbVar16 = pbVar16 + 2;
                bVar2 = 0;
              }
              else {
                local_28[bVar10 >> 3] = local_28[bVar10 >> 3] | '\x01' << (bVar10 & 7);
                uVar4 = local_1b8;
                pbVar16 = pbVar16 + 1;
                bVar2 = bVar10;
              }
            }
            goto LAB_0143b830;
          }
          goto LAB_0143b996;
        }
LAB_0143b439:
        if (local_198 == 0x2d) {
          local_1ab = '\x01';
LAB_0143bad3:
          local_1a0 = local_1a0 + -1;
          if ((local_1a0 == 0) && (local_1bc != 0)) {
            local_191 = '\x01';
          }
          else {
            local_190 = local_190 + 1;
            local_198 = __inc();
          }
        }
        else if (local_198 == 0x2b) goto LAB_0143bad3;
        if (local_198 == 0x30) {
          local_190 = local_190 + 1;
          local_198 = __inc();
          if (((char)local_198 == 'x') || ((char)local_198 == 'X')) {
            local_190 = local_190 + 1;
            local_198 = __inc();
            if ((local_1bc != 0) && (local_1a0 = local_1a0 + -2, local_1a0 < 1)) {
              local_191 = local_191 + '\x01';
            }
            local_1b8 = 0x78;
          }
          else {
            local_1b0 = 1;
            if (local_1b8 == 0x78) {
              local_190 = local_190 + -1;
              if (local_198 != 0xffffffff) {
                __ungetc_nolock(local_198,local_1a8);
              }
              local_198 = 0x30;
            }
            else {
              if ((local_1bc != 0) && (local_1a0 = local_1a0 + -1, local_1a0 == 0)) {
                local_191 = local_191 + '\x01';
              }
              local_1b8 = 0x6f;
            }
          }
        }
LAB_0143bc94:
        lVar18 = local_1cc;
        if (local_1dc == 0) {
          iVar8 = local_1e8;
          if (local_191 == '\0') {
            while ((uVar4 = local_198, local_1b8 != 0x78 && (local_1b8 != 0x70))) {
              iVar7 = _isdigit(local_198 & 0xff);
              if (iVar7 == 0) goto LAB_0143be81;
              if (local_1b8 == 0x6f) {
                if (0x37 < (int)uVar4) goto LAB_0143be81;
                iVar8 = iVar8 << 3;
              }
              else {
                iVar8 = iVar8 * 10;
              }
LAB_0143be48:
              local_1b0 = local_1b0 + 1;
              iVar8 = iVar8 + -0x30 + uVar4;
              if ((local_1bc != 0) &&
                 (local_1a0 = local_1a0 + -1, lVar18 = local_1cc, local_1a0 == 0))
              goto LAB_0143be9a;
              local_190 = local_190 + 1;
              local_198 = __inc();
            }
            iVar7 = _isxdigit(local_198 & 0xff);
            if (iVar7 != 0) {
              iVar8 = iVar8 << 4;
              uVar4 = __hextodec(uVar4);
              local_198 = uVar4;
              goto LAB_0143be48;
            }
LAB_0143be81:
            local_190 = local_190 + -1;
            lVar18 = local_1cc;
            if (uVar4 != 0xffffffff) {
              __ungetc_nolock(uVar4,local_1a8);
              lVar18 = local_1cc;
            }
          }
LAB_0143be9a:
          if (local_1ab != '\0') {
            iVar8 = -iVar8;
          }
        }
        else {
          if (local_191 == '\0') {
            while ((uVar4 = local_198, local_1b8 != 0x78 && (local_1b8 != 0x70))) {
              iVar8 = _isdigit(local_198 & 0xff);
              if (iVar8 == 0) goto LAB_0143bd8d;
              if (local_1b8 == 0x6f) {
                if (0x37 < (int)uVar4) goto LAB_0143bd8d;
                lVar18 = local_1cc << 3;
              }
              else {
                lVar18 = __allmul(local_1cc,10,0);
              }
LAB_0143bd44:
              local_1b0 = local_1b0 + 1;
              local_1cc = lVar18 + (int)(uVar4 - 0x30);
              if ((local_1bc != 0) &&
                 (local_1a0 = local_1a0 + -1, lVar18 = local_1cc, local_1a0 == 0))
              goto LAB_0143bda6;
              local_190 = local_190 + 1;
              local_198 = __inc();
            }
            iVar8 = _isxdigit(local_198 & 0xff);
            if (iVar8 != 0) {
              lVar18 = local_1cc << 4;
              uVar4 = __hextodec(uVar4);
              local_198 = uVar4;
              goto LAB_0143bd44;
            }
LAB_0143bd8d:
            local_190 = local_190 + -1;
            lVar18 = local_1cc;
            if (uVar4 != 0xffffffff) {
              __ungetc_nolock(uVar4,local_1a8);
              lVar18 = local_1cc;
            }
          }
LAB_0143bda6:
          local_1cc._4_4_ = (int)((ulonglong)lVar18 >> 0x20);
          local_1cc._0_4_ = (int)lVar18;
          iVar8 = local_1e8;
          if (local_1ab != '\0') {
            lVar18 = CONCAT44(-(local_1cc._4_4_ + (uint)((int)local_1cc != 0)),-(int)local_1cc);
          }
        }
        if (local_1b8 == 0x46) {
          local_1b0 = 0;
        }
        local_1cc = lVar18;
        if (local_1b0 == 0) goto LAB_0143bfd8;
        if (local_1a1 == '\0') {
          local_1d0 = local_1d0 + 1;
LAB_0143bed7:
          local_1cc = lVar18;
          if (local_1dc == 0) {
            if (local_189 == 0) {
              *local_1c4 = (wchar_t)iVar8;
            }
            else {
              *(int *)local_1c4 = iVar8;
            }
          }
          else {
            *(longlong *)local_1c4 = lVar18;
          }
        }
LAB_0143bf03:
        local_1a9 = local_1a9 + '\x01';
        pbVar16 = local_1c0 + 1;
        local_1c0 = pbVar16;
LAB_0143bf7c:
        param_2 = pbVar16;
        if ((local_198 == 0xffffffff) &&
           ((*pbVar16 != 0x25 || (param_2 = local_1c0, local_1c0[1] != 0x6e)))) goto LAB_0143bfd8;
LAB_0143bf98:
        bVar2 = *param_2;
        if (bVar2 == 0) goto LAB_0143bfd8;
        goto LAB_0143b160;
      }
LAB_0143bf22:
      local_190 = local_190 + 1;
      uVar11 = __inc();
      pbVar16 = param_2 + 1;
      local_1c0 = pbVar16;
      local_198 = uVar11;
      if (*param_2 == uVar11) {
        iVar8 = _isleadbyte(uVar11 & 0xff);
        if (iVar8 != 0) {
          local_190 = local_190 + 1;
          uVar4 = __inc();
          bVar2 = *pbVar16;
          pbVar16 = param_2 + 2;
          local_1c0 = pbVar16;
          if (bVar2 != uVar4) {
            if (uVar4 != 0xffffffff) {
              __ungetc_nolock(uVar4,local_1a8);
            }
            goto LAB_0143bfc3;
          }
          local_190 = local_190 + -1;
        }
        goto LAB_0143bf7c;
      }
LAB_0143bfc3:
      if (uVar11 != 0xffffffff) {
        __ungetc_nolock(local_198,local_1a8);
      }
LAB_0143bfd8:
      if (local_1d4 == 1) {
        _free(local_1b4);
      }
      if (local_198 == 0xffffffff) {
        if (local_1f4 != '\0') {
          *(uint *)(local_1f8 + 0x70) = *(uint *)(local_1f8 + 0x70) & 0xfffffffd;
        }
        goto LAB_0143c03a;
      }
    }
    if (local_1f4 != '\0') {
      *(uint *)(local_1f8 + 0x70) = *(uint *)(local_1f8 + 0x70) & 0xfffffffd;
    }
  }
LAB_0143c03a:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
LAB_0143bbe2:
  local_190 = local_190 + -1;
  if (local_198 != 0xffffffff) {
    __ungetc_nolock(local_198,local_1a8);
  }
LAB_0143bbfb:
  if (pwVar15 == pwVar12) goto LAB_0143bfd8;
  if ((local_1a1 == '\0') && (local_1d0 = local_1d0 + 1, uVar4 != 99)) {
    if (local_1aa == '\0') {
      *(byte *)local_1c4 = 0;
    }
    else {
      *local_1c4 = L'\0';
    }
  }
  goto LAB_0143bf03;
}

// 0143C048  ___check_float_string  size=87  [run]
/* Library Function - Single Match
    ___check_float_string
   
   Library: Visual Studio 2010 Release */

undefined4 ___check_float_string(size_t param_1,void *param_2,undefined4 *param_3)

{
  size_t _Count;
  void *pvVar1;
  size_t *unaff_ESI;
  undefined4 *unaff_EDI;
  
  _Count = *unaff_ESI;
  if (param_1 == _Count) {
    if ((void *)*unaff_EDI == param_2) {
      pvVar1 = __calloc_crt(_Count,2);
      *unaff_EDI = pvVar1;
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      *param_3 = 1;
      FID_conflict__memcpy((void *)*unaff_EDI,param_2,*unaff_ESI);
    }
    else {
      pvVar1 = __recalloc_crt((void *)*unaff_EDI,_Count,2);
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      *unaff_EDI = pvVar1;
    }
    *unaff_ESI = *unaff_ESI << 1;
  }
  return 1;
}

// 0143C09F  __hextodec  size=32  [run]
/* Library Function - Single Match
    __hextodec
   
   Library: Visual Studio 2010 Release */

uint __hextodec(byte param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _isdigit((uint)param_1);
  uVar2 = (uint)(char)param_1;
  if (iVar1 == 0) {
    uVar2 = (uVar2 & 0xffffffdf) - 7;
  }
  return uVar2;
}

// 0143C0BF  __inc  size=22  [run]
/* Library Function - Single Match
    __inc
   
   Library: Visual Studio 2010 Release */

uint __fastcall __inc(undefined4 param_1,FILE *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &param_2->_cnt;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *param_2->_ptr;
    param_2->_ptr = param_2->_ptr + 1;
    return (uint)bVar2;
  }
  uVar3 = __filbuf(param_2);
  return uVar3;
}

// 0143C0D5  __un_inc  size=19  [run]
/* Library Function - Single Match
    __un_inc
   
   Library: Visual Studio 2010 Release */

void __un_inc(int param_1,FILE *param_2)

{
  if (param_1 != -1) {
    __ungetc_nolock(param_1,param_2);
    return;
  }
  return;
}

// 0143C0E8  __whiteout  size=42  [run]
/* Library Function - Single Match
    __whiteout
   
   Library: Visual Studio 2010 Release */

uint __whiteout(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  
  do {
    *unaff_ESI = *unaff_ESI + 1;
    uVar1 = __inc();
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    iVar2 = _isspace(uVar1 & 0xff);
  } while (iVar2 != 0);
  return uVar1;
}

// 0143C112  __input_s_l  size=4387  [run]
/* Library Function - Single Match
    __input_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __input_s_l(FILE *_File,uchar *param_2,_locale_t _Locale,va_list _ArgList)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  va_list pcVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  undefined *puVar10;
  byte bVar11;
  wchar_t *pwVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  wchar_t *pwVar16;
  bool bVar17;
  longlong lVar18;
  undefined1 *puVar19;
  localeinfo_struct *plVar20;
  uint uVar21;
  localeinfo_struct local_208;
  int local_200;
  char local_1fc;
  int local_1f8;
  wchar_t local_1f4 [2];
  va_list local_1f0;
  uint local_1ec;
  va_list local_1e8;
  byte local_1e4;
  undefined1 local_1e3;
  int local_1e0;
  undefined4 local_1dc;
  byte local_1d5;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  wchar_t *local_1c0;
  undefined8 local_1bc;
  byte *local_1b4;
  int local_1b0;
  undefined1 *local_1ac;
  char local_1a8;
  byte local_1a7;
  char local_1a6;
  char local_1a5;
  FILE *local_1a4;
  int local_1a0;
  char local_19a;
  char local_199;
  uint local_198;
  char local_191;
  int local_190;
  byte local_189;
  undefined1 local_188 [352];
  byte local_28 [32];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_1e8 = _ArgList;
  local_1ac = local_188;
  local_1a4 = _File;
  local_1b4 = param_2;
  local_1dc = 0x15e;
  local_1d4 = 0;
  local_1f4[0] = L'\0';
  local_1f4[1] = L'\0';
  local_198 = 0;
  local_1f8 = 0;
  if ((param_2 == (uchar *)0x0) || (_File == (FILE *)0x0)) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00fe56c2();
    goto LAB_0143d227;
  }
  if ((_File->_flag & 0x40) == 0) {
    uVar4 = __fileno(_File);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar10 = &DAT_018e9590;
    }
    else {
      puVar10 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0225bf80)[(int)uVar4 >> 5]);
    }
    if ((puVar10[0x24] & 0x7f) == 0) {
      if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
        puVar10 = &DAT_018e9590;
      }
      else {
        puVar10 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0225bf80)[(int)uVar4 >> 5]);
      }
      if ((puVar10[0x24] & 0x80) == 0) goto LAB_0143c20d;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00fe56c2();
  }
  else {
LAB_0143c20d:
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_208,_Locale);
    bVar2 = *param_2;
    local_1a6 = '\0';
    local_190 = 0;
    local_1cc = 0;
    if (bVar2 != 0) {
      do {
        iVar9 = _isspace((uint)bVar2);
        if (iVar9 == 0) {
          pbVar15 = local_1b4;
          if (*local_1b4 == 0x25) {
            if (local_1b4[1] == 0x25) {
              if (local_1b4[1] == 0x25) {
                pbVar15 = local_1b4 + 1;
              }
              goto LAB_0143d07b;
            }
            local_1c8 = 0;
            local_1d5 = 0;
            local_1b0 = 0;
            local_1c4 = 0;
            local_1a0 = 0;
            local_1d0 = 0;
            local_1a7 = 0;
            local_1a8 = '\0';
            local_19a = '\0';
            local_191 = '\0';
            local_1a5 = '\0';
            local_199 = '\0';
            local_189 = 1;
            local_1e0 = 0;
            do {
              pbVar14 = pbVar15 + 1;
              uVar4 = (uint)*pbVar14;
              iVar9 = _isdigit(uVar4);
              pbVar13 = pbVar14;
              if (iVar9 == 0) {
                if (uVar4 < 0x4f) {
                  if (uVar4 != 0x4e) {
                    if (uVar4 == 0x2a) {
                      local_19a = local_19a + '\x01';
                    }
                    else if (uVar4 != 0x46) {
                      if (uVar4 == 0x49) {
                        bVar2 = pbVar15[2];
                        if ((bVar2 == 0x36) && (pbVar13 = pbVar15 + 3, *pbVar13 == 0x34))
                        goto LAB_0143c37a;
                        if ((((((bVar2 != 0x33) || (pbVar13 = pbVar15 + 3, *pbVar13 != 0x32)) &&
                              (pbVar13 = pbVar14, bVar2 != 100)) &&
                             ((bVar2 != 0x69 && (bVar2 != 0x6f)))) && (bVar2 != 0x78)) &&
                           (bVar2 != 0x58)) goto LAB_0143c3d3;
                      }
                      else if (uVar4 == 0x4c) {
                        local_189 = local_189 + 1;
                      }
                      else {
LAB_0143c3d3:
                        local_191 = local_191 + '\x01';
                        pbVar13 = pbVar14;
                      }
                    }
                  }
                }
                else if (uVar4 == 0x68) {
                  local_189 = local_189 - 1;
                  local_199 = local_199 + -1;
                }
                else {
                  if (uVar4 == 0x6c) {
                    pbVar13 = pbVar15 + 2;
                    if (*pbVar13 == 0x6c) {
LAB_0143c37a:
                      local_1e0 = local_1e0 + 1;
                      local_1bc = 0;
                      goto LAB_0143c3fd;
                    }
                    local_189 = local_189 + 1;
                  }
                  else if (uVar4 != 0x77) goto LAB_0143c3d3;
                  local_199 = local_199 + '\x01';
                  pbVar13 = pbVar14;
                }
              }
              else {
                local_1c4 = local_1c4 + 1;
                local_1a0 = local_1a0 * 10 + -0x30 + uVar4;
              }
LAB_0143c3fd:
              pbVar15 = pbVar13;
            } while (local_191 == '\0');
            if (local_19a == '\0') {
              local_1c0 = *(wchar_t **)local_1e8;
              local_1f0 = local_1e8;
              local_1e8 = local_1e8 + 4;
            }
            else {
              local_1c0 = (wchar_t *)0x0;
            }
            local_191 = '\0';
            if ((local_199 == '\0') && ((*pbVar13 == 0x53 || (local_199 = -1, *pbVar13 == 0x43)))) {
              local_199 = '\x01';
            }
            local_1ec = *pbVar13 | 0x20;
            local_1b4 = pbVar13;
            if (local_1ec != 0x6e) {
              if ((local_1ec == 99) || (local_1ec == 0x7b)) {
                local_190 = local_190 + 1;
                local_198 = __inc();
              }
              else {
                local_198 = __whiteout(local_1a4);
              }
              if (local_198 == 0xffffffff) break;
            }
            uVar21 = local_1ec;
            if ((local_1c4 == 0) || (uVar4 = local_198, local_1a0 != 0)) {
              if ((local_19a == '\0') &&
                 (((local_1ec == 99 || (local_1ec == 0x73)) || (local_1ec == 0x7b)))) {
                local_1c0 = *(wchar_t **)local_1f0;
                pcVar5 = local_1f0 + 4;
                local_1e8 = local_1f0 + 8;
                local_1d0 = *(int *)(local_1f0 + 4);
                local_1f0 = pcVar5;
                if (local_1d0 == 0) {
                  if (local_199 < '\x01') {
                    *(byte *)local_1c0 = 0;
                  }
                  else {
                    *local_1c0 = L'\0';
                  }
                  piVar3 = __errno();
                  *piVar3 = 0xc;
                  break;
                }
              }
              if ((int)local_1ec < 0x70) {
                if (local_1ec == 0x6f) {
LAB_0143cd88:
                  if (local_198 == 0x2d) {
                    local_1a8 = '\x01';
                  }
                  else if (local_198 != 0x2b) goto LAB_0143cdcf;
                  local_1a0 = local_1a0 + -1;
                  if ((local_1a0 == 0) && (local_1c4 != 0)) {
                    local_191 = '\x01';
                  }
                  else {
                    local_190 = local_190 + 1;
                    local_198 = __inc();
                  }
                  goto LAB_0143cdcf;
                }
                if (local_1ec == 99) {
                  if (local_1c4 == 0) {
                    local_1a0 = local_1a0 + 1;
                    local_1c4 = 1;
                  }
LAB_0143c960:
                  if ('\0' < local_199) {
                    local_1a5 = '\x01';
                  }
LAB_0143c970:
                  pwVar12 = local_1c0;
                  uVar4 = local_1ec;
                  local_190 = local_190 + -1;
                  if (local_198 != 0xffffffff) {
                    __ungetc_nolock(local_198,local_1a4);
                  }
                  pwVar16 = pwVar12;
                  if (uVar4 == 99) goto LAB_0143c99f;
LAB_0143c999:
                  local_1d0 = local_1d0 + -1;
LAB_0143c99f:
                  do {
                    if ((local_1c4 != 0) &&
                       (iVar9 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar9, bVar17))
                    {
LAB_0143cd32:
                      if (pwVar16 == pwVar12) goto LAB_0143d1ac;
                      if ((local_19a == '\0') && (local_1cc = local_1cc + 1, local_1ec != 99)) {
                        if (local_1a5 == '\0') {
                          *(byte *)local_1c0 = 0;
                        }
                        else {
                          *local_1c0 = L'\0';
                        }
                      }
                      goto LAB_0143d05c;
                    }
                    local_190 = local_190 + 1;
                    local_198 = __inc();
                    if (local_198 == 0xffffffff) {
LAB_0143cd19:
                      local_190 = local_190 + -1;
                      if (local_198 != 0xffffffff) {
                        __ungetc_nolock(local_198,local_1a4);
                      }
                      goto LAB_0143cd32;
                    }
                    bVar2 = (byte)local_198;
                    if (uVar4 != 99) {
                      if (uVar4 == 0x73) {
                        if ((8 < (int)local_198) && ((int)local_198 < 0xe)) goto LAB_0143cd19;
                        if (local_198 != 0x20) goto LAB_0143ca2d;
                      }
                      if ((uVar4 != 0x7b) ||
                         (uVar4 = local_1ec,
                         ((int)(char)(local_28[(int)local_198 >> 3] ^ local_1a7) & 1 << (bVar2 & 7))
                         == 0)) goto LAB_0143cd19;
                    }
LAB_0143ca2d:
                    if (local_19a == '\0') goto code_r0x0143ca3a;
                    pwVar16 = (wchar_t *)((int)pwVar16 + 1);
                  } while( true );
                }
                if (local_1ec == 100) goto LAB_0143cd88;
                if (100 < (int)local_1ec) {
                  if (0x67 < (int)local_1ec) {
                    if (local_1ec == 0x69) {
                      uVar21 = 100;
                      goto LAB_0143c579;
                    }
                    if (local_1ec != 0x6e) goto LAB_0143caee;
                    iVar9 = local_190;
                    lVar18 = local_1bc;
                    if (local_19a != '\0') goto LAB_0143d05c;
                    goto LAB_0143d030;
                  }
                  iVar9 = 0;
                  if (local_198 == 0x2d) {
                    *local_1ac = 0x2d;
                    iVar9 = 1;
LAB_0143c5b4:
                    local_1a0 = local_1a0 + -1;
                    local_190 = local_190 + 1;
                    local_198 = __inc();
                  }
                  else if (local_198 == 0x2b) goto LAB_0143c5b4;
                  if (local_1c4 == 0) {
                    local_1a0 = -1;
                  }
                  while( true ) {
                    iVar6 = _isdigit(local_198 & 0xff);
                    if ((iVar6 == 0) ||
                       (iVar6 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar6, bVar17))
                    break;
                    local_1b0 = local_1b0 + 1;
                    local_1ac[iVar9] = (byte)local_198;
                    iVar9 = iVar9 + 1;
                    iVar6 = ___check_float_string(iVar9,local_188,&local_1d4);
                    if (iVar6 == 0) goto LAB_0143d1ac;
                    local_190 = local_190 + 1;
                    local_198 = __inc();
                  }
                  local_1a7 = **(byte **)local_208.locinfo[1].lc_codepage;
                  if ((local_1a7 == (byte)local_198) &&
                     (iVar6 = local_1a0 + -1, bVar17 = local_1a0 != 0, local_1a0 = iVar6, bVar17)) {
                    local_190 = local_190 + 1;
                    local_198 = __inc();
                    local_1ac[iVar9] = local_1a7;
                    iVar9 = iVar9 + 1;
                    iVar6 = ___check_float_string(iVar9,local_188,&local_1d4);
                    if (iVar6 == 0) break;
                    while( true ) {
                      iVar6 = _isdigit(local_198 & 0xff);
                      if ((iVar6 == 0) ||
                         (iVar6 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar6, bVar17
                         )) break;
                      local_1b0 = local_1b0 + 1;
                      local_1ac[iVar9] = (byte)local_198;
                      iVar9 = iVar9 + 1;
                      iVar6 = ___check_float_string(iVar9,local_188,&local_1d4);
                      if (iVar6 == 0) goto LAB_0143d1ac;
                      local_190 = local_190 + 1;
                      local_198 = __inc();
                    }
                  }
                  iVar6 = iVar9;
                  if ((local_1b0 != 0) &&
                     (((local_198 == 0x65 || (local_198 == 0x45)) &&
                      (iVar7 = local_1a0 + -1, bVar17 = local_1a0 != 0, local_1a0 = iVar7, bVar17)))
                     ) {
                    local_1ac[iVar9] = 0x65;
                    iVar6 = iVar9 + 1;
                    iVar7 = ___check_float_string(iVar6,local_188,&local_1d4);
                    if (iVar7 == 0) break;
                    local_190 = local_190 + 1;
                    local_198 = __inc();
                    if (local_198 == 0x2d) {
                      local_1ac[iVar6] = 0x2d;
                      iVar6 = iVar9 + 2;
                      iVar9 = ___check_float_string(iVar6,local_188,&local_1d4);
                      if (iVar9 == 0) break;
LAB_0143c825:
                      if (local_1a0 == 0) {
                        local_1a0 = 0;
                      }
                      else {
                        local_190 = local_190 + 1;
                        local_1a0 = local_1a0 + -1;
                        local_198 = __inc();
                      }
                    }
                    else if (local_198 == 0x2b) goto LAB_0143c825;
                    while( true ) {
                      iVar9 = _isdigit(local_198 & 0xff);
                      if ((iVar9 == 0) ||
                         (iVar9 = local_1a0 + -1, bVar17 = local_1a0 == 0, local_1a0 = iVar9, bVar17
                         )) break;
                      local_1b0 = local_1b0 + 1;
                      local_1ac[iVar6] = (byte)local_198;
                      iVar6 = iVar6 + 1;
                      iVar9 = ___check_float_string(iVar6,local_188,&local_1d4);
                      if (iVar9 == 0) goto LAB_0143d1ac;
                      local_190 = local_190 + 1;
                      local_198 = __inc();
                    }
                  }
                  local_190 = local_190 + -1;
                  if (local_198 != 0xffffffff) {
                    __ungetc_nolock(local_198,local_1a4);
                  }
                  if (local_1b0 != 0) {
                    if (local_19a == '\0') {
                      local_1cc = local_1cc + 1;
                      plVar20 = &local_208;
                      local_1ac[iVar6] = 0;
                      iVar9 = (char)local_189 + -1;
                      pwVar12 = local_1c0;
                      puVar19 = local_1ac;
                      pcVar8 = DecodePointer(PTR_LAB_018e8a3c);
                      (*pcVar8)(iVar9,pwVar12,puVar19,plVar20);
                    }
                    goto LAB_0143d05c;
                  }
                  break;
                }
LAB_0143caee:
                if (*local_1b4 != local_198) {
                  if (local_198 != 0xffffffff) {
                    __ungetc_nolock(local_198,local_1a4);
                  }
                  local_1f8 = 1;
                  break;
                }
                local_1a6 = local_1a6 + -1;
                if (local_19a == '\0') {
                  local_1e8 = local_1f0;
                }
              }
              else {
                if (local_1ec == 0x70) {
                  local_189 = 1;
                  goto LAB_0143cd88;
                }
                if (local_1ec == 0x73) goto LAB_0143c960;
                if (local_1ec == 0x75) goto LAB_0143cd88;
                if (local_1ec != 0x78) {
                  if (local_1ec == 0x7b) {
                    if ('\0' < local_199) {
                      local_1a5 = '\x01';
                    }
                    pbVar15 = local_1b4 + 1;
                    if (*pbVar15 == 0x5e) {
                      pbVar15 = local_1b4 + 2;
                      local_1a7 = 0xff;
                    }
                    _memset(local_28,0,0x20);
                    bVar2 = local_1d5;
                    if (*pbVar15 == 0x5d) {
                      local_28[0xb] = 0x20;
                      pbVar15 = pbVar15 + 1;
                      bVar2 = 0x5d;
                    }
                    while (bVar11 = *pbVar15, local_1b4 = pbVar15, bVar11 != 0x5d) {
                      if (((bVar11 == 0x2d) && (bVar2 != 0)) && (bVar1 = pbVar15[1], bVar1 != 0x5d))
                      {
                        bVar11 = bVar1;
                        local_189 = bVar2;
                        if (bVar2 < bVar1) {
                          bVar11 = bVar2;
                          local_189 = bVar1;
                        }
                        if (bVar11 < local_189) {
                          uVar21 = (uint)bVar11;
                          uVar4 = (uint)(byte)(local_189 - bVar11);
                          do {
                            local_28[uVar21 >> 3] =
                                 local_28[uVar21 >> 3] | '\x01' << ((byte)uVar21 & 7);
                            uVar21 = uVar21 + 1;
                            uVar4 = uVar4 - 1;
                          } while (uVar4 != 0);
                        }
                        local_28[local_189 >> 3] =
                             local_28[local_189 >> 3] | '\x01' << (local_189 & 7);
                        pbVar15 = pbVar15 + 2;
                        bVar2 = 0;
                      }
                      else {
                        local_28[bVar11 >> 3] = local_28[bVar11 >> 3] | '\x01' << (bVar11 & 7);
                        pbVar15 = pbVar15 + 1;
                        bVar2 = bVar11;
                      }
                    }
                    goto LAB_0143c970;
                  }
                  goto LAB_0143caee;
                }
LAB_0143c579:
                if (local_198 == 0x2d) {
                  local_1a8 = '\x01';
LAB_0143cc20:
                  local_1a0 = local_1a0 + -1;
                  if ((local_1a0 == 0) && (local_1c4 != 0)) {
                    local_191 = '\x01';
                  }
                  else {
                    local_190 = local_190 + 1;
                    local_198 = __inc();
                  }
                }
                else if (local_198 == 0x2b) goto LAB_0143cc20;
                if (local_198 == 0x30) {
                  local_190 = local_190 + 1;
                  local_198 = __inc();
                  if (((char)local_198 == 'x') || ((char)local_198 == 'X')) {
                    local_190 = local_190 + 1;
                    local_198 = __inc();
                    if ((local_1c4 != 0) && (local_1a0 = local_1a0 + -2, local_1a0 < 1)) {
                      local_191 = local_191 + '\x01';
                    }
                    uVar21 = 0x78;
                  }
                  else {
                    local_1b0 = 1;
                    if (uVar21 == 0x78) {
                      local_190 = local_190 + -1;
                      if (local_198 != 0xffffffff) {
                        __ungetc_nolock(local_198,local_1a4);
                      }
                      local_198 = 0x30;
                    }
                    else {
                      if ((local_1c4 != 0) && (local_1a0 = local_1a0 + -1, local_1a0 == 0)) {
                        local_191 = local_191 + '\x01';
                      }
                      uVar21 = 0x6f;
                    }
                  }
                }
LAB_0143cdcf:
                lVar18 = local_1bc;
                if (local_1e0 == 0) {
                  if (local_191 == '\0') {
                    while ((uVar4 = local_198, uVar21 != 0x78 && (uVar21 != 0x70))) {
                      iVar9 = _isdigit(local_198 & 0xff);
                      if (iVar9 == 0) goto LAB_0143cfd4;
                      if (uVar21 == 0x6f) {
                        if (0x37 < (int)uVar4) goto LAB_0143cfd4;
                        local_1c8 = local_1c8 << 3;
                      }
                      else {
                        local_1c8 = local_1c8 * 10;
                      }
LAB_0143cf95:
                      local_1b0 = local_1b0 + 1;
                      local_1c8 = local_1c8 + -0x30 + uVar4;
                      if ((local_1c4 != 0) &&
                         (local_1a0 = local_1a0 + -1, lVar18 = local_1bc, local_1a0 == 0))
                      goto LAB_0143cfed;
                      local_190 = local_190 + 1;
                      local_198 = __inc();
                    }
                    iVar9 = _isxdigit(local_198 & 0xff);
                    if (iVar9 != 0) {
                      local_1c8 = local_1c8 << 4;
                      uVar4 = __hextodec(uVar4);
                      local_198 = uVar4;
                      goto LAB_0143cf95;
                    }
LAB_0143cfd4:
                    local_190 = local_190 + -1;
                    lVar18 = local_1bc;
                    if (uVar4 != 0xffffffff) {
                      __ungetc_nolock(uVar4,local_1a4);
                      lVar18 = local_1bc;
                    }
                  }
LAB_0143cfed:
                  if (local_1a8 != '\0') {
                    local_1c8 = -local_1c8;
                  }
                }
                else {
                  if (local_191 == '\0') {
                    while ((uVar4 = local_198, uVar21 != 0x78 && (uVar21 != 0x70))) {
                      iVar9 = _isdigit(local_198 & 0xff);
                      if (iVar9 == 0) goto LAB_0143ced8;
                      if (uVar21 == 0x6f) {
                        if (0x37 < (int)uVar4) goto LAB_0143ced8;
                        local_1bc = local_1bc << 3;
                      }
                      else {
                        lVar18 = __allmul(local_1bc,10,0);
                        local_1bc = lVar18;
                      }
LAB_0143ce93:
                      local_1b0 = local_1b0 + 1;
                      local_1bc = local_1bc + (int)(uVar4 - 0x30);
                      if ((local_1c4 != 0) &&
                         (local_1a0 = local_1a0 + -1, lVar18 = local_1bc, local_1a0 == 0))
                      goto LAB_0143cef1;
                      local_190 = local_190 + 1;
                      local_198 = __inc();
                    }
                    iVar9 = _isxdigit(local_198 & 0xff);
                    if (iVar9 != 0) {
                      local_1bc = local_1bc << 4;
                      uVar4 = __hextodec(uVar4);
                      local_198 = uVar4;
                      goto LAB_0143ce93;
                    }
LAB_0143ced8:
                    local_190 = local_190 + -1;
                    lVar18 = local_1bc;
                    if (uVar4 != 0xffffffff) {
                      __ungetc_nolock(uVar4,local_1a4);
                      lVar18 = local_1bc;
                    }
                  }
LAB_0143cef1:
                  local_1bc._4_4_ = (int)((ulonglong)lVar18 >> 0x20);
                  local_1bc._0_4_ = (int)lVar18;
                  if (local_1a8 != '\0') {
                    lVar18 = CONCAT44(-(local_1bc._4_4_ + (uint)((int)local_1bc != 0)),
                                      -(int)local_1bc);
                  }
                }
                if (uVar21 == 0x46) {
                  local_1b0 = 0;
                }
                local_1bc = lVar18;
                if (local_1b0 == 0) break;
                if (local_19a == '\0') {
                  local_1cc = local_1cc + 1;
                  iVar9 = local_1c8;
LAB_0143d030:
                  local_1bc = lVar18;
                  if (local_1e0 == 0) {
                    if (local_189 == 0) {
                      *local_1c0 = (wchar_t)iVar9;
                    }
                    else {
                      *(int *)local_1c0 = iVar9;
                    }
                  }
                  else {
                    *(longlong *)local_1c0 = lVar18;
                  }
                }
              }
LAB_0143d05c:
              local_1a6 = local_1a6 + '\x01';
              pbVar13 = local_1b4 + 1;
              local_1b4 = pbVar13;
              goto LAB_0143d0dd;
            }
          }
          else {
LAB_0143d07b:
            local_190 = local_190 + 1;
            uVar4 = __inc();
            pbVar13 = pbVar15 + 1;
            local_1b4 = pbVar13;
            local_198 = uVar4;
            if (*pbVar15 == uVar4) {
              iVar9 = _isleadbyte(uVar4 & 0xff);
              if (iVar9 != 0) {
                local_190 = local_190 + 1;
                uVar21 = __inc();
                bVar2 = *pbVar13;
                pbVar13 = pbVar15 + 2;
                local_1b4 = pbVar13;
                if (bVar2 != uVar21) {
                  if (uVar21 != 0xffffffff) {
                    __ungetc_nolock(uVar21,local_1a4);
                  }
                  goto LAB_0143d197;
                }
                local_190 = local_190 + -1;
              }
LAB_0143d0dd:
              pbVar15 = local_1b4;
              if ((local_198 != 0xffffffff) ||
                 ((*pbVar13 == 0x25 && (pbVar13 = local_1b4, local_1b4[1] == 0x6e))))
              goto LAB_0143d101;
              break;
            }
          }
LAB_0143d197:
          if (uVar4 != 0xffffffff) {
            __ungetc_nolock(local_198,local_1a4);
          }
          break;
        }
        local_190 = local_190 + -1;
        iVar9 = __whiteout(local_1a4);
        pbVar13 = local_1b4;
        if (iVar9 != -1) {
          __ungetc_nolock(iVar9,local_1a4);
          pbVar13 = local_1b4;
        }
        do {
          pbVar13 = pbVar13 + 1;
          iVar9 = _isspace((uint)*pbVar13);
          pbVar15 = pbVar13;
        } while (iVar9 != 0);
LAB_0143d101:
        local_1b4 = pbVar15;
        bVar2 = *pbVar13;
      } while (bVar2 != 0);
LAB_0143d1ac:
      if (local_1d4 == 1) {
        _free(local_1ac);
      }
      if (local_198 == 0xffffffff) {
        if (local_1fc != '\0') {
          *(uint *)(local_200 + 0x70) = *(uint *)(local_200 + 0x70) & 0xfffffffd;
        }
        goto LAB_0143d227;
      }
      if (local_1f8 == 1) {
        piVar3 = __errno();
        *piVar3 = 0x16;
        FUN_00fe56c2();
      }
    }
    if (local_1fc != '\0') {
      *(uint *)(local_200 + 0x70) = *(uint *)(local_200 + 0x70) & 0xfffffffd;
    }
  }
LAB_0143d227:
  iVar9 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar9;
code_r0x0143ca3a:
  if (local_1d0 == 0) {
    piVar3 = __errno();
    *piVar3 = 0xc;
    if (local_1a5 == '\0') {
      *(byte *)pwVar16 = 0;
    }
    else {
      *pwVar16 = L'\0';
    }
    goto LAB_0143d1ac;
  }
  if (local_1a5 == '\0') {
    *(byte *)pwVar12 = bVar2;
    pwVar12 = (wchar_t *)((int)pwVar12 + 1);
    local_1c0 = pwVar12;
  }
  else {
    local_1e4 = bVar2;
    iVar9 = _isleadbyte(local_198 & 0xff);
    if (iVar9 != 0) {
      local_190 = local_190 + 1;
      local_1e3 = __inc();
    }
    local_1f4[0] = L'?';
    local_1f4[1] = L'\0';
    __mbtowc_l(local_1f4,(char *)&local_1e4,(size_t)(local_208.locinfo)->locale_name[3],&local_208);
    *pwVar12 = local_1f4[0];
    pwVar12 = pwVar12 + 1;
    local_1c0 = pwVar12;
  }
  goto LAB_0143c999;
}

// 0143D240  FUN_0143d240  size=24  [run]
void FUN_0143d240(void)

{
  float10 in_ST0;
  
  FUN_0143d25e((double)in_ST0);
  return;
}

// 0143D258  FUN_0143d258  size=6  [run]
float10 FUN_0143d258(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dStack_c;
  
  iVar4 = 0;
  dVar8 = param_1;
  while( true ) {
    uVar2 = (uint)(ushort)((ulonglong)dVar8 >> 0x34);
    dVar7 = (double)((ulonglong)dVar8 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar7 + 4398046511103.0073,0) & 0x7f0;
    dVar9 = (double)((ulonglong)dVar8 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar12 = (double)((ulonglong)dVar8 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar10 = dVar9 * *(double *)(&DAT_0182a970 + uVar1) - 1.0;
    dVar7 = (dVar7 - dVar9) * *(double *)(&DAT_0182a970 + uVar1);
    dVar9 = ((double)((ulonglong)dVar8 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_0182a978 + uVar1);
    dVar8 = dVar7 + dVar10;
    dVar12 = dVar9 + (dVar12 * *(double *)(&UNK_0182a978 + uVar1) - 1.0);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar11 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((dVar8 * 0.1428709072311373 + -0.1666800146149218) * dVar8 +
                       0.1999999994995557) * dVar8 * dVar8 * dVar8 * dVar8 * dVar8 +
                       ((dVar12 * -0.24999999959276006 + 0.33333333333333787) * dVar12 +
                       -0.5000000000000031) * dVar12 * dVar12 +
                       *(double *)(&UNK_0182ad88 + uVar1) + dVar11 * 5.497923018708371e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_0182a8d8 + iVar5)) +
                      *(double *)(&DAT_0182ad80 + uVar1) + dVar10 + dVar11 * 0.6931471805598903 +
                      (double)((ulonglong)dVar7 & *(ulonglong *)(&DAT_0182a8d0 + iVar5)));
    }
    dStack_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(dStack_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        dStack_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 1000;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        dStack_c = -NAN;
        uVar6 = 3;
      }
      else {
        uVar6 = 1000;
      }
      goto LAB_0143d452;
    }
    dVar8 = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  dStack_c = -INFINITY;
  uVar6 = 2;
LAB_0143d452:
  ___libm_error_support(&param_1,&param_1,&dStack_c,uVar6);
  return (float10)dStack_c;
}

// 0143D25E  FUN_0143d25e  size=590  [run]
float10 FUN_0143d25e(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 in_XMM0 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar7 = in_XMM0._0_8_;
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar8 = (double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar8 + 4398046511103.0073,0) & 0x7f0;
    dVar10 = (double)(uVar7 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar12 = (double)(uVar7 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar11 = dVar10 * *(double *)(&DAT_0182a970 + uVar1) - 1.0;
    dVar8 = (dVar8 - dVar10) * *(double *)(&DAT_0182a970 + uVar1);
    dVar9 = ((double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_0182a978 + uVar1);
    dVar10 = dVar8 + dVar11;
    in_XMM0._8_8_ = dVar9 + (dVar12 * *(double *)(&UNK_0182a978 + uVar1) - 1.0);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar12 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((dVar10 * 0.1428709072311373 + -0.1666800146149218) * dVar10 +
                       0.1999999994995557) * dVar10 * dVar10 * dVar10 * dVar10 * dVar10 +
                       ((in_XMM0._8_8_ * -0.24999999959276006 + 0.33333333333333787) * in_XMM0._8_8_
                       + -0.5000000000000031) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       *(double *)(&UNK_0182ad88 + uVar1) + dVar12 * 5.497923018708371e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_0182a8d8 + iVar5)) +
                      *(double *)(&DAT_0182ad80 + uVar1) + dVar11 + dVar12 * 0.6931471805598903 +
                      (double)((ulonglong)dVar8 & *(ulonglong *)(&DAT_0182a8d0 + iVar5)));
    }
    local_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        local_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 1000;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        uVar6 = 3;
      }
      else {
        uVar6 = 1000;
      }
      goto LAB_0143d452;
    }
    in_XMM0._0_8_ = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  local_c = -INFINITY;
  uVar6 = 2;
LAB_0143d452:
  ___libm_error_support(&param_1,&param_1,&local_c,uVar6);
  return (float10)local_c;
}

// 0143D4B0  FUN_0143d4b0  size=1843  [run]
int FUN_0143d4b0(undefined4 *param_1,LPCSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  int *piVar6;
  DWORD DVar7;
  long lVar8;
  int iVar9;
  HANDLE pvVar10;
  byte bVar11;
  int unaff_EDI;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  _SECURITY_ATTRIBUTES local_34;
  uint local_28;
  HANDLE local_24;
  uint local_20;
  DWORD local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  char local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar12 = (param_3 & 0x80) == 0;
  local_28 = 0;
  local_6 = 0;
  local_c = 0;
  local_34.nLength = 0xc;
  local_34.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar12) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_34.bInheritHandle = (BOOL)bVar12;
  iVar3 = FUN_0143e62e(&local_28);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_28 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar4 = param_3 & 3;
  if (uVar4 == 0) {
    local_10 = 0x80000000;
  }
  else {
    if (uVar4 == 1) {
      if (((param_3 & 8) == 0) || ((param_3 & 0x70000) == 0)) {
        local_10 = 0x40000000;
        goto LAB_0143d572;
      }
    }
    else if (uVar4 != 2) goto LAB_0143d532;
    local_10 = 0xc0000000;
  }
LAB_0143d572:
  if (param_4 == 0x10) {
    local_18 = 0;
  }
  else if (param_4 == 0x20) {
    local_18 = 1;
  }
  else if (param_4 == 0x30) {
    local_18 = 2;
  }
  else if (param_4 == 0x40) {
    local_18 = 3;
  }
  else {
    if (param_4 != 0x80) {
LAB_0143d532:
      puVar5 = ___doserrno();
      *puVar5 = 0;
      *in_EAX = 0xffffffff;
      piVar6 = __errno();
      *piVar6 = 0x16;
      FUN_00fe56c2();
      return 0x16;
    }
    local_18 = (uint)(local_10 == 0x80000000);
  }
  uVar4 = param_3 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      local_1c = 3;
    }
    else if (uVar4 == 0x100) {
      local_1c = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_0143d634;
      if (uVar4 != 0x300) goto LAB_0143d614;
      local_1c = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_0143d634:
        local_1c = 5;
        goto LAB_0143d644;
      }
      if (uVar4 != 0x700) {
LAB_0143d614:
        puVar5 = ___doserrno();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        piVar6 = __errno();
        *piVar6 = 0x16;
        FUN_00fe56c2();
        return 0x16;
      }
    }
    local_1c = 1;
  }
LAB_0143d644:
  local_14 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_01f8f5a8 & param_5))) {
    local_14 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_14 = local_14 | 0x4000000;
    local_10 = local_10 | 0x10000;
    local_18 = local_18 | 4;
  }
  if ((param_3 & 0x1000) != 0) {
    local_14 = local_14 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      local_14 = local_14 | 0x10000000;
    }
  }
  else {
    local_14 = local_14 | 0x8000000;
  }
  uVar4 = __alloc_osfhnd();
  *in_EAX = uVar4;
  if (uVar4 == 0xffffffff) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    piVar6 = __errno();
    *piVar6 = 0x18;
    piVar6 = __errno();
    return *piVar6;
  }
  *param_1 = 1;
  local_24 = CreateFileA(param_2,local_10,local_18,&local_34,local_1c,local_14,(HANDLE)0x0);
  if (local_24 == (HANDLE)0xffffffff) {
    if (((local_10 & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_10 = local_10 & 0x7fffffff;
      local_24 = CreateFileA(param_2,local_10,local_18,&local_34,local_1c,local_14,(HANDLE)0x0);
      if (local_24 != (HANDLE)0xffffffff) goto LAB_0143d76c;
    }
    pbVar1 = (byte *)((&DAT_0225bf80)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    goto LAB_0143d75d;
  }
LAB_0143d76c:
  DVar7 = GetFileType(local_24);
  if (DVar7 == 0) {
    pbVar1 = (byte *)((&DAT_0225bf80)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    CloseHandle(local_24);
    if (DVar7 == 0) {
      piVar6 = __errno();
      *piVar6 = 0xd;
    }
    goto LAB_0143d75d;
  }
  if (DVar7 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar7 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_24);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_0225bf80)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40) = bVar11;
  pbVar1 = (byte *)((&DAT_0225bf80)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_0143dad2;
    if ((param_3 & 2) == 0) goto LAB_0143d8a0;
    lVar8 = __lseek_nolock(*in_EAX,-1,2);
    if (lVar8 == -1) {
      puVar5 = ___doserrno();
      bVar11 = local_5;
      if (*puVar5 == 0x83) goto LAB_0143d8a0;
    }
    else {
      local_8 = '\0';
      iVar3 = __read_nolock(*in_EAX,&local_8,1);
      if ((((iVar3 != 0) || (local_8 != '\x1a')) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,lVar8 >> 0x1f)), iVar3 != -1)) &&
         (lVar8 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar8 != -1)) goto LAB_0143d8a0;
    }
LAB_0143d851:
    __close_nolock(*in_EAX);
    goto LAB_0143d75d;
  }
LAB_0143d8a0:
  local_5 = bVar11;
  if ((local_5 & 0x80) != 0) {
    if ((param_3 & 0x74000) == 0) {
      if ((local_28 & 0x74000) == 0) {
        param_3 = param_3 | 0x4000;
      }
      else {
        param_3 = param_3 | local_28 & 0x74000;
      }
    }
    uVar4 = param_3 & 0x74000;
    if (uVar4 == 0x4000) {
      local_6 = 0;
    }
    else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
      if ((param_3 & 0x301) == 0x301) goto LAB_0143d90f;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_0143d90f:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_20 = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_10 & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_1c == 0) goto LAB_0143dad2;
        if (2 < local_1c) {
          if (local_1c < 5) {
            lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar13 == 0) goto LAB_0143d977;
            lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar13 & (uint)((ulonglong)lVar13 >> 0x20);
            goto LAB_0143da3c;
          }
LAB_0143d96e:
          if (local_1c != 5) goto LAB_0143dad2;
        }
LAB_0143d977:
        iVar3 = 0;
        if (local_6 == 1) {
          local_20 = 0xbfbbef;
          iVar14 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_0143dad2;
          local_20 = 0xfeff;
          iVar14 = 2;
        }
        do {
          iVar9 = __write(*in_EAX,(void *)((int)&local_20 + iVar3),iVar14 - iVar3);
          if (iVar9 == -1) goto LAB_0143d851;
          iVar3 = iVar3 + iVar9;
        } while (iVar3 < iVar14);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_1c != 0)) {
            if (2 < local_1c) {
              if (4 < local_1c) goto LAB_0143d96e;
              lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar13 != 0) {
                lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar13 == -1) goto LAB_0143d851;
                goto LAB_0143d9c2;
              }
            }
            goto LAB_0143d977;
          }
          goto LAB_0143dad2;
        }
LAB_0143d9c2:
        iVar3 = __read_nolock(*in_EAX,&local_20,3);
        if (iVar3 == -1) goto LAB_0143d851;
        if (iVar3 == 2) {
LAB_0143da49:
          if ((local_20 & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            piVar6 = __errno();
            *piVar6 = 0x16;
            return 0x16;
          }
          if ((local_20 & 0xffff) == 0xfeff) {
            lVar8 = __lseek_nolock(*in_EAX,2,0);
            if (lVar8 == -1) goto LAB_0143d851;
            local_6 = 2;
            goto LAB_0143dad2;
          }
        }
        else if (iVar3 == 3) {
          if (local_20 == 0xbfbbef) {
            local_6 = 1;
            goto LAB_0143dad2;
          }
          goto LAB_0143da49;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_0143da3c:
        if (uVar4 == 0xffffffff) goto LAB_0143d851;
      }
    }
  }
LAB_0143dad2:
  pbVar1 = (byte *)((&DAT_0225bf80)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_0225bf80)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_0225bf80)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if ((local_10 & 0xc0000000) != 0xc0000000) {
    return local_c;
  }
  if ((param_3 & 1) == 0) {
    return local_c;
  }
  CloseHandle(local_24);
  pvVar10 = CreateFileA(param_2,local_10 & 0x7fffffff,local_18,&local_34,3,local_14,(HANDLE)0x0);
  if (pvVar10 != (HANDLE)0xffffffff) {
    *(HANDLE *)((*in_EAX & 0x1f) * 0x40 + (&DAT_0225bf80)[(int)*in_EAX >> 5]) = pvVar10;
    return local_c;
  }
  DVar7 = GetLastError();
  __dosmaperr(DVar7);
  pbVar1 = (byte *)((&DAT_0225bf80)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0xfe;
  __free_osfhnd(*in_EAX);
LAB_0143d75d:
  piVar6 = __errno();
  return *piVar6;
}

// 0143DC92  FID_conflict:__sopen_helper  size=145  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __sopen_helper
    __wsopen_helper
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
FID_conflict___sopen_helper
          (char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  int *piVar1;
  errno_t eVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0187a7c8;
  uStack_c = 0x143dc9e;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    piVar1 = __errno();
    eVar2 = 0x16;
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  else {
    local_8 = (undefined *)0x0;
    eVar2 = FUN_0143d4b0(local_20,_Filename,_OFlag,_ShFlag,_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_0143dd28();
    if (eVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return eVar2;
}

// 0143DD28  FUN_0143dd28  size=46  [run]
void FUN_0143dd28(void)

{
  byte *pbVar1;
  int unaff_EBP;
  uint *unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) != unaff_EDI) {
    if (*(int *)(unaff_EBP + -0x20) != unaff_EDI) {
      pbVar1 = (byte *)((&DAT_0225bf80)[(int)*unaff_ESI >> 5] + 4 + (*unaff_ESI & 0x1f) * 0x40);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*unaff_ESI);
  }
  return;
}

// 0143DD56  FID_conflict:__sopen  size=50  [run]
/* Library Function - Multiple Matches With Different Base Names
    __sopen
    __wsopen
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___sopen(wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  errno_t eVar1;
  int in_stack_00000010;
  int local_8;
  
  local_8 = -1;
  eVar1 = FID_conflict___sopen_helper
                    ((char *)_Filename,_OpenFlag,_ShareFlag,in_stack_00000010,&local_8,0);
  if (eVar1 != 0) {
    return -1;
  }
  return local_8;
}

// 0143DD88  __sopen_s  size=32  [run]
/* Library Function - Single Match
    __sopen_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
__sopen_s(int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  errno_t eVar1;
  
  eVar1 = FID_conflict___sopen_helper(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}

// 0143DDA8  __mbsnbicmp_l  size=516  [run]
/* Library Function - Single Match
    __mbsnbicmp_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsnbicmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  size_t sVar1;
  uchar *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  _LocaleUpdate local_1c [4];
  int local_18;
  int local_14;
  char local_10;
  ushort local_c;
  ushort local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_1c,_Locale);
  if (_MaxCount == 0) {
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0;
  }
  else if (*(int *)(local_18 + 8) == 0) {
    iVar3 = __strnicmp((char *)_Str1,(char *)_Str2,_MaxCount);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str1 == (uchar *)0x0) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_00fe56c2();
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else {
    if (_Str2 != (uchar *)0x0) {
      do {
        uVar5 = (uint)*_Str1;
        sVar1 = _MaxCount - 1;
        puVar2 = _Str1 + 1;
        if ((*(byte *)(uVar5 + 0x1d + local_18) & 4) == 0) {
          if ((*(byte *)(uVar5 + local_18 + 0x1d) & 0x10) != 0) {
            uVar5 = (uint)*(byte *)(uVar5 + local_18 + 0x11d);
          }
          local_c = (ushort)uVar5;
          _Str1 = puVar2;
LAB_0143defb:
          uVar5 = (uint)*_Str2;
          pbVar6 = _Str2 + 1;
          if ((*(byte *)(uVar5 + 0x1d + local_18) & 4) == 0) {
            if ((*(byte *)(uVar5 + local_18 + 0x1d) & 0x10) != 0) {
              uVar5 = (uint)*(byte *)(uVar5 + local_18 + 0x11d);
            }
            goto LAB_0143df6b;
          }
          if (sVar1 == 0) {
LAB_0143df11:
            _MaxCount = sVar1;
            local_8 = 0;
          }
          else {
            sVar1 = _MaxCount - 2;
            if (*pbVar6 == 0) goto LAB_0143df11;
            local_8 = CONCAT11(*_Str2,*pbVar6);
            pbVar6 = _Str2 + 2;
            _MaxCount = sVar1;
            if ((local_8 < *(ushort *)(local_18 + 0x10)) || (*(ushort *)(local_18 + 0x12) < local_8)
               ) {
              if ((*(ushort *)(local_18 + 0x16) <= local_8) &&
                 (local_8 <= *(ushort *)(local_18 + 0x18))) {
                local_8 = local_8 + *(short *)(local_18 + 0x1a);
              }
            }
            else {
              local_8 = local_8 + *(short *)(local_18 + 0x14);
            }
          }
        }
        else {
          if (sVar1 != 0) {
            if (*puVar2 == '\0') {
              local_c = 0;
              _Str1 = puVar2;
            }
            else {
              local_c = CONCAT11(*_Str1,*puVar2);
              _Str1 = _Str1 + 2;
              if ((local_c < *(ushort *)(local_18 + 0x10)) ||
                 (*(ushort *)(local_18 + 0x12) < local_c)) {
                if ((*(ushort *)(local_18 + 0x16) <= local_c) &&
                   (local_c <= *(ushort *)(local_18 + 0x18))) {
                  local_c = local_c + *(short *)(local_18 + 0x1a);
                }
              }
              else {
                local_c = local_c + *(short *)(local_18 + 0x14);
              }
            }
            goto LAB_0143defb;
          }
          uVar5 = (uint)*_Str2;
          if ((*(byte *)(uVar5 + 0x1d + local_18) & 4) != 0) {
LAB_0143df85:
            if (local_10 != '\0') {
              *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
            }
            return 0;
          }
          local_c = 0;
          pbVar6 = _Str2;
          _Str1 = puVar2;
LAB_0143df6b:
          local_8 = (ushort)uVar5;
          _MaxCount = sVar1;
        }
        if (local_8 != local_c) {
          iVar3 = (-(uint)(local_8 < local_c) & 2) - 1;
          if (local_10 == '\0') {
            return iVar3;
          }
          *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
          return iVar3;
        }
        if ((local_c == 0) || (_Str2 = pbVar6, _MaxCount == 0)) goto LAB_0143df85;
      } while( true );
    }
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_00fe56c2();
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  return iVar3;
}

// 0143DFAC  __mbsnbicmp  size=26  [run]
/* Library Function - Single Match
    __mbsnbicmp
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsnbicmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}

// 0143DFC6  __mbsnbcmp_l  size=332  [run]
/* Library Function - Single Match
    __mbsnbcmp_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsnbcmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  size_t sVar1;
  int iVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    return 0;
  }
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (*(int *)(local_10 + 8) == 0) {
    iVar2 = _strncmp((char *)_Str1,(char *)_Str2,_MaxCount);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str1 == (uchar *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00fe56c2();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if (_Str2 != (uchar *)0x0) {
      do {
        uVar5 = (uint)*_Str1;
        sVar1 = _MaxCount - 1;
        pbVar6 = _Str1 + 1;
        if ((*(byte *)(uVar5 + 0x1d + local_10) & 4) == 0) {
LAB_0143e0b9:
          uVar4 = (ushort)uVar5;
          uVar5 = (uint)*_Str2;
          pbVar7 = _Str2 + 1;
          if ((*(byte *)(uVar5 + 0x1d + local_10) & 4) != 0) {
            if (sVar1 != 0) {
              sVar1 = _MaxCount - 2;
              if (*pbVar7 != 0) {
                uVar5 = (uint)CONCAT11(*_Str2,*pbVar7);
                pbVar7 = _Str2 + 2;
                goto LAB_0143e0e7;
              }
            }
            _MaxCount = sVar1;
            uVar5 = 0;
            sVar1 = _MaxCount;
          }
        }
        else {
          if (sVar1 != 0) {
            if (*pbVar6 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = (uint)CONCAT11(*_Str1,*pbVar6);
              pbVar6 = _Str1 + 2;
            }
            goto LAB_0143e0b9;
          }
          uVar5 = (uint)*_Str2;
          uVar4 = 0;
          pbVar7 = _Str2;
          if ((*(byte *)(uVar5 + 0x1d + local_10) & 4) != 0) {
LAB_0143e08e:
            if (local_8 != '\0') {
              *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            }
            return 0;
          }
        }
LAB_0143e0e7:
        _MaxCount = sVar1;
        if ((ushort)uVar5 != uVar4) {
          iVar2 = (-(uint)((ushort)uVar5 < uVar4) & 2) - 1;
          if (local_8 == '\0') {
            return iVar2;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return iVar2;
        }
        if ((uVar4 == 0) || (_Str1 = pbVar6, _Str2 = pbVar7, _MaxCount == 0)) goto LAB_0143e08e;
      } while( true );
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00fe56c2();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

// 0143E112  __mbsnbcmp  size=26  [run]
/* Library Function - Single Match
    __mbsnbcmp
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbcmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}

// 0143E12C  __ungetc_nolock  size=227  [run]
/* Library Function - Single Match
    __ungetc_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __ungetc_nolock(int _Ch,FILE *_File)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  if ((_File->_flag & 0x40) == 0) {
    uVar2 = __fileno(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar4 = &DAT_018e9590;
    }
    else {
      puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_0225bf80)[(int)uVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar4 = &DAT_018e9590;
      }
      else {
        puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_0225bf80)[(int)uVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_0143e1af;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00fe56c2();
  }
  else {
LAB_0143e1af:
    if (_Ch != -1) {
      uVar2 = _File->_flag;
      if (((uVar2 & 1) != 0) || (((char)uVar2 < '\0' && ((uVar2 & 2) == 0)))) {
        if (_File->_base == (char *)0x0) {
          __getbuf(_File);
        }
        if (_File->_ptr == _File->_base) {
          if (_File->_cnt != 0) {
            return -1;
          }
          _File->_ptr = _File->_ptr + 1;
        }
        _File->_ptr = _File->_ptr + -1;
        pcVar1 = _File->_ptr;
        if ((_File->_flag & 0x40) == 0) {
          *pcVar1 = (char)_Ch;
        }
        else if (*pcVar1 != (char)_Ch) {
          _File->_ptr = pcVar1 + 1;
          return -1;
        }
        _File->_cnt = _File->_cnt + 1;
        _File->_flag = _File->_flag & 0xffffffefU | 1;
        return _Ch & 0xff;
      }
    }
  }
  return -1;
}

// 0143E278  __chsize_nolock  size=438  [run]
/* Library Function - Single Match
    __chsize_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __chsize_nolock(int _FileHandle,longlong _Size)

{
  int iVar1;
  HANDLE pvVar2;
  LPVOID _Buf;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  BOOL BVar7;
  uint uVar8;
  int unaff_EDI;
  int iVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint in_stack_00000008;
  DWORD DVar14;
  SIZE_T dwBytes;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  uVar12 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
  if (uVar12 == 0xffffffffffffffff) goto LAB_0143e300;
  lVar13 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar4 = (int)((ulonglong)lVar13 >> 0x20);
  if (lVar13 == -1) goto LAB_0143e300;
  uVar8 = in_stack_00000008 - (uint)lVar13;
  uVar5 = (uint)(in_stack_00000008 < (uint)lVar13);
  iVar1 = (int)_Size - iVar4;
  iVar9 = iVar1 - uVar5;
  if ((iVar9 < 0) ||
     ((iVar9 == 0 || SBORROW4((int)_Size,iVar4) != SBORROW4(iVar1,uVar5) && (uVar8 == 0)))) {
    if ((iVar9 < 1) && (iVar9 < 0)) {
      lVar13 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EDI);
      if (lVar13 == -1) goto LAB_0143e300;
      pvVar2 = (HANDLE)__get_osfhandle(_FileHandle);
      BVar7 = SetEndOfFile(pvVar2);
      local_14 = (BVar7 != 0) - 1;
      local_10 = (int)local_14 >> 0x1f;
      if ((local_14 & local_10) == 0xffffffff) {
        piVar3 = __errno();
        *piVar3 = 0xd;
        puVar6 = ___doserrno();
        DVar14 = GetLastError();
        *puVar6 = DVar14;
        goto LAB_0143e3fe;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar14 = 8;
    pvVar2 = GetProcessHeap();
    _Buf = HeapAlloc(pvVar2,DVar14,dwBytes);
    if (_Buf == (LPVOID)0x0) {
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_0143e300;
    }
    iVar4 = __setmode_nolock(_FileHandle,0x8000);
    while( true ) {
      uVar5 = uVar8;
      if ((-1 < iVar9) && ((0 < iVar9 || (0xfff < uVar8)))) {
        uVar5 = 0x1000;
      }
      uVar5 = __write_nolock(_FileHandle,_Buf,uVar5);
      if (uVar5 == 0xffffffff) break;
      bVar10 = uVar8 < uVar5;
      uVar8 = uVar8 - uVar5;
      bVar11 = SBORROW4(iVar9,(int)uVar5 >> 0x1f);
      iVar1 = iVar9 - ((int)uVar5 >> 0x1f);
      iVar9 = iVar1 - (uint)bVar10;
      if ((iVar9 < 0) || ((iVar9 == 0 || bVar11 != SBORROW4(iVar1,(uint)bVar10) && (uVar8 == 0))))
      goto LAB_0143e352;
    }
    puVar6 = ___doserrno();
    if (*puVar6 == 5) {
      piVar3 = __errno();
      *piVar3 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_0143e352:
    __setmode_nolock(_FileHandle,iVar4);
    DVar14 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar14,_Buf);
LAB_0143e3fe:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_0143e300;
  }
  lVar13 = __lseeki64_nolock(_FileHandle,uVar12 >> 0x20,unaff_EDI);
  if (lVar13 != -1) {
    return 0;
  }
LAB_0143e300:
  piVar3 = __errno();
  return *piVar3;
}

// 0143E42E  __chsize_s  size=220  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __chsize_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __chsize_s(int _FileHandle,longlong _Size)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  errno_t eVar4;
  undefined4 in_stack_ffffffcc;
  int local_20;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    return 9;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0225bf70)) {
    iVar3 = (_FileHandle & 0x1fU) * 0x40;
    if ((*(byte *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
      if ((0 < (int)_Size) || (-1 < (int)_Size)) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          local_20 = 9;
        }
        else {
          local_20 = __chsize_nolock(_FileHandle,CONCAT44(in_stack_ffffffcc,(int)_Size));
        }
        FUN_0143e50d();
        return local_20;
      }
      puVar1 = ___doserrno();
      *puVar1 = 0;
      piVar2 = __errno();
      eVar4 = 0x16;
      *piVar2 = 0x16;
      goto LAB_0143e470;
    }
  }
  puVar1 = ___doserrno();
  *puVar1 = 0;
  piVar2 = __errno();
  eVar4 = 9;
  *piVar2 = 9;
LAB_0143e470:
  FUN_00fe56c2();
  return eVar4;
}

// 0143E50D  FUN_0143e50d  size=8  [run]
void FUN_0143e50d(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}

// 0143E515  __chsize  size=28  [run]
/* Library Function - Single Match
    __chsize
   
   Library: Visual Studio 2010 Release */

int __cdecl __chsize(int _FileHandle,long _Size)

{
  errno_t eVar1;
  undefined4 unaff_EBP;
  
  eVar1 = __chsize_s(_FileHandle,CONCAT44(unaff_EBP,_Size >> 0x1f));
  return -(uint)(eVar1 != 0);
}

// 0143E531  __setmode_nolock  size=187  [run]
/* Library Function - Single Match
    __setmode_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __setmode_nolock(int _FileHandle,int _Mode)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  
  piVar1 = &DAT_0225bf80 + (_FileHandle >> 5);
  iVar7 = (_FileHandle & 0x1fU) * 0x40;
  iVar4 = *piVar1 + iVar7;
  cVar2 = *(char *)(iVar4 + 0x24);
  bVar3 = *(byte *)(iVar4 + 4);
  if (_Mode == 0x4000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
    pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
    *pbVar5 = *pbVar5 & 0x80;
  }
  else if (_Mode == 0x8000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0x7f;
  }
  else {
    if ((_Mode == 0x10000) || (_Mode == 0x20000)) {
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x82 | 2;
    }
    else {
      if (_Mode != 0x40000) goto LAB_0143e5ce;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x81 | 1;
    }
    *pbVar5 = bVar6;
  }
LAB_0143e5ce:
  if ((bVar3 & 0x80) == 0) {
    return 0x8000;
  }
  return (-(uint)((char)(cVar2 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
}

// 0143E5EC  __set_fmode  size=66  [run]
/* Library Function - Single Match
    __set_fmode
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

errno_t __cdecl __set_fmode(int _Mode)

{
  int *piVar1;
  
  if (((_Mode != 0x4000) && (_Mode != 0x8000)) && (_Mode != 0x10000)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return 0x16;
  }
  InterlockedExchange(&DAT_0225ba8c,_Mode);
  return 0;
}

