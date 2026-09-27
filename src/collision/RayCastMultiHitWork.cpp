// src/collision/RayCastMultiHitWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090E450..009104A0, 6 functions

#include "mgrr.h"
#include "RayCastMultiHitWork.h"

// 0090E450  RayCastMultiHitWork::vf00  size=6  [class]
undefined * RayCastMultiHitWork::vf00(void)

{
  return &DAT_01b35de8;
}

// 0090E460  FUN_0090e460  size=4  [between]
undefined4 __fastcall FUN_0090e460(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}

// 0090E470  RayCastMultiHitWork::vf04  size=30  [class]
undefined4 __thiscall RayCastMultiHitWork::vf04(undefined4 param_1,byte param_2)

{
  hkpRayHitCollector::hkpRayHitCollector();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0090EF80  RayCastMultiHitWork::RayCastMultiHitWork_2  size=89  [class]
undefined4 * RayCastMultiHitWork::RayCastMultiHitWork_2(void)

{
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)FUN_00dd29b0(0x3a0,0x10,0,0);
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0x3a0);
  *(undefined4 *)((int)_Dst + 10) = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  *(undefined1 *)((int)_Dst + 0x1b) = 1;
  *_Dst = vftable;
  *(undefined1 *)(_Dst + 0x10) = 0;
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  hkpAllRayHitCollector::hkpAllRayHitCollector_8();
  return _Dst;
}

// 00910180  FUN_00910180  size=787  [callgraph]
void __thiscall FUN_00910180(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int local_10;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  iVar1 = *(int *)(param_2 + 0x14);
  iVar11 = *(int *)(param_1 + 0x14);
  if (iVar1 <= *(int *)(param_1 + 0x14)) {
    iVar11 = iVar1;
  }
  uVar5 = *(uint *)(param_1 + 0x18) & 0x3fffffff;
  if ((int)uVar5 < iVar1) {
    iVar9 = uVar5 * 2;
    if (iVar9 <= iVar1) {
      iVar9 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),iVar9,0x60);
  }
  iVar9 = *(int *)(param_2 + 0x10);
  iVar8 = *(int *)(param_1 + 0x10);
  if (0 < iVar11) {
    puVar6 = (undefined4 *)(iVar9 + 0x18);
    puVar7 = (undefined4 *)(iVar8 + 0x10);
    iVar13 = iVar11;
    do {
      uVar2 = puVar6[-5];
      uVar3 = puVar6[-4];
      uVar4 = puVar6[-3];
      puVar7[-4] = puVar6[-6];
      puVar7[-3] = uVar2;
      puVar7[-2] = uVar3;
      puVar7[-1] = uVar4;
      *puVar7 = *(undefined4 *)((iVar9 - iVar8) + (int)puVar7);
      puVar7[1] = puVar6[-1];
      puVar7[2] = *puVar6;
      puVar7[3] = puVar6[1];
      puVar7[4] = puVar6[2];
      puVar7[5] = puVar6[3];
      puVar7[6] = puVar6[4];
      puVar7[7] = puVar6[5];
      puVar7[8] = puVar6[6];
      puVar7[9] = puVar6[7];
      puVar7[10] = puVar6[8];
      puVar7[0xb] = puVar6[9];
      puVar7[0xc] = puVar6[10];
      puVar7[0x10] = puVar6[0xe];
      puVar6 = puVar6 + 0x18;
      puVar7 = puVar7 + 0x18;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  iVar8 = *(int *)(param_1 + 0x10) + iVar11 * 0x60;
  iVar13 = *(int *)(param_2 + 0x10) + iVar11 * 0x60;
  iVar11 = iVar1 - iVar11;
  iVar9 = 0;
  if (3 < iVar11) {
    puVar6 = (undefined4 *)(iVar8 + 0x70);
    puVar7 = (undefined4 *)(iVar13 + 0x78);
    local_10 = (iVar11 - 4U >> 2) + 1;
    iVar9 = local_10 * 4;
    do {
      if (puVar6 != (undefined4 *)0x70) {
        uVar2 = puVar7[-0x1d];
        uVar3 = puVar7[-0x1c];
        uVar4 = puVar7[-0x1b];
        puVar6[-0x1c] = puVar7[-0x1e];
        puVar6[-0x1b] = uVar2;
        puVar6[-0x1a] = uVar3;
        puVar6[-0x19] = uVar4;
        puVar6[-0x18] = puVar7[-0x1a];
        puVar6[-0x17] = puVar7[-0x19];
        puVar6[-0x16] = puVar7[-0x18];
        puVar6[-0x15] = puVar7[-0x17];
        puVar12 = puVar7 + -0x16;
        puVar14 = puVar6 + -0x14;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar6[-0xc] = puVar7[-0xe];
        puVar6[-8] = puVar7[-10];
      }
      if (puVar6 != (undefined4 *)0x10) {
        uVar2 = puVar7[-5];
        uVar3 = puVar7[-4];
        uVar4 = puVar7[-3];
        puVar6[-4] = puVar7[-6];
        puVar6[-3] = uVar2;
        puVar6[-2] = uVar3;
        puVar6[-1] = uVar4;
        *puVar6 = *(undefined4 *)((iVar13 - iVar8) + (int)puVar6);
        puVar6[1] = puVar7[-1];
        puVar6[2] = *puVar7;
        puVar6[3] = puVar7[1];
        puVar12 = puVar7 + 2;
        puVar14 = puVar6 + 4;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar6[0xc] = puVar7[10];
        puVar6[0x10] = puVar7[0xe];
      }
      if (puVar6 + 0x14 != (undefined4 *)0x0) {
        uVar2 = puVar7[0x13];
        uVar3 = puVar7[0x14];
        uVar4 = puVar7[0x15];
        puVar6[0x14] = puVar7[0x12];
        puVar6[0x15] = uVar2;
        puVar6[0x16] = uVar3;
        puVar6[0x17] = uVar4;
        puVar6[0x18] = puVar7[0x16];
        puVar6[0x19] = puVar7[0x17];
        puVar6[0x1a] = puVar7[0x18];
        puVar6[0x1b] = puVar7[0x19];
        puVar12 = puVar7 + 0x1a;
        puVar14 = puVar6 + 0x1c;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar6[0x24] = puVar7[0x22];
        puVar6[0x28] = puVar7[0x26];
      }
      if (puVar6 + 0x2c != (undefined4 *)0x0) {
        uVar2 = puVar7[0x2b];
        uVar3 = puVar7[0x2c];
        uVar4 = puVar7[0x2d];
        puVar6[0x2c] = puVar7[0x2a];
        puVar6[0x2d] = uVar2;
        puVar6[0x2e] = uVar3;
        puVar6[0x2f] = uVar4;
        puVar6[0x30] = puVar7[0x2e];
        puVar6[0x31] = puVar7[0x2f];
        puVar6[0x32] = puVar7[0x30];
        puVar6[0x33] = puVar7[0x31];
        puVar12 = puVar7 + 0x32;
        puVar14 = puVar6 + 0x34;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar6[0x3c] = puVar7[0x3a];
        puVar6[0x40] = puVar7[0x3e];
      }
      puVar6 = puVar6 + 0x60;
      puVar7 = puVar7 + 0x60;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (iVar11 <= iVar9) {
    *(int *)(param_1 + 0x14) = iVar1;
    return;
  }
  puVar6 = (undefined4 *)(iVar9 * 0x60 + 0x18 + iVar13);
  puVar7 = (undefined4 *)(iVar9 * 0x60 + 0x10 + iVar8);
  iVar11 = iVar11 - iVar9;
  do {
    if (puVar7 != (undefined4 *)0x10) {
      uVar2 = puVar6[-5];
      uVar3 = puVar6[-4];
      uVar4 = puVar6[-3];
      puVar7[-4] = puVar6[-6];
      puVar7[-3] = uVar2;
      puVar7[-2] = uVar3;
      puVar7[-1] = uVar4;
      *puVar7 = *(undefined4 *)((iVar13 - iVar8) + (int)puVar7);
      puVar7[1] = puVar6[-1];
      puVar7[2] = *puVar6;
      puVar7[3] = puVar6[1];
      puVar12 = puVar6 + 2;
      puVar14 = puVar7 + 4;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar7[0xc] = puVar6[10];
      puVar7[0x10] = puVar6[0xe];
    }
    puVar7 = puVar7 + 0x18;
    puVar6 = puVar6 + 0x18;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}

// 009104A0  RayCastMultiHitWork::RayCastMultiHitWork  size=275  [class]
/* WARNING: Removing unreachable block (ram,0x00910524) */
/* WARNING: Removing unreachable block (ram,0x00910547) */
/* WARNING: Removing unreachable block (ram,0x0091054e) */
/* WARNING: Removing unreachable block (ram,0x00910571) */
/* WARNING: Removing unreachable block (ram,0x00910555) */
/* WARNING: Removing unreachable block (ram,0x00910567) */
/* WARNING: Removing unreachable block (ram,0x00910558) */
/* WARNING: Removing unreachable block (ram,0x0091057e) */
/* WARNING: Removing unreachable block (ram,0x0091058a) */

undefined4
RayCastMultiHitWork::RayCastMultiHitWork
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  hkpAllRayHitCollector::hkpAllRayHitCollector_8();
  RayCastWork::set(0xffffffff,param_2,param_3,param_4,0,0,0,param_5,2,1,0);
  FUN_00906910();
  FUN_009053f0();
  hkpRayHitCollector::hkpRayHitCollector();
  return 0;
}

