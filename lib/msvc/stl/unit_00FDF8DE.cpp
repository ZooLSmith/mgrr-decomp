// lib/msvc/stl/unit_00FDF8DE.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDF8DE..00FDFB42, 18 functions

#include "mgrr.h"

// 00FDF8DE  std::exception::exception  size=29  [run]
void __thiscall std::exception::exception(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = vftable;
  param_1[1] = *param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

// 00FDF8FB  std::runtime_error::vf04  size=13  [run]
char * __fastcall std::runtime_error::vf04(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}

// 00FDF908  std::exception::_Copy_str  size=64  [run]
/* Library Function - Single Match
    private: void __thiscall std::exception::_Copy_str(char const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall std::exception::_Copy_str(exception *this,char *param_1)

{
  size_t sVar1;
  char *_Dst;
  
  if (param_1 != (char *)0x0) {
    sVar1 = _strlen(param_1);
    _Dst = _malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,param_1);
      this[8] = (exception)0x1;
    }
  }
  return;
}

// 00FDF948  std::exception::_Tidy  size=30  [run]
/* Library Function - Single Match
    private: void __thiscall std::exception::_Tidy(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall std::exception::_Tidy(exception *this)

{
  if (this[8] != (exception)0x0) {
    _free(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  this[8] = (exception)0x0;
  return;
}

// 00FDF966  std::exception::exception  size=39  [run]
/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2010 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  this[8] = (exception)0x0;
  _Copy_str(this,*param_1);
  return this;
}

// 00FDF98D  std::exception::operator=  size=53  [run]
/* Library Function - Single Match
    public: class std::exception & __thiscall std::exception::operator=(class std::exception const
   &)
   
   Library: Visual Studio 2010 Release */

exception * __thiscall std::exception::operator=(exception *this,exception *param_1)

{
  if (this != param_1) {
    _Tidy(this);
    if (param_1[8] == (exception)0x0) {
      *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    }
    else {
      _Copy_str(this,*(char **)(param_1 + 4));
    }
  }
  return this;
}

// 00FDF9C2  std::exception::exception_2  size=11  [run]
void __fastcall std::exception::exception_2(exception *param_1)

{
  *(undefined ***)param_1 = vftable;
  _Tidy(param_1);
  return;
}

// 00FDF9CD  std::bad_cast::bad_cast  size=30  [run]
exception * __fastcall std::bad_cast::bad_cast(exception *param_1)

{
  exception::exception(param_1,(char **)&stack0x00000004);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDF9F6  std::bad_typeid::bad_typeid  size=30  [run]
/* Library Function - Single Match
    public: __thiscall std::bad_typeid::bad_typeid(char const *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

bad_typeid * __thiscall std::bad_typeid::bad_typeid(bad_typeid *this,char *param_1)

{
  exception::exception((exception *)this,&param_1);
  *(undefined ***)this = vftable;
  return this;
}

// 00FDFA1F  std::__non_rtti_object::__non_rtti_object  size=29  [run]
/* Library Function - Single Match
    public: __thiscall std::__non_rtti_object::__non_rtti_object(char const *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

__non_rtti_object * __thiscall
std::__non_rtti_object::__non_rtti_object(__non_rtti_object *this,char *param_1)

{
  bad_typeid::bad_typeid((bad_typeid *)this,param_1);
  *(undefined ***)this = vftable;
  return this;
}

// 00FDFA47  std::exception::vf00  size=39  [run]
exception * __thiscall std::exception::vf00(exception *param_1,byte param_2)

{
  *(undefined ***)param_1 = vftable;
  _Tidy(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDFA6E  std::exception::exception  size=37  [run]
/* Library Function - Single Match
    public: __thiscall std::exception::exception(class std::exception const &)
   
   Library: Visual Studio 2010 Release */

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  this[8] = (exception)0x0;
  operator=(this,param_1);
  return this;
}

// 00FDFA93  std::bad_cast::vf00  size=39  [run]
exception * __thiscall std::bad_cast::vf00(exception *param_1,byte param_2)

{
  *(undefined ***)param_1 = exception::vftable;
  exception::_Tidy(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDFABA  std::bad_cast::bad_cast_2  size=29  [run]
exception * __thiscall std::bad_cast::bad_cast_2(exception *param_1,exception *param_2)

{
  exception::exception(param_1,param_2);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDFAD7  std::bad_typeid::vf00  size=39  [run]
exception * __thiscall std::bad_typeid::vf00(exception *param_1,byte param_2)

{
  *(undefined ***)param_1 = exception::vftable;
  exception::_Tidy(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDFAFE  std::bad_typeid::bad_typeid  size=29  [run]
exception * __thiscall std::bad_typeid::bad_typeid(exception *param_1,exception *param_2)

{
  exception::exception(param_1,param_2);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDFB1B  std::__non_rtti_object::vf00  size=39  [run]
exception * __thiscall std::__non_rtti_object::vf00(exception *param_1,byte param_2)

{
  *(undefined ***)param_1 = exception::vftable;
  exception::_Tidy(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDFB42  std::__non_rtti_object::__non_rtti_object  size=29  [run]
undefined4 * __thiscall
std::__non_rtti_object::__non_rtti_object(undefined4 *param_1,undefined4 param_2)

{
  bad_typeid::bad_typeid(param_2);
  *param_1 = vftable;
  return param_1;
}

