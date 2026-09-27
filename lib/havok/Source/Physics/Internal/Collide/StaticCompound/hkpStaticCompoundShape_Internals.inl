// lib/havok/Source/Physics/Internal/Collide/StaticCompound/hkpStaticCompoundShape_Internals.inl
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0121C660..0121C660, 1 functions

#include "mgrr.h"

// 0121C660  _anon_557D7FF8::hkpStaticCompoundShape_RayHitCollectorWrapper::vf00  size=975  [__FILE__]
void __thiscall
_anon_557D7FF8::hkpStaticCompoundShape_RayHitCollectorWrapper::vf00
          (int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  float *pfVar10;
  code *pcVar11;
  char cVar12;
  char *pcVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 local_2b0 [512];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 *local_24;
  int local_20;
  undefined1 local_19;
  uint local_18;
  undefined8 *local_14;
  
  local_20 = **(int **)(param_1 + 8);
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = param_3[3];
  local_14 = param_2;
  for (puVar8 = param_2; puVar8 != *(undefined8 **)(param_1 + 0x1c);
      puVar8 = *(undefined8 **)((int)puVar8 + 0xc)) {
    if (puVar8 == (undefined8 *)0x0) {
      hkErrStream::hkErrStream(local_2b0,0x200);
      FUN_01018d00("Parent hkpCdBody not found");
      iVar15 = (**(code **)(*DAT_01f8fc58 + 0xc))
                         (3,0x68a784a,local_2b0,
                          "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Physics/Internal/Collide/StaticCompound/hkpStaticCompoundShape_Internals.inl"
                          ,0x226);
      if (iVar15 != 0) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      hkBaseObject::hkBaseObject_38();
      break;
    }
    local_14 = puVar8;
  }
  local_18 = *(uint *)((int)local_14 + 4);
  if (local_18 == 0xffffffff) {
    local_18 = 0;
  }
  uVar16 = *(int *)(param_1 + 0xc) << (*(byte *)(local_20 + 0x18) & 0x1f) | local_18;
  puVar7 = *(undefined4 **)(param_1 + 0x1c);
  *puVar7 = *(undefined4 *)local_14;
  puVar7[1] = uVar16;
  puVar8 = *(undefined8 **)(param_1 + 0x1c);
  *local_14 = *puVar8;
  local_14[1] = puVar8[1];
  if ((*(int **)(param_1 + 8))[0xe] != 0) {
    iVar15 = **(int **)(param_1 + 8);
    if (iVar15 == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = iVar15 + 0x14;
    }
    puVar7 = *(undefined4 **)(param_1 + 8);
    local_14 = (undefined8 *)puVar7[0xe];
    local_24 = *(undefined4 **)local_14;
    pcVar13 = (char *)(*(code *)*local_24)(&local_19,puVar7 + 4,*puVar7,iVar15,uVar16);
    if (*pcVar13 == '\0') {
      return;
    }
  }
  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar15 = *(int *)(param_1 + 0x10);
    uVar9 = *(uint *)(iVar15 + 0xc);
    if ((uVar9 & 0x10) != 0) {
      return;
    }
    if (local_18 < 0x25) {
      if ((uVar9 & 0x20) == 0) goto LAB_0121c81b;
      if (local_18 < 0xd) {
        bVar14 = (char)local_18 + 0xb;
      }
      else {
        iVar15 = iVar15 + 0x20;
        bVar14 = (char)local_18 - 0xd;
      }
      bVar17 = (*(uint *)(iVar15 + 0xc) & 1 << (bVar14 & 0x1f) & 0xc0ffffff) == 0;
    }
    else {
      if ((uVar9 & 0x40) == 0) goto LAB_0121c81b;
      cVar12 = FUN_01230510(uVar16);
      bVar17 = cVar12 == '\0';
    }
    if (!bVar17) {
      return;
    }
  }
LAB_0121c81b:
  if (*(char *)(param_1 + 0x15) != '\0') {
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    local_b0 = *puVar8;
    local_a8 = puVar8[1];
    uVar1 = puVar8[2];
    uVar2 = puVar8[3];
    local_90 = *(undefined8 *)*(undefined1 (*) [16])(puVar8 + 4);
    uStack_88 = puVar8[5];
    pfVar10 = *(float **)(param_2 + 1);
    uVar3 = *(undefined8 *)pfVar10;
    uStack_38 = *(undefined8 *)(pfVar10 + 2);
    uVar4 = *(undefined8 *)(pfVar10 + 4);
    local_40._0_4_ = (float)uVar3;
    local_40._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    uStack_68 = *(undefined8 *)(pfVar10 + 6);
    uVar5 = *(undefined8 *)(pfVar10 + 8);
    local_70._0_4_ = (float)uVar4;
    local_70._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    uVar6 = *(undefined8 *)(pfVar10 + 10);
    local_80._0_4_ = (float)uVar5;
    local_80._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
    uStack_78._0_4_ = (float)uVar6;
    uStack_78._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
    auVar25._0_4_ = (float)uStack_58 * (float)uStack_38;
    auVar25._4_4_ = (float)uStack_58 * (float)uStack_68;
    auVar25._8_4_ = (float)uStack_58 * (float)uStack_78;
    auVar25._12_4_ = (float)uStack_58 * uStack_78._4_4_;
    auVar26 = rcpps(auVar25,*(undefined1 (*) [16])(puVar8 + 4));
    fVar24 = auVar26._0_4_ * (2.0 - auVar26._0_4_ * (float)local_90) *
             (local_60._4_4_ * local_40._4_4_ + (float)local_60 * (float)local_40 + auVar25._0_4_);
    fVar27 = auVar26._4_4_ * (2.0 - auVar26._4_4_ * (float)((ulonglong)local_90 >> 0x20)) *
             (local_60._4_4_ * local_70._4_4_ + (float)local_60 * (float)local_70 + auVar25._4_4_);
    fVar28 = auVar26._8_4_ * (2.0 - auVar26._8_4_ * (float)uStack_88) *
             (local_60._4_4_ * local_80._4_4_ + (float)local_60 * (float)local_80 + auVar25._8_4_);
    fVar18 = fVar24 * fVar24;
    fVar19 = fVar27 * fVar27;
    fVar20 = fVar28 * fVar28;
    fVar21 = fVar19 + fVar18 + fVar20;
    fVar22 = fVar19 + fVar18 + fVar20;
    fVar23 = fVar19 + fVar18 + fVar20;
    auVar29._0_12_ = ZEXT812(0);
    auVar29._12_4_ = 0;
    auVar26._4_4_ = fVar22;
    auVar26._0_4_ = fVar21;
    auVar26._8_4_ = fVar23;
    auVar26._12_4_ = fVar19 + fVar18 + fVar20;
    auVar26 = rsqrtps(auVar29,auVar26);
    fVar18 = auVar26._0_4_;
    fVar19 = auVar26._4_4_;
    fVar20 = auVar26._8_4_;
    fVar24 = (float)(~-(uint)(fVar21 <= 0.0) &
                    (uint)((3.0 - fVar18 * fVar21 * fVar18) * fVar18 * 0.5)) * fVar24;
    fVar27 = (float)(~-(uint)(fVar22 <= 0.0) &
                    (uint)((3.0 - fVar19 * fVar22 * fVar19) * fVar19 * 0.5)) * fVar27;
    fVar28 = (float)(~-(uint)(fVar23 <= 0.0) &
                    (uint)((3.0 - fVar20 * fVar23 * fVar20) * fVar20 * 0.5)) * fVar28;
    local_a0._0_4_ = (float)uVar1;
    local_a0._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    uStack_98._0_4_ = (float)uVar2;
    uStack_98._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    fVar20 = fVar24 * (float)local_a0;
    fVar21 = fVar27 * local_a0._4_4_;
    fVar22 = fVar28 * (float)uStack_98;
    fVar18 = (fVar21 + fVar20 + fVar22) * (float)local_a0 +
             (uStack_98._4_4_ * uStack_98._4_4_ + -0.5) * fVar24 +
             (fVar28 * local_a0._4_4_ - fVar27 * (float)uStack_98) * uStack_98._4_4_;
    fVar19 = (fVar21 + fVar20 + fVar22) * local_a0._4_4_ +
             (uStack_98._4_4_ * uStack_98._4_4_ + -0.5) * fVar27 +
             (fVar24 * (float)uStack_98 - fVar28 * (float)local_a0) * uStack_98._4_4_;
    fVar24 = (fVar21 + fVar20 + fVar22) * (float)uStack_98 +
             (uStack_98._4_4_ * uStack_98._4_4_ + -0.5) * fVar28 +
             (fVar27 * (float)local_a0 - fVar24 * local_a0._4_4_) * uStack_98._4_4_;
    fVar18 = fVar18 + fVar18;
    fVar19 = fVar19 + fVar19;
    fVar24 = fVar24 + fVar24;
    local_60 = CONCAT44(fVar19 * pfVar10[5] + fVar18 * pfVar10[1] + fVar24 * pfVar10[9],
                        fVar19 * pfVar10[4] + fVar18 * *pfVar10 + fVar24 * pfVar10[8]);
    uStack_58 = CONCAT44(fVar19 * pfVar10[7] + fVar18 * pfVar10[3] + fVar24 * pfVar10[0xb],
                         fVar19 * pfVar10[6] + fVar18 * pfVar10[2] + fVar24 * pfVar10[10]);
    local_a0 = uVar1;
    uStack_98 = uVar2;
    local_80 = uVar5;
    uStack_78 = uVar6;
    local_70 = uVar4;
    local_40 = uVar3;
  }
  (**(code **)**(undefined4 **)(param_1 + 0x18))(param_2,&local_60);
  return;
}

