// lib/msvc/crt/unit_00FDFB5F.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDFB5F..00FE2A00, 108 functions

#include "types.h"

// 00FDFB5F  __isalpha_l  size=86  [run]
/* Library Function - Single Match
    __isalpha_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isalpha_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x103;
  }
  else {
    uVar1 = __isctype_l(_C,0x103,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FDFBB5  _isalpha  size=48  [run]
/* Library Function - Single Match
    _isalpha
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isalpha(int _C)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return *(ushort *)(PTR_DAT_018e91a8 + _C * 2) & 0x103;
  }
  iVar1 = __isalpha_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FDFBE5  __isupper_l  size=81  [run]
/* Library Function - Single Match
    __isupper_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isupper_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 1;
  }
  else {
    uVar1 = __isctype_l(_C,1,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FDFC36  _isupper  size=46  [run]
/* Library Function - Single Match
    _isupper
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isupper(int _C)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return *(ushort *)(PTR_DAT_018e91a8 + _C * 2) & 1;
  }
  iVar1 = __isupper_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FDFC64  __islower_l  size=81  [run]
/* Library Function - Single Match
    __islower_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __islower_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 2;
  }
  else {
    uVar1 = __isctype_l(_C,2,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FDFCB5  _islower  size=46  [run]
/* Library Function - Single Match
    _islower
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _islower(int _C)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return *(ushort *)(PTR_DAT_018e91a8 + _C * 2) & 2;
  }
  iVar1 = __islower_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FDFCE3  __isdigit_l  size=81  [run]
/* Library Function - Single Match
    __isdigit_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 4;
  }
  else {
    uVar1 = __isctype_l(_C,4,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FDFD34  _isdigit  size=46  [run]
/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2010 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return *(ushort *)(PTR_DAT_018e91a8 + _C * 2) & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FDFD62  __isxdigit_l  size=86  [run]
/* Library Function - Single Match
    __isxdigit_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isxdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x80;
  }
  else {
    uVar1 = __isctype_l(_C,0x80,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FDFDB8  _isxdigit  size=48  [run]
/* Library Function - Single Match
    _isxdigit
   
   Library: Visual Studio 2010 Release */

int __cdecl _isxdigit(int _C)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return *(ushort *)(PTR_DAT_018e91a8 + _C * 2) & 0x80;
  }
  iVar1 = __isxdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FDFDE8  __isspace_l  size=81  [run]
/* Library Function - Single Match
    __isspace_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isspace_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 8;
  }
  else {
    uVar1 = __isctype_l(_C,8,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FDFE39  _isspace  size=46  [run]
/* Library Function - Single Match
    _isspace
   
   Library: Visual Studio 2010 Release */

int __cdecl _isspace(int _C)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return *(ushort *)(PTR_DAT_018e91a8 + _C * 2) & 8;
  }
  iVar1 = __isspace_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FDFE67  __ispunct_l  size=81  [run]
/* Library Function - Single Match
    __ispunct_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ispunct_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x10;
  }
  else {
    uVar1 = __isctype_l(_C,0x10,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FDFEB8  _ispunct  size=46  [run]
/* Library Function - Single Match
    _ispunct
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _ispunct(int _C)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return *(ushort *)(PTR_DAT_018e91a8 + _C * 2) & 0x10;
  }
  iVar1 = __ispunct_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FDFEE6  __isalnum_l  size=86  [run]
/* Library Function - Single Match
    __isalnum_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isalnum_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x107;
  }
  else {
    uVar1 = __isctype_l(_C,0x107,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FDFF3C  _isalnum  size=48  [run]
/* Library Function - Single Match
    _isalnum
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isalnum(int _C)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return *(ushort *)(PTR_DAT_018e91a8 + _C * 2) & 0x107;
  }
  iVar1 = __isalnum_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FDFF6C  __isprint_l  size=86  [run]
/* Library Function - Single Match
    __isprint_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isprint_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x157;
  }
  else {
    uVar1 = __isctype_l(_C,0x157,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FDFFC2  _isprint  size=48  [run]
/* Library Function - Single Match
    _isprint
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isprint(int _C)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return *(ushort *)(PTR_DAT_018e91a8 + _C * 2) & 0x157;
  }
  iVar1 = __isprint_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FDFFF2  __isgraph_l  size=86  [run]
/* Library Function - Single Match
    __isgraph_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __isgraph_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x117;
  }
  else {
    uVar1 = __isctype_l(_C,0x117,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FE0048  _isgraph  size=48  [run]
/* Library Function - Single Match
    _isgraph
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _isgraph(int _C)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return *(ushort *)(PTR_DAT_018e91a8 + _C * 2) & 0x117;
  }
  iVar1 = __isgraph_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FE0078  __iscntrl_l  size=81  [run]
/* Library Function - Single Match
    __iscntrl_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __iscntrl_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x20;
  }
  else {
    uVar1 = __isctype_l(_C,0x20,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FE00C9  _iscntrl  size=46  [run]
/* Library Function - Single Match
    _iscntrl
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl _iscntrl(int _C)

{
  int iVar1;
  
  if (DAT_01f8ef68 == 0) {
    return *(ushort *)(PTR_DAT_018e91a8 + _C * 2) & 0x20;
  }
  iVar1 = __iscntrl_l(_C,(_locale_t)0x0);
  return iVar1;
}

// 00FE00F7  FUN_00fe00f7  size=18  [run]
bool FUN_00fe00f7(uint param_1)

{
  return param_1 < 0x80;
}

// 00FE0109  FUN_00fe0109  size=13  [run]
uint FUN_00fe0109(uint param_1)

{
  return param_1 & 0x7f;
}

// 00FE0116  FID_conflict:__iscsym_l  size=35  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iscsym_l
    __iscsymf_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 FID_conflict___iscsym_l(int param_1,_locale_t param_2)

{
  int iVar1;
  
  iVar1 = __isalpha_l(param_1,param_2);
  if ((iVar1 == 0) && (param_1 != 0x5f)) {
    return 0;
  }
  return 1;
}

// 00FE0139  ___iscsymf  size=31  [run]
/* Library Function - Single Match
    ___iscsymf
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl ___iscsymf(int _C)

{
  int iVar1;
  
  iVar1 = _isalpha(_C);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

// 00FE0158  FID_conflict:__iscsym_l  size=35  [run]
/* Library Function - Multiple Matches With Different Base Names
    __iscsym_l
    __iscsymf_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 FID_conflict___iscsym_l(int param_1,_locale_t param_2)

{
  int iVar1;
  
  iVar1 = __isalnum_l(param_1,param_2);
  if ((iVar1 == 0) && (param_1 != 0x5f)) {
    return 0;
  }
  return 1;
}

// 00FE017B  ___iscsym  size=33  [run]
/* Library Function - Single Match
    ___iscsym
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl ___iscsym(int _C)

{
  int iVar1;
  
  iVar1 = _isalnum(_C & 0xff);
  if ((iVar1 == 0) && ((char)_C != '_')) {
    return 0;
  }
  return 1;
}

// 00FE019C  __atof_l  size=171  [run]
/* Library Function - Single Match
    __atof_l
   
   Library: Visual Studio 2010 Release */

double __cdecl __atof_l(char *_String,_locale_t _Locale)

{
  int *piVar1;
  uint uVar2;
  float10 fVar3;
  localeinfo_struct local_30;
  int local_28;
  char local_24;
  _flt local_20;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_30,_Locale);
  if (_String == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    if (local_24 != '\0') {
      *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
    }
  }
  else {
    while( true ) {
      if ((int)(local_30.locinfo)->locale_name[3] < 2) {
        uVar2 = *(ushort *)(local_30.locinfo[1].lc_category[0].locale + (uint)(byte)*_String * 2) &
                8;
      }
      else {
        uVar2 = __isctype_l((uint)(byte)*_String,8,&local_30);
      }
      if (uVar2 == 0) break;
      _String = _String + 1;
    }
    __fltin2(&local_20,_String,&local_30);
    if (local_24 != '\0') {
      *(uint *)(local_28 + 0x70) = *(uint *)(local_28 + 0x70) & 0xfffffffd;
    }
  }
  fVar3 = (float10)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)fVar3;
}

// 00FE0247  _atof  size=19  [run]
/* Library Function - Single Match
    _atof
   
   Library: Visual Studio 2010 Release */

double __cdecl _atof(char *_String)

{
  double dVar1;
  
  dVar1 = __atof_l(_String,(_locale_t)0x0);
  return dVar1;
}

// 00FE025A  ___strgtold12  size=66  [run]
/* Library Function - Single Match
    ___strgtold12
   
   Library: Visual Studio 2010 Release */

uint __cdecl
___strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
             int implicit_E)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(localeinfo_struct *)0x0);
  uVar1 = ___strgtold12_l(pld12,p_end_ptr,str,mult12,scale,decpt,implicit_E,&local_14);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FE029C  FID_conflict:___WSTRINGTOLD  size=57  [run]
/* Library Function - Multiple Matches With Different Base Names
    ___STRINGTOLD
    ___WSTRINGTOLD
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __cdecl FID_conflict____WSTRINGTOLD(_LDOUBLE *pld,char **p_end_ptr,char *str,int mult12)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(localeinfo_struct *)0x0);
  uVar1 = ___STRINGTOLD_L(pld,p_end_ptr,str,mult12,&local_14);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}

// 00FE02D5  _free  size=58  [run]
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2010 Release */

void __cdecl _free(void *_Memory)

{
  BOOL BVar1;
  int *piVar2;
  DWORD DVar3;
  int iVar4;
  
  if (_Memory != (void *)0x0) {
    BVar1 = HeapFree(DAT_01f8f878,0,_Memory);
    if (BVar1 == 0) {
      piVar2 = __errno();
      DVar3 = GetLastError();
      iVar4 = __get_errno_from_oserr(DVar3);
      *piVar2 = iVar4;
    }
  }
  return;
}

// 00FE030F  _localeconv  size=38  [run]
/* Library Function - Single Match
    _localeconv
   
   Library: Visual Studio 2010 Release */

lconv * __cdecl _localeconv(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if ((p_Var1->ptlocinfo != (pthreadlocinfo)PTR_DAT_018e91b8) &&
     ((p_Var1->_ownlocale & DAT_018e8f70) == 0)) {
    ___updatetlocinfo();
  }
  return (lconv *)PTR_PTR_018e8850;
}

// 00FE0335  strtoxq  size=669  [run]
/* WARNING: Removing unreachable block (ram,0x00fe04b7) */
/* WARNING: Removing unreachable block (ram,0x00fe054d) */
/* Library Function - Single Match
    unsigned __int64 __cdecl strtoxq(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2010 Release */

__uint64 __cdecl
strtoxq(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  char *pcVar2;
  byte *pbVar3;
  ulonglong uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint extraout_ECX;
  pthreadlocinfo ptVar8;
  byte *pbVar9;
  longlong lVar10;
  localeinfo_struct local_40;
  int local_38;
  char local_34;
  int local_2c;
  uint local_28;
  int local_24;
  ulonglong local_20;
  undefined8 local_18;
  byte *local_c;
  byte local_5;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar5 = __errno();
    *piVar5 = 0x16;
    FUN_00fe56c2();
    if (local_34 != '\0') {
      *(uint *)(local_38 + 0x70) = *(uint *)(local_38 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  local_5 = *param_2;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  ptVar8 = local_40.locinfo;
  pbVar3 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar3 + 1;
    if ((int)ptVar8->locale_name[3] < 2) {
      uVar6 = *(ushort *)(ptVar8[1].lc_category[0].locale + (uint)local_5 * 2) & 8;
    }
    else {
      uVar6 = __isctype_l((uint)local_5,8,&local_40);
      ptVar8 = local_40.locinfo;
    }
    if (uVar6 == 0) break;
    local_5 = *pbVar9;
    pbVar3 = pbVar9;
  }
  if (local_5 == 0x2d) {
    param_5 = param_5 | 2;
LAB_00fe03f7:
    local_5 = *pbVar9;
    pbVar9 = pbVar3 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_00fe03f7;
  local_c = pbVar9;
  if (param_4 == 0) {
    if (local_5 != 0x30) {
      param_4 = 10;
      goto LAB_00fe044e;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_00fe044e;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (local_5 == 0x30)) && ((*pbVar9 == 0x78 || (*pbVar9 == 0x58)))) {
    local_5 = pbVar9[1];
    local_c = pbVar9 + 2;
  }
LAB_00fe044e:
  local_2c = param_4 >> 0x1f;
  local_20 = __aulldvrm(0xffffffff,0xffffffff,param_4,local_2c);
  local_24 = 0;
  pcVar2 = ptVar8[1].lc_category[0].locale;
  local_28 = extraout_ECX;
  do {
    uVar1 = *(ushort *)(pcVar2 + (uint)local_5 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_00fe04e4:
        local_c = local_c + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            local_c = (byte *)param_2;
          }
          uVar4 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                ((uVar4 = local_18, (param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x8000000000000000 < local_18)) ||
                  (((param_5 & 2U) == 0 &&
                   ((0x7ffffffeffffffff < local_18 && (0x7fffffffffffffff < local_18)))))))))) {
          piVar5 = __errno();
          *piVar5 = 0x22;
          if ((param_5 & 1U) == 0) {
            if ((param_5 & 2U) == 0) {
              uVar4 = 0x7fffffffffffffff;
            }
            else {
              uVar4 = 0x8000000000000000;
            }
          }
          else {
            uVar4 = 0xffffffffffffffff;
          }
        }
        local_18._4_4_ = (int)(uVar4 >> 0x20);
        local_18._0_4_ = (int)uVar4;
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)local_c;
        }
        if ((param_5 & 2U) != 0) {
          uVar4 = CONCAT44(-(local_18._4_4_ + (uint)((int)local_18 != 0)),-(int)local_18);
        }
        if (local_34 != '\0') {
          *(uint *)(local_38 + 0x70) = *(uint *)(local_38 + 0x70) & 0xfffffffd;
        }
        return uVar4;
      }
      iVar7 = (int)(char)local_5;
      if ((byte)(local_5 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)local_5 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_00fe04e4;
    if ((local_18 < local_20) ||
       ((local_20 == local_18 && ((local_24 != 0 || (uVar6 <= local_28)))))) {
      lVar10 = __allmul(param_4,local_2c,local_18);
      local_18 = lVar10 + (ulonglong)uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_00fe04e4;
    }
    local_5 = *local_c;
    local_c = local_c + 1;
  } while( true );
}

// 00FE05D2  __strtoi64  size=43  [run]
/* Library Function - Single Match
    __strtoi64
   
   Library: Visual Studio 2010 Release */

longlong __cdecl __strtoi64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_01f8ef68 == 0) {
    ppuVar2 = &PTR_DAT_018e91bc;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,0);
  return _Var1;
}

// 00FE05FD  __strtoi64_l  size=29  [run]
/* Library Function - Single Match
    __strtoi64_l
   
   Library: Visual Studio 2010 Release */

longlong __cdecl __strtoi64_l(char *_String,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  __uint64 _Var1;
  
  _Var1 = strtoxq(_Locale,_String,_EndPtr,_Radix,0);
  return _Var1;
}

// 00FE061A  __strtoui64  size=44  [run]
/* Library Function - Single Match
    __strtoui64
   
   Library: Visual Studio 2010 Release */

ulonglong __cdecl __strtoui64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_01f8ef68 == 0) {
    ppuVar2 = &PTR_DAT_018e91bc;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,1);
  return _Var1;
}

// 00FE0646  __strtoui64_l  size=29  [run]
/* Library Function - Single Match
    __strtoui64_l
   
   Library: Visual Studio 2010 Release */

ulonglong __cdecl __strtoui64_l(char *_String,char **_EndPtr,int _Radix,_locale_t _Locale)

{
  __uint64 _Var1;
  
  _Var1 = strtoxq(_Locale,_String,_EndPtr,_Radix,1);
  return _Var1;
}

// 00FE0670  _memchr  size=173  [run]
/* Library Function - Single Match
    _memchr
   
   Library: Visual Studio */

void * __cdecl _memchr(void *_Buf,int _Val,size_t _MaxCount)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  
  if (_MaxCount == 0) {
    return (void *)0x0;
  }
  uVar6 = _Val & 0xff;
  while (((uint)_Buf & 3) != 0) {
    uVar2 = *(uint *)_Buf;
    _Buf = (void *)((int)_Buf + 1);
    if ((char)uVar2 == (char)_Val) goto LAB_00fe0706;
    _MaxCount = _MaxCount - 1;
    if (_MaxCount == 0) {
      return (void *)0x0;
    }
  }
  uVar2 = _MaxCount - 4;
  if (3 < _MaxCount) {
    uVar6 = uVar6 * 0x1010101;
    puVar4 = _Buf;
    do {
      _Buf = puVar4 + 1;
      if (((*puVar4 ^ uVar6 ^ 0xffffffff ^ (*puVar4 ^ uVar6) + 0x7efefeff) & 0x81010100) != 0) {
        uVar1 = *puVar4;
        cVar5 = (char)uVar6;
        if ((char)uVar1 == cVar5) {
          return puVar4;
        }
        if ((char)(uVar1 >> 8) == cVar5) {
          return (char *)((int)puVar4 + 1);
        }
        if ((char)(uVar1 >> 0x10) == cVar5) {
          return (char *)((int)puVar4 + 2);
        }
        if ((char)(uVar1 >> 0x18) == cVar5) goto LAB_00fe0706;
      }
      bVar7 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      puVar4 = _Buf;
    } while (bVar7);
  }
  iVar3 = uVar2 + 4;
  while( true ) {
    if (iVar3 == 0) {
      return (void *)0x0;
    }
    uVar2 = *(uint *)_Buf;
    _Buf = (void *)((int)_Buf + 1);
    if ((char)uVar2 == (char)uVar6) break;
    iVar3 = iVar3 + -1;
  }
LAB_00fe0706:
  return (char *)((int)_Buf + -1);
}

// 00FE071D  FUN_00fe071d  size=291  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fe071d(byte *param_1,undefined4 *param_2,localeinfo_struct *param_3)

{
  int *piVar1;
  uint uVar2;
  FLT p_Var3;
  byte *_Str;
  localeinfo_struct local_38;
  int local_30;
  char local_2c;
  double local_28;
  _flt local_20;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_38,param_3);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  _Str = param_1;
  if (param_1 == (byte *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    if (local_2c != '\0') {
      *(uint *)(local_30 + 0x70) = *(uint *)(local_30 + 0x70) & 0xfffffffd;
    }
    goto LAB_00fe0831;
  }
  while( true ) {
    if ((int)(local_38.locinfo)->locale_name[3] < 2) {
      uVar2 = *(ushort *)(local_38.locinfo[1].lc_category[0].locale + (uint)*_Str * 2) & 8;
    }
    else {
      uVar2 = __isctype_l((uint)*_Str,8,&local_38);
    }
    if (uVar2 == 0) break;
    _Str = _Str + 1;
  }
  p_Var3 = __fltin2(&local_20,(char *)_Str,&local_38);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = _Str + p_Var3->nbytes;
  }
  uVar2 = p_Var3->flags;
  if ((uVar2 & 0x240) == 0) {
    if ((uVar2 & 0x81) == 0) {
      if (((uVar2 & 0x100) == 0) || (local_28 = 0.0, p_Var3->dval != 0.0)) {
        local_28 = p_Var3->dval;
        goto LAB_00fe0821;
      }
    }
    else {
      local_28 = _DAT_018e95d0;
      if (*_Str == 0x2d) {
        local_28 = -_DAT_018e95d0;
      }
    }
    piVar1 = __errno();
    *piVar1 = 0x22;
  }
  else {
    local_28 = 0.0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
  }
LAB_00fe0821:
  if (local_2c != '\0') {
    *(uint *)(local_30 + 0x70) = *(uint *)(local_30 + 0x70) & 0xfffffffd;
  }
LAB_00fe0831:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE0840  FUN_00fe0840  size=23  [run]
void FUN_00fe0840(undefined4 param_1,undefined4 param_2)

{
  FUN_00fe071d(param_1,param_2,0);
  return;
}

// 00FE0857  _memmove_s  size=83  [run]
/* Library Function - Single Match
    _memmove_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  int *piVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_00fe08a5:
    eVar2 = 0;
  }
  else {
    if ((_Dst == (void *)0x0) || (_Src == (void *)0x0)) {
      piVar1 = __errno();
      eVar2 = 0x16;
      *piVar1 = 0x16;
    }
    else {
      if (_MaxCount <= _DstSize) {
        FID_conflict__memcpy(_Dst,_Src,_MaxCount);
        goto LAB_00fe08a5;
      }
      piVar1 = __errno();
      eVar2 = 0x22;
      *piVar1 = 0x22;
    }
    FUN_00fe56c2();
  }
  return eVar2;
}

// 00FE08B0  _strcspn  size=70  [run]
/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio 2010 Release */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
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
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}

// 00FE090A  FUN_00fe090a  size=10  [run]
void FUN_00fe090a(void)

{
  __cintrindisp2();
  return;
}

// 00FE0930  FUN_00fe0930  size=328  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00fe0930(double param_1,double *param_2)

{
  double *pdVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort in_FPUControlWord;
  float10 fVar5;
  ulonglong uVar6;
  double dVar7;
  undefined4 uVar8;
  undefined8 local_c;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((ulonglong)((longlong)param_1 << 1) >> 0x35);
    dVar7 = (double)(((ulonglong)param_1 >> (ulonglong)(0x433 - uVar2)) <<
                    (ulonglong)(0x433 - uVar2));
    if (uVar2 < 0x3ff) {
      *param_2 = (double)((ulonglong)param_1 & 0x8000000000000000);
      return (float10)param_1;
    }
    if (uVar2 < 0x433) {
      *param_2 = dVar7;
      return (float10)(double)((ulonglong)(param_1 - dVar7) |
                              (ulonglong)param_1 & 0x8000000000000000);
    }
    if (uVar2 != 0x7ff) {
      *param_2 = param_1;
      fVar5 = (float10)0;
      if (0x7ff < (uint)((ulonglong)param_1 >> 0x34)) {
        fVar5 = -fVar5;
      }
      return fVar5;
    }
    *param_2 = param_1 + param_1;
    uVar6 = -(ulonglong)((double)((ulonglong)(param_1 + param_1) & 0xfffffffffffff) != 0.0);
    local_c = (double)((ulonglong)param_1 & (uVar6 | 0x8000000000000000));
    if ((short)uVar6 != 0) {
      ___libm_error_support(&param_1,&param_2,&local_c,0x3ef);
      return (float10)local_c;
    }
    return (float10)local_c;
  }
  uVar3 = __ctrlfp(0,0);
  __ctrlfp(DAT_018e95d8,0xffff);
  pdVar1 = param_2;
  uVar8 = (undefined4)((ulonglong)param_1 >> 0x20);
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    *param_2 = _DAT_018e96b8;
    iVar4 = __sptype(SUB84(param_1,0),uVar8);
    uVar8 = (undefined4)((ulonglong)param_1 >> 0x20);
    if (0 < iVar4) {
      if (iVar4 < 3) {
        *pdVar1 = param_1;
        local_c = __copysign(0.0,param_1);
        __ctrlfp(uVar3,0xffff);
        goto LAB_00ff22fd;
      }
      if (iVar4 == 3) {
        *pdVar1 = param_1;
        fVar5 = (float10)__handle_qnan1(0x1c,SUB84(param_1,0),uVar8,uVar3);
        return fVar5;
      }
    }
    *pdVar1 = param_1 + 1.0;
    fVar5 = (float10)__except1(8,0x1c,SUB84(param_1,0),uVar8,param_1 + 1.0,uVar3);
  }
  else {
    fVar5 = (float10)__frnd(SUB84(param_1,0),uVar8);
    *param_2 = (double)fVar5;
    dVar7 = (double)((float10)param_1 - fVar5);
    local_c = dVar7;
    if (dVar7 == 0.0) {
      local_c._6_2_ = (ushort)((ulonglong)dVar7 >> 0x30);
      local_c = (double)CONCAT26(local_c._6_2_ | param_1._6_2_ & 0x8000,SUB86(dVar7,0));
    }
    __ctrlfp(uVar3,0xffff);
LAB_00ff22fd:
    fVar5 = (float10)local_c;
  }
  return fVar5;
}

// 00FE0A80  FUN_00fe0a80  size=63  [run]
void FUN_00fe0a80(void)

{
  ushort in_FPUControlWord;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00ff2328();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 00FE0AC0  FUN_00fe0ac0  size=79  [run]
void FUN_00fe0ac0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00ff2310();
    return;
  }
  FUN_00fe9df8((double)in_ST0);
  FUN_00fe0b18();
  return;
}

// 00FE0B0F  FUN_00fe0b0f  size=9  [run]
void FUN_00fe0b0f(void)

{
                    /* WARNING: Subroutine does not return */
  __fload_withFB();
}

// 00FE0B18  FUN_00fe0b18  size=162  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00fe0b18(int param_1)

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
    fptan(in_ST0);
    fVar2 = (float10)1;
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_016f96ca) * _DAT_016f96ca;
      } while ((in_FPUStatusWord & 0x400) != 0);
      fptan(fVar2);
    }
    if (DAT_01f8ef44 == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return in_FPUStatusWord;
}

// 00FE0BAD  _bsearch  size=180  [run]
/* Library Function - Single Match
    _bsearch
   
   Library: Visual Studio 2010 Release */

void * __cdecl
_bsearch(void *_Key,void *_Base,size_t _NumOfElements,size_t _SizeOfElements,
        _PtFuncCompare *_PtFuncCompare)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  
  pvVar6 = (void *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
  if ((((_Base == (void *)0x0) && (_NumOfElements != 0)) || (_SizeOfElements == 0)) ||
     (_PtFuncCompare == (_PtFuncCompare *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
  }
  else if (_Base <= pvVar6) {
    do {
      uVar5 = _NumOfElements >> 1;
      if (uVar5 == 0) {
        if (_NumOfElements == 0) {
          return (void *)0x0;
        }
        iVar4 = (*_PtFuncCompare)(_Key,_Base);
        return (void *)(~-(uint)(iVar4 != 0) & (uint)_Base);
      }
      uVar2 = uVar5;
      if ((_NumOfElements & 1) == 0) {
        uVar2 = uVar5 - 1;
      }
      pvVar3 = (void *)(uVar2 * _SizeOfElements + (int)_Base);
      iVar4 = (*_PtFuncCompare)(_Key,pvVar3);
      if (iVar4 == 0) {
        return pvVar3;
      }
      if (iVar4 < 0) {
        pvVar6 = (void *)((int)pvVar3 - _SizeOfElements);
        if ((_NumOfElements & 1) == 0) {
          uVar5 = uVar5 - 1;
        }
      }
      else {
        _Base = (void *)((int)pvVar3 + _SizeOfElements);
      }
      _NumOfElements = uVar5;
    } while (_Base <= pvVar6);
  }
  return (void *)0x0;
}

// 00FE0C61  FUN_00fe0c61  size=22  [run]
undefined4 * FUN_00fe0c61(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 2;
  }
  return param_1;
}

// 00FE0C77  __freea  size=32  [run]
/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2010 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}

// 00FE0C97  _strlwr_s_l_stat  size=382  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl _strlwr_s_l_stat(char *,unsigned int,struct localeinfo_struct *)
   
   Library: Visual Studio 2010 Release */

int __cdecl _strlwr_s_l_stat(char *param_1,uint param_2,localeinfo_struct *param_3)

{
  char cVar1;
  LPCWSTR _LocaleName;
  uint uVar2;
  int *piVar3;
  size_t sVar4;
  uint _CchDest;
  undefined4 *puVar5;
  int iVar6;
  char *local_c;
  
  uVar2 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  if (param_1 == (char *)0x0) {
LAB_00fe0cb3:
    piVar3 = __errno();
    iVar6 = 0x16;
  }
  else {
    sVar4 = _strnlen(param_1,param_2);
    if (param_2 <= sVar4) {
      *param_1 = '\0';
      goto LAB_00fe0cb3;
    }
    _LocaleName = param_3->locinfo->lc_category[0].wlocale;
    if (_LocaleName == (LPCWSTR)0x0) {
      cVar1 = *param_1;
      while (cVar1 != '\0') {
        cVar1 = *param_1;
        if (('@' < cVar1) && (cVar1 < '[')) {
          *param_1 = cVar1 + ' ';
        }
        param_1 = param_1 + 1;
        cVar1 = *param_1;
      }
      goto LAB_00fe0e03;
    }
    _CchDest = ___crtLCMapStringA(param_3,_LocaleName,0x100,param_1,-1,(LPSTR)0x0,0,
                                  param_3->locinfo->lc_codepage,1);
    if (_CchDest == 0) {
      piVar3 = __errno();
      *piVar3 = 0x2a;
LAB_00fe0d3a:
      __errno();
      goto LAB_00fe0e03;
    }
    if (_CchDest <= param_2) {
      if (((int)_CchDest < 1) || (0xffffffe0 / _CchDest == 0)) {
        local_c = (char *)0x0;
      }
      else if (_CchDest + 8 < 0x401) {
        puVar5 = (undefined4 *)&stack0xffffffe4;
        local_c = &stack0xffffffe4;
        if (&stack0x00000000 != (undefined1 *)0x1c) {
LAB_00fe0d98:
          local_c = (char *)(puVar5 + 2);
        }
      }
      else {
        puVar5 = _malloc(_CchDest + 8);
        local_c = (char *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0xdddd;
          goto LAB_00fe0d98;
        }
      }
      if (local_c != (char *)0x0) {
        iVar6 = ___crtLCMapStringA(param_3,param_3->locinfo->lc_category[0].wlocale,0x100,param_1,-1
                                   ,local_c,_CchDest,param_3->locinfo->lc_codepage,1);
        if (iVar6 == 0) {
          piVar3 = __errno();
          *piVar3 = 0x2a;
        }
        else {
          _strcpy_s(param_1,param_2,local_c);
        }
        __freea(local_c);
        goto LAB_00fe0e03;
      }
      piVar3 = __errno();
      *piVar3 = 0xc;
      goto LAB_00fe0d3a;
    }
    *param_1 = '\0';
    piVar3 = __errno();
    iVar6 = 0x22;
  }
  *piVar3 = iVar6;
  FUN_00fe56c2();
LAB_00fe0e03:
  iVar6 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

// 00FE0E15  __strlwr_s_l  size=52  [run]
/* Library Function - Single Match
    __strlwr_s_l
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl __strlwr_s_l(char *_Str,size_t _Size,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  iVar1 = _strlwr_s_l_stat(_Str,_Size,&local_14);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}

// 00FE0E49  FUN_00fe0e49  size=23  [run]
void FUN_00fe0e49(char *param_1,size_t param_2)

{
  __strlwr_s_l(param_1,param_2,(_locale_t)0x0);
  return;
}

// 00FE0E60  FUN_00fe0e60  size=26  [run]
char * FUN_00fe0e60(char *param_1,_locale_t param_2)

{
  __strlwr_s_l(param_1,0xffffffff,param_2);
  return param_1;
}

// 00FE0E7A  __strlwr  size=93  [run]
/* Library Function - Single Match
    __strlwr
   
   Library: Visual Studio 2010 Release */

char * __cdecl __strlwr(char *_String)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  
  if (DAT_01f8ef68 == 0) {
    pcVar2 = _String;
    if (_String == (char *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      FUN_00fe56c2();
      return (char *)0x0;
    }
    if (*_String != '\0') {
      do {
        cVar1 = *_String;
        if (('@' < cVar1) && (cVar1 < '[')) {
          *_String = cVar1 + ' ';
        }
        _String = _String + 1;
      } while (*_String != '\0');
      return pcVar2;
    }
  }
  else {
    __strlwr_s_l(_String,0xffffffff,(_locale_t)0x0);
  }
  return _String;
}

// 00FE0EE0  FUN_00fe0ee0  size=69  [run]
void FUN_00fe0ee0(void)

{
  ushort in_FPUControlWord;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00ff2588();
    return;
  }
  __ctrandisp1();
  return;
}

// 00FE0F1C  FUN_00fe0f1c  size=69  [run]
void FUN_00fe0f1c(void)

{
  ushort in_FPUControlWord;
  
  if ((DAT_0225d0a4 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00ff2570();
    return;
  }
  __cintrindisp1();
  return;
}

// 00FE0F6B  strncnt  size=30  [run]
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

// 00FE0F89  __crtLCMapStringA_stat  size=487  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2010 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint _Size;
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint cchWideChar;
  undefined4 *puVar5;
  uint uVar6;
  LPCWSTR lpDestStr;
  int iVar7;
  LPCWSTR local_10;
  
  uVar2 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  pcVar3 = param_4;
  iVar7 = param_5;
  if (0 < param_5) {
    do {
      iVar7 = iVar7 + -1;
      if (*pcVar3 == '\0') goto LAB_00fe0fb9;
      pcVar3 = pcVar3 + 1;
    } while (iVar7 != 0);
    iVar7 = -1;
LAB_00fe0fb9:
    iVar7 = param_5 - iVar7;
    iVar4 = iVar7 + -1;
    bVar1 = iVar4 < param_5;
    param_5 = iVar4;
    if (bVar1) {
      param_5 = iVar7;
    }
  }
  if (param_8 == 0) {
    param_8 = param_1->locinfo->lc_codepage;
  }
  cchWideChar = MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,param_5,(LPWSTR)0x0
                                    ,0);
  if (cchWideChar == 0) goto LAB_00fe115e;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffe0;
      local_10 = (LPCWSTR)&stack0xffffffe0;
      if (&stack0x00000000 != &DAT_00000020) {
LAB_00fe1049:
        local_10 = (LPCWSTR)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_10 = (LPCWSTR)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_00fe1049;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_00fe115e;
  iVar7 = MultiByteToWideChar(param_8,1,param_4,param_5,local_10,cchWideChar);
  if ((iVar7 != 0) &&
     (uVar6 = LCMapStringW(param_2,param_3,local_10,cchWideChar,(LPWSTR)0x0,0), uVar6 != 0)) {
    if ((param_3 & 0x400) == 0) {
      if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
        lpDestStr = (LPCWSTR)0x0;
      }
      else {
        _Size = uVar6 * 2 + 8;
        if (_Size < 0x401) {
          if (&stack0x00000000 == &DAT_00000020) goto LAB_00fe1152;
          lpDestStr = (LPCWSTR)&stack0xffffffe8;
        }
        else {
          lpDestStr = _malloc(_Size);
          if (lpDestStr != (LPCWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPCWSTR)0x0) {
        iVar7 = LCMapStringW(param_2,param_3,local_10,cchWideChar,lpDestStr,uVar6);
        if (iVar7 != 0) {
          if (param_7 == 0) {
            param_7 = 0;
            param_6 = (LPSTR)0x0;
          }
          WideCharToMultiByte(param_8,0,lpDestStr,uVar6,param_6,param_7,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_7 != 0) && ((int)uVar6 <= param_7)) {
      LCMapStringW(param_2,param_3,local_10,cchWideChar,(LPWSTR)param_6,param_7);
    }
  }
LAB_00fe1152:
  __freea(local_10);
LAB_00fe115e:
  iVar7 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return iVar7;
}

// 00FE1170  ___crtLCMapStringA  size=70  [run]
/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2010 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    (&local_14,(ulong)_LocaleName,_DwMapFlag,_LpSrcStr,_CchSrc,_LpDestStr,_CchDest,
                     _Code_page,_BError);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}

// 00FE11BC  ___pctype_func  size=41  [run]
/* Library Function - Single Match
    ___pctype_func
   
   Library: Visual Studio 2010 Release */

ushort * __cdecl ___pctype_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_018e91b8) && ((p_Var1->_ownlocale & DAT_018e8f70) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return (ushort *)ptVar2[1].lc_category[0].locale;
}

// 00FE11E5  ___init_ctype  size=935  [run]
/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 2010 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  BYTE *pBVar1;
  byte bVar2;
  void *_Dst;
  int iVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  LONG LVar6;
  BYTE *pBVar7;
  BYTE *pBVar8;
  uint uVar9;
  localeinfo_struct local_50;
  wchar_t *local_48;
  LPWORD local_44;
  byte *local_40;
  int *local_3c;
  BYTE *local_38;
  wchar_t *local_34;
  undefined4 *local_30;
  void *local_2c;
  LPCSTR local_28;
  void *local_24;
  BYTE *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_30 = (undefined4 *)0x0;
  local_20 = (BYTE *)0x0;
  local_24 = (void *)0x0;
  local_2c = (void *)0x0;
  local_28 = (LPCSTR)0x0;
  local_50.locinfo = _LocInfo;
  local_50.mbcinfo = (pthreadmbcinfo)0x0;
  if (_LocInfo->lc_category[0].wlocale == (wchar_t *)0x0) {
    if ((LONG *)_LocInfo[1].lc_collate_cp != (LONG *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo[1].lc_collate_cp);
    }
    _LocInfo[1].lc_collate_cp = 0;
    _LocInfo[1].lc_time_cp = 0;
    _LocInfo[1].lc_category[0].locale = " ";
    _LocInfo[1].lc_category[0].wlocale = (wchar_t *)&DAT_016f4df8;
    _LocInfo[1].lc_category[0].refcount = (int *)&DAT_016f4f78;
    _LocInfo->locale_name[3] = (wchar_t *)0x1;
    goto LAB_00fe157d;
  }
  if ((_LocInfo->lc_codepage == 0) &&
     (iVar3 = ___getlocaleinfo(&local_50,0,
                               (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].locale,0x1004,
                               &_LocInfo->lc_codepage), iVar3 != 0)) {
LAB_00fe150e:
    _free(local_30);
    _free(local_20);
    _free(local_24);
    _free(local_2c);
  }
  else {
    local_30 = __malloc_crt(4);
    local_20 = __calloc_crt(0x180,2);
    local_24 = __calloc_crt(0x180,1);
    local_2c = __calloc_crt(0x180,1);
    local_28 = __calloc_crt(0x101,1);
    if ((local_30 == (undefined4 *)0x0) ||
       ((((local_20 == (BYTE *)0x0 || (local_28 == (LPCSTR)0x0)) || (local_24 == (void *)0x0)) ||
        (local_2c == (void *)0x0)))) goto LAB_00fe150e;
    *local_30 = 0;
    iVar3 = 0;
    do {
      local_28[iVar3] = (CHAR)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    BVar4 = GetCPInfo(_LocInfo->lc_codepage,&local_1c);
    if ((BVar4 == 0) || (5 < local_1c.MaxCharSize)) goto LAB_00fe150e;
    local_34 = (wchar_t *)(local_1c.MaxCharSize & 0xffff);
    if (((wchar_t *)0x1 < local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar5 = local_1c.LeadByte + 1;
      do {
        bVar2 = *pBVar5;
        if (bVar2 == 0) break;
        for (uVar9 = (uint)pBVar5[-1]; (int)uVar9 <= (int)(uint)bVar2; uVar9 = uVar9 + 1) {
          local_28[uVar9] = ' ';
          bVar2 = *pBVar5;
        }
        pBVar7 = pBVar5 + 1;
        pBVar5 = pBVar5 + 2;
      } while (*pBVar7 != 0);
    }
    local_44 = (LPWORD)(local_20 + 0x100);
    BVar4 = ___crtGetStringTypeA((_locale_t)0x0,1,local_28,0x100,local_44,_LocInfo->lc_codepage,0);
    if (((BVar4 == 0) ||
        (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x100,
                                    local_28 + 1,0xff,(LPSTR)((int)local_24 + 0x81),0xff,
                                    _LocInfo->lc_codepage,0), iVar3 == 0)) ||
       (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x200,
                                   local_28 + 1,0xff,(LPSTR)((int)local_2c + 0x81),0xff,
                                   _LocInfo->lc_codepage,0), pBVar5 = local_20, _Dst = local_24,
       iVar3 == 0)) goto LAB_00fe150e;
    local_40 = local_20 + 0xfe;
    local_40[0] = 0;
    local_40[1] = 0;
    local_48 = (wchar_t *)((int)local_24 + 0x80);
    *(undefined1 *)((int)local_24 + 0x7f) = 0;
    *(undefined1 *)((int)local_2c + 0x7f) = 0;
    *(undefined1 *)local_48 = 0;
    local_3c = (int *)((int)local_2c + 0x80);
    *(undefined1 *)local_3c = 0;
    pBVar7 = local_20;
    if ((1 < (int)local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar7 = local_1c.LeadByte + 1;
      do {
        if (*pBVar7 == 0) break;
        local_24 = (void *)(uint)pBVar7[-1];
        if (local_24 <= (void *)(uint)*pBVar7) {
          local_38 = local_20 + (int)local_24 * 2 + 0x100;
          do {
            local_24 = (void *)((int)local_24 + 1);
            local_38[0] = '\0';
            local_38[1] = 0x80;
            local_38 = local_38 + 2;
          } while ((int)local_24 <= (int)(uint)*pBVar7);
        }
        pBVar8 = pBVar7 + 2;
        pBVar1 = pBVar7 + 1;
        pBVar7 = pBVar8;
      } while (*pBVar1 != 0);
    }
    local_20 = pBVar7;
    FID_conflict__memcpy(pBVar5,pBVar5 + 0x200,0xfe);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 0x100),0x7f);
    FID_conflict__memcpy(local_2c,(void *)((int)local_2c + 0x100),0x7f);
    if (((LONG *)_LocInfo[1].lc_collate_cp != (LONG *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)_LocInfo[1].lc_collate_cp), LVar6 == 0)) {
      _free((void *)(_LocInfo[1].lc_time_cp - 0xfe));
      _free(_LocInfo[1].lc_category[0].wlocale + -0x40);
      _free(_LocInfo[1].lc_category[0].refcount + -0x20);
      _free((void *)_LocInfo[1].lc_collate_cp);
    }
    *local_30 = 1;
    _LocInfo[1].lc_collate_cp = (uint)local_30;
    _LocInfo[1].lc_category[0].locale = (char *)local_44;
    _LocInfo[1].lc_time_cp = (uint)local_40;
    _LocInfo[1].lc_category[0].wlocale = local_48;
    _LocInfo[1].lc_category[0].refcount = local_3c;
    _LocInfo->locale_name[3] = local_34;
  }
  _free(local_28);
LAB_00fe157d:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

// 00FE158C  ____mb_cur_max_func  size=41  [run]
/* Library Function - Single Match
    ____mb_cur_max_func
   
   Library: Visual Studio 2010 Release */

int __cdecl ____mb_cur_max_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_018e91b8) && ((p_Var1->_ownlocale & DAT_018e8f70) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return (int)ptVar2->locale_name[3];
}

// 00FE15B5  ____mb_cur_max_l_func  size=28  [run]
/* Library Function - Single Match
    ____mb_cur_max_l_func
   
   Library: Visual Studio 2010 Release */

int __cdecl ____mb_cur_max_l_func(_locale_t param_1)

{
  int iVar1;
  
  if (param_1 == (_locale_t)0x0) {
    iVar1 = ____mb_cur_max_func();
    return iVar1;
  }
  return (int)param_1->locinfo->locale_name[3];
}

// 00FE15D1  ____lc_codepage_func  size=38  [run]
/* Library Function - Single Match
    ____lc_codepage_func
   
   Library: Visual Studio 2010 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_018e91b8) && ((p_Var1->_ownlocale & DAT_018e8f70) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}

// 00FE161D  ____lc_handle_func  size=38  [run]
/* Library Function - Single Match
    ____lc_handle_func
   
   Library: Visual Studio 2010 Release */

uint * ____lc_handle_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_018e91b8) && ((p_Var1->_ownlocale & DAT_018e8f70) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return &ptVar2->lc_time_cp;
}

// 00FE1643  wait_a_bit  size=38  [run]
/* Library Function - Single Match
    _wait_a_bit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

uint __cdecl wait_a_bit(DWORD param_1)

{
  uint uVar1;
  
  Sleep(param_1);
  uVar1 = param_1 + 1000;
  if (DAT_01f8ef64 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// 00FE1669  FUN_00fe1669  size=21  [run]
undefined4 FUN_00fe1669(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_01f8ef64;
  DAT_01f8ef64 = param_1;
  return uVar1;
}

// 00FE167E  __malloc_crt  size=69  [run]
/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2010 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_01f8ef64 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_01f8ef64 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}

// 00FE16C3  __calloc_crt  size=76  [run]
/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2010 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = (void *)__calloc_impl(_Count,_Size,0);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_01f8ef64 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_01f8ef64 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}

// 00FE170F  __realloc_crt  size=78  [run]
/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2010 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = _realloc(_Ptr,_NewSize);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (void *)0x0;
    }
    if (DAT_01f8ef64 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_01f8ef64 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}

// 00FE175D  __recalloc_crt  size=82  [run]
/* Library Function - Single Match
    __recalloc_crt
   
   Library: Visual Studio 2010 Release */

void * __cdecl __recalloc_crt(void *_Ptr,size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = __recalloc(_Ptr,_Count,_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_Size == 0) {
      return (void *)0x0;
    }
    if (DAT_01f8ef64 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_01f8ef64 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}

// 00FE17AF  __get_errno_from_oserr  size=66  [run]
/* Library Function - Single Match
    __get_errno_from_oserr
   
   Library: Visual Studio 2010 Release */

int __cdecl __get_errno_from_oserr(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_018e8878)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x18e887c);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13 < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
}

// 00FE17F1  __errno  size=19  [run]
/* Library Function - Single Match
    __errno
   
   Library: Visual Studio 2010 Release */

int * __cdecl __errno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (int *)&DAT_018e89e0;
  }
  return &p_Var1->_terrno;
}

// 00FE1804  ___doserrno  size=19  [run]
/* Library Function - Single Match
    ___doserrno
   
   Library: Visual Studio 2010 Release */

ulong * __cdecl ___doserrno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return (ulong *)&DAT_018e89e4;
  }
  return &p_Var1->_tdoserrno;
}

// 00FE1817  __dosmaperr  size=35  [run]
/* Library Function - Single Match
    __dosmaperr
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = ___doserrno();
  *puVar1 = param_1;
  iVar2 = __get_errno_from_oserr(param_1);
  piVar3 = __errno();
  *piVar3 = iVar2;
  return;
}

// 00FE183A  FID_conflict:__set_doserrno  size=33  [run]
/* Library Function - Multiple Matches With Different Base Names
    __set_doserrno
    __set_errno
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl FID_conflict___set_doserrno(ulong _Value)

{
  _ptiddata p_Var1;
  ulong *puVar2;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return 0xc;
  }
  puVar2 = (ulong *)__errno();
  *puVar2 = _Value;
  return 0;
}

// 00FE185B  FUN_00fe185b  size=37  [run]
undefined4 FUN_00fe185b(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    FUN_00fe56c2();
    uVar2 = 0x16;
  }
  else {
    piVar1 = __errno();
    *param_1 = *piVar1;
    uVar2 = 0;
  }
  return uVar2;
}

// 00FE1880  FID_conflict:__set_doserrno  size=33  [run]
/* Library Function - Multiple Matches With Different Base Names
    __set_doserrno
    __set_errno
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl FID_conflict___set_doserrno(ulong _Value)

{
  _ptiddata p_Var1;
  ulong *puVar2;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return 0xc;
  }
  puVar2 = ___doserrno();
  *puVar2 = _Value;
  return 0;
}

// 00FE18A1  FUN_00fe18a1  size=37  [run]
undefined4 FUN_00fe18a1(ulong *param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  
  if (param_1 == (ulong *)0x0) {
    FUN_00fe56c2();
    uVar2 = 0x16;
  }
  else {
    puVar1 = ___doserrno();
    *param_1 = *puVar1;
    uVar2 = 0;
  }
  return uVar2;
}

// 00FE18C6  __EH_prolog3  size=51  [run]
/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __EH_prolog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_prolog3(int param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_1 = -param_1;
  *(undefined4 *)((int)auStack_1c + param_1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_1 + 4) = DAT_018e8764 ^ (uint)&stack0x00000004;
  *(undefined4 *)((int)auStack_1c + param_1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}

// 00FE18F9  __EH_prolog3_catch  size=54  [run]
/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_prolog3_catch(int param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_1 = -param_1;
  *(undefined4 *)((int)auStack_1c + param_1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_1 + 4) = DAT_018e8764 ^ (uint)&stack0x00000004;
  *(undefined4 *)((int)auStack_1c + param_1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}

// 00FE199E  __EH_epilog3  size=20  [run]
/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __EH_epilog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_epilog3(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-3];
  *unaff_EBP = unaff_retaddr;
  return;
}

// 00FE19DC  __copytlocinfo_nolock  size=38  [run]
/* Library Function - Single Match
    __copytlocinfo_nolock
   
   Library: Visual Studio 2010 Release */

void __fastcall __copytlocinfo_nolock(undefined4 *param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  if (((param_1 != (undefined4 *)0x0) && (in_EAX != (undefined4 *)0x0)) && (in_EAX != param_1)) {
    puVar2 = in_EAX;
    for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    *in_EAX = 0;
    ___addlocaleref();
  }
  return;
}

// 00FE1A02  __configthreadlocale  size=94  [run]
/* Library Function - Single Match
    __configthreadlocale
   
   Library: Visual Studio 2010 Release */

int __cdecl __configthreadlocale(int _Flag)

{
  uint uVar1;
  _ptiddata p_Var2;
  int *piVar3;
  uint uVar4;
  
  p_Var2 = __getptd();
  uVar1 = p_Var2->_ownlocale;
  if (_Flag == -1) {
    DAT_018e8f70 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        piVar3 = __errno();
        *piVar3 = 0x16;
        FUN_00fe56c2();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    p_Var2->_ownlocale = uVar4;
  }
  return ((uVar1 & 2) == 0) + 1;
}

// 00FE1A89  __free_locale  size=170  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __free_locale
   
   Library: Visual Studio 2010 Release */

void __cdecl __free_locale(_locale_t _Locale)

{
  pthreadlocinfo ptVar1;
  LONG LVar2;
  
  if (_Locale != (_locale_t)0x0) {
    __lock(0xd);
    if (_Locale->mbcinfo != (pthreadmbcinfo)0x0) {
      LVar2 = InterlockedDecrement(&_Locale->mbcinfo->refcount);
      if ((LVar2 == 0) && (_Locale->mbcinfo != (pthreadmbcinfo)&DAT_018e8a50)) {
        _free(_Locale->mbcinfo);
      }
    }
    FUN_00fe1b36();
    if (_Locale->locinfo != (pthreadlocinfo)0x0) {
      __lock(0xc);
      ___removelocaleref(_Locale->locinfo);
      ptVar1 = _Locale->locinfo;
      if (((ptVar1 != (pthreadlocinfo)0x0) && (ptVar1->refcount == 0)) &&
         (ptVar1 != (pthreadlocinfo)&DAT_018e90e0)) {
        ___freetlocinfo(ptVar1);
      }
      FUN_00fe1b42();
    }
    _Locale->locinfo = (pthreadlocinfo)0xbaadf00d;
    _Locale->mbcinfo = (pthreadmbcinfo)0xbaadf00d;
    _free(_Locale);
  }
  return;
}

// 00FE1B36  FUN_00fe1b36  size=9  [run]
void FUN_00fe1b36(void)

{
  FUN_00fec3c5(0xd);
  return;
}

// 00FE1B42  FUN_00fe1b42  size=9  [run]
void FUN_00fe1b42(void)

{
  FUN_00fec3c5(0xc);
  return;
}

// 00FE1B4B  FUN_00fe1b4b  size=11  [run]
void FUN_00fe1b4b(_locale_t param_1)

{
  __free_locale(param_1);
  return;
}

// 00FE1C0D  FUN_00fe1c0d  size=64  [run]
void FUN_00fe1c0d(char *param_1,rsize_t param_2,int param_3)

{
  errno_t eVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_3) {
    puVar2 = &param_3;
    do {
      puVar2 = puVar2 + 1;
      eVar1 = _strcat_s(param_1,param_2,(char *)*puVar2);
      if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return;
}

// 00FE1C4E  ___lc_strtolc  size=287  [run]
/* Library Function - Single Match
    ___lc_strtolc
   
   Library: Visual Studio 2010 Release */

undefined4 ___lc_strtolc(char *param_1,char *param_2)

{
  char cVar1;
  errno_t eVar2;
  uint _MaxCount;
  char *_Dst;
  char *_Str;
  rsize_t _SizeInBytes;
  
  _Str = param_2;
  _memset(param_1,0,0x90);
  if (*param_2 == '\0') {
    return 0;
  }
  if ((*param_2 == '.') && (param_2[1] != '\0')) {
    eVar2 = _strncpy_s(param_1 + 0x80,0x10,param_2 + 1,0xf);
    if (eVar2 == 0) {
      param_1[0x8f] = '\0';
      return 0;
    }
  }
  else {
    param_2 = (char *)0x0;
    _MaxCount = _strcspn(_Str,"_.,");
    while( true ) {
      if (_MaxCount == 0) {
        return 0xffffffff;
      }
      cVar1 = _Str[_MaxCount];
      if (param_2 == (char *)0x0) {
        if (0x3f < _MaxCount) {
          return 0xffffffff;
        }
        if (cVar1 == '.') {
          return 0xffffffff;
        }
        _SizeInBytes = 0x40;
        _Dst = param_1;
      }
      else if (param_2 == (char *)0x1) {
        if (0x3f < _MaxCount) {
          return 0xffffffff;
        }
        if (cVar1 == '_') {
          return 0xffffffff;
        }
        _SizeInBytes = 0x40;
        _Dst = param_1 + 0x40;
      }
      else {
        if (param_2 != (char *)0x2) {
          return 0xffffffff;
        }
        if (0xf < _MaxCount) {
          return 0xffffffff;
        }
        if ((cVar1 != '\0') && (cVar1 != ',')) {
          return 0xffffffff;
        }
        _SizeInBytes = 0x10;
        _Dst = param_1 + 0x80;
      }
      eVar2 = _strncpy_s(_Dst,_SizeInBytes,_Str,_MaxCount);
      if (eVar2 != 0) break;
      if (cVar1 == ',') {
        return 0;
      }
      if (cVar1 == '\0') {
        return 0;
      }
      param_2 = (char *)((int)param_2 + 1);
      _Str = _Str + _MaxCount + 1;
      _MaxCount = _strcspn(_Str,"_.,");
    }
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// 00FE1D6D  FUN_00fe1d6d  size=106  [run]
void FUN_00fe1d6d(char *param_1,rsize_t param_2,char *param_3)

{
  errno_t eVar1;
  
  eVar1 = _strcpy_s(param_1,param_2,param_3);
  if (eVar1 == 0) {
    if (param_3[0x40] != '\0') {
      FUN_00fe1c0d(param_1,param_2,2,&DAT_0165c24c,param_3 + 0x40);
    }
    if (param_3[0x80] != '\0') {
      FUN_00fe1c0d(param_1,param_2,2,&DAT_01656d18,param_3 + 0x80);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

// 00FE1DD8  __setlocale_get_all  size=357  [run]
/* Library Function - Single Match
    __setlocale_get_all
   
   Library: Visual Studio 2010 Release */

char * __setlocale_get_all(void)

{
  undefined4 *puVar1;
  bool bVar2;
  char *_Memory;
  errno_t eVar3;
  int iVar4;
  LONG LVar5;
  char *_Dst;
  int unaff_ESI;
  undefined4 *local_c;
  undefined **local_8;
  
  bVar2 = true;
  _Memory = __malloc_crt(0x355);
  _Dst = _Memory;
  if (_Memory != (char *)0x0) {
    _Dst = _Memory + 4;
    *_Dst = '\0';
    _Memory[0] = '\x01';
    _Memory[1] = '\0';
    _Memory[2] = '\0';
    _Memory[3] = '\0';
    FUN_00fe1c0d(_Dst,0x351,3,"LC_COLLATE",&DAT_016cc434,*(undefined4 *)(unaff_ESI + 0x58));
    local_8 = &PTR_s_LC_COLLATE_016f50c4;
    local_c = (undefined4 *)(unaff_ESI + 0x58);
    do {
      eVar3 = _strcat_s(_Dst,0x351,";");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar1 = local_c + 4;
      iVar4 = _strcmp((char *)*local_c,(char *)*puVar1);
      if (iVar4 != 0) {
        bVar2 = false;
      }
      local_8 = local_8 + 3;
      FUN_00fe1c0d(_Dst,0x351,3,*local_8,&DAT_016cc434,*puVar1);
      local_c = puVar1;
    } while ((int)local_8 < 0x16f50f4);
    if (bVar2) {
      _free(_Memory);
      if ((*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) &&
         (LVar5 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50)), LVar5 == 0)) {
        _free(*(void **)(unaff_ESI + 0x50));
      }
      if ((*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) &&
         (LVar5 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54)), LVar5 == 0)) {
        _free(*(void **)(unaff_ESI + 0x54));
      }
      _Dst = *(char **)(unaff_ESI + 0x68);
      *(undefined4 *)(unaff_ESI + 0x54) = 0;
      *(undefined4 *)(unaff_ESI + 0x4c) = 0;
      *(undefined4 *)(unaff_ESI + 0x50) = 0;
      *(undefined4 *)(unaff_ESI + 0x48) = 0;
    }
    else {
      if ((*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) &&
         (LVar5 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50)), LVar5 == 0)) {
        _free(*(void **)(unaff_ESI + 0x50));
      }
      if ((*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) &&
         (LVar5 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54)), LVar5 == 0)) {
        _free(*(void **)(unaff_ESI + 0x54));
      }
      *(undefined4 *)(unaff_ESI + 0x54) = 0;
      *(undefined4 *)(unaff_ESI + 0x4c) = 0;
      *(char **)(unaff_ESI + 0x50) = _Memory;
      *(char **)(unaff_ESI + 0x48) = _Dst;
    }
  }
  return _Dst;
}

// 00FE1F3D  __expandlocale  size=545  [run]
/* Library Function - Single Match
    __expandlocale
   
   Library: Visual Studio 2010 Release */

void __expandlocale(char *param_1,char *param_2,rsize_t param_3,undefined2 *param_4,
                   undefined4 *param_5)

{
  wchar_t *_Src;
  wchar_t *_Str1;
  wchar_t *_LpCodePage;
  _ptiddata p_Var1;
  char *_Str1_00;
  errno_t eVar2;
  size_t sVar3;
  int iVar4;
  BOOL BVar5;
  undefined1 local_98 [144];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  p_Var1 = __getptd();
  _Src = (p_Var1->_setloc_data)._cachein + 6;
  _Str1 = (p_Var1->_setloc_data)._cachein + 8;
  _LpCodePage = (p_Var1->_setloc_data)._cachein + 2;
  _Str1_00 = (char *)((int)(p_Var1->_setloc_data)._cachein + 0x93);
  if (((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (param_3 != 0)) {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      eVar2 = _strcpy_s(param_2,param_3,"C");
      if (eVar2 != 0) goto LAB_00fe2013;
      if (param_4 != (undefined2 *)0x0) {
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
    }
    else {
      sVar3 = _strlen(param_1);
      if ((0x82 < sVar3) ||
         ((iVar4 = _strcmp(_Str1_00,param_1), iVar4 != 0 &&
          (iVar4 = _strcmp((char *)_Str1,param_1), iVar4 != 0)))) {
        iVar4 = ___lc_strtolc(local_98,param_1);
        if ((iVar4 != 0) ||
           (BVar5 = ___get_qualified_locale
                              ((LPLC_STRINGS)local_98,(UINT *)_LpCodePage,(LPLC_STRINGS)local_98),
           BVar5 == 0)) goto LAB_00fe214f;
        *(uint *)_Src = (uint)(ushort)(p_Var1->_setloc_data)._cachein[4];
        FUN_00fe1d6d(_Str1_00,0x83,local_98);
        if ((*param_1 == '\0') || (0x82 < sVar3)) {
          sVar3 = 0;
          param_1 = "";
        }
        eVar2 = _strncpy_s((char *)_Str1,0x83,param_1,sVar3 + 1);
        if (eVar2 != 0) goto LAB_00fe2013;
      }
      if (param_4 != (undefined2 *)0x0) {
        FID_conflict__memcpy(param_4,_LpCodePage,6);
      }
      if (param_5 != (undefined4 *)0x0) {
        FID_conflict__memcpy(param_5,_Src,4);
      }
      eVar2 = _strcpy_s(param_2,param_3,_Str1_00);
      if (eVar2 != 0) {
LAB_00fe2013:
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
LAB_00fe214f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE215E  FUN_00fe215e  size=825  [run]
void __thiscall FUN_00fe215e(int param_1,undefined *param_2)

{
  void *pvVar1;
  _ptiddata p_Var2;
  int iVar3;
  errno_t eVar4;
  wchar_t *pwVar5;
  BOOL BVar6;
  uint uVar7;
  LONG LVar8;
  int iVar9;
  int unaff_ESI;
  undefined1 local_1cc [8];
  int local_1c4;
  uint local_1bc;
  undefined4 local_1b8;
  ushort local_1b4 [4];
  uint *local_1ac;
  undefined4 local_1a8 [2];
  void *local_1a0;
  undefined *local_19c;
  undefined4 *local_198;
  int local_194;
  size_t local_190;
  WORD local_18c [128];
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_19c = param_2;
  local_194 = param_1;
  p_Var2 = __getptd();
  iVar3 = __expandlocale(local_19c,local_8c,0x83,local_1b4,local_1a8,param_1);
  if (iVar3 != 0) {
    iVar9 = param_1 * 0x10 + unaff_ESI;
    iVar3 = _strcmp(local_8c,*(char **)(iVar9 + 0x48));
    if (iVar3 != 0) {
      local_190 = _strlen(local_8c);
      local_190 = local_190 + 5;
      local_198 = __malloc_crt(local_190);
      if (local_198 != (undefined4 *)0x0) {
        local_19c = *(undefined **)(iVar9 + 0x48);
        local_1ac = (uint *)(unaff_ESI + 0xc + local_194 * 4);
        local_1bc = *local_1ac;
        local_1a0 = (void *)((local_194 + 6) * 6 + unaff_ESI);
        FID_conflict__memcpy(local_1cc,local_1a0,6);
        local_1b8 = *(undefined4 *)(unaff_ESI + 4);
        eVar4 = _strcpy_s((char *)(local_198 + 1),local_190 - 4,local_8c);
        if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined4 **)(iVar9 + 0x48) = local_198 + 1;
        *local_1ac = (uint)local_1b4[0];
        FID_conflict__memcpy(local_1a0,local_1b4,6);
        if (local_194 == 2) {
          local_190 = 0;
          *(undefined4 *)(unaff_ESI + 4) = local_1a8[0];
          pwVar5 = (p_Var2->_setloc_data)._cacheout + 9;
          iVar3 = *(int *)((p_Var2->_setloc_data)._cacheout + 0x19);
          local_1a0 = *(void **)((p_Var2->_setloc_data)._cacheout + 0x1b);
          do {
            if (*(int *)(unaff_ESI + 4) == *(int *)pwVar5) {
              if (local_190 != 0) {
                pwVar5 = (p_Var2->_setloc_data)._cacheout + local_190 * 4 + 9;
                *(int *)((p_Var2->_setloc_data)._cacheout + 9) = *(int *)pwVar5;
                *(int *)((p_Var2->_setloc_data)._cacheout + 0xb) = *(int *)(pwVar5 + 2);
                *(int *)pwVar5 = iVar3;
                *(void **)(pwVar5 + 2) = local_1a0;
              }
              break;
            }
            local_1c4 = *(int *)pwVar5;
            local_190 = local_190 + 1;
            *(int *)pwVar5 = iVar3;
            pvVar1 = *(void **)(pwVar5 + 2);
            *(void **)(pwVar5 + 2) = local_1a0;
            pwVar5 = pwVar5 + 4;
            iVar3 = local_1c4;
            local_1a0 = pvVar1;
          } while ((int)local_190 < 5);
          if (local_190 == 5) {
            BVar6 = ___crtGetStringTypeA
                              ((_locale_t)0x0,1,
                               "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                               ,0x7f,local_18c,*(int *)(unaff_ESI + 4),*(BOOL *)(unaff_ESI + 0x14));
            if (BVar6 == 0) {
              (p_Var2->_setloc_data)._cacheout[0xb] = L'\0';
              (p_Var2->_setloc_data)._cacheout[0xc] = L'\0';
            }
            else {
              uVar7 = 0;
              do {
                local_18c[uVar7] = local_18c[uVar7] & 0x1ff;
                uVar7 = uVar7 + 1;
              } while (uVar7 < 0x7f);
              iVar3 = _memcmp(local_18c,PTR_DAT_018e89e8,0xfe);
              *(uint *)((p_Var2->_setloc_data)._cacheout + 0xb) = (uint)(iVar3 == 0);
            }
            *(undefined4 *)((p_Var2->_setloc_data)._cacheout + 9) = *(undefined4 *)(unaff_ESI + 4);
          }
          *(undefined4 *)(unaff_ESI + 0xa8) =
               *(undefined4 *)((p_Var2->_setloc_data)._cacheout + 0xb);
        }
        if (local_194 == 1) {
          *(undefined4 *)(unaff_ESI + 8) = local_1a8[0];
        }
        iVar3 = (**(code **)(&DAT_016f50c0 + local_194 * 0xc))();
        if (iVar3 == 0) {
          if (local_19c != &DAT_018e8f74) {
            iVar3 = local_194 + 5;
            LVar8 = InterlockedDecrement(*(LONG **)(unaff_ESI + iVar3 * 0x10));
            if (LVar8 == 0) {
              _free(*(void **)(unaff_ESI + iVar3 * 0x10));
              _free(*(void **)(iVar9 + 0x54));
              *(undefined4 *)(iVar9 + 0x4c) = 0;
            }
          }
          *local_198 = 1;
          *(undefined4 **)(unaff_ESI + (local_194 + 5) * 0x10) = local_198;
        }
        else {
          *(undefined **)(iVar9 + 0x48) = local_19c;
          _free(local_198);
          *local_1ac = local_1bc;
          *(undefined4 *)(unaff_ESI + 4) = local_1b8;
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE2498  __setlocale_nolock  size=540  [run]
/* Library Function - Single Match
    __setlocale_nolock
   
   Library: Visual Studio 2010 Release */

void __fastcall __setlocale_nolock(int param_1,int param_2,char *param_3)

{
  bool bVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  errno_t eVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  int local_98;
  int local_90;
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  iVar7 = 0;
  if (param_1 != 0) {
    if (param_3 != (char *)0x0) {
      FUN_00fe215e(param_3);
    }
    goto LAB_00fe26a5;
  }
  bVar1 = true;
  local_90 = 0;
  if (param_3 != (char *)0x0) {
    if (((*param_3 == 'L') && (param_3[1] == 'C')) && (param_3[2] == '_')) {
      do {
        pcVar2 = _strpbrk(param_3,"=;");
        if (((pcVar2 == (char *)0x0) || (sVar3 = (int)pcVar2 - (int)param_3, sVar3 == 0)) ||
           (*pcVar2 == ';')) goto LAB_00fe26a5;
        local_98 = 1;
        ppuVar8 = &PTR_s_LC_COLLATE_016f50c4;
        do {
          iVar7 = _strncmp(*ppuVar8,param_3,sVar3);
          if ((iVar7 == 0) && (sVar4 = _strlen(*ppuVar8), sVar3 == sVar4)) break;
          local_98 = local_98 + 1;
          ppuVar8 = ppuVar8 + 3;
        } while ((int)ppuVar8 < 0x16f50f5);
        pcVar2 = pcVar2 + 1;
        sVar3 = _strcspn(pcVar2,";");
        if ((sVar3 == 0) && (*pcVar2 != ';')) goto LAB_00fe26a5;
        if (local_98 < 6) {
          eVar5 = _strncpy_s(local_8c,0x83,pcVar2,sVar3);
          if (eVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          local_8c[sVar3] = '\0';
          iVar7 = FUN_00fe215e(local_8c);
          if (iVar7 != 0) {
            local_90 = local_90 + 1;
          }
        }
      } while ((pcVar2[sVar3] != '\0') && (param_3 = pcVar2 + sVar3 + 1, *param_3 != '\0'));
    }
    else {
      iVar6 = __expandlocale(param_3,local_8c,0x83,0,0,0);
      if (iVar6 == 0) goto LAB_00fe26a5;
      puVar9 = (undefined4 *)(param_2 + 0x48);
      do {
        if (iVar7 != 0) {
          iVar6 = _strcmp(local_8c,(char *)*puVar9);
          if ((iVar6 == 0) || (iVar6 = FUN_00fe215e(local_8c), iVar6 != 0)) {
            local_90 = local_90 + 1;
          }
          else {
            bVar1 = false;
          }
        }
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 4;
      } while (iVar7 < 6);
      if (bVar1) goto LAB_00fe26a0;
    }
    if (local_90 == 0) goto LAB_00fe26a5;
  }
LAB_00fe26a0:
  __setlocale_get_all();
LAB_00fe26a5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FE26B4  __create_locale  size=245  [run]
/* Library Function - Single Match
    __create_locale
   
   Library: Visual Studio 2010 Release */

_locale_t __cdecl __create_locale(int _Category,char *_Locale)

{
  _locale_t _Memory;
  int *piVar1;
  pthreadlocinfo ptVar2;
  pthreadmbcinfo ptVar3;
  int iVar4;
  
  if (((uint)_Category < 6) && (_Locale != (char *)0x0)) {
    _Memory = __calloc_crt(8,1);
    if (_Memory != (_locale_t)0x0) {
      ptVar2 = __calloc_crt(0xd8,1);
      _Memory->locinfo = ptVar2;
      if (ptVar2 == (pthreadlocinfo)0x0) {
        _free(_Memory);
      }
      else {
        ptVar3 = __calloc_crt(0x220,1);
        _Memory->mbcinfo = ptVar3;
        if (ptVar3 != (pthreadmbcinfo)0x0) {
          __copytlocinfo_nolock();
          iVar4 = __setlocale_nolock(_Locale);
          if (iVar4 == 0) {
            ___removelocaleref(_Memory->locinfo);
            ___freetlocinfo(_Memory->locinfo);
            _free(_Memory);
          }
          else {
            iVar4 = __setmbcp_nolock(_Memory->locinfo->lc_codepage,_Memory->mbcinfo);
            if (iVar4 == 0) {
              _Memory->mbcinfo->refcount = 1;
              _Memory->mbcinfo->refcount = 1;
              return _Memory;
            }
            _free(_Memory->mbcinfo);
            ___removelocaleref(_Memory->locinfo);
            ___freetlocinfo(_Memory->locinfo);
            _free(_Memory);
          }
          return (_locale_t)0x0;
        }
        _free(_Memory->locinfo);
        _free(_Memory);
      }
    }
    piVar1 = __errno();
    *piVar1 = 0xc;
  }
  return (_locale_t)0x0;
}

// 00FE27A9  FUN_00fe27a9  size=11  [run]
void FUN_00fe27a9(int param_1,char *param_2)

{
  __create_locale(param_1,param_2);
  return;
}

// 00FE27B4  _setlocale  size=332  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _setlocale
   
   Library: Visual Studio 2010 Release */

char * __cdecl _setlocale(int _Category,char *_Locale)

{
  int *piVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  char *local_24;
  
  local_24 = (char *)0x0;
  if ((uint)_Category < 6) {
    p_Var2 = __getptd();
    ___updatetlocinfo();
    p_Var2->_ownlocale = p_Var2->_ownlocale | 0x10;
    pvVar3 = __calloc_crt(0xd8,1);
    if (pvVar3 != (void *)0x0) {
      __lock(0xc);
      __copytlocinfo_nolock();
      FUN_00fe28e6();
      local_24 = (char *)__setlocale_nolock(_Locale);
      if (local_24 == (char *)0x0) {
        ___removelocaleref(pvVar3);
        ___freetlocinfo(pvVar3);
      }
      else {
        if (_Locale != (char *)0x0) {
          iVar4 = _strcmp(_Locale,&DAT_018e8f74);
          if (iVar4 != 0) {
            DAT_01f8ef68 = 1;
          }
        }
        __lock(0xc);
        __updatetlocinfoEx_nolock(&p_Var2->ptlocinfo,pvVar3);
        ___removelocaleref(pvVar3);
        if (((p_Var2->_ownlocale & 2) == 0) && (((byte)DAT_018e8f70 & 1) == 0)) {
          __updatetlocinfoEx_nolock(&PTR_DAT_018e91b8,p_Var2->ptlocinfo);
          PTR_PTR_018e8850 = *(undefined **)(PTR_DAT_018e91b8 + 0xbc);
          PTR_DAT_018e8870 = *(undefined **)(PTR_DAT_018e91b8 + 200);
          _DAT_018e95e0 = *(undefined4 *)(PTR_DAT_018e91b8 + 0xac);
        }
        FUN_00fe28f2();
      }
    }
    FUN_00fe2923();
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_00fe56c2();
    local_24 = (char *)0x0;
  }
  return local_24;
}

// 00FE28E6  FUN_00fe28e6  size=9  [run]
void FUN_00fe28e6(void)

{
  FUN_00fec3c5(0xc);
  return;
}

// 00FE28F2  FUN_00fe28f2  size=9  [run]
void FUN_00fe28f2(void)

{
  FUN_00fec3c5(0xc);
  return;
}

// 00FE2923  FUN_00fe2923  size=5  [run]
void FUN_00fe2923(void)

{
  int unaff_ESI;
  
  *(uint *)(unaff_ESI + 0x70) = *(uint *)(unaff_ESI + 0x70) & 0xffffffef;
  return;
}

// 00FE2928  __heap_alloc  size=63  [run]
/* Library Function - Single Match
    __heap_alloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl __heap_alloc(size_t _Size)

{
  LPVOID pvVar1;
  
  if (DAT_01f8f878 == (HANDLE)0x0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  if (_Size == 0) {
    _Size = 1;
  }
  pvVar1 = HeapAlloc(DAT_01f8f878,0,_Size);
  return pvVar1;
}

// 00FE2967  _malloc  size=148  [run]
/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2010 Release */

void * __cdecl _malloc(size_t _Size)

{
  SIZE_T dwBytes;
  LPVOID pvVar1;
  int iVar2;
  int *piVar3;
  
  if (_Size < 0xffffffe1) {
    do {
      if (DAT_01f8f878 == (HANDLE)0x0) {
        __FF_MSGBANNER();
        __NMSG_WRITE(0x1e);
        ___crtExitProcess(0xff);
      }
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
      pvVar1 = HeapAlloc(DAT_01f8f878,0,dwBytes);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
      if (DAT_01f8fba8 == 0) {
        piVar3 = __errno();
        *piVar3 = 0xc;
        break;
      }
      iVar2 = __callnewh(_Size);
    } while (iVar2 != 0);
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  else {
    __callnewh(_Size);
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  return (void *)0x0;
}

// 00FE2A00  _strlen  size=139  [run]
/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_00fe2a30;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_00fe2a63:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_00fe2a30:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_00fe2a63;
}

