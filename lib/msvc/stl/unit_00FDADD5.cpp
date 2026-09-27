// lib/msvc/stl/unit_00FDADD5.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDADD5..00FDAE9B, 8 functions

#include "types.h"

// 00FDADD5  std::error_condition::operator==  size=33  [run]
/* Library Function - Single Match
    public: bool __thiscall std::error_condition::operator==(class std::error_condition const
   &)const 
   
   Library: Visual Studio 2010 Release */

bool __thiscall std::error_condition::operator==(error_condition *this,error_condition *param_1)

{
  bool bVar1;
  
  if ((*(int *)(this + 4) == *(int *)(param_1 + 4)) && (*(int *)this == *(int *)param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// 00FDADF6  std::error_category::vf0C  size=20  [run]
void __thiscall std::error_category::vf0C(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  param_2[1] = param_1;
  return;
}

// 00FDAE0A  std::error_category::equivalent  size=33  [run]
/* Library Function - Single Match
    public: virtual bool __thiscall std::error_category::equivalent(int,class std::error_condition
   const &)const 
   
   Library: Visual Studio 2010 Release */

bool __thiscall
std::error_category::equivalent(error_category *this,int param_1,error_condition *param_2)

{
  bool bVar1;
  error_condition *this_00;
  error_condition *peVar2;
  error_category *local_c;
  error_category *peStack_8;
  
  peVar2 = (error_condition *)&local_c;
  local_c = this;
  peStack_8 = this;
  this_00 = (error_condition *)(**(code **)(*(int *)this + 0xc))(peVar2,param_1,param_2);
  bVar1 = error_condition::operator==(this_00,peVar2);
  return bVar1;
}

// 00FDAE2B  std::error_category::equivalent  size=31  [run]
/* Library Function - Single Match
    public: virtual bool __thiscall std::error_category::equivalent(class std::error_code const
   &,int)const 
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

bool __thiscall
std::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  bool bVar1;
  
  if ((this == *(error_category **)(param_1 + 4)) && (*(int *)param_1 == param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// 00FDAE5A  std::_Generic_error_category::vf04  size=4  [run]
undefined4 __fastcall std::_Generic_error_category::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 00FDAE75  std::_Iostream_error_category::vf04  size=4  [run]
undefined4 __fastcall std::_Iostream_error_category::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 00FDAE97  std::_System_error_category::vf04  size=4  [run]
undefined4 __fastcall std::_System_error_category::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 00FDAE9B  std::_System_error_category::vf0C  size=20  [run]
void __thiscall
std::_System_error_category::vf0C(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  param_2[1] = param_1;
  return;
}

