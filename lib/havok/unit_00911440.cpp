// lib/havok/unit_00911440.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00911440..009116C0, 9 functions

#include "types.h"

// 00911440  hkpShapeContainer::vf18  size=3  [run]
undefined1 hkpShapeContainer::vf18(void)

{
  return 1;
}

// 00911450  hkpShapeContainer::hkpShapeContainer_5  size=29  [run]
void __fastcall hkpShapeContainer::hkpShapeContainer_5(undefined4 *param_1)

{
  *param_1 = hkpSingleShapeContainer::vftable;
  if (param_1[1] != 0) {
    FUN_010060a0();
  }
  *param_1 = vftable;
  return;
}

// 00911470  hkpSingleShapeContainer::vf04  size=6  [run]
undefined4 hkpSingleShapeContainer::vf04(void)

{
  return 1;
}

// 00911480  hkpSingleShapeContainer::vf08  size=3  [run]
undefined4 hkpSingleShapeContainer::vf08(void)

{
  return 0;
}

// 00911490  hkpSingleShapeContainer::vf0C  size=6  [run]
undefined4 hkpSingleShapeContainer::vf0C(void)

{
  return 0xffffffff;
}

// 009114C0  hkBaseObject::hkBaseObject_110  size=37  [run]
void __fastcall hkBaseObject::hkBaseObject_110(undefined4 *param_1)

{
  param_1[5] = hkpSingleShapeContainer::vftable;
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  param_1[5] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 00911680  hkpConvexTranslateShape::vf0C  size=3  [run]
undefined1 hkpConvexTranslateShape::vf0C(void)

{
  return 1;
}

// 00911690  hkBaseObject::hkBaseObject_112  size=37  [run]
void __fastcall hkBaseObject::hkBaseObject_112(undefined4 *param_1)

{
  param_1[5] = hkpSingleShapeContainer::vftable;
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  param_1[5] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 009116C0  hkpConvexTranslateShape::vf2C  size=10  [run]
void __fastcall hkpConvexTranslateShape::vf2C(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009116c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))();
  return;
}

