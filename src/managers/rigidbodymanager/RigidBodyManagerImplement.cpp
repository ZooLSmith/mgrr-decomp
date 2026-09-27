// src/managers/rigidbodymanager/RigidBodyManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00913FC0..00926500, 14 functions

#include "types.h"

// 00913FC0  RigidBodyManagerImplement::vf2C  size=23  [class]
void __thiscall RigidBodyManagerImplement::vf2C(int *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 0x28))(param_2);
  *param_2 = 0;
  return;
}

// 00919570  RigidBodyManagerImplement::vf34  size=161  [class]
void __fastcall RigidBodyManagerImplement::vf34(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined **local_c;
  undefined4 local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 4);
    if (puVar3 != puVar3 + *(int *)(iVar1 + 8)) {
      do {
        piVar2 = (int *)FUN_0092c170();
        local_4 = *(int *)*puVar3;
        local_8 = *(undefined4 *)(local_4 + 8);
        local_c = HkRemoveEntity::vftable;
        (**(code **)(*piVar2 + 0x1c))(&local_c);
        puVar3 = puVar3 + 1;
        local_c = HkRemoveContainer::vftable;
      } while (puVar3 != (undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x70) + 4) +
                         *(int *)(*(int *)(param_1 + 0x70) + 8) * 4));
    }
    if (*(int *)(*(int *)(param_1 + 0x70) + 4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x70) + 8) = 0;
    }
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  }
  return;
}

// 00919620  RigidBodyManagerImplement::vf28  size=249  [class]
void __thiscall RigidBodyManagerImplement::vf28(int param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined **local_c;
  undefined4 local_8;
  int local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((*param_2 == 0) || (iVar2 = *(int *)(param_1 + 0x70), iVar2 == 0)) {
    if (*(int *)(param_1 + 0x90) != 0) {
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  else {
    puVar7 = *(undefined4 **)(iVar2 + 4);
    if (puVar7 != puVar7 + *(int *)(iVar2 + 8)) {
      puVar1 = puVar7 + *(int *)(iVar2 + 8);
LAB_00919683:
      piVar3 = (int *)*puVar7;
      if (*param_2 != *piVar3) goto code_r0x00919689;
      piVar6 = (int *)FUN_0092c170();
      local_4 = *piVar3;
      local_8 = *(undefined4 *)(local_4 + 8);
      local_c = HkRemoveEntity::vftable;
      (**(code **)(*piVar6 + 0x1c))(&local_c);
      iVar2 = *(int *)(param_1 + 0x70);
      uVar4 = *(uint *)(iVar2 + 8);
      iVar5 = *(int *)(iVar2 + 4);
      puVar1 = (undefined4 *)(iVar5 + uVar4 * 4);
      if ((((puVar7 != puVar1) && (iVar5 != 0)) && (uVar4 != 0)) &&
         ((uint)((int)puVar7 - iVar5 >> 2) < uVar4)) {
        for (; puVar7 != puVar1 + -1; puVar7 = puVar7 + 1) {
          *puVar7 = puVar7[1];
        }
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
      }
      FUN_00dd4920(piVar3);
    }
LAB_00919702:
    if (*(int *)(param_1 + 0x90) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
code_r0x00919689:
  puVar7 = puVar7 + 1;
  if (puVar7 == puVar1) goto LAB_00919702;
  goto LAB_00919683;
}

// 0091FD10  FUN_0091fd10  size=3354  [callgraph]
undefined4 __thiscall
FUN_0091fd10(int param_1,uint *param_2,int *param_3,int *param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  LPVOID pvVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  LPCRITICAL_SECTION unaff_EDI;
  int *unaff_retaddr;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  }
  if ((float)param_3[0x24] == 0.0) {
    *(undefined1 *)(param_3 + 0x2d) = 5;
  }
  if (*param_3 == 0) {
    *param_3 = 0;
  }
  iVar7 = param_4[1];
  iVar2 = param_4[2];
  iVar4 = param_4[3];
  param_3[4] = *param_4;
  param_3[5] = iVar7;
  param_3[6] = iVar2;
  param_3[7] = iVar4;
  FUN_00ddb590(param_3 + 8,param_5);
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  iVar7 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(0x220);
  *(undefined2 *)(iVar7 + 4) = 0x220;
  iVar7 = hkpRigidBody::~hkpRigidBody(param_3);
  *unaff_retaddr = iVar7;
  if (iVar7 == 0) {
    FUN_00dd5650(&DAT_0164d0b4);
    if (*(int *)(param_1 + 0x90) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
    }
    return 0;
  }
  FUN_008f8ac0(iVar7);
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 1) == 0)) {
    *puVar8 = *puVar8 | 1;
    puVar8[2] = 0;
  }
  pvVar5 = ThreadLocalStoragePointer;
  iVar2 = _tls_index;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 2) == 0)) {
    *puVar8 = *puVar8 | 2;
    puVar8[3] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 4) == 0)) {
    *puVar8 = *puVar8 | 4;
    puVar8[4] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 8) == 0)) {
    *puVar8 = *puVar8 | 8;
    puVar8[5] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x10) == 0)) {
    *puVar8 = *puVar8 | 0x10;
    puVar8[6] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x20) == 0)) {
    *puVar8 = *puVar8 | 0x20;
    puVar8[7] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x40) == 0)) {
    *puVar8 = *puVar8 | 0x40;
    puVar8[8] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x200) == 0)) {
    *puVar8 = *puVar8 | 0x200;
    puVar8[0xb] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x400) == 0)) {
    *puVar8 = *puVar8 | 0x400;
    puVar8[0xc] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x8000) == 0)) {
    *puVar8 = *puVar8 | 0x8000;
    puVar8[0x11] = 0xffffffff;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x800) == 0)) {
    *puVar8 = *puVar8 | 0x800;
    puVar8[0xd] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x1000) == 0)) {
    *puVar8 = *puVar8 | 0x1000;
    puVar8[0xe] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x2000) == 0)) {
    *puVar8 = *puVar8 | 0x2000;
    puVar8[0xf] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x4000) == 0)) {
    *puVar8 = *puVar8 | 0x4000;
    puVar8[0x10] = 0xffffffff;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x20000) == 0)) {
    *puVar8 = *puVar8 | 0x20000;
    puVar8[0x13] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x40000) == 0)) {
    *puVar8 = *puVar8 | 0x40000;
    puVar8[0x14] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x80000) == 0)) {
    *puVar8 = *puVar8 | 0x80000;
    puVar8[0x15] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x100000) == 0)) {
    *puVar8 = *puVar8 | 0x100000;
    puVar8[0x16] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x800000) == 0)) {
    *puVar8 = *puVar8 | 0x800000;
    puVar8[0x19] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar5 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x200000) == 0)) {
    *puVar8 = *puVar8 | 0x200000;
    puVar8[0x17] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x400000) == 0)) {
    *puVar8 = *puVar8 | 0x400000;
    puVar8[0x18] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x1000000) == 0)) {
    *puVar8 = *puVar8 | 0x1000000;
    puVar8[0x1a] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x2000000) == 0)) {
    *puVar8 = *puVar8 | 0x2000000;
    puVar8[0x1b] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x4000000) == 0)) {
    *puVar8 = *puVar8 | 0x4000000;
    puVar8[0x1c] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x8000000) == 0)) {
    *puVar8 = *puVar8 | 0x8000000;
    puVar8[0x1d] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x10000000) == 0)) {
    *puVar8 = *puVar8 | 0x10000000;
    puVar8[0x1e] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x20000000) == 0)) {
    *puVar8 = *puVar8 | 0x20000000;
    puVar8[0x1f] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && ((*puVar8 & 0x40000000) == 0)) {
    *puVar8 = *puVar8 | 0x40000000;
    puVar8[0x20] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar7 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
    *(undefined4 *)(iVar2 + 0x88) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar7 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 1 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 2;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar7 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 2 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 4;
    *(undefined4 *)(iVar2 + 0x90) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar7 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 3 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 8;
    *(undefined4 *)(iVar2 + 0x94) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar7 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 6 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x40;
    *(undefined4 *)(iVar2 + 0xa0) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar7 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 7 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x80;
    *(undefined4 *)(iVar2 + 0xa4) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar7 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 4 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x10;
    *(undefined4 *)(iVar2 + 0x98) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar8 = *(uint **)(iVar7 + 0xc);
  if ((puVar8 != (uint *)0x0) && (-1 < (int)*puVar8)) {
    *puVar8 = *puVar8 | 0x80000000;
    puVar8[0x21] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar7 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 5 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x20;
    *(undefined4 *)(iVar2 + 0x9c) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar7 = *(int *)(iVar7 + 0xc);
  if ((iVar7 != 0) && ((*(uint *)(iVar7 + 4) >> 8 & 1) == 0)) {
    *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) | 0x100;
    *(undefined4 *)(iVar7 + 0xa8) = 0;
  }
  FUN_00406760();
  iVar7 = *unaff_retaddr;
  if (iVar7 != 0) {
    FUN_004066f0();
    uVar3 = *(uint *)(iVar7 + 0xc);
    puVar8 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
    *puVar8 = *puVar8 | 0x10;
    puVar8[6] = 1;
    FUN_00406760();
  }
  iVar7 = *unaff_retaddr;
  uVar3 = param_2[0x24];
  if (iVar7 != 0) {
    FUN_004066f0();
    uVar9 = *(uint *)(iVar7 + 0xc);
    uVar9 = -(uint)(uVar9 != 0) & uVar9;
    puVar8 = (uint *)(uVar9 + 4);
    *puVar8 = *puVar8 | 2;
    *(uint *)(uVar9 + 0x8c) = uVar3;
    FUN_00406760();
  }
  iVar7 = *unaff_retaddr;
  FUN_004066f0();
  if ((iVar7 != 0) && (uVar3 = *(uint *)(iVar7 + 0xc), uVar3 != 0)) {
    puVar8 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
    *puVar8 = *puVar8 | 0x400;
    puVar8[0xc] = puVar8[0xc] | 0x200000;
  }
  FUN_00406760();
  iVar7 = *unaff_retaddr;
  FUN_004066f0();
  if ((iVar7 != 0) && (uVar3 = *(uint *)(iVar7 + 0xc), uVar3 != 0)) {
    puVar8 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
    *puVar8 = *puVar8 | 0x400;
    puVar8[0xc] = puVar8[0xc] | 8;
  }
  FUN_00406760();
  iVar7 = *unaff_retaddr;
  uVar3 = param_2[0x2d];
  if (iVar7 != 0) {
    FUN_004066f0();
    uVar9 = *(uint *)(iVar7 + 0xc);
    puVar8 = (uint *)(-(uint)(uVar9 != 0) & uVar9);
    *puVar8 = *puVar8 | 0x1000;
    puVar8[0xe] = (int)(char)uVar3;
    FUN_00406760();
  }
  uVar3 = *param_2;
  iVar7 = *unaff_retaddr;
  if (iVar7 != 0) {
    FUN_004066f0();
    uVar9 = *(uint *)(iVar7 + 0xc);
    puVar8 = (uint *)(-(uint)(uVar9 != 0) & uVar9);
    *puVar8 = *puVar8 | 0x2000;
    puVar8[0xf] = uVar3 & 0x1f;
    FUN_00406760();
  }
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  iVar7 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(8);
  if (iVar7 != 0) {
    iVar7 = RigidBodyCollisionListener::RigidBodyCollisionListener(*unaff_retaddr);
    if (iVar7 != 0) {
      if (param_4 != (int *)0x0) {
        FUN_004066f0();
        FUN_011929d0(*unaff_retaddr,1);
        FUN_010060a0();
        FUN_00406760();
      }
      if (unaff_EDI[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(unaff_EDI);
      }
      return 1;
    }
  }
  FUN_00dd5650(&DAT_0164d070);
  if (unaff_EDI[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(unaff_EDI);
  }
  return 0;
}

// 00920A30  RigidBodyManagerImplement::vf30  size=234  [class]
uint __thiscall RigidBodyManagerImplement::vf30(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (((param_2 != 0) && (uVar4 = *(uint *)(param_2 + 0xc), uVar4 != 0)) &&
     (uVar4 = *(uint *)((-(uint)(uVar4 != 0) & uVar4) + 0x50), uVar4 != 0)) {
LAB_00920b05:
    if (*(int *)(param_1 + 0x90) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return uVar4;
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x60);
  if (iVar3 != 0) {
    uVar4 = hkpEntityListener::hkpEntityListener_4(param_2);
    if (uVar4 != 0) {
      if (param_2 != 0) {
        FUN_004066f0();
        puVar5 = (uint *)(-(uint)(*(uint *)(param_2 + 0xc) != 0) & *(uint *)(param_2 + 0xc));
        *puVar5 = *puVar5 | 0x40000;
        puVar5[0x14] = uVar4;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      goto LAB_00920b05;
    }
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00920B20  FUN_00920b20  size=61  [callgraph]
void __fastcall FUN_00920b20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00920C00  FUN_00920c00  size=60  [callgraph]
void __fastcall FUN_00920c00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00920C60  FUN_00920c60  size=1086  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00920c60(float *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float local_130 [7];
  float local_114;
  float local_110;
  undefined4 *local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
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
  float afStack_b0 [12];
  undefined1 auStack_80 [16];
  float local_70;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  FUN_004066f0();
  local_104 = 1.0 / _DAT_01885d24;
  local_c0 = param_1[0xc];
  local_bc = param_1[0xd];
  local_b8 = param_1[0xe];
  local_130[0] = SQRT(param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2]);
  local_130[1] = SQRT(param_1[4] * param_1[4] + param_1[5] * param_1[5] + param_1[6] * param_1[6]);
  fVar6 = SQRT(param_1[10] * param_1[10] + param_1[9] * param_1[9] + param_1[8] * param_1[8]);
  local_114 = param_1[6] / fVar6;
  local_110 = param_1[10] / fVar6;
  fVar3 = (float10)FUN_00ddbaa0(-(param_1[2] / fVar6));
  local_108 = (float)fVar3;
  fVar4 = (float10)fpatan((float10)local_114,(float10)local_110);
  local_70 = (float)fVar4;
  fVar5 = (float10)fpatan((float10)param_1[1] / (float10)local_130[1],
                          (float10)*param_1 / (float10)local_130[0]);
  fVar4 = (float10)0;
  local_c8 = (float)fVar4;
  local_cc = (float)fVar4;
  local_d0 = (float)fVar4;
  local_d4 = (float)fVar4;
  local_dc = (float)fVar4;
  local_e0 = (float)fVar4;
  local_e4 = (float)fVar4;
  local_e8 = (float)fVar4;
  local_f0 = (float)fVar4;
  local_f4 = (float)fVar4;
  local_f8 = (float)fVar4;
  local_fc = (float)fVar4;
  local_c4 = 0x3f800000;
  local_d8 = 0x3f800000;
  local_ec = 0x3f800000;
  local_100 = 0x3f800000;
  if (fVar4 != fVar5) {
    D3DXMatrixRotationZ(local_50,(float)fVar5);
    D3DXMatrixMultiply(&local_108,&fStack_58,&local_108);
    fVar3 = (float10)local_108;
  }
  if ((float10)0 != fVar3) {
    D3DXMatrixRotationY(local_50,(float)fVar3);
    D3DXMatrixMultiply(&local_108,&fStack_58,&local_108);
  }
  if (local_70 != 0.0) {
    D3DXMatrixRotationX(local_50,local_70);
    D3DXMatrixMultiply(&local_108,&fStack_58,&local_108);
  }
  local_d0 = local_c0;
  local_cc = local_bc;
  local_c8 = local_b8;
  FUN_01005190(&local_100);
  fVar6 = afStack_b0[5] + afStack_b0[0] + afStack_b0[10];
  if (fVar6 <= 0.0) {
    local_130[0] = 1.4013e-45;
    local_130[1] = 2.8026e-45;
    local_130[2] = 0.0;
    uVar2 = (uint)(afStack_b0[0] < afStack_b0[5]);
    if (afStack_b0[uVar2 * 5] < afStack_b0[10]) {
      uVar2 = 2;
    }
    fVar6 = local_130[uVar2];
    fVar7 = local_130[(int)fVar6];
    fVar8 = SQRT((afStack_b0[uVar2 * 5] - (afStack_b0[(int)fVar7 * 5] + afStack_b0[(int)fVar6 * 5]))
                 + 1.0);
    fVar9 = 0.5 / fVar8;
    local_130[uVar2] = fVar8 * 0.5;
    local_130[3] = (afStack_b0[(int)fVar7 + (int)fVar6 * 4] -
                   afStack_b0[(int)fVar6 + (int)fVar7 * 4]) * fVar9;
    local_130[(int)fVar6] =
         (afStack_b0[uVar2 + (int)fVar6 * 4] + afStack_b0[(int)fVar6 + uVar2 * 4]) * fVar9;
    local_130[(int)fVar7] =
         (afStack_b0[uVar2 + (int)fVar7 * 4] + afStack_b0[(int)fVar7 + uVar2 * 4]) * fVar9;
  }
  else {
    local_130[3] = SQRT(fVar6 + 1.0);
    local_130[2] = 0.5 / local_130[3];
    local_130[0] = (afStack_b0[6] - afStack_b0[9]) * local_130[2];
    local_130[1] = (afStack_b0[8] - afStack_b0[2]) * local_130[2];
    local_130[2] = (afStack_b0[1] - afStack_b0[4]) * local_130[2];
    local_130[3] = local_130[3] * 0.5;
  }
  fVar6 = local_130[2] * local_130[2] + local_130[0] * local_130[0];
  fVar7 = local_130[3] * local_130[3] + local_130[1] * local_130[1];
  fVar8 = local_130[0] * local_130[0] + local_130[2] * local_130[2];
  fVar9 = local_130[1] * local_130[1] + local_130[3] * local_130[3];
  fVar10 = fVar7 + fVar6;
  fVar6 = fVar6 + fVar7;
  fVar7 = fVar9 + fVar8;
  fVar8 = fVar8 + fVar9;
  auVar11._4_4_ = fVar6;
  auVar11._0_4_ = fVar10;
  auVar11._8_4_ = fVar7;
  auVar11._12_4_ = fVar8;
  auVar11 = rsqrtps(in_XMM3,auVar11);
  fVar9 = auVar11._0_4_;
  fVar12 = auVar11._4_4_;
  fVar13 = auVar11._8_4_;
  fVar14 = auVar11._12_4_;
  fStack_60 = (3.0 - fVar9 * fVar10 * fVar9) * fVar9 * 0.5 * local_130[0];
  fStack_5c = (3.0 - fVar12 * fVar6 * fVar12) * fVar12 * 0.5 * local_130[1];
  fStack_58 = (3.0 - fVar13 * fVar7 * fVar13) * fVar13 * 0.5 * local_130[2];
  fStack_54 = (3.0 - fVar14 * fVar8 * fVar14) * fVar14 * 0.5 * local_130[3];
  FUN_008fa520(auStack_80,&fStack_60,local_104,*local_10c,param_2,param_3);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00921130  FUN_00921130  size=138  [callgraph]
void __thiscall FUN_00921130(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_004066f0();
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != puVar2 + *(int *)(param_1 + 0xc) * 6) {
    do {
      FUN_0091f260(*puVar2,param_2,1);
      puVar2 = puVar2 + 6;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 009211C0  FUN_009211c0  size=117  [callgraph]
void __fastcall FUN_009211c0(undefined4 *param_1)

{
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] << 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 009214A0  RigidBodyManagerImplement::vf24  size=214  [class]
undefined4 * __thiscall
RigidBodyManagerImplement::vf24
          (undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5
          ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_4;
  
  local_4 = param_1;
  if (param_1[0x24] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  }
  iVar1 = FUN_00dd2ba0(8,1);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00dd2bc0();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
  }
  local_4 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    *param_2 = 0;
  }
  else {
    *(undefined4 *)(param_3 + 4) = param_4;
    iVar1 = FUN_0091fd10(puVar2,param_3,param_5,param_6,param_7);
    if (iVar1 == 0) {
      if (local_4 != (undefined4 *)0x0) {
        FUN_00dd4920(local_4);
        local_4 = (undefined4 *)0x0;
      }
      *param_2 = 0;
    }
    else {
      FUN_010060a0();
      if (param_1[0x1c] != 0) {
        (**(code **)(*(int *)param_1[0x1c] + 8))(&local_4);
      }
      *param_2 = *local_4;
    }
  }
  if (param_1[0x24] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  }
  return param_2;
}

// 00921580  RigidBodyManagerImplement::vf20  size=313  [class]
undefined4 * __thiscall
RigidBodyManagerImplement::vf20
          (undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5
          ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  undefined4 *local_4;
  
  local_4 = param_1;
  if (param_1[0x24] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  }
  iVar1 = FUN_00dd2ba0(8,1);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00dd2bc0();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
  }
  local_4 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    *param_2 = 0;
    goto LAB_009216a3;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  iVar1 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x70);
  *(undefined2 *)(iVar1 + 4) = 0x70;
  iVar1 = hkpListShape::hkpListShape_2(param_4,param_5,1);
  if (iVar1 == 0) {
    if (local_4 != (undefined4 *)0x0) {
      FUN_00dd4920(local_4);
      local_4 = (undefined4 *)0x0;
    }
  }
  else {
    *(int *)(param_3 + 4) = iVar1;
    iVar1 = FUN_0091fd10(local_4,param_3,param_6,param_7,param_8);
    if (iVar1 != 0) {
      FUN_010060a0();
      if (param_1[0x1c] != 0) {
        (**(code **)(*(int *)param_1[0x1c] + 8))(&local_4);
      }
      *param_2 = *local_4;
      goto LAB_009216a3;
    }
    FUN_010060a0();
    if (local_4 != (undefined4 *)0x0) {
      FUN_00dd4920(local_4);
      local_4 = (undefined4 *)0x0;
      *param_2 = 0;
      goto LAB_009216a3;
    }
  }
  *param_2 = 0;
LAB_009216a3:
  if (param_1[0x24] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  }
  return param_2;
}

// 009264E0  RigidBodyManagerImplement::vf00  size=30  [class]
undefined4 __thiscall RigidBodyManagerImplement::vf00(undefined4 param_1,byte param_2)

{
  HkRemoveContainer::HkRemoveContainer();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00926500  RigidBodyManagerImplement::vf1C  size=3624  [class]
int * __thiscall
RigidBodyManagerImplement::vf1C
          (int param_1,int *param_2,int param_3,float *param_4,float *param_5,undefined4 param_6,
          undefined4 param_7,short param_8,undefined4 param_9)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 *puVar9;
  LPVOID pvVar10;
  uint *puVar11;
  float *pfVar12;
  undefined4 uVar13;
  int iVar14;
  int *unaff_ESI;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  int iStack_3a4;
  float local_3a0;
  uint local_398;
  int local_394;
  float local_384;
  float local_37c;
  int local_378;
  uint local_374;
  uint local_370;
  undefined4 local_36c;
  uint local_368;
  uint local_364;
  float local_360;
  float local_35c;
  LPCRITICAL_SECTION local_358;
  float local_354;
  LPCRITICAL_SECTION local_34c;
  LPCRITICAL_SECTION local_348;
  float local_340;
  float local_33c;
  float local_338;
  float local_328;
  int iStack_320;
  float local_31c;
  float local_318;
  float local_314;
  int local_310;
  int local_30c;
  uint local_308;
  float local_304;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  undefined4 uStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  float local_2b0 [8];
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  float local_230;
  float fStack_22c;
  LPCRITICAL_SECTION p_Stack_228;
  float fStack_224;
  undefined1 *local_220;
  uint local_21c;
  undefined4 local_218;
  undefined1 local_210 [524];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  iVar15 = 0;
  local_348 = lpCriticalSection;
  local_310 = param_1;
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar5 = Hw::cHeapVariableBase::vf18();
  fVar17 = (float)iVar5;
  if (iVar5 < 0) {
    fVar17 = fVar17 + 4.2949673e+09;
  }
  if (fVar17 < 786432.0 == (fVar17 == 786432.0)) {
    iVar5 = FUN_00dd2ba0(8,1);
    puVar6 = (undefined4 *)0x0;
    if (iVar5 != 0) {
      puVar6 = (undefined4 *)FUN_00dd2bc0();
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
      }
    }
    if (puVar6 != (undefined4 *)0x0) {
      local_34c = (LPCRITICAL_SECTION)(int)param_8;
      local_378 = 0;
      local_374 = 0;
      local_36c = 0;
      local_368 = 0;
      local_3a0 = param_4[10];
      local_370 = 0x80000000;
      local_364 = 0x80000000;
      local_31c = SQRT(*param_4 * *param_4 + param_4[1] * param_4[1] + param_4[2] * param_4[2]);
      local_318 = SQRT(param_4[4] * param_4[4] + param_4[5] * param_4[5] + param_4[6] * param_4[6]);
      local_314 = SQRT(local_3a0 * local_3a0 + param_4[9] * param_4[9] + param_4[8] * param_4[8]);
      local_340 = 0.0;
      local_33c = 0.0;
      if ((int)local_34c < 4) {
        local_338 = 0.0;
        local_340 = 0.0;
      }
      else {
        iVar5 = ((uint)&local_34c[-1].SpinCount >> 2) + 1;
        iVar15 = iVar5 * 4;
        pfVar7 = param_5 + 6;
        local_338 = local_340;
        local_33c = local_340;
        do {
          iVar5 = iVar5 + -1;
          local_340 = pfVar7[6] + pfVar7[2] + pfVar7[-2] + pfVar7[-6] + local_340;
          local_33c = pfVar7[7] + pfVar7[3] + pfVar7[-1] + pfVar7[-5] + local_33c;
          local_338 = pfVar7[-4] + local_338 + *pfVar7 + pfVar7[4] + pfVar7[8];
          pfVar7 = pfVar7 + 0x10;
        } while (iVar5 != 0);
      }
      if (iVar15 < (int)local_34c) {
        iVar5 = (int)local_34c - iVar15;
        pfVar7 = param_5 + iVar15 * 4 + 2;
        do {
          iVar5 = iVar5 + -1;
          local_340 = pfVar7[-2] + local_340;
          local_33c = pfVar7[-1] + local_33c;
          local_338 = local_338 + *pfVar7;
          pfVar7 = pfVar7 + 4;
        } while (iVar5 != 0);
      }
      pfVar7 = local_2b0 + 2;
      fVar17 = (float)(int)local_34c;
      local_394 = 8;
      local_340 = local_340 / fVar17;
      local_33c = local_33c / fVar17;
      local_338 = local_338 / fVar17;
      local_2b0[0] = 1.0;
      local_2b0[1] = 1.0;
      local_2b0[2] = 1.0;
      local_2b0[4] = -1.0;
      local_28c = 0xbf800000;
      local_280 = 0xbf800000;
      local_27c = 0xbf800000;
      local_268 = 0xbf800000;
      local_260 = 0xbf800000;
      local_258 = 0xbf800000;
      local_24c = 0xbf800000;
      local_248 = 0xbf800000;
      local_240 = 0xbf800000;
      local_23c = 0xbf800000;
      local_238 = 0xbf800000;
      local_2b0[5] = 1.0;
      local_2b0[6] = 1.0;
      local_290 = 0x3f800000;
      local_288 = 0x3f800000;
      local_278 = 0x3f800000;
      local_270 = 0x3f800000;
      local_26c = 0x3f800000;
      local_25c = 0x3f800000;
      local_250 = 0x3f800000;
      do {
        pfVar8 = pfVar7 + -2;
        fVar17 = *pfVar7 * *pfVar7 + *pfVar8 * *pfVar8 + pfVar7[-1] * pfVar7[-1];
        if (fVar17 < 0.0 == (fVar17 == 0.0)) {
          local_3a0 = *pfVar7;
          FUN_00ddf460(pfVar8);
        }
        else {
          FUN_00dd5650();
          *pfVar8 = 0.0;
          pfVar7[-1] = 1.0;
          *pfVar7 = 0.0;
        }
        iVar15 = 0;
        local_360 = *param_5 * local_31c;
        local_35c = local_318 * param_5[1];
        local_358 = (LPCRITICAL_SECTION)(local_314 * param_5[2]);
        fVar17 = 1.1754944e-38;
        if (3 < (int)local_34c) {
          local_37c = pfVar7[-1];
          fVar18 = *pfVar8;
          local_3a0 = *pfVar7;
          pfVar12 = param_5 + 6;
          iVar5 = ((uint)&local_34c[-1].SpinCount >> 2) + 1;
          fVar17 = 1.1754944e-38;
          iVar15 = iVar5 * 4;
          do {
            fVar19 = local_3a0 * (pfVar12[-4] * local_314 - local_338) +
                     (pfVar12[-6] * local_31c - local_340) * fVar18 +
                     local_37c * (pfVar12[-5] * local_318 - local_33c);
            if (fVar17 <= fVar19) {
              local_354 = local_384;
              fVar17 = fVar19;
              local_360 = pfVar12[-6] * local_31c;
              local_35c = pfVar12[-5] * local_318;
              local_358 = (LPCRITICAL_SECTION)(pfVar12[-4] * local_314);
            }
            fVar19 = local_3a0 * (local_314 * *pfVar12 - local_338) +
                     (pfVar12[-2] * local_31c - local_340) * fVar18 +
                     local_37c * (pfVar12[-1] * local_318 - local_33c);
            if (fVar17 <= fVar19) {
              local_354 = local_384;
              fVar17 = fVar19;
              local_360 = pfVar12[-2] * local_31c;
              local_35c = pfVar12[-1] * local_318;
              local_358 = (LPCRITICAL_SECTION)(local_314 * *pfVar12);
            }
            fVar19 = local_3a0 * (pfVar12[4] * local_314 - local_338) +
                     (pfVar12[2] * local_31c - local_340) * fVar18 +
                     local_37c * (pfVar12[3] * local_318 - local_33c);
            if (fVar17 <= fVar19) {
              local_354 = local_384;
              fVar17 = fVar19;
              local_360 = pfVar12[2] * local_31c;
              local_35c = pfVar12[3] * local_318;
              local_358 = (LPCRITICAL_SECTION)(pfVar12[4] * local_314);
            }
            local_328 = pfVar12[8] * local_314 - local_338;
            fVar19 = local_3a0 * local_328 +
                     (pfVar12[6] * local_31c - local_340) * fVar18 +
                     local_37c * (pfVar12[7] * local_318 - local_33c);
            if (fVar17 <= fVar19) {
              local_354 = local_384;
              fVar17 = fVar19;
              local_360 = pfVar12[6] * local_31c;
              local_35c = pfVar12[7] * local_318;
              local_358 = (LPCRITICAL_SECTION)(pfVar12[8] * local_314);
            }
            pfVar12 = pfVar12 + 0x10;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (iVar15 < (int)local_34c) {
          local_3a0 = *pfVar8;
          pfVar8 = param_5 + iVar15 * 4 + 2;
          local_37c = *pfVar7;
          iVar15 = (int)local_34c - iVar15;
          do {
            local_328 = local_314 * *pfVar8 - local_338;
            fVar18 = local_37c * local_328 +
                     (pfVar8[-2] * local_31c - local_340) * local_3a0 +
                     pfVar7[-1] * (pfVar8[-1] * local_318 - local_33c);
            if (fVar17 <= fVar18) {
              local_354 = local_384;
              fVar17 = fVar18;
              local_360 = pfVar8[-2] * local_31c;
              local_35c = pfVar8[-1] * local_318;
              local_358 = (LPCRITICAL_SECTION)(local_314 * *pfVar8);
            }
            pfVar8 = pfVar8 + 4;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        local_230 = local_360;
        fStack_22c = local_35c;
        p_Stack_228 = local_358;
        fStack_224 = local_354;
        if (local_374 == (local_370 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_378);
        }
        pfVar8 = (float *)(local_374 * 0x10 + local_378);
        pfVar7 = pfVar7 + 4;
        *pfVar8 = local_230;
        pfVar8[1] = fStack_22c;
        pfVar8[2] = (float)p_Stack_228;
        pfVar8[3] = fStack_224;
        local_308 = local_374 + 1;
        local_394 = local_394 + -1;
        local_374 = local_308;
      } while (local_394 != 0);
      if (0 < (int)local_308) {
        local_3a0 = 0.0;
        local_398 = 1;
        do {
          if ((int)local_398 < (int)local_308) {
            iVar15 = (int)local_3a0 + 0x10;
            uVar16 = local_398;
            do {
              pfVar7 = (float *)((int)local_3a0 + local_378);
              pfVar8 = (float *)(iVar15 + local_378);
              puVar9 = (undefined4 *)(iVar15 + local_378);
              auVar4._4_4_ = -(uint)(ABS(pfVar7[1] - pfVar8[1]) <= 0.001);
              auVar4._0_4_ = -(uint)(ABS(*pfVar7 - *pfVar8) <= 0.001);
              auVar4._8_4_ = -(uint)(ABS(pfVar7[2] - pfVar8[2]) <= 0.001);
              auVar4._12_4_ = -(uint)(ABS(pfVar7[3] - pfVar8[3]) <= 0.001);
              uVar13 = movmskps(local_3a0,auVar4);
              if (((byte)uVar13 & 7) == 7) {
                local_308 = local_308 - 1;
                local_374 = local_308;
                if (uVar16 == local_308) break;
                iVar5 = (local_308 * 0x10 + local_378) - (int)puVar9;
                iVar14 = 2;
                do {
                  *puVar9 = *(undefined4 *)(iVar5 + (int)puVar9);
                  puVar9[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar9);
                  puVar9 = puVar9 + 2;
                  iVar14 = iVar14 + -1;
                } while (iVar14 != 0);
              }
              else {
                uVar16 = uVar16 + 1;
                iVar15 = iVar15 + 0x10;
              }
            } while ((int)uVar16 < (int)local_308);
          }
          local_3a0 = (float)((int)local_3a0 + 0x10);
          bVar3 = (int)local_398 < (int)local_308;
          local_398 = local_398 + 1;
        } while (bVar3);
      }
      if ((int)local_308 < 3) {
        if (puVar6 != (undefined4 *)0x0) {
          FUN_00dd4920();
        }
        *param_2 = 0;
        local_368 = 0;
        if ((local_364 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_36c);
        }
        local_36c = 0;
        local_364 = 0x80000000;
        local_374 = 0;
        if ((local_370 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_378);
        }
        local_378 = 0;
        local_370 = 0x80000000;
        if (local_348[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          LeaveCriticalSection(local_348);
        }
      }
      else {
        local_220 = local_210;
        local_30c = local_378;
        local_304 = 2.24208e-44;
        local_21c = 0;
        local_218 = 0x80000020;
        pvVar10 = TlsGetValue(DAT_01f8fc4c);
        puVar6 = (undefined4 *)(**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))();
        if (puVar6 == (undefined4 *)0x0) {
          if (local_3a0 != 0.0) {
            FUN_00dd4920(local_3a0);
          }
          *param_2 = 0;
          local_220 = (undefined1 *)0x0;
          if ((local_21c & 0x80000000) == 0) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(fStack_224,local_21c << 4);
          }
          fStack_224 = 0.0;
          local_21c = 0x80000000;
          local_36c = 0;
          if ((local_368 & 0x80000000) == 0) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_370,local_368 << 4);
          }
          local_370 = 0;
          local_368 = 0x80000000;
          local_378 = 0;
          if ((local_374 & 0x80000000) == 0) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_37c,local_374 << 4);
          }
          local_374 = 0x80000000;
          if (local_34c[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            LeaveCriticalSection(local_34c);
          }
          return param_2;
        }
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0x80000000;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0x80000000;
        FUN_01074110(&local_310,puVar6,&fStack_224);
        pvVar10 = TlsGetValue(DAT_01f8fc4c);
        iVar15 = (**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))(0x70);
        *(undefined2 *)(iVar15 + 4) = 0x70;
        iVar15 = hkpConvexVerticesShape::hkpConvexVerticesShape_5
                           (&local_314,&p_Stack_228,0x3c23d70a);
        *(int *)(param_3 + 4) = iVar15;
        if (iVar15 == 0) {
          FUN_009211c0();
          pvVar10 = TlsGetValue(DAT_01f8fc4c);
          (**(code **)(**(int **)((int)pvVar10 + 0x2c) + 8))(puVar6,0x18);
        }
        else {
          if (*(float *)(param_3 + 0x90) <= 0.0) {
            *(undefined1 *)(param_3 + 0xb4) = 4;
          }
          else {
            local_308 = 0;
            local_304 = 0.0;
            uStack_2f8 = 0;
            uStack_2f4 = 0;
            uStack_2f0 = 0;
            uStack_2ec = 0;
            fStack_2e8 = 0.0;
            fStack_2e4 = 0.0;
            fStack_2e0 = 0.0;
            uStack_2dc = 0;
            fStack_2d8 = 0.0;
            fStack_2d4 = 0.0;
            fStack_2d0 = 0.0;
            uStack_2cc = 0;
            fStack_2c8 = 0.0;
            fStack_2c4 = 0.0;
            fStack_2c0 = 0.0;
            uStack_2bc = 0;
            FUN_010615c0(puVar6,*(undefined4 *)(param_3 + 0x90),&local_308);
            fVar17 = fStack_2c8;
            fVar18 = fStack_2c4;
            fVar19 = fStack_2c0;
            uVar13 = uStack_2bc;
            fVar20 = fStack_2d8;
            fVar21 = fStack_2d4;
            fVar22 = fStack_2d0;
            uVar23 = uStack_2cc;
            fVar24 = fStack_2e8;
            fVar25 = fStack_2e4;
            fVar26 = fStack_2e0;
            uVar27 = uStack_2dc;
            if ((((fStack_2e8 == 0.0) && (fStack_2e4 == 0.0)) && (fStack_2e0 == 0.0)) &&
               ((((fStack_2d8 == 0.0 && (fStack_2d4 == 0.0)) &&
                 ((fStack_2d0 == 0.0 && ((fStack_2c8 == 0.0 && (fStack_2c4 == 0.0)))))) &&
                (fStack_2c0 == 0.0)))) {
              fVar17 = 0.0;
              fVar18 = 0.0;
              fVar19 = 1.0;
              uVar13 = 0;
              fVar20 = 0.0;
              fVar21 = 1.0;
              fVar22 = 0.0;
              uVar23 = 0;
              fVar24 = 1.0;
              fVar25 = 0.0;
              fVar26 = 0.0;
              uVar27 = 0;
            }
            *(float *)(param_3 + 0x50) = fVar24;
            *(float *)(param_3 + 0x54) = fVar25;
            *(float *)(param_3 + 0x58) = fVar26;
            *(undefined4 *)(param_3 + 0x5c) = uVar27;
            *(float *)(param_3 + 0x60) = fVar20;
            *(float *)(param_3 + 100) = fVar21;
            *(float *)(param_3 + 0x68) = fVar22;
            *(undefined4 *)(param_3 + 0x6c) = uVar23;
            *(float *)(param_3 + 0x70) = fVar17;
            *(float *)(param_3 + 0x74) = fVar18;
            *(float *)(param_3 + 0x78) = fVar19;
            *(undefined4 *)(param_3 + 0x7c) = uVar13;
            *(float *)(param_3 + 0x90) = local_304;
            *(undefined1 *)(param_3 + 0xb4) = 1;
            if (local_304 < 0.05) {
              *(undefined4 *)(param_3 + 0x90) = 0x3d4ccccd;
            }
            *(undefined4 *)(param_3 + 0x80) = uStack_2f8;
            *(undefined4 *)(param_3 + 0x84) = uStack_2f4;
            *(undefined4 *)(param_3 + 0x88) = uStack_2f0;
            *(undefined4 *)(param_3 + 0x8c) = uStack_2ec;
            *(undefined1 *)(param_3 + 0xb6) = 5;
            *(undefined1 *)(param_3 + 200) = 3;
          }
          FUN_009211c0();
          pvVar10 = TlsGetValue(DAT_01f8fc4c);
          (**(code **)(**(int **)((int)pvVar10 + 0x2c) + 8))(puVar6,0x18);
          iVar15 = FUN_00922210(unaff_ESI,param_3,param_4,param_9);
          if (iVar15 != 0) {
            FUN_010060a0();
            if (*(int *)(iStack_320 + 0x70) != 0) {
              (**(code **)(**(int **)(iStack_320 + 0x70) + 8))(&stack0xfffffc54);
            }
            if (iStack_3a4 == 0) {
              FUN_004066f0();
              iVar15 = *unaff_ESI;
              FUN_004066f0();
              if ((iVar15 == 0) || (uVar16 = *(uint *)(iVar15 + 0xc), uVar16 == 0)) {
                if (DAT_01885d68 == 1) goto LAB_009272b4;
                iVar15 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
              }
              else {
                puVar11 = (uint *)(-(uint)(uVar16 != 0) & uVar16);
                puVar11[2] = puVar11[2] | 0x10;
                *puVar11 = *puVar11 | 1;
                if (DAT_01885d68 == 1) goto LAB_009272b4;
                iVar15 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
              }
              piVar1 = (int *)(iVar15 + 4);
              *piVar1 = *piVar1 + -1;
              piVar2 = (int *)(iVar15 + 4);
              if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                FUN_00dd7320();
              }
              if (((DAT_01885d68 != 1) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) &&
                 ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
                FUN_00dd7320();
              }
            }
LAB_009272b4:
            *param_2 = *unaff_ESI;
            fStack_22c = 0.0;
            if (-1 < (int)p_Stack_228) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_230,(int)p_Stack_228 << 4);
            }
            local_230 = 0.0;
            p_Stack_228 = (LPCRITICAL_SECTION)0x80000000;
            FUN_009211c0();
            if (local_358[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
              LeaveCriticalSection(local_358);
            }
            return param_2;
          }
          FUN_010060a0();
        }
        if (unaff_ESI != (int *)0x0) {
          FUN_00dd4920(unaff_ESI);
        }
        fStack_22c = 0.0;
        *param_2 = 0;
        if (-1 < (int)p_Stack_228) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_230,(int)p_Stack_228 << 4);
        }
        local_230 = 0.0;
        p_Stack_228 = (LPCRITICAL_SECTION)0x80000000;
        FUN_009211c0();
        if (local_358[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          LeaveCriticalSection(local_358);
          return param_2;
        }
      }
      return param_2;
    }
  }
  else {
    FUN_00dd5650(&DAT_0164d3d0,0x3ff8000000000000);
  }
  *param_2 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return param_2;
}

