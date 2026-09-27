// src/misc/cMesh.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A11E20..00A11F50, 2 functions

#include "mgrr.h"
#include "cMesh.h"

// 00A11E20  cMesh::cMesh  size=290  [class]
undefined4 __thiscall cMesh::cMesh(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_2 + 0x68);
  if ((int)uVar1 < 1) {
    return 1;
  }
  uVar5 = -(uint)((int)((ulonglong)uVar1 * 0x70 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x70);
  puVar2 = (uint *)FUN_00dd3580(-(uint)(0xffffffef < uVar5) | uVar5 + 0x10,param_3);
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    iVar7 = uVar1 - 1;
    puVar3 = puVar2 + 4;
    *puVar2 = uVar1;
    if (-1 < iVar7) {
      puVar2 = puVar2 + 10;
      puVar6 = puVar3;
      do {
        puVar2[-2] = 0x3f800000;
        puVar2[-1] = 0x3f800000;
        iVar7 = iVar7 + -1;
        *puVar2 = 0x3f800000;
        puVar2[1] = 0x3f800000;
        puVar2[2] = 0x3f800000;
        puVar2[3] = 0x3f800000;
        puVar2[4] = 0x3f800000;
        puVar2[5] = 0x3f800000;
        puVar2[0x12] = 0;
        puVar2[8] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[0x14] = 0;
        puVar2[0x15] = 0;
        puVar2[0x13] = 0;
        *puVar6 = (uint)vftable;
        puVar2 = puVar2 + 0x1c;
        puVar6 = puVar6 + 0x1c;
      } while (-1 < iVar7);
    }
  }
  *(uint **)(param_1 + 800) = puVar3;
  if (puVar3 != (uint *)0x0) {
    *(short *)(param_1 + 0x324) = (short)uVar1;
    iVar7 = *(int *)(param_2 + 100);
    iVar8 = 0;
    iVar9 = iVar7;
    if (0 < (int)uVar1) {
      do {
        iVar4 = FUN_00a08f70(iVar9,*(undefined4 *)(param_1 + 0x328),param_3);
        if (iVar4 == 0) {
          return 0;
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 0x50;
      } while (iVar8 < (int)uVar1);
    }
    *(int *)(param_1 + 0x36c) = iVar7;
    return 1;
  }
  return 0;
}

// 00A11F50  cMesh::vf00  size=185  [class]
int __thiscall cMesh::vf00(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 & 2) == 0) {
    cMeshBase::cMeshBase_2();
    if ((param_2 & 1) != 0) {
      FUN_00dd4920(param_1);
    }
    return param_1;
  }
  iVar1 = *(int *)(param_1 + -0x10) + -1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + -0x10) * 0x70 + 0x18 + param_1);
    do {
      puVar2[-0x22] = cMeshBase::vftable;
      if (puVar2[-0x16] != 0) {
        FUN_00dd4940(puVar2[-0x16]);
      }
      iVar1 = iVar1 + -1;
      puVar2[-0x1e] = 0x3f800000;
      puVar2[-0x1d] = 0x3f800000;
      puVar2[-0x1c] = 0x3f800000;
      puVar2[-0x1b] = 0x3f800000;
      puVar2[-0x1a] = 0x3f800000;
      puVar2[-0x19] = 0x3f800000;
      puVar2[-0x18] = 0x3f800000;
      puVar2[-0x17] = 0x3f800000;
      puVar2[-10] = 0;
      puVar2[-0x14] = 0;
      puVar2[-0x16] = 0;
      puVar2[-0x15] = 0;
      puVar2[-8] = 0;
      puVar2[-7] = 0;
      puVar2[-9] = 0;
      puVar2 = puVar2 + -0x1c;
    } while (-1 < iVar1);
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4940(param_1 + -0x10);
  }
  return param_1 + -0x10;
}

