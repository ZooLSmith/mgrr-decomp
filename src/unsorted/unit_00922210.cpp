// src/unsorted/unit_00922210.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00922210..009232F0, 2 functions

#include "mgrr.h"

// 00922210  FUN_00922210  size=4306  [run]
undefined4 __thiscall
FUN_00922210(int param_1,int *param_2,uint *param_3,float *param_4,int param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  LPVOID pvVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 in_XMM3 [16];
  undefined1 auVar17 [16];
  float fVar20;
  float afStack_188 [6];
  float fStack_170;
  LPCRITICAL_SECTION p_Stack_16c;
  undefined4 uStack_168;
  LPCRITICAL_SECTION local_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined4 uStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float afStack_118 [12];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [64];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [84];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  local_164 = lpCriticalSection;
  if (*(int *)(param_1 + 0x90) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((float)param_3[0x24] == 0.0) {
    *(undefined1 *)(param_3 + 0x2d) = 5;
  }
  if (*param_3 == 0) {
    *param_3 = 0;
  }
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  iVar6 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x220);
  *(undefined2 *)(iVar6 + 4) = 0x220;
  iVar6 = hkpRigidBody::~hkpRigidBody(param_3);
  *param_2 = iVar6;
  if (iVar6 == 0) {
    FUN_00dd5650(&DAT_0164d0b4);
    if (*(int *)(param_1 + 0x90) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  FUN_008f8ac0(iVar6);
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
  iVar6 = *(int *)(iVar6 + 0xc);
  if ((iVar6 != 0) && ((*(uint *)(iVar6 + 4) >> 8 & 1) == 0)) {
    *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) | 0x100;
    *(undefined4 *)(iVar6 + 0xa8) = 0;
  }
  FUN_00406760();
  iVar6 = *param_2;
  if (iVar6 != 0) {
    FUN_004066f0();
    uVar8 = *(uint *)(iVar6 + 0xc);
    puVar7 = (uint *)(-(uint)(uVar8 != 0) & uVar8);
    *puVar7 = *puVar7 | 0x10;
    puVar7[6] = 1;
    FUN_00406760();
  }
  iVar6 = *param_2;
  uVar8 = param_3[0x2d];
  if (iVar6 != 0) {
    FUN_004066f0();
    uVar3 = *(uint *)(iVar6 + 0xc);
    puVar7 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
    *puVar7 = *puVar7 | 0x1000;
    puVar7[0xe] = (int)(char)uVar8;
    FUN_00406760();
  }
  uVar8 = *param_3;
  iVar6 = *param_2;
  if (iVar6 != 0) {
    FUN_004066f0();
    uVar3 = *(uint *)(iVar6 + 0xc);
    puVar7 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
    *puVar7 = *puVar7 | 0x2000;
    puVar7[0xf] = uVar8 & 0x1f;
    FUN_00406760();
  }
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  iVar6 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(8);
  if ((iVar6 != 0) &&
     (iVar6 = RigidBodyCollisionListener::RigidBodyCollisionListener(*param_2), iVar6 != 0)) {
    uVar8 = lib::AllocatedArray<ImpactHistory::Unit>::AllocatedArray<ImpactHistory::Unit>
                      (&DAT_01b7c218);
    iVar6 = *param_2;
    if (iVar6 != 0) {
      FUN_004066f0();
      uVar3 = *(uint *)(iVar6 + 0xc);
      puVar7 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
      *puVar7 = *puVar7 | 0x40000000;
      puVar7[0x20] = uVar8;
      FUN_00406760();
    }
    iVar6 = *param_2;
    FUN_004066f0();
    if ((iVar6 != 0) && (uVar8 = *(uint *)(iVar6 + 0xc), uVar8 != 0)) {
      puVar7 = (uint *)(-(uint)(uVar8 != 0) & uVar8);
      *puVar7 = *puVar7 | 0x400;
      puVar7[0xc] = puVar7[0xc] | 0x200000;
    }
    FUN_00406760();
    iVar6 = *param_2;
    FUN_004066f0();
    if ((iVar6 != 0) && (uVar8 = *(uint *)(iVar6 + 0xc), uVar8 != 0)) {
      puVar7 = (uint *)(-(uint)(uVar8 != 0) & uVar8);
      *puVar7 = *puVar7 | 0x400;
      puVar7[0xc] = puVar7[0xc] | 8;
    }
    FUN_00406760();
    fStack_128 = param_4[0xc];
    fStack_124 = param_4[0xd];
    fStack_120 = param_4[0xe];
    afStack_188[0] = SQRT(param_4[1] * param_4[1] + *param_4 * *param_4 + param_4[2] * param_4[2]);
    afStack_188[1] =
         SQRT(param_4[4] * param_4[4] + param_4[5] * param_4[5] + param_4[6] * param_4[6]);
    fVar13 = SQRT(param_4[10] * param_4[10] + param_4[9] * param_4[9] + param_4[8] * param_4[8]);
    fStack_170 = param_4[6] / fVar13;
    fVar12 = param_4[10];
    fVar9 = (float10)FUN_00ddbaa0(-(param_4[2] / fVar13));
    fVar10 = (float10)fpatan((float10)fStack_170,(float10)(fVar12 / fVar13));
    fStack_d8 = (float)fVar10;
    fVar11 = (float10)fpatan((float10)param_4[1] / (float10)afStack_188[1],
                             (float10)*param_4 / (float10)afStack_188[0]);
    fVar10 = (float10)0;
    fStack_130 = (float)fVar10;
    fStack_134 = (float)fVar10;
    fStack_138 = (float)fVar10;
    fStack_13c = (float)fVar10;
    fStack_144 = (float)fVar10;
    fStack_148 = (float)fVar10;
    fStack_14c = (float)fVar10;
    fStack_150 = (float)fVar10;
    fStack_158 = (float)fVar10;
    fStack_15c = (float)fVar10;
    fStack_160 = (float)fVar10;
    local_164 = (LPCRITICAL_SECTION)(float)fVar10;
    uStack_12c = 0x3f800000;
    uStack_140 = 0x3f800000;
    uStack_154 = 0x3f800000;
    uStack_168 = 0x3f800000;
    if (fVar10 != fVar11) {
      D3DXMatrixRotationZ(auStack_c8,(float)fVar11);
      D3DXMatrixMultiply(&fStack_170,auStack_d0,&fStack_170);
      fVar9 = (float10)(float)fVar9;
    }
    if ((float10)0 != fVar9) {
      D3DXMatrixRotationY(auStack_c8,(float)fVar9);
      D3DXMatrixMultiply(&fStack_170,auStack_d0,&fStack_170);
    }
    if (fStack_d8 != 0.0) {
      D3DXMatrixRotationX(auStack_c8,fStack_d8);
      D3DXMatrixMultiply(&fStack_170,auStack_d0,&fStack_170);
    }
    fStack_138 = fStack_128;
    fStack_134 = fStack_124;
    fStack_130 = fStack_120;
    FUN_01005190(&uStack_168);
    fVar12 = afStack_118[5] + afStack_118[0] + afStack_118[10];
    if (fVar12 <= 0.0) {
      afStack_188[0] = 1.4013e-45;
      afStack_188[1] = 2.8026e-45;
      afStack_188[2] = 0.0;
      uVar8 = (uint)(afStack_118[0] < afStack_118[5]);
      if (afStack_118[uVar8 * 5] < afStack_118[10]) {
        uVar8 = 2;
      }
      fVar12 = afStack_188[uVar8];
      fVar13 = afStack_188[(int)fVar12];
      fVar14 = SQRT((afStack_118[uVar8 * 5] -
                    (afStack_118[(int)fVar12 * 5] + afStack_118[(int)fVar13 * 5])) + 1.0);
      fVar15 = 0.5 / fVar14;
      afStack_188[uVar8] = fVar14 * 0.5;
      afStack_188[3] =
           (afStack_118[(int)fVar13 + (int)fVar12 * 4] - afStack_118[(int)fVar12 + (int)fVar13 * 4])
           * fVar15;
      afStack_188[(int)fVar12] =
           (afStack_118[uVar8 + (int)fVar12 * 4] + afStack_118[(int)fVar12 + uVar8 * 4]) * fVar15;
      afStack_188[(int)fVar13] =
           (afStack_118[(int)fVar13 + uVar8 * 4] + afStack_118[uVar8 + (int)fVar13 * 4]) * fVar15;
    }
    else {
      afStack_188[3] = SQRT(fVar12 + 1.0);
      afStack_188[2] = 0.5 / afStack_188[3];
      afStack_188[0] = (afStack_118[6] - afStack_118[9]) * afStack_188[2];
      afStack_188[1] = (afStack_118[8] - afStack_118[2]) * afStack_188[2];
      afStack_188[2] = (afStack_118[1] - afStack_118[4]) * afStack_188[2];
      afStack_188[3] = afStack_188[3] * 0.5;
    }
    fVar12 = afStack_188[2] * afStack_188[2] + afStack_188[0] * afStack_188[0];
    fVar13 = afStack_188[3] * afStack_188[3] + afStack_188[1] * afStack_188[1];
    fVar14 = afStack_188[0] * afStack_188[0] + afStack_188[2] * afStack_188[2];
    fVar15 = afStack_188[1] * afStack_188[1] + afStack_188[3] * afStack_188[3];
    fVar16 = fVar13 + fVar12;
    fVar12 = fVar12 + fVar13;
    fVar13 = fVar15 + fVar14;
    fVar14 = fVar14 + fVar15;
    auVar17._4_4_ = fVar12;
    auVar17._0_4_ = fVar16;
    auVar17._8_4_ = fVar13;
    auVar17._12_4_ = fVar14;
    auVar17 = rsqrtps(in_XMM3,auVar17);
    fVar15 = auVar17._0_4_;
    fVar18 = auVar17._4_4_;
    fVar19 = auVar17._8_4_;
    fVar20 = auVar17._12_4_;
    fStack_78 = (3.0 - fVar15 * fVar16 * fVar15) * fVar15 * 0.5 * afStack_188[0];
    fStack_74 = (3.0 - fVar18 * fVar12 * fVar18) * fVar18 * 0.5 * afStack_188[1];
    fStack_70 = (3.0 - fVar19 * fVar13 * fVar19) * fVar19 * 0.5 * afStack_188[2];
    fStack_6c = (3.0 - fVar20 * fVar14 * fVar20) * fVar20 * 0.5 * afStack_188[3];
    uStack_88 = uStack_e8;
    uStack_84 = uStack_e4;
    uStack_80 = uStack_e0;
    uStack_7c = uStack_dc;
    uStack_68 = 0x3f800000;
    uStack_64 = 0x3f800000;
    uStack_60 = 0x3f800000;
    uStack_5c = 0x3f800000;
    FUN_0100a650(auStack_58);
    FUN_011a0170(auStack_58);
    if (param_5 != 0) {
      FUN_004066f0();
      FUN_011929d0(*param_2,1);
      FUN_010060a0();
      FUN_00406760();
    }
    if (p_Stack_16c[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(p_Stack_16c);
    }
    return 1;
  }
  FUN_00dd5650(&DAT_0164d248);
  if (p_Stack_16c[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(p_Stack_16c);
  }
  return 0;
}

// 009232F0  FUN_009232f0  size=60  [run]
void __fastcall FUN_009232f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

