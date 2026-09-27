// lib/msvc/stl/unit_00FDAB22.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDAB22..00FDAD3D, 9 functions

#include "types.h"

// 00FDAB22  std::_Locinfo::_Locinfo_dtor  size=27  [run]
/* Library Function - Single Match
    public: static void __cdecl std::_Locinfo::_Locinfo_dtor(class std::_Locinfo *)
   
   Library: Visual Studio 2010 Release */

void __cdecl std::_Locinfo::_Locinfo_dtor(_Locinfo *param_1)

{
  if (*(char **)(param_1 + 0x14) != (char *)0x0) {
    _setlocale(0,*(char **)(param_1 + 0x14));
  }
  return;
}

// 00FDAB3D  std::_Yarn<char>::operator=  size=88  [run]
/* Library Function - Single Match
    public: class std::_Yarn<char> & __thiscall std::_Yarn<char>::operator=(char const *)
   
   Library: Visual Studio 2010 Release */

_Yarn<char> * __thiscall std::_Yarn<char>::operator=(_Yarn<char> *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  void *_Dst;
  
  pcVar2 = *(char **)this;
  if (pcVar2 != param_1) {
    if (pcVar2 != (char *)0x0) {
      _free(pcVar2);
    }
    *(undefined4 *)this = 0;
    if (param_1 != (char *)0x0) {
      cVar1 = *param_1;
      pcVar2 = param_1;
      while (cVar1 != '\0') {
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
      }
      _Dst = _malloc((size_t)(pcVar2 + (1 - (int)param_1)));
      *(void **)this = _Dst;
      if (_Dst != (void *)0x0) {
        FID_conflict__memcpy(_Dst,param_1,(size_t)(pcVar2 + (1 - (int)param_1)));
      }
    }
  }
  return this;
}

// 00FDAB95  std::_Locinfo::_Locinfo_ctor  size=77  [run]
/* Library Function - Single Match
    public: static void __cdecl std::_Locinfo::_Locinfo_ctor(class std::_Locinfo *,char const *)
   
   Library: Visual Studio 2010 Release */

void __cdecl std::_Locinfo::_Locinfo_ctor(_Locinfo *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = _setlocale(0,(char *)0x0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  _Yarn<char>::operator=((_Yarn<char> *)(param_1 + 0x14),pcVar1);
  if (param_2 != (char *)0x0) {
    pcVar1 = _setlocale(0,param_2);
    if (pcVar1 != (char *)0x0) goto LAB_00fdabd6;
  }
  pcVar1 = "*";
LAB_00fdabd6:
  _Yarn<char>::operator=((_Yarn<char> *)(param_1 + 0x1c),pcVar1);
  return;
}

// 00FDABE2  std::_Yarn<char>::_Yarn<char>  size=30  [run]
/* Library Function - Single Match
    public: __thiscall std::_Yarn<char>::_Yarn<char>(char const *)
   
   Library: Visual Studio 2010 Release */

_Yarn<char> * __thiscall std::_Yarn<char>::_Yarn<char>(_Yarn<char> *this,char *param_1)

{
  *(undefined4 *)this = 0;
  this[4] = (_Yarn<char>)0x0;
  operator=(this,param_1);
  return this;
}

// 00FDAC00  std::locale::_Locimp::_Locimp  size=63  [run]
/* Library Function - Single Match
    private: __thiscall std::locale::_Locimp::_Locimp(bool)
   
   Library: Visual Studio 2010 Release */

_Locimp * __thiscall std::locale::_Locimp::_Locimp(_Locimp *this,bool param_1)

{
  this[0x14] = (_Locimp)param_1;
  *(undefined4 *)(this + 4) = 1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (_Locimp)0x0;
  _Yarn<char>::operator=((_Yarn<char> *)(this + 0x18),"*");
  return this;
}

// 00FDAC3F  std::locale::_Locimp::~_Locimp  size=67  [run]
/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual __thiscall std::locale::_Locimp::~_Locimp(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall std::locale::_Locimp::~_Locimp(_Locimp *this)

{
  *(undefined ***)this = vftable;
  _Locimp_dtor(this);
  if (*(void **)(this + 0x18) != (void *)0x0) {
    _free(*(void **)(this + 0x18));
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = facet::vftable;
  return;
}

// 00FDAC82  std::locale::_Locimp::`scalar_deleting_destructor'  size=33  [run]
/* Library Function - Single Match
    protected: virtual void * __thiscall std::locale::_Locimp::`scalar deleting destructor'(unsigned
   int)
   
   Library: Visual Studio 2010 Release */

void * __thiscall std::locale::_Locimp::_scalar_deleting_destructor_(_Locimp *this,uint param_1)

{
  ~_Locimp(this);
  if ((param_1 & 1) != 0) {
    FUN_00dd4920(this);
  }
  return this;
}

// 00FDACA3  std::locale::_Init  size=143  [run]
/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    private: static class std::locale::_Locimp * __cdecl std::locale::_Init(void)
   
   Library: Visual Studio 2010 Release */

_Locimp * __cdecl std::locale::_Init(void)

{
  _Locimp *p_Var1;
  _Locimp *p_Var2;
  _Lockit local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0xfdacaf;
  p_Var2 = (_Locimp *)0x0;
  p_Var1 = DAT_01f8eda0;
  if (DAT_01f8eda0 == (_Locimp *)0x0) {
    _Lockit::_Lockit(local_14,0);
    local_8 = 0;
    p_Var1 = DAT_01f8eda0;
    if (DAT_01f8eda0 == (_Locimp *)0x0) {
      p_Var1 = (_Locimp *)FUN_00dd34e0(0x20);
      if (p_Var1 != (_Locimp *)0x0) {
        p_Var2 = (_Locimp *)_Locimp::_Locimp(p_Var1,false);
      }
      _Setgloballocale(p_Var2);
      *(undefined4 *)(p_Var2 + 0x10) = 0x3f;
      _Yarn<char>::operator=((_Yarn<char> *)(p_Var2 + 0x18),"C");
      DAT_01f8eda4 = p_Var2;
      FUN_00e13480();
      _DAT_01f8edbc = DAT_01f8eda4;
      p_Var1 = p_Var2;
    }
    local_8 = 0xffffffff;
    FUN_00fda874();
  }
  return p_Var1;
}

// 00FDAD3D  std::locale::empty  size=49  [run]
/* Library Function - Single Match
    public: static class std::locale __cdecl std::locale::empty(void)
   
   Library: Visual Studio 2010 Release */

undefined4 * __cdecl std::locale::empty(void)

{
  _Locimp *this;
  undefined4 *in_stack_00000004;
  undefined4 uVar1;
  
  uVar1 = 0;
  _Init();
  this = (_Locimp *)FUN_00dd34e0(0x20,uVar1);
  if (this == (_Locimp *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = _Locimp::_Locimp(this,true);
  }
  *in_stack_00000004 = uVar1;
  return in_stack_00000004;
}

