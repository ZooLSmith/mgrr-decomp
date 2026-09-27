// src/unsorted/unit_009021F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009021F0..009021F0, 1 functions

#include "types.h"

// 009021F0  FUN_009021f0  size=2816  [run]
int FUN_009021f0(uint param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  LPVOID pvVar5;
  int iVar6;
  uint *puVar7;
  undefined4 unaff_retaddr;
  
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  iVar6 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0xd0);
  *(undefined2 *)(iVar6 + 4) = 0xd0;
  iVar6 = hkpAabbPhantom::~hkpAabbPhantom(unaff_retaddr,param_1 & 0x1f | param_2 << 0x10);
  FUN_004066f0();
  if (param_3 != 0) {
    FUN_01194450(iVar6);
    FUN_010060a0();
  }
  FUN_008f8ac0(iVar6);
  if (iVar6 != 0) {
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 1) == 0)) {
      *puVar7 = *puVar7 | 1;
      puVar7[2] = 0;
    }
    pvVar4 = ThreadLocalStoragePointer;
    iVar2 = _tls_index;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 2) == 0)) {
      *puVar7 = *puVar7 | 2;
      puVar7[3] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 4) == 0)) {
      *puVar7 = *puVar7 | 4;
      puVar7[4] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 8) == 0)) {
      *puVar7 = *puVar7 | 8;
      puVar7[5] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x10) == 0)) {
      *puVar7 = *puVar7 | 0x10;
      puVar7[6] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x20) == 0)) {
      *puVar7 = *puVar7 | 0x20;
      puVar7[7] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x40) == 0)) {
      *puVar7 = *puVar7 | 0x40;
      puVar7[8] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x200) == 0)) {
      *puVar7 = *puVar7 | 0x200;
      puVar7[0xb] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x400) == 0)) {
      *puVar7 = *puVar7 | 0x400;
      puVar7[0xc] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x8000) == 0)) {
      *puVar7 = *puVar7 | 0x8000;
      puVar7[0x11] = 0xffffffff;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x800) == 0)) {
      *puVar7 = *puVar7 | 0x800;
      puVar7[0xd] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x1000) == 0)) {
      *puVar7 = *puVar7 | 0x1000;
      puVar7[0xe] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x2000) == 0)) {
      *puVar7 = *puVar7 | 0x2000;
      puVar7[0xf] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x4000) == 0)) {
      *puVar7 = *puVar7 | 0x4000;
      puVar7[0x10] = 0xffffffff;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x20000) == 0)) {
      *puVar7 = *puVar7 | 0x20000;
      puVar7[0x13] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x40000) == 0)) {
      *puVar7 = *puVar7 | 0x40000;
      puVar7[0x14] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x80000) == 0)) {
      *puVar7 = *puVar7 | 0x80000;
      puVar7[0x15] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x100000) == 0)) {
      *puVar7 = *puVar7 | 0x100000;
      puVar7[0x16] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x800000) == 0)) {
      *puVar7 = *puVar7 | 0x800000;
      puVar7[0x19] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x200000) == 0)) {
      *puVar7 = *puVar7 | 0x200000;
      puVar7[0x17] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x400000) == 0)) {
      *puVar7 = *puVar7 | 0x400000;
      puVar7[0x18] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x1000000) == 0)) {
      *puVar7 = *puVar7 | 0x1000000;
      puVar7[0x1a] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x2000000) == 0)) {
      *puVar7 = *puVar7 | 0x2000000;
      puVar7[0x1b] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x4000000) == 0)) {
      *puVar7 = *puVar7 | 0x4000000;
      puVar7[0x1c] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x8000000) == 0)) {
      *puVar7 = *puVar7 | 0x8000000;
      puVar7[0x1d] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x10000000) == 0)) {
      *puVar7 = *puVar7 | 0x10000000;
      puVar7[0x1e] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x20000000) == 0)) {
      *puVar7 = *puVar7 | 0x20000000;
      puVar7[0x1f] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x40000000) == 0)) {
      *puVar7 = *puVar7 | 0x40000000;
      puVar7[0x20] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar6 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
      *(undefined4 *)(iVar2 + 0x88) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar6 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 1 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 2;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar6 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 2 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 4;
      *(undefined4 *)(iVar2 + 0x90) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar6 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 3 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 8;
      *(undefined4 *)(iVar2 + 0x94) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar6 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 6 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x40;
      *(undefined4 *)(iVar2 + 0xa0) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar6 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 7 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x80;
      *(undefined4 *)(iVar2 + 0xa4) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar6 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 4 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x10;
      *(undefined4 *)(iVar2 + 0x98) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar6 + 0xc);
    if ((puVar7 != (uint *)0x0) && (-1 < (int)*puVar7)) {
      *puVar7 = *puVar7 | 0x80000000;
      puVar7[0x21] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar6 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 5 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x20;
      *(undefined4 *)(iVar2 + 0x9c) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar6 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 8 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x100;
      *(undefined4 *)(iVar2 + 0xa8) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = (uint *)(-(uint)(*(uint *)(iVar6 + 0xc) != 0) & *(uint *)(iVar6 + 0xc));
    *puVar7 = *puVar7 | 0x20;
    puVar7[7] = 1;
    FUN_00406760();
  }
  FUN_004066f0();
  if ((iVar6 != 0) && (uVar3 = *(uint *)(iVar6 + 0xc), uVar3 != 0)) {
    puVar7 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
    *puVar7 = *puVar7 | 1;
    puVar7[2] = puVar7[2] | 0x10;
  }
  FUN_00406760();
  FUN_004066f0();
  if ((iVar6 != 0) && (uVar3 = *(uint *)(iVar6 + 0xc), uVar3 != 0)) {
    puVar7 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
    *puVar7 = *puVar7 | 1;
    puVar7[2] = puVar7[2] | 0x2000;
  }
  FUN_00406760();
  FUN_00406760();
  return iVar6;
}

