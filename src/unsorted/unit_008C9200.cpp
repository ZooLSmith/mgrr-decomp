// src/unsorted/unit_008C9200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008C9200..008C93C0, 2 functions

#include "mgrr.h"

// 008C9200  FUN_008c9200  size=443  [run]
void __fastcall FUN_008c9200(int param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  int *piStack_204;
  int iStack_1f0;
  undefined1 auStack_1ec [40];
  undefined1 auStack_1c4 [8];
  undefined1 auStack_1bc [80];
  undefined1 auStack_16c [360];
  
  piStack_204 = (int *)0x0;
  uStack_208 = 2;
  uStack_20c = 0x8c921a;
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>();
  uStack_208 = 0x8c9226;
  piStack_204 = (int *)(param_1 + 0x940);
  uStack_208 = CollisionAttackData::CollisionAttackData();
  uStack_20c = *(undefined4 *)(param_1 + 0xb9c);
  puStack_210 = (undefined1 *)0x1;
  piVar2 = (int *)CollisionCapsule::CollisionCapsule();
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 0x20);
    piVar2[0xe0] = *(int *)(param_1 + 0x940);
    piVar2[0xe3] = 1;
    uStack_208 = *(undefined4 *)(param_1 + 0xb9c);
    piStack_204 = (int *)0x0;
    uStack_20c = 0x1e;
    puStack_210 = (undefined1 *)0x8c9268;
    (*pcVar1)();
    puStack_210 = (undefined1 *)0xffffffff;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0));
    piVar2[0x165] = 0x3f4ccccd;
    puStack_210 = &stack0xfffffe04;
    piVar2[0x164] = 0x3e99999a;
    piVar2[0x160] = -0x4036f025;
    piVar2[0x161] = 0;
    piVar2[0x162] = 0;
    piVar2[0x163] = iStack_1f0;
    FUN_00d77c90();
    puStack_210 = *(undefined1 **)(param_1 + 0x760);
    FUN_00a8c370(piVar2);
    puStack_210 = (undefined1 *)0x8c92e8;
    FUN_00d7b0f0();
    puStack_210 = (undefined1 *)0x8c92ef;
    FUN_00d7b890();
    puStack_210 = (undefined1 *)0x8c92f6;
    FUN_008bc180();
    puStack_210 = (undefined1 *)0x0;
    uVar3 = FUN_00a7c8a0();
    FUN_004039a0(0,uVar3);
    puStack_210 = auStack_16c;
    FUN_00a963e0();
    puStack_210 = (undefined1 *)0xffffffff;
    FUN_00acb190(0x43c80000,0x3f800000);
    *(undefined4 *)(param_1 + 0x70) = 0x3fc00000;
    *(undefined4 *)(param_1 + 0x74) = 0x3fc00000;
    *(undefined4 *)(param_1 + 0x78) = 0x3fc00000;
    puStack_210 = *(undefined1 **)(param_1 + 0x78);
    D3DXMatrixScaling(auStack_1ec,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
    D3DXMatrixRotationZ(auStack_1bc,0x3fc90fdb);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    D3DXMatrixMultiply(&piStack_204,&piStack_204,auStack_1c4);
    D3DXMatrixMultiply(param_1 + 0x10,&puStack_210,param_1 + 0x10);
    *(float *)(param_1 + 0x78) = 1.0 / *(float *)(param_1 + 0x78);
  }
  return;
}

// 008C93C0  FUN_008c93c0  size=966  [run]
void __fastcall FUN_008c93c0(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float unaff_EDI;
  float10 fVar6;
  undefined1 *puVar7;
  float fStack_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [12];
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_2c;
  
  fStack_94 = 0.0;
  fStack_98 = 1.4013e-45;
  iVar4 = (**(code **)(*param_1 + 0x308))();
  if (iVar4 != 0) {
    FUN_00acc0a0();
    return;
  }
  fVar6 = (float10)(**(code **)(*param_1 + 0x24))();
  fVar2 = (float)fVar6;
  switch(param_1[0x186]) {
  case 0:
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
    param_1[0x360] = 0x41200000;
    param_1[0x186] = 1;
    FUN_008c9200();
    fVar6 = (float10)fVar2;
  case 1:
    piVar1 = param_1 + 4;
    fStack_88 = 0.0;
    fStack_84 = 0.0;
    fStack_80 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
    D3DXVec3TransformNormal(&fStack_88,&fStack_88,piVar1);
    fVar3 = (float)param_1[0x1e];
    fStack_94 = fStack_94 * fVar3;
    fStack_88 = fStack_88 * fVar3;
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_94);
    param_1[0x15] = (int)(unaff_EDI * fVar3 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x16] + fVar2 * fVar3);
    param_1[0x17] = (int)(fStack_88 + (float)param_1[0x17]);
    fVar6 = (float10)FUN_00fdc1f0();
    puVar7 = auStack_64;
    param_1[0x2e4] = (int)(float)(fVar6 * (float10)(float)param_1[0x2e4]);
    D3DXMatrixRotationZ(puVar7,(float)param_1[0x3c8] * 0.5235988);
    D3DXMatrixMultiply(piVar1,auStack_6c,piVar1);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x2fc] = (int)((float)param_1[0x2fc] - (float)puVar7);
    fVar2 = (float)param_1[0x360];
    param_1[0x360] = (int)(fVar2 - (float)puVar7);
    if (fVar2 - (float)puVar7 < 0.0) {
      param_1[0x186] = 2;
      iVar4 = FUN_00a93530(0);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x510) = 0x3e4ccccd;
      }
    }
    break;
  case 2:
    piVar1 = param_1 + 4;
    fStack_88 = 0.0;
    fStack_84 = (float)((float10)0.005 * fVar6);
    fStack_80 = (float)(fVar6 * (float10)(float)param_1[0x2e4]);
    D3DXVec3TransformNormal(&fStack_88,&fStack_88,piVar1);
    param_1[0x244] = param_1[0x14];
    param_1[0x245] = param_1[0x15];
    param_1[0x246] = param_1[0x16];
    param_1[0x247] = param_1[0x17];
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_94);
    param_1[0x15] = (int)(unaff_EDI + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x16] + fVar2);
    param_1[0x17] = (int)((float)param_1[0x17] + fStack_88);
    fVar6 = (float10)FUN_00fdc1f0();
    puVar7 = auStack_64;
    param_1[0x2e4] = (int)(float)(fVar6 * (float10)(float)param_1[0x2e4]);
    D3DXMatrixRotationZ(puVar7,(float)param_1[0x3c8] * 0.5235988);
    D3DXMatrixMultiply(piVar1,auStack_6c,piVar1);
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    fVar2 = (float)param_1[0x2fc];
    param_1[0x2fc] = (int)(fVar2 - (float)puVar7);
    if (fVar2 - (float)puVar7 < 0.0) {
      param_1[0x186] = 3;
      return;
    }
    break;
  case 3:
    FUN_00c76f00();
    iStack_58 = param_1[0x14];
    iStack_2c = param_1[0x239];
    iStack_54 = param_1[0x15];
    iStack_50 = param_1[0x16];
    iStack_4c = param_1[0x17];
    iStack_48 = param_1[0x24];
    iStack_44 = param_1[0x25];
    iStack_40 = param_1[0x26];
    iStack_3c = param_1[0x27];
    (**(code **)(*param_1 + 0x318))(&iStack_58);
    param_1[0x186] = param_1[0x186] + 1;
    goto LAB_008c9757;
  case 4:
LAB_008c9757:
    param_1[0x2fc] = 0x3f800000;
    FUN_00acc2f0(0x3f800000,0);
    param_1[0x3c4] = 1;
    param_1[0x139] = 1;
    return;
  default:
    return;
  }
  fStack_98 = (float)param_1[0x244];
  fStack_94 = (float)param_1[0x245];
  fStack_88 = (float)param_1[0x14] - fStack_98;
  fStack_84 = (float)param_1[0x15] - fStack_94;
  fStack_80 = (float)param_1[0x16] - (float)param_1[0x246];
  fStack_7c = (float)param_1[0x17] - (float)param_1[0x247];
  uVar5 = FUN_009f8b40();
  FUN_00acb320(&fStack_98,0x3cf5c28f,&fStack_88,uVar5);
  return;
}

