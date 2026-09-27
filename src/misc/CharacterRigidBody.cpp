// src/misc/CharacterRigidBody.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E1110..008E90C0, 5 functions

#include "mgrr.h"
#include "CharacterRigidBody.h"

// 008E1110  CharacterRigidBody::vf00  size=8  [class]
void CharacterRigidBody::vf00(void)

{
  vf00();
  return;
}

// 008E1120  CharacterRigidBody::vf00  size=8  [class]
void CharacterRigidBody::vf00(void)

{
  vf00();
  return;
}

// 008E16D0  CharacterRigidBody::vf08  size=3  [class]
void CharacterRigidBody::vf08(void)

{
  return;
}

// 008E3AF0  CharacterRigidBody::vf00  size=69  [class]
undefined4 * __thiscall CharacterRigidBody::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  param_1[2] = vftable;
  param_1[3] = vftable;
  ::hkBaseObject::hkBaseObject_174();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 008E90C0  CharacterRigidBody::CharacterRigidBody  size=663  [class]
undefined4 __thiscall
CharacterRigidBody::CharacterRigidBody
          (uint param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5,uint param_6,
          undefined4 param_7)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  float local_84 [3];
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_50;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 local_20;
  
  *(undefined4 *)(param_2 + 0x10) = 0x3e4ccccd;
  hkpCharacterRigidBodyCinfo::hkpCharacterRigidBodyCinfo();
  local_78 = param_7;
  local_40 = *(float *)(DAT_01885d20 + 0x10);
  fStack_3c = *(float *)(DAT_01885d20 + 0x14);
  fStack_38 = *(float *)(DAT_01885d20 + 0x18);
  fVar15 = *(float *)(DAT_01885d20 + 0x1c);
  local_84[0] = fStack_3c * fStack_3c + local_40 * local_40 + fStack_38 * fStack_38;
  if (local_84[0] == 0.0) {
    local_40 = 0.0;
    fStack_3c = -1.0;
    fStack_38 = 0.0;
    fVar15 = 0.0;
  }
  local_40 = -local_40;
  fStack_3c = -fStack_3c;
  fStack_38 = -fStack_38;
  local_30 = 0x3f9c61a9;
  local_50 = param_5;
  fVar9 = local_40 * local_40;
  fVar10 = fStack_3c * fStack_3c;
  fVar11 = fStack_38 * fStack_38;
  local_20 = 0x3ca3d70a;
  fVar12 = fVar10 + fVar9 + fVar11;
  fVar13 = fVar10 + fVar9 + fVar11;
  fVar14 = fVar10 + fVar9 + fVar11;
  fVar11 = fVar10 + fVar9 + fVar11;
  auVar16._0_12_ = ZEXT812(0);
  auVar16._12_4_ = 0;
  auVar17._4_4_ = fVar13;
  auVar17._0_4_ = fVar12;
  auVar17._8_4_ = fVar14;
  auVar17._12_4_ = fVar11;
  auVar17 = rsqrtps(auVar16,auVar17);
  fVar9 = auVar17._0_4_;
  fVar10 = auVar17._4_4_;
  fVar18 = auVar17._8_4_;
  fVar19 = auVar17._12_4_;
  local_40 = (float)(~-(uint)(fVar12 <= 0.0) & (uint)((3.0 - fVar9 * fVar12 * fVar9) * fVar9 * 0.5))
             * local_40;
  fStack_3c = (float)(~-(uint)(fVar13 <= 0.0) &
                     (uint)((3.0 - fVar10 * fVar13 * fVar10) * fVar10 * 0.5)) * fStack_3c;
  fStack_38 = (float)(~-(uint)(fVar14 <= 0.0) &
                     (uint)((3.0 - fVar18 * fVar14 * fVar18) * fVar18 * 0.5)) * fStack_38;
  fStack_34 = (float)(~-(uint)(fVar11 <= 0.0) &
                     (uint)((3.0 - fVar19 * fVar11 * fVar19) * fVar19 * 0.5)) * -fVar15;
  local_70 = *param_4;
  uStack_6c = param_4[1];
  uStack_68 = param_4[2];
  uStack_64 = param_4[3];
  local_74 = param_2;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x70);
  *(undefined2 *)(puVar5 + 1) = 0x70;
  hkpCharacterRigidBody::hkpCharacterRigidBody(local_84);
  *puVar5 = vftable;
  puVar5[2] = vftable;
  puVar5[3] = vftable;
  *(undefined4 **)(param_1 + 8) = puVar5;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0xc);
  puVar5[1] = 0x1000c;
  *puVar5 = CharacterRigidBodyListener::vftable;
  FUN_0126f2d0(puVar5);
  FUN_010060a0();
  iVar6 = FUN_0126f3e0();
  iVar3 = _tls_index;
  if (iVar6 != 0) {
    FUN_004066f0();
    puVar2 = *(uint **)(iVar6 + 0xc);
    if ((puVar2 != (uint *)0x0) && (-1 < (char)*puVar2)) {
      *puVar2 = *puVar2 | 0x80;
      puVar2[9] = param_6;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  iVar6 = FUN_0126f3e0();
  if (iVar6 != 0) {
    FUN_004066f0();
    puVar2 = *(uint **)(iVar6 + 0xc);
    if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x100) == 0)) {
      *puVar2 = *puVar2 | 0x100;
      puVar2[10] = param_1;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  uVar8 = *(undefined4 *)(param_3 + 0x4f0);
  uVar7 = FUN_0126f3e0();
  FUN_008f7f00(uVar7,uVar8);
  uVar7 = 1;
  uVar8 = FUN_0126f3e0(1);
  FUN_011929d0(uVar8,uVar7);
  FUN_010060a0();
  return 1;
}

