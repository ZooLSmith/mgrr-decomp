// src/misc/ShapeBox.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6AE40..00A6CB40, 8 functions

#include "mgrr.h"
#include "ShapeBox.h"

// 00A6AE40  ShapeBox::vf18  size=31  [class]
void __thiscall ShapeBox::vf18(int param_1,undefined4 param_2)

{
  FUN_00f962e0(param_1 + 0x50,param_1 + 0xd0,param_2,0,0);
  return;
}

// 00A6B870  ShapeBox::ShapeBox  size=40  [class]
undefined4 * __fastcall ShapeBox::ShapeBox(undefined4 *param_1)

{
  ShapeBase::ShapeBase_2(2);
  *param_1 = vftable;
  param_1[0x34] = 0x3f800000;
  param_1[0x35] = 0x3f800000;
  param_1[0x36] = 0x3f800000;
  return param_1;
}

// 00A6B8A0  ShapeBox::vf00  size=6  [class]
undefined * ShapeBox::vf00(void)

{
  return &DAT_01be9a1c;
}

// 00A6B8B0  ShapeBox::vf08  size=31  [class]
undefined4 * __thiscall ShapeBox::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = ShapeBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A6BE00  ShapeBox::vf10  size=662  [class]
/* WARNING: Type propagation algorithm not settling */

void __fastcall ShapeBox::vf10(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  int unaff_ESI;
  float *pfVar5;
  float *pfVar6;
  float local_40 [15];
  
  local_40[0] = 1.0;
  local_40[1] = 0.0;
  iVar1 = param_1 + 0x50;
  local_40[2] = 0.0;
  pfVar5 = local_40;
  pfVar2 = (float *)(param_1 + 0xe0);
  D3DXVec3TransformNormal(pfVar2,pfVar5,iVar1);
  *pfVar2 = *pfVar2 + *(float *)(param_1 + 0x80);
  pfVar4 = (float *)(param_1 + 0xf0);
  *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0xe4);
  *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0xe8);
  local_40[1] = 0.0;
  local_40[2] = 1.0;
  local_40[3] = 0.0;
  D3DXVec3TransformNormal(pfVar4,local_40 + 1,iVar1);
  *pfVar4 = *(float *)(param_1 + 0x80) + *pfVar4;
  *(float *)(param_1 + 0xf4) = *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0xf8) = *(float *)(param_1 + 0x88) + *(float *)(param_1 + 0xf8);
  local_40[2] = 0.0;
  local_40[3] = 0.0;
  local_40[4] = 1.0;
  D3DXVec3TransformNormal(unaff_ESI + 0x100,local_40 + 2,iVar1);
  pfVar6 = pfVar5;
  *pfVar5 = *pfVar5 + *(float *)(param_1 + 0x80);
  pfVar5[1] = *(float *)(param_1 + 0x84) + pfVar5[1];
  pfVar5[2] = *(float *)(param_1 + 0x88) + pfVar5[2];
  fVar3 = *(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0xe4) + *pfVar2 * *pfVar2 +
          *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0xe8);
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(pfVar2,pfVar2);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    *pfVar2 = 0.0;
    *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  fVar3 = *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0xf4) + *pfVar4 * *pfVar4 +
          *(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xf8);
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(pfVar4,pfVar4);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    *pfVar4 = 0.0;
    *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  fVar3 = pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6 + pfVar6[2] * pfVar6[2];
  if (fVar3 < 0.0 != (fVar3 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    *pfVar6 = 0.0;
    pfVar6[1] = 1.0;
    pfVar6[2] = 0.0;
    return;
  }
  FUN_00ddf460(pfVar6,pfVar6);
  return;
}

// 00A6C0A0  ShapeBox::vf14  size=118  [class]
void __fastcall ShapeBox::vf14(int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x30);
  *(undefined2 *)(iVar2 + 4) = 0x30;
  uStack_24 = *(undefined4 *)(param_1 + 0xd0);
  uStack_20 = *(undefined4 *)(param_1 + 0xd4);
  uStack_1c = *(undefined4 *)(param_1 + 0xd8);
  uStack_18 = *(undefined4 *)(param_1 + 0xdc);
  hkpBoxShape::hkpBoxShape(&uStack_24,DAT_01b20754);
  return;
}

// 00A6C9E0  ShapeBox::vf1C  size=52  [class]
byte __thiscall ShapeBox::vf1C(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_00a6c680(param_2,&DAT_01662d6c,param_1);
  bVar2 = FUN_00a6a060(param_2,"extent",param_1 + 0xd0);
  return bVar2 & bVar1;
}

// 00A6CB40  ShapeBox::vf04  size=52  [class]
undefined4 * ShapeBox::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("ShapeBox",8);
  uVar1 = FUN_008d93a0(uVar1,"ShapeBox",8);
  *param_1 = uVar1;
  return param_1;
}

