// src/managers/phantommanager/PhantomManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00900440..00904230, 12 functions

#include "types.h"

// 00900440  PhantomManagerImplement::vf20  size=31  [class]
undefined4 * __thiscall PhantomManagerImplement::vf20(undefined4 *param_1,byte param_2)

{
  *param_1 = PhantomManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00900E30  PhantomManagerImplement::vf1C  size=49  [class]
void PhantomManagerImplement::vf1C(int param_1)

{
  int *piVar1;
  undefined **local_c;
  undefined4 local_8;
  int local_4;
  
  piVar1 = (int *)FUN_0092c170();
  local_8 = *(undefined4 *)(param_1 + 8);
  local_4 = param_1;
  local_c = HkRemovePhantom::vftable;
  (**(code **)(*piVar1 + 0x18))(&local_c);
  return;
}

// 00900E70  PhantomManagerImplement::PhantomManagerImplement  size=57  [class]
bool PhantomManagerImplement::PhantomManagerImplement(void)

{
  DAT_01b35dd8 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7bd48);
  if (DAT_01b35dd8 != (undefined4 *)0x0) {
    *DAT_01b35dd8 = vftable;
    return DAT_01b35dd8 != (undefined4 *)0x0;
  }
  DAT_01b35dd8 = (undefined4 *)0x0;
  return false;
}

// 00902CF0  FUN_00902cf0  size=2881  [callgraph]
int FUN_00902cf0(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5)

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
  iVar6 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x160);
  *(undefined2 *)(iVar6 + 4) = 0x160;
  iVar6 = hkpSimpleShapePhantom::~hkpSimpleShapePhantom
                    (unaff_retaddr,param_1,param_2 & 0x1f | param_3 << 0x10);
  FUN_010060a0();
  FUN_004066f0();
  if (param_4 != 0) {
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
  if (param_5 != 0) {
    FUN_004066f0();
    if ((iVar6 != 0) && (uVar3 = *(uint *)(iVar6 + 0xc), uVar3 != 0)) {
      puVar7 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
      *puVar7 = *puVar7 | 1;
      puVar7[2] = puVar7[2] | 0x1000;
    }
    FUN_00406760();
  }
  FUN_00406760();
  return iVar6;
}

// 00903840  PhantomManagerImplement::thunk_vf18  size=5  [class]
int PhantomManagerImplement::thunk_vf18(uint param_1,int param_2,int param_3)

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

// 00903850  PhantomManagerImplement::vf10  size=674  [class]
void PhantomManagerImplement::vf10
               (undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_ac;
  float local_a8;
  float local_a0;
  undefined1 auStack_98 [8];
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  local_108 = param_2[9];
  if ((param_2[10] * param_2[10] + local_108 * local_108 + param_2[8] * param_2[8]) *
      (param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]) *
      (param_2[5] * param_2[5] + param_2[4] * param_2[4] + param_2[6] * param_2[6]) == 1.0) {
    uVar3 = 0;
  }
  else {
    local_c0 = param_2[0xc];
    uVar3 = 1;
    local_bc = param_2[0xd];
    local_b8 = param_2[0xe];
    local_ac = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
    local_a8 = SQRT(param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6]);
    fVar2 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
    fVar1 = param_2[6];
    local_108 = param_2[10] / fVar2;
    fVar4 = (float10)FUN_00ddbaa0(-(param_2[2] / fVar2));
    local_104 = (float)fVar4;
    fVar5 = (float10)fpatan((float10)(fVar1 / fVar2),(float10)local_108);
    local_a0 = (float)fVar5;
    fVar6 = (float10)fpatan((float10)param_2[1] / (float10)local_a8,
                            (float10)*param_2 / (float10)local_ac);
    fVar5 = (float10)0;
    local_c8 = (float)fVar5;
    local_cc = (float)fVar5;
    local_d0 = (float)fVar5;
    local_d4 = (float)fVar5;
    local_dc = (float)fVar5;
    local_e0 = (float)fVar5;
    local_e4 = (float)fVar5;
    local_e8 = (float)fVar5;
    local_f0 = (float)fVar5;
    local_f4 = (float)fVar5;
    local_f8 = (float)fVar5;
    local_fc = (float)fVar5;
    local_c4 = 0x3f800000;
    local_d8 = 0x3f800000;
    local_ec = 0x3f800000;
    local_100 = 1.0;
    if (fVar5 != fVar6) {
      D3DXMatrixRotationZ(local_90,(float)fVar6);
      D3DXMatrixMultiply(&local_108,auStack_98,&local_108);
      fVar4 = (float10)local_104;
    }
    if ((float10)0 != fVar4) {
      D3DXMatrixRotationY(local_90,(float)fVar4);
      D3DXMatrixMultiply(&local_108,auStack_98,&local_108);
    }
    if (local_a0 != 0.0) {
      D3DXMatrixRotationX(local_90,local_a0);
      D3DXMatrixMultiply(&local_108,auStack_98,&local_108);
    }
    local_d0 = local_c0;
    param_2 = &local_100;
    local_cc = local_bc;
    local_c8 = local_b8;
  }
  FUN_01005190(param_2);
  FUN_00902cf0(param_1,local_50,param_3,param_4,param_5,uVar3);
  return;
}

// 00903B00  FUN_00903b00  size=238  [callgraph]
void FUN_00903b00(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  FUN_00ddb590(&local_70,param_3);
  local_60 = local_70;
  uStack_5c = local_6c;
  uStack_58 = local_68;
  uStack_54 = local_64;
  local_50 = 0x3f800000;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0x3f800000;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0x3f800000;
  uStack_24 = 0;
  local_20 = uVar1;
  uStack_1c = uVar2;
  uStack_18 = uVar3;
  uStack_14 = uVar4;
  FUN_0100ac20(&local_60);
  FUN_00902cf0(param_1,&local_50,param_4,param_5,param_6,1);
  return;
}

// 00903F70  PhantomManagerImplement::vf00  size=191  [class]
void PhantomManagerImplement::vf00
               (undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  uStack_2c = param_3[1];
  local_30 = *param_3;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar2 + 4) = 0x40;
  uVar3 = hkpCapsuleShape::hkpCapsuleShape(&uStack_24,auStack_34,param_4);
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  FUN_00903b00(uVar3,param_1,&uStack_44,param_5,param_6,param_7);
  return;
}

// 00904030  PhantomManagerImplement::vf04  size=109  [class]
void PhantomManagerImplement::vf04
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
  *(undefined2 *)(iVar2 + 4) = 0x20;
  uVar3 = hkpSphereShape::hkpSphereShape(param_2);
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_00903b00(uVar3,param_1,&uStack_24,param_3,param_4,param_5);
  return;
}

// 009040A0  PhantomManagerImplement::vf0C  size=203  [class]
void PhantomManagerImplement::vf0C
               (undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  uStack_28 = param_3[2];
  uStack_24 = param_3[3];
  uStack_2c = param_3[1];
  local_30 = *param_3;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x60);
  *(undefined2 *)(iVar2 + 4) = 0x60;
  uVar3 = hkpCylinderShape::hkpCylinderShape(&uStack_24,auStack_34,param_4,DAT_01b20754);
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  FUN_00903b00(uVar3,param_1,&uStack_44,param_5,param_6,param_7);
  return;
}

// 00904170  PhantomManagerImplement::vf08  size=184  [class]
void PhantomManagerImplement::vf08
               (undefined4 param_1,undefined4 param_2,float *param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = *param_3 * 0.5;
  fStack_1c = param_3[1] * 0.5;
  fStack_18 = param_3[2] * 0.5;
  fStack_14 = param_3[3] * 0.5;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x30);
  *(undefined2 *)(iVar2 + 4) = 0x30;
  uVar3 = hkpBoxShape::hkpBoxShape(auStack_24,DAT_01b20754);
  FUN_00903b00(uVar3,param_1,param_2,param_4,param_5,param_6);
  return;
}

// 00904230  PhantomManagerImplement::thunk_vf14  size=5  [class]
void PhantomManagerImplement::thunk_vf14
               (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  FUN_00ddb590(&uStack_70,param_3);
  uStack_60 = uStack_70;
  uStack_5c = uStack_6c;
  uStack_58 = uStack_68;
  uStack_54 = uStack_64;
  uStack_50 = 0x3f800000;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = uVar1;
  uStack_1c = uVar2;
  uStack_18 = uVar3;
  uStack_14 = uVar4;
  FUN_0100ac20(&uStack_60);
  FUN_00902cf0(param_1,&uStack_50,param_4,param_5,param_6,1);
  return;
}

