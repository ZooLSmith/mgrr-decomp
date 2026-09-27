// src/misc/ShapeSphere.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6AD40..00A6CA80, 8 functions

#include "mgrr.h"
#include "ShapeSphere.h"

// 00A6AD40  ShapeSphere::vf18  size=34  [class]
void __thiscall ShapeSphere::vf18(int param_1,undefined4 param_2)

{
  FUN_00f96110(param_1 + 0x50,*(undefined4 *)(param_1 + 0xd0),param_2,0,0);
  return;
}

// 00A6B210  ShapeSphere::ShapeSphere  size=32  [class]
undefined4 * __fastcall ShapeSphere::ShapeSphere(undefined4 *param_1)

{
  ShapeBase::ShapeBase(0);
  param_1[0x34] = 0x3f000000;
  *param_1 = vftable;
  return param_1;
}

// 00A6B230  ShapeSphere::vf00  size=6  [class]
undefined * ShapeSphere::vf00(void)

{
  return &DAT_01be9a10;
}

// 00A6B240  ShapeSphere::vf08  size=31  [class]
undefined4 * __thiscall ShapeSphere::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = ShapeBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A6BB70  ShapeSphere::vf14  size=55  [class]
void __fastcall ShapeSphere::vf14(int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
  *(undefined2 *)(iVar2 + 4) = 0x20;
  hkpSphereShape::hkpSphereShape(*(undefined4 *)(param_1 + 0xd0));
  return;
}

// 00A6C720  ShapeSphere::vf1C  size=108  [class]
byte __thiscall ShapeSphere::vf1C(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_00a6c680(param_2,&DAT_01662d6c,param_1);
  bVar3 = 0xb;
  cVar1 = (**(code **)(*param_2 + 0x10))("radius");
  if (cVar1 != '\0') {
    bVar2 = (**(code **)(*param_2 + 0x1c))(param_1 + 0xd0);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
    return bVar2 & bVar3;
  }
  return 0;
}

// 00A6C9B0  ShapeSphere::thunk_vf1C  size=5  [class]
byte __thiscall ShapeSphere::thunk_vf1C(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_00a6c680(param_2,&DAT_01662d6c,param_1);
  bVar3 = 0xb;
  cVar1 = (**(code **)(*param_2 + 0x10))("radius");
  if (cVar1 != '\0') {
    bVar2 = (**(code **)(*param_2 + 0x1c))(param_1 + 0xd0);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
    return bVar2 & bVar3;
  }
  return 0;
}

// 00A6CA80  ShapeSphere::vf04  size=52  [class]
undefined4 * ShapeSphere::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("ShapeSphere",0xb);
  uVar1 = FUN_008d93a0(uVar1,"ShapeSphere",0xb);
  *param_1 = uVar1;
  return param_1;
}

