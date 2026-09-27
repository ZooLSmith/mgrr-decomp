// src/misc/ShapeCapsule.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6B450..00A6CB00, 9 functions

#include "types.h"

// 00A6B450  ShapeCapsule::vf10  size=363  [class]
void __fastcall ShapeCapsule::vf10(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 auStack_5c [8];
  undefined4 *local_54;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x158) == 0) {
    pfVar1 = (float *)(param_1 + 0xe0);
    pfVar2 = (float *)(param_1 + 0xf0);
    local_54 = (undefined4 *)(param_1 + 0x110);
    *pfVar1 = 0.0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0x154) * 0.5;
    *pfVar2 = 0.0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(float *)(param_1 + 0xf4) = *(float *)(param_1 + 0x154) * -0.5;
    *(undefined4 *)(param_1 + 0x120) = *local_54;
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x11c);
    FUN_00ddc1d0(local_50,param_1 + 0x140,5);
    pfVar4 = pfVar1;
    pfVar5 = pfVar1;
    D3DXVec3TransformNormal(pfVar1,pfVar1,local_50);
    FUN_00ddc1d0(auStack_5c,param_1 + 0x140,5);
    D3DXVec3TransformNormal(pfVar2,pfVar2,auStack_5c);
    pfVar3 = (float *)(param_1 + 0x100);
    *pfVar1 = *(float *)(param_1 + 0x130) + *pfVar1;
    *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0x134);
    *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0x138);
    *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0xec) + *(float *)(param_1 + 0x13c);
    *pfVar2 = *(float *)(param_1 + 0x130) + *pfVar2;
    *(float *)(param_1 + 0xf4) = *(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0x134);
    *(float *)(param_1 + 0xf8) = *(float *)(param_1 + 0xf8) + *(float *)(param_1 + 0x138);
    *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0x13c);
    D3DXVec3TransformNormal(pfVar3,pfVar1,param_1 + 0x50);
    *pfVar3 = pfVar4[0xc] + *pfVar3;
    *(float *)(param_1 + 0x104) = pfVar4[0xd] + *(float *)(param_1 + 0x104);
    *(float *)(param_1 + 0x108) = pfVar4[0xe] + *(float *)(param_1 + 0x108);
    D3DXVec3TransformNormal(pfVar5,pfVar2,pfVar4);
    *pfVar5 = *pfVar5 + pfVar4[0xc];
    pfVar5[1] = pfVar4[0xd] + pfVar5[1];
    pfVar5[2] = pfVar4[0xe] + pfVar5[2];
  }
  return;
}

// 00A6B620  FUN_00a6b620  size=98  [between]
void __thiscall FUN_00a6b620(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x100) = *param_2;
  *(undefined4 *)(param_1 + 0x104) = param_2[1];
  *(undefined4 *)(param_1 + 0x108) = param_2[2];
  *(undefined4 *)(param_1 + 0x10c) = param_2[3];
  *(undefined4 *)(param_1 + 0x110) = *param_3;
  *(undefined4 *)(param_1 + 0x114) = param_3[1];
  *(undefined4 *)(param_1 + 0x118) = param_3[2];
  *(undefined4 *)(param_1 + 0x11c) = param_3[3];
  *(undefined4 *)(param_1 + 0x158) = 1;
  *(undefined4 *)(param_1 + 0xd0) = 1;
  return;
}

// 00A6B690  ShapeCapsule::ShapeCapsule  size=176  [class]
undefined4 * __fastcall ShapeCapsule::ShapeCapsule(undefined4 *param_1)

{
  ShapeBase::ShapeBase_2(3);
  param_1[0x54] = 0x3f000000;
  *param_1 = vftable;
  param_1[0x55] = 0x3f800000;
  param_1[0x34] = 0;
  param_1[0x56] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
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

// 00A6B740  ShapeCapsule::vf00  size=6  [class]
undefined * ShapeCapsule::vf00(void)

{
  return &DAT_01be9a18;
}

// 00A6B750  ShapeCapsule::vf08  size=31  [class]
undefined4 * __thiscall ShapeCapsule::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = ShapeBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A6B770  ShapeCapsule::vf18  size=251  [class]
void __thiscall ShapeCapsule::vf18(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)(param_1 + 0x100) - *(float *)(param_1 + 0x110);
  fVar3 = *(float *)(param_1 + 0x104) - *(float *)(param_1 + 0x114);
  fVar2 = *(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x118);
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  fVar3 = -(*(float *)(param_1 + 0x150) / fVar1);
  fVar2 = *(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x100);
  local_18 = fVar2 * fVar3 + *(float *)(param_1 + 0x100);
  local_14 = (*(float *)(param_1 + 0x114) - *(float *)(param_1 + 0x104)) * fVar3 +
             *(float *)(param_1 + 0x104);
  local_10 = (*(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x108)) * fVar3 +
             *(float *)(param_1 + 0x108);
  fVar1 = (*(float *)(param_1 + 0x150) + fVar1) / fVar1;
  local_c = fVar2 * fVar1 + *(float *)(param_1 + 0x100);
  local_8 = (*(float *)(param_1 + 0x114) - *(float *)(param_1 + 0x104)) * fVar1 +
            *(float *)(param_1 + 0x104);
  local_4 = (*(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x108)) * fVar1 +
            *(float *)(param_1 + 0x108);
  FUN_00f96220(&local_18,&local_c,*(undefined4 *)(param_1 + 0x150),param_2,0,0);
  return;
}

// 00A6BD50  ShapeCapsule::vf14  size=169  [class]
void __fastcall ShapeCapsule::vf14(int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar2 + 4) = 0x40;
  uStack_34 = *(undefined4 *)(param_1 + 0xf0);
  uStack_30 = *(undefined4 *)(param_1 + 0xf4);
  uStack_2c = *(undefined4 *)(param_1 + 0xf8);
  uStack_28 = *(undefined4 *)(param_1 + 0xfc);
  uStack_1c = *(undefined4 *)(param_1 + 0xe8);
  uStack_18 = *(undefined4 *)(param_1 + 0xec);
  uStack_20 = *(undefined4 *)(param_1 + 0xe4);
  uStack_24 = *(undefined4 *)(param_1 + 0xe0);
  hkpCapsuleShape::hkpCapsuleShape(&uStack_24,&uStack_34,*(undefined4 *)(param_1 + 0x150));
  return;
}

// 00A6C9D0  ShapeCapsule::thunk_vf1C  size=5  [class]
byte __thiscall ShapeCapsule::thunk_vf1C(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte unaff_BL;
  byte bVar5;
  
  bVar1 = FUN_00a6c680(param_2,&DAT_01662d6c,param_1);
  bVar2 = FUN_00a6a060(param_2,"baseOffset",param_1 + 0x130);
  bVar3 = FUN_00a6a060(param_2,"baseRotation",param_1 + 0x140);
  cVar4 = (**(code **)(*param_2 + 0x10))("radius",0xb);
  if (cVar4 == '\0') {
    unaff_BL = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x150);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
  }
  bVar5 = 0xb;
  cVar4 = (**(code **)(*param_2 + 0x10))("height");
  if (cVar4 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x154);
    (**(code **)(*param_2 + 0x14))("height",0xb);
    return bVar5 & bVar1 & bVar2 & bVar3 & unaff_BL;
  }
  return 0;
}

// 00A6CB00  ShapeCapsule::vf04  size=52  [class]
undefined4 * ShapeCapsule::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("ShapeCapsule",0xc);
  uVar1 = FUN_008d93a0(uVar1,"ShapeCapsule",0xc);
  *param_1 = uVar1;
  return param_1;
}

