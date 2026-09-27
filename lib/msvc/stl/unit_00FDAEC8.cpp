// lib/msvc/stl/unit_00FDAEC8.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDAEC8..00FDB041, 9 functions

#include "mgrr.h"

// 00FDAEC8  std::_Generic_error_category::vf00  size=34  [run]
undefined4 * __thiscall std::_Generic_error_category::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = error_category::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDAEEA  std::_Iostream_error_category::vf00  size=34  [run]
undefined4 * __thiscall std::_Iostream_error_category::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = error_category::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDAF0C  std::_System_error_category::vf00  size=34  [run]
undefined4 * __thiscall std::_System_error_category::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = error_category::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDAF2E  std::_Generic_error_category::message  size=35  [run]
/* Library Function - Single Match
    public: virtual class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > __thiscall std::_Generic_error_category::message(int)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall std::_Generic_error_category::message(_Generic_error_category *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fe2ab3();
  FUN_00e20540(uVar1);
  return param_1;
}

// 00FDAF51  std::_Iostream_error_category::message  size=48  [run]
/* Library Function - Single Match
    public: virtual class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > __thiscall std::_Iostream_error_category::message(int)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall std::_Iostream_error_category::message(_Iostream_error_category *this,int param_1)

{
  int in_stack_00000008;
  char *pcVar1;
  
  if (in_stack_00000008 == 1) {
    pcVar1 = "iostream stream error";
  }
  else {
    pcVar1 = (char *)FUN_00fe2ab3();
  }
  FUN_00e20540(pcVar1);
  return param_1;
}

// 00FDAF81  std::ios_base::_Callfns  size=39  [run]
/* Library Function - Single Match
    private: void __thiscall std::ios_base::_Callfns(enum std::ios_base::event)
   
   Library: Visual Studio 2010 Release */

void __thiscall std::ios_base::_Callfns(ios_base *this,event param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(this + 0x2c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_1,this,puVar1[1]);
  }
  return;
}

// 00FDAFA8  std::ios_base::_Tidy  size=68  [run]
/* Library Function - Single Match
    private: void __thiscall std::ios_base::_Tidy(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall std::ios_base::_Tidy(ios_base *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  _Callfns(this,0);
  puVar2 = *(undefined4 **)(this + 0x28);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_00dd4920(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(this + 0x28) = 0;
  puVar2 = *(undefined4 **)(this + 0x2c);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_00dd4920(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}

// 00FDAFEC  std::ios_base::_Addstd  size=85  [run]
/* Library Function - Single Match
    public: static void __cdecl std::ios_base::_Addstd(class std::ios_base *)
   
   Library: Visual Studio 2010 Release */

void __cdecl std::ios_base::_Addstd(ios_base *param_1)

{
  ios_base *piVar1;
  int iVar2;
  _Lockit local_8 [4];
  
  _Lockit::_Lockit(local_8,2);
  *(undefined4 *)(param_1 + 8) = 1;
  do {
    piVar1 = *(ios_base **)(*(int *)(param_1 + 8) * 4 + 0x1f8edcc);
    if ((piVar1 == (ios_base *)0x0) || (piVar1 == param_1)) break;
    iVar2 = *(int *)(param_1 + 8);
    *(uint *)(param_1 + 8) = iVar2 + 1U;
  } while (iVar2 + 1U < 8);
  *(ios_base **)(*(int *)(param_1 + 8) * 4 + 0x1f8edcc) = param_1;
  (&DAT_01f8edf4)[*(int *)(param_1 + 8)] = (&DAT_01f8edf4)[*(int *)(param_1 + 8)] + '\x01';
  FUN_00fda874();
  return;
}

// 00FDB041  std::ios_base::_Ios_base_dtor  size=62  [run]
/* Library Function - Single Match
    private: static void __cdecl std::ios_base::_Ios_base_dtor(class std::ios_base *)
   
   Library: Visual Studio 2010 Release */

void __cdecl std::ios_base::_Ios_base_dtor(ios_base *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    pcVar1 = &DAT_01f8edf4 + *(int *)(param_1 + 8);
    *pcVar1 = *pcVar1 + -1;
    if ('\0' < *pcVar1) {
      return;
    }
  }
  _Tidy(param_1);
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    FUN_00e135b0();
    FUN_00dd4920(iVar2);
  }
  return;
}

