// lib/msvc/crt/unit_00FE3E52.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FE3E52..010049E1, 621 functions

#include "mgrr.h"
#include "DName.h"
#include "DNameStatusNode.h"
#include "UnDecorator.h"
#include "_HeapManager.h"
#include "pDNameNode.h"
#include "pairNode.h"
#include "pcharNode.h"
#include "type_info.h"

// 00FE3E52  __itoa_s  size=42  [run]
/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  undefined4 uVar2;
  
  if ((_Radix == 10) && (_Value < 0)) {
    uVar2 = 1;
    _Radix = 10;
  }
  else {
    uVar2 = 0;
  }
  eVar1 = xtoa_s(_Size,_Radix,uVar2);
  return eVar1;
}

// 00FE3E7C  __ltoa_s  size=39  [run]
/* Library Function - Single Match
    __ltoa_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  undefined4 uVar1;
  errno_t eVar2;
  
  uVar1 = 0;
  if ((_Radix == 10) && (_Val < 0)) {
    uVar1 = 1;
  }
  eVar2 = xtoa_s(_Size,_Radix,uVar1);
  return eVar2;
}

// 00FE3EA3  __ultoa_s  size=26  [run]
/* Library Function - Single Match
    __ultoa_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __ultoa_s(ulong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  
  eVar1 = xtoa_s(_Size,_Radix,0);
  return eVar1;
}

// 00FE3EBD  x64toa_s  size=236  [run]
/* Library Function - Single Match
    @x64toa_s@24
   
   Library: Visual Studio 2010 Release
   __fastcall x64toa_s,24 */

int __fastcall
x64toa_s(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6,
        char *param_7)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  uint extraout_ECX;
  char *pcVar4;
  char *unaff_EDI;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint local_8;
  
  if ((unaff_EDI == (char *)0x0) || (param_5 == 0)) {
LAB_00fe3ecc:
    piVar2 = __errno();
    iVar8 = 0x16;
  }
  else {
    *unaff_EDI = '\0';
    if ((param_7 != (char *)0x0) + 1 < param_5) {
      if (param_6 - 2U < 0x23) {
        bVar6 = param_7 != (char *)0x0;
        param_7 = unaff_EDI;
        if (bVar6) {
          bVar5 = param_3 != 0;
          param_3 = -param_3;
          *unaff_EDI = '-';
          param_7 = unaff_EDI + 1;
          param_4 = -(param_4 + (uint)bVar5);
        }
        lVar7 = CONCAT44(param_4,param_3);
        local_8 = (uint)bVar6;
        pcVar1 = param_7;
        do {
          pcVar4 = pcVar1;
          lVar7 = __aulldvrm(lVar7,param_6,0);
          if (extraout_ECX < 10) {
            cVar3 = (char)extraout_ECX + '0';
          }
          else {
            cVar3 = (char)extraout_ECX + 'W';
          }
          *pcVar4 = cVar3;
          local_8 = local_8 + 1;
        } while ((lVar7 != 0) && (pcVar1 = pcVar4 + 1, local_8 < param_5));
        if (local_8 < param_5) {
          pcVar4[1] = '\0';
          do {
            cVar3 = *pcVar4;
            *pcVar4 = *param_7;
            pcVar4 = pcVar4 + -1;
            *param_7 = cVar3;
            param_7 = param_7 + 1;
          } while (param_7 < pcVar4);
          return 0;
        }
        *unaff_EDI = '\0';
        piVar2 = __errno();
        iVar8 = 0x22;
        *piVar2 = 0x22;
        goto LAB_00fe3ed6;
      }
      goto LAB_00fe3ecc;
    }
    piVar2 = __errno();
    iVar8 = 0x22;
  }
  *piVar2 = iVar8;
LAB_00fe3ed6:
  FUN_00fe56c2();
  return iVar8;
}

// 00FE3FA9  __i64toa_s  size=53  [run]
/* Library Function - Single Match
    __i64toa_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __i64toa_s(longlong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  undefined4 uVar1;
  errno_t eVar2;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  uVar1 = 0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    uVar1 = 1;
  }
  eVar2 = x64toa_s(in_ECX,in_EDX,_Val,_Size,_Radix,uVar1);
  return eVar2;
}

// 00FE3FDE  __ui64toa_s  size=31  [run]
/* Library Function - Single Match
    __ui64toa_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __ui64toa_s(ulonglong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  eVar1 = x64toa_s(in_ECX,in_EDX,_Val,_Size,_Radix,0);
  return eVar1;
}

// 00FE3FFD  _abort  size=51  [run]
/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2010 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_00ff7227();
  if (iVar2 != 0) {
    _raise(0x16);
  }
  if (((byte)DAT_018e8a10 & 2) != 0) {
    __call_reportfault(3,0x40000015,1);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// 00FE4030  __set_abort_behavior  size=33  [run]
/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2010 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_018e8a10;
  DAT_018e8a10 = ~_Mask & DAT_018e8a10 | _Flags & _Mask;
  return uVar1;
}

// 00FE4051  type_info::_Type_info_dtor  size=103  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl type_info::_Type_info_dtor(class type_info *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl type_info::_Type_info_dtor(type_info *param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  __lock(0xe);
  _Memory = DAT_01f8ef70;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_01f8ef6c;
    do {
      piVar2 = piVar1;
      if (DAT_01f8ef70 == (int *)0x0) goto LAB_00fe4095;
      piVar1 = DAT_01f8ef70;
    } while (*DAT_01f8ef70 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_01f8ef70[1];
    _free(_Memory);
LAB_00fe4095:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_00fe40b8();
  return;
}

// 00FE40B8  FUN_00fe40b8  size=9  [run]
void FUN_00fe40b8(void)

{
  FUN_00fec3c5(0xe);
  return;
}

// 00FE40C1  type_info::_Name_base  size=230  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static char const * __cdecl type_info::_Name_base(class type_info const *,struct
   __type_info_node *)
   
   Library: Visual Studio 2010 Release */

char * __cdecl type_info::_Name_base(type_info *param_1,__type_info_node *param_2)

{
  char *_Str;
  size_t sVar1;
  undefined4 *_Memory;
  char *_Dst;
  errno_t eVar2;
  size_t sVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    _Str = (char *)___unDName(0,param_1 + 9,0,_malloc,_free,0x2800);
    if (_Str == (char *)0x0) {
      return (char *)0x0;
    }
    sVar1 = _strlen(_Str);
    while ((sVar1 != 0 && (sVar3 = sVar1 - 1, _Str[sVar3] == ' '))) {
      _Str[sVar3] = '\0';
      sVar1 = sVar3;
    }
    __lock(0xe);
    if ((*(int *)(param_1 + 4) == 0) && (_Memory = _malloc(8), _Memory != (undefined4 *)0x0)) {
      _Dst = _malloc(sVar1 + 1);
      *(char **)(param_1 + 4) = _Dst;
      if (_Dst == (char *)0x0) {
        _free(_Memory);
      }
      else {
        eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Str);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *_Memory = *(undefined4 *)(param_1 + 4);
        _Memory[1] = *(undefined4 *)(param_2 + 4);
        *(undefined4 **)(param_2 + 4) = _Memory;
      }
    }
    _free(_Str);
    FUN_00fe41aa();
  }
  return *(char **)(param_1 + 4);
}

// 00FE41AA  FUN_00fe41aa  size=9  [run]
void FUN_00fe41aa(void)

{
  FUN_00fec3c5(0xe);
  return;
}

// 00FE4223  ___unDNameHelper  size=51  [run]
/* Library Function - Single Match
    ___unDNameHelper
   
   Library: Visual Studio 2010 Release */

void ___unDNameHelper(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((short)param_4 == 0) {
    param_4 = 0x2800;
  }
  ___unDName(param_1,param_2,param_3,_malloc,_free,param_4);
  return;
}

// 00FE4256  type_info::_Name_base_internal  size=256  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static char const * __cdecl type_info::_Name_base_internal(class type_info const
   *,struct __type_info_node *)
   
   Library: Visual Studio 2010 Release */

char * __cdecl type_info::_Name_base_internal(type_info *param_1,__type_info_node *param_2)

{
  char *_Str;
  size_t sVar1;
  undefined4 *_Memory;
  char *_Dst;
  errno_t eVar2;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0187a038;
  uStack_c = 0xfe4262;
  if (*(int *)(param_1 + 4) == 0) {
    __lock(0xe);
    local_8 = (undefined *)0x0;
    if (*(int *)(param_1 + 4) == 0) {
      _Str = (char *)___unDNameHelper(0,param_1 + 9,0,0x2800);
      if (_Str == (char *)0x0) {
        __local_unwind4(&DAT_018e8764,local_14,0xfffffffe);
        return (char *)0x0;
      }
      sVar1 = _strlen(_Str);
      while ((sVar1 != 0 && (_Str[sVar1 - 1] == ' '))) {
        _Str[sVar1 - 1] = '\0';
        sVar1 = sVar1 - 1;
      }
      _Memory = _malloc(8);
      if (_Memory != (undefined4 *)0x0) {
        _Dst = _malloc(sVar1 + 1);
        if (_Dst == (char *)0x0) {
          _free(_Memory);
        }
        else {
          eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Str);
          if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(param_1 + 4) = _Dst;
          *_Memory = _Dst;
          _Memory[1] = *(undefined4 *)(param_2 + 4);
          *(undefined4 **)(param_2 + 4) = _Memory;
        }
      }
      _free(_Str);
    }
    local_8 = (undefined *)0xfffffffe;
    FUN_00fe4359();
  }
  return *(char **)(param_1 + 4);
}

// 00FE4359  FUN_00fe4359  size=9  [run]
void FUN_00fe4359(void)

{
  FUN_00fec3c5(0xe);
  return;
}

// 00FE43C0  _strcmp  size=135  [run]
/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio 2010 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_00fe4404;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_00fe43d0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_00fe4404;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_00fe4404;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_00fe43d0:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_00fe4404:
  return (uint)bVar5 * -2 + 1;
}

// 00FE4448  __GET_RTERRMSG  size=38  [run]
/* Library Function - Single Match
    __GET_RTERRMSG
   
   Library: Visual Studio 2010 Release */

wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_016f5a70)[uVar1 * 2]) {
      return *(wchar_t **)(&UNK_016f5a74 + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x16);
  return (wchar_t *)0x0;
}

// 00FE446E  __NMSG_WRITE  size=431  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2010 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  HANDLE hFile;
  uint uVar6;
  wchar_t **lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  wchar_t *local_200;
  char local_1fc [500];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  pwVar1 = __GET_RTERRMSG(param_1);
  local_200 = pwVar1;
  if (pwVar1 != (wchar_t *)0x0) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_018e8760 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        uVar6 = 0;
        do {
          local_1fc[uVar6] = (char)pwVar1[uVar6];
          if (pwVar1[uVar6] == L'\0') break;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 500);
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_200;
        local_1fc[499] = 0;
        sVar5 = _strlen(local_1fc);
        WriteFile(hFile,local_1fc,sVar5,(LPDWORD)lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _wcscpy_s((wchar_t *)&DAT_01f8ef78,0x314,L"Runtime Error!\n\nProgram: ");
      if (eVar3 == 0) {
        _DAT_01f8f1b2 = 0;
        DVar4 = GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_01f8efaa,0x104);
        if ((DVar4 != 0) ||
           (eVar3 = _wcscpy_s((wchar_t *)&DAT_01f8efaa,0x2fb,L"<program name unknown>"), eVar3 == 0)
           ) {
          sVar5 = _wcslen((wchar_t *)&DAT_01f8efaa);
          if (0x3c < sVar5 + 1) {
            sVar5 = _wcslen((wchar_t *)&DAT_01f8efaa);
            eVar3 = _wcsncpy_s((wchar_t *)(&DAT_01f8ef34 + sVar5 * 2),
                               0x2fb - ((int)(sVar5 * 2 + -0x76) >> 1),L"...",3);
            if (eVar3 != 0) goto LAB_00fe4533;
          }
          eVar3 = _wcscat_s((wchar_t *)&DAT_01f8ef78,0x314,L"\n\n");
          if ((eVar3 == 0) &&
             (eVar3 = _wcscat_s((wchar_t *)&DAT_01f8ef78,0x314,local_200), eVar3 == 0)) {
            ___crtMessageBoxW((LPCWSTR)&DAT_01f8ef78,L"Microsoft Visual C++ Runtime Library",0x12010
                             );
            goto LAB_00fe460e;
          }
        }
      }
LAB_00fe4533:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
LAB_00fe460e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE461D  __FF_MSGBANNER  size=57  [run]
/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2010 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_018e8760 != 1) {
      return;
    }
  }
  __NMSG_WRITE(0xfc);
  __NMSG_WRITE(0xff);
  return;
}

// 00FE4656  ___getlocaleinfo  size=428  [run]
/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 2010 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  bool bVar1;
  size_t sVar2;
  DWORD DVar3;
  LPSTR _LpLCData;
  char *_Dst;
  int iVar4;
  errno_t eVar5;
  LPWSTR lpLCData;
  _locale_t local_8c;
  CHAR local_88 [128];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_8c = _Locale;
  if (_Lc_type != 1) {
    if (_Lc_type == 2) {
      *(undefined4 *)_Address = 0;
      sVar2 = GetLocaleInfoW((LCID)_LocaleName,_FieldType,(LPWSTR)0x0,0);
      if (sVar2 != 0) {
        lpLCData = __calloc_crt(sVar2,2);
        *(LPWSTR *)_Address = lpLCData;
        if ((lpLCData != (LPWSTR)0x0) &&
           (iVar4 = GetLocaleInfoW((LCID)_LocaleName,_FieldType,lpLCData,sVar2), iVar4 != 0))
        goto LAB_00fe4734;
      }
      _free(*(void **)_Address);
      *(undefined4 *)_Address = 0;
    }
    else if (_Lc_type == 0) {
      local_8c = (_locale_t)0x0;
      iVar4 = GetLocaleInfoW((LCID)_LocaleName,_FieldType | 0x20000000,(LPWSTR)&local_8c,2);
      if (iVar4 != 0) {
        *(undefined1 *)_Address = local_8c._0_1_;
      }
    }
    goto LAB_00fe4734;
  }
  bVar1 = false;
  _LpLCData = local_88;
  sVar2 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
  if (sVar2 == 0) {
    DVar3 = GetLastError();
    if (((DVar3 != 0x7a) ||
        (sVar2 = ___crtGetLocaleInfoA(local_8c,_LocaleName,_FieldType,(LPSTR)0x0,0), sVar2 == 0)) ||
       (_LpLCData = __calloc_crt(sVar2,1), _LpLCData == (LPSTR)0x0)) goto LAB_00fe4734;
    bVar1 = true;
    sVar2 = ___crtGetLocaleInfoA(local_8c,_LocaleName,_FieldType,_LpLCData,sVar2);
    if (sVar2 != 0) goto LAB_00fe4710;
  }
  else {
LAB_00fe4710:
    _Dst = __calloc_crt(sVar2,1);
    *(char **)_Address = _Dst;
    if (_Dst != (char *)0x0) {
      eVar5 = _strncpy_s(_Dst,sVar2,_LpLCData,sVar2 - 1);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (bVar1) {
        _free(_LpLCData);
      }
      goto LAB_00fe4734;
    }
    if (!bVar1) goto LAB_00fe4734;
  }
  _free(_LpLCData);
LAB_00fe4734:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

// 00FE4802  FUN_00fe4802  size=15  [run]
void FUN_00fe4802(undefined4 param_1)

{
  DAT_01f8f5a0 = param_1;
  return;
}

// 00FE4811  __forcdecpt_l  size=116  [run]
/* Library Function - Single Match
    __forcdecpt_l
   
   Library: Visual Studio 2010 Release */

void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  iVar3 = _tolower((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = _Buf + 1;
    iVar3 = _isdigit((uint)(byte)*_Buf);
    bVar4 = iVar3 == 0;
  }
  iVar3 = _tolower((int)*_Buf);
  if (iVar3 == 0x78) {
    _Buf = _Buf + 2;
  }
  bVar2 = *_Buf;
  *_Buf = *(byte *)**(undefined4 **)(local_14[0] + 0xbc);
  do {
    _Buf = _Buf + 1;
    bVar1 = *_Buf;
    *_Buf = bVar2;
    bVar2 = bVar1;
  } while (*_Buf != 0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}

// 00FE4885  __cropzeros_l  size=130  [run]
/* Library Function - Single Match
    __cropzeros_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale)

{
  char *pcVar1;
  char cVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  char *pcVar2;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  cVar3 = *_Buf;
  if (cVar3 != '\0') {
    do {
      if (cVar3 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) break;
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
    } while (cVar3 != '\0');
  }
  if (*_Buf != '\0') {
    do {
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
      pcVar1 = _Buf;
      if ((cVar3 == '\0') || (cVar3 == 'e')) break;
    } while (cVar3 != 'E');
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == '0');
    if (*pcVar1 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) {
      pcVar1 = pcVar2 + -2;
    }
    do {
      cVar3 = *_Buf;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + 1;
      *pcVar1 = cVar3;
    } while (cVar3 != '\0');
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}

// 00FE4907  __positive  size=28  [run]
/* Library Function - Single Match
    __positive
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __positive(double *arg)

{
  double dVar1;
  
  dVar1 = *arg;
  if (!NAN(dVar1) && 0.0 < dVar1 != (dVar1 == 0.0)) {
    return 1;
  }
  return 0;
}

// 00FE4923  __fassign_l  size=66  [run]
/* Library Function - Single Match
    __fassign_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4)

{
  _CRT_FLOAT local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FID_conflict___atoflt_l((_CRT_FLOAT *)&flag,number,param_4);
    *(int *)argument = flag;
  }
  else {
    FID_conflict___atoflt_l(&local_c,number,param_4);
    *(float *)argument = local_c.f;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}

// 00FE4965  __fassign  size=26  [run]
/* Library Function - Single Match
    __fassign
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  __fassign_l(flag,argument,number,(_locale_t)0x0);
  return;
}

// 00FE497F  __shift  size=31  [run]
/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2010 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    FID_conflict__memcpy(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}

// 00FE499E  __forcdecpt  size=19  [run]
/* Library Function - Single Match
    __forcdecpt
   
   Library: Visual Studio 2010 Release */

void __cdecl __forcdecpt(char *_Buf)

{
  __forcdecpt_l(_Buf,(_locale_t)0x0);
  return;
}

// 00FE49B1  __cropzeros  size=19  [run]
/* Library Function - Single Match
    __cropzeros
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __cropzeros(char *_Buf)

{
  __cropzeros_l(_Buf,(_locale_t)0x0);
  return;
}

// 00FE49C4  FUN_00fe49c4  size=352  [run]
int FUN_00fe49c4(uint param_1,int param_2,int param_3,int *param_4,char param_5,
                localeinfo_struct *param_6)

{
  undefined1 *in_EAX;
  int *piVar1;
  errno_t eVar2;
  int iVar3;
  undefined1 *puVar4;
  char *_Dst;
  int iVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    piVar1 = __errno();
    iVar5 = 0x16;
  }
  else {
    iVar5 = param_2;
    if (param_2 < 1) {
      iVar5 = 0;
    }
    if (iVar5 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar4 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar4 = in_EAX + 1;
      }
      if (0 < param_2) {
        *puVar4 = puVar4[1];
        puVar4 = puVar4 + 1;
        *puVar4 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar4 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar4 = (undefined1 *)0xffffffff;
      }
      else {
        puVar4 = in_EAX + (param_1 - (int)_Dst);
      }
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar4,"e+000");
      if (eVar2 == 0) {
        if (param_3 != 0) {
          *_Dst = 'E';
        }
        if (*(char *)param_4[3] != '0') {
          iVar5 = param_4[1] + -1;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
            _Dst[1] = '-';
          }
          if (99 < iVar5) {
            iVar3 = iVar5 / 100;
            iVar5 = iVar5 % 100;
            _Dst[2] = _Dst[2] + (char)iVar3;
          }
          if (9 < iVar5) {
            iVar3 = iVar5 / 10;
            iVar5 = iVar5 % 10;
            _Dst[3] = _Dst[3] + (char)iVar3;
          }
          _Dst[4] = _Dst[4] + (char)iVar5;
        }
        if ((((byte)DAT_01f8fc44 & 1) != 0) && (_Dst[2] == '0')) {
          FID_conflict__memcpy(_Dst + 2,_Dst + 3,3);
        }
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    piVar1 = __errno();
    iVar5 = 0x22;
  }
  *piVar1 = iVar5;
  FUN_00fe56c2();
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar5;
}

// 00FE4B25  __cftoe_l  size=199  [run]
/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2010 Release */

void __cftoe_l(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
              undefined4 param_6)

{
  int *piVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  undefined1 local_20 [24];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  FUN_00ffd8ef(*param_1,param_1[1],&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (uint)(local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      FUN_00fe49c4(param_3,param_4,param_5,&local_30,0,param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE4BEC  __cftoe  size=32  [run]
/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,0);
  return eVar1;
}

// 00FE4C0C  __cftoa_l  size=886  [run]
/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2010 Release */

int __cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
             localeinfo_struct *param_6)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  size_t _SizeInBytes;
  errno_t eVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  short sVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  int iVar14;
  int local_28 [2];
  int local_20;
  char local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0x3ff;
  local_8 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar4 = __errno();
    iVar14 = 0x16;
LAB_00fe4c47:
    *piVar4 = iVar14;
    FUN_00fe56c2();
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return iVar14;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    piVar4 = __errno();
    iVar14 = 0x22;
    goto LAB_00fe4c47;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar5 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar5 != 0) {
      *param_2 = 0;
      if (local_1c == '\0') {
        return eVar5;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return eVar5;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar6 = _strrchr(param_2 + 2,0x65);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar6[3] = '\0';
    }
    goto LAB_00fe4f6e;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar10 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar12 = param_2 + 3;
  pcVar6 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar12 = '\0';
  }
  else {
    *pcVar12 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      sVar2 = __aullshr();
      uVar3 = sVar2 + 0x30;
      if (0x39 < uVar3) {
        uVar3 = uVar3 + sVar10;
      }
      local_8 = local_8 + -4;
      *pcVar6 = (char)uVar3;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar6 = pcVar6 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) && (uVar3 = __aullshr(), pcVar11 = pcVar6, 8 < uVar3)) {
      while( true ) {
        pcVar7 = pcVar11 + -1;
        if ((*pcVar7 != 'f') && (*pcVar7 != 'F')) break;
        *pcVar7 = '0';
        pcVar11 = pcVar7;
      }
      if (pcVar7 == pcVar12) {
        pcVar11[-2] = pcVar11[-2] + '\x01';
      }
      else if (*pcVar7 == '9') {
        *pcVar7 = (char)sVar10 + ':';
      }
      else {
        *pcVar7 = *pcVar7 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar6,0x30,param_4);
    pcVar6 = pcVar6 + param_4;
  }
  if (*pcVar12 == '\0') {
    pcVar6 = pcVar12;
  }
  *pcVar6 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar8 = __aullshr();
  uVar9 = (uVar8 & 0x7ff) - local_18;
  iVar14 = -(uint)((uVar8 & 0x7ff) < local_18);
  if (iVar14 < 0) {
    pcVar6[1] = '-';
    bVar13 = uVar9 != 0;
    uVar9 = -uVar9;
    iVar14 = -(iVar14 + (uint)bVar13);
  }
  else {
    pcVar6[1] = '+';
  }
  pcVar11 = pcVar6 + 2;
  *pcVar11 = '0';
  pcVar12 = pcVar11;
  if ((iVar14 < 0) || ((iVar14 < 1 && (uVar9 < 1000)))) {
LAB_00fe4f1d:
    if ((-1 < iVar14) && ((0 < iVar14 || (99 < uVar9)))) goto LAB_00fe4f28;
  }
  else {
    cVar1 = __alldvrm(uVar9,iVar14,1000,0);
    *pcVar11 = cVar1 + '0';
    pcVar12 = pcVar6 + 3;
    iVar14 = 0;
    uVar9 = extraout_ECX;
    local_14 = extraout_EDX;
    if (pcVar12 == pcVar11) goto LAB_00fe4f1d;
LAB_00fe4f28:
    cVar1 = __alldvrm(uVar9,iVar14,100,0);
    *pcVar12 = cVar1 + '0';
    pcVar12 = pcVar12 + 1;
    iVar14 = 0;
    uVar9 = extraout_ECX_00;
    local_14 = extraout_EDX_00;
  }
  if ((pcVar12 != pcVar11) || ((-1 < iVar14 && ((0 < iVar14 || (9 < uVar9)))))) {
    cVar1 = __alldvrm(uVar9,iVar14,10,0);
    *pcVar12 = cVar1 + '0';
    pcVar12 = pcVar12 + 1;
    uVar9 = extraout_ECX_01;
  }
  *pcVar12 = (char)uVar9 + '0';
  pcVar12[1] = '\0';
LAB_00fe4f6e:
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return 0;
}

// 00FE4F82  __cftoa  size=32  [run]
/* Library Function - Single Match
    __cftoa
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __cftoa(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoa_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,0);
  return eVar1;
}

// 00FE4FA2  __cftof2_l  size=259  [run]
/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall
__cftof2_l(char *param_1,int param_2,size_t param_3,char param_4,localeinfo_struct *param_5)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *piVar3;
  size_t sVar4;
  undefined4 uVar5;
  char *_Str;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_5);
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    piVar3 = __errno();
    uVar5 = 0x16;
    *piVar3 = 0x16;
    FUN_00fe56c2();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_4 != '\0') && (iVar1 - 1U == param_3)) {
      iVar2 = *in_EAX;
      (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[0] = '0';
      (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
    }
    if (*in_EAX == 0x2d) {
      *param_1 = '-';
      param_1 = param_1 + 1;
    }
    if (in_EAX[1] < 1) {
      _Str = param_1 + 1;
      sVar4 = _strlen(param_1);
      FID_conflict__memcpy(_Str,param_1,sVar4 + 1);
      *param_1 = '0';
    }
    else {
      _Str = param_1 + in_EAX[1];
    }
    if (0 < (int)param_3) {
      sVar4 = _strlen(_Str);
      FID_conflict__memcpy(_Str + 1,_Str,sVar4 + 1);
      *_Str = *(char *)**(undefined4 **)(local_14[0] + 0xbc);
      if (in_EAX[1] < 0) {
        sVar4 = -in_EAX[1];
        if ((param_4 != '\0') || ((int)sVar4 <= (int)param_3)) {
          param_3 = sVar4;
        }
        __shift();
        _memset(_Str + 1,0x30,param_3);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar5 = 0;
  }
  return uVar5;
}

// 00FE50A5  __cftof_l  size=193  [run]
/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2010 Release */

void __cftof_l(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  undefined1 local_20 [24];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  FUN_00ffd8ef(*param_1,param_1[1],&local_30,local_20,0x16);
  if (param_2 == (undefined1 *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  else if (param_3 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  else {
    _SizeInBytes = 0xffffffff;
    if (param_3 != -1) {
      _SizeInBytes = param_3 - (uint)(local_30.sign == 0x2d);
    }
    eVar2 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,local_30.decpt + param_4,
                      &local_30);
    if (eVar2 == 0) {
      __cftof2_l(param_3,param_4,0,param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE5166  __cftof  size=29  [run]
/* Library Function - Single Match
    __cftof
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __cftof(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec)

{
  errno_t eVar1;
  
  eVar1 = __cftof_l(_Value,_Buf,_SizeInBytes,_Dec,0);
  return eVar1;
}

// 00FE5183  __cftog_l  size=237  [run]
/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2010 Release */

void __cftog_l(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,
              undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  int iVar4;
  char *pcVar5;
  _strflt local_30;
  undefined1 local_20 [24];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  FUN_00ffd8ef(*param_1,param_1[1],&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
  }
  else {
    iVar4 = local_30.decpt + -1;
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_30.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,param_4,&local_30);
    if (eVar3 == 0) {
      local_30.decpt = local_30.decpt + -1;
      if ((local_30.decpt < -4) || (param_4 <= local_30.decpt)) {
        FUN_00fe49c4(param_3,param_4,param_5,&local_30,1,param_6);
      }
      else {
        pcVar1 = param_2 + (local_30.sign == 0x2d);
        if (iVar4 < local_30.decpt) {
          do {
            pcVar5 = pcVar1;
            pcVar1 = pcVar5 + 1;
          } while (*pcVar5 != '\0');
          pcVar5[-1] = '\0';
        }
        __cftof2_l(param_3,param_4,1,param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE5270  __cftog  size=32  [run]
/* Library Function - Single Match
    __cftog
   
   Library: Visual Studio 2010 Release */

void __cftog(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  __cftog_l(param_1,param_2,param_3,param_4,param_5,0);
  return;
}

// 00FE5290  __cfltcvt_l  size=136  [run]
/* Library Function - Single Match
    __cfltcvt_l
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  
  if ((format == 0x65) || (format == 0x45)) {
    eVar1 = __cftoe_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = __cftof_l(arg,buffer,sizeInBytes,precision,plocinfo);
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      eVar1 = __cftoa_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
    else {
      eVar1 = __cftog_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
  }
  return eVar1;
}

// 00FE5318  __cfltcvt  size=35  [run]
/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  eVar1 = __cfltcvt_l(arg,buffer,sizeInBytes,format,precision,caps,(_locale_t)0x0);
  return eVar1;
}

// 00FE533B  __initp_misc_cfltcvt_tab  size=35  [run]
/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2010 Release */

void __initp_misc_cfltcvt_tab(void)

{
  PVOID pvVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    pvVar1 = EncodePointer(*(PVOID *)((int)&PTR_LAB_018e8a20 + uVar2));
    *(PVOID *)((int)&PTR_LAB_018e8a20 + uVar2) = pvVar1;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x28);
  return;
}

// 00FE535E  __setdefaultprecision  size=40  [run]
/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2010 Release */

void __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}

// 00FE5386  __flsbuf  size=356  [run]
/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2010 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int unaff_EDI;
  uint uVar5;
  longlong lVar6;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar5 = _File_00->_flag;
  if ((uVar5 & 0x82) == 0) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_00fe53ac:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar5 & 0x40) != 0) {
    piVar2 = __errno();
    *piVar2 = 0x22;
    goto LAB_00fe53ac;
  }
  if ((uVar5 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar5 & 0x10) == 0) {
      _File_00->_flag = uVar5 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar5 & 0xfffffffe;
  }
  uVar5 = _File_00->_flag;
  _File_00->_flag = uVar5 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar5 & 0x10c) == 0) &&
     (((iVar3 = FUN_00fec7c3(), _File_00 != (FILE *)(iVar3 + 0x20) &&
       (iVar3 = FUN_00fec7c3(), _File_00 != (FILE *)(iVar3 + 0x40))) ||
      (iVar3 = __isatty((int)_File), iVar3 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108U) == 0) {
    uVar5 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar5 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar5 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar4 = &DAT_018e9590;
      }
      else {
        puVar4 = (undefined *)(((uint)_File & 0x1f) * 0x40 + (&DAT_0225bf80)[(int)_File >> 5]);
      }
      if (((puVar4[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_00fe54d4;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar5);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar5) {
    return _Ch & 0xff;
  }
LAB_00fe54d4:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}

// 00FE54EA  FUN_00fe54ea  size=15  [run]
void FUN_00fe54ea(undefined4 param_1)

{
  DAT_01f8f5a4 = param_1;
  return;
}

// 00FE54F9  __call_reportfault  size=297  [run]
/* Library Function - Single Match
    __call_reportfault
   
   Library: Visual Studio 2010 Release */

void __cdecl __call_reportfault(int nDbgHookCode,DWORD dwExceptionCode,DWORD dwExceptionFlags)

{
  uint uVar1;
  BOOL BVar2;
  LONG LVar3;
  _EXCEPTION_POINTERS local_32c;
  EXCEPTION_RECORD local_324;
  undefined4 local_2d4;
  
  uVar1 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  if (nDbgHookCode != -1) {
    FUN_00ffe4cc();
  }
  local_324.ExceptionCode = 0;
  _memset(&local_324.ExceptionFlags,0,0x4c);
  local_32c.ExceptionRecord = &local_324;
  local_32c.ContextRecord = (PCONTEXT)&local_2d4;
  local_2d4 = 0x10001;
  local_324.ExceptionCode = dwExceptionCode;
  local_324.ExceptionFlags = dwExceptionFlags;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_32c);
  if (((LVar3 == 0) && (BVar2 == 0)) && (nDbgHookCode != -1)) {
    FUN_00ffe4cc();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE5622  FUN_00fe5622  size=39  [run]
PVOID FUN_00fe5622(PVOID param_1)

{
  PVOID pvVar1;
  
  pvVar1 = DecodePointer(DAT_01f8f5a4);
  DAT_01f8f5a4 = EncodePointer(param_1);
  return pvVar1;
}

// 00FE5656  __invoke_watson  size=37  [run]
/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2010 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  __call_reportfault(2,0xc0000417,1);
  uExitCode = 0xc0000417;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}

// 00FE567B  FUN_00fe567b  size=25  [run]
void FUN_00fe567b(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}

// 00FE5695  FUN_00fe5695  size=44  [run]
void FUN_00fe5695(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DecodePointer(DAT_01f8f5a4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00fe56ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}

// 00FE56C2  FUN_00fe56c2  size=16  [run]
void FUN_00fe56c2(void)

{
  FUN_00fe5695(0,0,0,0,0);
  return;
}

// 00FE5700  FUN_00fe5700  size=11  [run]
void FUN_00fe5700(void)

{
  FUN_00fe5695();
  return;
}

// 00FE570B  write_char  size=51  [run]
/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2010 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}

// 00FE573E  write_multi_char  size=38  [run]
/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}

// 00FE5764  FUN_00fe5764  size=98  [run]
void FUN_00fe5764(undefined4 param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int unaff_EBX;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  if (((*(byte *)(unaff_EBX + 0xc) & 0x40) == 0) || (*(int *)(unaff_EBX + 8) != 0)) {
    *unaff_EDI = 0;
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        write_char();
        if (*in_EAX == -1) {
          if (*unaff_EDI != 0x2a) break;
          write_char();
        }
      } while (0 < param_2);
      if (*unaff_EDI != 0) {
        return;
      }
    }
    *unaff_EDI = iVar1;
  }
  else {
    *in_EAX = *in_EAX + param_2;
  }
  return;
}

// 00FE57C6  FUN_00fe57c6  size=18  [run]
undefined4 FUN_00fe57c6(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}

// 00FE57D8  FUN_00fe57d8  size=21  [run]
undefined8 FUN_00fe57d8(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}

// 00FE57ED  FUN_00fe57ed  size=19  [run]
undefined4 FUN_00fe57ed(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

// 00FE5800  FUN_00fe5800  size=3047  [run]
/* WARNING: Type propagation algorithm not settling */

void FUN_00fe5800(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  size_t sVar7;
  errno_t eVar8;
  undefined *puVar9;
  int iVar10;
  int extraout_ECX;
  byte *pbVar11;
  wchar_t *pwVar12;
  bool bVar13;
  longlong lVar14;
  undefined4 *puVar15;
  wchar_t *pwVar16;
  undefined4 uVar17;
  localeinfo_struct *plVar18;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  int local_278;
  int local_274;
  int *local_270;
  size_t local_26c;
  size_t local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  int local_250;
  wchar_t *local_24c;
  int local_248;
  byte *local_244;
  int local_240;
  int local_23c;
  int local_238;
  FILE *local_234;
  undefined1 local_230;
  char local_22f;
  size_t local_22c;
  int local_228;
  wchar_t *local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_234 = param_1;
  local_220 = param_4;
  local_250 = 0;
  local_214 = 0;
  local_23c = 0;
  local_21c = 0;
  local_238 = 0;
  local_248 = 0;
  local_240 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,param_3);
  local_270 = __errno();
  if (param_1 != (FILE *)0x0) {
    if ((param_1->_flag & 0x40) == 0) {
      uVar4 = __fileno(param_1);
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
        if ((puVar9[0x24] & 0x80) == 0) goto LAB_00fe5905;
      }
    }
    else {
LAB_00fe5905:
      if (param_2 != (byte *)0x0) {
        local_215 = *param_2;
        local_228 = 0;
        local_22c = 0;
        local_24c = (wchar_t *)0x0;
        iVar10 = 0;
        pwVar12 = local_220;
        while ((local_220 = pwVar12, local_215 != 0 &&
               (pbVar11 = param_2 + 1, local_244 = pbVar11, -1 < local_228))) {
          if ((byte)(local_215 - 0x20) < 0x59) {
            uVar4 = (int)"e+000"[(char)local_215] & 0xf;
          }
          else {
            uVar4 = 0;
          }
          local_278 = (int)(char)(&DAT_016f5c00)[uVar4 * 8 + iVar10] >> 4;
          switch(local_278) {
          case 0:
switchD_00fe597a_caseD_0:
            local_240 = 0;
            iVar10 = __isleadbyte_l((uint)local_215,&local_260);
            if (iVar10 != 0) {
              write_char();
              local_244 = param_2 + 2;
              if (*pbVar11 == 0) goto LAB_00fe5876;
            }
            write_char();
            break;
          case 1:
            local_21c = -1;
            local_27c = 0;
            local_248 = 0;
            local_23c = 0;
            local_238 = 0;
            local_214 = 0;
            local_240 = 0;
            break;
          case 2:
            if (local_215 == 0x20) {
              local_214 = local_214 | 2;
            }
            else if (local_215 == 0x23) {
              local_214 = local_214 | 0x80;
            }
            else if (local_215 == 0x2b) {
              local_214 = local_214 | 1;
            }
            else if (local_215 == 0x2d) {
              local_214 = local_214 | 4;
            }
            else if (local_215 == 0x30) {
              local_214 = local_214 | 8;
            }
            break;
          case 3:
            if (local_215 == 0x2a) {
              local_23c = *(int *)param_4;
              local_220 = param_4 + 2;
              if (local_23c < 0) {
                local_214 = local_214 | 4;
                local_23c = -local_23c;
              }
            }
            else {
              local_23c = local_23c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 4:
            local_21c = 0;
            break;
          case 5:
            if (local_215 == 0x2a) {
              local_21c = *(int *)param_4;
              local_220 = param_4 + 2;
              if (local_21c < 0) {
                local_21c = -1;
              }
            }
            else {
              local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 6:
            if (local_215 == 0x49) {
              bVar1 = *pbVar11;
              if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                local_214 = local_214 | 0x8000;
                local_244 = param_2 + 3;
              }
              else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                local_214 = local_214 & 0xffff7fff;
                local_244 = param_2 + 3;
              }
              else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                       ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                local_278 = 0;
                goto switchD_00fe597a_caseD_0;
              }
            }
            else if (local_215 == 0x68) {
              local_214 = local_214 | 0x20;
            }
            else if (local_215 == 0x6c) {
              if (*pbVar11 == 0x6c) {
                local_214 = local_214 | 0x1000;
                local_244 = param_2 + 2;
              }
              else {
                local_214 = local_214 | 0x10;
              }
            }
            else if (local_215 == 0x77) {
              local_214 = local_214 | 0x800;
            }
            break;
          case 7:
            if ((char)local_215 < 'e') {
              if (local_215 == 100) {
LAB_00fe5e46:
                local_214 = local_214 | 0x40;
LAB_00fe5e4d:
                pwVar12 = param_4;
                local_22c = 10;
LAB_00fe5e57:
                if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
                  local_220 = pwVar12 + 2;
                  if ((local_214 & 0x20) == 0) {
                    uVar4 = *(uint *)pwVar12;
                    if ((local_214 & 0x40) == 0) {
                      iVar10 = 0;
                    }
                    else {
                      iVar10 = (int)uVar4 >> 0x1f;
                    }
                  }
                  else {
                    if ((local_214 & 0x40) == 0) {
                      uVar4 = (uint)(ushort)*pwVar12;
                    }
                    else {
                      uVar4 = (uint)*pwVar12;
                    }
                    iVar10 = (int)uVar4 >> 0x1f;
                  }
                }
                else {
                  uVar4 = *(uint *)pwVar12;
                  iVar10 = *(int *)(pwVar12 + 2);
                  local_220 = pwVar12 + 4;
                }
                if ((((local_214 & 0x40) != 0) && (iVar10 < 1)) && (iVar10 < 0)) {
                  bVar13 = uVar4 != 0;
                  uVar4 = -uVar4;
                  iVar10 = -(iVar10 + (uint)bVar13);
                  local_214 = local_214 | 0x100;
                }
                if ((local_214 & 0x9000) == 0) {
                  iVar10 = 0;
                }
                lVar14 = CONCAT44(iVar10,uVar4);
                if (local_21c < 0) {
                  local_21c = 1;
                }
                else {
                  local_214 = local_214 & 0xfffffff7;
                  if (0x200 < local_21c) {
                    local_21c = 0x200;
                  }
                }
                if (uVar4 == 0 && iVar10 == 0) {
                  local_238 = 0;
                }
                pwVar12 = &local_11;
                while( true ) {
                  sVar7 = (size_t)lVar14;
                  iVar10 = local_21c + -1;
                  if ((local_21c < 1) && (lVar14 == 0)) break;
                  local_21c = iVar10;
                  lVar14 = __aulldvrm(lVar14,local_22c,(int)local_22c >> 0x1f);
                  iVar10 = extraout_ECX + 0x30;
                  if (0x39 < iVar10) {
                    iVar10 = iVar10 + local_250;
                  }
                  *(char *)pwVar12 = (char)iVar10;
                  pwVar12 = (wchar_t *)((int)pwVar12 + -1);
                  local_264 = sVar7;
                }
                local_22c = (int)&local_11 + -(int)pwVar12;
                local_224 = (wchar_t *)((int)pwVar12 + 1);
                local_21c = iVar10;
                if (((local_214 & 0x200) != 0) && ((local_22c == 0 || (*(char *)local_224 != '0'))))
                {
                  *(char *)pwVar12 = '0';
                  local_22c = (int)&local_11 + -(int)pwVar12 + 1;
                  local_224 = pwVar12;
                }
              }
              else if ((char)local_215 < 'T') {
                if (local_215 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_00fe5c5b;
                }
                if (local_215 == 0x41) {
LAB_00fe5c0e:
                  local_215 = local_215 + 0x20;
                  local_27c = 1;
LAB_00fe5e7c:
                  local_214 = local_214 | 0x40;
                  local_264 = 0x200;
                  pwVar12 = local_210;
                  sVar7 = local_264;
                  pwVar16 = local_210;
                  if (local_21c < 0) {
                    local_21c = 6;
                  }
                  else if (local_21c == 0) {
                    if (local_215 == 0x67) {
                      local_21c = 1;
                    }
                  }
                  else {
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                    if (0xa3 < local_21c) {
                      sVar7 = local_21c + 0x15d;
                      local_224 = local_210;
                      local_24c = __malloc_crt(sVar7);
                      pwVar12 = local_24c;
                      pwVar16 = local_24c;
                      if (local_24c == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar12 = local_210;
                        sVar7 = local_264;
                        pwVar16 = local_224;
                      }
                    }
                  }
                  local_224 = pwVar16;
                  local_264 = sVar7;
                  local_284 = *(undefined4 *)param_4;
                  local_220 = param_4 + 4;
                  local_280 = *(undefined4 *)(param_4 + 2);
                  plVar18 = &local_260;
                  iVar5 = (int)(char)local_215;
                  puVar15 = &local_284;
                  pwVar16 = pwVar12;
                  sVar7 = local_264;
                  iVar10 = local_21c;
                  uVar17 = local_27c;
                  pcVar6 = DecodePointer(PTR_LAB_018e8a38);
                  (*pcVar6)(puVar15,pwVar16,sVar7,iVar5,iVar10,uVar17,plVar18);
                  uVar4 = local_214 & 0x80;
                  if ((uVar4 != 0) && (local_21c == 0)) {
                    plVar18 = &local_260;
                    pwVar16 = pwVar12;
                    pcVar6 = DecodePointer(PTR_LAB_018e8a44);
                    (*pcVar6)(pwVar16,plVar18);
                  }
                  if ((local_215 == 0x67) && (uVar4 == 0)) {
                    plVar18 = &local_260;
                    pwVar16 = pwVar12;
                    pcVar6 = DecodePointer(PTR_LAB_018e8a40);
                    (*pcVar6)(pwVar16,plVar18);
                  }
                  if ((char)*pwVar12 == '-') {
                    local_214 = local_214 | 0x100;
                    local_224 = (wchar_t *)((int)pwVar12 + 1);
                    pwVar12 = local_224;
                  }
LAB_00fe5d93:
                  local_22c = _strlen((char *)pwVar12);
                }
                else if (local_215 == 0x43) {
                  pwVar12 = param_4;
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
LAB_00fe5cd4:
                  local_220 = pwVar12 + 2;
                  if ((local_214 & 0x810) == 0) {
                    local_210[0]._0_1_ = (char)*pwVar12;
                    local_22c = 1;
                  }
                  else {
                    eVar8 = _wctomb_s((int *)&local_22c,(char *)local_210,0x200,*pwVar12);
                    if (eVar8 != 0) {
                      local_248 = 1;
                    }
                  }
                  local_224 = local_210;
                }
                else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_00fe5c0e;
              }
              else {
                if (local_215 == 0x58) goto LAB_00fe5fdc;
                if (local_215 == 0x5a) {
                  psVar2 = *(short **)param_4;
                  local_220 = param_4 + 2;
                  pwVar12 = (wchar_t *)PTR_DAT_018e8a48;
                  local_224 = (wchar_t *)PTR_DAT_018e8a48;
                  if ((psVar2 == (short *)0x0) ||
                     (pwVar16 = *(wchar_t **)(psVar2 + 2), pwVar16 == (wchar_t *)0x0))
                  goto LAB_00fe5d93;
                  local_22c = (size_t)*psVar2;
                  local_224 = pwVar16;
                  if ((local_214 & 0x800) == 0) {
                    local_240 = 0;
                  }
                  else {
                    local_22c = (int)local_22c / 2;
                    local_240 = 1;
                  }
                }
                else {
                  if (local_215 == 0x61) goto LAB_00fe5e7c;
                  if (local_215 == 99) goto LAB_00fe5cd4;
                }
              }
LAB_00fe61b9:
              if (local_248 == 0) {
                if ((local_214 & 0x40) != 0) {
                  if ((local_214 & 0x100) == 0) {
                    if ((local_214 & 1) == 0) {
                      if ((local_214 & 2) == 0) goto LAB_00fe6206;
                      local_230 = 0x20;
                    }
                    else {
                      local_230 = 0x2b;
                    }
                  }
                  else {
                    local_230 = 0x2d;
                  }
                  local_238 = 1;
                }
LAB_00fe6206:
                sVar7 = (local_23c - local_22c) - local_238;
                local_264 = sVar7;
                if ((local_214 & 0xc) == 0) {
                  do {
                    if ((int)sVar7 < 1) break;
                    sVar7 = sVar7 - 1;
                    write_char();
                  } while (local_228 != -1);
                }
                FUN_00fe5764(&local_230,local_238);
                if (((local_214 & 8) != 0) && (sVar7 = local_264, (local_214 & 4) == 0)) {
                  do {
                    if ((int)sVar7 < 1) break;
                    write_char();
                    sVar7 = sVar7 - 1;
                  } while (local_228 != -1);
                }
                if ((local_240 == 0) || ((int)local_22c < 1)) {
                  FUN_00fe5764(local_224,local_22c);
                }
                else {
                  local_26c = local_22c;
                  pwVar12 = local_224;
                  do {
                    _WCh = *pwVar12;
                    local_26c = local_26c - 1;
                    pwVar12 = pwVar12 + 1;
                    eVar8 = _wctomb_s(&local_274,(char *)((int)&local_11 + 1),6,_WCh);
                    if ((eVar8 != 0) || (local_274 == 0)) {
                      local_228 = -1;
                      break;
                    }
                    FUN_00fe5764((int)&local_11 + 1,local_274);
                  } while (local_26c != 0);
                }
                if ((-1 < local_228) && (sVar7 = local_264, (local_214 & 4) != 0)) {
                  do {
                    if ((int)sVar7 < 1) break;
                    write_char();
                    sVar7 = sVar7 - 1;
                  } while (local_228 != -1);
                }
              }
            }
            else {
              if ('p' < (char)local_215) {
                if (local_215 == 0x73) {
LAB_00fe5c5b:
                  iVar10 = local_21c;
                  if (local_21c == -1) {
                    iVar10 = 0x7fffffff;
                  }
                  local_220 = param_4 + 2;
                  local_224 = *(wchar_t **)param_4;
                  if ((local_214 & 0x810) == 0) {
                    pwVar12 = local_224;
                    if (local_224 == (wchar_t *)0x0) {
                      pwVar12 = (wchar_t *)PTR_DAT_018e8a48;
                      local_224 = (wchar_t *)PTR_DAT_018e8a48;
                    }
                    for (; (iVar10 != 0 && (iVar10 = iVar10 + -1, (char)*pwVar12 != '\0'));
                        pwVar12 = (wchar_t *)((int)pwVar12 + 1)) {
                    }
                    local_22c = (int)pwVar12 - (int)local_224;
                  }
                  else {
                    if (local_224 == (wchar_t *)0x0) {
                      local_224 = (wchar_t *)PTR_u__null__018e8a4c;
                    }
                    local_240 = 1;
                    for (pwVar12 = local_224;
                        (iVar10 != 0 && (iVar10 = iVar10 + -1, *pwVar12 != L'\0'));
                        pwVar12 = pwVar12 + 1) {
                    }
                    local_22c = (int)pwVar12 - (int)local_224 >> 1;
                  }
                  goto LAB_00fe61b9;
                }
                if (local_215 == 0x75) goto LAB_00fe5e4d;
                if (local_215 != 0x78) goto LAB_00fe61b9;
                local_250 = 0x27;
LAB_00fe600e:
                local_22c = 0x10;
                if ((local_214 & 0x80) != 0) {
                  local_22f = (char)local_250 + 'Q';
                  local_230 = 0x30;
                  local_238 = 2;
                }
                goto LAB_00fe5e57;
              }
              if (local_215 == 0x70) {
                local_21c = 8;
LAB_00fe5fdc:
                local_250 = 7;
                pwVar12 = param_4;
                goto LAB_00fe600e;
              }
              if ((char)local_215 < 'e') goto LAB_00fe61b9;
              param_4 = pwVar12;
              if ((char)local_215 < 'h') goto LAB_00fe5e7c;
              if (local_215 == 0x69) goto LAB_00fe5e46;
              if (local_215 != 0x6e) {
                if (local_215 != 0x6f) goto LAB_00fe61b9;
                local_22c = 8;
                if ((local_214 & 0x80) != 0) {
                  local_214 = local_214 | 0x200;
                }
                goto LAB_00fe5e57;
              }
              local_220 = pwVar12 + 2;
              piVar3 = *(int **)pwVar12;
              iVar10 = FUN_00fddcb6();
              if (iVar10 == 0) goto LAB_00fe5876;
              if ((local_214 & 0x20) == 0) {
                *piVar3 = local_228;
              }
              else {
                *(undefined2 *)piVar3 = (undefined2)local_228;
              }
              local_248 = 1;
            }
            if (local_24c != (wchar_t *)0x0) {
              _free(local_24c);
              local_24c = (wchar_t *)0x0;
            }
          }
          local_215 = *local_244;
          iVar10 = local_278;
          pwVar12 = local_220;
          param_2 = local_244;
          param_4 = local_220;
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_00fe63d8;
      }
    }
  }
LAB_00fe5876:
  piVar3 = __errno();
  *piVar3 = 0x16;
  FUN_00fe56c2();
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_00fe63d8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE6408  write_char  size=51  [run]
/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2010 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}

// 00FE643B  write_multi_char  size=38  [run]
/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}

// 00FE6461  FUN_00fe6461  size=98  [run]
void FUN_00fe6461(undefined4 param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int unaff_EBX;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  if (((*(byte *)(unaff_EBX + 0xc) & 0x40) == 0) || (*(int *)(unaff_EBX + 8) != 0)) {
    *unaff_EDI = 0;
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        write_char();
        if (*in_EAX == -1) {
          if (*unaff_EDI != 0x2a) break;
          write_char();
        }
      } while (0 < param_2);
      if (*unaff_EDI != 0) {
        return;
      }
    }
    *unaff_EDI = iVar1;
  }
  else {
    *in_EAX = *in_EAX + param_2;
  }
  return;
}

// 00FE64C3  FUN_00fe64c3  size=3089  [run]
void FUN_00fe64c3(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  byte bVar1;
  wchar_t wVar2;
  short *psVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  size_t sVar8;
  errno_t eVar9;
  undefined *puVar10;
  int iVar11;
  int extraout_ECX;
  byte *pbVar12;
  wchar_t *pwVar13;
  bool bVar14;
  longlong lVar15;
  undefined4 *puVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  localeinfo_struct *plVar19;
  undefined4 local_284;
  undefined4 local_280;
  int local_27c;
  undefined4 local_278;
  size_t local_274;
  size_t local_26c;
  int *local_268;
  wchar_t *local_264;
  int local_260;
  int local_25c;
  localeinfo_struct local_258;
  int local_250;
  char local_24c;
  uint local_248;
  byte *local_244;
  int local_240;
  int local_23c;
  int local_238;
  FILE *local_234;
  undefined1 local_230;
  char local_22f;
  size_t local_22c;
  int local_228;
  wchar_t *local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [255];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_234 = param_1;
  local_220 = param_4;
  local_25c = 0;
  local_214 = 0;
  local_23c = 0;
  local_21c = 0;
  local_238 = 0;
  local_260 = 0;
  local_240 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_258,param_3);
  local_268 = __errno();
  if (param_1 != (FILE *)0x0) {
    if ((param_1->_flag & 0x40) == 0) {
      uVar5 = __fileno(param_1);
      if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
        puVar10 = &DAT_018e9590;
      }
      else {
        puVar10 = (undefined *)((uVar5 & 0x1f) * 0x40 + (&DAT_0225bf80)[(int)uVar5 >> 5]);
      }
      if ((puVar10[0x24] & 0x7f) == 0) {
        if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
          puVar10 = &DAT_018e9590;
        }
        else {
          puVar10 = (undefined *)((uVar5 & 0x1f) * 0x40 + (&DAT_0225bf80)[(int)uVar5 >> 5]);
        }
        if ((puVar10[0x24] & 0x80) == 0) goto LAB_00fe65c8;
      }
    }
    else {
LAB_00fe65c8:
      if (param_2 != (byte *)0x0) {
        local_215 = *param_2;
        local_228 = 0;
        local_22c = 0;
        local_248 = 0;
        local_264 = (wchar_t *)0x0;
        if (local_215 != 0) {
          do {
            pbVar12 = param_2 + 1;
            local_244 = pbVar12;
            if (local_228 < 0) break;
            if ((byte)(local_215 - 0x20) < 0x59) {
              uVar5 = (byte)(&DAT_016f5c40)[(char)local_215] & 0xf;
            }
            else {
              uVar5 = 0;
            }
            local_248 = (uint)((byte)(&DAT_016f5c60)[local_248 + uVar5 * 9] >> 4);
            if (local_248 == 8) goto LAB_00fe6539;
            switch(local_248) {
            case 0:
switchD_00fe6655_caseD_0:
              local_240 = 0;
              iVar11 = __isleadbyte_l((uint)local_215,&local_258);
              if (iVar11 != 0) {
                write_char();
                local_244 = param_2 + 2;
                if (*pbVar12 == 0) goto LAB_00fe6539;
              }
              write_char();
              break;
            case 1:
              local_21c = -1;
              local_278 = 0;
              local_260 = 0;
              local_23c = 0;
              local_238 = 0;
              local_214 = 0;
              local_240 = 0;
              break;
            case 2:
              if (local_215 == 0x20) {
                local_214 = local_214 | 2;
              }
              else if (local_215 == 0x23) {
                local_214 = local_214 | 0x80;
              }
              else if (local_215 == 0x2b) {
                local_214 = local_214 | 1;
              }
              else if (local_215 == 0x2d) {
                local_214 = local_214 | 4;
              }
              else if (local_215 == 0x30) {
                local_214 = local_214 | 8;
              }
              break;
            case 3:
              if (local_215 == 0x2a) {
                local_220 = param_4 + 2;
                local_23c = *(int *)param_4;
                if (local_23c < 0) {
                  local_214 = local_214 | 4;
                  local_23c = -local_23c;
                }
              }
              else {
                local_23c = local_23c * 10 + -0x30 + (int)(char)local_215;
              }
              break;
            case 4:
              local_21c = 0;
              break;
            case 5:
              if (local_215 == 0x2a) {
                local_220 = param_4 + 2;
                local_21c = *(int *)param_4;
                if (local_21c < 0) {
                  local_21c = -1;
                }
              }
              else {
                local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
              }
              break;
            case 6:
              if (local_215 == 0x49) {
                bVar1 = *pbVar12;
                if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                  local_214 = local_214 | 0x8000;
                  local_244 = param_2 + 3;
                }
                else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                  local_214 = local_214 & 0xffff7fff;
                  local_244 = param_2 + 3;
                }
                else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                         ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                  local_248 = 0;
                  goto switchD_00fe6655_caseD_0;
                }
              }
              else if (local_215 == 0x68) {
                local_214 = local_214 | 0x20;
              }
              else if (local_215 == 0x6c) {
                if (*pbVar12 == 0x6c) {
                  local_214 = local_214 | 0x1000;
                  local_244 = param_2 + 2;
                }
                else {
                  local_214 = local_214 | 0x10;
                }
              }
              else if (local_215 == 0x77) {
                local_214 = local_214 | 0x800;
              }
              break;
            case 7:
              if ((char)local_215 < 'e') {
                if (local_215 == 100) {
LAB_00fe6b21:
                  local_214 = local_214 | 0x40;
LAB_00fe6b28:
                  local_220 = param_4;
                  local_22c = 10;
LAB_00fe6b32:
                  if (((local_214 & 0x8000) == 0) && ((local_214 & 0x1000) == 0)) {
                    pwVar13 = local_220 + 2;
                    if ((local_214 & 0x20) == 0) {
                      uVar5 = *(uint *)local_220;
                      if ((local_214 & 0x40) == 0) {
                        iVar11 = 0;
                        local_220 = pwVar13;
                      }
                      else {
                        iVar11 = (int)uVar5 >> 0x1f;
                        local_220 = pwVar13;
                      }
                    }
                    else {
                      if ((local_214 & 0x40) == 0) {
                        uVar5 = (uint)(ushort)*local_220;
                      }
                      else {
                        uVar5 = (uint)*local_220;
                      }
                      iVar11 = (int)uVar5 >> 0x1f;
                      local_220 = pwVar13;
                    }
                  }
                  else {
                    uVar5 = *(uint *)local_220;
                    iVar11 = *(int *)(local_220 + 2);
                    local_220 = local_220 + 4;
                  }
                  if ((((local_214 & 0x40) != 0) && (iVar11 < 1)) && (iVar11 < 0)) {
                    bVar14 = uVar5 != 0;
                    uVar5 = -uVar5;
                    iVar11 = -(iVar11 + (uint)bVar14);
                    local_214 = local_214 | 0x100;
                  }
                  if ((local_214 & 0x9000) == 0) {
                    iVar11 = 0;
                  }
                  lVar15 = CONCAT44(iVar11,uVar5);
                  if (local_21c < 0) {
                    local_21c = 1;
                  }
                  else {
                    local_214 = local_214 & 0xfffffff7;
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                  }
                  if (uVar5 == 0 && iVar11 == 0) {
                    local_238 = 0;
                  }
                  pwVar13 = &local_11;
                  while( true ) {
                    sVar8 = (size_t)lVar15;
                    iVar11 = local_21c + -1;
                    if ((local_21c < 1) && (lVar15 == 0)) break;
                    local_21c = iVar11;
                    lVar15 = __aulldvrm(lVar15,local_22c,(int)local_22c >> 0x1f);
                    iVar11 = extraout_ECX + 0x30;
                    if (0x39 < iVar11) {
                      iVar11 = iVar11 + local_25c;
                    }
                    *(char *)pwVar13 = (char)iVar11;
                    pwVar13 = (wchar_t *)((int)pwVar13 + -1);
                    local_26c = sVar8;
                  }
                  local_22c = (int)&local_11 + -(int)pwVar13;
                  local_224 = (wchar_t *)((int)pwVar13 + 1);
                  local_21c = iVar11;
                  if (((local_214 & 0x200) != 0) &&
                     ((local_22c == 0 || (*(char *)local_224 != '0')))) {
                    *(char *)pwVar13 = '0';
                    local_22c = (int)&local_11 + -(int)pwVar13 + 1;
                    local_224 = pwVar13;
                  }
                }
                else if ((char)local_215 < 'T') {
                  if (local_215 == 0x53) {
                    if ((local_214 & 0x830) == 0) {
                      local_214 = local_214 | 0x800;
                    }
                    goto LAB_00fe6939;
                  }
                  if (local_215 == 0x41) {
LAB_00fe68ec:
                    local_215 = local_215 + 0x20;
                    local_278 = 1;
LAB_00fe6b57:
                    local_214 = local_214 | 0x40;
                    local_26c = 0x200;
                    pwVar13 = local_210;
                    sVar8 = local_26c;
                    pwVar17 = local_210;
                    if (local_21c < 0) {
                      local_21c = 6;
                    }
                    else if (local_21c == 0) {
                      if (local_215 == 0x67) {
                        local_21c = 1;
                      }
                    }
                    else {
                      if (0x200 < local_21c) {
                        local_21c = 0x200;
                      }
                      if (0xa3 < local_21c) {
                        sVar8 = local_21c + 0x15d;
                        local_224 = local_210;
                        local_264 = __malloc_crt(sVar8);
                        pwVar13 = local_264;
                        pwVar17 = local_264;
                        if (local_264 == (wchar_t *)0x0) {
                          local_21c = 0xa3;
                          pwVar13 = local_210;
                          sVar8 = local_26c;
                          pwVar17 = local_224;
                        }
                      }
                    }
                    local_224 = pwVar17;
                    local_26c = sVar8;
                    local_284 = *(undefined4 *)param_4;
                    local_220 = param_4 + 4;
                    local_280 = *(undefined4 *)(param_4 + 2);
                    plVar19 = &local_258;
                    iVar6 = (int)(char)local_215;
                    puVar16 = &local_284;
                    pwVar17 = pwVar13;
                    sVar8 = local_26c;
                    iVar11 = local_21c;
                    uVar18 = local_278;
                    pcVar7 = DecodePointer(PTR_LAB_018e8a38);
                    (*pcVar7)(puVar16,pwVar17,sVar8,iVar6,iVar11,uVar18,plVar19);
                    uVar5 = local_214 & 0x80;
                    if ((uVar5 != 0) && (local_21c == 0)) {
                      plVar19 = &local_258;
                      pwVar17 = pwVar13;
                      pcVar7 = DecodePointer(PTR_LAB_018e8a44);
                      (*pcVar7)(pwVar17,plVar19);
                    }
                    if ((local_215 == 0x67) && (uVar5 == 0)) {
                      plVar19 = &local_258;
                      pwVar17 = pwVar13;
                      pcVar7 = DecodePointer(PTR_LAB_018e8a40);
                      (*pcVar7)(pwVar17,plVar19);
                    }
                    if ((char)*pwVar13 == '-') {
                      local_214 = local_214 | 0x100;
                      pwVar13 = (wchar_t *)((int)pwVar13 + 1);
                      local_224 = pwVar13;
                    }
LAB_00fe6a72:
                    local_22c = _strlen((char *)pwVar13);
                  }
                  else if (local_215 == 0x43) {
                    local_220 = param_4;
                    if ((local_214 & 0x830) == 0) {
                      local_214 = local_214 | 0x800;
                    }
LAB_00fe69b2:
                    if ((local_214 & 0x810) == 0) {
                      local_210[0]._0_1_ = (char)*local_220;
                      local_22c = 1;
                      local_220 = local_220 + 2;
                    }
                    else {
                      wVar2 = *local_220;
                      local_220 = local_220 + 2;
                      eVar9 = _wctomb_s((int *)&local_22c,(char *)local_210,0x200,wVar2);
                      if (eVar9 != 0) {
                        local_260 = 1;
                      }
                    }
                    local_224 = local_210;
                  }
                  else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_00fe68ec;
                }
                else {
                  if (local_215 == 0x58) goto LAB_00fe6cb4;
                  if (local_215 == 0x5a) {
                    psVar3 = *(short **)param_4;
                    local_220 = param_4 + 2;
                    if ((psVar3 == (short *)0x0) ||
                       (local_224 = *(wchar_t **)(psVar3 + 2), local_224 == (wchar_t *)0x0)) {
                      local_224 = (wchar_t *)PTR_DAT_018e8a48;
                      pwVar13 = (wchar_t *)PTR_DAT_018e8a48;
                      goto LAB_00fe6a72;
                    }
                    local_22c = (size_t)*psVar3;
                    if ((local_214 & 0x800) == 0) {
                      local_240 = 0;
                    }
                    else {
                      local_22c = (int)local_22c / 2;
                      local_240 = 1;
                    }
                  }
                  else {
                    if (local_215 == 0x61) goto LAB_00fe6b57;
                    if (local_215 == 99) goto LAB_00fe69b2;
                  }
                }
LAB_00fe6e94:
                if (local_260 == 0) {
                  if ((local_214 & 0x40) != 0) {
                    if ((local_214 & 0x100) == 0) {
                      if ((local_214 & 1) == 0) {
                        if ((local_214 & 2) == 0) goto LAB_00fe6ee1;
                        local_230 = 0x20;
                      }
                      else {
                        local_230 = 0x2b;
                      }
                    }
                    else {
                      local_230 = 0x2d;
                    }
                    local_238 = 1;
                  }
LAB_00fe6ee1:
                  sVar8 = (local_23c - local_22c) - local_238;
                  local_26c = sVar8;
                  if ((local_214 & 0xc) == 0) {
                    do {
                      if ((int)sVar8 < 1) break;
                      sVar8 = sVar8 - 1;
                      write_char();
                    } while (local_228 != -1);
                  }
                  FUN_00fe6461(&local_230,local_238);
                  if (((local_214 & 8) != 0) && (sVar8 = local_26c, (local_214 & 4) == 0)) {
                    do {
                      if ((int)sVar8 < 1) break;
                      write_char();
                      sVar8 = sVar8 - 1;
                    } while (local_228 != -1);
                  }
                  if ((local_240 == 0) || ((int)local_22c < 1)) {
                    FUN_00fe6461(local_224,local_22c);
                  }
                  else {
                    local_274 = local_22c;
                    pwVar13 = local_224;
                    do {
                      wVar2 = *pwVar13;
                      local_274 = local_274 - 1;
                      pwVar13 = pwVar13 + 1;
                      eVar9 = _wctomb_s(&local_27c,(char *)((int)&local_11 + 1),6,wVar2);
                      if ((eVar9 != 0) || (local_27c == 0)) {
                        local_228 = -1;
                        break;
                      }
                      FUN_00fe6461((int)&local_11 + 1,local_27c);
                    } while (local_274 != 0);
                  }
                  if ((-1 < local_228) && (sVar8 = local_26c, (local_214 & 4) != 0)) {
                    do {
                      if ((int)sVar8 < 1) break;
                      write_char();
                      sVar8 = sVar8 - 1;
                    } while (local_228 != -1);
                  }
                }
              }
              else {
                if ('p' < (char)local_215) {
                  if (local_215 == 0x73) {
LAB_00fe6939:
                    iVar11 = local_21c;
                    if (local_21c == -1) {
                      iVar11 = 0x7fffffff;
                    }
                    local_220 = param_4 + 2;
                    local_224 = *(wchar_t **)param_4;
                    if ((local_214 & 0x810) == 0) {
                      pwVar13 = local_224;
                      if (local_224 == (wchar_t *)0x0) {
                        local_224 = (wchar_t *)PTR_DAT_018e8a48;
                        pwVar13 = (wchar_t *)PTR_DAT_018e8a48;
                      }
                      for (; (iVar11 != 0 && (iVar11 = iVar11 + -1, (char)*pwVar13 != '\0'));
                          pwVar13 = (wchar_t *)((int)pwVar13 + 1)) {
                      }
                      local_22c = (int)pwVar13 - (int)local_224;
                    }
                    else {
                      if (local_224 == (wchar_t *)0x0) {
                        local_224 = (wchar_t *)PTR_u__null__018e8a4c;
                      }
                      local_240 = 1;
                      for (pwVar13 = local_224;
                          (iVar11 != 0 && (iVar11 = iVar11 + -1, *pwVar13 != L'\0'));
                          pwVar13 = pwVar13 + 1) {
                      }
                      local_22c = (int)pwVar13 - (int)local_224 >> 1;
                    }
                    goto LAB_00fe6e94;
                  }
                  if (local_215 == 0x75) goto LAB_00fe6b28;
                  if (local_215 != 0x78) goto LAB_00fe6e94;
                  local_25c = 0x27;
LAB_00fe6ce6:
                  local_22c = 0x10;
                  if ((local_214 & 0x80) != 0) {
                    local_22f = (char)local_25c + 'Q';
                    local_230 = 0x30;
                    local_238 = 2;
                  }
                  goto LAB_00fe6b32;
                }
                if (local_215 == 0x70) {
                  local_21c = 8;
LAB_00fe6cb4:
                  local_25c = 7;
                  local_220 = param_4;
                  goto LAB_00fe6ce6;
                }
                if ((char)local_215 < 'e') goto LAB_00fe6e94;
                param_4 = local_220;
                if ((char)local_215 < 'h') goto LAB_00fe6b57;
                if (local_215 == 0x69) goto LAB_00fe6b21;
                if (local_215 != 0x6e) {
                  if (local_215 != 0x6f) goto LAB_00fe6e94;
                  local_22c = 8;
                  if ((local_214 & 0x80) != 0) {
                    local_214 = local_214 | 0x200;
                  }
                  goto LAB_00fe6b32;
                }
                piVar4 = *(int **)local_220;
                local_220 = local_220 + 2;
                iVar11 = FUN_00fddcb6();
                if (iVar11 == 0) goto LAB_00fe6539;
                if ((local_214 & 0x20) == 0) {
                  *piVar4 = local_228;
                }
                else {
                  *(undefined2 *)piVar4 = (undefined2)local_228;
                }
                local_260 = 1;
              }
              if (local_264 != (wchar_t *)0x0) {
                _free(local_264);
                local_264 = (wchar_t *)0x0;
              }
            }
            local_215 = *local_244;
            param_2 = local_244;
            param_4 = local_220;
          } while (local_215 != 0);
          if ((local_248 != 0) && (local_248 != 7)) goto LAB_00fe6539;
        }
        if (local_24c != '\0') {
          *(uint *)(local_250 + 0x70) = *(uint *)(local_250 + 0x70) & 0xfffffffd;
        }
        goto LAB_00fe70c5;
      }
    }
  }
LAB_00fe6539:
  piVar4 = __errno();
  *piVar4 = 0x16;
  FUN_00fe56c2();
  if (local_24c != '\0') {
    *(uint *)(local_250 + 0x70) = *(uint *)(local_250 + 0x70) & 0xfffffffd;
  }
LAB_00fe70c5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE70F7  FUN_00fe70f7  size=299  [run]
bool FUN_00fe70f7(int *param_1,int param_2,char param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)param_1[2];
  if ((cVar1 == 'p') || (param_3 == 'p')) {
    return cVar1 == param_3;
  }
  if ((cVar1 == 's') || (cVar1 == 'S')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if ((param_3 == 's') || (param_3 == 'S')) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar3 != 0) {
    if (iVar3 != iVar2) {
      return false;
    }
    if (((param_1[3] & 0x810U) != 0) != ((param_4 & 0x810) != 0)) {
      return false;
    }
    return true;
  }
  if (iVar2 != 0) {
    return false;
  }
  if (cVar1 == 'd') {
LAB_00fe719b:
    iVar3 = 1;
  }
  else {
    if ((((((cVar1 != 'i') && (cVar1 != 'o')) && (cVar1 != 'u')) &&
         (((cVar1 != 'x' && (cVar1 != 'X')) &&
          ((param_3 != 'd' && ((param_3 != 'i' && (param_3 != 'o')))))))) && (param_3 != 'u')) &&
       ((param_3 != 'x' && (param_3 != 'X')))) goto LAB_00fe71dd;
    if ((cVar1 == 'd') ||
       ((((cVar1 == 'i' || (cVar1 == 'o')) || (cVar1 == 'u')) || ((cVar1 == 'x' || (cVar1 == 'X'))))
       )) goto LAB_00fe719b;
    iVar3 = 0;
  }
  if (((param_3 == 'd') || (param_3 == 'i')) ||
     ((param_3 == 'o' || (((param_3 == 'u' || (param_3 == 'x')) || (param_3 == 'X')))))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (((iVar3 != iVar2) || (((param_1[3] ^ param_4) & 0x10000) != 0)) ||
     (((param_1[3] ^ param_4) & 0x20) != 0)) {
    return false;
  }
LAB_00fe71dd:
  return *param_1 == param_2;
}

// 00FE7222  write_char  size=51  [run]
/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2010 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}

// 00FE7255  write_multi_char  size=38  [run]
/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}

// 00FE727B  FUN_00fe727b  size=98  [run]
void FUN_00fe727b(undefined4 param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int unaff_EBX;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  if (((*(byte *)(unaff_EBX + 0xc) & 0x40) == 0) || (*(int *)(unaff_EBX + 8) != 0)) {
    *unaff_EDI = 0;
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        write_char();
        if (*in_EAX == -1) {
          if (*unaff_EDI != 0x2a) break;
          write_char();
        }
      } while (0 < param_2);
      if (*unaff_EDI != 0) {
        return;
      }
    }
    *unaff_EDI = iVar1;
  }
  else {
    *in_EAX = *in_EAX + param_2;
  }
  return;
}

// 00FE72DD  FUN_00fe72dd  size=21  [run]
undefined8 FUN_00fe72dd(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}

// 00FE72F2  FUN_00fe72f2  size=915  [run]
/* WARNING: Removing unreachable block (ram,0x00fe8560) */
/* WARNING: Removing unreachable block (ram,0x00fe8568) */
/* WARNING: Removing unreachable block (ram,0x00fe8570) */
/* WARNING: Removing unreachable block (ram,0x00fe857c) */
/* WARNING: Removing unreachable block (ram,0x00fe8582) */
/* WARNING: Removing unreachable block (ram,0x00fe8585) */
/* WARNING: Removing unreachable block (ram,0x00fe8588) */
/* WARNING: Removing unreachable block (ram,0x00fe858b) */
/* WARNING: Removing unreachable block (ram,0x00fe858e) */
/* WARNING: Removing unreachable block (ram,0x00fe85a0) */
/* WARNING: Removing unreachable block (ram,0x00fe8591) */
/* WARNING: Removing unreachable block (ram,0x00fe8599) */
/* WARNING: Removing unreachable block (ram,0x00fe85a5) */

void FUN_00fe72f2(FILE *param_1,char *param_2,localeinfo_struct *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  char *_Str;
  uint local_8b0;
  char *local_89c;
  int local_898;
  undefined4 local_894;
  undefined4 local_88c;
  char *local_888;
  undefined4 local_884;
  _LocaleUpdate local_880 [8];
  int local_878;
  char local_874;
  int local_870;
  int local_868;
  int local_864;
  char local_860;
  undefined4 local_85c;
  undefined4 local_858;
  undefined4 local_854;
  undefined1 local_650 [1608];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_858 = param_4;
  local_854 = 0;
  _LocaleUpdate::_LocaleUpdate(local_880,param_3);
  local_864 = -1;
  local_89c = (char *)0x0;
  __errno();
  if (param_1 != (FILE *)0x0) {
    if ((param_1->_flag & 0x40) == 0) {
      uVar2 = __fileno(param_1);
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
        if ((puVar4[0x24] & 0x80) == 0) goto LAB_00fe73f8;
      }
    }
    else {
LAB_00fe73f8:
      if (param_2 != (char *)0x0) {
        local_884 = 0;
        local_868 = 0;
        do {
          if ((local_868 == 1) && (local_864 == 0)) break;
          local_898 = -1;
          local_870 = -1;
          local_864 = -1;
          local_88c = 0;
          local_860 = *param_2;
          local_8b0 = 0;
          local_894 = 0;
          local_85c = 0;
          _Str = param_2;
          if (local_860 != '\0') {
            do {
              _Str = _Str + 1;
              if ((byte)(local_860 - 0x20U) < 0x59) {
                uVar2 = (byte)(&DAT_016f5c40)[local_860] & 0xf;
              }
              else {
                uVar2 = 0;
              }
              local_8b0 = (uint)((byte)(&DAT_016f5c60)[local_8b0 + uVar2 * 9] >> 4);
              local_888 = _Str;
              if (local_8b0 == 1) {
                if (*_Str != '%') {
                  lVar3 = _strtol(_Str,&local_89c,10);
                  if ((lVar3 < 1) || (*local_89c != '$')) {
                    local_864 = 0;
                  }
                  else {
                    if (local_868 == 0) {
                      _memset(local_650,0,0x640);
                    }
                    local_864 = 1;
                    lVar3 = _strtol(_Str,&local_89c,10);
                    local_870 = lVar3 + -1;
                    local_888 = local_89c + 1;
                    if (local_868 == 0) {
                      if (((local_870 < 0) || (*local_89c != '$')) || (99 < local_870))
                      goto LAB_00fe7369;
                      if (local_898 < local_870) {
                        local_898 = local_870;
                      }
                    }
                  }
                }
LAB_00fe7599:
                    /* WARNING: Could not recover jumptable at 0x00fe759f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(&DAT_00fe85f6 + local_8b0 * 4))();
                return;
              }
              if (local_8b0 == 8) goto LAB_00fe7369;
              if (local_8b0 < 8) goto LAB_00fe7599;
              local_860 = *_Str;
            } while (local_860 != '\0');
            if ((local_8b0 != 0) && (local_8b0 != 7)) goto LAB_00fe7369;
          }
          local_868 = local_868 + 1;
        } while (local_868 < 2);
        if (local_874 != '\0') {
          *(uint *)(local_878 + 0x70) = *(uint *)(local_878 + 0x70) & 0xfffffffd;
        }
        goto LAB_00fe85e6;
      }
    }
  }
LAB_00fe7369:
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00fe56c2();
  if (local_874 != '\0') {
    *(uint *)(local_878 + 0x70) = *(uint *)(local_878 + 0x70) & 0xfffffffd;
  }
LAB_00fe85e6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE8616  __msize  size=51  [run]
/* Library Function - Single Match
    __msize
   
   Library: Visual Studio 2010 Release */

size_t __cdecl __msize(void *_Memory)

{
  int *piVar1;
  SIZE_T SVar2;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return 0xffffffff;
  }
  SVar2 = HeapSize(DAT_01f8f878,0,_Memory);
  return SVar2;
}

// 00FE8649  ___crtCorExitProcess  size=43  [run]
/* Library Function - Single Match
    ___crtCorExitProcess
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___crtCorExitProcess(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleW(L"mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}

// 00FE8674  ___crtExitProcess  size=23  [run]
/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2010 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  ___crtCorExitProcess(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

// 00FE868C  FUN_00fe868c  size=9  [run]
void FUN_00fe868c(void)

{
  __lock(8);
  return;
}

// 00FE8695  FUN_00fe8695  size=9  [run]
void FUN_00fe8695(void)

{
  FUN_00fec3c5(8);
  return;
}

// 00FE869E  __init_pointers  size=51  [run]
/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2010 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00feb73b();
  FUN_00ff7070(uVar1);
  FUN_00fe54ea(uVar1);
  FUN_00fe4802(uVar1);
  FUN_00ffe6c9(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_00fed10d(uVar1);
  return;
}

// 00FE86D1  __initterm  size=29  [run]
/* Library Function - Single Match
    __initterm
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __initterm(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}

// 00FE86EE  __initterm_e  size=36  [run]
/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2010 Release */

void __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}

// 00FE8712  FUN_00fe8712  size=48  [run]
undefined4 FUN_00fe8712(int *param_1)

{
  int *piVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_01f8f5cc != 0)) {
    *param_1 = DAT_01f8f5cc;
    return 0;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00fe56c2();
  return 0x16;
}

// 00FE8742  FUN_00fe8742  size=48  [run]
undefined4 FUN_00fe8742(int *param_1)

{
  int *piVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_01f8f5c8 != 0)) {
    *param_1 = DAT_01f8f5c8;
    return 0;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00fe56c2();
  return 0x16;
}

// 00FE8772  __cinit  size=151  [run]
/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2010 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_016f46c8);
  if (BVar1 != 0) {
    __fpmath(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e(&DAT_0163b44c,&DAT_0163b46c);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_00feda40);
    puVar3 = &DAT_015fd40c;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_0163b448);
    if ((DAT_0225d0bc != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0225d0bc), BVar1 != 0)) {
      (*DAT_0225d0bc)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}

// 00FE8809  doexit  size=305  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x00fe893a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _doexit
   
   Library: Visual Studio 2010 Release */

void __cdecl doexit(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *local_34;
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  
  __lock(8);
  if (DAT_01f8f5d8 != 1) {
    _DAT_01f8f5d4 = 1;
    DAT_01f8f5d0 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar1 = DecodePointer(DAT_0225d0b4);
      if (piVar1 != (int *)0x0) {
        piVar2 = DecodePointer(DAT_0225d0b0);
        local_34 = piVar1;
        local_2c = piVar2;
        local_28 = piVar1;
        while (piVar2 = piVar2 + -1, piVar1 <= piVar2) {
          iVar3 = FUN_00feb73b();
          if (*piVar2 != iVar3) {
            if (piVar2 < piVar1) break;
            pcVar4 = DecodePointer((PVOID)*piVar2);
            iVar3 = FUN_00feb73b();
            *piVar2 = iVar3;
            (*pcVar4)();
            piVar5 = DecodePointer(DAT_0225d0b4);
            piVar6 = DecodePointer(DAT_0225d0b0);
            if ((local_28 != piVar5) || (piVar1 = local_34, local_2c != piVar6)) {
              piVar1 = piVar5;
              piVar2 = piVar6;
              local_34 = piVar5;
              local_2c = piVar6;
              local_28 = piVar5;
            }
          }
        }
      }
      for (local_20 = &DAT_0163b478; local_20 < &DAT_0163b484; local_20 = local_20 + 1) {
        if ((code *)*local_20 != (code *)0x0) {
          (*(code *)*local_20)();
        }
      }
    }
    for (local_24 = &DAT_0163b488; local_24 < &DAT_0163b48c; local_24 = local_24 + 1) {
      if ((code *)*local_24 != (code *)0x0) {
        (*(code *)*local_24)();
      }
    }
  }
  FUN_00fe8934();
  if (param_3 == 0) {
    DAT_01f8f5d8 = 1;
    FUN_00fec3c5(8);
    ___crtExitProcess(param_1);
    return;
  }
  return;
}

// 00FE8934  FUN_00fe8934  size=15  [run]
void FUN_00fe8934(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_00fec3c5(8);
  }
  return;
}

// 00FE8949  _exit  size=22  [run]
/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2010 Release */

void __cdecl _exit(int _Code)

{
  doexit(_Code,0,0);
  return;
}

// 00FE895F  __exit  size=22  [run]
/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2010 Release */

void __exit(undefined4 param_1)

{
  doexit(param_1,1,0);
  return;
}

// 00FE8975  __cexit  size=15  [run]
/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2010 Release */

void __cdecl __cexit(void)

{
  doexit(0,0,1);
  return;
}

// 00FE8993  __amsg_exit  size=30  [run]
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2010 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  __NMSG_WRITE(param_1);
  __exit(0xff);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// 00FE89C0  __SEH_prolog4  size=69  [run]
/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __SEH_prolog4(undefined4 param_1,int param_2)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_2 = -param_2;
  *(undefined4 *)((int)auStack_1c + param_2 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_2 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_2 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_2 + 4) = DAT_018e8764 ^ (uint)&stack0x00000008;
  *(undefined4 *)((int)auStack_1c + param_2) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}

// 00FE8A05  __SEH_epilog4  size=20  [run]
/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}

// 00FE8A50  __except_handler4  size=399  [run]
/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2010 Release */

undefined4 __except_handler4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  int *piVar5;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  char local_5;
  
  piVar5 = (int *)(*(uint *)(param_2 + 8) ^ DAT_018e8764);
  local_5 = '\0';
  local_10 = 1;
  iVar1 = param_2 + 0x10;
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  iVar4 = param_2;
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    *(int ***)(param_2 + -4) = &local_1c;
    iVar4 = *(int *)(param_2 + 0xc);
    local_1c = param_1;
    local_18 = param_3;
    if (iVar4 == -2) {
      return local_10;
    }
    do {
      local_14 = piVar5 + iVar4 * 3 + 4;
      local_c = *local_14;
      if (piVar5[iVar4 * 3 + 5] != 0) {
        iVar2 = _EH4_CallFilterFunc(piVar5[iVar4 * 3 + 5],iVar1);
        local_5 = '\x01';
        if (iVar2 < 0) {
          local_10 = 0;
          goto LAB_00fe8af8;
        }
        if (0 < iVar2) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar3 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_016f51d0)
             , BVar3 != 0)) {
            ___DestructExceptionObject(param_1,1);
          }
          _EH4_GlobalUnwind2(param_2,param_1);
          if (*(int *)(param_2 + 0xc) != iVar4) {
            _EH4_LocalUnwind(param_2,iVar4,iVar1,&DAT_018e8764);
          }
          *(int *)(param_2 + 0xc) = local_c;
          if (*piVar5 != -2) {
            __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
          }
          __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
          _EH4_TransferToHandler(local_14[2],iVar1);
          goto LAB_00fe8bbf;
        }
      }
      iVar4 = local_c;
    } while (local_c != -2);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
LAB_00fe8bbf:
    if (*(int *)(iVar4 + 0xc) == -2) {
      return local_10;
    }
    _EH4_LocalUnwind(iVar4,0xfffffffe,iVar1,&DAT_018e8764);
  }
LAB_00fe8af8:
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  return local_10;
}

// 00FE8BEF  __VEC_memzero  size=183  [run]
/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

undefined1 (*) [16] __fastcall __VEC_memzero(undefined1 (*param_1) [16],uint param_2)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  
  pauVar2 = param_1;
  if (((uint)param_1 & 0xf) != 0) {
    uVar3 = 0x10 - ((uint)param_1 & 0xf);
    param_2 = param_2 - uVar3;
    for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      (*pauVar2)[0] = 0;
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + 1);
    }
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)*pauVar2 = 0;
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + 4);
    }
  }
  for (uVar1 = param_2 >> 7; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pauVar2 = (undefined1  [16])0x0;
    pauVar2[1] = (undefined1  [16])0x0;
    pauVar2[2] = (undefined1  [16])0x0;
    pauVar2[3] = (undefined1  [16])0x0;
    pauVar2[4] = (undefined1  [16])0x0;
    pauVar2[5] = (undefined1  [16])0x0;
    pauVar2[6] = (undefined1  [16])0x0;
    pauVar2[7] = (undefined1  [16])0x0;
    pauVar2 = pauVar2 + 8;
  }
  if ((param_2 & 0x7f) != 0) {
    for (uVar1 = (param_2 & 0x7f) >> 4; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pauVar2 = (undefined1  [16])0x0;
      pauVar2 = pauVar2 + 1;
    }
    if ((param_2 & 0xf) != 0) {
      for (uVar1 = (param_2 & 0xf) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined4 *)*pauVar2 = 0;
        pauVar2 = (undefined1 (*) [16])(*pauVar2 + 4);
      }
      for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
        (*pauVar2)[0] = 0;
        pauVar2 = (undefined1 (*) [16])(*pauVar2 + 1);
      }
    }
  }
  return param_1;
}

// 00FE8CA9  FUN_00fe8ca9  size=253  [run]
undefined4 * __fastcall FUN_00fe8ca9(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 *puVar18;
  
  puVar18 = unaff_EDI;
  if (((uint)unaff_ESI & 0xf) != 0) {
    uVar17 = 0x10 - ((uint)unaff_ESI & 0xf);
    param_1 = param_1 - uVar17;
    for (uVar16 = uVar17 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined1 *)puVar18 = *(undefined1 *)unaff_ESI;
      unaff_ESI = (undefined4 *)((int)unaff_ESI + 1);
      puVar18 = (undefined4 *)((int)puVar18 + 1);
    }
    for (uVar17 = uVar17 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar18 = *unaff_ESI;
      unaff_ESI = unaff_ESI + 1;
      puVar18 = puVar18 + 1;
    }
  }
  for (uVar16 = param_1 >> 7; uVar16 != 0; uVar16 = uVar16 - 1) {
    uVar1 = unaff_ESI[1];
    uVar2 = unaff_ESI[2];
    uVar3 = unaff_ESI[3];
    uVar4 = unaff_ESI[4];
    uVar5 = unaff_ESI[5];
    uVar6 = unaff_ESI[6];
    uVar7 = unaff_ESI[7];
    uVar8 = unaff_ESI[8];
    uVar9 = unaff_ESI[9];
    uVar10 = unaff_ESI[10];
    uVar11 = unaff_ESI[0xb];
    uVar12 = unaff_ESI[0xc];
    uVar13 = unaff_ESI[0xd];
    uVar14 = unaff_ESI[0xe];
    uVar15 = unaff_ESI[0xf];
    *puVar18 = *unaff_ESI;
    puVar18[1] = uVar1;
    puVar18[2] = uVar2;
    puVar18[3] = uVar3;
    puVar18[4] = uVar4;
    puVar18[5] = uVar5;
    puVar18[6] = uVar6;
    puVar18[7] = uVar7;
    puVar18[8] = uVar8;
    puVar18[9] = uVar9;
    puVar18[10] = uVar10;
    puVar18[0xb] = uVar11;
    puVar18[0xc] = uVar12;
    puVar18[0xd] = uVar13;
    puVar18[0xe] = uVar14;
    puVar18[0xf] = uVar15;
    uVar1 = unaff_ESI[0x11];
    uVar2 = unaff_ESI[0x12];
    uVar3 = unaff_ESI[0x13];
    uVar4 = unaff_ESI[0x14];
    uVar5 = unaff_ESI[0x15];
    uVar6 = unaff_ESI[0x16];
    uVar7 = unaff_ESI[0x17];
    uVar8 = unaff_ESI[0x18];
    uVar9 = unaff_ESI[0x19];
    uVar10 = unaff_ESI[0x1a];
    uVar11 = unaff_ESI[0x1b];
    uVar12 = unaff_ESI[0x1c];
    uVar13 = unaff_ESI[0x1d];
    uVar14 = unaff_ESI[0x1e];
    uVar15 = unaff_ESI[0x1f];
    puVar18[0x10] = unaff_ESI[0x10];
    puVar18[0x11] = uVar1;
    puVar18[0x12] = uVar2;
    puVar18[0x13] = uVar3;
    puVar18[0x14] = uVar4;
    puVar18[0x15] = uVar5;
    puVar18[0x16] = uVar6;
    puVar18[0x17] = uVar7;
    puVar18[0x18] = uVar8;
    puVar18[0x19] = uVar9;
    puVar18[0x1a] = uVar10;
    puVar18[0x1b] = uVar11;
    puVar18[0x1c] = uVar12;
    puVar18[0x1d] = uVar13;
    puVar18[0x1e] = uVar14;
    puVar18[0x1f] = uVar15;
    unaff_ESI = unaff_ESI + 0x20;
    puVar18 = puVar18 + 0x20;
  }
  if ((param_1 & 0x7f) != 0) {
    for (uVar16 = (param_1 & 0x7f) >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
      uVar1 = unaff_ESI[1];
      uVar2 = unaff_ESI[2];
      uVar3 = unaff_ESI[3];
      *puVar18 = *unaff_ESI;
      puVar18[1] = uVar1;
      puVar18[2] = uVar2;
      puVar18[3] = uVar3;
      unaff_ESI = unaff_ESI + 4;
      puVar18 = puVar18 + 4;
    }
    if ((param_1 & 0xf) != 0) {
      for (uVar16 = (param_1 & 0xf) >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar18 = *unaff_ESI;
        unaff_ESI = unaff_ESI + 1;
        puVar18 = puVar18 + 1;
      }
      for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
        *(undefined1 *)puVar18 = *(undefined1 *)unaff_ESI;
        unaff_ESI = (undefined4 *)((int)unaff_ESI + 1);
        puVar18 = (undefined4 *)((int)puVar18 + 1);
      }
    }
  }
  return unaff_EDI;
}

// 00FE8DAC  FUN_00fe8dac  size=25  [run]
void FUN_00fe8dac(int param_1)

{
  DAT_0225d0a4 = -(uint)(param_1 != 0) & DAT_0225d0a8;
  return;
}

// 00FE8DE0  FUN_00fe8de0  size=25  [run]
void FUN_00fe8de0(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
  FUN_00fe8df9((double)in_ST1,(double)in_ST0);
  return;
}

// 00FE8DF9  FUN_00fe8df9  size=2872  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00fe8df9(double param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort uVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lVar21;
  ulonglong uVar22;
  ulonglong in_XMM2_Qb;
  undefined1 auVar23 [16];
  longlong lVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar27 [16];
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 local_c [4];
  
  dVar13 = (double)((ulonglong)param_1 >> 0x2c);
  uVar11 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
  dVar35 = (double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) *
           *(double *)((int)&DAT_016f5cf0 + uVar3 * 4);
  dVar31 = *(double *)((int)&DAT_016f5cf0 + uVar3 * 4);
  dVar14 = *(double *)(&DAT_016f6100 + uVar3 * 8);
  dVar33 = *(double *)(&UNK_016f6108 + uVar3 * 8);
  uVar7 = 0x7fef - uVar11;
  uVar3 = SUB84(param_1,0);
  uVar9 = (uint)((ulonglong)param_1 >> 0x20);
  dVar32 = param_1;
  if (0x7fffffff < (uVar11 - 0x10 | uVar7)) {
    auVar23._4_4_ = param_3;
    auVar23._0_4_ = param_2;
    in_XMM3._0_8_ = 0x7fffffffffffffff;
    auVar23._8_8_ = in_XMM2_Qb;
    uVar8 = param_3 & 0x7fffffff;
    if (uVar8 < 0x7ff00000) {
      if (param_2 == 0 && uVar8 == 0) {
        _local_c = 1.0;
        uVar10 = 0x1a;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          uVar10 = 0x1d;
          if (((uVar9 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar9 & 0x7fffffff) < 0x7ff00000 || (uVar3 == 0)))) {
            return (float10)1.0;
          }
        }
        goto LAB_00fe9600;
      }
      if ((int)uVar7 < 0) {
        auVar27._8_8_ = in_XMM3._8_8_ << 0x34;
        auVar27._0_8_ = 0xfff0000000000000;
        iVar6 = (uVar8 >> 0x14) - 0x3f3;
        in_XMM3 = (undefined1  [16])0x0;
        uVar28 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar6) * (short)((uint)iVar6 >> 0x10),
                          (ushort)(-1 < (short)iVar6) * (short)iVar6);
        lVar21 = SUB168(auVar23 | auVar27,0) << uVar28;
        lVar26 = SUB168(auVar23 | auVar27,8) << uVar28;
        auVar24._0_4_ = -(uint)((int)lVar21 == 0);
        auVar24._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0);
        auVar24._8_4_ = -(uint)((int)lVar26 == 0);
        auVar24._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0);
        bVar1 = SUB161(auVar24 >> 7,0) & 1 | (SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar24 >> 0x17,0) & 1) << 2 | (SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar24 >> 0x27,0) & 1) << 4 | (SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar24 >> 0x37,0) & 1) << 6 | SUB161(auVar24 >> 0x3f,0) << 7;
        uVar8 = 0x7fef - uVar7 & 0x7fff;
        uVar28 = auVar24._8_8_;
        if (0x7fef < uVar8) {
          auVar17._0_4_ = -(uint)((int)((ulonglong)param_1 & 0xfffffffffffff) == 0);
          auVar17._4_4_ = -(uint)((int)(((ulonglong)param_1 & 0xfffffffffffff) >> 0x20) == 0);
          auVar17._8_4_ = 0xffffffff;
          auVar17._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar17 >> 7,0) & 1 | (SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar17 >> 0x17,0) & 1) << 2 | (SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar17 >> 0x27,0) & 1) << 4 | (SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar17 >> 0x37,0) & 1) << 6 | SUB161(auVar17 >> 0x3f,0) << 7) == 0xff)
          {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((bVar1 != 0xff) ||
                 (uVar22 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4),
                 lVar21 = CONCAT44(param_3,param_2) << uVar22, lVar26 = uVar28 << uVar22,
                 auVar25._0_4_ = -(uint)((int)lVar21 == 0),
                 auVar25._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0),
                 auVar25._8_4_ = -(uint)((int)lVar26 == 0),
                 auVar25._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0),
                 (byte)(SUB161(auVar25 >> 7,0) & 1 | (SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                        (SUB161(auVar25 >> 0x17,0) & 1) << 2 | (SUB161(auVar25 >> 0x1f,0) & 1) << 3
                        | (SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                        (SUB161(auVar25 >> 0x2f,0) & 1) << 5 | (SUB161(auVar25 >> 0x37,0) & 1) << 6
                       | SUB161(auVar25 >> 0x3f,0) << 7) == 0xff)) {
                if ((param_3 & 0x80000000) != 0) {
                  return (float10)0;
                }
                goto LAB_00fe9587;
              }
              if ((param_3 & 0x80000000) == 0) {
                return (float10)-INFINITY;
              }
              goto LAB_00fe9419;
            }
            if ((param_3 & 0x80000000) != 0) {
              return (float10)0;
            }
            goto LAB_00fe9587;
          }
          goto LAB_00fe945f;
        }
        if (bVar1 == 0xff) {
          uVar22 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4);
          in_XMM3 = ZEXT816(0x8000000000000000);
          lVar21 = CONCAT44(param_3,param_2) << uVar22;
          lVar26 = uVar28 << uVar22;
          auVar23._0_4_ = -(uint)((int)lVar21 == 0);
          auVar23._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == in_XMM3._4_4_);
          auVar23._8_4_ = -(uint)((int)lVar26 == 0);
          auVar23._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0);
          uVar7 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar8) {
            uVar8 = 0xbfe7f;
            in_XMM3 = ZEXT816(0xfffffffffffff);
            in_XMM2_Qb = auVar23._8_8_;
            goto LAB_00fe8e76;
          }
          goto LAB_00fe9294;
        }
        uVar22 = (ulonglong)param_1 >> 0x20;
        in_XMM2_Qb = uVar28 >> 0x20;
        uVar7 = 0;
        uVar8 = 0;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          _local_c = -NAN;
          uVar10 = 0x1c;
          goto LAB_00fe9600;
        }
LAB_00fe931a:
        dVar32 = dVar13;
        if ((uVar8 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar8 & uVar7 << 0xd) == 0) {
              return (float10)0;
            }
LAB_00fe9419:
            return (float10)-0.0;
          }
          _local_c = (double)((ulonglong)(uVar8 & uVar7 << 0xd | 0x7ff00000) << 0x20);
          uVar10 = 0x1b;
          goto LAB_00fe9600;
        }
      }
      else {
        uVar7 = 0;
LAB_00fe9294:
        dVar35 = 2.225073858507201e-308;
        in_XMM2_Qb = auVar23._8_8_;
        uVar22 = 0x3ff0000000000000;
        dVar13 = param_1 * 1.8446744073709552e+19;
        uVar8 = uVar9;
        dVar32 = dVar13;
        if (uVar3 == 0) goto LAB_00fe931a;
      }
      dVar13 = (double)((ulonglong)ABS(dVar32) >> 0x2c);
      uVar8 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
      dVar35 = (double)((ulonglong)dVar35 & (ulonglong)dVar32 | uVar22) *
               *(double *)((int)&DAT_016f5cf0 + uVar8 * 4);
      dVar31 = *(double *)((int)&DAT_016f5cf0 + uVar8 * 4);
      dVar14 = *(double *)(&DAT_016f6100 + uVar8 * 8);
      dVar33 = *(double *)(&UNK_016f6108 + uVar8 * 8);
      uVar8 = 0x43e7f;
      goto LAB_00fe8e76;
    }
    uVar7 = uVar9;
    if ((0x7fefffff < (uVar9 & 0x7fffffff)) && ((0x7ff00000 < (uVar9 & 0x7fffffff) || (uVar3 != 0)))
       ) {
LAB_00fe945f:
      _local_c = param_1 + param_1;
      uVar10 = 0x3ee;
      goto LAB_00fe9600;
    }
    goto LAB_00fe9515;
  }
  uVar7 = 0;
  uVar8 = 0x3fe7f;
LAB_00fe8e76:
  uVar28 = in_XMM3._8_8_;
  uVar4 = ((ushort)((ulonglong)dVar35 >> 0x26) & 0xff) + 1 & 0x1fe;
  dVar29 = (double)((ulonglong)dVar32 & 0xfffffffffffff | DAT_016f9590);
  dVar15 = (double)((ulonglong)dVar29 & 0xfffffffff8000000);
  dVar29 = dVar29 - dVar15;
  uVar5 = ((ushort)((ulonglong)(dVar35 * *(double *)(&DAT_016f6910 + uVar4 * 4)) >> 0x1f) & 0x1ff) +
          1 & 0x3fe;
  dVar30 = dVar31 * *(double *)(&DAT_016f6910 + uVar4 * 4) * *(double *)(&DAT_016f7530 + uVar5 * 4);
  dVar35 = dVar35 * *(double *)(&DAT_016f6910 + uVar4 * 4) * *(double *)(&DAT_016f7530 + uVar5 * 4);
  dVar32 = dVar14 + *(double *)(&DAT_016f6d20 + uVar4 * 8) +
           (double)(int)((longlong)dVar13 - (ulonglong)uVar8 >> 8) +
           *(double *)(&DAT_016f7d40 + uVar5 * 8);
  dVar34 = dVar33 + *(double *)(&DAT_016f6d28 + uVar4 * 8) + *(double *)(&DAT_016f7d48 + uVar5 * 8);
  dVar14 = (double)((ulonglong)dVar30 & 0xfffffffff8000000);
  dVar30 = dVar30 - dVar14;
  dVar36 = dVar35 + -1.442694902420044;
  dVar33 = dVar32 + dVar36;
  dVar31 = (double)CONCAT44(param_3,param_2);
  uVar2 = (ushort)(param_3 >> 0x10);
  dVar32 = dVar32 - dVar33;
  uVar4 = (uint)(ushort)((ulonglong)dVar33 >> 0x30);
  dVar14 = (((dVar35 - dVar14 * dVar15) - dVar15 * dVar30) - dVar14 * dVar29) - dVar29 * dVar30;
  dVar35 = dVar36 - dVar14;
  dVar13 = dVar33 - dVar14;
  uVar8 = uVar2 & 0x7ff0;
  if (0x7fef < uVar8) {
    _local_c = (double)CONCAT44(param_3,param_2);
    auVar23._8_8_ = in_XMM2_Qb;
    auVar23._0_8_ = _local_c;
    in_XMM3._0_8_ = (ulonglong)_local_c & 0xfffffffffffff;
    in_XMM3._8_8_ = uVar28 >> 0x1f & in_XMM2_Qb;
    auVar18._0_4_ = -(uint)((int)in_XMM3._0_8_ == 0);
    auVar18._4_4_ = -(uint)((int)(in_XMM3._0_8_ >> 0x20) == 0);
    auVar18._8_4_ = -(uint)((int)in_XMM3._8_8_ == 0);
    auVar18._12_4_ = -(uint)((int)(in_XMM3._8_8_ >> 0x20) == 0);
    if ((byte)(SUB161(auVar18 >> 7,0) & 1 | (SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar18 >> 0x17,0) & 1) << 2 | (SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar18 >> 0x27,0) & 1) << 4 | (SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (SUB161(auVar18 >> 0x37,0) & 1) << 6 | SUB161(auVar18 >> 0x3f,0) << 7) == 0xff) {
      bVar12 = uVar3 == 0;
      uVar3 = uVar4;
      if (bVar12) {
        if (uVar9 != 0x3ff00000) {
          uVar3 = uVar9;
          if (uVar9 == 0xbff00000) {
            return (float10)1;
          }
          goto LAB_00fe9515;
        }
      }
      else {
LAB_00fe9515:
        _local_c = auVar23._0_8_;
        uVar28 = in_XMM3._8_8_ & auVar23._8_8_;
        auVar19._0_4_ = -(uint)((int)((ulonglong)_local_c & 0xfffffffffffff) == 0);
        auVar19._4_4_ = -(uint)((int)(((ulonglong)_local_c & 0xfffffffffffff) >> 0x20) == 0);
        auVar19._8_4_ = -(uint)((int)uVar28 == 0);
        auVar19._12_4_ = -(uint)((int)(uVar28 >> 0x20) == 0);
        if ((byte)(SUB161(auVar19 >> 7,0) & 1 | (SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                   (SUB161(auVar19 >> 0x17,0) & 1) << 2 | (SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                   (SUB161(auVar19 >> 0x27,0) & 1) << 4 | (SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                   (SUB161(auVar19 >> 0x37,0) & 1) << 6 | SUB161(auVar19 >> 0x3f,0) << 7) != 0xff)
        goto LAB_00fe958e;
        if (uVar3 != 0 || uVar7 != 0xbff00000) {
          if ((auVar23._6_2_ & 0x8000) == 0) {
            if ((uVar11 & 0x7ff0) < 0x3ff0) {
              return (float10)0;
            }
          }
          else if (0x3fef < (uVar11 & 0x7ff0)) {
            return (float10)0;
          }
LAB_00fe9587:
          return (float10)INFINITY;
        }
      }
      _local_c = 1.0;
      uVar10 = 0x1c;
    }
    else {
LAB_00fe958e:
      _local_c = _local_c + _local_c;
      uVar10 = 0x3ee;
    }
    goto LAB_00fe9600;
  }
  iVar6 = (uVar8 - 0x3ff0) + (uVar4 & 0x7ff0);
  if ((0x40a0U - iVar6 | iVar6 - 0x3c70U) < 0x80000000) {
LAB_00fe8fc8:
    dVar15 = (double)((ulonglong)dVar31 & 0xfffffffff8000000);
    dVar29 = (double)((ulonglong)dVar13 & 0xfffffffff8000000);
    dVar14 = (dVar32 + dVar36) - (dVar14 - (dVar33 - dVar13));
    dVar33 = dVar15 * dVar29 * 128.0;
    uVar3 = (uint)ROUND(dVar33);
    dVar31 = dVar15 * (dVar13 - dVar29) + dVar29 * (dVar31 - dVar15) +
             (dVar13 - dVar29) * (dVar31 - dVar15);
    if (0 < (int)(0x1ff7f - uVar3 | uVar3 + 0x1e1ff)) {
      iVar6 = (uVar3 & 0x7f) * 0x10;
      auVar16._0_8_ = (double)((ulonglong)((uVar7 + uVar3 & 0xffffff80) + 0x1ff80) << 0x2d);
      auVar16._8_4_ = 0;
      auVar16._12_4_ = (int)((ulonglong)auVar16._0_8_ >> 0x20);
      dVar32 = *(double *)(&DAT_016f8d70 + iVar6) * auVar16._0_8_;
      dVar31 = (dVar33 - ((dVar33 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
               dVar31 + ((dVar35 * 0.16015105075297303 + dVar35 * dVar35 * -0.08325619496072671) *
                         dVar35 * dVar35 +
                         dVar35 * 9.597935033233511e-08 + dVar35 * dVar35 * -0.3465736568077919 +
                        dVar34 + dVar14) * (double)CONCAT44(param_3,param_2);
      return (float10)(dVar31 * dVar31 * dVar32 *
                       (dVar31 * 0.0013333558146428443 + 0.009618129107628477) * dVar31 * dVar31 +
                       *(double *)(&UNK_016f8d78 + iVar6) * auVar16._8_8_ +
                       (dVar31 * 0.055504108664821576 + 0.2402265069591007) * dVar31 * dVar31 *
                       dVar32 + dVar31 * 0.6931471805599453 * dVar32 + dVar32);
    }
    if ((int)uVar3 < 1) {
      if ((int)uVar3 < -0x3fdff) {
LAB_00fe9859:
        _local_c = (double)((ulonglong)uVar7 << 0x2d);
        uVar10 = 0x19;
        goto LAB_00fe9600;
      }
      uVar7 = uVar7 + 0x80;
      uVar9 = (uVar3 & 0xffffff80) + 0x3fe80;
      uVar11 = 0;
    }
    else {
      if (0x3ffff < uVar3) goto LAB_00fe987c;
      uVar7 = uVar7 + 0x3ff00;
      uVar9 = uVar3 - 0x80 & 0xffffff80;
      uVar11 = 0x3ff0;
    }
    iVar6 = (uVar3 & 0x7f) * 0x10;
    uVar3 = ((int)-(uVar9 - 0x1ff80) >> 7) + 2;
    auVar20._0_8_ = (double)((ulonglong)uVar9 << 0x2d);
    auVar20._8_4_ = 0;
    auVar20._12_4_ = (int)((ulonglong)auVar20._0_8_ >> 0x20);
    dVar32 = *(double *)(&DAT_016f8d70 + iVar6) * auVar20._0_8_;
    dVar31 = (dVar33 - ((dVar33 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
             dVar31 + ((dVar35 * 0.16015105075297303 + dVar35 * dVar35 * -0.08325619496072671) *
                       dVar35 * dVar35 +
                       dVar35 * 9.597935033233511e-08 + dVar35 * dVar35 * -0.3465736568077919 +
                      dVar34 + dVar14) * (double)CONCAT44(param_3,param_2);
    _local_c = (double)((ulonglong)uVar7 << 0x2d);
    uVar28 = (ulonglong)(uVar3 + (uVar3 & 0x20));
    dVar14 = (double)(-1L << uVar28 & (ulonglong)dVar32);
    dVar31 = dVar31 * dVar31 * dVar32 *
             (dVar31 * 0.0013333558146428443 + 0.009618129107628477) * dVar31 * dVar31 +
             *(double *)(&UNK_016f8d78 + iVar6) * auVar20._8_8_ +
             (dVar31 * 0.055504108664821576 + 0.2402265069591007) * dVar31 * dVar31 * dVar32 +
             dVar31 * 0.6931471805599453 * dVar32;
    dVar33 = (double)((ulonglong)(dVar14 + dVar31) & -1L << uVar28);
    dVar31 = dVar31 + (dVar14 - dVar33) + (dVar32 - dVar14);
    if ((int)(uVar9 - 0x1ff80) < 1) {
      _local_c = dVar31 * _local_c + dVar33 * _local_c;
      _local_c = _local_c + (double)((ulonglong)uVar11 << 0x30) * _local_c;
      uVar10 = 0x18;
      if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
         (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
        return (float10)_local_c;
      }
    }
    else {
      _local_c = (dVar31 + dVar33) * _local_c;
      _local_c = _local_c + (double)((ulonglong)uVar11 << 0x30) * _local_c;
      uVar10 = 0x18;
      if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
         (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
        return (float10)_local_c;
      }
    }
  }
  else {
    dVar33 = dVar31 * dVar13;
    uVar3 = (ushort)((ulonglong)dVar33 >> 0x30) & 0x7ff0;
    uVar9 = uVar3 - 0x3c70;
    if ((0x40a0 - uVar3 | uVar9) < 0x80000000) goto LAB_00fe8fc8;
    if (0x7fffffff < uVar9) {
      return (float10)(double)((ulonglong)(uVar7 | 0x1ff80) << 0x2d);
    }
    if (((uVar2 ^ (uVar11 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_00fe9859;
LAB_00fe987c:
    uVar10 = 0x18;
    if (uVar7 == 0) {
      _local_c = INFINITY;
    }
    else {
      _local_c = -INFINITY;
    }
  }
LAB_00fe9600:
  ___libm_error_support(&param_1,&param_2,local_c,uVar10);
  return (float10)_local_c;
}

// 00FE9B40  __trandisp1  size=103  [run]
/* Library Function - Single Match
    __trandisp1
   
   Library: Visual Studio */

void __fastcall __trandisp1(undefined4 param_1,int param_2)

{
  float10 fVar1;
  byte bVar2;
  undefined2 uVar3;
  int unaff_EBP;
  float10 in_ST0;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar3 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar3 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar3;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  bVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x00fe9ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)(&DAT_016f96ac)[(byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0')] + 0x10
              ))();
  return;
}

// 00FE9BA7  __trandisp2  size=140  [run]
/* Library Function - Single Match
    __trandisp2
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release, Visual Studio 2012 Debug, Visual
   Studio 2012 Release */

void __fastcall __trandisp2(undefined4 param_1,int param_2)

{
  float10 fVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST1) << 8 | (ushort)(in_ST1 < fVar1) << 9 | (ushort)(in_ST1 != fVar1) << 10 |
       (ushort)(in_ST1 == fVar1) << 0xe;
  bVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  cVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x00fe9c31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + (char)((&DAT_016f96ac)[(byte)(cVar2 << 1 | cVar2 < '\0') & 0xf] |
                               (&DAT_016f96ac)[(byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0')] << 2)
              + 0x10))();
  return;
}

// 00FE9D03  FUN_00fe9d03  size=7  [run]
void FUN_00fe9d03(void)

{
  return;
}

// 00FE9D10  FUN_00fe9d10  size=23  [run]
float10 __fastcall
FUN_00fe9d10(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  undefined1 local_24 [8];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  __87except(param_2,local_24,&param_3);
  return (float10)dStack_c;
}

// 00FE9D27  __startOneArgErrorHandling  size=60  [run]
/* Library Function - Single Match
    __startOneArgErrorHandling
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

float10 __fastcall
__startOneArgErrorHandling
          (undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  float10 in_ST0;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  double local_c;
  
  local_c = (double)in_ST0;
  local_1c = param_5;
  local_18 = param_6;
  __87except(param_2,local_24,&param_3);
  return (float10)local_c;
}

// 00FE9D85  FUN_00fe9d85  size=23  [run]
void FUN_00fe9d85(void)

{
  return;
}

// 00FE9D9C  FUN_00fe9d9c  size=25  [run]
undefined4 FUN_00fe9d9c(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}

// 00FE9DB5  __fload_withFB  size=67  [run]
/* Library Function - Single Match
    __fload_withFB
   
   Library: Visual Studio */

uint __fastcall __fload_withFB(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *(uint *)(param_2 + 4);
}

// 00FE9DF8  FUN_00fe9df8  size=22  [run]
uint FUN_00fe9df8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

// 00FE9E1B  __math_exit  size=42  [run]
/* Library Function - Single Match
    __math_exit
   
   Library: Visual Studio */

void __math_exit(void)

{
  ushort in_FPUStatusWord;
  ushort unaff_retaddr;
  
  if (((unaff_retaddr != 0x27f) && ((unaff_retaddr & 0x20) != 0)) &&
     ((in_FPUStatusWord & 0x20) != 0)) {
    __startOneArgErrorHandling();
    return;
  }
  return;
}

// 00FE9EFC  __d_inttype  size=106  [run]
/* Library Function - Single Match
    __d_inttype
   
   Library: Visual Studio 2010 Release */

undefined4 __d_inttype(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined8 extraout_var;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = (float10)__frnd(param_1,extraout_var);
    if ((float10)param_1 == fVar2) {
      param_1 = param_1 * 0.5;
      fVar2 = (float10)__frnd();
      if ((float10)param_1 == fVar2) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}

// 00FE9F66  FUN_00fe9f66  size=299  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00fe9f66(int param_1,int param_2,int param_3,int param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  
  dVar1 = ABS((double)CONCAT44(param_2,param_1));
  uVar4 = 0;
  dVar2 = _DAT_018e96b0;
  if (param_4 == 0x7ff00000) {
    if (param_3 == 0) {
      if ((dVar1 <= 1.0) && (dVar2 = 1.0, dVar1 < 1.0)) {
        dVar2 = 0.0;
      }
      goto LAB_00fea08a;
    }
  }
  else if ((param_4 == -0x100000) && (param_3 == 0)) {
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) {
        uVar4 = 1;
        dVar2 = _DAT_018e96b8;
      }
    }
    else {
      dVar2 = 0.0;
    }
    goto LAB_00fea08a;
  }
  if (param_2 == 0x7ff00000) {
    if (param_1 != 0) {
      return 0;
    }
    if (((double)CONCAT44(param_4,param_3) <= 0.0) &&
       (dVar2 = 0.0, 0.0 <= (double)CONCAT44(param_4,param_3))) {
      dVar2 = 1.0;
    }
  }
  else {
    if (param_2 != -0x100000) {
      return 0;
    }
    if (param_1 != 0) {
      return 0;
    }
    iVar3 = __d_inttype(CONCAT44(param_4,param_3));
    dVar2 = 0.0;
    if ((double)CONCAT44(param_4,param_3) <= 0.0) {
      if (0.0 <= (double)CONCAT44(param_4,param_3)) {
        dVar2 = 1.0;
      }
      else if (iVar3 == 1) {
        dVar2 = _DAT_018e96d0;
      }
    }
    else {
      dVar2 = _DAT_018e96b0;
      if (iVar3 == 1) {
        dVar2 = -_DAT_018e96b0;
      }
    }
  }
LAB_00fea08a:
  *param_5 = dVar2;
  return uVar4;
}

// 00FEA0A0  FUN_00fea0a0  size=24  [run]
void FUN_00fea0a0(void)

{
  float10 in_ST0;
  
  FUN_00fea0be((double)in_ST0);
  return;
}

// 00FEA0B8  FUN_00fea0b8  size=6  [run]
float10 FUN_00fea0b8(double param_1)

{
  undefined1 auVar1 [12];
  ushort uVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint in_XMM0_Dd;
  double dVar9;
  double dVar10;
  ulonglong in_XMM2_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  ulonglong uVar19;
  ulonglong in_XMM7_Qb;
  undefined1 auVar20 [16];
  double dStack_c;
  
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  uVar4 = uVar8 >> 0xc & 0x7ffff;
  if (uVar4 - 0x3fb00 < 0x3bb) {
    auVar11._0_8_ = (ulonglong)param_1 & 0xffffc00000000000;
    auVar11._8_8_ = in_XMM2_Qb & in_XMM7_Qb;
    iVar5 = (uVar8 >> 0xc & 0xfffc) - 0xfb00;
    iVar6 = iVar5 * 4;
    dVar14 = SUB168(auVar11 | ZEXT816(0x200000000000),0);
    dVar13 = SQRT(1.0 - param_1 * param_1) * dVar14;
    dVar9 = param_1 * *(double *)(&DAT_016fa620 + iVar5 * 2) - dVar13;
    uVar4 = SUB164(auVar11 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar10 = dVar9 * dVar9;
    auVar3._4_8_ = 0;
    auVar3._0_4_ = uVar4;
    auVar12._0_12_ = auVar3 << 0x20;
    auVar12._12_4_ = uVar4;
    return (float10)((((dVar10 * -0.044642857142857144 + -0.075) * dVar9 * dVar10 * dVar10 +
                      (dVar9 * dVar10 * -0.16666666666666666 -
                      ((double)(*(ulonglong *)(&DAT_016f9720 + iVar6) ^ (ulonglong)uVar4 << 0x20) -
                      6.123233995736766e-17))) -
                     ((param_1 + dVar14) * (param_1 - dVar14)) /
                     (param_1 * *(double *)(&DAT_016fa620 + iVar5 * 2) + dVar13)) -
                    ((double)(*(ulonglong *)(&DAT_016f9728 + iVar6) ^ auVar12._8_8_) -
                    1.5707963267948966));
  }
  if (uVar4 - 0x3febb < 0x41) {
    dVar18 = (double)((ulonglong)param_1 & 0xffffffc000000000);
    auVar1._8_4_ = in_XMM0_Dd >> 0xc;
    auVar1._0_8_ = param_1;
    dVar14 = 1.0 - dVar18 * dVar18;
    dVar9 = (param_1 + dVar18) * (param_1 - dVar18);
    dVar13 = SQRT(dVar14 - dVar9);
    iVar5 = -(uint)(SUB121(auVar1 >> 0x3f,0) & 1);
    dVar10 = (double)((ulonglong)dVar13 & 0xffffc00000000000 |
                     (ulonglong)param_1 & 0x8000000000000000 | 0x200000000000);
    auVar15._0_8_ = CONCAT44(iVar5,iVar5);
    auVar15._8_4_ = iVar5;
    auVar15._12_4_ = iVar5;
    iVar6 = (ushort)((ulonglong)((longlong)dVar13 << 2) >> 0x30) - 0xfec0;
    dVar13 = dVar13 * *(double *)(&DAT_016fa620 + iVar6 * 8);
    dVar18 = (dVar18 * dVar10 - dVar13) + (param_1 - dVar18) * dVar10;
    dVar9 = ((dVar14 - dVar10 * dVar10) - dVar9) / (dVar13 + dVar13 + dVar18);
    iVar6 = iVar6 * 0x10;
    dVar14 = (double)(auVar15._8_8_ & 0xc00921fb54442d18) + *(double *)(&DAT_016f9728 + iVar6);
    dVar13 = dVar18 * dVar18;
    dVar10 = dVar9 + dVar14;
    return (float10)(double)((ulonglong)
                             ((dVar13 * -0.044642857142857144 + -0.075) * dVar18 * dVar13 * dVar13 +
                              dVar18 * dVar13 * -0.16666666666666666 +
                              (double)(auVar15._0_8_ & 0xbca1a62633145c07) +
                              *(double *)(&DAT_016f9720 + iVar6) + dVar9 + (dVar14 - dVar10) +
                             dVar10) ^ (ulonglong)((ushort)iVar5 & 0x8000) << 0x30);
  }
  if (uVar4 - 0x3c300 < 0x3800) {
    dVar9 = param_1 * param_1;
    dVar10 = param_1 * param_1;
    dVar14 = param_1 * dVar9;
    return (float10)((1.5707963267948966 - param_1) +
                    (((6.123233995736766e-17 -
                      dVar14 * dVar14 * dVar14 *
                      (dVar9 * 0.022372159090909092 + 0.030381944444444444 +
                      dVar9 * dVar9 * 0.017352764423076924)) -
                     param_1 * dVar10 *
                     (dVar10 * 0.075 + 0.16666666666666666 + dVar10 * dVar10 * 0.044642857142857144)
                     ) - (param_1 - (1.5707963267948966 - (1.5707963267948966 - param_1)))));
  }
  uVar2 = (ushort)((ulonglong)param_1 >> 0x30);
  if (uVar4 - 0x3fefc < 4) {
    dVar9 = 0.5 - ABS(param_1) * 0.5;
    uVar7 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar20._8_4_ = SUB84(dVar9,0);
    auVar20._0_8_ = dVar9;
    auVar20._12_4_ = uVar7;
    dVar10 = SQRT(dVar9);
    dVar13 = auVar20._8_8_;
    auVar17._8_4_ = SUB84(dVar9,0);
    auVar17._0_8_ = dVar9;
    auVar17._12_4_ = uVar7;
    dVar14 = (double)((ulonglong)dVar10 & 0xfffffffff8000000);
    auVar16._8_4_ = SUB84(dVar10,0);
    auVar16._0_8_ = dVar10;
    auVar16._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    return (float10)(double)((ulonglong)
                             ((double)(-(ulonglong)(param_1 < 0.0) & 0xc00921fb54442d18) +
                             (dVar9 * 0.022372159090909092 + 0.030381944444444444 +
                             dVar9 * dVar9 * 0.017352764423076924) * dVar9 * dVar9 * dVar9 * dVar9 *
                             (dVar10 + dVar10) +
                             (double)(-(ulonglong)(param_1 < 0.0) & 0xbca1a62633145c07) +
                             (dVar13 * 0.075 + 0.16666666666666666 +
                             dVar13 * dVar13 * 0.044642857142857144) * auVar17._8_8_ *
                             (auVar16._8_8_ + auVar16._8_8_) +
                             ((dVar9 - dVar14 * dVar14) -
                             (dVar10 - dVar14) * ((dVar10 + dVar10) - (dVar10 - dVar14))) / dVar10 +
                             dVar10 + dVar10) ^ (ulonglong)(uVar2 & 0x8000) << 0x30);
  }
  if (uVar4 < 0x3ff00) {
    return (float10)1.5707963267948966;
  }
  if ((uVar8 & 0x7fffffff) != 0x3ff00000 || SUB84(param_1,0) != 0) {
    if ((int)(((uVar8 & 0x7fffffff) + 0x80100000) - (uint)(SUB84(param_1,0) == 0)) < 0) {
      dStack_c = -NAN;
      uVar7 = 0x3a;
    }
    else {
      dStack_c = param_1 + 0.0;
      uVar7 = 0x3f0;
    }
    ___libm_error_support(&param_1,&param_1,&dStack_c,uVar7);
    return (float10)dStack_c;
  }
  iVar6 = -(uint)(uVar2 >> 0xf);
  uVar19 = CONCAT44(iVar6,iVar6);
  return (float10)((double)(uVar19 & 0x400921fb54442d18) + (double)(uVar19 & 0x3ca1a62633145c07));
}

// 00FEA0BE  FUN_00fea0be  size=1334  [run]
float10 FUN_00fea0be(undefined8 param_1)

{
  undefined1 auVar1 [12];
  double dVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dd;
  double dVar9;
  double dVar10;
  ulonglong in_XMM2_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  ulonglong in_XMM7_Qb;
  undefined1 auVar19 [16];
  double local_c;
  
  dVar2 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
  uVar4 = in_XMM0_Db >> 0xc & 0x7ffff;
  if (uVar4 - 0x3fb00 < 0x3bb) {
    auVar11._0_8_ = ((ulonglong)in_XMM0_Db & 0xffffc000) << 0x20;
    auVar11._8_8_ = in_XMM2_Qb & in_XMM7_Qb;
    iVar5 = (in_XMM0_Db >> 0xc & 0xfffc) - 0xfb00;
    iVar6 = iVar5 * 4;
    dVar14 = SUB168(auVar11 | ZEXT816(0x200000000000),0);
    dVar13 = SQRT(1.0 - dVar2 * dVar2) * dVar14;
    dVar9 = dVar2 * *(double *)(&DAT_016fa620 + iVar5 * 2) - dVar13;
    uVar4 = SUB164(auVar11 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar10 = dVar9 * dVar9;
    auVar3._4_8_ = 0;
    auVar3._0_4_ = uVar4;
    auVar12._0_12_ = auVar3 << 0x20;
    auVar12._12_4_ = uVar4;
    return (float10)((((dVar10 * -0.044642857142857144 + -0.075) * dVar9 * dVar10 * dVar10 +
                      (dVar9 * dVar10 * -0.16666666666666666 -
                      ((double)(*(ulonglong *)(&DAT_016f9720 + iVar6) ^ (ulonglong)uVar4 << 0x20) -
                      6.123233995736766e-17))) -
                     ((dVar2 + dVar14) * ((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) - dVar14)) /
                     (dVar2 * *(double *)(&DAT_016fa620 + iVar5 * 2) + dVar13)) -
                    ((double)(*(ulonglong *)(&DAT_016f9728 + iVar6) ^ auVar12._8_8_) -
                    1.5707963267948966));
  }
  if (uVar4 - 0x3febb < 0x41) {
    dVar18 = (double)((ulonglong)(in_XMM0_Db >> 6) << 0x26);
    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = in_XMM0_Da;
    auVar1._8_4_ = in_XMM0_Dd >> 0xc;
    dVar14 = 1.0 - dVar18 * dVar18;
    dVar9 = ((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) + dVar18) * (dVar2 - dVar18);
    dVar13 = SQRT(dVar14 - dVar9);
    iVar5 = -(uint)(SUB121(auVar1 >> 0x3f,0) & 1);
    dVar10 = (double)((ulonglong)dVar13 & 0xffffc00000000000 |
                     ((ulonglong)in_XMM0_Db & 0x80000000) << 0x20 | 0x200000000000);
    auVar15._0_8_ = CONCAT44(iVar5,iVar5);
    auVar15._8_4_ = iVar5;
    auVar15._12_4_ = iVar5;
    iVar6 = (ushort)((ulonglong)((longlong)dVar13 << 2) >> 0x30) - 0xfec0;
    dVar13 = dVar13 * *(double *)(&DAT_016fa620 + iVar6 * 8);
    dVar18 = (dVar18 * dVar10 - dVar13) + (dVar2 - dVar18) * dVar10;
    dVar2 = ((dVar14 - dVar10 * dVar10) - dVar9) / (dVar13 + dVar13 + dVar18);
    iVar6 = iVar6 * 0x10;
    dVar10 = (double)(auVar15._8_8_ & 0xc00921fb54442d18) + *(double *)(&DAT_016f9728 + iVar6);
    dVar14 = dVar18 * dVar18;
    dVar9 = dVar2 + dVar10;
    return (float10)(double)((ulonglong)
                             ((dVar14 * -0.044642857142857144 + -0.075) * dVar18 * dVar14 * dVar14 +
                              dVar18 * dVar14 * -0.16666666666666666 +
                              (double)(auVar15._0_8_ & 0xbca1a62633145c07) +
                              *(double *)(&DAT_016f9720 + iVar6) + dVar2 + (dVar10 - dVar9) + dVar9)
                            ^ (ulonglong)((ushort)iVar5 & 0x8000) << 0x30);
  }
  if (uVar4 - 0x3c300 < 0x3800) {
    dVar9 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
    dVar10 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
    dVar14 = dVar2 * dVar9;
    return (float10)((1.5707963267948966 - dVar2) +
                    (((6.123233995736766e-17 -
                      dVar14 * dVar14 * dVar14 *
                      (dVar9 * 0.022372159090909092 + 0.030381944444444444 +
                      dVar9 * dVar9 * 0.017352764423076924)) -
                     (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * dVar10 *
                     (dVar10 * 0.075 + 0.16666666666666666 + dVar10 * dVar10 * 0.044642857142857144)
                     ) - (dVar2 - (1.5707963267948966 - (1.5707963267948966 - dVar2)))));
  }
  if (uVar4 - 0x3fefc < 4) {
    dVar2 = 0.5 - ABS(dVar2) * 0.5;
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar19._8_4_ = SUB84(dVar2,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar7;
    dVar9 = SQRT(dVar2);
    dVar14 = auVar19._8_8_;
    auVar17._8_4_ = SUB84(dVar2,0);
    auVar17._0_8_ = dVar2;
    auVar17._12_4_ = uVar7;
    uVar8 = -(ulonglong)((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) < 0.0);
    dVar10 = (double)((ulonglong)dVar9 & 0xfffffffff8000000);
    auVar16._8_4_ = SUB84(dVar9,0);
    auVar16._0_8_ = dVar9;
    auVar16._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    return (float10)(double)((ulonglong)
                             ((double)(uVar8 & 0xc00921fb54442d18) +
                             (dVar2 * 0.022372159090909092 + 0.030381944444444444 +
                             dVar2 * dVar2 * 0.017352764423076924) * dVar2 * dVar2 * dVar2 * dVar2 *
                             (dVar9 + dVar9) + (double)(uVar8 & 0xbca1a62633145c07) +
                             (dVar14 * 0.075 + 0.16666666666666666 +
                             dVar14 * dVar14 * 0.044642857142857144) * auVar17._8_8_ *
                             (auVar16._8_8_ + auVar16._8_8_) +
                             ((dVar2 - dVar10 * dVar10) -
                             (dVar9 - dVar10) * ((dVar9 + dVar9) - (dVar9 - dVar10))) / dVar9 +
                             dVar9 + dVar9) ^
                            (ulonglong)((ushort)(in_XMM0_Db >> 0x10) & 0x8000) << 0x30);
  }
  if (uVar4 < 0x3ff00) {
    return (float10)1.5707963267948966;
  }
  if ((in_XMM0_Db & 0x7fffffff) != 0x3ff00000 || in_XMM0_Da != 0) {
    if ((int)((((uint)((ulonglong)param_1 >> 0x20) & 0x7fffffff) + 0x80100000) -
             (uint)((int)param_1 == 0)) < 0) {
      local_c = -NAN;
      uVar7 = 0x3a;
    }
    else {
      local_c = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) + 0.0;
      uVar7 = 0x3f0;
    }
    ___libm_error_support(&param_1,&param_1,&local_c,uVar7);
    return (float10)local_c;
  }
  uVar8 = CONCAT44((int)in_XMM0_Db >> 0x1f,(int)in_XMM0_Db >> 0x1f);
  return (float10)((double)(uVar8 & 0x400921fb54442d18) + (double)(uVar8 & 0x3ca1a62633145c07));
}

// 00FEA5F4  __vsprintf_l  size=132  [run]
/* Library Function - Single Match
    __vsprintf_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

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
  if ((_Format != (char *)0x0) && (_DstBuf != (char *)0x0)) {
    local_24._base = _DstBuf;
    local_24._ptr = _DstBuf;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = FUN_00fe5800(&local_24,_Format,param_3,_ArgList);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
    return iVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00fe56c2();
  return -1;
}

// 00FEA678  _vsprintf  size=26  [run]
/* Library Function - Single Match
    _vsprintf
   
   Library: Visual Studio 2010 Release */

int __cdecl _vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = __vsprintf_l(_Dest,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}

// 00FEA692  FID_conflict:__vscprintf_helper  size=92  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vscprintf_helper
    __vscwprintf_helper
   
   Library: Visual Studio 2010 Release */

undefined4
FID_conflict___vscprintf_helper(code *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_24;
  undefined4 local_20 [7];
  
  local_24 = 0;
  puVar4 = local_20;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (param_2 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return 0xffffffff;
  }
  local_20[0] = 0x7fffffff;
  local_20[2] = 0x42;
  local_20[1] = 0;
  local_24 = 0;
  uVar2 = (*param_1)(&local_24,param_2,param_3,param_4);
  return uVar2;
}

// 00FEA6EE  FID_conflict:__vscprintf_p  size=28  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vscprintf
    __vscprintf_p
    __vscwprintf
    __vscwprintf_p
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___vscprintf_p(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict___vscprintf_helper(FUN_00fe5800,_Format,0,_ArgList);
  return iVar1;
}

// 00FEA70A  FID_conflict:__vscprintf_p_l  size=29  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vscprintf_l
    __vscprintf_p_l
    __vscwprintf_l
    __vscwprintf_p_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___vscprintf_p_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict___vscprintf_helper(FUN_00fe5800,_Format,_Locale,_ArgList);
  return iVar1;
}

// 00FEA727  FID_conflict:__vscprintf_p  size=28  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vscprintf
    __vscprintf_p
    __vscwprintf
    __vscwprintf_p
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___vscprintf_p(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict___vscprintf_helper(FUN_00fe72f2,_Format,0,_ArgList);
  return iVar1;
}

// 00FEA743  FID_conflict:__vscprintf_p_l  size=29  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vscprintf_l
    __vscprintf_p_l
    __vscwprintf_l
    __vscwprintf_p_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___vscprintf_p_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict___vscprintf_helper(FUN_00fe72f2,_Format,_Locale,_ArgList);
  return iVar1;
}

// 00FEA760  FUN_00fea760  size=24  [run]
void FUN_00fea760(void)

{
  float10 in_ST0;
  
  FUN_00fea77e((double)in_ST0);
  return;
}

// 00FEA77E  FUN_00fea77e  size=1378  [run]
float10 FUN_00fea77e(double param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  double dVar9;
  undefined1 in_XMM0 [16];
  uint uVar12;
  ulonglong in_XMM2_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined4 in_XMM7_Dc;
  undefined4 in_XMM7_Dd;
  double local_c;
  
  dVar9 = in_XMM0._0_8_;
  uVar12 = in_XMM0._4_4_;
  uVar5 = uVar12 >> 0xc & 0x7ffff;
  if (uVar5 - 0x3fb00 < 0x3bb) {
    auVar10._0_8_ = ((ulonglong)uVar12 & 0xffffc000) << 0x20;
    auVar10._8_8_ = in_XMM2_Qb & CONCAT44(in_XMM7_Dd,in_XMM7_Dc);
    iVar6 = (uVar12 >> 0xc & 0xfffc) - 0xfb00;
    iVar7 = iVar6 * 4;
    dVar14 = SUB168(auVar10 | ZEXT816(0x200000000000),0);
    dVar13 = SQRT(1.0 - dVar9 * dVar9) * dVar14;
    dVar1 = dVar9 * *(double *)(&DAT_016fbe40 + iVar6 * 2) - dVar13;
    uVar12 = SUB164(auVar10 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar2 = dVar1 * dVar1;
    auVar4._4_8_ = 0;
    auVar4._0_4_ = uVar12;
    auVar11._0_12_ = auVar4 << 0x20;
    auVar11._12_4_ = uVar12;
    return (float10)(((dVar9 - dVar14) * (dVar9 + dVar14)) /
                     (dVar9 * *(double *)(&DAT_016fbe40 + iVar6 * 2) + dVar13) +
                     (dVar2 * 0.044642857142857144 + 0.075) * dVar1 * dVar2 * dVar2 +
                     dVar1 * dVar2 * 0.16666666666666666 +
                     (double)(*(ulonglong *)(&DAT_016faf40 + iVar7) ^ (ulonglong)uVar12 << 0x20) +
                    (double)(*(ulonglong *)(&UNK_016faf48 + iVar7) ^ auVar11._8_8_));
  }
  if (uVar5 - 0x3febb < 0x43) {
    dVar14 = SQRT(1.0 - dVar9 * dVar9);
    auVar3._8_4_ = in_XMM7_Dc;
    auVar3._0_8_ = dVar9;
    auVar3._12_4_ = in_XMM7_Dd;
    dVar2 = (double)((ulonglong)dVar9 & 0x7fffffc000000000);
    dVar1 = ABS(dVar9) - dVar2;
    dVar13 = (double)((ulonglong)dVar14 & 0xffffc00000000000 | 0x200000000000);
    iVar7 = (ushort)((ulonglong)((longlong)dVar14 << 2) >> 0x30) - 0xfec0;
    dVar14 = dVar14 * *(double *)(&DAT_016fbe40 + iVar7 * 8);
    dVar15 = (dVar2 * dVar13 - dVar14) + dVar1 * dVar13;
    iVar7 = iVar7 * 0x10;
    dVar16 = dVar15 * dVar15;
    return (float10)(double)((ulonglong)
                             ((((dVar16 * 0.044642857142857144 + 0.075) * dVar15 * dVar16 * dVar16 +
                               dVar15 * dVar16 * 0.16666666666666666 +
                               (6.123233995736766e-17 - *(double *)(&DAT_016faf40 + iVar7))) -
                              (((1.0 - dVar2 * dVar2) - dVar13 * dVar13) -
                              (ABS(dVar9) + dVar2) * dVar1) / (dVar14 + dVar14 + dVar15)) +
                             (1.5707963267948966 - *(double *)(&UNK_016faf48 + iVar7))) |
                            (ulonglong)(ushort)((ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 0xf) <<
                            0x30);
  }
  if (uVar5 - 0x3c300 < 0x3800) {
    dVar2 = dVar9 * dVar9;
    dVar14 = dVar9 * dVar9;
    dVar1 = dVar9 * dVar2;
    return (float10)(dVar9 + dVar1 * dVar1 * dVar1 *
                             (dVar2 * 0.022372159090909092 + 0.030381944444444444 +
                             dVar2 * dVar2 * 0.017352764423076924) +
                             dVar9 * dVar14 *
                             (dVar14 * 0.075 + 0.16666666666666666 +
                             dVar14 * dVar14 * 0.044642857142857144));
  }
  if (uVar5 - 0x3fefe < 2) {
    dVar15 = SQRT(1.0 - dVar9 * dVar9);
    dVar1 = (double)((ulonglong)dVar9 & 0xfffffffff8000000);
    dVar16 = (double)((ulonglong)dVar15 & 0xfffffffff8000000);
    dVar9 = dVar9 - dVar1;
    auVar18._8_4_ = SUB84(dVar15,0);
    auVar18._0_8_ = dVar15;
    auVar18._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    dVar2 = dVar15 * dVar15;
    dVar14 = dVar15 * dVar15;
    dVar17 = dVar15 * dVar2;
    dVar13 = dVar17 * dVar17 * dVar17;
    return (float10)(double)((ulonglong)
                             (((((dVar2 * 0.011551800896136895 + 0.01396484375) *
                                 dVar17 * dVar17 * dVar13 + 6.123233995736766e-17) -
                               ((dVar2 * dVar2 * 0.017352764423076924 +
                                dVar2 * 0.022372159090909092 + 0.030381944444444444) * dVar13 +
                                (dVar14 * dVar14 * 0.044642857142857144 +
                                dVar14 * 0.075 + 0.16666666666666666) * auVar18._8_8_ * dVar14 +
                               (((((1.0 - dVar1 * dVar1) - (dVar1 + dVar1) * dVar9) -
                                 dVar16 * dVar16) - dVar9 * dVar9) +
                               (dVar15 + dVar15 + (dVar16 - dVar15)) * (dVar16 - dVar15)) /
                               (dVar15 + dVar15))) -
                              (dVar15 - ((dVar15 - 1.5707963267948966) + 1.5707963267948966))) -
                             (dVar15 - 1.5707963267948966)) |
                            (ulonglong)(in_XMM0._6_2_ & 0x8000) << 0x30);
  }
  if (uVar5 < 0x3ff00) {
    if (0x7fdf < ((ushort)((ulonglong)param_1 >> 0x30) & 0x7ff0) - 0x10) {
      param_1 = (double)((ulonglong)param_1 | (ulonglong)(param_1 + 0.0));
    }
    return (float10)param_1;
  }
  if ((uVar12 & 0x7fffffff) != 0x3ff00000 || in_XMM0._0_4_ != 0) {
    if ((int)((((uint)((ulonglong)param_1 >> 0x20) & 0x7fffffff) + 0x80100000) -
             (uint)(SUB84(param_1,0) == 0)) < 0) {
      local_c = -NAN;
      uVar8 = 0x3d;
    }
    else {
      local_c = param_1 + 0.0;
      uVar8 = 0x3f1;
    }
    ___libm_error_support(&param_1,&param_1,&local_c,uVar8);
    return (float10)local_c;
  }
  return (float10)(double)((ulonglong)dVar9 & 0x8000000000000000 | 0x3ff921fb54442d18);
}

// 00FEACE0  CPtoLCID  size=47  [run]
/* Library Function - Single Match
    int __cdecl CPtoLCID(int)
   
   Library: Visual Studio 2010 Release */

int __cdecl CPtoLCID(int param_1)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX != 0x3b6) {
    return 0;
  }
  return 0x404;
}

// 00FEAD0F  setSBCS  size=100  [run]
/* Library Function - Single Match
    void __cdecl setSBCS(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2010 Release */

void __cdecl setSBCS(threadmbcinfostruct *param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  _memset((void *)(in_EAX + 0x1c),0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  iVar2 = 0x101;
  do {
    *puVar1 = puVar1[(int)&DAT_018e8a50 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_018e8a50 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00FEAD73  setSBUpLow  size=400  [run]
/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2010 Release */

void __cdecl setSBUpLow(threadmbcinfostruct *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  BYTE *pBVar7;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [256];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_00feaee9:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_00feaee9;
        }
        *pcVar2 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    local_108[0] = ' ';
    if (local_51c.LeadByte[0] != 0) {
      pBVar7 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar7) {
          _memset(local_108 + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_51c.LeadByte[0] != 0);
    }
    ___crtGetStringTypeA
              ((_locale_t)0x0,1,local_108,0x100,local_508,*(int *)(unaff_ESI + 4),
               *(BOOL *)(unaff_ESI + 0xc));
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x100,local_108,0x100,local_208,
                       0x100,*(int *)(unaff_ESI + 4),0);
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x200,local_108,0x100,local_308,
                       0x100,*(int *)(unaff_ESI + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          CVar5 = local_308[uVar4];
          goto LAB_00feae8c;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_00feae8c:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FEAF03  ___updatetmbcinfo  size=152  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2010 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_018e8f70) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_018e8e78) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_018e8a50)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_018e8e78;
      lpAddend = (pthreadmbcinfo)PTR_DAT_018e8e78;
      InterlockedIncrement((LONG *)PTR_DAT_018e8e78);
    }
    FUN_00feaf9e();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}

// 00FEAF9E  FUN_00feaf9e  size=9  [run]
void FUN_00feaf9e(void)

{
  FUN_00fec3c5(0xd);
  return;
}

// 00FEAFA7  getSystemCP  size=124  [run]
/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2010 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_01f8f5dc = 0;
  if (unaff_ESI == -2) {
    DAT_01f8f5dc = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_01f8f5dc = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_01f8f5dc = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_01f8f5dc = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}

// 00FEB023  __setmbcp_nolock  size=489  [run]
/* Library Function - Single Match
    __setmbcp_nolock
   
   Library: Visual Studio 2010 Release */

void __setmbcp_nolock(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  int extraout_ECX;
  undefined2 *puVar9;
  int iVar10;
  undefined4 extraout_EDX;
  BYTE *pBVar11;
  threadmbcinfostruct *unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_00feb061:
    if (*(uint *)((int)&DAT_018e8e80 + uVar5) != uVar4) goto code_r0x00feb06d;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_018e8e90 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x18e8e7c);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    iVar10 = CPtoLCID((int)unaff_EDI);
    *(int *)(param_2 + 0xc) = iVar10;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar9 = (undefined2 *)(&DAT_018e8e84 + extraout_ECX);
    iVar10 = 6;
    do {
      *puVar7 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    goto LAB_00feb195;
  }
LAB_00feb04e:
  setSBCS(unaff_EDI);
LAB_00feb1fd:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x00feb06d:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x00feb07a;
  goto LAB_00feb061;
code_r0x00feb07a:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_00feb1fd;
  BVar6 = GetCPInfo(uVar4,&local_1c);
  if (BVar6 != 0) {
    _memset((void *)(param_2 + 0x1c),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (local_1c.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      if (local_1c.LeadByte[0] != '\0') {
        pBVar11 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar11;
          if (bVar3 == 0) break;
          for (uVar4 = (uint)pBVar11[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
            pbVar8 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar8 = *pbVar8 | 4;
          }
          pBVar1 = pBVar11 + 1;
          pBVar11 = pBVar11 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar8 = (byte *)(param_2 + 0x1e);
      iVar10 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      iVar10 = CPtoLCID((int)unaff_EDI);
      *(int *)(param_2 + 0xc) = iVar10;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_00feb195:
    setSBUpLow(unaff_EDI);
    goto LAB_00feb1fd;
  }
  if (DAT_01f8f5dc == 0) goto LAB_00feb1fd;
  goto LAB_00feb04e;
}

// 00FEB20C  __getmbcp  size=62  [run]
/* Library Function - Single Match
    __getmbcp
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __getmbcp(void)

{
  int iVar1;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,(localeinfo_struct *)0x0);
  if (*(int *)(local_10 + 8) == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_10 + 4);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}

// 00FEB24A  __setmbcp  size=399  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2010 Release */

int __cdecl __setmbcp(int _CodePage)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadmbcinfo ptVar3;
  LONG LVar4;
  int *piVar5;
  int iVar6;
  pthreadmbcinfo ptVar7;
  pthreadmbcinfo ptVar8;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar3 = p_Var1->ptmbcinfo;
  iVar2 = getSystemCP(in_stack_ffffffc8);
  if (iVar2 == ptVar3->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar3 = __malloc_crt(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = __setmbcp_nolock(iVar2,ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_018e8a50)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_018e8f70 & 1) == 0)) {
          __lock(0xd);
          _DAT_01f8f5ec = ptVar3->mbcodepage;
          _DAT_01f8f5f0 = ptVar3->ismbcodepage;
          _DAT_01f8f5f4 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_01f8f5e0)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_018e8c70)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_018e8d78)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_018e8e78);
          if ((LVar4 == 0) && (PTR_DAT_018e8e78 != &DAT_018e8a50)) {
            _free(PTR_DAT_018e8e78);
          }
          PTR_DAT_018e8e78 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_00feb3ab();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_018e8a50) {
          _free(ptVar3);
        }
        piVar5 = __errno();
        *piVar5 = 0x16;
      }
    }
  }
  return local_24;
}

// 00FEB3AB  FUN_00feb3ab  size=9  [run]
void FUN_00feb3ab(void)

{
  FUN_00fec3c5(0xd);
  return;
}

// 00FEB3E4  ___initmbctable  size=30  [run]
/* Library Function - Single Match
    ___initmbctable
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_0225d0b8 == 0) {
    __setmbcp(-3);
    DAT_0225d0b8 = 1;
  }
  return 0;
}

// 00FEB402  ___addlocaleref  size=143  [run]
/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2010 Release */

void ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  LONG *pLVar2;
  
  pLVar1 = param_1;
  InterlockedIncrement(param_1);
  if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2c]);
  }
  if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2e]);
  }
  if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2d]);
  }
  if ((LONG *)param_1[0x30] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x30]);
  }
  pLVar2 = param_1 + 0x14;
  param_1 = (LONG *)0x6;
  do {
    if (((undefined *)pLVar2[-2] != &DAT_018e8f74) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar2);
    }
    if ((pLVar2[-1] != 0) && ((LONG *)pLVar2[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar2[1]);
    }
    pLVar2 = pLVar2 + 4;
    param_1 = (LONG *)((int)param_1 + -1);
  } while (param_1 != (LONG *)0x0);
  InterlockedIncrement((LONG *)(pLVar1[0x35] + 0xb4));
  return;
}

// 00FEB491  ___removelocaleref  size=153  [run]
/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2010 Release */

LONG * ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  LONG *pLVar2;
  
  pLVar1 = param_1;
  if (param_1 != (LONG *)0x0) {
    InterlockedDecrement(param_1);
    if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2c]);
    }
    if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2e]);
    }
    if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2d]);
    }
    if ((LONG *)param_1[0x30] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x30]);
    }
    pLVar2 = param_1 + 0x14;
    param_1 = (LONG *)0x6;
    do {
      if (((undefined *)pLVar2[-2] != &DAT_018e8f74) && ((LONG *)*pLVar2 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar2);
      }
      if ((pLVar2[-1] != 0) && ((LONG *)pLVar2[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar2[1]);
      }
      pLVar2 = pLVar2 + 4;
      param_1 = (LONG *)((int)param_1 + -1);
    } while (param_1 != (LONG *)0x0);
    InterlockedDecrement((LONG *)(pLVar1[0x35] + 0xb4));
  }
  return pLVar1;
}

// 00FEB52A  ___freetlocinfo  size=331  [run]
/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2010 Release */

void ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  void *_Memory;
  undefined4 *puVar3;
  
  _Memory = param_1;
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_018e8800)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(undefined4 *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 *)((int)param_1 + 0xbc));
    }
    _free(*(void **)((int)param_1 + 0xb0));
    _free(*(void **)((int)param_1 + 0xbc));
  }
  if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
    _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    _free((void *)(*(int *)((int)param_1 + 0xcc) + -0x80));
    _free((void *)(*(int *)((int)param_1 + 0xd0) + -0x80));
    _free(*(void **)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
  if ((ppuVar2 != &PTR_DAT_018e8f78) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x50);
  param_1 = (void *)0x6;
  do {
    if ((((undefined *)puVar3[-2] != &DAT_018e8f74) &&
        (piVar1 = (int *)*puVar3, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar3[-1] != 0) && (piVar1 = (int *)puVar3[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar3 = puVar3 + 4;
    param_1 = (void *)((int)param_1 + -1);
  } while (param_1 != (void *)0x0);
  _free(_Memory);
  return;
}

// 00FEB675  __updatetlocinfoEx_nolock  size=77  [run]
/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2010 Release */

int * __updatetlocinfoEx_nolock(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  
  if ((param_2 == (int *)0x0) || (param_1 == (undefined4 *)0x0)) {
    param_2 = (int *)0x0;
  }
  else {
    piVar1 = (int *)*param_1;
    if (piVar1 != param_2) {
      *param_1 = param_2;
      ___addlocaleref(param_2);
      if (((piVar1 != (int *)0x0) && (___removelocaleref(piVar1), *piVar1 == 0)) &&
         (piVar1 != (int *)&DAT_018e90e0)) {
        ___freetlocinfo(piVar1);
      }
    }
  }
  return param_2;
}

// 00FEB6C2  ___updatetlocinfo  size=109  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2010 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_018e8f70) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    ptVar2 = (pthreadlocinfo)&p_Var1->ptlocinfo;
    __updatetlocinfoEx_nolock(ptVar2,PTR_DAT_018e91b8);
    FUN_00feb72f();
  }
  else {
    p_Var1 = __getptd();
    ptVar2 = p_Var1->ptlocinfo;
  }
  if (ptVar2 == (pthreadlocinfo)0x0) {
    __amsg_exit(0x20);
  }
  return ptVar2;
}

// 00FEB72F  FUN_00feb72f  size=12  [run]
void FUN_00feb72f(void)

{
  FUN_00fec3c5(0xc);
  return;
}

// 00FEB73B  FUN_00feb73b  size=9  [run]
void FUN_00feb73b(void)

{
  EncodePointer((PVOID)0x0);
  return;
}

// 00FEB74D  ___fls_getvalue@4  size=26  [run]
/* Library Function - Single Match
    ___fls_getvalue@4
   
   Library: Visual Studio 2010 Release */

void ___fls_getvalue_4(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = TlsGetValue(DAT_018e91c8);
  (*pcVar1)(param_1);
  return;
}

// 00FEB767  FUN_00feb767  size=6  [run]
undefined4 FUN_00feb767(void)

{
  return DAT_018e91c4;
}

// 00FEB76D  ___set_flsgetvalue  size=52  [run]
/* Library Function - Single Match
    ___set_flsgetvalue
   
   Library: Visual Studio 2010 Release */

LPVOID ___set_flsgetvalue(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_018e91c8);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = DecodePointer(DAT_01f8f5fc);
    TlsSetValue(DAT_018e91c8,lpTlsValue);
  }
  return lpTlsValue;
}

// 00FEB7A1  ___fls_setvalue@8  size=29  [run]
/* Library Function - Single Match
    ___fls_setvalue@8
   
   Library: Visual Studio 2010 Release */

void ___fls_setvalue_8(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = DecodePointer(DAT_01f8f600);
  (*pcVar1)(param_1,param_2);
  return;
}

// 00FEB7BE  __mtterm  size=61  [run]
/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2010 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_018e91c4 != -1) {
    iVar2 = DAT_018e91c4;
    pcVar1 = DecodePointer(DAT_01f8f604);
    (*pcVar1)(iVar2);
    DAT_018e91c4 = -1;
  }
  if (DAT_018e91c8 != 0xffffffff) {
    TlsFree(DAT_018e91c8);
    DAT_018e91c8 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}

// 00FEB7FB  __initptd  size=156  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 2010 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  GetModuleHandleW(L"KERNEL32.DLL");
  _Ptd->_pxcptacttab = &DAT_016fcb68;
  _Ptd->_terrno = 0;
  _Ptd->_holdrand = 1;
  _Ptd->_ownlocale = 1;
  *(undefined1 *)((_Ptd->_setloc_data)._cachein + 8) = 0x43;
  *(undefined1 *)((int)(_Ptd->_setloc_data)._cachein + 0x93) = 0x43;
  _Ptd->ptmbcinfo = (pthreadmbcinfo)&DAT_018e8a50;
  __lock(0xd);
  InterlockedIncrement(&_Ptd->ptmbcinfo->refcount);
  FUN_00feb89d();
  __lock(0xc);
  _Ptd->ptlocinfo = _Locale;
  if (_Locale == (pthreadlocinfo)0x0) {
    _Ptd->ptlocinfo = (pthreadlocinfo)PTR_DAT_018e91b8;
  }
  ___addlocaleref(_Ptd->ptlocinfo);
  FUN_00feb8a6();
  return;
}

// 00FEB89D  FUN_00feb89d  size=9  [run]
void FUN_00feb89d(void)

{
  FUN_00fec3c5(0xd);
  return;
}

// 00FEB8A6  FUN_00feb8a6  size=9  [run]
void FUN_00feb8a6(void)

{
  FUN_00fec3c5(0xc);
  return;
}

// 00FEB8AF  __getptd_noexit  size=121  [run]
/* Library Function - Single Match
    __getptd_noexit
   
   Library: Visual Studio 2010 Release */

_ptiddata __cdecl __getptd_noexit(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  _ptiddata _Ptd;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  _ptiddata p_Var5;
  
  dwErrCode = GetLastError();
  pcVar1 = (code *)___set_flsgetvalue(DAT_018e91c4);
  _Ptd = (_ptiddata)(*pcVar1)();
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = __calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      uVar4 = DAT_018e91c4;
      p_Var5 = _Ptd;
      pcVar1 = DecodePointer(DAT_01f8f600);
      iVar2 = (*pcVar1)(uVar4,p_Var5);
      if (iVar2 == 0) {
        _free(_Ptd);
        _Ptd = (_ptiddata)0x0;
      }
      else {
        __initptd(_Ptd,(pthreadlocinfo)0x0);
        DVar3 = GetCurrentThreadId();
        _Ptd->_thandle = 0xffffffff;
        _Ptd->_tid = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Ptd;
}

// 00FEB928  __getptd  size=26  [run]
/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2010 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}

// 00FEB942  __freefls@4  size=279  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2010 Release */

void __freefls_4(void *param_1)

{
  LONG *lpAddend;
  int *piVar1;
  LONG LVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x24));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x34));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x3c));
    }
    if (*(void **)((int)param_1 + 0x40) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x40));
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x48));
    }
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_016fcb68) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    lpAddend = *(LONG **)((int)param_1 + 0x68);
    if (lpAddend != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(lpAddend);
      if ((LVar2 == 0) && (lpAddend != (LONG *)&DAT_018e8a50)) {
        _free(lpAddend);
      }
    }
    FUN_00feba5c();
    __lock(0xc);
    piVar1 = *(int **)((int)param_1 + 0x6c);
    if (piVar1 != (int *)0x0) {
      ___removelocaleref(piVar1);
      if (((piVar1 != (int *)PTR_DAT_018e91b8) && (piVar1 != (int *)&DAT_018e90e0)) &&
         (*piVar1 == 0)) {
        ___freetlocinfo(piVar1);
      }
    }
    FUN_00feba68();
    _free(param_1);
  }
  return;
}

// 00FEBA5C  FUN_00feba5c  size=9  [run]
void FUN_00feba5c(void)

{
  FUN_00fec3c5(0xd);
  return;
}

// 00FEBA68  FUN_00feba68  size=9  [run]
void FUN_00feba68(void)

{
  FUN_00fec3c5(0xc);
  return;
}

// 00FEBA71  __freeptd  size=110  [run]
/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2010 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_018e91c4 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_018e91c8), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_018e91c4;
      pcVar2 = TlsGetValue(DAT_018e91c8);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_018e91c4;
    pcVar2 = DecodePointer(DAT_01f8f600);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_018e91c8 != 0xffffffff) {
    TlsSetValue(DAT_018e91c8,(LPVOID)0x0);
  }
  return;
}

// 00FEBAEB  __mtinit  size=379  [run]
/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  code *pcVar5;
  _ptiddata p_Var6;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_01f8f5f8 = GetProcAddress(hModule,"FlsAlloc");
  DAT_01f8f5fc = GetProcAddress(hModule,"FlsGetValue");
  DAT_01f8f600 = GetProcAddress(hModule,"FlsSetValue");
  DAT_01f8f604 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_01f8f5f8 == (FARPROC)0x0) || (DAT_01f8f5fc == (FARPROC)0x0)) ||
      (DAT_01f8f600 == (FARPROC)0x0)) || (DAT_01f8f604 == (FARPROC)0x0)) {
    DAT_01f8f5fc = TlsGetValue_exref;
    DAT_01f8f5f8 = (FARPROC)&LAB_00feb744;
    DAT_01f8f600 = TlsSetValue_exref;
    DAT_01f8f604 = TlsFree_exref;
  }
  DAT_018e91c8 = TlsAlloc();
  if ((DAT_018e91c8 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_018e91c8,DAT_01f8f5fc), BVar1 != 0))
  {
    __init_pointers();
    DAT_01f8f5f8 = EncodePointer(DAT_01f8f5f8);
    DAT_01f8f5fc = EncodePointer(DAT_01f8f5fc);
    DAT_01f8f600 = EncodePointer(DAT_01f8f600);
    DAT_01f8f604 = EncodePointer(DAT_01f8f604);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar5 = __freefls_4;
      pcVar3 = DecodePointer(DAT_01f8f5f8);
      DAT_018e91c4 = (*pcVar3)(pcVar5);
      if ((DAT_018e91c4 != -1) && (_Ptd = __calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0)) {
        iVar2 = DAT_018e91c4;
        p_Var6 = _Ptd;
        pcVar3 = DecodePointer(DAT_01f8f600);
        iVar2 = (*pcVar3)(iVar2,p_Var6);
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          DVar4 = GetCurrentThreadId();
          _Ptd->_thandle = 0xffffffff;
          _Ptd->_tid = DVar4;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}

// 00FEBC66  __isctype_l  size=184  [run]
/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  BOOL BVar2;
  CHAR CVar3;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined1 local_a;
  ushort local_8 [2];
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_C + 1U < 0x101) {
    local_8[0] = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2);
  }
  else {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c);
    CVar3 = (CHAR)_C;
    if (iVar1 == 0) {
      local_b = '\0';
      iVar1 = 1;
      local_c = CVar3;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_c = (CHAR)_C;
      local_a = 0;
      iVar1 = 2;
      local_b = CVar3;
    }
    BVar2 = ___crtGetStringTypeA
                      (&local_1c,1,&local_c,iVar1,local_8,(local_1c.locinfo)->lc_codepage,
                       (BOOL)(local_1c.locinfo)->lc_category[0].wlocale);
    if (BVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (uint)local_8[0] & _Type;
}

// 00FEBD1E  __isctype  size=50  [run]
/* Library Function - Single Match
    __isctype
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isctype(int _C,int _Type)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return (uint)*(ushort *)(PTR_DAT_018e91a8 + _C * 2) & _Type;
  }
  iVar1 = __isctype_l(_C,_Type,(_locale_t)0x0);
  return iVar1;
}

// 00FEBD50  __isleadbyte_l  size=56  [run]
/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}

// 00FEBD88  _isleadbyte  size=19  [run]
/* Library Function - Single Match
    _isleadbyte
   
   Library: Visual Studio 2010 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FEBD9B  FID_conflict:_iswalpha  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswalpha_l
    _iswalpha
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswalpha(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x103);
  return iVar1;
}

// 00FEBDB1  FID_conflict:_iswalpha  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswalpha_l
    _iswalpha
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswalpha(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x103);
  return iVar1;
}

// 00FEBDC7  FID_conflict:__iswupper_l  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswupper_l
    _iswupper
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswupper_l(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,1);
  return iVar1;
}

// 00FEBDDA  FID_conflict:__iswupper_l  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswupper_l
    _iswupper
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswupper_l(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,1);
  return iVar1;
}

// 00FEBDED  FID_conflict:_iswlower  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswlower_l
    _iswlower
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswlower(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,2);
  return iVar1;
}

// 00FEBE00  FID_conflict:_iswlower  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswlower_l
    _iswlower
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswlower(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,2);
  return iVar1;
}

// 00FEBE13  FID_conflict:__iswdigit_l  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswdigit_l
    _iswdigit
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswdigit_l(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,4);
  return iVar1;
}

// 00FEBE26  FID_conflict:__iswdigit_l  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswdigit_l
    _iswdigit
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswdigit_l(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,4);
  return iVar1;
}

// 00FEBE39  FID_conflict:__iswxdigit_l  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswxdigit_l
    _iswxdigit
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswxdigit_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x80);
  return iVar1;
}

// 00FEBE4F  FID_conflict:__iswxdigit_l  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswxdigit_l
    _iswxdigit
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswxdigit_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x80);
  return iVar1;
}

// 00FEBE65  FID_conflict:__iswspace_l  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswspace_l
    _iswspace
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswspace_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,8);
  return iVar1;
}

// 00FEBE78  FID_conflict:__iswspace_l  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswspace_l
    _iswspace
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswspace_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,8);
  return iVar1;
}

// 00FEBE8B  FID_conflict:_iswpunct  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswpunct_l
    _iswpunct
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswpunct(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x10);
  return iVar1;
}

// 00FEBE9E  FID_conflict:_iswpunct  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswpunct_l
    _iswpunct
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswpunct(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x10);
  return iVar1;
}

// 00FEBEB1  FID_conflict:_iswalnum  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswalnum_l
    _iswalnum
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswalnum(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x107);
  return iVar1;
}

// 00FEBEC7  FID_conflict:_iswalnum  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswalnum_l
    _iswalnum
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswalnum(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x107);
  return iVar1;
}

// 00FEBEDD  FID_conflict:_iswprint  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswprint_l
    _iswprint
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswprint(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x157);
  return iVar1;
}

// 00FEBEF3  FID_conflict:_iswprint  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswprint_l
    _iswprint
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswprint(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x157);
  return iVar1;
}

// 00FEBF09  FID_conflict:__iswgraph_l  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswgraph_l
    _iswgraph
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswgraph_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x117);
  return iVar1;
}

// 00FEBF1F  FID_conflict:__iswgraph_l  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswgraph_l
    _iswgraph
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswgraph_l(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x117);
  return iVar1;
}

// 00FEBF35  FID_conflict:_iswcntrl  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswcntrl_l
    _iswcntrl
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswcntrl(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x20);
  return iVar1;
}

// 00FEBF48  FID_conflict:_iswcntrl  size=19  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iswcntrl_l
    _iswcntrl
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__iswcntrl(wint_t _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x20);
  return iVar1;
}

// 00FEBF5B  FUN_00febf5b  size=20  [run]
bool FUN_00febf5b(ushort param_1)

{
  return param_1 < 0x80;
}

// 00FEBF6F  FID_conflict:__iswcsym_l  size=38  [run]
/* Library Function - Multiple Matches With Different Base Names
    ___iswcsym
    __iswcsym_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswcsym_l(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x107);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

// 00FEBF95  FID_conflict:__iswcsym_l  size=38  [run]
/* Library Function - Multiple Matches With Different Base Names
    ___iswcsym
    __iswcsym_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___iswcsym_l(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x107);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

// 00FEBFBB  FID_conflict:___iswcsymf  size=38  [run]
/* Library Function - Multiple Matches With Different Base Names
    ___iswcsymf
    __iswcsymf_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict____iswcsymf(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x103);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

// 00FEBFE1  FID_conflict:___iswcsymf  size=38  [run]
/* Library Function - Multiple Matches With Different Base Names
    ___iswcsymf
    __iswcsymf_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict____iswcsymf(wint_t _C)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,0x103);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

// 00FEC007  FUN_00fec007  size=13  [run]
int FUN_00fec007(int param_1)

{
  return param_1 + 0x20;
}

// 00FEC014  __tolower_l  size=277  [run]
/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

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
      uVar2 = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2) & 1;
    }
    else {
      uVar2 = __isctype_l(_C,1,&local_1c);
    }
    if (uVar2 == 0) {
LAB_00fec075:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].wlocale + _C);
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
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x100,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_00fec075;
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

// 00FEC129  _tolower  size=44  [run]
/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2010 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_01f8ef68 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}

// 00FEC155  __mbsnbicoll_l  size=222  [run]
/* Library Function - Single Match
    __mbsnbicoll_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  int *piVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if ((local_14.mbcinfo)->ismbcodepage == 0) {
      iVar2 = __strnicoll_l((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,*(LPCWSTR *)(local_14.mbcinfo)->mbulinfo,0x1001,(LPCSTR)_Str1,
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,(local_14.mbcinfo)->mbcodepage);
      if (iVar2 == 0) goto LAB_00fec210;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
LAB_00fec210:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

// 00FEC233  __mbsnbicoll  size=26  [run]
/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}

// 00FEC24D  ___wtomb_environ  size=151  [run]
/* Library Function - Single Match
    ___wtomb_environ
   
   Library: Visual Studio 2010 Release */

int __cdecl ___wtomb_environ(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Count;
  int iVar1;
  undefined4 *puVar2;
  char *local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPCWSTR)*DAT_01f8f5c0;
  puVar2 = DAT_01f8f5c0;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Count = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Count == 0) || (local_8 = __calloc_crt(_Count,1), local_8 == (LPSTR)0x0)) break;
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*puVar2,-1,local_8,_Count,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      _free(local_8);
      return -1;
    }
    iVar1 = ___crtsetenv(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) {
      _free(local_8);
      local_8 = (LPSTR)0x0;
    }
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return -1;
}

// 00FEC2E4  _calloc  size=64  [run]
/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  void *pvVar1;
  int *piVar2;
  int local_8;
  
  local_8 = 0;
  pvVar1 = (void *)__calloc_impl(_Count,_Size,&local_8);
  if ((pvVar1 == (void *)0x0) && (local_8 != 0)) {
    piVar2 = __errno();
    if (piVar2 != (int *)0x0) {
      piVar2 = __errno();
      *piVar2 = local_8;
    }
  }
  return pvVar1;
}

// 00FEC324  __mtinitlocks  size=74  [run]
/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinitlocks(void)

{
  BOOL BVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_01f8f608;
  do {
    if ((&DAT_018e91d4)[iVar2 * 2] == 1) {
      (&DAT_018e91d0)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      BVar1 = InitializeCriticalSectionAndSpinCount
                        ((LPCRITICAL_SECTION)(&DAT_018e91d0)[iVar2 * 2],4000);
      if (BVar1 == 0) {
        (&DAT_018e91d0)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}

// 00FEC36E  __mtdeletelocks  size=87  [run]
/* Library Function - Single Match
    __mtdeletelocks
   
   Library: Visual Studio 2010 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_018e91d0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x18e92f0);
  puVar1 = &DAT_018e91d0;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x18e92f0);
  return;
}

// 00FEC3C5  FUN_00fec3c5  size=23  [run]
void FUN_00fec3c5(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_018e91d0)[param_1 * 2]);
  return;
}

// 00FEC3F4  __mtinitlocknum  size=185  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_01f8f878 == 0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_018e91d0 + _LockNum * 2;
  if (*piVar1 == 0) {
    lpCriticalSection = __malloc_crt(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      piVar1 = __errno();
      *piVar1 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        BVar2 = InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
        if (BVar2 == 0) {
          _free(lpCriticalSection);
          piVar1 = __errno();
          *piVar1 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)lpCriticalSection;
        }
      }
      else {
        _free(lpCriticalSection);
      }
      FUN_00fec4ad();
      iVar3 = local_20;
    }
  }
  return iVar3;
}

// 00FEC4AD  FUN_00fec4ad  size=9  [run]
void FUN_00fec4ad(void)

{
  FUN_00fec3c5(10);
  return;
}

// 00FEC4B6  __lock  size=51  [run]
/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2010 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_018e91d0)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_018e91d0)[_File * 2]);
  return;
}

// 00FEC4E9  _strnlen  size=29  [run]
/* Library Function - Single Match
    _strnlen
   
   Library: Visual Studio 2010 Release */

size_t __cdecl _strnlen(char *_Str,size_t _MaxCount)

{
  uint uVar1;
  
  uVar1 = 0;
  if (_MaxCount != 0) {
    do {
      if (*_Str == '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      _Str = _Str + 1;
    } while (uVar1 < _MaxCount);
  }
  return uVar1;
}

// 00FEC506  x_ismbbtype_l  size=83  [run]
/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_00fec54a;
  }
  iVar2 = 1;
LAB_00fec54a:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}

// 00FEC559  __ismbbkalnum_l  size=25  [run]
/* Library Function - Single Match
    __ismbbkalnum_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkalnum_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,1);
  return iVar1;
}

// 00FEC572  __ismbbkalnum  size=24  [run]
/* Library Function - Single Match
    __ismbbkalnum
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkalnum(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,1);
  return iVar1;
}

// 00FEC58A  __ismbbkprint_l  size=25  [run]
/* Library Function - Single Match
    __ismbbkprint_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkprint_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,3);
  return iVar1;
}

// 00FEC5A3  __ismbbkprint  size=24  [run]
/* Library Function - Single Match
    __ismbbkprint
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkprint(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,3);
  return iVar1;
}

// 00FEC5BB  __ismbbkpunct_l  size=25  [run]
/* Library Function - Single Match
    __ismbbkpunct_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkpunct_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,2);
  return iVar1;
}

// 00FEC5D4  __ismbbkpunct  size=24  [run]
/* Library Function - Single Match
    __ismbbkpunct
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkpunct(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,2);
  return iVar1;
}

// 00FEC5EC  __ismbbalnum_l  size=28  [run]
/* Library Function - Single Match
    __ismbbalnum_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbalnum_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0x107,1);
  return iVar1;
}

// 00FEC608  __ismbbalnum  size=27  [run]
/* Library Function - Single Match
    __ismbbalnum
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbalnum(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x107,1);
  return iVar1;
}

// 00FEC623  __ismbbalpha_l  size=28  [run]
/* Library Function - Single Match
    __ismbbalpha_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbalpha_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0x103,1);
  return iVar1;
}

// 00FEC63F  __ismbbalpha  size=27  [run]
/* Library Function - Single Match
    __ismbbalpha
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbalpha(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x103,1);
  return iVar1;
}

// 00FEC65A  __ismbbgraph_l  size=28  [run]
/* Library Function - Single Match
    __ismbbgraph_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbgraph_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0x117,3);
  return iVar1;
}

// 00FEC676  __ismbbgraph  size=27  [run]
/* Library Function - Single Match
    __ismbbgraph
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbgraph(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x117,3);
  return iVar1;
}

// 00FEC691  __ismbbprint_l  size=28  [run]
/* Library Function - Single Match
    __ismbbprint_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbprint_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0x157,3);
  return iVar1;
}

// 00FEC6AD  __ismbbprint  size=27  [run]
/* Library Function - Single Match
    __ismbbprint
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbprint(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x157,3);
  return iVar1;
}

// 00FEC6C8  __ismbbpunct_l  size=25  [run]
/* Library Function - Single Match
    __ismbbpunct_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbpunct_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0x10,2);
  return iVar1;
}

// 00FEC6E1  __ismbbpunct  size=24  [run]
/* Library Function - Single Match
    __ismbbpunct
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbpunct(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0x10,2);
  return iVar1;
}

// 00FEC6F9  __ismbblead_l  size=25  [run]
/* Library Function - Single Match
    __ismbblead_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbblead_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,4);
  return iVar1;
}

// 00FEC712  __ismbblead  size=24  [run]
/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2010 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}

// 00FEC72A  __ismbbtrail_l  size=25  [run]
/* Library Function - Single Match
    __ismbbtrail_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbtrail_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l(_Locale,_C,0,8);
  return iVar1;
}

// 00FEC743  __ismbbtrail  size=24  [run]
/* Library Function - Single Match
    __ismbbtrail
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbtrail(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,8);
  return iVar1;
}

// 00FEC75B  __ismbbkana_l  size=85  [run]
/* Library Function - Single Match
    __ismbbkana_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkana_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if ((local_10 == 0) || (*(int *)(local_10 + 4) != 0x3a4)) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = x_ismbbtype_l(_Locale,_C,0,3);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}

// 00FEC7B0  __ismbbkana  size=19  [run]
/* Library Function - Single Match
    __ismbbkana
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkana(uint _C)

{
  int iVar1;
  
  iVar1 = __ismbbkana_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FEC7C3  FUN_00fec7c3  size=6  [run]
undefined ** FUN_00fec7c3(void)

{
  return &PTR_DAT_018e92f0;
}

// 00FEC89A  __lock_file  size=65  [run]
/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2010 Release */

void __cdecl __lock_file(FILE *_File)

{
  if ((_File < &PTR_DAT_018e92f0) || ((FILE *)&DAT_018e9550 < _File)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  }
  else {
    __lock(((int)&_File[-0xc7498]._file >> 5) + 0x10);
    _File->_flag = _File->_flag | 0x8000;
  }
  return;
}

// 00FEC8DB  __lock_file2  size=50  [run]
/* Library Function - Single Match
    __lock_file2
   
   Library: Visual Studio 2010 Release */

void __cdecl __lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x10);
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}

// 00FEC90D  __unlock_file  size=60  [run]
/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0x18e92ef < _File) && (_File < (FILE *)0x18e9551)) {
    _File->_flag = _File->_flag & 0xffff7fff;
    FUN_00fec3c5(((int)&_File[-0xc7498]._file >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}

// 00FEC949  __unlock_file2  size=47  [run]
/* Library Function - Single Match
    __unlock_file2
   
   Library: Visual Studio 2010 Release */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) & 0xffff7fff;
    FUN_00fec3c5(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}

// 00FEC978  __stbuf  size=156  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2010 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = __fileno(_File);
  iVar3 = __isatty(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_00fec7c3();
  if (_File == (FILE *)(iVar3 + 0x20)) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00fec7c3();
    if (_File != (FILE *)(iVar3 + 0x40)) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_01f8f758 = _DAT_01f8f758 + 1;
  if ((_File->_flag & 0x10cU) != 0) {
    return 0;
  }
  piVar1 = &DAT_01f8f75c + iVar3;
  if (*piVar1 == 0) {
    pvVar4 = __malloc_crt(0x1000);
    *piVar1 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_00feca01;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_00feca01:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}

// 00FECA14  __ftbuf  size=52  [run]
/* Library Function - Single Match
    __ftbuf
   
   Library: Visual Studio 2010 Release */

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  if ((_Flag != 0) && ((_File->_flag & 0x1000U) != 0)) {
    __flush(_File);
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}

// 00FECA48  FID_conflict:_vprintf_helper  size=122  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _vprintf_helper
    _vwprintf_helper
   
   Library: Visual Studio 2010 Release */

undefined4
FID_conflict__vprintf_helper(code *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *_File;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00fec7c3();
  _File = (FILE *)(iVar1 + 0x20);
  if (param_2 == 0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
    uVar3 = 0xffffffff;
  }
  else {
    __lock_file(_File);
    iVar1 = __stbuf(_File);
    uVar3 = (*param_1)(_File,param_2,param_3,param_4);
    __ftbuf(iVar1,_File);
    FUN_00fecac5();
  }
  return uVar3;
}

// 00FECAC5  FUN_00fecac5  size=8  [run]
void FUN_00fecac5(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}

// 00FECACD  FID_conflict:__vwprintf_s_l  size=29  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vprintf_l
    __vprintf_p_l
    __vprintf_s_l
    __vwprintf_l
     6 names - too many to list
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___vwprintf_s_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(FUN_00fe5800,_Format,_Locale,_ArgList);
  return iVar1;
}

// 00FECAEA  FID_conflict:__vwprintf_s_l  size=29  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p_l
    __vprintf_s_l
    __vwprintf_p_l
    __vwprintf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___vwprintf_s_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(FUN_00fe64c3,_Format,_Locale,_ArgList);
  return iVar1;
}

// 00FECB07  FID_conflict:__vwprintf_s_l  size=29  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p_l
    __vprintf_s_l
    __vwprintf_p_l
    __vwprintf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___vwprintf_s_l(wchar_t *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(FUN_00fe72f2,_Format,_Locale,_ArgList);
  return iVar1;
}

// 00FECB24  FID_conflict:_vprintf_s  size=28  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p
    __vwprintf_p
    _vprintf
    _vprintf_s
     6 names - too many to list
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__vprintf_s(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(FUN_00fe5800,_Format,0,_ArgList);
  return iVar1;
}

// 00FECB40  FID_conflict:_vprintf_s  size=28  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p
    __vwprintf_p
    _vprintf
    _vprintf_s
     6 names - too many to list
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__vprintf_s(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(FUN_00fe64c3,_Format,0,_ArgList);
  return iVar1;
}

// 00FECB5C  FID_conflict:_vprintf_s  size=28  [run]
/* Library Function - Multiple Matches With Different Base Names
    __vprintf_p
    __vwprintf_p
    _vprintf
    _vprintf_s
     6 names - too many to list
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__vprintf_s(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = FID_conflict__vprintf_helper(FUN_00fe72f2,_Format,0,_ArgList);
  return iVar1;
}

// 00FECB78  ___libm_setusermatherr  size=46  [run]
/* Library Function - Single Match
    ___libm_setusermatherr
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release */

void ___libm_setusermatherr(PVOID param_1)

{
  if (param_1 == (PVOID)0x0) {
    DAT_01f8f764 = 0;
    return;
  }
  DAT_0225c080 = EncodePointer(param_1);
  DAT_01f8f764 = 1;
  return;
}

// 00FECBA6  ___libm_error_support  size=663  [run]
/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2010 Release */

void ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_2c;
  char *local_28;
  double local_24;
  undefined8 local_1c;
  double local_14;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = 0;
  if (DAT_01f8f764 == 0) {
    pcVar1 = FUN_00fffafa;
  }
  else {
    pcVar1 = DecodePointer(DAT_0225c080);
  }
  if (param_4 < 0xa7) {
    if (param_4 == 0xa6) {
      local_2c = 3;
      local_28 = "exp10";
LAB_00fecc3c:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      iVar2 = (*pcVar1)(&local_2c);
      if (iVar2 == 0) {
        piVar3 = __errno();
        *piVar3 = 0x22;
      }
    }
    else {
      if (0x19 < param_4) {
        if (param_4 == 0x1a) {
          *param_3 = 1.0;
          return;
        }
        if (param_4 != 0x1b) {
          if (param_4 == 0x1c) goto switchD_00fecd93_caseD_3ee;
          if (param_4 != 0x1d) {
            if (param_4 != 0x3a) {
              if (param_4 != 0x3d) {
                return;
              }
              goto switchD_00fecd93_caseD_3f1;
            }
            goto switchD_00fecd93_caseD_3f0;
          }
          local_28 = "pow";
          goto LAB_00fecd3e;
        }
        local_2c = 2;
LAB_00fecc35:
        local_28 = "pow";
        goto LAB_00fecc3c;
      }
      if (param_4 != 0x19) {
        local_2c = 2;
        if (param_4 == 2) {
          local_2c = 2;
          local_28 = "log";
        }
        else {
          if (param_4 == 3) {
            local_28 = "log";
            goto LAB_00feccc2;
          }
          if (param_4 == 8) {
            local_28 = "log10";
          }
          else {
            if (param_4 == 9) {
              local_28 = "log10";
              goto LAB_00feccc2;
            }
            if (param_4 != 0xe) {
              if (param_4 != 0xf) {
                if (param_4 != 0x18) {
                  return;
                }
                local_2c = 3;
                goto LAB_00fecc35;
              }
              local_28 = "exp";
              goto LAB_00fecc7a;
            }
            local_2c = 3;
            local_28 = "exp";
          }
        }
        goto LAB_00fecc3c;
      }
      local_28 = "pow";
LAB_00fecc7a:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      local_2c = 4;
      (*pcVar1)(&local_2c);
    }
    goto LAB_00fece35;
  }
  switch(param_4) {
  case 1000:
    local_28 = "log";
    break;
  case 0x3e9:
    local_28 = "log10";
    break;
  case 0x3ea:
    local_28 = "exp";
    break;
  case 0x3eb:
    local_28 = "atan";
    break;
  case 0x3ec:
    local_28 = "ceil";
    break;
  case 0x3ed:
    local_28 = "floor";
    break;
  case 0x3ee:
switchD_00fecd93_caseD_3ee:
    local_28 = "pow";
    goto LAB_00feccc2;
  case 0x3ef:
    local_28 = "modf";
    break;
  case 0x3f0:
switchD_00fecd93_caseD_3f0:
    local_28 = "acos";
    goto LAB_00feccc2;
  case 0x3f1:
switchD_00fecd93_caseD_3f1:
    local_28 = "asin";
    goto LAB_00feccc2;
  case 0x3f2:
    local_28 = "sin";
    goto LAB_00fecdfb;
  case 0x3f3:
    local_28 = "cos";
    goto LAB_00fecdfb;
  case 0x3f4:
    local_28 = "tan";
LAB_00fecdfb:
    local_14 = *param_1 * (double)CONCAT44(uStack_8,local_c);
    *param_3 = local_14;
    local_24 = *param_1;
    local_1c = *param_2;
    goto LAB_00fece15;
  default:
    goto switchD_00fecd93_default;
  }
LAB_00fecd3e:
  *param_3 = *param_1;
LAB_00feccc2:
  local_24 = *param_1;
  local_1c = *param_2;
  local_14 = *param_3;
LAB_00fece15:
  local_2c = 1;
  iVar2 = (*pcVar1)(&local_2c);
  if (iVar2 == 0) {
    piVar3 = __errno();
    *piVar3 = 0x21;
  }
LAB_00fece35:
  *param_3 = local_14;
switchD_00fecd93_default:
  return;
}

// 00FECE72  __floor_default  size=216  [run]
/* Library Function - Single Match
    __floor_default
   
   Library: Visual Studio 2010 Release */

float10 __floor_default(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  
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
    dVar1 = param_1 + 1.0;
    uVar5 = 8;
  }
  else {
    fVar4 = (float10)__frnd(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20));
    dVar1 = (double)fVar4;
    if ((param_1 == dVar1) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = (float10)__except1(uVar5,0xb,param_1,dVar1,uVar2);
  return fVar4;
}

// 00FECF50  ___ascii_strnicmp  size=97  [run]
/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio 2010 Release */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_00fecfa1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_00fecfa1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}

// 00FECFB1  __ceil_default  size=216  [run]
/* Library Function - Single Match
    __ceil_default
   
   Library: Visual Studio 2010 Release */

float10 __ceil_default(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  
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
    dVar1 = param_1 + 1.0;
    uVar5 = 8;
  }
  else {
    fVar4 = (float10)__frnd(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20));
    dVar1 = (double)fVar4;
    if ((param_1 == dVar1) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = (float10)__except1(uVar5,0xc,param_1,dVar1,uVar2);
  return fVar4;
}

// 00FED089  terminate  size=44  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2010 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_terminate != (code *)0x0) {
    (*p_Var1->_terminate)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

// 00FED0C2  FUN_00fed0c2  size=19  [run]
void FUN_00fed0c2(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_unexpected != (code *)0x0) {
    (*p_Var1->_unexpected)();
  }
  terminate();
  return;
}

// 00FED0D5  _inconsistency  size=49  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2010 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = DecodePointer(DAT_01f8f768);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// 00FED10D  FUN_00fed10d  size=17  [run]
void FUN_00fed10d(void)

{
  DAT_01f8f768 = EncodePointer(terminate);
  return;
}

// 00FED120  __CallSettingFrame@12  size=76  [run]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Library: Visual Studio 2010 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}

// 00FED16C  __CxxUnhandledExceptionFilter  size=66  [run]
/* Library Function - Single Match
    long __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *param_1)

{
  PEXCEPTION_RECORD pEVar1;
  undefined *puVar2;
  
  pEVar1 = param_1->ExceptionRecord;
  if (((pEVar1->ExceptionCode == 0xe06d7363) && (pEVar1->NumberParameters == 3)) &&
     ((puVar2 = (undefined *)pEVar1->ExceptionInformation[0], puVar2 == (undefined *)0x19930520 ||
      (((puVar2 == (undefined *)0x19930521 || (puVar2 == (undefined *)0x19930522)) ||
       (puVar2 == &DAT_01994000)))))) {
    terminate();
  }
  return 0;
}

// 00FED1E2  __XcptFilter  size=330  [run]
/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 2010 Release */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  ulong *puVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  _ptiddata p_Var5;
  ulong *puVar6;
  int iVar7;
  
  p_Var5 = __getptd_noexit();
  iVar7 = 0;
  if (p_Var5 != (_ptiddata)0x0) {
    puVar1 = p_Var5->_pxcptacttab;
    puVar6 = puVar1;
    do {
      if (*puVar6 == _ExceptionNum) break;
      puVar6 = puVar6 + 3;
    } while (puVar6 < puVar1 + 0x24);
    if ((puVar1 + 0x24 <= puVar6) || (*puVar6 != _ExceptionNum)) {
      puVar6 = (ulong *)0x0;
    }
    if ((puVar6 == (ulong *)0x0) || (pcVar2 = (code *)puVar6[2], pcVar2 == (code *)0x0)) {
      iVar7 = 0;
    }
    else if (pcVar2 == (code *)0x5) {
      puVar6[2] = 0;
      iVar7 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        pvVar3 = p_Var5->_tpxcptinfoptrs;
        p_Var5->_tpxcptinfoptrs = _ExceptionPtr;
        if (puVar6[1] == 8) {
          iVar7 = 0x24;
          do {
            *(undefined4 *)(iVar7 + 8 + (int)p_Var5->_pxcptacttab) = 0;
            iVar7 = iVar7 + 0xc;
          } while (iVar7 < 0x90);
          uVar4 = *puVar6;
          iVar7 = p_Var5->_tfpecode;
          if (uVar4 == 0xc000008e) {
            p_Var5->_tfpecode = 0x83;
          }
          else if (uVar4 == 0xc0000090) {
            p_Var5->_tfpecode = 0x81;
          }
          else if (uVar4 == 0xc0000091) {
            p_Var5->_tfpecode = 0x84;
          }
          else if (uVar4 == 0xc0000093) {
            p_Var5->_tfpecode = 0x85;
          }
          else if (uVar4 == 0xc000008d) {
            p_Var5->_tfpecode = 0x82;
          }
          else if (uVar4 == 0xc000008f) {
            p_Var5->_tfpecode = 0x86;
          }
          else if (uVar4 == 0xc0000092) {
            p_Var5->_tfpecode = 0x8a;
          }
          else if (uVar4 == 0xc00002b5) {
            p_Var5->_tfpecode = 0x8d;
          }
          else if (uVar4 == 0xc00002b4) {
            p_Var5->_tfpecode = 0x8e;
          }
          (*pcVar2)(8,p_Var5->_tfpecode);
          p_Var5->_tfpecode = iVar7;
        }
        else {
          puVar6[2] = 0;
          (*pcVar2)(puVar6[1]);
        }
        p_Var5->_tpxcptinfoptrs = pvVar3;
      }
      iVar7 = -1;
    }
  }
  return iVar7;
}

// 00FED32C  ___CppXcptFilter  size=32  [run]
/* Library Function - Single Match
    ___CppXcptFilter
   
   Library: Visual Studio 2010 Release */

int __cdecl ___CppXcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
  if (_ExceptionNum == 0xe06d7363) {
    iVar1 = __XcptFilter(0xe06d7363,_ExceptionPtr);
    return iVar1;
  }
  return 0;
}

// 00FED34C  __wincmdln  size=95  [run]
/* Library Function - Single Match
    __wincmdln
   
   Library: Visual Studio 2010 Release */

byte * __wincmdln(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  
  bVar2 = false;
  if (DAT_0225d0b8 == 0) {
    ___initmbctable();
  }
  pbVar4 = DAT_0225d0c8;
  if (DAT_0225d0c8 == (byte *)0x0) {
    pbVar4 = &DAT_016416fa;
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 < 0x21) {
      if (bVar1 == 0) {
        return pbVar4;
      }
      if (!bVar2) {
        for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
        }
        return pbVar4;
      }
    }
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar3 = __ismbblead((uint)bVar1);
    if (iVar3 != 0) {
      pbVar4 = pbVar4 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}

// 00FED3AB  FUN_00fed3ab  size=219  [run]
undefined4 FUN_00fed3ab(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_0225d0b8 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_01f8ef50;
  if (DAT_01f8ef50 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_01f8ef50;
    DAT_01f8f5b8 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_01f8ef50);
          DAT_01f8ef50 = (char *)0x0;
          *puVar1 = 0;
          DAT_0225d0ac = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_01f8f5b8);
            DAT_01f8f5b8 = (undefined4 *)0x0;
            return 0xffffffff;
          }
          eVar3 = _strcpy_s(_Dst,sVar2,pcVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2;
      } while( true );
    }
  }
  return 0xffffffff;
}

// 00FED487  FUN_00fed487  size=15  [run]
void FUN_00fed487(undefined4 param_1)

{
  DAT_01f8f5c8 = param_1;
  return;
}

// 00FED496  parse_cmdline  size=410  [run]
/* Library Function - Single Match
    _parse_cmdline
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *in_EDX;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  pbVar5 = param_2;
  do {
    if (*in_EDX == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_EDX + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_EDX;
        param_2 = pbVar5 + 1;
      }
      bVar6 = *in_EDX;
      pbVar7 = in_EDX + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_2 != (byte *)0x0) {
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        pbVar7 = in_EDX + 2;
      }
      pbVar5 = param_2;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_00fed52a;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_00fed52a:
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = pbVar5;
      param_1 = param_1 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        param_2 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_2 = param_2 + 1;
          }
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_2;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_2 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}

// 00FED630  __setargv  size=187  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2010 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  void *pvVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_0225d0b8 == 0) {
    ___initmbctable();
  }
  DAT_01f8f874 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_01f8f770,0x104);
  DAT_01f8f5c8 = &DAT_01f8f770;
  if ((DAT_0225d0c8 == (char *)0x0) || (local_8 = DAT_0225d0c8, *DAT_0225d0c8 == '\0')) {
    local_8 = &DAT_01f8f770;
  }
  parse_cmdline(0,0,&local_c);
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    iVar2 = local_c * 4;
    _Size = iVar2 + local_10;
    if ((local_10 <= _Size) && (pvVar1 = __malloc_crt(_Size), pvVar1 != (void *)0x0)) {
      parse_cmdline(pvVar1,(void *)(iVar2 + (int)pvVar1),&local_c);
      _DAT_01f8f5ac = local_c - 1;
      _DAT_01f8f5b0 = pvVar1;
      return 0;
    }
  }
  return -1;
}

// 00FED6EB  ___crtGetEnvironmentStringsA  size=151  [run]
/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2010 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  WCHAR WVar1;
  LPWCH lpWideCharStr;
  WCHAR *pWVar2;
  int iVar4;
  size_t _Size;
  LPSTR local_8;
  WCHAR *pWVar3;
  
  lpWideCharStr = GetEnvironmentStringsW();
  if (lpWideCharStr == (LPWCH)0x0) {
    local_8 = (LPSTR)0x0;
  }
  else {
    WVar1 = *lpWideCharStr;
    pWVar2 = lpWideCharStr;
    while (WVar1 != L'\0') {
      do {
        pWVar3 = pWVar2;
        pWVar2 = pWVar3 + 1;
      } while (*pWVar2 != L'\0');
      pWVar2 = pWVar3 + 2;
      WVar1 = *pWVar2;
    }
    iVar4 = ((int)pWVar2 - (int)lpWideCharStr >> 1) + 1;
    _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Size == 0) || (local_8 = __malloc_crt(_Size), local_8 == (LPSTR)0x0)) {
      FreeEnvironmentStringsW(lpWideCharStr);
      local_8 = (LPSTR)0x0;
    }
    else {
      iVar4 = WideCharToMultiByte(0,0,lpWideCharStr,iVar4,local_8,_Size,(LPCSTR)0x0,(LPBOOL)0x0);
      if (iVar4 == 0) {
        _free(local_8);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
    }
  }
  return local_8;
}

// 00FED782  __ioinit  size=581  [run]
/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2010 Release */

int __cdecl __ioinit(void)

{
  void *pvVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  UINT UVar6;
  UINT UVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  _STARTUPINFOW local_50;
  byte *local_c;
  UINT *local_8;
  
  GetStartupInfoW(&local_50);
  pvVar1 = __calloc_crt(0x20,0x40);
  if (pvVar1 == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    DAT_0225bf70 = 0x20;
    DAT_0225bf80 = pvVar1;
    if (pvVar1 < (void *)((int)pvVar1 + 0x800U)) {
      iVar2 = (int)pvVar1 + 5;
      do {
        *(undefined4 *)(iVar2 + -5) = 0xffffffff;
        *(undefined2 *)(iVar2 + -1) = 0xa00;
        *(undefined4 *)(iVar2 + 3) = 0;
        *(undefined2 *)(iVar2 + 0x1f) = 0xa00;
        *(undefined1 *)(iVar2 + 0x21) = 10;
        *(undefined4 *)(iVar2 + 0x33) = 0;
        *(undefined1 *)(iVar2 + 0x2f) = 0;
        uVar10 = iVar2 + 0x3b;
        iVar2 = iVar2 + 0x40;
      } while (uVar10 < (int)DAT_0225bf80 + 0x800U);
    }
    if ((local_50.cbReserved2 != 0) && ((UINT *)local_50.lpReserved2 != (UINT *)0x0)) {
      UVar6 = *(UINT *)local_50.lpReserved2;
      local_8 = (UINT *)((int)local_50.lpReserved2 + 4);
      local_c = (byte *)((int)local_8 + UVar6);
      if (0x7ff < (int)UVar6) {
        UVar6 = 0x800;
      }
      UVar7 = UVar6;
      if ((int)DAT_0225bf70 < (int)UVar6) {
        piVar9 = &DAT_0225bf84;
        do {
          pvVar1 = __calloc_crt(0x20,0x40);
          UVar7 = DAT_0225bf70;
          if (pvVar1 == (void *)0x0) break;
          DAT_0225bf70 = DAT_0225bf70 + 0x20;
          *piVar9 = (int)pvVar1;
          if (pvVar1 < (void *)((int)pvVar1 + 0x800U)) {
            iVar2 = (int)pvVar1 + 5;
            do {
              *(undefined4 *)(iVar2 + -5) = 0xffffffff;
              *(undefined4 *)(iVar2 + 3) = 0;
              *(byte *)(iVar2 + 0x1f) = *(byte *)(iVar2 + 0x1f) & 0x80;
              *(undefined4 *)(iVar2 + 0x33) = 0;
              *(undefined2 *)(iVar2 + -1) = 0xa00;
              *(undefined2 *)(iVar2 + 0x20) = 0xa0a;
              *(undefined1 *)(iVar2 + 0x2f) = 0;
              uVar10 = iVar2 + 0x3b;
              iVar2 = iVar2 + 0x40;
            } while (uVar10 < *piVar9 + 0x800U);
          }
          piVar9 = piVar9 + 1;
          UVar7 = UVar6;
        } while ((int)DAT_0225bf70 < (int)UVar6);
      }
      uVar10 = 0;
      if (0 < (int)UVar7) {
        do {
          pvVar5 = *(HANDLE *)local_c;
          if ((((pvVar5 != (HANDLE)0xffffffff) && (pvVar5 != (HANDLE)0xfffffffe)) &&
              ((*local_8 & 1) != 0)) &&
             (((*local_8 & 8) != 0 || (DVar3 = GetFileType(pvVar5), DVar3 != 0)))) {
            puVar8 = (undefined4 *)((uVar10 & 0x1f) * 0x40 + (int)(&DAT_0225bf80)[(int)uVar10 >> 5])
            ;
            *puVar8 = *(undefined4 *)local_c;
            *(byte *)(puVar8 + 1) = (byte)*local_8;
            BVar4 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar8 + 3),4000);
            if (BVar4 == 0) {
              return -1;
            }
            puVar8[2] = puVar8[2] + 1;
          }
          local_c = local_c + 4;
          uVar10 = uVar10 + 1;
          local_8 = (UINT *)((int)local_8 + 1);
        } while ((int)uVar10 < (int)UVar7);
      }
    }
    iVar2 = 0;
    do {
      piVar9 = (int *)(iVar2 * 0x40 + (int)DAT_0225bf80);
      if ((*piVar9 == -1) || (*piVar9 == -2)) {
        *(undefined1 *)(piVar9 + 1) = 0x81;
        if (iVar2 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar2 != 1);
        }
        pvVar5 = GetStdHandle(DVar3);
        if (((pvVar5 == (HANDLE)0xffffffff) || (pvVar5 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(pvVar5), DVar3 == 0)) {
          *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x40;
          *piVar9 = -2;
        }
        else {
          *piVar9 = (int)pvVar5;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 8;
          }
          BVar4 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(piVar9 + 3),4000);
          if (BVar4 == 0) {
            return -1;
          }
          piVar9[2] = piVar9[2] + 1;
        }
      }
      else {
        *(byte *)(piVar9 + 1) = *(byte *)(piVar9 + 1) | 0x80;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    SetHandleCount(DAT_0225bf70);
    iVar2 = 0;
  }
  return iVar2;
}

// 00FEDA1A  __RTC_Initialize  size=38  [run]
/* WARNING: Removing unreachable block (ram,0x00feda2e) */
/* WARNING: Removing unreachable block (ram,0x00feda34) */
/* WARNING: Removing unreachable block (ram,0x00feda36) */
/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2010 Release */

void __RTC_Initialize(void)

{
  return;
}

// 00FEDA66  __heap_init  size=30  [run]
/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2010 Release */

int __cdecl __heap_init(void)

{
  DAT_01f8f878 = HeapCreate(0,0x1000,0);
  return (uint)(DAT_01f8f878 != (HANDLE)0x0);
}

// 00FEDA9E  ___security_init_cookie  size=155  [run]
/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2010 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_018e8764 == 0xbb40e64e) || ((DAT_018e8764 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_018e8764 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_018e8764 == 0xbb40e64e) {
      DAT_018e8764 = 0xbb40e64f;
    }
    else if ((DAT_018e8764 & 0xffff0000) == 0) {
      DAT_018e8764 = DAT_018e8764 | (DAT_018e8764 | 0x4711) << 0x10;
    }
  }
  DAT_018e8768 = ~DAT_018e8764;
  return;
}

// 00FEDB39  ___report_gsfailure  size=262  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_01f8f998 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_01f8f99c = &stack0x00000004;
  _DAT_01f8f8d8 = 0x10001;
  _DAT_01f8f880 = 0xc0000409;
  _DAT_01f8f884 = 1;
  local_32c = DAT_018e8764;
  local_328 = DAT_018e8768;
  _DAT_01f8f88c = unaff_retaddr;
  _DAT_01f8f964 = in_GS;
  _DAT_01f8f968 = in_FS;
  _DAT_01f8f96c = in_ES;
  _DAT_01f8f970 = in_DS;
  _DAT_01f8f974 = unaff_EDI;
  _DAT_01f8f978 = unaff_ESI;
  _DAT_01f8f97c = unaff_EBX;
  _DAT_01f8f980 = in_EDX;
  _DAT_01f8f984 = in_ECX;
  _DAT_01f8f988 = in_EAX;
  _DAT_01f8f98c = unaff_EBP;
  DAT_01f8f990 = unaff_retaddr;
  _DAT_01f8f994 = in_CS;
  _DAT_01f8f9a0 = in_SS;
  DAT_01f8f8d0 = IsDebuggerPresent();
  FUN_00ffe4cc(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_016fcc08);
  if (DAT_01f8f8d0 == 0) {
    FUN_00ffe4cc(1);
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}

// 00FEDCAC  FUN_00fedcac  size=9  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_00fedcac(void)

{
  return _DAT_016f969a;
}

// 00FEDCF0  __cintrindisp2  size=62  [run]
/* Library Function - Single Match
    __cintrindisp2
   
   Library: Visual Studio */

void __cintrindisp2(void)

{
  __trandisp2();
  FUN_00feddb3();
  return;
}

// 00FEDD2E  __cintrindisp1  size=61  [run]
/* Library Function - Single Match
    __cintrindisp1
   
   Library: Visual Studio */

void __cintrindisp1(void)

{
  __trandisp1();
  FUN_00feddb3();
  return;
}

// 00FEDD6B  __ctrandisp2  size=65  [run]
/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 2010, Visual Studio 2012, Visual Studio 2015, Visual Studio 2019 */

void __ctrandisp2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2();
  FUN_00feddac();
  return;
}

// 00FEDDAC  FUN_00feddac  size=7  [run]
void FUN_00feddac(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_01f8ef44 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_00fede98;
      }
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
        if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
          in_ST0 = in_ST0 * (float10)0.0;
        }
        goto LAB_00fede98;
      }
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.7976931348623157e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_00fede98;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_00fede98:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  __87except((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),unaff_EBP + -0x8e,unaff_EBP + -0xa4);
  return;
}

// 00FEDDB3  FUN_00feddb3  size=327  [run]
void FUN_00feddb3(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_01f8ef44 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_00fede98;
      }
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
        if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
          in_ST0 = in_ST0 * (float10)0.0;
        }
        goto LAB_00fede98;
      }
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.7976931348623157e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_00fede98;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_00fede98:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  __87except((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),unaff_EBP + -0x8e,unaff_EBP + -0xa4);
  return;
}

// 00FEDEFA  __ctrandisp1  size=51  [run]
/* Library Function - Single Match
    __ctrandisp1
   
   Library: Visual Studio */

void __ctrandisp1(undefined4 param_1,undefined4 param_2)

{
  __fload(param_1,param_2);
  __trandisp1();
  FUN_00feddac();
  return;
}

// 00FEDF2D  __fload  size=60  [run]
/* Library Function - Single Match
    __fload
   
   Library: Visual Studio */

float10 __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}

// 00FEDF70  FUN_00fedf70  size=24  [run]
void FUN_00fedf70(void)

{
  float10 in_ST0;
  
  FUN_00fedf8e((double)in_ST0);
  return;
}

// 00FEDF88  FUN_00fedf88  size=6  [run]
float10 FUN_00fedf88(double param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar1 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar10 = (param_1 * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar3 = ((int)ROUND(param_1 * 10.185916357881302) + 0x1c7610U & 0x3f) * 0x20;
    dVar11 = dVar10 * 3.798187816439979e-12;
    dVar5 = param_1 - dVar10 * 0.09817477042088285;
    param_1 = param_1 - dVar10 * 0.09817477042088285;
    dVar15 = param_1 - dVar11;
    dVar6 = dVar5 - dVar11;
    dVar8 = dVar5 - dVar10 * 3.798187816439979e-12;
    dVar7 = dVar6 * dVar6;
    dVar9 = dVar8 * dVar8;
    dVar12 = *(double *)(&DAT_016fcc90 + iVar3) + *(double *)(&DAT_016fcca8 + iVar3);
    dVar13 = *(double *)(&DAT_016fcca8 + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&DAT_016fcc90 + iVar3);
    dVar14 = dVar13 + *(double *)(&DAT_016fcc98 + iVar3);
    dVar17 = dVar16 + dVar14;
    return (float10)(dVar17 + (dVar10 * 1.2639164054974691e-22 - ((param_1 - dVar15) - dVar11)) *
                              (*(double *)(&DAT_016fcc98 + iVar3) * dVar15 - dVar12) +
                              *(double *)(&DAT_016fcca0 + iVar3) +
                              (*(double *)(&DAT_016fcc98 + iVar3) - dVar14) + dVar13 +
                              (dVar14 - dVar17) + dVar16 +
                              (dVar7 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar5 * 2.7557319223985893e-06 * dVar6 + -0.0001984126984126984) *
                              dVar7 * dVar7) * dVar12 * dVar15 * dVar7 +
                              (dVar9 * 0.041666666666666664 + -0.5 +
                              (dVar5 * 2.48015873015873e-05 * dVar8 + -0.001388888888888889) *
                              dVar9 * dVar9) * *(double *)(&DAT_016fcc98 + iVar3) * dVar9);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(1.0 - (double)((ulonglong)param_1 & 0xffffffffffff |
                                   (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  fVar4 = (float10)FUN_00fded7f();
  return fVar4;
}

// 00FEDF8E  FUN_00fedf8e  size=395  [run]
float10 FUN_00fedf8e(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 fVar4;
  double in_XMM0_Qa;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar10 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar3 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7610U & 0x3f) * 0x20;
    dVar11 = dVar10 * 3.798187816439979e-12;
    dVar5 = in_XMM0_Qa - dVar10 * 0.09817477042088285;
    dVar15 = in_XMM0_Qa - dVar10 * 0.09817477042088285;
    dVar16 = dVar15 - dVar11;
    dVar6 = dVar5 - dVar11;
    dVar8 = dVar5 - dVar10 * 3.798187816439979e-12;
    dVar7 = dVar6 * dVar6;
    dVar9 = dVar8 * dVar8;
    dVar12 = *(double *)(&DAT_016fcc90 + iVar3) + *(double *)(&DAT_016fcca8 + iVar3);
    dVar13 = *(double *)(&DAT_016fcca8 + iVar3) * dVar16;
    dVar17 = dVar16 * *(double *)(&DAT_016fcc90 + iVar3);
    dVar14 = dVar13 + *(double *)(&DAT_016fcc98 + iVar3);
    dVar18 = dVar17 + dVar14;
    return (float10)(dVar18 + (dVar10 * 1.2639164054974691e-22 - ((dVar15 - dVar16) - dVar11)) *
                              (*(double *)(&DAT_016fcc98 + iVar3) * dVar16 - dVar12) +
                              *(double *)(&DAT_016fcca0 + iVar3) +
                              (*(double *)(&DAT_016fcc98 + iVar3) - dVar14) + dVar13 +
                              (dVar14 - dVar18) + dVar17 +
                              (dVar7 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar5 * 2.7557319223985893e-06 * dVar6 + -0.0001984126984126984) *
                              dVar7 * dVar7) * dVar12 * dVar16 * dVar7 +
                              (dVar9 * 0.041666666666666664 + -0.5 +
                              (dVar5 * 2.48015873015873e-05 * dVar8 + -0.001388888888888889) *
                              dVar9 * dVar9) * *(double *)(&DAT_016fcc98 + iVar3) * dVar9);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(1.0 - (double)((ulonglong)in_XMM0_Qa & 0xffffffffffff |
                                   (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  fVar4 = (float10)FUN_00fded7f();
  return fVar4;
}

// 00FEE120  FUN_00fee120  size=24  [run]
void FUN_00fee120(void)

{
  float10 in_ST0;
  
  FUN_00fee13e((double)in_ST0);
  return;
}

// 00FEE138  FUN_00fee138  size=6  [run]
float10 FUN_00fee138(double param_1)

{
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar1 = ((ushort)((ulonglong)param_1 >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar9 = (param_1 * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar2 = ((int)ROUND(param_1 * 10.185916357881302) + 0x1c7600U & 0x3f) * 0x20;
    dVar10 = dVar9 * 3.798187816439979e-12;
    dVar4 = param_1 - dVar9 * 0.09817477042088285;
    param_1 = param_1 - dVar9 * 0.09817477042088285;
    dVar14 = param_1 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - dVar9 * 3.798187816439979e-12;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&DAT_016fd540 + iVar2) + *(double *)(&DAT_016fd558 + iVar2);
    dVar12 = *(double *)(&DAT_016fd558 + iVar2) * dVar14;
    dVar15 = dVar14 * *(double *)(&DAT_016fd540 + iVar2);
    dVar13 = dVar12 + *(double *)(&DAT_016fd548 + iVar2);
    dVar16 = dVar15 + dVar13;
    return (float10)(dVar16 + (dVar9 * 1.2639164054974691e-22 - ((param_1 - dVar14) - dVar10)) *
                              (*(double *)(&DAT_016fd548 + iVar2) * dVar14 - dVar11) +
                              *(double *)(&DAT_016fd550 + iVar2) +
                              (*(double *)(&DAT_016fd548 + iVar2) - dVar13) + dVar12 +
                              (dVar13 - dVar16) + dVar15 +
                              (dVar6 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar4 * 2.7557319223985893e-06 * dVar5 + -0.0001984126984126984) *
                              dVar6 * dVar6) * dVar11 * dVar14 * dVar6 +
                              (dVar8 * 0.041666666666666664 + -0.5 +
                              (dVar4 * 2.48015873015873e-05 * dVar7 + -0.001388888888888889) *
                              dVar8 * dVar8) * *(double *)(&DAT_016fd548 + iVar2) * dVar8);
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(param_1 * 0.9999999999999999);
    }
    return (float10)param_1;
  }
  fVar3 = (float10)FUN_00fdeeaf();
  return fVar3;
}

// 00FEE13E  FUN_00fee13e  size=425  [run]
float10 FUN_00fee13e(void)

{
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar1 = ((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar9 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar2 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7600U & 0x3f) * 0x20;
    dVar10 = dVar9 * 3.798187816439979e-12;
    dVar4 = in_XMM0_Qa - dVar9 * 0.09817477042088285;
    dVar14 = in_XMM0_Qa - dVar9 * 0.09817477042088285;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - dVar9 * 3.798187816439979e-12;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&DAT_016fd540 + iVar2) + *(double *)(&DAT_016fd558 + iVar2);
    dVar12 = *(double *)(&DAT_016fd558 + iVar2) * dVar15;
    dVar16 = dVar15 * *(double *)(&DAT_016fd540 + iVar2);
    dVar13 = dVar12 + *(double *)(&DAT_016fd548 + iVar2);
    dVar17 = dVar16 + dVar13;
    return (float10)(dVar17 + (dVar9 * 1.2639164054974691e-22 - ((dVar14 - dVar15) - dVar10)) *
                              (*(double *)(&DAT_016fd548 + iVar2) * dVar15 - dVar11) +
                              *(double *)(&DAT_016fd550 + iVar2) +
                              (*(double *)(&DAT_016fd548 + iVar2) - dVar13) + dVar12 +
                              (dVar13 - dVar17) + dVar16 +
                              (dVar6 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar4 * 2.7557319223985893e-06 * dVar5 + -0.0001984126984126984) *
                              dVar6 * dVar6) * dVar11 * dVar15 * dVar6 +
                              (dVar8 * 0.041666666666666664 + -0.5 +
                              (dVar4 * 2.48015873015873e-05 * dVar7 + -0.001388888888888889) *
                              dVar8 * dVar8) * *(double *)(&DAT_016fd548 + iVar2) * dVar8);
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(in_XMM0_Qa * 0.9999999999999999);
    }
    return (float10)in_XMM0_Qa;
  }
  fVar3 = (float10)FUN_00fdeeaf();
  return fVar3;
}

// 00FEE2E8  write_char  size=47  [run]
/* Library Function - Single Match
    _write_char
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl write_char(wchar_t param_1)

{
  wint_t wVar1;
  FILE *in_EAX;
  int *unaff_ESI;
  
  if (((in_EAX->_flag & 0x40) == 0) || (in_EAX->_base != (char *)0x0)) {
    wVar1 = __fputwc_nolock(param_1,in_EAX);
    if (wVar1 == 0xffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}

// 00FEE317  write_multi_char  size=39  [run]
/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char(param_1);
  } while (*in_EAX != -1);
  return;
}

// 00FEE33E  FUN_00fee33e  size=103  [run]
void FUN_00fee33e(undefined2 *param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int unaff_EBX;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  if (((*(byte *)(unaff_EBX + 0xc) & 0x40) == 0) || (*(int *)(unaff_EBX + 8) != 0)) {
    *unaff_EDI = 0;
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        write_char(*param_1);
        param_1 = param_1 + 1;
        if (*in_EAX == -1) {
          if (*unaff_EDI != 0x2a) break;
          write_char(0x3f);
        }
      } while (0 < param_2);
      if (*unaff_EDI != 0) {
        return;
      }
    }
    *unaff_EDI = iVar1;
  }
  else {
    *in_EAX = *in_EAX + param_2;
  }
  return;
}

// 00FEE3A5  FUN_00fee3a5  size=2983  [run]
void FUN_00fee3a5(int param_1,ushort *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  ushort uVar1;
  wchar_t wVar2;
  short *psVar3;
  wchar_t *pwVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  int extraout_ECX;
  uint uVar9;
  wchar_t *pwVar10;
  size_t sVar11;
  wchar_t *pwVar12;
  bool bVar13;
  longlong lVar14;
  uint *puVar15;
  undefined4 uVar16;
  localeinfo_struct *plVar17;
  uint local_474;
  uint local_470;
  undefined4 local_46c;
  int *local_468;
  int local_464;
  uint local_460;
  localeinfo_struct local_45c;
  int local_454;
  char local_450;
  int local_44c;
  int local_448;
  ushort *local_444;
  wchar_t *local_440;
  char local_43c;
  undefined1 local_43b;
  undefined2 local_438;
  short local_436;
  uint local_434;
  int local_430;
  int local_42c;
  int local_428;
  wchar_t *local_424;
  uint local_420;
  int local_41c;
  size_t local_418;
  wchar_t *local_414;
  uint local_410;
  uint local_40c;
  wchar_t local_408 [255];
  undefined2 local_209;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_428 = param_1;
  local_424 = param_4;
  local_448 = 0;
  local_40c = 0;
  local_434 = 0;
  local_410 = 0;
  local_42c = 0;
  local_44c = 0;
  local_430 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_45c,param_3);
  local_468 = __errno();
  if ((local_428 == 0) || (param_2 == (ushort *)0x0)) {
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00fe56c2();
LAB_00fee435:
    if (local_450 != '\0') {
      *(uint *)(local_454 + 0x70) = *(uint *)(local_454 + 0x70) & 0xfffffffd;
    }
  }
  else {
    uVar1 = *param_2;
    local_41c = 0;
    local_418 = 0;
    local_440 = (wchar_t *)0x0;
    iVar7 = 0;
    while (local_420 = (uint)uVar1, uVar1 != 0) {
      local_444 = param_2 + 1;
      if (local_41c < 0) break;
      if ((ushort)(uVar1 - 0x20) < 0x59) {
        uVar6 = (int)"e+000"[local_420] & 0xf;
      }
      else {
        uVar6 = 0;
      }
      local_464 = (int)(char)(&DAT_016f5c00)[uVar6 * 8 + iVar7] >> 4;
      switch(local_464) {
      case 0:
switchD_00fee4c1_caseD_0:
        local_430 = 1;
        write_char(local_420);
        break;
      case 1:
        local_410 = 0xffffffff;
        local_46c = 0;
        local_44c = 0;
        local_434 = 0;
        local_42c = 0;
        local_40c = 0;
        local_430 = 0;
        break;
      case 2:
        if (local_420 == 0x20) {
          local_40c = local_40c | 2;
        }
        else if (local_420 == 0x23) {
          local_40c = local_40c | 0x80;
        }
        else if (local_420 == 0x2b) {
          local_40c = local_40c | 1;
        }
        else if (local_420 == 0x2d) {
          local_40c = local_40c | 4;
        }
        else if (local_420 == 0x30) {
          local_40c = local_40c | 8;
        }
        break;
      case 3:
        if (uVar1 == 0x2a) {
          local_424 = param_4 + 2;
          local_434 = *(uint *)param_4;
          if ((int)local_434 < 0) {
            local_40c = local_40c | 4;
            local_434 = -local_434;
          }
        }
        else {
          local_434 = local_434 * 10 + -0x30 + local_420;
        }
        break;
      case 4:
        local_410 = 0;
        break;
      case 5:
        if (uVar1 == 0x2a) {
          local_424 = param_4 + 2;
          local_410 = *(uint *)param_4;
          if ((int)local_410 < 0) {
            local_410 = 0xffffffff;
          }
        }
        else {
          local_410 = local_410 * 10 + -0x30 + local_420;
        }
        break;
      case 6:
        if (local_420 == 0x49) {
          uVar1 = *local_444;
          if ((uVar1 == 0x36) && (param_2[2] == 0x34)) {
            local_444 = param_2 + 3;
            local_40c = local_40c | 0x8000;
          }
          else if ((uVar1 == 0x33) && (param_2[2] == 0x32)) {
            local_444 = param_2 + 3;
            local_40c = local_40c & 0xffff7fff;
          }
          else if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                   ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
            local_464 = 0;
            goto switchD_00fee4c1_caseD_0;
          }
        }
        else if (local_420 == 0x68) {
          local_40c = local_40c | 0x20;
        }
        else if (local_420 == 0x6c) {
          if (*local_444 == 0x6c) {
            local_444 = param_2 + 2;
            local_40c = local_40c | 0x1000;
          }
          else {
            local_40c = local_40c | 0x10;
          }
        }
        else if (local_420 == 0x77) {
          local_40c = local_40c | 0x800;
        }
        break;
      case 7:
        if (local_420 < 0x65) {
          if (local_420 == 100) {
LAB_00fee9d1:
            local_40c = local_40c | 0x40;
LAB_00fee9d8:
            local_420 = 10;
LAB_00fee9e2:
            if (((local_40c & 0x8000) == 0) && ((local_40c & 0x1000) == 0)) {
              local_424 = param_4 + 2;
              if ((local_40c & 0x20) == 0) {
                uVar6 = *(uint *)param_4;
                if ((local_40c & 0x40) == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = (int)uVar6 >> 0x1f;
                }
              }
              else {
                if ((local_40c & 0x40) == 0) {
                  uVar6 = (uint)(ushort)*param_4;
                }
                else {
                  uVar6 = (uint)*param_4;
                }
                uVar9 = (int)uVar6 >> 0x1f;
              }
            }
            else {
              uVar6 = *(uint *)param_4;
              uVar9 = *(uint *)(param_4 + 2);
              local_424 = param_4 + 4;
            }
            if ((((local_40c & 0x40) != 0) && ((int)uVar9 < 1)) && ((int)uVar9 < 0)) {
              bVar13 = uVar6 != 0;
              uVar6 = -uVar6;
              uVar9 = -(uVar9 + bVar13);
              local_40c = local_40c | 0x100;
            }
            if ((local_40c & 0x9000) == 0) {
              uVar9 = 0;
            }
            lVar14 = CONCAT44(uVar9,uVar6);
            if ((int)local_410 < 0) {
              local_410 = 1;
            }
            else {
              local_40c = local_40c & 0xfffffff7;
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
            }
            if (uVar6 == 0 && uVar9 == 0) {
              local_42c = 0;
            }
            pwVar12 = &local_209;
            while ((uVar6 = local_410 - 1, 0 < (int)local_410 || (lVar14 != 0))) {
              local_410 = uVar6;
              lVar14 = __aulldvrm(lVar14,local_420,(int)local_420 >> 0x1f);
              iVar7 = extraout_ECX + 0x30;
              if (0x39 < iVar7) {
                iVar7 = iVar7 + local_448;
              }
              *(byte *)pwVar12 = (byte)iVar7;
              pwVar12 = (wchar_t *)((int)pwVar12 + -1);
            }
            local_418 = (int)&local_209 + -(int)pwVar12;
            local_414 = (wchar_t *)((int)pwVar12 + 1);
            local_410 = uVar6;
            if (((local_40c & 0x200) != 0) && ((local_418 == 0 || (*(byte *)local_414 != 0x30)))) {
              local_418 = (int)&local_209 + -(int)pwVar12 + 1;
              *(byte *)pwVar12 = 0x30;
              local_414 = pwVar12;
            }
          }
          else if (local_420 < 0x54) {
            if (local_420 == 0x53) {
              if ((local_40c & 0x830) == 0) {
                local_40c = local_40c | 0x20;
              }
              goto LAB_00fee7ad;
            }
            if (local_420 != 0x41) {
              if (local_420 == 0x43) {
                if ((local_40c & 0x830) == 0) {
                  local_40c = local_40c | 0x20;
                }
LAB_00fee856:
                wVar2 = *param_4;
                local_460 = (uint)(ushort)wVar2;
                local_424 = param_4 + 2;
                local_430 = 1;
                if ((local_40c & 0x20) == 0) {
                  local_408[0] = wVar2;
                }
                else {
                  local_43c = (char)wVar2;
                  local_43b = 0;
                  iVar7 = __mbtowc_l(local_408,&local_43c,
                                     (size_t)(local_45c.locinfo)->locale_name[3],&local_45c);
                  if (iVar7 < 0) {
                    local_44c = 1;
                  }
                }
                local_418 = 1;
                local_414 = local_408;
                goto LAB_00feed10;
              }
              if ((local_420 != 0x45) && (local_420 != 0x47)) goto LAB_00feed10;
            }
            local_420 = local_420 + 0x20;
            local_46c = 1;
LAB_00fee744:
            local_40c = local_40c | 0x40;
            local_418 = 0x200;
            pwVar10 = local_408;
            sVar11 = local_418;
            pwVar12 = local_408;
            if ((int)local_410 < 0) {
              local_410 = 6;
            }
            else if (local_410 == 0) {
              if ((short)local_420 == 0x67) {
                local_410 = 1;
              }
            }
            else {
              if (0x200 < (int)local_410) {
                local_410 = 0x200;
              }
              if (0xa3 < (int)local_410) {
                sVar11 = local_410 + 0x15d;
                local_414 = local_408;
                local_440 = __malloc_crt(sVar11);
                pwVar10 = local_440;
                pwVar12 = local_440;
                if (local_440 == (wchar_t *)0x0) {
                  local_410 = 0xa3;
                  pwVar10 = local_408;
                  sVar11 = local_418;
                  pwVar12 = local_414;
                }
              }
            }
            local_414 = pwVar12;
            local_418 = sVar11;
            local_474 = *(uint *)param_4;
            local_424 = param_4 + 4;
            local_470 = *(uint *)(param_4 + 2);
            plVar17 = &local_45c;
            iVar7 = (int)(char)local_420;
            puVar15 = &local_474;
            pwVar12 = pwVar10;
            sVar11 = local_418;
            uVar6 = local_410;
            uVar16 = local_46c;
            pcVar8 = DecodePointer(PTR_LAB_018e8a38);
            (*pcVar8)(puVar15,pwVar12,sVar11,iVar7,uVar6,uVar16,plVar17);
            uVar6 = local_40c & 0x80;
            if ((uVar6 != 0) && (local_410 == 0)) {
              plVar17 = &local_45c;
              pwVar12 = pwVar10;
              pcVar8 = DecodePointer(PTR_LAB_018e8a44);
              (*pcVar8)(pwVar12,plVar17);
            }
            if (((short)local_420 == 0x67) && (uVar6 == 0)) {
              plVar17 = &local_45c;
              pwVar12 = pwVar10;
              pcVar8 = DecodePointer(PTR_LAB_018e8a40);
              (*pcVar8)(pwVar12,plVar17);
            }
            pwVar12 = pwVar10;
            pwVar4 = local_414;
            if ((byte)*pwVar10 == 0x2d) {
              local_40c = local_40c | 0x100;
              pwVar12 = (wchar_t *)((int)pwVar10 + 1);
              pwVar4 = (wchar_t *)((int)pwVar10 + 1);
            }
LAB_00fee92f:
            local_414 = pwVar4;
            local_418 = _strlen((char *)pwVar12);
          }
          else {
            if (local_420 == 0x58) goto LAB_00feeb33;
            if (local_420 == 0x5a) {
              psVar3 = *(short **)param_4;
              local_424 = param_4 + 2;
              pwVar12 = (wchar_t *)PTR_DAT_018e8a48;
              pwVar4 = (wchar_t *)PTR_DAT_018e8a48;
              if ((psVar3 == (short *)0x0) ||
                 (local_414 = *(wchar_t **)(psVar3 + 2), pwVar4 = (wchar_t *)PTR_DAT_018e8a48,
                 local_414 == (wchar_t *)0x0)) goto LAB_00fee92f;
              local_418 = (size_t)*psVar3;
              if ((local_40c & 0x800) != 0) {
                iVar7 = local_418 - ((int)local_418 >> 0x1f);
                goto LAB_00feed08;
              }
              local_430 = 0;
            }
            else {
              if (local_420 == 0x61) goto LAB_00fee744;
              if (local_420 == 99) goto LAB_00fee856;
            }
          }
LAB_00feed10:
          if (local_44c == 0) {
            if ((local_40c & 0x40) != 0) {
              if ((local_40c & 0x100) == 0) {
                if ((local_40c & 1) == 0) {
                  if ((local_40c & 2) == 0) goto LAB_00feed52;
                  local_438 = 0x20;
                }
                else {
                  local_438 = 0x2b;
                }
              }
              else {
                local_438 = 0x2d;
              }
              local_42c = 1;
            }
LAB_00feed52:
            uVar6 = (local_434 - local_418) - local_42c;
            local_420 = uVar6;
            if ((local_40c & 0xc) == 0) {
              do {
                if ((int)uVar6 < 1) break;
                uVar6 = uVar6 - 1;
                write_char(0x20);
              } while (local_41c != -1);
            }
            FUN_00fee33e(&local_438,local_42c);
            if (((local_40c & 8) != 0) && (uVar6 = local_420, (local_40c & 4) == 0)) {
              do {
                if ((int)uVar6 < 1) break;
                write_char(0x30);
                uVar6 = uVar6 - 1;
              } while (local_41c != -1);
            }
            if ((local_430 == 0) && (sVar11 = local_418, pwVar12 = local_414, 0 < (int)local_418)) {
              do {
                sVar11 = sVar11 - 1;
                iVar7 = __mbtowc_l((wchar_t *)&local_460,(char *)pwVar12,
                                   (size_t)(local_45c.locinfo)->locale_name[3],&local_45c);
                if (iVar7 < 1) {
                  local_41c = -1;
                  break;
                }
                write_char(local_460);
                pwVar12 = (wchar_t *)((int)pwVar12 + iVar7);
              } while (0 < (int)sVar11);
            }
            else {
              FUN_00fee33e(local_414,local_418);
            }
            if ((-1 < local_41c) && (uVar6 = local_420, (local_40c & 4) != 0)) {
              do {
                if ((int)uVar6 < 1) break;
                write_char(0x20);
                uVar6 = uVar6 - 1;
              } while (local_41c != -1);
            }
          }
        }
        else {
          if (0x70 < local_420) {
            if (local_420 == 0x73) {
LAB_00fee7ad:
              uVar6 = local_410;
              if (local_410 == 0xffffffff) {
                uVar6 = 0x7fffffff;
              }
              local_424 = param_4 + 2;
              local_414 = *(wchar_t **)param_4;
              if ((local_40c & 0x20) == 0) {
                pwVar12 = local_414;
                if (local_414 == (wchar_t *)0x0) {
                  pwVar12 = (wchar_t *)PTR_u__null__018e8a4c;
                  local_414 = (wchar_t *)PTR_u__null__018e8a4c;
                }
                for (; (uVar6 != 0 && (uVar6 = uVar6 - 1, *pwVar12 != L'\0')); pwVar12 = pwVar12 + 1
                    ) {
                }
                iVar7 = (int)pwVar12 - (int)local_414;
LAB_00feed08:
                local_424 = param_4 + 2;
                local_430 = 1;
                local_418 = iVar7 >> 1;
              }
              else {
                if (local_414 == (wchar_t *)0x0) {
                  local_414 = (wchar_t *)PTR_DAT_018e8a48;
                }
                local_418 = 0;
                pwVar12 = local_414;
                if (0 < (int)uVar6) {
                  do {
                    if ((byte)*pwVar12 == 0) break;
                    iVar7 = __isleadbyte_l((uint)(byte)*pwVar12,&local_45c);
                    if (iVar7 != 0) {
                      pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                    }
                    pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                    local_418 = local_418 + 1;
                  } while ((int)local_418 < (int)uVar6);
                }
              }
              goto LAB_00feed10;
            }
            if (local_420 == 0x75) goto LAB_00fee9d8;
            if (local_420 != 0x78) goto LAB_00feed10;
            local_448 = 0x27;
LAB_00feeb5f:
            local_420 = 0x10;
            if ((local_40c & 0x80) != 0) {
              local_438 = 0x30;
              local_436 = (short)local_448 + 0x51;
              local_42c = 2;
            }
            goto LAB_00fee9e2;
          }
          if (local_420 == 0x70) {
            local_410 = 8;
LAB_00feeb33:
            local_448 = 7;
            goto LAB_00feeb5f;
          }
          if (local_420 < 0x65) goto LAB_00feed10;
          if (local_420 < 0x68) goto LAB_00fee744;
          if (local_420 == 0x69) goto LAB_00fee9d1;
          if (local_420 != 0x6e) {
            if (local_420 != 0x6f) goto LAB_00feed10;
            local_420 = 8;
            if ((local_40c & 0x80) != 0) {
              local_40c = local_40c | 0x200;
            }
            goto LAB_00fee9e2;
          }
          piVar5 = *(int **)param_4;
          local_424 = param_4 + 2;
          iVar7 = FUN_00fddcb6();
          if (iVar7 == 0) {
            piVar5 = __errno();
            *piVar5 = 0x16;
            FUN_00fe56c2();
            goto LAB_00fee435;
          }
          if ((local_40c & 0x20) == 0) {
            *piVar5 = local_41c;
          }
          else {
            *(undefined2 *)piVar5 = (undefined2)local_41c;
          }
          local_44c = 1;
        }
        if (local_440 != (wchar_t *)0x0) {
          _free(local_440);
          local_440 = (wchar_t *)0x0;
        }
      }
      iVar7 = local_464;
      param_2 = local_444;
      param_4 = local_424;
      uVar1 = *local_444;
    }
    if (local_450 != '\0') {
      *(uint *)(local_454 + 0x70) = *(uint *)(local_454 + 0x70) & 0xfffffffd;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FEEF6D  write_char  size=47  [run]
/* Library Function - Single Match
    _write_char
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl write_char(wchar_t param_1)

{
  wint_t wVar1;
  FILE *in_EAX;
  int *unaff_ESI;
  
  if (((in_EAX->_flag & 0x40) == 0) || (in_EAX->_base != (char *)0x0)) {
    wVar1 = __fputwc_nolock(param_1,in_EAX);
    if (wVar1 == 0xffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}

// 00FEEF9C  write_multi_char  size=39  [run]
/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char(param_1);
  } while (*in_EAX != -1);
  return;
}

// 00FEEFC3  FUN_00feefc3  size=103  [run]
void FUN_00feefc3(undefined2 *param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int unaff_EBX;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  if (((*(byte *)(unaff_EBX + 0xc) & 0x40) == 0) || (*(int *)(unaff_EBX + 8) != 0)) {
    *unaff_EDI = 0;
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        write_char(*param_1);
        param_1 = param_1 + 1;
        if (*in_EAX == -1) {
          if (*unaff_EDI != 0x2a) break;
          write_char(0x3f);
        }
      } while (0 < param_2);
      if (*unaff_EDI != 0) {
        return;
      }
    }
    *unaff_EDI = iVar1;
  }
  else {
    *in_EAX = *in_EAX + param_2;
  }
  return;
}

// 00FEF02A  FUN_00fef02a  size=2973  [run]
void FUN_00fef02a(int param_1,ushort *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  ushort uVar1;
  wchar_t wVar2;
  short *psVar3;
  short sVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  int extraout_ECX;
  uint uVar9;
  size_t sVar10;
  wchar_t *pwVar11;
  ushort *puVar12;
  bool bVar13;
  longlong lVar14;
  uint *puVar15;
  wchar_t *pwVar16;
  undefined4 uVar17;
  localeinfo_struct *plVar18;
  uint local_474;
  uint local_470;
  undefined4 local_46c;
  int *local_468;
  ushort *local_464;
  uint local_460;
  wchar_t *local_45c;
  int local_458;
  int local_454;
  localeinfo_struct local_450;
  int local_448;
  char local_444;
  uint local_440;
  char local_43c [4];
  undefined2 local_438;
  short local_436;
  int local_434;
  int local_430;
  uint local_42c;
  int local_428;
  uint local_424;
  wchar_t *local_420;
  int local_41c;
  size_t local_418;
  wchar_t *local_414;
  uint local_410;
  uint local_40c;
  wchar_t local_408 [255];
  undefined2 local_209;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_430 = param_1;
  local_420 = param_4;
  local_458 = 0;
  local_40c = 0;
  local_42c = 0;
  local_410 = 0;
  local_428 = 0;
  local_454 = 0;
  local_434 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_450,param_3);
  local_468 = __errno();
  if ((param_1 == 0) || (param_2 == (ushort *)0x0)) {
LAB_00fef0a0:
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00fe56c2();
    if (local_444 != '\0') {
      *(uint *)(local_448 + 0x70) = *(uint *)(local_448 + 0x70) & 0xfffffffd;
    }
  }
  else {
    local_424 = (uint)*param_2;
    local_41c = 0;
    local_418 = 0;
    local_440 = 0;
    local_45c = (wchar_t *)0x0;
    if (*param_2 != 0) {
      do {
        puVar12 = param_2 + 1;
        local_464 = puVar12;
        if (local_41c < 0) break;
        sVar4 = (short)local_424;
        if ((ushort)(sVar4 - 0x20U) < 0x59) {
          uVar6 = (byte)(&DAT_016f5c40)[local_424] & 0xf;
        }
        else {
          uVar6 = 0;
        }
        local_440 = (uint)((byte)(&DAT_016f5c60)[local_440 + uVar6 * 9] >> 4);
        if (local_440 == 8) goto LAB_00fef0a0;
        pwVar11 = local_420;
        switch(local_440) {
        case 0:
switchD_00fef15a_caseD_0:
          local_434 = 1;
          write_char(local_424);
          pwVar11 = param_4;
          break;
        case 1:
          local_410 = 0xffffffff;
          local_46c = 0;
          local_454 = 0;
          local_42c = 0;
          local_428 = 0;
          local_40c = 0;
          local_434 = 0;
          pwVar11 = param_4;
          break;
        case 2:
          if (local_424 == 0x20) {
            local_40c = local_40c | 2;
            pwVar11 = param_4;
          }
          else if (local_424 == 0x23) {
            local_40c = local_40c | 0x80;
            pwVar11 = param_4;
          }
          else if (local_424 == 0x2b) {
            local_40c = local_40c | 1;
            pwVar11 = param_4;
          }
          else if (local_424 == 0x2d) {
            local_40c = local_40c | 4;
            pwVar11 = param_4;
          }
          else if (local_424 == 0x30) {
            local_40c = local_40c | 8;
            pwVar11 = param_4;
          }
          break;
        case 3:
          if (sVar4 == 0x2a) {
            local_42c = *(uint *)param_4;
            local_420 = param_4 + 2;
            pwVar11 = local_420;
            if ((int)local_42c < 0) {
              local_40c = local_40c | 4;
              local_42c = -local_42c;
            }
          }
          else {
            local_42c = local_42c * 10 + -0x30 + local_424;
            pwVar11 = param_4;
          }
          break;
        case 4:
          local_410 = 0;
          pwVar11 = param_4;
          break;
        case 5:
          if (sVar4 == 0x2a) {
            local_410 = *(uint *)param_4;
            local_420 = param_4 + 2;
            pwVar11 = local_420;
            if ((int)local_410 < 0) {
              local_410 = 0xffffffff;
            }
          }
          else {
            local_410 = local_410 * 10 + -0x30 + local_424;
            pwVar11 = param_4;
          }
          break;
        case 6:
          if (local_424 == 0x49) {
            uVar1 = *puVar12;
            if ((uVar1 == 0x36) && (param_2[2] == 0x34)) {
              local_40c = local_40c | 0x8000;
              pwVar11 = param_4;
              puVar12 = param_2 + 3;
            }
            else if ((uVar1 == 0x33) && (param_2[2] == 0x32)) {
              local_40c = local_40c & 0xffff7fff;
              pwVar11 = param_4;
              puVar12 = param_2 + 3;
            }
            else {
              pwVar11 = param_4;
              if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                  ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
                local_440 = 0;
                goto switchD_00fef15a_caseD_0;
              }
            }
          }
          else if (local_424 == 0x68) {
            local_40c = local_40c | 0x20;
            pwVar11 = param_4;
          }
          else if (local_424 == 0x6c) {
            if (*puVar12 == 0x6c) {
              local_40c = local_40c | 0x1000;
              pwVar11 = param_4;
              puVar12 = param_2 + 2;
            }
            else {
              local_40c = local_40c | 0x10;
              pwVar11 = param_4;
            }
          }
          else {
            pwVar11 = param_4;
            if (local_424 == 0x77) {
              local_40c = local_40c | 0x800;
            }
          }
          break;
        case 7:
          if (local_424 < 0x65) {
            if (local_424 == 100) {
LAB_00fef654:
              local_40c = local_40c | 0x40;
LAB_00fef65b:
              local_424 = 10;
LAB_00fef665:
              if (((local_40c & 0x8000) == 0) && ((local_40c & 0x1000) == 0)) {
                local_420 = param_4 + 2;
                if ((local_40c & 0x20) == 0) {
                  uVar6 = *(uint *)param_4;
                  if ((local_40c & 0x40) == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = (int)uVar6 >> 0x1f;
                  }
                }
                else {
                  if ((local_40c & 0x40) == 0) {
                    uVar6 = (uint)(ushort)*param_4;
                  }
                  else {
                    uVar6 = (uint)*param_4;
                  }
                  uVar9 = (int)uVar6 >> 0x1f;
                }
              }
              else {
                local_420 = param_4 + 4;
                uVar6 = *(uint *)param_4;
                uVar9 = *(uint *)(param_4 + 2);
              }
              if ((((local_40c & 0x40) != 0) && ((int)uVar9 < 1)) && ((int)uVar9 < 0)) {
                bVar13 = uVar6 != 0;
                uVar6 = -uVar6;
                uVar9 = -(uVar9 + bVar13);
                local_40c = local_40c | 0x100;
              }
              if ((local_40c & 0x9000) == 0) {
                uVar9 = 0;
              }
              lVar14 = CONCAT44(uVar9,uVar6);
              if ((int)local_410 < 0) {
                local_410 = 1;
              }
              else {
                local_40c = local_40c & 0xfffffff7;
                if (0x200 < (int)local_410) {
                  local_410 = 0x200;
                }
              }
              if (uVar6 == 0 && uVar9 == 0) {
                local_428 = 0;
              }
              pwVar11 = &local_209;
              while( true ) {
                uVar6 = local_410 - 1;
                if (((int)local_410 < 1) && (lVar14 == 0)) break;
                local_410 = uVar6;
                lVar14 = __aulldvrm(lVar14,local_424,(int)local_424 >> 0x1f);
                iVar7 = extraout_ECX + 0x30;
                if (0x39 < iVar7) {
                  iVar7 = iVar7 + local_458;
                }
                *(byte *)pwVar11 = (byte)iVar7;
                pwVar11 = (wchar_t *)((int)pwVar11 + -1);
              }
              local_418 = (int)&local_209 + -(int)pwVar11;
              local_414 = (wchar_t *)((int)pwVar11 + 1);
              local_410 = uVar6;
              if (((local_40c & 0x200) != 0) && ((local_418 == 0 || (*(byte *)local_414 != 0x30))))
              {
                local_418 = (int)&local_209 + -(int)pwVar11 + 1;
                *(byte *)pwVar11 = 0x30;
                local_414 = pwVar11;
              }
            }
            else if (local_424 < 0x54) {
              if (local_424 == 0x53) {
                if ((local_40c & 0x830) == 0) {
                  local_40c = local_40c | 0x20;
                }
                goto LAB_00fef432;
              }
              if (local_424 != 0x41) {
                if (local_424 == 0x43) {
                  if ((local_40c & 0x830) == 0) {
                    local_40c = local_40c | 0x20;
                  }
LAB_00fef4dc:
                  wVar2 = *param_4;
                  local_460 = (uint)(ushort)wVar2;
                  local_420 = param_4 + 2;
                  local_434 = 1;
                  if ((local_40c & 0x20) == 0) {
                    local_408[0] = wVar2;
                  }
                  else {
                    local_43c[0] = (char)wVar2;
                    local_43c[1] = 0;
                    iVar7 = __mbtowc_l(local_408,local_43c,
                                       (size_t)(local_450.locinfo)->locale_name[3],&local_450);
                    if (iVar7 < 0) {
                      local_454 = 1;
                    }
                  }
                  local_418 = 1;
                  local_414 = local_408;
                  goto LAB_00fef996;
                }
                if ((local_424 != 0x45) && (local_424 != 0x47)) goto LAB_00fef996;
              }
              local_424 = local_424 + 0x20;
              local_46c = 1;
LAB_00fef3c8:
              local_40c = local_40c | 0x40;
              local_418 = 0x200;
              pwVar11 = local_408;
              sVar10 = local_418;
              pwVar16 = local_408;
              if ((int)local_410 < 0) {
                local_410 = 6;
              }
              else if (local_410 == 0) {
                if ((short)local_424 == 0x67) {
                  local_410 = 1;
                }
              }
              else {
                if (0x200 < (int)local_410) {
                  local_410 = 0x200;
                }
                if (0xa3 < (int)local_410) {
                  sVar10 = local_410 + 0x15d;
                  local_414 = local_408;
                  local_45c = __malloc_crt(sVar10);
                  pwVar11 = local_45c;
                  pwVar16 = local_45c;
                  if (local_45c == (wchar_t *)0x0) {
                    local_410 = 0xa3;
                    pwVar11 = local_408;
                    sVar10 = local_418;
                    pwVar16 = local_414;
                  }
                }
              }
              local_414 = pwVar16;
              local_418 = sVar10;
              local_474 = *(uint *)param_4;
              local_420 = param_4 + 4;
              local_470 = *(uint *)(param_4 + 2);
              plVar18 = &local_450;
              iVar7 = (int)(char)local_424;
              puVar15 = &local_474;
              pwVar16 = pwVar11;
              sVar10 = local_418;
              uVar6 = local_410;
              uVar17 = local_46c;
              pcVar8 = DecodePointer(PTR_LAB_018e8a38);
              (*pcVar8)(puVar15,pwVar16,sVar10,iVar7,uVar6,uVar17,plVar18);
              uVar6 = local_40c & 0x80;
              if ((uVar6 != 0) && (local_410 == 0)) {
                plVar18 = &local_450;
                pwVar16 = pwVar11;
                pcVar8 = DecodePointer(PTR_LAB_018e8a44);
                (*pcVar8)(pwVar16,plVar18);
              }
              if (((short)local_424 == 0x67) && (uVar6 == 0)) {
                plVar18 = &local_450;
                pwVar16 = pwVar11;
                pcVar8 = DecodePointer(PTR_LAB_018e8a40);
                (*pcVar8)(pwVar16,plVar18);
              }
              if ((byte)*pwVar11 == 0x2d) {
                local_40c = local_40c | 0x100;
                pwVar11 = (wchar_t *)((int)pwVar11 + 1);
                local_414 = pwVar11;
              }
LAB_00fef5b5:
              local_418 = _strlen((char *)pwVar11);
            }
            else {
              if (local_424 == 0x58) goto LAB_00fef7a2;
              if (local_424 == 0x5a) {
                psVar3 = *(short **)param_4;
                local_420 = param_4 + 2;
                if ((psVar3 == (short *)0x0) ||
                   (local_414 = *(wchar_t **)(psVar3 + 2), local_414 == (wchar_t *)0x0)) {
                  local_414 = (wchar_t *)PTR_DAT_018e8a48;
                  pwVar11 = (wchar_t *)PTR_DAT_018e8a48;
                  goto LAB_00fef5b5;
                }
                local_418 = (size_t)*psVar3;
                if ((local_40c & 0x800) != 0) {
                  iVar7 = local_418 - ((int)local_418 >> 0x1f);
                  goto LAB_00fef98e;
                }
                local_434 = 0;
              }
              else {
                if (local_424 == 0x61) goto LAB_00fef3c8;
                if (local_424 == 99) goto LAB_00fef4dc;
              }
            }
LAB_00fef996:
            if (local_454 == 0) {
              if ((local_40c & 0x40) != 0) {
                if ((local_40c & 0x100) == 0) {
                  if ((local_40c & 1) == 0) {
                    if ((local_40c & 2) == 0) goto LAB_00fef9d8;
                    local_438 = 0x20;
                  }
                  else {
                    local_438 = 0x2b;
                  }
                }
                else {
                  local_438 = 0x2d;
                }
                local_428 = 1;
              }
LAB_00fef9d8:
              uVar6 = (local_42c - local_418) - local_428;
              local_424 = uVar6;
              if ((local_40c & 0xc) == 0) {
                do {
                  if ((int)uVar6 < 1) break;
                  uVar6 = uVar6 - 1;
                  write_char(0x20);
                } while (local_41c != -1);
              }
              FUN_00feefc3(&local_438,local_428);
              if (((local_40c & 8) != 0) && (uVar6 = local_424, (local_40c & 4) == 0)) {
                do {
                  if ((int)uVar6 < 1) break;
                  write_char(0x30);
                  uVar6 = uVar6 - 1;
                } while (local_41c != -1);
              }
              if ((local_434 == 0) && (sVar10 = local_418, pwVar11 = local_414, 0 < (int)local_418))
              {
                do {
                  sVar10 = sVar10 - 1;
                  iVar7 = __mbtowc_l((wchar_t *)&local_460,(char *)pwVar11,
                                     (size_t)(local_450.locinfo)->locale_name[3],&local_450);
                  if (iVar7 < 1) {
                    local_41c = -1;
                    break;
                  }
                  write_char(local_460);
                  pwVar11 = (wchar_t *)((int)pwVar11 + iVar7);
                } while (0 < (int)sVar10);
              }
              else {
                FUN_00feefc3(local_414,local_418);
              }
              if ((-1 < local_41c) && (uVar6 = local_424, (local_40c & 4) != 0)) {
                do {
                  if ((int)uVar6 < 1) break;
                  write_char(0x20);
                  uVar6 = uVar6 - 1;
                } while (local_41c != -1);
              }
            }
          }
          else {
            if (0x70 < local_424) {
              if (local_424 == 0x73) {
LAB_00fef432:
                uVar6 = local_410;
                if (local_410 == 0xffffffff) {
                  uVar6 = 0x7fffffff;
                }
                local_420 = param_4 + 2;
                local_414 = *(wchar_t **)param_4;
                if ((local_40c & 0x20) == 0) {
                  pwVar11 = local_414;
                  if (local_414 == (wchar_t *)0x0) {
                    local_414 = (wchar_t *)PTR_u__null__018e8a4c;
                    pwVar11 = (wchar_t *)PTR_u__null__018e8a4c;
                  }
                  for (; (uVar6 != 0 && (uVar6 = uVar6 - 1, *pwVar11 != L'\0'));
                      pwVar11 = pwVar11 + 1) {
                  }
                  iVar7 = (int)pwVar11 - (int)local_414;
LAB_00fef98e:
                  local_420 = param_4 + 2;
                  local_434 = 1;
                  local_418 = iVar7 >> 1;
                }
                else {
                  if (local_414 == (wchar_t *)0x0) {
                    local_414 = (wchar_t *)PTR_DAT_018e8a48;
                  }
                  local_418 = 0;
                  pwVar11 = local_414;
                  if (0 < (int)uVar6) {
                    do {
                      if ((byte)*pwVar11 == 0) break;
                      iVar7 = __isleadbyte_l((uint)(byte)*pwVar11,&local_450);
                      if (iVar7 != 0) {
                        pwVar11 = (wchar_t *)((int)pwVar11 + 1);
                      }
                      pwVar11 = (wchar_t *)((int)pwVar11 + 1);
                      local_418 = local_418 + 1;
                    } while ((int)local_418 < (int)uVar6);
                  }
                }
                goto LAB_00fef996;
              }
              if (local_424 == 0x75) goto LAB_00fef65b;
              if (local_424 != 0x78) goto LAB_00fef996;
              local_458 = 0x27;
LAB_00fef7d2:
              local_424 = 0x10;
              if ((local_40c & 0x80) != 0) {
                local_438 = 0x30;
                local_436 = (short)local_458 + 0x51;
                local_428 = 2;
              }
              goto LAB_00fef665;
            }
            if (local_424 == 0x70) {
              local_410 = 8;
LAB_00fef7a2:
              local_458 = 7;
              goto LAB_00fef7d2;
            }
            if (local_424 < 0x65) goto LAB_00fef996;
            if (local_424 < 0x68) goto LAB_00fef3c8;
            if (local_424 == 0x69) goto LAB_00fef654;
            if (local_424 != 0x6e) {
              if (local_424 != 0x6f) goto LAB_00fef996;
              local_424 = 8;
              if ((local_40c & 0x80) != 0) {
                local_40c = local_40c | 0x200;
              }
              goto LAB_00fef665;
            }
            local_420 = param_4 + 2;
            piVar5 = *(int **)param_4;
            iVar7 = FUN_00fddcb6();
            if (iVar7 == 0) goto LAB_00fef0a0;
            if ((local_40c & 0x20) == 0) {
              *piVar5 = local_41c;
            }
            else {
              *(undefined2 *)piVar5 = (undefined2)local_41c;
            }
            local_454 = 1;
          }
          pwVar11 = local_420;
          puVar12 = local_464;
          if (local_45c != (wchar_t *)0x0) {
            _free(local_45c);
            local_45c = (wchar_t *)0x0;
            pwVar11 = local_420;
            puVar12 = local_464;
          }
        }
        local_424 = (uint)*puVar12;
        param_4 = pwVar11;
        param_2 = puVar12;
      } while (*puVar12 != 0);
      if ((local_440 != 0) && (local_440 != 7)) goto LAB_00fef0a0;
    }
    if (local_444 != '\0') {
      *(uint *)(local_448 + 0x70) = *(uint *)(local_448 + 0x70) & 0xfffffffd;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FEFBEA  __validate_param_reuseW  size=331  [run]
/* Library Function - Single Match
    __validate_param_reuseW
   
   Library: Visual Studio 2010 Release */

bool __validate_param_reuseW(int *param_1,int param_2,short param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = (short)param_1[2];
  if ((sVar1 == 0x70) || (param_3 == 0x70)) {
    return sVar1 == param_3;
  }
  if ((sVar1 == 0x73) || (sVar1 == 0x53)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if ((param_3 == 0x73) || (param_3 == 0x53)) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar3 != 0) {
    if (iVar3 != iVar2) {
      return false;
    }
    if (((~((uint)param_1[3] >> 5) ^ ~(param_4 >> 5)) & 1) != 0) {
      return false;
    }
    return true;
  }
  if (iVar2 != 0) {
    return false;
  }
  if (sVar1 == 100) {
LAB_00fefcab:
    iVar3 = 1;
  }
  else {
    if ((((((sVar1 != 0x69) && (sVar1 != 0x6f)) && (sVar1 != 0x75)) &&
         (((sVar1 != 0x78 && (sVar1 != 0x58)) &&
          ((param_3 != 100 && ((param_3 != 0x69 && (param_3 != 0x6f)))))))) && (param_3 != 0x75)) &&
       ((param_3 != 0x78 && (param_3 != 0x58)))) goto LAB_00fefcf5;
    if ((sVar1 == 100) ||
       ((((sVar1 == 0x69 || (sVar1 == 0x6f)) || (sVar1 == 0x75)) ||
        ((sVar1 == 0x78 || (sVar1 == 0x58)))))) goto LAB_00fefcab;
    iVar3 = 0;
  }
  if (((param_3 == 100) || (param_3 == 0x69)) ||
     ((param_3 == 0x6f || (((param_3 == 0x75 || (param_3 == 0x78)) || (param_3 == 0x58)))))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (((iVar3 != iVar2) || (((param_1[3] ^ param_4) & 0x10000) != 0)) ||
     (((param_1[3] ^ param_4) & 0x20) != 0)) {
    return false;
  }
LAB_00fefcf5:
  return *param_1 == param_2;
}

// 00FEFD35  write_char  size=47  [run]
/* Library Function - Single Match
    _write_char
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl write_char(wchar_t param_1)

{
  wint_t wVar1;
  FILE *in_EAX;
  int *unaff_ESI;
  
  if (((in_EAX->_flag & 0x40) == 0) || (in_EAX->_base != (char *)0x0)) {
    wVar1 = __fputwc_nolock(param_1,in_EAX);
    if (wVar1 == 0xffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}

// 00FEFD64  write_multi_char  size=39  [run]
/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char(param_1);
  } while (*in_EAX != -1);
  return;
}

// 00FEFD8B  FUN_00fefd8b  size=103  [run]
void FUN_00fefd8b(undefined2 *param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int unaff_EBX;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  if (((*(byte *)(unaff_EBX + 0xc) & 0x40) == 0) || (*(int *)(unaff_EBX + 8) != 0)) {
    *unaff_EDI = 0;
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        write_char(*param_1);
        param_1 = param_1 + 1;
        if (*in_EAX == -1) {
          if (*unaff_EDI != 0x2a) break;
          write_char(0x3f);
        }
      } while (0 < param_2);
      if (*unaff_EDI != 0) {
        return;
      }
    }
    *unaff_EDI = iVar1;
  }
  else {
    *in_EAX = *in_EAX + param_2;
  }
  return;
}

// 00FEFDF2  FUN_00fefdf2  size=4788  [run]
void FUN_00fefdf2(int param_1,wchar_t *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  byte bVar1;
  wchar_t wVar2;
  int iVar3;
  short sVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  short *psVar9;
  code *pcVar10;
  int extraout_ECX;
  uint uVar11;
  wchar_t *pwVar12;
  size_t sVar13;
  int iVar14;
  bool bVar15;
  longlong lVar16;
  uint *puVar17;
  wchar_t *pwVar18;
  undefined4 uVar19;
  localeinfo_struct *plVar20;
  uint local_ad0;
  uint local_acc;
  int *local_ac8;
  undefined4 local_ac4;
  uint local_ac0;
  int local_abc;
  wchar_t *local_ab8;
  int local_ab4;
  uint local_ab0;
  undefined2 local_aac;
  short local_aaa;
  char local_aa8 [4];
  int local_aa4;
  int local_aa0;
  int local_a9c;
  wchar_t *local_a98;
  uint local_a94;
  size_t local_a8c;
  uint local_a88;
  size_t local_a84;
  wchar_t *local_a80;
  uint local_a7c;
  int local_a78;
  localeinfo_struct local_a74;
  int local_a6c;
  char local_a68;
  wchar_t *local_a64;
  int local_a60;
  uint local_a5c;
  int local_a58;
  uint local_a54;
  wchar_t *local_a50;
  uint local_a4c;
  wchar_t local_a48 [255];
  undefined2 local_849;
  int local_648 [2];
  uint auStack_640 [398];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_aa4 = param_1;
  local_a50 = param_4;
  local_ab4 = 0;
  local_a4c = 0;
  local_a9c = 0;
  local_abc = 0;
  local_aa0 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_a74,param_3);
  local_a58 = -1;
  local_a98 = (wchar_t *)0x0;
  local_ac8 = __errno();
  if ((param_1 != 0) && (param_2 != (wchar_t *)0x0)) {
    local_a78 = 0;
    local_a60 = 0;
LAB_00fefeaa:
    if ((local_a60 != 1) || (local_a58 != 0)) {
      uVar11 = (uint)(ushort)*param_2;
      local_a94 = 0xffffffff;
      local_a7c = 0xffffffff;
      local_a58 = -1;
      local_a8c = 0;
      local_ab0 = 0;
      local_ab8 = (wchar_t *)0x0;
      local_a88 = 0;
      local_a54 = 0;
      local_a80 = param_2;
      local_a5c = uVar11;
      if (*param_2 != L'\0') {
LAB_00feff12:
        pwVar12 = local_a80 + 1;
        local_a80 = pwVar12;
        local_a5c = uVar11;
        if (local_a78 < 0) goto LAB_00ff0fd5;
        sVar4 = (short)uVar11;
        if ((ushort)(sVar4 - 0x20U) < 0x59) {
          uVar7 = (byte)(&DAT_016f5c40)[uVar11] & 0xf;
        }
        else {
          uVar7 = 0;
        }
        bVar1 = (&DAT_016f5c60)[local_ab0 + uVar7 * 9];
        local_ab0 = (uint)(bVar1 >> 4);
        if (local_ab0 == 1) {
          if (*pwVar12 != L'%') {
            if (local_a58 == -1) {
              lVar8 = FID_conflict__wcstol(pwVar12,&local_a98,10);
              if ((lVar8 < 1) || (*local_a98 != L'$')) {
                local_a58 = 0;
                goto LAB_00feffd1;
              }
              if (local_a60 == 0) {
                _memset(local_648,0,0x640);
              }
              local_a58 = 1;
            }
            else {
LAB_00feffd1:
              if (local_a58 != 1) goto LAB_00ff0039;
            }
            lVar8 = FID_conflict__wcstol(pwVar12,&local_a98,10);
            local_a7c = lVar8 - 1;
            pwVar12 = local_a98 + 1;
            local_a80 = pwVar12;
            if (local_a60 == 0) {
              if ((((int)local_a7c < 0) || (*local_a98 != L'$')) || (99 < (int)local_a7c))
              goto LAB_00fefe69;
              if ((int)local_a94 < (int)local_a7c) {
                local_a94 = local_a7c;
              }
            }
          }
LAB_00ff0039:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(bVar1 >> 4) {
          case 0:
            if (((local_a60 != 0) || (local_a58 != 1)) && ((local_a60 != 1 || (local_a58 != -1)))) {
LAB_00ff0397:
              local_aa0 = 1;
              write_char(uVar11);
            }
            break;
          case 1:
            local_a54 = 0xffffffff;
            local_ac4 = 0;
            local_abc = 0;
            local_a88 = 0;
            local_a9c = 0;
            local_a4c = 0;
            local_aa0 = 0;
            break;
          case 2:
            if (uVar11 == 0x20) {
              local_a4c = local_a4c | 2;
            }
            else if (uVar11 == 0x23) {
              local_a4c = local_a4c | 0x80;
            }
            else if (uVar11 == 0x2b) {
              local_a4c = local_a4c | 1;
            }
            else if (uVar11 == 0x2d) {
              local_a4c = local_a4c | 4;
            }
            else if (uVar11 == 0x30) {
              local_a4c = local_a4c | 8;
            }
            break;
          case 3:
            if (sVar4 == 0x2a) {
              if (local_a58 == 0) {
                local_a88 = *(uint *)local_a50;
                local_a50 = local_a50 + 2;
              }
              else {
                lVar8 = FID_conflict__wcstol(pwVar12,&local_a98,10);
                uVar11 = lVar8 - 1;
                local_a80 = local_a98 + 1;
                if (local_a60 == 0) {
LAB_00ff0171:
                  if ((((int)uVar11 < 0) || (*local_a98 != L'$')) || (99 < (int)local_a7c))
                  goto LAB_00fefe69;
                  if ((int)local_a94 < (int)uVar11) {
                    local_a94 = uVar11;
                  }
                  piVar6 = local_648 + uVar11 * 4;
                  if (*piVar6 != 0) {
                    uVar11 = 0x2a;
                    uVar19 = 1;
LAB_00ff07a7:
                    iVar14 = __validate_param_reuseW(piVar6,uVar19,uVar11,local_a4c);
                    if (iVar14 != 0) break;
                    goto LAB_00fefe69;
                  }
                  *piVar6 = 1;
                  *(undefined2 *)(auStack_640 + uVar11 * 4) = 0x2a;
LAB_00ff029b:
                  auStack_640[uVar11 * 4 + 1] = local_a4c;
                  break;
                }
                local_a88 = *(uint *)auStack_640[uVar11 * 4 + -1];
              }
              if ((int)local_a88 < 0) {
                local_a4c = local_a4c | 4;
                local_a88 = -local_a88;
              }
            }
            else {
              local_a88 = local_a88 * 10 + -0x30 + uVar11;
            }
            break;
          case 4:
            local_a54 = 0;
            break;
          case 5:
            if (sVar4 == 0x2a) {
              if (local_a58 == 0) {
                local_a54 = *(uint *)local_a50;
                local_a50 = local_a50 + 2;
              }
              else {
                lVar8 = FID_conflict__wcstol(pwVar12,&local_a98,10);
                uVar11 = lVar8 - 1;
                local_a80 = local_a98 + 1;
                if (local_a60 == 0) goto LAB_00ff0171;
                local_a54 = *(uint *)auStack_640[uVar11 * 4 + -1];
              }
              if ((int)local_a54 < 0) {
                local_a54 = 0xffffffff;
              }
            }
            else {
              local_a54 = local_a54 * 10 + -0x30 + uVar11;
            }
            break;
          case 6:
            if (uVar11 == 0x49) {
              wVar2 = *pwVar12;
              if ((wVar2 == L'6') && (pwVar12[1] == L'4')) {
                local_a80 = pwVar12 + 2;
                local_a4c = local_a4c | 0x8000;
              }
              else if ((wVar2 == L'3') && (pwVar12[1] == L'2')) {
                local_a80 = pwVar12 + 2;
                local_a4c = local_a4c & 0xffff7fff;
              }
              else {
                if (((((wVar2 != L'd') && (wVar2 != L'i')) && (wVar2 != L'o')) &&
                    ((wVar2 != L'u' && (wVar2 != L'x')))) && (wVar2 != L'X')) {
                  local_ab0 = 0;
                  goto LAB_00ff0397;
                }
                local_a4c = local_a4c | 0x10000;
              }
            }
            else if (uVar11 == 0x68) {
              local_a4c = local_a4c | 0x20;
            }
            else if (uVar11 == 0x6c) {
              if (*pwVar12 == L'l') {
                local_a80 = pwVar12 + 1;
                local_a4c = local_a4c | 0x1000;
              }
              else {
                local_a4c = local_a4c | 0x10;
              }
            }
            else if (uVar11 == 0x77) {
              local_a4c = local_a4c | 0x800;
            }
            break;
          case 7:
            if (uVar11 < 0x65) {
              if (uVar11 == 100) {
LAB_00ff0754:
                local_a4c = local_a4c | 0x40;
LAB_00ff075b:
                local_a84 = 10;
LAB_00ff076b:
                if ((local_a4c & 0x8000) == 0) {
                  if ((local_a4c & 0x1000) != 0) {
                    if (local_a58 == 0) goto LAB_00ff0784;
                    if (local_a7c < 100) {
                      if (local_a60 != 0) goto LAB_00ff0a46;
                      piVar6 = local_648 + local_a7c * 4;
                      if (*piVar6 == 0) {
                        *piVar6 = 4;
                        goto LAB_00ff0c04;
                      }
                      uVar19 = 4;
                      uVar11 = local_a5c;
                      goto LAB_00ff0b4d;
                    }
                    goto LAB_00fefe69;
                  }
                  if ((local_a4c & 0x20) == 0) {
                    if ((local_a4c & 0x40) == 0) {
                      if (local_a58 == 0) {
                        uVar11 = *(uint *)local_a50;
                        local_a50 = local_a50 + 2;
                      }
                      else {
                        if (99 < local_a7c) goto LAB_00fefe69;
                        if (local_a60 == 0) goto LAB_00ff0b30;
                        uVar11 = *(uint *)auStack_640[local_a7c * 4 + -1];
                      }
                      uVar7 = 0;
                      goto LAB_00ff0bb7;
                    }
                    if (local_a58 == 0) {
                      uVar11 = *(uint *)local_a50;
                      local_a50 = local_a50 + 2;
                    }
                    else {
                      if (99 < local_a7c) goto LAB_00fefe69;
                      if (local_a60 == 0) goto LAB_00ff0b30;
                      uVar11 = *(uint *)auStack_640[local_a7c * 4 + -1];
                    }
                  }
                  else if ((local_a4c & 0x40) == 0) {
                    if (local_a58 == 0) {
                      uVar11 = (uint)(ushort)*local_a50;
                      local_a50 = local_a50 + 2;
                    }
                    else {
                      if (99 < local_a7c) goto LAB_00fefe69;
                      if (local_a60 == 0) goto LAB_00ff0b30;
                      uVar11 = (uint)*(ushort *)auStack_640[local_a7c * 4 + -1];
                    }
                  }
                  else if (local_a58 == 0) {
                    uVar11 = (uint)*local_a50;
                    local_a50 = local_a50 + 2;
                  }
                  else {
                    if (99 < local_a7c) goto LAB_00fefe69;
                    if (local_a60 == 0) {
LAB_00ff0b30:
                      piVar6 = local_648 + local_a7c * 4;
                      uVar11 = local_a5c;
                      if (*piVar6 == 0) {
                        *piVar6 = 1;
                        goto LAB_00ff0c04;
                      }
                      goto LAB_00ff0b4b;
                    }
                    uVar11 = (uint)*(short *)auStack_640[local_a7c * 4 + -1];
                  }
                  uVar7 = (int)uVar11 >> 0x1f;
                }
                else if (local_a58 == 0) {
LAB_00ff0784:
                  uVar11 = *(uint *)local_a50;
                  uVar7 = *(uint *)(local_a50 + 2);
                  local_a50 = local_a50 + 4;
                }
                else {
                  if (99 < local_a7c) goto LAB_00fefe69;
                  if (local_a60 == 0) {
                    piVar6 = local_648 + local_a7c * 4;
                    if (*piVar6 != 0) {
                      uVar19 = 3;
                      uVar11 = local_a5c;
                      goto LAB_00ff0b4d;
                    }
                    *piVar6 = 3;
LAB_00ff0c04:
                    *(short *)(auStack_640 + local_a7c * 4) = (short)local_a5c;
                    auStack_640[local_a7c * 4 + 1] = local_a4c;
                    goto LAB_00ff0dd6;
                  }
LAB_00ff0a46:
                  uVar11 = *(uint *)auStack_640[local_a7c * 4 + -1];
                  uVar7 = ((uint *)auStack_640[local_a7c * 4 + -1])[1];
                }
LAB_00ff0bb7:
                if ((((local_a4c & 0x40) != 0) && ((int)uVar7 < 1)) && ((int)uVar7 < 0)) {
                  bVar15 = uVar11 != 0;
                  uVar11 = -uVar11;
                  uVar7 = -(uVar7 + bVar15);
                  local_a4c = local_a4c | 0x100;
                }
                if ((local_a4c & 0x9000) == 0) {
                  uVar7 = 0;
                }
                lVar16 = CONCAT44(uVar7,uVar11);
                if ((int)local_a54 < 0) {
                  local_a54 = 1;
                }
                else {
                  local_a4c = local_a4c & 0xfffffff7;
                  if (0x200 < (int)local_a54) {
                    local_a54 = 0x200;
                  }
                }
                if (uVar11 == 0 && uVar7 == 0) {
                  local_a9c = 0;
                }
                pwVar12 = &local_849;
                while( true ) {
                  uVar5 = (ulonglong)lVar16 >> 0x20;
                  uVar11 = local_a54 - 1;
                  if (((int)local_a54 < 1) && (lVar16 == 0)) break;
                  local_a54 = uVar11;
                  lVar16 = __aulldvrm(lVar16,local_a84,(int)local_a84 >> 0x1f);
                  iVar14 = extraout_ECX + 0x30;
                  if (0x39 < iVar14) {
                    iVar14 = iVar14 + local_ab4;
                  }
                  *(byte *)pwVar12 = (byte)iVar14;
                  pwVar12 = (wchar_t *)((int)pwVar12 + -1);
                  local_a8c = (size_t)uVar5;
                }
                local_a8c = (int)&local_849 + -(int)pwVar12;
                local_a64 = (wchar_t *)((int)pwVar12 + 1);
                local_a54 = uVar11;
                if (((local_a4c & 0x200) != 0) && ((local_a8c == 0 || (*(byte *)local_a64 != 0x30)))
                   ) {
                  local_a8c = (int)&local_849 + -(int)pwVar12 + 1;
                  *(byte *)pwVar12 = 0x30;
                  local_a64 = pwVar12;
                }
              }
              else {
                if (0x53 < uVar11) {
                  if (uVar11 == 0x58) goto LAB_00ff094f;
                  if (uVar11 != 0x5a) {
                    if (uVar11 == 0x61) goto LAB_00ff0410;
                    if (uVar11 != 99) goto LAB_00ff0dd6;
LAB_00ff04de:
                    local_aa0 = 1;
                    if (local_a58 == 0) {
                      wVar2 = *local_a50;
                      local_a50 = local_a50 + 2;
LAB_00ff0549:
                      local_ac0 = (uint)(ushort)wVar2;
                      if ((local_a4c & 0x20) == 0) {
                        local_a48[0] = wVar2;
                      }
                      else {
                        local_aa8[0] = (char)wVar2;
                        local_aa8[1] = 0;
                        iVar14 = __mbtowc_l(local_a48,local_aa8,
                                            (size_t)(local_a74.locinfo)->locale_name[3],&local_a74);
                        if (iVar14 < 0) {
                          local_abc = 1;
                        }
                      }
                      local_a8c = 1;
                      local_a64 = local_a48;
                      goto LAB_00ff0dd6;
                    }
                    if (local_a7c < 100) {
                      if (local_a60 != 0) {
                        wVar2 = *(wchar_t *)auStack_640[local_a7c * 4 + -1];
                        goto LAB_00ff0549;
                      }
                      piVar6 = local_648 + local_a7c * 4;
                      if (*piVar6 == 0) {
                        *piVar6 = 1;
LAB_00ff0730:
                        *(short *)(auStack_640 + local_a7c * 4) = sVar4;
                        goto LAB_00ff0d0d;
                      }
LAB_00ff0b4b:
                      uVar19 = 1;
                      goto LAB_00ff0b4d;
                    }
                    goto LAB_00fefe69;
                  }
                  if (local_a58 == 0) {
                    psVar9 = *(short **)local_a50;
                    local_a50 = local_a50 + 2;
                  }
                  else {
                    if (99 < local_a7c) goto LAB_00fefe69;
                    if (local_a60 == 0) {
LAB_00ff05ed:
                      piVar6 = local_648 + local_a7c * 4;
                      if (*piVar6 == 0) {
                        *piVar6 = 2;
                        goto LAB_00ff0730;
                      }
                      goto LAB_00ff0608;
                    }
                    psVar9 = *(short **)auStack_640[local_a7c * 4 + -1];
                  }
                  if ((psVar9 == (short *)0x0) ||
                     (local_a64 = *(wchar_t **)(psVar9 + 2), local_a64 == (wchar_t *)0x0)) {
                    local_a64 = (wchar_t *)PTR_DAT_018e8a48;
                    pwVar12 = (wchar_t *)PTR_DAT_018e8a48;
                    goto LAB_00ff0664;
                  }
                  local_a8c = (size_t)*psVar9;
                  if ((local_a4c & 0x800) == 0) {
                    local_aa0 = 0;
                    goto LAB_00ff0dd6;
                  }
                  iVar14 = local_a8c - ((int)local_a8c >> 0x1f);
LAB_00ff0dce:
                  local_aa0 = 1;
                  local_a8c = iVar14 >> 1;
                  goto LAB_00ff0dd6;
                }
                if (uVar11 == 0x53) {
                  if ((local_a4c & 0x830) == 0) {
                    local_a4c = local_a4c | 0x20;
                  }
                  goto LAB_00ff0489;
                }
                if (uVar11 != 0x41) {
                  if (uVar11 == 0x43) {
                    if ((local_a4c & 0x830) == 0) {
                      local_a4c = local_a4c | 0x20;
                    }
                    goto LAB_00ff04de;
                  }
                  if ((uVar11 != 0x45) && (uVar11 != 0x47)) goto LAB_00ff0dd6;
                }
                uVar11 = uVar11 + 0x20;
                local_ac4 = 1;
                local_a5c = uVar11;
LAB_00ff0410:
                local_a4c = local_a4c | 0x40;
                if ((local_a58 == 1) && (local_a60 == 0)) {
                  if (local_a7c < 100) {
                    piVar6 = local_648 + local_a7c * 4;
                    if (*piVar6 == 0) {
                      *piVar6 = 7;
                      *(short *)(auStack_640 + local_a7c * 4) = (short)uVar11;
                      uVar11 = local_a7c;
                      goto LAB_00ff029b;
                    }
                    uVar19 = 7;
                    goto LAB_00ff07a7;
                  }
                  goto LAB_00fefe69;
                }
                local_a84 = 0x200;
                pwVar12 = local_a48;
                sVar13 = local_a84;
                pwVar18 = local_a48;
                if ((int)local_a54 < 0) {
                  local_a54 = 6;
                }
                else if (local_a54 == 0) {
                  if ((short)uVar11 == 0x67) {
                    local_a54 = 1;
                  }
                }
                else {
                  if (0x200 < (int)local_a54) {
                    local_a54 = 0x200;
                  }
                  uVar11 = local_a5c;
                  if (0xa3 < (int)local_a54) {
                    sVar13 = local_a54 + 0x15d;
                    local_a64 = local_a48;
                    local_ab8 = __malloc_crt(sVar13);
                    uVar11 = local_a5c;
                    pwVar12 = local_ab8;
                    pwVar18 = local_ab8;
                    if (local_ab8 == (wchar_t *)0x0) {
                      local_a54 = 0xa3;
                      pwVar12 = local_a48;
                      sVar13 = local_a84;
                      pwVar18 = local_a64;
                    }
                  }
                }
                local_a64 = pwVar18;
                local_a84 = sVar13;
                if (local_a58 == 0) {
                  local_ad0 = *(uint *)local_a50;
                  local_acc = *(uint *)(local_a50 + 2);
                  local_a50 = local_a50 + 4;
                }
                else {
                  if (99 < local_a7c) goto LAB_00fefe69;
                  local_ad0 = *(uint *)auStack_640[local_a7c * 4 + -1];
                  local_acc = ((uint *)auStack_640[local_a7c * 4 + -1])[1];
                }
                plVar20 = &local_a74;
                iVar14 = (int)(char)uVar11;
                puVar17 = &local_ad0;
                pwVar18 = pwVar12;
                sVar13 = local_a84;
                uVar11 = local_a54;
                uVar19 = local_ac4;
                pcVar10 = DecodePointer(PTR_LAB_018e8a38);
                (*pcVar10)(puVar17,pwVar18,sVar13,iVar14,uVar11,uVar19,plVar20);
                uVar11 = local_a4c & 0x80;
                if ((uVar11 != 0) && (local_a54 == 0)) {
                  plVar20 = &local_a74;
                  pwVar18 = pwVar12;
                  pcVar10 = DecodePointer(PTR_LAB_018e8a44);
                  (*pcVar10)(pwVar18,plVar20);
                }
                if (((short)local_a5c == 0x67) && (uVar11 == 0)) {
                  plVar20 = &local_a74;
                  pwVar18 = pwVar12;
                  pcVar10 = DecodePointer(PTR_LAB_018e8a40);
                  (*pcVar10)(pwVar18,plVar20);
                }
                if ((byte)*pwVar12 == 0x2d) {
                  local_a4c = local_a4c | 0x100;
                  pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                  local_a64 = pwVar12;
                }
LAB_00ff0664:
                local_a8c = _strlen((char *)pwVar12);
              }
            }
            else if (uVar11 < 0x71) {
              if (uVar11 == 0x70) {
                local_a54 = 8;
LAB_00ff094f:
                local_ab4 = 7;
LAB_00ff097f:
                local_a84 = 0x10;
                if ((local_a4c & 0x80) != 0) {
                  local_aac = 0x30;
                  local_aaa = (short)local_ab4 + 0x51;
                  local_a9c = 2;
                }
                goto LAB_00ff076b;
              }
              if (100 < uVar11) {
                if (uVar11 < 0x68) goto LAB_00ff0410;
                if (uVar11 == 0x69) goto LAB_00ff0754;
                if (uVar11 != 0x6e) {
                  if (uVar11 == 0x6f) {
                    local_a84 = 8;
                    if ((char)local_a4c < '\0') {
                      local_a4c = local_a4c | 0x200;
                    }
                    goto LAB_00ff076b;
                  }
                  goto LAB_00ff0dd6;
                }
                if (local_a58 == 0) {
                  piVar6 = *(int **)local_a50;
                  local_a50 = local_a50 + 2;
                }
                else {
                  if (99 < local_a7c) goto LAB_00fefe69;
                  if (local_a60 == 0) goto LAB_00ff05ed;
                  piVar6 = *(int **)auStack_640[local_a7c * 4 + -1];
                }
                iVar14 = FUN_00fddcb6();
                if (iVar14 == 0) goto LAB_00fefe69;
                if ((local_a4c & 0x20) == 0) {
                  *piVar6 = local_a78;
                }
                else {
                  *(undefined2 *)piVar6 = (undefined2)local_a78;
                }
                local_abc = 1;
              }
            }
            else {
              if (uVar11 != 0x73) {
                if (uVar11 == 0x75) goto LAB_00ff075b;
                if (uVar11 != 0x78) goto LAB_00ff0dd6;
                local_ab4 = 0x27;
                goto LAB_00ff097f;
              }
LAB_00ff0489:
              uVar11 = local_a54;
              if (local_a54 == 0xffffffff) {
                uVar11 = 0x7fffffff;
              }
              if (local_a58 == 0) {
                local_a64 = *(wchar_t **)local_a50;
                local_a50 = local_a50 + 2;
LAB_00ff0d3b:
                if ((local_a4c & 0x20) == 0) {
                  pwVar12 = local_a64;
                  if (local_a64 == (wchar_t *)0x0) {
                    local_a64 = (wchar_t *)PTR_u__null__018e8a4c;
                    pwVar12 = (wchar_t *)PTR_u__null__018e8a4c;
                  }
                  for (; (uVar11 != 0 && (uVar11 = uVar11 - 1, *pwVar12 != L'\0'));
                      pwVar12 = pwVar12 + 1) {
                  }
                  iVar14 = (int)pwVar12 - (int)local_a64;
                  goto LAB_00ff0dce;
                }
                if (local_a64 == (wchar_t *)0x0) {
                  local_a64 = (wchar_t *)PTR_DAT_018e8a48;
                }
                local_a8c = 0;
                pwVar12 = local_a64;
                if (0 < (int)uVar11) {
                  do {
                    if ((byte)*pwVar12 == 0) break;
                    iVar14 = __isleadbyte_l((uint)(byte)*pwVar12,&local_a74);
                    if (iVar14 != 0) {
                      pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                    }
                    pwVar12 = (wchar_t *)((int)pwVar12 + 1);
                    local_a8c = local_a8c + 1;
                  } while ((int)local_a8c < (int)uVar11);
                }
                goto LAB_00ff0dd6;
              }
              if (99 < local_a7c) goto LAB_00fefe69;
              if (local_a60 != 0) {
                local_a64 = *(wchar_t **)auStack_640[local_a7c * 4 + -1];
                goto LAB_00ff0d3b;
              }
              piVar6 = local_648 + local_a7c * 4;
              uVar11 = local_a5c;
              if (*piVar6 == 0) {
                *piVar6 = 2;
                *(short *)(auStack_640 + local_a7c * 4) = (short)local_a5c;
LAB_00ff0d0d:
                auStack_640[local_a7c * 4 + 1] = local_a4c;
                goto LAB_00ff0dd6;
              }
LAB_00ff0608:
              uVar19 = 2;
LAB_00ff0b4d:
              iVar14 = __validate_param_reuseW(piVar6,uVar19,uVar11,local_a4c);
              if (iVar14 == 0) goto LAB_00fefe69;
            }
LAB_00ff0dd6:
            if ((local_a58 != 1) || (local_a60 != 0)) {
              if (local_abc == 0) {
                if ((local_a4c & 0x40) != 0) {
                  if ((local_a4c & 0x100) == 0) {
                    if ((local_a4c & 1) == 0) {
                      if ((local_a4c & 2) == 0) goto LAB_00ff0e2e;
                      local_aac = 0x20;
                    }
                    else {
                      local_aac = 0x2b;
                    }
                  }
                  else {
                    local_aac = 0x2d;
                  }
                  local_a9c = 1;
                }
LAB_00ff0e2e:
                sVar13 = (local_a88 - local_a8c) - local_a9c;
                local_a84 = sVar13;
                if ((local_a4c & 0xc) == 0) {
                  do {
                    if ((int)sVar13 < 1) break;
                    sVar13 = sVar13 - 1;
                    write_char(0x20);
                  } while (local_a78 != -1);
                }
                FUN_00fefd8b(&local_aac,local_a9c);
                if (((local_a4c & 8) != 0) && (sVar13 = local_a84, (local_a4c & 4) == 0)) {
                  do {
                    if ((int)sVar13 < 1) break;
                    write_char(0x30);
                    sVar13 = sVar13 - 1;
                  } while (local_a78 != -1);
                }
                if ((local_aa0 == 0) &&
                   (sVar13 = local_a8c, pwVar12 = local_a64, 0 < (int)local_a8c)) {
                  do {
                    sVar13 = sVar13 - 1;
                    local_a5c = __mbtowc_l((wchar_t *)&local_ac0,(char *)pwVar12,
                                           (size_t)(local_a74.locinfo)->locale_name[3],&local_a74);
                    if ((int)local_a5c < 1) {
                      local_a78 = -1;
                      break;
                    }
                    write_char(local_ac0);
                    pwVar12 = (wchar_t *)((int)pwVar12 + local_a5c);
                  } while (0 < (int)sVar13);
                }
                else {
                  FUN_00fefd8b(local_a64,local_a8c);
                }
                if ((-1 < local_a78) && (sVar13 = local_a84, (local_a4c & 4) != 0)) {
                  do {
                    if ((int)sVar13 < 1) break;
                    write_char(0x20);
                    sVar13 = sVar13 - 1;
                  } while (local_a78 != -1);
                }
              }
              if (local_ab8 != (wchar_t *)0x0) {
                _free(local_ab8);
                local_ab8 = (wchar_t *)0x0;
              }
            }
          }
        }
        else {
          if (local_ab0 == 8) goto LAB_00fefe69;
          if (local_ab0 < 8) goto LAB_00ff0039;
        }
        uVar11 = (uint)(ushort)*local_a80;
        local_a5c = uVar11;
        if (*local_a80 == L'\0') goto LAB_00ff0fd5;
        goto LAB_00feff12;
      }
      goto LAB_00ff1062;
    }
    goto LAB_00ff107e;
  }
LAB_00fefe69:
  piVar6 = __errno();
  *piVar6 = 0x16;
  FUN_00fe56c2();
  if (local_a68 != '\0') {
    *(uint *)(local_a6c + 0x70) = *(uint *)(local_a6c + 0x70) & 0xfffffffd;
  }
LAB_00ff1097:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_00ff0fd5:
  if ((local_ab0 != 0) && (local_ab0 != 7)) goto LAB_00fefe69;
  if ((local_a58 == 1) && ((local_a60 == 0 && (iVar14 = 0, -1 < (int)local_a94)))) {
    piVar6 = local_648 + 1;
    do {
      iVar3 = piVar6[-1];
      if ((iVar3 == 1) || (iVar3 == 2)) {
LAB_00ff104b:
        *piVar6 = (int)local_a50;
        local_a50 = local_a50 + 2;
      }
      else if ((iVar3 == 3) || (iVar3 == 4)) {
        *piVar6 = (int)local_a50;
        local_a50 = local_a50 + 4;
      }
      else {
        if (iVar3 == 5) goto LAB_00ff104b;
        if (iVar3 != 7) goto LAB_00fefe69;
        *piVar6 = (int)local_a50;
        FUN_00fe72dd(&local_a50);
      }
      iVar14 = iVar14 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar14 <= (int)local_a94);
  }
LAB_00ff1062:
  local_a60 = local_a60 + 1;
  if (1 < local_a60) goto LAB_00ff107e;
  goto LAB_00fefeaa;
LAB_00ff107e:
  if (local_a68 != '\0') {
    *(uint *)(local_a6c + 0x70) = *(uint *)(local_a6c + 0x70) & 0xfffffffd;
  }
  goto LAB_00ff1097;
}

// 00FF10D0  FUN_00ff10d0  size=24  [run]
void FUN_00ff10d0(void)

{
  float10 in_ST0;
  
  FUN_00ff10ee((double)in_ST0);
  return;
}

// 00FF10E8  FUN_00ff10e8  size=6  [run]
float10 FUN_00ff10e8(double param_1)

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
    uVar1 = SUB82(dVar7 + 4398046511103.008,0) & 0x7f0;
    dVar9 = (double)((ulonglong)dVar8 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar12 = (double)((ulonglong)dVar8 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar10 = dVar9 * *(double *)(&DAT_016fe2f0 + uVar1) - 0.43359375;
    dVar7 = (dVar7 - dVar9) * *(double *)(&DAT_016fe2f0 + uVar1);
    dVar9 = ((double)((ulonglong)dVar8 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_016fe2f8 + uVar1);
    dVar8 = dVar7 + dVar10;
    dVar12 = dVar9 + (dVar12 * *(double *)(&UNK_016fe2f8 + uVar1) - 0.43359375);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar11 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((dVar12 * -3.0717952561537047 + 1.775881635348345) * dVar12 +
                       -1.155016766740187) * dVar12 * dVar12 +
                       ((dVar8 * 21.535473262846583 + -10.893557852776363) * dVar8 +
                       5.667600603343536) * dVar8 * dVar8 * dVar8 * dVar8 * dVar8 +
                       dVar8 * 0.0016161024074997105 +
                       *(double *)(&UNK_016fdee8 + uVar1) + dVar11 * 2.8363394551044964e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_016fde38 + iVar5)) +
                      *(double *)(&DAT_016fdee0 + uVar1) + dVar10 + dVar11 * 0.30102999566395283 +
                      (double)((ulonglong)dVar7 & *(ulonglong *)(&DAT_016fde30 + iVar5)));
    }
    dStack_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(dStack_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        dStack_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 0x3e9;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        dStack_c = -NAN;
        uVar6 = 9;
      }
      else {
        uVar6 = 0x3e9;
      }
      goto LAB_00ff12fa;
    }
    dVar8 = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  dStack_c = -INFINITY;
  uVar6 = 8;
LAB_00ff12fa:
  ___libm_error_support(&param_1,&param_1,&dStack_c,uVar6);
  return (float10)dStack_c;
}

// 00FF10EE  FUN_00ff10ee  size=614  [run]
float10 FUN_00ff10ee(double param_1)

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
    uVar1 = SUB82(dVar8 + 4398046511103.008,0) & 0x7f0;
    dVar10 = (double)(uVar7 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar12 = (double)(uVar7 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar11 = dVar10 * *(double *)(&DAT_016fe2f0 + uVar1) - 0.43359375;
    dVar8 = (dVar8 - dVar10) * *(double *)(&DAT_016fe2f0 + uVar1);
    dVar9 = ((double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_016fe2f8 + uVar1);
    dVar10 = dVar8 + dVar11;
    in_XMM0._8_8_ = dVar9 + (dVar12 * *(double *)(&UNK_016fe2f8 + uVar1) - 0.43359375);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar12 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((in_XMM0._8_8_ * -3.0717952561537047 + 1.775881635348345) * in_XMM0._8_8_ +
                       -1.155016766740187) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       ((dVar10 * 21.535473262846583 + -10.893557852776363) * dVar10 +
                       5.667600603343536) * dVar10 * dVar10 * dVar10 * dVar10 * dVar10 +
                       dVar10 * 0.0016161024074997105 +
                       *(double *)(&UNK_016fdee8 + uVar1) + dVar12 * 2.8363394551044964e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_016fde38 + iVar5)) +
                      *(double *)(&DAT_016fdee0 + uVar1) + dVar11 + dVar12 * 0.30102999566395283 +
                      (double)((ulonglong)dVar8 & *(ulonglong *)(&DAT_016fde30 + iVar5)));
    }
    local_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        local_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 0x3e9;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        uVar6 = 9;
      }
      else {
        uVar6 = 0x3e9;
      }
      goto LAB_00ff12fa;
    }
    in_XMM0._0_8_ = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  local_c = -INFINITY;
  uVar6 = 8;
LAB_00ff12fa:
  ___libm_error_support(&param_1,&param_1,&local_c,uVar6);
  return (float10)local_c;
}

// 00FF1360  __fltin2  size=167  [run]
/* Library Function - Single Match
    __fltin2
   
   Library: Visual Studio 2010 Release */

FLT __cdecl __fltin2(FLT _Flt,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  FLT p_Var2;
  uint uVar3;
  char *local_28;
  char *local_24;
  _CRT_DOUBLE local_20;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_24 = _Str;
  uVar3 = 0;
  local_18 = ___strgtold12_l(&local_14,&local_28,_Str,0,0,0,0,_Locale);
  if ((local_18 & 4) == 0) {
    IVar1 = __ld12tod(&local_14,&local_20);
    if (((local_18 & 2) != 0) || (IVar1 == INTRNCVT_OVERFLOW)) {
      uVar3 = 0x80;
    }
    if (((local_18 & 1) != 0) || (IVar1 == INTRNCVT_UNDERFLOW)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_20.x._0_4_ = 0;
    local_20.x._4_4_ = 0;
  }
  _Flt->nbytes = (int)local_28 - (int)local_24;
  *(undefined4 *)&_Flt->dval = local_20.x._0_4_;
  *(undefined4 *)((int)&_Flt->dval + 4) = local_20.x._4_4_;
  _Flt->flags = uVar3;
  p_Var2 = (FLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var2;
}

// 00FF1407  ___addl  size=36  [run]
/* Library Function - Single Match
    ___addl
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 ___addl(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 + param_2;
  uVar2 = 0;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}

// 00FF142B  ___shl_12  size=51  [run]
/* Library Function - Single Match
    ___shl_12
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void ___shl_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] * 2 | uVar2 >> 0x1f;
  return;
}

// 00FF145E  ___shr_12  size=50  [run]
/* Library Function - Single Match
    ___shr_12
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void ___shr_12(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}

// 00FF1490  ___ld12mul  size=635  [run]
/* Library Function - Single Match
    ___ld12mul
   
   Library: Visual Studio 2010 Release */

void ___ld12mul(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  ushort *puVar11;
  ushort uVar12;
  short *psVar13;
  int local_30;
  int local_2c;
  ushort *local_28;
  int local_20;
  int local_1c;
  uint local_18;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  short local_10;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_30 = 0;
  local_10 = 0;
  iVar5 = 0;
  uStack_e._0_2_ = 0;
  uStack_e._2_2_ = 0;
  iVar6 = 0;
  uStack_a = 0;
  uVar3 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar8 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar12 = uVar10 + uVar8;
  iVar2 = 0;
  iVar4 = 0;
  if (((uVar8 < 0x7fff) && (iVar2 = 0, iVar4 = 0, uVar10 < 0x7fff)) &&
     (iVar2 = iVar5, iVar4 = iVar6, uVar12 < 0xbffe)) {
    if (0x3fbf < uVar12) {
      if (((uVar8 == 0) && (uVar12 = uVar12 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
         ((param_1[1] == 0 && (*param_1 == 0)))) {
        *(undefined2 *)((int)param_1 + 10) = 0;
        goto LAB_00ff16fc;
      }
      if (((uVar10 == 0) && (uVar12 = uVar12 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
         ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_00ff1511;
      local_20 = 0;
      psVar13 = &local_10;
      local_1c = 5;
      do {
        local_2c = local_1c;
        if (0 < local_1c) {
          local_28 = (ushort *)(param_2 + 2);
          puVar11 = (ushort *)((int)param_1 + local_20 * 2);
          do {
            bVar7 = false;
            uVar1 = *(uint *)(psVar13 + -2) + (uint)*puVar11 * (uint)*local_28;
            if ((uVar1 < *(uint *)(psVar13 + -2)) || (uVar1 < (uint)*puVar11 * (uint)*local_28)) {
              bVar7 = true;
            }
            *(uint *)(psVar13 + -2) = uVar1;
            if (bVar7) {
              *psVar13 = *psVar13 + 1;
            }
            local_28 = local_28 + -1;
            puVar11 = puVar11 + 1;
            local_2c = local_2c + -1;
          } while (0 < local_2c);
        }
        uVar1 = CONCAT22((ushort)uStack_e,local_10);
        psVar13 = psVar13 + 1;
        local_20 = local_20 + 1;
        local_1c = local_1c + -1;
      } while (0 < local_1c);
      uVar12 = uVar12 + 0xc002;
      uVar9 = uVar1;
      if ((short)uVar12 < 1) {
LAB_00ff161c:
        uStack_12 = 0;
        uStack_13 = 0;
        local_14 = 0;
        uVar12 = uVar12 - 1;
        uVar9 = uVar1;
        if ((short)uVar12 < 0) {
          local_18 = (uint)(ushort)-uVar12;
          uVar12 = 0;
          do {
            if ((local_14 & 1) != 0) {
              local_30 = local_30 + 1;
            }
            iVar2 = CONCAT22(uStack_a,uStack_e._2_2_);
            uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
            uStack_a = uStack_a >> 1;
            uStack_e._0_2_ = (ushort)(uVar1 >> 0x11) | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
            uVar9 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
            uStack_12 = uStack_12 >> 1 | (ushort)((uVar1 << 0x1f) >> 0x10);
            local_18 = local_18 - 1;
            local_10 = (short)(uVar1 >> 1);
            uVar1 = CONCAT22((ushort)uStack_e,local_10);
            local_14 = (byte)uVar9;
            uStack_13 = (undefined1)(uVar9 >> 8);
          } while (local_18 != 0);
          uVar9 = CONCAT22((ushort)uStack_e,local_10);
          if (local_30 != 0) {
            local_14 = local_14 | 1;
            uVar9 = uVar1;
          }
        }
      }
      else {
        do {
          uVar1 = uVar9;
          if ((uStack_a & 0x8000) != 0) break;
          uVar1 = uVar9 * 2;
          iVar2 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
          uStack_e._2_2_ = (ushort)iVar2 | (ushort)(uVar9 >> 0x1f);
          uVar12 = uVar12 - 1;
          uStack_a = (ushort)((uint)iVar2 >> 0x10);
          uVar9 = uVar1;
        } while (0 < (short)uVar12);
        uStack_12 = 0;
        uStack_13 = 0;
        local_14 = 0;
        uVar9 = uVar1;
        if ((short)uVar12 < 1) goto LAB_00ff161c;
      }
      uStack_e._0_2_ = (ushort)(uVar9 >> 0x10);
      local_10 = (short)uVar9;
      if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
         (iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e), iVar2 = CONCAT22(local_10,uStack_12),
         (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_10,uStack_12) == -1) {
          iVar2 = 0;
          if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
            if (uStack_a == 0xffff) {
              uStack_a = 0x8000;
              uVar12 = uVar12 + 1;
              iVar4 = 0;
              iVar2 = 0;
            }
            else {
              uStack_a = uStack_a + 1;
              iVar4 = 0;
              iVar2 = 0;
            }
          }
          else {
            iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
          }
        }
        else {
          iVar2 = CONCAT22(local_10,uStack_12) + 1;
          iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
        }
      }
      local_10 = (short)((uint)iVar2 >> 0x10);
      uStack_12 = (ushort)iVar2;
      uStack_e._2_2_ = (ushort)((uint)iVar4 >> 0x10);
      uStack_e._0_2_ = (ushort)iVar4;
      if (uVar12 < 0x7fff) {
        *(ushort *)param_1 = uStack_12;
        *(uint *)((int)param_1 + 2) = CONCAT22((ushort)uStack_e,local_10);
        *(uint *)((int)param_1 + 6) = CONCAT22(uStack_a,uStack_e._2_2_);
        *(ushort *)((int)param_1 + 10) = uVar12 | uVar3;
        goto LAB_00ff16fc;
      }
      goto LAB_00ff16dc;
    }
LAB_00ff1511:
    param_1[2] = 0;
  }
  else {
LAB_00ff16dc:
    param_1[2] = ((uVar3 == 0) - 1 & 0x80000000) + 0x7fff8000;
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00ff16fc:
  local_10 = (short)((uint)iVar2 >> 0x10);
  uStack_e = iVar4;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FF170B  ___multtenpow12  size=767  [run]
/* Library Function - Single Match
    ___multtenpow12
   
   Library: Visual Studio 2010 Release */

void ___multtenpow12(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  short *psVar11;
  uint uVar12;
  ushort uVar13;
  ushort *local_44;
  ushort *local_40;
  int local_3c;
  int local_38;
  int local_30;
  undefined *local_28;
  int local_24;
  ushort local_20;
  undefined4 uStack_1e;
  undefined2 uStack_1a;
  undefined4 local_18;
  byte local_14;
  undefined1 uStack_13;
  undefined4 uStack_12;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  iVar1 = CONCAT22(uStack_1e._2_2_,(undefined2)uStack_1e);
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_28 = &DAT_018e97d0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      local_28 = &DAT_018e9930;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
joined_r0x00ff1753:
    if (param_2 != 0) {
      local_28 = local_28 + 0x54;
      uVar12 = (int)param_2 >> 3;
      uVar6 = param_2 & 7;
      param_2 = uVar12;
      if (uVar6 != 0) {
        puVar7 = (ushort *)(local_28 + uVar6 * 0xc);
        if (0x7fff < *puVar7) {
          local_20 = (ushort)*(undefined4 *)puVar7;
          uStack_1e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar7 >> 0x10);
          uStack_1e._2_2_ = (undefined2)*(undefined4 *)(puVar7 + 2);
          uStack_1a = (undefined2)((uint)*(undefined4 *)(puVar7 + 2) >> 0x10);
          local_18 = *(undefined4 *)(puVar7 + 4);
          iVar1 = CONCAT22(uStack_1e._2_2_,(undefined2)uStack_1e) + -1;
          uStack_1e._0_2_ = (undefined2)iVar1;
          uStack_1e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
          puVar7 = &local_20;
        }
        local_3c = 0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12._0_2_ = 0;
        uStack_12._2_2_ = 0;
        uStack_12 = 0;
        uStack_e._0_2_ = 0;
        uStack_e._2_2_ = 0;
        uStack_e = 0;
        uStack_a = 0;
        uVar10 = (puVar7[5] ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
        uVar5 = *(ushort *)((int)param_1 + 10) & 0x7fff;
        uVar9 = puVar7[5] & 0x7fff;
        uVar13 = uVar9 + uVar5;
        iVar2 = 0;
        iVar3 = 0;
        if (((uVar5 < 0x7fff) && (iVar2 = 0, iVar3 = 0, uVar9 < 0x7fff)) &&
           (iVar2 = uStack_12, iVar3 = uStack_e, uVar13 < 0xbffe)) {
          if (0x3fbf < uVar13) {
            if (((uVar5 == 0) && (uVar13 = uVar13 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
               ((param_1[1] == 0 && (*param_1 == 0)))) {
              *(undefined2 *)((int)param_1 + 10) = 0;
            }
            else if (((uVar9 == 0) &&
                     (uVar13 = uVar13 + 1, (*(uint *)(puVar7 + 4) & 0x7fffffff) == 0)) &&
                    ((*(int *)(puVar7 + 2) == 0 && (*(int *)puVar7 == 0)))) {
              param_1[2] = 0;
              param_1[1] = 0;
              *param_1 = 0;
            }
            else {
              local_38 = 0;
              psVar11 = (short *)((int)&uStack_12 + 2);
              local_24 = 5;
              do {
                local_30 = local_24;
                if (0 < local_24) {
                  local_44 = puVar7 + 4;
                  local_40 = (ushort *)(local_38 * 2 + (int)param_1);
                  do {
                    bVar4 = false;
                    uVar12 = *(uint *)(psVar11 + -2) + (uint)*local_40 * (uint)*local_44;
                    if ((uVar12 < *(uint *)(psVar11 + -2)) ||
                       (uVar12 < (uint)*local_40 * (uint)*local_44)) {
                      bVar4 = true;
                    }
                    *(uint *)(psVar11 + -2) = uVar12;
                    if (bVar4) {
                      *psVar11 = *psVar11 + 1;
                    }
                    local_40 = local_40 + 1;
                    local_44 = local_44 + -1;
                    local_30 = local_30 + -1;
                  } while (0 < local_30);
                }
                psVar11 = psVar11 + 1;
                local_38 = local_38 + 1;
                local_24 = local_24 + -1;
              } while (0 < local_24);
              uVar13 = uVar13 + 0xc002;
              if ((short)uVar13 < 1) {
LAB_00ff190d:
                uVar13 = uVar13 - 1;
                if ((short)uVar13 < 0) {
                  uVar12 = (uint)(ushort)-uVar13;
                  uVar13 = 0;
                  do {
                    if ((local_14 & 1) != 0) {
                      local_3c = local_3c + 1;
                    }
                    iVar3 = CONCAT22(uStack_a,uStack_e._2_2_);
                    uVar6 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    iVar2 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
                    uStack_a = uStack_a >> 1;
                    uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10)
                    ;
                    uVar8 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                    uStack_12._0_2_ =
                         (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                    uVar12 = uVar12 - 1;
                    uStack_12._2_2_ = (ushort)(uVar6 >> 1);
                    local_14 = (byte)uVar8;
                    uStack_13 = (undefined1)(uVar8 >> 8);
                  } while (uVar12 != 0);
                  if (local_3c != 0) {
                    local_14 = local_14 | 1;
                  }
                }
              }
              else {
                do {
                  uVar5 = (ushort)uStack_12;
                  if ((uStack_a & 0x8000) != 0) break;
                  iVar2 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                  local_14 = (byte)iVar2;
                  uStack_13 = (undefined1)((uint)iVar2 >> 8);
                  uStack_12._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                  iVar2 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
                  uStack_12._2_2_ = (ushort)iVar2 | uVar5 >> 0xf;
                  iVar3 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
                  uStack_e._2_2_ = (ushort)iVar3 | (ushort)uStack_e >> 0xf;
                  uVar13 = uVar13 - 1;
                  uStack_e._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                  uStack_a = (ushort)((uint)iVar3 >> 0x10);
                } while (0 < (short)uVar13);
                if ((short)uVar13 < 1) goto LAB_00ff190d;
              }
              if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
                 (iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
                 iVar2 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
                 (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
                if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
                  iVar2 = 0;
                  if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
                    if (uStack_a == 0xffff) {
                      uStack_a = 0x8000;
                      uVar13 = uVar13 + 1;
                      iVar3 = 0;
                      iVar2 = 0;
                    }
                    else {
                      uStack_a = uStack_a + 1;
                      iVar3 = 0;
                      iVar2 = 0;
                    }
                  }
                  else {
                    iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
                  }
                }
                else {
                  iVar2 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
                  iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
                }
              }
              uStack_12._2_2_ = (ushort)((uint)iVar2 >> 0x10);
              uStack_12._0_2_ = (ushort)iVar2;
              uStack_e._2_2_ = (ushort)((uint)iVar3 >> 0x10);
              uStack_e._0_2_ = (ushort)iVar3;
              if (0x7ffe < uVar13) goto LAB_00ff19d0;
              *(ushort *)param_1 = (ushort)uStack_12;
              *(uint *)((int)param_1 + 2) = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              *(uint *)((int)param_1 + 6) = CONCAT22(uStack_a,uStack_e._2_2_);
              *(ushort *)((int)param_1 + 10) = uVar13 | uVar10;
              uStack_12 = iVar2;
              uStack_e = iVar3;
            }
            goto joined_r0x00ff1753;
          }
          param_1[2] = 0;
        }
        else {
LAB_00ff19d0:
          param_1[2] = ((uVar10 == 0) - 1 & 0x80000000) + 0x7fff8000;
        }
        param_1[1] = 0;
        *param_1 = 0;
        uStack_12 = iVar2;
        uStack_e = iVar3;
      }
      goto joined_r0x00ff1753;
    }
  }
  uStack_1e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FF1A0A  ___strgtold12_l  size=1705  [run]
/* Library Function - Single Match
    ___strgtold12_l
   
   Library: Visual Studio 2010 Release */

uint __cdecl
___strgtold12_l(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
               int implicit_E,_locale_t _Locale)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  char cVar10;
  ushort uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  int iVar16;
  undefined *puVar17;
  char *pcVar18;
  undefined4 uVar19;
  ushort *puVar20;
  ushort uVar21;
  undefined4 uVar22;
  char *pcVar23;
  short *psVar24;
  int local_6c;
  int local_68;
  ushort *local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  byte local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  iVar16 = 0;
  pcVar23 = local_24;
  uVar9 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar6 = false;
  bVar8 = false;
  bVar7 = false;
  local_68 = 0;
  local_54 = 0;
  if (_Locale != (_locale_t)0x0) {
    local_58 = str;
    for (; (((cVar10 = *str, cVar10 == ' ' || (cVar10 == '\t')) || (cVar10 == '\n')) ||
           (cVar10 == '\r')); str = str + 1) {
    }
LAB_00ff1a87:
    cVar10 = *str;
    pcVar18 = str + 1;
    switch(iVar16) {
    case 0:
      if ((byte)(cVar10 - 0x31U) < 9) {
LAB_00ff1aa2:
        iVar16 = 3;
        goto LAB_00ff1aa4;
      }
      if (cVar10 == **(char **)_Locale->locinfo[1].lc_codepage) {
LAB_00ff1ab9:
        iVar16 = 5;
        str = pcVar18;
      }
      else if (cVar10 == '+') {
        uVar9 = 0;
        iVar16 = 2;
        str = pcVar18;
      }
      else {
        if (cVar10 != '-') {
          if (cVar10 == '0') goto LAB_00ff1ad3;
          goto LAB_00ff1c4f;
        }
        iVar16 = 2;
        uVar9 = 0x8000;
        str = pcVar18;
      }
      goto LAB_00ff1a87;
    case 1:
      bVar6 = true;
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_00ff1aa2;
      if (cVar10 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_00ff1b08;
      if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_00ff1b32;
      if (cVar10 == '0') goto LAB_00ff1ad3;
      goto LAB_00ff1b18;
    case 2:
      if ((byte)(cVar10 - 0x31U) < 9) goto LAB_00ff1aa2;
      if (cVar10 == **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_00ff1ab9;
      str = local_58;
      if (cVar10 != '0') goto LAB_00ff1c78;
LAB_00ff1ad3:
      iVar16 = 1;
      str = pcVar18;
      goto LAB_00ff1a87;
    case 3:
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar10 + -0x30;
          pcVar23 = pcVar23 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar10 != **(char **)_Locale->locinfo[1].lc_codepage) goto LAB_00ff1ba0;
LAB_00ff1b08:
      bVar6 = true;
      iVar16 = 4;
      str = pcVar18;
      goto LAB_00ff1a87;
    case 4:
      bVar8 = true;
      if (local_50 == 0) {
        while (cVar10 == '0') {
          local_54 = local_54 + -1;
          cVar10 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar10 && (cVar10 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar10 + -0x30;
          pcVar23 = pcVar23 + 1;
          local_54 = local_54 + -1;
        }
        cVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_00ff1ba0:
      if ((cVar10 == '+') || (cVar10 == '-')) {
LAB_00ff1b32:
        bVar6 = true;
        iVar16 = 0xb;
        str = pcVar18 + -1;
      }
      else {
LAB_00ff1b18:
        bVar6 = true;
        if ((cVar10 < 'D') || (('E' < cVar10 && (1 < (byte)(cVar10 + 0x9cU))))) goto LAB_00ff1c4f;
        iVar16 = 6;
        str = pcVar18;
      }
      goto LAB_00ff1a87;
    case 5:
      bVar8 = true;
      str = local_58;
      if ((byte)(cVar10 - 0x30U) < 10) {
        iVar16 = 4;
        goto LAB_00ff1aa4;
      }
      goto LAB_00ff1c78;
    case 6:
      local_58 = str + -1;
      if (8 < (byte)(cVar10 - 0x31U)) {
        if (cVar10 == '+') goto LAB_00ff1c36;
        if (cVar10 == '-') goto LAB_00ff1c2a;
LAB_00ff1c1d:
        str = local_58;
        if (cVar10 != '0') goto LAB_00ff1c78;
        iVar16 = 8;
        str = pcVar18;
        goto LAB_00ff1a87;
      }
      break;
    case 7:
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_00ff1c1d;
      break;
    case 8:
      bVar7 = true;
      while (cVar10 == '0') {
        cVar10 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar10 - 0x31U)) goto LAB_00ff1c4f;
      break;
    case 9:
      bVar7 = true;
      local_68 = 0;
      goto LAB_00ff1cda;
    default:
      goto switchD_00ff1a93_caseD_a;
    case 0xb:
      if (implicit_E != 0) {
        local_58 = str;
        if (cVar10 == '+') {
LAB_00ff1c36:
          iVar16 = 7;
          str = pcVar18;
        }
        else {
          if (cVar10 != '-') goto LAB_00ff1c78;
LAB_00ff1c2a:
          local_6c = -1;
          iVar16 = 7;
          str = pcVar18;
        }
        goto LAB_00ff1a87;
      }
      iVar16 = 10;
      pcVar18 = str;
switchD_00ff1a93_caseD_a:
      str = pcVar18;
      if (iVar16 != 10) goto LAB_00ff1a87;
      goto LAB_00ff1c78;
    }
    iVar16 = 9;
LAB_00ff1aa4:
    str = pcVar18 + -1;
    goto LAB_00ff1a87;
  }
  piVar12 = __errno();
  *piVar12 = 0x16;
  FUN_00fe56c2();
  iVar4 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  uVar1 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
  goto LAB_00ff20a5;
LAB_00ff1cda:
  if ((cVar10 < '0') || ('9' < cVar10)) goto LAB_00ff1cf5;
  local_68 = local_68 * 10 + -0x30 + (int)cVar10;
  if (local_68 < 0x1451) {
    cVar10 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_00ff1cda;
  }
  local_68 = 0x1451;
LAB_00ff1cf5:
  while (('/' < cVar10 && (cVar10 < ':'))) {
    cVar10 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_00ff1c4f:
  str = pcVar18 + -1;
LAB_00ff1c78:
  *p_end_ptr = str;
  if (bVar6) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar23 = pcVar23 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_00ff2086;
    while (pcVar23 = pcVar23 + -1, *pcVar23 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    FUN_01001fbb(local_24,local_50,&local_40);
    iVar5 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    iVar4 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar3 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    iVar2 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    uVar1 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    uVar14 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar7) {
      local_58 = (char *)((int)local_58 + scale);
    }
    if (!bVar8) {
      local_58 = (char *)((int)local_58 - decpt);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_00ff2086;
      puVar17 = &DAT_018e97d0;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar17 = &DAT_018e9930;
        }
        if (mult12 == 0) {
          local_40._0_2_ = 0;
        }
        iVar16 = uStack_4a;
        uVar14 = uVar1;
        iVar2 = uStack_2e;
        iVar3 = uStack_2a;
        iVar4 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar5 = local_3c;
joined_r0x00ff1d82:
        if (local_58 != (char *)0x0) {
          uStack_38._2_2_ = (ushort)(uVar14 >> 0x10);
          uVar1 = (int)local_58 >> 3;
          puVar17 = puVar17 + 0x54;
          uVar13 = (uint)local_58 & 7;
          local_58 = (char *)uVar1;
          if (uVar13 != 0) {
            puVar20 = (ushort *)(puVar17 + uVar13 * 0xc);
            if (0x7fff < *puVar20) {
              local_4c = (ushort)*(undefined4 *)puVar20;
              uStack_4a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar20 >> 0x10);
              uStack_4a._2_2_ = (undefined2)*(undefined4 *)(puVar20 + 2);
              uStack_46 = (undefined2)((uint)*(undefined4 *)(puVar20 + 2) >> 0x10);
              local_44 = *(undefined4 *)(puVar20 + 4);
              iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar16;
              uStack_4a._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
              puVar20 = &local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            iVar2 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar3 = 0;
            uStack_26 = 0;
            uVar11 = puVar20[5] & 0x7fff;
            uVar21 = (puVar20[5] ^ uStack_38._2_2_) & 0x8000;
            uVar15 = uVar11 + (uStack_38._2_2_ & 0x7fff);
            if ((((uStack_38._2_2_ & 0x7fff) < 0x7fff) && (uVar11 < 0x7fff)) && (uVar15 < 0xbffe)) {
              if (0x3fbf < uVar15) {
                if ((((uVar14 & 0x7fff0000) == 0) &&
                    (uVar15 = uVar15 + 1, (uVar14 & 0x7fffffff) == 0)) &&
                   ((iVar5 == 0 && (iVar4 == 0)))) {
                  uStack_38._2_2_ = 0;
                  uVar14 = uVar14 & 0xffff;
                  iVar2 = 0;
                  iVar3 = 0;
                }
                else if (((uVar11 == 0) &&
                         (uVar15 = uVar15 + 1, (*(uint *)(puVar20 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar20 + 2) == 0 && (*(int *)puVar20 == 0)))) {
                  uStack_38._0_2_ = 0;
                  uStack_38._2_2_ = 0;
                  uVar14 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  iVar4 = 0;
                  iVar5 = 0;
                }
                else {
                  local_6c = 0;
                  psVar24 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = puVar20 + 4;
                      do {
                        bVar6 = false;
                        uVar14 = *(uint *)(psVar24 + -2) + (uint)*local_64 * (uint)*local_60;
                        if ((uVar14 < *(uint *)(psVar24 + -2)) ||
                           (uVar14 < (uint)*local_64 * (uint)*local_60)) {
                          bVar6 = true;
                        }
                        *(uint *)(psVar24 + -2) = uVar14;
                        if (bVar6) {
                          *psVar24 = *psVar24 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = local_64 + -1;
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar24 = psVar24 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar15 = uVar15 + 0xc002;
                  if ((short)uVar15 < 1) {
LAB_00ff1f3e:
                    uVar15 = uVar15 - 1;
                    if ((short)uVar15 < 0) {
                      uVar14 = (uint)(ushort)-uVar15;
                      uVar15 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar3 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
                        uVar13 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                        uVar14 = uVar14 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar1 >> 1);
                        local_30 = (byte)uVar13;
                        uStack_2f = (undefined1)(uVar13 >> 8);
                      } while (uVar14 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar11 = (ushort)uStack_2e;
                      if ((short)uStack_26 < 0) break;
                      iVar2 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar2;
                      uStack_2f = (undefined1)((uint)iVar2 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                      iVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar2 | uVar11 >> 0xf;
                      iVar3 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar3 | (ushort)uStack_2a >> 0xf;
                      uVar15 = uVar15 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar2 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar3 >> 0x10);
                    } while (0 < (short)uVar15);
                    if ((short)uVar15 < 1) goto LAB_00ff1f3e;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar3 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     iVar2 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      iVar2 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar15 = uVar15 + 1;
                          iVar3 = 0;
                          iVar2 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar3 = 0;
                          iVar2 = 0;
                        }
                      }
                      else {
                        iVar3 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                      }
                    }
                    else {
                      iVar2 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      iVar3 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (uVar15 < 0x7fff) {
                    local_40 = iVar2;
                    local_3c = iVar3;
                    uStack_38._0_2_ = uStack_26;
                    uStack_38._2_2_ = uVar15 | uVar21;
                    uVar14 = CONCAT22(uVar15 | uVar21,uStack_26);
                    iVar4 = iVar2;
                    iVar5 = iVar3;
                  }
                  else {
                    local_3c._0_2_ = 0;
                    local_3c._2_2_ = 0;
                    local_40._0_2_ = 0;
                    local_40._2_2_ = 0;
                    uVar14 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
                    uStack_38._0_2_ = (ushort)uVar14;
                    uStack_38._2_2_ = (ushort)(uVar14 >> 0x10);
                    iVar4 = 0;
                    iVar5 = 0;
                  }
                }
                goto joined_r0x00ff1d82;
              }
              uVar14 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              uVar14 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38._0_2_ = (ushort)uVar14;
            uStack_38._2_2_ = (ushort)(uVar14 >> 0x10);
            iVar2 = 0;
            iVar3 = 0;
            iVar4 = 0;
            iVar5 = 0;
          }
          goto joined_r0x00ff1d82;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar5 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar5;
      local_40._2_2_ = (undefined2)((uint)iVar4 >> 0x10);
      local_40._0_2_ = (undefined2)iVar4;
      uStack_38._2_2_ = (ushort)(uVar14 >> 0x10);
      uStack_38._0_2_ = (ushort)uVar14;
      uVar22 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar19 = CONCAT22((ushort)uStack_38,local_3c._2_2_);
      uStack_4a = iVar16;
      uVar1 = uVar14;
      uStack_2e = iVar2;
      uStack_2a = iVar3;
      local_3c = iVar5;
    }
    else {
      uVar22 = 0;
      uStack_38._2_2_ = 0x7fff;
      uVar19 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_00ff2086:
    iVar4 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    uVar1 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    local_40._0_2_ = 0;
    uStack_38._2_2_ = 0;
    uVar19 = 0;
    uVar22 = 0;
  }
  *(undefined2 *)pld12->ld12 = (undefined2)local_40;
  *(ushort *)(pld12->ld12 + 10) = uStack_38._2_2_ | uVar9;
  *(undefined4 *)(pld12->ld12 + 2) = uVar22;
  *(undefined4 *)(pld12->ld12 + 6) = uVar19;
LAB_00ff20a5:
  uStack_38 = uVar1;
  local_40 = iVar4;
  uVar14 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar14;
}

// 00FF20E6  ___STRINGTOLD_L  size=91  [run]
/* Library Function - Single Match
    ___STRINGTOLD_L
   
   Library: Visual Studio 2010 Release */

uint __cdecl ___STRINGTOLD_L(_LDOUBLE *pld,char **p_end_ptr,char *str,int mult12,_locale_t _Locale)

{
  uint uVar1;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  ___strgtold12_l(&local_14,p_end_ptr,str,mult12,0,0,0,_Locale);
  __ld12told(&local_14,pld);
  uVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar1;
}

// 00FF2150  __aulldvrm  size=149  [run]
/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2010 Release */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

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

// 00FF21F0  __modf_default  size=277  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __modf_default
   
   Library: Visual Studio 2010 Release */

float10 __modf_default(double param_1,double *param_2)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_c;
  
  uVar2 = __ctrlfp(0,0);
  __ctrlfp(DAT_018e95d8,0xffff);
  uVar5 = SUB84(param_1,0);
  uVar6 = (undefined4)((ulonglong)param_1 >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    *param_2 = _DAT_018e96b8;
    iVar3 = __sptype(uVar5,uVar6);
    if (0 < iVar3) {
      if (iVar3 < 3) {
        *param_2 = param_1;
        local_c = __copysign(0.0,param_1);
        __ctrlfp(uVar2,0xffff);
        goto LAB_00ff22fd;
      }
      if (iVar3 == 3) {
        *param_2 = param_1;
        fVar4 = (float10)__handle_qnan1(0x1c,uVar5,uVar6,uVar2);
        return fVar4;
      }
    }
    *param_2 = param_1 + 1.0;
    fVar4 = (float10)__except1(8,0x1c,uVar5,uVar6,param_1 + 1.0,uVar2);
  }
  else {
    fVar4 = (float10)__frnd(uVar5,uVar6);
    *param_2 = (double)fVar4;
    dVar1 = (double)((float10)param_1 - fVar4);
    local_c = dVar1;
    if (dVar1 == 0.0) {
      local_c._6_2_ = (ushort)((ulonglong)dVar1 >> 0x30);
      local_c = (double)CONCAT26(local_c._6_2_ | param_1._6_2_ & 0x8000,SUB86(dVar1,0));
    }
    __ctrlfp(uVar2,0xffff);
LAB_00ff22fd:
    fVar4 = (float10)local_c;
  }
  return fVar4;
}

// 00FF2310  FUN_00ff2310  size=24  [run]
void FUN_00ff2310(void)

{
  float10 in_ST0;
  
  FUN_00ff232e((double)in_ST0);
  return;
}

// 00FF2328  FUN_00ff2328  size=6  [run]
float10 FUN_00ff2328(double param_1)

{
  int iVar1;
  ushort uVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar2 = ((ushort)((ulonglong)param_1 >> 0x30) & 0x7fff) + 0xc7e0;
  if (uVar2 < 0x8a9) {
    dVar11 = (param_1 * 10.185916357881302 + 1.080863910568919e+17) - 1.080863910568919e+17;
    dVar12 = (param_1 * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    dVar4 = param_1 - dVar11 * 0.0981747704247482;
    dVar8 = param_1 - dVar12 * 0.09817477042452083;
    dVar5 = dVar4 - dVar11 * -6.716466596861444e-14;
    dVar9 = dVar8 - dVar12 * 1.6020900947399724e-13;
    iVar1 = ((int)ROUND(param_1 * 10.185916357881302) + 0x72900U & 0x1f) * 0xb0;
    dVar16 = (double)((ulonglong)(dVar11 * 6.716466596857464e-14 + dVar4) & 0xfffffffffffc0000);
    dVar17 = 1.0 / dVar16;
    dVar6 = dVar9 * dVar9;
    dVar10 = dVar9 * dVar9;
    dVar7 = dVar6 * dVar6;
    dVar14 = dVar9 * *(double *)(&DAT_016fe790 + iVar1) + dVar9 * *(double *)(&DAT_016fe798 + iVar1)
    ;
    dVar13 = (double)(*(ulonglong *)(&DAT_016fe7a8 + iVar1) & (ulonglong)dVar17) -
             *(double *)(&DAT_016fe780 + iVar1);
    dVar15 = dVar14 - dVar13;
    return (float10)(((dVar7 * dVar7 *
                       (*(double *)(&DAT_016fe710 + iVar1) * dVar9 +
                        *(double *)(&DAT_016fe700 + iVar1) +
                        (*(double *)(&DAT_016fe730 + iVar1) * dVar9 +
                        *(double *)(&DAT_016fe720 + iVar1)) * dVar6 +
                        *(double *)(&DAT_016fe740 + iVar1) * dVar7 +
                       (*(double *)(&DAT_016fe760 + iVar1) * dVar9 +
                        *(double *)(&DAT_016fe750 + iVar1) +
                       *(double *)(&DAT_016fe770 + iVar1) * dVar6) * dVar9 * dVar7) +
                       *(double *)(&UNK_016fe718 + iVar1) * dVar9 +
                       *(double *)(&DAT_016fe708 + iVar1) +
                       (*(double *)(&UNK_016fe738 + iVar1) * dVar9 +
                       *(double *)(&DAT_016fe728 + iVar1)) * dVar10 +
                       *(double *)(&UNK_016fe748 + iVar1) * dVar10 * dVar10 +
                       (*(double *)(&UNK_016fe768 + iVar1) * dVar9 +
                        *(double *)(&DAT_016fe758 + iVar1) +
                       *(double *)(&UNK_016fe778 + iVar1) * dVar10) * dVar9 * dVar10 * dVar10 +
                       (*(double *)(&DAT_016fe790 + iVar1) + *(double *)(&DAT_016fe798 + iVar1)) *
                       (((dVar8 - dVar9) - dVar12 * 1.6020900947399724e-13) -
                       dVar12 * 6.601874416867142e-25) + *(double *)(&DAT_016fe788 + iVar1) +
                       dVar9 * *(double *)(&DAT_016fe798 + iVar1) +
                       (dVar9 * *(double *)(&DAT_016fe790 + iVar1) - dVar14) +
                      (dVar14 - (dVar13 + dVar15))) -
                     ((1.0 - dVar16 * (double)(*(ulonglong *)(&DAT_016fe7a8 + iVar1) &
                                              (ulonglong)dVar17)) -
                     ((((dVar4 - dVar5) - dVar11 * -6.716466596861444e-14) -
                      dVar11 * 3.9801982271943437e-26) + (dVar5 - dVar16)) * dVar17) *
                     dVar17 * *(double *)(&DAT_016fe7a0 + iVar1)) + dVar15);
  }
  if ((short)uVar2 < 0x8a9) {
    return (float10)((param_1 * 3.602879701896397e+16 + param_1) * 2.7755575615628914e-17);
  }
  fVar3 = (float10)FUN_00fe0b0f();
  return fVar3;
}

// 00FF232E  FUN_00ff232e  size=564  [run]
float10 FUN_00ff232e(void)

{
  int iVar1;
  ushort uVar2;
  float10 fVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar2 = ((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff) + 0xc7e0;
  if (uVar2 < 0x8a9) {
    dVar11 = (in_XMM0_Qa * 10.185916357881302 + 1.080863910568919e+17) - 1.080863910568919e+17;
    dVar12 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    dVar4 = in_XMM0_Qa - dVar11 * 0.0981747704247482;
    dVar8 = in_XMM0_Qa - dVar12 * 0.09817477042452083;
    dVar5 = dVar4 - dVar11 * -6.716466596861444e-14;
    dVar9 = dVar8 - dVar12 * 1.6020900947399724e-13;
    iVar1 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x72900U & 0x1f) * 0xb0;
    dVar16 = (double)((ulonglong)(dVar11 * 6.716466596857464e-14 + dVar4) & 0xfffffffffffc0000);
    dVar17 = 1.0 / dVar16;
    dVar6 = dVar9 * dVar9;
    dVar10 = dVar9 * dVar9;
    dVar7 = dVar6 * dVar6;
    dVar14 = dVar9 * *(double *)(&DAT_016fe790 + iVar1) + dVar9 * *(double *)(&DAT_016fe798 + iVar1)
    ;
    dVar13 = (double)(*(ulonglong *)(&DAT_016fe7a8 + iVar1) & (ulonglong)dVar17) -
             *(double *)(&DAT_016fe780 + iVar1);
    dVar15 = dVar14 - dVar13;
    return (float10)(((dVar7 * dVar7 *
                       (*(double *)(&DAT_016fe710 + iVar1) * dVar9 +
                        *(double *)(&DAT_016fe700 + iVar1) +
                        (*(double *)(&DAT_016fe730 + iVar1) * dVar9 +
                        *(double *)(&DAT_016fe720 + iVar1)) * dVar6 +
                        *(double *)(&DAT_016fe740 + iVar1) * dVar7 +
                       (*(double *)(&DAT_016fe760 + iVar1) * dVar9 +
                        *(double *)(&DAT_016fe750 + iVar1) +
                       *(double *)(&DAT_016fe770 + iVar1) * dVar6) * dVar9 * dVar7) +
                       *(double *)(&UNK_016fe718 + iVar1) * dVar9 +
                       *(double *)(&DAT_016fe708 + iVar1) +
                       (*(double *)(&UNK_016fe738 + iVar1) * dVar9 +
                       *(double *)(&DAT_016fe728 + iVar1)) * dVar10 +
                       *(double *)(&UNK_016fe748 + iVar1) * dVar10 * dVar10 +
                       (*(double *)(&UNK_016fe768 + iVar1) * dVar9 +
                        *(double *)(&DAT_016fe758 + iVar1) +
                       *(double *)(&UNK_016fe778 + iVar1) * dVar10) * dVar9 * dVar10 * dVar10 +
                       (*(double *)(&DAT_016fe790 + iVar1) + *(double *)(&DAT_016fe798 + iVar1)) *
                       (((dVar8 - dVar9) - dVar12 * 1.6020900947399724e-13) -
                       dVar12 * 6.601874416867142e-25) + *(double *)(&DAT_016fe788 + iVar1) +
                       dVar9 * *(double *)(&DAT_016fe798 + iVar1) +
                       (dVar9 * *(double *)(&DAT_016fe790 + iVar1) - dVar14) +
                      (dVar14 - (dVar13 + dVar15))) -
                     ((1.0 - dVar16 * (double)(*(ulonglong *)(&DAT_016fe7a8 + iVar1) &
                                              (ulonglong)dVar17)) -
                     ((((dVar4 - dVar5) - dVar11 * -6.716466596861444e-14) -
                      dVar11 * 3.9801982271943437e-26) + (dVar5 - dVar16)) * dVar17) *
                     dVar17 * *(double *)(&DAT_016fe7a0 + iVar1)) + dVar15);
  }
  if ((short)uVar2 < 0x8a9) {
    return (float10)((in_XMM0_Qa * 3.602879701896397e+16 + in_XMM0_Qa) * 2.7755575615628914e-17);
  }
  fVar3 = (float10)FUN_00fe0b0f();
  return fVar3;
}

// 00FF2570  FUN_00ff2570  size=24  [run]
void FUN_00ff2570(void)

{
  float10 in_ST0;
  
  FUN_00ff258e((double)in_ST0);
  return;
}

// 00FF2588  FUN_00ff2588  size=6  [run]
float10 FUN_00ff2588(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined2 uStack_c;
  undefined6 uStack_a;
  undefined2 uStack_4;
  
  dVar5 = (double)CONCAT44(param_2,param_1);
  uVar1 = param_2 >> 0x10 & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar6 = dVar5 * 92.33248261689366 + 6755399441055744.0;
    dVar7 = (dVar5 * 92.33248261689366 + 6755399441055744.0) - 6755399441055744.0;
    uVar1 = SUB84(dVar6,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar4 = (dVar5 - (dVar6 - 6755399441055744.0) * 0.010830424696223417) -
            (dVar6 - 6755399441055744.0) * 2.572804622327669e-14;
    dVar5 = (dVar5 - dVar7 * 0.010830424696223417) - dVar7 * 2.572804622327669e-14;
    dVar6 = (double)(*(ulonglong *)(&UNK_016ffe58 + iVar2) |
                    ((ulonglong)dVar6 & 0xffffffc0) + 0xffc0 << 0x2e);
    dVar5 = dVar5 * dVar5 * (dVar5 * 0.16666666669815094 + 0.4999999999995663) +
            dVar4 + *(double *)(&DAT_016ffe50 + iVar2) +
            dVar4 * dVar4 * dVar4 * dVar4 * (dVar4 * 0.008332168270616733 + 0.04166672086872847);
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar5 * dVar6 + dVar6);
    }
    dVar4 = (double)(*(ulonglong *)(&UNK_016ffe58 + iVar2) & 0xfffffffffffff |
                    (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    uStack_4 = (undefined2)((ulonglong)dVar4 >> 0x30);
    dVar5 = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
            (dVar4 + dVar5 * dVar4);
    if (((ushort)((ulonglong)dVar5 >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)dVar5 & 0x7ff0000000000000) != 0) goto LAB_00ff2782;
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uVar1 = param_2 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)((double)CONCAT44(param_2,param_1) + 1.0);
    }
    if (uVar1 < 0x7ff00000) {
      if (param_2 < 0x80000000) {
        dVar5 = INFINITY;
        uVar3 = 0xe;
      }
      else {
        dVar5 = 0.0;
        uVar3 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && (param_1 == 0)) {
        if (param_2 != 0x7ff00000) {
          return (float10)0.0;
        }
        return (float10)INFINITY;
      }
      uVar3 = 0x3ea;
    }
  }
  uStack_c = SUB82(dVar5,0);
  uStack_a = (undefined6)((ulonglong)dVar5 >> 0x10);
  ___libm_error_support(&param_1,&param_1,(short)&uStack_c,uVar3);
  dVar5 = (double)CONCAT62(uStack_a,uStack_c);
LAB_00ff2782:
  return (float10)dVar5;
}

// 00FF258E  FUN_00ff258e  size=639  [run]
float10 FUN_00ff258e(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  double in_XMM0_Qa;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined2 uStack_c;
  undefined6 uStack_a;
  undefined2 uStack_4;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar5 = in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0;
    dVar6 = (in_XMM0_Qa * 92.33248261689366 + 6755399441055744.0) - 6755399441055744.0;
    uVar1 = SUB84(dVar5,0);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar4 = (in_XMM0_Qa - (dVar5 - 6755399441055744.0) * 0.010830424696223417) -
            (dVar5 - 6755399441055744.0) * 2.572804622327669e-14;
    dVar6 = (in_XMM0_Qa - dVar6 * 0.010830424696223417) - dVar6 * 2.572804622327669e-14;
    dVar5 = (double)(*(ulonglong *)(&UNK_016ffe58 + iVar2) |
                    ((ulonglong)dVar5 & 0xffffffc0) + 0xffc0 << 0x2e);
    dVar4 = dVar6 * dVar6 * (dVar6 * 0.16666666669815094 + 0.4999999999995663) +
            dVar4 + *(double *)(&DAT_016ffe50 + iVar2) +
            dVar4 * dVar4 * dVar4 * dVar4 * (dVar4 * 0.008332168270616733 + 0.04166672086872847);
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return (float10)(dVar4 * dVar5 + dVar5);
    }
    dVar6 = (double)(*(ulonglong *)(&UNK_016ffe58 + iVar2) & 0xfffffffffffff |
                    (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    uStack_4 = (undefined2)((ulonglong)dVar6 >> 0x30);
    in_XMM0_Qa = (double)((ulonglong)((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34) *
                 (dVar6 + dVar4 * dVar6);
    if (((ushort)((ulonglong)in_XMM0_Qa >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)in_XMM0_Qa & 0x7ff0000000000000) != 0) goto LAB_00ff2782;
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uVar1 = param_2 & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return (float10)((double)CONCAT44(param_2,param_1) + 1.0);
    }
    if (uVar1 < 0x7ff00000) {
      if (param_2 < 0x80000000) {
        in_XMM0_Qa = INFINITY;
        uVar3 = 0xe;
      }
      else {
        in_XMM0_Qa = 0.0;
        uVar3 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && (param_1 == 0)) {
        if (param_2 != 0x7ff00000) {
          return (float10)0.0;
        }
        return (float10)INFINITY;
      }
      uVar3 = 0x3ea;
    }
  }
  uStack_c = SUB82(in_XMM0_Qa,0);
  uStack_a = (undefined6)((ulonglong)in_XMM0_Qa >> 0x10);
  ___libm_error_support(&param_1,&param_1,(short)&uStack_c,uVar3);
  in_XMM0_Qa = (double)CONCAT62(uStack_a,uStack_c);
LAB_00ff2782:
  return (float10)in_XMM0_Qa;
}

// 00FF2830  __crtGetStringTypeA_stat  size=231  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  uint uVar1;
  uint cchWideChar;
  undefined4 *puVar2;
  int iVar3;
  LPCWSTR lpWideCharStr;
  
  uVar1 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  if (param_6 == 0) {
    param_6 = param_1->locinfo->lc_codepage;
  }
  cchWideChar = MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0
                                    ,0);
  if (cchWideChar == 0) goto LAB_00ff2905;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar2 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_00ff28bf:
        lpWideCharStr = (LPCWSTR)(puVar2 + 2);
      }
    }
    else {
      puVar2 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0xdddd;
        goto LAB_00ff28bf;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar3 = MultiByteToWideChar(param_6,1,param_3,param_4,lpWideCharStr,cchWideChar);
    if (iVar3 != 0) {
      GetStringTypeW(param_2,lpWideCharStr,iVar3,param_5);
    }
    __freea(lpWideCharStr);
  }
LAB_00ff2905:
  iVar3 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

// 00FF2917  ___crtGetStringTypeA  size=64  [run]
/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2010 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  pthreadlocinfo in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)&stack0xffffffec,_DWInfoType,_LpSrcStr,_CchSrc,_LpCharType
                     ,_Code_page,in_stack_00000020,(int)in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}

// 00FF2957  __calloc_impl  size=130  [run]
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2010 Release */

LPVOID __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  
  if ((param_1 != 0) && (0xffffffe0 / param_1 < param_2)) {
    piVar1 = __errno();
    *piVar1 = 0xc;
    return (LPVOID)0x0;
  }
  param_1 = param_1 * param_2;
  if (param_1 == 0) {
    param_1 = 1;
  }
  do {
    if ((param_1 < 0xffffffe1) &&
       (pvVar2 = HeapAlloc(DAT_01f8f878,8,param_1), pvVar2 != (LPVOID)0x0)) {
      return pvVar2;
    }
    if (DAT_01f8fba8 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return (LPVOID)0x0;
      }
      *param_3 = 0xc;
      return (LPVOID)0x0;
    }
    iVar3 = __callnewh(param_1);
  } while (iVar3 != 0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0xc;
  }
  return (LPVOID)0x0;
}

// 00FF29D9  _realloc  size=173  [run]
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  LPVOID pvVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
  }
  else {
    do {
      if (0xffffffe0 < _NewSize) {
        __callnewh(_NewSize);
        piVar4 = __errno();
        *piVar4 = 0xc;
        return (void *)0x0;
      }
      if (_NewSize == 0) {
        _NewSize = 1;
      }
      pvVar2 = HeapReAlloc(DAT_01f8f878,0,_Memory,_NewSize);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      if (DAT_01f8fba8 == 0) {
        piVar4 = __errno();
        DVar5 = GetLastError();
        iVar3 = __get_errno_from_oserr(DVar5);
        *piVar4 = iVar3;
        return (void *)0x0;
      }
      iVar3 = __callnewh(_NewSize);
    } while (iVar3 != 0);
    piVar4 = __errno();
    DVar5 = GetLastError();
    iVar3 = __get_errno_from_oserr(DVar5);
    *piVar4 = iVar3;
  }
  return (void *)0x0;
}

// 00FF2A86  __recalloc  size=110  [run]
/* Library Function - Single Match
    __recalloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl __recalloc(void *_Memory,size_t _Count,size_t _Size)

{
  int *piVar1;
  void *pvVar2;
  uint _NewSize;
  size_t sVar3;
  
  sVar3 = 0;
  if ((_Count == 0) || (_Size <= 0xffffffe0 / _Count)) {
    _NewSize = _Count * _Size;
    if (_Memory != (void *)0x0) {
      sVar3 = __msize(_Memory);
    }
    pvVar2 = _realloc(_Memory,_NewSize);
    if ((pvVar2 != (void *)0x0) && (sVar3 < _NewSize)) {
      _memset((void *)(sVar3 + (int)pvVar2),0,_NewSize - sVar3);
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0xc;
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}

// 00FF2AF4  __get_lc_time  size=2047  [run]
/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2010 Release */

uint __fastcall __get_lc_time(void *param_1)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  LPCWSTR _LocaleName;
  localeinfo_struct local_10;
  LPCWSTR local_8;
  
  _LocaleName = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x42);
  local_8 = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x44);
  if (param_1 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_10.mbcinfo = (pthreadmbcinfo)0x0;
    uVar2 = ___getlocaleinfo(&local_10,1,_LocaleName,0x31,(void *)((int)param_1 + 4));
    uVar3 = ___getlocaleinfo(&local_10,1,_LocaleName,0x32,(void *)((int)param_1 + 8));
    uVar4 = ___getlocaleinfo(&local_10,1,_LocaleName,0x33,(void *)((int)param_1 + 0xc));
    uVar5 = ___getlocaleinfo(&local_10,1,_LocaleName,0x34,(void *)((int)param_1 + 0x10));
    uVar6 = ___getlocaleinfo(&local_10,1,_LocaleName,0x35,(void *)((int)param_1 + 0x14));
    uVar7 = ___getlocaleinfo(&local_10,1,_LocaleName,0x36,(void *)((int)param_1 + 0x18));
    uVar8 = ___getlocaleinfo(&local_10,1,_LocaleName,0x37,param_1);
    uVar9 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2a,(void *)((int)param_1 + 0x20));
    uVar10 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2b,(void *)((int)param_1 + 0x24));
    uVar11 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2c,(void *)((int)param_1 + 0x28));
    uVar12 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2d,(void *)((int)param_1 + 0x2c));
    uVar13 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2e,(void *)((int)param_1 + 0x30));
    uVar14 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2f,(void *)((int)param_1 + 0x34));
    uVar15 = ___getlocaleinfo(&local_10,1,_LocaleName,0x30,(void *)((int)param_1 + 0x1c));
    uVar16 = ___getlocaleinfo(&local_10,1,_LocaleName,0x44,(void *)((int)param_1 + 0x38));
    uVar17 = ___getlocaleinfo(&local_10,1,_LocaleName,0x45,(void *)((int)param_1 + 0x3c));
    uVar18 = ___getlocaleinfo(&local_10,1,_LocaleName,0x46,(void *)((int)param_1 + 0x40));
    uVar19 = ___getlocaleinfo(&local_10,1,_LocaleName,0x47,(void *)((int)param_1 + 0x44));
    uVar20 = ___getlocaleinfo(&local_10,1,_LocaleName,0x48,(void *)((int)param_1 + 0x48));
    uVar21 = ___getlocaleinfo(&local_10,1,_LocaleName,0x49,(void *)((int)param_1 + 0x4c));
    uVar22 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4a,(void *)((int)param_1 + 0x50));
    uVar23 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4b,(void *)((int)param_1 + 0x54));
    uVar24 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4c,(void *)((int)param_1 + 0x58));
    uVar25 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4d,(void *)((int)param_1 + 0x5c));
    uVar26 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4e,(void *)((int)param_1 + 0x60));
    uVar27 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4f,(void *)((int)param_1 + 100));
    uVar28 = ___getlocaleinfo(&local_10,1,_LocaleName,0x38,(void *)((int)param_1 + 0x68));
    uVar29 = ___getlocaleinfo(&local_10,1,_LocaleName,0x39,(void *)((int)param_1 + 0x6c));
    uVar30 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3a,(void *)((int)param_1 + 0x70));
    uVar31 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3b,(void *)((int)param_1 + 0x74));
    uVar32 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3c,(void *)((int)param_1 + 0x78));
    uVar33 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3d,(void *)((int)param_1 + 0x7c));
    uVar34 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3e,(void *)((int)param_1 + 0x80));
    uVar35 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3f,(void *)((int)param_1 + 0x84));
    uVar36 = ___getlocaleinfo(&local_10,1,_LocaleName,0x40,(void *)((int)param_1 + 0x88));
    uVar37 = ___getlocaleinfo(&local_10,1,_LocaleName,0x41,(void *)((int)param_1 + 0x8c));
    uVar38 = ___getlocaleinfo(&local_10,1,_LocaleName,0x42,(void *)((int)param_1 + 0x90));
    uVar39 = ___getlocaleinfo(&local_10,1,_LocaleName,0x43,(void *)((int)param_1 + 0x94));
    uVar40 = ___getlocaleinfo(&local_10,1,_LocaleName,0x28,(void *)((int)param_1 + 0x98));
    uVar41 = ___getlocaleinfo(&local_10,1,_LocaleName,0x29,(void *)((int)param_1 + 0x9c));
    uVar42 = ___getlocaleinfo(&local_10,1,local_8,0x1f,(void *)((int)param_1 + 0xa0));
    uVar43 = ___getlocaleinfo(&local_10,1,local_8,0x20,(void *)((int)param_1 + 0xa4));
    uVar44 = ___getlocaleinfo(&local_10,1,local_8,0x1003,(void *)((int)param_1 + 0xa8));
    uVar45 = ___getlocaleinfo(&local_10,0,local_8,0x1009,(void *)((int)param_1 + 0xb0));
    *(LPCWSTR *)((int)param_1 + 0xac) = local_8;
    uVar46 = ___getlocaleinfo(&local_10,2,_LocaleName,0x31,(void *)((int)param_1 + 0xbc));
    uVar47 = ___getlocaleinfo(&local_10,2,_LocaleName,0x32,(void *)((int)param_1 + 0xc0));
    uVar48 = ___getlocaleinfo(&local_10,2,_LocaleName,0x33,(void *)((int)param_1 + 0xc4));
    uVar49 = ___getlocaleinfo(&local_10,2,_LocaleName,0x34,(void *)((int)param_1 + 200));
    uVar50 = ___getlocaleinfo(&local_10,2,_LocaleName,0x35,(void *)((int)param_1 + 0xcc));
    uVar51 = ___getlocaleinfo(&local_10,2,_LocaleName,0x36,(void *)((int)param_1 + 0xd0));
    uVar52 = ___getlocaleinfo(&local_10,2,_LocaleName,0x37,(void *)((int)param_1 + 0xb8));
    uVar53 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2a,(void *)((int)param_1 + 0xd8));
    uVar54 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2b,(void *)((int)param_1 + 0xdc));
    uVar55 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2c,(void *)((int)param_1 + 0xe0));
    uVar56 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2d,(void *)((int)param_1 + 0xe4));
    uVar57 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2e,(void *)((int)param_1 + 0xe8));
    uVar58 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2f,(void *)((int)param_1 + 0xec));
    uVar59 = ___getlocaleinfo(&local_10,2,_LocaleName,0x30,(void *)((int)param_1 + 0xd4));
    uVar60 = ___getlocaleinfo(&local_10,2,_LocaleName,0x44,(void *)((int)param_1 + 0xf0));
    uVar61 = ___getlocaleinfo(&local_10,2,_LocaleName,0x45,(void *)((int)param_1 + 0xf4));
    uVar62 = ___getlocaleinfo(&local_10,2,_LocaleName,0x46,(void *)((int)param_1 + 0xf8));
    uVar63 = ___getlocaleinfo(&local_10,2,_LocaleName,0x47,(void *)((int)param_1 + 0xfc));
    uVar64 = ___getlocaleinfo(&local_10,2,_LocaleName,0x48,(void *)((int)param_1 + 0x100));
    uVar65 = ___getlocaleinfo(&local_10,2,_LocaleName,0x49,(void *)((int)param_1 + 0x104));
    uVar66 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4a,(void *)((int)param_1 + 0x108));
    uVar67 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4b,(void *)((int)param_1 + 0x10c));
    uVar68 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4c,(void *)((int)param_1 + 0x110));
    uVar69 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4d,(void *)((int)param_1 + 0x114));
    uVar70 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4e,(void *)((int)param_1 + 0x118));
    uVar71 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4f,(void *)((int)param_1 + 0x11c));
    uVar72 = ___getlocaleinfo(&local_10,2,_LocaleName,0x38,(void *)((int)param_1 + 0x120));
    uVar73 = ___getlocaleinfo(&local_10,2,_LocaleName,0x39,(void *)((int)param_1 + 0x124));
    uVar74 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3a,(void *)((int)param_1 + 0x128));
    uVar75 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3b,(void *)((int)param_1 + 300));
    uVar76 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3c,(void *)((int)param_1 + 0x130));
    uVar77 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3d,(void *)((int)param_1 + 0x134));
    uVar78 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3e,(void *)((int)param_1 + 0x138));
    uVar79 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3f,(void *)((int)param_1 + 0x13c));
    uVar80 = ___getlocaleinfo(&local_10,2,_LocaleName,0x40,(void *)((int)param_1 + 0x140));
    uVar81 = ___getlocaleinfo(&local_10,2,_LocaleName,0x41,(void *)((int)param_1 + 0x144));
    uVar82 = ___getlocaleinfo(&local_10,2,_LocaleName,0x42,(void *)((int)param_1 + 0x148));
    uVar83 = ___getlocaleinfo(&local_10,2,_LocaleName,0x43,(void *)((int)param_1 + 0x14c));
    uVar84 = ___getlocaleinfo(&local_10,2,_LocaleName,0x28,(void *)((int)param_1 + 0x150));
    uVar85 = ___getlocaleinfo(&local_10,2,_LocaleName,0x29,(void *)((int)param_1 + 0x154));
    uVar86 = ___getlocaleinfo(&local_10,2,local_8,0x1f,(void *)((int)param_1 + 0x158));
    uVar87 = ___getlocaleinfo(&local_10,2,local_8,0x20,(void *)((int)param_1 + 0x15c));
    uVar1 = ___getlocaleinfo(&local_10,2,local_8,0x1003,(void *)((int)param_1 + 0x160));
    uVar1 = uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11
                    | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20
                    | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29
                    | uVar30 | uVar31 | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38
                    | uVar39 | uVar40 | uVar41 | uVar42 | uVar43 | uVar44 | uVar45 | uVar46 | uVar47
                    | uVar48 | uVar49 | uVar50 | uVar51 | uVar52 | uVar53 | uVar54 | uVar55 | uVar56
                    | uVar57 | uVar58 | uVar59 | uVar60 | uVar61 | uVar62 | uVar63 | uVar64 | uVar65
                    | uVar66 | uVar67 | uVar68 | uVar69 | uVar70 | uVar71 | uVar72 | uVar73 | uVar74
                    | uVar75 | uVar76 | uVar77 | uVar78 | uVar79 | uVar80 | uVar81 | uVar82 | uVar83
                    | uVar84 | uVar85 | uVar86 | uVar87;
  }
  return uVar1;
}

// 00FF32F3  ___free_lc_time  size=887  [run]
/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2010 Release */

void ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _free((void *)param_1[1]);
    _free((void *)param_1[2]);
    _free((void *)param_1[3]);
    _free((void *)param_1[4]);
    _free((void *)param_1[5]);
    _free((void *)param_1[6]);
    _free((void *)*param_1);
    _free((void *)param_1[8]);
    _free((void *)param_1[9]);
    _free((void *)param_1[10]);
    _free((void *)param_1[0xb]);
    _free((void *)param_1[0xc]);
    _free((void *)param_1[0xd]);
    _free((void *)param_1[7]);
    _free((void *)param_1[0xe]);
    _free((void *)param_1[0xf]);
    _free((void *)param_1[0x10]);
    _free((void *)param_1[0x11]);
    _free((void *)param_1[0x12]);
    _free((void *)param_1[0x13]);
    _free((void *)param_1[0x14]);
    _free((void *)param_1[0x15]);
    _free((void *)param_1[0x16]);
    _free((void *)param_1[0x17]);
    _free((void *)param_1[0x18]);
    _free((void *)param_1[0x19]);
    _free((void *)param_1[0x1a]);
    _free((void *)param_1[0x1b]);
    _free((void *)param_1[0x1c]);
    _free((void *)param_1[0x1d]);
    _free((void *)param_1[0x1e]);
    _free((void *)param_1[0x1f]);
    _free((void *)param_1[0x20]);
    _free((void *)param_1[0x21]);
    _free((void *)param_1[0x22]);
    _free((void *)param_1[0x23]);
    _free((void *)param_1[0x24]);
    _free((void *)param_1[0x25]);
    _free((void *)param_1[0x26]);
    _free((void *)param_1[0x27]);
    _free((void *)param_1[0x28]);
    _free((void *)param_1[0x29]);
    _free((void *)param_1[0x2a]);
    _free((void *)param_1[0x2f]);
    _free((void *)param_1[0x30]);
    _free((void *)param_1[0x31]);
    _free((void *)param_1[0x32]);
    _free((void *)param_1[0x33]);
    _free((void *)param_1[0x34]);
    _free((void *)param_1[0x2e]);
    _free((void *)param_1[0x36]);
    _free((void *)param_1[0x37]);
    _free((void *)param_1[0x38]);
    _free((void *)param_1[0x39]);
    _free((void *)param_1[0x3a]);
    _free((void *)param_1[0x3b]);
    _free((void *)param_1[0x35]);
    _free((void *)param_1[0x3c]);
    _free((void *)param_1[0x3d]);
    _free((void *)param_1[0x3e]);
    _free((void *)param_1[0x3f]);
    _free((void *)param_1[0x40]);
    _free((void *)param_1[0x41]);
    _free((void *)param_1[0x42]);
    _free((void *)param_1[0x43]);
    _free((void *)param_1[0x44]);
    _free((void *)param_1[0x45]);
    _free((void *)param_1[0x46]);
    _free((void *)param_1[0x47]);
    _free((void *)param_1[0x48]);
    _free((void *)param_1[0x49]);
    _free((void *)param_1[0x4a]);
    _free((void *)param_1[0x4b]);
    _free((void *)param_1[0x4c]);
    _free((void *)param_1[0x4d]);
    _free((void *)param_1[0x4e]);
    _free((void *)param_1[0x4f]);
    _free((void *)param_1[0x50]);
    _free((void *)param_1[0x51]);
    _free((void *)param_1[0x52]);
    _free((void *)param_1[0x53]);
    _free((void *)param_1[0x54]);
    _free((void *)param_1[0x55]);
    _free((void *)param_1[0x56]);
    _free((void *)param_1[0x57]);
    _free((void *)param_1[0x58]);
  }
  return;
}

// 00FF366A  ___init_time  size=125  [run]
/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2010 Release */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  undefined **ppuVar1;
  undefined **_Memory;
  int iVar2;
  
  if (_LocInfo->lc_category[1].locale == (char *)0x0) {
    _Memory = &PTR_DAT_018e8f78;
LAB_00ff36c4:
    ppuVar1 = (undefined **)_LocInfo[1].lc_category[0].wrefcount;
    if (ppuVar1 != &PTR_DAT_018e8f78) {
      InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
    }
    _LocInfo[1].lc_category[0].wrefcount = (int *)_Memory;
    iVar2 = 0;
  }
  else {
    _Memory = __calloc_crt(1,0x164);
    if (_Memory != (undefined **)0x0) {
      iVar2 = __get_lc_time();
      if (iVar2 == 0) {
        _Memory[0x2d] = (undefined *)0x1;
        goto LAB_00ff36c4;
      }
      ___free_lc_time(_Memory);
      _free(_Memory);
    }
    iVar2 = 1;
  }
  return iVar2;
}

// 00FF3717  ___free_lconv_num  size=105  [run]
/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2010 Release */

void ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_018e8800) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_018e8804) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_018e8808) {
      _free((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_018e8830) {
      _free((undefined *)param_1[0xc]);
    }
    if ((undefined *)param_1[0xd] != PTR_DAT_018e8834) {
      _free((undefined *)param_1[0xd]);
    }
  }
  return;
}

// 00FF3780  ___init_numeric  size=496  [run]
/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 2010 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  LONG LVar7;
  int iVar8;
  undefined **_Address;
  undefined4 *puVar9;
  LPCWSTR _LocaleName;
  char *pcVar10;
  undefined **ppuVar11;
  localeinfo_struct local_14;
  wchar_t *local_c;
  wchar_t *local_8;
  
  local_14.locinfo = _LocInfo;
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].wrefcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].refcount == (int *)0x0)) {
    local_8 = (wchar_t *)0x0;
    local_c = (wchar_t *)0x0;
    _Address = &PTR_DAT_018e8800;
LAB_00ff3915:
    if (_LocInfo->locale_name[5] != (wchar_t *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo->locale_name[5]);
    }
    if ((_LocInfo->locale_name[4] != (wchar_t *)0x0) &&
       (LVar7 = InterlockedDecrement((LONG *)_LocInfo->locale_name[4]), LVar7 == 0)) {
      _free(_LocInfo->locale_name[4]);
      _free((void *)_LocInfo[1].lc_codepage);
    }
    _LocInfo->locale_name[5] = local_8;
    _LocInfo->locale_name[4] = local_c;
    _LocInfo[1].lc_codepage = (uint)_Address;
    iVar8 = 0;
  }
  else {
    _Address = __calloc_crt(1,0x50);
    if (_Address != (undefined **)0x0) {
      puVar9 = (undefined4 *)_LocInfo[1].lc_codepage;
      ppuVar11 = _Address;
      for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
        *ppuVar11 = (undefined *)*puVar9;
        puVar9 = puVar9 + 1;
        ppuVar11 = ppuVar11 + 1;
      }
      local_c = __malloc_crt(4);
      if (local_c != (wchar_t *)0x0) {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].wrefcount == (int *)0x0) {
          *_Address = PTR_DAT_018e8800;
          _Address[1] = PTR_DAT_018e8804;
          _Address[2] = PTR_DAT_018e8808;
          _Address[0xc] = PTR_DAT_018e8830;
          local_8 = (wchar_t *)0x0;
          _Address[0xd] = PTR_DAT_018e8834;
        }
        else {
          local_8 = __malloc_crt(4);
          if (local_8 == (wchar_t *)0x0) {
            iVar8 = 1;
LAB_00ff3810:
            _free(_Address);
            _free(local_c);
            return iVar8;
          }
          local_8[0] = L'\0';
          local_8[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*(ushort *)((int)&_LocInfo->lc_category[2].wrefcount + 2);
          iVar8 = ___getlocaleinfo(&local_14,1,_LocaleName,0xe,_Address);
          iVar2 = ___getlocaleinfo(&local_14,1,_LocaleName,0xf,_Address + 1);
          iVar3 = ___getlocaleinfo(&local_14,1,_LocaleName,0x10,_Address + 2);
          iVar4 = ___getlocaleinfo(&local_14,2,_LocaleName,0xe,_Address + 0xc);
          iVar5 = ___getlocaleinfo(&local_14,2,_LocaleName,0xf,_Address + 0xd);
          if (iVar5 != 0 || (((iVar8 != 0 || iVar2 != 0) || iVar3 != 0) || iVar4 != 0)) {
            ___free_lconv_num(_Address);
            iVar8 = -1;
            goto LAB_00ff3810;
          }
          pcVar6 = _Address[2];
          while (*pcVar6 != '\0') {
            cVar1 = *pcVar6;
            if ((cVar1 < '0') || ('9' < cVar1)) {
              pcVar10 = pcVar6;
              if (cVar1 != ';') goto LAB_00ff38bb;
              do {
                *pcVar10 = pcVar10[1];
                pcVar10 = pcVar10 + 1;
              } while (*pcVar10 != '\0');
            }
            else {
              *pcVar6 = cVar1 + -0x30;
LAB_00ff38bb:
              pcVar6 = pcVar6 + 1;
            }
          }
        }
        local_c[0] = L'\x01';
        local_c[1] = L'\0';
        if (local_8 != (wchar_t *)0x0) {
          local_8[0] = L'\x01';
          local_8[1] = L'\0';
        }
        goto LAB_00ff3915;
      }
      _free(_Address);
    }
    iVar8 = 1;
  }
  return iVar8;
}

// 00FF39A0  ___free_lconv_mon  size=254  [run]
/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2010 Release */

void ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_018e880c) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_018e8810) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_018e8814) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_018e8818) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_018e881c) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_018e8820) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_018e8824) {
      _free(*(undefined **)(param_1 + 0x24));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_018e8838) {
      _free(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x3c) != PTR_DAT_018e883c) {
      _free(*(undefined **)(param_1 + 0x3c));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_018e8840) {
      _free(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x44) != PTR_DAT_018e8844) {
      _free(*(undefined **)(param_1 + 0x44));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_018e8848) {
      _free(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x4c) != PTR_DAT_018e884c) {
      _free(*(undefined **)(param_1 + 0x4c));
    }
  }
  return;
}

// 00FF3A9E  ___init_monetary  size=864  [run]
/* Library Function - Single Match
    ___init_monetary
   
   Library: Visual Studio 2010 Release */

int __cdecl ___init_monetary(threadlocinfo *_LocInfo)

{
  char cVar1;
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
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  char *pcVar22;
  LONG LVar23;
  int iVar24;
  undefined **_Memory;
  LPCWSTR _LocaleName;
  char *pcVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  localeinfo_struct local_14;
  wchar_t *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_14.locinfo = _LocInfo;
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].refcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].wrefcount == (int *)0x0)) {
    local_8 = (undefined4 *)0x0;
    local_c = (wchar_t *)0x0;
    _Memory = &PTR_DAT_018e8800;
LAB_00ff3da1:
    if ((LONG *)_LocInfo[1].refcount != (LONG *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo[1].refcount);
    }
    if ((_LocInfo->locale_name[4] != (wchar_t *)0x0) &&
       (LVar23 = InterlockedDecrement((LONG *)_LocInfo->locale_name[4]), LVar23 == 0)) {
      _free((void *)_LocInfo[1].lc_codepage);
      _free(_LocInfo->locale_name[4]);
    }
    _LocInfo[1].refcount = (int)local_8;
    _LocInfo->locale_name[4] = local_c;
    _LocInfo[1].lc_codepage = (uint)_Memory;
    iVar24 = 0;
  }
  else {
    _Memory = __calloc_crt(1,0x50);
    if (_Memory != (undefined **)0x0) {
      local_c = __malloc_crt(4);
      if (local_c == (wchar_t *)0x0) {
        _free(_Memory);
      }
      else {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].refcount == (int *)0x0) {
          ppuVar26 = &PTR_DAT_018e8800;
          ppuVar27 = _Memory;
          for (iVar24 = 0x14; iVar24 != 0; iVar24 = iVar24 + -1) {
            *ppuVar27 = *ppuVar26;
            ppuVar26 = ppuVar26 + 1;
            ppuVar27 = ppuVar27 + 1;
          }
LAB_00ff3d4d:
          *_Memory = *(undefined **)_LocInfo[1].lc_codepage;
          _Memory[1] = *(undefined **)(_LocInfo[1].lc_codepage + 4);
          _Memory[2] = *(undefined **)(_LocInfo[1].lc_codepage + 8);
          _Memory[0xc] = *(undefined **)(_LocInfo[1].lc_codepage + 0x30);
          _Memory[0xd] = *(undefined **)(_LocInfo[1].lc_codepage + 0x34);
          local_c[0] = L'\x01';
          local_c[1] = L'\0';
          if (local_8 != (undefined4 *)0x0) {
            *local_8 = 1;
          }
          goto LAB_00ff3da1;
        }
        local_8 = __malloc_crt(4);
        if (local_8 == (undefined4 *)0x0) {
          _free(_Memory);
          _free(local_c);
        }
        else {
          *local_8 = 0;
          _LocaleName = (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].refcount;
          iVar24 = ___getlocaleinfo(&local_14,1,_LocaleName,0x15,_Memory + 3);
          iVar2 = ___getlocaleinfo(&local_14,1,_LocaleName,0x14,_Memory + 4);
          iVar3 = ___getlocaleinfo(&local_14,1,_LocaleName,0x16,_Memory + 5);
          iVar4 = ___getlocaleinfo(&local_14,1,_LocaleName,0x17,_Memory + 6);
          iVar5 = ___getlocaleinfo(&local_14,1,_LocaleName,0x18,_Memory + 7);
          iVar6 = ___getlocaleinfo(&local_14,1,_LocaleName,0x50,_Memory + 8);
          iVar7 = ___getlocaleinfo(&local_14,1,_LocaleName,0x51,_Memory + 9);
          iVar8 = ___getlocaleinfo(&local_14,0,_LocaleName,0x1a,_Memory + 10);
          iVar9 = ___getlocaleinfo(&local_14,0,_LocaleName,0x19,(void *)((int)_Memory + 0x29));
          iVar10 = ___getlocaleinfo(&local_14,0,_LocaleName,0x54,(void *)((int)_Memory + 0x2a));
          iVar11 = ___getlocaleinfo(&local_14,0,_LocaleName,0x55,(void *)((int)_Memory + 0x2b));
          iVar12 = ___getlocaleinfo(&local_14,0,_LocaleName,0x56,_Memory + 0xb);
          iVar13 = ___getlocaleinfo(&local_14,0,_LocaleName,0x57,(void *)((int)_Memory + 0x2d));
          iVar14 = ___getlocaleinfo(&local_14,0,_LocaleName,0x52,(void *)((int)_Memory + 0x2e));
          iVar15 = ___getlocaleinfo(&local_14,0,_LocaleName,0x53,(void *)((int)_Memory + 0x2f));
          iVar16 = ___getlocaleinfo(&local_14,2,_LocaleName,0x15,_Memory + 0xe);
          iVar17 = ___getlocaleinfo(&local_14,2,_LocaleName,0x14,_Memory + 0xf);
          iVar18 = ___getlocaleinfo(&local_14,2,_LocaleName,0x16,_Memory + 0x10);
          iVar19 = ___getlocaleinfo(&local_14,2,_LocaleName,0x17,_Memory + 0x11);
          iVar20 = ___getlocaleinfo(&local_14,2,_LocaleName,0x50,_Memory + 0x12);
          iVar21 = ___getlocaleinfo(&local_14,2,_LocaleName,0x51,_Memory + 0x13);
          if (iVar21 == 0 &&
              (((((((((((((((((((iVar24 == 0 && iVar2 == 0) && iVar3 == 0) && iVar4 == 0) &&
                             iVar5 == 0) && iVar6 == 0) && iVar7 == 0) && iVar8 == 0) && iVar9 == 0)
                        && iVar10 == 0) && iVar11 == 0) && iVar12 == 0) && iVar13 == 0) &&
                    iVar14 == 0) && iVar15 == 0) && iVar16 == 0) && iVar17 == 0) && iVar18 == 0) &&
               iVar19 == 0) && iVar20 == 0)) {
            pcVar22 = _Memory[7];
            while (*pcVar22 != '\0') {
              cVar1 = *pcVar22;
              if ((cVar1 < '0') || ('9' < cVar1)) {
                pcVar25 = pcVar22;
                if (cVar1 != ';') goto LAB_00ff3d25;
                do {
                  *pcVar25 = pcVar25[1];
                  pcVar25 = pcVar25 + 1;
                } while (*pcVar25 != '\0');
              }
              else {
                *pcVar22 = cVar1 + -0x30;
LAB_00ff3d25:
                pcVar22 = pcVar22 + 1;
              }
            }
            goto LAB_00ff3d4d;
          }
          ___free_lconv_mon(_Memory);
          _free(_Memory);
          _free(local_c);
          _free(local_8);
        }
      }
    }
    iVar24 = 1;
  }
  return iVar24;
}

// 00FF3E01  FUN_00ff3e01  size=98  [run]
bool FUN_00ff3e01(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      bVar5 = iVar2 == 0;
      iVar2 = 0;
      if (bVar5) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = __stricmp((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}

// 00FF3E77  _ProcessCodePage  size=132  [run]
/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2010 Release */

UINT _ProcessCodePage(void)

{
  int iVar1;
  UINT UVar2;
  char *unaff_ESI;
  int unaff_EDI;
  UINT local_8;
  
  if (((unaff_ESI != (char *)0x0) && (*unaff_ESI != '\0')) &&
     (iVar1 = _strcmp(unaff_ESI,"ACP"), iVar1 != 0)) {
    iVar1 = _strcmp(unaff_ESI,"OCP");
    if (iVar1 != 0) {
      UVar2 = _atol(unaff_ESI);
      return UVar2;
    }
    iVar1 = GetLocaleInfoW(*(LCID *)(unaff_EDI + 0x1c),0x2000000b,(LPWSTR)&local_8,2);
    if (iVar1 == 0) {
      return 0;
    }
    return local_8;
  }
  iVar1 = GetLocaleInfoW(*(LCID *)(unaff_EDI + 0x1c),0x20001004,(LPWSTR)&local_8,2);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_8 != 0) {
    return local_8;
  }
  UVar2 = GetACP();
  return UVar2;
}

// 00FF3EFB  _TestDefaultCountry  size=37  [run]
/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2010 Release */

undefined4 _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_01700a68 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}

// 00FF3F20  _LcidFromHexString  size=49  [run]
/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2010 Release */

int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *param_2, cVar1 != '\0') {
    param_2 = param_2 + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 + -7;
    }
    iVar2 = cVar1 + -0x30 + iVar2 * 0x10;
  }
  return iVar2;
}

// 00FF3F51  _GetPrimaryLen  size=27  [run]
/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2010 Release */

int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

// 00FF3F6C  _CountryEnumProc@4  size=167  [run]
/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2010 Release */

void _CountryEnumProc_4(void)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString();
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
  }
  else {
    iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
    if ((iVar3 == 0) && (iVar3 = _TestDefaultCountry(Locale), iVar3 != 0)) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 4;
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
      (p_Var2->_setloc_data)._cachecp = Locale;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FF4013  _TestDefaultLanguage  size=91  [run]
/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2010 Release */

undefined4 _TestDefaultLanguage(int param_1,undefined4 *param_2)

{
  char *_Str;
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  uint local_8;
  
  iVar1 = GetLocaleInfoW(in_EAX & 0x3ff | 0x400,0x20000001,(LPWSTR)&local_8,2);
  if (iVar1 == 0) {
LAB_00ff403e:
    uVar2 = 0;
  }
  else {
    if ((in_EAX != local_8) && (param_1 != 0)) {
      _Str = (char *)*param_2;
      sVar3 = _GetPrimaryLen();
      sVar4 = _strlen(_Str);
      if (sVar3 == sVar4) goto LAB_00ff403e;
    }
    uVar2 = 1;
  }
  return uVar2;
}

// 00FF406E  _LangCountryEnumProc@4  size=465  [run]
/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2010 Release */

void _LangCountryEnumProc_4(void)

{
  int *piVar1;
  _setloc_struct *p_Var2;
  _ptiddata p_Var3;
  LCID Locale;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  p_Var3 = __getptd();
  p_Var2 = &p_Var3->_setloc_data;
  Locale = _LcidFromHexString();
  iVar4 = GetLocaleInfoA(Locale,(-(uint)((p_Var3->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar4 == 0) {
LAB_00ff40bf:
    (p_Var3->_setloc_data).iLocState = 0;
    goto LAB_00ff422e;
  }
  iVar4 = __stricmp((char *)(p_Var3->_setloc_data).pchCountry,local_80);
  if (iVar4 == 0) {
    iVar4 = GetLocaleInfoA(Locale,(-(uint)((p_Var3->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar4 == 0) goto LAB_00ff40bf;
    iVar4 = __stricmp((char *)p_Var2->pchLanguage,local_80);
    if (iVar4 == 0) {
      piVar1 = &(p_Var3->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var3->_setloc_data)._cachecp = Locale;
LAB_00ff416f:
      *(LCID *)(p_Var3->_setloc_data)._cachein = Locale;
    }
    else if (((p_Var3->_setloc_data).iLocState & 2) == 0) {
      sVar5 = (p_Var3->_setloc_data).iPrimaryLen;
      if ((sVar5 == 0) ||
         (iVar4 = __strnicmp((char *)p_Var2->pchLanguage,local_80,sVar5), iVar4 != 0)) {
        if (((p_Var3->_setloc_data).iLocState & 1U) == 0) {
          uVar6 = _TestDefaultCountry(Locale);
          if ((int)uVar6 != 0) {
            (p_Var3->_setloc_data).iLocState = (uint)((ulonglong)uVar6 >> 0x20) | 1;
            goto LAB_00ff416f;
          }
        }
      }
      else {
        piVar1 = &(p_Var3->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 2;
        *(LCID *)(p_Var3->_setloc_data)._cachein = Locale;
        sVar5 = _strlen((char *)p_Var2->pchLanguage);
        if (sVar5 == (p_Var3->_setloc_data).iPrimaryLen) {
          (p_Var3->_setloc_data)._cachecp = Locale;
        }
      }
    }
  }
  if (((p_Var3->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_00ff422e;
  iVar4 = GetLocaleInfoA(Locale,(-(uint)((p_Var3->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar4 == 0) goto LAB_00ff40bf;
  iVar4 = __stricmp((char *)p_Var2->pchLanguage,local_80);
  if (iVar4 == 0) {
    piVar1 = &(p_Var3->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var3->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var3->_setloc_data).iPrimaryLen != 0) &&
         (sVar5 = _strlen((char *)p_Var2->pchLanguage), sVar5 == (p_Var3->_setloc_data).iPrimaryLen)
         ) {
        uVar7 = 1;
        goto LAB_00ff4207;
      }
      goto LAB_00ff4214;
    }
    (p_Var3->_setloc_data).iLocState = (p_Var3->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var3->_setloc_data).bAbbrevLanguage != 0) || ((p_Var3->_setloc_data).iPrimaryLen == 0))
       || (iVar4 = __stricmp((char *)p_Var2->pchLanguage,local_80), iVar4 != 0)) goto LAB_00ff422e;
    uVar7 = 0;
LAB_00ff4207:
    iVar4 = _TestDefaultLanguage(uVar7,p_Var2);
    if (iVar4 == 0) goto LAB_00ff422e;
LAB_00ff4214:
    piVar1 = &(p_Var3->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var3->_setloc_data)._cachecp == 0) {
    (p_Var3->_setloc_data)._cachecp = Locale;
  }
LAB_00ff422e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FF423F  _LanguageEnumProc@4  size=192  [run]
/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2010 Release */

void _LanguageEnumProc_4(void)

{
  int *piVar1;
  _setloc_struct *p_Var2;
  _ptiddata p_Var3;
  LCID Locale;
  int iVar4;
  undefined4 uVar5;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  p_Var3 = __getptd();
  p_Var2 = &p_Var3->_setloc_data;
  Locale = _LcidFromHexString();
  iVar4 = GetLocaleInfoA(Locale,(-(uint)((p_Var3->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar4 == 0) {
    (p_Var3->_setloc_data).iLocState = 0;
    goto LAB_00ff42ef;
  }
  iVar4 = __stricmp((char *)p_Var2->pchLanguage,local_80);
  if (iVar4 == 0) {
    if ((p_Var3->_setloc_data).bAbbrevLanguage == 0) {
      uVar5 = 1;
      goto LAB_00ff42cd;
    }
  }
  else {
    if ((((p_Var3->_setloc_data).bAbbrevLanguage != 0) || ((p_Var3->_setloc_data).iPrimaryLen == 0))
       || (iVar4 = __stricmp((char *)p_Var2->pchLanguage,local_80), iVar4 != 0)) goto LAB_00ff42ef;
    uVar5 = 0;
LAB_00ff42cd:
    iVar4 = _TestDefaultLanguage(uVar5,p_Var2);
    if (iVar4 == 0) goto LAB_00ff42ef;
  }
  piVar1 = &(p_Var3->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var3->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var3->_setloc_data)._cachein = Locale;
LAB_00ff42ef:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FF432B  _GetLcidFromLangCountry  size=103  [run]
/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2010 Release */

void _GetLcidFromLangCountry(void)

{
  uint uVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  
  sVar2 = _strlen((char *)*unaff_ESI);
  unaff_ESI[4] = (uint)(sVar2 == 3);
  sVar2 = _strlen((char *)unaff_ESI[1]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = (uint)(sVar2 == 3);
  if (unaff_ESI[4] == 0) {
    uVar3 = _GetPrimaryLen();
  }
  else {
    uVar3 = 2;
  }
  unaff_ESI[3] = uVar3;
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  uVar1 = unaff_ESI[2];
  if ((((uVar1 & 0x100) == 0) || ((uVar1 & 0x200) == 0)) || ((uVar1 & 7) == 0)) {
    unaff_ESI[2] = 0;
  }
  return;
}

// 00FF4392  _GetLcidFromLanguage  size=60  [run]
/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Library: Visual Studio 2010 Release */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  
  sVar1 = _strlen((char *)*unaff_ESI);
  unaff_ESI[4] = (uint)(sVar1 == 3);
  if ((sVar1 == 3) == 0) {
    uVar2 = _GetPrimaryLen();
  }
  else {
    uVar2 = 2;
  }
  unaff_ESI[3] = uVar2;
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((*(byte *)(unaff_ESI + 2) & 4) == 0) {
    unaff_ESI[2] = 0;
  }
  return;
}

// 00FF43CE  ___get_qualified_locale  size=497  [run]
/* Library Function - Single Match
    ___get_qualified_locale
   
   Library: Visual Studio 2010 Release */

BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr)

{
  int *piVar1;
  wchar_t **ppwVar2;
  _setloc_struct *p_Var3;
  _ptiddata p_Var4;
  wchar_t *pwVar5;
  size_t sVar6;
  LCID LVar7;
  uint _Value;
  BOOL BVar8;
  errno_t eVar9;
  int iVar10;
  
  p_Var4 = __getptd();
  p_Var3 = &p_Var4->_setloc_data;
  if (_LpInStr == (LPLC_STRINGS)0x0) {
    piVar1 = &(p_Var4->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x104;
LAB_00ff44b7:
    LVar7 = GetUserDefaultLCID();
    (p_Var4->_setloc_data)._cachecp = LVar7;
    *(LCID *)(p_Var4->_setloc_data)._cachein = LVar7;
  }
  else {
    p_Var3->pchLanguage = _LpInStr->szLanguage;
    pwVar5 = _LpInStr->szLanguage + 0x20;
    ppwVar2 = &(p_Var4->_setloc_data).pchCountry;
    *ppwVar2 = pwVar5;
    if ((pwVar5 != (wchar_t *)0x0) && ((char)*pwVar5 != '\0')) {
      FUN_00ff3e01(&PTR_s_america_017009b0,0x16,ppwVar2);
    }
    (p_Var4->_setloc_data).iLocState = 0;
    if ((p_Var3->pchLanguage == (wchar_t *)0x0) || ((char)*p_Var3->pchLanguage == '\0')) {
      pwVar5 = *ppwVar2;
      if ((pwVar5 == (wchar_t *)0x0) || ((char)*pwVar5 == '\0')) {
        (p_Var4->_setloc_data).iLocState = 0x104;
        goto LAB_00ff44b7;
      }
      sVar6 = _strlen((char *)pwVar5);
      (p_Var4->_setloc_data).bAbbrevCountry = (uint)(sVar6 == 3);
      EnumSystemLocalesA(_CountryEnumProc_4,1);
      if (((p_Var4->_setloc_data).iLocState & 4) == 0) {
        (p_Var4->_setloc_data).iLocState = 0;
      }
    }
    else {
      if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
        _GetLcidFromLanguage();
      }
      else {
        _GetLcidFromLangCountry();
      }
      if ((p_Var4->_setloc_data).iLocState != 0) goto LAB_00ff44cd;
      iVar10 = FUN_00ff3e01(&PTR_s_american_017007a8,0x40,p_Var3);
      if (iVar10 != 0) {
        if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
    }
  }
  if ((p_Var4->_setloc_data).iLocState == 0) {
    return 0;
  }
LAB_00ff44cd:
  _Value = _ProcessCodePage();
  if ((((_Value == 0) || (_Value == 65000)) || (_Value == 0xfde9)) ||
     ((BVar8 = IsValidCodePage(_Value & 0xffff), BVar8 == 0 ||
      (BVar8 = IsValidLocale((p_Var4->_setloc_data)._cachecp,1), BVar8 == 0)))) {
    return 0;
  }
  if (_LpCodePage != (UINT *)0x0) {
    *(short *)_LpCodePage = (short)(p_Var4->_setloc_data)._cachecp;
    *(wchar_t *)((int)_LpCodePage + 2) = (p_Var4->_setloc_data)._cachein[0];
    *(short *)(_LpCodePage + 1) = (short)_Value;
  }
  if (_LpOutStr != (LPLC_STRINGS)0x0) {
    if ((short)*_LpCodePage == 0x814) {
      eVar9 = _strcpy_s((char *)_LpOutStr,0x40,"Norwegian-Nynorsk");
      if (eVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    else {
      iVar10 = GetLocaleInfoA((p_Var4->_setloc_data)._cachecp,0x1001,(LPSTR)_LpOutStr,0x40);
      if (iVar10 == 0) {
        return 0;
      }
    }
    iVar10 = GetLocaleInfoA(*(LCID *)(p_Var4->_setloc_data)._cachein,0x1002,
                            (LPSTR)(_LpOutStr->szLanguage + 0x20),0x40);
    if (iVar10 == 0) {
      return 0;
    }
    __itoa_s(_Value,(char *)_LpOutStr->szCountry,0x10,10);
  }
  return 1;
}

// 00FF5ADC  _memcmp  size=5330  [run]
/* Library Function - Single Match
    _memcmp
   
   Library: Visual Studio 2010 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (_Size == 0) {
    return 0;
  }
  if (_Size == 1) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
LAB_00ff6f0f:
    if (uVar2 == uVar3) {
      return 0;
    }
    return (uint)(0 < (int)(uVar2 - uVar3)) * 2 + -1;
  }
  if (_Size == 2) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    goto LAB_00ff6f0f;
  }
  if (_Size == 3) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    goto LAB_00ff6f0f;
  }
  if (_Size == 4) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 3);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 3);
    goto LAB_00ff6f0f;
  }
  for (; 0x1f < _Size; _Size = _Size - 0x20) {
    if (*(int *)_Buf1 == *(int *)_Buf2) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)_Buf1;
      uVar2 = (uint)*(byte *)_Buf2;
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 1);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 1);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 2);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 2);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 3) != (uint)*(byte *)((int)_Buf2 + 3)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 3) - (uint)*(byte *)((int)_Buf2 + 3)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 4) == *(int *)((int)_Buf2 + 4)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 4);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 4);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 5);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 5);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 6);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 6);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 7) != (uint)*(byte *)((int)_Buf2 + 7)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 7) - (uint)*(byte *)((int)_Buf2 + 7)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 8) == *(int *)((int)_Buf2 + 8)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 8);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 8);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 9);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 9);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 10);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xb) != (uint)*(byte *)((int)_Buf2 + 0xb)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xb) -
                                (uint)*(byte *)((int)_Buf2 + 0xb))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0xc) == *(int *)((int)_Buf2 + 0xc)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xc);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xc);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xd);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xd);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xe);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xe);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xf) != (uint)*(byte *)((int)_Buf2 + 0xf)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xf) -
                                (uint)*(byte *)((int)_Buf2 + 0xf))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x10) == *(int *)((int)_Buf2 + 0x10)) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x10);
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x11);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x11);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x12);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x12);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x13) != (uint)*(byte *)((int)_Buf2 + 0x13)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x13) -
                                (uint)*(byte *)((int)_Buf2 + 0x13))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x14) == *(int *)((int)_Buf2 + 0x14)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x14);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x14);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x15);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x15);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x16);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x16);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x17) != (uint)*(byte *)((int)_Buf2 + 0x17)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x17) -
                                (uint)*(byte *)((int)_Buf2 + 0x17))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x18) == *(int *)((int)_Buf2 + 0x18)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x18);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x18);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x19);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x19);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1a);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1a);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1b) != (uint)*(byte *)((int)_Buf2 + 0x1b)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1b) -
                                (uint)*(byte *)((int)_Buf2 + 0x1b))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x1c) == *(int *)((int)_Buf2 + 0x1c)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1c);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1c);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1d);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1d);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1e);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1e);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1f) != (uint)*(byte *)((int)_Buf2 + 0x1f)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1f) -
                                (uint)*(byte *)((int)_Buf2 + 0x1f))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    _Buf1 = (void *)((int)_Buf1 + 0x20);
    _Buf2 = (void *)((int)_Buf2 + 0x20);
  }
  switch(_Size) {
  default:
    goto switchD_00ff5f63_caseD_0;
  case 1:
    goto switchD_00ff5f63_caseD_1;
  case 2:
    goto switchD_00ff5f63_caseD_2;
  case 3:
    goto switchD_00ff5f63_caseD_3;
  case 4:
    goto switchD_00ff5f63_caseD_4;
  case 5:
    goto switchD_00ff5f63_caseD_5;
  case 6:
    goto switchD_00ff5f63_caseD_6;
  case 7:
    goto switchD_00ff5f63_caseD_7;
  case 8:
    goto switchD_00ff5f63_caseD_8;
  case 9:
    goto switchD_00ff5f63_caseD_9;
  case 10:
    goto switchD_00ff5f63_caseD_a;
  case 0xb:
    goto switchD_00ff5f63_caseD_b;
  case 0xc:
    goto switchD_00ff5f63_caseD_c;
  case 0xd:
    goto switchD_00ff5f63_caseD_d;
  case 0xe:
    goto switchD_00ff5f63_caseD_e;
  case 0xf:
    goto switchD_00ff5f63_caseD_f;
  case 0x10:
    goto switchD_00ff5f63_caseD_10;
  case 0x11:
    goto switchD_00ff5f63_caseD_11;
  case 0x12:
    goto switchD_00ff5f63_caseD_12;
  case 0x13:
    goto switchD_00ff5f63_caseD_13;
  case 0x14:
    goto switchD_00ff5f63_caseD_14;
  case 0x15:
    goto switchD_00ff5f63_caseD_15;
  case 0x16:
    goto switchD_00ff5f63_caseD_16;
  case 0x17:
    goto switchD_00ff5f63_caseD_17;
  case 0x18:
    goto switchD_00ff5f63_caseD_18;
  case 0x1a:
    goto switchD_00ff5f63_caseD_1a;
  case 0x1b:
    goto switchD_00ff5f63_caseD_1b;
  case 0x1c:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1c)) == *(uint *)((int)_Buf2 + (_Size - 0x1c))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1c)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x19))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x19)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_18:
    if (*(uint *)((int)_Buf1 + (_Size - 0x18)) == *(uint *)((int)_Buf2 + (_Size - 0x18))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x18)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x15))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x15)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_14:
    if (*(uint *)((int)_Buf1 + (_Size - 0x14)) == *(uint *)((int)_Buf2 + (_Size - 0x14))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x14)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x11))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x11)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_10:
    if (*(uint *)((int)_Buf1 + (_Size - 0x10)) == *(uint *)((int)_Buf2 + (_Size - 0x10))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x10)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xd))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xd)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_c:
    if (*(int *)((int)_Buf1 + (_Size - 0xc)) == *(int *)((int)_Buf2 + (_Size - 0xc))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 9)) != (uint)*(byte *)((int)_Buf2 + (_Size - 9))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 9)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 9)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_8:
    if (*(uint *)((int)_Buf1 + (_Size - 8)) == *(uint *)((int)_Buf2 + (_Size - 8))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 8)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 5)) != (uint)*(byte *)((int)_Buf2 + (_Size - 5))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 5)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 5)))) * 2 + -1;
      }
    }
    if (iVar1 == 0) {
switchD_00ff5f63_caseD_4:
      if (*(uint *)((int)_Buf1 + (_Size - 4)) == *(uint *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = 0;
      }
      else {
        uVar3 = *(uint *)((int)_Buf1 + (_Size - 4)) & 0xff;
        uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
        if ((uVar3 == uVar2) ||
           (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
          uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
          uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
          if ((uVar3 == uVar2) ||
             (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
            uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
            uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
            if ((uVar3 == uVar2) ||
               (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
              iVar1 = 0;
              if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) !=
                  (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
                iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                                        (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
              }
            }
          }
        }
      }
      if (iVar1 == 0) {
switchD_00ff5f63_caseD_0:
        iVar1 = 0;
      }
    }
    return iVar1;
  case 0x1d:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1d)) == *(uint *)((int)_Buf2 + (_Size - 0x1d))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1d)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  case 0x19:
    if (*(uint *)((int)_Buf1 + (_Size - 0x19)) == *(uint *)((int)_Buf2 + (_Size - 0x19))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x19)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x16))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x16)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_15:
    if (*(uint *)((int)_Buf1 + (_Size - 0x15)) == *(uint *)((int)_Buf2 + (_Size - 0x15))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x15)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x12))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x12)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_11:
    if (*(uint *)((int)_Buf1 + (_Size - 0x11)) == *(uint *)((int)_Buf2 + (_Size - 0x11))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x11)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xe))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xe)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_d:
    if (*(uint *)((int)_Buf1 + (_Size - 0xd)) == *(uint *)((int)_Buf2 + (_Size - 0xd))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xd)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 10)) != (uint)*(byte *)((int)_Buf2 + (_Size - 10)))
      {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 10)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 10)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_9:
    if (*(int *)((int)_Buf1 + (_Size - 9)) == *(int *)((int)_Buf2 + (_Size - 9))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 6)) != (uint)*(byte *)((int)_Buf2 + (_Size - 6))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 6)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 6)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_5:
    if (*(uint *)((int)_Buf1 + (_Size - 5)) == *(uint *)((int)_Buf2 + (_Size - 5))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 5)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 2)) != (uint)*(byte *)((int)_Buf2 + (_Size - 2))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 2)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 2)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_1:
    if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) == (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
      return 0;
    }
    return (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                           (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
  case 0x1e:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1e)) == *(uint *)((int)_Buf2 + (_Size - 0x1e))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1e)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_1a:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1a)) == *(uint *)((int)_Buf2 + (_Size - 0x1a))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1a)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x17))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x17)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_16:
    if (*(uint *)((int)_Buf1 + (_Size - 0x16)) == *(uint *)((int)_Buf2 + (_Size - 0x16))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x16)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x13))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x13)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_12:
    if (*(uint *)((int)_Buf1 + (_Size - 0x12)) == *(uint *)((int)_Buf2 + (_Size - 0x12))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x12)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xf))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xf)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_e:
    if (*(uint *)((int)_Buf1 + (_Size - 0xe)) == *(uint *)((int)_Buf2 + (_Size - 0xe))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xe)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xb))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xb)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_a:
    if (*(int *)((int)_Buf1 + (_Size - 10)) == *(int *)((int)_Buf2 + (_Size - 10))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 7)) != (uint)*(byte *)((int)_Buf2 + (_Size - 7))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 7)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 7)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_6:
    if (*(uint *)((int)_Buf1 + (_Size - 6)) == *(uint *)((int)_Buf2 + (_Size - 6))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 6)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 3)) != (uint)*(byte *)((int)_Buf2 + (_Size - 3))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 3)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 3)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_2:
    if (*(short *)((int)_Buf1 + (_Size - 2)) != *(short *)((int)_Buf2 + (_Size - 2))) {
LAB_00ff6aa1:
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      goto switchD_00ff5f63_caseD_1;
    }
    goto switchD_00ff5f63_caseD_0;
  case 0x1f:
    if (*(int *)((int)_Buf1 + (_Size - 0x1f)) == *(int *)((int)_Buf2 + (_Size - 0x1f))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1f));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1f));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1e));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_1b:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1b)) == *(uint *)((int)_Buf2 + (_Size - 0x1b))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1b)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x18))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x18)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_17:
    if (*(uint *)((int)_Buf1 + (_Size - 0x17)) == *(uint *)((int)_Buf2 + (_Size - 0x17))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x17)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x14))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x14)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_13:
    if (*(uint *)((int)_Buf1 + (_Size - 0x13)) == *(uint *)((int)_Buf2 + (_Size - 0x13))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x13)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x10))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x10)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_f:
    if (*(int *)((int)_Buf1 + (_Size - 0xf)) == *(int *)((int)_Buf2 + (_Size - 0xf))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xc))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xc)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_b:
    if (*(uint *)((int)_Buf1 + (_Size - 0xb)) == *(uint *)((int)_Buf2 + (_Size - 0xb))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xb)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 8)) != (uint)*(byte *)((int)_Buf2 + (_Size - 8))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 8)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 8)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_7:
    if (*(uint *)((int)_Buf1 + (_Size - 7)) == *(uint *)((int)_Buf2 + (_Size - 7))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 7)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 4)) != (uint)*(byte *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 4)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 4)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_00ff5f63_caseD_3:
    uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
    uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
    if ((uVar3 != uVar2) &&
       (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    goto LAB_00ff6aa1;
  }
}

// 00FF7030  _strpbrk  size=64  [run]
/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio 2010 Release */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}

// 00FF7070  FUN_00ff7070  size=15  [run]
void FUN_00ff7070(undefined4 param_1)

{
  DAT_01f8fba4 = param_1;
  return;
}

// 00FF707F  _set_new_handler  size=55  [run]
/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  __lock(4);
  p_Var1 = DecodePointer(DAT_01f8fba4);
  DAT_01f8fba4 = EncodePointer(param_1);
  FUN_00fec3c5(4);
  return p_Var1;
}

// 00FF70CC  __callnewh  size=40  [run]
/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2010 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = DecodePointer(DAT_01f8fba4);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00FF70F4  FUN_00ff70f4  size=6  [run]
undefined * FUN_00ff70f4(void)

{
  return &DAT_018e96a0;
}

// 00FF70FA  FUN_00ff70fa  size=6  [run]
undefined ** FUN_00ff70fa(void)

{
  return &PTR_s_No_error_018e95f0;
}

// 00FF7100  _ValidateRead  size=18  [run]
/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2010 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}

// 00FF7112  FID_conflict:_ValidateExecute  size=18  [run]
/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

bool FID_conflict__ValidateExecute(int param_1)

{
  return param_1 != 0;
}

// 00FF7124  FID_conflict:_ValidateExecute  size=18  [run]
/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

bool FID_conflict__ValidateExecute(int param_1)

{
  return param_1 != 0;
}

// 00FF7136  __initp_misc_winsig  size=30  [run]
/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2010 Release */

void __initp_misc_winsig(undefined4 param_1)

{
  DAT_01f8fbac = param_1;
  DAT_01f8fbb0 = param_1;
  DAT_01f8fbb4 = param_1;
  DAT_01f8fbb8 = param_1;
  return;
}

// 00FF71F0  siglookup  size=55  [run]
/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2010 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < param_1 + 0x90);
  if ((param_1 + 0x90 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}

// 00FF7227  FUN_00ff7227  size=13  [run]
void FUN_00ff7227(void)

{
  DecodePointer(DAT_01f8fbb4);
  return;
}

// 00FF7486  _raise  size=398  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2010 Release */

int __cdecl _raise(int _SigNum)

{
  int iVar1;
  int *piVar2;
  PVOID Ptr;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  _ptiddata p_Var6;
  int local_34;
  void *local_30;
  int local_28;
  int local_20;
  
  p_Var6 = (_ptiddata)0x0;
  local_20 = 0;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar5 = &DAT_01f8fbac;
        Ptr = DAT_01f8fbac;
        goto LAB_00ff7530;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_00ff750e;
        if (_SigNum != 8) goto LAB_00ff74fc;
      }
    }
    p_Var6 = __getptd_noexit();
    if (p_Var6 == (_ptiddata)0x0) {
      return -1;
    }
    iVar1 = siglookup(p_Var6->_pxcptacttab);
    puVar5 = (undefined4 *)(iVar1 + 8);
    pcVar3 = (code *)*puVar5;
  }
  else {
    if (_SigNum == 0xf) {
      puVar5 = &DAT_01f8fbb8;
      Ptr = DAT_01f8fbb8;
    }
    else if (_SigNum == 0x15) {
      puVar5 = &DAT_01f8fbb0;
      Ptr = DAT_01f8fbb0;
    }
    else {
      if (_SigNum != 0x16) {
LAB_00ff74fc:
        piVar2 = __errno();
        *piVar2 = 0x16;
        FUN_00fe56c2();
        return -1;
      }
LAB_00ff750e:
      puVar5 = &DAT_01f8fbb4;
      Ptr = DAT_01f8fbb4;
    }
LAB_00ff7530:
    local_20 = 1;
    pcVar3 = DecodePointer(Ptr);
  }
  iVar1 = 0;
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
    iVar1 = __exit(3);
  }
  if (local_20 != iVar1) {
    __lock(iVar1);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = p_Var6->_tpxcptinfoptrs;
    p_Var6->_tpxcptinfoptrs = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = p_Var6->_tfpecode;
      p_Var6->_tfpecode = 0x8c;
      goto LAB_00ff7594;
    }
  }
  else {
LAB_00ff7594:
    if (_SigNum == 8) {
      for (local_28 = 3; local_28 < 0xc; local_28 = local_28 + 1) {
        *(undefined4 *)(local_28 * 0xc + 8 + (int)p_Var6->_pxcptacttab) = 0;
      }
      goto LAB_00ff75cc;
    }
  }
  uVar4 = FUN_00feb73b();
  *puVar5 = uVar4;
LAB_00ff75cc:
  FUN_00ff75ed();
  if (_SigNum == 8) {
    (*pcVar3)(8,p_Var6->_tfpecode);
  }
  else {
    (*pcVar3)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var6->_tpxcptinfoptrs = local_30;
  if (_SigNum == 8) {
    p_Var6->_tfpecode = local_34;
  }
  return 0;
}

// 00FF75ED  FUN_00ff75ed  size=15  [run]
void FUN_00ff75ed(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_00fec3c5(0);
  }
  return;
}

// 00FF762F  Constructor  size=31  [run]
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall HeapManager::Constructor(void * (__cdecl*)(unsigned int),void
   (__cdecl*)(void *))
    public: void __thiscall _HeapManager::Constructor(void * (__cdecl*)(unsigned int),void
   (__cdecl*)(void *))
   
   Library: Visual Studio */

void __thiscall Constructor(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 00FF764E  Destructor  size=40  [run]
/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall HeapManager::Destructor(void)
    public: void __thiscall _HeapManager::Destructor(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __fastcall Destructor(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    while (*(int *)(param_1 + 0xc) = *(int *)(param_1 + 8), *(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(param_1 + 8) = **(undefined4 **)(param_1 + 0xc);
      (**(code **)(param_1 + 4))(*(undefined4 *)(param_1 + 0xc));
    }
  }
  return;
}

// 00FF7676  UnDecorator::getNumberOfDimensions  size=98  [run]
/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getNumberOfDimensions(void)
   
   Library: Visual Studio 2010 Release */

int __cdecl UnDecorator::getNumberOfDimensions(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *DAT_01f8fbe0;
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      return cVar2 + -0x2f;
    }
    iVar1 = 0;
LAB_00ff76c1:
    if (cVar2 == '@') {
      cVar2 = *DAT_01f8fbe0;
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      if (cVar2 != '@') {
LAB_00ff76d4:
        iVar1 = -1;
      }
      return iVar1;
    }
    if (cVar2 != '\0') {
      if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_00ff76d4;
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      iVar1 = cVar2 + -0x41 + iVar1 * 0x10;
      cVar2 = *DAT_01f8fbe0;
      goto LAB_00ff76c1;
    }
  }
  return 0;
}

// 00FF76D8  UnDecorator::getTypeEncoding  size=1216  [run]
/* WARNING: Removing unreachable block (ram,0x00ff7afb) */
/* WARNING: Removing unreachable block (ram,0x00ff7abb) */
/* WARNING: Removing unreachable block (ram,0x00ff7ad3) */
/* WARNING: Removing unreachable block (ram,0x00ff7a7b) */
/* WARNING: Removing unreachable block (ram,0x00ff7b13) */
/* WARNING: Removing unreachable block (ram,0x00ff7a93) */
/* WARNING: Removing unreachable block (ram,0x00ff7969) */
/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getTypeEncoding(void)
   
   Library: Visual Studio 2010 Release */

int __cdecl UnDecorator::getTypeEncoding(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  do {
    uVar5 = 0;
    if (*DAT_01f8fbe0 == '_') {
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      uVar5 = 0x4000;
    }
    cVar1 = *DAT_01f8fbe0;
    if (('@' < cVar1) && (cVar1 < '[')) {
      uVar2 = (int)*DAT_01f8fbe0 - 0x41;
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar5 | 0x8000;
      }
      else {
        uVar5 = uVar5 | 0xa000;
      }
      if (0x17 < (int)uVar2) {
        return uVar5;
      }
      if ((uVar5 & 0x8000) == 0) {
        uVar5 = uVar5 & 0xffff9fff;
      }
      else {
        uVar5 = uVar5 | 0x800;
      }
      uVar4 = uVar2 & 0x18;
      if (uVar4 == 0) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 | 0x800;
        }
        else {
          uVar5 = uVar5 | 0x40;
        }
      }
      else if (uVar4 == 8) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar5 = uVar5 | 0x80;
        }
      }
      else {
        if (uVar4 != 0x10) {
          return 0xffff;
        }
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xffffe7ff;
        }
      }
      uVar2 = uVar2 & 6;
      if (uVar2 != 0) {
        if (uVar2 == 2) {
          if ((uVar5 & 0x8000) == 0) {
            return uVar5 & 0xffff9fff;
          }
          return uVar5 | 0x200;
        }
        if (uVar2 != 4) {
          if (uVar2 != 6) {
            return 0xffff;
          }
          return uVar5 | 0x400;
        }
        return uVar5 | 0x100;
      }
      return uVar5;
    }
    if (cVar1 != '$') {
      cVar1 = *DAT_01f8fbe0;
      if (('/' < cVar1) && (cVar1 < '9')) {
        DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
        switch(cVar1) {
        case '0':
          return 0x800;
        case '1':
          return 0x1000;
        case '2':
          return 0;
        case '3':
          return 0x4000;
        case '4':
          return 0x2000;
        case '5':
          return 0x6000;
        case '6':
          return 0x6800;
        case '7':
          return 0x7000;
        case '8':
          return 0x7800;
        default:
          return 0xffff;
        }
      }
      if (cVar1 != '9') {
        return (cVar1 != '\0') + 0xfffe;
      }
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      return 0xfffd;
    }
    bVar6 = false;
    pcVar3 = DAT_01f8fbe0 + 1;
    cVar1 = *pcVar3;
    if ('B' < cVar1) {
      if (cVar1 == 'C') {
        uVar5 = 0x7c00;
        goto LAB_00ff7a31;
      }
      if (cVar1 == 'D') {
        uVar5 = uVar5 | 0x9100;
        goto LAB_00ff7a31;
      }
      if (cVar1 == 'E') {
        uVar5 = uVar5 | 0x9200;
        goto LAB_00ff7a31;
      }
      if (cVar1 != 'R') {
        DAT_01f8fbe0 = pcVar3;
        return 0xffff;
      }
      pcVar3 = DAT_01f8fbe0 + 2;
      cVar1 = *pcVar3;
      bVar6 = true;
      if ((cVar1 < '0') || ('5' < cVar1)) {
        DAT_01f8fbe0 = pcVar3;
        return (cVar1 == '\0') + 0xfffe;
      }
LAB_00ff7949:
      if (bVar6) {
        uVar5 = uVar5 | 0x8e00;
      }
      else {
        uVar5 = uVar5 | 0x8d00;
      }
      if (((int)*pcVar3 - 0x30U & 1) != 0) {
        uVar5 = uVar5 | 0x2000;
      }
      uVar2 = (int)*pcVar3 - 0x30U & 6;
      if (uVar2 == 0) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 | 0x800;
        }
        else {
          uVar5 = uVar5 | 0x40;
        }
      }
      else if (uVar2 == 2) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar5 = uVar5 | 0x80;
        }
      }
      else {
        if (uVar2 != 4) {
          DAT_01f8fbe0 = pcVar3;
          return 0xffff;
        }
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xffffe7ff;
        }
      }
      goto LAB_00ff7a31;
    }
    if (cVar1 == 'B') {
      uVar5 = uVar5 | 0x9800;
      goto LAB_00ff7a31;
    }
    if (cVar1 == '\0') {
      uVar5 = 0xfffe;
      pcVar3 = DAT_01f8fbe0;
      goto LAB_00ff7a31;
    }
    if (cVar1 != '$') {
      if (cVar1 < '0') {
        DAT_01f8fbe0 = pcVar3;
        return 0xffff;
      }
      if ('5' < cVar1) {
        if (cVar1 != 'A') {
          DAT_01f8fbe0 = pcVar3;
          return 0xffff;
        }
        uVar5 = uVar5 | 0x9000;
        goto LAB_00ff7a31;
      }
      goto LAB_00ff7949;
    }
    if (DAT_01f8fbe0[2] == 'P') {
      pcVar3 = DAT_01f8fbe0 + 2;
    }
    DAT_01f8fbe0 = pcVar3 + 1;
    cVar1 = *DAT_01f8fbe0;
    if (cVar1 < 'K') {
      if (cVar1 == 'J') {
LAB_00ff78c2:
        cVar1 = pcVar3[2];
        if (('/' < cVar1) && (cVar1 < ':')) {
          DAT_01f8fbe0 = pcVar3 + cVar1 + -0x2d;
          uVar5 = getTypeEncoding();
          return uVar5 | 0x10000;
        }
        uVar5 = 0xffff;
        pcVar3 = pcVar3 + 2;
LAB_00ff7a31:
        DAT_01f8fbe0 = pcVar3 + 1;
        return uVar5;
      }
      if (cVar1 == '\0') {
        return 0xfffe;
      }
      if (cVar1 != 'F') {
        bVar6 = cVar1 == 'H';
LAB_00ff777c:
        if (!bVar6) {
          return 0xffff;
        }
      }
    }
    else {
      if (cVar1 < 'L') {
        return 0xffff;
      }
      if ('M' < cVar1) {
        if ('O' < cVar1) {
          bVar6 = cVar1 == 'Q';
          goto LAB_00ff777c;
        }
        goto LAB_00ff78c2;
      }
    }
    DAT_01f8fbe0 = pcVar3 + 2;
  } while( true );
}

// 00FF7C90  UnDecorator::UScore  size=31  [run]
/* Library Function - Single Match
    public: static char const * __cdecl UnDecorator::UScore(enum Tokens)
   
   Library: Visual Studio 2010 Release */

char * __cdecl UnDecorator::UScore(Tokens param_1)

{
  char *pcVar1;
  
  pcVar1 = (&PTR_s___based__01701360)[param_1];
  if ((~DAT_01f8fbf0 & 1) == 0) {
    pcVar1 = pcVar1 + 2;
  }
  return pcVar1;
}

// 00FF7CAF  _HeapManager::getMemory  size=136  [run]
/* Library Function - Single Match
    public: void * __thiscall _HeapManager::getMemory(unsigned int,int)
   
   Library: Visual Studio 2010 Release */

void * __thiscall _HeapManager::getMemory(_HeapManager *this,uint param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_1 + 7 & 0xfffffff8;
  if (param_2 != 0) {
    pvVar1 = (void *)(**(code **)this)(uVar3);
    return pvVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if (*(uint *)(this + 0x10) < uVar3) {
    if (uVar3 < 0x1001) {
      puVar2 = getMemory((_HeapManager *)&DAT_01f8fbc0,0x1004,1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if (*(undefined4 **)(this + 0xc) == (undefined4 *)0x0) {
          *(undefined4 **)(this + 8) = puVar2;
        }
        else {
          **(undefined4 **)(this + 0xc) = puVar2;
        }
        *(undefined4 **)(this + 0xc) = puVar2;
        *(uint *)(this + 0x10) = 0x1000 - uVar3;
        goto LAB_00ff7d26;
      }
    }
    pvVar1 = (void *)0x0;
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) - uVar3;
LAB_00ff7d26:
    pvVar1 = (void *)(*(int *)(this + 0xc) + 4 + *(int *)(this + 0x10));
  }
  return pvVar1;
}

// 00FF7D48  FUN_00ff7d48  size=24  [run]
void __thiscall FUN_00ff7d48(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}

// 00FF7E47  DName::operator|=  size=31  [run]
/* Library Function - Single Match
    public: class DName & __thiscall DName::operator|=(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator|=(DName *this,DName *param_1)

{
  if ((this[4] != (DName)0x3) && ('\x01' < (char)param_1[4])) {
    this[4] = param_1[4];
  }
  return this;
}

// 00FF7E66  FUN_00ff7e66  size=24  [run]
void __thiscall FUN_00ff7e66(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}

// 00FF7E96  FUN_00ff7e96  size=23  [run]
void __thiscall FUN_00ff7e96(undefined4 *param_1,undefined1 param_2)

{
  *param_1 = &PTR_LAB_017014f0;
  *(undefined1 *)(param_1 + 1) = param_2;
  return;
}

// 00FF7EB5  FUN_00ff7eb5  size=23  [run]
undefined1 * __thiscall FUN_00ff7eb5(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (param_2 < param_3) {
    *param_2 = *(undefined1 *)(param_1 + 4);
    param_2 = param_2 + 1;
  }
  return param_2;
}

// 00FF7ECC  pDNameNode::pDNameNode  size=42  [run]
/* Library Function - Single Match
    public: __thiscall pDNameNode::pDNameNode(class DName *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall pDNameNode::pDNameNode(pDNameNode *this,DName *param_1)

{
  *(undefined ***)this = &PTR_LAB_017014fc;
  if ((param_1 != (DName *)0x0) && ((param_1[4] == (DName)0x2 || (param_1[4] == (DName)0x3)))) {
    param_1 = (DName *)0x0;
  }
  *(DName **)(this + 4) = param_1;
  return;
}

// 00FF7F23  pDNameNode::getString  size=33  [run]
/* Library Function - Single Match
    public: virtual char * __thiscall pDNameNode::getString(char *,char *)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall pDNameNode::getString(pDNameNode *this,char *param_1,char *param_2)

{
  int *piVar1;
  char *pcVar2;
  
  if ((*(int **)(this + 4) != (int *)0x0) &&
     (piVar1 = (int *)**(int **)(this + 4), piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00ff7f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar2 = (char *)(**(code **)(*piVar1 + 8))();
    return pcVar2;
  }
  return param_1;
}

// 00FF7F44  DNameStatusNode::DNameStatusNode  size=37  [run]
/* Library Function - Single Match
    private: __thiscall DNameStatusNode::DNameStatusNode(enum DNameStatus)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall DNameStatusNode::DNameStatusNode(DNameStatusNode *this,DNameStatus param_1)

{
  *(DNameStatus *)(this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_01701508;
  *(uint *)(this + 8) = (-(uint)(param_1 != 1) & 0xfffffffc) + 4;
  return;
}

// 00FF7F79  DNameStatusNode::make  size=134  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: static class DNameStatusNode * __cdecl DNameStatusNode::make(enum DNameStatus)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

DNameStatusNode * __cdecl DNameStatusNode::make(DNameStatus param_1)

{
  if ((_DAT_01f8fc2c & 1) == 0) {
    _DAT_01f8fc2c = _DAT_01f8fc2c | 1;
    _DAT_01f8fbfc = &PTR_LAB_01701508;
    _DAT_01f8fc00 = 0;
    _DAT_01f8fc04 = 0;
    _DAT_01f8fc08 = &PTR_LAB_01701508;
    _DAT_01f8fc0c = 1;
    _DAT_01f8fc10 = 4;
    _DAT_01f8fc14 = &PTR_LAB_01701508;
    _DAT_01f8fc18 = 2;
    _DAT_01f8fc1c = 0;
    _DAT_01f8fc20 = &PTR_LAB_01701508;
    _DAT_01f8fc24 = 3;
    _DAT_01f8fc28 = 0;
  }
  if (param_1 < 4) {
    return (DNameStatusNode *)(&DAT_01f8fbfc + param_1 * 0xc);
  }
  return (DNameStatusNode *)&DAT_01f8fc20;
}

// 00FF7FFF  pairNode::pairNode  size=33  [run]
/* Library Function - Single Match
    public: __thiscall pairNode::pairNode(class DNameNode *,class DNameNode *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall pairNode::pairNode(pairNode *this,DNameNode *param_1,DNameNode *param_2)

{
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(DNameNode **)(this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_01701514;
  *(DNameNode **)(this + 8) = param_2;
  return;
}

// 00FF8067  pairNode::getString  size=44  [run]
/* Library Function - Single Match
    public: virtual char * __thiscall pairNode::getString(char *,char *)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

char * __thiscall pairNode::getString(pairNode *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(int **)(this + 4) + 8))(param_1,param_2);
  if (pcVar1 < param_2) {
    pcVar1 = (char *)(**(code **)(**(int **)(this + 8) + 8))(pcVar1,param_2);
  }
  return pcVar1;
}

// 00FF80B7  und_strncmp  size=42  [run]
/* Library Function - Single Match
    unsigned int __cdecl und_strncmp(char const *,char const *,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __cdecl und_strncmp(char *param_1,char *param_2,uint param_3)

{
  byte *in_ECX;
  byte *in_EDX;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  while( true ) {
    param_1 = param_1 + -1;
    if (((param_1 == (char *)0x0) || (*in_ECX == 0)) || (*in_ECX != *in_EDX)) break;
    in_ECX = in_ECX + 1;
    in_EDX = in_EDX + 1;
  }
  return (uint)*in_ECX - (uint)*in_EDX;
}

// 00FF80E1  UnDecorator::UnDecorator  size=111  [run]
/* Library Function - Single Match
    public: __thiscall UnDecorator::UnDecorator(char *,char const *,int,char *
   (__cdecl*)(long),unsigned long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall
UnDecorator::UnDecorator
          (UnDecorator *this,char *param_1,char *param_2,int param_3,_func_char_ptr_long *param_4,
          ulong param_5)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  DAT_01f8fbe4 = param_2;
  DAT_01f8fbe0 = param_2;
  if (param_1 == (char *)0x0) {
    DAT_01f8fbe8 = (char *)0x0;
    DAT_01f8fbec = 0;
  }
  else {
    DAT_01f8fbec = param_3;
    DAT_01f8fbe8 = param_1;
  }
  DAT_01f8fbd8 = this + 0x2c;
  DAT_01f8fbf0 = param_5;
  DAT_01f8fbd4 = this;
  DAT_01f8fbf4 = param_4;
  DAT_01f8fbf8 = 0;
  return;
}

// 00FF8150  UnDecorator::getDataIndirectType  size=57  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getDataIndirectType(void)

{
  DName *in_stack_00000004;
  char local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffff0000;
  local_10 = local_10 & 0xffff0000;
  local_c = 0;
  local_14[0] = '\0';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  getDataIndirectType(in_stack_00000004,local_14,(DName *)&DAT_016416fa,(int)&local_c);
  return in_stack_00000004;
}

// 00FF8189  UnDecorator::getThisType  size=58  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThisType(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getThisType(void)

{
  DName *in_stack_00000004;
  char local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_14[0] = '\0';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  local_8 = local_8 & 0xffff0000;
  local_10 = local_10 & 0xffff0000;
  getDataIndirectType(in_stack_00000004,local_14,(DName *)&DAT_016416fa,(int)&local_c);
  return in_stack_00000004;
}

// 00FF81C3  operator_new  size=23  [run]
/* Library Function - Single Match
    void * __cdecl operator new(unsigned int,class _HeapManager &,int)
   
   Library: Visual Studio 2010 Release */

void * __cdecl operator_new(uint param_1,_HeapManager *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,param_1,param_3);
  return pvVar1;
}

// 00FF81DA  getStringHelper  size=55  [run]
/* Library Function - Single Match
    char * __cdecl getStringHelper(char *,char *,char *,int)
   
   Library: Visual Studio 2010 Release */

char * __cdecl getStringHelper(char *param_1,char *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  
  if ((int)param_2 - (int)param_1 < param_4) {
    param_4 = (int)param_2 - (int)param_1;
  }
  if (param_4 != 0) {
    pcVar1 = param_1;
    iVar2 = param_4;
    do {
      *pcVar1 = pcVar1[(int)param_3 - (int)param_1];
      pcVar1 = pcVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1 + param_4;
}

// 00FF8211  DName::DName  size=83  [run]
/* Library Function - Single Match
    public: __thiscall DName::DName(class DName *)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::DName(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  if (param_1 == (DName *)0x0) {
    *(undefined4 *)this = 0;
    this[4] = (DName)0x0;
  }
  else {
    this_00 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,8,0);
    if (this_00 == (pDNameNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pDNameNode::pDNameNode(this_00,param_1);
    }
    *(int *)this = iVar1;
    this[4] = (DName)((iVar1 != 0) - 1U & 3);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  return this;
}

// 00FF8264  DName::DName  size=69  [run]
/* Library Function - Single Match
    public: __thiscall DName::DName(enum DNameStatus)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

DName * __thiscall DName::DName(DName *this,DNameStatus param_1)

{
  DNameStatus DVar1;
  DNameStatusNode *pDVar2;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  DVar1 = param_1;
  if ((param_1 != 2) && (param_1 != 3)) {
    DVar1 = 0;
  }
  *(undefined4 *)this = 0;
  this[4] = SUB41(DVar1,0);
  if (param_1 == 1) {
    pDVar2 = DNameStatusNode::make(1);
    *(DNameStatusNode **)this = pDVar2;
    if (pDVar2 == (DNameStatusNode *)0x0) {
      this[4] = (DName)0x3;
    }
  }
  return this;
}

// 00FF82A9  DName::getString  size=95  [run]
/* Library Function - Single Match
    public: char * __thiscall DName::getString(char *,int)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall DName::getString(DName *this,char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (*(undefined4 **)this == (undefined4 *)0x0) {
    if (param_1 != (char *)0x0) {
      *param_1 = '\0';
    }
  }
  else {
    if (param_1 == (char *)0x0) {
      iVar1 = (**(code **)**(undefined4 **)this)();
      param_2 = iVar1 + 1;
      param_1 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,param_2,0);
      if (param_1 == (char *)0x0) {
        return (char *)0x0;
      }
    }
    pcVar2 = param_1;
    if (*(int **)this != (int *)0x0) {
      pcVar2 = (char *)(**(code **)(**(int **)this + 8))(param_1,param_1 + (param_2 - 1));
    }
    *pcVar2 = '\0';
  }
  return param_1;
}

// 00FF8308  DName::append  size=72  [run]
/* Library Function - Single Match
    private: void __thiscall DName::append(class DNameNode *)
   
   Library: Visual Studio 2010 Release */

void __thiscall DName::append(DName *this,DNameNode *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != (DNameNode *)0x0) {
    puVar2 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,0x10,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)this;
      puVar2[3] = 0xffffffff;
      *puVar2 = &PTR_LAB_01701514;
      puVar2[1] = uVar1;
      puVar2[2] = param_1;
    }
    *(undefined4 **)this = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      return;
    }
  }
  this[4] = (DName)0x3;
  return;
}

// 00FF8350  DName::operator=  size=77  [run]
/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(class DName *)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator=(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  *(undefined4 *)this = 0;
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  if (param_1 != (DName *)0x0) {
    this_00 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,8,0);
    if (this_00 == (pDNameNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pDNameNode::pDNameNode(this_00,param_1);
    }
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      return this;
    }
  }
  this[4] = (DName)0x3;
  return this;
}

// 00FF839D  DName::operator=  size=55  [run]
/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(enum DNameStatus)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator=(DName *this,DNameStatus param_1)

{
  DNameStatusNode *pDVar1;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  this[4] = SUB41(param_1,0);
  if (param_1 == 1) {
    pDVar1 = DNameStatusNode::make(1);
    *(DNameStatusNode **)this = pDVar1;
    if (pDVar1 == (DNameStatusNode *)0x0) {
      this[4] = (DName)0x3;
    }
  }
  else {
    *(undefined4 *)this = 0;
  }
  return this;
}

// 00FF83D4  Replicator::operator+=  size=74  [run]
/* Library Function - Single Match
    public: class Replicator & __thiscall Replicator::operator+=(class DName const &)
   
   Library: Visual Studio 2010 Release */

Replicator * __thiscall Replicator::operator+=(Replicator *this,DName *param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)this != 9) && (*(int *)param_1 != 0)) {
    puVar1 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,8,0);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = *(undefined4 *)param_1;
      puVar1[1] = *(undefined4 *)(param_1 + 4);
    }
    if (puVar1 != (undefined4 *)0x0) {
      *(int *)this = *(int *)this + 1;
      *(undefined4 **)(this + *(int *)this * 4 + 4) = puVar1;
    }
  }
  return this;
}

// 00FF841E  Replicator::operator[]  size=79  [run]
/* Library Function - Single Match
    public: class DName __thiscall Replicator::operator[](int)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall Replicator::operator[](Replicator *this,int param_1)

{
  undefined4 *puVar1;
  uint in_stack_00000008;
  
  if (in_stack_00000008 < 10) {
    if ((*(int *)this == -1) || (*(int *)this < (int)in_stack_00000008)) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
      *(undefined4 *)param_1 = 0;
      *(undefined1 *)(param_1 + 4) = 2;
    }
    else {
      puVar1 = *(undefined4 **)(this + in_stack_00000008 * 4 + 4);
      *(undefined4 *)param_1 = *puVar1;
      *(undefined4 *)(param_1 + 4) = puVar1[1];
    }
  }
  else {
    DName::DName((DName *)param_1,3);
  }
  return param_1;
}

// 00FF846D  pcharNode::pcharNode  size=87  [run]
/* Library Function - Single Match
    public: __thiscall pcharNode::pcharNode(char const *,int)
   
   Library: Visual Studio 2010 Release */

pcharNode * __thiscall pcharNode::pcharNode(pcharNode *this,char *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_LAB_01701520;
  if ((param_2 == 0) || (param_1 == (char *)0x0)) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    puVar1 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,param_2,0);
    *(undefined1 **)(this + 4) = puVar1;
    *(int *)(this + 8) = param_2;
    if ((puVar1 != (undefined1 *)0x0) && (param_2 != 0)) {
      iVar2 = (int)param_1 - (int)puVar1;
      do {
        *puVar1 = puVar1[iVar2];
        puVar1 = puVar1 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return this;
}

// 00FF84DA  pcharNode::getString  size=29  [run]
/* Library Function - Single Match
    public: virtual char * __thiscall pcharNode::getString(char *,char *)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall pcharNode::getString(pcharNode *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = getStringHelper(param_1,param_2,*(char **)(this + 4),*(int *)(this + 8));
  return pcVar1;
}

// 00FF84F7  DNameStatusNode::getString  size=41  [run]
/* Library Function - Single Match
    public: virtual char * __thiscall DNameStatusNode::getString(char *,char *)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall DNameStatusNode::getString(DNameStatusNode *this,char *param_1,char *param_2)

{
  if (*(int *)(this + 4) == 1) {
    param_1 = getStringHelper(param_1,param_2," ?? ",4);
  }
  return param_1;
}

// 00FF8520  UnDecorator::getReturnType  size=49  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getReturnType(class DName *)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getReturnType(DName *param_1)

{
  DName *in_stack_00000008;
  
  if (*DAT_01f8fbe0 == '@') {
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    DName::DName(param_1,in_stack_00000008);
  }
  else {
    getDataType(param_1);
  }
  return param_1;
}

// 00FF8551  UnDecorator::getStorageConvention  size=19  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getStorageConvention(void)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

undefined4 __cdecl UnDecorator::getStorageConvention(void)

{
  undefined4 in_stack_00000004;
  
  getDataIndirectType();
  return in_stack_00000004;
}

// 00FF8564  DName::operator+=  size=66  [run]
/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(enum DNameStatus)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+=(DName *this,DNameStatus param_1)

{
  DNameStatusNode *pDVar1;
  
  if ((char)this[4] < '\x02') {
    if (((*(int *)this == 0) || (param_1 == 2)) || (param_1 == 3)) {
      operator=(this,param_1);
    }
    else if (param_1 != 0) {
      pDVar1 = DNameStatusNode::make(param_1);
      append(this,(DNameNode *)pDVar1);
    }
  }
  return this;
}

// 00FF85A6  DName::doPchar  size=131  [run]
/* Library Function - Single Match
    private: void __thiscall DName::doPchar(char const *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall DName::doPchar(DName *this,char *param_1,int param_2)

{
  char cVar1;
  pcharNode *this_00;
  undefined4 *puVar2;
  
  if (*(int *)this != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
    this[4] = (DName)0x3;
    *(undefined4 *)this = 0;
    return;
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    this[4] = (DName)0x2;
    return;
  }
  if (param_2 == 0) goto LAB_00ff8618;
  if (param_2 == 1) {
    puVar2 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,8,0);
    if (puVar2 == (undefined4 *)0x0) goto LAB_00ff8610;
    cVar1 = *param_1;
    *puVar2 = &PTR_LAB_017014f0;
    *(char *)(puVar2 + 1) = cVar1;
  }
  else {
    this_00 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,0xc,0);
    if (this_00 == (pcharNode *)0x0) {
LAB_00ff8610:
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)pcharNode::pcharNode(this_00,param_1,param_2);
    }
  }
  *(undefined4 **)this = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    return;
  }
LAB_00ff8618:
  this[4] = (DName)0x3;
  return;
}

// 00FF8629  DName::DName  size=45  [run]
/* Library Function - Single Match
    public: __thiscall DName::DName(char)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::DName(DName *this,char param_1)

{
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  if (param_1 != '\0') {
    doPchar(this,&param_1,1);
  }
  return this;
}

// 00FF8656  DName::DName  size=61  [run]
/* Library Function - Single Match
    public: __thiscall DName::DName(char const *)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::DName(DName *this,char *param_1)

{
  int iVar1;
  
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  if ((param_1 != (char *)0x0) && (iVar1 = 0, *param_1 != '\0')) {
    do {
      iVar1 = iVar1 + 1;
    } while (param_1[iVar1] != '\0');
    if (iVar1 != 0) {
      doPchar(this,param_1,iVar1);
    }
  }
  return this;
}

// 00FF8693  DName::DName  size=191  [run]
/* Library Function - Single Match
    public: __thiscall DName::DName(char const * &,char)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::DName(DName *this,char **param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = 0;
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  pcVar3 = *param_1;
  if (pcVar3 == (char *)0x0) {
LAB_00ff8746:
    this[4] = (DName)0x2;
    return this;
  }
  if (*pcVar3 != '\0') {
    do {
      bVar1 = **param_1;
      if (bVar1 == param_2) break;
      if (((((((bVar1 != 0x5f) && (bVar1 != 0x24)) && (bVar1 != 0x3c)) &&
            (((bVar1 != 0x3e && (bVar1 != 0x2d)) && (((char)bVar1 < 'a' || ('z' < (char)bVar1))))))
           && (((char)bVar1 < 'A' || ('Z' < (char)bVar1)))) &&
          (((char)bVar1 < '0' || ('9' < (char)bVar1)))) &&
         (((bVar1 < 0x80 || (bVar1 == 0xff)) && ((DAT_01f8fbf0 & 0x10000) == 0))))
      goto LAB_00ff8746;
      iVar5 = iVar5 + 1;
      pbVar4 = (byte *)(*param_1 + 1);
      *param_1 = (char *)pbVar4;
    } while (*pbVar4 != 0);
    doPchar(this,pcVar3,iVar5);
    cVar2 = **param_1;
    if (cVar2 != '\0') {
      *param_1 = *param_1 + 1;
      if (cVar2 == param_2) {
        return this;
      }
      *(undefined4 *)this = 0;
      this[4] = (DName)0x3;
      return this;
    }
    if (this[4] != (DName)0x0) {
      return this;
    }
  }
  this[4] = (DName)0x1;
  return this;
}

// 00FF8752  DName::DName  size=110  [run]
/* Library Function - Single Match
    public: __thiscall DName::DName(unsigned __int64)
   
   Library: Visual Studio 2010 Release */

void __thiscall DName::DName(DName *this,__uint64 param_1)

{
  char extraout_CL;
  char *pcVar1;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  pcVar1 = local_d + 1;
  *(undefined4 *)this = 0;
  local_d[1] = 0;
  do {
    pcVar1 = pcVar1 + -1;
    param_1 = __aulldvrm(param_1,10,0);
    *pcVar1 = extraout_CL + '0';
  } while (param_1 != 0);
  doPchar(this,pcVar1,(int)(local_d + (1 - (int)pcVar1)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FF87C0  DName::DName  size=155  [run]
/* Library Function - Single Match
    public: __thiscall DName::DName(__int64)
   
   Library: Visual Studio 2010 Release */

void __thiscall DName::DName(DName *this,__int64 param_1)

{
  bool bVar1;
  char extraout_CL;
  char *pcVar2;
  char *pcVar3;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  pcVar3 = local_d + 2;
  *(undefined4 *)this = 0;
  local_d[2] = 0;
  bVar1 = false;
  if ((param_1 < 0x100000000) && (param_1 < 0)) {
    bVar1 = true;
    param_1 = CONCAT44(-(param_1._4_4_ + (uint)((int)param_1 != 0)),-(int)param_1);
  }
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + -1;
    param_1 = __aulldvrm(param_1,10,0);
    *pcVar3 = extraout_CL + '0';
  } while (param_1 != 0);
  if (bVar1) {
    pcVar3 = pcVar2 + -2;
    *pcVar3 = '-';
  }
  doPchar(this,pcVar3,(int)(local_d + (2 - (int)pcVar3)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FF885B  DName::operator+  size=36  [run]
/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(enum DNameStatus)const 
   
   Library: Visual Studio 2010 Release */

DNameStatus __thiscall DName::operator+(DName *this,DNameStatus param_1)

{
  DNameStatus in_stack_00000008;
  
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=((DName *)param_1,in_stack_00000008);
  return param_1;
}

// 00FF887F  DName::operator+=  size=67  [run]
/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+=(DName *this,DName *param_1)

{
  DNameNode *pDVar1;
  
  if ((char)this[4] < '\x02') {
    pDVar1 = *(DNameNode **)param_1;
    if (pDVar1 == (DNameNode *)0x0) {
      operator+=(this,(int)(char)param_1[4]);
    }
    else if (*(int *)this == 0) {
      *(DNameNode **)this = pDVar1;
      *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    }
    else {
      append(this,pDVar1);
    }
  }
  return this;
}

// 00FF88C2  DName::operator+=  size=103  [run]
/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(class DName *)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+=(DName *this,DName *param_1)

{
  DName DVar1;
  pDNameNode *this_00;
  DNameNode *pDVar2;
  
  if (((char)this[4] < '\x02') && (param_1 != (DName *)0x0)) {
    if (*(int *)this == 0) {
      operator=(this,param_1);
    }
    else {
      DVar1 = param_1[4];
      if ((DVar1 == (DName)0x0) || (DVar1 == (DName)0x1)) {
        this_00 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,8,0);
        if (this_00 == (pDNameNode *)0x0) {
          pDVar2 = (DNameNode *)0x0;
        }
        else {
          pDVar2 = (DNameNode *)pDNameNode::pDNameNode(this_00,param_1);
        }
        append(this,pDVar2);
      }
      else {
        operator+=(this,(int)(char)DVar1);
      }
    }
  }
  return this;
}

// 00FF8929  DName::operator=  size=45  [run]
/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator=(DName *this,char param_1)

{
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  if (param_1 != '\0') {
    doPchar(this,&param_1,1);
  }
  return this;
}

// 00FF8956  DName::operator=  size=53  [run]
/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char const *)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator=(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  doPchar(this,param_1,iVar2);
  return this;
}

// 00FF898B  UnDecorator::getCallingConvention  size=200  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getCallingConvention(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getCallingConvention(void)

{
  uint uVar1;
  char *pcVar2;
  uint in_ECX;
  DName *in_stack_00000004;
  Tokens TVar3;
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_01f8fbe0 == '\0') {
    DName::DName(in_stack_00000004,1);
    return in_stack_00000004;
  }
  uVar1 = (int)*DAT_01f8fbe0 - 0x41;
  DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
  if (0xe < uVar1) {
    *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
    *(undefined4 *)in_stack_00000004 = 0;
    in_stack_00000004[4] = (DName)0x2;
    return in_stack_00000004;
  }
  local_c = 0;
  local_8 = in_ECX & 0xffff0002 | 2;
  if ((~(DAT_01f8fbf0 >> 1) & 1) != 0) {
    uVar1 = uVar1 & 0xfffffffe;
    if (uVar1 == 0) {
      TVar3 = 1;
    }
    else if (uVar1 == 2) {
      TVar3 = 2;
    }
    else if (uVar1 == 4) {
      TVar3 = 4;
    }
    else if (uVar1 == 6) {
      TVar3 = 3;
    }
    else if (uVar1 == 8) {
      TVar3 = 5;
    }
    else if (uVar1 == 0xc) {
      TVar3 = 6;
    }
    else {
      if (uVar1 != 0xe) goto LAB_00ff8a21;
      TVar3 = 7;
    }
    pcVar2 = UScore(TVar3);
    DName::operator=((DName *)&local_c,pcVar2);
  }
LAB_00ff8a21:
  *(undefined4 *)in_stack_00000004 = local_c;
  *(uint *)(in_stack_00000004 + 4) = local_8;
  return in_stack_00000004;
}

// 00FF8A53  UnDecorator::getVCallThunkType  size=75  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVCallThunkType(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getVCallThunkType(void)

{
  DName *in_stack_00000004;
  
  if (*DAT_01f8fbe0 == '\0') {
    DName::DName(in_stack_00000004,1);
  }
  else {
    if (*DAT_01f8fbe0 != 'A') {
      *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
      *(undefined4 *)in_stack_00000004 = 0;
      in_stack_00000004[4] = (DName)0x2;
      return in_stack_00000004;
    }
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    DName::DName(in_stack_00000004,"{flat}");
  }
  return in_stack_00000004;
}

// 00FF8A9E  DName::operator+  size=36  [run]
/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(class DName const &)const 
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+(DName *this,DName *param_1)

{
  DName *in_stack_00000008;
  
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=(param_1,in_stack_00000008);
  return param_1;
}

// 00FF8AC2  DName::operator+  size=36  [run]
/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(class DName *)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

DName * __thiscall DName::operator+(DName *this,DName *param_1)

{
  DName *in_stack_00000008;
  
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=(param_1,in_stack_00000008);
  return param_1;
}

// 00FF8AE6  DName::operator+=  size=82  [run]
/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+=(DName *this,char param_1)

{
  DNameNode *pDVar1;
  
  if (((char)this[4] < '\x02') && (param_1 != '\0')) {
    if (*(int *)this == 0) {
      operator=(this,param_1);
    }
    else {
      pDVar1 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,8,0);
      if (pDVar1 == (DNameNode *)0x0) {
        pDVar1 = (DNameNode *)0x0;
      }
      else {
        *(undefined ***)pDVar1 = &PTR_LAB_017014f0;
        pDVar1[4] = (DNameNode)param_1;
      }
      append(this,pDVar1);
    }
  }
  return this;
}

// 00FF8B38  DName::operator+=  size=100  [run]
/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char const *)
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+=(DName *this,char *param_1)

{
  char cVar1;
  pcharNode *this_00;
  DNameNode *pDVar2;
  int iVar3;
  
  if ((((char)this[4] < '\x02') && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    if (*(int *)this == 0) {
      operator=(this,param_1);
    }
    else {
      this_00 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,0xc,0);
      if (this_00 == (pcharNode *)0x0) {
        pDVar2 = (DNameNode *)0x0;
      }
      else {
        iVar3 = 0;
        cVar1 = *param_1;
        while (cVar1 != '\0') {
          iVar3 = iVar3 + 1;
          cVar1 = param_1[iVar3];
        }
        pDVar2 = (DNameNode *)pcharNode::pcharNode(this_00,param_1,iVar3);
      }
      append(this,pDVar2);
    }
  }
  return this;
}

// 00FF8B9C  UnDecorator::getArgumentList  size=262  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentList(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getArgumentList(void)

{
  DName DVar1;
  char *pcVar2;
  DName *pDVar3;
  DName *in_stack_00000004;
  undefined1 local_20 [8];
  DName local_18 [8];
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  local_8 = 1;
  *(undefined4 *)in_stack_00000004 = 0;
  DVar1 = in_stack_00000004[4];
  while( true ) {
    if (DVar1 != (DName)0x0) {
      return in_stack_00000004;
    }
    if (*DAT_01f8fbe0 == '@') {
      return in_stack_00000004;
    }
    if (*DAT_01f8fbe0 == 'Z') {
      return in_stack_00000004;
    }
    if (local_8 == 0) {
      DName::operator+=(in_stack_00000004,',');
    }
    else {
      local_8 = 0;
    }
    pcVar2 = DAT_01f8fbe0;
    if (*DAT_01f8fbe0 == '\0') break;
    if ((int)*DAT_01f8fbe0 - 0x30U < 10) {
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      pDVar3 = (DName *)Replicator::operator[](DAT_01f8fbd4,(int)local_20);
      DName::operator+=(in_stack_00000004,pDVar3);
    }
    else {
      local_c = local_c & 0xffff0000;
      local_10 = 0;
      getPrimaryDataType(local_18);
      if ((1 < (int)DAT_01f8fbe0 - (int)pcVar2) && (*(int *)DAT_01f8fbd4 != 9)) {
        Replicator::operator+=(DAT_01f8fbd4,local_18);
      }
      DName::operator+=(in_stack_00000004,local_18);
      if (DAT_01f8fbe0 == pcVar2) {
        *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
        in_stack_00000004[4] = (DName)0x2;
        *(undefined4 *)in_stack_00000004 = 0;
      }
    }
    DVar1 = in_stack_00000004[4];
  }
  DName::operator+=(in_stack_00000004,1);
  return in_stack_00000004;
}

// 00FF8CA2  UnDecorator::getVdispMapType  size=84  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVdispMapType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getVdispMapType(DName *param_1)

{
  DName *pDVar1;
  undefined4 *in_stack_00000008;
  
  *(undefined4 *)param_1 = *in_stack_00000008;
  *(undefined4 *)(param_1 + 4) = in_stack_00000008[1];
  DName::operator+=(param_1,"{for ");
  pDVar1 = (DName *)getScope();
  DName::operator+=(param_1,pDVar1);
  DName::operator+=(param_1,'}');
  if (*DAT_01f8fbe0 == '@') {
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
  }
  return param_1;
}

// 00FF8CF6  operator+  size=36  [run]
/* Library Function - Single Match
    class DName __cdecl operator+(char,class DName const &)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

DName * __cdecl operator+(char param_1,DName *param_2)

{
  DName *this;
  undefined3 in_stack_00000005;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = _param_1;
  this = (DName *)DName::DName(local_c,(char)param_2);
  DName::operator+(this,pDVar1);
  return _param_1;
}

// 00FF8D1A  operator+  size=36  [run]
/* Library Function - Single Match
    class DName __cdecl operator+(enum DNameStatus,class DName const &)
   
   Library: Visual Studio 2010 Release */

DNameStatus __cdecl operator+(DNameStatus param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(DNameStatus)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}

// 00FF8D3E  operator+  size=36  [run]
/* Library Function - Single Match
    class DName __cdecl operator+(char const *,class DName const &)
   
   Library: Visual Studio 2010 Release */

char * __cdecl operator+(char *param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(char *)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}

// 00FF8D62  DName::operator+  size=36  [run]
/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char)const 
   
   Library: Visual Studio 2010 Release */

DName * __thiscall DName::operator+(DName *this,char param_1)

{
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  
  *(undefined4 *)_param_1 = *(undefined4 *)this;
  *(undefined4 *)(_param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=(_param_1,in_stack_00000008);
  return _param_1;
}

// 00FF8D86  DName::operator+  size=36  [run]
/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char const *)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall DName::operator+(DName *this,char *param_1)

{
  char *in_stack_00000008;
  
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=((DName *)param_1,in_stack_00000008);
  return param_1;
}

// 00FF8DAA  UnDecorator::getDimension  size=326  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDimension(bool)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getDimension(bool param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DName local_1c [8];
  char local_14 [8];
  DName local_c [8];
  
  pcVar5 = (char *)0x0;
  if (*DAT_01f8fbe0 == 'Q') {
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    pcVar5 = "`non-type-template-parameter";
  }
  cVar2 = *DAT_01f8fbe0;
  if (cVar2 == '\0') {
    DName::DName(_param_1,1);
    return _param_1;
  }
  if (('/' < cVar2) && (cVar2 < ':')) {
    cVar2 = *DAT_01f8fbe0;
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    if ((DName *)pcVar5 == (DName *)0x0) {
      puVar3 = (undefined4 *)DName::DName(local_1c,(longlong)(cVar2 + -0x2f));
    }
    else {
      DName::DName(local_c,(longlong)(cVar2 + -0x2f));
      puVar3 = (undefined4 *)operator+(local_14,(DName *)pcVar5);
    }
    *(undefined4 *)_param_1 = *puVar3;
    *(undefined4 *)(_param_1 + 4) = puVar3[1];
    return _param_1;
  }
  uVar6 = 0;
  iVar8 = 0;
  while (cVar2 != '@') {
    if (cVar2 == '\0') {
      DName::DName(_param_1,1);
      return _param_1;
    }
    if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_00ff8e76;
    uVar1 = uVar6 >> 0x1c;
    uVar4 = (int)cVar2 - 0x41;
    uVar7 = uVar6 * 0x10;
    uVar6 = uVar4 + uVar7;
    iVar8 = (iVar8 << 4 | uVar1) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar4,uVar7);
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    cVar2 = *DAT_01f8fbe0;
  }
  cVar2 = *DAT_01f8fbe0;
  DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
  if (cVar2 != '@') {
LAB_00ff8e76:
    *(uint *)(_param_1 + 4) = *(uint *)(_param_1 + 4) & 0xffff00ff;
    *(undefined4 *)_param_1 = 0;
    _param_1[4] = (DName)0x2;
    return _param_1;
  }
  if (in_stack_00000008 == '\0') {
    if ((DName *)pcVar5 == (DName *)0x0) {
      puVar3 = (undefined4 *)DName::DName(local_c,CONCAT44(iVar8,uVar6));
      goto LAB_00ff8edc;
    }
    DName::DName(local_1c,CONCAT44(iVar8,uVar6));
  }
  else {
    if ((DName *)pcVar5 == (DName *)0x0) {
      puVar3 = (undefined4 *)DName::DName(local_c,CONCAT44(iVar8,uVar6));
      goto LAB_00ff8edc;
    }
    DName::DName(local_1c,CONCAT44(iVar8,uVar6));
  }
  puVar3 = (undefined4 *)operator+(local_14,(DName *)pcVar5);
LAB_00ff8edc:
  *(undefined4 *)_param_1 = *puVar3;
  *(undefined4 *)(_param_1 + 4) = puVar3[1];
  return _param_1;
}

// 00FF8EF0  UnDecorator::getEnumType  size=203  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getEnumType(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getEnumType(void)

{
  char cVar1;
  DName *this;
  DName *in_stack_00000004;
  DName *pDVar2;
  char *pcVar3;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xffff0000;
  if (*DAT_01f8fbe0 == '\0') {
    DName::DName(in_stack_00000004,1);
    return in_stack_00000004;
  }
  switch(*DAT_01f8fbe0) {
  case '0':
  case '1':
    pcVar3 = "char ";
    break;
  case '2':
  case '3':
    pcVar3 = "short ";
    break;
  case '4':
    goto switchD_00ff8f1d_caseD_34;
  case '5':
    pcVar3 = "int ";
    break;
  case '6':
  case '7':
    pcVar3 = "long ";
    break;
  default:
    *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
    *(undefined4 *)in_stack_00000004 = 0;
    in_stack_00000004[4] = (DName)0x2;
    return in_stack_00000004;
  }
  DName::operator=((DName *)&local_c,pcVar3);
switchD_00ff8f1d_caseD_34:
  cVar1 = *DAT_01f8fbe0;
  DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) || (cVar1 == '7')) {
    pDVar2 = (DName *)&local_14;
    this = (DName *)DName::DName(local_1c,"unsigned ");
    DName::operator+(this,pDVar2);
    local_c = local_14;
    local_8 = local_10;
  }
  *(undefined4 *)in_stack_00000004 = local_c;
  *(uint *)(in_stack_00000004 + 4) = local_8;
  return in_stack_00000004;
}

// 00FF8FDC  UnDecorator::getArgumentTypes  size=224  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentTypes(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getArgumentTypes(void)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  DName *in_stack_00000004;
  char local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_01f8fbe0 == 'X') {
    pcVar3 = "void";
  }
  else {
    if (*DAT_01f8fbe0 != 'Z') {
      getArgumentList();
      if (((char)local_8 == '\0') && (cVar1 = *DAT_01f8fbe0, cVar1 != '\0')) {
        if (cVar1 != '@') {
          if (cVar1 != 'Z') {
            *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
            *(undefined4 *)in_stack_00000004 = 0;
            in_stack_00000004[4] = (DName)0x2;
            return in_stack_00000004;
          }
          DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
          puVar2 = (undefined4 *)DName::operator+((DName *)&local_c,local_14);
          *(undefined4 *)in_stack_00000004 = *puVar2;
          *(undefined4 *)(in_stack_00000004 + 4) = puVar2[1];
          return in_stack_00000004;
        }
        DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      }
      *(undefined4 *)in_stack_00000004 = local_c;
      *(undefined4 *)(in_stack_00000004 + 4) = local_8;
      return in_stack_00000004;
    }
    pcVar3 = "...";
    if ((~(DAT_01f8fbf0 >> 0x12) & 1) == 0) {
      pcVar3 = "<ellipsis>";
    }
  }
  DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
  DName::DName(in_stack_00000004,pcVar3);
  return in_stack_00000004;
}

// 00FF90BC  UnDecorator::getThrowTypes  size=138  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThrowTypes(void)
   
   Library: Visual Studio 2010 Release */

undefined4 * __cdecl UnDecorator::getThrowTypes(void)

{
  DName *pDVar1;
  DName *pDVar2;
  undefined4 *in_stack_00000004;
  undefined4 *puVar3;
  DName local_1c [8];
  DName local_14 [8];
  DName local_c [4];
  uint local_8;
  
  puVar3 = in_stack_00000004;
  if (*DAT_01f8fbe0 == '\0') {
    pDVar2 = local_1c;
    pDVar1 = (DName *)DName::DName(local_14," throw(");
    pDVar2 = (DName *)DName::operator+(pDVar1,(DNameStatus)pDVar2);
  }
  else {
    if (*DAT_01f8fbe0 == 'Z') {
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      *in_stack_00000004 = 0;
      in_stack_00000004[1] = local_8 & 0xffff0000;
      return in_stack_00000004;
    }
    getArgumentTypes();
    pDVar2 = local_c;
    pDVar1 = (DName *)DName::DName(local_1c," throw(");
    DName::operator+(pDVar1,pDVar2);
    pDVar2 = local_c;
  }
  DName::operator+(pDVar2,(char)puVar3);
  return in_stack_00000004;
}

// 00FF9146  UnDecorator::getExtendedDataIndirectType  size=456  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExtendedDataIndirectType(char const * &,bool
   &,int)
   
   Library: Visual Studio 2010 Release */

char ** __cdecl UnDecorator::getExtendedDataIndirectType(char **param_1,bool *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int in_stack_00000010;
  DName local_28 [8];
  DName local_20 [8];
  char *local_18;
  uint local_14;
  char *local_10;
  uint local_c;
  char local_8 [4];
  
  iVar3 = (int)DAT_01f8fbe0;
  local_14 = local_c & 0xffff0000;
  local_18 = (char *)0x0;
  DAT_01f8fbe0 = (char *)((int)DAT_01f8fbe0 + 1);
  iVar4 = (int)*DAT_01f8fbe0;
  if (iVar4 == 0x41) {
    if (in_stack_00000010 == 0) {
      puVar6 = &DAT_01701294;
      if (**(char **)param_2 != '&') {
        puVar6 = &DAT_0170127c;
      }
      *(undefined **)param_2 = puVar6;
    }
LAB_00ff92f8:
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[1] = (char *)((uint)param_1[1] & 0xffff00ff);
  }
  else {
    local_c = local_14;
    if (iVar4 == 0x42) {
      if (in_stack_00000010 == 0) {
        *(undefined1 *)param_3 = 1;
        local_8[0] = '>';
        local_10 = (char *)0x0;
        DName::doPchar((DName *)&local_10,local_8,1);
        goto LAB_00ff92f8;
      }
    }
    else {
      if (iVar4 == 0x43) {
        *(undefined **)param_2 = &DAT_01701294;
        goto LAB_00ff92f8;
      }
      if ((*DAT_01f8fbe0 == '\0') || (cVar2 = *(char *)(iVar3 + 2), cVar2 == '\0')) {
        DName::DName((DName *)param_1,1);
        return param_1;
      }
      if (in_stack_00000010 == 0) {
        DAT_01f8fbe0 = (char *)(iVar3 + 3);
        uVar1 = cVar2 + -0x30 + (iVar4 + -0x30) * 0x10;
        if (1 < uVar1) {
          local_8[0] = ',';
          local_10 = (char *)0x0;
          DName::doPchar((DName *)&local_10,local_8,1);
          DName::DName(local_20,(ulonglong)uVar1);
          puVar5 = (undefined4 *)DName::operator+((DName *)&local_10,local_28);
          local_18 = (char *)*puVar5;
          local_14 = puVar5[1];
        }
        DName::operator+=((DName *)&local_18,'>');
        local_10 = local_18;
        local_c = local_14;
        if (*DAT_01f8fbe0 == '$') {
          DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
        }
        else {
          DName::operator+=((DName *)&local_18,'^');
        }
        local_10 = local_18;
        local_c = local_14;
        if (*DAT_01f8fbe0 == '\0') {
          DName::operator+=((DName *)&local_10,1);
        }
        else {
          DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
        }
        *param_1 = local_10;
        param_1[1] = (char *)(local_c | 0x4000);
        return param_1;
      }
    }
    param_1[1] = (char *)((uint)param_1[1] & 0xffff00ff);
    *(undefined1 *)(param_1 + 1) = 2;
  }
  *param_1 = (char *)0x0;
  return param_1;
}

// 00FF930E  UnDecorator::getArrayType  size=502  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArrayType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getArrayType(DName *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  DName *pDVar3;
  DName *pDVar4;
  bool bVar5;
  DName *in_stack_00000008;
  char cVar6;
  DName local_3c [8];
  undefined4 local_34 [2];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_01f8fbe0 == '\0') {
    if (*(int *)in_stack_00000008 != 0) {
      pDVar4 = (DName *)&local_2c;
      pDVar3 = (DName *)DName::DName(local_3c,'(');
      DName::operator+(pDVar3,pDVar4);
      local_1c = local_2c;
      local_18 = local_28;
      DName::operator+=((DName *)&local_1c,")[");
      local_14 = local_1c;
      local_10 = local_18;
      DName::operator+=((DName *)&local_14,1);
      local_c = local_14;
      local_8 = local_10;
      DName::operator+=((DName *)&local_c,']');
      goto LAB_00ff94f3;
    }
    cVar6 = (char)local_3c;
    puVar2 = local_34;
    pDVar4 = (DName *)&local_2c;
  }
  else {
    local_8 = getNumberOfDimensions();
    if ((int)local_8 < 0) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      local_10 = local_10 & 0xffff0000;
      local_14 = 0;
      if ((*(uint *)(in_stack_00000008 + 4) & 0x800) != 0) {
        DName::operator+=((DName *)&local_14,"[]");
      }
      while ((((char)local_10 < '\x02' &&
              (uVar1 = local_8 - 1, bVar5 = local_8 != 0, local_8 = uVar1, bVar5)) &&
             (*DAT_01f8fbe0 != '\0'))) {
        getDimension(SUB41(local_34,0));
        pDVar4 = (DName *)&local_24;
        pDVar3 = (DName *)DName::DName(local_3c,'[');
        DName::operator+(pDVar3,pDVar4);
        local_1c = local_24;
        local_18 = local_20;
        DName::operator+=((DName *)&local_1c,']');
        DName::operator+=((DName *)&local_14,(DName *)&local_1c);
      }
      if (*(int *)in_stack_00000008 != 0) {
        if ((*(uint *)(in_stack_00000008 + 4) & 0x800) == 0) {
          pDVar4 = (DName *)&local_24;
          pDVar3 = (DName *)DName::DName(local_3c,'(');
          DName::operator+(pDVar3,pDVar4);
          local_c = local_24;
          local_8 = local_20;
          DName::operator+=((DName *)&local_c,')');
          local_1c = local_c;
          local_18 = local_8;
          DName::operator+=((DName *)&local_1c,(DName *)&local_14);
          local_14 = local_1c;
          local_10 = local_18;
        }
        else {
          puVar2 = (undefined4 *)DName::operator+(in_stack_00000008,local_3c);
          local_14 = *puVar2;
          local_10 = puVar2[1];
        }
      }
      getPrimaryDataType((DName *)&local_2c);
      *(undefined4 *)param_1 = local_2c;
      *(uint *)(param_1 + 4) = local_28 | 0x800;
      return param_1;
    }
    cVar6 = (char)&local_2c;
    puVar2 = &local_24;
    pDVar4 = (DName *)&local_1c;
  }
  pDVar4 = (DName *)DName::DName(pDVar4,'[');
  pDVar4 = (DName *)DName::operator+(pDVar4,(DNameStatus)puVar2);
  DName::operator+(pDVar4,cVar6);
LAB_00ff94f3:
  getBasicDataType(param_1);
  return param_1;
}

// 00FF9504  UnDecorator::getLexicalFrame  size=61  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getLexicalFrame(void)
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl UnDecorator::getLexicalFrame(void)

{
  DName *this;
  undefined4 in_stack_00000004;
  DName *pDVar1;
  DName local_1c [8];
  undefined1 local_14 [8];
  DName local_c [8];
  
  getDimension(SUB41(local_14,0));
  pDVar1 = local_c;
  this = (DName *)DName::DName(local_1c,'`');
  DName::operator+(this,pDVar1);
  DName::operator+(local_c,(char)in_stack_00000004);
  return in_stack_00000004;
}

// 00FF9541  UnDecorator::getDisplacement  size=22  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDisplacement(void)
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl UnDecorator::getDisplacement(void)

{
  undefined4 in_stack_00000004;
  
  getDimension(SUB41(in_stack_00000004,0));
  return in_stack_00000004;
}

// 00FF9557  FID_conflict:getGuardNumber  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    private: static class DName __cdecl UnDecorator::getCallIndex(void)
    private: static class DName __cdecl UnDecorator::getGuardNumber(void)
   
   Library: Visual Studio 2010 Release */

undefined4 FID_conflict_getGuardNumber(undefined4 param_1)

{
  UnDecorator::getDimension(SUB41(param_1,0));
  return param_1;
}

// 00FF956D  FID_conflict:getGuardNumber  size=22  [run]
/* Library Function - Multiple Matches With Different Base Names
    private: static class DName __cdecl UnDecorator::getCallIndex(void)
    private: static class DName __cdecl UnDecorator::getGuardNumber(void)
   
   Library: Visual Studio 2010 Release */

undefined4 FID_conflict_getGuardNumber(undefined4 param_1)

{
  UnDecorator::getDimension(SUB41(param_1,0));
  return param_1;
}

// 00FF9583  UnDecorator::getVfTableType  size=351  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVfTableType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getVfTableType(DName *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  DName *pDVar4;
  undefined4 *in_stack_00000008;
  DName *pDVar5;
  char *pcVar6;
  DName local_24 [8];
  DName local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)param_1 = *in_stack_00000008;
  uVar1 = in_stack_00000008[1];
  *(undefined4 *)(param_1 + 4) = uVar1;
  cVar2 = (char)uVar1;
  if (cVar2 < '\x02') {
    if (*DAT_01f8fbe0 == '\0') {
      if (cVar2 < '\x02') {
        pDVar5 = (DName *)&local_14;
        pDVar4 = (DName *)DName::DName(local_24,1);
        DName::operator+(pDVar4,pDVar5);
        *(undefined4 *)param_1 = local_14;
        *(undefined4 *)(param_1 + 4) = local_10;
      }
    }
    else {
      getDataIndirectType();
      local_c = local_14;
      local_8 = local_10;
      DName::operator+=((DName *)&local_c,' ');
      puVar3 = (undefined4 *)DName::operator+((DName *)&local_c,local_1c);
      *(undefined4 *)param_1 = *puVar3;
      uVar1 = puVar3[1];
      *(undefined4 *)(param_1 + 4) = uVar1;
      if ((char)uVar1 < '\x02') {
        if (*DAT_01f8fbe0 != '@') {
          pcVar6 = "{for ";
          do {
            DName::operator+=(param_1,pcVar6);
            do {
              if ((('\x01' < (char)param_1[4]) || (*DAT_01f8fbe0 == '\0')) || (*DAT_01f8fbe0 == '@')
                 ) {
                if ((char)param_1[4] < '\x02') {
                  if (*DAT_01f8fbe0 == '\0') {
                    DName::operator+=(param_1,1);
                  }
                  DName::operator+=(param_1,'}');
                }
LAB_00ff96a6:
                if (*DAT_01f8fbe0 != '@') {
                  return param_1;
                }
                goto LAB_00ff96b0;
              }
              getScope();
              pDVar5 = (DName *)&local_14;
              pDVar4 = (DName *)DName::DName(local_24,'`');
              DName::operator+(pDVar4,pDVar5);
              local_c = local_14;
              local_8 = local_10;
              DName::operator+=((DName *)&local_c,'\'');
              DName::operator+=(param_1,(DName *)&local_c);
              if (*DAT_01f8fbe0 == '@') {
                DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
              }
              if ('\x01' < (char)param_1[4]) goto LAB_00ff96a6;
            } while (*DAT_01f8fbe0 == '@');
            pcVar6 = "s ";
          } while( true );
        }
LAB_00ff96b0:
        DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      }
    }
  }
  return param_1;
}

// 00FF96E2  UnDecorator::getStringEncoding  size=179  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getStringEncoding(char *,int)
   
   Library: Visual Studio 2010 Release */

char * __cdecl UnDecorator::getStringEncoding(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  DName::DName((DName *)&local_c,(char *)param_2);
  pcVar1 = DAT_01f8fbe0;
  cVar2 = *DAT_01f8fbe0;
  DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
  if ((cVar2 != '@') || (cVar2 = *DAT_01f8fbe0, DAT_01f8fbe0 = pcVar1 + 2, cVar2 != '_')) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\x02';
    return param_1;
  }
  DAT_01f8fbe0 = pcVar1 + 3;
  getDimension(SUB41(local_14,0));
  getDimension(SUB41(local_14,0));
  cVar2 = *DAT_01f8fbe0;
  if (cVar2 != '\0') {
    do {
      if (cVar2 == '@') break;
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      cVar2 = *DAT_01f8fbe0;
    } while (cVar2 != '\0');
    if (*DAT_01f8fbe0 != '\0') {
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      *(undefined4 *)param_1 = local_c;
      *(undefined4 *)(param_1 + 4) = local_8;
      return param_1;
    }
  }
  DAT_01f8fbe0 = DAT_01f8fbe0 + -1;
  DName::DName((DName *)param_1,1);
  return param_1;
}

// 00FF9795  UnDecorator::getSignedDimension  size=82  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSignedDimension(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getSignedDimension(void)

{
  DName *in_stack_00000004;
  
  if (*DAT_01f8fbe0 == '\0') {
    DName::DName(in_stack_00000004,1);
  }
  else if (*DAT_01f8fbe0 == '?') {
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    getDimension(true);
    operator+(SUB41(in_stack_00000004,0),(DName *)0x2d);
  }
  else {
    getDimension(SUB41(in_stack_00000004,0));
  }
  return in_stack_00000004;
}

// 00FF97E7  UnDecorator::getTemplateConstant  size=752  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateConstant(void)
   
   Library: Visual Studio 2010 Release */

void __cdecl UnDecorator::getTemplateConstant(void)

{
  char *pcVar1;
  DName *pDVar2;
  long lVar3;
  DName *this;
  DName *in_stack_00000004;
  char cVar4;
  DName local_c4 [32];
  undefined1 local_a4 [16];
  DName local_94 [8];
  undefined4 local_8c;
  undefined4 local_88;
  DName local_84 [4];
  char local_80;
  char local_7c;
  char local_7b;
  char local_7a;
  char local_18 [8];
  DName local_10 [8];
  uint local_8;
  
  pcVar1 = DAT_01f8fbe0;
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  cVar4 = *DAT_01f8fbe0;
  DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
  if (cVar4 < 'E') {
    if (cVar4 == 'D') {
LAB_00ff9996:
      getSignedDimension();
      if ((DAT_01f8fbf0 & 0x4000) != 0) {
        DName::getString(local_84,local_18,0x10);
        lVar3 = _atol(local_18);
        pcVar1 = (char *)(*DAT_01f8fbf4)(lVar3);
        if (pcVar1 != (char *)0x0) {
LAB_00ff98f2:
          DName::DName(in_stack_00000004,pcVar1);
          goto LAB_00ff9ac6;
        }
      }
      pDVar2 = (DName *)&local_8c;
      if (cVar4 == 'D') {
        pcVar1 = "`template-parameter";
      }
      else {
        pcVar1 = "`non-type-template-parameter";
      }
      this = (DName *)DName::DName(local_10,pcVar1);
      DName::operator+(this,pDVar2);
      DName::operator+((DName *)&local_8c,(char *)in_stack_00000004);
      goto LAB_00ff9ac6;
    }
    if (cVar4 == '\0') {
LAB_00ff9930:
      DAT_01f8fbe0 = pcVar1;
      DName::DName(in_stack_00000004,1);
      goto LAB_00ff9ac6;
    }
    if (cVar4 == '0') {
      getSignedDimension();
      goto LAB_00ff9ac6;
    }
    if (cVar4 == '1') {
      if (*DAT_01f8fbe0 == '@') {
        DAT_01f8fbe0 = pcVar1 + 2;
        pcVar1 = "NULL";
        goto LAB_00ff98f2;
      }
      getDecoratedName();
      pDVar2 = (DName *)DName::DName(local_94,"&");
LAB_00ff98d1:
      DName::operator+(pDVar2,in_stack_00000004);
      goto LAB_00ff9ac6;
    }
    if (cVar4 == '2') {
      getSignedDimension();
      getSignedDimension();
      pcVar1 = DAT_01f8fbe0;
      if (('\x01' < local_80) || ('\x01' < (char)local_88)) goto LAB_00ff9930;
      pcVar1 = DName::getString(local_84,&local_7b,100);
      if (pcVar1 != (char *)0x0) {
        local_7c = local_7b;
        if (local_7b == '-') {
          local_7b = local_7a;
          local_7a = '.';
        }
        else {
          local_7b = '.';
        }
        cVar4 = (char)local_a4;
        pDVar2 = (DName *)DName::DName(local_c4,&local_7c);
        pDVar2 = (DName *)DName::operator+(pDVar2,cVar4);
        goto LAB_00ff98d1;
      }
    }
    goto LAB_00ff987d;
  }
  if (cVar4 == 'E') {
    getDecoratedName();
    goto LAB_00ff9ac6;
  }
  if ('E' < cVar4) {
    if (cVar4 < 'K') {
      DName::DName(local_84,'{');
      if (('G' < cVar4) && (cVar4 < 'K')) {
        pDVar2 = (DName *)getDecoratedName();
        DName::operator+=(local_84,pDVar2);
        DName::operator+=(local_84,',');
      }
      if (cVar4 == 'F') {
LAB_00ff9a7c:
        pDVar2 = (DName *)getSignedDimension();
        DName::operator+=(local_84,pDVar2);
        DName::operator+=(local_84,',');
LAB_00ff9a9c:
        pDVar2 = (DName *)getSignedDimension();
        DName::operator+=(local_84,pDVar2);
      }
      else {
        if (cVar4 == 'G') {
LAB_00ff9a5c:
          pDVar2 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar2);
          DName::operator+=(local_84,',');
          goto LAB_00ff9a7c;
        }
        if (cVar4 == 'H') goto LAB_00ff9a9c;
        if (cVar4 == 'I') goto LAB_00ff9a7c;
        if (cVar4 == 'J') goto LAB_00ff9a5c;
      }
      DName::operator+(local_84,(char)in_stack_00000004);
      goto LAB_00ff9ac6;
    }
    if (cVar4 == 'Q') goto LAB_00ff9996;
    if (cVar4 == 'R') {
      getZName(SUB41(&local_8c,0),false);
      getSignedDimension();
      *(undefined4 *)in_stack_00000004 = local_8c;
      *(undefined4 *)(in_stack_00000004 + 4) = local_88;
      goto LAB_00ff9ac6;
    }
  }
LAB_00ff987d:
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  *(undefined4 *)in_stack_00000004 = 0;
  in_stack_00000004[4] = (DName)0x2;
LAB_00ff9ac6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FF9AD7  UnDecorator::getPtrRefDataType  size=231  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefDataType(class DName const &,int)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getPtrRefDataType(DName *param_1,int param_2)

{
  DName *this;
  int in_stack_0000000c;
  char *pcVar1;
  DName *pDVar2;
  DName local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_01f8fbe0 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if ((in_stack_0000000c != 0) && (*DAT_01f8fbe0 == 'X')) {
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    if (*(int *)param_2 != 0) {
      operator+((char *)param_1,(DName *)"void ");
      return param_1;
    }
    DName::DName(param_1,"void");
    return param_1;
  }
  if (*DAT_01f8fbe0 == 'Y') {
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    getArrayType(param_1);
    return param_1;
  }
  getBasicDataType((DName *)&local_c);
  if ((*(uint *)(param_2 + 4) & 0x4000) == 0) {
    if ((*(uint *)(param_2 + 4) & 0x2000) == 0) goto LAB_00ff9b9f;
    pcVar1 = "cli::pin_ptr<";
  }
  else {
    pcVar1 = "cli::array<";
  }
  pDVar2 = (DName *)&local_14;
  this = (DName *)DName::DName(local_1c,pcVar1);
  DName::operator+(this,pDVar2);
  local_8 = local_10;
  local_c = local_14;
LAB_00ff9b9f:
  *(undefined4 *)param_1 = local_c;
  *(undefined4 *)(param_1 + 4) = local_8;
  return param_1;
}

// 00FF9BBE  UnDecorator::getVbTableType  size=23  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVbTableType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getVbTableType(DName *param_1)

{
  getVfTableType(param_1);
  return param_1;
}

// 00FF9BD5  UnDecorator::getTemplateArgumentList  size=527  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateArgumentList(void)
   
   Library: Visual Studio 2010 Release */

void __cdecl UnDecorator::getTemplateArgumentList(void)

{
  DName DVar1;
  char cVar2;
  DName *pDVar3;
  undefined4 *puVar4;
  long lVar5;
  DName *pDVar6;
  DName *in_stack_00000004;
  char *pcVar7;
  undefined1 local_78 [8];
  DName local_70 [8];
  DName local_68 [8];
  DName local_60 [8];
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  char *local_48;
  undefined4 local_44;
  uint local_40;
  DName local_3c [8];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  *(undefined4 *)in_stack_00000004 = 0;
  DAT_01f8fbf9 = 1;
  local_24 = 1;
  DVar1 = in_stack_00000004[4];
  do {
    if (((DVar1 != (DName)0x0) || (*DAT_01f8fbe0 == '\0')) || (*DAT_01f8fbe0 == '@')) {
      DAT_01f8fbf9 = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_24 == 0) {
      DName::operator+=(in_stack_00000004,',');
    }
    else {
      local_24 = 0;
    }
    cVar2 = *DAT_01f8fbe0;
    if ((int)cVar2 - 0x30U < 10) {
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      pDVar3 = (DName *)Replicator::operator[](DAT_01f8fbdc,(int)local_78);
    }
    else {
      local_1c = local_1c & 0xffff0000;
      local_48 = DAT_01f8fbe0;
      local_20 = 0;
      if (cVar2 == 'X') {
        DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
        pcVar7 = "void";
LAB_00ff9c88:
        DName::operator=((DName *)&local_20,pcVar7);
      }
      else {
        if ((cVar2 == '$') && (DAT_01f8fbe0[1] != '$')) {
          DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
          puVar4 = (undefined4 *)getTemplateConstant();
        }
        else {
          if (cVar2 == '?') {
            getSignedDimension();
            if ((DAT_01f8fbf0 & 0x4000) == 0) {
              pDVar3 = (DName *)&local_58;
              pDVar6 = (DName *)DName::DName(local_68,"`template-parameter");
              DName::operator+(pDVar6,pDVar3);
              local_34 = local_58;
              local_30 = local_54;
              DName::operator+=((DName *)&local_34,"\'");
              local_20 = local_34;
              local_1c = local_30;
            }
            else {
              DName::getString(local_3c,local_18,0x10);
              lVar5 = _atol(local_18);
              pcVar7 = (char *)(*DAT_01f8fbf4)(lVar5);
              if (pcVar7 != (char *)0x0) goto LAB_00ff9c88;
              pDVar3 = (DName *)&local_50;
              pDVar6 = (DName *)DName::DName(local_60,"`template-parameter");
              DName::operator+(pDVar6,pDVar3);
              local_2c = local_50;
              local_28 = local_4c;
              DName::operator+=((DName *)&local_2c,"\'");
              local_20 = local_2c;
              local_1c = local_28;
            }
            goto LAB_00ff9d98;
          }
          local_40 = local_40 & 0xffff0000;
          local_44 = 0;
          puVar4 = (undefined4 *)getPrimaryDataType(local_70);
        }
        local_20 = *puVar4;
        local_1c = puVar4[1];
      }
LAB_00ff9d98:
      if ((1 < (int)DAT_01f8fbe0 - (int)local_48) && (*(int *)DAT_01f8fbdc != 9)) {
        Replicator::operator+=(DAT_01f8fbdc,(DName *)&local_20);
      }
      pDVar3 = (DName *)&local_20;
    }
    DName::operator+=(in_stack_00000004,pDVar3);
    DVar1 = in_stack_00000004[4];
  } while( true );
}

// 00FF9DE4  UnDecorator::getOperatorName  size=1494  [run]
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getOperatorName(bool,bool *)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getOperatorName(bool param_1,bool *param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  DName *pDVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  DName *pDVar8;
  undefined3 in_stack_00000005;
  undefined1 *in_stack_0000000c;
  char *pcVar9;
  undefined1 local_94 [32];
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [24];
  DName local_34 [8];
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  cVar2 = *DAT_01f8fbe0;
  local_8 = local_8 & 0xffff0000;
  local_10 = local_10 & 0xffff0000;
  bVar1 = false;
  pcVar3 = DAT_01f8fbe0 + 1;
  local_c = 0;
  local_14 = (int *)0x0;
  if ('A' < cVar2) {
    if (cVar2 == 'B') {
      bVar1 = true;
      goto LAB_00ffa38a;
    }
    if (cVar2 < 'C') goto LAB_00ffa27e;
    if (cVar2 < '[') goto LAB_00ffa38a;
    if (cVar2 == '_') {
      cVar2 = *pcVar3;
      pcVar3 = DAT_01f8fbe0 + 2;
      if (cVar2 < 'P') {
        if ('C' < cVar2) {
LAB_00ffa367:
          pcVar9 = *(char **)("__stdcall" + DAT_01f8fbe0[1] * 4 + 8);
          DAT_01f8fbe0 = pcVar3;
LAB_00ffa009:
          DName::DName(_param_1,pcVar9);
          return _param_1;
        }
        if (cVar2 < ':') {
          if (cVar2 == '9') {
            pcVar9 = DAT_01f8fbe0 + 1;
            DAT_01f8fbe0 = pcVar3;
            DName::DName((DName *)&local_24,*(char **)("__based(" + *pcVar9 * 4 + 4));
            local_8 = local_20 | 0x8000;
LAB_00ffa03f:
            *(int *)_param_1 = local_24;
            goto LAB_00ff9e8d;
          }
          if (cVar2 == '\0') {
LAB_00ff9f88:
            pcVar3 = pcVar3 + -1;
LAB_00ff9f8e:
            DAT_01f8fbe0 = pcVar3;
            DName::DName(_param_1,1);
            return _param_1;
          }
          if ('/' < cVar2) {
            if (cVar2 < '7') {
              pcVar9 = *(char **)("__based(" + DAT_01f8fbe0[1] * 4 + 4);
              DAT_01f8fbe0 = pcVar3;
              goto LAB_00ff9e4d;
            }
            if (cVar2 < '9') {
              pcVar9 = *(char **)("__based(" + DAT_01f8fbe0[1] * 4 + 4);
              DAT_01f8fbe0 = pcVar3;
              goto LAB_00ffa009;
            }
          }
        }
        else if (cVar2 == '?') {
          cVar2 = *pcVar3;
          pcVar3 = DAT_01f8fbe0 + 3;
          if (cVar2 == '\0') goto LAB_00ff9f88;
          if (cVar2 == '0') {
            pcVar9 = "`anonymous namespace\'";
            DAT_01f8fbe0 = pcVar3;
LAB_00ffa073:
            getStringEncoding((char *)&local_24,(int)pcVar9);
            local_8 = local_20 | 0x1000;
            goto LAB_00ffa03f;
          }
        }
        else if ('@' < cVar2) {
          if (cVar2 < 'C') goto LAB_00ffa367;
          if (cVar2 == 'C') {
            pcVar9 = "`string\'";
            DAT_01f8fbe0 = pcVar3;
            goto LAB_00ffa073;
          }
        }
      }
      else if (cVar2 < 'U') {
        if ('R' < cVar2) goto LAB_00ffa367;
        if (cVar2 == 'P') {
          pcVar9 = DAT_01f8fbe0 + 1;
          DAT_01f8fbe0 = pcVar3;
          DName::operator=((DName *)&local_c,*(char **)("__stdcall" + *pcVar9 * 4 + 8));
          piVar5 = (int *)getOperatorName(SUB41(local_74,0),(bool *)0x0);
          local_14 = (int *)*piVar5;
          local_10 = piVar5[1];
          if ((local_14 == (int *)0x0) || (pcVar3 = DAT_01f8fbe0, (local_10 & 0x400) == 0)) {
LAB_00ffa293:
            pDVar8 = (DName *)&local_c;
LAB_00ffa296:
            DName::operator+(pDVar8,_param_1);
            return _param_1;
          }
        }
        else {
          iVar7 = local_c;
          if (cVar2 == 'Q') goto LAB_00ff9e85;
          if (cVar2 == 'R') {
            pcVar9 = DAT_01f8fbe0 + 1;
            DAT_01f8fbe0 = pcVar3;
            DName::operator=((DName *)&local_c,*(char **)("__stdcall" + *pcVar9 * 4 + 8));
            if (*DAT_01f8fbe0 == '\0') {
              DName::operator+((DName *)&local_c,(DNameStatus)_param_1);
              return _param_1;
            }
            uVar6 = (int)*DAT_01f8fbe0 - 0x30;
            pcVar3 = DAT_01f8fbe0;
            if ((-1 < (int)uVar6) && (uVar6 < 5)) {
              DName::operator=((DName *)&local_14,(&PTR_s_Type_Descriptor__017014d0)[uVar6]);
              pcVar3 = DAT_01f8fbe0;
              iVar7 = (int)*DAT_01f8fbe0;
              DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
              if (iVar7 == 0x30) {
                getDataType((DName *)&local_2c);
                local_1c = local_2c;
                local_18 = local_28;
                DName::operator+=((DName *)&local_1c,' ');
                local_24 = local_1c;
                local_20 = local_18;
                DName::operator+=((DName *)&local_24,(DName *)&local_c);
                pDVar8 = (DName *)&local_24;
                goto LAB_00ffa296;
              }
              if (iVar7 == 0x31) {
                local_1c = local_c;
                local_18 = local_8;
                DName::operator+=((DName *)&local_1c,(DName *)&local_14);
                cVar2 = (char)local_4c;
                pDVar8 = (DName *)getSignedDimension();
                pDVar8 = (DName *)DName::operator+(pDVar8,cVar2);
                DName::operator+=((DName *)&local_1c,pDVar8);
                cVar2 = (char)local_5c;
                pDVar8 = (DName *)getSignedDimension();
                pDVar8 = (DName *)DName::operator+(pDVar8,cVar2);
                DName::operator+=((DName *)&local_1c,pDVar8);
                cVar2 = (char)local_6c;
                pDVar8 = (DName *)getSignedDimension();
                pDVar8 = (DName *)DName::operator+(pDVar8,cVar2);
                DName::operator+=((DName *)&local_1c,pDVar8);
                cVar2 = (char)local_54;
                pDVar8 = (DName *)getDimension(SUB41(local_64,0));
                pDVar8 = (DName *)DName::operator+(pDVar8,cVar2);
                DName::operator+=((DName *)&local_1c,pDVar8);
                DName::operator+((DName *)&local_1c,param_1);
                return _param_1;
              }
              if (2 < iVar7 - 0x32U) goto LAB_00ff9f8e;
              goto LAB_00ffa293;
            }
          }
        }
      }
      else if ('T' < cVar2) {
        if (cVar2 < 'W') {
          pcVar9 = *(char **)("__stdcall" + DAT_01f8fbe0[1] * 4 + 8);
          DAT_01f8fbe0 = pcVar3;
LAB_00ff9e4d:
          DName::operator=((DName *)&local_c,pcVar9);
          goto LAB_00ff9e55;
        }
        if ('W' < cVar2) {
          if (cVar2 < 'Z') goto LAB_00ffa367;
          if (cVar2 == '_') {
            cVar2 = *pcVar3;
            pcVar3 = DAT_01f8fbe0 + 3;
            if ('@' < cVar2) {
              if ('D' < cVar2) {
                if (cVar2 < 'G') {
                  pcVar9 = DAT_01f8fbe0 + 2;
                  DAT_01f8fbe0 = pcVar3;
                  DName::DName((DName *)&local_1c,(&PTR_DAT_017013a0)[*pcVar9]);
                  if (*DAT_01f8fbe0 == '?') {
                    pDVar8 = (DName *)getDecoratedName();
                    DName::operator+=((DName *)&local_1c,pDVar8);
                    if (*DAT_01f8fbe0 == '@') {
                      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
                    }
                  }
                  else {
                    pDVar8 = (DName *)getSymbolName();
                    DName::operator+=((DName *)&local_1c,pDVar8);
                  }
                  DName::operator+=((DName *)&local_1c,"\'\'");
                  *(int *)_param_1 = local_1c;
                  local_8 = local_18;
                  goto LAB_00ff9e8d;
                }
                if ('J' < cVar2) goto LAB_00ffa27e;
              }
              pcVar9 = (&PTR_DAT_017013a0)[DAT_01f8fbe0[2]];
              DAT_01f8fbe0 = pcVar3;
              goto LAB_00ffa009;
            }
          }
        }
      }
    }
    goto LAB_00ffa27e;
  }
  if (cVar2 == 'A') {
LAB_00ffa38a:
    cVar2 = *DAT_01f8fbe0;
    DAT_01f8fbe0 = pcVar3;
    DName::operator=((DName *)&local_c,*(char **)(&DAT_017012ac + cVar2 * 4));
    if (bVar1) {
      iVar7 = local_c;
      pcVar3 = DAT_01f8fbe0;
      if (local_c != 0) {
        local_8 = local_8 | 0x200;
      }
    }
    else {
LAB_00ff9e55:
      iVar7 = 0;
      pcVar3 = DAT_01f8fbe0;
      if (local_c != 0) {
        pDVar8 = (DName *)&local_2c;
        pDVar4 = (DName *)DName::DName(local_34,"operator");
        DName::operator+(pDVar4,pDVar8);
        local_8 = local_28;
        iVar7 = local_2c;
        pcVar3 = DAT_01f8fbe0;
      }
    }
LAB_00ff9e85:
    DAT_01f8fbe0 = pcVar3;
    *(int *)_param_1 = iVar7;
LAB_00ff9e8d:
    *(uint *)(_param_1 + 4) = local_8;
  }
  else {
    if (cVar2 == '\0') goto LAB_00ff9f88;
    if ('/' < cVar2) {
      if (cVar2 < '2') {
        local_14 = (int *)0x0;
        if ((char)param_2 == '\0') {
LAB_00ff9f1b:
          DAT_01f8fbe0 = pcVar3;
          piVar5 = (int *)getZName(SUB41(local_94,0),false);
          local_c = *piVar5;
          local_8 = piVar5[1];
          DAT_01f8fbe0 = pcVar3;
          if ((local_c != 0) && (pcVar3[-1] == '1')) {
            pDVar8 = (DName *)&local_24;
            pDVar4 = (DName *)DName::DName((DName *)&local_2c,'~');
            DName::operator+(pDVar4,pDVar8);
            local_c = local_24;
            local_8 = local_20;
          }
          iVar7 = local_c;
          pcVar3 = DAT_01f8fbe0;
          if (local_14 != (int *)0x0) {
            DName::operator+=((DName *)&local_c,(DName *)&local_14);
            iVar7 = local_c;
            pcVar3 = DAT_01f8fbe0;
          }
          goto LAB_00ff9e85;
        }
        DAT_01f8fbe0 = pcVar3;
        getTemplateArgumentList();
        pDVar8 = (DName *)&local_2c;
        pDVar4 = (DName *)DName::DName((DName *)&local_24,'<');
        DName::operator+(pDVar4,pDVar8);
        DName::operator+=((DName *)&local_14,(DName *)&local_2c);
        if ((local_14 != (int *)0x0) && (cVar2 = (**(code **)(*local_14 + 4))(), cVar2 == '>')) {
          DName::operator+=((DName *)&local_14,' ');
        }
        DName::operator+=((DName *)&local_14,'>');
        if (in_stack_0000000c != (undefined1 *)0x0) {
          *in_stack_0000000c = 1;
        }
        if (*DAT_01f8fbe0 != '\0') {
          pcVar3 = DAT_01f8fbe0 + 1;
          goto LAB_00ff9f1b;
        }
        *(int **)_param_1 = local_14;
        local_8 = local_10;
        goto LAB_00ff9e8d;
      }
      if (cVar2 < ':') {
        pcVar9 = *(char **)(&DAT_017012c8 + *DAT_01f8fbe0 * 4);
        DAT_01f8fbe0 = pcVar3;
        goto LAB_00ff9e4d;
      }
    }
LAB_00ffa27e:
    DAT_01f8fbe0 = pcVar3;
    *(uint *)(_param_1 + 4) = *(uint *)(_param_1 + 4) & 0xffff00ff;
    _param_1[4] = (DName)0x2;
    *(undefined4 *)_param_1 = 0;
  }
  return _param_1;
}

// 00FFA3BA  UnDecorator::getTemplateName  size=343  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateName(bool)
   
   Library: Visual Studio 2010 Release */

void __cdecl UnDecorator::getTemplateName(bool param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  DName *this;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DName *pDVar6;
  undefined4 local_ac [11];
  undefined4 local_80 [11];
  undefined4 local_54 [11];
  DName local_28 [16];
  DName local_18 [8];
  int *local_10;
  int local_c;
  char local_5;
  
  uVar3 = DAT_01f8fbdc;
  uVar2 = DAT_01f8fbd8;
  uVar1 = DAT_01f8fbd4;
  if ((*DAT_01f8fbe0 == '?') && (DAT_01f8fbe0[1] == '$')) {
    local_54[0] = 0xffffffff;
    local_80[0] = 0xffffffff;
    local_ac[0] = 0xffffffff;
    DAT_01f8fbd4 = local_54;
    DAT_01f8fbd8 = local_80;
    DAT_01f8fbdc = local_ac;
    local_5 = '\0';
    if (DAT_01f8fbe0[2] == '?') {
      DAT_01f8fbe0 = DAT_01f8fbe0 + 3;
      piVar5 = (int *)getOperatorName(SUB41(local_18,0),(bool *)0x1);
    }
    else {
      DAT_01f8fbe0 = DAT_01f8fbe0 + 2;
      piVar5 = (int *)getZName(SUB41(local_18,0),true);
    }
    local_10 = (int *)*piVar5;
    local_c = piVar5[1];
    if (local_10 == (int *)0x0) {
      DAT_01f8fbf8 = 1;
    }
    if (local_5 == '\0') {
      getTemplateArgumentList();
      pDVar6 = local_18;
      this = (DName *)DName::DName(local_28,'<');
      DName::operator+(this,pDVar6);
      DName::operator+=((DName *)&local_10,local_18);
      if (local_10 != (int *)0x0) {
        cVar4 = (**(code **)(*local_10 + 4))();
        if (cVar4 == '>') {
          DName::operator+=((DName *)&local_10,' ');
        }
      }
      DName::operator+=((DName *)&local_10,'>');
      if ((in_stack_00000008 != '\0') && (*DAT_01f8fbe0 != '\0')) {
        DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      }
    }
    DAT_01f8fbd4 = (undefined4 *)uVar1;
    DAT_01f8fbd8 = (undefined4 *)uVar2;
    *_param_1 = (int)local_10;
    DAT_01f8fbdc = (undefined4 *)uVar3;
    _param_1[1] = local_c;
    return;
  }
  _param_1[1] = _param_1[1] & 0xffff00ff;
  *_param_1 = 0;
  *(undefined1 *)(_param_1 + 1) = 2;
  return;
}

// 00FFA511  UnDecorator::getZName  size=534  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getZName(bool,bool)
   
   Library: Visual Studio 2010 Release */

void __cdecl UnDecorator::getZName(bool param_1,bool param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  long lVar3;
  DName *this;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined3 in_stack_00000005;
  char in_stack_0000000c;
  DName *pDVar7;
  DName local_38 [4];
  uint local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  if ((int)*DAT_01f8fbe0 - 0x30U < 10) {
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    Replicator::operator[](DAT_01f8fbd8,(int)_param_1);
    goto LAB_00ffa719;
  }
  local_20 = 0;
  local_1c = local_1c & 0xffff0000;
  if (*DAT_01f8fbe0 == '?') {
    puVar1 = (undefined4 *)getTemplateName(SUB41(&local_30,0));
    local_20 = *puVar1;
    local_1c = puVar1[1];
    pcVar4 = DAT_01f8fbe0 + 1;
    if (*DAT_01f8fbe0 != '@') {
      DName::operator=((DName *)&local_20,(*DAT_01f8fbe0 != '\0') + 1);
      pcVar4 = DAT_01f8fbe0;
    }
  }
  else {
    pcVar2 = "template-parameter-";
    pcVar6 = "template-parameter-";
    local_24 = 0x12;
    pcVar4 = DAT_01f8fbe0;
    do {
      if ((*pcVar4 == '\0') || (*pcVar4 != *pcVar6)) break;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
    if (*pcVar4 == *pcVar6) {
      DAT_01f8fbe0 = DAT_01f8fbe0 + 0x13;
    }
    else {
      pcVar2 = "generic-type-";
      pcVar6 = "generic-type-";
      iVar5 = 0xc;
      pcVar4 = DAT_01f8fbe0;
      do {
        if ((*pcVar4 == '\0') || (*pcVar4 != *pcVar6)) break;
        pcVar4 = pcVar4 + 1;
        pcVar6 = pcVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (*pcVar4 != *pcVar6) {
        if ((in_stack_0000000c == '\0') || (*DAT_01f8fbe0 != '@')) {
          puVar1 = (undefined4 *)DName::DName(local_38,&DAT_01f8fbe0,'@');
          local_20 = *puVar1;
          local_1c = puVar1[1];
          pcVar4 = DAT_01f8fbe0;
        }
        else {
          local_1c = local_34 & 0xffff0000;
          DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
          local_20 = 0;
          pcVar4 = DAT_01f8fbe0;
        }
        goto LAB_00ffa6f0;
      }
      DAT_01f8fbe0 = DAT_01f8fbe0 + 0xd;
    }
    getSignedDimension();
    if ((DAT_01f8fbf0 & 0x4000) != 0) {
      DName::getString((DName *)&local_28,local_18,0x10);
      lVar3 = _atol(local_18);
      pcVar4 = (char *)(*DAT_01f8fbf4)(lVar3);
      if (pcVar4 != (char *)0x0) {
        DName::operator=((DName *)&local_20,pcVar4);
        pcVar4 = DAT_01f8fbe0;
        goto LAB_00ffa6f0;
      }
    }
    DName::operator=((DName *)&local_20,"`");
    pDVar7 = (DName *)&local_30;
    this = (DName *)DName::DName(local_38,pcVar2);
    DName::operator+(this,pDVar7);
    local_28 = local_30;
    local_24 = local_2c;
    DName::operator+=((DName *)&local_28,"\'");
    DName::operator+=((DName *)&local_20,(DName *)&local_28);
    pcVar4 = DAT_01f8fbe0;
  }
LAB_00ffa6f0:
  DAT_01f8fbe0 = pcVar4;
  if ((param_2) && (*(int *)DAT_01f8fbd8 != 9)) {
    Replicator::operator+=(DAT_01f8fbd8,(DName *)&local_20);
  }
  *_param_1 = local_20;
  _param_1[1] = local_1c;
LAB_00ffa719:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FFA727  UnDecorator::getScopedName  size=225  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScopedName(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getScopedName(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  DName *pDVar3;
  DName *in_stack_00000004;
  char *pcVar4;
  DName *pDVar5;
  DName local_1c [8];
  char local_14 [8];
  DName local_c [8];
  
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  *(undefined4 *)in_stack_00000004 = 0;
  puVar2 = (undefined4 *)getZName(SUB41(local_c,0),true);
  *(undefined4 *)in_stack_00000004 = *puVar2;
  uVar1 = puVar2[1];
  *(undefined4 *)(in_stack_00000004 + 4) = uVar1;
  if (((char)uVar1 == '\0') && (*DAT_01f8fbe0 != '\0')) {
    if (*DAT_01f8fbe0 == '@') goto LAB_00ffa7ab;
    pDVar5 = local_c;
    pcVar4 = local_14;
    pDVar3 = (DName *)getScope();
    pDVar3 = (DName *)DName::operator+(pDVar3,pcVar4);
    puVar2 = (undefined4 *)DName::operator+(pDVar3,pDVar5);
    *(undefined4 *)in_stack_00000004 = *puVar2;
    *(undefined4 *)(in_stack_00000004 + 4) = puVar2[1];
  }
  if (*DAT_01f8fbe0 != '@') {
    if (*DAT_01f8fbe0 != '\0') {
      *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
      in_stack_00000004[4] = (DName)0x2;
      *(undefined4 *)in_stack_00000004 = 0;
      return in_stack_00000004;
    }
    if (*(int *)in_stack_00000004 == 0) {
      DName::operator=(in_stack_00000004,1);
      return in_stack_00000004;
    }
    pDVar5 = local_1c;
    pcVar4 = local_14;
    pDVar3 = (DName *)DName::DName(local_c,1);
    pDVar3 = (DName *)DName::operator+(pDVar3,pcVar4);
    puVar2 = (undefined4 *)DName::operator+(pDVar3,pDVar5);
    *(undefined4 *)in_stack_00000004 = *puVar2;
    *(undefined4 *)(in_stack_00000004 + 4) = puVar2[1];
    return in_stack_00000004;
  }
LAB_00ffa7ab:
  DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
  return in_stack_00000004;
}

// 00FFA808  UnDecorator::getECSUName  size=19  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getECSUName(void)
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl UnDecorator::getECSUName(void)

{
  undefined4 in_stack_00000004;
  
  getScopedName();
  return in_stack_00000004;
}

// 00FFA81B  UnDecorator::getECSUDataType  size=272  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getECSUDataType(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getECSUDataType(void)

{
  char cVar1;
  DName *this;
  uint uVar2;
  uint uVar3;
  DName *in_stack_00000004;
  DName *pDVar4;
  char *pcVar5;
  DName local_24 [16];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar5 = DAT_01f8fbe0;
  uVar3 = 1;
  uVar2 = ~(DAT_01f8fbf0 >> 0xf) & 1;
  if ((uVar2 == 0) || ((DAT_01f8fbf0 & 0x1000) != 0)) {
    uVar3 = 0;
  }
  cVar1 = *DAT_01f8fbe0;
  local_c = 0;
  local_8 = local_8 & 0xffff0000;
  DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
  if (cVar1 == '\0') {
    DAT_01f8fbe0 = pcVar5;
    DName::DName(in_stack_00000004,"unknown ecsu\'");
    return in_stack_00000004;
  }
  if (cVar1 == 'T') {
    pcVar5 = "union ";
  }
  else if (cVar1 == 'U') {
    pcVar5 = "struct ";
  }
  else if (cVar1 == 'V') {
    pcVar5 = "class ";
  }
  else {
    if (cVar1 == 'W') {
      getEnumType();
      pDVar4 = (DName *)&local_14;
      this = (DName *)DName::DName(local_24,"enum ");
      DName::operator+(this,pDVar4);
      local_c = local_14;
      local_8 = local_10;
      goto LAB_00ffa8d4;
    }
    if (cVar1 == 'X') {
      pcVar5 = "coclass ";
    }
    else {
      uVar2 = uVar3;
      if (cVar1 != 'Y') goto LAB_00ffa8d4;
      pcVar5 = "cointerface ";
    }
  }
  DName::operator=((DName *)&local_c,pcVar5);
  uVar2 = uVar3;
LAB_00ffa8d4:
  local_14 = 0;
  local_10 = local_10 & 0xffff0000;
  if (uVar2 != 0) {
    local_14 = local_c;
    local_10 = local_8;
  }
  getScopedName();
  DName::operator+=((DName *)&local_14,(DName *)&local_c);
  *(undefined4 *)in_stack_00000004 = local_14;
  *(uint *)(in_stack_00000004 + 4) = local_10;
  return in_stack_00000004;
}

// 00FFA92B  UnDecorator::getSymbolName  size=74  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSymbolName(void)
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl UnDecorator::getSymbolName(void)

{
  undefined4 in_stack_00000004;
  bool bVar1;
  
  bVar1 = SUB41(in_stack_00000004,0);
  if (*DAT_01f8fbe0 == '?') {
    if (DAT_01f8fbe0[1] == '$') {
      getTemplateName(bVar1);
    }
    else {
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      getOperatorName(bVar1,(bool *)0x0);
    }
  }
  else {
    getZName(bVar1,true);
  }
  return in_stack_00000004;
}

// 00FFA975  UnDecorator::getBasedType  size=156  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getBasedType(void)
   
   Library: Visual Studio 2010 Release */

void __cdecl UnDecorator::getBasedType(void)

{
  char cVar1;
  char *pcVar2;
  DName *pDVar3;
  undefined4 *in_stack_00000004;
  undefined4 local_c;
  undefined4 local_8;
  
  pcVar2 = UScore(0);
  DName::DName((DName *)&local_c,pcVar2);
  if (*DAT_01f8fbe0 == '\0') {
    DName::operator+=((DName *)&local_c,1);
  }
  else {
    cVar1 = *DAT_01f8fbe0;
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    if (cVar1 == '0') {
      DName::operator+=((DName *)&local_c,"void");
    }
    else if (cVar1 == '2') {
      pDVar3 = (DName *)getScopedName();
      DName::operator+=((DName *)&local_c,pDVar3);
    }
    else if (cVar1 == '5') {
      in_stack_00000004[1] = in_stack_00000004[1] & 0xffff00ff;
      *in_stack_00000004 = 0;
      *(undefined1 *)(in_stack_00000004 + 1) = 2;
      return;
    }
  }
  DName::operator+=((DName *)&local_c,") ");
  *in_stack_00000004 = local_c;
  in_stack_00000004[1] = local_8;
  return;
}

// 00FFAA11  UnDecorator::composeDeclaration  size=3258  [run]
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::composeDeclaration(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::composeDeclaration(DName *param_1)

{
  uint uVar1;
  uint uVar2;
  DName *pDVar3;
  DName *pDVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  DName *in_stack_00000008;
  char *pcVar10;
  DName local_5c [8];
  DName local_54 [8];
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_20 = local_20 & 0xffff0000;
  local_24 = 0;
  uVar1 = getTypeEncoding();
  if ((*(int *)in_stack_00000008 == 0) ||
     (local_18 = 1, (*(uint *)(in_stack_00000008 + 4) & 0x200) == 0)) {
    local_18 = 0;
  }
  if (uVar1 == 0xffff) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    param_1[4] = (DName)0x2;
    *(undefined4 *)param_1 = 0;
    return param_1;
  }
  if (uVar1 == 0xfffe) {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if (uVar1 == 0xfffd) {
    *(undefined4 *)param_1 = *(undefined4 *)in_stack_00000008;
    local_20 = *(uint *)(in_stack_00000008 + 4);
    goto LAB_00ffb6c3;
  }
  local_8 = uVar1 & 0x8000;
  if (local_8 == 0) {
LAB_00ffb103:
    DName::operator+=((DName *)&local_24,in_stack_00000008);
    if (local_8 == 0) {
      if (((uVar1 & 0x7c00) == 0x6800) || ((uVar1 & 0x7c00) == 0x7000)) {
        getVfTableType(param_1);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x6000) {
        getDimension(SUB41(&local_3c,0));
        local_4c = local_24;
        local_48 = local_20;
        DName::operator+=((DName *)&local_4c,'{');
        local_44 = local_4c;
        local_40 = local_48;
        DName::operator+=((DName *)&local_44,(DName *)&local_3c);
        DName::operator+((DName *)&local_44,(char *)param_1);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x7c00) {
        getVdispMapType(param_1);
        return param_1;
      }
      uVar2 = uVar1 & 0x6000;
    }
    else {
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) || ((uVar1 & 0x1b00) != 0x1000 || local_8 == 0)) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1100 && local_8 != 0)) {
        pcVar10 = "`template static data member constructor helper\'";
        goto LAB_00ffb2c8;
      }
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1200 && local_8 != 0)) {
        pcVar10 = "`template static data member destructor helper\'";
        goto LAB_00ffb2c8;
      }
      if (local_8 == 0) {
        if ((uVar1 & 0x7c00) == 0x7800) goto LAB_00ffb6bb;
        goto LAB_00ffb2e7;
      }
LAB_00ffb2ed:
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    else {
      pcVar10 = "`local static destructor helper\'";
LAB_00ffb2c8:
      DName::operator+=((DName *)&local_24,pcVar10);
LAB_00ffb2e7:
      if (local_8 != 0) goto LAB_00ffb2ed;
      uVar2 = uVar1 & 0x6000;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) ||
       (((uVar1 & 0x1b00) != 0x1100 || local_8 == 0 && ((uVar1 & 0x1b00) != 0x1200 || local_8 == 0))
       )) {
      piVar6 = (int *)getExternalDataType(local_5c);
      local_24 = *piVar6;
      local_20 = piVar6[1];
    }
    else {
      pDVar4 = (DName *)&local_4c;
      pDVar3 = (DName *)DName::DName(local_5c," ");
      DName::operator+(pDVar3,pDVar4);
      local_24 = local_4c;
      local_20 = local_48;
    }
LAB_00ffb393:
    if (local_8 == 0) {
      uVar2 = uVar1 & 0x6000;
    }
    else {
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar2 == 0) {
      if ((~(DAT_01f8fbf0 >> 9) & 1) != 0) {
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if ((uVar2 == 0) && (local_8 == 0 || (uVar1 & 0x700) == 0x200)) {
          pDVar4 = (DName *)&local_4c;
          pDVar3 = (DName *)DName::DName(local_5c,"static ");
          DName::operator+(pDVar3,pDVar4);
          local_24 = local_4c;
          local_20 = local_48;
        }
        if (local_8 == 0) {
LAB_00ffb452:
          uVar2 = uVar1 & 0x6000;
LAB_00ffb459:
          if (uVar2 == 0) {
            uVar2 = uVar1 & 0x400;
          }
          else {
            uVar2 = uVar1 & 0x1000;
          }
          if (uVar2 == 0) goto LAB_00ffb518;
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x6000;
          }
          else {
            uVar2 = (uVar1 & 0x1800) - 0x800;
          }
          if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x500)) {
            if (local_8 == 0) {
              uVar2 = uVar1 & 0x6000;
            }
            else {
              uVar2 = (uVar1 & 0x1800) - 0x800;
            }
            if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x600)) {
              if (local_8 == 0) {
                uVar2 = uVar1 & 0x6000;
              }
              else {
                uVar2 = (uVar1 & 0x1800) - 0x800;
              }
              if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x400)) goto LAB_00ffb518;
            }
          }
        }
        else if ((uVar1 & 0x700) != 0x100) {
          if (local_8 == 0) goto LAB_00ffb452;
          uVar2 = (uVar1 & 0x1800) - 0x800;
          goto LAB_00ffb459;
        }
        pDVar4 = (DName *)&local_4c;
        pDVar3 = (DName *)DName::DName(local_5c,"virtual ");
        DName::operator+(pDVar3,pDVar4);
        local_24 = local_4c;
        local_20 = local_48;
      }
LAB_00ffb518:
      if ((~(DAT_01f8fbf0 >> 7) & 1) != 0) {
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            bVar9 = (uVar1 & 0x1800) == 0x800;
          }
          else {
            bVar9 = ((byte)uVar1 & 0xc0) == 0x40;
          }
          if (!bVar9) goto LAB_00ffb57a;
          pcVar10 = "private: ";
LAB_00ffb611:
          pDVar3 = (DName *)&local_4c;
          pDVar4 = (DName *)DName::DName(local_5c,pcVar10);
          DName::operator+(pDVar4,pDVar3);
          local_24 = local_4c;
          local_20 = local_48;
        }
        else {
LAB_00ffb57a:
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x6000;
          }
          else {
            uVar2 = (uVar1 & 0x1800) - 0x800;
          }
          if (uVar2 == 0) {
            if (local_8 == 0) {
              bVar9 = (uVar1 & 0x1800) == 0x1000;
            }
            else {
              bVar9 = ((byte)uVar1 & 0xc0) == 0x80;
            }
            if (bVar9) {
              pcVar10 = "protected: ";
              goto LAB_00ffb611;
            }
          }
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x6000;
          }
          else {
            uVar2 = (uVar1 & 0x1800) - 0x800;
          }
          if (uVar2 == 0) {
            if (local_8 == 0) {
              uVar2 = uVar1 & 0x1800;
            }
            else {
              uVar2 = uVar1 & 0xc0;
            }
            if (uVar2 == 0) {
              pcVar10 = "public: ";
              goto LAB_00ffb611;
            }
          }
        }
      }
    }
    if (local_8 == 0) {
      uVar2 = uVar1 & 0x6000;
    }
    else {
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 != 0) && ((DAT_01f8fbf0 & 0x1000) == 0)) {
      pDVar4 = (DName *)&local_4c;
      pDVar3 = (DName *)DName::DName(local_5c,"[thunk]:");
      DName::operator+(pDVar3,pDVar4);
      local_24 = local_4c;
      local_20 = local_48;
    }
    if ((uVar1 & 0x10000) != 0) {
      pDVar4 = (DName *)&local_4c;
      pDVar3 = (DName *)DName::DName(local_5c,"extern \"C\" ");
      DName::operator+(pDVar3,pDVar4);
      local_20 = local_48;
      local_24 = local_4c;
    }
  }
  else {
    local_10 = uVar1 & 0x1800;
    local_c = (uint)(local_10 == 0x800);
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1000)) goto LAB_00ffb103;
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && (((uVar1 & 0x1b00) == 0x1100 || ((uVar1 & 0x1b00) == 0x1200))))
    goto LAB_00ffb103;
    if ((uVar1 & 0x4000) != 0) {
      if (((~(DAT_01f8fbf0 >> 1) & 1) == 0) || ((~(DAT_01f8fbf0 >> 3) & 1) == 0)) {
        pDVar4 = (DName *)getBasedType();
        DName::operator|=((DName *)&local_24,pDVar4);
      }
      else {
        getBasedType();
        pDVar4 = (DName *)&local_4c;
        pDVar3 = (DName *)DName::DName((DName *)&local_3c,' ');
        DName::operator+(pDVar3,pDVar4);
        local_24 = local_4c;
        local_20 = local_48;
      }
    }
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && (local_10 == 0x1800)) {
      getDimension(SUB41(&local_4c,0));
      pDVar4 = (DName *)&local_44;
      pDVar3 = (DName *)DName::operator+(in_stack_00000008,(char)&local_3c);
      pDVar4 = (DName *)DName::operator+(pDVar3,pDVar4);
      DName::operator+=((DName *)&local_24,pDVar4);
      getVCallThunkType();
      if ((DAT_01f8fbf0 & 0x1000) == 0) {
        pDVar4 = (DName *)&local_44;
        pDVar3 = (DName *)DName::DName((DName *)&local_3c,',');
        DName::operator+(pDVar3,pDVar4);
        local_4c = local_44;
        local_48 = local_40;
        DName::operator+=((DName *)&local_4c,"}\' ");
        DName::operator+=((DName *)&local_24,(DName *)&local_4c);
      }
      DName::operator+=((DName *)&local_24,"}\'");
      getCallingConvention();
      if ((((~(DAT_01f8fbf0 >> 1) & 1) != 0) && ((~(DAT_01f8fbf0 >> 4) & 1) != 0)) &&
         ((DAT_01f8fbf0 & 0x1000) == 0)) {
        pDVar4 = (DName *)&local_44;
        pDVar3 = (DName *)DName::DName((DName *)&local_3c,' ');
        DName::operator+(pDVar3,pDVar4);
        local_4c = local_44;
        local_48 = local_40;
        DName::operator+=((DName *)&local_4c,' ');
        local_44 = local_4c;
        local_40 = local_48;
        DName::operator+=((DName *)&local_44,(DName *)&local_24);
        local_24 = local_44;
        local_20 = local_40;
      }
      goto LAB_00ffb393;
    }
    local_40 = local_40 & 0xffff0000;
    local_48 = local_48 & 0xffff0000;
    local_10 = local_10 & 0xffff0000;
    local_28 = local_28 & 0xffff0000;
    local_30 = local_30 & 0xffff0000;
    local_44 = 0;
    local_4c = 0;
    local_14 = 0;
    local_2c = 0;
    local_34 = 0;
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if (uVar2 != 0) {
      if (local_c != 0) {
        if ((uVar1 & 0x700) == 0x600) {
          getDimension(SUB41(&local_3c,0));
          local_44 = local_3c;
          local_40 = local_38;
          getDimension(SUB41(&local_3c,0));
          local_4c = local_3c;
          local_48 = local_38;
          getDimension(SUB41(&local_3c,0));
        }
        else {
          if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_00ffad7e;
          getDimension(SUB41(&local_3c,0));
        }
        local_14 = local_3c;
        local_10 = local_38;
      }
LAB_00ffad7e:
      getDimension(SUB41(&local_3c,0));
      local_2c = local_3c;
      local_28 = local_38;
    }
    if ((local_c != 0) && ((local_c == 0 || ((uVar1 & 0x700) != 0x200)))) {
      if (((byte)DAT_01f8fbf0 & 0x60) == 0x60) {
        pDVar4 = (DName *)getThisType();
        DName::operator|=((DName *)&local_34,pDVar4);
      }
      else {
        puVar5 = (undefined4 *)getThisType();
        local_34 = *puVar5;
        local_30 = puVar5[1];
      }
    }
    if (((~(DAT_01f8fbf0 >> 1) & 1) == 0) || ((~(DAT_01f8fbf0 >> 4) & 1) == 0)) {
      pDVar4 = (DName *)getCallingConvention();
      DName::operator|=((DName *)&local_24,pDVar4);
    }
    else {
      pDVar4 = (DName *)&local_3c;
      pDVar3 = (DName *)getCallingConvention();
      piVar6 = (int *)DName::operator+(pDVar3,pDVar4);
      local_24 = *piVar6;
      local_20 = piVar6[1];
    }
    if (*(int *)in_stack_00000008 != 0) {
      if ((local_24 == 0) || ((DAT_01f8fbf0 & 0x1000) != 0)) {
        local_24 = *(int *)in_stack_00000008;
        local_20 = *(uint *)(in_stack_00000008 + 4);
      }
      else {
        pDVar4 = (DName *)&local_3c;
        pDVar3 = (DName *)DName::DName(local_54,' ');
        DName::operator+(pDVar3,pDVar4);
        DName::operator+=((DName *)&local_24,(DName *)&local_3c);
      }
    }
    local_38 = local_38 & 0xffff0000;
    piVar6 = (int *)0x0;
    local_3c = 0;
    if (local_18 == 0) {
      piVar7 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,8,0);
      piVar6 = (int *)0x0;
      if (piVar7 != (int *)0x0) {
        *piVar7 = 0;
        *(undefined1 *)(piVar7 + 1) = 0;
        piVar7[1] = piVar7[1] & 0xffff00ff;
        piVar6 = piVar7;
      }
      piVar7 = (int *)getReturnType(local_5c);
      local_3c = *piVar7;
      local_38 = piVar7[1];
LAB_00ffaf0a:
      uVar2 = local_c;
      if (local_c == 0) {
        uVar8 = uVar1 & 0x1000;
      }
      else {
        uVar8 = uVar1 & 0x400;
      }
      if (uVar8 != 0) {
        if (local_c == 0) {
LAB_00ffb009:
          DName::operator+=((DName *)&local_24,"`adjustor{");
        }
        else {
          if ((uVar1 & 0x700) == 0x600) {
            pDVar4 = (DName *)&local_1c;
            pDVar3 = (DName *)DName::DName(local_5c,"`vtordispex{");
            DName::operator+(pDVar3,pDVar4);
            local_44 = local_1c;
            local_40 = local_18;
            DName::operator+=((DName *)&local_44,',');
            local_1c = local_44;
            local_18 = local_40;
            DName::operator+=((DName *)&local_1c,(DName *)&local_4c);
            local_4c = local_1c;
            local_48 = local_18;
            DName::operator+=((DName *)&local_4c,',');
            local_44 = local_4c;
            local_40 = local_48;
            DName::operator+=((DName *)&local_44,(DName *)&local_14);
          }
          else {
            if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_00ffb009;
            pDVar4 = (DName *)&local_44;
            pDVar3 = (DName *)DName::DName(local_5c,"`vtordisp{");
            DName::operator+(pDVar3,pDVar4);
          }
          local_4c = local_44;
          local_48 = local_40;
          DName::operator+=((DName *)&local_4c,',');
          DName::operator+=((DName *)&local_24,(DName *)&local_4c);
        }
        local_4c = local_2c;
        local_48 = local_28;
        DName::operator+=((DName *)&local_4c,"}\' ");
        DName::operator+=((DName *)&local_24,(DName *)&local_4c);
      }
      getArgumentTypes();
      pDVar4 = (DName *)&local_44;
      pDVar3 = (DName *)DName::DName(local_54,'(');
      DName::operator+(pDVar3,pDVar4);
      local_4c = local_44;
      local_48 = local_40;
      DName::operator+=((DName *)&local_4c,')');
      DName::operator+=((DName *)&local_24,(DName *)&local_4c);
      if ((uVar2 != 0) && ((uVar1 & 0x700) != 0x200)) {
        DName::operator+=((DName *)&local_24,(DName *)&local_34);
      }
      if ((~(DAT_01f8fbf0 >> 8) & 1) == 0) {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator|=((DName *)&local_24,pDVar4);
      }
      else {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator+=((DName *)&local_24,pDVar4);
      }
      if (((~(DAT_01f8fbf0 >> 2) & 1) != 0) && (piVar6 != (int *)0x0)) {
        *piVar6 = local_24;
        piVar6[1] = local_20;
        local_24 = local_3c;
        local_20 = local_38;
      }
      goto LAB_00ffb393;
    }
    getReturnType(local_54);
    pDVar4 = (DName *)&local_1c;
    pDVar3 = (DName *)DName::DName(local_5c," ");
    DName::operator+(pDVar3,pDVar4);
    DName::operator+=((DName *)&local_24,(DName *)&local_1c);
    if ((DAT_01f8fbf0 & 0x1000) == 0) goto LAB_00ffaf0a;
  }
LAB_00ffb6bb:
  *(int *)param_1 = local_24;
LAB_00ffb6c3:
  *(uint *)(param_1 + 4) = local_20;
  return param_1;
}

// 00FFB6CB  UnDecorator::getDecoratedName  size=622  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDecoratedName(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getDecoratedName(void)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  DName *in_stack_00000004;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if ((DAT_01f8fbf0 & 0x2000) == 0) {
    if (*DAT_01f8fbe0 != '?') {
      if (*DAT_01f8fbe0 == '\0') {
        DName::DName(in_stack_00000004,1);
        return in_stack_00000004;
      }
LAB_00ffb8c9:
      *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
      *(undefined4 *)in_stack_00000004 = 0;
      in_stack_00000004[4] = (DName)0x2;
      return in_stack_00000004;
    }
    pcVar1 = DAT_01f8fbe0 + 1;
    if ((*pcVar1 != '?') || (DAT_01f8fbe0[2] != '?')) {
      DAT_01f8fbe0 = pcVar1;
      getSymbolName();
      uVar3 = local_c;
      iVar4 = local_10;
      if ((local_10 == 0) || ((local_c & 0x200) == 0)) {
        local_8 = 0;
      }
      else {
        local_8 = 1;
      }
      uVar5 = local_c >> 0xf;
      if ((char)local_c < '\x02') {
        if (((*DAT_01f8fbe0 != '\0') && (*DAT_01f8fbe0 != '@')) && (getScope(), local_18 != 0)) {
          if (DAT_01f8fbf8 == '\0') {
            local_28 = local_18;
            local_24 = local_14;
            DName::operator+=((DName *)&local_28,"::");
            local_20 = local_28;
            local_1c = local_24;
            DName::operator+=((DName *)&local_20,(DName *)&local_10);
            uVar3 = local_1c;
            iVar4 = local_20;
            local_10 = local_20;
            local_c = local_1c;
          }
          else {
            DAT_01f8fbf8 = '\0';
            local_20 = iVar4;
            local_1c = uVar3;
            DName::operator+=((DName *)&local_20,(DName *)&local_18);
            local_10 = local_20;
            local_c = local_1c;
            uVar3 = local_1c;
            iVar4 = local_20;
            if (*DAT_01f8fbe0 != '@') {
              piVar2 = (int *)getScope();
              local_18 = *piVar2;
              local_14 = piVar2[1];
              local_20 = *piVar2;
              local_1c = piVar2[1];
              DName::operator+=((DName *)&local_20,"::");
              local_28 = local_20;
              local_24 = local_1c;
              DName::operator+=((DName *)&local_28,(DName *)&local_10);
              uVar3 = local_24;
              iVar4 = local_28;
              local_10 = local_28;
              local_c = local_24;
            }
          }
        }
        if ((local_8 != 0) && (iVar4 != 0)) {
          uVar3 = uVar3 | 0x200;
          local_c = uVar3;
        }
        if ((uVar5 & 1) != 0) {
          uVar3 = uVar3 | 0x8000;
          local_c = uVar3;
        }
        if ((iVar4 != 0) && ((uVar3 & 0x1000) == 0)) {
          if (*DAT_01f8fbe0 != '\0') {
            if (*DAT_01f8fbe0 != '@') goto LAB_00ffb8c9;
            DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
          }
          if ((((DAT_01f8fbf0 & 0x1000) == 0) || (local_8 != 0)) || ((uVar3 & 0x8000) != 0)) {
            composeDeclaration(in_stack_00000004);
            return in_stack_00000004;
          }
          local_28 = 0;
          local_24 = local_24 & 0xffff0000;
          composeDeclaration((DName *)&local_20);
        }
      }
      *(int *)in_stack_00000004 = iVar4;
      *(uint *)(in_stack_00000004 + 4) = uVar3;
      return in_stack_00000004;
    }
    DAT_01f8fbe0 = pcVar1;
    getDecoratedName();
    for (; *DAT_01f8fbe0 != '\0'; DAT_01f8fbe0 = DAT_01f8fbe0 + 1) {
    }
  }
  else {
    DAT_01f8fbf0 = DAT_01f8fbf0 & 0xffffdfff;
    getDataType((DName *)&local_28);
    DAT_01f8fbf0 = DAT_01f8fbf0 | 0x2000;
  }
  *(int *)in_stack_00000004 = local_28;
  *(uint *)(in_stack_00000004 + 4) = local_24;
  return in_stack_00000004;
}

// 00FFB939  UnDecorator::getScope  size=695  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScope(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getScope(void)

{
  bool bVar1;
  undefined1 uVar2;
  DName *this;
  DName *pDVar3;
  undefined4 *puVar4;
  char *pcVar5;
  DName *in_stack_00000004;
  char cVar6;
  DName *pDVar7;
  DName local_b4 [8];
  DName local_ac [16];
  DName local_9c [8];
  DName local_94 [8];
  DName local_8c [8];
  undefined1 local_84 [8];
  DName local_7c [8];
  undefined1 local_74 [8];
  DName local_6c [8];
  DName local_64 [8];
  DName local_5c [8];
  undefined1 local_54 [8];
  DName local_4c [8];
  DName local_44 [8];
  DName local_3c [8];
  DName local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  *(undefined4 *)in_stack_00000004 = 0;
  bVar1 = false;
LAB_00ffbb87:
  do {
    while( true ) {
      if (((in_stack_00000004[4] != (DName)0x0) || (*DAT_01f8fbe0 == '\0')) ||
         (*DAT_01f8fbe0 == '@')) {
        if (*DAT_01f8fbe0 == '\0') {
          if (*(int *)in_stack_00000004 == 0) {
            DName::operator=(in_stack_00000004,1);
          }
          else {
            pDVar7 = local_44;
            pDVar3 = local_4c;
            this = (DName *)DName::DName(local_3c,1);
            pDVar3 = (DName *)DName::operator+(this,(char *)pDVar3);
            puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
            *(undefined4 *)in_stack_00000004 = *puVar4;
            *(undefined4 *)(in_stack_00000004 + 4) = puVar4[1];
          }
        }
        else if (*DAT_01f8fbe0 != '@') {
          *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
          in_stack_00000004[4] = (DName)0x2;
          *(undefined4 *)in_stack_00000004 = 0;
        }
        return in_stack_00000004;
      }
      if ((DAT_01f8fbf8 != '\0') && (DAT_01f8fbf9 == '\0')) {
        return in_stack_00000004;
      }
      if (*(int *)in_stack_00000004 != 0) {
        pDVar7 = (DName *)&local_24;
        pDVar3 = (DName *)DName::DName(local_94,"::");
        DName::operator+(pDVar3,pDVar7);
        *(undefined4 *)in_stack_00000004 = local_24;
        *(undefined4 *)(in_stack_00000004 + 4) = local_20;
        if (bVar1) {
          pDVar7 = (DName *)&local_2c;
          pDVar3 = (DName *)DName::DName(local_9c,'[');
          DName::operator+(pDVar3,pDVar7);
          *(undefined4 *)in_stack_00000004 = local_2c;
          *(undefined4 *)(in_stack_00000004 + 4) = local_28;
          bVar1 = false;
        }
      }
      if (*DAT_01f8fbe0 == '?') break;
      pDVar7 = local_4c;
      uVar2 = SUB41(local_44,0);
LAB_00ffbb6a:
      pDVar3 = (DName *)getZName((bool)uVar2,true);
LAB_00ffbb78:
      puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
LAB_00ffbb7d:
      *(undefined4 *)in_stack_00000004 = *puVar4;
      *(undefined4 *)(in_stack_00000004 + 4) = puVar4[1];
    }
    pcVar5 = DAT_01f8fbe0 + 1;
    cVar6 = *pcVar5;
    if (cVar6 == '$') {
      pDVar7 = local_8c;
      uVar2 = SUB41(local_3c,0);
      goto LAB_00ffbb6a;
    }
    if (cVar6 != '%') {
      if (cVar6 != '?') {
        if (cVar6 == 'A') goto LAB_00ffbb05;
        if (cVar6 != 'I') {
          pDVar7 = local_ac;
          DAT_01f8fbe0 = pcVar5;
          pDVar3 = (DName *)getLexicalFrame();
          goto LAB_00ffbb78;
        }
        pDVar7 = local_64;
        cVar6 = (char)local_54;
        DAT_01f8fbe0 = DAT_01f8fbe0 + 2;
        pDVar3 = (DName *)getZName(SUB41(local_74,0),true);
        pDVar3 = (DName *)DName::operator+(pDVar3,cVar6);
        puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
        bVar1 = true;
        goto LAB_00ffbb7d;
      }
      if ((DAT_01f8fbe0[2] != '_') || (DAT_01f8fbe0[3] != '?')) {
        DAT_01f8fbe0 = pcVar5;
        getDecoratedName();
        pDVar7 = (DName *)&local_1c;
        pDVar3 = (DName *)DName::DName(local_5c,'`');
        DName::operator+(pDVar3,pDVar7);
        local_c = local_1c;
        local_8 = local_18;
        DName::operator+=((DName *)&local_c,'\'');
        pDVar7 = local_6c;
        pDVar3 = (DName *)&local_c;
        goto LAB_00ffbb78;
      }
      pDVar7 = local_b4;
      DAT_01f8fbe0 = DAT_01f8fbe0 + 2;
      pDVar3 = (DName *)getOperatorName(SUB41(local_84,0),(bool *)0x0);
      puVar4 = (undefined4 *)DName::operator+(pDVar3,pDVar7);
      *(undefined4 *)in_stack_00000004 = *puVar4;
      *(undefined4 *)(in_stack_00000004 + 4) = puVar4[1];
      if (*DAT_01f8fbe0 == '@') {
        DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      }
      goto LAB_00ffbb87;
    }
LAB_00ffbb05:
    DAT_01f8fbe0 = pcVar5;
    DName::DName(local_34,&DAT_01f8fbe0,'@');
    pDVar7 = (DName *)&local_14;
    pDVar3 = (DName *)DName::DName(local_7c,"`anonymous namespace\'");
    DName::operator+(pDVar3,pDVar7);
    *(undefined4 *)in_stack_00000004 = local_14;
    *(undefined4 *)(in_stack_00000004 + 4) = local_10;
    if (*(int *)DAT_01f8fbd8 != 9) {
      Replicator::operator+=(DAT_01f8fbd8,local_34);
    }
  } while( true );
}

// 00FFBBF0  UnDecorator::getFunctionIndirectType  size=991  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getFunctionIndirectType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getFunctionIndirectType(DName *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  DName *pDVar4;
  undefined4 *puVar5;
  int *piVar6;
  DName *pDVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  int *in_stack_00000008;
  DName local_3c [8];
  DName local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  cVar1 = *DAT_01f8fbe0;
  if (cVar1 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    *(undefined4 *)param_1 = 0;
    param_1[4] = (DName)0x2;
    return param_1;
  }
  uVar8 = (int)cVar1 - 0x36;
  pcVar3 = DAT_01f8fbe0 + 1;
  if (uVar8 == 0x29) {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      DAT_01f8fbe0 = pcVar3;
      operator+((DNameStatus)param_1,(DName *)0x1);
      return param_1;
    }
    uVar8 = (int)cVar1 - 0x3d;
    DAT_01f8fbe0 = DAT_01f8fbe0 + 2;
    if (3 < (int)uVar8) {
      bVar10 = SBORROW4(uVar8,7);
      iVar2 = cVar1 + -0x44;
      bVar9 = uVar8 == 7;
LAB_00ffbc87:
      if (bVar9 || bVar10 != iVar2 < 0) goto LAB_00ffbc8c;
    }
  }
  else {
    DAT_01f8fbe0 = pcVar3;
    if (-1 < (int)uVar8) {
      bVar10 = SBORROW4(uVar8,3);
      iVar2 = cVar1 + -0x39;
      bVar9 = uVar8 == 3;
      goto LAB_00ffbc87;
    }
  }
  uVar8 = 0xffffffff;
LAB_00ffbc8c:
  if (uVar8 == 0xffffffff) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    *(undefined4 *)param_1 = 0;
    param_1[4] = (DName)0x2;
    return param_1;
  }
  local_14 = 0;
  local_10 = local_10 & 0xffff0000;
  local_c = *in_stack_00000008;
  local_8 = in_stack_00000008[1];
  if ((uVar8 & 2) != 0) {
    pDVar7 = (DName *)&local_1c;
    pDVar4 = (DName *)DName::DName((DName *)&local_24,"::");
    DName::operator+(pDVar4,pDVar7);
    local_c = local_1c;
    local_8 = local_18;
    if (*DAT_01f8fbe0 == '\0') {
      pDVar7 = (DName *)&local_24;
      pDVar4 = (DName *)DName::DName(local_3c,1);
      DName::operator+(pDVar4,pDVar7);
      local_c = local_24;
      local_8 = local_20;
    }
    else {
      getScope();
      pDVar7 = (DName *)&local_24;
      pDVar4 = (DName *)DName::DName(local_3c,' ');
      DName::operator+(pDVar4,pDVar7);
      local_1c = local_24;
      local_18 = local_20;
      DName::operator+=((DName *)&local_1c,(DName *)&local_c);
      local_c = local_1c;
      local_8 = local_18;
    }
    if (*DAT_01f8fbe0 == '\0') {
      pDVar7 = param_1;
      pDVar4 = (DName *)DName::DName(local_3c,1);
      DName::operator+(pDVar4,pDVar7);
      return param_1;
    }
    if (*DAT_01f8fbe0 != '@') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
      *(undefined4 *)param_1 = 0;
      param_1[4] = (DName)0x2;
      return param_1;
    }
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    if (((byte)DAT_01f8fbf0 & 0x60) == 0x60) {
      pDVar7 = (DName *)getThisType();
      DName::operator|=((DName *)&local_14,pDVar7);
    }
    else {
      puVar5 = (undefined4 *)getThisType();
      local_14 = *puVar5;
      local_10 = puVar5[1];
    }
  }
  if ((uVar8 & 4) != 0) {
    if ((~(DAT_01f8fbf0 >> 1) & 1) == 0) {
      pDVar7 = (DName *)getBasedType();
      DName::operator|=((DName *)&local_c,pDVar7);
    }
    else {
      getBasedType();
      pDVar7 = (DName *)&local_24;
      pDVar4 = (DName *)DName::DName(local_34,' ');
      DName::operator+(pDVar4,pDVar7);
      local_1c = local_24;
      local_18 = local_20;
      DName::operator+=((DName *)&local_1c,(DName *)&local_c);
      local_c = local_1c;
      local_8 = local_18;
    }
  }
  if ((~(DAT_01f8fbf0 >> 1) & 1) == 0) {
    pDVar7 = (DName *)getCallingConvention();
    DName::operator|=((DName *)&local_c,pDVar7);
  }
  else {
    pDVar7 = local_3c;
    pDVar4 = (DName *)getCallingConvention();
    piVar6 = (int *)DName::operator+(pDVar4,pDVar7);
    local_c = *piVar6;
    local_8 = piVar6[1];
  }
  if (*in_stack_00000008 != 0) {
    pDVar7 = (DName *)&local_24;
    pDVar4 = (DName *)DName::DName(local_3c,'(');
    DName::operator+(pDVar4,pDVar7);
    local_1c = local_24;
    local_18 = local_20;
    DName::operator+=((DName *)&local_1c,')');
    local_c = local_1c;
    local_8 = local_18;
  }
  piVar6 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,8,0);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    *(undefined1 *)(piVar6 + 1) = 0;
    piVar6[1] = piVar6[1] & 0xffff00ff;
    *piVar6 = 0;
  }
  getReturnType((DName *)&local_2c);
  getArgumentTypes();
  pDVar7 = (DName *)&local_24;
  pDVar4 = (DName *)DName::DName(local_34,'(');
  DName::operator+(pDVar4,pDVar7);
  local_1c = local_24;
  local_18 = local_20;
  DName::operator+=((DName *)&local_1c,')');
  DName::operator+=((DName *)&local_c,(DName *)&local_1c);
  if ((((byte)DAT_01f8fbf0 & 0x60) != 0x60) && ((uVar8 & 2) != 0)) {
    DName::operator+=((DName *)&local_c,(DName *)&local_14);
  }
  if ((~(DAT_01f8fbf0 >> 8) & 1) == 0) {
    pDVar7 = (DName *)getThrowTypes();
    DName::operator|=((DName *)&local_c,pDVar7);
  }
  else {
    pDVar7 = (DName *)getThrowTypes();
    DName::operator+=((DName *)&local_c,pDVar7);
  }
  if (piVar6 == (int *)0x0) {
    DName::DName(param_1,3);
  }
  else {
    *piVar6 = local_c;
    piVar6[1] = local_8;
    *(undefined4 *)param_1 = local_2c;
    *(undefined4 *)(param_1 + 4) = local_28;
  }
  return param_1;
}

// 00FFBFCF  UnDecorator::getDataIndirectType  size=1439  [run]
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(class DName const &,char
   const *,class DName const &,int)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl
UnDecorator::getDataIndirectType(DName *param_1,char *param_2,DName *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  DName *pDVar4;
  DName *pDVar5;
  uint uVar6;
  char *pcVar7;
  int in_stack_00000014;
  Tokens TVar8;
  DName local_58 [8];
  DName local_50 [8];
  DName local_48 [8];
  char *local_40;
  uint local_3c;
  char *local_38;
  uint local_34;
  char *local_30;
  uint local_2c;
  char *local_28;
  uint local_24;
  char *local_20;
  uint local_1c;
  char *local_18;
  uint local_14;
  char *local_10;
  uint local_c;
  char local_5;
  
  local_3c = local_3c & 0xffff0000;
  pcVar7 = (char *)0x0;
  local_5 = '\0';
  if (*DAT_01f8fbe0 == '\0') {
    if (in_stack_00000014 == 0) {
      if (*(int *)param_2 == 0) {
        if (*(int *)param_4 == 0) goto LAB_00ffc55c;
      }
      else if (((*(uint *)(param_2 + 4) & 0x100) == 0) && (*(int *)param_4 != 0)) {
        pDVar5 = (DName *)&local_40;
        pDVar4 = (DName *)DName::DName(local_58,1);
        DName::operator+(pDVar4,pDVar5);
        local_30 = local_40;
        local_2c = local_3c;
        DName::operator+=((DName *)&local_30,' ');
        DName::operator+((DName *)&local_30,param_1);
        return param_1;
      }
      operator+((DNameStatus)param_1,(DName *)0x1);
      return param_1;
    }
LAB_00ffc55c:
    DName::DName(param_1,1);
    return param_1;
  }
  if ((*DAT_01f8fbe0 != '$') ||
     (getExtendedDataIndirectType(&local_30,(bool *)&param_3,(int)&local_5), local_30 == (char *)0x0
     )) {
    local_14 = local_14 & 0xffff0000;
    local_20 = (char *)0x0;
    uVar6 = (int)*DAT_01f8fbe0 - (((*DAT_01f8fbe0 < 'A') - 1 & 0x2b) + 0x16);
    local_1c = local_1c & 0xffff0000;
    local_18 = (char *)0x0;
    do {
      pDVar5 = param_3;
      if (uVar6 == 4) {
        if (((~(DAT_01f8fbf0 >> 1) & 1) != 0) && ((~(DAT_01f8fbf0 >> 0x11) & 1) != 0)) {
          if (local_18 == (char *)0x0) {
            TVar8 = 8;
LAB_00ffc168:
            pcVar3 = UScore(TVar8);
            DName::operator=((DName *)&local_18,pcVar3);
          }
          else {
            local_c = local_14;
            local_10 = local_18;
            DName::operator+=((DName *)&local_10,' ');
            UScore(8);
            pDVar5 = local_58;
            pDVar4 = (DName *)&local_10;
LAB_00ffc153:
            piVar2 = (int *)DName::operator+(pDVar4,(char *)pDVar5);
            local_18 = (char *)*piVar2;
            local_14 = piVar2[1];
          }
        }
      }
      else if (uVar6 == 5) {
        if ((~(DAT_01f8fbf0 >> 1) & 1) != 0) {
          if (pcVar7 == (char *)0x0) {
            pcVar7 = UScore(10);
            DName::operator=((DName *)&local_20,pcVar7);
            pcVar7 = local_20;
          }
          else {
            local_24 = local_1c;
            local_28 = pcVar7;
            DName::operator+=((DName *)&local_28,' ');
            UScore(10);
            piVar2 = (int *)DName::operator+((DName *)&local_28,(char *)local_50);
            local_20 = (char *)*piVar2;
            local_1c = piVar2[1];
            pcVar7 = local_20;
          }
        }
      }
      else {
        if (uVar6 != 8) {
          if (*DAT_01f8fbe0 != '\0') {
            DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
          }
          if (0x1f < uVar6) goto LAB_00ffc29f;
          DName::DName((DName *)&local_10,(char *)param_3);
          local_28 = (char *)0x0;
          local_24 = local_3c;
          DName::operator+=((DName *)&local_28,(DName *)&local_10);
          local_10 = local_28;
          local_c = local_24;
          if (local_18 != (char *)0x0) {
            DName::operator+=((DName *)&local_28,' ');
            local_30 = local_28;
            local_2c = local_24;
            DName::operator+=((DName *)&local_30,(DName *)&local_18);
            local_10 = local_30;
            local_c = local_2c;
          }
          if (pcVar7 != (char *)0x0) {
            local_2c = local_1c;
            local_30 = pcVar7;
            DName::operator+=((DName *)&local_30,' ');
            local_28 = local_30;
            local_24 = local_2c;
            DName::operator+=((DName *)&local_28,(DName *)&local_10);
            local_10 = local_28;
            local_c = local_24;
          }
          if ((uVar6 & 0x10) != 0) {
            if (in_stack_00000014 != 0) goto LAB_00ffc29f;
            if (*pDVar5 == (DName)0x0) {
              if (*DAT_01f8fbe0 != '\0') {
                pDVar5 = (DName *)getScope();
                DName::operator|=((DName *)&local_10,pDVar5);
                goto LAB_00ffc34f;
              }
            }
            else {
              pDVar5 = (DName *)&local_40;
              pDVar4 = (DName *)DName::DName(local_58,"::");
              DName::operator+(pDVar4,pDVar5);
              local_10 = local_40;
              local_c = local_3c;
              if (*DAT_01f8fbe0 == '\0') {
                pDVar5 = (DName *)&local_40;
                pDVar4 = (DName *)DName::DName(local_58,1);
                DName::operator+(pDVar4,pDVar5);
                local_10 = local_40;
                local_c = local_3c;
              }
              else {
                pDVar5 = local_58;
                pDVar4 = (DName *)getScope();
                piVar2 = (int *)DName::operator+(pDVar4,pDVar5);
                local_10 = (char *)*piVar2;
                local_c = piVar2[1];
              }
LAB_00ffc34f:
              cVar1 = *DAT_01f8fbe0;
              if (cVar1 != '\0') {
                DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
                if (cVar1 != '@') goto LAB_00ffc29f;
                goto LAB_00ffc374;
              }
            }
            DName::operator+=((DName *)&local_10,1);
          }
LAB_00ffc374:
          if ((~(DAT_01f8fbf0 >> 1) & 1) == 0) {
            if (((byte)uVar6 & 0xc) == 0xc) {
              pDVar5 = (DName *)getBasedType();
              DName::operator|=((DName *)&local_10,pDVar5);
            }
          }
          else if (((byte)uVar6 & 0xc) == 0xc) {
            if (in_stack_00000014 != 0) {
LAB_00ffc29f:
              *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
              *(undefined4 *)param_1 = 0;
              param_1[4] = (DName)0x2;
              return param_1;
            }
            pDVar5 = local_58;
            pDVar4 = (DName *)getBasedType();
            piVar2 = (int *)DName::operator+(pDVar4,pDVar5);
            local_10 = (char *)*piVar2;
            local_c = piVar2[1];
          }
          if ((uVar6 & 2) != 0) {
            pDVar5 = (DName *)&local_40;
            pDVar4 = (DName *)DName::DName(local_58,"volatile ");
            DName::operator+(pDVar4,pDVar5);
            local_10 = local_40;
            local_c = local_3c;
          }
          if ((uVar6 & 1) != 0) {
            pDVar5 = (DName *)&local_40;
            pDVar4 = (DName *)DName::DName(local_58,"const ");
            DName::operator+(pDVar4,pDVar5);
            local_10 = local_40;
            local_c = local_3c;
          }
          if (in_stack_00000014 == 0) {
            if (*(int *)param_2 == 0) {
              if (*(int *)param_4 != 0) {
LAB_00ffc4ad:
                pDVar5 = (DName *)&local_40;
                pDVar4 = (DName *)DName::DName(local_58,' ');
                DName::operator+(pDVar4,pDVar5);
                pDVar5 = (DName *)&local_40;
                goto LAB_00ffc4c5;
              }
            }
            else {
              uVar6 = *(uint *)(param_2 + 4);
              if (((uVar6 & 0x100) == 0) && (*(int *)param_4 != 0)) {
                pDVar5 = (DName *)&local_40;
                pDVar4 = (DName *)DName::DName(local_58,' ');
                DName::operator+(pDVar4,pDVar5);
                local_30 = local_40;
                local_2c = local_3c;
                DName::operator+=((DName *)&local_30,' ');
                pDVar5 = (DName *)DName::operator+((DName *)&local_30,local_50);
LAB_00ffc4c5:
                DName::operator+=((DName *)&local_10,pDVar5);
              }
              else {
                if ((uVar6 & 0x800) == 0) goto LAB_00ffc4ad;
                local_10 = *(char **)param_2;
                local_c = uVar6;
              }
            }
          }
          local_2c = local_c | 0x100;
          if (local_5 != '\0') {
            local_2c = local_c | 0x2100;
          }
          *(char **)param_1 = local_10;
          goto LAB_00ffc021;
        }
        if ((~(DAT_01f8fbf0 >> 1) & 1) != 0) {
          if (local_18 == (char *)0x0) {
            TVar8 = 9;
            goto LAB_00ffc168;
          }
          local_2c = local_14;
          local_30 = local_18;
          DName::operator+=((DName *)&local_30,' ');
          UScore(9);
          pDVar5 = local_48;
          pDVar4 = (DName *)&local_30;
          goto LAB_00ffc153;
        }
      }
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      if ((*DAT_01f8fbe0 == '$') &&
         (getExtendedDataIndirectType(&local_38,(bool *)&param_3,(int)&local_5),
         local_38 != (char *)0x0)) goto LAB_00ffc1ca;
      uVar6 = (int)*DAT_01f8fbe0 - (((*DAT_01f8fbe0 < 'A') - 1 & 0x2b) + 0x16);
    } while( true );
  }
  *(char **)param_1 = local_30;
  goto LAB_00ffc021;
LAB_00ffc1ca:
  *(char **)param_1 = local_38;
  local_2c = local_34;
LAB_00ffc021:
  *(uint *)(param_1 + 4) = local_2c;
  return param_1;
}

// 00FFC56E  UnDecorator::operator_char*  size=319  [run]
/* Library Function - Single Match
    public: __thiscall UnDecorator::operator char *(void)
   
   Library: Visual Studio 2010 Release */

char * __thiscall UnDecorator::operator_char_(UnDecorator *this)

{
  char cVar1;
  DName *this_00;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  DName *pDVar8;
  DName local_24 [16];
  undefined4 *local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffff0000;
  local_c = (undefined4 *)0x0;
  uVar3 = local_10 & 0xffff0000;
  puVar6 = (undefined4 *)0x0;
  if (DAT_01f8fbe4 != (char *)0x0) {
    if (*DAT_01f8fbe4 == '?') {
      if (DAT_01f8fbe4[1] == '@') {
        DAT_01f8fbe0 = DAT_01f8fbe0 + 2;
        getDecoratedName();
        pDVar8 = (DName *)&local_14;
        this_00 = (DName *)DName::DName(local_24,"CV: ");
        DName::operator+(this_00,pDVar8);
        uVar3 = local_10;
        puVar6 = local_14;
        goto LAB_00ffc603;
      }
      if (DAT_01f8fbe4[1] == '$') {
        puVar2 = (undefined4 *)getTemplateName(SUB41(local_24,0));
        puVar6 = (undefined4 *)*puVar2;
        uVar3 = puVar2[1];
        if ((char)uVar3 != '\x02') goto LAB_00ffc603;
        DAT_01f8fbe0 = DAT_01f8fbe4;
      }
    }
    puVar2 = (undefined4 *)getDecoratedName();
    puVar6 = (undefined4 *)*puVar2;
    uVar3 = puVar2[1];
  }
LAB_00ffc603:
  if ((char)uVar3 == '\x03') {
    return (char *)0x0;
  }
  if (((char)uVar3 == '\x02') || (((DAT_01f8fbf0 & 0x1000) == 0 && (*DAT_01f8fbe0 != '\0')))) {
    DName::operator=((DName *)&local_c,DAT_01f8fbe4);
    puVar6 = local_c;
    uVar3 = local_8;
  }
  local_8 = uVar3;
  local_c = puVar6;
  if (DAT_01f8fbe8 == (char *)0x0) {
    iVar4 = 0;
    if (local_c != (undefined4 *)0x0) {
      iVar4 = (**(code **)*local_c)();
    }
    DAT_01f8fbec = iVar4 + 1;
    DAT_01f8fbe8 = (char *)(*DAT_01f8fbc0)(iVar4 + 8U & 0xfffffff8);
    if (DAT_01f8fbe8 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  DName::getString((DName *)&local_c,DAT_01f8fbe8,DAT_01f8fbec);
  pcVar5 = DAT_01f8fbe8;
  pcVar7 = DAT_01f8fbe8;
  while (cVar1 = *pcVar5, cVar1 != '\0') {
    if (cVar1 == ' ') {
      *pcVar7 = ' ';
      pcVar7 = pcVar7 + 1;
      do {
        pcVar5 = pcVar5 + 1;
      } while (*pcVar5 == ' ');
    }
    else {
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  *pcVar7 = '\0';
  return DAT_01f8fbe8;
}

// 00FFC6AD  UnDecorator::getPtrRefType  size=249  [run]
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefType(class DName const &,class DName
   const &,char const *)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getPtrRefType(DName *param_1,DName *param_2,char *param_3)

{
  char cVar1;
  DName *in_stack_00000010;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = *DAT_01f8fbe0;
  if (cVar1 == '\0') {
    DName::DName((DName *)&local_c,1);
    DName::operator+=((DName *)&local_c,(char *)in_stack_00000010);
    if (*(int *)param_2 != 0) {
      DName::operator+=((DName *)&local_c,param_2);
    }
    if (*(int *)param_3 != 0) {
      if (*(int *)param_2 != 0) {
        DName::operator+=((DName *)&local_c,' ');
      }
      DName::operator+=((DName *)&local_c,(DName *)param_3);
    }
    *(undefined4 *)param_1 = local_c;
    *(undefined4 *)(param_1 + 4) = local_8;
  }
  else if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    getDataIndirectType((DName *)&local_c,param_3,in_stack_00000010,(int)param_2);
    getPtrRefDataType(param_1,(int)&local_c);
  }
  else {
    DName::DName((DName *)&local_c,(char *)in_stack_00000010);
    if ((*(int *)param_2 != 0) &&
       ((*(int *)param_3 == 0 || ((*(uint *)(param_3 + 4) & 0x100) == 0)))) {
      DName::operator+=((DName *)&local_c,param_2);
    }
    if (*(int *)param_3 != 0) {
      DName::operator+=((DName *)&local_c,(DName *)param_3);
    }
    getFunctionIndirectType(param_1);
  }
  return param_1;
}

// 00FFC7A6  FID_conflict:getPointerType  size=32  [run]
/* Library Function - Multiple Matches With Different Base Names
    private: static class DName __cdecl UnDecorator::getPointerType(class DName const &,class DName
   const &)
    private: static class DName __cdecl UnDecorator::getPointerTypeArray(class DName const &,class
   DName const &)
   
   Library: Visual Studio 2010 Release */

DName * FID_conflict_getPointerType(DName *param_1,DName *param_2,char *param_3)

{
  UnDecorator::getPtrRefType(param_1,param_2,param_3);
  return param_1;
}

// 00FFC7C6  FID_conflict:getPointerType  size=32  [run]
/* Library Function - Multiple Matches With Different Base Names
    private: static class DName __cdecl UnDecorator::getPointerType(class DName const &,class DName
   const &)
    private: static class DName __cdecl UnDecorator::getPointerTypeArray(class DName const &,class
   DName const &)
   
   Library: Visual Studio 2010 Release */

DName * FID_conflict_getPointerType(DName *param_1,DName *param_2,char *param_3)

{
  UnDecorator::getPtrRefType(param_1,param_2,param_3);
  return param_1;
}

// 00FFC7E6  UnDecorator::getReferenceType  size=30  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getReferenceType(class DName const &,class
   DName const &,char const *)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getReferenceType(DName *param_1,DName *param_2,char *param_3)

{
  getPtrRefType(param_1,param_2,param_3);
  return param_1;
}

// 00FFC804  ___unDName  size=145  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___unDName
   
   Library: Visual Studio 2010 Release */

char * ___unDName(char *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,
                 ushort param_6)

{
  int iVar1;
  UnDecorator local_78 [88];
  char *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0187a228;
  uStack_c = 0xffc810;
  if ((param_4 != 0) && (iVar1 = __mtinitlocknum(5), iVar1 != 0)) {
    __lock(5);
    local_8 = (undefined *)0x0;
    DAT_01f8fbc0 = param_4;
    _DAT_01f8fbc4 = param_5;
    _DAT_01f8fbd0 = 0;
    _DAT_01f8fbc8 = 0;
    _DAT_01f8fbcc = 0;
    UnDecorator::UnDecorator
              (local_78,param_1,param_2,param_3,(_func_char_ptr_long *)0x0,(uint)param_6);
    local_20 = UnDecorator::operator_char_(local_78);
    Destructor();
    local_8 = (undefined *)0xfffffffe;
    FUN_00ffc895();
    return local_20;
  }
  return (char *)0x0;
}

// 00FFC895  FUN_00ffc895  size=9  [run]
void FUN_00ffc895(void)

{
  FUN_00fec3c5(5);
  return;
}

// 00FFC938  UnDecorator::getBasicDataType  size=926  [run]
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getBasicDataType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getBasicDataType(DName *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  DName *pDVar4;
  DName *pDVar5;
  uint uVar6;
  uint uVar7;
  int *in_stack_00000008;
  char *pcVar8;
  DName local_28 [8];
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  byte local_5;
  
  pbVar2 = DAT_01f8fbe0;
  bVar1 = *DAT_01f8fbe0;
  if (bVar1 == 0) {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
  local_10 = 0;
  uVar7 = (uint)bVar1;
  local_c = local_c & 0xffff0000;
  uVar6 = 0xffffffff;
  local_5 = 0;
  if (uVar7 < 0x4f) {
    if (uVar7 != 0x4e) {
      switch(uVar7) {
      case 0x43:
      case 0x44:
      case 0x45:
        pcVar8 = "char";
        break;
      case 0x46:
      case 0x47:
        pcVar8 = "short";
        break;
      case 0x48:
      case 0x49:
        pcVar8 = "int";
        break;
      case 0x4a:
      case 0x4b:
        pcVar8 = "long";
        break;
      default:
        goto switchD_00ffc98e_caseD_4c;
      case 0x4d:
        pcVar8 = "float";
      }
      goto LAB_00ffcb82;
    }
LAB_00ffcba8:
    DName::operator+=((DName *)&local_10,"double");
LAB_00ffcbb5:
    if (uVar6 != 0xffffffff) {
LAB_00ffcb15:
      local_18 = *in_stack_00000008;
      local_10 = 0;
      local_c = local_c & 0xffff0000;
      local_14 = in_stack_00000008[1];
      if (uVar6 != 0xfffffffe) {
        if (*in_stack_00000008 == 0) {
          if ((uVar6 & 1) == 0) {
            if ((uVar6 & 2) != 0) {
              DName::operator=((DName *)&local_10,"volatile");
            }
          }
          else {
            DName::operator=((DName *)&local_10,"const");
            if ((uVar6 & 2) != 0) {
              DName::operator+=((DName *)&local_10," volatile");
            }
          }
        }
        getPtrRefType(param_1,(DName *)&local_10,(char *)&local_18);
        return param_1;
      }
      local_14 = local_14 | 0x800;
      getPtrRefType((DName *)&local_20,(DName *)&local_10,(char *)&local_18);
      if ((local_1c & 0x800) == 0) {
        DName::operator+=((DName *)&local_20,"[]");
      }
      *(int *)param_1 = local_20;
      local_c = local_1c;
      goto LAB_00ffcc62;
    }
  }
  else {
    if (uVar7 == 0x4f) {
      DName::operator=((DName *)&local_10,"long ");
      goto LAB_00ffcba8;
    }
    if (0x4f < uVar7) {
      if (uVar7 < 0x54) {
        uVar6 = uVar7 & 3;
        goto LAB_00ffcbb5;
      }
      if (uVar7 == 0x58) {
        pcVar8 = "void";
        goto LAB_00ffcb82;
      }
      if (uVar7 != 0x5f) goto switchD_00ffc98e_caseD_4c;
      local_5 = *DAT_01f8fbe0;
      DAT_01f8fbe0 = pbVar2 + 2;
      uVar6 = (uint)local_5;
      if (uVar6 < 0x4e) {
        if (uVar6 < 0x4c) {
          if (uVar6 < 0x48) {
            if (uVar6 < 0x46) {
              if (uVar6 == 0) {
                DAT_01f8fbe0 = pbVar2 + 1;
                DName::operator=((DName *)&local_10,1);
                goto LAB_00ffcbbe;
              }
              if (uVar6 == 0x24) {
                getBasicDataType((DName *)&local_20);
                operator+((char *)param_1,(DName *)"__w64 ");
                return param_1;
              }
              if (1 < uVar6 - 0x44) goto LAB_00ffcafd;
              pcVar8 = "__int8";
            }
            else {
              pcVar8 = "__int16";
            }
          }
          else if (uVar6 < 0x48) {
LAB_00ffcafd:
            pcVar8 = "UNKNOWN";
          }
          else if (uVar6 < 0x4a) {
            pcVar8 = "__int32";
          }
          else {
            if (0x4b < uVar6) goto LAB_00ffcafd;
            pcVar8 = "__int64";
          }
        }
        else {
          pcVar8 = "__int128";
        }
LAB_00ffcb82:
        DName::operator=((DName *)&local_10,pcVar8);
        goto LAB_00ffcbbe;
      }
      if (uVar6 == 0x4e) {
        pcVar8 = "bool";
        goto LAB_00ffcb82;
      }
      if (uVar6 != 0x4f) {
        if (uVar6 == 0x52) {
          pcVar8 = "<unknown>";
        }
        else {
          if (uVar6 != 0x57) {
            if (1 < uVar6 - 0x58) goto LAB_00ffcafd;
            goto LAB_00ffcad0;
          }
          pcVar8 = "wchar_t";
        }
        goto LAB_00ffcb82;
      }
      uVar6 = 0xfffffffe;
      goto LAB_00ffcb15;
    }
switchD_00ffc98e_caseD_4c:
LAB_00ffcad0:
    DAT_01f8fbe0 = DAT_01f8fbe0 + -1;
    piVar3 = (int *)getECSUDataType();
    local_c = piVar3[1];
    local_10 = *piVar3;
    if (local_10 == 0) {
      *(undefined4 *)param_1 = 0;
      *(uint *)(param_1 + 4) = local_c;
      return param_1;
    }
  }
LAB_00ffcbbe:
  if (uVar7 == 0x43) {
    pcVar8 = "signed ";
LAB_00ffcc12:
    pDVar5 = (DName *)&local_20;
    pDVar4 = (DName *)DName::DName(local_28,pcVar8);
    DName::operator+(pDVar4,pDVar5);
    local_10 = local_20;
    local_c = local_1c;
  }
  else if (((((uVar7 == 0x45) || (uVar7 == 0x47)) || (uVar7 == 0x49)) || (uVar7 == 0x4b)) ||
          ((uVar7 == 0x5f &&
           (((local_5 == 0x45 || (local_5 == 0x47)) ||
            ((local_5 == 0x49 || ((local_5 == 0x4b || (local_5 == 0x4d)))))))))) {
    pcVar8 = "unsigned ";
    goto LAB_00ffcc12;
  }
  if (*in_stack_00000008 != 0) {
    pDVar4 = (DName *)&local_20;
    pDVar5 = (DName *)DName::DName(local_28,' ');
    DName::operator+(pDVar5,pDVar4);
    DName::operator+=((DName *)&local_10,(DName *)&local_20);
  }
  *(int *)param_1 = local_10;
LAB_00ffcc62:
  *(uint *)(param_1 + 4) = local_c;
  return param_1;
}

// 00FFCCFB  UnDecorator::getPrimaryDataType  size=433  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPrimaryDataType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getPrimaryDataType(DName *param_1)

{
  char cVar1;
  char *pcVar2;
  int *in_stack_00000008;
  DName local_1c [8];
  int local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar2 = DAT_01f8fbe0;
  cVar1 = *DAT_01f8fbe0;
  local_8 = local_8 & 0xffff0000;
  local_c = 0;
  if (cVar1 == '\0') {
LAB_00ffce98:
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if (cVar1 != '$') {
    if (cVar1 != 'A') {
      if (cVar1 != 'B') {
        getBasicDataType(param_1);
        return param_1;
      }
      DName::operator=((DName *)&local_c,"volatile");
      if (*in_stack_00000008 != 0) {
        DName::operator+=((DName *)&local_c,' ');
      }
    }
    goto LAB_00ffcd62;
  }
  if (DAT_01f8fbe0[1] == '$') {
    DAT_01f8fbe0 = DAT_01f8fbe0 + 2;
    cVar1 = *DAT_01f8fbe0;
    if (cVar1 < 'R') {
      if (cVar1 != 'Q') {
        if (cVar1 == '\0') goto LAB_00ffce98;
        if (cVar1 == 'A') {
          DAT_01f8fbe0 = pcVar2 + 3;
          getFunctionIndirectType(param_1);
          return param_1;
        }
        if (cVar1 == 'B') {
          DAT_01f8fbe0 = pcVar2 + 3;
          getPtrRefDataType(param_1,(int)in_stack_00000008);
          return param_1;
        }
        if (cVar1 == 'C') {
          DAT_01f8fbe0 = pcVar2 + 3;
          local_c = 0;
          getDataIndirectType(local_1c,(char *)in_stack_00000008,(DName *)&DAT_016416fa,
                              (int)&local_c);
          getBasicDataType(param_1);
          return param_1;
        }
        goto LAB_00ffcda5;
      }
    }
    else {
      if (cVar1 != 'R') {
        if (cVar1 == 'S') {
          DAT_01f8fbe0 = pcVar2 + 3;
        }
        else if (cVar1 == 'T') {
          DAT_01f8fbe0 = pcVar2 + 3;
          DName::DName(param_1,"std::nullptr_t");
          return param_1;
        }
        goto LAB_00ffcda5;
      }
      DName::operator=((DName *)&local_c,"volatile");
      if (*in_stack_00000008 != 0) {
        DName::operator+=((DName *)&local_c,' ');
      }
    }
LAB_00ffcd62:
    local_14 = *in_stack_00000008;
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    local_10 = in_stack_00000008[1] | 0x100;
    getPtrRefType(param_1,(DName *)&local_c,(char *)&local_14);
  }
  else {
    if (DAT_01f8fbe0[1] == '\0') goto LAB_00ffce98;
LAB_00ffcda5:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    param_1[4] = (DName)0x2;
    *(undefined4 *)param_1 = 0;
  }
  return param_1;
}

// 00FFCEAC  UnDecorator::getDataType  size=207  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataType(class DName *)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getDataType(DName *param_1)

{
  char cVar1;
  DName *this;
  int *piVar2;
  DName *in_stack_00000008;
  DName *pDVar3;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  DName::DName((DName *)&local_c,in_stack_00000008);
  cVar1 = *DAT_01f8fbe0;
  pDVar3 = param_1;
  if (cVar1 == '\0') {
    this = (DName *)DName::DName((DName *)&local_14,1);
  }
  else {
    if (cVar1 == '?') {
      DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
      local_10 = local_10 & 0xffff0000;
      local_14 = 0;
      piVar2 = (int *)getDataIndirectType(local_1c,(char *)&local_c,(DName *)&DAT_016416fa,
                                          (int)&local_14);
      local_c = *piVar2;
      local_8 = piVar2[1];
      getPrimaryDataType(param_1);
      return param_1;
    }
    if (cVar1 != 'X') {
      getPrimaryDataType(param_1);
      return param_1;
    }
    DAT_01f8fbe0 = DAT_01f8fbe0 + 1;
    if (local_c == 0) {
      DName::DName(param_1,"void");
      return param_1;
    }
    this = (DName *)DName::DName((DName *)&local_14,"void ");
  }
  DName::operator+(this,pDVar3);
  return param_1;
}

// 00FFCF7B  UnDecorator::getExternalDataType  size=121  [run]
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExternalDataType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getExternalDataType(DName *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DName local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = _HeapManager::getMemory((_HeapManager *)&DAT_01f8fbc0,8,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[1] = puVar1[1] & 0xffff00ff;
  }
  getDataType(param_1);
  getDataIndirectType();
  local_c = local_14;
  local_8 = local_10;
  DName::operator+=((DName *)&local_c,' ');
  puVar2 = (undefined4 *)DName::operator+((DName *)&local_c,local_1c);
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  return param_1;
}

// 00FFD000  __local_unwind4  size=144  [run]
/* Library Function - Single Match
    __local_unwind4
   
   Library: Visual Studio 2010 Release */

void __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_00ffd090;
  pvStack_28 = ExceptionList;
  local_20 = DAT_018e8764 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_01000694();
    }
  }
  ExceptionList = pvStack_28;
  return;
}

// 00FFD0D6  FUN_00ffd0d6  size=28  [run]
void FUN_00ffd0d6(int param_1)

{
  __local_unwind4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18),
                  *(undefined4 *)(param_1 + 0x1c));
  return;
}

// 00FFD0F2  _EH4_CallFilterFunc  size=23  [run]
/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2010 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(code *param_1)

{
  (*param_1)();
  return;
}

// 00FFD109  _EH4_TransferToHandler  size=25  [run]
/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2010 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(code *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x00ffd120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00FFD122  _EH4_GlobalUnwind2  size=25  [run]
/* Library Function - Single Match
    @_EH4_GlobalUnwind2@8
   
   Library: Visual Studio 2010 Release
   __fastcall _EH4_GlobalUnwind2,8 */

void __fastcall _EH4_GlobalUnwind2(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0xffd136,param_2,(PVOID)0x0);
  return;
}

// 00FFD13B  _EH4_LocalUnwind  size=23  [run]
/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2010 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall
_EH4_LocalUnwind(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}

// 00FFD152  ___crtMessageBoxW  size=364  [run]
/* Library Function - Single Match
    ___crtMessageBoxW
   
   Library: Visual Studio 2010 Release */

int __cdecl ___crtMessageBoxW(LPCWSTR _LpText,LPCWSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  FARPROC pFVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined1 local_28 [4];
  LPCWSTR local_24;
  LPCWSTR local_20;
  PVOID local_1c;
  int local_18;
  undefined1 local_14 [8];
  byte local_c;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_24 = _LpText;
  local_20 = _LpCaption;
  local_1c = (PVOID)FUN_00feb73b();
  local_18 = 0;
  if (DAT_01f8fc30 == (PVOID)0x0) {
    hModule = LoadLibraryW(L"USER32.DLL");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = GetProcAddress(hModule,"MessageBoxW"), pFVar1 == (FARPROC)0x0)) goto LAB_00ffd2af;
    DAT_01f8fc30 = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_01f8fc34 = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_01f8fc38 = EncodePointer(pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationW");
    DAT_01f8fc40 = EncodePointer(pFVar1);
    if (DAT_01f8fc40 != (PVOID)0x0) {
      pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
      DAT_01f8fc3c = EncodePointer(pFVar1);
    }
  }
  if ((DAT_01f8fc3c == local_1c) || (DAT_01f8fc40 == local_1c)) {
LAB_00ffd25e:
    if ((((DAT_01f8fc34 != local_1c) &&
         (pcVar2 = DecodePointer(DAT_01f8fc34), pcVar2 != (code *)0x0)) &&
        (local_18 = (*pcVar2)(), local_18 != 0)) &&
       ((DAT_01f8fc38 != local_1c && (pcVar2 = DecodePointer(DAT_01f8fc38), pcVar2 != (code *)0x0)))
       ) {
      local_18 = (*pcVar2)(local_18);
    }
  }
  else {
    pcVar2 = DecodePointer(DAT_01f8fc3c);
    pcVar3 = DecodePointer(DAT_01f8fc40);
    if (((pcVar2 == (code *)0x0) || (pcVar3 == (code *)0x0)) ||
       (((iVar4 = (*pcVar2)(), iVar4 != 0 &&
         (iVar4 = (*pcVar3)(iVar4,1,local_14,0xc,local_28), iVar4 != 0)) && ((local_c & 1) != 0))))
    goto LAB_00ffd25e;
    _UType = _UType | 0x200000;
  }
  pcVar2 = DecodePointer(DAT_01f8fc30);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(local_18,local_24,local_20,_UType);
  }
LAB_00ffd2af:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

// 00FFD2BE  _wcscat_s  size=117  [run]
/* Library Function - Single Match
    _wcscat_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _wcscat_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  int *piVar2;
  wchar_t *pwVar3;
  int iVar4;
  errno_t eStack_10;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    pwVar3 = _Dst;
    if (_Src != (wchar_t *)0x0) {
      do {
        if (*pwVar3 == L'\0') break;
        pwVar3 = pwVar3 + 1;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        iVar4 = (int)pwVar3 - (int)_Src;
        do {
          wVar1 = *_Src;
          *(wchar_t *)(iVar4 + (int)_Src) = wVar1;
          _Src = _Src + 1;
          if (wVar1 == L'\0') break;
          _SizeInWords = _SizeInWords - 1;
        } while (_SizeInWords != 0);
        if (_SizeInWords != 0) {
          return 0;
        }
        *_Dst = L'\0';
        piVar2 = __errno();
        eStack_10 = 0x22;
        *piVar2 = 0x22;
        goto LAB_00ffd2dd;
      }
    }
    *_Dst = L'\0';
  }
  piVar2 = __errno();
  eStack_10 = 0x16;
  *piVar2 = 0x16;
LAB_00ffd2dd:
  FUN_00fe56c2();
  return eStack_10;
}

// 00FFD333  _wcslen  size=27  [run]
/* Library Function - Single Match
    _wcslen
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release,
   Visual Studio 2019 Release */

size_t __cdecl _wcslen(wchar_t *_Str)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  pwVar2 = _Str;
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  return ((int)pwVar2 - (int)_Str >> 1) - 1;
}

// 00FFD34E  _wcscpy_s  size=99  [run]
/* Library Function - Single Match
    _wcscpy_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _wcscpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  errno_t eStack_10;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    if (_Src != (wchar_t *)0x0) {
      iVar3 = (int)_Dst - (int)_Src;
      do {
        wVar1 = *_Src;
        *(wchar_t *)(iVar3 + (int)_Src) = wVar1;
        _Src = _Src + 1;
        if (wVar1 == L'\0') break;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        return 0;
      }
      *_Dst = L'\0';
      piVar2 = __errno();
      eStack_10 = 0x22;
      *piVar2 = 0x22;
      goto LAB_00ffd36d;
    }
    *_Dst = L'\0';
  }
  piVar2 = __errno();
  eStack_10 = 0x16;
  *piVar2 = 0x16;
LAB_00ffd36d:
  FUN_00fe56c2();
  return eStack_10;
}

// 00FFD3B1  __set_error_mode  size=63  [run]
/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2010 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_01f8ef58;
      DAT_01f8ef58 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_01f8ef58;
    }
  }
  piVar2 = __errno();
  *piVar2 = 0x16;
  FUN_00fe56c2();
  return -1;
}

// 00FFD3F0  FUN_00ffd3f0  size=15  [run]
void FUN_00ffd3f0(undefined4 param_1)

{
  DAT_018e8760 = param_1;
  return;
}

// 00FFD3FF  __crtGetLocaleInfoA_stat  size=218  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   *,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtGetLocaleInfoA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5)

{
  uint _Size;
  UINT CodePage;
  uint uVar1;
  uint cchData;
  LPWSTR lpLCData;
  int iVar2;
  
  uVar1 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  CodePage = param_1->locinfo->lc_codepage;
  cchData = GetLocaleInfoW(param_2,param_3,(LPWSTR)0x0,0);
  if (cchData != 0) {
    if (((int)cchData < 1) || (0xffffffe0 / cchData < 2)) {
      lpLCData = (LPWSTR)0x0;
    }
    else {
      _Size = cchData * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x1c) goto LAB_00ffd4c7;
        lpLCData = (LPWSTR)&stack0xffffffec;
      }
      else {
        lpLCData = _malloc(_Size);
        if (lpLCData != (LPWSTR)0x0) {
          lpLCData[0] = L'\xdddd';
          lpLCData[1] = L'\0';
          lpLCData = lpLCData + 4;
        }
      }
    }
    if (lpLCData != (LPWSTR)0x0) {
      iVar2 = GetLocaleInfoW(param_2,param_3,lpLCData,cchData);
      if (iVar2 != 0) {
        if (param_5 == 0) {
          param_5 = 0;
          param_4 = (LPSTR)0x0;
        }
        WideCharToMultiByte(CodePage,0,lpLCData,-1,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      __freea(lpLCData);
    }
  }
LAB_00ffd4c7:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

// 00FFD4D9  ___crtGetLocaleInfoA  size=58  [run]
/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 2010 Release */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Plocinfo);
  iVar1 = __crtGetLocaleInfoA_stat(&local_14,(ulong)_LocaleName,_LCType,_LpLCData,_CchData);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}

// 00FFD513  FID_conflict:__atoflt_l  size=168  [run]
/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  char *local_2c;
  localeinfo_struct local_28;
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,_Locale);
  local_18 = ___strgtold12_l(&local_14,&local_2c,_Str,0,0,0,0,&local_28);
  IVar1 = __ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_00ffd56c:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_00ffd5ac;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_00ffd59e:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_00ffd5ac;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_00ffd59e;
    goto LAB_00ffd56c;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_00ffd5ac:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

// 00FFD5BB  FID_conflict:__atodbl  size=23  [run]
/* Library Function - Multiple Matches With Different Base Names
    __atodbl
    __atoflt
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  int iVar1;
  
  iVar1 = FID_conflict___atoflt_l(_Result,_Str,(_locale_t)0x0);
  return iVar1;
}

// 00FFD5D2  __atoldbl_l  size=169  [run]
/* Library Function - Single Match
    __atoldbl_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  char *local_2c;
  localeinfo_struct local_28;
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,_Locale);
  local_18 = ___strgtold12_l(&local_14,&local_2c,_Str,1,0,0,0,&local_28);
  IVar1 = __ld12told(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_00ffd62c:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_00ffd66c;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_00ffd65e:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_00ffd66c;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_00ffd65e;
    goto LAB_00ffd62c;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_00ffd66c:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

// 00FFD67B  __atoldbl  size=23  [run]
/* Library Function - Single Match
    __atoldbl
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __atoldbl(_LDOUBLE *_Result,char *_Str)

{
  int iVar1;
  
  iVar1 = __atoldbl_l(_Result,_Str,(_locale_t)0x0);
  return iVar1;
}

// 00FFD692  FID_conflict:__atoflt_l  size=168  [run]
/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  char *local_2c;
  localeinfo_struct local_28;
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,_Locale);
  local_18 = ___strgtold12_l(&local_14,&local_2c,_Str,0,0,0,0,&local_28);
  IVar1 = __ld12tof(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_00ffd6eb:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_00ffd72b;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_00ffd71d:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_00ffd72b;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_00ffd71d;
    goto LAB_00ffd6eb;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_00ffd72b:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

// 00FFD73A  FID_conflict:__atodbl  size=23  [run]
/* Library Function - Multiple Matches With Different Base Names
    __atodbl
    __atoflt
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  int iVar1;
  
  iVar1 = FID_conflict___atoflt_l(_Result,_Str,(_locale_t)0x0);
  return iVar1;
}

// 00FFD751  __set_output_format  size=50  [run]
/* Library Function - Single Match
    __set_output_format
   
   Library: Visual Studio 2010 Release */

uint __cdecl __set_output_format(uint _Format)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = DAT_01f8fc44;
  if ((_Format & 0xfffffffe) == 0) {
    DAT_01f8fc44 = _Format;
  }
  else {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
  }
  return uVar1;
}

// 00FFD789  __fptostr  size=179  [run]
/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  char *_Str;
  int *piVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  char *pcVar6;
  errno_t eVar7;
  
  pcVar6 = _PtFlt->mantissa;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    piVar1 = __errno();
    eVar7 = 0x16;
    *piVar1 = 0x16;
  }
  else {
    *_Buf = '\0';
    iVar2 = 0;
    if (0 < _Digits) {
      iVar2 = _Digits;
    }
    if (iVar2 + 1U < _SizeInBytes) {
      _Str = _Buf + 1;
      *_Buf = '0';
      pcVar3 = _Str;
      for (; 0 < _Digits; _Digits = _Digits + -1) {
        cVar5 = *pcVar6;
        if (cVar5 == '\0') {
          cVar5 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar3 = cVar5;
        pcVar3 = pcVar3 + 1;
      }
      *pcVar3 = '\0';
      if ((-1 < _Digits) && ('4' < *pcVar6)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if (*_Buf == '1') {
        _PtFlt->decpt = _PtFlt->decpt + 1;
      }
      else {
        sVar4 = _strlen(_Str);
        FID_conflict__memcpy(_Buf,_Str,sVar4 + 1);
      }
      return 0;
    }
    piVar1 = __errno();
    eVar7 = 0x22;
    *piVar1 = 0x22;
  }
  FUN_00fe56c2();
  return eVar7;
}

// 00FFD83C  ___dtold  size=179  [run]
/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2010 Release */

void ___dtold(uint *param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar2 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar4 = uVar1 & 0x7ff;
  uVar3 = *param_2;
  local_8 = 0x80000000;
  if ((uVar1 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar3 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_00ffd8e6;
    }
    uVar4 = uVar4 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar4 == 0x7ff) {
    uVar4 = 0x7fff;
  }
  else {
    uVar4 = uVar4 + 0x3c00;
  }
  local_8 = uVar3 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  uVar3 = uVar3 << 0xb;
  while( true ) {
    *param_1 = uVar3;
    param_1[1] = local_8;
    if ((local_8 & 0x80000000) != 0) break;
    local_8 = local_8 * 2 | *param_1 >> 0x1f;
    uVar3 = *param_1 * 2;
    uVar4 = uVar4 - 1;
  }
  uVar2 = uVar2 | uVar4;
LAB_00ffd8e6:
  *(ushort *)(param_1 + 2) = uVar2;
  return;
}

// 00FFD8EF  FUN_00ffd8ef  size=141  [run]
void FUN_00ffd8ef(undefined4 param_1,undefined4 param_2,int *param_3,char *param_4,rsize_t param_5)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  errno_t eVar4;
  undefined4 in_stack_ffffffb0;
  undefined2 uVar5;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  char *local_28;
  short local_24;
  char local_22;
  char local_20 [24];
  uint local_8;
  
  piVar1 = param_3;
  uVar5 = (undefined2)((uint)in_stack_ffffffb0 >> 0x10);
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_28 = param_4;
  ___dtold(&local_34,&param_1);
  iVar3 = _I10_OUTPUT(local_34,uStack_30,CONCAT22(uVar5,uStack_2c),0x11,0,&local_24);
  pcVar2 = local_28;
  piVar1[2] = iVar3;
  *piVar1 = (int)local_22;
  piVar1[1] = (int)local_24;
  eVar4 = _strcpy_s(local_28,param_5,local_20);
  if (eVar4 == 0) {
    piVar1[3] = (int)pcVar2;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// 00FFD980  __alldvrm  size=223  [run]
/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2010 Release */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

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

// 00FFDA68  __controlfp_s  size=95  [run]
/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  int *piVar2;
  errno_t eVar3;
  
  uVar1 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar1 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar1);
    }
    else {
      uVar1 = __control87(_NewValue,uVar1);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar1 = __control87(0,0);
      *_CurrentState = uVar1;
    }
    piVar2 = __errno();
    eVar3 = 0x16;
    *piVar2 = 0x16;
    FUN_00fe56c2();
  }
  return eVar3;
}

// 00FFDAC7  __lseeki64_nolock  size=133  [run]
/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2010 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_00ffdaf8:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        __dosmaperr(DVar4);
        goto LAB_00ffdaf8;
      }
    }
    pbVar1 = (byte *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}

// 00FFDB4C  __lseeki64  size=224  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2010 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
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
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_00ffdc2c();
        goto LAB_00ffdc26;
      }
    }
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
    FUN_00fe56c2();
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_00ffdc26:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}

// 00FFDC2C  FUN_00ffdc2c  size=10  [run]
void FUN_00ffdc2c(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}

// 00FFDC36  __write_nolock  size=1789  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  char cVar1;
  wchar_t *pwVar2;
  WCHAR WVar3;
  wchar_t wVar4;
  ulong *puVar5;
  int *piVar6;
  int iVar7;
  _ptiddata p_Var8;
  BOOL BVar9;
  DWORD nNumberOfBytesToWrite;
  WCHAR *pWVar10;
  int iVar11;
  uint uVar12;
  int unaff_EBX;
  WCHAR *pWVar13;
  uint uVar14;
  int iVar15;
  ushort uVar16;
  uint local_1ae8;
  WCHAR *local_1ae4;
  int *local_1ae0;
  uint local_1adc;
  WCHAR *local_1ad8;
  int local_1ad4;
  WCHAR *local_1ad0;
  uint local_1acc;
  char local_1ac5;
  uint local_1ac4;
  DWORD local_1ac0;
  WCHAR local_1abc [852];
  CHAR local_1414 [3416];
  WCHAR local_6bc [854];
  undefined2 local_10;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_1ad0 = _Buf;
  local_1acc = 0;
  local_1ad4 = 0;
  if (_MaxCharCount == 0) goto LAB_00ffe325;
  if (_Buf == (void *)0x0) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    piVar6 = __errno();
    *piVar6 = 0x16;
    FUN_00fe56c2();
    goto LAB_00ffe325;
  }
  piVar6 = &DAT_0225bf80 + (_FileHandle >> 5);
  iVar11 = (_FileHandle & 0x1fU) * 0x40;
  local_1ac5 = (char)(*(char *)(*piVar6 + 0x24 + iVar11) * '\x02') >> 1;
  local_1ae0 = piVar6;
  if (((local_1ac5 == '\x02') || (local_1ac5 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    piVar6 = __errno();
    *piVar6 = 0x16;
    FUN_00fe56c2();
    goto LAB_00ffe325;
  }
  if ((*(byte *)(*piVar6 + 4 + iVar11) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EBX);
  }
  iVar7 = __isatty(_FileHandle);
  if ((iVar7 == 0) || ((*(byte *)(iVar11 + 4 + *piVar6) & 0x80) == 0)) {
LAB_00ffdfb6:
    if ((*(byte *)(*piVar6 + 4 + iVar11) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar6 + iVar11),local_1ad0,_MaxCharCount,&local_1adc,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_00ffe297:
        local_1ac0 = GetLastError();
      }
      else {
        local_1ac0 = 0;
        local_1acc = local_1adc;
      }
LAB_00ffe2a3:
      if (local_1acc != 0) goto LAB_00ffe325;
      goto LAB_00ffe2ac;
    }
    local_1ac0 = 0;
    if (local_1ac5 == '\0') {
      pWVar13 = local_1ad0;
      if (_MaxCharCount == 0) goto LAB_00ffe2e2;
      do {
        uVar14 = 0;
        uVar12 = (int)pWVar13 - (int)local_1ad0;
        pWVar10 = local_1abc;
        do {
          if (_MaxCharCount <= uVar12) break;
          WVar3 = *pWVar13;
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          uVar12 = uVar12 + 1;
          if ((char)WVar3 == '\n') {
            local_1ad4 = local_1ad4 + 1;
            *(char *)pWVar10 = '\r';
            pWVar10 = (WCHAR *)((int)pWVar10 + 1);
            uVar14 = uVar14 + 1;
          }
          *(char *)pWVar10 = (char)WVar3;
          pWVar10 = (WCHAR *)((int)pWVar10 + 1);
          uVar14 = uVar14 + 1;
          local_1ae4 = pWVar13;
        } while (uVar14 < 0x13ff);
        BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),local_1abc,
                          (int)pWVar10 - (int)local_1abc,&local_1adc,(LPOVERLAPPED)0x0);
        if (BVar9 == 0) goto LAB_00ffe297;
        local_1acc = local_1acc + local_1adc;
      } while (((int)pWVar10 - (int)local_1abc <= (int)local_1adc) &&
              ((uint)((int)pWVar13 - (int)local_1ad0) < _MaxCharCount));
      goto LAB_00ffe2a3;
    }
    if (local_1ac5 == '\x02') {
      pWVar13 = local_1ad0;
      if (_MaxCharCount != 0) {
        do {
          local_1ac4 = 0;
          uVar12 = (int)pWVar13 - (int)local_1ad0;
          pWVar10 = local_1abc;
          do {
            if (_MaxCharCount <= uVar12) break;
            WVar3 = *pWVar13;
            pWVar13 = pWVar13 + 1;
            uVar12 = uVar12 + 2;
            if (WVar3 == L'\n') {
              local_1ad4 = local_1ad4 + 2;
              *pWVar10 = L'\r';
              pWVar10 = pWVar10 + 1;
              local_1ac4 = local_1ac4 + 2;
            }
            local_1ac4 = local_1ac4 + 2;
            *pWVar10 = WVar3;
            pWVar10 = pWVar10 + 1;
            local_1ae4 = pWVar13;
          } while (local_1ac4 < 0x13fe);
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),local_1abc,
                            (int)pWVar10 - (int)local_1abc,&local_1adc,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_00ffe297;
          local_1acc = local_1acc + local_1adc;
        } while (((int)pWVar10 - (int)local_1abc <= (int)local_1adc) &&
                ((uint)((int)pWVar13 - (int)local_1ad0) < _MaxCharCount));
        goto LAB_00ffe2a3;
      }
    }
    else {
      local_1ad8 = local_1ad0;
      if (_MaxCharCount != 0) {
        do {
          local_1ac4 = 0;
          uVar12 = (int)local_1ad8 - (int)local_1ad0;
          pWVar13 = local_6bc;
          do {
            if (_MaxCharCount <= uVar12) break;
            WVar3 = *local_1ad8;
            local_1ad8 = local_1ad8 + 1;
            uVar12 = uVar12 + 2;
            if (WVar3 == L'\n') {
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              local_1ac4 = local_1ac4 + 2;
            }
            local_1ac4 = local_1ac4 + 2;
            *pWVar13 = WVar3;
            pWVar13 = pWVar13 + 1;
          } while (local_1ac4 < 0x6a8);
          iVar15 = 0;
          iVar7 = WideCharToMultiByte(0xfde9,0,local_6bc,((int)pWVar13 - (int)local_6bc) / 2,
                                      local_1414,0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 == 0) goto LAB_00ffe297;
          do {
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),local_1414 + iVar15,iVar7 - iVar15,
                              &local_1adc,(LPOVERLAPPED)0x0);
            if (BVar9 == 0) {
              local_1ac0 = GetLastError();
              break;
            }
            iVar15 = iVar15 + local_1adc;
          } while (iVar15 < iVar7);
        } while ((iVar7 <= iVar15) &&
                (local_1acc = (int)local_1ad8 - (int)local_1ad0, local_1acc < _MaxCharCount));
        goto LAB_00ffe2a3;
      }
    }
  }
  else {
    p_Var8 = __getptd();
    pwVar2 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar11 + *piVar6),(LPDWORD)&local_1ae4);
    if ((BVar9 == 0) || ((pwVar2 == (wchar_t *)0x0 && (local_1ac5 == '\0')))) goto LAB_00ffdfb6;
    local_1ae4 = (WCHAR *)GetConsoleCP();
    local_1ad8 = (WCHAR *)0x0;
    if (_MaxCharCount != 0) {
      local_1ac4 = 0;
      pWVar13 = local_1ad0;
      do {
        piVar6 = local_1ae0;
        if (local_1ac5 == '\0') {
          cVar1 = (char)*pWVar13;
          local_1ae8 = (uint)(cVar1 == '\n');
          iVar7 = *local_1ae0 + iVar11;
          if (*(int *)(iVar7 + 0x38) == 0) {
            iVar7 = _isleadbyte(CONCAT22(cVar1 >> 7,(short)cVar1));
            if (iVar7 == 0) {
              uVar16 = 1;
              pWVar10 = pWVar13;
              goto LAB_00ffde1d;
            }
            if ((char *)((int)local_1ad0 + (_MaxCharCount - (int)pWVar13)) < (char *)0x2) {
              local_1acc = local_1acc + 1;
              *(char *)(iVar11 + 0x34 + *piVar6) = (char)*pWVar13;
              *(undefined4 *)(iVar11 + 0x38 + *piVar6) = 1;
              break;
            }
            iVar7 = _mbtowc((wchar_t *)&local_1ac0,(char *)pWVar13,2);
            if (iVar7 == -1) break;
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_1ac4 = local_1ac4 + 1;
          }
          else {
            local_10._0_1_ = *(CHAR *)(iVar7 + 0x34);
            *(undefined4 *)(iVar7 + 0x38) = 0;
            uVar16 = 2;
            pWVar10 = &local_10;
            local_10._1_1_ = cVar1;
LAB_00ffde1d:
            iVar7 = _mbtowc((wchar_t *)&local_1ac0,(char *)pWVar10,(uint)uVar16);
            if (iVar7 == -1) break;
          }
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          local_1ac4 = local_1ac4 + 1;
          nNumberOfBytesToWrite =
               WideCharToMultiByte((UINT)local_1ae4,0,(LPCWSTR)&local_1ac0,1,(LPSTR)&local_10,5,
                                   (LPCSTR)0x0,(LPBOOL)0x0);
          if (nNumberOfBytesToWrite == 0) break;
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),&local_10,nNumberOfBytesToWrite,
                            (LPDWORD)&local_1ad8,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_00ffe297;
          local_1acc = local_1ac4 + local_1ad4;
          if ((int)local_1ad8 < (int)nNumberOfBytesToWrite) break;
          if (local_1ae8 != 0) {
            local_10._0_1_ = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_1ae0),&local_10,1,(LPDWORD)&local_1ad8,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_00ffe297;
            if ((int)local_1ad8 < 1) break;
            local_1ad4 = local_1ad4 + 1;
            local_1acc = local_1acc + 1;
          }
        }
        else {
          if ((local_1ac5 == '\x01') || (local_1ac5 == '\x02')) {
            local_1ac0 = (DWORD)(ushort)*pWVar13;
            local_1ae8 = (uint)(local_1ac0 == 10);
            pWVar13 = pWVar13 + 1;
            local_1ac4 = local_1ac4 + 2;
          }
          if ((local_1ac5 == '\x01') || (local_1ac5 == '\x02')) {
            wVar4 = __putwch_nolock((wchar_t)local_1ac0);
            if (wVar4 != (wchar_t)local_1ac0) goto LAB_00ffe297;
            local_1acc = local_1acc + 2;
            if (local_1ae8 != 0) {
              local_1ac0 = 0xd;
              wVar4 = __putwch_nolock(L'\r');
              if (wVar4 != (wchar_t)local_1ac0) goto LAB_00ffe297;
              local_1acc = local_1acc + 1;
              local_1ad4 = local_1ad4 + 1;
            }
          }
        }
      } while (local_1ac4 < _MaxCharCount);
      goto LAB_00ffe2a3;
    }
LAB_00ffe2ac:
    if (local_1ac0 != 0) {
      if (local_1ac0 == 5) {
        piVar6 = __errno();
        *piVar6 = 9;
        puVar5 = ___doserrno();
        *puVar5 = 5;
      }
      else {
        __dosmaperr(local_1ac0);
      }
      goto LAB_00ffe325;
    }
  }
LAB_00ffe2e2:
  if (((*(byte *)(iVar11 + 4 + *local_1ae0) & 0x40) == 0) || ((char)*local_1ad0 != '\x1a')) {
    piVar6 = __errno();
    *piVar6 = 0x1c;
    puVar5 = ___doserrno();
    *puVar5 = 0;
  }
LAB_00ffe325:
  iVar11 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar11;
}

// 00FFE333  __write  size=201  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2010 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

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
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_00ffe3ff();
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

// 00FFE3FF  FUN_00ffe3ff  size=8  [run]
void FUN_00ffe3ff(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}

// 00FFE407  __getbuf  size=73  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2010 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_01f8f758 = _DAT_01f8f758 + 1;
  pcVar1 = __malloc_crt(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}

// 00FFE450  __isatty  size=86  [run]
/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2010 Release */

int __cdecl __isatty(int _FileHandle)

{
  int *piVar1;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0225bf70)) {
      return (int)*(char *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) &
             0x40;
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_00fe56c2();
  }
  return 0;
}

// 00FFE4A6  __fileno  size=38  [run]
/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2010 Release */

int __cdecl __fileno(FILE *_File)

{
  int *piVar1;
  
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return -1;
  }
  return _File->_file;
}

// 00FFE4CC  FUN_00ffe4cc  size=8  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ffe4cc(void)

{
  _DAT_0225bf6c = 0;
  return;
}

// 00FFE4D4  __wctomb_s_l  size=341  [run]
/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  char *lpMultiByteStr;
  size_t _Size;
  int iVar1;
  int *piVar2;
  DWORD DVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _Size = _SizeInBytes;
  lpMultiByteStr = _MbCh;
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
LAB_00ffe4f8:
    iVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_00fe56c2();
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_00ffe584;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_00ffe5b3:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_00ffe4f8;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        _memset(lpMultiByteStr,0,_Size);
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar1 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&_WCh,1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&_MbCh);
      if (iVar1 == 0) {
        DVar3 = GetLastError();
        if (DVar3 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            _memset(lpMultiByteStr,0,_Size);
          }
LAB_00ffe584:
          piVar2 = __errno();
          *piVar2 = 0x22;
          FUN_00fe56c2();
          if (local_8 == '\0') {
            return 0x22;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return 0x22;
        }
      }
      else if (_MbCh == (char *)0x0) {
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = iVar1;
        }
        goto LAB_00ffe5b3;
      }
    }
    piVar2 = __errno();
    *piVar2 = 0x2a;
    piVar2 = __errno();
    iVar1 = *piVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar1;
}

// 00FFE629  _wctomb_s  size=29  [run]
/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}

// 00FFE646  __wctomb_l  size=81  [run]
/* Library Function - Single Match
    __wctomb_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale)

{
  errno_t eVar1;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  int local_8;
  
  local_8 = -1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  eVar1 = __wctomb_s_l(&local_8,_MbCh,(size_t)(local_18.locinfo)->locale_name[3],_WCh,&local_18);
  if (eVar1 != 0) {
    local_8 = -1;
  }
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
  }
  return local_8;
}

// 00FFE697  _wctomb  size=50  [run]
/* Library Function - Single Match
    _wctomb
   
   Library: Visual Studio 2010 Release */

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  size_t _SizeInBytes;
  errno_t eVar1;
  _locale_t _Locale;
  int local_8;
  
  local_8 = -1;
  _Locale = (_locale_t)0x0;
  _SizeInBytes = ____mb_cur_max_func();
  eVar1 = __wctomb_s_l(&local_8,_MbCh,_SizeInBytes,_WCh,_Locale);
  if (eVar1 == 0) {
    return local_8;
  }
  return -1;
}

// 00FFE6C9  FUN_00ffe6c9  size=15  [run]
void FUN_00ffe6c9(undefined4 param_1)

{
  DAT_01f8fc48 = param_1;
  return;
}

// 00FFE6D8  rand_s  size=240  [run]
/* Library Function - Single Match
    _rand_s
   
   Library: Visual Studio 2010 Release */

int __cdecl rand_s(undefined4 *param_1)

{
  FARPROC Ptr;
  int *piVar1;
  HMODULE hModule;
  DWORD DVar2;
  int iVar3;
  PVOID Value;
  LONG LVar4;
  
  Ptr = DecodePointer(DAT_01f8fc48);
  if (param_1 == (undefined4 *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return 0x16;
  }
  *param_1 = 0;
  if (Ptr == (FARPROC)0x0) {
    hModule = LoadLibraryW(L"ADVAPI32.DLL");
    if (hModule == (HMODULE)0x0) {
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_00fe56c2();
      return 0x16;
    }
    Ptr = GetProcAddress(hModule,"SystemFunction036");
    if (Ptr == (FARPROC)0x0) {
      piVar1 = __errno();
      DVar2 = GetLastError();
      iVar3 = __get_errno_from_oserr(DVar2);
      *piVar1 = iVar3;
      FUN_00fe56c2();
      DVar2 = GetLastError();
      iVar3 = __get_errno_from_oserr(DVar2);
      return iVar3;
    }
    Value = EncodePointer(Ptr);
    iVar3 = FUN_00feb73b();
    LVar4 = InterlockedExchange((LONG *)&DAT_01f8fc48,(LONG)Value);
    if (LVar4 != iVar3) {
      FreeLibrary(hModule);
    }
  }
  iVar3 = (*Ptr)(param_1,4);
  if (iVar3 == 0) {
    piVar1 = __errno();
    *piVar1 = 0xc;
    piVar1 = __errno();
    iVar3 = *piVar1;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

// 00FFE7D0  __ValidateImageBase  size=53  [run]
/* Library Function - Single Match
    __ValidateImageBase
   
   Library: Visual Studio 2010 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}

// 00FFE810  __FindPESection  size=68  [run]
/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2010 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}

// 00FFE860  __IsNonwritableInCurrentImage  size=166  [run]
/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2010 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_018e8764 ^ 0x187a2a8;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}

// 00FFE91C  __87except  size=319  [run]
/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2010 Release */

void __87except(int param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  uint local_98;
  undefined4 local_94;
  undefined1 local_90 [48];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&stack0xfffffff0;
  local_98 = (uint)*param_3;
  iVar1 = *param_2;
  if (iVar1 == 1) {
LAB_00ffe9ab:
    local_94 = 8;
LAB_00ffe9b5:
    iVar1 = __handle_exc(local_94,param_2 + 6,local_98);
    if (iVar1 == 0) {
      if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
        local_60 = *(undefined8 *)(param_2 + 4);
        local_50 = local_50 & 0xffffffe3 | 3;
      }
      else {
        local_50 = local_50 & 0xfffffffe;
      }
      __raise_exc(local_90,&local_98,local_94,param_1,param_2 + 2,param_2 + 6);
    }
  }
  else {
    if (iVar1 == 2) {
      local_94 = 4;
      goto LAB_00ffe9b5;
    }
    if (iVar1 == 3) {
      local_94 = 0x11;
      goto LAB_00ffe9b5;
    }
    if (iVar1 == 4) {
      local_94 = 0x12;
      goto LAB_00ffe9b5;
    }
    if (iVar1 == 5) goto LAB_00ffe9ab;
    if (iVar1 == 7) {
      *param_2 = 1;
    }
    else if (iVar1 == 8) {
      local_94 = 0x10;
      goto LAB_00ffe9b5;
    }
  }
  __ctrlfp(local_98,0xffff);
  if ((*param_2 != 8) && (DAT_018e96d8 == 0)) {
    iVar1 = FUN_00fffafa(param_2);
    if (iVar1 != 0) goto LAB_00ffea48;
  }
  __set_errno_from_matherr(*param_2);
LAB_00ffea48:
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

// 00FFEA5B  __frnd  size=20  [run]
/* Library Function - Single Match
    __frnd
   
   Library: Visual Studio 2010 Release */

float10 __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}

// 00FFEA6F  __copysign  size=40  [run]
/* Library Function - Single Match
    __copysign
   
   Library: Visual Studio 2010 Release */

double __cdecl __copysign(double _Number,double _Sign)

{
  return (double)CONCAT44((_Sign._4_4_ ^ _Number._4_4_) & 0x7fffffff ^ _Sign._4_4_,SUB84(_Number,0))
  ;
}

// 00FFEA97  __chgsign  size=45  [run]
/* Library Function - Single Match
    __chgsign
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

double __cdecl __chgsign(double _X)

{
  undefined8 local_c;
  
  local_c = (double)(CONCAT44(~_X._4_4_,SUB84(_X,0)) ^ 0x7fffffff00000000);
  return local_c;
}

// 00FFEAC4  FID_conflict:__scalb  size=26  [run]
/* Library Function - Multiple Matches With Different Base Names
    __scalb
    _ldexpl
   
   Library: Visual Studio 2010 Release */

double __cdecl FID_conflict___scalb(double _X,long _Y)

{
  double dVar1;
  
  dVar1 = _ldexp(_X,_Y);
  return dVar1;
}

// 00FFEADE  FUN_00ffeade  size=233  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00ffeade(double param_1)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  int local_8;
  
  uVar2 = __ctrlfp(0x133f,0xffff);
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype(SUB84(param_1,0),uVar5);
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp(uVar2,0xffff);
        goto LAB_00ffebc0;
      }
      if (iVar3 == 3) {
        fVar4 = (float10)__handle_qnan1();
        return fVar4;
      }
    }
    dVar1 = param_1 + 1.0;
    uVar5 = 8;
  }
  else {
    if (param_1 != 0.0) {
      FUN_00fff06c(SUB84(param_1,0),uVar5,&local_8);
      param_1 = (double)(local_8 + -1);
      __ctrlfp(uVar2,0xffff);
LAB_00ffebc0:
      return (float10)param_1;
    }
    dVar1 = -_DAT_018e96b0;
    uVar5 = 4;
  }
  fVar4 = (float10)__except1(uVar5,0x25,param_1,dVar1,uVar2);
  return fVar4;
}

// 00FFEBC7  FUN_00ffebc7  size=690  [run]
float10 FUN_00ffebc7(int param_1,uint param_2,int param_3,uint param_4)

{
  double dVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 local_10;
  undefined4 local_8;
  
  local_10 = 0.0;
  local_8 = __ctrlfp();
  if (((param_2._2_2_ & 0x7ff0) == 0x7ff0) || ((param_4._2_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) ||
       (((param_4._2_2_ & 0x7ff8) == 0x7ff0 && (((param_4 & 0x7ffff) != 0 || (param_3 != 0)))))) {
      dVar8 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) +
              (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar7 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar6 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      uVar5 = 8;
      goto LAB_00ffec72;
    }
    if (((param_2._2_2_ & 0x7ff8) == 0x7ff8) || ((param_4._2_2_ & 0x7ff8) == 0x7ff8)) {
      fVar4 = (float10)__handle_qnan2();
      return fVar4;
    }
  }
  dVar1 = (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
  dVar8 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  if (dVar8 == dVar1) {
    __ctrlfp();
    return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  if (dVar8 == 0.0) {
    if (dVar1 <= dVar8) {
      local_10 = -4.94065645841247e-324;
    }
    else {
      local_10 = 4.94065645841247e-324;
    }
  }
  if (((0.0 < dVar8) && (dVar1 < dVar8)) || ((dVar8 < 0.0 && (dVar8 < dVar1)))) {
    iVar2 = param_1 + -1;
    local_10 = (double)CONCAT44(param_2,iVar2);
    if (param_1 == 0) {
      iVar3 = param_2 - 1;
LAB_00ffed35:
      local_10 = (double)CONCAT44(iVar3,(int)local_10);
    }
  }
  else if (((0.0 < dVar8) && (dVar8 < dVar1)) || ((dVar8 < 0.0 && (dVar1 < dVar8)))) {
    iVar2 = param_1 + 1;
    local_10 = (double)CONCAT44(param_2,iVar2);
    if (iVar2 == 0) {
      iVar3 = param_2 + 1;
      goto LAB_00ffed35;
    }
  }
  else {
    iVar2 = (int)local_10;
  }
  if (((local_10._4_4_ >> 0x10 & 0x7ff0) == 0) &&
     ((((ulonglong)local_10 & 0xfffff00000000) != 0 || (iVar2 != 0)))) {
    fVar4 = (float10)FUN_00fff06c(local_10,(int)&local_10 + 4);
    fVar4 = (float10)__set_exp((double)fVar4,local_10._4_4_ + 0x600);
    dVar8 = (double)fVar4;
    uVar7 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar6 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar5 = 0x12;
  }
  else {
    if (((local_10._4_4_ != 0x7ff00000) || (iVar2 != 0)) &&
       ((local_10._4_4_ != 0xfff00000 || (iVar2 != 0)))) {
      __ctrlfp();
      return (float10)local_10;
    }
    fVar4 = (float10)FUN_00fff06c(local_10,(int)&local_10 + 4);
    fVar4 = (float10)__set_exp((double)fVar4,local_10._4_4_ + -0x600);
    dVar8 = (double)fVar4;
    uVar7 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar6 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar5 = 0x11;
  }
LAB_00ffec72:
  fVar4 = (float10)__except2(uVar5,0x26,uVar6,uVar7,dVar8,local_8);
  return fVar4;
}

// 00FFEE79  FUN_00ffee79  size=28  [run]
bool FUN_00ffee79(undefined4 param_1,undefined4 param_2)

{
  return (param_2._2_2_ & 0x7ff0) != 0x7ff0;
}

// 00FFEE95  __isnan  size=56  [run]
/* Library Function - Single Match
    __isnan
   
   Library: Visual Studio 2010 Release */

int __cdecl __isnan(double _X)

{
  if ((((_X._6_2_ & 0x7ff8) != 0x7ff0) ||
      ((((ulonglong)_X & 0x7ffff00000000) == 0 && (_X._0_4_ == 0)))) &&
     ((_X._6_2_ & 0x7ff8) != 0x7ff8)) {
    return 0;
  }
  return 1;
}

// 00FFEECD  __fpclass  size=157  [run]
/* Library Function - Single Match
    __fpclass
   
   Library: Visual Studio 2010 Release */

int __cdecl __fpclass(double _X)

{
  int iVar1;
  undefined4 uStack_8;
  
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype();
    if (iVar1 == 1) {
      return 0x200;
    }
    if (iVar1 == 2) {
      uStack_8 = 4;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      uStack_8 = 2;
    }
    return uStack_8;
  }
  if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  if (_X == 0.0) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
}

// 00FFEF6A  __set_exp  size=45  [run]
/* Library Function - Single Match
    __set_exp
   
   Library: Visual Studio 2010 Release */

float10 __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(undefined6)param_1);
  return (float10)local_c;
}

// 00FFEF97  FUN_00ffef97  size=25  [run]
int FUN_00ffef97(undefined4 param_1,undefined4 param_2)

{
  return (int)(short)((param_2._2_2_ >> 4 & 0x7ff) - 0x3fe);
}

// 00FFEFB0  __add_exp  size=46  [run]
/* Library Function - Single Match
    __add_exp
   
   Library: Visual Studio 2010 Release */

void __add_exp(undefined8 param_1,int param_2)

{
  __set_exp(param_1,((param_1._6_2_ >> 4 & 0x7ff) - 0x3fe) + param_2);
  return;
}

// 00FFEFDE  __set_bexp  size=40  [run]
/* Library Function - Single Match
    __set_bexp
   
   Library: Visual Studio 2010 Release */

float10 __set_bexp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26(param_2 << 4 | param_1._6_2_ & 0x800f,(undefined6)param_1);
  return (float10)local_c;
}

// 00FFF006  __sptype  size=102  [run]
/* Library Function - Single Match
    __sptype
   
   Library: Visual Studio 2010 Release */

undefined4 __sptype(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    uVar1 = 3;
  }
  else {
    if (((param_2._2_2_ & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uVar1 = 4;
  }
  return uVar1;
}

// 00FFF06C  FUN_00fff06c  size=195  [run]
void FUN_00fff06c(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int extraout_EDX;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      0.0) {
    iVar3 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    if (0.0 <= (double)CONCAT17(param_2._3_1_,
                                CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar3 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar3;
      param_2._2_1_ = (byte)((uint)iVar3 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar3 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (byte)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (bVar2) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = extraout_EDX;
  }
  else {
    __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar3 = (param_2 >> 0x14 & 0x7ff) - 0x3fe;
  }
  *param_3 = iVar3;
  return;
}

// 00FFF12F  _iswctype  size=85  [run]
/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2010 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  BOOL BVar1;
  WORD local_8 [2];
  
  if (_C != 0xffff) {
    if (_C < 0x100) {
      local_8[0] = *(WORD *)(PTR_DAT_018e8874 + (uint)_C * 2);
    }
    else {
      BVar1 = GetStringTypeW(1,(LPCWSTR)&_C,1,local_8);
      if (BVar1 == 0) {
        local_8[0] = 0;
      }
    }
    return (uint)(local_8[0] & _Type);
  }
  return 0;
}

// 00FFF184  FUN_00fff184  size=11  [run]
void FUN_00fff184(wint_t param_1,wctype_t param_2)

{
  _iswctype(param_1,param_2);
  return;
}

// 00FFF18F  __iswctype_l  size=20  [run]
/* Library Function - Single Match
    __iswctype_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale)

{
  int iVar1;
  
  iVar1 = _iswctype(_C,_Type);
  return iVar1;
}

// 00FFF1A3  strncnt  size=30  [run]
/* Library Function - Single Match
    int __cdecl strncnt(char const *,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl strncnt(char *param_1,int param_2)

{
  char *in_EAX;
  char *pcVar1;
  
  pcVar1 = param_1;
  for (; (pcVar1 != (char *)0x0 && (*in_EAX != '\0')); in_EAX = in_EAX + 1) {
    pcVar1 = pcVar1 + -1;
  }
  return (int)(param_1 + (-1 - (int)(pcVar1 + -1)));
}

// 00FFF1C1  __crtCompareStringA_stat  size=622  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint _Size;
  char *pcVar1;
  byte *pbVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  uint uVar5;
  undefined4 *puVar6;
  int *in_ECX;
  char *pcVar7;
  int iVar8;
  byte *in_EDX;
  LPWSTR lpWideCharStr;
  PCNZWCH local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)param_3;
  pcVar7 = param_4;
  if ((int)param_4 < 1) {
    if ((int)param_4 < -1) goto LAB_00fff41d;
  }
  else {
    do {
      pcVar7 = pcVar7 + -1;
      if (*pcVar1 == '\0') goto LAB_00fff1f8;
      pcVar1 = pcVar1 + 1;
    } while (pcVar7 != (char *)0x0);
    pcVar7 = (char *)0xffffffff;
LAB_00fff1f8:
    param_4 = param_4 + (-1 - (int)pcVar7);
  }
  pbVar2 = in_EDX;
  iVar8 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_00fff41d;
  }
  else {
    do {
      iVar8 = iVar8 + -1;
      if (*pbVar2 == 0) goto LAB_00fff21b;
      pbVar2 = pbVar2 + 1;
    } while (iVar8 != 0);
    iVar8 = -1;
LAB_00fff21b:
    param_5 = param_5 + (-1 - iVar8);
  }
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_4 == (char *)0x0) || (param_5 == 0)) {
    if ((param_4 == (char *)param_5) ||
       (((1 < param_5 || (1 < (int)param_4)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_00fff41d;
    if (0 < (int)param_4) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*(byte *)param_3 < *pBVar4 || (pBVar4[1] < *(byte *)param_3))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_00fff41d;
    }
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_00fff41d;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)param_3,(int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_00fff41d;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_20 = (PCNZWCH)0x0;
  }
  else {
    uVar5 = cchWideChar * 2 + 8;
    if (uVar5 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffc4;
      local_20 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_00fff353:
        local_20 = (PCNZWCH)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar5);
      local_20 = (PCNZWCH)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_00fff353;
      }
    }
  }
  if (local_20 == (PCNZWCH)0x0) goto LAB_00fff41d;
  iVar8 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)param_3,(int)param_4,local_20,cchWideChar);
  if ((iVar8 != 0) &&
     (uVar5 = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_5,(LPWSTR)0x0,0), uVar5 != 0)
     ) {
    if (((int)uVar5 < 1) || (0xffffffe0 / uVar5 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar5 * 2 + 8;
      if (_Size < 0x401) {
        puVar6 = (undefined4 *)&stack0xffffffc4;
        lpWideCharStr = (LPWSTR)&stack0xffffffc4;
        if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_00fff3d3:
          lpWideCharStr = (LPWSTR)(puVar6 + 2);
        }
      }
      else {
        puVar6 = _malloc(_Size);
        lpWideCharStr = (LPWSTR)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xdddd;
          goto LAB_00fff3d3;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar8 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_5,lpWideCharStr,uVar5);
      if (iVar8 != 0) {
        CompareStringW((LCID)param_1,param_2,local_20,cchWideChar,lpWideCharStr,uVar5);
      }
      __freea(lpWideCharStr);
    }
  }
  __freea(local_20);
LAB_00fff41d:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}

// 00FFF42F  ___crtCompareStringA  size=66  [run]
/* Library Function - Single Match
    ___crtCompareStringA
   
   Library: Visual Studio 2010 Release */

int __cdecl
___crtCompareStringA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
          int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  int iVar1;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtCompareStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwCmpFlags,(ulong)_LpString1,
                     (char *)_CchCount1,_CchCount2,(char *)_Code_page,in_stack_ffffffec,
                     in_stack_fffffff0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}

// 00FFF471  __strnicoll_l  size=234  [run]
/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  LPCWSTR _LocaleName;
  int *piVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    _LocaleName = (LPCWSTR)(local_14.locinfo)->lc_category[0].locale;
    if (_LocaleName == (LPCWSTR)0x0) {
      iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,&local_14);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,_LocaleName,0x1001,_Str1,_MaxCount,_Str2,_MaxCount,
                         (local_14.locinfo)->lc_collate_cp);
      if (iVar2 == 0) {
        piVar1 = __errno();
        *piVar1 = 0x16;
        goto LAB_00fff538;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
LAB_00fff538:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

// 00FFF55B  __strnicoll  size=41  [run]
/* Library Function - Single Match
    __strnicoll
   
   Library: Visual Studio 2010 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}

// 00FFF584  findenv  size=82  [run]
/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2008 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_01f8f5b8;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_01f8f5b8 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_01f8f5b8 >> 2;
}

// 00FFF5D6  copy_environ  size=96  [run]
/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2010 Release */

undefined4 * __cdecl copy_environ(void)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)0x0;
  if (in_EAX != (int *)0x0) {
    iVar1 = *in_EAX;
    piVar4 = in_EAX;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      iVar1 = *piVar4;
    }
    puVar2 = __calloc_crt((int)puVar2 + 1,4);
    if (puVar2 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    pcVar3 = (char *)*in_EAX;
    puVar5 = puVar2;
    if (pcVar3 != (char *)0x0) {
      do {
        pcVar3 = __strdup(pcVar3);
        *puVar5 = pcVar3;
        puVar5 = puVar5 + 1;
        pcVar3 = *(char **)(((int)in_EAX - (int)puVar2) + (int)puVar5);
      } while (pcVar3 != (char *)0x0);
    }
    *puVar5 = 0;
  }
  return puVar2;
}

// 00FFF636  ___crtsetenv  size=578  [run]
/* Library Function - Single Match
    ___crtsetenv
   
   Library: Visual Studio 2010 Release */

int __cdecl ___crtsetenv(char **_POption,int _Primary)

{
  uint _Size;
  uchar *_Str;
  int *piVar1;
  uchar *puVar2;
  int iVar3;
  uint _Count;
  size_t sVar4;
  char *_Dst;
  errno_t eVar5;
  BOOL BVar6;
  int *piVar7;
  bool bVar8;
  size_t _Size_00;
  uchar *_Src;
  int local_10;
  
  local_10 = 0;
  if (_POption == (char **)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return -1;
  }
  _Str = (uchar *)*_POption;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_00fff6be:
    piVar1 = __errno();
    *piVar1 = 0x16;
    return -1;
  }
  bVar8 = puVar2[1] == '\0';
  if (DAT_01f8f5b8 == DAT_01f8f5bc) {
    DAT_01f8f5b8 = (int *)copy_environ();
  }
  if (DAT_01f8f5b8 == (int *)0x0) {
    if ((_Primary == 0) || (DAT_01f8f5c0 == (undefined4 *)0x0)) {
      if (bVar8) {
        return 0;
      }
      DAT_01f8f5b8 = __malloc_crt(4);
      if (DAT_01f8f5b8 == (int *)0x0) {
        return -1;
      }
      *DAT_01f8f5b8 = 0;
      if (DAT_01f8f5c0 == (undefined4 *)0x0) {
        DAT_01f8f5c0 = __malloc_crt(4);
        if (DAT_01f8f5c0 == (undefined4 *)0x0) {
          return -1;
        }
        *DAT_01f8f5c0 = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_00fff6be;
    }
  }
  piVar1 = DAT_01f8f5b8;
  if (DAT_01f8f5b8 == (int *)0x0) {
    return -1;
  }
  _Count = findenv(_Str);
  if (((int)_Count < 0) || (*piVar1 == 0)) {
    if (bVar8) {
      _free(_Str);
      *_POption = (char *)0x0;
      return 0;
    }
    if ((int)_Count < 0) {
      _Count = -_Count;
    }
    _Size = _Count + 2;
    if ((int)_Size < (int)_Count) {
      return -1;
    }
    if (0x3ffffffe < _Size) {
      return -1;
    }
    piVar1 = __recalloc_crt(DAT_01f8f5b8,4,_Size);
    if (piVar1 == (int *)0x0) {
      return -1;
    }
    piVar1[_Count] = (int)_Str;
    (piVar1 + _Count)[1] = 0;
    *_POption = (char *)0x0;
  }
  else {
    piVar7 = piVar1 + _Count;
    _free((void *)*piVar7);
    if (!bVar8) {
      *piVar7 = (int)_Str;
      *_POption = (char *)0x0;
      goto LAB_00fff7cc;
    }
    while (*piVar7 != 0) {
      *piVar7 = piVar7[1];
      _Count = _Count + 1;
      piVar7 = piVar1 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar1 = __recalloc_crt(DAT_01f8f5b8,_Count,4), piVar1 == (int *)0x0)) goto LAB_00fff7cc;
  }
  DAT_01f8f5b8 = piVar1;
LAB_00fff7cc:
  if (_Primary != 0) {
    _Size_00 = 1;
    sVar4 = _strlen((char *)_Str);
    _Dst = __calloc_crt(sVar4 + 2,_Size_00);
    if (_Dst != (char *)0x0) {
      _Src = _Str;
      sVar4 = _strlen((char *)_Str);
      eVar5 = _strcpy_s(_Dst,sVar4 + 2,(char *)_Src);
      if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar2[(int)_Dst - (int)_Str] = '\0';
      BVar6 = SetEnvironmentVariableA
                        (_Dst,(LPCSTR)(~-(uint)bVar8 & (uint)(puVar2 + ((int)_Dst - (int)_Str) + 1))
                        );
      if (BVar6 == 0) {
        local_10 = -1;
        piVar1 = __errno();
        *piVar1 = 0x2a;
      }
      _free(_Dst);
    }
  }
  if (bVar8) {
    _free(_Str);
    *_POption = (char *)0x0;
    return local_10;
  }
  return local_10;
}

// 00FFF878  __fcloseall  size=147  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fcloseall
   
   Library: Visual Studio 2010 Release */

int __cdecl __fcloseall(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int local_20;
  
  local_20 = 0;
  __lock(1);
  for (iVar2 = 3; iVar2 < DAT_0225d0a0; iVar2 = iVar2 + 1) {
    if (*(int *)(DAT_0225c084 + iVar2 * 4) != 0) {
      _File = *(FILE **)(DAT_0225c084 + iVar2 * 4);
      if ((_File->_flag & 0x83) != 0) {
        iVar1 = _fclose(_File);
        if (iVar1 != -1) {
          local_20 = local_20 + 1;
        }
      }
      if (0x13 < iVar2) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_0225c084 + iVar2 * 4) + 0x20));
        _free(*(void **)(DAT_0225c084 + iVar2 * 4));
        *(undefined4 *)(DAT_0225c084 + iVar2 * 4) = 0;
      }
    }
  }
  FUN_00fff90b();
  return local_20;
}

// 00FFF90B  FUN_00fff90b  size=9  [run]
void FUN_00fff90b(void)

{
  FUN_00fec3c5(1);
  return;
}

// 00FFF914  __flush  size=104  [run]
/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2010 Release */

int __cdecl __flush(FILE *_File)

{
  int _FileHandle;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *_Buf;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _Buf = _File->_base;
    uVar3 = (int)_File->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(_File);
      uVar1 = __write(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}

// 00FFF97C  __fflush_nolock  size=72  [run]
/* Library Function - Single Match
    __fflush_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __fflush_nolock(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    iVar1 = __flush(_File);
    if (iVar1 == 0) {
      if ((_File->_flag & 0x4000U) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = __fileno(_File);
        iVar1 = __commit(iVar1);
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}

// 00FFF9C4  flsall  size=187  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl flsall(int param_1)

{
  int *piVar1;
  void *_File;
  FILE *_File_00;
  int iVar2;
  int _Index;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (_Index = 0; _Index < DAT_0225d0a0; _Index = _Index + 1) {
    piVar1 = (int *)(DAT_0225c084 + _Index * 4);
    if ((*piVar1 != 0) && (_File = (void *)*piVar1, (*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      __lock_file2(_Index,_File);
      _File_00 = *(FILE **)(DAT_0225c084 + _Index * 4);
      if ((_File_00->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_nolock(_File_00);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((_File_00->_flag & 2U) != 0)) {
          iVar2 = __fflush_nolock(_File_00);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_00fffa66();
    }
  }
  FUN_00fffa95();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}

// 00FFFA66  FUN_00fffa66  size=17  [run]
void FUN_00fffa66(void)

{
  int unaff_ESI;
  
  __unlock_file2(unaff_ESI,*(void **)(DAT_0225c084 + unaff_ESI * 4));
  return;
}

// 00FFFA95  FUN_00fffa95  size=9  [run]
void FUN_00fffa95(void)

{
  FUN_00fec3c5(1);
  return;
}

// 00FFFA9E  _fflush  size=73  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fflush
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _fflush(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    __lock_file(_File);
    iVar1 = __fflush_nolock(_File);
    FUN_00fffae7();
  }
  return iVar1;
}

// 00FFFAE7  FUN_00fffae7  size=10  [run]
void FUN_00fffae7(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 8));
  return;
}

// 00FFFAF1  __flushall  size=9  [run]
/* Library Function - Single Match
    __flushall
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __flushall(void)

{
  int iVar1;
  
  iVar1 = flsall(1);
  return iVar1;
}

// 00FFFAFA  FUN_00fffafa  size=3  [run]
undefined4 FUN_00fffafa(void)

{
  return 0;
}

// 00FFFAFD  __raise_exc_ex  size=732  [run]
/* Library Function - Single Match
    __raise_exc_ex
   
   Library: Visual Studio 2010 Release */

void __raise_exc_ex(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6
                   ,int param_7)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = param_3;
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    param_1[1] = param_1[1] | 1;
    param_3 = 0xc000008f;
  }
  if ((uVar4 & 2) != 0) {
    param_1[1] = param_1[1] | 2;
    param_3 = 0xc0000093;
  }
  if ((uVar4 & 1) != 0) {
    param_1[1] = param_1[1] | 4;
    param_3 = 0xc0000091;
  }
  if ((uVar4 & 4) != 0) {
    param_1[1] = param_1[1] | 8;
    param_3 = 0xc000008e;
  }
  if ((uVar4 & 8) != 0) {
    param_1[1] = param_1[1] | 0x10;
    param_3 = 0xc0000090;
  }
  param_1[2] = param_1[2] ^ (~(*param_2 << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~(*param_2 * 2) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 1) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 3) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*param_2 >> 5) ^ param_1[2]) & 1;
  bVar3 = __statfp();
  puVar2 = param_6;
  if ((bVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((bVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((bVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((bVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((bVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar4 = *puVar1 & 0xc00;
  if (uVar4 == 0) {
    *param_1 = *param_1 & 0xfffffffc;
  }
  else {
    if (uVar4 == 0x400) {
      uVar4 = *param_1 & 0xfffffffd | 1;
    }
    else {
      if (uVar4 != 0x800) {
        if (uVar4 == 0xc00) {
          *param_1 = *param_1 | 3;
        }
        goto LAB_00fffc5c;
      }
      uVar4 = *param_1 & 0xfffffffe | 2;
    }
    *param_1 = uVar4;
  }
LAB_00fffc5c:
  uVar4 = *puVar1 & 0x300;
  if (uVar4 == 0) {
    uVar4 = *param_1 & 0xffffffeb | 8;
LAB_00fffc92:
    *param_1 = uVar4;
  }
  else {
    if (uVar4 == 0x200) {
      uVar4 = *param_1 & 0xffffffe7 | 4;
      goto LAB_00fffc92;
    }
    if (uVar4 == 0x300) {
      *param_1 = *param_1 & 0xffffffe3;
    }
  }
  *param_1 = *param_1 ^ (param_4 << 5 ^ *param_1) & 0x1ffe0;
  param_1[8] = param_1[8] | 1;
  if (param_7 == 0) {
    param_1[8] = param_1[8] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    param_1[8] = param_1[8] & 0xffffffe1;
    param_1[4] = *param_5;
    param_1[0x18] = param_1[0x18] | 1;
    param_1[0x18] = param_1[0x18] & 0xffffffe1;
    param_1[0x14] = *param_6;
  }
  __clrfp();
  RaiseException(param_3,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  uVar4 = *param_1 & 3;
  if (uVar4 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff;
  }
  else {
    if (uVar4 == 1) {
      uVar4 = *puVar1 & 0xfffff7ff | 0x400;
    }
    else {
      if (uVar4 != 2) {
        if (uVar4 == 3) {
          *puVar1 = *puVar1 | 0xc00;
        }
        goto LAB_00fffd97;
      }
      uVar4 = *puVar1 & 0xfffffbff | 0x800;
    }
    *puVar1 = uVar4;
  }
LAB_00fffd97:
  uVar4 = *param_1 >> 2 & 7;
  if (uVar4 == 0) {
    uVar4 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        *puVar1 = *puVar1 & 0xfffff3ff;
      }
      goto LAB_00fffdc3;
    }
    uVar4 = *puVar1 & 0xfffff3ff | 0x200;
  }
  *puVar1 = uVar4;
LAB_00fffdc3:
  if (param_7 == 0) {
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x14);
  }
  else {
    *puVar2 = param_1[0x14];
  }
  return;
}

// 00FFFDD9  __raise_exc  size=35  [run]
/* Library Function - Single Match
    __raise_exc
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __raise_exc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  __raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}

// 00FFFDFC  __raise_excf  size=35  [run]
/* Library Function - Single Match
    __raise_excf
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __raise_excf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  __raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}

// 00FFFE1F  __handle_exc  size=484  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2010 Release */

bool __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  uint local_18;
  byte bStack_14;
  undefined1 uStack_13;
  ushort uStack_12;
  int local_c;
  uint local_8;
  
  uVar5 = param_1 & 0x1f;
  bVar3 = true;
  local_8 = uVar5;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_010003d0(1);
    uVar5 = param_1 & 0x17;
    goto LAB_00ffffe1;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_010003d0(4);
    uVar5 = param_1 & 0x1b;
    goto LAB_00ffffe1;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 & 0x10) == 0)) goto LAB_00ffffe1;
    bVar6 = (param_1 & 0x10) != 0;
    if (*param_2 != 0.0) {
      fVar7 = (float10)FUN_00fff06c(*param_2,&local_c);
      dVar2 = (double)fVar7;
      local_18 = SUB84(dVar2,0);
      bStack_14 = (byte)((ulonglong)dVar2 >> 0x20);
      uStack_13 = (undefined1)((ulonglong)dVar2 >> 0x28);
      uStack_12 = (ushort)((ulonglong)dVar2 >> 0x30);
      local_c = local_c + -0x600;
      if (local_c < -0x432) {
        dVar2 = dVar2 * 0.0;
        bVar6 = bVar3;
LAB_00ffffc1:
        local_18 = SUB84(dVar2,0);
        bStack_14 = (byte)((ulonglong)dVar2 >> 0x20);
        uStack_13 = (undefined1)((ulonglong)dVar2 >> 0x28);
        uStack_12 = (ushort)((ulonglong)dVar2 >> 0x30);
      }
      else {
        uStack_12 = uStack_12 & 0xf | 0x10;
        if (local_c < -0x3fd) {
          local_c = -0x3fd - local_c;
          do {
            if (((local_18 & 1) != 0) && (!bVar6)) {
              bVar6 = bVar3;
            }
            local_18 = local_18 >> 1;
            if ((bStack_14 & 1) != 0) {
              local_18 = local_18 | 0x80000000;
            }
            uVar5 = CONCAT22(uStack_12,CONCAT11(uStack_13,bStack_14)) >> 1;
            bStack_14 = (byte)uVar5;
            uStack_13 = (undefined1)(uVar5 >> 8);
            uStack_12 = uStack_12 >> 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (dVar2 < 0.0) {
          dVar2 = -(double)CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(bStack_14,local_18)));
          goto LAB_00ffffc1;
        }
      }
      *param_2 = (double)CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(bStack_14,local_18)));
      bVar3 = bVar6;
    }
    if (bVar3) {
      FUN_010003d0(0x10);
    }
    uVar5 = local_8 & 0xfffffffd;
    local_8 = uVar5;
    goto LAB_00ffffe1;
  }
  FUN_010003d0(8);
  uVar5 = param_3 & 0xc00;
  dVar2 = _DAT_018e96b0;
  dVar4 = _DAT_018e96b0;
  if (uVar5 == 0) {
    dVar1 = *param_2;
joined_r0x00fffec3:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar4;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar5 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_018e96c0;
      goto joined_r0x00fffec3;
    }
    dVar4 = _DAT_018e96c0;
    if (uVar5 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x00fffec3;
    }
    if (uVar5 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_018e96c0;
      goto joined_r0x00fffec3;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_00ffffe1:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_010003d0(0x20);
    uVar5 = uVar5 & 0xffffffef;
  }
  return uVar5 == 0;
}

// 01000003  __set_errno_from_matherr  size=45  [run]
/* Library Function - Single Match
    __set_errno_from_matherr
   
   Library: Visual Studio 2010 Release */

void __set_errno_from_matherr(int param_1)

{
  int *piVar1;
  
  if (param_1 == 1) {
    piVar1 = __errno();
    *piVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    piVar1 = __errno();
    *piVar1 = 0x22;
    return;
  }
  return;
}

// 01000030  __get_fname  size=38  [run]
/* Library Function - Single Match
    __get_fname
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __get_fname(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_018e96e0)[iVar1 * 2] == param_1) {
      return *(undefined4 *)(iVar1 * 8 + 0x18e96e4);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  return 0;
}

// 01000056  __errcode  size=52  [run]
/* Library Function - Single Match
    __errcode
   
   Library: Visual Studio 2010 Release */

char __errcode(byte param_1)

{
  char cVar1;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return '\x01';
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) * '\x02';
      }
      cVar1 = '\x03';
    }
    else {
      cVar1 = '\x02';
    }
  }
  else {
    cVar1 = '\x05';
  }
  return cVar1;
}

// 0100008A  __umatherr  size=160  [run]
/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2010 Release */

float10 __umatherr(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  int iVar1;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  iVar1 = 0;
  do {
    if ((&DAT_018e96e0)[iVar1 * 2] == param_2) {
      local_20 = *(int *)(iVar1 * 8 + 0x18e96e4);
      goto LAB_010000a8;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  local_20 = 0;
LAB_010000a8:
  if (local_20 != 0) {
    local_1c = param_3;
    local_18 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    local_c = param_7;
    local_24 = param_1;
    uStack_8 = param_8;
    __ctrlfp(param_9,0xffff);
    iVar1 = FUN_00fffafa(&local_24);
    if (iVar1 == 0) {
      __set_errno_from_matherr(param_1);
    }
    return (float10)(double)CONCAT44(uStack_8,local_c);
  }
  __ctrlfp(param_9,0xffff);
  __set_errno_from_matherr(param_1);
  return (float10)(double)CONCAT44(param_8,param_7);
}

// 0100012A  __handle_qnan1  size=85  [run]
/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 2010 Release */

float10 __handle_qnan1(undefined4 param_1,double param_2,undefined4 param_3)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_018e96d8 == 0) {
    fVar2 = (float10)__umatherr(1,param_1,param_2,0,param_2,param_3);
    return fVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x21;
  __ctrlfp();
  return (float10)param_2;
}

// 0100017F  __handle_qnan2  size=97  [run]
/* Library Function - Single Match
    __handle_qnan2
   
   Library: Visual Studio 2010 Release */

float10 __handle_qnan2(undefined4 param_1,double param_2,double param_3,undefined4 param_4)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_018e96d8 == 0) {
    fVar2 = (float10)__umatherr(1,param_1,param_2,param_3,param_2 + param_3,param_4);
    return fVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x21;
  __ctrlfp();
  return (float10)(param_2 + param_3);
}

// 010001E0  __except1  size=202  [run]
/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2010 Release */

void __except1(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5)

{
  int iVar1;
  undefined1 local_90 [64];
  uint local_50;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&stack0xfffffff0;
  iVar1 = __handle_exc(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc_ex(local_90,&param_5,param_1,param_2,&param_3,&param_4,0);
  }
  iVar1 = __errcode(param_1);
  if ((DAT_018e96d8 == 0) && (iVar1 != 0)) {
    __umatherr(iVar1,param_2,param_3,0,param_4,param_5);
  }
  else {
    __set_errno_from_matherr(iVar1);
    __ctrlfp();
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

// 010002AA  __except2  size=218  [run]
/* Library Function - Single Match
    __except2
   
   Library: Visual Studio 2010 Release */

void __except2(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 local_90 [48];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&stack0xfffffff0;
  iVar1 = __handle_exc(param_1,&param_5,param_6);
  if (iVar1 == 0) {
    local_60 = param_4;
    local_50 = local_50 & 0xffffffe3 | 3;
    __raise_exc_ex(local_90,&param_6,param_1,param_2,&param_3,&param_5,0);
  }
  iVar1 = __errcode(param_1);
  if ((DAT_018e96d8 == 0) && (iVar1 != 0)) {
    __umatherr(iVar1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    __set_errno_from_matherr(iVar1);
    __ctrlfp();
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

// 01000384  __statfp  size=16  [run]
/* Library Function - Single Match
    __statfp
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __statfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

// 01000394  __clrfp  size=17  [run]
/* Library Function - Single Match
    __clrfp
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __clrfp(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}

// 010003A5  __ctrlfp  size=43  [run]
/* Library Function - Single Match
    __ctrlfp
   
   Library: Visual Studio 2010 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}

// 010003D0  FUN_010003d0  size=88  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010003d0(void)

{
  return;
}

// 01000428  ___get_fpsr_sse2  size=30  [run]
/* Library Function - Single Match
    ___get_fpsr_sse2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 ___get_fpsr_sse2(void)

{
  undefined4 local_8;
  
  if (DAT_0225d0a8 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = MXCSR;
  }
  return local_8;
}

// 01000446  ___set_fpsr_sse2  size=68  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2010 Release */

void ___set_fpsr_sse2(uint param_1)

{
  if (DAT_0225d0a8 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_018e97e0 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}

// 010004B8  FUN_010004b8  size=29  [run]
void FUN_010004b8(void)

{
  if (DAT_0225d0a8 != 0) {
    MXCSR = MXCSR & 0xffffffc0;
  }
  return;
}

// 01000500  ___ctrlfp_sse2  size=55  [run]
/* Library Function - Single Match
    ___ctrlfp_sse2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint ___ctrlfp_sse2(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_0225d0a8 != 0) {
    uVar1 = ___get_fpsr_sse2();
    ___set_fpsr_sse2((~param_2 | 0xffff807f) & uVar1 | param_1 & param_2);
  }
  return uVar1;
}

// 01000537  ___set_statfp_sse2  size=27  [run]
/* Library Function - Single Match
    ___set_statfp_sse2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void ___set_statfp_sse2(uint param_1)

{
  uint uVar1;
  
  uVar1 = ___get_fpsr_sse2();
  ___set_fpsr_sse2(uVar1 | param_1 & 0x3f);
  return;
}

// 01000560  __global_unwind2  size=32  [run]
/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000578,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

// 010005C5  __local_unwind2  size=132  [run]
/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_01000580;
  local_20 = ExceptionList;
  uVar2 = DAT_018e8764 ^ (uint)&local_20;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_01000694(uVar2);
    }
  }
  ExceptionList = local_20;
  return;
}

// 0100066C  __NLG_Notify1  size=9  [run]
/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_018e97f8 = param_1;
  DAT_018e97f4 = in_EAX;
  DAT_018e97fc = unaff_EBP;
  return in_EAX;
}

// 01000675  __NLG_Notify  size=31  [run]
/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_018e97f8 = param_1;
  DAT_018e97f4 = in_EAX;
  DAT_018e97fc = unaff_EBP;
  return;
}

// 01000694  FUN_01000694  size=3  [run]
void FUN_01000694(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}

// 01000697  __fputwc_nolock  size=391  [run]
/* Library Function - Single Match
    __fputwc_nolock
   
   Library: Visual Studio 2010 Release */

wint_t __cdecl __fputwc_nolock(wchar_t _Ch,FILE *_File)

{
  int *piVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  errno_t eVar6;
  int local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  if ((_File->_flag & 0x40) == 0) {
    iVar3 = __fileno(_File);
    if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
      puVar5 = &DAT_018e9590;
    }
    else {
      iVar3 = __fileno(_File);
      uVar4 = __fileno(_File);
      puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0225bf80)[iVar3 >> 5]);
    }
    if ((puVar5[0x24] & 0x7f) != 2) {
      iVar3 = __fileno(_File);
      if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
        puVar5 = &DAT_018e9590;
      }
      else {
        iVar3 = __fileno(_File);
        uVar4 = __fileno(_File);
        puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0225bf80)[iVar3 >> 5]);
      }
      if ((puVar5[0x24] & 0x7f) != 1) {
        iVar3 = __fileno(_File);
        if ((iVar3 == -1) || (iVar3 = __fileno(_File), iVar3 == -2)) {
          puVar5 = &DAT_018e9590;
        }
        else {
          iVar3 = __fileno(_File);
          uVar4 = __fileno(_File);
          puVar5 = (undefined *)((uVar4 & 0x1f) * 0x40 + (&DAT_0225bf80)[iVar3 >> 5]);
        }
        if ((puVar5[4] & 0x80) != 0) {
          eVar6 = _wctomb_s(&local_14,local_10,5,_Ch);
          if ((eVar6 == 0) && (iVar3 = 0, 0 < local_14)) {
            do {
              piVar1 = &_File->_cnt;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 < 0) {
                uVar4 = __flsbuf((int)local_10[iVar3],_File);
              }
              else {
                *_File->_ptr = local_10[iVar3];
                uVar4 = (uint)(byte)*_File->_ptr;
                _File->_ptr = _File->_ptr + 1;
              }
            } while ((uVar4 != 0xffffffff) && (iVar3 = iVar3 + 1, iVar3 < local_14));
          }
          goto LAB_0100080f;
        }
      }
    }
  }
  piVar1 = &_File->_cnt;
  *piVar1 = *piVar1 + -2;
  if (*piVar1 < 0) {
    __flswbuf((uint)(ushort)_Ch,_File);
  }
  else {
    *(wchar_t *)_File->_ptr = _Ch;
    _File->_ptr = _File->_ptr + 2;
  }
LAB_0100080f:
  wVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar2;
}

// 0100081E  _fputwc  size=102  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fputwc
   
   Library: Visual Studio 2010 Release */

wint_t __cdecl _fputwc(wchar_t _Ch,FILE *_File)

{
  wint_t wVar1;
  int *piVar2;
  
  if (_File == (FILE *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00fe56c2();
    wVar1 = 0xffff;
  }
  else {
    __lock_file(_File);
    wVar1 = __fputwc_nolock(_Ch,_File);
    FUN_01000884();
  }
  return wVar1;
}

// 01000884  FUN_01000884  size=10  [run]
void FUN_01000884(void)

{
  int unaff_EBP;
  
  __unlock_file(*(FILE **)(unaff_EBP + 0xc));
  return;
}

// 0100088E  FUN_0100088e  size=11  [run]
void FUN_0100088e(wchar_t param_1,FILE *param_2)

{
  _fputwc(param_1,param_2);
  return;
}

// 01000899  __mbtowc_l  size=278  [run]
/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  int *piVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
      if ((local_14.locinfo)->lc_category[0].wlocale != (wchar_t *)0x0) {
        iVar2 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_14);
        if (iVar2 == 0) {
          iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != (wchar_t *)0x0));
          if (iVar2 != 0) goto LAB_010008e7;
        }
        else {
          pwVar1 = (local_14.locinfo)->locale_name[3];
          if ((((1 < (int)pwVar1) && ((int)pwVar1 <= (int)_SrcSizeInBytes)) &&
              (iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,(int)pwVar1,
                                           _DstCh,(uint)(_DstCh != (wchar_t *)0x0)), iVar2 != 0)) ||
             (((local_14.locinfo)->locale_name[3] <= _SrcSizeInBytes && (_SrcCh[1] != '\0')))) {
            pwVar1 = (local_14.locinfo)->locale_name[3];
            if (local_8 == '\0') {
              return (int)pwVar1;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return (int)pwVar1;
          }
        }
        piVar3 = __errno();
        *piVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_010008e7:
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 1;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}

// 010009AF  _mbtowc  size=26  [run]
/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2010 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}

// 010009C9  wcstoxl  size=450  [run]
/* Library Function - Single Match
    unsigned long __cdecl wcstoxl(wchar_t const *,wchar_t const * *,int,int)
   
   Library: Visual Studio 2010 Release */

ulong __cdecl wcstoxl(wchar_t *param_1,wchar_t **param_2,int param_3,int param_4)

{
  wchar_t _C;
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  uint local_8;
  
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = param_1;
  }
  if ((param_1 == (wchar_t *)0x0) || ((param_3 != 0 && ((param_3 < 2 || (0x24 < param_3)))))) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    return 0;
  }
  local_8 = 0;
  pwVar8 = param_1;
  do {
    pwVar7 = pwVar8;
    _C = *pwVar7;
    pwVar8 = pwVar7 + 1;
    iVar2 = _iswctype(_C,8);
  } while (iVar2 != 0);
  if (_C == L'-') {
    param_4 = param_4 | 2;
LAB_01000a38:
    _C = *pwVar8;
    pwVar8 = pwVar7 + 2;
  }
  else if (_C == L'+') goto LAB_01000a38;
  uVar6 = (uint)(ushort)_C;
  if (param_3 == 0) {
    iVar2 = __wchartodigit(uVar6);
    if (iVar2 != 0) {
      param_3 = 10;
      goto LAB_01000a96;
    }
    if ((*pwVar8 != L'x') && (*pwVar8 != L'X')) {
      param_3 = 8;
      goto LAB_01000a96;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (iVar2 = __wchartodigit(uVar6), iVar2 == 0)) &&
     ((*pwVar8 == L'x' || (*pwVar8 == L'X')))) {
    uVar6 = (uint)(ushort)pwVar8[1];
    pwVar8 = pwVar8 + 2;
  }
LAB_01000a96:
  uVar3 = (uint)(0xffffffff / (ulonglong)(uint)param_3);
  do {
    uVar4 = __wchartodigit(uVar6);
    if (uVar4 == 0xffffffff) {
      uVar5 = (ushort)uVar6;
      if (((uVar5 < 0x41) || (0x5a < uVar5)) && (0x19 < (ushort)(uVar5 - 0x61))) {
LAB_01000af7:
        pwVar8 = pwVar8 + -1;
        if ((param_4 & 8U) == 0) {
          if (param_2 != (wchar_t **)0x0) {
            pwVar8 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4U) != 0) ||
                (((param_4 & 1U) == 0 &&
                 ((((param_4 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          piVar1 = __errno();
          *piVar1 = 0x22;
          if ((param_4 & 1U) == 0) {
            local_8 = ((param_4 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (wchar_t **)0x0) {
          *param_2 = pwVar8;
        }
        if ((param_4 & 2U) != 0) {
          local_8 = -local_8;
        }
        return local_8;
      }
      if ((ushort)(uVar5 - 0x61) < 0x1a) {
        uVar6 = uVar6 - 0x20;
      }
      uVar4 = uVar6 - 0x37;
    }
    if ((uint)param_3 <= uVar4) goto LAB_01000af7;
    if ((local_8 < uVar3) ||
       ((local_8 == uVar3 && (uVar4 <= (uint)(0xffffffff % (ulonglong)(uint)param_3))))) {
      local_8 = local_8 * param_3 + uVar4;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
      if (param_2 == (wchar_t **)0x0) goto LAB_01000af7;
    }
    uVar6 = (uint)(ushort)*pwVar8;
    pwVar8 = pwVar8 + 1;
  } while( true );
}

// 01000B8B  FID_conflict:_wcstol  size=26  [run]
/* Library Function - Multiple Matches With Different Base Names
    __wcstol_l
    _wcstol
   
   Library: Visual Studio 2010 Release */

long __cdecl FID_conflict__wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  
  uVar1 = wcstoxl(_Str,_EndPtr,_Radix,0);
  return uVar1;
}

// 01000BA5  FID_conflict:_wcstol  size=26  [run]
/* Library Function - Multiple Matches With Different Base Names
    __wcstol_l
    _wcstol
   
   Library: Visual Studio 2010 Release */

long __cdecl FID_conflict__wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  
  uVar1 = wcstoxl(_Str,_EndPtr,_Radix,0);
  return uVar1;
}

// 01000BBF  FID_conflict:__wcstoul_l  size=26  [run]
/* Library Function - Multiple Matches With Different Base Names
    __wcstoul_l
    _wcstoul
   
   Library: Visual Studio 2010 Release */

ulong __cdecl FID_conflict___wcstoul_l(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  
  uVar1 = wcstoxl(_Str,_EndPtr,_Radix,1);
  return uVar1;
}

// 01000BD9  FID_conflict:__wcstoul_l  size=26  [run]
/* Library Function - Multiple Matches With Different Base Names
    __wcstoul_l
    _wcstoul
   
   Library: Visual Studio 2010 Release */

ulong __cdecl FID_conflict___wcstoul_l(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  
  uVar1 = wcstoxl(_Str,_EndPtr,_Radix,1);
  return uVar1;
}

// 01000BF3  __ZeroTail  size=73  [run]
/* Library Function - Single Match
    __ZeroTail
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __ZeroTail(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  uVar1 = *(uint *)(param_1 + iVar2 * 4) & ~(-1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f));
  while( true ) {
    if (uVar1 != 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    if (2 < iVar2) break;
    uVar1 = *(uint *)(param_1 + iVar2 * 4);
  }
  return 1;
}

// 01000C3C  __IncMan  size=109  [run]
/* Library Function - Single Match
    __IncMan
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __IncMan(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  uVar4 = 1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f);
  uVar2 = *(uint *)(param_1 + iVar3 * 4);
  iVar5 = 0;
  uVar1 = uVar2 + uVar4;
  if ((uVar1 < uVar2) || (uVar1 < uVar4)) {
    iVar5 = 1;
  }
  *(uint *)(param_1 + iVar3 * 4) = uVar1;
  while ((iVar3 = iVar3 + -1, -1 < iVar3 && (iVar5 != 0))) {
    uVar2 = *(uint *)(param_1 + iVar3 * 4);
    uVar1 = uVar2 + 1;
    iVar5 = 0;
    if ((uVar1 < uVar2) || (uVar1 == 0)) {
      iVar5 = 1;
    }
    *(uint *)(param_1 + iVar3 * 4) = uVar1;
  }
  return iVar5;
}

// 01000CA9  __RoundMan  size=236  [run]
/* Library Function - Single Match
    __RoundMan
   
   Library: Visual Studio 2010 Release */

int __RoundMan(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_8;
  
  local_8 = 0;
  iVar8 = param_2 + -1;
  iVar7 = (int)((param_2 >> 0x1f & 0x1fU) + param_2) >> 5;
  bVar5 = 0x1f - ((byte)param_2 & 0x1f);
  if ((*(uint *)(param_1 + iVar7 * 4) & 1 << (bVar5 & 0x1f)) != 0) {
    uVar3 = *(uint *)(param_1 + iVar7 * 4) & ~(-1 << (bVar5 & 0x1f));
    iVar4 = iVar7;
    while (uVar3 == 0) {
      iVar4 = iVar4 + 1;
      if (2 < iVar4) goto LAB_01000d71;
      uVar3 = *(uint *)(param_1 + iVar4 * 4);
    }
    iVar4 = (int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5;
    param_2 = 0;
    uVar6 = 1 << (0x1f - ((byte)iVar8 & 0x1f) & 0x1f);
    uVar2 = *(uint *)(param_1 + iVar4 * 4);
    uVar3 = uVar2 + uVar6;
    if ((uVar3 < uVar2) || (uVar3 < uVar6)) {
      param_2 = 1;
    }
    *(uint *)(param_1 + iVar4 * 4) = uVar3;
    while ((iVar4 = iVar4 + -1, local_8 = param_2, -1 < iVar4 && (param_2 != 0))) {
      uVar2 = *(uint *)(param_1 + iVar4 * 4);
      uVar3 = uVar2 + 1;
      param_2 = 0;
      if ((uVar3 < uVar2) || (uVar3 == 0)) {
        param_2 = 1;
      }
      *(uint *)(param_1 + iVar4 * 4) = uVar3;
    }
  }
LAB_01000d71:
  puVar1 = (uint *)(param_1 + iVar7 * 4);
  *puVar1 = *puVar1 & -1 << (bVar5 & 0x1f);
  iVar7 = iVar7 + 1;
  if (iVar7 < 3) {
    puVar9 = (undefined4 *)(param_1 + iVar7 * 4);
    for (iVar8 = 3 - iVar7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  return local_8;
}

// 01000D95  __CopyMan  size=31  [run]
/* Library Function - Single Match
    __CopyMan
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __CopyMan(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 3;
  param_1 = param_1 - (int)param_2;
  do {
    *(undefined4 *)(param_1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 01000DB4  FUN_01000db4  size=17  [run]
void FUN_01000db4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 01000DC5  __IsZeroMan  size=31  [run]
/* Library Function - Single Match
    __IsZeroMan
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __IsZeroMan(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}

// 01000DE4  __ShrMan  size=152  [run]
/* Library Function - Single Match
    __ShrMan
   
   Library: Visual Studio 2010 Release */

void __ShrMan(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_c;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar3 = (byte)param_2 & 0x1f;
  local_c = 0;
  param_2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + param_2 * 4);
    *(uint *)(param_1 + param_2 * 4) = *(uint *)(param_1 + param_2 * 4) >> bVar3 | local_c;
    local_c = (uVar1 & ~(-1 << bVar3)) << (0x20 - bVar3 & 0x1f);
    param_2 = param_2 + 1;
  } while (param_2 < 3);
  iVar4 = 2;
  puVar5 = (undefined4 *)(param_1 + (2 - iVar2) * 4);
  do {
    if (iVar4 < iVar2) {
      *(undefined4 *)(param_1 + iVar4 * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + iVar4 * 4) = *puVar5;
    }
    puVar5 = puVar5 + -1;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return;
}

// 01000E7C  __ld12cvt  size=1359  [run]
/* Library Function - Single Match
    __ld12cvt
   
   Library: Visual Studio 2010 Release */

void __ld12cvt(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_14 [4];
  
  local_14[3] = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  uVar1 = param_1[5];
  uVar13 = *(uint *)(param_1 + 3);
  local_14[0] = uVar13;
  uVar3 = *(uint *)(param_1 + 1);
  uVar2 = *param_1;
  uVar9 = uVar1 & 0x7fff;
  iVar10 = uVar9 - 0x3fff;
  local_14[1] = uVar3;
  local_14[2] = (uint)uVar2 << 0x10;
  if (iVar10 == -0x3fff) {
    iVar12 = 0;
    iVar10 = 0;
    do {
      if (local_14[iVar10] != 0) {
        local_14[0] = 0;
        local_14[1] = 0;
        local_14[2] = 0;
        goto LAB_0100122d;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
  }
  else {
    bVar4 = false;
    iVar12 = param_3[2];
    iVar14 = iVar12 + -1;
    iVar5 = (int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5;
    puVar6 = local_14 + iVar5;
    bVar7 = 0x1f - ((byte)iVar12 & 0x1f);
    if ((*puVar6 & 1 << (bVar7 & 0x1f)) != 0) {
      uVar11 = local_14[iVar5] & ~(-1 << (bVar7 & 0x1f));
      iVar12 = iVar5;
      while( true ) {
        if (uVar11 != 0) {
          iVar12 = (int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << (0x1f - ((byte)iVar14 & 0x1f) & 0x1f);
          puVar8 = local_14 + iVar12;
          local_28 = *puVar8 + uVar11;
          if (local_28 < *puVar8) goto LAB_01000fc0;
          bVar15 = local_28 < uVar11;
          do {
            bVar4 = false;
            if (!bVar15) goto LAB_01000fc7;
LAB_01000fc0:
            do {
              bVar4 = true;
LAB_01000fc7:
              iVar12 = iVar12 + -1;
              *puVar8 = local_28;
              if ((iVar12 < 0) || (!bVar4)) goto LAB_01000fd5;
              puVar8 = local_14 + iVar12;
              local_28 = *puVar8 + 1;
            } while (local_28 < *puVar8);
            bVar15 = local_28 == 0;
          } while( true );
        }
        iVar12 = iVar12 + 1;
        if (2 < iVar12) break;
        uVar11 = local_14[iVar12];
      }
    }
LAB_01000fd5:
    *puVar6 = *puVar6 & -1 << (bVar7 & 0x1f);
    iVar5 = iVar5 + 1;
    if (iVar5 < 3) {
      puVar6 = local_14 + iVar5;
      for (iVar12 = 3 - iVar5; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    local_24 = iVar10;
    if (bVar4) {
      local_24 = uVar9 - 0x3ffe;
    }
    iVar12 = param_3[1];
    if (local_24 < iVar12 - param_3[2]) {
      local_14[0] = 0;
      local_14[1] = 0;
      local_14[2] = 0;
    }
    else {
      if (iVar12 < local_24) {
        iVar10 = param_3[3];
        if (local_24 < *param_3) {
          iVar12 = param_3[5] + local_24;
          local_14[0] = local_14[0] & 0x7fffffff;
          iVar5 = (int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5;
          bVar7 = (byte)iVar10 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar13 = local_14[local_24];
            local_14[local_24] = uVar13 >> bVar7 | local_2c;
            local_2c = (uVar13 & ~(-1 << bVar7)) << (0x20 - bVar7 & 0x1f);
            local_24 = local_24 + 1;
          } while (local_24 < 3);
          iVar10 = 2;
          puVar6 = local_14 + (2 - iVar5);
          do {
            if (iVar10 < iVar5) {
              local_14[iVar10] = 0;
            }
            else {
              local_14[iVar10] = *puVar6;
            }
            puVar6 = puVar6 + -1;
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
        }
        else {
          local_14[1] = 0;
          local_14[2] = 0;
          local_14[0] = 0x80000000;
          iVar12 = (int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5;
          bVar7 = (byte)iVar10 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar13 = local_14[local_24];
            local_14[local_24] = uVar13 >> bVar7 | local_2c;
            local_2c = (uVar13 & ~(-1 << bVar7)) << (0x20 - bVar7 & 0x1f);
            local_24 = local_24 + 1;
          } while (local_24 < 3);
          iVar10 = 2;
          puVar6 = local_14 + (2 - iVar12);
          do {
            if (iVar10 < iVar12) {
              local_14[iVar10] = 0;
            }
            else {
              local_14[iVar10] = *puVar6;
            }
            puVar6 = puVar6 + -1;
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
          iVar12 = param_3[5] + *param_3;
        }
        goto LAB_01001383;
      }
      iVar12 = iVar12 - iVar10;
      local_14[0] = uVar13;
      local_14[1] = uVar3;
      local_14[2] = (uint)uVar2 << 0x10;
      iVar10 = (int)((iVar12 >> 0x1f & 0x1fU) + iVar12) >> 5;
      bVar7 = (byte)iVar12 & 0x1f;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar13 = local_14[local_24];
        local_14[local_24] = uVar13 >> bVar7 | local_2c;
        local_2c = (uVar13 & ~(-1 << bVar7)) << (0x20 - bVar7 & 0x1f);
        local_24 = local_24 + 1;
      } while (local_24 < 3);
      iVar12 = 2;
      puVar6 = local_14 + (2 - iVar10);
      do {
        if (iVar12 < iVar10) {
          local_14[iVar12] = 0;
        }
        else {
          local_14[iVar12] = *puVar6;
        }
        puVar6 = puVar6 + -1;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
      iVar10 = param_3[2];
      iVar5 = iVar10 + -1;
      iVar12 = (int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5;
      bVar7 = 0x1f - ((byte)iVar10 & 0x1f);
      if ((local_14[iVar12] & 1 << (bVar7 & 0x1f)) != 0) {
        uVar13 = local_14[iVar12] & ~(-1 << (bVar7 & 0x1f));
        iVar10 = iVar12;
        while (uVar13 == 0) {
          iVar10 = iVar10 + 1;
          if (2 < iVar10) goto LAB_0100117e;
          uVar13 = local_14[iVar10];
        }
        iVar10 = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
        bVar4 = false;
        uVar9 = 1 << (0x1f - ((byte)iVar5 & 0x1f) & 0x1f);
        uVar3 = local_14[iVar10];
        uVar13 = uVar3 + uVar9;
        if ((uVar13 < uVar3) || (uVar13 < uVar9)) {
          bVar4 = true;
        }
        local_14[iVar10] = uVar13;
        while ((iVar10 = iVar10 + -1, -1 < iVar10 && (bVar4))) {
          uVar3 = local_14[iVar10];
          uVar13 = uVar3 + 1;
          bVar4 = false;
          if ((uVar13 < uVar3) || (uVar13 == 0)) {
            bVar4 = true;
          }
          local_14[iVar10] = uVar13;
        }
      }
LAB_0100117e:
      local_14[iVar12] = local_14[iVar12] & -1 << (bVar7 & 0x1f);
      iVar12 = iVar12 + 1;
      if (iVar12 < 3) {
        puVar6 = local_14 + iVar12;
        for (iVar10 = 3 - iVar12; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      iVar10 = param_3[3] + 1;
      iVar10 = (int)((iVar10 >> 0x1f & 0x1fU) + iVar10) >> 5;
      bVar7 = (char)param_3[3] + 1U & 0x1f;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar13 = local_14[local_24];
        local_14[local_24] = uVar13 >> bVar7 | local_2c;
        local_2c = (uVar13 & ~(-1 << bVar7)) << (0x20 - bVar7 & 0x1f);
        local_24 = local_24 + 1;
      } while (local_24 < 3);
      iVar12 = 2;
      puVar6 = local_14 + (2 - iVar10);
      do {
        if (iVar12 < iVar10) {
          local_14[iVar12] = 0;
        }
        else {
          local_14[iVar12] = *puVar6;
        }
        puVar6 = puVar6 + -1;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
LAB_0100122d:
    iVar12 = 0;
  }
LAB_01001383:
  uVar13 = iVar12 << (0x1fU - (char)param_3[3] & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000
           | local_14[0];
  if (param_3[4] == 0x40) {
    param_2[1] = uVar13;
    *param_2 = local_14[1];
  }
  else if (param_3[4] == 0x20) {
    *param_2 = uVar13;
  }
  __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
  return;
}

// 010013CB  __ld12tod  size=1361  [run]
/* Library Function - Single Match
    __ld12tod
   
   Library: Visual Studio 2010 Release */

INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  ushort uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  INTRNCVT_STATUS IVar7;
  byte bVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  uint local_2c;
  uint local_24;
  uint local_14 [4];
  
  local_14[3] = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  uVar1 = *(ushort *)(_Ifp->ld12 + 10);
  uVar15 = *(uint *)(_Ifp->ld12 + 6);
  local_14[0] = uVar15;
  uVar2 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar12 = uVar1 & 0x7fff;
  iVar13 = uVar12 - 0x3fff;
  iVar5 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_14[1] = uVar2;
  local_14[2] = iVar5;
  bVar3 = (byte)DAT_018e980c;
  if (iVar13 == -0x3fff) {
    iVar14 = 0;
    iVar5 = 0;
    do {
      if (local_14[iVar5] != 0) {
        local_14[0] = 0;
        local_14[1] = 0;
        local_14[2] = 0;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  else {
    bVar4 = false;
    iVar16 = DAT_018e9808 + -1;
    iVar14 = (int)(DAT_018e9808 + (DAT_018e9808 >> 0x1f & 0x1fU)) >> 5;
    puVar10 = local_14 + iVar14;
    bVar8 = 0x1f - ((byte)DAT_018e9808 & 0x1f);
    if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
      uVar11 = local_14[iVar14] & ~(-1 << (bVar8 & 0x1f));
      iVar6 = iVar14;
      while( true ) {
        if (uVar11 != 0) {
          iVar6 = (int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << (0x1f - ((byte)iVar16 & 0x1f) & 0x1f);
          puVar9 = local_14 + iVar6;
          local_24 = *puVar9 + uVar11;
          if (local_24 < *puVar9) goto LAB_0100150f;
          bVar17 = local_24 < uVar11;
          do {
            bVar4 = false;
            if (!bVar17) goto LAB_01001516;
LAB_0100150f:
            do {
              bVar4 = true;
LAB_01001516:
              iVar6 = iVar6 + -1;
              *puVar9 = local_24;
              if ((iVar6 < 0) || (!bVar4)) goto LAB_01001524;
              puVar9 = local_14 + iVar6;
              local_24 = *puVar9 + 1;
            } while (local_24 < *puVar9);
            bVar17 = local_24 == 0;
          } while( true );
        }
        iVar6 = iVar6 + 1;
        if (2 < iVar6) break;
        uVar11 = local_14[iVar6];
      }
    }
LAB_01001524:
    *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
    iVar14 = iVar14 + 1;
    if (iVar14 < 3) {
      puVar10 = local_14 + iVar14;
      for (iVar16 = 3 - iVar14; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    iVar14 = iVar13;
    if (bVar4) {
      iVar14 = uVar12 - 0x3ffe;
    }
    if (iVar14 < DAT_018e9804 - DAT_018e9808) {
      local_14[0] = 0;
      local_14[1] = 0;
      local_14[2] = 0;
    }
    else {
      if (DAT_018e9804 < iVar14) {
        if (iVar14 < DAT_018e9800) {
          iVar14 = iVar14 + DAT_018e9814;
          local_14[0] = local_14[0] & 0x7fffffff;
          iVar5 = (int)(DAT_018e980c + (DAT_018e980c >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar15 = local_14[local_24];
            local_14[local_24] = uVar15 >> bVar8 | local_2c;
            local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar13 = 2;
          puVar10 = local_14 + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              local_14[iVar13] = 0;
            }
            else {
              local_14[iVar13] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
        }
        else {
          local_14[1] = 0;
          local_14[2] = 0;
          local_14[0] = 0x80000000;
          iVar5 = (int)(DAT_018e980c + (DAT_018e980c >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar15 = local_14[local_24];
            local_14[local_24] = uVar15 >> bVar8 | local_2c;
            local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar13 = 2;
          puVar10 = local_14 + (2 - iVar5);
          do {
            if (iVar13 < iVar5) {
              local_14[iVar13] = 0;
            }
            else {
              local_14[iVar13] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar13 = iVar13 + -1;
          } while (-1 < iVar13);
          iVar14 = DAT_018e9814 + DAT_018e9800;
        }
        goto LAB_010018cf;
      }
      iVar13 = DAT_018e9804 - iVar13;
      local_14[0] = uVar15;
      local_14[1] = uVar2;
      iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar13 & 0x1f;
      local_14[2] = iVar5;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar15 = local_14[local_24];
        local_14[local_24] = uVar15 >> bVar8 | local_2c;
        local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar5 = 2;
      puVar10 = local_14 + (2 - iVar14);
      do {
        if (iVar5 < iVar14) {
          local_14[iVar5] = 0;
        }
        else {
          local_14[iVar5] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      iVar13 = DAT_018e9808 + -1;
      iVar5 = (int)(DAT_018e9808 + (DAT_018e9808 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = 0x1f - ((byte)DAT_018e9808 & 0x1f);
      puVar10 = local_14 + iVar5;
      if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
        uVar15 = local_14[iVar5] & ~(-1 << (bVar8 & 0x1f));
        iVar14 = iVar5;
        while (uVar15 == 0) {
          iVar14 = iVar14 + 1;
          if (2 < iVar14) goto LAB_010016c3;
          uVar15 = local_14[iVar14];
        }
        iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
        bVar4 = false;
        uVar11 = 1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f);
        uVar12 = local_14[iVar14];
        uVar15 = uVar12 + uVar11;
        if ((uVar15 < uVar12) || (uVar15 < uVar11)) {
          bVar4 = true;
        }
        local_14[iVar14] = uVar15;
        while ((iVar14 = iVar14 + -1, -1 < iVar14 && (bVar4))) {
          uVar12 = local_14[iVar14];
          uVar15 = uVar12 + 1;
          bVar4 = false;
          if ((uVar15 < uVar12) || (uVar15 == 0)) {
            bVar4 = true;
          }
          local_14[iVar14] = uVar15;
        }
      }
LAB_010016c3:
      *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
      iVar5 = iVar5 + 1;
      if (iVar5 < 3) {
        puVar10 = local_14 + iVar5;
        for (iVar13 = 3 - iVar5; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar5 = (int)(DAT_018e980c + 1 + (DAT_018e980c + 1 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = bVar3 + 1 & 0x1f;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar15 = local_14[local_24];
        local_14[local_24] = uVar15 >> bVar8 | local_2c;
        local_2c = (uVar15 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar13 = 2;
      puVar10 = local_14 + (2 - iVar5);
      do {
        if (iVar13 < iVar5) {
          local_14[iVar13] = 0;
        }
        else {
          local_14[iVar13] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
    iVar14 = 0;
  }
LAB_010018cf:
  uVar15 = iVar14 << (0x1f - bVar3 & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 |
           local_14[0];
  if (DAT_018e9810 == 0x40) {
    *(uint *)((int)&_D->x + 4) = uVar15;
    *(uint *)&_D->x = local_14[1];
  }
  else if (DAT_018e9810 == 0x20) {
    *(uint *)&_D->x = uVar15;
  }
  IVar7 = __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
  return IVar7;
}

// 0100191C  __ld12tof  size=1361  [run]
/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2010 Release */

INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  INTRNCVT_STATUS IVar7;
  byte bVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  bool bVar17;
  uint local_2c;
  uint local_24;
  uint local_14;
  float local_10;
  uint local_c [2];
  
  local_c[1] = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  uVar1 = *(ushort *)(_Ifp->ld12 + 10);
  uVar2 = *(uint *)(_Ifp->ld12 + 6);
  local_14 = uVar2;
  fVar15 = *(float *)(_Ifp->ld12 + 2);
  uVar12 = uVar1 & 0x7fff;
  iVar13 = uVar12 - 0x3fff;
  uVar5 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_10 = fVar15;
  local_c[0] = uVar5;
  bVar3 = (byte)DAT_018e9824;
  if (iVar13 == -0x3fff) {
    iVar14 = 0;
    iVar13 = 0;
    do {
      if ((&local_14)[iVar13] != 0) {
        local_14 = 0;
        local_10 = 0.0;
        local_c[0] = 0;
        break;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
  }
  else {
    bVar4 = false;
    iVar16 = DAT_018e9820 + -1;
    iVar14 = (int)(DAT_018e9820 + (DAT_018e9820 >> 0x1f & 0x1fU)) >> 5;
    puVar10 = &local_14 + iVar14;
    bVar8 = 0x1f - ((byte)DAT_018e9820 & 0x1f);
    if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
      uVar11 = (&local_14)[iVar14] & ~(-1 << (bVar8 & 0x1f));
      iVar6 = iVar14;
      while( true ) {
        if (uVar11 != 0) {
          iVar6 = (int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5;
          uVar11 = 1 << (0x1f - ((byte)iVar16 & 0x1f) & 0x1f);
          puVar9 = &local_14 + iVar6;
          local_24 = *puVar9 + uVar11;
          if (local_24 < *puVar9) goto LAB_01001a60;
          bVar17 = local_24 < uVar11;
          do {
            bVar4 = false;
            if (!bVar17) goto LAB_01001a67;
LAB_01001a60:
            do {
              bVar4 = true;
LAB_01001a67:
              iVar6 = iVar6 + -1;
              *puVar9 = local_24;
              if ((iVar6 < 0) || (!bVar4)) goto LAB_01001a75;
              puVar9 = &local_14 + iVar6;
              local_24 = *puVar9 + 1;
            } while (local_24 < *puVar9);
            bVar17 = local_24 == 0;
          } while( true );
        }
        iVar6 = iVar6 + 1;
        if (2 < iVar6) break;
        uVar11 = (&local_14)[iVar6];
      }
    }
LAB_01001a75:
    *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
    iVar14 = iVar14 + 1;
    if (iVar14 < 3) {
      puVar10 = &local_14 + iVar14;
      for (iVar16 = 3 - iVar14; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    iVar14 = iVar13;
    if (bVar4) {
      iVar14 = uVar12 - 0x3ffe;
    }
    if (iVar14 < DAT_018e981c - DAT_018e9820) {
      local_14 = 0;
      local_10 = 0.0;
      local_c[0] = 0;
    }
    else {
      if (DAT_018e981c < iVar14) {
        if (iVar14 < DAT_018e9818) {
          iVar14 = iVar14 + DAT_018e982c;
          local_14 = local_14 & 0x7fffffff;
          iVar13 = (int)(DAT_018e9824 + (DAT_018e9824 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar2 = (&local_14)[local_24];
            (&local_14)[local_24] = uVar2 >> bVar8 | local_2c;
            local_2c = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar16 = 2;
          puVar10 = local_c + -iVar13;
          do {
            if (iVar16 < iVar13) {
              (&local_14)[iVar16] = 0;
            }
            else {
              (&local_14)[iVar16] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar16 = iVar16 + -1;
          } while (-1 < iVar16);
        }
        else {
          local_10 = 0.0;
          local_c[0] = 0;
          local_14 = 0x80000000;
          iVar13 = (int)(DAT_018e9824 + (DAT_018e9824 >> 0x1f & 0x1fU)) >> 5;
          bVar8 = bVar3 & 0x1f;
          local_2c = 0;
          local_24 = 0;
          do {
            uVar2 = (&local_14)[local_24];
            (&local_14)[local_24] = uVar2 >> bVar8 | local_2c;
            local_2c = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
            local_24 = local_24 + 1;
          } while ((int)local_24 < 3);
          iVar14 = 2;
          puVar10 = local_c + -iVar13;
          do {
            if (iVar14 < iVar13) {
              (&local_14)[iVar14] = 0;
            }
            else {
              (&local_14)[iVar14] = *puVar10;
            }
            puVar10 = puVar10 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
          iVar14 = DAT_018e982c + DAT_018e9818;
        }
        goto LAB_01001e20;
      }
      iVar13 = DAT_018e981c - iVar13;
      local_14 = uVar2;
      local_10 = fVar15;
      iVar14 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = (byte)iVar13 & 0x1f;
      local_c[0] = uVar5;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar2 = (&local_14)[local_24];
        (&local_14)[local_24] = uVar2 >> bVar8 | local_2c;
        local_2c = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar13 = 2;
      puVar10 = local_c + -iVar14;
      do {
        if (iVar13 < iVar14) {
          (&local_14)[iVar13] = 0;
        }
        else {
          (&local_14)[iVar13] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
      iVar14 = DAT_018e9820 + -1;
      iVar13 = (int)(DAT_018e9820 + (DAT_018e9820 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = 0x1f - ((byte)DAT_018e9820 & 0x1f);
      puVar10 = &local_14 + iVar13;
      if ((*puVar10 & 1 << (bVar8 & 0x1f)) != 0) {
        uVar2 = (&local_14)[iVar13] & ~(-1 << (bVar8 & 0x1f));
        iVar16 = iVar13;
        while (uVar2 == 0) {
          iVar16 = iVar16 + 1;
          if (2 < iVar16) goto LAB_01001c14;
          uVar2 = (&local_14)[iVar16];
        }
        iVar16 = (int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5;
        bVar4 = false;
        uVar12 = 1 << (0x1f - ((byte)iVar14 & 0x1f) & 0x1f);
        uVar5 = (&local_14)[iVar16];
        uVar2 = uVar5 + uVar12;
        if ((uVar2 < uVar5) || (uVar2 < uVar12)) {
          bVar4 = true;
        }
        (&local_14)[iVar16] = uVar2;
        while ((iVar16 = iVar16 + -1, -1 < iVar16 && (bVar4))) {
          uVar5 = (&local_14)[iVar16];
          uVar2 = uVar5 + 1;
          bVar4 = false;
          if ((uVar2 < uVar5) || (uVar2 == 0)) {
            bVar4 = true;
          }
          (&local_14)[iVar16] = uVar2;
        }
      }
LAB_01001c14:
      *puVar10 = *puVar10 & -1 << (bVar8 & 0x1f);
      iVar13 = iVar13 + 1;
      if (iVar13 < 3) {
        puVar10 = &local_14 + iVar13;
        for (iVar14 = 3 - iVar13; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
      }
      iVar13 = (int)(DAT_018e9824 + 1 + (DAT_018e9824 + 1 >> 0x1f & 0x1fU)) >> 5;
      bVar8 = bVar3 + 1 & 0x1f;
      local_2c = 0;
      local_24 = 0;
      do {
        uVar2 = (&local_14)[local_24];
        (&local_14)[local_24] = uVar2 >> bVar8 | local_2c;
        local_2c = (uVar2 & ~(-1 << bVar8)) << (0x20 - bVar8 & 0x1f);
        local_24 = local_24 + 1;
      } while ((int)local_24 < 3);
      iVar14 = 2;
      puVar10 = local_c + -iVar13;
      do {
        if (iVar14 < iVar13) {
          (&local_14)[iVar14] = 0;
        }
        else {
          (&local_14)[iVar14] = *puVar10;
        }
        puVar10 = puVar10 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    iVar14 = 0;
  }
LAB_01001e20:
  fVar15 = (float)(iVar14 << (0x1f - bVar3 & 0x1f) | -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 |
                  local_14);
  if (DAT_018e9828 == 0x40) {
    _F[1].f = fVar15;
    _F->f = local_10;
  }
  else if (DAT_018e9828 == 0x20) {
    _F->f = fVar15;
  }
  IVar7 = __security_check_cookie(local_c[1] ^ (uint)&stack0xfffffffc);
  return IVar7;
}

// 01001E6D  __ld12told  size=221  [run]
/* Library Function - Single Match
    __ld12told
   
   Library: Visual Studio 2010 Release */

INTRNCVT_STATUS __cdecl __ld12told(_LDBL12 *_Ifp,_LDOUBLE *_Ld)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  ushort uVar5;
  INTRNCVT_STATUS IVar6;
  uint uVar7;
  uint uVar8;
  int local_1c;
  uint local_14 [4];
  
  local_14[3] = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  uVar2 = *(ushort *)(_Ifp->ld12 + 10);
  uVar5 = uVar2 & 0x7fff;
  local_14[0] = *(uint *)(_Ifp->ld12 + 6);
  uVar3 = *(uint *)(_Ifp->ld12 + 2);
  local_14[2] = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  uVar7 = uVar3;
  uVar8 = local_14[0];
  if (((int)local_14[2] < 0) && ((local_14[2] & 0x7fffffff) != 0)) {
    uVar7 = uVar3 + 1;
    bVar4 = false;
    if ((uVar7 < uVar3) || (uVar7 == 0)) {
      bVar4 = true;
    }
    local_1c = 0;
    do {
      uVar8 = local_14[0];
      local_14[1] = uVar7;
      if (!bVar4) goto LAB_01001f1b;
      bVar4 = false;
      puVar1 = local_14 + local_1c;
      uVar8 = *puVar1;
      uVar3 = uVar8 + 1;
      if ((uVar3 < uVar8) || (uVar3 == 0)) {
        bVar4 = true;
      }
      local_1c = local_1c + -1;
      *puVar1 = uVar3;
    } while (-1 < local_1c);
    uVar8 = local_14[0];
    if (bVar4) {
      uVar5 = uVar5 + 1;
      uVar8 = 0x80000000;
    }
  }
LAB_01001f1b:
  *(uint *)(_Ld->ld + 4) = uVar8;
  *(ushort *)(_Ld->ld + 8) = uVar2 & 0x8000 | uVar5;
  *(uint *)_Ld->ld = uVar7;
  IVar6 = __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc,uVar7,uVar5 == 0x7fff);
  return IVar6;
}

// 01001F4A  ___add_12  size=113  [run]
/* Library Function - Single Match
    ___add_12
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void ___add_12(uint *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_1 + *param_2;
  bVar2 = false;
  if ((uVar1 < *param_1) || (uVar1 < *param_2)) {
    bVar2 = true;
  }
  *param_1 = uVar1;
  if (bVar2) {
    uVar1 = param_1[1] + 1;
    bVar2 = false;
    if ((uVar1 < param_1[1]) || (uVar1 == 0)) {
      bVar2 = true;
    }
    param_1[1] = uVar1;
    if (bVar2) {
      param_1[2] = param_1[2] + 1;
    }
  }
  uVar1 = param_1[1] + param_2[1];
  bVar2 = false;
  if ((uVar1 < param_1[1]) || (uVar1 < param_2[1])) {
    bVar2 = true;
  }
  param_1[1] = uVar1;
  if (bVar2) {
    param_1[2] = param_1[2] + 1;
  }
  param_1[2] = param_1[2] + param_2[2];
  return;
}

// 01001FBB  FUN_01001fbb  size=484  [run]
void FUN_01001fbb(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short local_8;
  
  puVar4 = param_3;
  uVar8 = 0;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    uVar5 = 0;
    param_3 = (uint *)0x0;
    do {
      uVar9 = *puVar4;
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      bVar3 = false;
      uVar6 = (uVar8 * 2 | uVar5 >> 0x1f) * 2 | (uVar5 & 0x7fffffff) >> 0x1e;
      uVar5 = uVar5 * 4;
      uVar8 = ((int)param_3 * 2 | uVar8 >> 0x1f) * 2 | (uVar8 & 0x7fffffff) >> 0x1e;
      uVar7 = uVar9 + uVar5;
      *puVar4 = uVar5;
      puVar4[1] = uVar6;
      puVar4[2] = uVar8;
      if ((uVar7 < uVar5) || (uVar7 < uVar9)) {
        bVar3 = true;
      }
      *puVar4 = uVar7;
      uVar5 = uVar6;
      if (bVar3) {
        bVar3 = false;
        uVar5 = uVar6 + 1;
        if ((uVar5 < uVar6) || (uVar5 == 0)) {
          bVar3 = true;
        }
        puVar4[1] = uVar5;
        if (bVar3) {
          uVar8 = uVar8 + 1;
          puVar4[2] = uVar8;
        }
      }
      bVar3 = false;
      uVar9 = uVar5 + uVar1;
      if ((uVar9 < uVar5) || (uVar9 < uVar1)) {
        bVar3 = true;
      }
      puVar4[1] = uVar9;
      if (bVar3) {
        uVar8 = uVar8 + 1;
        puVar4[2] = uVar8;
      }
      bVar3 = false;
      param_3 = (uint *)((uVar8 + uVar2) * 2 | uVar9 >> 0x1f);
      uVar8 = uVar7 * 2;
      uVar9 = uVar9 * 2 | uVar7 >> 0x1f;
      puVar4[2] = (uint)param_3;
      *puVar4 = uVar8;
      puVar4[1] = uVar9;
      uVar5 = uVar8 + (int)*param_1;
      if ((uVar5 < uVar8) || (uVar5 < (uint)(int)*param_1)) {
        bVar3 = true;
      }
      *puVar4 = uVar5;
      uVar8 = uVar9;
      if (bVar3) {
        uVar8 = uVar9 + 1;
        bVar3 = false;
        if ((uVar8 < uVar9) || (uVar8 == 0)) {
          bVar3 = true;
        }
        puVar4[1] = uVar8;
        if (bVar3) {
          param_3 = (uint *)((int)param_3 + 1);
          puVar4[2] = (uint)param_3;
        }
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      puVar4[1] = uVar8;
      puVar4[2] = (uint)param_3;
    } while (param_2 != 0);
  }
  if (puVar4[2] == 0) {
    uVar8 = puVar4[1];
    do {
      local_8 = local_8 + -0x10;
      uVar5 = uVar8 >> 0x10;
      uVar8 = uVar8 << 0x10 | *puVar4 >> 0x10;
      puVar4[1] = uVar8;
      *puVar4 = *puVar4 << 0x10;
    } while (uVar5 == 0);
    puVar4[2] = uVar5;
  }
  uVar8 = puVar4[2];
  if ((uVar8 & 0x8000) == 0) {
    uVar5 = puVar4[1];
    do {
      local_8 = local_8 + -1;
      uVar9 = uVar8 * 2;
      uVar8 = uVar9 | uVar5 >> 0x1f;
      uVar5 = uVar5 * 2 | *puVar4 >> 0x1f;
      *puVar4 = *puVar4 * 2;
      puVar4[1] = uVar5;
      puVar4[2] = uVar8;
    } while ((uVar9 & 0x8000) == 0);
  }
  *(short *)((int)puVar4 + 10) = local_8;
  return;
}

// 0100219F  $I10_OUTPUT  size=2296  [run]
/* WARNING: Removing unreachable block (ram,0x010026ae) */
/* WARNING: Removing unreachable block (ram,0x010026b8) */
/* WARNING: Removing unreachable block (ram,0x010026bd) */
/* Library Function - Single Match
    _$I10_OUTPUT
   
   Library: Visual Studio 2010 Release */

void __cdecl
_I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  errno_t eVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  short *psVar17;
  short *psVar18;
  ushort uVar19;
  short *psVar20;
  int iVar21;
  uint uVar22;
  char *pcVar23;
  ushort *local_74;
  ushort *local_70;
  undefined *local_6c;
  ushort local_64;
  ushort *local_5c;
  int local_58;
  int local_54;
  short local_50;
  int local_4c;
  int local_48;
  int local_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  ushort local_2c [4];
  undefined4 local_24;
  undefined4 uStack_20;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  undefined4 uStack_12;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  uVar16 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20);
  uVar6 = CONCAT22(local_24._2_2_,(ushort)local_24);
  uVar22 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
  uVar9 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12);
  iVar21 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_64 = param_3 & 0x8000;
  uVar12 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c[0] = 0xcccc;
  local_2c[1] = 0x3ffb;
  if (local_64 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((short)uVar12 == 0) {
    if ((param_2 == 0) && (param_1 == 0)) {
      *param_6 = 0;
      *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
      *(undefined2 *)((int)param_6 + 3) = 0x3001;
      *(undefined1 *)((int)param_6 + 5) = 0;
      iVar1 = iVar21;
      goto LAB_01002a4b;
    }
  }
  else if ((short)uVar12 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((local_64 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_010022be;
        pcVar23 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_010022be:
          pcVar23 = "1#QNAN";
          goto LAB_010022c3;
        }
        pcVar23 = "1#IND";
      }
      eVar5 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar23);
      if (eVar5 != 0) goto LAB_01002270;
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar23 = "1#SNAN";
LAB_010022c3:
      eVar5 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar23);
      if (eVar5 != 0) {
LAB_01002270:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    uVar16 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20);
    uVar6 = CONCAT22(local_24._2_2_,(ushort)local_24);
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    goto LAB_01002a4b;
  }
  local_50 = (short)(((uVar12 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar12 * 0x4d10
                    >> 0x10);
  local_24._0_2_ = 0;
  uVar14 = -(int)local_50;
  local_1a = (undefined1)uVar12;
  bStack_19 = (byte)(uVar12 >> 8);
  uStack_20._2_2_ = (ushort)param_2;
  uStack_1c = (ushort)(param_2 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uVar6 = param_1 << 0x10;
  uStack_20._0_2_ = (undefined2)((uint)param_1 >> 0x10);
  uVar16 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20);
  local_6c = &DAT_018e97d0;
  if (uVar14 != 0) {
    iVar1 = iVar21;
    uVar9 = uStack_12;
    uVar22 = uStack_e;
    uVar6 = param_1 << 0x10;
    uVar16 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20);
    if ((int)uVar14 < 0) {
      local_6c = &DAT_018e9930;
      uVar14 = (int)local_50;
    }
joined_r0x01002342:
    if (uVar14 != 0) {
      local_6c = local_6c + 0x54;
      uVar15 = (int)uVar14 >> 3;
      uVar12 = uVar14 & 7;
      uVar14 = uVar15;
      if (uVar12 != 0) {
        puVar8 = (ushort *)(local_6c + uVar12 * 0xc);
        if (0x7fff < *puVar8) {
          local_40 = (ushort)*(undefined4 *)puVar8;
          uStack_3e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar8 >> 0x10);
          puVar2 = puVar8 + 4;
          uStack_3e._2_2_ = (undefined2)*(undefined4 *)(puVar8 + 2);
          uStack_3a = (ushort)((uint)*(undefined4 *)(puVar8 + 2) >> 0x10);
          puVar8 = &local_40;
          local_38 = *(int *)puVar2;
          iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
          uStack_3e._0_2_ = (undefined2)iVar1;
          uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
        }
        local_4c = 0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12._0_2_ = 0;
        uStack_12._2_2_ = 0;
        uVar9 = 0;
        uStack_e._0_2_ = 0;
        uStack_e._2_2_ = 0;
        uVar22 = 0;
        uStack_a = 0;
        uVar10 = (puVar8[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
        uVar11 = CONCAT11(bStack_19,local_1a) & 0x7fff;
        uVar7 = puVar8[5] & 0x7fff;
        uVar19 = uVar7 + uVar11;
        if (((uVar11 < 0x7fff) && (uVar7 < 0x7fff)) && (uVar19 < 0xbffe)) {
          if (0x3fbf < uVar19) {
            if (((uVar11 == 0) &&
                (uVar19 = uVar19 + 1,
                (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
               ((uVar16 == 0 && (uVar6 == 0)))) {
              local_1a = 0;
              bStack_19 = 0;
              goto joined_r0x01002342;
            }
            if (((uVar7 != 0) || (uVar19 = uVar19 + 1, (*(uint *)(puVar8 + 4) & 0x7fffffff) != 0))
               || ((*(int *)(puVar8 + 2) != 0 || (*(int *)puVar8 != 0)))) {
              local_58 = 0;
              psVar20 = (short *)((int)&uStack_12 + 2);
              local_44 = 5;
              do {
                local_54 = local_44;
                if (0 < local_44) {
                  local_74 = (ushort *)((int)&local_24 + local_58 * 2);
                  local_70 = puVar8 + 4;
                  do {
                    bVar4 = false;
                    uVar9 = *(uint *)(psVar20 + -2) + (uint)*local_74 * (uint)*local_70;
                    if ((uVar9 < *(uint *)(psVar20 + -2)) ||
                       (uVar9 < (uint)*local_74 * (uint)*local_70)) {
                      bVar4 = true;
                    }
                    *(uint *)(psVar20 + -2) = uVar9;
                    if (bVar4) {
                      *psVar20 = *psVar20 + 1;
                    }
                    local_74 = local_74 + 1;
                    local_70 = local_70 + -1;
                    local_54 = local_54 + -1;
                  } while (0 < local_54);
                }
                psVar20 = psVar20 + 1;
                local_58 = local_58 + 1;
                local_44 = local_44 + -1;
              } while (0 < local_44);
              uVar19 = uVar19 + 0xc002;
              if ((short)uVar19 < 1) {
LAB_010024f5:
                uVar19 = uVar19 - 1;
                if ((short)uVar19 < 0) {
                  uVar9 = (uint)(ushort)-uVar19;
                  uVar19 = 0;
                  do {
                    if ((local_14 & 1) != 0) {
                      local_4c = local_4c + 1;
                    }
                    iVar3 = CONCAT22(uStack_a,uStack_e._2_2_);
                    uVar6 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    iVar21 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
                    uStack_a = uStack_a >> 1;
                    uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10)
                    ;
                    uVar22 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                    uStack_12._0_2_ =
                         (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar21 << 0x1f) >> 0x10);
                    uVar9 = uVar9 - 1;
                    uStack_12._2_2_ = (ushort)(uVar6 >> 1);
                    local_14 = (byte)uVar22;
                    uStack_13 = (undefined1)(uVar22 >> 8);
                  } while (uVar9 != 0);
                  if (local_4c != 0) {
                    local_14 = local_14 | 1;
                  }
                }
              }
              else {
                do {
                  uVar11 = (ushort)uStack_e;
                  uVar7 = (ushort)uStack_12;
                  if ((uStack_a & 0x8000) != 0) break;
                  iVar21 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                  local_14 = (byte)iVar21;
                  uStack_13 = (undefined1)((uint)iVar21 >> 8);
                  uStack_12._0_2_ = (ushort)((uint)iVar21 >> 0x10);
                  iVar21 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
                  uStack_12._2_2_ = (ushort)iVar21 | uVar7 >> 0xf;
                  uStack_e._0_2_ = (ushort)((uint)iVar21 >> 0x10);
                  iVar21 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
                  uStack_e._2_2_ = (ushort)iVar21 | uVar11 >> 0xf;
                  uVar19 = uVar19 - 1;
                  uStack_a = (ushort)((uint)iVar21 >> 0x10);
                } while (0 < (short)uVar19);
                if ((short)uVar19 < 1) goto LAB_010024f5;
              }
              if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
                 (uVar22 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
                 uVar9 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
                 (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
                if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
                  uVar9 = 0;
                  if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
                    if (uStack_a == 0xffff) {
                      uStack_a = 0x8000;
                      uVar19 = uVar19 + 1;
                      uVar22 = 0;
                      uVar9 = 0;
                    }
                    else {
                      uStack_a = uStack_a + 1;
                      uVar22 = 0;
                      uVar9 = 0;
                    }
                  }
                  else {
                    uVar22 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
                  }
                }
                else {
                  uVar9 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
                  uVar22 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
                }
              }
              if (uVar19 < 0x7fff) {
                bStack_19 = (byte)(uVar19 >> 8) | (byte)(uVar10 >> 8);
                local_24 = uVar9;
                uStack_20 = uVar22;
                uStack_1c = uStack_a;
                local_1a = (undefined1)uVar19;
                uVar6 = uVar9;
                uVar16 = uVar22;
              }
              else {
                uStack_20._0_2_ = 0;
                uStack_20._2_2_ = 0;
                local_24._0_2_ = 0;
                local_24._2_2_ = 0;
                iVar21 = ((uVar10 == 0) - 1 & 0x80000000) + 0x7fff8000;
                uStack_1c = (ushort)iVar21;
                local_1a = (undefined1)((uint)iVar21 >> 0x10);
                bStack_19 = (byte)((uint)iVar21 >> 0x18);
                uVar6 = 0;
                uVar16 = 0;
              }
              goto joined_r0x01002342;
            }
          }
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
        }
        else {
          iVar21 = ((uVar10 == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar21;
          local_1a = (undefined1)((uint)iVar21 >> 0x10);
          bStack_19 = (byte)((uint)iVar21 >> 0x18);
        }
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        uVar9 = 0;
        uVar22 = 0;
        uVar6 = 0;
        uVar16 = 0;
      }
      goto joined_r0x01002342;
    }
  }
  uVar12 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uStack_12 = uVar9;
  uStack_e = uVar22;
  if (0x3ffe < (ushort)(uVar12 >> 0x10)) {
    local_50 = local_50 + 1;
    local_54 = 0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12._0_2_ = 0;
    uStack_12._2_2_ = 0;
    uStack_12 = 0;
    uStack_e._0_2_ = 0;
    uStack_e._2_2_ = 0;
    uStack_e = 0;
    uStack_a = 0;
    uVar9 = uVar12 >> 0x10 & 0x7fff;
    iVar21 = uVar9 + 0x3ffb;
    if (((ushort)uVar9 < 0x7fff) && ((ushort)iVar21 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar21) {
        if (((((ushort)uVar9 == 0) &&
             (iVar21 = uVar9 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) && (uVar16 == 0)
            ) && (uVar6 == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          goto LAB_01002883;
        }
        local_58 = 0;
        psVar20 = (short *)((int)&uStack_12 + 2);
        local_44 = 5;
        do {
          local_4c = local_44;
          if (0 < local_44) {
            local_5c = local_2c;
            puVar8 = (ushort *)((int)&local_24 + local_58 * 2);
            do {
              bVar4 = false;
              uVar9 = *(uint *)(psVar20 + -2) + (uint)*local_5c * (uint)*puVar8;
              if ((uVar9 < *(uint *)(psVar20 + -2)) || (uVar9 < (uint)*local_5c * (uint)*puVar8)) {
                bVar4 = true;
              }
              *(uint *)(psVar20 + -2) = uVar9;
              if (bVar4) {
                *psVar20 = *psVar20 + 1;
              }
              local_5c = local_5c + -1;
              puVar8 = puVar8 + 1;
              local_4c = local_4c + -1;
            } while (0 < local_4c);
          }
          psVar20 = psVar20 + 1;
          local_58 = local_58 + 1;
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar21 = iVar21 + 0xc002;
        if ((short)iVar21 < 1) {
LAB_0100277e:
          uVar19 = (ushort)(iVar21 + 0xffff);
          if ((short)uVar19 < 0) {
            uVar9 = -(iVar21 + 0xffff);
            uVar6 = uVar9 & 0xffff;
            uVar19 = uVar19 + (short)uVar9;
            do {
              if ((local_14 & 1) != 0) {
                local_54 = local_54 + 1;
              }
              iVar3 = CONCAT22(uStack_a,uStack_e._2_2_);
              uVar9 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              iVar21 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
              uStack_a = uStack_a >> 1;
              uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
              uVar22 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12._0_2_ = (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar21 << 0x1f) >> 0x10);
              uVar6 = uVar6 - 1;
              uStack_12._2_2_ = (ushort)(uVar9 >> 1);
              local_14 = (byte)uVar22;
              uStack_13 = (undefined1)(uVar22 >> 8);
            } while (uVar6 != 0);
            if (local_54 != 0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar7 = (ushort)uStack_e;
            uVar19 = (ushort)uStack_12;
            if ((short)uStack_a < 0) break;
            iVar3 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar3;
            uStack_13 = (undefined1)((uint)iVar3 >> 8);
            uStack_12._0_2_ = (ushort)((uint)iVar3 >> 0x10);
            iVar3 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
            uStack_12._2_2_ = (ushort)iVar3 | uVar19 >> 0xf;
            uStack_e._0_2_ = (ushort)((uint)iVar3 >> 0x10);
            iVar3 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
            uStack_e._2_2_ = (ushort)iVar3 | uVar7 >> 0xf;
            iVar21 = iVar21 + 0xffff;
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar21);
          uVar19 = (ushort)iVar21;
          if ((short)uVar19 < 1) goto LAB_0100277e;
        }
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (uStack_e = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
           uStack_12 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
           (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
            uStack_12 = 0;
            if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar19 = uVar19 + 1;
                uStack_e = 0;
                uStack_12 = 0;
              }
              else {
                uStack_a = uStack_a + 1;
                uStack_e = 0;
                uStack_12 = 0;
              }
            }
            else {
              uStack_e = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
            }
          }
          else {
            uStack_12 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
            uStack_e = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
          }
        }
        if (uVar19 < 0x7fff) {
          bStack_19 = (byte)(uVar19 >> 8) | bStack_19 & 0x80;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar19;
          uVar6 = uStack_12;
          uVar16 = uStack_e;
        }
        else {
          iVar21 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar21;
          local_1a = (undefined1)((uint)iVar21 >> 0x10);
          bStack_19 = (byte)((uint)iVar21 >> 0x18);
          uVar6 = 0;
          uVar16 = 0;
        }
        goto LAB_01002883;
      }
      iVar21 = 0;
    }
    else {
      iVar21 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
    }
    uStack_1c = (ushort)iVar21;
    local_1a = (undefined1)((uint)iVar21 >> 0x10);
    bStack_19 = (byte)((uint)iVar21 >> 0x18);
    uStack_12 = 0;
    uStack_e = 0;
    uVar6 = 0;
    uVar16 = 0;
  }
LAB_01002883:
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar21 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    local_48 = 8;
    uVar9 = uVar6;
    uVar22 = uVar16;
    do {
      uVar6 = uVar9 << 1;
      uVar16 = uVar22 * 2 | uVar9 >> 0x1f;
      iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)(uVar22 >> 0x1f);
      local_48 = local_48 + -1;
      uStack_20._0_2_ = (undefined2)uVar16;
      uStack_20._2_2_ = (ushort)(uVar22 * 2 >> 0x10);
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      bStack_19 = (byte)((uint)iVar3 >> 0x18);
      uVar9 = uVar6;
      uVar22 = uVar16;
    } while (local_48 != 0);
    if ((iVar21 < 0) && (uVar22 = -iVar21 & 0xff, uVar22 != 0)) {
      do {
        iVar21 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar6 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar6;
        local_1a = (undefined1)(uVar6 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uVar12 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20) >> 1;
        uVar16 = uVar12 | iVar21 << 0x1f;
        uVar6 = uVar9 >> 1 | CONCAT22(uStack_20._2_2_,(undefined2)uStack_20) << 0x1f;
        uVar22 = uVar22 - 1;
        uStack_20._0_2_ = (undefined2)uVar12;
        uStack_20._2_2_ = (ushort)(uVar16 >> 0x10);
        local_24._0_2_ = (ushort)(uVar9 >> 1);
        local_24._2_2_ = (ushort)(uVar6 >> 0x10);
        uVar9 = CONCAT22(local_24._2_2_,(ushort)local_24);
      } while (0 < (int)uVar22);
    }
    psVar20 = param_6 + 2;
    psVar17 = psVar20;
    for (param_4 = param_4 + 1; 0 < param_4; param_4 = param_4 + -1) {
      uStack_20._2_2_ = (ushort)(uVar16 >> 0x10);
      uStack_20._0_2_ = (undefined2)uVar16;
      local_24._2_2_ = (ushort)(uVar6 >> 0x10);
      local_24._0_2_ = (ushort)uVar6;
      iVar1 = CONCAT22((undefined2)uStack_20,local_24._2_2_);
      local_38 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar22 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 |
               (uint)(uStack_20._2_2_ >> 0xf)) * 2 | (uVar16 & 0x7fffffff) >> 0x1e;
      uVar12 = (uVar16 * 2 | (uint)(local_24._2_2_ >> 0xf)) * 2 | (uVar6 & 0x7fffffff) >> 0x1e;
      uVar9 = uVar6 * 5;
      if ((uVar9 < uVar6 * 4) || (uVar14 = uVar12, uVar9 < uVar6)) {
        uVar14 = uVar12 + 1;
        bVar4 = false;
        if ((uVar14 < uVar12) || (uVar14 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar22 = uVar22 + 1;
        }
      }
      uVar12 = uVar16 + uVar14;
      if ((uVar12 < uVar14) || (uVar12 < uVar16)) {
        uVar22 = uVar22 + 1;
      }
      iVar21 = (uVar22 + local_38) * 2;
      uStack_1c = (ushort)iVar21 | (ushort)(uVar12 >> 0x1f);
      uVar6 = uVar6 * 10;
      local_1a = (undefined1)((uint)iVar21 >> 0x10);
      uVar16 = uVar12 * 2 | uVar9 >> 0x1f;
      *(char *)psVar17 = (char)((uint)iVar21 >> 0x18) + '0';
      psVar17 = (short *)((int)psVar17 + 1);
      bStack_19 = 0;
      local_40 = (ushort)local_24;
      uStack_3a = uStack_20._2_2_;
    }
    psVar18 = psVar17 + -1;
    if (*(char *)((int)psVar17 + -1) < '5') {
      for (; (psVar20 <= psVar18 && ((char)*psVar18 == '0')); psVar18 = (short *)((int)psVar18 + -1)
          ) {
      }
      if (psVar18 < psVar20) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar20 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_01002a4b;
      }
    }
    else {
      for (; (psVar20 <= psVar18 && ((char)*psVar18 == '9')); psVar18 = (short *)((int)psVar18 + -1)
          ) {
        *(char *)psVar18 = '0';
      }
      if (psVar18 < psVar20) {
        psVar18 = (short *)((int)psVar18 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar18 = (char)*psVar18 + '\x01';
    }
    cVar13 = ((char)psVar18 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar13;
    *(undefined1 *)(cVar13 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined2 *)((int)param_6 + 3) = 0x3001;
    *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_01002a4b:
  uStack_3e = iVar1;
  local_24 = uVar6;
  uStack_20 = uVar16;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 01002A97  __set_controlfp  size=115  [run]
/* Library Function - Single Match
    __set_controlfp
   
   Library: Visual Studio 2010 Release */

void __cdecl __set_controlfp(uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  ushort in_FPUControlWord;
  
  if ((((_NewValue != 0x9001f) || (_Mask != 0xffffffff)) || ((in_FPUControlWord & 0x1f3d) != 0x23d))
     || ((DAT_0225d0a8 != 0 && ((MXCSR & 0xfec0) != 0x1e80)))) {
    eVar1 = __controlfp_s((uint *)0x0,_NewValue,_Mask & 0xfff7ffff);
    if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return;
}

// 01002B0A  __abstract_cw  size=159  [run]
/* Library Function - Single Match
    __abstract_cw
   
   Library: Visual Studio 2008 Release */

uint __abstract_cw(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}

// 01002BA9  __hw_cw  size=142  [run]
/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2010 Release */

uint __hw_cw(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  
  uVar1 = (uint)((unaff_EBX & 0x10) != 0);
  if ((unaff_EBX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_EBX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_EBX & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((unaff_EBX & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((unaff_EBX & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = unaff_EBX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((unaff_EBX & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((unaff_EBX & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((unaff_EBX & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}

// 01002C37  FID_conflict:__abstract_sw  size=67  [run]
/* Library Function - Multiple Matches With Different Base Names
    ___abstract_sw_sse2
    __abstract_sw
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint FID_conflict___abstract_sw(byte param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x3f) != 0) {
    if ((param_1 & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((param_1 & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((param_1 & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((param_1 & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((param_1 & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((param_1 & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  return uVar1;
}

// 01002D1A  ___hw_cw_sse2  size=160  [run]
/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2010 Release */

uint __fastcall ___hw_cw_sse2(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_2 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_2 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  param_2 = param_2 & 0x3000000;
  if (param_2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (param_2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (param_2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}

// 01002DBA  FID_conflict:__abstract_sw  size=67  [run]
/* Library Function - Multiple Matches With Different Base Names
    ___abstract_sw_sse2
    __abstract_sw
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint FID_conflict___abstract_sw(byte param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x3f) != 0) {
    if ((param_1 & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((param_1 & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((param_1 & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((param_1 & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((param_1 & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((param_1 & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  return uVar1;
}

// 01002E09  __statusfp  size=146  [run]
/* Library Function - Single Match
    __statusfp
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __cdecl __statusfp(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  
  uVar2 = 0;
  if ((in_FPUStatusWord & 0x3f) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((in_FPUStatusWord & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  if (DAT_0225d0a8 != 0) {
    uVar1 = 0;
    if ((MXCSR & 0x3f) != 0) {
      if ((MXCSR & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((MXCSR & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((MXCSR & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((MXCSR & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((MXCSR & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((MXCSR & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    uVar2 = uVar1 | uVar2;
  }
  return uVar2;
}

// 01002ED3  ___statusfp_sse2  size=59  [run]
/* Library Function - Single Match
    ___statusfp_sse2
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

uint ___statusfp_sse2(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ___get_fpsr_sse2();
  uVar2 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  return uVar2;
}

// 01002F0E  ___clearfp_sse2  size=80  [run]
/* WARNING: Removing unreachable block (ram,0x01002f4f) */
/* WARNING: Removing unreachable block (ram,0x01002f3f) */
/* WARNING: Removing unreachable block (ram,0x01002f2f) */
/* WARNING: Removing unreachable block (ram,0x01002f2a) */
/* WARNING: Removing unreachable block (ram,0x01002f32) */
/* WARNING: Removing unreachable block (ram,0x01002f37) */
/* WARNING: Removing unreachable block (ram,0x01002f3a) */
/* WARNING: Removing unreachable block (ram,0x01002f42) */
/* WARNING: Removing unreachable block (ram,0x01002f47) */
/* WARNING: Removing unreachable block (ram,0x01002f4a) */
/* WARNING: Removing unreachable block (ram,0x01002f52) */
/* WARNING: Removing unreachable block (ram,0x01002f57) */
/* Library Function - Single Match
    ___clearfp_sse2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 ___clearfp_sse2(void)

{
  MXCSR = MXCSR & 0xffffffc0;
  return 0;
}

// 01002F5E  ___control87_sse2  size=374  [run]
/* Library Function - Single Match
    ___control87_sse2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint ___control87_sse2(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if ((char)MXCSR < '\0') {
    uVar1 = 0x10;
  }
  if ((MXCSR & 0x200) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((MXCSR & 0x400) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((MXCSR & 0x800) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((MXCSR & 0x1000) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((MXCSR & 0x100) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar3 = MXCSR & 0x6000;
  if (uVar3 != 0) {
    if (uVar3 == 0x2000) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar3 == 0x4000) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar3 == 0x6000) {
      uVar1 = uVar1 | 0x300;
    }
  }
  uVar3 = MXCSR & 0x8040;
  if (uVar3 == 0x40) {
    uVar1 = uVar1 | 0x2000000;
  }
  else if (uVar3 == 0x8000) {
    uVar1 = uVar1 | 0x3000000;
  }
  else if (uVar3 == 0x8040) {
    uVar1 = uVar1 | 0x1000000;
  }
  if ((~(param_2 & 0x308031f) & uVar1 | param_1 & param_2 & 0x308031f) != uVar1) {
    uVar2 = ___hw_cw_sse2();
    ___set_fpsr_sse2(uVar2);
    uVar1 = 0;
    if ((char)MXCSR < '\0') {
      uVar1 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar1 = uVar1 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar1 = uVar1 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar1 = uVar1 | 0x300;
      }
    }
    uVar3 = MXCSR & 0x8040;
    if (uVar3 == 0x40) {
      uVar1 = uVar1 | 0x2000000;
    }
    else if (uVar3 == 0x8000) {
      uVar1 = uVar1 | 0x3000000;
    }
    else if (uVar3 == 0x8040) {
      uVar1 = uVar1 | 0x1000000;
    }
  }
  return uVar1;
}

// 010030D4  __statusfp2  size=90  [run]
/* Library Function - Single Match
    __statusfp2
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __statusfp2(uint *_X86_status,uint *_SSE2_status)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  if (_X86_status != (uint *)0x0) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    *_X86_status = uVar1;
  }
  if (_SSE2_status != (uint *)0x0) {
    uVar1 = ___statusfp_sse2();
    *_SSE2_status = uVar1;
  }
  return;
}

// 0100312E  __clearfp  size=217  [run]
/* WARNING: Removing unreachable block (ram,0x010031ba) */
/* WARNING: Removing unreachable block (ram,0x010031aa) */
/* WARNING: Removing unreachable block (ram,0x0100319a) */
/* WARNING: Removing unreachable block (ram,0x01003195) */
/* WARNING: Removing unreachable block (ram,0x0100319d) */
/* WARNING: Removing unreachable block (ram,0x010031a2) */
/* WARNING: Removing unreachable block (ram,0x010031a5) */
/* WARNING: Removing unreachable block (ram,0x010031ad) */
/* WARNING: Removing unreachable block (ram,0x010031b2) */
/* WARNING: Removing unreachable block (ram,0x010031b5) */
/* WARNING: Removing unreachable block (ram,0x010031bd) */
/* WARNING: Removing unreachable block (ram,0x010031c2) */
/* Library Function - Single Match
    __clearfp
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  if (DAT_0225d0a8 == 0) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    return uVar1;
  }
  uVar1 = 0;
  if ((in_FPUStatusWord & 0x3f) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((in_FPUStatusWord & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1;
}

// 01003207  ___control87_2  size=791  [run]
/* Library Function - Single Match
    ___control87_2
   
   Library: Visual Studio 2010 Release */

int __cdecl ___control87_2(uint _NewValue,uint _Mask,uint *_X86_cw,uint *_Sse2_cw)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar4 = 0;
  if (_X86_cw != (uint *)0x0) {
    if ((in_FPUControlWord & 1) != 0) {
      uVar4 = 0x10;
    }
    if ((in_FPUControlWord & 4) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((in_FPUControlWord & 8) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((in_FPUControlWord & 0x10) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((in_FPUControlWord & 0x20) != 0) {
      uVar4 = uVar4 | 1;
    }
    if ((in_FPUControlWord & 2) != 0) {
      uVar4 = uVar4 | 0x80000;
    }
    uVar3 = in_FPUControlWord & 0xc00;
    if ((in_FPUControlWord & 0xc00) != 0) {
      if (uVar3 == 0x400) {
        uVar4 = uVar4 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar4 = uVar4 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar4 = uVar4 | 0x300;
      }
    }
    if ((in_FPUControlWord & 0x300) == 0) {
      uVar4 = uVar4 | 0x20000;
    }
    else if ((in_FPUControlWord & 0x300) == 0x200) {
      uVar4 = uVar4 | 0x10000;
    }
    if ((in_FPUControlWord & 0x1000) != 0) {
      uVar4 = uVar4 | 0x40000;
    }
    uVar5 = ~_Mask & uVar4 | _NewValue & _Mask;
    if (uVar5 != uVar4) {
      uVar4 = __hw_cw();
      uVar5 = 0;
      if ((uVar4 & 1) != 0) {
        uVar5 = 0x10;
      }
      if ((uVar4 & 4) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((uVar4 & 8) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((uVar4 & 0x10) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((uVar4 & 0x20) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((uVar4 & 2) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar1 = uVar4 & 0xc00;
      if (uVar1 != 0) {
        if (uVar1 == 0x400) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar1 == 0x800) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar1 == 0xc00) {
          uVar5 = uVar5 | 0x300;
        }
      }
      if ((uVar4 & 0x300) == 0) {
        uVar5 = uVar5 | 0x20000;
      }
      else if ((uVar4 & 0x300) == 0x200) {
        uVar5 = uVar5 | 0x10000;
      }
      if ((uVar4 & 0x1000) != 0) {
        uVar5 = uVar5 | 0x40000;
      }
    }
    *_X86_cw = uVar5;
  }
  if (_Sse2_cw != (uint *)0x0) {
    uVar4 = 0;
    if (DAT_0225d0a8 == 0) {
      *_Sse2_cw = 0;
    }
    else {
      if ((char)MXCSR < '\0') {
        uVar4 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar4 = uVar4 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar4 = uVar4 | 0x80000;
      }
      uVar5 = MXCSR & 0x6000;
      if (uVar5 != 0) {
        if (uVar5 == 0x2000) {
          uVar4 = uVar4 | 0x100;
        }
        else if (uVar5 == 0x4000) {
          uVar4 = uVar4 | 0x200;
        }
        else if (uVar5 == 0x6000) {
          uVar4 = uVar4 | 0x300;
        }
      }
      uVar5 = MXCSR & 0x8040;
      if (uVar5 == 0x40) {
        uVar4 = uVar4 | 0x2000000;
      }
      else if (uVar5 == 0x8000) {
        uVar4 = uVar4 | 0x3000000;
      }
      else if (uVar5 == 0x8040) {
        uVar4 = uVar4 | 0x1000000;
      }
      if ((~(_Mask & 0x308031f) & uVar4 | _Mask & 0x308031f & _NewValue) != uVar4) {
        uVar2 = ___hw_cw_sse2();
        ___set_fpsr_sse2(uVar2);
        uVar4 = 0;
        if ((char)MXCSR < '\0') {
          uVar4 = 0x10;
        }
        if ((MXCSR & 0x200) != 0) {
          uVar4 = uVar4 | 8;
        }
        if ((MXCSR & 0x400) != 0) {
          uVar4 = uVar4 | 4;
        }
        if ((MXCSR & 0x800) != 0) {
          uVar4 = uVar4 | 2;
        }
        if ((MXCSR & 0x1000) != 0) {
          uVar4 = uVar4 | 1;
        }
        if ((MXCSR & 0x100) != 0) {
          uVar4 = uVar4 | 0x80000;
        }
        uVar5 = MXCSR & 0x6000;
        if (uVar5 != 0) {
          if (uVar5 == 0x2000) {
            uVar4 = uVar4 | 0x100;
          }
          else if (uVar5 == 0x4000) {
            uVar4 = uVar4 | 0x200;
          }
          else if (uVar5 == 0x6000) {
            uVar4 = uVar4 | 0x300;
          }
        }
        uVar5 = MXCSR & 0x8040;
        if (uVar5 == 0x40) {
          uVar4 = uVar4 | 0x2000000;
        }
        else if (uVar5 == 0x8000) {
          uVar4 = uVar4 | 0x3000000;
        }
        else if (uVar5 == 0x8040) {
          uVar4 = uVar4 | 0x1000000;
        }
      }
      *_Sse2_cw = uVar4;
    }
  }
  return 1;
}

// 0100351E  __control87  size=786  [run]
/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2010 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar5 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar5 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar5 = uVar5 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar5 = uVar5 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar5 = uVar5 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar5 = uVar5 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar5 = uVar5 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar5 = uVar5 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar5 = uVar5 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar5 = uVar5 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar5 = uVar5 | 0x40000;
  }
  uVar2 = ~_Mask & uVar5 | _NewValue & _Mask;
  if (uVar2 != uVar5) {
    uVar5 = __hw_cw();
    uVar2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar5 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar3 = uVar5 & 0xc00;
    if (uVar3 != 0) {
      if (uVar3 == 0x400) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar2 = uVar2 | 0x300;
      }
    }
    if ((uVar5 & 0x300) == 0) {
      uVar2 = uVar2 | 0x20000;
    }
    else if ((uVar5 & 0x300) == 0x200) {
      uVar2 = uVar2 | 0x10000;
    }
    if ((uVar5 & 0x1000) != 0) {
      uVar2 = uVar2 | 0x40000;
    }
  }
  uVar5 = 0;
  if (DAT_0225d0a8 != 0) {
    if ((char)MXCSR < '\0') {
      uVar5 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar5 = uVar5 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar5 = uVar5 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar5 = uVar5 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar5 = uVar5 | 0x300;
      }
    }
    uVar3 = MXCSR & 0x8040;
    if (uVar3 == 0x40) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (uVar3 == 0x8000) {
      uVar5 = uVar5 | 0x3000000;
    }
    else if (uVar3 == 0x8040) {
      uVar5 = uVar5 | 0x1000000;
    }
    if ((~(_Mask & 0x308031f) & uVar5 | _Mask & 0x308031f & _NewValue) != uVar5) {
      uVar4 = ___hw_cw_sse2();
      ___set_fpsr_sse2(uVar4);
      uVar5 = 0;
      if ((char)MXCSR < '\0') {
        uVar5 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar5 = uVar5 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar5 = uVar5 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar5 = uVar5 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar5 = uVar5 | 0x1000000;
      }
    }
    uVar3 = uVar5 ^ uVar2;
    uVar2 = uVar5 | uVar2;
    if ((uVar3 & 0x8031f) != 0) {
      uVar2 = uVar2 | 0x80000000;
    }
  }
  return uVar2;
}

// 01003830  __controlfp  size=789  [run]
/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2010 Release */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar5 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar5 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar5 = uVar5 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar5 = uVar5 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar5 = uVar5 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar5 = uVar5 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar5 = uVar5 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar5 = uVar5 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar5 = uVar5 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar5 = uVar5 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar5 = uVar5 | 0x40000;
  }
  uVar2 = ~(_Mask & 0xfff7ffff) & uVar5 | _Mask & 0xfff7ffff & _NewValue;
  if (uVar2 != uVar5) {
    uVar5 = __hw_cw();
    uVar2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar5 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar3 = uVar5 & 0xc00;
    if (uVar3 != 0) {
      if (uVar3 == 0x400) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar2 = uVar2 | 0x300;
      }
    }
    if ((uVar5 & 0x300) == 0) {
      uVar2 = uVar2 | 0x20000;
    }
    else if ((uVar5 & 0x300) == 0x200) {
      uVar2 = uVar2 | 0x10000;
    }
    if ((uVar5 & 0x1000) != 0) {
      uVar2 = uVar2 | 0x40000;
    }
  }
  uVar5 = 0;
  if (DAT_0225d0a8 != 0) {
    if ((char)MXCSR < '\0') {
      uVar5 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar5 = uVar5 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar5 = uVar5 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar5 = uVar5 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar5 = uVar5 | 0x300;
      }
    }
    uVar3 = MXCSR & 0x8040;
    if (uVar3 == 0x40) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (uVar3 == 0x8000) {
      uVar5 = uVar5 | 0x3000000;
    }
    else if (uVar3 == 0x8040) {
      uVar5 = uVar5 | 0x1000000;
    }
    if ((~(_Mask & 0x300031f) & uVar5 | _Mask & 0x300031f & _NewValue) != uVar5) {
      uVar4 = ___hw_cw_sse2();
      ___set_fpsr_sse2(uVar4);
      uVar5 = 0;
      if ((char)MXCSR < '\0') {
        uVar5 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar5 = uVar5 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar5 = uVar5 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar5 = uVar5 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar5 = uVar5 | 0x1000000;
      }
    }
    uVar3 = uVar5 ^ uVar2;
    uVar2 = uVar5 | uVar2;
    if ((uVar3 & 0x8031f) != 0) {
      uVar2 = uVar2 | 0x80000000;
    }
  }
  return uVar2;
}

// 01003B45  __set_osfhnd  size=129  [run]
/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2010 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_0225bf70)) {
    iVar3 = (param_1 & 0x1fU) * 0x40;
    if (*(int *)(iVar3 + (&DAT_0225bf80)[param_1 >> 5]) == -1) {
      if (DAT_018e8760 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_01003ba2;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_01003ba2:
      *(intptr_t *)(iVar3 + (&DAT_0225bf80)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 9;
  puVar2 = ___doserrno();
  *puVar2 = 0;
  return -1;
}

// 01003BC6  __free_osfhnd  size=134  [run]
/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2010 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  int iVar4;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_0225bf70)) {
    iVar1 = (&DAT_0225bf80)[param_1 >> 5];
    iVar4 = (param_1 & 0x1fU) * 0x40;
    if (((*(byte *)(iVar1 + 4 + iVar4) & 1) != 0) && (*(int *)(iVar1 + iVar4) != -1)) {
      if (DAT_018e8760 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_01003c28;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_01003c28:
      *(undefined4 *)(iVar4 + (&DAT_0225bf80)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  piVar2 = __errno();
  *piVar2 = 9;
  puVar3 = ___doserrno();
  *puVar3 = 0;
  return -1;
}

// 01003C4C  __get_osfhandle  size=105  [run]
/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2010 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  
  if (_FileHandle == -2) {
    puVar1 = ___doserrno();
    *puVar1 = 0;
    piVar2 = __errno();
    *piVar2 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0225bf70)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)(iVar3 + 4 + (&DAT_0225bf80)[_FileHandle >> 5]) & 1) != 0) {
        return *(intptr_t *)(iVar3 + (&DAT_0225bf80)[_FileHandle >> 5]);
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

// 01003CB5  ___lock_fhandle  size=145  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___lock_fhandle
   
   Library: Visual Studio 2010 Release */

int __cdecl ___lock_fhandle(int _Filehandle)

{
  BOOL BVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = (_Filehandle & 0x1fU) * 0x40 + (&DAT_0225bf80)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      BVar1 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(iVar2 + 0xc),4000);
      local_20 = (uint)(BVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_01003d4b();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_0225bf80)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  }
  return local_20;
}

// 01003D4B  FUN_01003d4b  size=9  [run]
void FUN_01003d4b(void)

{
  FUN_00fec3c5(10);
  return;
}

// 01003D54  __unlock_fhandle  size=39  [run]
/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2010 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_0225bf80)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  return;
}

// 01003D7B  __alloc_osfhnd  size=385  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2010 Release */

int __cdecl __alloc_osfhnd(void)

{
  bool bVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_20;
  
  local_20 = -1;
  iVar5 = 0;
  bVar1 = false;
  iVar2 = __mtinitlocknum(0xb);
  if (iVar2 == 0) {
    local_20 = -1;
  }
  else {
    __lock(0xb);
    for (; iVar5 < 0x40; iVar5 = iVar5 + 1) {
      puVar4 = (undefined4 *)(&DAT_0225bf80)[iVar5];
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = __calloc_crt(0x20,0x40);
        if (puVar4 != (undefined4 *)0x0) {
          (&DAT_0225bf80)[iVar5] = puVar4;
          DAT_0225bf70 = DAT_0225bf70 + 0x20;
          for (; puVar4 < (undefined4 *)((&DAT_0225bf80)[iVar5] + 0x800); puVar4 = puVar4 + 0x10) {
            *(undefined1 *)(puVar4 + 1) = 0;
            *puVar4 = 0xffffffff;
            *(undefined1 *)((int)puVar4 + 5) = 10;
            puVar4[2] = 0;
          }
          local_20 = iVar5 << 5;
          *(undefined1 *)((&DAT_0225bf80)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar4 < (undefined4 *)((&DAT_0225bf80)[iVar5] + 0x800); puVar4 = puVar4 + 0x10) {
        if ((*(byte *)(puVar4 + 1) & 1) == 0) {
          if (puVar4[2] == 0) {
            __lock(10);
            if (puVar4[2] == 0) {
              BVar3 = InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar4 + 3),4000);
              if (BVar3 == 0) {
                bVar1 = true;
              }
              else {
                puVar4[2] = puVar4[2] + 1;
              }
            }
            FUN_01003e4d();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar4 + 3));
            if ((*(byte *)(puVar4 + 1) & 1) == 0) {
              *(undefined1 *)(puVar4 + 1) = 1;
              *puVar4 = 0xffffffff;
              local_20 = ((int)puVar4 - (&DAT_0225bf80)[iVar5] >> 6) + iVar5 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar4 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_01003f0b();
  }
  return local_20;
}

// 01003E4D  FUN_01003e4d  size=9  [run]
void FUN_01003e4d(void)

{
  FUN_00fec3c5(10);
  return;
}

// 01003F0B  FUN_01003f0b  size=9  [run]
void FUN_01003f0b(void)

{
  FUN_00fec3c5(0xb);
  return;
}

// 0100402A  __putwch_nolock  size=66  [run]
/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2010 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  BOOL BVar1;
  DWORD local_8;
  
  if (DAT_018e9aec == (HANDLE)0xfffffffe) {
    ___initconout();
  }
  if (DAT_018e9aec != (HANDLE)0xffffffff) {
    BVar1 = WriteConsoleW(DAT_018e9aec,&_WCh,1,&local_8,(LPVOID)0x0);
    if (BVar1 != 0) {
      return _WCh;
    }
  }
  return 0xffff;
}

// 010040B2  _ldexp  size=434  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _ldexp
   
   Library: Visual Studio 2010 Release */

double __cdecl _ldexp(double _X,int _Y)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  undefined4 uVar5;
  int local_8;
  
  uVar1 = __ctrlfp(0x133f,0xffff);
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar2 = __sptype(_X);
    if (0 < iVar2) {
      if (iVar2 < 3) goto LAB_0100411b;
      if (iVar2 == 3) {
        fVar3 = (float10)__handle_qnan2();
        goto LAB_01004260;
      }
    }
    dVar4 = _X + 1.0;
    uVar5 = 8;
  }
  else {
    if (_X == 0.0) {
LAB_0100411b:
      __ctrlfp(uVar1,0xffff);
LAB_0100425d:
      fVar3 = (float10)_X;
      goto LAB_01004260;
    }
    fVar3 = (float10)FUN_00fff06c(_X,&local_8);
    if (_Y < 0) {
      if (local_8 < -0x80000000 - _Y) {
LAB_01004205:
        fVar3 = fVar3 * (float10)0.0;
LAB_0100420b:
        dVar4 = (double)fVar3;
        uVar5 = 0x12;
        goto LAB_0100414b;
      }
LAB_01004199:
      local_8 = _Y + local_8;
      if (0xa00 < local_8) goto LAB_010041a2;
      if (local_8 < 0x401) {
        if (local_8 < -0x9fd) goto LAB_01004205;
        if (-0x3fe < local_8) {
          fVar3 = (float10)__set_exp((double)fVar3,local_8);
          _X = (double)fVar3;
          __ctrlfp(uVar1,0xffff);
          goto LAB_0100425d;
        }
        fVar3 = (float10)__set_exp((double)fVar3,local_8 + 0x600);
        goto LAB_0100420b;
      }
      fVar3 = (float10)__set_exp((double)fVar3,local_8 + -0x600);
      dVar4 = (double)fVar3;
    }
    else {
      if (local_8 <= 0x7fffffff - _Y) goto LAB_01004199;
LAB_010041a2:
      dVar4 = __copysign(_DAT_018e96b0,(double)fVar3);
    }
    uVar5 = 0x11;
  }
LAB_0100414b:
  fVar3 = (float10)__except2(uVar5,0x19,_X,(double)_Y,dVar4,uVar1);
LAB_01004260:
  return (double)fVar3;
}

// 01004264  __strdup  size=82  [run]
/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2010 Release */

char * __cdecl __strdup(char *_Src)

{
  char *_Dst;
  size_t sVar1;
  errno_t eVar2;
  
  if (_Src == (char *)0x0) {
    _Dst = (char *)0x0;
  }
  else {
    sVar1 = _strlen(_Src);
    _Dst = _malloc(sVar1 + 1);
    if (_Dst == (char *)0x0) {
      _Dst = (char *)0x0;
    }
    else {
      eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Src);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  return _Dst;
}

// 010042B6  __mbschr_l  size=176  [run]
/* Library Function - Single Match
    __mbschr_l
   
   Library: Visual Studio 2010 Release */

uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (_Str == (uchar *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00fe56c2();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    _Str = (byte *)0x0;
  }
  else {
    if (*(int *)(local_10 + 8) == 0) {
      _Str = (uchar *)FUN_00fdc7b0(_Str,_Ch);
    }
    else {
      while( true ) {
        bVar2 = *_Str;
        if (bVar2 == 0) break;
        if ((*(byte *)(bVar2 + 0x1d + local_10) & 4) == 0) {
          pbVar4 = _Str;
          if (_Ch == bVar2) break;
        }
        else {
          bVar1 = _Str[1];
          if (bVar1 == 0) goto LAB_01004354;
          pbVar4 = _Str + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_01004346;
        }
        _Str = pbVar4 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_01004354:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_01004346:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}

// 01004366  __mbschr  size=23  [run]
/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2010 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbschr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}

// 0100437D  __fclose_nolock  size=109  [run]
/* Library Function - Single Match
    __fclose_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __fclose_nolock(FILE *_File)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    iVar3 = -1;
  }
  else {
    if ((_File->_flag & 0x83) != 0) {
      iVar3 = __flush(_File);
      __freebuf(_File);
      iVar2 = __fileno(_File);
      iVar2 = __close(iVar2);
      if (iVar2 < 0) {
        iVar3 = -1;
      }
      else if (_File->_tmpfname != (char *)0x0) {
        _free(_File->_tmpfname);
        _File->_tmpfname = (char *)0x0;
      }
    }
    _File->_flag = 0;
  }
  return iVar3;
}

// 010043EA  _fclose  size=105  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 2010 Release */

int __cdecl _fclose(FILE *_File)

{
  int *piVar1;
  int local_20;
  
  local_20 = -1;
  if (_File == (FILE *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    local_20 = -1;
  }
  else if ((_File->_flag & 0x40) == 0) {
    __lock_file(_File);
    local_20 = __fclose_nolock(_File);
    FUN_01004456();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}

// 01004456  FUN_01004456  size=8  [run]
void FUN_01004456(void)

{
  FILE *unaff_ESI;
  
  __unlock_file(unaff_ESI);
  return;
}

// 0100445E  __commit  size=206  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2010 Release */

int __cdecl __commit(int _FileHandle)

{
  int *piVar1;
  HANDLE hFile;
  BOOL BVar2;
  ulong *puVar3;
  int iVar4;
  DWORD local_20;
  
  if (_FileHandle == -2) {
    piVar1 = __errno();
    *piVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0225bf70)) {
      iVar4 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)(iVar4 + 4 + (&DAT_0225bf80)[_FileHandle >> 5]) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)(iVar4 + 4 + (&DAT_0225bf80)[_FileHandle >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(_FileHandle);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_01004517;
          puVar3 = ___doserrno();
          *puVar3 = local_20;
        }
        piVar1 = __errno();
        *piVar1 = 9;
        local_20 = 0xffffffff;
LAB_01004517:
        FUN_0100452f();
        return local_20;
      }
    }
    piVar1 = __errno();
    *piVar1 = 9;
    FUN_00fe56c2();
  }
  return -1;
}

// 0100452F  FUN_0100452f  size=8  [run]
void FUN_0100452f(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}

// 01004537  __flswbuf  size=372  [run]
/* Library Function - Single Match
    __flswbuf
   
   Library: Visual Studio 2010 Release */

int __cdecl __flswbuf(int _Ch,FILE *_File)

{
  uint uVar1;
  char *_Buf;
  char *pcVar2;
  uint _FileHandle;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  int unaff_EDI;
  uint _MaxCharCount;
  longlong lVar6;
  uint local_8;
  
  _FileHandle = __fileno(_File);
  uVar1 = _File->_flag;
  if ((uVar1 & 0x82) == 0) {
    piVar3 = __errno();
    *piVar3 = 9;
LAB_0100455d:
    _File->_flag = _File->_flag | 0x20;
    return 0xffff;
  }
  if ((uVar1 & 0x40) != 0) {
    piVar3 = __errno();
    *piVar3 = 0x22;
    goto LAB_0100455d;
  }
  if ((uVar1 & 1) != 0) {
    _File->_cnt = 0;
    if ((uVar1 & 0x10) == 0) {
      _File->_flag = uVar1 | 0x20;
      return 0xffff;
    }
    _File->_ptr = _File->_base;
    _File->_flag = uVar1 & 0xfffffffe;
  }
  uVar1 = _File->_flag;
  _File->_cnt = 0;
  local_8 = 0;
  _MaxCharCount = 2;
  _File->_flag = uVar1 & 0xffffffef | 2;
  if (((uVar1 & 0x10c) == 0) &&
     (((iVar4 = FUN_00fec7c3(), _File != (FILE *)(iVar4 + 0x20) &&
       (iVar4 = FUN_00fec7c3(), _File != (FILE *)(iVar4 + 0x40))) ||
      (iVar4 = __isatty(_FileHandle), iVar4 == 0)))) {
    __getbuf(_File);
  }
  if ((_File->_flag & 0x108U) == 0) {
    local_8 = CONCAT22(local_8._2_2_,(short)_Ch);
    local_8 = __write(_FileHandle,&local_8,2);
  }
  else {
    _Buf = _File->_base;
    pcVar2 = _File->_ptr;
    _File->_ptr = _Buf + 2;
    _MaxCharCount = (int)pcVar2 - (int)_Buf;
    _File->_cnt = _File->_bufsiz + -2;
    if ((int)_MaxCharCount < 1) {
      if ((_FileHandle == 0xffffffff) || (_FileHandle == 0xfffffffe)) {
        puVar5 = &DAT_018e9590;
      }
      else {
        puVar5 = (undefined *)((_FileHandle & 0x1f) * 0x40 + (&DAT_0225bf80)[(int)_FileHandle >> 5])
        ;
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar6 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar6 == -1)) goto LAB_01004694;
    }
    else {
      local_8 = __write(_FileHandle,_Buf,_MaxCharCount);
    }
    *(short *)_File->_base = (short)_Ch;
  }
  if (local_8 == _MaxCharCount) {
    return _Ch & 0xffff;
  }
LAB_01004694:
  _File->_flag = _File->_flag | 0x20;
  return 0xffff;
}

// 010046AB  __wchartodigit  size=416  [run]
/* Library Function - Single Match
    __wchartodigit
   
   Library: Visual Studio 2010 Release */

int __wchartodigit(ushort param_1)

{
  int iVar1;
  ushort uVar2;
  
  if (0x2f < param_1) {
    if (param_1 < 0x3a) {
      return param_1 - 0x30;
    }
    iVar1 = 0xff10;
    if (param_1 < 0xff10) {
      iVar1 = 0x660;
      if (param_1 < 0x660) {
        return -1;
      }
      if (param_1 < 0x66a) goto LAB_010046f0;
      iVar1 = 0x6f0;
      if (param_1 < 0x6f0) {
        return -1;
      }
      if (param_1 < 0x6fa) goto LAB_010046f0;
      iVar1 = 0x966;
      if (param_1 < 0x966) {
        return -1;
      }
      if (param_1 < 0x970) goto LAB_010046f0;
      iVar1 = 0x9e6;
      if (param_1 < 0x9e6) {
        return -1;
      }
      if (param_1 < 0x9f0) goto LAB_010046f0;
      iVar1 = 0xa66;
      if (param_1 < 0xa66) {
        return -1;
      }
      if (param_1 < 0xa70) goto LAB_010046f0;
      iVar1 = 0xae6;
      if (param_1 < 0xae6) {
        return -1;
      }
      if (param_1 < 0xaf0) goto LAB_010046f0;
      iVar1 = 0xb66;
      if (param_1 < 0xb66) {
        return -1;
      }
      if (param_1 < 0xb70) goto LAB_010046f0;
      iVar1 = 0xc66;
      if (param_1 < 0xc66) {
        return -1;
      }
      if (param_1 < 0xc70) goto LAB_010046f0;
      iVar1 = 0xce6;
      if (param_1 < 0xce6) {
        return -1;
      }
      if (param_1 < 0xcf0) goto LAB_010046f0;
      iVar1 = 0xd66;
      if (param_1 < 0xd66) {
        return -1;
      }
      if (param_1 < 0xd70) goto LAB_010046f0;
      iVar1 = 0xe50;
      if (param_1 < 0xe50) {
        return -1;
      }
      if (param_1 < 0xe5a) goto LAB_010046f0;
      iVar1 = 0xed0;
      if (param_1 < 0xed0) {
        return -1;
      }
      if (param_1 < 0xeda) goto LAB_010046f0;
      iVar1 = 0xf20;
      if (param_1 < 0xf20) {
        return -1;
      }
      if (param_1 < 0xf2a) goto LAB_010046f0;
      iVar1 = 0x1040;
      if (param_1 < 0x1040) {
        return -1;
      }
      if (param_1 < 0x104a) goto LAB_010046f0;
      iVar1 = 0x17e0;
      if (param_1 < 0x17e0) {
        return -1;
      }
      if (param_1 < 0x17ea) goto LAB_010046f0;
      iVar1 = 0x1810;
      if (param_1 < 0x1810) {
        return -1;
      }
      uVar2 = 0x181a;
    }
    else {
      uVar2 = 0xff1a;
    }
    if (param_1 < uVar2) {
LAB_010046f0:
      return (uint)param_1 - iVar1;
    }
  }
  return -1;
}

// 0100484B  ___initconout  size=31  [run]
/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2010 Release */

void __cdecl ___initconout(void)

{
  DAT_018e9aec = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}

// 0100486A  FUN_0100486a  size=23  [run]
void FUN_0100486a(void)

{
  if ((DAT_018e9aec != (HANDLE)0xffffffff) && (DAT_018e9aec != (HANDLE)0xfffffffe)) {
    CloseHandle(DAT_018e9aec);
  }
  return;
}

// 01004881  __close_nolock  size=156  [run]
/* Library Function - Single Match
    __close_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __close_nolock(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_0225bf80 + 0x84) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_0225bf80 + 0x44) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_010048e7;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_010048e9;
    }
  }
LAB_010048e7:
  DVar4 = 0;
LAB_010048e9:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    __dosmaperr(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}

// 0100491D  __close  size=185  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2010 Release */

int __cdecl __close(int _FileHandle)

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
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_0225bf70)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x40;
      if ((*(byte *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + iVar3) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_0225bf80)[_FileHandle >> 5] + 4 + iVar3) & 1) == 0) {
          piVar2 = __errno();
          *piVar2 = 9;
          local_20 = -1;
        }
        else {
          local_20 = __close_nolock(_FileHandle);
        }
        FUN_010049d9();
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

// 010049D9  FUN_010049d9  size=8  [run]
void FUN_010049d9(void)

{
  int unaff_EBX;
  
  __unlock_fhandle(unaff_EBX);
  return;
}

// 010049E1  __freebuf  size=49  [run]
/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2010 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    _free(_File->_base);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}

