// src/misc/ShapeCylinder.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6ADB0..00A6CAC0, 9 functions

#include "mgrr.h"
#include "ShapeCylinder.h"

// 00A6ADB0  ShapeCylinder::vf18  size=44  [class]
void __thiscall ShapeCylinder::vf18(int param_1,undefined4 param_2)

{
  FUN_00f961d0(param_1 + 0x100,param_1 + 0xf0,*(undefined4 *)(param_1 + 0x130),param_2,0,0);
  return;
}

// 00A6B260  ShapeCylinder::vf10  size=343  [class]
void __fastcall ShapeCylinder::vf10(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 local_50 [76];
  
  pfVar2 = (float *)(param_1 + 0xd0);
  pfVar1 = (float *)(param_1 + 0xe0);
  *pfVar2 = 0.0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0x134) * 0.5;
  *pfVar1 = 0.0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0x134) * -0.5;
  FUN_00ddc1d0(local_50,param_1 + 0x120,5);
  D3DXVec3TransformNormal(pfVar2,pfVar2,local_50);
  FUN_00ddc1d0(&stack0xffffffa4,param_1 + 0x120,5);
  D3DXVec3TransformNormal(pfVar1,pfVar1,&stack0xffffffa4);
  *pfVar2 = *(float *)(param_1 + 0x110) + *pfVar2;
  *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0x114) + *(float *)(param_1 + 0xd4);
  *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0x118);
  *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0xdc);
  *pfVar1 = *pfVar1 + *(float *)(param_1 + 0x110);
  *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0x114) + *(float *)(param_1 + 0xe4);
  *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0x118);
  *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0xec);
  D3DXVec3TransformNormal(param_1 + 0xf0,pfVar2,param_1 + 0x50);
  *(float *)(param_1 + 0xf0) = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0xf0);
  *(float *)(param_1 + 0xf4) = *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0xf4);
  pfVar2 = (float *)(param_1 + 0x100);
  *(float *)(param_1 + 0xf8) = *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0xf8);
  D3DXVec3TransformNormal(pfVar2,pfVar1,param_1 + 0x50);
  *pfVar2 = *(float *)(param_1 + 0x80) + *pfVar2;
  *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x104);
  *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x108);
  return;
}

// 00A6B3C0  ShapeCylinder::ShapeCylinder  size=90  [class]
undefined4 * __fastcall ShapeCylinder::ShapeCylinder(undefined4 *param_1)

{
  ShapeBase::ShapeBase(1);
  param_1[0x4c] = 0x3f000000;
  *param_1 = vftable;
  param_1[0x4d] = 0x3f800000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  return param_1;
}

// 00A6B420  ShapeCylinder::vf00  size=6  [class]
undefined * ShapeCylinder::vf00(void)

{
  return &DAT_01be9a14;
}

// 00A6B430  ShapeCylinder::vf08  size=31  [class]
undefined4 * __thiscall ShapeCylinder::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = ShapeBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A6BBB0  ShapeCylinder::vf14  size=407  [class]
void __fastcall ShapeCylinder::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  LPVOID pvVar6;
  int iVar7;
  float unaff_ESI;
  float unaff_EDI;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  undefined1 *puVar11;
  float fVar12;
  float fStack_98;
  float fStack_94;
  float *local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  local_80 = 0.0;
  local_7c = *(float *)(param_1 + 0x134) * 0.5;
  local_78 = 0.0;
  local_8c = (float *)(*(float *)(param_1 + 0x134) * -0.5);
  local_88 = 0.0;
  FUN_00ddc1d0(local_50,param_1 + 0x120,5);
  puVar11 = local_50;
  pfVar8 = &local_80;
  pfVar9 = pfVar8;
  D3DXVec3TransformNormal(pfVar8,pfVar8,puVar11);
  FUN_00ddc1d0(auStack_5c,param_1 + 0x120,5);
  D3DXVec3TransformNormal(&stack0xffffff64,&stack0xffffff64,auStack_5c);
  fVar1 = *(float *)(param_1 + 0x110);
  fVar2 = *(float *)(param_1 + 0x114);
  fVar3 = *(float *)(param_1 + 0x118);
  local_8c = (float *)(*(float *)(param_1 + 0x11c) + (float)local_8c);
  fVar10 = *(float *)(param_1 + 0x110) + (float)pfVar9;
  fVar12 = *(float *)(param_1 + 0x114) + (float)puVar11;
  fVar4 = *(float *)(param_1 + 0x118);
  fVar5 = *(float *)(param_1 + 0x11c);
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  iVar7 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(0x60);
  *(undefined2 *)(iVar7 + 4) = 0x60;
  local_8c = pfVar8;
  local_88 = fVar10;
  fStack_84 = fVar12;
  local_80 = fVar4 + unaff_EDI;
  local_7c = fVar5 + unaff_ESI;
  local_78 = fVar1 + fStack_98;
  fStack_74 = fVar2 + fStack_94;
  fStack_70 = fVar3 + 0.0;
  hkpCylinderShape::hkpCylinderShape
            (&local_7c,&local_8c,*(undefined4 *)(param_1 + 0x130),DAT_01b20754);
  return;
}

// 00A6C790  ShapeCylinder::vf1C  size=210  [class]
byte __thiscall ShapeCylinder::vf1C(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte unaff_BL;
  byte bVar5;
  
  bVar1 = FUN_00a6c680(param_2,&DAT_01662d6c,param_1);
  bVar2 = FUN_00a6a060(param_2,"baseOffset",param_1 + 0x110);
  bVar3 = FUN_00a6a060(param_2,"baseRotation",param_1 + 0x120);
  cVar4 = (**(code **)(*param_2 + 0x10))("radius",0xb);
  if (cVar4 == '\0') {
    unaff_BL = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x130);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
  }
  bVar5 = 0xb;
  cVar4 = (**(code **)(*param_2 + 0x10))("height");
  if (cVar4 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x134);
    (**(code **)(*param_2 + 0x14))("height",0xb);
    return bVar5 & bVar1 & bVar2 & bVar3 & unaff_BL;
  }
  return 0;
}

// 00A6C9C0  ShapeCylinder::thunk_vf1C  size=5  [class]
byte __thiscall ShapeCylinder::thunk_vf1C(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte unaff_BL;
  byte bVar5;
  
  bVar1 = FUN_00a6c680(param_2,&DAT_01662d6c,param_1);
  bVar2 = FUN_00a6a060(param_2,"baseOffset",param_1 + 0x110);
  bVar3 = FUN_00a6a060(param_2,"baseRotation",param_1 + 0x120);
  cVar4 = (**(code **)(*param_2 + 0x10))("radius",0xb);
  if (cVar4 == '\0') {
    unaff_BL = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x130);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
  }
  bVar5 = 0xb;
  cVar4 = (**(code **)(*param_2 + 0x10))("height");
  if (cVar4 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x134);
    (**(code **)(*param_2 + 0x14))("height",0xb);
    return bVar5 & bVar1 & bVar2 & bVar3 & unaff_BL;
  }
  return 0;
}

// 00A6CAC0  ShapeCylinder::vf04  size=52  [class]
undefined4 * ShapeCylinder::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("ShapeCylinder",0xd);
  uVar1 = FUN_008d93a0(uVar1,"ShapeCylinder",0xd);
  *param_1 = uVar1;
  return param_1;
}

