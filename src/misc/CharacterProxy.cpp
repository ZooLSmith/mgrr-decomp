// src/misc/CharacterProxy.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E1130..008E8420, 13 functions

#include "mgrr.h"
#include "CharacterProxy.h"

// 008E1130  CharacterProxy::vf00  size=8  [class]
void CharacterProxy::vf00(void)

{
  vf00();
  return;
}

// 008E1140  CharacterProxy::vf00  size=8  [class]
void CharacterProxy::vf00(void)

{
  vf00();
  return;
}

// 008E11A0  FUN_008e11a0  size=35  [between]
float10 FUN_008e11a0(float param_1)

{
  return (float10)ABS(param_1);
}

// 008E11E0  FUN_008e11e0  size=76  [between]
float10 FUN_008e11e0(float param_1)

{
  float10 fVar1;
  float fVar2;
  
  fVar2 = ABS(param_1);
  if (NAN(fVar2) || 1.0 < fVar2 == (fVar2 == 1.0)) {
    fVar1 = (float10)FUN_00fdc4e0(fVar2,0,0,0);
  }
  else {
    fVar1 = (float10)0;
    if ((float10)param_1 <= fVar1) {
      return (float10)3.1415927;
    }
  }
  return fVar1;
}

// 008E1590  CharacterProxy::vf04  size=3  [class]
void CharacterProxy::vf04(void)

{
  return;
}

// 008E15A0  CharacterProxy::vf0C  size=37  [class]
void __thiscall CharacterProxy::vf0C(int *param_1,int param_2)

{
  if (*(int *)(param_2 + 8) != 0) {
    (**(code **)(*param_1 + 8))(param_2);
    (**(code **)(*param_1 + 4))(param_2);
  }
  return;
}

// 008E15D0  CharacterProxy::vf10  size=3  [class]
void CharacterProxy::vf10(void)

{
  return;
}

// 008E15E0  CharacterProxy::vf14  size=3  [class]
void CharacterProxy::vf14(void)

{
  return;
}

// 008E1680  CharacterProxy::vf04  size=3  [class]
void CharacterProxy::vf04(void)

{
  return;
}

// 008E1690  CharacterProxy::vf0C  size=37  [class]
void __thiscall CharacterProxy::vf0C(int *param_1,int param_2)

{
  if (*(int *)(param_2 + 8) != 0) {
    (**(code **)(*param_1 + 8))(param_2);
    (**(code **)(*param_1 + 4))(param_2);
  }
  return;
}

// 008E16C0  CharacterProxy::vf10  size=3  [class]
void CharacterProxy::vf10(void)

{
  return;
}

// 008E39E0  CharacterProxy::vf00  size=69  [class]
undefined4 * __thiscall CharacterProxy::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  param_1[2] = vftable;
  param_1[3] = vftable;
  ::hkBaseObject::hkBaseObject_160();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 008E8420  CharacterProxy::CharacterProxy  size=3224  [class]
undefined4
CharacterProxy::CharacterProxy
          (undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
          uint param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  LPVOID pvVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  undefined4 *apuStack_a8 [5];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_30;
  
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x160);
  *(undefined2 *)(iVar5 + 4) = 0x160;
  iVar5 = hkpSimpleShapePhantom::hkpSimpleShapePhantom(param_1,&DAT_01701ca0,param_7);
  FUN_01006780("CharControl::createCharacterProxy");
  FUN_010060a0();
  if (iVar5 == 0) {
    return 0;
  }
  FUN_01194450(iVar5);
  FUN_010060a0();
  hkpCharacterProxyCinfo::hkpCharacterProxyCinfo();
  fStack_64 = *(float *)(DAT_01885d20 + 0x10);
  fStack_60 = *(float *)(DAT_01885d20 + 0x14);
  fStack_5c = *(float *)(DAT_01885d20 + 0x18);
  fVar14 = *(float *)(DAT_01885d20 + 0x1c);
  if (fStack_60 * fStack_60 + fStack_64 * fStack_64 + fStack_5c * fStack_5c == 0.0) {
    fStack_64 = 0.0;
    fStack_60 = -1.0;
    fStack_5c = 0.0;
    fVar14 = 0.0;
  }
  fStack_64 = -fStack_64;
  fStack_60 = -fStack_60;
  fStack_5c = -fStack_5c;
  uStack_30 = 0x3f860a90;
  fVar8 = fStack_64 * fStack_64;
  fVar9 = fStack_60 * fStack_60;
  fVar10 = fStack_5c * fStack_5c;
  uStack_70 = 0;
  uStack_74 = 0x3f800000;
  uStack_48 = 0x3ca3d70a;
  fVar11 = fVar9 + fVar8 + fVar10;
  fVar12 = fVar9 + fVar8 + fVar10;
  fVar13 = fVar9 + fVar8 + fVar10;
  fVar10 = fVar9 + fVar8 + fVar10;
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar16._4_4_ = fVar12;
  auVar16._0_4_ = fVar11;
  auVar16._8_4_ = fVar13;
  auVar16._12_4_ = fVar10;
  auVar16 = rsqrtps(auVar15,auVar16);
  fVar8 = auVar16._0_4_;
  fVar9 = auVar16._4_4_;
  fVar17 = auVar16._8_4_;
  fVar18 = auVar16._12_4_;
  fStack_64 = (float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar8 * fVar11 * fVar8) * fVar8 * 0.5)
                     ) * fStack_64;
  fStack_60 = (float)(~-(uint)(fVar12 <= 0.0) & (uint)((3.0 - fVar9 * fVar12 * fVar9) * fVar9 * 0.5)
                     ) * fStack_60;
  fStack_5c = (float)(~-(uint)(fVar13 <= 0.0) &
                     (uint)((3.0 - fVar17 * fVar13 * fVar17) * fVar17 * 0.5)) * fStack_5c;
  fStack_58 = (float)(~-(uint)(fVar10 <= 0.0) &
                     (uint)((3.0 - fVar18 * fVar10 * fVar18) * fVar18 * 0.5)) * -fVar14;
  uStack_94 = *param_3;
  uStack_90 = param_3[1];
  uStack_8c = param_3[2];
  uStack_88 = param_3[3];
  uStack_40 = 8;
  iStack_4c = iVar5;
  FUN_008f8ac0(iVar5);
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 1) == 0)) {
    *puVar6 = *puVar6 | 1;
    puVar6[2] = 0;
  }
  pvVar3 = ThreadLocalStoragePointer;
  iVar2 = _tls_index;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 2) == 0)) {
    *puVar6 = *puVar6 | 2;
    puVar6[3] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 4) == 0)) {
    *puVar6 = *puVar6 | 4;
    puVar6[4] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 8) == 0)) {
    *puVar6 = *puVar6 | 8;
    puVar6[5] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x10) == 0)) {
    *puVar6 = *puVar6 | 0x10;
    puVar6[6] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x20) == 0)) {
    *puVar6 = *puVar6 | 0x20;
    puVar6[7] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x40) == 0)) {
    *puVar6 = *puVar6 | 0x40;
    puVar6[8] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x200) == 0)) {
    *puVar6 = *puVar6 | 0x200;
    puVar6[0xb] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x400) == 0)) {
    *puVar6 = *puVar6 | 0x400;
    puVar6[0xc] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x8000) == 0)) {
    *puVar6 = *puVar6 | 0x8000;
    puVar6[0x11] = 0xffffffff;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x800) == 0)) {
    *puVar6 = *puVar6 | 0x800;
    puVar6[0xd] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x1000) == 0)) {
    *puVar6 = *puVar6 | 0x1000;
    puVar6[0xe] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x2000) == 0)) {
    *puVar6 = *puVar6 | 0x2000;
    puVar6[0xf] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x4000) == 0)) {
    *puVar6 = *puVar6 | 0x4000;
    puVar6[0x10] = 0xffffffff;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x20000) == 0)) {
    *puVar6 = *puVar6 | 0x20000;
    puVar6[0x13] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x40000) == 0)) {
    *puVar6 = *puVar6 | 0x40000;
    puVar6[0x14] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x80000) == 0)) {
    *puVar6 = *puVar6 | 0x80000;
    puVar6[0x15] = 0;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x100000) == 0)) {
    *puVar6 = *puVar6 | 0x100000;
    puVar6[0x16] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x800000) == 0)) {
    *puVar6 = *puVar6 | 0x800000;
    puVar6[0x19] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x200000) == 0)) {
    *puVar6 = *puVar6 | 0x200000;
    puVar6[0x17] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x400000) == 0)) {
    *puVar6 = *puVar6 | 0x400000;
    puVar6[0x18] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x1000000) == 0)) {
    *puVar6 = *puVar6 | 0x1000000;
    puVar6[0x1a] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x2000000) == 0)) {
    *puVar6 = *puVar6 | 0x2000000;
    puVar6[0x1b] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x4000000) == 0)) {
    *puVar6 = *puVar6 | 0x4000000;
    puVar6[0x1c] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x8000000) == 0)) {
    *puVar6 = *puVar6 | 0x8000000;
    puVar6[0x1d] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x10000000) == 0)) {
    *puVar6 = *puVar6 | 0x10000000;
    puVar6[0x1e] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x20000000) == 0)) {
    *puVar6 = *puVar6 | 0x20000000;
    puVar6[0x1f] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x40000000) == 0)) {
    *puVar6 = *puVar6 | 0x40000000;
    puVar6[0x20] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar5 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
    *(undefined4 *)(iVar2 + 0x88) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar5 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 1 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 2;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar5 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 2 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 4;
    *(undefined4 *)(iVar2 + 0x90) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar5 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 3 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 8;
    *(undefined4 *)(iVar2 + 0x94) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar5 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 6 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x40;
    *(undefined4 *)(iVar2 + 0xa0) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar5 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 7 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x80;
    *(undefined4 *)(iVar2 + 0xa4) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar5 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 4 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x10;
    *(undefined4 *)(iVar2 + 0x98) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = *(uint **)(iVar5 + 0xc);
  if ((puVar6 != (uint *)0x0) && (-1 < (int)*puVar6)) {
    *puVar6 = *puVar6 | 0x80000000;
    puVar6[0x21] = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar5 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 5 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x20;
    *(undefined4 *)(iVar2 + 0x9c) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  iVar2 = *(int *)(iVar5 + 0xc);
  if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 8 & 1) == 0)) {
    *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x100;
    *(undefined4 *)(iVar2 + 0xa8) = 0;
  }
  FUN_00406760();
  FUN_004066f0();
  puVar6 = (uint *)(-(uint)(*(uint *)(iVar5 + 0xc) != 0) & *(uint *)(iVar5 + 0xc));
  *puVar6 = *puVar6 | 0x20;
  puVar6[7] = 1;
  FUN_00406760();
  FUN_004066f0();
  puVar6 = (uint *)(-(uint)(*(uint *)(iVar5 + 0xc) != 0) & *(uint *)(iVar5 + 0xc));
  *puVar6 = *puVar6 | 0x80;
  puVar6[9] = param_6;
  FUN_00406760();
  FUN_004066f0();
  puVar6 = (uint *)(-(uint)(*(uint *)(iVar5 + 0xc) != 0) & *(uint *)(iVar5 + 0xc));
  *puVar6 = *puVar6 | 0x100;
  puVar6[10] = (uint)apuStack_a8[0];
  FUN_00406760();
  FUN_008f7f00(iVar5,*(undefined4 *)(param_2 + 0x4f0));
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  puVar7 = (undefined4 *)(**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0xc0);
  *(undefined2 *)(puVar7 + 1) = 0xc0;
  hkpCharacterProxy::hkpCharacterProxy(apuStack_a8);
  *puVar7 = vftable;
  puVar7[2] = vftable;
  puVar7[3] = vftable;
  *apuStack_a8[0] = puVar7;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x10);
  *(undefined2 *)(iVar5 + 4) = 0x10;
  iVar5 = hkpCharacterProxyListener::hkpCharacterProxyListener(apuStack_a8[0]);
  apuStack_a8[0][1] = iVar5;
  if (iVar5 != 0) {
    FUN_0126a310(iVar5 + 8);
  }
  return 1;
}

