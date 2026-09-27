// lib/msvc/stl/unit_00FDA937.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDA937..00FDA94C, 2 functions

#include "mgrr.h"

// 00FDA937  std::_Fac_node::~_Fac_node  size=21  [run]
/* Library Function - Single Match
    public: __thiscall std::_Fac_node::~_Fac_node(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void __thiscall std::_Fac_node::~_Fac_node(_Fac_node *this)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00e134b0();
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  return;
}

// 00FDA94C  std::_Fac_node::`scalar_deleting_destructor'  size=33  [run]
/* Library Function - Single Match
    public: void * __thiscall std::_Fac_node::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void * __thiscall std::_Fac_node::_scalar_deleting_destructor_(_Fac_node *this,uint param_1)

{
  ~_Fac_node(this);
  if ((param_1 & 1) != 0) {
    FUN_00dd4920(this);
  }
  return this;
}

