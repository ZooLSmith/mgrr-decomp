// src/collision/CollisionMesh.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D776B0..00D7E080, 10 functions

#include "mgrr.h"
#include "CollisionMesh.h"

// 00D776B0  CollisionMesh::vf1C  size=3  [class]
float10 CollisionMesh::vf1C(void)

{
  return (float10)0;
}

// 00D776C0  CollisionMesh::vf24  size=1  [class]
void CollisionMesh::vf24(void)

{
  return;
}

// 00D776D0  FUN_00d776d0  size=13  [between]
void __thiscall FUN_00d776d0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x514) = param_2;
  return;
}

// 00D776E0  CollisionMesh::vf14  size=53  [class]
void __fastcall CollisionMesh::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = (-(uint)(*(int *)(param_1 + 0x35c) != 0) & 0x7fdfdfdf) + 0x80202020;
  if (*(int *)(param_1 + 0x41c) != 0) {
    iVar1 = -0x10000;
  }
  (**(code **)(*(int *)(param_1 + 0x440) + 0x18))(iVar1);
  return;
}

// 00D78DA0  CollisionMesh::detectionForPenetration  size=163  [class]
void __fastcall CollisionMesh::detectionForPenetration(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  FUN_004066f0();
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x510) + 0x2c);
  *(uint *)(*(int *)(param_1 + 0x510) + 0x2c) = *(int *)(param_1 + 0x370) << 0x10 | 0x1c;
  hkpAllCdPointCollector::hkpAllCdPointCollector_28
            (param_1 + 0x10,*(undefined4 *)(param_1 + 0x510),0x3c23d70a,
             "CollisionMesh::detectionForPenetration");
  *(undefined4 *)(*(int *)(param_1 + 0x510) + 0x2c) = uVar2;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 00D7D600  CollisionMesh::vf00  size=6  [class]
undefined * CollisionMesh::vf00(void)

{
  return &DAT_01dc5328;
}

// 00D7D610  CollisionMesh::vf04  size=52  [class]
undefined4 * CollisionMesh::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("CollisionMesh",0xd);
  uVar1 = FUN_008d93a0(uVar1,"CollisionMesh",0xd);
  *param_1 = uVar1;
  return param_1;
}

// 00D7D650  CollisionMesh::~CollisionMesh  size=28  [class]
void __fastcall CollisionMesh::~CollisionMesh(undefined4 *param_1)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase();
  Collision::~Collision();
  return;
}

// 00D7D670  CollisionMesh::vf08  size=49  [class]
undefined4 * __thiscall CollisionMesh::vf08(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  ShapeBase::ShapeBase();
  Collision::~Collision();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7E080  CollisionMesh::CollisionMesh  size=77  [class]
undefined4 * CollisionMesh::CollisionMesh(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x520,&DAT_01b7c0b8);
  if (puVar1 != (undefined4 *)0x0) {
    Collision::Collision(puVar1 + 0x110,param_1,param_2,param_3);
    *puVar1 = vftable;
    ShapeMesh::ShapeMesh();
    return puVar1;
  }
  return (undefined4 *)0x0;
}

