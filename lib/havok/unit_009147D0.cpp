// lib/havok/unit_009147D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009147D0..00914E70, 13 functions

#include "types.h"

// 009147D0  hkcdShape::vf00  size=50  [run]
undefined4 * __thiscall hkcdShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 00914840  hkpShapeBase::vf0C  size=3  [run]
undefined1 hkpShapeBase::vf0C(void)

{
  return 0;
}

// 00914880  hkpShapeBase::vf00  size=50  [run]
undefined4 * __thiscall hkpShapeBase::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 009148F0  hkpShape::vf38  size=3  [run]
undefined4 hkpShape::vf38(void)

{
  return 0;
}

// 00914930  hkpShape::vf00  size=50  [run]
undefined4 * __thiscall hkpShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 009149C0  hkpShapeContainer::vf00  size=47  [run]
undefined4 * __thiscall hkpShapeContainer::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 00914A20  hkpSingleShapeContainer::vf00  size=65  [run]
undefined4 * __thiscall hkpSingleShapeContainer::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if (param_1[1] != 0) {
    FUN_010060a0();
  }
  *param_1 = hkpShapeContainer::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 00914AD0  hkpSphereRepShape::vf00  size=50  [run]
undefined4 * __thiscall hkpSphereRepShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 00914B70  hkpConvexShape::vf00  size=50  [run]
undefined4 * __thiscall hkpConvexShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 00914C50  hkpTriangleShape::vf40  size=8  [run]
undefined4 hkpTriangleShape::vf40(void)

{
  return 0x60;
}

// 00914C70  hkpTriangleShape::vf2C  size=9  [run]
int __fastcall hkpTriangleShape::vf2C(int param_1)

{
  return (uint)*(byte *)(param_1 + 0x17) * 3 + 3;
}

// 00914CB0  hkpTriangleShape::vf00  size=50  [run]
undefined4 * __thiscall hkpTriangleShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 00914E70  hkpConvexTranslateShape::vf00  size=76  [run]
undefined4 * __thiscall hkpConvexTranslateShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[5] = hkpSingleShapeContainer::vftable;
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  param_1[5] = hkpShapeContainer::vftable;
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

