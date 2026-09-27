// src/effect/EspPrimitiveWorkMultiParticleBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4FDC0..00F59650, 2 functions

#include "mgrr.h"
#include "EspPrimitiveWorkMultiParticleBase.h"

// 00F4FDC0  EspPrimitiveWorkMultiParticleBase::EspPrimitiveWorkMultiParticleBase  size=36  [class]
/* Library Function - Single Match
    public: __thiscall _AFX_EDIT_STATE::_AFX_EDIT_STATE(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

EspPrimitiveWorkMultiParticleBase * __thiscall
EspPrimitiveWorkMultiParticleBase::EspPrimitiveWorkMultiParticleBase
          (EspPrimitiveWorkMultiParticleBase *this)

{
  *(undefined ***)this = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  *(undefined4 *)(this + 0x54) = 0;
  return this;
}

// 00F59650  EspPrimitiveWorkMultiParticleBase::vf00  size=53  [class]
undefined4 * __thiscall EspPrimitiveWorkMultiParticleBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

