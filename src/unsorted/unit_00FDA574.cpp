// src/unsorted/unit_00FDA574.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDA574..00FDA77E, 5 functions

#include "mgrr.h"

// 00FDA574  __Tolower  size=269  [run]
/* Library Function - Single Match
    __Tolower
   
   Library: Visual Studio 2010 Release */

int __cdecl __Tolower(int param_1,_Ctypevec *param_2)

{
  _Ctypevec *p_Var1;
  int iVar2;
  short *_Code_page;
  ushort *puVar3;
  uint uVar4;
  LPCWSTR local_10;
  undefined1 local_c;
  byte local_8;
  undefined1 local_7;
  
  p_Var1 = param_2;
  if (param_2 == (_Ctypevec *)0x0) {
    iVar2 = ____lc_handle_func();
    local_10 = *(LPCWSTR *)(iVar2 + 8);
    _Code_page = (short *)____lc_codepage_func();
  }
  else {
    local_10 = (LPCWSTR)param_2->_Page;
    _Code_page = param_2->_Table;
  }
  if (local_10 == (LPCWSTR)0x0) {
    if (0x19 < param_1 - 0x41U) {
      return param_1;
    }
    return param_1 + 0x20;
  }
  if ((uint)param_1 < 0x100) {
    if (p_Var1 != (_Ctypevec *)0x0) {
      if ((*(byte *)(p_Var1->_Delfl + param_1 * 2) & 1) == 0) {
        return param_1;
      }
      goto LAB_00fda5e9;
    }
    iVar2 = _isupper(param_1);
    if (iVar2 == 0) {
      return param_1;
    }
  }
  else {
LAB_00fda5e9:
    if (p_Var1 != (_Ctypevec *)0x0) {
      uVar4 = (uint)(int)*(short *)(p_Var1->_Delfl + (param_1 >> 8 & 0xffU) * 2) >> 0xf & 1;
      goto LAB_00fda624;
    }
  }
  puVar3 = ___pctype_func();
  uVar4 = puVar3[param_1 >> 8 & 0xff] & 0x8000;
LAB_00fda624:
  p_Var1 = param_2;
  if (uVar4 == 0) {
    param_2._0_2_ = (ushort)(byte)param_1;
    iVar2 = 1;
  }
  else {
    local_c = (undefined1)((uint)param_1 >> 8);
    param_2._0_2_ = CONCAT11((byte)param_1,local_c);
    param_2._3_1_ = SUB41(p_Var1,3);
    param_2._0_3_ = (uint3)(ushort)param_2;
    iVar2 = 2;
  }
  iVar2 = ___crtLCMapStringA((_locale_t)0x0,local_10,0x100,(LPCSTR)&param_2,iVar2,(LPSTR)&local_8,3,
                             (int)_Code_page,1);
  if ((iVar2 != 0) && (param_1 = (int)local_8, iVar2 != 1)) {
    param_1 = (int)CONCAT11(local_8,local_7);
  }
  return param_1;
}

// 00FDA681  __Getctype  size=96  [run]
/* Library Function - Single Match
    __Getctype
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

_Ctypevec * __cdecl __Getctype(_Ctypevec *__return_storage_ptr__)

{
  int iVar1;
  short *psVar2;
  void *pvVar3;
  ushort *puVar4;
  size_t _Size;
  
  iVar1 = ____lc_handle_func();
  __return_storage_ptr__->_Page = *(uint *)(iVar1 + 4);
  psVar2 = (short *)____lc_codepage_func();
  __return_storage_ptr__->_Table = psVar2;
  pvVar3 = __calloc_crt(0x100,2);
  __return_storage_ptr__->_Delfl = (int)pvVar3;
  if (pvVar3 == (void *)0x0) {
    puVar4 = ___pctype_func();
    __return_storage_ptr__->_LocaleName = (wchar_t *)0x0;
    __return_storage_ptr__->_Delfl = (int)puVar4;
  }
  else {
    _Size = 0x200;
    puVar4 = ___pctype_func();
    FID_conflict__memcpy((void *)__return_storage_ptr__->_Delfl,puVar4,_Size);
    __return_storage_ptr__->_LocaleName = (wchar_t *)0x1;
  }
  return __return_storage_ptr__;
}

// 00FDA6E1  __Wcrtomb  size=135  [run]
/* Library Function - Single Match
    __Wcrtomb
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __Wcrtomb(char *param_1,wchar_t param_2,mbstate_t *param_3,_Cvtvec *param_4)

{
  int iVar1;
  uint CodePage;
  _locale_t plVar2;
  int *piVar3;
  uint uVar4;
  LPCSTR lpDefaultChar;
  _Cvtvec **lpUsedDefaultChar;
  
  if (param_4 == (_Cvtvec *)0x0) {
    iVar1 = ____lc_handle_func();
    uVar4 = *(uint *)(iVar1 + 8);
    CodePage = ____lc_codepage_func();
  }
  else {
    uVar4 = param_4->_Page;
    CodePage = param_4->_Mbcurmax;
  }
  if (uVar4 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (char)param_2;
      return 1;
    }
  }
  else {
    param_4 = (_Cvtvec *)0x0;
    plVar2 = __GetLocaleForCP(CodePage);
    lpUsedDefaultChar = &param_4;
    lpDefaultChar = (LPCSTR)0x0;
    iVar1 = ____mb_cur_max_l_func(plVar2);
    iVar1 = WideCharToMultiByte(CodePage,0,&param_2,1,param_1,iVar1,lpDefaultChar,
                                (LPBOOL)lpUsedDefaultChar);
    if ((iVar1 != 0) && (param_4 == (_Cvtvec *)0x0)) {
      return iVar1;
    }
  }
  piVar3 = __errno();
  *piVar3 = 0x2a;
  return -1;
}

// 00FDA768  __Getcoll  size=22  [run]
/* Library Function - Single Match
    __Getcoll
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2010 Release */

_Collvec __cdecl __Getcoll(void)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  _Collvec _Var4;
  
  iVar2 = ____lc_handle_func();
  uVar1 = *(uint *)(iVar2 + 8);
  pwVar3 = (wchar_t *)____lc_codepage_func();
  _Var4._LocaleName = pwVar3;
  _Var4._Page = uVar1;
  return _Var4;
}

// 00FDA77E  FUN_00fda77e  size=11  [run]
void FUN_00fda77e(char *param_1,wchar_t param_2,mbstate_t *param_3,_Cvtvec *param_4)

{
  __Wcrtomb(param_1,param_2,param_3,param_4);
  return;
}

