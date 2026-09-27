// src/effect/EspPrimitiveWorkBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4EAC0..00F59160, 10 functions

#include "types.h"

// 00F4EAC0  EspPrimitiveWorkBase::EspPrimitiveWorkBase_9  size=79  [class]
void __fastcall EspPrimitiveWorkBase::EspPrimitiveWorkBase_9(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = EspPrimitiveWorkBillboard::vftable;
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  iVar1 = 3;
  do {
    thunk_FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F4FDF0  EspPrimitiveWorkBase::EspPrimitiveWorkBase_8  size=33  [class]
void __fastcall EspPrimitiveWorkBase::EspPrimitiveWorkBase_8(undefined4 *param_1)

{
  *param_1 = EspPrimitiveWorkMultiParticleBase::vftable;
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F50380  EspPrimitiveWorkBase::EspPrimitiveWorkBase_6  size=60  [class]
void __fastcall EspPrimitiveWorkBase::EspPrimitiveWorkBase_6(undefined4 *param_1)

{
  *param_1 = EspPrimitiveWorkMultiBillboardBase::vftable;
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F506E0  EspPrimitiveWorkBase::EspPrimitiveWorkBase_7  size=60  [class]
void __fastcall EspPrimitiveWorkBase::EspPrimitiveWorkBase_7(undefined4 *param_1)

{
  *param_1 = EspPrimitiveWorkMultiLineBase::vftable;
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F50990  EspPrimitiveWorkBase::EspPrimitiveWorkBase_5  size=33  [class]
void __fastcall EspPrimitiveWorkBase::EspPrimitiveWorkBase_5(undefined4 *param_1)

{
  *param_1 = EspPrimitiveWorkMultiStripBase::vftable;
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F58B80  EspPrimitiveWorkBase::EspPrimitiveWorkBase  size=33  [class]
void __fastcall EspPrimitiveWorkBase::EspPrimitiveWorkBase(undefined4 *param_1)

{
  *param_1 = EspPrimitiveWorkMultiParticleBase::vftable;
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F58C40  EspPrimitiveWorkBase::EspPrimitiveWorkBase_2  size=60  [class]
void __fastcall EspPrimitiveWorkBase::EspPrimitiveWorkBase_2(undefined4 *param_1)

{
  *param_1 = EspPrimitiveWorkMultiBillboardBase::vftable;
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F58D20  EspPrimitiveWorkBase::EspPrimitiveWorkBase_4  size=60  [class]
void __fastcall EspPrimitiveWorkBase::EspPrimitiveWorkBase_4(undefined4 *param_1)

{
  *param_1 = EspPrimitiveWorkMultiLineBase::vftable;
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F58DE0  EspPrimitiveWorkBase::EspPrimitiveWorkBase_3  size=33  [class]
void __fastcall EspPrimitiveWorkBase::EspPrimitiveWorkBase_3(undefined4 *param_1)

{
  *param_1 = EspPrimitiveWorkMultiStripBase::vftable;
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = vftable;
  return;
}

// 00F59160  EspPrimitiveWorkBase::vf00  size=31  [class]
undefined4 * __thiscall EspPrimitiveWorkBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

