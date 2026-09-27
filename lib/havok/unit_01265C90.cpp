// lib/havok/unit_01265C90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01265C90..0127AA40, 624 functions

#include "mgrr.h"
#include "CharacterProxy.h"
#include "CharacterRigidBody.h"
#include "hkBaseObject.h"
#include "hkpAction.h"
#include "hkpAllCdPointCollector.h"
#include "hkpAngularDashpotAction.h"
#include "hkpBinaryAction.h"
#include "hkpCharacterControllerCinfo.h"
#include "hkpCharacterProxy.h"
#include "hkpCharacterProxyCinfo.h"
#include "hkpCharacterRigidBody.h"
#include "hkpCharacterRigidBodyCinfo.h"
#include "hkpCharacterRigidBodyListener.h"
#include "hkpCollidableCollidableFilter.h"
#include "hkpConstrainedSystemFilter.h"
#include "hkpDashpotAction.h"
#include "hkpDisableEntityCollisionFilter.h"
#include "hkpDisplayBindingData.h"
#include "hkpEntityListener.h"
#include "hkpGroupCollisionFilter.h"
#include "hkpMotorAction.h"
#include "hkpMouseSpringAction.h"
#include "hkpPhantomListener.h"
#include "hkpPhysicsData.h"
#include "hkpPhysicsSystem.h"
#include "hkpPhysicsSystemWithContacts.h"
#include "hkpPoweredChainMapper.h"
#include "hkpPrevailingWind.h"
#include "hkpReorientAction.h"
#include "hkpSerializedAgentNnEntry.h"
#include "hkpSerializedDisplayMarker.h"
#include "hkpSerializedDisplayMarkerList.h"
#include "hkpSerializedDisplayRbTransforms.h"
#include "hkpSpringAction.h"
#include "hkpTriggerVolume.h"
#include "hkpUnaryAction.h"
#include "hkpWind.h"
#include "hkpWindAction.h"
#include "hkpWorldPostSimulationListener.h"

// 01265C90  FUN_01265c90  size=1005  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01265c90(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint5 uVar26;
  unkbyte9 Var27;
  undefined1 auVar28 [13];
  undefined1 auVar29 [13];
  uint uVar30;
  int iVar31;
  float fVar32;
  uint uVar33;
  int iVar34;
  float fVar35;
  undefined4 uVar39;
  undefined4 uVar41;
  undefined1 auVar36 [16];
  float fVar40;
  float fVar42;
  float fVar43;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar44;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 uVar59;
  byte bVar60;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar61;
  float fVar65;
  float fVar66;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar67;
  float fVar70;
  float fVar71;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  
  if (param_1[1] != 0) {
    fVar73 = (float)param_1[4];
    fVar74 = (float)param_1[5];
    fVar75 = (float)param_1[6];
    fVar76 = (float)param_1[7];
    fVar44 = (float)param_1[8];
    fVar48 = (float)param_1[9];
    fVar49 = (float)param_1[10];
    fVar50 = (float)param_1[0xb];
    iVar2 = param_2[1];
    iVar31 = *param_1;
    auVar64._0_4_ = (float)param_3[0xc] * (((float)param_3[0x10] + fVar44) - (float)param_3[4]);
    auVar64._4_4_ = (float)param_3[0xd] * (((float)param_3[0x11] + fVar48) - (float)param_3[5]);
    auVar64._8_4_ = (float)param_3[0xe] * (((float)param_3[0x12] + fVar49) - (float)param_3[6]);
    auVar64._12_4_ = (float)param_3[0xf] * (((float)param_3[0x13] + fVar50) - (float)param_3[7]);
    auVar69._0_8_ =
         CONCAT44((float)param_3[0xd] * ((fVar74 - (float)param_3[0x11]) - (float)param_3[5]),
                  (float)param_3[0xc] * ((fVar73 - (float)param_3[0x10]) - (float)param_3[4]));
    auVar69._8_4_ = (float)param_3[0xe] * ((fVar75 - (float)param_3[0x12]) - (float)param_3[6]);
    auVar69._12_4_ = (float)param_3[0xf] * ((fVar76 - (float)param_3[0x13]) - (float)param_3[7]);
    auVar36._8_4_ = auVar69._8_4_;
    auVar36._0_8_ = auVar69._0_8_;
    auVar36._12_4_ = auVar69._12_4_;
    auVar51 = maxps(auVar69,auVar64);
    auVar36 = minps(auVar36,auVar64);
    iVar3 = param_3[0xb];
    uVar39 = auVar51._4_4_;
    uVar41 = auVar51._8_4_;
    auVar62._4_4_ = uVar41;
    auVar62._0_4_ = uVar41;
    auVar62._8_4_ = uVar41;
    auVar62._12_4_ = uVar41;
    auVar68._4_4_ = uVar39;
    auVar68._0_4_ = uVar39;
    auVar68._8_4_ = uVar39;
    auVar68._12_4_ = uVar39;
    auVar69 = minps(auVar68,auVar62);
    auVar79._4_4_ = iVar3;
    auVar79._0_4_ = iVar3;
    auVar79._8_4_ = iVar3;
    auVar79._12_4_ = iVar3;
    auVar51 = minps(auVar51,auVar79);
    uVar39 = auVar36._4_4_;
    uVar41 = auVar36._8_4_;
    auVar54._4_4_ = uVar41;
    auVar54._0_4_ = uVar41;
    auVar54._8_4_ = uVar41;
    auVar54._12_4_ = uVar41;
    auVar63._4_4_ = uVar39;
    auVar63._0_4_ = uVar39;
    auVar63._8_4_ = uVar39;
    auVar63._12_4_ = uVar39;
    auVar36 = maxps(auVar36,_DAT_01701b10);
    auVar64 = maxps(auVar63,auVar54);
    auVar69 = minps(auVar51,auVar69);
    auVar36 = maxps(auVar36,auVar64);
    auVar51._4_4_ = -(uint)(auVar36._4_4_ <= auVar69._4_4_);
    auVar51._0_4_ = -(uint)(auVar36._0_4_ <= auVar69._0_4_);
    auVar51._8_4_ = -(uint)(auVar36._8_4_ <= auVar69._8_4_);
    auVar51._12_4_ = -(uint)(auVar36._12_4_ <= auVar69._12_4_);
    fVar32 = 0.0;
    uVar30 = movmskps(param_1,auVar51);
    if ((uVar30 & 1) != 0) {
      do {
        bVar60 = *(byte *)(iVar31 + 3);
        if ((char)bVar60 < '\0') {
          iVar31 = (int)fVar32 + ((bVar60 & 0x7f) << 8 | (uint)*(byte *)(iVar31 + 4)) * 2;
          uVar30 = *(uint *)(*param_1 + ((int)fVar32 + 1) * 5);
          auVar10[0xc] = (char)(uVar30 >> 0x18);
          auVar10._0_12_ = ZEXT712(0);
          uVar26 = CONCAT32(auVar10._10_3_,(ushort)(byte)(uVar30 >> 0x10));
          auVar29._5_8_ = 0;
          auVar29._0_5_ = uVar26;
          Var27 = CONCAT72(SUB137(auVar29 << 0x40,6),(ushort)(byte)(uVar30 >> 8));
          auVar52._0_4_ = uVar30 & 0xff;
          auVar52._4_9_ = Var27;
          auVar52._13_3_ = 0;
          uVar39 = *(undefined4 *)(*param_1 + iVar31 * 5);
          bVar60 = (byte)((uint)uVar39 >> 0x18);
          uVar59 = (undefined1)((uint)uVar39 >> 8);
          uVar14 = (ulonglong)CONCAT12(uVar59,(short)uVar39) & 0xffffffffffff00ff;
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar14;
          auVar11[0xc] = bVar60;
          auVar12[8] = (char)((uint)uVar39 >> 0x10);
          auVar12._0_8_ = uVar14;
          auVar12[9] = 0;
          auVar12._10_3_ = auVar11._10_3_;
          auVar28._5_8_ = 0;
          auVar28._0_5_ = auVar12._8_5_;
          auVar13[4] = uVar59;
          auVar13._0_4_ = (uint)uVar14;
          auVar13[5] = 0;
          auVar13._6_7_ = SUB137(auVar28 << 0x40,6);
          auVar55._0_4_ = (uint)uVar14 & 0xffff;
          auVar55._4_9_ = auVar13._4_9_;
          auVar55._13_3_ = 0;
          auVar52 = auVar52 & _DAT_01b34560;
          fVar35 = (fVar44 - fVar73) * 0.0044247787;
          fVar40 = (fVar48 - fVar74) * 0.0044247787;
          fVar42 = (fVar49 - fVar75) * 0.0044247787;
          fVar43 = (fVar50 - fVar76) * 0.0044247787;
          auVar69 = auVar55 & _DAT_01b34560;
          fVar61 = (float)(uVar30 >> 4 & 0xf);
          fVar65 = (float)((uint)Var27 >> 4);
          fVar66 = (float)((uint)uVar26 >> 4);
          fVar67 = (float)(uint3)(auVar10._10_3_ >> 0x14);
          fVar70 = (float)(auVar13._4_4_ >> 4);
          fVar71 = (float)(auVar12._8_4_ >> 4);
          fVar72 = (float)(bVar60 >> 4);
          fVar15 = (float)param_3[0x10];
          fVar16 = (float)param_3[0x11];
          fVar17 = (float)param_3[0x12];
          fVar18 = (float)param_3[0x13];
          iVar3 = param_3[0xb];
          fVar19 = (float)param_3[4];
          fVar20 = (float)param_3[5];
          fVar21 = (float)param_3[6];
          fVar22 = (float)param_3[7];
          auVar45._0_8_ =
               CONCAT44((((fVar65 * fVar65 * fVar40 + fVar74) - fVar16) - fVar20) *
                        (float)param_3[0xd],
                        (((fVar61 * fVar61 * fVar35 + fVar73) - fVar15) - fVar19) *
                        (float)param_3[0xc]);
          auVar45._8_4_ =
               (((fVar66 * fVar66 * fVar42 + fVar75) - fVar17) - fVar21) * (float)param_3[0xe];
          auVar45._12_4_ =
               (((fVar67 * fVar67 * fVar43 + fVar76) - fVar18) - fVar22) * (float)param_3[0xf];
          auVar37._8_4_ = auVar45._8_4_;
          auVar37._0_8_ = auVar45._0_8_;
          auVar37._12_4_ = auVar45._12_4_;
          auVar53._0_4_ =
               ((fVar15 + (fVar44 - (float)auVar52._0_4_ * (float)auVar52._0_4_ * fVar35)) - fVar19)
               * (float)param_3[0xc];
          auVar53._4_4_ =
               ((fVar16 + (fVar48 - (float)auVar52._4_4_ * (float)auVar52._4_4_ * fVar40)) - fVar20)
               * (float)param_3[0xd];
          auVar53._8_4_ =
               ((fVar17 + (fVar49 - (float)auVar52._8_4_ * (float)auVar52._8_4_ * fVar42)) - fVar21)
               * (float)param_3[0xe];
          auVar53._12_4_ =
               ((fVar18 + (fVar50 - (float)auVar52._12_4_ * (float)auVar52._12_4_ * fVar43)) -
               fVar22) * (float)param_3[0xf];
          auVar36 = minps(auVar37,auVar53);
          auVar51 = maxps(auVar45,auVar53);
          uVar39 = auVar36._4_4_;
          uVar41 = auVar36._8_4_;
          auVar46._4_4_ = uVar41;
          auVar46._0_4_ = uVar41;
          auVar46._8_4_ = uVar41;
          auVar46._12_4_ = uVar41;
          auVar77._4_4_ = uVar39;
          auVar77._0_4_ = uVar39;
          auVar77._8_4_ = uVar39;
          auVar77._12_4_ = uVar39;
          auVar36 = maxps(auVar36,_DAT_01701b10);
          auVar64 = maxps(auVar77,auVar46);
          auVar56._0_8_ =
               CONCAT44((((fVar70 * fVar70 * fVar40 + fVar74) - fVar16) - fVar20) *
                        (float)param_3[0xd],
                        ((((float)(auVar55._0_4_ >> 4) * (float)(auVar55._0_4_ >> 4) * fVar35 +
                          fVar73) - fVar15) - fVar19) * (float)param_3[0xc]);
          auVar56._8_4_ =
               (((fVar71 * fVar71 * fVar42 + fVar75) - fVar17) - fVar21) * (float)param_3[0xe];
          auVar56._12_4_ =
               (((fVar72 * fVar72 * fVar43 + fVar76) - fVar18) - fVar22) * (float)param_3[0xf];
          auVar36 = maxps(auVar36,auVar64);
          fVar73 = (float)param_3[0xc] *
                   ((fVar15 + (fVar44 - (float)auVar69._0_4_ * (float)auVar69._0_4_ * fVar35)) -
                   fVar19);
          fVar74 = (float)param_3[0xd] *
                   ((fVar16 + (fVar48 - (float)auVar69._4_4_ * (float)auVar69._4_4_ * fVar40)) -
                   fVar20);
          fVar75 = (float)param_3[0xe] *
                   ((fVar17 + (fVar49 - (float)auVar69._8_4_ * (float)auVar69._8_4_ * fVar42)) -
                   fVar21);
          fVar76 = (float)param_3[0xf] *
                   ((fVar18 + (fVar50 - (float)auVar69._12_4_ * (float)auVar69._12_4_ * fVar43)) -
                   fVar22);
          auVar47._8_4_ = auVar56._8_4_;
          auVar47._0_8_ = auVar56._0_8_;
          auVar47._12_4_ = auVar56._12_4_;
          auVar5._4_4_ = fVar74;
          auVar5._0_4_ = fVar73;
          auVar5._8_4_ = fVar75;
          auVar5._12_4_ = fVar76;
          auVar64 = maxps(auVar56,auVar5);
          auVar6._4_4_ = fVar74;
          auVar6._0_4_ = fVar73;
          auVar6._8_4_ = fVar75;
          auVar6._12_4_ = fVar76;
          auVar69 = minps(auVar47,auVar6);
          uVar39 = auVar69._4_4_;
          uVar41 = auVar69._8_4_;
          auVar78._4_4_ = uVar39;
          auVar78._0_4_ = uVar39;
          auVar78._8_4_ = uVar39;
          auVar78._12_4_ = uVar39;
          auVar69 = maxps(auVar69,_DAT_01701b10);
          auVar7._4_4_ = uVar41;
          auVar7._0_4_ = uVar41;
          auVar7._8_4_ = uVar41;
          auVar7._12_4_ = uVar41;
          auVar79 = maxps(auVar78,auVar7);
          auVar69 = maxps(auVar69,auVar79);
          uVar39 = auVar64._4_4_;
          uVar41 = auVar64._8_4_;
          auVar80._4_4_ = uVar39;
          auVar80._0_4_ = uVar39;
          auVar80._8_4_ = uVar39;
          auVar80._12_4_ = uVar39;
          auVar24._4_4_ = iVar3;
          auVar24._0_4_ = iVar3;
          auVar24._8_4_ = iVar3;
          auVar24._12_4_ = iVar3;
          auVar64 = minps(auVar64,auVar24);
          auVar8._4_4_ = uVar41;
          auVar8._0_4_ = uVar41;
          auVar8._8_4_ = uVar41;
          auVar8._12_4_ = uVar41;
          auVar79 = minps(auVar80,auVar8);
          auVar64 = minps(auVar64,auVar79);
          auVar81._4_4_ = -(uint)(auVar69._4_4_ <= auVar64._4_4_);
          auVar81._0_4_ = -(uint)(auVar69._0_4_ <= auVar64._0_4_);
          auVar81._8_4_ = -(uint)(auVar69._8_4_ <= auVar64._8_4_);
          auVar81._12_4_ = -(uint)(auVar69._12_4_ <= auVar64._12_4_);
          uVar30 = movmskps((int)fVar32 + 1,auVar81);
          uVar39 = auVar51._4_4_;
          uVar41 = auVar51._8_4_;
          auVar57._4_4_ = uVar41;
          auVar57._0_4_ = uVar41;
          auVar57._8_4_ = uVar41;
          auVar57._12_4_ = uVar41;
          auVar82._4_4_ = uVar39;
          auVar82._0_4_ = uVar39;
          auVar82._8_4_ = uVar39;
          auVar82._12_4_ = uVar39;
          auVar25._4_4_ = iVar3;
          auVar25._0_4_ = iVar3;
          auVar25._8_4_ = iVar3;
          auVar25._12_4_ = iVar3;
          auVar51 = minps(auVar51,auVar25);
          auVar64 = minps(auVar82,auVar57);
          auVar51 = minps(auVar51,auVar64);
          auVar58._4_4_ = -(uint)(auVar36._4_4_ <= auVar51._4_4_);
          auVar58._0_4_ = -(uint)(auVar36._0_4_ <= auVar51._0_4_);
          auVar58._8_4_ = -(uint)(auVar36._8_4_ <= auVar51._8_4_);
          auVar58._12_4_ = -(uint)(auVar36._12_4_ <= auVar51._12_4_);
          uVar33 = movmskps(iVar31,auVar58);
          uVar30 = (uVar30 & 1) * 2 | uVar33 & 1;
          if (uVar30 == 3) {
            param_3[0x14] = (uint)(auVar69._0_4_ < auVar36._0_4_);
LAB_01265f35:
                    /* WARNING: Could not recover jumptable at 0x01265f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(&DAT_01266118 + uVar30 * 4))();
            return;
          }
          if (uVar30 < 4) goto LAB_01265f35;
        }
        else {
          iVar3 = *param_3;
          iVar34 = (uint)CONCAT11(bVar60,*(undefined1 *)(iVar31 + 4)) * 0x60 + param_1[0xf];
          iVar31 = *(int *)(*(int *)(iVar3 + 0x40) + 0x3c);
          iVar9 = (iVar34 - iVar31) / 0x60;
          if ((iVar9 != *(int *)(iVar3 + 0x60)) || (*(int *)(iVar3 + 100) != iVar9)) {
            *(int *)(iVar3 + 100) = iVar9;
            *(int *)(iVar3 + 0x60) = iVar9;
            iVar4 = *(int *)(iVar3 + 0x40);
            iVar31 = iVar9 * 0x60 + iVar31;
            *(int *)(iVar3 + 0x44) = iVar31;
            *(int *)(iVar3 + 0x4c) = *(int *)(iVar4 + 0x60) + *(int *)(iVar31 + 0x48) * 4;
            *(uint *)(iVar3 + 0x50) =
                 (uint)*(byte *)(*(int *)(iVar3 + 0x44) + 0x5c) * 0x80000 + *(int *)(iVar4 + 0x6c);
            *(uint *)(iVar3 + 0x54) =
                 *(int *)(iVar4 + 0x54) + (*(uint *)(*(int *)(iVar3 + 0x44) + 0x4c) >> 8) * 2;
            *(uint *)(iVar3 + 0x58) =
                 *(int *)(iVar4 + 0x78) + (*(uint *)(*(int *)(iVar3 + 0x44) + 0x54) >> 8) * 8;
            iVar31 = *(int *)(iVar3 + 0x44);
            *(uint *)(iVar3 + 0x5c) = *(uint *)(iVar31 + 0x4c) & 0xff;
            *(uint *)(iVar3 + 0x48) = *(int *)(iVar4 + 0x48) + (*(uint *)(iVar31 + 0x50) >> 8) * 4;
            uVar39 = *(undefined4 *)(iVar31 + 0x34);
            uVar41 = *(undefined4 *)(iVar31 + 0x38);
            uVar23 = *(undefined4 *)(iVar31 + 0x3c);
            *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar31 + 0x30);
            *(undefined4 *)(iVar3 + 0x24) = uVar39;
            *(undefined4 *)(iVar3 + 0x28) = uVar41;
            *(undefined4 *)(iVar3 + 0x2c) = uVar23;
            uVar39 = *(undefined4 *)(iVar31 + 0x40);
            uVar41 = *(undefined4 *)(iVar31 + 0x44);
            *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar31 + 0x3c);
            *(undefined4 *)(iVar3 + 0x34) = uVar39;
            *(undefined4 *)(iVar3 + 0x38) = uVar41;
            *(undefined4 *)(iVar3 + 0x3c) = 0;
            auVar38._12_4_ = 0;
            auVar38._0_12_ = *(undefined1 (*) [12])(iVar3 + 0x30);
            *(undefined1 (*) [16])(iVar3 + 0x30) = auVar38;
            *(int *)(iVar3 + 0x54) =
                 *(int *)(iVar3 + 0x54) + (*(uint *)(*(int *)(iVar3 + 0x44) + 0x4c) & 0xff) * -2;
          }
          FUN_01255eb0(iVar34,param_2,param_3);
        }
        iVar31 = param_2[1];
        if (iVar31 <= iVar2) {
          return;
        }
        pfVar1 = (float *)(*param_2 + -0x30 + iVar31 * 0x30);
        param_2[1] = iVar31 + -1;
        fVar32 = pfVar1[8];
        fVar73 = *pfVar1;
        fVar74 = pfVar1[1];
        fVar75 = pfVar1[2];
        fVar76 = pfVar1[3];
        fVar44 = pfVar1[4];
        fVar48 = pfVar1[5];
        fVar49 = pfVar1[6];
        fVar50 = pfVar1[7];
        iVar31 = (int)fVar32 * 5 + *param_1;
      } while( true );
    }
  }
                    /* WARNING: Read-only address (ram,0x01701b10) is written */
  return;
}

// 01266130  FUN_01266130  size=898  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01266130(int *param_1,int *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint5 uVar17;
  unkbyte9 Var18;
  undefined1 auVar19 [13];
  char cVar20;
  undefined1 auVar21 [13];
  float *pfVar22;
  undefined4 uVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 uVar39;
  byte bVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  if (param_1[1] != 0) {
    iVar5 = param_2[1];
    if ((param_3[1] != 0) &&
       (auVar38._4_4_ =
             -(uint)((float)param_3[5] <= (float)param_1[9] &&
                    (float)param_1[5] <= (float)param_3[9]),
       auVar38._0_4_ =
            -(uint)((float)param_3[4] <= (float)param_1[8] && (float)param_1[4] <= (float)param_3[8]
                   ),
       auVar38._8_4_ =
            -(uint)((float)param_3[6] <= (float)param_1[10] &&
                   (float)param_1[6] <= (float)param_3[10]),
       auVar38._12_4_ =
            -(uint)((float)param_3[7] <= (float)param_1[0xb] &&
                   (float)param_1[7] <= (float)param_3[0xb]), uVar23 = movmskps(param_3,auVar38),
       iVar26 = *param_1, fVar24 = 0.0, fVar31 = (float)param_1[8], fVar32 = (float)param_1[9],
       fVar33 = (float)param_1[10], fVar34 = (float)param_1[0xb], fVar36 = (float)param_1[4],
       fVar41 = (float)param_1[5], fVar42 = (float)param_1[6], fVar43 = (float)param_1[7],
       ((byte)uVar23 & 7) == 7)) {
LAB_012661a1:
      while( true ) {
        bVar40 = *(byte *)(iVar26 + 3);
        if (-1 < (char)bVar40) break;
        fVar1 = (float)((int)fVar24 + 1);
        fVar24 = (float)((int)fVar24 + ((bVar40 & 0x7f) << 8 | (uint)*(byte *)(iVar26 + 4)) * 2);
        iVar26 = *param_1 + (int)fVar1 * 4;
        uVar4 = *(uint *)(iVar26 + (int)fVar1);
        auVar10[0xc] = (char)(uVar4 >> 0x18);
        auVar10._0_12_ = ZEXT712(0);
        uVar17 = CONCAT32(auVar10._10_3_,(ushort)(byte)(uVar4 >> 0x10));
        auVar21._5_8_ = 0;
        auVar21._0_5_ = uVar17;
        Var18 = CONCAT72(SUB137(auVar21 << 0x40,6),(ushort)(byte)(uVar4 >> 8));
        auVar35._0_4_ = uVar4 & 0xff;
        auVar35._4_9_ = Var18;
        auVar35._13_3_ = 0;
        iVar2 = *param_1 + (int)fVar24 * 4;
        uVar23 = *(undefined4 *)(iVar2 + (int)fVar24);
        bVar40 = (byte)((uint)uVar23 >> 0x18);
        uVar39 = (undefined1)((uint)uVar23 >> 8);
        uVar14 = (ulonglong)CONCAT12(uVar39,(short)uVar23) & 0xffffffffffff00ff;
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar14;
        auVar11[0xc] = bVar40;
        auVar12[8] = (char)((uint)uVar23 >> 0x10);
        auVar12._0_8_ = uVar14;
        auVar12[9] = 0;
        auVar12._10_3_ = auVar11._10_3_;
        auVar19._5_8_ = 0;
        auVar19._0_5_ = auVar12._8_5_;
        auVar13[4] = uVar39;
        auVar13._0_4_ = (uint)uVar14;
        auVar13[5] = 0;
        auVar13._6_7_ = SUB137(auVar19 << 0x40,6);
        auVar37._0_4_ = (uint)uVar14 & 0xffff;
        auVar37._4_9_ = auVar13._4_9_;
        auVar37._13_3_ = 0;
        auVar35 = auVar35 & _DAT_01b34560;
        iVar26 = iVar26 + (int)fVar1;
        auVar38 = auVar37 & _DAT_01b34560;
        fVar49 = (float)(auVar13._4_4_ >> 4);
        fVar50 = (float)(auVar12._8_4_ >> 4);
        fVar51 = (float)(bVar40 >> 4);
        fVar44 = (float)(uVar4 >> 4 & 0xf);
        fVar45 = (float)((uint)Var18 >> 4);
        fVar46 = (float)((uint)uVar17 >> 4);
        fVar47 = (float)(uint3)(auVar10._10_3_ >> 0x14);
        fVar27 = (fVar31 - fVar36) * 0.0044247787;
        fVar28 = (fVar32 - fVar41) * 0.0044247787;
        fVar29 = (fVar33 - fVar42) * 0.0044247787;
        fVar30 = (fVar34 - fVar43) * 0.0044247787;
        fVar44 = fVar44 * fVar44 * fVar27 + fVar36;
        fVar45 = fVar45 * fVar45 * fVar28 + fVar41;
        fVar46 = fVar46 * fVar46 * fVar29 + fVar42;
        fVar47 = fVar47 * fVar47 * fVar30 + fVar43;
        fVar36 = (float)(auVar37._0_4_ >> 4) * (float)(auVar37._0_4_ >> 4) * fVar27 + fVar36;
        fVar41 = fVar49 * fVar49 * fVar28 + fVar41;
        fVar42 = fVar50 * fVar50 * fVar29 + fVar42;
        fVar43 = fVar51 * fVar51 * fVar30 + fVar43;
        fVar49 = fVar31 - (float)auVar35._0_4_ * (float)auVar35._0_4_ * fVar27;
        fVar50 = fVar32 - (float)auVar35._4_4_ * (float)auVar35._4_4_ * fVar28;
        fVar51 = fVar33 - (float)auVar35._8_4_ * (float)auVar35._8_4_ * fVar29;
        fVar48 = fVar34 - (float)auVar35._12_4_ * (float)auVar35._12_4_ * fVar30;
        fVar31 = fVar31 - (float)auVar38._0_4_ * (float)auVar38._0_4_ * fVar27;
        fVar32 = fVar32 - (float)auVar38._4_4_ * (float)auVar38._4_4_ * fVar28;
        fVar33 = fVar33 - (float)auVar38._8_4_ * (float)auVar38._8_4_ * fVar29;
        fVar34 = fVar34 - (float)auVar38._12_4_ * (float)auVar38._12_4_ * fVar30;
        if ((param_3[1] == 0) ||
           (auVar7._4_4_ = -(uint)((float)param_3[5] <= fVar50 && fVar45 <= (float)param_3[9]),
           auVar7._0_4_ = -(uint)((float)param_3[4] <= fVar49 && fVar44 <= (float)param_3[8]),
           auVar7._8_4_ = -(uint)((float)param_3[6] <= fVar51 && fVar46 <= (float)param_3[10]),
           auVar7._12_4_ = -(uint)((float)param_3[7] <= fVar48 && fVar47 <= (float)param_3[0xb]),
           uVar23 = movmskps(param_1,auVar7), ((byte)uVar23 & 7) != 7)) {
          bVar40 = 0;
        }
        else {
          bVar40 = 1;
        }
        if ((param_3[1] == 0) ||
           (auVar8._4_4_ = -(uint)((float)param_3[5] <= fVar32 && fVar41 <= (float)param_3[9]),
           auVar8._0_4_ = -(uint)((float)param_3[4] <= fVar31 && fVar36 <= (float)param_3[8]),
           auVar8._8_4_ = -(uint)((float)param_3[6] <= fVar33 && fVar42 <= (float)param_3[10]),
           auVar8._12_4_ = -(uint)((float)param_3[7] <= fVar34 && fVar43 <= (float)param_3[0xb]),
           uVar23 = movmskps(param_3,auVar8), ((byte)uVar23 & 7) != 7)) {
          cVar20 = '\0';
        }
        else {
          cVar20 = '\x01';
        }
        switch(-cVar20 & 2U | bVar40) {
        default:
          goto switchD_012662f5_caseD_0;
        case 1:
          fVar24 = fVar1;
          fVar31 = fVar49;
          fVar32 = fVar50;
          fVar33 = fVar51;
          fVar34 = fVar48;
          fVar36 = fVar44;
          fVar41 = fVar45;
          fVar42 = fVar46;
          fVar43 = fVar47;
          break;
        case 2:
          iVar26 = iVar2 + (int)fVar24;
          break;
        case 3:
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_2,0x30);
          }
          pfVar22 = (float *)(param_2[1] * 0x30 + *param_2);
          param_2[1] = param_2[1] + 1;
          pfVar22[4] = fVar31;
          pfVar22[5] = fVar32;
          pfVar22[6] = fVar33;
          pfVar22[7] = fVar34;
          *pfVar22 = fVar36;
          pfVar22[1] = fVar41;
          pfVar22[2] = fVar42;
          pfVar22[3] = fVar43;
          pfVar22[8] = fVar24;
          fVar24 = fVar1;
          fVar31 = fVar49;
          fVar32 = fVar50;
          fVar33 = fVar51;
          fVar34 = fVar48;
          fVar36 = fVar44;
          fVar41 = fVar45;
          fVar42 = fVar46;
          fVar43 = fVar47;
        }
      }
      iVar2 = *param_3;
      iVar25 = (uint)CONCAT11(bVar40,*(byte *)(iVar26 + 4)) * 0x60 + param_1[0xf];
      iVar26 = *(int *)(*(int *)(iVar2 + 0x40) + 0x3c);
      iVar9 = (iVar25 - iVar26) / 0x60;
      if ((iVar9 != *(int *)(iVar2 + 0x60)) || (*(int *)(iVar2 + 100) != iVar9)) {
        *(int *)(iVar2 + 100) = iVar9;
        *(int *)(iVar2 + 0x60) = iVar9;
        iVar6 = *(int *)(iVar2 + 0x40);
        iVar26 = iVar9 * 0x60 + iVar26;
        *(int *)(iVar2 + 0x44) = iVar26;
        *(int *)(iVar2 + 0x4c) = *(int *)(iVar6 + 0x60) + *(int *)(iVar26 + 0x48) * 4;
        *(uint *)(iVar2 + 0x50) =
             (uint)*(byte *)(*(int *)(iVar2 + 0x44) + 0x5c) * 0x80000 + *(int *)(iVar6 + 0x6c);
        *(uint *)(iVar2 + 0x54) =
             *(int *)(iVar6 + 0x54) + (*(uint *)(*(int *)(iVar2 + 0x44) + 0x4c) >> 8) * 2;
        *(uint *)(iVar2 + 0x58) =
             *(int *)(iVar6 + 0x78) + (*(uint *)(*(int *)(iVar2 + 0x44) + 0x54) >> 8) * 8;
        iVar26 = *(int *)(iVar2 + 0x44);
        *(uint *)(iVar2 + 0x5c) = *(uint *)(iVar26 + 0x4c) & 0xff;
        *(uint *)(iVar2 + 0x48) = *(int *)(iVar6 + 0x48) + (*(uint *)(iVar26 + 0x50) >> 8) * 4;
        uVar23 = *(undefined4 *)(iVar26 + 0x34);
        uVar15 = *(undefined4 *)(iVar26 + 0x38);
        uVar16 = *(undefined4 *)(iVar26 + 0x3c);
        *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar26 + 0x30);
        *(undefined4 *)(iVar2 + 0x24) = uVar23;
        *(undefined4 *)(iVar2 + 0x28) = uVar15;
        *(undefined4 *)(iVar2 + 0x2c) = uVar16;
        uVar23 = *(undefined4 *)(iVar26 + 0x40);
        uVar15 = *(undefined4 *)(iVar26 + 0x44);
        *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar26 + 0x3c);
        *(undefined4 *)(iVar2 + 0x34) = uVar23;
        *(undefined4 *)(iVar2 + 0x38) = uVar15;
        *(undefined4 *)(iVar2 + 0x3c) = 0;
        *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
        *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
        *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar2 + 0x38);
        *(undefined4 *)(iVar2 + 0x3c) = 0;
        *(int *)(iVar2 + 0x54) =
             *(int *)(iVar2 + 0x54) + (*(uint *)(*(int *)(iVar2 + 0x44) + 0x4c) & 0xff) * -2;
      }
      FUN_012562b0(iVar25,param_2,param_3);
switchD_012662f5_caseD_0:
      iVar26 = param_2[1];
      if (iVar5 < iVar26) {
        iVar2 = *param_2;
        param_2[1] = iVar26 + -1;
        pfVar22 = (float *)(iVar2 + -0x30 + iVar26 * 0x30);
        pfVar3 = (float *)(iVar2 + -0x20 + iVar26 * 0x30);
        fVar24 = *(float *)(iVar2 + iVar26 * 0x30 + -0x10);
        iVar26 = (int)fVar24 * 5 + *param_1;
        fVar31 = *pfVar3;
        fVar32 = pfVar3[1];
        fVar33 = pfVar3[2];
        fVar34 = pfVar3[3];
        fVar36 = *pfVar22;
        fVar41 = pfVar22[1];
        fVar42 = pfVar22[2];
        fVar43 = pfVar22[3];
        goto LAB_012661a1;
      }
    }
  }
  return;
}

// 012664D0  FUN_012664d0  size=268  [run]
void FUN_012664d0(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *param_3;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar8 = (uint)CONCAT11(*(undefined1 *)(*(int *)(param_4 + 0x30) + 3),
                         *(undefined1 *)(*(int *)(param_4 + 0x30) + 4)) * 0x60 +
          *(int *)(param_1 + 0x3c);
  iVar3 = (iVar8 - *(int *)(iVar2 + 0x3c)) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    iVar7 = iVar3 * 0x60 + *(int *)(iVar2 + 0x3c);
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x60) = iVar3;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  FUN_01259f60(iVar8,param_2,param_3);
  return;
}

// 012665E0  FUN_012665e0  size=25  [run]
void FUN_012665e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01262880(param_2,param_3,param_4);
  return;
}

// 01266600  FUN_01266600  size=246  [run]
void FUN_01266600(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18 [4];
  int local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0x80000000;
  local_8 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0xc00U))
  {
    local_18[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0xc00U;
  }
  local_18[2] = 0x80000040;
  local_18[0] = local_18[3];
  FUN_01265c90(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],(local_18[2] & 0x3fffffffU) * 0x30);
  }
  return;
}

// 01266700  FUN_01266700  size=246  [run]
void FUN_01266700(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18 [4];
  int local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0x80000000;
  local_8 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0xc00U))
  {
    local_18[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0xc00U;
  }
  local_18[2] = 0x80000040;
  local_18[0] = local_18[3];
  FUN_01266130(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],(local_18[2] & 0x3fffffffU) * 0x30);
  }
  return;
}

// 01266800  FUN_01266800  size=898  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01266800(int *param_1,int *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint5 uVar17;
  unkbyte9 Var18;
  undefined1 auVar19 [13];
  char cVar20;
  undefined1 auVar21 [13];
  float *pfVar22;
  undefined4 uVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 uVar39;
  byte bVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  if (param_1[1] != 0) {
    iVar5 = param_2[1];
    if ((param_3[1] != 0) &&
       (auVar38._4_4_ =
             -(uint)((float)param_3[5] <= (float)param_1[9] &&
                    (float)param_1[5] <= (float)param_3[9]),
       auVar38._0_4_ =
            -(uint)((float)param_3[4] <= (float)param_1[8] && (float)param_1[4] <= (float)param_3[8]
                   ),
       auVar38._8_4_ =
            -(uint)((float)param_3[6] <= (float)param_1[10] &&
                   (float)param_1[6] <= (float)param_3[10]),
       auVar38._12_4_ =
            -(uint)((float)param_3[7] <= (float)param_1[0xb] &&
                   (float)param_1[7] <= (float)param_3[0xb]), uVar23 = movmskps(param_3,auVar38),
       iVar26 = *param_1, fVar24 = 0.0, fVar31 = (float)param_1[8], fVar32 = (float)param_1[9],
       fVar33 = (float)param_1[10], fVar34 = (float)param_1[0xb], fVar36 = (float)param_1[4],
       fVar41 = (float)param_1[5], fVar42 = (float)param_1[6], fVar43 = (float)param_1[7],
       ((byte)uVar23 & 7) == 7)) {
LAB_01266871:
      while( true ) {
        bVar40 = *(byte *)(iVar26 + 3);
        if (-1 < (char)bVar40) break;
        fVar1 = (float)((int)fVar24 + 1);
        fVar24 = (float)((int)fVar24 + ((bVar40 & 0x7f) << 8 | (uint)*(byte *)(iVar26 + 4)) * 2);
        iVar26 = *param_1 + (int)fVar1 * 4;
        uVar4 = *(uint *)(iVar26 + (int)fVar1);
        auVar10[0xc] = (char)(uVar4 >> 0x18);
        auVar10._0_12_ = ZEXT712(0);
        uVar17 = CONCAT32(auVar10._10_3_,(ushort)(byte)(uVar4 >> 0x10));
        auVar21._5_8_ = 0;
        auVar21._0_5_ = uVar17;
        Var18 = CONCAT72(SUB137(auVar21 << 0x40,6),(ushort)(byte)(uVar4 >> 8));
        auVar35._0_4_ = uVar4 & 0xff;
        auVar35._4_9_ = Var18;
        auVar35._13_3_ = 0;
        iVar2 = *param_1 + (int)fVar24 * 4;
        uVar23 = *(undefined4 *)(iVar2 + (int)fVar24);
        bVar40 = (byte)((uint)uVar23 >> 0x18);
        uVar39 = (undefined1)((uint)uVar23 >> 8);
        uVar14 = (ulonglong)CONCAT12(uVar39,(short)uVar23) & 0xffffffffffff00ff;
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar14;
        auVar11[0xc] = bVar40;
        auVar12[8] = (char)((uint)uVar23 >> 0x10);
        auVar12._0_8_ = uVar14;
        auVar12[9] = 0;
        auVar12._10_3_ = auVar11._10_3_;
        auVar19._5_8_ = 0;
        auVar19._0_5_ = auVar12._8_5_;
        auVar13[4] = uVar39;
        auVar13._0_4_ = (uint)uVar14;
        auVar13[5] = 0;
        auVar13._6_7_ = SUB137(auVar19 << 0x40,6);
        auVar37._0_4_ = (uint)uVar14 & 0xffff;
        auVar37._4_9_ = auVar13._4_9_;
        auVar37._13_3_ = 0;
        auVar35 = auVar35 & _DAT_01b34560;
        iVar26 = iVar26 + (int)fVar1;
        auVar38 = auVar37 & _DAT_01b34560;
        fVar49 = (float)(auVar13._4_4_ >> 4);
        fVar50 = (float)(auVar12._8_4_ >> 4);
        fVar51 = (float)(bVar40 >> 4);
        fVar44 = (float)(uVar4 >> 4 & 0xf);
        fVar45 = (float)((uint)Var18 >> 4);
        fVar46 = (float)((uint)uVar17 >> 4);
        fVar47 = (float)(uint3)(auVar10._10_3_ >> 0x14);
        fVar27 = (fVar31 - fVar36) * 0.0044247787;
        fVar28 = (fVar32 - fVar41) * 0.0044247787;
        fVar29 = (fVar33 - fVar42) * 0.0044247787;
        fVar30 = (fVar34 - fVar43) * 0.0044247787;
        fVar44 = fVar44 * fVar44 * fVar27 + fVar36;
        fVar45 = fVar45 * fVar45 * fVar28 + fVar41;
        fVar46 = fVar46 * fVar46 * fVar29 + fVar42;
        fVar47 = fVar47 * fVar47 * fVar30 + fVar43;
        fVar36 = (float)(auVar37._0_4_ >> 4) * (float)(auVar37._0_4_ >> 4) * fVar27 + fVar36;
        fVar41 = fVar49 * fVar49 * fVar28 + fVar41;
        fVar42 = fVar50 * fVar50 * fVar29 + fVar42;
        fVar43 = fVar51 * fVar51 * fVar30 + fVar43;
        fVar49 = fVar31 - (float)auVar35._0_4_ * (float)auVar35._0_4_ * fVar27;
        fVar50 = fVar32 - (float)auVar35._4_4_ * (float)auVar35._4_4_ * fVar28;
        fVar51 = fVar33 - (float)auVar35._8_4_ * (float)auVar35._8_4_ * fVar29;
        fVar48 = fVar34 - (float)auVar35._12_4_ * (float)auVar35._12_4_ * fVar30;
        fVar31 = fVar31 - (float)auVar38._0_4_ * (float)auVar38._0_4_ * fVar27;
        fVar32 = fVar32 - (float)auVar38._4_4_ * (float)auVar38._4_4_ * fVar28;
        fVar33 = fVar33 - (float)auVar38._8_4_ * (float)auVar38._8_4_ * fVar29;
        fVar34 = fVar34 - (float)auVar38._12_4_ * (float)auVar38._12_4_ * fVar30;
        if ((param_3[1] == 0) ||
           (auVar7._4_4_ = -(uint)((float)param_3[5] <= fVar50 && fVar45 <= (float)param_3[9]),
           auVar7._0_4_ = -(uint)((float)param_3[4] <= fVar49 && fVar44 <= (float)param_3[8]),
           auVar7._8_4_ = -(uint)((float)param_3[6] <= fVar51 && fVar46 <= (float)param_3[10]),
           auVar7._12_4_ = -(uint)((float)param_3[7] <= fVar48 && fVar47 <= (float)param_3[0xb]),
           uVar23 = movmskps(param_1,auVar7), ((byte)uVar23 & 7) != 7)) {
          bVar40 = 0;
        }
        else {
          bVar40 = 1;
        }
        if ((param_3[1] == 0) ||
           (auVar8._4_4_ = -(uint)((float)param_3[5] <= fVar32 && fVar41 <= (float)param_3[9]),
           auVar8._0_4_ = -(uint)((float)param_3[4] <= fVar31 && fVar36 <= (float)param_3[8]),
           auVar8._8_4_ = -(uint)((float)param_3[6] <= fVar33 && fVar42 <= (float)param_3[10]),
           auVar8._12_4_ = -(uint)((float)param_3[7] <= fVar34 && fVar43 <= (float)param_3[0xb]),
           uVar23 = movmskps(param_3,auVar8), ((byte)uVar23 & 7) != 7)) {
          cVar20 = '\0';
        }
        else {
          cVar20 = '\x01';
        }
        switch(-cVar20 & 2U | bVar40) {
        default:
          goto switchD_012669c5_caseD_0;
        case 1:
          fVar24 = fVar1;
          fVar31 = fVar49;
          fVar32 = fVar50;
          fVar33 = fVar51;
          fVar34 = fVar48;
          fVar36 = fVar44;
          fVar41 = fVar45;
          fVar42 = fVar46;
          fVar43 = fVar47;
          break;
        case 2:
          iVar26 = iVar2 + (int)fVar24;
          break;
        case 3:
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_2,0x30);
          }
          pfVar22 = (float *)(param_2[1] * 0x30 + *param_2);
          param_2[1] = param_2[1] + 1;
          pfVar22[4] = fVar31;
          pfVar22[5] = fVar32;
          pfVar22[6] = fVar33;
          pfVar22[7] = fVar34;
          *pfVar22 = fVar36;
          pfVar22[1] = fVar41;
          pfVar22[2] = fVar42;
          pfVar22[3] = fVar43;
          pfVar22[8] = fVar24;
          fVar24 = fVar1;
          fVar31 = fVar49;
          fVar32 = fVar50;
          fVar33 = fVar51;
          fVar34 = fVar48;
          fVar36 = fVar44;
          fVar41 = fVar45;
          fVar42 = fVar46;
          fVar43 = fVar47;
        }
      }
      iVar2 = *param_3;
      iVar25 = (uint)CONCAT11(bVar40,*(byte *)(iVar26 + 4)) * 0x60 + param_1[0xf];
      iVar26 = *(int *)(*(int *)(iVar2 + 0x40) + 0x3c);
      iVar9 = (iVar25 - iVar26) / 0x60;
      if ((iVar9 != *(int *)(iVar2 + 0x60)) || (*(int *)(iVar2 + 100) != iVar9)) {
        *(int *)(iVar2 + 100) = iVar9;
        *(int *)(iVar2 + 0x60) = iVar9;
        iVar6 = *(int *)(iVar2 + 0x40);
        iVar26 = iVar9 * 0x60 + iVar26;
        *(int *)(iVar2 + 0x44) = iVar26;
        *(int *)(iVar2 + 0x4c) = *(int *)(iVar6 + 0x60) + *(int *)(iVar26 + 0x48) * 4;
        *(uint *)(iVar2 + 0x50) =
             (uint)*(byte *)(*(int *)(iVar2 + 0x44) + 0x5c) * 0x80000 + *(int *)(iVar6 + 0x6c);
        *(uint *)(iVar2 + 0x54) =
             *(int *)(iVar6 + 0x54) + (*(uint *)(*(int *)(iVar2 + 0x44) + 0x4c) >> 8) * 2;
        *(uint *)(iVar2 + 0x58) =
             *(int *)(iVar6 + 0x78) + (*(uint *)(*(int *)(iVar2 + 0x44) + 0x54) >> 8) * 8;
        iVar26 = *(int *)(iVar2 + 0x44);
        *(uint *)(iVar2 + 0x5c) = *(uint *)(iVar26 + 0x4c) & 0xff;
        *(uint *)(iVar2 + 0x48) = *(int *)(iVar6 + 0x48) + (*(uint *)(iVar26 + 0x50) >> 8) * 4;
        uVar23 = *(undefined4 *)(iVar26 + 0x34);
        uVar15 = *(undefined4 *)(iVar26 + 0x38);
        uVar16 = *(undefined4 *)(iVar26 + 0x3c);
        *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar26 + 0x30);
        *(undefined4 *)(iVar2 + 0x24) = uVar23;
        *(undefined4 *)(iVar2 + 0x28) = uVar15;
        *(undefined4 *)(iVar2 + 0x2c) = uVar16;
        uVar23 = *(undefined4 *)(iVar26 + 0x40);
        uVar15 = *(undefined4 *)(iVar26 + 0x44);
        *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar26 + 0x3c);
        *(undefined4 *)(iVar2 + 0x34) = uVar23;
        *(undefined4 *)(iVar2 + 0x38) = uVar15;
        *(undefined4 *)(iVar2 + 0x3c) = 0;
        *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
        *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
        *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar2 + 0x38);
        *(undefined4 *)(iVar2 + 0x3c) = 0;
        *(int *)(iVar2 + 0x54) =
             *(int *)(iVar2 + 0x54) + (*(uint *)(*(int *)(iVar2 + 0x44) + 0x4c) & 0xff) * -2;
      }
      FUN_01259f60(iVar25,param_2,param_3);
switchD_012669c5_caseD_0:
      iVar26 = param_2[1];
      if (iVar5 < iVar26) {
        iVar2 = *param_2;
        param_2[1] = iVar26 + -1;
        pfVar22 = (float *)(iVar2 + -0x30 + iVar26 * 0x30);
        pfVar3 = (float *)(iVar2 + -0x20 + iVar26 * 0x30);
        fVar24 = *(float *)(iVar2 + iVar26 * 0x30 + -0x10);
        iVar26 = (int)fVar24 * 5 + *param_1;
        fVar31 = *pfVar3;
        fVar32 = pfVar3[1];
        fVar33 = pfVar3[2];
        fVar34 = pfVar3[3];
        fVar36 = *pfVar22;
        fVar41 = pfVar22[1];
        fVar42 = pfVar22[2];
        fVar43 = pfVar22[3];
        goto LAB_01266871;
      }
    }
  }
  return;
}

// 01266BA0  FUN_01266ba0  size=236  [run]
void FUN_01266ba0(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = *param_4;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar7 = *(int *)(iVar2 + 0x3c);
  iVar3 = (param_2 - iVar7) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x60) = iVar3;
    iVar7 = iVar3 * 0x60 + iVar7;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  FUN_01262880(param_2,param_3,param_4);
  return;
}

// 01266C90  FUN_01266c90  size=420  [run]
void FUN_01266c90(undefined4 *param_1,undefined4 param_2,float *param_3,float *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined4 local_90 [4];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [16];
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int local_24 [4];
  int local_14;
  
  local_90[0] = param_5;
  local_50 = (param_3[4] - *param_3) * 0.5;
  fStack_4c = (param_3[5] - param_3[1]) * 0.5;
  fStack_48 = (param_3[6] - param_3[2]) * 0.5;
  fStack_44 = (param_3[7] - param_3[3]) * 0.5;
  local_80 = (*param_3 + param_3[4]) * 0.5;
  fStack_7c = (param_3[1] + param_3[5]) * 0.5;
  fStack_78 = (param_3[2] + param_3[6]) * 0.5;
  fStack_74 = (param_3[3] + param_3[7]) * 0.5;
  fVar5 = *param_4 - local_80;
  fVar6 = param_4[1] - fStack_7c;
  fVar7 = param_4[2] - fStack_78;
  fVar8 = param_4[3] - fStack_74;
  local_70._4_4_ = fVar6;
  local_70._0_4_ = fVar5;
  local_70._8_4_ = fVar7;
  local_70._12_4_ = param_6;
  auVar9._4_4_ = fVar6;
  auVar9._0_4_ = fVar5;
  auVar9._8_4_ = fVar7;
  auVar9._12_4_ = fVar8;
  auVar9 = rcpps(local_70,auVar9);
  local_60 = -(uint)(fVar5 == 0.0) & 0x7f7fffee |
             ~-(uint)(fVar5 == 0.0) & (uint)((2.0 - auVar9._0_4_ * fVar5) * auVar9._0_4_);
  uStack_5c = -(uint)(fVar6 == 0.0) & 0x7f7fffee |
              ~-(uint)(fVar6 == 0.0) & (uint)((2.0 - auVar9._4_4_ * fVar6) * auVar9._4_4_);
  uStack_58 = -(uint)(fVar7 == 0.0) & 0x7f7fffee |
              ~-(uint)(fVar7 == 0.0) & (uint)((2.0 - auVar9._8_4_ * fVar7) * auVar9._8_4_);
  uStack_54 = -(uint)(fVar8 == 0.0) & 0x7f7fffee |
              ~-(uint)(fVar8 == 0.0) & (uint)((2.0 - auVar9._12_4_ * fVar8) * auVar9._12_4_);
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0x80000000;
  local_14 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_24[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_24[3] + 0xc00U))
  {
    local_24[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_24[3] + 0xc00U;
  }
  local_24[2] = 0x80000040;
  local_24[0] = local_24[3];
  FUN_01265c90(param_2,local_24,local_90);
  iVar2 = local_14;
  iVar1 = local_24[3];
  if (local_24[3] == local_24[0]) {
    local_24[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_24[1] = 0;
  if (-1 < local_24[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[0],(local_24[2] & 0x3fffffffU) * 0x30);
  }
  *param_1 = local_70._12_4_;
  param_1[1] = local_70._12_4_;
  param_1[2] = local_70._12_4_;
  param_1[3] = local_70._12_4_;
  return;
}

// 01266F70  FUN_01266f70  size=246  [run]
void FUN_01266f70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18 [4];
  int local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0x80000000;
  local_8 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0xc00U))
  {
    local_18[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0xc00U;
  }
  local_18[2] = 0x80000040;
  local_18[0] = local_18[3];
  FUN_01266800(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],(local_18[2] & 0x3fffffffU) * 0x30);
  }
  return;
}

// 01267070  FUN_01267070  size=268  [run]
void FUN_01267070(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *param_3;
  iVar2 = *(int *)(iVar1 + 0x40);
  iVar8 = (uint)CONCAT11(*(undefined1 *)(*(int *)(param_4 + 0x30) + 3),
                         *(undefined1 *)(*(int *)(param_4 + 0x30) + 4)) * 0x60 +
          *(int *)(param_1 + 0x3c);
  iVar3 = (iVar8 - *(int *)(iVar2 + 0x3c)) / 0x60;
  if ((iVar3 != *(int *)(iVar1 + 0x60)) || (*(int *)(iVar1 + 100) != iVar3)) {
    iVar7 = iVar3 * 0x60 + *(int *)(iVar2 + 0x3c);
    *(int *)(iVar1 + 100) = iVar3;
    *(int *)(iVar1 + 0x44) = iVar7;
    *(int *)(iVar1 + 0x60) = iVar3;
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar2 + 0x60) + *(int *)(iVar7 + 0x48) * 4;
    *(uint *)(iVar1 + 0x50) = (uint)*(byte *)(iVar7 + 0x5c) * 0x80000 + *(int *)(iVar2 + 0x6c);
    *(uint *)(iVar1 + 0x54) = *(int *)(iVar2 + 0x54) + (*(uint *)(iVar7 + 0x4c) >> 8) * 2;
    *(uint *)(iVar1 + 0x58) = *(int *)(iVar2 + 0x78) + (*(uint *)(iVar7 + 0x54) >> 8) * 8;
    *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar7 + 0x4c) & 0xff;
    *(uint *)(iVar1 + 0x48) = *(int *)(iVar2 + 0x48) + (*(uint *)(iVar7 + 0x50) >> 8) * 4;
    uVar4 = *(undefined4 *)(iVar7 + 0x34);
    uVar5 = *(undefined4 *)(iVar7 + 0x38);
    uVar6 = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    *(undefined4 *)(iVar1 + 0x2c) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x40);
    uVar5 = *(undefined4 *)(iVar7 + 0x44);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar7 + 0x3c);
    *(undefined4 *)(iVar1 + 0x34) = uVar4;
    *(undefined4 *)(iVar1 + 0x38) = uVar5;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(int *)(iVar1 + 0x54) =
         *(int *)(iVar1 + 0x54) + (*(uint *)(*(int *)(iVar1 + 0x44) + 0x4c) & 0xff) * -2;
  }
  FUN_01262880(iVar8,param_2,param_3);
  return;
}

// 012672B0  FUN_012672b0  size=956  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012672b0(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint5 uVar22;
  unkbyte9 Var23;
  undefined1 auVar24 [13];
  undefined1 auVar25 [13];
  uint uVar26;
  int iVar27;
  float fVar28;
  uint uVar29;
  int iVar30;
  float fVar31;
  undefined4 uVar35;
  undefined4 uVar37;
  undefined1 auVar32 [16];
  float fVar36;
  float fVar38;
  float fVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar40;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 uVar55;
  byte bVar56;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar57;
  float fVar61;
  float fVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  float fVar66;
  float fVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar68;
  float fVar69;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  
  if (param_1[1] != 0) {
    iVar2 = param_2[1];
    fVar69 = (float)param_1[4];
    fVar74 = (float)param_1[5];
    fVar75 = (float)param_1[6];
    fVar76 = (float)param_1[7];
    fVar40 = (float)param_1[8];
    fVar44 = (float)param_1[9];
    fVar45 = (float)param_1[10];
    fVar46 = (float)param_1[0xb];
    iVar27 = *param_1;
    auVar65._0_8_ =
         CONCAT44((float)param_3[0xd] * (fVar74 - (float)param_3[5]),
                  (float)param_3[0xc] * (fVar69 - (float)param_3[4]));
    auVar65._8_4_ = (float)param_3[0xe] * (fVar75 - (float)param_3[6]);
    auVar65._12_4_ = (float)param_3[0xf] * (fVar76 - (float)param_3[7]);
    auVar60._4_4_ = (float)param_3[0xd] * (fVar44 - (float)param_3[5]);
    auVar60._0_4_ = (float)param_3[0xc] * (fVar40 - (float)param_3[4]);
    auVar60._8_4_ = (float)param_3[0xe] * (fVar45 - (float)param_3[6]);
    auVar60._12_4_ = (float)param_3[0xf] * (fVar46 - (float)param_3[7]);
    auVar32._8_4_ = auVar65._8_4_;
    auVar32._0_8_ = auVar65._0_8_;
    auVar32._12_4_ = auVar65._12_4_;
    auVar47 = maxps(auVar65,auVar60);
    auVar32 = minps(auVar32,auVar60);
    iVar3 = param_3[0xb];
    uVar35 = auVar47._4_4_;
    uVar37 = auVar47._8_4_;
    auVar58._4_4_ = uVar37;
    auVar58._0_4_ = uVar37;
    auVar58._8_4_ = uVar37;
    auVar58._12_4_ = uVar37;
    auVar64._4_4_ = uVar35;
    auVar64._0_4_ = uVar35;
    auVar64._8_4_ = uVar35;
    auVar64._12_4_ = uVar35;
    auVar65 = minps(auVar64,auVar58);
    auVar78._4_4_ = iVar3;
    auVar78._0_4_ = iVar3;
    auVar78._8_4_ = iVar3;
    auVar78._12_4_ = iVar3;
    auVar47 = minps(auVar47,auVar78);
    uVar35 = auVar32._4_4_;
    uVar37 = auVar32._8_4_;
    auVar50._4_4_ = uVar37;
    auVar50._0_4_ = uVar37;
    auVar50._8_4_ = uVar37;
    auVar50._12_4_ = uVar37;
    auVar59._4_4_ = uVar35;
    auVar59._0_4_ = uVar35;
    auVar59._8_4_ = uVar35;
    auVar59._12_4_ = uVar35;
    auVar32 = maxps(auVar32,_DAT_01701b10);
    auVar60 = maxps(auVar59,auVar50);
    auVar65 = minps(auVar47,auVar65);
    auVar32 = maxps(auVar32,auVar60);
    auVar47._4_4_ = -(uint)(auVar32._4_4_ <= auVar65._4_4_);
    auVar47._0_4_ = -(uint)(auVar32._0_4_ <= auVar65._0_4_);
    auVar47._8_4_ = -(uint)(auVar32._8_4_ <= auVar65._8_4_);
    auVar47._12_4_ = -(uint)(auVar32._12_4_ <= auVar65._12_4_);
    fVar28 = 0.0;
    uVar26 = movmskps(param_1,auVar47);
    if ((uVar26 & 1) != 0) {
      do {
        bVar56 = *(byte *)(iVar27 + 3);
        if ((char)bVar56 < '\0') {
          iVar27 = (int)fVar28 + ((bVar56 & 0x7f) << 8 | (uint)*(byte *)(iVar27 + 4)) * 2;
          uVar26 = *(uint *)(*param_1 + ((int)fVar28 + 1) * 5);
          auVar6[0xc] = (char)(uVar26 >> 0x18);
          auVar6._0_12_ = ZEXT712(0);
          uVar22 = CONCAT32(auVar6._10_3_,(ushort)(byte)(uVar26 >> 0x10));
          auVar25._5_8_ = 0;
          auVar25._0_5_ = uVar22;
          Var23 = CONCAT72(SUB137(auVar25 << 0x40,6),(ushort)(byte)(uVar26 >> 8));
          auVar48._0_4_ = uVar26 & 0xff;
          auVar48._4_9_ = Var23;
          auVar48._13_3_ = 0;
          fVar31 = (fVar40 - fVar69) * 0.0044247787;
          fVar36 = (fVar44 - fVar74) * 0.0044247787;
          fVar38 = (fVar45 - fVar75) * 0.0044247787;
          fVar39 = (fVar46 - fVar76) * 0.0044247787;
          uVar35 = *(undefined4 *)(*param_1 + iVar27 * 5);
          bVar56 = (byte)((uint)uVar35 >> 0x18);
          uVar55 = (undefined1)((uint)uVar35 >> 8);
          uVar10 = (ulonglong)CONCAT12(uVar55,(short)uVar35) & 0xffffffffffff00ff;
          auVar7._8_4_ = 0;
          auVar7._0_8_ = uVar10;
          auVar7[0xc] = bVar56;
          auVar8[8] = (char)((uint)uVar35 >> 0x10);
          auVar8._0_8_ = uVar10;
          auVar8[9] = 0;
          auVar8._10_3_ = auVar7._10_3_;
          auVar24._5_8_ = 0;
          auVar24._0_5_ = auVar8._8_5_;
          auVar9[4] = uVar55;
          auVar9._0_4_ = (uint)uVar10;
          auVar9[5] = 0;
          auVar9._6_7_ = SUB137(auVar24 << 0x40,6);
          auVar51._0_4_ = (uint)uVar10 & 0xffff;
          auVar51._4_9_ = auVar9._4_9_;
          auVar51._13_3_ = 0;
          auVar48 = auVar48 & _DAT_01b34560;
          auVar47 = auVar51 & _DAT_01b34560;
          fVar11 = (float)param_3[0xc];
          fVar12 = (float)param_3[0xd];
          fVar13 = (float)param_3[0xe];
          fVar14 = (float)param_3[0xf];
          fVar57 = (float)(uVar26 >> 4 & 0xf);
          fVar61 = (float)((uint)Var23 >> 4);
          fVar62 = (float)((uint)uVar22 >> 4);
          fVar63 = (float)(uint3)(auVar6._10_3_ >> 0x14);
          fVar66 = (float)(auVar9._4_4_ >> 4);
          fVar67 = (float)(auVar8._8_4_ >> 4);
          fVar68 = (float)(bVar56 >> 4);
          iVar3 = param_3[0xb];
          fVar15 = (float)param_3[4];
          fVar16 = (float)param_3[5];
          fVar17 = (float)param_3[6];
          fVar18 = (float)param_3[7];
          auVar41._0_4_ =
               ((fVar40 - (float)auVar48._0_4_ * (float)auVar48._0_4_ * fVar31) - fVar15) * fVar11;
          auVar41._4_4_ =
               ((fVar44 - (float)auVar48._4_4_ * (float)auVar48._4_4_ * fVar36) - fVar16) * fVar12;
          auVar41._8_4_ =
               ((fVar45 - (float)auVar48._8_4_ * (float)auVar48._8_4_ * fVar38) - fVar17) * fVar13;
          auVar41._12_4_ =
               ((fVar46 - (float)auVar48._12_4_ * (float)auVar48._12_4_ * fVar39) - fVar18) * fVar14
          ;
          auVar33._0_8_ =
               CONCAT44(((fVar61 * fVar61 * fVar36 + fVar74) - fVar16) * fVar12,
                        ((fVar57 * fVar57 * fVar31 + fVar69) - fVar15) * fVar11);
          auVar33._8_4_ = ((fVar62 * fVar62 * fVar38 + fVar75) - fVar17) * fVar13;
          auVar33._12_4_ = ((fVar63 * fVar63 * fVar39 + fVar76) - fVar18) * fVar14;
          auVar49._8_4_ = auVar33._8_4_;
          auVar49._0_8_ = auVar33._0_8_;
          auVar49._12_4_ = auVar33._12_4_;
          auVar32 = minps(auVar33,auVar41);
          auVar65 = maxps(auVar49,auVar41);
          uVar35 = auVar32._4_4_;
          uVar37 = auVar32._8_4_;
          auVar42._4_4_ = uVar37;
          auVar42._0_4_ = uVar37;
          auVar42._8_4_ = uVar37;
          auVar42._12_4_ = uVar37;
          auVar70._4_4_ = uVar35;
          auVar70._0_4_ = uVar35;
          auVar70._8_4_ = uVar35;
          auVar70._12_4_ = uVar35;
          auVar32 = maxps(auVar32,_DAT_01701b10);
          auVar60 = maxps(auVar70,auVar42);
          auVar32 = maxps(auVar32,auVar60);
          auVar43._0_8_ =
               CONCAT44(((fVar66 * fVar66 * fVar36 + fVar74) - fVar16) * fVar12,
                        (((float)(auVar51._0_4_ >> 4) * (float)(auVar51._0_4_ >> 4) * fVar31 +
                         fVar69) - fVar15) * fVar11);
          auVar43._8_4_ = ((fVar67 * fVar67 * fVar38 + fVar75) - fVar17) * fVar13;
          auVar43._12_4_ = ((fVar68 * fVar68 * fVar39 + fVar76) - fVar18) * fVar14;
          auVar71._0_4_ =
               ((fVar40 - (float)auVar47._0_4_ * (float)auVar47._0_4_ * fVar31) - fVar15) * fVar11;
          auVar71._4_4_ =
               ((fVar44 - (float)auVar47._4_4_ * (float)auVar47._4_4_ * fVar36) - fVar16) * fVar12;
          auVar71._8_4_ =
               ((fVar45 - (float)auVar47._8_4_ * (float)auVar47._8_4_ * fVar38) - fVar17) * fVar13;
          auVar71._12_4_ =
               ((fVar46 - (float)auVar47._12_4_ * (float)auVar47._12_4_ * fVar39) - fVar18) * fVar14
          ;
          auVar52._8_4_ = auVar43._8_4_;
          auVar52._0_8_ = auVar43._0_8_;
          auVar52._12_4_ = auVar43._12_4_;
          auVar60 = maxps(auVar52,auVar71);
          auVar47 = minps(auVar43,auVar71);
          uVar35 = auVar47._4_4_;
          uVar37 = auVar47._8_4_;
          auVar72._4_4_ = uVar37;
          auVar72._0_4_ = uVar37;
          auVar72._8_4_ = uVar37;
          auVar72._12_4_ = uVar37;
          auVar77._4_4_ = uVar35;
          auVar77._0_4_ = uVar35;
          auVar77._8_4_ = uVar35;
          auVar77._12_4_ = uVar35;
          auVar47 = maxps(auVar47,_DAT_01701b10);
          auVar78 = maxps(auVar77,auVar72);
          auVar47 = maxps(auVar47,auVar78);
          uVar35 = auVar60._4_4_;
          uVar37 = auVar60._8_4_;
          auVar79._4_4_ = uVar35;
          auVar79._0_4_ = uVar35;
          auVar79._8_4_ = uVar35;
          auVar79._12_4_ = uVar35;
          auVar73._4_4_ = uVar37;
          auVar73._0_4_ = uVar37;
          auVar73._8_4_ = uVar37;
          auVar73._12_4_ = uVar37;
          auVar20._4_4_ = iVar3;
          auVar20._0_4_ = iVar3;
          auVar20._8_4_ = iVar3;
          auVar20._12_4_ = iVar3;
          auVar60 = minps(auVar60,auVar20);
          auVar78 = minps(auVar79,auVar73);
          auVar60 = minps(auVar60,auVar78);
          auVar80._4_4_ = -(uint)(auVar47._4_4_ <= auVar60._4_4_);
          auVar80._0_4_ = -(uint)(auVar47._0_4_ <= auVar60._0_4_);
          auVar80._8_4_ = -(uint)(auVar47._8_4_ <= auVar60._8_4_);
          auVar80._12_4_ = -(uint)(auVar47._12_4_ <= auVar60._12_4_);
          uVar26 = movmskps((int)fVar28 + 1,auVar80);
          uVar35 = auVar65._4_4_;
          uVar37 = auVar65._8_4_;
          auVar53._4_4_ = uVar37;
          auVar53._0_4_ = uVar37;
          auVar53._8_4_ = uVar37;
          auVar53._12_4_ = uVar37;
          auVar81._4_4_ = uVar35;
          auVar81._0_4_ = uVar35;
          auVar81._8_4_ = uVar35;
          auVar81._12_4_ = uVar35;
          auVar21._4_4_ = iVar3;
          auVar21._0_4_ = iVar3;
          auVar21._8_4_ = iVar3;
          auVar21._12_4_ = iVar3;
          auVar65 = minps(auVar65,auVar21);
          auVar60 = minps(auVar81,auVar53);
          auVar65 = minps(auVar65,auVar60);
          auVar54._4_4_ = -(uint)(auVar32._4_4_ <= auVar65._4_4_);
          auVar54._0_4_ = -(uint)(auVar32._0_4_ <= auVar65._0_4_);
          auVar54._8_4_ = -(uint)(auVar32._8_4_ <= auVar65._8_4_);
          auVar54._12_4_ = -(uint)(auVar32._12_4_ <= auVar65._12_4_);
          uVar29 = movmskps(iVar27,auVar54);
          uVar26 = (uVar26 & 1) * 2 | uVar29 & 1;
          if (uVar26 == 3) {
            param_3[0x10] = (uint)(auVar47._0_4_ < auVar32._0_4_);
LAB_01267532:
                    /* WARNING: Could not recover jumptable at 0x01267532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(&DAT_0126770c + uVar26 * 4))();
            return;
          }
          if (uVar26 < 4) goto LAB_01267532;
        }
        else {
          iVar3 = *param_3;
          iVar30 = (uint)CONCAT11(bVar56,*(byte *)(iVar27 + 4)) * 0x60 + param_1[0xf];
          iVar27 = *(int *)(*(int *)(iVar3 + 0x40) + 0x3c);
          iVar5 = (iVar30 - iVar27) / 0x60;
          if ((iVar5 != *(int *)(iVar3 + 0x60)) || (*(int *)(iVar3 + 100) != iVar5)) {
            *(int *)(iVar3 + 100) = iVar5;
            *(int *)(iVar3 + 0x60) = iVar5;
            iVar4 = *(int *)(iVar3 + 0x40);
            iVar27 = iVar5 * 0x60 + iVar27;
            *(int *)(iVar3 + 0x44) = iVar27;
            *(int *)(iVar3 + 0x4c) = *(int *)(iVar4 + 0x60) + *(int *)(iVar27 + 0x48) * 4;
            *(uint *)(iVar3 + 0x50) =
                 (uint)*(byte *)(*(int *)(iVar3 + 0x44) + 0x5c) * 0x80000 + *(int *)(iVar4 + 0x6c);
            *(uint *)(iVar3 + 0x54) =
                 *(int *)(iVar4 + 0x54) + (*(uint *)(*(int *)(iVar3 + 0x44) + 0x4c) >> 8) * 2;
            *(uint *)(iVar3 + 0x58) =
                 *(int *)(iVar4 + 0x78) + (*(uint *)(*(int *)(iVar3 + 0x44) + 0x54) >> 8) * 8;
            iVar27 = *(int *)(iVar3 + 0x44);
            *(uint *)(iVar3 + 0x5c) = *(uint *)(iVar27 + 0x4c) & 0xff;
            *(uint *)(iVar3 + 0x48) = *(int *)(iVar4 + 0x48) + (*(uint *)(iVar27 + 0x50) >> 8) * 4;
            uVar35 = *(undefined4 *)(iVar27 + 0x34);
            uVar37 = *(undefined4 *)(iVar27 + 0x38);
            uVar19 = *(undefined4 *)(iVar27 + 0x3c);
            *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar27 + 0x30);
            *(undefined4 *)(iVar3 + 0x24) = uVar35;
            *(undefined4 *)(iVar3 + 0x28) = uVar37;
            *(undefined4 *)(iVar3 + 0x2c) = uVar19;
            uVar35 = *(undefined4 *)(iVar27 + 0x40);
            uVar37 = *(undefined4 *)(iVar27 + 0x44);
            *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar27 + 0x3c);
            *(undefined4 *)(iVar3 + 0x34) = uVar35;
            *(undefined4 *)(iVar3 + 0x38) = uVar37;
            *(undefined4 *)(iVar3 + 0x3c) = 0;
            auVar34._12_4_ = 0;
            auVar34._0_12_ = *(undefined1 (*) [12])(iVar3 + 0x30);
            *(undefined1 (*) [16])(iVar3 + 0x30) = auVar34;
            *(int *)(iVar3 + 0x54) =
                 *(int *)(iVar3 + 0x54) + (*(uint *)(*(int *)(iVar3 + 0x44) + 0x4c) & 0xff) * -2;
          }
          FUN_01262880(iVar30,param_2,param_3);
        }
        iVar27 = param_2[1];
        if (iVar27 <= iVar2) {
          return;
        }
        pfVar1 = (float *)(*param_2 + -0x30 + iVar27 * 0x30);
        param_2[1] = iVar27 + -1;
        fVar28 = pfVar1[8];
        fVar69 = *pfVar1;
        fVar74 = pfVar1[1];
        fVar75 = pfVar1[2];
        fVar76 = pfVar1[3];
        fVar40 = pfVar1[4];
        fVar44 = pfVar1[5];
        fVar45 = pfVar1[6];
        fVar46 = pfVar1[7];
        iVar27 = (int)fVar28 * 5 + *param_1;
      } while( true );
    }
  }
                    /* WARNING: Read-only address (ram,0x01701b10) is written */
  return;
}

// 01267720  FUN_01267720  size=246  [run]
void FUN_01267720(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18 [4];
  int local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0x80000000;
  local_8 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0xc00U))
  {
    local_18[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0xc00U;
  }
  local_18[2] = 0x80000040;
  local_18[0] = local_18[3];
  FUN_012672b0(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],(local_18[2] & 0x3fffffffU) * 0x30);
  }
  return;
}

// 01267820  FUN_01267820  size=322  [run]
void FUN_01267820(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  int local_24 [4];
  int local_14;
  
  local_80[0] = param_4;
  local_70 = *param_3;
  uStack_6c = param_3[1];
  uStack_68 = param_3[2];
  uStack_64 = param_3[3];
  local_60 = param_3[4];
  uStack_5c = param_3[5];
  uStack_58 = param_3[6];
  uStack_54 = param_3[7];
  local_50 = param_3[8];
  uStack_4c = param_3[9];
  uStack_48 = param_3[10];
  uStack_44 = param_3[0xb];
  local_40 = 0xffffffff;
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0x80000000;
  local_14 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_24[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0xc00) || (*(uint *)((int)pvVar3 + 0x10) < local_24[3] + 0xc00U))
  {
    local_24[3] = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_24[3] + 0xc00U;
  }
  local_24[2] = 0x80000040;
  local_24[0] = local_24[3];
  FUN_012672b0(param_2,local_24,local_80);
  iVar2 = local_14;
  iVar1 = local_24[3];
  if (local_24[3] == local_24[0]) {
    local_24[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_24[1] = 0;
  if (-1 < local_24[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[0],(local_24[2] & 0x3fffffffU) * 0x30);
  }
  *param_1 = uStack_54;
  param_1[1] = uStack_54;
  param_1[2] = uStack_54;
  param_1[3] = uStack_54;
  return;
}

// 01267A90  FUN_01267a90  size=10  [run]
void FUN_01267a90(void)

{
  return;
}

// 01267AA0  FUN_01267aa0  size=25  [run]
void FUN_01267aa0(void)

{
  return;
}

// 01268260  FUN_01268260  size=753  [run]
void FUN_01268260(float *param_1,float *param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *extraout_ECX;
  float *extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_14;
  
  FUN_01007460(param_2,param_4 + 0x170);
  local_40 = param_3 * ((*param_1 + local_30) - *(float *)(param_4 + 0x140));
  fStack_3c = param_3 * ((param_1[1] + fStack_2c) - *(float *)(param_4 + 0x144));
  fStack_38 = param_3 * ((param_1[2] + fStack_28) - *(float *)(param_4 + 0x148));
  fStack_34 = param_3 * ((param_1[3] + fStack_24) - *(float *)(param_4 + 0x14c));
  local_14 = fStack_3c * fStack_3c + local_40 * local_40 + fStack_38 * fStack_38;
  auVar14._4_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1b4) - fStack_3c) <= 1e-05);
  auVar14._0_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1b0) - local_40) <= 1e-05);
  auVar14._8_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1b8) - fStack_38) <= 1e-05);
  auVar14._12_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1bc) - fStack_34) <= 1e-05);
  uVar4 = movmskps(extraout_EDX,auVar14);
  if (((byte)uVar4 & 7) != 7) {
    FUN_0118fe70();
    (**(code **)(*(int *)(param_4 + 0xe0) + 0x40))(&local_40);
    param_1 = extraout_ECX;
  }
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = *(float *)(param_4 + 0x160);
  fVar1 = *(float *)(param_4 + 0x164);
  fVar2 = *(float *)(param_4 + 0x168);
  fVar3 = *(float *)(param_4 + 0x16c);
  auVar13._0_4_ = fVar2 * fVar7 + fVar9 * fVar5;
  auVar13._4_4_ = fVar3 * fVar8 + fVar1 * fVar6;
  auVar13._8_4_ = fVar9 * fVar5 + fVar2 * fVar7;
  auVar13._12_4_ = fVar1 * fVar6 + fVar3 * fVar8;
  local_30 = ((fVar1 * fVar7 - fVar2 * fVar6) - fVar8 * fVar9) + fVar3 * fVar5;
  fStack_2c = ((fVar2 * fVar5 - fVar9 * fVar7) - fVar8 * fVar1) + fVar3 * fVar6;
  fStack_28 = ((fVar9 * fVar6 - fVar1 * fVar5) - fVar8 * fVar2) + fVar3 * fVar7;
  fVar8 = auVar13._8_4_ + auVar13._12_4_;
  fVar5 = fStack_28 * fStack_28 + local_30 * local_30;
  fVar6 = fVar8 * fVar8 + fStack_2c * fStack_2c;
  fVar7 = local_30 * local_30 + fStack_28 * fStack_28;
  fVar9 = fStack_2c * fStack_2c + fVar8 * fVar8;
  auVar10._0_4_ = fVar6 + fVar5;
  auVar10._4_4_ = fVar5 + fVar6;
  auVar10._8_4_ = fVar9 + fVar7;
  auVar10._12_4_ = fVar7 + fVar9;
  auVar14 = rsqrtps(auVar13,auVar10);
  fVar5 = auVar14._0_4_;
  fVar6 = auVar14._4_4_;
  fVar7 = auVar14._8_4_;
  fVar9 = auVar14._12_4_;
  local_30 = fVar5 * 0.5 * (3.0 - fVar5 * auVar10._0_4_ * fVar5) * local_30;
  fStack_2c = fVar6 * 0.5 * (3.0 - fVar6 * auVar10._4_4_ * fVar6) * fStack_2c;
  fStack_28 = fVar7 * 0.5 * (3.0 - fVar7 * auVar10._8_4_ * fVar7) * fStack_28;
  fVar8 = fVar9 * 0.5 * (3.0 - fVar9 * auVar10._12_4_ * fVar9) * fVar8;
  fVar5 = local_30 * local_30;
  fVar6 = fStack_2c * fStack_2c;
  fVar7 = fStack_28 * fStack_28;
  if (1.4210855e-14 < fVar6 + fVar5 + fVar7) {
    fVar9 = ABS(fVar8);
    local_40 = ABS(fVar8);
    fStack_3c = 0.0;
    fStack_38 = 0.0;
    fStack_34 = 0.0;
    fStack_24 = fVar8;
    if (local_40 < 1.0) {
      FUN_014376e0();
      param_1 = extraout_ECX_00;
    }
    else if (ABS(fVar8) <= 0.0) {
      fVar9 = 3.1415927;
    }
    else {
      fVar9 = 0.0;
    }
    param_3 = fVar9 * 2.0 * param_3;
    auVar15._0_4_ = fVar6 + fVar5 + fVar7;
    auVar15._4_4_ = fVar6 + fVar5 + fVar7;
    auVar15._8_4_ = fVar6 + fVar5 + fVar7;
    auVar15._12_4_ = fVar6 + fVar5 + fVar7;
    auVar11._0_12_ = ZEXT812(0);
    auVar11._12_4_ = 0;
    auVar14 = rsqrtps(auVar11,auVar15);
    fVar5 = auVar14._0_4_;
    fVar6 = auVar14._4_4_;
    fVar7 = auVar14._8_4_;
    fVar9 = auVar14._12_4_;
    local_30 = (float)((uint)((float)(~-(uint)(auVar15._0_4_ <= 0.0) &
                                     (uint)((3.0 - fVar5 * auVar15._0_4_ * fVar5) * fVar5 * 0.5)) *
                             local_30) ^ -(uint)(fVar8 < 0.0) & 0x80000000) * param_3;
    fStack_2c = (float)((uint)((float)(~-(uint)(auVar15._4_4_ <= 0.0) &
                                      (uint)((3.0 - fVar6 * auVar15._4_4_ * fVar6) * fVar6 * 0.5)) *
                              fStack_2c) ^ -(uint)(fVar8 < 0.0) & 0x80000000) * param_3;
    fStack_28 = (float)((uint)((float)(~-(uint)(auVar15._8_4_ <= 0.0) &
                                      (uint)((3.0 - fVar7 * auVar15._8_4_ * fVar7) * fVar7 * 0.5)) *
                              fStack_28) ^ -(uint)(fVar8 < 0.0) & 0x80000000) * param_3;
    fStack_24 = (float)((uint)((float)(~-(uint)(auVar15._12_4_ <= 0.0) &
                                      (uint)((3.0 - fVar9 * auVar15._12_4_ * fVar9) * fVar9 * 0.5))
                              * fStack_24) ^ -(uint)(fVar8 < 0.0) & 0x80000000) * param_3;
  }
  else {
    local_30 = 0.0;
    fStack_2c = 0.0;
    fStack_28 = 0.0;
    fStack_24 = 0.0;
  }
  local_14 = fStack_2c * fStack_2c + local_30 * local_30 + fStack_28 * fStack_28;
  auVar12._4_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1c4) - fStack_2c) <= 1e-05);
  auVar12._0_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1c0) - local_30) <= 1e-05);
  auVar12._8_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1c8) - fStack_28) <= 1e-05);
  auVar12._12_4_ = -(uint)(ABS(*(float *)(param_4 + 0x1cc) - fStack_24) <= 1e-05);
  uVar4 = movmskps(param_1,auVar12);
  if (((byte)uVar4 & 7) != 7) {
    FUN_0118fe70();
    (**(code **)(*(int *)(param_4 + 0xe0) + 0x44))(&local_30);
  }
  return;
}

// 01268970  hkpWindAction::~hkpWindAction  size=61  [run]
undefined4 * __thiscall
hkpWindAction::~hkpWindAction
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  hkpAction::hkpAction(param_2,0);
  param_1[8] = param_4;
  *param_1 = vftable;
  param_1[7] = param_3;
  param_1[9] = param_5;
  FUN_01006000();
  return param_1;
}

// 012689B0  hkpWindAction::~hkpWindAction  size=25  [run]
void __fastcall hkpWindAction::~hkpWindAction(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_010060a0();
  hkBaseObject::hkBaseObject_29();
  return;
}

// 012689D0  hkpWindAction::vf1C  size=119  [run]
int __thiscall hkpWindAction::vf1C(int param_1,undefined4 *param_2,int param_3)

{
  LPVOID pvVar1;
  int iVar2;
  
  if ((param_2[1] == 1) && (*(int *)(param_3 + 4) == 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x28);
    *(undefined2 *)(iVar2 + 4) = 0x28;
    iVar2 = ~hkpWindAction(*(undefined4 *)*param_2,*(undefined4 *)(param_1 + 0x1c),
                           *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    return iVar2;
  }
  return 0;
}

// 01268A50  hkpWindAction::vf0C  size=57  [run]
void __thiscall hkpWindAction::vf0C(int param_1,int param_2)

{
  FUN_01278250(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 8),
               *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return;
}

// 01268A90  hkpWindAction::vf08  size=6  [run]
undefined * hkpWindAction::vf08(void)

{
  return &DAT_0209eff8;
}

// 01268AA0  FUN_01268aa0  size=38  [run]
void FUN_01268aa0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01268AD0  hkpWindAction::vf00  size=52  [run]
int __thiscall hkpWindAction::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkpWindAction();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01268BA0  hkpPrevailingWind::Oscillator::Oscillator_9  size=35  [run]
void __thiscall
hkpPrevailingWind::Oscillator::Oscillator_9
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  *param_1 = vftable;
  param_1[2] = param_3;
  return;
}

// 01268BD0  FUN_01268bd0  size=137  [run]
void __thiscall FUN_01268bd0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2 / *(float *)(param_1 + 4) + *(float *)(param_1 + 8);
  *(float *)(param_1 + 8) = fVar1;
  fVar2 = ((fVar1 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
  *(float *)(param_1 + 8) =
       fVar1 - (float)(~-(uint)(8388608.0 < ABS(fVar1)) &
                       (uint)((float)(int)-(uint)(fVar1 < fVar2) + fVar2) |
                      -(uint)(8388608.0 < ABS(fVar1)) & (uint)fVar1);
  return;
}

// 01268C60  hkpPrevailingWind::vf0C  size=17  [run]
void __thiscall hkpPrevailingWind::vf0C(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *param_3 = *(undefined4 *)(param_1 + 0x30);
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  return;
}

// 01268C80  hkpPrevailingWind::vf04  size=140  [run]
void __thiscall hkpPrevailingWind::vf04(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  int local_8;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1e8);
  local_8 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x14);
  if (0 < local_8) {
    param_2 = 0;
    do {
      FUN_01268bd0(uVar1);
      pfVar5 = (float *)(param_2 + *(int *)(param_1 + 0x18));
      fVar6 = pfVar5[6] * 6.2831855;
      FUN_0143743a();
      FUN_01438ed5();
      param_2 = param_2 + 0x20;
      local_8 = local_8 + -1;
      fVar2 = pfVar5[1];
      fVar3 = pfVar5[2];
      fVar4 = pfVar5[3];
      *(float *)(param_1 + 0x28) = fVar6 * *pfVar5 + *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x2c) = fVar6 * fVar2 + *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x30) = fVar6 * fVar3 + *(float *)(param_1 + 0x30);
      *(float *)(param_1 + 0x34) = fVar6 * fVar4 + *(float *)(param_1 + 0x34);
    } while (local_8 != 0);
  }
  return;
}

// 01268DD0  hkpWorldPostSimulationListener::hkpWorldPostSimulationListener_2  size=70  [run]
void __thiscall
hkpWorldPostSimulationListener::hkpWorldPostSimulationListener_2
          (undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = vftable;
  *param_1 = hkpPrevailingWind::vftable;
  param_1[2] = hkpPrevailingWind::vftable;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80000000;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[0xc] = *param_2;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}

// 01268E40  hkpPrevailingWind::Oscillator::Oscillator_12  size=30  [run]
void __thiscall hkpPrevailingWind::Oscillator::Oscillator_12(undefined4 *param_1,int param_2)

{
  *param_1 = vftable;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  return;
}

// 01268ED0  FUN_01268ed0  size=15  [run]
int __thiscall FUN_01268ed0(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 01268F00  hkpPrevailingWind::Oscillator::Oscillator_10  size=43  [run]
void __thiscall
hkpPrevailingWind::Oscillator::Oscillator_10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = vftable;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  return;
}

// 01268F30  FUN_01268f30  size=25  [run]
void __thiscall FUN_01268f30(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 01268F50  FUN_01268f50  size=11  [run]
int FUN_01268f50(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01268F60  hkpPrevailingWind::Oscillator::Oscillator_11  size=35  [run]
int __thiscall hkpPrevailingWind::Oscillator::Oscillator_11(int param_1,byte param_2)

{
  *(undefined ***)(param_1 + 0x10) = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01268F90  FUN_01268f90  size=38  [run]
void FUN_01268f90(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01268FC0  hkpWind::vf00  size=53  [run]
undefined4 * __thiscall hkpWind::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01269000  FUN_01269000  size=39  [run]
void FUN_01269000(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01269030  hkpPrevailingWind::Oscillator::Oscillator_2  size=50  [run]
void __thiscall
hkpPrevailingWind::Oscillator::Oscillator_2
          (undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = vftable;
  param_1[5] = *(undefined4 *)(param_3 + 4);
  param_1[6] = *(undefined4 *)(param_3 + 8);
  param_1[7] = param_4;
  return;
}

// 01269070  hkpPrevailingWind::Oscillator::vf00  size=50  [run]
undefined4 * __thiscall hkpPrevailingWind::Oscillator::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 012690D0  hkpPrevailingWind::Oscillator::Oscillator_3  size=288  [run]
void hkpPrevailingWind::Oscillator::Oscillator_3(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (3 < param_2) {
    puVar4 = (undefined4 *)(param_1 + 0x38);
    iVar6 = (param_2 - 4U >> 2) + 1;
    iVar5 = iVar6 * 4;
    do {
      if (puVar4 != (undefined4 *)0x38) {
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        uVar3 = param_3[3];
        puVar4[-0xe] = *param_3;
        puVar4[-0xd] = uVar1;
        puVar4[-0xc] = uVar2;
        puVar4[-0xb] = uVar3;
        puVar4[-10] = vftable;
        puVar4[-9] = param_3[5];
        puVar4[-8] = param_3[6];
        puVar4[-7] = param_3[7];
      }
      if (puVar4 != (undefined4 *)0x18) {
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        uVar3 = param_3[3];
        puVar4[-6] = *param_3;
        puVar4[-5] = uVar1;
        puVar4[-4] = uVar2;
        puVar4[-3] = uVar3;
        puVar4[-2] = vftable;
        puVar4[-1] = param_3[5];
        *puVar4 = param_3[6];
        puVar4[1] = param_3[7];
      }
      if (puVar4 + 2 != (undefined4 *)0x0) {
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        uVar3 = param_3[3];
        puVar4[2] = *param_3;
        puVar4[3] = uVar1;
        puVar4[4] = uVar2;
        puVar4[5] = uVar3;
        puVar4[6] = vftable;
        puVar4[7] = param_3[5];
        puVar4[8] = param_3[6];
        puVar4[9] = param_3[7];
      }
      if (puVar4 + 10 != (undefined4 *)0x0) {
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        uVar3 = param_3[3];
        puVar4[10] = *param_3;
        puVar4[0xb] = uVar1;
        puVar4[0xc] = uVar2;
        puVar4[0xd] = uVar3;
        puVar4[0xe] = vftable;
        puVar4[0xf] = param_3[5];
        puVar4[0x10] = param_3[6];
        puVar4[0x11] = param_3[7];
      }
      puVar4 = puVar4 + 0x20;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (iVar5 < param_2) {
    puVar4 = (undefined4 *)(iVar5 * 0x20 + param_1 + 0x18);
    param_2 = param_2 - iVar5;
    do {
      if (puVar4 != (undefined4 *)0x18) {
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        uVar3 = param_3[3];
        puVar4[-6] = *param_3;
        puVar4[-5] = uVar1;
        puVar4[-4] = uVar2;
        puVar4[-3] = uVar3;
        puVar4[-2] = vftable;
        puVar4[-1] = param_3[5];
        *puVar4 = param_3[6];
        puVar4[1] = param_3[7];
      }
      puVar4 = puVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 012691F0  hkpPrevailingWind::Oscillator::Oscillator  size=35  [run]
void hkpPrevailingWind::Oscillator::Oscillator(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    puVar1 = (undefined4 *)(param_2 * 0x20 + 0x10 + param_1);
    do {
      *puVar1 = vftable;
      puVar1 = puVar1 + -8;
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  return;
}

// 01269220  hkpPrevailingWind::Oscillator::Oscillator_7  size=86  [run]
void __thiscall
hkpPrevailingWind::Oscillator::Oscillator_7(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x20);
  }
  puVar4 = (undefined4 *)(param_1[1] * 0x20 + *param_1);
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *puVar4 = *param_3;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    puVar4[4] = vftable;
    puVar4[5] = param_3[5];
    puVar4[6] = param_3[6];
    puVar4[7] = param_3[7];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 012692B0  hkpPrevailingWind::Oscillator::Oscillator_8  size=87  [run]
void __thiscall hkpPrevailingWind::Oscillator::Oscillator_8(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x20);
  }
  puVar4 = (undefined4 *)(param_1[1] * 0x20 + *param_1);
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *puVar4 = *param_2;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    puVar4[4] = vftable;
    puVar4[5] = param_2[5];
    puVar4[6] = param_2[6];
    puVar4[7] = param_2[7];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01269310  hkpPrevailingWind::Oscillator::Oscillator_4  size=91  [run]
void __thiscall hkpPrevailingWind::Oscillator::Oscillator_4(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[1] + -1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(iVar1 * 0x20 + 0x10 + *param_1);
    do {
      *puVar2 = vftable;
      puVar2 = puVar2 + -8;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01269380  hkpPrevailingWind::Oscillator::Oscillator_5  size=89  [run]
void __fastcall hkpPrevailingWind::Oscillator::Oscillator_5(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[1] + -1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(iVar1 * 0x20 + 0x10 + *param_1);
    do {
      *puVar2 = vftable;
      puVar2 = puVar2 + -8;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 012693E0  hkpPrevailingWind::Oscillator::Oscillator_6  size=89  [run]
void __fastcall hkpPrevailingWind::Oscillator::Oscillator_6(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[1] + -1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(iVar1 * 0x20 + 0x10 + *param_1);
    do {
      *puVar2 = vftable;
      puVar2 = puVar2 + -8;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01269440  hkpPrevailingWind::vf00  size=8  [run]
void hkpPrevailingWind::vf00(void)

{
  vf00();
  return;
}

// 01269450  FUN_01269450  size=38  [run]
void FUN_01269450(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01269480  hkBaseObject::hkBaseObject_167  size=118  [run]
void __fastcall hkBaseObject::hkBaseObject_167(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = hkpPrevailingWind::vftable;
  param_1[2] = hkpPrevailingWind::vftable;
  iVar1 = param_1[9] + -1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(iVar1 * 0x20 + 0x10 + param_1[8]);
    do {
      *puVar2 = hkpPrevailingWind::Oscillator::vftable;
      puVar2 = puVar2 + -8;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  param_1[9] = 0;
  if (-1 < (int)param_1[10]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],param_1[10] << 5);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  param_1[2] = hkpWorldPostSimulationListener::vftable;
  *param_1 = vftable;
  return;
}

// 01269500  hkpPrevailingWind::vf00  size=52  [run]
int __thiscall hkpPrevailingWind::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_167();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01269650  FUN_01269650  size=10  [run]
int __fastcall FUN_01269650(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x60) + 0x18) + 0x30;
}

// 01269660  FUN_01269660  size=41  [run]
void __thiscall FUN_01269660(int param_1,undefined4 param_2)

{
  FUN_011a1070(param_2,*(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x88));
  return;
}

// 012696A0  FUN_012696a0  size=17  [run]
void __thiscall FUN_012696a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  return;
}

// 012696C0  FUN_012696c0  size=4  [run]
undefined4 __fastcall FUN_012696c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}

// 012696E0  FUN_012696e0  size=23  [run]
void FUN_012696e0(void)

{
  return;
}

// 01269700  FUN_01269700  size=276  [run]
void __thiscall FUN_01269700(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  
  puVar4 = (undefined4 *)FUN_01269650();
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_2 + 0x10) = *puVar4;
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar3;
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x8c);
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 0x44) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = uVar2;
  *(undefined4 *)(param_2 + 0x4c) = uVar3;
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0xa0);
  fVar5 = *(float *)(param_1 + 0xb0);
  if (ABS(fVar5) < 1.0) {
    FUN_014376e0();
  }
  else if (fVar5 <= 0.0) {
    fVar5 = 3.1415927;
  }
  else {
    fVar5 = 0.0;
  }
  *(float *)(param_2 + 0x74) = fVar5;
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(param_1 + 0xbc);
  return;
}

// 01269820  FUN_01269820  size=50  [run]
void __thiscall FUN_01269820(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0xa4) + iVar1 * 4) + 0x10))(param_1,param_2,param_3);
  }
  return;
}

// 01269860  FUN_01269860  size=52  [run]
void __thiscall FUN_01269860(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0xa4) + iVar1 * 4) + 0x14))(param_1,param_2,param_3);
  }
  return;
}

// 012698A0  FUN_012698a0  size=52  [run]
void __thiscall FUN_012698a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8) + -1;
  if (-1 < iVar1) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xa4) + iVar1 * 4) + 4))
                (param_1,param_1 + 0x10,param_3);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return;
}

// 012698E0  FUN_012698e0  size=48  [run]
void __thiscall FUN_012698e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0xa4) + iVar1 * 4) + 8))(param_1,param_2);
  }
  return;
}

// 01269910  FUN_01269910  size=48  [run]
void __thiscall FUN_01269910(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0xa4) + iVar1 * 4) + 0xc))(param_1,param_2);
  }
  return;
}

// 01269940  CharacterProxy::vf10  size=435  [run]
void __thiscall CharacterProxy::vf10(int param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar4 = param_2[5];
  fVar6 = param_2[6];
  fVar8 = param_2[7];
  *param_3 = param_2[4];
  param_3[1] = fVar4;
  param_3[2] = fVar6;
  param_3[3] = fVar8;
  param_3[3] = param_3[3] - *(float *)(param_1 + 0x88);
  param_3[8] = *(float *)(param_1 + 0x68);
  param_3[0xb] = *(float *)(param_1 + 100);
  param_3[9] = *(float *)(param_1 + 0x80);
  fVar4 = *(float *)(param_1 + 0x84);
  param_3[4] = 0.0;
  param_3[5] = 0.0;
  param_3[6] = 0.0;
  param_3[7] = 0.0;
  param_3[10] = fVar4;
  param_3[0xc] = 0.0;
  fVar4 = param_2[10];
  if ((*(char *)((int)fVar4 + 0x18) == '\x01') &&
     (iVar3 = (int)*(char *)((int)fVar4 + 0x10) + (int)fVar4, iVar3 != 0)) {
    if ((*(char *)(iVar3 + 0xe8) == '\x05') || (*(char *)(iVar3 + 0xe8) == '\x04')) {
      fVar4 = *param_2 - *(float *)(iVar3 + 0x140);
      fVar6 = param_2[1] - *(float *)(iVar3 + 0x144);
      fVar8 = param_2[2] - *(float *)(iVar3 + 0x148);
      fVar10 = param_2[3] - *(float *)(iVar3 + 0x14c);
      fVar12 = *(float *)(iVar3 + 0x1c4) * fVar8 - *(float *)(iVar3 + 0x1c8) * fVar6;
      fVar13 = *(float *)(iVar3 + 0x1c8) * fVar4 - *(float *)(iVar3 + 0x1c0) * fVar8;
      fVar14 = *(float *)(iVar3 + 0x1c0) * fVar6 - *(float *)(iVar3 + 0x1c4) * fVar4;
      fVar10 = *(float *)(iVar3 + 0x1cc) * fVar10 - *(float *)(iVar3 + 0x1cc) * fVar10;
      param_3[4] = fVar12;
      param_3[5] = fVar13;
      param_3[6] = fVar14;
      param_3[7] = fVar10;
      fVar4 = *(float *)(iVar3 + 0x1b4);
      fVar6 = *(float *)(iVar3 + 0x1b8);
      fVar8 = *(float *)(iVar3 + 0x1bc);
      param_3[4] = *(float *)(iVar3 + 0x1b0) + fVar12;
      param_3[5] = fVar4 + fVar13;
      param_3[6] = fVar6 + fVar14;
      param_3[7] = fVar8 + fVar10;
    }
    else {
      fVar4 = *(float *)(iVar3 + 0x14c);
      fVar6 = *(float *)(iVar3 + 0x140);
      fVar8 = *(float *)(iVar3 + 0x144);
      fVar10 = *(float *)(iVar3 + 0x148);
      fVar12 = *(float *)(iVar3 + 0x14c);
      fVar13 = *(float *)(iVar3 + 0x130);
      fVar14 = *(float *)(iVar3 + 0x134);
      fVar1 = *(float *)(iVar3 + 0x138);
      fVar2 = *(float *)(iVar3 + 0x13c);
      fVar15 = *(float *)(iVar3 + 0x180) * fVar4;
      fVar16 = *(float *)(iVar3 + 0x184) * fVar4;
      fVar17 = *(float *)(iVar3 + 0x188) * fVar4;
      fVar18 = *(float *)(iVar3 + 0x18c) * fVar4;
      fVar5 = *param_2 - *(float *)(iVar3 + 0x140);
      fVar7 = param_2[1] - *(float *)(iVar3 + 0x144);
      fVar9 = param_2[2] - *(float *)(iVar3 + 0x148);
      fVar11 = param_2[3] - *(float *)(iVar3 + 0x14c);
      param_3[4] = fVar16 * fVar9 - fVar17 * fVar7;
      param_3[5] = fVar17 * fVar5 - fVar15 * fVar9;
      param_3[6] = fVar15 * fVar7 - fVar16 * fVar5;
      param_3[7] = fVar18 * fVar11 - fVar18 * fVar11;
      param_3[4] = (fVar6 - fVar13) * fVar4 + param_3[4];
      param_3[5] = (fVar8 - fVar14) * fVar4 + param_3[5];
      param_3[6] = (fVar10 - fVar1) * fVar4 + param_3[6];
      param_3[7] = (fVar12 - fVar2) * fVar4 + param_3[7];
    }
    param_3[3] = param_3[3] -
                 (param_3[1] * param_3[5] + *param_3 * param_3[4] + param_3[2] * param_3[6]) *
                 param_4;
    if (*(char *)(iVar3 + 0xe8) == '\x05') {
      param_3[0xc] = 2.8026e-45;
    }
    if (*(char *)(iVar3 + 0xe8) == '\x04') {
      param_3[0xc] = 1.4013e-45;
    }
  }
  if (param_3[3] < -1.1920929e-07) {
    fVar10 = -(*(float *)(param_1 + 0xb4) * param_3[3]);
    fVar4 = param_2[5];
    fVar6 = param_2[6];
    fVar8 = param_2[7];
    param_3[4] = fVar10 * param_2[4] + param_3[4];
    param_3[5] = fVar10 * fVar4 + param_3[5];
    param_3[6] = fVar10 * fVar6 + param_3[6];
    param_3[7] = fVar10 * fVar8 + param_3[7];
    param_3[3] = 0.0;
  }
  return;
}

// 01269B00  CharacterProxy::vf08  size=329  [run]
void __thiscall CharacterProxy::vf08(uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_c [8];
  
  FUN_01190160(-(uint)(param_1 != 8) & param_1);
  iVar1 = 0;
  if (0 < *(int *)(param_2 + 0x80)) {
    piVar2 = *(int **)(param_2 + 0x7c);
    do {
      if (*piVar2 == 0x1310) {
        piVar2 = (int *)FUN_00904750(local_c,0x1310,0);
        iVar1 = 0;
        if (*(int *)(param_1 + 0x30) < 1) goto LAB_01269b94;
        piVar5 = *(int **)(param_1 + 0x2c);
        goto LAB_01269b88;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)(param_2 + 0x80));
  }
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  if (-1 < iVar1) {
    iVar7 = iVar1 * 0x30;
    do {
      iVar4 = *(int *)(iVar7 + 0x28 + *(int *)(param_1 + 8));
      if (*(char *)(iVar4 + 0x18) == '\x01') {
        iVar4 = *(char *)(iVar4 + 0x10) + iVar4;
      }
      else {
        iVar4 = 0;
      }
      if (iVar4 == param_2) {
        iVar4 = *(int *)(param_1 + 0xc) + -1;
        *(int *)(param_1 + 0xc) = iVar4;
        if (iVar4 != iVar1) {
          puVar3 = (undefined4 *)(iVar7 + *(int *)(param_1 + 8));
          iVar4 = (iVar4 * 0x30 + *(int *)(param_1 + 8)) - (int)puVar3;
          iVar6 = 6;
          do {
            *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
            puVar3[1] = *(undefined4 *)(iVar4 + 4 + (int)puVar3);
            puVar3 = puVar3 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      iVar1 = iVar1 + -1;
      iVar7 = iVar7 + -0x30;
    } while (-1 < iVar1);
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x18) < 1) {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  while (*piVar2 != param_2) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (*(int *)(param_1 + 0x18) <= iVar1) {
      return;
    }
  }
  if (iVar1 == -1) {
    return;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  if (*(int *)(param_1 + 0x18) == iVar1) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1 * 4) =
       *(undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18) * 4);
  return;
  while( true ) {
    iVar1 = iVar1 + 1;
    piVar5 = piVar5 + 1;
    if (*(int *)(param_1 + 0x30) <= iVar1) break;
LAB_01269b88:
    if (*piVar5 == *piVar2) goto LAB_01269b97;
  }
LAB_01269b94:
  iVar1 = -1;
LAB_01269b97:
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  if (*(int *)(param_1 + 0x30) == iVar1) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar1 * 4) =
       *(undefined4 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30) * 4);
  return;
}

// 01269C50  CharacterProxy::vf08  size=199  [run]
void __thiscall CharacterProxy::vf08(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  FUN_011a30c0(-(uint)(param_1 != 0xc) & param_1);
  iVar2 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar2) {
    iVar6 = iVar2 * 0x30;
    do {
      iVar3 = *(int *)(iVar6 + 0x28 + *(int *)(param_1 + 4));
      if (*(char *)(iVar3 + 0x18) == '\x02') {
        iVar3 = *(char *)(iVar3 + 0x10) + iVar3;
      }
      else {
        iVar3 = 0;
      }
      if (iVar3 == param_2) {
        iVar3 = *(int *)(param_1 + 8) + -1;
        *(int *)(param_1 + 8) = iVar3;
        if (iVar3 != iVar2) {
          puVar1 = (undefined4 *)(iVar6 + *(int *)(param_1 + 4));
          iVar3 = (iVar3 * 0x30 + *(int *)(param_1 + 4)) - (int)puVar1;
          iVar4 = 6;
          do {
            *puVar1 = *(undefined4 *)(iVar3 + (int)puVar1);
            puVar1[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar1);
            puVar1 = puVar1 + 2;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar2 = iVar2 + -1;
      iVar6 = iVar6 + -0x30;
    } while (-1 < iVar2);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    piVar5 = *(int **)(param_1 + 0x1c);
    do {
      if (*piVar5 == param_2) goto LAB_01269cff;
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  iVar2 = -1;
LAB_01269cff:
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x20) != iVar2) {
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 4);
  }
  return;
}

// 01269D20  FUN_01269d20  size=81  [run]
void __thiscall FUN_01269d20(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    piVar2 = *(int **)(param_1 + 0xa4);
    do {
      if (*piVar2 == param_2) goto LAB_01269d4f;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xa8));
  }
  iVar1 = -1;
LAB_01269d4f:
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
  if (*(int *)(param_1 + 0xa8) != iVar1) {
    *(undefined4 *)(*(int *)(param_1 + 0xa4) + iVar1 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0xa8) * 4);
  }
  return;
}

// 01269D80  FUN_01269d80  size=106  [run]
int FUN_01269d80(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  int local_c;
  float local_8;
  
  iVar1 = param_2[1];
  iVar3 = 0;
  local_c = -1;
  local_8 = 0.1;
  iVar2 = -1;
  if (0 < iVar1) {
    iVar4 = *param_2;
    do {
      fVar5 = (float10)FUN_0126e5e0(param_1,iVar4);
      if (fVar5 < (float10)local_8) {
        local_c = iVar3;
        local_8 = (float)fVar5;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x30;
      iVar2 = local_c;
    } while (iVar3 < iVar1);
  }
  return iVar2;
}

// 01269DF0  FUN_01269df0  size=112  [run]
void FUN_01269df0(uint param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  
  iVar2 = param_2[1];
  iVar5 = 0;
  bVar4 = false;
  if (0 < iVar2) {
    do {
      puVar1 = (uint *)(*param_2 + iVar5 * 4);
      uVar3 = *puVar1;
      if ((uVar3 & 0xfffffffe) == param_1) {
        *puVar1 = uVar3 | 1;
        bVar4 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
    if (bVar4) {
      return;
    }
  }
  if (param_2[1] < (int)(param_2[2] & 0x3fffffffU)) {
    *(uint *)(*param_2 + param_2[1] * 4) = param_1 | 1;
    param_2[1] = param_2[1] + 1;
  }
  return;
}

// 01269E60  FUN_01269e60  size=82  [run]
void FUN_01269e60(int *param_1,int *param_2,undefined4 param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2[1];
  iVar4 = 0;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      pfVar1 = (float *)(*param_2 + 0x1c + iVar3);
      if (*pfVar1 <= param_4 && param_4 != *pfVar1) {
        FUN_01269df0(*(undefined4 *)(*param_1 + iVar4 * 4),param_3);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar4 < iVar2);
  }
  return;
}

// 01269EC0  FUN_01269ec0  size=1094  [run]
void __thiscall FUN_01269ec0(int param_1,int param_2,float *param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  int local_70;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int *local_34;
  float *local_2c;
  int local_28;
  float local_24;
  int *local_20;
  int local_1c;
  int local_18;
  char local_11;
  
  local_11 = param_4 != 0;
  if ((bool)local_11) {
    iVar3 = *(int *)(param_4 + 0x10);
    if (0 < *(int *)(param_4 + 8)) {
      iVar2 = *(int *)(iVar3 + 0x20);
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar3 + 0x50);
        iVar3 = iVar3 + 0x30;
      }
    }
  }
  else {
    iVar3 = 0;
  }
  local_7c = *(undefined4 *)(param_2 + 8);
  local_28 = 0;
  if (param_5[1] < 1) {
    return;
  }
  local_20 = (int *)(iVar3 + 0x20);
  local_1c = 0;
  local_18 = param_1;
LAB_01269f30:
  local_2c = (float *)(local_1c + *param_5);
  fVar4 = local_2c[10];
  iVar3 = *(int *)(*(char *)((int)fVar4 + 0x10) + 0x80 + (int)fVar4);
  iVar2 = 0;
  if (0 < iVar3) {
    local_34 = *(int **)((int)*(char *)((int)fVar4 + 0x10) + (int)fVar4 + 0x7c);
    piVar1 = local_34;
    do {
      if (*piVar1 == 0x1300) {
        iVar2 = 0;
        piVar1 = local_34;
        if (0 < iVar3) goto LAB_0126a193;
        break;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar2 < iVar3);
  }
  goto LAB_01269f74;
  while( true ) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 4;
    if (iVar3 <= iVar2) break;
LAB_0126a193:
    if (*piVar1 == 0x1300) {
      piVar1 = local_34 + iVar2 * 4 + 2;
      local_34 = (int *)local_34[iVar2 * 4 + 3];
      if (*piVar1 != 0) {
        FUN_01269820(*piVar1,local_2c);
        goto LAB_0126a2e4;
      }
      break;
    }
  }
LAB_01269f74:
  if ((((local_11 == '\0') || (*(int *)(param_4 + 8) != 0)) &&
      (*(char *)((int)fVar4 + 0x18) == '\x01')) &&
     (((iVar3 = (int)*(char *)((int)fVar4 + 0x10) + (int)fVar4, iVar3 != 0 &&
       (*(char *)(iVar3 + 0xe8) != '\x05')) && (*(char *)(iVar3 + 0xe8) != '\x04')))) {
    local_a0 = *local_2c;
    fStack_9c = local_2c[1];
    fStack_98 = local_2c[2];
    fStack_94 = local_2c[7];
    local_90 = local_2c[4];
    fStack_8c = local_2c[5];
    fStack_88 = local_2c[6];
    fStack_84 = local_2c[7];
    fVar4 = local_a0 - *(float *)(iVar3 + 0x140);
    fVar5 = fStack_9c - *(float *)(iVar3 + 0x144);
    fVar6 = fStack_98 - *(float *)(iVar3 + 0x148);
    local_78 = (((fVar5 * *(float *)(iVar3 + 0x1c0) - fVar4 * *(float *)(iVar3 + 0x1c4)) +
                *(float *)(iVar3 + 0x1b8)) - *(float *)(local_18 + 0x48)) * fStack_88 +
               (((fVar4 * *(float *)(iVar3 + 0x1c8) - fVar6 * *(float *)(iVar3 + 0x1c0)) +
                *(float *)(iVar3 + 0x1b4)) - *(float *)(local_18 + 0x44)) * fStack_8c +
               (((fVar6 * *(float *)(iVar3 + 0x1c4) - fVar5 * *(float *)(iVar3 + 0x1c8)) +
                *(float *)(iVar3 + 0x1b0)) - *(float *)(local_18 + 0x40)) * local_90;
    local_24 = local_78 * -0.9;
    if (fStack_94 < 0.0) {
      local_24 = local_24 + *(float *)(param_2 + 0xc) * fStack_94 * 0.4;
    }
    local_60 = 0.0;
    fStack_5c = 0.0;
    fStack_58 = 0.0;
    fStack_54 = 0.0;
    local_70 = iVar3;
    local_50 = local_a0;
    fStack_4c = fStack_9c;
    fStack_48 = fStack_98;
    fStack_44 = fStack_94;
    if (0.0 <= local_24) {
      local_80 = 0.0;
      local_74 = *(float *)(iVar3 + 0x1ac);
    }
    else {
      (**(code **)(*(int *)(iVar3 + 0xe0) + 0x28))(&local_d0);
      fVar4 = local_a0 - *(float *)(iVar3 + 0x140);
      fVar5 = fStack_9c - *(float *)(iVar3 + 0x144);
      fVar6 = fStack_98 - *(float *)(iVar3 + 0x148);
      fVar7 = fVar5 * fStack_88 - fVar6 * fStack_8c;
      fVar6 = fVar6 * local_90 - fVar4 * fStack_88;
      fVar4 = fVar4 * fStack_8c - fVar5 * local_90;
      local_74 = *(float *)(iVar3 + 0x1ac) +
                 (fVar6 * fStack_bc + fVar7 * fStack_cc + fVar4 * fStack_ac) * fVar6 +
                 (fVar6 * local_c0 + fVar7 * local_d0 + fVar4 * local_b0) * fVar7 +
                 (fVar6 * fStack_b8 + fVar7 * fStack_c8 + fVar4 * fStack_a8) * fVar4;
      fVar4 = -(*(float *)(local_18 + 0x9c) * *(float *)(param_2 + 8));
      local_80 = local_24 / local_74;
      if (local_24 / local_74 < fVar4) {
        local_80 = fVar4;
      }
      local_60 = local_80 * local_90;
      fStack_5c = local_80 * fStack_8c;
      fStack_58 = local_80 * fStack_88;
      fStack_54 = local_80 * fStack_84;
    }
    fVar4 = *(float *)(param_2 + 8);
    fVar4 = fVar4 * param_3[1] * fStack_8c + fVar4 * *param_3 * local_90 +
            fVar4 * param_3[2] * fStack_88;
    if (local_78 < 0.0) {
      fVar4 = fVar4 - local_78;
    }
    if (fVar4 < -1.1920929e-07) {
      fVar4 = *(float *)(local_18 + 0xa0) * fVar4;
      local_60 = fVar4 * local_90 + local_60;
      fStack_5c = fVar4 * fStack_8c + fStack_5c;
      fStack_58 = fVar4 * fStack_88 + fStack_58;
      fStack_54 = fVar4 * fStack_84 + fStack_54;
    }
    FUN_01269860(&local_a0,&local_60);
    if (1e-07 <= ABS((fStack_5c * fStack_5c + local_60 * local_60 + fStack_58 * fStack_58) - 0.0)) {
      if (local_11 == '\0') {
        FUN_0118fe70();
        (**(code **)(*(int *)(iVar3 + 0xe0) + 0x54))(&local_60,&local_50);
      }
      else {
        *local_20 = iVar3;
        local_20[-4] = (int)local_50;
        local_20[-3] = (int)fStack_4c;
        local_20[-2] = (int)fStack_48;
        local_20[-1] = (int)fStack_44;
        local_20[-8] = (int)local_60;
        local_20[-7] = (int)fStack_5c;
        local_20[-6] = (int)fStack_58;
        local_20[-5] = (int)fStack_54;
        local_20 = local_20 + 0xc;
        piVar1 = (int *)(param_4 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          *local_20 = 0;
        }
      }
    }
  }
LAB_0126a2e4:
  local_1c = local_1c + 0x30;
  local_28 = local_28 + 1;
  if (param_5[1] <= local_28) {
    return;
  }
  goto LAB_01269f30;
}

// 0126A310  FUN_0126a310  size=63  [run]
void __thiscall FUN_0126a310(int param_1,undefined4 param_2)

{
  if (*(uint *)(param_1 + 0xa8) == (*(uint *)(param_1 + 0xac) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0xa4),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0xa8) * 4) = param_2;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  return;
}

// 0126A350  FUN_0126a350  size=132  [run]
void FUN_0126a350(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  iVar2 = param_2[1];
  iVar4 = param_1[1];
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      FUN_01269df0(*(undefined4 *)(*param_1 + iVar5 * 4),param_2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      puVar1 = (uint *)(*param_2 + iVar4 * 4);
      uVar3 = *puVar1 & 0xfffffffe;
      iVar5 = 0;
      if (0 < param_1[1]) {
        puVar6 = (uint *)*param_1;
        do {
          if (*puVar6 == uVar3) {
            if (iVar5 != -1) goto LAB_0126a3c5;
            break;
          }
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar5 < param_1[1]);
      }
      *puVar1 = uVar3;
LAB_0126a3c5:
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}

// 0126A3E0  FUN_0126a3e0  size=243  [run]
float10 __thiscall
FUN_0126a3e0(int param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM4 [16];
  undefined1 auVar8 [16];
  
  fVar4 = *param_2;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = fVar4 * fVar4;
  fVar5 = fVar1 * fVar1;
  fVar6 = fVar2 * fVar2;
  fVar7 = fVar5 + fVar3 + fVar6;
  auVar8._4_4_ = fVar5 + fVar3 + fVar6;
  auVar8._0_4_ = fVar7;
  auVar8._8_4_ = fVar5 + fVar3 + fVar6;
  auVar8._12_4_ = fVar5 + fVar3 + fVar6;
  auVar8 = rsqrtps(in_XMM4,auVar8);
  fVar3 = auVar8._0_4_;
  fVar3 = 1.0 / (float)(~-(uint)(fVar7 <= 0.0) &
                       (uint)((3.0 - fVar3 * fVar7 * fVar3) * fVar3 * 0.5 * fVar7));
  fVar4 = *(float *)(param_3 + 0xc) -
          (-1.0 / (fVar3 * (*(float *)(param_3 + 0x14) * fVar1 + *(float *)(param_3 + 0x10) * fVar4
                           + *(float *)(param_3 + 0x18) * fVar2))) * *(float *)(param_1 + 0x88) *
          fVar3;
  if (0.0 <= fVar4) {
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_4[3];
  *param_5 = (*param_4 - *param_5) * fVar4 + *param_5;
  param_5[1] = (fVar1 - param_5[1]) * fVar4 + param_5[1];
  param_5[2] = (fVar2 - param_5[2]) * fVar4 + param_5[2];
  param_5[3] = (fVar3 - param_5[3]) * fVar4 + param_5[3];
  return (float10)param_2[8] * (float10)fVar4;
}

// 0126A4E0  FUN_0126a4e0  size=301  [run]
uint FUN_0126a4e0(float param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  int in_EAX;
  float *pfVar4;
  int iVar5;
  uint *unaff_EDI;
  float fVar6;
  float fVar7;
  float fVar8;
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
  
  iVar5 = in_EAX * 0x40;
  pfVar1 = (float *)(*unaff_EDI + iVar5);
  fVar6 = pfVar1[2] * param_2[2] + pfVar1[1] * param_2[1] + *pfVar1 * *param_2;
  if ((0.01 < fVar6) && (fVar6 < param_1)) {
    if (unaff_EDI[1] == (unaff_EDI[2] & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94);
    }
    uVar2 = *unaff_EDI;
    pfVar4 = (float *)(unaff_EDI[1] * 0x40 + uVar2);
    unaff_EDI[1] = unaff_EDI[1] + 1;
    pfVar1 = (float *)(uVar2 + iVar5);
    fVar3 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    *pfVar4 = *pfVar1;
    pfVar4[1] = fVar3;
    pfVar4[2] = fVar7;
    pfVar4[3] = fVar8;
    pfVar1 = (float *)(uVar2 + 0x10 + iVar5);
    fVar3 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    pfVar4[4] = *pfVar1;
    pfVar4[5] = fVar3;
    pfVar4[6] = fVar7;
    pfVar4[7] = fVar8;
    pfVar4[8] = *(float *)(uVar2 + 0x20 + iVar5);
    pfVar4[9] = *(float *)(uVar2 + 0x24 + iVar5);
    pfVar4[10] = *(float *)(uVar2 + 0x28 + iVar5);
    pfVar4[0xb] = *(float *)(uVar2 + 0x2c + iVar5);
    pfVar4[0xc] = *(float *)(uVar2 + 0x30 + iVar5);
    fVar6 = -fVar6;
    fVar3 = param_2[3];
    fVar13 = *param_2 * fVar6 + *pfVar4;
    fVar14 = param_2[1] * fVar6 + pfVar4[1];
    fVar15 = param_2[2] * fVar6 + pfVar4[2];
    fVar7 = fVar13 * fVar13;
    fVar8 = fVar14 * fVar14;
    fVar9 = fVar15 * fVar15;
    fVar10 = fVar8 + fVar7 + fVar9;
    fVar11 = fVar8 + fVar7 + fVar9;
    fVar12 = fVar8 + fVar7 + fVar9;
    fVar9 = fVar8 + fVar7 + fVar9;
    auVar16._0_12_ = ZEXT812(0);
    auVar16._12_4_ = 0;
    auVar17._4_4_ = fVar11;
    auVar17._0_4_ = fVar10;
    auVar17._8_4_ = fVar12;
    auVar17._12_4_ = fVar9;
    auVar17 = rsqrtps(auVar16,auVar17);
    fVar7 = auVar17._0_4_;
    fVar8 = auVar17._4_4_;
    fVar18 = auVar17._8_4_;
    fVar19 = auVar17._12_4_;
    *pfVar4 = (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar7 * fVar10 * fVar7) * fVar7 * 0.5)
                     ) * fVar13;
    pfVar4[1] = (float)(~-(uint)(fVar11 <= 0.0) &
                       (uint)((3.0 - fVar8 * fVar11 * fVar8) * fVar8 * 0.5)) * fVar14;
    pfVar4[2] = (float)(~-(uint)(fVar12 <= 0.0) &
                       (uint)((3.0 - fVar18 * fVar12 * fVar18) * fVar18 * 0.5)) * fVar15;
    pfVar4[3] = (float)(~-(uint)(fVar9 <= 0.0) &
                       (uint)((3.0 - fVar19 * fVar9 * fVar19) * fVar19 * 0.5)) *
                (fVar3 * fVar6 + pfVar4[3]);
    return CONCAT31((int3)((uint)pfVar4 >> 8),1);
  }
  return *unaff_EDI & 0xffffff00;
}

// 0126A610  FUN_0126a610  size=473  [run]
void __thiscall FUN_0126a610(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  FUN_01006000();
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_010060a0();
  }
  uVar9 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x70);
  uVar9 = *(undefined4 *)(param_2 + 0x74);
  FUN_01437589();
  *(undefined4 *)(param_1 + 0xb0) = uVar9;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(param_2 + 0x80);
  uVar9 = *(undefined4 *)(param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  uVar5 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = uVar9;
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x74);
  fVar3 = *(float *)(param_1 + 0x78);
  fVar10 = fVar1 * fVar1;
  fVar11 = fVar2 * fVar2;
  fVar12 = fVar3 * fVar3;
  auVar16._4_4_ = fVar10;
  auVar16._0_4_ = fVar10;
  auVar16._8_4_ = fVar10;
  auVar16._12_4_ = fVar10;
  fVar13 = fVar11 + fVar10 + fVar12;
  fVar14 = fVar11 + fVar10 + fVar12;
  fVar15 = fVar11 + fVar10 + fVar12;
  fVar12 = fVar11 + fVar10 + fVar12;
  auVar17._4_4_ = fVar14;
  auVar17._0_4_ = fVar13;
  auVar17._8_4_ = fVar15;
  auVar17._12_4_ = fVar12;
  auVar17 = rsqrtps(auVar16,auVar17);
  fVar10 = auVar17._0_4_;
  fVar11 = auVar17._4_4_;
  fVar18 = auVar17._8_4_;
  fVar19 = auVar17._12_4_;
  *(float *)(param_1 + 0x70) =
       (float)(~-(uint)(fVar13 <= 0.0) & (uint)((3.0 - fVar10 * fVar13 * fVar10) * fVar10 * 0.5)) *
       fVar1;
  *(float *)(param_1 + 0x74) =
       (float)(~-(uint)(fVar14 <= 0.0) & (uint)((3.0 - fVar11 * fVar14 * fVar11) * fVar11 * 0.5)) *
       fVar2;
  *(float *)(param_1 + 0x78) =
       (float)(~-(uint)(fVar15 <= 0.0) & (uint)((3.0 - fVar18 * fVar15 * fVar18) * fVar18 * 0.5)) *
       fVar3;
  *(float *)(param_1 + 0x7c) =
       (float)(~-(uint)(fVar12 <= 0.0) & (uint)((3.0 - fVar19 * fVar12 * fVar19) * fVar19 * 0.5)) *
       *(float *)(param_1 + 0x7c);
  if (*(int *)(*(int *)(param_1 + 0x60) + 8) != 0) {
    FUN_01269660(param_2 + 0x10);
  }
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      FUN_01190160(param_1 + 8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x20));
  }
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      FUN_011a30c0(param_1 + 0xc);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x2c));
  }
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar8 = *(int *)(*(int *)(param_1 + 0x60) + 0x80);
  if (0 < iVar8) {
    piVar7 = *(int **)(*(int *)(param_1 + 0x60) + 0x7c);
    do {
      if (*piVar7 == 0x1300) {
        return;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (iVar6 < iVar8);
  }
  FUN_011c84d0(0x1300,param_1,0);
  return;
}

// 0126A7F0  hkBaseObject::hkBaseObject_160  size=428  [run]
void __fastcall hkBaseObject::hkBaseObject_160(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_c [8];
  
  iVar1 = 0;
  *param_1 = hkpCharacterProxy::vftable;
  param_1[2] = hkpCharacterProxy::vftable;
  param_1[3] = hkpCharacterProxy::vftable;
  if (0 < (int)param_1[8]) {
    do {
      FUN_01190160(param_1 + 2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[8]);
  }
  iVar1 = 0;
  param_1[8] = 0;
  if (0 < (int)param_1[0xb]) {
    do {
      FUN_011a30c0(param_1 + 3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0xb]);
  }
  iVar1 = param_1[0xe];
  iVar2 = 0;
  param_1[0xb] = 0;
  if (0 < iVar1) {
    do {
      FUN_01190160(param_1 + 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  FUN_011c8420(local_c,0x1300);
  FUN_010060a0();
  param_1[0x2a] = 0;
  if ((param_1[0x2b] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x29],param_1[0x2b] * 4);
  }
  param_1[0x29] = 0;
  param_1[0x2b] = 0x80000000;
  param_1[0xe] = 0;
  if ((param_1[0xf] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xd],param_1[0xf] * 4);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  param_1[0xb] = 0;
  if ((param_1[0xc] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[10],param_1[0xc] * 4);
  }
  param_1[10] = 0;
  param_1[0xc] = 0x80000000;
  param_1[8] = 0;
  if ((param_1[9] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[7],param_1[9] * 4);
  }
  param_1[7] = 0;
  param_1[9] = 0x80000000;
  param_1[5] = 0;
  if ((param_1[6] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x30);
  }
  param_1[6] = 0x80000000;
  param_1[4] = 0;
  param_1[3] = hkpPhantomListener::vftable;
  param_1[2] = hkpEntityListener::vftable;
  *param_1 = vftable;
  return;
}

// 0126A9A0  FUN_0126a9a0  size=408  [run]
void __thiscall FUN_0126a9a0(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  local_8 = 0;
  if (0 < param_3) {
    do {
      uVar1 = *param_2;
      if (uVar1 == 0) break;
      piVar4 = (int *)(uVar1 & 0xfffffffe);
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0x38)) {
        piVar3 = *(int **)(param_1 + 0x34);
        do {
          if ((int *)*piVar3 == piVar4) {
            if (iVar2 != -1) {
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
              if (*(int *)(param_1 + 0x38) != iVar2) {
                *(undefined4 *)(*(int *)(param_1 + 0x34) + iVar2 * 4) =
                     *(undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38) * 4);
              }
              if ((*param_2 & 1) == 0) {
                FUN_01190160(param_1 + 8);
                uVar6 = 2;
                goto LAB_0126aaa6;
              }
              if (local_10 == (local_c & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,&local_14,4);
              }
              *(int **)(local_14 + local_10 * 4) = piVar4;
              local_10 = local_10 + 1;
              goto LAB_0126aab0;
            }
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x38));
      }
      if ((uVar1 & 1) == 0) {
        uVar6 = 3;
      }
      else {
        if (local_10 == (local_c & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_14,4);
        }
        *(int **)(local_14 + local_10 * 4) = piVar4;
        local_10 = local_10 + 1;
        if (param_1 == 0) {
          FUN_01190090(0);
          uVar6 = 1;
        }
        else {
          FUN_01190090(param_1 + 8);
          uVar6 = 1;
        }
      }
LAB_0126aaa6:
      (**(code **)(*piVar4 + 0xc))(param_1,uVar6);
LAB_0126aab0:
      param_2 = param_2 + 1;
      local_8 = local_8 + 1;
    } while (local_8 < param_3);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      FUN_01190160(param_1 + 8);
      (**(code **)(**(int **)(*(int *)(param_1 + 0x34) + iVar5 * 4) + 0xc))(param_1,2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  FUN_0126dab0(&local_14);
  local_10 = 0;
  if (-1 < (int)local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 4);
  }
  return;
}

// 0126AB40  FUN_0126ab40  size=365  [run]
void FUN_0126ab40(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *local_8;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x14) + -1;
  if (iVar8 < 0) {
    return;
  }
  local_8 = (int *)(iVar8 * 0x30 + iVar1 + 0x28);
LAB_0126ab73:
  iVar2 = (int)*(char *)(*local_8 + 0x10) + *local_8;
  iVar5 = *(int *)(iVar2 + 0x80);
  iVar7 = 0;
  if (0 < iVar5) {
    piVar4 = *(int **)(iVar2 + 0x7c);
    piVar3 = piVar4;
    do {
      if (*piVar3 == 0x1310) {
        iVar2 = 0;
        piVar3 = piVar4;
        if (0 < iVar5) goto LAB_0126abb4;
        break;
      }
      iVar7 = iVar7 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar7 < iVar5);
  }
  goto LAB_0126ac95;
  while( true ) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 4;
    if (iVar5 <= iVar2) break;
LAB_0126abb4:
    if (*piVar3 == 0x1310) {
      iVar5 = piVar4[iVar2 * 4 + 2];
      if (iVar5 != 0) {
        iVar2 = param_2[1];
        iVar7 = 0;
        if (iVar2 < 1) goto LAB_0126ac03;
        piVar4 = (int *)*param_2;
        goto LAB_0126abf0;
      }
      break;
    }
  }
  goto LAB_0126ac95;
  while( true ) {
    iVar7 = iVar7 + 1;
    piVar4 = piVar4 + 1;
    if (iVar2 <= iVar7) break;
LAB_0126abf0:
    if (*piVar4 == iVar5) {
      if (iVar7 != -1) goto LAB_0126ac50;
      break;
    }
  }
LAB_0126ac03:
  *(int *)(*param_2 + iVar2 * 4) = iVar5;
  param_2[1] = param_2[1] + 1;
  piVar4 = (int *)(param_3[1] * 0x30 + *param_3);
  if (piVar4 != (int *)0x0) {
    iVar5 = local_8[-9];
    iVar2 = local_8[-8];
    iVar7 = local_8[-7];
    *piVar4 = local_8[-10];
    piVar4[1] = iVar5;
    piVar4[2] = iVar2;
    piVar4[3] = iVar7;
    iVar5 = local_8[-5];
    iVar2 = local_8[-4];
    iVar7 = local_8[-3];
    piVar4[4] = local_8[-6];
    piVar4[5] = iVar5;
    piVar4[6] = iVar2;
    piVar4[7] = iVar7;
    piVar4[8] = local_8[-2];
    piVar4[9] = local_8[-1];
    piVar4[10] = *local_8;
    piVar4[0xb] = local_8[1];
  }
  param_3[1] = param_3[1] + 1;
LAB_0126ac50:
  iVar5 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar5;
  if (iVar5 != iVar8) {
    puVar6 = (undefined4 *)((int)local_8 + *(int *)(param_1 + 0x10) + (-0x28 - iVar1));
    iVar5 = (iVar5 * 0x30 + *(int *)(param_1 + 0x10)) - (int)puVar6;
    iVar2 = 6;
    do {
      *puVar6 = *(undefined4 *)(iVar5 + (int)puVar6);
      puVar6[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar6);
      puVar6 = puVar6 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_0126ac95:
  local_8 = local_8 + -0xc;
  iVar8 = iVar8 + -1;
  if (iVar8 < 0) {
    return;
  }
  goto LAB_0126ab73;
}

// 0126ACB0  hkpPhantomListener::hkpPhantomListener  size=131  [run]
undefined4 * __thiscall
hkpPhantomListener::hkpPhantomListener(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = hkpEntityListener::vftable;
  param_1[3] = vftable;
  *param_1 = hkpCharacterProxy::vftable;
  param_1[2] = hkpCharacterProxy::vftable;
  param_1[3] = hkpCharacterProxy::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  param_1[9] = 0x80000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0x80000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0x80000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0;
  param_1[0x2b] = 0x80000000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_0126a610(param_2);
  return param_1;
}

// 0126AD40  hkpAllCdPointCollector::hkpAllCdPointCollector_19  size=328  [run]
void __thiscall hkpAllCdPointCollector::hkpAllCdPointCollector_19(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined **local_200;
  undefined4 local_1fc;
  undefined1 *local_1f0;
  undefined4 local_1ec;
  uint local_1e8;
  undefined1 local_1e0 [384];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
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
  
  (**(code **)(*param_2 + 8))();
  puVar1 = *(undefined4 **)(*(int *)(param_1[0x18] + 8) + 0x70);
  local_60 = *puVar1;
  local_5c = puVar1[1];
  local_58 = puVar1[2];
  local_50 = puVar1[4];
  local_4c = puVar1[5];
  local_48 = puVar1[6];
  local_40 = puVar1[8];
  uStack_3c = puVar1[9];
  uStack_38 = puVar1[10];
  uStack_34 = puVar1[0xb];
  local_30 = puVar1[0xc];
  uStack_2c = puVar1[0xd];
  uStack_28 = puVar1[0xe];
  uStack_24 = puVar1[0xf];
  local_20 = puVar1[0x10];
  uStack_1c = puVar1[0x11];
  uStack_18 = puVar1[0x12];
  uStack_14 = puVar1[0x13];
  local_54 = (float)param_1[0x23] + (float)param_1[0x22] + (float)puVar1[3];
  (**(code **)(*(int *)param_1[0x18] + 0x44))(param_2,&local_60);
  local_1f0 = local_1e0;
  local_200 = vftable;
  local_1e8 = 0x80000008;
  local_1ec = 0;
  local_1fc = 0x7f7fffee;
  (**(code **)(*param_1 + 0xc))(param_2,&local_200,param_1 + 4,param_1 + 7,param_1 + 10,&local_200);
  local_200 = vftable;
  local_1ec = 0;
  if (-1 < (int)local_1e8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1f0,(local_1e8 & 0x3fffffff) * 0x30);
  }
  return;
}

// 0126AE90  FUN_0126ae90  size=1924  [run]
void __thiscall FUN_0126ae90(int *param_1,float *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  LPVOID pvVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_ECX;
  undefined4 uVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  undefined1 local_f0 [16];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float *local_cc;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  float *local_68;
  int local_64;
  int local_58;
  float *local_54;
  int local_50;
  uint local_4c;
  float *local_48;
  uint local_44;
  float *local_40;
  int local_3c;
  uint local_38;
  float *local_34;
  uint local_30;
  int local_2c;
  float *local_28;
  int local_24;
  uint local_20;
  float *local_1c;
  uint local_18;
  float *local_14;
  
  pvVar8 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar8 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar8 + 0xc)) {
    *puVar2 = "TtcheckSupport";
    uVar3 = rdtsc();
    local_14 = (float *)uVar3;
    puVar2[1] = local_14;
    *(undefined4 **)((int)pvVar8 + 4) = puVar2 + 3;
  }
  if ((char)param_1[0x2f] != '\0') {
    hkpAllCdPointCollector::hkpAllCdPointCollector_19(param_4);
  }
  uVar10 = param_1[0x25] + 10 + param_1[5];
  local_28 = (float *)0x0;
  local_24 = 0;
  local_20 = 0x80000000;
  local_18 = uVar10;
  if (uVar10 == 0) {
    local_1c = (float *)0x0;
  }
  else {
    pvVar8 = TlsGetValue(DAT_01f8fc4c);
    local_1c = *(float **)((int)pvVar8 + 0xc);
    uVar14 = uVar10 * 0x40 + 0x7f & 0xffffff80;
    local_14 = local_1c;
    if ((*(int *)((int)pvVar8 + 8) < (int)uVar14) ||
       (*(uint *)((int)pvVar8 + 0x10) < (int)local_1c + uVar14)) {
      local_1c = (float *)FUN_0100b780(uVar14);
    }
    else {
      *(uint *)((int)pvVar8 + 0xc) = (int)local_1c + uVar14;
    }
  }
  local_24 = param_1[5];
  local_20 = uVar10 | 0x80000000;
  local_58 = 0;
  local_28 = local_1c;
  if (0 < local_24) {
    local_14 = (float *)0x0;
    local_2c = 0;
    do {
      (**(code **)(*param_1 + 0x10))(param_1[4] + (int)local_14,local_2c + (int)local_28,0);
      FUN_0126a4e0(param_1[0x2c],param_1 + 0x1c);
      local_2c = local_2c + 0x40;
      local_14 = local_14 + 0xc;
      local_58 = local_58 + 1;
    } while (local_58 < param_1[5]);
  }
  uVar10 = local_20 & 0x3fffffff;
  if (((int)(uVar10 - local_24) < param_1[0x25]) &&
     (iVar15 = param_1[0x25] + local_24, (int)uVar10 < iVar15)) {
    if (iVar15 < (int)(uVar10 * 2)) {
      iVar15 = uVar10 * 2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_28,iVar15,0x40);
  }
  uVar10 = param_1[0x25] + local_24;
  local_54 = (float *)0x0;
  local_50 = 0;
  local_4c = 0x80000000;
  local_44 = uVar10;
  if (uVar10 == 0) {
    local_48 = (float *)0x0;
  }
  else {
    pvVar8 = TlsGetValue(DAT_01f8fc4c);
    local_48 = *(float **)((int)pvVar8 + 0xc);
    uVar14 = uVar10 * 0x10 + 0x7f & 0xffffff80;
    local_14 = local_48;
    if ((*(int *)((int)pvVar8 + 8) < (int)uVar14) ||
       (*(uint *)((int)pvVar8 + 0x10) < (int)local_48 + uVar14)) {
      local_48 = (float *)FUN_0100b780(uVar14);
    }
    else {
      *(uint *)((int)pvVar8 + 0xc) = (int)local_48 + uVar14;
    }
  }
  local_4c = uVar10 | 0x80000000;
  uVar10 = param_1[0x25] + local_24;
  local_40 = (float *)0x0;
  local_3c = 0;
  local_38 = 0x80000000;
  local_54 = local_48;
  local_30 = uVar10;
  if (uVar10 == 0) {
    local_34 = (float *)0x0;
  }
  else {
    pvVar8 = TlsGetValue(DAT_01f8fc4c);
    local_34 = *(float **)((int)pvVar8 + 0xc);
    uVar14 = uVar10 * 0x10 + 0x7f & 0xffffff80;
    local_14 = local_34;
    if ((*(int *)((int)pvVar8 + 8) < (int)uVar14) ||
       (*(uint *)((int)pvVar8 + 0x10) < (int)local_34 + uVar14)) {
      local_34 = (float *)FUN_0100b780(uVar14);
    }
    else {
      *(uint *)((int)pvVar8 + 0xc) = (int)local_34 + uVar14;
    }
  }
  local_c0 = 0.0;
  fStack_bc = 0.0;
  fStack_b8 = 0.0;
  fStack_b4 = 0.0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_a0 = *param_2;
  fStack_9c = param_2[1];
  fStack_98 = param_2[2];
  fStack_94 = param_2[3];
  local_70 = 0x3c888889;
  local_6c = 0x3c888889;
  local_80 = param_1[0x1c];
  iStack_7c = param_1[0x1d];
  iStack_78 = param_1[0x1e];
  iStack_74 = param_1[0x1f];
  local_68 = local_28;
  local_90 = param_1[0x26];
  local_38 = uVar10 | 0x80000000;
  local_cc = local_54;
  iStack_8c = local_90;
  iStack_88 = local_90;
  iStack_84 = local_90;
  local_64 = local_24;
  local_40 = local_34;
  FUN_012698a0(param_1 + 4,&local_b0);
  iVar15 = local_64;
  if ((int)(local_38 & 0x3fffffff) < local_64) {
    iVar16 = (local_38 & 0x3fffffff) * 2;
    iVar9 = local_64;
    if (local_64 < iVar16) {
      iVar9 = iVar16;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_40,iVar9,0x10);
  }
  iVar16 = local_64;
  local_3c = iVar15;
  if ((int)(local_4c & 0x3fffffff) < local_64) {
    iVar15 = (local_4c & 0x3fffffff) * 2;
    iVar9 = local_64;
    if (local_64 < iVar15) {
      iVar9 = iVar15;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_54,iVar9,0x10);
  }
  iVar15 = local_64;
  local_50 = iVar16;
  if ((int)(local_20 & 0x3fffffff) < local_64) {
    iVar16 = (local_20 & 0x3fffffff) * 2;
    iVar9 = local_64;
    if (local_64 < iVar16) {
      iVar9 = iVar16;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_28,iVar9,0x40);
  }
  iVar16 = 0;
  if (0 < local_64) {
    iVar9 = 0;
    iVar11 = 0;
    do {
      puVar1 = (undefined4 *)(iVar9 + 0x10 + (int)local_28);
      uVar12 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(iVar11 + (int)local_40);
      *puVar2 = *puVar1;
      puVar2[1] = uVar12;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      pfVar13 = (float *)(iVar9 + 0x10 + (int)local_28);
      *pfVar13 = local_c0;
      pfVar13[1] = fStack_bc;
      pfVar13[2] = fStack_b8;
      pfVar13[3] = fStack_b4;
      iVar16 = iVar16 + 1;
      iVar11 = iVar11 + 0x10;
      iVar9 = iVar9 + 0x40;
    } while (iVar16 < local_64);
  }
  local_24 = iVar15;
  FUN_014979c0(&local_b0,local_f0);
  param_3[8] = local_c0;
  param_3[9] = fStack_bc;
  param_3[10] = fStack_b8;
  param_3[0xb] = fStack_b4;
  param_3[4] = local_c0;
  param_3[5] = fStack_bc;
  param_3[6] = fStack_b8;
  param_3[7] = fStack_b4;
  auVar28._4_4_ = -(uint)(ABS(fStack_dc - param_2[1]) <= 0.001);
  auVar28._0_4_ = -(uint)(ABS(local_e0 - *param_2) <= 0.001);
  auVar28._8_4_ = -(uint)(ABS(fStack_d8 - param_2[2]) <= 0.001);
  auVar28._12_4_ = -(uint)(ABS(fStack_d4 - param_2[3]) <= 0.001);
  uVar12 = movmskps(extraout_ECX,auVar28);
  if (((byte)uVar12 & 7) != 7) {
    fVar18 = local_e0 * local_e0;
    fVar19 = fStack_dc * fStack_dc;
    fVar20 = fStack_d8 * fStack_d8;
    if (fVar19 + fVar18 + fVar20 < 0.001) {
LAB_0126b35e:
      *param_3 = 2;
    }
    else {
      auVar27._4_4_ = fVar18;
      auVar27._0_4_ = fVar18;
      auVar27._8_4_ = fVar18;
      auVar27._12_4_ = fVar18;
      fVar21 = fVar19 + fVar18 + fVar20;
      fVar23 = fVar19 + fVar18 + fVar20;
      fVar25 = fVar19 + fVar18 + fVar20;
      fVar20 = fVar19 + fVar18 + fVar20;
      auVar4._4_4_ = fVar23;
      auVar4._0_4_ = fVar21;
      auVar4._8_4_ = fVar25;
      auVar4._12_4_ = fVar20;
      auVar28 = rsqrtps(auVar27,auVar4);
      fVar18 = auVar28._0_4_;
      fVar19 = auVar28._4_4_;
      fVar22 = auVar28._8_4_;
      fVar24 = auVar28._12_4_;
      local_e0 = (float)(~-(uint)(fVar21 <= local_c0) &
                        (uint)((3.0 - fVar18 * fVar21 * fVar18) * fVar18 * 0.5)) * local_e0;
      fStack_dc = (float)(~-(uint)(fVar23 <= fStack_bc) &
                         (uint)((3.0 - fVar19 * fVar23 * fVar19) * fVar19 * 0.5)) * fStack_dc;
      fStack_d8 = (float)(~-(uint)(fVar25 <= fStack_b8) &
                         (uint)((3.0 - fVar22 * fVar25 * fVar22) * fVar22 * 0.5)) * fStack_d8;
      fStack_d4 = (float)(~-(uint)(fVar20 <= fStack_b4) &
                         (uint)((3.0 - fVar24 * fVar20 * fVar24) * fVar24 * 0.5)) * fStack_d4;
      fVar18 = fStack_d8 * param_2[2] + fStack_dc * param_2[1] + local_e0 * *param_2;
      if ((float)param_1[0x2c] * (float)param_1[0x2c] <= 1.0 - fVar18 * fVar18) goto LAB_0126b35e;
      *param_3 = 1;
    }
    local_14 = (float *)0x0;
    if (0 < local_64) {
      local_2c = (int)local_54 - (int)local_40;
      pfVar13 = local_40;
      pfVar17 = local_28;
      iVar15 = local_64;
      do {
        if (*(char *)(local_2c + (int)pfVar13) != '\0') {
          fVar18 = pfVar17[1];
          fVar19 = pfVar17[2];
          fVar20 = pfVar17[3];
          if (param_2[2] * fVar19 + param_2[1] * fVar18 + *param_2 * *pfVar17 < -0.08) {
            local_14 = (float *)((int)local_14 + 1);
            param_3[4] = (float)param_3[4] + *pfVar17;
            param_3[5] = (float)param_3[5] + fVar18;
            param_3[6] = (float)param_3[6] + fVar19;
            param_3[7] = (float)param_3[7] + fVar20;
            fVar18 = pfVar13[1];
            fVar19 = pfVar13[2];
            fVar20 = pfVar13[3];
            param_3[8] = *pfVar13 + (float)param_3[8];
            param_3[9] = fVar18 + (float)param_3[9];
            param_3[10] = fVar19 + (float)param_3[10];
            param_3[0xb] = fVar20 + (float)param_3[0xb];
          }
        }
        pfVar17 = pfVar17 + 0x10;
        pfVar13 = pfVar13 + 4;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      if (0 < (int)local_14) {
        fVar18 = (float)param_3[4];
        fVar19 = (float)param_3[5];
        fVar20 = (float)param_3[6];
        fVar21 = fVar18 * fVar18;
        fVar23 = fVar19 * fVar19;
        fVar25 = fVar20 * fVar20;
        auVar29._4_4_ = fVar21;
        auVar29._0_4_ = fVar21;
        auVar29._8_4_ = fVar21;
        auVar29._12_4_ = fVar21;
        fVar22 = fVar23 + fVar21 + fVar25;
        fVar24 = fVar23 + fVar21 + fVar25;
        fVar26 = fVar23 + fVar21 + fVar25;
        fVar25 = fVar23 + fVar21 + fVar25;
        auVar5._4_4_ = fVar24;
        auVar5._0_4_ = fVar22;
        auVar5._8_4_ = fVar26;
        auVar5._12_4_ = fVar25;
        auVar28 = rsqrtps(auVar29,auVar5);
        fVar21 = auVar28._0_4_;
        fVar23 = auVar28._4_4_;
        fVar30 = auVar28._8_4_;
        fVar31 = auVar28._12_4_;
        param_3[4] = (float)(~-(uint)(fVar22 <= local_c0) &
                            (uint)((3.0 - fVar21 * fVar22 * fVar21) * fVar21 * 0.5)) * fVar18;
        param_3[5] = (float)(~-(uint)(fVar24 <= fStack_bc) &
                            (uint)((3.0 - fVar23 * fVar24 * fVar23) * fVar23 * 0.5)) * fVar19;
        param_3[6] = (float)(~-(uint)(fVar26 <= fStack_b8) &
                            (uint)((3.0 - fVar30 * fVar26 * fVar30) * fVar30 * 0.5)) * fVar20;
        param_3[7] = (float)(~-(uint)(fVar25 <= fStack_b4) &
                            (uint)((3.0 - fVar31 * fVar25 * fVar31) * fVar31 * 0.5)) *
                     (float)param_3[7];
        fVar18 = 1.0 / (float)(int)local_14;
        param_3[8] = fVar18 * (float)param_3[8];
        param_3[9] = fVar18 * (float)param_3[9];
        param_3[10] = fVar18 * (float)param_3[10];
        param_3[0xb] = fVar18 * (float)param_3[0xb];
        goto LAB_0126b464;
      }
    }
  }
  *param_3 = 0;
LAB_0126b464:
  param_3[0xc] = 0;
  pvVar8 = TlsGetValue(DAT_01f8fc54);
  uVar10 = local_30;
  pfVar13 = local_34;
  puVar2 = *(undefined4 **)((int)pvVar8 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar8 + 0xc)) {
    *puVar2 = &DAT_0164b09c;
    uVar3 = rdtsc();
    local_14 = (float *)uVar3;
    puVar2[1] = local_14;
    *(undefined4 **)((int)pvVar8 + 4) = puVar2 + 3;
  }
  if (local_34 == local_40) {
    local_3c = 0;
  }
  pvVar8 = TlsGetValue(DAT_01f8fc4c);
  uVar10 = uVar10 * 0x10 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar8 + 8) < (int)uVar10) ||
      (uVar10 + (int)pfVar13 != *(int *)((int)pvVar8 + 0xc))) ||
     (*(float **)((int)pvVar8 + 0x14) == pfVar13)) {
    FUN_0100b9b0(pfVar13,uVar10);
  }
  else {
    *(float **)((int)pvVar8 + 0xc) = pfVar13;
  }
  local_3c = 0;
  if (-1 < (int)local_38) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_40,local_38 << 4);
  }
  uVar10 = local_44;
  pfVar13 = local_48;
  local_40 = (float *)0x0;
  local_38 = 0x80000000;
  if (local_48 == local_54) {
    local_50 = 0;
  }
  pvVar8 = TlsGetValue(DAT_01f8fc4c);
  uVar10 = uVar10 * 0x10 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar8 + 8) < (int)uVar10) ||
      (uVar10 + (int)pfVar13 != *(int *)((int)pvVar8 + 0xc))) ||
     (*(float **)((int)pvVar8 + 0x14) == pfVar13)) {
    FUN_0100b9b0(pfVar13,uVar10);
  }
  else {
    *(float **)((int)pvVar8 + 0xc) = pfVar13;
  }
  local_50 = 0;
  if (-1 < (int)local_4c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_54,local_4c << 4);
  }
  uVar10 = local_18;
  pfVar13 = local_1c;
  local_54 = (float *)0x0;
  local_4c = 0x80000000;
  if (local_1c == local_28) {
    local_24 = 0;
  }
  pvVar8 = TlsGetValue(DAT_01f8fc4c);
  uVar10 = uVar10 * 0x40 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar8 + 8) < (int)uVar10) ||
      (uVar10 + (int)pfVar13 != *(int *)((int)pvVar8 + 0xc))) ||
     (*(float **)((int)pvVar8 + 0x14) == pfVar13)) {
    FUN_0100b9b0(pfVar13,uVar10);
  }
  else {
    *(float **)((int)pvVar8 + 0xc) = pfVar13;
  }
  local_24 = 0;
  if (-1 < (int)local_20) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 << 6);
  }
  return;
}

// 0126BB60  FUN_0126bb60  size=4011  [run]
void __thiscall
FUN_0126bb60(int *param_1,int param_2,undefined4 param_3,int param_4,int *param_5,int *param_6)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  int iVar7;
  float fVar8;
  LPVOID pvVar9;
  undefined4 uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  float10 fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float local_1b0;
  undefined4 uStack_1ac;
  uint uStack_1a8;
  float fStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int local_190;
  int iStack_18c;
  int iStack_188;
  float fStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  float local_170;
  float local_16c;
  int local_168;
  int local_164;
  int local_154;
  uint local_14c;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  float local_e0;
  int local_dc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 local_a0;
  float local_9c;
  float local_90;
  int local_8c;
  int local_88;
  LPVOID local_84;
  int local_80;
  undefined4 local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  float local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  float fStack_44;
  uint local_40;
  float local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  
  local_14 = param_1;
  pvVar6 = TlsGetValue(DAT_01f8fc54);
  puVar12 = *(undefined4 **)((int)pvVar6 + 4);
  if (puVar12 < *(undefined4 **)((int)pvVar6 + 0xc)) {
    *puVar12 = "LtupdateCharacter";
    puVar12[3] = "StCast";
    uVar2 = rdtsc();
    local_18 = (int *)uVar2;
    puVar12[1] = local_18;
    *(undefined4 **)((int)pvVar6 + 4) = puVar12 + 4;
  }
  local_9c = (float)param_1[0x23] + (float)param_1[0x22];
  iVar7 = param_1[0x18];
  local_a0 = 0x3c23d70a;
  local_130 = *(undefined4 *)(iVar7 + 0xb0);
  uStack_12c = *(undefined4 *)(iVar7 + 0xb4);
  uStack_128 = *(undefined4 *)(iVar7 + 0xb8);
  uStack_124 = *(undefined4 *)(iVar7 + 0xbc);
  local_120 = *(undefined4 *)(iVar7 + 0xc0);
  uStack_11c = *(undefined4 *)(iVar7 + 0xc4);
  uStack_118 = *(undefined4 *)(iVar7 + 200);
  uStack_114 = *(undefined4 *)(iVar7 + 0xcc);
  local_110 = *(float *)(iVar7 + 0xd0);
  fStack_10c = *(float *)(iVar7 + 0xd4);
  fStack_108 = *(float *)(iVar7 + 0xd8);
  fStack_104 = *(float *)(iVar7 + 0xdc);
  local_140 = *(undefined4 *)(iVar7 + 0xa0);
  uStack_13c = *(undefined4 *)(iVar7 + 0xa4);
  uStack_138 = *(undefined4 *)(iVar7 + 0xa8);
  uStack_134 = *(undefined4 *)(iVar7 + 0xac);
  local_68 = CONCAT31(local_68._1_3_,param_4 != 0);
  local_88 = 0;
  if (param_4 != 0) {
    *(undefined4 *)(*(int *)(param_4 + 0x10) + 0x20) = 0;
    pvVar6 = TlsGetValue(DAT_01f8fc4c);
    iVar7 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(0x50);
    if (iVar7 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = FUN_01164160(*(undefined4 *)(param_1[0x18] + 0x10),&local_140,0);
    }
    *(undefined4 *)(local_88 + 0x1c) = *(undefined4 *)(param_1[0x18] + 0x2c);
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  if ((char)local_68 == '\0') {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_24,0x10,4);
  }
  else {
    local_24 = *(int *)(param_4 + 0x14);
    local_20 = 0;
    local_1c = *(uint *)(param_4 + 0xc) | 0x80000000;
  }
  local_28 = *(float *)(param_2 + 8);
  local_8c = 0;
  iVar7 = local_88;
  do {
    local_88 = iVar7;
    if ((local_28 <= 1.1920929e-07) || (local_14[0x2e] <= local_8c)) {
      local_14[0x10] = local_f0;
      local_14[0x11] = iStack_ec;
      local_14[0x12] = iStack_e8;
      local_14[0x13] = iStack_e4;
      if (local_20 < (int)(local_1c & 0x3fffffff)) {
        *(undefined4 *)(local_24 + local_20 * 4) = 0;
      }
      if ((char)local_68 == '\0') {
        FUN_011a1070(&local_110,local_9c);
        FUN_0126a9a0(local_24,0x10);
      }
      else {
        if (iVar7 != 0) {
          pvVar6 = TlsGetValue(DAT_01f8fc4c);
          (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 8))(iVar7,0x50);
        }
        *(float *)(param_4 + 0x20) = local_110;
        *(float *)(param_4 + 0x24) = fStack_10c;
        *(float *)(param_4 + 0x28) = fStack_108;
        *(float *)(param_4 + 0x2c) = fStack_104;
      }
      local_20 = 0;
      pvVar6 = TlsGetValue(DAT_01f8fc54);
      puVar12 = *(undefined4 **)((int)pvVar6 + 4);
      if (puVar12 < *(undefined4 **)((int)pvVar6 + 0xc)) {
        *puVar12 = &DAT_017e01a0;
        uVar2 = rdtsc();
        local_84 = (LPVOID)uVar2;
        puVar12[1] = local_84;
        *(undefined4 **)((int)pvVar6 + 4) = puVar12 + 3;
      }
      local_20 = 0;
      if (-1 < (int)local_1c) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,local_1c * 4);
      }
      return;
    }
    pvVar6 = TlsGetValue(DAT_01f8fc54);
    puVar12 = *(undefined4 **)((int)pvVar6 + 4);
    if (puVar12 < *(undefined4 **)((int)pvVar6 + 0xc)) {
      *puVar12 = "StInitialCast";
      uVar2 = rdtsc();
      local_bc = (undefined4)uVar2;
      puVar12[1] = local_bc;
      *(undefined4 **)((int)pvVar6 + 4) = puVar12 + 3;
    }
    local_b0 = local_110 + (float)local_14[0x14];
    fStack_ac = fStack_10c + (float)local_14[0x15];
    fStack_a8 = fStack_108 + (float)local_14[0x16];
    fStack_a4 = fStack_104 + (float)local_14[0x17];
    (**(code **)(*param_5 + 8))();
    (**(code **)(*param_6 + 8))();
    if ((char)local_68 == '\0') {
      (**(code **)(*(int *)local_14[0x18] + 0x3c))(&local_110,&local_b0,param_5,param_6);
    }
    else if (local_8c == 0) {
      FUN_012785c0(local_14,&local_b0);
    }
    else {
      hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector_3(local_88,&local_b0,param_5,param_6);
    }
    pvVar6 = TlsGetValue(DAT_01f8fc54);
    puVar12 = *(undefined4 **)((int)pvVar6 + 4);
    if (puVar12 < *(undefined4 **)((int)pvVar6 + 0xc)) {
      *puVar12 = "StTriggerVolumes";
      uVar2 = rdtsc();
      local_c0 = (undefined4)uVar2;
      puVar12[1] = local_c0;
      *(undefined4 **)((int)pvVar6 + 4) = puVar12 + 3;
    }
    uVar15 = param_6[5];
    fVar8 = 0.0;
    uStack_4c = 0;
    local_40 = uVar15;
    if (uVar15 != 0) {
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      fVar8 = *(float *)((int)pvVar6 + 0xc);
      uVar14 = uVar15 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
         (*(uint *)((int)pvVar6 + 0x10) < uVar14 + (int)fVar8)) {
        fVar8 = (float)FUN_0100b780(uVar14);
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = uVar14 + (int)fVar8;
      }
    }
    iVar7 = 0;
    uVar14 = uVar15 | 0x80000000;
    local_7c = 0;
    local_70 = uVar15;
    local_50 = fVar8;
    uStack_48 = uVar14;
    fStack_44 = fVar8;
    if (uVar15 != 0) {
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      iVar7 = *(int *)((int)pvVar6 + 0xc);
      uVar15 = uVar15 * 0x30 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar15) ||
         (*(uint *)((int)pvVar6 + 0x10) < iVar7 + uVar15)) {
        iVar7 = FUN_0100b780(uVar15);
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = iVar7 + uVar15;
      }
    }
    local_80 = iVar7;
    local_78 = uVar14;
    local_74 = iVar7;
    FUN_0126ab40(param_6,&local_50,&local_80);
    FUN_0126a350(&local_50,&local_24);
    pvVar6 = TlsGetValue(DAT_01f8fc4c);
    uVar15 = local_70 * 0x30 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar15) ||
        (local_74 + uVar15 != *(int *)((int)pvVar6 + 0xc))) ||
       (*(int *)((int)pvVar6 + 0x14) == local_74)) {
      FUN_0100b9b0(local_74,uVar15);
    }
    else {
      *(int *)((int)pvVar6 + 0xc) = local_74;
    }
    if (-1 < (int)local_78) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_80,(local_78 & 0x3fffffff) * 0x30);
    }
    pvVar6 = TlsGetValue(DAT_01f8fc4c);
    uVar15 = local_40 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar15) ||
        (uVar15 + (int)fStack_44 != *(int *)((int)pvVar6 + 0xc))) ||
       (*(float *)((int)pvVar6 + 0x14) == fStack_44)) {
      FUN_0100b9b0(fStack_44,uVar15);
    }
    else {
      *(float *)((int)pvVar6 + 0xc) = fStack_44;
    }
    if (-1 < (int)uStack_48) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,uStack_48 * 4);
    }
    uVar15 = param_5[5];
    iVar7 = 0;
    local_7c = 0;
    local_70 = uVar15;
    if (uVar15 != 0) {
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      iVar7 = *(int *)((int)pvVar6 + 0xc);
      uVar14 = uVar15 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
         (*(uint *)((int)pvVar6 + 0x10) < uVar14 + iVar7)) {
        iVar7 = FUN_0100b780(uVar14);
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = uVar14 + iVar7;
      }
    }
    fVar8 = 0.0;
    uVar14 = uVar15 | 0x80000000;
    uStack_4c = 0;
    local_80 = iVar7;
    local_78 = uVar14;
    local_74 = iVar7;
    local_40 = uVar15;
    if (uVar15 != 0) {
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      fVar8 = *(float *)((int)pvVar6 + 0xc);
      uVar15 = uVar15 * 0x30 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar15) ||
         (*(uint *)((int)pvVar6 + 0x10) < uVar15 + (int)fVar8)) {
        fVar8 = (float)FUN_0100b780(uVar15);
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = uVar15 + (int)fVar8;
      }
    }
    piVar1 = local_14;
    local_50 = fVar8;
    uStack_48 = uVar14;
    fStack_44 = fVar8;
    FUN_0126ab40(param_5,&local_80,&local_50);
    if (0 < param_5[5]) {
      FUN_0112bcf0();
      FUN_0126dec0(param_5[4],param_5[5],piVar1 + 0x14);
    }
    pvVar6 = TlsGetValue(DAT_01f8fc54);
    puVar12 = *(undefined4 **)((int)pvVar6 + 4);
    if (puVar12 < *(undefined4 **)((int)pvVar6 + 0xc)) {
      *puVar12 = "StUpdateManifold";
      uVar2 = rdtsc();
      local_b8 = (undefined4)uVar2;
      puVar12[1] = local_b8;
      *(undefined4 **)((int)pvVar6 + 4) = puVar12 + 3;
    }
    local_18 = piVar1 + 4;
    (**(code **)(*piVar1 + 0xc))(param_6,param_5,local_18,piVar1 + 7,piVar1 + 10,local_68);
    if (0 < param_5[5]) {
      FUN_01269e60(&local_80,&local_50,&local_24,*(undefined4 *)(param_5[4] + 0x1c));
    }
    pvVar6 = TlsGetValue(DAT_01f8fc4c);
    uVar15 = local_40 * 0x30 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar15) ||
        (uVar15 + (int)fStack_44 != *(int *)((int)pvVar6 + 0xc))) ||
       (*(float *)((int)pvVar6 + 0x14) == fStack_44)) {
      FUN_0100b9b0(fStack_44,uVar15);
    }
    else {
      *(float *)((int)pvVar6 + 0xc) = fStack_44;
    }
    if (-1 < (int)uStack_48) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,(uStack_48 & 0x3fffffff) * 0x30);
    }
    pvVar6 = TlsGetValue(DAT_01f8fc4c);
    uVar15 = local_70 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar15) ||
        (uVar15 + local_74 != *(int *)((int)pvVar6 + 0xc))) ||
       (*(int *)((int)pvVar6 + 0x14) == local_74)) {
      FUN_0100b9b0(local_74,uVar15);
    }
    else {
      *(int *)((int)pvVar6 + 0xc) = local_74;
    }
    if (-1 < (int)local_78) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_80,local_78 * 4);
    }
    uVar15 = piVar1[0x25] + 10 + local_18[1];
    local_64 = 0;
    local_60 = 0;
    local_5c = 0x80000000;
    local_54 = uVar15;
    if (uVar15 == 0) {
      iVar7 = 0;
    }
    else {
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      iVar7 = *(int *)((int)pvVar6 + 0xc);
      uVar14 = uVar15 * 0x40 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
         (*(uint *)((int)pvVar6 + 0x10) < uVar14 + iVar7)) {
        iVar7 = FUN_0100b780(uVar14);
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = uVar14 + iVar7;
      }
    }
    local_60 = local_18[1];
    local_5c = uVar15 | 0x80000000;
    iVar16 = 0;
    local_64 = iVar7;
    local_58 = iVar7;
    if (0 < local_60) {
      local_18 = (int *)0x0;
      local_6c = 0;
      do {
        piVar1 = local_14;
        (**(code **)(*local_14 + 0x10))
                  (local_14[4] + (int)local_18,local_6c + local_64,
                   *(float *)(param_2 + 8) - local_28);
        FUN_0126a4e0(piVar1[0x2c],piVar1 + 0x1c);
        local_6c = local_6c + 0x40;
        local_18 = local_18 + 0xc;
        iVar16 = iVar16 + 1;
      } while (iVar16 < local_14[5]);
    }
    piVar1 = local_14;
    uVar15 = local_5c & 0x3fffffff;
    if (((int)(uVar15 - local_60) < local_14[0x25]) &&
       (iVar7 = local_60 + local_14[0x25], (int)uVar15 < iVar7)) {
      iVar16 = uVar15 * 2;
      if ((int)(uVar15 * 2) <= iVar7) {
        iVar16 = iVar7;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,&local_64,iVar16,0x40);
    }
    pvVar6 = TlsGetValue(DAT_01f8fc54);
    puVar12 = *(undefined4 **)((int)pvVar6 + 4);
    if (puVar12 < *(undefined4 **)((int)pvVar6 + 0xc)) {
      *puVar12 = "StSlexMove";
      uVar2 = rdtsc();
      local_c4 = (undefined4)uVar2;
      puVar12[1] = local_c4;
      *(undefined4 **)((int)pvVar6 + 4) = puVar12 + 3;
    }
    uVar15 = piVar1[0x25] + local_60;
    local_180 = 0;
    iStack_17c = 0x3f800000;
    iStack_178 = 0;
    iStack_174 = 0;
    local_50 = 0.0;
    uStack_4c = 0;
    uStack_48 = 0;
    fStack_44 = 0.0;
    local_190 = 0x34000000;
    iStack_18c = 0x34000000;
    iStack_188 = 0x34000000;
    fStack_184 = 0.0;
    local_1b0 = 0.0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    fStack_1a4 = 0.0;
    local_6c = uVar15;
    if (uVar15 == 0) {
      local_154 = 0;
    }
    else {
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      iVar7 = *(int *)((int)pvVar6 + 0xc);
      uVar14 = uVar15 * 0x10 + 0x7f & 0xffffff80;
      uVar15 = uVar14 + iVar7;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) || (*(uint *)((int)pvVar6 + 0x10) < uVar15)) {
        local_154 = FUN_0100b780(uVar14);
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = uVar15;
        local_154 = iVar7;
      }
    }
    local_1a0 = piVar1[0x10];
    iStack_19c = piVar1[0x11];
    iStack_198 = piVar1[0x12];
    iStack_194 = piVar1[0x13];
    local_170 = local_28;
    local_14c = local_6c | 0x80000000;
    local_168 = local_64;
    local_164 = local_60;
    if ((float)piVar1[0x11] * (float)piVar1[0x11] + (float)piVar1[0x10] * (float)piVar1[0x10] +
        (float)piVar1[0x12] * (float)piVar1[0x12] == local_50) {
      local_16c = 0.0;
    }
    else {
      fVar8 = (float)piVar1[0x10] * (float)piVar1[0x10];
      fVar19 = (float)piVar1[0x11] * (float)piVar1[0x11];
      fVar20 = (float)piVar1[0x12] * (float)piVar1[0x12];
      auVar22._4_4_ = fVar8;
      auVar22._0_4_ = fVar8;
      auVar22._8_4_ = fVar8;
      auVar22._12_4_ = fVar8;
      fVar21 = fVar19 + fVar8 + fVar20;
      auVar23._4_4_ = fVar19 + fVar8 + fVar20;
      auVar23._0_4_ = fVar21;
      auVar23._8_4_ = fVar19 + fVar8 + fVar20;
      auVar23._12_4_ = fVar19 + fVar8 + fVar20;
      auVar23 = rsqrtps(auVar22,auVar23);
      fVar8 = auVar23._0_4_;
      local_16c = (float)(~-(uint)(fVar21 <= local_50) &
                         (uint)((3.0 - fVar8 * fVar21 * fVar8) * fVar8 * 0.5)) * (float)piVar1[0x22]
                  * 0.5;
    }
    local_180 = piVar1[0x1c];
    iStack_17c = piVar1[0x1d];
    iStack_178 = piVar1[0x1e];
    iStack_174 = piVar1[0x1f];
    local_190 = piVar1[0x26];
    local_1b0 = local_50;
    uStack_1ac = uStack_4c;
    uStack_1a8 = uStack_48;
    fStack_1a4 = fStack_44;
    iStack_18c = local_190;
    iStack_188 = local_190;
    fStack_184 = fStack_44;
    FUN_012698a0(piVar1 + 4,&local_1b0);
    local_dc = local_154;
    FUN_014979c0(&local_1b0,&local_100);
    pvVar6 = TlsGetValue(DAT_01f8fc54);
    puVar12 = *(undefined4 **)((int)pvVar6 + 4);
    if (puVar12 < *(undefined4 **)((int)pvVar6 + 0xc)) {
      *puVar12 = "StApplySurf";
      uVar2 = rdtsc();
      local_b4 = (undefined4)uVar2;
      puVar12[1] = local_b4;
      *(undefined4 **)((int)pvVar6 + 4) = puVar12 + 3;
    }
    FUN_01269ec0(param_2,param_3,param_4,piVar1 + 4);
    pvVar9 = TlsGetValue(DAT_01f8fc54);
    puVar12 = *(undefined4 **)((int)pvVar9 + 4);
    pvVar6 = pvVar9;
    if (puVar12 < *(undefined4 **)((int)pvVar9 + 0xc)) {
      *puVar12 = "StCastMove";
      uVar2 = rdtsc();
      pvVar6 = (LPVOID)uVar2;
      puVar12[1] = pvVar6;
      *(undefined4 **)((int)pvVar9 + 4) = puVar12 + 3;
      local_84 = pvVar6;
    }
    auVar3._4_4_ = -(uint)(ABS((float)piVar1[0x15] - fStack_fc) <= 0.001);
    auVar3._0_4_ = -(uint)(ABS((float)piVar1[0x14] - local_100) <= 0.001);
    auVar3._8_4_ = -(uint)(ABS((float)piVar1[0x16] - fStack_f8) <= 0.001);
    auVar3._12_4_ = -(uint)(ABS((float)piVar1[0x17] - fStack_f4) <= 0.001);
    uVar10 = movmskps(pvVar6,auVar3);
    local_18 = (undefined4 *)0x0;
    if (((byte)uVar10 & 7) == 7) {
LAB_0126c905:
      local_110 = local_110 + local_100;
      fStack_10c = fStack_10c + fStack_fc;
      fStack_108 = fStack_108 + fStack_f8;
      fStack_104 = fStack_104 + fStack_f4;
      local_28 = local_28 - local_e0;
    }
    else {
      local_b0 = local_110 + local_100;
      fStack_ac = fStack_10c + fStack_fc;
      fStack_a8 = fStack_108 + fStack_f8;
      fStack_a4 = fStack_104 + fStack_f4;
      (**(code **)(*param_5 + 8))();
      if ((char)local_68 == '\0') {
        (**(code **)(*(int *)piVar1[0x18] + 0x3c))(&local_110,&local_b0,param_5,0);
      }
      else {
        hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector_3(local_88,&local_b0,param_5,0);
      }
      uVar15 = param_5[5];
      if (uVar15 == 0) goto LAB_0126c905;
      uStack_4c = 0;
      local_40 = uVar15;
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      local_90 = *(float *)((int)pvVar6 + 0xc);
      uVar14 = uVar15 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
         (*(uint *)((int)pvVar6 + 0x10) < (int)local_90 + uVar14)) {
        local_90 = (float)FUN_0100b780(uVar14);
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = (int)local_90 + uVar14;
      }
      uStack_48 = uVar15 | 0x80000000;
      local_7c = 0;
      local_50 = local_90;
      local_90 = (float)uStack_48;
      local_70 = uVar15;
      fStack_44 = local_50;
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      iVar7 = *(int *)((int)pvVar6 + 0xc);
      uVar15 = uVar15 * 0x30 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar15) ||
         (*(uint *)((int)pvVar6 + 0x10) < iVar7 + uVar15)) {
        iVar7 = FUN_0100b780(uVar15);
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = iVar7 + uVar15;
      }
      local_78 = (uint)local_90;
      local_80 = iVar7;
      local_74 = iVar7;
      FUN_0126ab40(param_5,&local_50,&local_80);
      FUN_0112bcf0();
      iVar7 = param_5[5] + -1;
      if (-1 < iVar7) {
        pfVar11 = (float *)(param_5[4] + 0x1c);
        do {
          pfVar11[-4] = *pfVar11;
          *pfVar11 = -((pfVar11[-1] * fStack_f8 + pfVar11[-2] * fStack_fc + pfVar11[-3] * local_100)
                      * *pfVar11);
          pfVar11 = pfVar11 + 0xc;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
      iVar7 = param_5[5];
      while (0 < iVar7) {
        puVar12 = (undefined4 *)param_5[4];
        iVar7 = FUN_01269d80(puVar12,local_14 + 4);
        piVar1 = local_14;
        if (iVar7 == -1) {
          piVar17 = local_14 + 4;
          if (local_14[5] == (local_14[6] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar17,0x30);
          }
          puVar13 = (undefined4 *)(piVar1[5] * 0x30 + *piVar17);
          if (puVar13 != (undefined4 *)0x0) {
            uVar10 = puVar12[1];
            uVar4 = puVar12[2];
            uVar5 = puVar12[3];
            *puVar13 = *puVar12;
            puVar13[1] = uVar10;
            puVar13[2] = uVar4;
            puVar13[3] = uVar5;
            uVar10 = puVar12[5];
            uVar4 = puVar12[6];
            uVar5 = puVar12[7];
            puVar13[4] = puVar12[4];
            puVar13[5] = uVar10;
            puVar13[6] = uVar4;
            puVar13[7] = uVar5;
            puVar13[8] = puVar12[8];
            puVar13[9] = puVar12[9];
            puVar13[10] = puVar12[10];
            puVar13[0xb] = puVar12[0xb];
          }
          piVar1 = piVar1 + 5;
          *piVar1 = *piVar1 + 1;
          FUN_012698e0(puVar12);
          if (((char)local_14[0x2f] == '\0') && ((char)local_68 == '\0')) {
            FUN_0126e9b0(puVar12[10],local_14 + 7,local_14 + 10);
          }
          FUN_01269e60(&local_50,&local_80,&local_24,puVar12[7]);
          local_18 = puVar12;
          break;
        }
        param_5[5] = param_5[5] + -1;
        puVar12 = (undefined4 *)param_5[4];
        if (0 < param_5[5] * 0x30) {
          iVar7 = (param_5[5] * 0x30 - 1U >> 3) + 1;
          do {
            *puVar12 = puVar12[0xc];
            puVar12[1] = puVar12[0xd];
            puVar12 = puVar12 + 2;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        iVar7 = param_5[5];
      }
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      uVar15 = local_70 * 0x30 + 0x7f & 0xffffff80;
      if (((*(int *)((int)pvVar6 + 8) < (int)uVar15) ||
          (local_74 + uVar15 != *(int *)((int)pvVar6 + 0xc))) ||
         (*(int *)((int)pvVar6 + 0x14) == local_74)) {
        FUN_0100b9b0(local_74,uVar15);
      }
      else {
        *(int *)((int)pvVar6 + 0xc) = local_74;
      }
      if (-1 < (int)local_78) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_80,(local_78 & 0x3fffffff) * 0x30);
      }
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      uVar15 = local_40 * 4 + 0x7f & 0xffffff80;
      if (((*(int *)((int)pvVar6 + 8) < (int)uVar15) ||
          ((int)fStack_44 + uVar15 != *(int *)((int)pvVar6 + 0xc))) ||
         (*(float *)((int)pvVar6 + 0x14) == fStack_44)) {
        FUN_0100b9b0(fStack_44,uVar15);
      }
      else {
        *(float *)((int)pvVar6 + 0xc) = fStack_44;
      }
      if (-1 < (int)uStack_48) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,uStack_48 * 4);
      }
      if (local_18 == (undefined4 *)0x0) goto LAB_0126c905;
      fVar18 = (float10)FUN_0126a3e0(&local_100,local_18,&local_b0,&local_110);
      local_28 = (float)((float10)local_28 - fVar18);
    }
    local_14[0x14] = (int)local_100;
    local_14[0x15] = (int)fStack_fc;
    local_14[0x16] = (int)fStack_f8;
    local_14[0x17] = (int)fStack_f4;
    pvVar6 = TlsGetValue(DAT_01f8fc4c);
    iVar7 = local_154;
    uVar15 = local_6c * 0x10 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar15) ||
        (local_154 + uVar15 != *(int *)((int)pvVar6 + 0xc))) ||
       (*(int *)((int)pvVar6 + 0x14) == local_154)) {
      FUN_0100b9b0(local_154,uVar15);
    }
    else {
      *(int *)((int)pvVar6 + 0xc) = local_154;
    }
    if (-1 < (int)local_14c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(iVar7,local_14c << 4);
    }
    uVar15 = local_54;
    iVar7 = local_58;
    if (local_58 == local_64) {
      local_60 = 0;
    }
    pvVar6 = TlsGetValue(DAT_01f8fc4c);
    uVar15 = uVar15 * 0x40 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar15) ||
        (uVar15 + iVar7 != *(int *)((int)pvVar6 + 0xc))) || (*(int *)((int)pvVar6 + 0x14) == iVar7))
    {
      FUN_0100b9b0(iVar7,uVar15);
    }
    else {
      *(int *)((int)pvVar6 + 0xc) = iVar7;
    }
    local_60 = 0;
    if (-1 < (int)local_5c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_64,local_5c << 6);
    }
    local_8c = local_8c + 1;
    iVar7 = local_88;
  } while( true );
}

// 0126CB20  CharacterProxy::vf0C  size=2458  [run]
void __thiscall
CharacterProxy::vf0C
          (int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,char param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  LPVOID pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int local_74;
  uint local_70;
  float local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined4 *local_20;
  float local_1c;
  
  if (param_7 == '\0') {
    iVar14 = 0;
    if (0 < *(int *)(param_5 + 4)) {
      do {
        if (param_1 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_1 + 8;
        }
        FUN_01190160(iVar6);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(param_5 + 4));
    }
    iVar14 = 0;
    if (0 < *(int *)(param_6 + 4)) {
      do {
        if (param_1 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = param_1 + 0xc;
        }
        FUN_011a30c0(iVar6);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(param_6 + 4));
    }
    *(undefined4 *)(param_5 + 4) = 0;
    *(undefined4 *)(param_6 + 4) = 0;
  }
  uVar1 = *(uint *)(param_2 + 0x14);
  local_1c = 3.40282e+38;
  if (uVar1 == 0) {
    local_74 = 0;
  }
  else {
    pvVar7 = TlsGetValue(DAT_01f8fc4c);
    local_74 = *(int *)((int)pvVar7 + 0xc);
    uVar12 = uVar1 * 0x30 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar7 + 8) < (int)uVar12) ||
       (*(uint *)((int)pvVar7 + 0x10) < local_74 + uVar12)) {
      local_74 = FUN_0100b780(uVar12);
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = local_74 + uVar12;
    }
  }
  fVar17 = 3.40282e+38;
  iVar14 = 0;
  if (3 < (int)uVar1) {
    puVar9 = (undefined4 *)(local_74 + 0x50);
    iVar6 = -0x50 - local_74;
    iVar13 = (uVar1 - 4 >> 2) + 1;
    iVar14 = iVar13 * 4;
    do {
      iVar2 = *(int *)(param_2 + 0x10);
      puVar8 = (undefined4 *)((int)puVar9 + iVar2 + iVar6);
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      puVar9[-0x14] = *puVar8;
      puVar9[-0x13] = uVar3;
      puVar9[-0x12] = uVar4;
      puVar9[-0x11] = uVar5;
      puVar8 = (undefined4 *)((int)puVar9 + iVar2 + 0x10 + iVar6);
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      iVar2 = iVar2 + iVar6;
      puVar9[-0x10] = *puVar8;
      puVar9[-0xf] = uVar3;
      puVar9[-0xe] = uVar4;
      puVar9[-0xd] = uVar5;
      puVar9[-0xc] = *(undefined4 *)((int)puVar9 + iVar2 + 0x20);
      puVar9[-0xb] = *(undefined4 *)((int)puVar9 + iVar2 + 0x24);
      puVar9[-10] = *(undefined4 *)((int)puVar9 + iVar2 + 0x28);
      puVar9[-9] = *(undefined4 *)((int)puVar9 + iVar2 + 0x2c);
      if ((float)puVar9[-0xd] < fVar17) {
        fVar17 = (float)puVar9[-0xd];
      }
      iVar2 = *(int *)(param_2 + 0x10);
      puVar8 = (undefined4 *)((int)puVar9 + iVar2 + 0x30 + iVar6);
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      puVar9[-8] = *puVar8;
      puVar9[-7] = uVar3;
      puVar9[-6] = uVar4;
      puVar9[-5] = uVar5;
      puVar8 = (undefined4 *)((int)puVar9 + iVar2 + 0x40 + iVar6);
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      iVar2 = iVar2 + 0x30 + iVar6;
      puVar9[-4] = *puVar8;
      puVar9[-3] = uVar3;
      puVar9[-2] = uVar4;
      puVar9[-1] = uVar5;
      *puVar9 = *(undefined4 *)((int)puVar9 + iVar2 + 0x20);
      puVar9[1] = *(undefined4 *)((int)puVar9 + iVar2 + 0x24);
      puVar9[2] = *(undefined4 *)((int)puVar9 + iVar2 + 0x28);
      puVar9[3] = *(undefined4 *)((int)puVar9 + iVar2 + 0x2c);
      if ((float)puVar9[-1] < fVar17) {
        fVar17 = (float)puVar9[-1];
      }
      puVar8 = (undefined4 *)((int)puVar9 + (0x10 - local_74) + *(int *)(param_2 + 0x10));
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      puVar9[4] = *puVar8;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      uVar3 = puVar8[5];
      uVar4 = puVar8[6];
      uVar5 = puVar8[7];
      puVar9[8] = puVar8[4];
      puVar9[9] = uVar3;
      puVar9[10] = uVar4;
      puVar9[0xb] = uVar5;
      puVar9[0xc] = puVar8[8];
      puVar9[0xd] = puVar8[9];
      puVar9[0xe] = puVar8[10];
      puVar9[0xf] = puVar8[0xb];
      if ((float)puVar9[0xb] < fVar17) {
        fVar17 = (float)puVar9[0xb];
      }
      puVar8 = (undefined4 *)((int)puVar9 + (0x40 - local_74) + *(int *)(param_2 + 0x10));
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      puVar9[0x10] = *puVar8;
      puVar9[0x11] = uVar3;
      puVar9[0x12] = uVar4;
      puVar9[0x13] = uVar5;
      uVar3 = puVar8[5];
      uVar4 = puVar8[6];
      uVar5 = puVar8[7];
      puVar9[0x14] = puVar8[4];
      puVar9[0x15] = uVar3;
      puVar9[0x16] = uVar4;
      puVar9[0x17] = uVar5;
      puVar9[0x18] = puVar8[8];
      puVar9[0x19] = puVar8[9];
      puVar9[0x1a] = puVar8[10];
      puVar9[0x1b] = puVar8[0xb];
      if ((float)puVar9[0x17] < fVar17) {
        fVar17 = (float)puVar9[0x17];
      }
      puVar9 = puVar9 + 0x30;
      iVar13 = iVar13 + -1;
      local_1c = fVar17;
    } while (iVar13 != 0);
  }
  if (iVar14 < (int)uVar1) {
    puVar9 = (undefined4 *)(iVar14 * 0x30 + local_74 + 0x20);
    iVar14 = uVar1 - iVar14;
    do {
      iVar6 = *(int *)(param_2 + 0x10) + (-0x20 - local_74);
      puVar8 = (undefined4 *)(iVar6 + (int)puVar9);
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      puVar9[-8] = *puVar8;
      puVar9[-7] = uVar3;
      puVar9[-6] = uVar4;
      puVar9[-5] = uVar5;
      uVar3 = *(undefined4 *)((int)puVar9 + iVar6 + 0x14);
      uVar4 = *(undefined4 *)((int)puVar9 + iVar6 + 0x18);
      uVar5 = *(undefined4 *)((int)puVar9 + iVar6 + 0x1c);
      puVar9[-4] = *(undefined4 *)((int)puVar9 + iVar6 + 0x10);
      puVar9[-3] = uVar3;
      puVar9[-2] = uVar4;
      puVar9[-1] = uVar5;
      *puVar9 = *(undefined4 *)((int)puVar9 + iVar6 + 0x20);
      puVar9[1] = *(undefined4 *)((int)puVar9 + iVar6 + 0x24);
      puVar9[2] = *(undefined4 *)((int)puVar9 + iVar6 + 0x28);
      puVar9[3] = *(undefined4 *)((int)puVar9 + iVar6 + 0x2c);
      if ((float)puVar9[-1] < local_1c) {
        local_1c = (float)puVar9[-1];
      }
      puVar9 = puVar9 + 0xc;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  local_28 = param_4[1] + -1;
  local_70 = uVar1;
  if (-1 < local_28) {
    iVar14 = local_28 * 0x30;
    local_24 = uVar1 * 0x30 + local_74;
    do {
      uVar12 = 0;
      pfVar15 = (float *)(*param_4 + iVar14);
      local_20 = (undefined4 *)0xffffffff;
      local_30 = 1.1;
      if ((int)local_70 < 1) {
LAB_0126d03b:
        FUN_01269910(pfVar15);
        param_4[1] = param_4[1] + -1;
        if (param_4[1] != local_28) {
          puVar9 = (undefined4 *)(*param_4 + iVar14);
          iVar13 = 6;
          iVar6 = (param_4[1] * 0x30 + *param_4) - (int)puVar9;
          do {
            *puVar9 = *(undefined4 *)(iVar6 + (int)puVar9);
            puVar9[1] = *(undefined4 *)(iVar6 + 4 + (int)puVar9);
            puVar9 = puVar9 + 2;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
      else {
        pfVar10 = (float *)(local_74 + 0x1c);
        do {
          fVar21 = 0.0;
          fVar22 = 0.0;
          fVar18 = 0.0;
          fVar17 = pfVar10[3];
          fVar16 = fVar18;
          fVar20 = fVar22;
          fVar19 = fVar21;
          if ((*(char *)((int)fVar17 + 0x18) == '\x01') &&
             (iVar6 = (int)*(char *)((int)fVar17 + 0x10) + (int)fVar17, iVar6 != 0)) {
            fVar17 = pfVar10[-7] - *(float *)(iVar6 + 0x140);
            fVar19 = pfVar10[-6] - *(float *)(iVar6 + 0x144);
            fVar20 = pfVar10[-5] - *(float *)(iVar6 + 0x148);
            fVar16 = (*(float *)(iVar6 + 0x1c4) * fVar20 - *(float *)(iVar6 + 0x1c8) * fVar19) +
                     *(float *)(iVar6 + 0x1b0);
            fVar20 = (*(float *)(iVar6 + 0x1c8) * fVar17 - *(float *)(iVar6 + 0x1c0) * fVar20) +
                     *(float *)(iVar6 + 0x1b4);
            fVar19 = (*(float *)(iVar6 + 0x1c0) * fVar19 - *(float *)(iVar6 + 0x1c4) * fVar17) +
                     *(float *)(iVar6 + 0x1b8);
          }
          if ((*(char *)((int)pfVar15[10] + 0x18) == '\x01') &&
             (iVar6 = (int)*(char *)((int)pfVar15[10] + 0x10) + (int)pfVar15[10], iVar6 != 0)) {
            fVar17 = *pfVar15 - *(float *)(iVar6 + 0x140);
            fVar21 = pfVar15[1] - *(float *)(iVar6 + 0x144);
            fVar22 = pfVar15[2] - *(float *)(iVar6 + 0x148);
            fVar18 = (*(float *)(iVar6 + 0x1c4) * fVar22 - *(float *)(iVar6 + 0x1c8) * fVar21) +
                     *(float *)(iVar6 + 0x1b0);
            fVar22 = (*(float *)(iVar6 + 0x1c8) * fVar17 - *(float *)(iVar6 + 0x1c0) * fVar22) +
                     *(float *)(iVar6 + 0x1b4);
            fVar21 = (*(float *)(iVar6 + 0x1c0) * fVar21 - *(float *)(iVar6 + 0x1c4) * fVar17) +
                     *(float *)(iVar6 + 0x1b8);
          }
          fVar17 = ((fVar19 - fVar21) * (fVar19 - fVar21) +
                   (fVar20 - fVar22) * (fVar20 - fVar22) + (fVar16 - fVar18) * (fVar16 - fVar18)) *
                   0.1 + (1.0 - (pfVar10[-2] * pfVar15[5] + pfVar10[-3] * pfVar15[4] +
                                pfVar10[-1] * pfVar15[6])) *
                         *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90) * 10.0 +
                   (*pfVar10 - pfVar15[7]) * (*pfVar10 - pfVar15[7]);
          if (fVar17 < local_30) {
            local_30 = fVar17;
            local_20 = (undefined4 *)uVar12;
          }
          uVar12 = uVar12 + 1;
          pfVar10 = pfVar10 + 0xc;
        } while ((int)uVar12 < (int)local_70);
        if ((int)local_20 < 0) goto LAB_0126d03b;
        pfVar10 = (float *)((int)local_20 * 0x30 + local_74);
        if (pfVar10[10] != pfVar15[10]) {
          FUN_01269910(pfVar15);
          FUN_012698e0(pfVar10);
        }
        fVar17 = pfVar10[1];
        fVar16 = pfVar10[2];
        fVar20 = pfVar10[3];
        local_24 = local_24 + -0x30;
        *pfVar15 = *pfVar10;
        pfVar15[1] = fVar17;
        pfVar15[2] = fVar16;
        pfVar15[3] = fVar20;
        fVar17 = pfVar10[5];
        fVar16 = pfVar10[6];
        fVar20 = pfVar10[7];
        pfVar15[4] = pfVar10[4];
        pfVar15[5] = fVar17;
        pfVar15[6] = fVar16;
        pfVar15[7] = fVar20;
        pfVar15[8] = pfVar10[8];
        pfVar15[9] = pfVar10[9];
        pfVar15[10] = pfVar10[10];
        pfVar15[0xb] = pfVar10[0xb];
        local_70 = local_70 - 1;
        if ((undefined4 *)local_70 != local_20) {
          iVar6 = local_24 - (int)pfVar10;
          iVar13 = 6;
          do {
            *pfVar10 = *(float *)(iVar6 + (int)pfVar10);
            pfVar10[1] = *(float *)(iVar6 + 4 + (int)pfVar10);
            pfVar10 = pfVar10 + 2;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
      }
      local_28 = local_28 + -1;
      iVar14 = iVar14 + -0x30;
    } while (-1 < local_28);
  }
  if (0 < (int)local_70) {
    local_20 = (undefined4 *)(local_74 + 0x10);
    local_2c = local_70;
    do {
      if ((float)local_20[3] == local_1c) {
        puVar9 = local_20 + -4;
        iVar14 = FUN_01269d80(puVar9,param_4);
        if (iVar14 < 0) {
          if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_4,0x30);
          }
          puVar8 = (undefined4 *)(param_4[1] * 0x30 + *param_4);
          if (puVar8 != (undefined4 *)0x0) {
            uVar3 = local_20[-3];
            uVar4 = local_20[-2];
            uVar5 = local_20[-1];
            *puVar8 = *puVar9;
            puVar8[1] = uVar3;
            puVar8[2] = uVar4;
            puVar8[3] = uVar5;
            uVar3 = local_20[1];
            uVar4 = local_20[2];
            uVar5 = local_20[3];
            puVar8[4] = *local_20;
            puVar8[5] = uVar3;
            puVar8[6] = uVar4;
            puVar8[7] = uVar5;
            puVar8[8] = local_20[4];
            puVar8[9] = local_20[5];
            puVar8[10] = local_20[6];
            puVar8[0xb] = local_20[7];
          }
          param_4[1] = param_4[1] + 1;
          FUN_012698e0(puVar9);
        }
        else {
          puVar9 = (undefined4 *)(iVar14 * 0x30 + *param_4);
          if (local_20[6] != puVar9[10]) {
            FUN_01269910(puVar9);
            FUN_012698e0(local_20 + -4);
          }
          uVar3 = local_20[-3];
          uVar4 = local_20[-2];
          uVar5 = local_20[-1];
          *puVar9 = local_20[-4];
          puVar9[1] = uVar3;
          puVar9[2] = uVar4;
          puVar9[3] = uVar5;
          uVar3 = local_20[1];
          uVar4 = local_20[2];
          uVar5 = local_20[3];
          puVar9[4] = *local_20;
          puVar9[5] = uVar3;
          puVar9[6] = uVar4;
          puVar9[7] = uVar5;
          puVar9[8] = local_20[4];
          puVar9[9] = local_20[5];
          puVar9[10] = local_20[6];
          puVar9[0xb] = local_20[7];
        }
      }
      local_20 = local_20 + 0xc;
      local_2c = local_2c - 1;
    } while (local_2c != 0);
  }
  if (0 < *(int *)(param_3 + 0x14)) {
    puVar9 = *(undefined4 **)(param_3 + 0x10);
    iVar14 = FUN_01269d80(puVar9,param_4);
    if (iVar14 == -1) {
      if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_4,0x30);
      }
      puVar8 = (undefined4 *)(param_4[1] * 0x30 + *param_4);
      if (puVar8 != (undefined4 *)0x0) {
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        *puVar8 = *puVar9;
        puVar8[1] = uVar3;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        uVar3 = puVar9[5];
        uVar4 = puVar9[6];
        uVar5 = puVar9[7];
        puVar8[4] = puVar9[4];
        puVar8[5] = uVar3;
        puVar8[6] = uVar4;
        puVar8[7] = uVar5;
        puVar8[8] = puVar9[8];
        puVar8[9] = puVar9[9];
        puVar8[10] = puVar9[10];
        puVar8[0xb] = puVar9[0xb];
      }
      param_4[1] = param_4[1] + 1;
      FUN_012698e0(puVar9);
    }
  }
  iVar14 = param_4[1] + -1;
  if (0 < iVar14) {
    local_20 = (undefined4 *)(iVar14 * 0x30);
    do {
      iVar6 = iVar14 + -1;
      if (0 < iVar14) {
        iVar13 = *param_4;
        iVar2 = *(int *)(iVar13 + 0x28 + (int)local_20);
        pfVar10 = (float *)(iVar13 + 0x10 + (int)local_20);
        pfVar15 = (float *)(iVar13 + (int)local_20);
        pfVar11 = (float *)(iVar13 + -0x30 + (int)local_20);
        local_30 = (float)iVar6;
        do {
          fVar22 = 0.0;
          fVar18 = 0.0;
          fVar19 = 0.0;
          fVar17 = fVar19;
          fVar16 = fVar18;
          fVar20 = fVar22;
          if ((*(char *)(iVar2 + 0x18) == '\x01') &&
             (iVar13 = *(char *)(iVar2 + 0x10) + iVar2, iVar13 != 0)) {
            fVar20 = *pfVar15 - *(float *)(iVar13 + 0x140);
            fVar21 = pfVar15[1] - *(float *)(iVar13 + 0x144);
            fVar16 = pfVar15[2] - *(float *)(iVar13 + 0x148);
            fVar17 = (fVar16 * *(float *)(iVar13 + 0x1c4) - fVar21 * *(float *)(iVar13 + 0x1c8)) +
                     *(float *)(iVar13 + 0x1b0);
            fVar16 = (fVar20 * *(float *)(iVar13 + 0x1c8) - fVar16 * *(float *)(iVar13 + 0x1c0)) +
                     *(float *)(iVar13 + 0x1b4);
            fVar20 = (fVar21 * *(float *)(iVar13 + 0x1c0) - fVar20 * *(float *)(iVar13 + 0x1c4)) +
                     *(float *)(iVar13 + 0x1b8);
          }
          fVar21 = pfVar11[10];
          if ((*(char *)((int)fVar21 + 0x18) == '\x01') &&
             (iVar13 = (int)*(char *)((int)fVar21 + 0x10) + (int)fVar21, iVar13 != 0)) {
            fVar22 = *pfVar11 - *(float *)(iVar13 + 0x140);
            fVar21 = pfVar11[1] - *(float *)(iVar13 + 0x144);
            fVar18 = pfVar11[2] - *(float *)(iVar13 + 0x148);
            fVar19 = (fVar18 * *(float *)(iVar13 + 0x1c4) - fVar21 * *(float *)(iVar13 + 0x1c8)) +
                     *(float *)(iVar13 + 0x1b0);
            fVar18 = (fVar22 * *(float *)(iVar13 + 0x1c8) - fVar18 * *(float *)(iVar13 + 0x1c0)) +
                     *(float *)(iVar13 + 0x1b4);
            fVar22 = (fVar21 * *(float *)(iVar13 + 0x1c0) - fVar22 * *(float *)(iVar13 + 0x1c4)) +
                     *(float *)(iVar13 + 0x1b8);
          }
          if (((fVar20 - fVar22) * (fVar20 - fVar22) +
              (fVar16 - fVar18) * (fVar16 - fVar18) + (fVar17 - fVar19) * (fVar17 - fVar19)) * 0.1 +
              (1.0 - (pfVar11[5] * pfVar10[1] + pfVar11[4] * *pfVar10 + pfVar11[6] * pfVar10[2])) *
              *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90) * 10.0 +
              (pfVar15[7] - pfVar11[7]) * (pfVar15[7] - pfVar11[7]) < 0.1) {
            FUN_01269910(pfVar15);
            param_4[1] = param_4[1] + -1;
            if (param_4[1] != iVar14) {
              puVar9 = (undefined4 *)(*param_4 + (int)local_20);
              iVar13 = 6;
              iVar14 = (param_4[1] * 0x30 + *param_4) - (int)puVar9;
              do {
                *puVar9 = *(undefined4 *)(iVar14 + (int)puVar9);
                puVar9[1] = *(undefined4 *)(iVar14 + 4 + (int)puVar9);
                puVar9 = puVar9 + 2;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            break;
          }
          local_30 = (float)((int)local_30 + -1);
          pfVar11 = pfVar11 + -0xc;
        } while (-1 < (int)local_30);
      }
      local_20 = (undefined4 *)((int)local_20 + -0x30);
      iVar14 = iVar6;
    } while (0 < iVar6);
  }
  if ((param_7 == '\0') && (iVar14 = 0, 0 < param_4[1])) {
    iVar6 = 0;
    do {
      FUN_0126e9b0(*(undefined4 *)(*param_4 + 0x28 + iVar6),param_5,param_6);
      iVar14 = iVar14 + 1;
      iVar6 = iVar6 + 0x30;
    } while (iVar14 < param_4[1]);
  }
  pvVar7 = TlsGetValue(DAT_01f8fc4c);
  uVar12 = uVar1 * 0x30 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar7 + 8) < (int)uVar12) ||
      (uVar12 + local_74 != *(int *)((int)pvVar7 + 0xc))) ||
     (*(int *)((int)pvVar7 + 0x14) == local_74)) {
    FUN_0100b9b0(local_74,uVar12);
  }
  else {
    *(int *)((int)pvVar7 + 0xc) = local_74;
  }
  if (-1 < (int)(uVar1 | 0x80000000)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_74,(uVar1 & 0x3fffffff) * 0x30);
  }
  return;
}

// 0126D5F0  FUN_0126d5f0  size=30  [run]
void FUN_0126d5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0126bb60(param_1,param_2,0,param_3,param_4);
  return;
}

// 0126D6F0  FUN_0126d6f0  size=35  [run]
bool __thiscall FUN_0126d6f0(float *param_1,float *param_2,float *param_3)

{
  return ABS(*param_1 - *param_2) < *param_3;
}

// 0126D740  FUN_0126d740  size=19  [run]
void __thiscall FUN_0126d740(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  return;
}

// 0126D760  FUN_0126d760  size=21  [run]
void __thiscall FUN_0126d760(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  return;
}

// 0126D790  FUN_0126d790  size=17  [run]
void __fastcall FUN_0126d790(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0126d79f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xe0) + 0x28))();
  return;
}

// 0126D7B0  FUN_0126d7b0  size=102  [run]
void FUN_0126d7b0(float *param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  fVar2 = param_1[10];
  if ((*(char *)((int)fVar2 + 0x18) == '\x01') &&
     (iVar1 = (int)*(char *)((int)fVar2 + 0x10) + (int)fVar2, iVar1 != 0)) {
    fVar2 = *param_1 - *(float *)(iVar1 + 0x140);
    fVar3 = param_1[1] - *(float *)(iVar1 + 0x144);
    fVar4 = param_1[2] - *(float *)(iVar1 + 0x148);
    fVar5 = param_1[3] - *(float *)(iVar1 + 0x14c);
    fVar6 = *(float *)(iVar1 + 0x1c4) * fVar4 - *(float *)(iVar1 + 0x1c8) * fVar3;
    fVar7 = *(float *)(iVar1 + 0x1c8) * fVar2 - *(float *)(iVar1 + 0x1c0) * fVar4;
    fVar8 = *(float *)(iVar1 + 0x1c0) * fVar3 - *(float *)(iVar1 + 0x1c4) * fVar2;
    fVar5 = *(float *)(iVar1 + 0x1cc) * fVar5 - *(float *)(iVar1 + 0x1cc) * fVar5;
    *param_2 = fVar6;
    param_2[1] = fVar7;
    param_2[2] = fVar8;
    param_2[3] = fVar5;
    fVar2 = *(float *)(iVar1 + 0x1b4);
    fVar3 = *(float *)(iVar1 + 0x1b8);
    fVar4 = *(float *)(iVar1 + 0x1bc);
    *param_2 = *(float *)(iVar1 + 0x1b0) + fVar6;
    param_2[1] = fVar2 + fVar7;
    param_2[2] = fVar3 + fVar8;
    param_2[3] = fVar4 + fVar5;
  }
  return;
}

// 0126D850  FUN_0126d850  size=32  [run]
void FUN_0126d850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector_3(param_3,param_2,param_4,param_5);
  return;
}

// 0126D870  FUN_0126d870  size=31  [run]
void FUN_0126d870(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  (**(code **)(*param_1 + 0x3c))(param_5,param_2,param_3,param_4);
  return;
}

// 0126D8A0  FUN_0126d8a0  size=56  [run]
void __thiscall FUN_0126d8a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  return;
}

// 0126D910  FUN_0126d910  size=20  [run]
void __thiscall FUN_0126d910(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0126D930  FUN_0126d930  size=20  [run]
void __thiscall FUN_0126d930(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0126D950  FUN_0126d950  size=20  [run]
void __thiscall FUN_0126d950(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0126D970  FUN_0126d970  size=20  [run]
void __thiscall FUN_0126d970(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0126D9E0  FUN_0126d9e0  size=15  [run]
int __thiscall FUN_0126d9e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0126DA10  FUN_0126da10  size=52  [run]
int __thiscall FUN_0126da10(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 4);
    do {
      if (*piVar1 == *param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 1;
    } while (param_3 < param_4);
  }
  return -1;
}

// 0126DA50  FUN_0126da50  size=52  [run]
undefined4 __thiscall FUN_0126da50(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0126DAB0  FUN_0126dab0  size=44  [run]
void __thiscall FUN_0126dab0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 0126DB10  FUN_0126db10  size=15  [run]
int __thiscall FUN_0126db10(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0126DB20  FUN_0126db20  size=15  [run]
int __thiscall FUN_0126db20(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0126DB40  FUN_0126db40  size=52  [run]
int __thiscall FUN_0126db40(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 4);
    do {
      if (*piVar1 == *param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 1;
    } while (param_3 < param_4);
  }
  return -1;
}

// 0126DBB0  FUN_0126dbb0  size=15  [run]
int __thiscall FUN_0126dbb0(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 0126DBE0  FUN_0126dbe0  size=52  [run]
undefined4 __thiscall FUN_0126dbe0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x40);
    return uVar3;
  }
  return 0;
}

// 0126DC60  FUN_0126dc60  size=15  [run]
int __thiscall FUN_0126dc60(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 0126DC80  FUN_0126dc80  size=47  [run]
void FUN_0126dc80(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    iVar1 = (param_3 - 1U >> 3) + 1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1[1] = *(undefined4 *)(param_2 + 4 + (int)param_1);
      param_1 = param_1 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 0126DCD0  FUN_0126dcd0  size=34  [run]
void FUN_0126dcd0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0126DD20  FUN_0126dd20  size=34  [run]
void FUN_0126dd20(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0126DD90  FUN_0126dd90  size=11  [run]
int FUN_0126dd90(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0126DDA0  FUN_0126dda0  size=24  [run]
void __thiscall
FUN_0126dda0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0126DDC0  FUN_0126ddc0  size=26  [run]
void __thiscall FUN_0126ddc0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0126DDF0  FUN_0126ddf0  size=26  [run]
void __thiscall FUN_0126ddf0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0126DE10  FUN_0126de10  size=25  [run]
void __thiscall FUN_0126de10(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 6);
  return;
}

// 0126DE40  FUN_0126de40  size=25  [run]
void __thiscall FUN_0126de40(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 0126DE60  FUN_0126de60  size=54  [run]
void __thiscall FUN_0126de60(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *param_1 = fVar2 * param_2[4] + fVar1 * *param_2 + fVar3 * param_2[8];
  param_1[1] = fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10;
  param_1[2] = fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11;
  param_1[3] = fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12;
  return;
}

// 0126DEA0  FUN_0126dea0  size=31  [run]
void FUN_0126dea0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 0126DEC0  FUN_0126dec0  size=93  [run]
void FUN_0126dec0(int param_1,int param_2,float *param_3)

{
  float *pfVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    pfVar1 = (float *)(param_1 + 0x1c);
    do {
      pfVar1[-4] = *pfVar1;
      *pfVar1 = -((param_3[2] * pfVar1[-1] + param_3[1] * pfVar1[-2] + *param_3 * pfVar1[-3]) *
                 *pfVar1);
      pfVar1 = pfVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  return;
}

// 0126DF20  FUN_0126df20  size=27  [run]
void FUN_0126df20(int param_1,undefined4 param_2)

{
  FUN_0126dec0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),param_2);
  return;
}

// 0126DFA0  FUN_0126dfa0  size=53  [run]
undefined4 __thiscall FUN_0126dfa0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x40);
    return uVar3;
  }
  return 0;
}

// 0126E000  FUN_0126e000  size=53  [run]
undefined4 __thiscall FUN_0126e000(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0126E080  FUN_0126e080  size=71  [run]
void __thiscall FUN_0126e080(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[1] = param_1[1] + -1;
  iVar2 = (param_1[1] - param_2) * 0x30;
  puVar1 = (undefined4 *)(param_2 * 0x30 + *param_1);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 3) + 1;
    do {
      *puVar1 = puVar1[0xc];
      puVar1[1] = puVar1[0xd];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 0126E0E0  FUN_0126e0e0  size=28  [run]
void __thiscall FUN_0126e0e0(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 0126E100  FUN_0126e100  size=57  [run]
void __thiscall FUN_0126e100(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0126E140  FUN_0126e140  size=25  [run]
void __thiscall FUN_0126e140(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0126E160  FUN_0126e160  size=54  [run]
void __thiscall FUN_0126e160(int *param_1,undefined1 *param_2,undefined4 *param_3)

{
  if (param_1[1] < (int)(param_1[2] & 0x3fffffffU)) {
    *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
    param_1[1] = param_1[1] + 1;
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 0126E1A0  FUN_0126e1a0  size=28  [run]
void __thiscall FUN_0126e1a0(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 0126E1C0  FUN_0126e1c0  size=57  [run]
void __thiscall FUN_0126e1c0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0126E220  FUN_0126e220  size=13  [run]
void __thiscall FUN_0126e220(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 0126E230  FUN_0126e230  size=61  [run]
void FUN_0126e230(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x40 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 0126E270  FUN_0126e270  size=72  [run]
void FUN_0126e270(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x40 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 0126E2C0  FUN_0126e2c0  size=61  [run]
void FUN_0126e2c0(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x10 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 0126E300  FUN_0126e300  size=72  [run]
void FUN_0126e300(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x10 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 0126E350  FUN_0126e350  size=62  [run]
void FUN_0126e350(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 0126E390  FUN_0126e390  size=73  [run]
void FUN_0126e390(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 0126E3E0  FUN_0126e3e0  size=64  [run]
void FUN_0126e3e0(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x30 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 0126E420  FUN_0126e420  size=75  [run]
void FUN_0126e420(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x30 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 0126E470  FUN_0126e470  size=61  [run]
void __thiscall FUN_0126e470(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126E4B0  FUN_0126e4b0  size=24  [run]
void __thiscall
FUN_0126e4b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0126E4D0  FUN_0126e4d0  size=61  [run]
void __thiscall FUN_0126e4d0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126E510  FUN_0126e510  size=60  [run]
void __thiscall FUN_0126e510(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126E560  FUN_0126e560  size=60  [run]
void __thiscall FUN_0126e560(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126E5A0  FUN_0126e5a0  size=52  [run]
undefined4 __thiscall FUN_0126e5a0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 0126E5E0  FUN_0126e5e0  size=195  [run]
float10 __thiscall FUN_0126e5e0(int param_1,int param_2,int param_3)

{
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_1c;
  float local_14;
  
  local_1c = *(float *)(param_2 + 0x1c) - *(float *)(param_3 + 0x1c);
  local_14 = *(float *)(param_2 + 0x14) * *(float *)(param_3 + 0x14) +
             *(float *)(param_2 + 0x10) * *(float *)(param_3 + 0x10) +
             *(float *)(param_2 + 0x18) * *(float *)(param_3 + 0x18);
  FUN_0126d7b0(param_2,&local_30);
  FUN_0126d7b0(param_3,&local_40);
  return (float10)local_1c * (float10)local_1c +
         (float10)((fStack_2c - fStack_3c) * (fStack_2c - fStack_3c) +
                   (local_30 - local_40) * (local_30 - local_40) +
                  (fStack_28 - fStack_38) * (fStack_28 - fStack_38)) * (float10)0.1 +
         ((float10)1 - (float10)local_14) *
         (float10)*(float *)(param_1 + 0x90) * (float10)*(float *)(param_1 + 0x90) * (float10)10.0;
}

// 0126E6B0  FUN_0126e6b0  size=58  [run]
void __thiscall FUN_0126e6b0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0126E6F0  FUN_0126e6f0  size=58  [run]
void __thiscall FUN_0126e6f0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0126E730  FUN_0126e730  size=29  [run]
void __thiscall FUN_0126e730(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0126E750  FUN_0126e750  size=55  [run]
void __thiscall FUN_0126e750(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x40);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0126E790  FUN_0126e790  size=13  [run]
void __thiscall FUN_0126e790(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 0126E7A0  FUN_0126e7a0  size=53  [run]
int __thiscall FUN_0126e7a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x40);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x40 + *param_1;
}

// 0126E7E0  FUN_0126e7e0  size=55  [run]
void __thiscall FUN_0126e7e0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x10);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0126E820  FUN_0126e820  size=61  [run]
void __fastcall FUN_0126e820(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126E860  FUN_0126e860  size=61  [run]
void __fastcall FUN_0126e860(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126E8A0  FUN_0126e8a0  size=60  [run]
void __fastcall FUN_0126e8a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126E8E0  FUN_0126e8e0  size=60  [run]
void __fastcall FUN_0126e8e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126E920  FUN_0126e920  size=61  [run]
void __fastcall FUN_0126e920(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126E960  FUN_0126e960  size=74  [run]
void FUN_0126e960(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (0 < param_2) {
    puVar4 = (undefined4 *)(param_1 + 0x20);
    do {
      if (puVar4 != (undefined4 *)&DAT_00000020) {
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        uVar3 = param_3[3];
        puVar4[-8] = *param_3;
        puVar4[-7] = uVar1;
        puVar4[-6] = uVar2;
        puVar4[-5] = uVar3;
        uVar1 = param_3[5];
        uVar2 = param_3[6];
        uVar3 = param_3[7];
        puVar4[-4] = param_3[4];
        puVar4[-3] = uVar1;
        puVar4[-2] = uVar2;
        puVar4[-1] = uVar3;
        *puVar4 = param_3[8];
        puVar4[1] = param_3[9];
        puVar4[2] = param_3[10];
        puVar4[3] = param_3[0xb];
      }
      puVar4 = puVar4 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0126E9B0  FUN_0126e9b0  size=282  [run]
void __thiscall FUN_0126e9b0(int param_1,int param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    iVar4 = *(char *)(param_2 + 0x10) + param_2;
  }
  else {
    iVar4 = 0;
  }
  if (*(char *)(param_2 + 0x18) == '\x02') {
    param_2 = *(char *)(param_2 + 0x10) + param_2;
  }
  else {
    param_2 = 0;
  }
  if (iVar4 != 0) {
    uVar1 = param_3[1];
    iVar2 = 0;
    if (0 < (int)uVar1) {
      piVar3 = (int *)*param_3;
      do {
        if (*piVar3 == iVar4) {
          if (iVar2 != -1) goto LAB_0126ea4a;
          break;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < (int)uVar1);
    }
    if (uVar1 == (param_3[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
    }
    *(int *)(*param_3 + param_3[1] * 4) = iVar4;
    param_3[1] = param_3[1] + 1;
    if (param_1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1 + 8;
    }
    FUN_01190090(iVar4);
  }
LAB_0126ea4a:
  if (param_2 != 0) {
    uVar1 = param_4[1];
    iVar4 = 0;
    if (0 < (int)uVar1) {
      piVar3 = (int *)*param_4;
      do {
        if (*piVar3 == param_2) {
          if (iVar4 != -1) {
            return;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < (int)uVar1);
    }
    if (uVar1 == (param_4[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_4,4);
    }
    *(int *)(*param_4 + param_4[1] * 4) = param_2;
    param_4[1] = param_4[1] + 1;
    if (param_1 != 0) {
      FUN_011a31a0(param_1 + 0xc);
      return;
    }
    FUN_011a31a0(0);
  }
  return;
}

// 0126EAD0  FUN_0126ead0  size=56  [run]
void __thiscall FUN_0126ead0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x40);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0126EB10  FUN_0126eb10  size=48  [run]
int __fastcall FUN_0126eb10(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x40);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x40 + *param_1;
}

// 0126EB40  FUN_0126eb40  size=56  [run]
void __thiscall FUN_0126eb40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0126EB80  FUN_0126eb80  size=96  [run]
void __thiscall FUN_0126eb80(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x30);
  }
  puVar4 = (undefined4 *)(param_1[1] * 0x30 + *param_1);
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *puVar4 = *param_3;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    uVar1 = param_3[5];
    uVar2 = param_3[6];
    uVar3 = param_3[7];
    puVar4[4] = param_3[4];
    puVar4[5] = uVar1;
    puVar4[6] = uVar2;
    puVar4[7] = uVar3;
    puVar4[8] = param_3[8];
    puVar4[9] = param_3[9];
    puVar4[10] = param_3[10];
    puVar4[0xb] = param_3[0xb];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0126EBE0  FUN_0126ebe0  size=66  [run]
void __thiscall FUN_0126ebe0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1[1] * 0x30 + *param_1);
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *puVar4 = *param_2;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    puVar4[4] = param_2[4];
    puVar4[5] = uVar1;
    puVar4[6] = uVar2;
    puVar4[7] = uVar3;
    puVar4[8] = param_2[8];
    puVar4[9] = param_2[9];
    puVar4[10] = param_2[10];
    puVar4[0xb] = param_2[0xb];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0126EC30  FUN_0126ec30  size=61  [run]
void __fastcall FUN_0126ec30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126EC70  FUN_0126ec70  size=61  [run]
void __fastcall FUN_0126ec70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126ECB0  FUN_0126ecb0  size=60  [run]
void __fastcall FUN_0126ecb0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126ECF0  FUN_0126ecf0  size=60  [run]
void __fastcall FUN_0126ecf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126ED30  FUN_0126ed30  size=61  [run]
void __fastcall FUN_0126ed30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0126ED70  hkpCharacterProxy::vf00  size=8  [run]
void hkpCharacterProxy::vf00(void)

{
  vf00();
  return;
}

// 0126ED80  hkpCharacterProxy::vf00  size=8  [run]
void hkpCharacterProxy::vf00(void)

{
  vf00();
  return;
}

// 0126ED90  FUN_0126ed90  size=38  [run]
void FUN_0126ed90(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0126EDC0  FUN_0126edc0  size=97  [run]
void __thiscall FUN_0126edc0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x30);
  }
  puVar4 = (undefined4 *)(param_1[1] * 0x30 + *param_1);
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *puVar4 = *param_2;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    puVar4[4] = param_2[4];
    puVar4[5] = uVar1;
    puVar4[6] = uVar2;
    puVar4[7] = uVar3;
    puVar4[8] = param_2[8];
    puVar4[9] = param_2[9];
    puVar4[10] = param_2[10];
    puVar4[0xb] = param_2[0xb];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0126EE30  FUN_0126ee30  size=109  [run]
int * __thiscall FUN_0126ee30(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 0x40 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 0126EEA0  FUN_0126eea0  size=141  [run]
void __fastcall FUN_0126eea0(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x40 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0126EF30  FUN_0126ef30  size=109  [run]
int * __thiscall FUN_0126ef30(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 0x10 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 0126EFA0  FUN_0126efa0  size=141  [run]
void __fastcall FUN_0126efa0(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x10 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0126F030  FUN_0126f030  size=108  [run]
int * __thiscall FUN_0126f030(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 0126F0A0  FUN_0126f0a0  size=143  [run]
void __fastcall FUN_0126f0a0(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0126F130  FUN_0126f130  size=110  [run]
int * __thiscall FUN_0126f130(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 0x30 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 0126F1A0  FUN_0126f1a0  size=147  [run]
void __fastcall FUN_0126f1a0(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0x30);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0126F240  hkpCharacterProxy::vf00  size=52  [run]
int __thiscall hkpCharacterProxy::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_160();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0126F2D0  FUN_0126f2d0  size=43  [run]
void __thiscall FUN_0126f2d0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  FUN_01006000();
  if (*(int *)(*(int *)(param_1 + 0x10) + 8) != 0) {
    FUN_011946c0(param_1 + 0xc);
  }
  return;
}

// 0126F300  FUN_0126f300  size=41  [run]
void __fastcall FUN_0126f300(int param_1)

{
  FUN_010060a0();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 8) != 0) {
    FUN_01192e80(param_1 + 0xc);
  }
  return;
}

// 0126F330  CharacterRigidBody::vf04  size=66  [run]
void __fastcall CharacterRigidBody::vf04(int param_1)

{
  FUN_01006000();
  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_1 != 8) {
      FUN_011946c0(param_1 + 4);
      return;
    }
    FUN_011946c0(0);
  }
  return;
}

// 0126F380  CharacterRigidBody::vf08  size=51  [run]
void __fastcall CharacterRigidBody::vf08(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    if (param_1 == 8) {
      param_1 = 0;
    }
    else {
      param_1 = param_1 + 4;
    }
    FUN_01192e80(param_1);
  }
  FUN_010060a0();
  return;
}

// 0126F3C0  CharacterRigidBody::vf04  size=27  [run]
void __thiscall CharacterRigidBody::vf04(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2,param_1 + -0xc);
  return;
}

// 0126F3E0  FUN_0126f3e0  size=4  [run]
undefined4 __fastcall FUN_0126f3e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// 0126F3F0  FUN_0126f3f0  size=17  [run]
void __thiscall FUN_0126f3f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  return;
}

// 0126F430  FUN_0126f430  size=9  [run]
int __fastcall FUN_0126f430(int param_1)

{
  return *(int *)(param_1 + 0x10) + 0x120;
}

// 0126F440  FUN_0126f440  size=151  [run]
void __fastcall FUN_0126f440(int param_1,undefined4 param_2,float *param_3,float param_4)

{
  int iVar1;
  int extraout_ECX;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar1 = *(int *)(param_1 + 0x10);
  local_20 = *param_3 - *(float *)(iVar1 + 0x1b0);
  fStack_1c = param_3[1] - *(float *)(iVar1 + 0x1b4);
  fStack_18 = param_3[2] - *(float *)(iVar1 + 0x1b8);
  fStack_14 = param_3[3] - *(float *)(iVar1 + 0x1bc);
  auVar3._4_4_ = -(uint)(ABS(fStack_1c) <= 0.001);
  auVar3._0_4_ = -(uint)(ABS(local_20) <= 0.001);
  auVar3._8_4_ = -(uint)(ABS(fStack_18) <= 0.001);
  auVar3._12_4_ = -(uint)(ABS(fStack_14) <= 0.001);
  uVar2 = movmskps(param_2,auVar3);
  if (((byte)uVar2 & 7) != 7) {
    param_4 = 1.0 / param_4;
    local_20 = param_4 * local_20;
    fStack_1c = param_4 * fStack_1c;
    fStack_18 = param_4 * fStack_18;
    fStack_14 = param_4 * fStack_14;
    FUN_0126f3f0(&local_20);
    iVar1 = *(int *)(extraout_ECX + 0x10);
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar1 + 0xe0) + 0x40))(param_3);
  }
  return;
}

// 0126F4E0  FUN_0126f4e0  size=83  [run]
void __thiscall FUN_0126f4e0(int param_1,float *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  auVar2._4_4_ = -(uint)(ABS(param_2[1] - *(float *)(iVar1 + 0x1c4)) <= 0.001);
  auVar2._0_4_ = -(uint)(ABS(*param_2 - *(float *)(iVar1 + 0x1c0)) <= 0.001);
  auVar2._8_4_ = -(uint)(ABS(param_2[2] - *(float *)(iVar1 + 0x1c8)) <= 0.001);
  auVar2._12_4_ = -(uint)(ABS(param_2[3] - *(float *)(iVar1 + 0x1cc)) <= 0.001);
  uVar3 = movmskps(in_EAX,auVar2);
  if (((byte)uVar3 & 7) != 7) {
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar1 + 0xe0) + 0x44))(param_2);
  }
  return;
}

// 0126F540  CharacterRigidBody::vf14  size=482  [run]
void __thiscall CharacterRigidBody::vf14(int param_1,int *param_2,char param_3,int param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  int iVar8;
  LPVOID pvVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  iVar8 = param_4;
  pvVar9 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar9 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar9 + 0xc)) {
    *puVar2 = "TtgetGround";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)((int)pvVar9 + 4) = puVar2 + 3;
  }
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  *(undefined1 (*) [16])(param_4 + 0x20) = auVar22;
  *(undefined1 (*) [16])(param_4 + 0x10) = auVar22;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(undefined1 *)(param_4 + 0x34) = 0;
  iVar3 = param_2[1];
  if (0 < iVar3) {
    iVar11 = 0;
    param_4 = iVar3;
    do {
      pfVar1 = (float *)(*param_2 + 0x30 + iVar11);
      fVar20 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar10 = (float *)(*param_2 + iVar11);
      *(float *)(iVar8 + 0x20) = *pfVar1 + *(float *)(iVar8 + 0x20);
      *(float *)(iVar8 + 0x24) = fVar20 + *(float *)(iVar8 + 0x24);
      *(float *)(iVar8 + 0x28) = fVar6 + *(float *)(iVar8 + 0x28);
      *(float *)(iVar8 + 0x2c) = fVar7 + *(float *)(iVar8 + 0x2c);
      fVar20 = pfVar10[5];
      fVar6 = pfVar10[6];
      fVar7 = pfVar10[7];
      *(float *)(iVar8 + 0x10) = pfVar10[4] + *(float *)(iVar8 + 0x10);
      *(float *)(iVar8 + 0x14) = fVar20 + *(float *)(iVar8 + 0x14);
      *(float *)(iVar8 + 0x18) = fVar6 + *(float *)(iVar8 + 0x18);
      *(float *)(iVar8 + 0x1c) = fVar7 + *(float *)(iVar8 + 0x1c);
      *(float *)(iVar8 + 0x30) = pfVar10[7] + *(float *)(iVar8 + 0x30);
      fVar20 = pfVar10[8];
      if (*(char *)((int)fVar20 + 0xe8) == '\x04') {
LAB_0126f600:
        fVar6 = *(float *)((int)fVar20 + 0x1c0);
        fVar7 = *(float *)((int)fVar20 + 0x1c4);
        fVar13 = *(float *)((int)fVar20 + 0x1c8);
        fVar15 = *(float *)((int)fVar20 + 0x1cc);
        fVar12 = *pfVar10 - *(float *)((int)fVar20 + 0x140);
        fVar14 = pfVar10[1] - *(float *)((int)fVar20 + 0x144);
        fVar16 = pfVar10[2] - *(float *)((int)fVar20 + 0x148);
        fVar18 = pfVar10[3] - *(float *)((int)fVar20 + 0x14c);
        fVar17 = *(float *)((int)fVar20 + 0x1b4);
        fVar19 = *(float *)((int)fVar20 + 0x1b8);
        fVar21 = *(float *)((int)fVar20 + 0x1bc);
        *(float *)(iVar8 + 0x20) =
             (fVar7 * fVar16 - fVar13 * fVar14) + *(float *)((int)fVar20 + 0x1b0) +
             *(float *)(iVar8 + 0x20);
        *(float *)(iVar8 + 0x24) =
             (fVar13 * fVar12 - fVar6 * fVar16) + fVar17 + *(float *)(iVar8 + 0x24);
        *(float *)(iVar8 + 0x28) =
             (fVar6 * fVar14 - fVar7 * fVar12) + fVar19 + *(float *)(iVar8 + 0x28);
        *(float *)(iVar8 + 0x2c) =
             (fVar15 * fVar18 - fVar15 * fVar18) + fVar21 + *(float *)(iVar8 + 0x2c);
      }
      else if ((*(char *)((int)fVar20 + 0xe8) != '\x05') &&
              (*(undefined1 *)(iVar8 + 0x34) = 1, param_3 != '\0')) {
        fVar20 = pfVar10[8];
        goto LAB_0126f600;
      }
      iVar11 = iVar11 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  fVar20 = *(float *)(iVar8 + 0x10);
  fVar6 = *(float *)(iVar8 + 0x14);
  fVar7 = *(float *)(iVar8 + 0x18);
  fVar13 = fVar20 * fVar20;
  fVar15 = fVar6 * fVar6;
  fVar17 = fVar7 * fVar7;
  fVar19 = fVar15 + fVar13 + fVar17;
  fVar21 = fVar15 + fVar13 + fVar17;
  fVar12 = fVar15 + fVar13 + fVar17;
  fVar17 = fVar15 + fVar13 + fVar17;
  auVar5._4_4_ = fVar21;
  auVar5._0_4_ = fVar19;
  auVar5._8_4_ = fVar12;
  auVar5._12_4_ = fVar17;
  auVar22 = rsqrtps(auVar22,auVar5);
  fVar13 = auVar22._0_4_;
  fVar15 = auVar22._4_4_;
  fVar14 = auVar22._8_4_;
  fVar16 = auVar22._12_4_;
  *(float *)(iVar8 + 0x10) =
       (float)(~-(uint)(fVar19 <= 0.0) & (uint)((3.0 - fVar13 * fVar19 * fVar13) * fVar13 * 0.5)) *
       fVar20;
  *(float *)(iVar8 + 0x14) =
       (float)(~-(uint)(fVar21 <= 0.0) & (uint)((3.0 - fVar15 * fVar21 * fVar15) * fVar15 * 0.5)) *
       fVar6;
  *(float *)(iVar8 + 0x18) =
       (float)(~-(uint)(fVar12 <= 0.0) & (uint)((3.0 - fVar14 * fVar12 * fVar14) * fVar14 * 0.5)) *
       fVar7;
  *(float *)(iVar8 + 0x1c) =
       (float)(~-(uint)(fVar17 <= 0.0) & (uint)((3.0 - fVar16 * fVar17 * fVar16) * fVar16 * 0.5)) *
       *(float *)(iVar8 + 0x1c);
  fVar20 = 1.0 / (float)iVar3;
  *(float *)(iVar8 + 0x20) = fVar20 * *(float *)(iVar8 + 0x20);
  *(float *)(iVar8 + 0x24) = fVar20 * *(float *)(iVar8 + 0x24);
  *(float *)(iVar8 + 0x28) = fVar20 * *(float *)(iVar8 + 0x28);
  *(float *)(iVar8 + 0x2c) = fVar20 * *(float *)(iVar8 + 0x2c);
  fVar20 = *(float *)(iVar8 + 0x30) * fVar20;
  *(float *)(iVar8 + 0x30) = fVar20;
  if (*(char *)(iVar8 + 0x34) == '\0') {
    fVar20 = fVar20 - *(float *)(param_1 + 0x40);
  }
  else {
    fVar20 = 0.01;
  }
  *(float *)(iVar8 + 0x30) = fVar20;
  pvVar9 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar9 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar9 + 0xc)) {
    *puVar2 = &DAT_0164b09c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)((int)pvVar9 + 4) = puVar2 + 3;
  }
  return;
}

// 0126F730  CharacterRigidBody::vf0C  size=213  [run]
void __thiscall CharacterRigidBody::vf0C(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtcheckSupport";
    uVar2 = rdtsc();
    local_8 = (undefined4)uVar2;
    puVar1[1] = local_8;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_14 = 0;
  local_10 = 0;
  local_c = -0x80000000;
  iVar4 = (**(code **)(*param_1 + 0x10))(param_2,&local_14);
  *param_3 = iVar4;
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x14))(&local_14,(uint)param_3 & 0xffffff00,param_3);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_10 = 0;
  if (-1 < local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c << 6);
  }
  return;
}

// 0126F810  hkpEntityListener::hkpEntityListener_7  size=403  [run]
undefined4 * __thiscall hkpEntityListener::hkpEntityListener_7(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_90;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_58;
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
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = vftable;
  param_1[3] = hkpWorldPostSimulationListener::vftable;
  *param_1 = hkpCharacterRigidBody::vftable;
  param_1[2] = hkpCharacterRigidBody::vftable;
  param_1[3] = hkpCharacterRigidBody::vftable;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x80000000;
  FUN_0118f7b0();
  local_90 = *(undefined4 *)(param_2 + 0x30);
  local_11c = *(undefined4 *)(param_2 + 0xc);
  local_120 = *(undefined4 *)(param_2 + 8);
  local_80 = *(undefined4 *)(param_2 + 0x34);
  local_110 = *(undefined4 *)(param_2 + 0x10);
  uStack_10c = *(undefined4 *)(param_2 + 0x14);
  uStack_108 = *(undefined4 *)(param_2 + 0x18);
  uStack_104 = *(undefined4 *)(param_2 + 0x1c);
  local_100 = *(undefined4 *)(param_2 + 0x20);
  uStack_fc = *(undefined4 *)(param_2 + 0x24);
  uStack_f8 = *(undefined4 *)(param_2 + 0x28);
  uStack_f4 = *(undefined4 *)(param_2 + 0x2c);
  local_78 = 0;
  local_74 = *(undefined4 *)(param_2 + 0x38);
  local_68 = *(undefined4 *)(param_2 + 0x3c);
  local_6c = 7;
  local_58 = 8;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x220);
  *(undefined2 *)(iVar4 + 4) = 0x220;
  uVar5 = hkpRigidBody::~hkpRigidBody(&local_120);
  param_1[4] = uVar5;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_0119f720(&local_50);
  FUN_011c84d0(0x1130,*(int *)(param_2 + 0x68),*(int *)(param_2 + 0x68) >> 0x1f);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x4c);
  param_1[8] = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = uVar5;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  uVar5 = *(undefined4 *)(param_2 + 0x50);
  FUN_01437589();
  param_1[0xd] = uVar5;
  param_1[0xf] = *(undefined4 *)(param_2 + 0x60);
  param_1[0x10] = *(undefined4 *)(param_2 + 100);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x5c);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x58);
  param_1[0x14] = local_20;
  param_1[0x15] = uStack_1c;
  param_1[0x16] = uStack_18;
  param_1[0x17] = uStack_14;
  param_1[0x18] = *(undefined4 *)(param_2 + 0x54);
  FUN_01190090(param_1 + 2);
  param_1[5] = 0;
  return param_1;
}

// 0126F9B0  hkBaseObject::hkBaseObject_174  size=162  [run]
void __fastcall hkBaseObject::hkBaseObject_174(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_c [8];
  
  puVar1 = param_1 + 2;
  *param_1 = hkpCharacterRigidBody::vftable;
  *puVar1 = hkpCharacterRigidBody::vftable;
  param_1[3] = hkpCharacterRigidBody::vftable;
  if (param_1[5] != 0) {
    FUN_010060a0();
  }
  FUN_01190160(puVar1);
  FUN_011c8420(local_c,0x1130);
  FUN_010060a0();
  param_1[0x1a] = 0;
  if (-1 < (int)param_1[0x1b]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x19],(param_1[0x1b] & 0x3fffffff) * 0x30);
  }
  param_1[0x19] = 0;
  param_1[0x1b] = 0x80000000;
  *puVar1 = hkpEntityListener::vftable;
  param_1[3] = hkpWorldPostSimulationListener::vftable;
  *param_1 = vftable;
  return;
}

// 0126FA60  CharacterRigidBody::vf10  size=2061  [run]
undefined4 CharacterRigidBody::vf10(int param_1,int *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  LPVOID pvVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 extraout_ECX;
  undefined4 uVar18;
  uint uVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  undefined1 local_110 [16];
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int local_ec;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  uint local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  char local_21;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  pvVar10 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar10 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar10 + 0xc)) {
    *puVar2 = "TtgetSupportInfo";
    uVar4 = rdtsc();
    local_18 = (uint)uVar4;
    puVar2[1] = local_18;
    *(undefined4 **)((int)pvVar10 + 4) = puVar2 + 3;
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0x80000000;
  local_28 = 0x14;
  pvVar10 = TlsGetValue(DAT_01f8fc4c);
  local_2c = *(int *)((int)pvVar10 + 0xc);
  if ((*(int *)((int)pvVar10 + 8) < 0x500) || (*(uint *)((int)pvVar10 + 0x10) < local_2c + 0x500U))
  {
    local_2c = FUN_0100b780(0x500);
  }
  else {
    *(uint *)((int)pvVar10 + 0xc) = local_2c + 0x500U;
  }
  local_30 = 0x80000014;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0x80000000;
  local_40 = 0x14;
  local_38 = local_2c;
  pvVar10 = TlsGetValue(DAT_01f8fc4c);
  local_44 = *(int *)((int)pvVar10 + 0xc);
  if ((*(int *)((int)pvVar10 + 8) < 0x500) || (*(uint *)((int)pvVar10 + 0x10) < local_44 + 0x500U))
  {
    local_44 = FUN_0100b780(0x500);
  }
  else {
    *(uint *)((int)pvVar10 + 0xc) = local_44 + 0x500U;
  }
  local_5c = 0;
  local_58 = 0;
  local_48 = 0x80000014;
  local_54 = 0x80000000;
  local_50 = local_44;
  FUN_0146d8e0(&local_5c);
  local_1c = 0;
  if (0 < local_58) {
    do {
      iVar14 = *(int *)(*(int *)(local_5c + local_1c * 8) + 8);
      local_14 = iVar14;
      if ((*(int *)(iVar14 + 8) == 0) &&
         ((puVar3 = *(ushort **)(iVar14 + 0x54), puVar3 == (ushort *)0x0 || (*puVar3 != 0x1e)))) {
        local_80 = 0.0;
        fStack_7c = 0.0;
        fStack_78 = 0.0;
        fStack_74 = 0.0;
        local_90 = 0.0;
        fStack_8c = 0.0;
        fStack_88 = 0.0;
        fStack_84 = 0.0;
        while( true ) {
          if ((puVar3 == (ushort *)0x0) || (*puVar3 < 0x1a)) goto LAB_0126fbe4;
          if (*puVar3 == 0x1d) break;
          puVar3 = *(ushort **)(puVar3 + 10);
        }
        local_90 = *(float *)(puVar3 + 0x10);
        fStack_8c = *(float *)(puVar3 + 0x12);
        fStack_88 = *(float *)(puVar3 + 0x14);
        fStack_84 = *(float *)(puVar3 + 0x16);
LAB_0126fbe4:
        local_18 = 0;
        if (*(short *)(*(int *)(iVar14 + 0x3c) + 4) != 0) {
          do {
            local_20 = *(int *)(iVar14 + 0x24) - 1;
            if (-1 < (int)local_20) {
              do {
                if (*(byte *)(*(int *)(iVar14 + 0x20) + local_20) == local_18) break;
                local_20 = local_20 - 1;
              } while (-1 < (int)local_20);
            }
            local_20 = local_20 & 0xffff;
            bVar1 = *(byte *)(*(int *)(iVar14 + 0x20) + local_20);
            if (bVar1 == 0xff) {
              iVar11 = 0;
            }
            else {
              iVar11 = *(int *)(iVar14 + 0x3c);
              iVar11 = (uint)*(ushort *)(iVar11 + 6) * 0x20 + 0x30 +
                       (uint)*(byte *)(iVar11 + 10) * (int)(short)(ushort)bVar1 + iVar11;
            }
            if ((*(byte *)(iVar11 + 0xf) & 8) == 0) {
              iVar11 = *(int *)(local_5c + local_1c * 8);
              iVar12 = *(int *)(iVar11 + 0x10);
              local_21 = iVar12 == *(int *)(local_3c + 0x10) + 0x10;
              if ((bool)local_21) {
                iVar12 = *(int *)(iVar11 + 0x14);
              }
              if ((*(char *)(iVar12 + 0x18) == '\x01') &&
                 (fVar21 = (float)(*(char *)(iVar12 + 0x10) + iVar12), fVar21 != 0.0)) {
                if (local_4c == (local_48 & 0x3fffffff)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,&local_50,0x40);
                }
                uVar13 = local_4c + 1;
                pfVar20 = (float *)(local_4c * 0x40 + local_50);
                pfVar20[8] = fVar21;
                iVar14 = (uint)*(byte *)(*(int *)(local_14 + 0x20) + local_20) * 0x20;
                pfVar15 = (float *)(iVar14 + 0x30 + *(int *)(local_14 + 0x3c));
                fVar22 = pfVar15[1];
                fVar6 = pfVar15[2];
                fVar7 = pfVar15[3];
                iVar14 = iVar14 + *(int *)(local_14 + 0x3c);
                *pfVar20 = *pfVar15;
                pfVar20[1] = fVar22;
                pfVar20[2] = fVar6;
                pfVar20[3] = fVar7;
                fVar22 = *(float *)(iVar14 + 0x44);
                fVar6 = *(float *)(iVar14 + 0x48);
                fVar7 = *(float *)(iVar14 + 0x4c);
                pfVar20[4] = *(float *)(iVar14 + 0x40);
                pfVar20[5] = fVar22;
                pfVar20[6] = fVar6;
                pfVar20[7] = fVar7;
                pfVar20[0xc] = local_90;
                pfVar20[0xd] = fStack_8c;
                pfVar20[0xe] = fStack_88;
                pfVar20[0xf] = fStack_84;
                if (local_21 == '\0') {
                  fVar22 = pfVar20[7];
                  *pfVar20 = fVar22 * pfVar20[4] + *pfVar20;
                  pfVar20[1] = fVar22 * pfVar20[5] + pfVar20[1];
                  pfVar20[2] = fVar22 * pfVar20[6] + pfVar20[2];
                  pfVar20[3] = fVar22 * pfVar20[7] + pfVar20[3];
                  pfVar20[4] = -pfVar20[4];
                  pfVar20[5] = -pfVar20[5];
                  pfVar20[6] = -pfVar20[6];
                  pfVar20[7] = pfVar20[7];
                }
                local_4c = uVar13;
                if (local_34 == (local_30 & 0x3fffffff)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,&local_38,0x40);
                }
                pfVar15 = (float *)(local_34 * 0x40 + local_38);
                local_34 = local_34 + 1;
                fVar22 = pfVar20[5];
                fVar6 = pfVar20[6];
                fVar7 = pfVar20[7];
                *pfVar15 = pfVar20[4];
                pfVar15[1] = fVar22;
                pfVar15[2] = fVar6;
                pfVar15[3] = fVar7;
                pfVar15[4] = local_80;
                pfVar15[5] = fStack_7c;
                pfVar15[6] = fStack_78;
                pfVar15[7] = fStack_74;
                pfVar15[8] = 0.0;
                pfVar15[0xb] = 0.0;
                pfVar15[9] = 0.0;
                pfVar15[10] = 0.0;
                iVar14 = local_14;
                if (*(char *)((int)fVar21 + 0xe8) == '\x04') {
                  pfVar15[0xc] = 1.4013e-45;
                }
                else if (*(char *)((int)fVar21 + 0xe8) == '\x05') {
                  pfVar15[0xc] = 2.8026e-45;
                }
                else {
                  pfVar15[0xc] = 0.0;
                }
              }
            }
            local_18 = local_18 + 1;
          } while ((int)local_18 < (int)(uint)*(ushort *)(*(int *)(iVar14 + 0x3c) + 4));
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < local_58);
  }
  uVar13 = local_34;
  local_ec = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x80000000;
  local_60 = local_34;
  if (local_34 != 0) {
    pvVar10 = TlsGetValue(DAT_01f8fc4c);
    local_ec = *(int *)((int)pvVar10 + 0xc);
    uVar19 = uVar13 * 0x10 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar10 + 8) < (int)uVar19) ||
       (*(uint *)((int)pvVar10 + 0x10) < uVar19 + local_ec)) {
      local_ec = FUN_0100b780(uVar19);
    }
    else {
      *(uint *)((int)pvVar10 + 0xc) = uVar19 + local_ec;
    }
  }
  uVar19 = local_34;
  iVar14 = local_3c;
  local_68 = uVar13 | 0x80000000;
  fStack_c4 = (-1.0 / *(float *)(param_1 + 8)) * *(float *)(local_3c + 0x3c);
  local_b0 = *(float *)(local_3c + 0x20);
  fStack_ac = *(float *)(local_3c + 0x24);
  fStack_a8 = *(float *)(local_3c + 0x28);
  fStack_a4 = *(float *)(local_3c + 0x2c);
  local_d0 = fStack_c4 * local_b0;
  fStack_cc = fStack_c4 * fStack_ac;
  fStack_c8 = fStack_c4 * fStack_a8;
  fStack_c4 = fStack_c4 * fStack_a4;
  local_a0 = *(undefined4 *)(param_1 + 8);
  local_c0 = *(undefined4 *)(local_3c + 0x38);
  local_98 = local_38;
  local_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_94 = local_34;
  uStack_bc = local_c0;
  uStack_b8 = local_c0;
  uStack_b4 = local_c0;
  local_9c = local_a0;
  local_80 = local_d0;
  fStack_7c = fStack_cc;
  fStack_78 = fStack_c8;
  fStack_74 = fStack_c4;
  local_70 = local_ec;
  local_64 = local_ec;
  if ((int)(uVar13 & 0x3fffffff) < (int)local_34) {
    uVar13 = (uVar13 & 0x3fffffff) * 2;
    uVar16 = local_34;
    if ((int)local_34 < (int)uVar13) {
      uVar16 = uVar13;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_70,uVar16,0x10);
  }
  uVar13 = local_94;
  local_6c = uVar19;
  if ((int)(local_30 & 0x3fffffff) < (int)local_94) {
    uVar19 = (local_30 & 0x3fffffff) * 2;
    uVar16 = local_94;
    if ((int)local_94 < (int)uVar19) {
      uVar16 = uVar19;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_38,uVar16,0x40);
  }
  local_34 = uVar13;
  FUN_014979c0(&local_e0,local_110);
  auVar5._4_4_ = -(uint)(ABS(fStack_fc - fStack_7c) <= 0.001);
  auVar5._0_4_ = -(uint)(ABS(local_100 - local_80) <= 0.001);
  auVar5._8_4_ = -(uint)(ABS(fStack_f8 - fStack_78) <= 0.001);
  auVar5._12_4_ = -(uint)(ABS(fStack_f4 - fStack_74) <= 0.001);
  uVar18 = movmskps(extraout_ECX,auVar5);
  if (((byte)uVar18 & 7) != 7) {
    fVar21 = fStack_f8 * fStack_f8 + fStack_fc * fStack_fc + local_100 * local_100;
    if ((fVar21 < 0.001) ||
       (fVar22 = fStack_f8 * *(float *)(iVar14 + 0x28) +
                 fStack_fc * *(float *)(iVar14 + 0x24) + local_100 * *(float *)(iVar14 + 0x20),
       local_14 = 1,
       fVar21 * *(float *)(iVar14 + 0x34) * *(float *)(iVar14 + 0x34) <= fVar21 - fVar22 * fVar22))
    {
      local_14 = 2;
    }
    iVar14 = 0;
    local_18 = 0;
    if (0 < (int)local_34) {
      local_20 = local_34;
      local_1c = 0;
      do {
        if ((*(char *)(local_1c + local_70) != '\0') &&
           (pfVar15 = (float *)(iVar14 + local_38),
           0.08 < pfVar15[2] * *(float *)(local_3c + 0x28) +
                  pfVar15[1] * *(float *)(local_3c + 0x24) + *pfVar15 * *(float *)(local_3c + 0x20))
           ) {
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_2,0x40);
          }
          iVar11 = param_2[1];
          param_2[1] = iVar11 + 1;
          puVar2 = (undefined4 *)(local_50 + iVar14);
          uVar18 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar17 = (undefined4 *)(iVar11 * 0x40 + *param_2);
          *puVar17 = *puVar2;
          puVar17[1] = uVar18;
          puVar17[2] = uVar8;
          puVar17[3] = uVar9;
          puVar2 = (undefined4 *)(local_50 + 0x10 + iVar14);
          uVar18 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar17[4] = *puVar2;
          puVar17[5] = uVar18;
          puVar17[6] = uVar8;
          puVar17[7] = uVar9;
          puVar17[8] = *(undefined4 *)(iVar14 + 0x20 + local_50);
          puVar2 = (undefined4 *)(iVar14 + 0x30 + local_50);
          uVar18 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar17[0xc] = *puVar2;
          puVar17[0xd] = uVar18;
          puVar17[0xe] = uVar8;
          puVar17[0xf] = uVar9;
          local_18 = local_18 + 1;
        }
        local_1c = local_1c + 0x10;
        iVar14 = iVar14 + 0x40;
        local_20 = local_20 - 1;
      } while (local_20 != 0);
      local_20 = 0;
      if (local_18 != 0) goto LAB_0127008d;
    }
  }
  local_14 = 0;
LAB_0127008d:
  pvVar10 = TlsGetValue(DAT_01f8fc54);
  uVar13 = local_60;
  iVar14 = local_64;
  puVar2 = *(undefined4 **)((int)pvVar10 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar10 + 0xc)) {
    *puVar2 = &DAT_0164b09c;
    uVar4 = rdtsc();
    local_20 = (uint)uVar4;
    puVar2[1] = local_20;
    *(undefined4 **)((int)pvVar10 + 4) = puVar2 + 3;
  }
  if (local_64 == local_70) {
    local_6c = 0;
  }
  pvVar10 = TlsGetValue(DAT_01f8fc4c);
  uVar13 = uVar13 * 0x10 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar10 + 8) < (int)uVar13) ||
      (uVar13 + iVar14 != *(int *)((int)pvVar10 + 0xc))) ||
     (*(int *)((int)pvVar10 + 0x14) == iVar14)) {
    FUN_0100b9b0(iVar14,uVar13);
  }
  else {
    *(int *)((int)pvVar10 + 0xc) = iVar14;
  }
  local_6c = 0;
  if ((local_68 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_70,local_68 << 4);
  }
  local_70 = 0;
  local_68 = 0x80000000;
  local_58 = 0;
  if ((local_54 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_5c,local_54 * 8);
  }
  iVar11 = local_40;
  iVar14 = local_44;
  local_5c = 0;
  local_54 = 0x80000000;
  if (local_44 == local_50) {
    local_4c = 0;
  }
  pvVar10 = TlsGetValue(DAT_01f8fc4c);
  uVar13 = iVar11 * 0x40 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar10 + 8) < (int)uVar13) ||
      (uVar13 + iVar14 != *(int *)((int)pvVar10 + 0xc))) ||
     (*(int *)((int)pvVar10 + 0x14) == iVar14)) {
    FUN_0100b9b0(iVar14,uVar13);
  }
  else {
    *(int *)((int)pvVar10 + 0xc) = iVar14;
  }
  local_4c = 0;
  if (-1 < (int)local_48) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50,local_48 << 6);
  }
  iVar11 = local_28;
  iVar14 = local_2c;
  local_50 = 0;
  local_48 = 0x80000000;
  if (local_2c == local_38) {
    local_34 = 0;
  }
  pvVar10 = TlsGetValue(DAT_01f8fc4c);
  uVar13 = iVar11 * 0x40 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar10 + 8) < (int)uVar13) ||
      (uVar13 + iVar14 != *(int *)((int)pvVar10 + 0xc))) ||
     (*(int *)((int)pvVar10 + 0x14) == iVar14)) {
    FUN_0100b9b0(iVar14,uVar13);
  }
  else {
    *(int *)((int)pvVar10 + 0xc) = iVar14;
  }
  local_34 = 0;
  if (-1 < (int)local_30) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,local_30 << 6);
  }
  return local_14;
}

// 01270270  FUN_01270270  size=16  [run]
void __thiscall FUN_01270270(int *param_1,int param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2 >> 0x1f;
  return;
}

// 01270280  FUN_01270280  size=18  [run]
int * __thiscall FUN_01270280(int *param_1,int param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2 >> 0x1f;
  return param_1;
}

// 012702A0  FUN_012702a0  size=19  [run]
void __thiscall FUN_012702a0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 8) != 0;
  return;
}

// 012702D0  FUN_012702d0  size=20  [run]
void __thiscall FUN_012702d0(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 01270350  FUN_01270350  size=15  [run]
int __thiscall FUN_01270350(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 01270360  FUN_01270360  size=15  [run]
int __thiscall FUN_01270360(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 012703C0  FUN_012703c0  size=28  [run]
void __thiscall FUN_012703c0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x30);
  return;
}

// 012703E0  FUN_012703e0  size=25  [run]
void __thiscall FUN_012703e0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 6);
  return;
}

// 01270410  FUN_01270410  size=32  [run]
void __thiscall FUN_01270410(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1[1] + -1;
  if (-1 < iVar1) {
    do {
      if (*(byte *)(*param_1 + iVar1) == param_2) {
        return;
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return;
}

// 01270430  FUN_01270430  size=32  [run]
void __thiscall FUN_01270430(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar1) {
    do {
      if (*(byte *)(*(int *)(param_1 + 0xc) + iVar1) == param_2) {
        return;
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return;
}

// 012704A0  FUN_012704a0  size=61  [run]
void FUN_012704a0(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x40 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 012704E0  FUN_012704e0  size=72  [run]
void FUN_012704e0(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x40 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 01270530  FUN_01270530  size=60  [run]
void __thiscall FUN_01270530(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01270590  FUN_01270590  size=53  [run]
int __thiscall FUN_01270590(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x40);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x40 + *param_1;
}

// 012705D0  FUN_012705d0  size=60  [run]
void __fastcall FUN_012705d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01270610  FUN_01270610  size=63  [run]
void __thiscall FUN_01270610(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01270650  FUN_01270650  size=48  [run]
int __fastcall FUN_01270650(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x40);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x40 + *param_1;
}

// 01270680  FUN_01270680  size=60  [run]
void __fastcall FUN_01270680(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012706C0  FUN_012706c0  size=63  [run]
void __fastcall FUN_012706c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01270700  FUN_01270700  size=109  [run]
int * __thiscall FUN_01270700(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 0x40 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 01270770  FUN_01270770  size=141  [run]
void __fastcall FUN_01270770(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x40 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01270800  FUN_01270800  size=63  [run]
void __fastcall FUN_01270800(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01270840  hkpCharacterRigidBody::vf00  size=8  [run]
void hkpCharacterRigidBody::vf00(void)

{
  vf00();
  return;
}

// 01270850  hkpCharacterRigidBody::vf00  size=8  [run]
void hkpCharacterRigidBody::vf00(void)

{
  vf00();
  return;
}

// 01270860  FUN_01270860  size=38  [run]
void FUN_01270860(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01270890  hkpCharacterRigidBody::vf00  size=52  [run]
int __thiscall hkpCharacterRigidBody::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_174();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01270940  hkpCharacterRigidBodyListener::vf10  size=86  [run]
void __thiscall
hkpCharacterRigidBodyListener::vf10
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  (**(code **)(*param_1 + 0x14))(param_3,param_4,param_5,param_6);
  (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4,param_5,param_6);
  (**(code **)(*param_1 + 0x1c))(param_2,param_3,param_4,param_5,param_6);
  return;
}

// 012709B0  hkpCharacterRigidBodyListener::vf1C  size=553  [run]
void hkpCharacterRigidBodyListener::vf1C
               (undefined4 param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_14;
  
  iVar5 = *(int *)(*param_3 + 0x10);
  iVar4 = *(int *)(*param_3 + 0x14);
  if (*(char *)(iVar5 + 0x18) == '\x01') {
    iVar3 = *(char *)(iVar5 + 0x10) + iVar5;
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 == *(int *)(param_2 + 0x10)) {
    if (*(char *)(iVar4 + 0x18) == '\x01') {
      local_40 = -1.0;
      fStack_3c = -1.0;
      fStack_38 = -1.0;
      fStack_34 = -1.0;
      iVar4 = *(char *)(iVar4 + 0x10) + iVar4;
    }
    else {
      local_40 = -1.0;
      fStack_3c = -1.0;
      fStack_38 = -1.0;
      fStack_34 = -1.0;
      iVar4 = 0;
    }
  }
  else {
    if (*(char *)(iVar5 + 0x18) == '\x01') {
      iVar4 = *(char *)(iVar5 + 0x10) + iVar5;
    }
    else {
      iVar4 = 0;
    }
    local_40 = 1.0;
    fStack_3c = 1.0;
    fStack_38 = 1.0;
    fStack_34 = 1.0;
  }
  cVar1 = *(char *)(iVar4 + 0xe8);
  if (((cVar1 != '\x05') && (cVar1 != '\x04')) && (cVar1 != '\a')) {
    if (0.0 < *(float *)(param_2 + 0x60)) {
      local_14 = (float)param_5[1];
      fVar7 = 0.0;
      fVar8 = 0.0;
      fVar9 = 0.0;
      fVar10 = 0.0;
      iVar5 = 0;
      local_30 = 0.0;
      fStack_2c = 0.0;
      fStack_28 = 0.0;
      fStack_24 = 0.0;
      if (0 < (int)local_14) {
        do {
          iVar4 = (**(code **)(*param_4 + 0x2c))(*(undefined2 *)(*param_5 + iVar5 * 2));
          fVar7 = *(float *)(iVar4 + 0x10) + local_30;
          fVar8 = *(float *)(iVar4 + 0x14) + fStack_2c;
          fVar9 = *(float *)(iVar4 + 0x18) + fStack_28;
          fVar10 = *(float *)(iVar4 + 0x1c) + fStack_24;
          iVar5 = iVar5 + 1;
          local_30 = fVar7;
          fStack_2c = fVar8;
          fStack_28 = fVar9;
          fStack_24 = fVar10;
        } while (iVar5 < (int)local_14);
      }
      local_30 = fVar7 * local_40;
      fStack_2c = fVar8 * fStack_3c;
      fStack_28 = fVar9 * fStack_38;
      fStack_24 = fVar10 * fStack_34;
      fVar6 = (float10)FUN_011a2a30();
      local_14 = (float)fVar6;
      fVar7 = local_30 * local_30;
      auVar11._4_4_ = fVar7;
      auVar11._0_4_ = fVar7;
      auVar11._8_4_ = fVar7;
      auVar11._12_4_ = fVar7;
      fVar7 = fStack_2c * fStack_2c + fVar7 + fStack_28 * fStack_28;
      if (fVar7 <= 0.0) {
        fVar7 = *(float *)(param_2 + 0x50) * *(float *)(param_2 + 0x50);
        fVar8 = *(float *)(param_2 + 0x54) * *(float *)(param_2 + 0x54);
        fVar9 = *(float *)(param_2 + 0x58) * *(float *)(param_2 + 0x58);
        fVar10 = fVar8 + fVar7 + fVar9;
        auVar2._4_4_ = fVar8 + fVar7 + fVar9;
        auVar2._0_4_ = fVar10;
        auVar2._8_4_ = fVar8 + fVar7 + fVar9;
        auVar2._12_4_ = fVar8 + fVar7 + fVar9;
        auVar11 = rsqrtps(auVar11,auVar2);
        fVar7 = auVar11._0_4_;
        fVar7 = (float)(~-(uint)(fVar10 <= 0.0) &
                       (uint)((3.0 - fVar7 * fVar10 * fVar7) * fVar7 * 0.5 * fVar10)) * local_14;
      }
      else {
        fVar7 = ((*(float *)(param_2 + 0x58) * fStack_28 +
                 *(float *)(param_2 + 0x54) * fStack_2c + *(float *)(param_2 + 0x50) * local_30) *
                local_14) / fVar7;
      }
      local_50 = 0x3f800000;
      uStack_4c = 0x3f800000;
      uStack_48 = 0x3f800000;
      fStack_44 = 1.0;
      if (*(float *)(param_2 + 0x60) < fVar7) {
        fStack_44 = fVar7 / *(float *)(param_2 + 0x60);
      }
      FUN_011d3630(param_4,*(int *)(param_2 + 0x10),*(undefined4 *)(*(int *)(param_2 + 0x10) + 200),
                   &local_50);
      return;
    }
    FUN_011d3630(param_4,iVar4,*(undefined4 *)(*(int *)(param_2 + 0x10) + 200),&DAT_01701b10);
  }
  return;
}

// 01270BE0  hkpCharacterRigidBodyListener::vf14  size=857  [run]
void hkpCharacterRigidBodyListener::vf14(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float *pfVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 in_XMM5 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float local_14;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int **)(*param_2 + 0x10) == (int *)(iVar1 + 0x10)) {
    local_14 = 1.0;
  }
  else {
    local_14 = -1.0;
  }
  iVar2 = *(int *)(iVar1 + 0x10);
  if (*(char *)(iVar2 + 8) == '\x04') {
    fVar6 = *(float *)(iVar2 + 0x20);
    fVar7 = *(float *)(iVar2 + 0x24);
    fVar8 = *(float *)(iVar2 + 0x28);
    fVar33 = (fVar6 + *(float *)(iVar2 + 0x30)) * 0.5;
    fVar34 = (fVar7 + *(float *)(iVar2 + 0x34)) * 0.5;
    fVar35 = (fVar8 + *(float *)(iVar2 + 0x38)) * 0.5;
    fVar17 = (fVar33 - fVar6) * (fVar33 - fVar6);
    fVar21 = (fVar34 - fVar7) * (fVar34 - fVar7);
    fVar24 = (fVar35 - fVar8) * (fVar35 - fVar8);
    fVar26 = fVar21 + fVar17 + fVar24;
    auVar37._4_4_ = fVar21 + fVar17 + fVar24;
    auVar37._0_4_ = fVar26;
    auVar37._8_4_ = fVar21 + fVar17 + fVar24;
    auVar37._12_4_ = fVar21 + fVar17 + fVar24;
    auVar37 = rsqrtps(in_XMM5,auVar37);
    fVar17 = auVar37._0_4_;
    fVar18 = (float)(~-(uint)(fVar26 <= 0.0) &
                    (uint)((3.0 - fVar17 * fVar26 * fVar17) * fVar17 * 0.5 * fVar26));
    fVar24 = *(float *)(param_1 + 0x20);
    fVar26 = *(float *)(param_1 + 0x24);
    fVar9 = *(float *)(param_1 + 0x28);
    fVar17 = *(float *)(param_1 + 0x30);
    fVar21 = *(float *)(iVar2 + 0x10);
    iVar3 = param_4[1];
    fVar38 = 1.0 / fVar18;
    iVar13 = 0;
    fVar19 = fVar38 * (fVar6 - fVar33);
    fVar22 = fVar38 * (fVar7 - fVar34);
    fVar38 = fVar38 * (fVar8 - fVar35);
    if (0 < iVar3) {
      do {
        pfVar11 = (float *)(**(code **)(*param_3 + 0x2c))(*(undefined2 *)(*param_4 + iVar13 * 2));
        if (((pfVar11 != (float *)0x0) && (-*(float *)(iVar2 + 0x10) < pfVar11[7])) &&
           (((uint)pfVar11[3] & 0xc0ffffff) != 0x8df4a7)) {
          auVar37 = *(undefined1 (*) [16])(iVar1 + 0x110);
          fVar20 = *pfVar11 - *(float *)(iVar1 + 0x120);
          fVar23 = pfVar11[1] - *(float *)(iVar1 + 0x124);
          fVar25 = pfVar11[2] - *(float *)(iVar1 + 0x128);
          fVar27 = (fVar23 * *(float *)(iVar1 + 0xf4) + fVar20 * *(float *)(iVar1 + 0xf0) +
                   *(float *)(iVar1 + 0xf8) * fVar25) - fVar33;
          fVar28 = (fVar23 * *(float *)(iVar1 + 0x104) + fVar20 * *(float *)(iVar1 + 0x100) +
                   *(float *)(iVar1 + 0x108) * fVar25) - fVar34;
          fVar20 = (fVar23 * auVar37._4_4_ + fVar20 * auVar37._0_4_ + auVar37._8_4_ * fVar25) -
                   fVar35;
          if (ABS(*(float *)(param_1 + 0x28) * fVar20 +
                  *(float *)(param_1 + 0x24) * fVar28 + *(float *)(param_1 + 0x20) * fVar27) <
              fVar17 * fVar21 +
              ABS(fVar9 * (fVar8 - fVar35) + fVar26 * (fVar7 - fVar34) + fVar24 * (fVar6 - fVar33)))
          {
            fVar20 = fVar28 * fVar22 + fVar27 * fVar19 + fVar20 * fVar38;
            if (fVar20 <= fVar18) {
              if (-fVar18 <= fVar20) {
                fVar23 = fVar20 * fVar19 + fVar33;
                fVar25 = fVar20 * fVar22 + fVar34;
                fVar20 = fVar20 * fVar38 + fVar35;
              }
              else {
                fVar23 = *(float *)(iVar2 + 0x30);
                fVar25 = *(float *)(iVar2 + 0x34);
                fVar20 = *(float *)(iVar2 + 0x38);
              }
            }
            else {
              fVar23 = *(float *)(iVar2 + 0x20);
              fVar25 = *(float *)(iVar2 + 0x24);
              fVar20 = *(float *)(iVar2 + 0x28);
            }
            auVar10._12_4_ = 0;
            auVar10._0_12_ = ZEXT812(0);
            fVar27 = (fVar23 * *(float *)(iVar1 + 0xf0) + fVar25 * *(float *)(iVar1 + 0x100) +
                      fVar20 * auVar37._0_4_ + *(float *)(iVar1 + 0x120)) - *pfVar11;
            fVar28 = (fVar23 * *(float *)(iVar1 + 0xf4) + fVar25 * *(float *)(iVar1 + 0x104) +
                      fVar20 * auVar37._4_4_ + *(float *)(iVar1 + 0x124)) - pfVar11[1];
            fVar29 = (fVar23 * *(float *)(iVar1 + 0xf8) + fVar25 * *(float *)(iVar1 + 0x108) +
                      fVar20 * auVar37._8_4_ + *(float *)(iVar1 + 0x128)) - pfVar11[2];
            fVar20 = fVar27 * fVar27;
            fVar23 = fVar28 * fVar28;
            fVar25 = fVar29 * fVar29;
            fVar30 = fVar23 + fVar20 + fVar25;
            fVar31 = fVar23 + fVar20 + fVar25;
            fVar32 = fVar23 + fVar20 + fVar25;
            fVar25 = fVar23 + fVar20 + fVar25;
            uVar14 = -(uint)(0.0 - fVar30 < 0.0);
            uVar15 = -(uint)(0.0 - fVar31 < 0.0);
            uVar16 = -(uint)(0.0 - fVar32 < 0.0);
            auVar5._4_4_ = fVar31;
            auVar5._0_4_ = fVar30;
            auVar5._8_4_ = fVar32;
            auVar5._12_4_ = fVar25;
            auVar37 = rsqrtps(auVar10,auVar5);
            fVar20 = auVar37._0_4_;
            fVar23 = auVar37._4_4_;
            fVar36 = auVar37._8_4_;
            auVar4._4_4_ = uVar15;
            auVar4._0_4_ = uVar14;
            auVar4._8_4_ = uVar16;
            auVar4._12_4_ = -(uint)(0.0 - fVar25 < 0.0);
            iVar12 = movmskps(iVar2,auVar4);
            if (iVar12 != 0) {
              pfVar11[4] = (float)((uint)((float)(~-(uint)(fVar30 <= 0.0) &
                                                 (uint)((3.0 - fVar20 * fVar30 * fVar20) *
                                                       fVar20 * 0.5)) * fVar27) & uVar14 |
                                  ~uVar14 & (uint)fVar27) * local_14;
              pfVar11[5] = (float)((uint)((float)(~-(uint)(fVar31 <= 0.0) &
                                                 (uint)((3.0 - fVar23 * fVar31 * fVar23) *
                                                       fVar23 * 0.5)) * fVar28) & uVar15 |
                                  ~uVar15 & (uint)fVar28) * local_14;
              pfVar11[6] = (float)((uint)((float)(~-(uint)(fVar32 <= 0.0) &
                                                 (uint)((3.0 - fVar36 * fVar32 * fVar36) *
                                                       fVar36 * 0.5)) * fVar29) & uVar16 |
                                  ~uVar16 & (uint)fVar29) * local_14;
              pfVar11[7] = pfVar11[7];
            }
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar3);
    }
  }
  return;
}

// 01270F40  hkpCharacterRigidBodyListener::vf18  size=636  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void hkpCharacterRigidBodyListener::vf18
               (int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  undefined2 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_30f0 [4];
  undefined4 local_30ec;
  undefined4 local_c0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int *local_40;
  uint local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  float local_18;
  int local_14;
  
  local_1c = *(int *)(*param_3 + 0x10);
  local_24 = *(undefined4 *)(*param_3 + 0x14);
  if (*(char *)(local_1c + 0x18) == '\x01') {
    iVar3 = *(char *)(local_1c + 0x10) + local_1c;
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 == *(int *)(param_2 + 0x10)) {
    local_18 = 1.0;
  }
  else {
    local_18 = -1.0;
  }
  local_20 = param_5[1];
  local_14 = 0;
  if (0 < local_20) {
    do {
      puVar1 = (undefined2 *)(*param_5 + local_14 * 2);
      iVar3 = (**(code **)(*param_4 + 0x28))(*puVar1);
      if ((*(byte *)(iVar3 + 0xf) & 8) == 0) {
        puVar4 = (undefined4 *)(**(code **)(*param_4 + 0x2c))(*puVar1);
        auVar12 = *(undefined1 (*) [16])(param_2 + 0x20);
        fVar6 = auVar12._4_4_ * (float)puVar4[5] + auVar12._0_4_ * (float)puVar4[4] +
                auVar12._8_4_ * (float)puVar4[6];
        fVar7 = fVar6 * local_18;
        if ((0.01 < fVar7) && (fVar7 < *(float *)(param_2 + 0x34))) {
          fVar6 = -fVar6;
          local_60 = *puVar4;
          uStack_5c = puVar4[1];
          uStack_58 = puVar4[2];
          local_40 = param_4;
          uStack_54 = 0x3f8df4a7;
          local_50 = (float)puVar4[4] + fVar6 * auVar12._0_4_;
          fStack_4c = (float)puVar4[5] + fVar6 * auVar12._4_4_;
          fStack_48 = (float)puVar4[6] + fVar6 * auVar12._8_4_;
          fVar6 = local_50 * local_50;
          fVar7 = fStack_4c * fStack_4c;
          fVar5 = fStack_48 * fStack_48;
          fVar8 = fVar7 + fVar6 + fVar5;
          fVar9 = fVar7 + fVar6 + fVar5;
          fVar10 = fVar7 + fVar6 + fVar5;
          auVar11._0_12_ = ZEXT812(0);
          auVar11._12_4_ = 0;
          auVar12._4_4_ = fVar9;
          auVar12._0_4_ = fVar8;
          auVar12._8_4_ = fVar10;
          auVar12._12_4_ = fVar7 + fVar6 + fVar5;
          auVar12 = rsqrtps(auVar11,auVar12);
          fVar6 = auVar12._0_4_;
          fVar7 = auVar12._4_4_;
          fVar5 = auVar12._8_4_;
          local_50 = (float)(~-(uint)(fVar8 <= 0.0) &
                            (uint)((3.0 - fVar6 * fVar8 * fVar6) * fVar6 * 0.5)) * local_50;
          fStack_4c = (float)(~-(uint)(fVar9 <= 0.0) &
                             (uint)((3.0 - fVar7 * fVar9 * fVar7) * fVar7 * 0.5)) * fStack_4c;
          fStack_48 = (float)(~-(uint)(fVar10 <= 0.0) &
                             (uint)((3.0 - fVar5 * fVar10 * fVar5) * fVar5 * 0.5)) * fStack_48;
          fStack_44 = (float)puVar4[7];
          if (0.0 <= fStack_44) {
            fStack_44 = 0.0;
          }
          local_30ec = *(undefined4 *)(*(int *)(param_2 + 0x10) + 200);
          local_c0 = 0x7f7fffee;
          local_a0 = 0;
          local_9c = 0;
          uVar2 = (**(code **)(*param_4 + 0xc))
                            (local_1c,local_24,*(undefined4 *)(param_1 + 0x70),local_30f0,0,
                             &local_60);
          local_28 = (uint)uVar2;
          if (uVar2 != 0xffff) {
            if (*(uint *)(param_2 + 0x68) == (*(uint *)(param_2 + 0x6c) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_2 + 100),0x30);
            }
            puVar4 = (undefined4 *)(*(int *)(param_2 + 0x68) * 0x30 + *(int *)(param_2 + 100));
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = local_60;
              puVar4[1] = uStack_5c;
              puVar4[2] = uStack_58;
              puVar4[3] = uStack_54;
              puVar4[4] = local_50;
              puVar4[5] = fStack_4c;
              puVar4[6] = fStack_48;
              puVar4[7] = fStack_44;
              puVar4[8] = local_40;
            }
            *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + 1;
            if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_5,2);
            }
            *(undefined2 *)(*param_5 + param_5[1] * 2) = (undefined2)local_28;
            param_5[1] = param_5[1] + 1;
          }
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < local_20);
  }
  return;
}

// 012711C0  FUN_012711c0  size=512  [run]
void FUN_012711c0(int param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    local_38 = 0;
    local_34 = 0;
    local_30 = -0x80000000;
    FUN_0146d8e0(&local_38);
    local_20 = local_34;
    local_14 = 0;
    if (0 < local_34) {
      do {
        piVar1 = *(int **)(*(int *)(local_38 + local_14 * 8) + 8);
        if (piVar1[2] == 0) {
          local_2c = 0;
          local_28 = 0;
          local_24 = 0x80000000;
          (**(code **)(*piVar1 + 0x30))(&local_2c);
          local_c = *(int *)(param_1 + 0x68) + -1;
          if (-1 < local_c) {
            local_10 = local_c * 0x30;
            iVar5 = local_28;
            do {
              pfVar7 = (float *)(*(int *)(param_1 + 100) + local_10);
              if (((int *)pfVar7[8] == piVar1) && (local_8 = 0, local_18 = iVar5, 0 < iVar5)) {
LAB_01271273:
                local_1c = (uint)*(ushort *)(local_2c + local_8 * 2);
                pfVar3 = (float *)(**(code **)(*piVar1 + 0x2c))(local_1c);
                auVar2._4_4_ = -(uint)(pfVar7[1] == pfVar3[1] && pfVar3[5] == pfVar7[5]);
                auVar2._0_4_ = -(uint)(*pfVar7 == *pfVar3 && pfVar3[4] == pfVar7[4]);
                auVar2._8_4_ = -(uint)(pfVar7[2] == pfVar3[2] && pfVar3[6] == pfVar7[6]);
                auVar2._12_4_ = -(uint)(pfVar7[3] == pfVar3[3] && pfVar3[7] == pfVar7[7]);
                iVar5 = movmskps(extraout_ECX,auVar2);
                if (iVar5 != 0xf) goto code_r0x012712ab;
                pfVar3[3] = 1.9544586;
                (**(code **)(*piVar1 + 0x14))
                          (local_1c,*(undefined4 *)(*(int *)(param_1 + 0x10) + 200));
                iVar5 = *(int *)(param_1 + 0x68) + -1;
                *(int *)(param_1 + 0x68) = iVar5;
                if (iVar5 != local_c) {
                  puVar4 = (undefined4 *)(local_10 + *(int *)(param_1 + 100));
                  iVar5 = (iVar5 * 0x30 + *(int *)(param_1 + 100)) - (int)puVar4;
                  iVar6 = 6;
                  do {
                    *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
                    puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
                    puVar4 = puVar4 + 2;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                }
                local_28 = local_28 + -1;
                iVar5 = local_28;
                if (local_28 != local_8) {
                  *(undefined2 *)(local_2c + local_8 * 2) = *(undefined2 *)(local_2c + local_28 * 2)
                  ;
                }
              }
LAB_0127132e:
              local_c = local_c + -1;
              local_10 = local_10 + -0x30;
            } while (-1 < local_c);
          }
          local_28 = 0;
          if (-1 < (int)local_24) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,(local_24 & 0x3fffffff) * 2);
          }
          local_2c = 0;
          local_24 = 0x80000000;
        }
        local_14 = local_14 + 1;
      } while (local_14 < local_20);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    local_34 = 0;
    if (-1 < local_30) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,local_30 * 8);
    }
  }
  return;
code_r0x012712ab:
  local_8 = local_8 + 1;
  iVar5 = local_28;
  if (local_18 <= local_8) goto LAB_0127132e;
  goto LAB_01271273;
}

// 012713C0  FUN_012713c0  size=251  [run]
void FUN_012713c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = -0x80000000;
  FUN_0146d8e0(&local_28);
  local_10 = local_24;
  local_8 = 0;
  if (0 < local_24) {
    do {
      piVar2 = *(int **)(*(int *)(local_28 + local_8 * 8) + 8);
      iVar1 = local_28 + local_8 * 8;
      if (piVar2[2] == 0) {
        local_1c = 0;
        local_18 = 0;
        local_14 = 0x80000000;
        (**(code **)(*piVar2 + 0x30))(&local_1c);
        if (local_18 != 0) {
          (**(code **)(*local_c + 0x10))(param_1,param_2,iVar1,piVar2,&local_1c);
        }
        local_18 = 0;
        if (-1 < (int)local_14) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,(local_14 & 0x3fffffff) * 2);
        }
        local_1c = 0;
        local_14 = 0x80000000;
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_10);
  }
  local_24 = 0;
  if (-1 < local_20) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 * 8);
  }
  return;
}

// 012714C0  hkpCharacterRigidBodyListener::vf0C  size=192  [run]
void hkpCharacterRigidBodyListener::vf0C(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar2 = "TtcharacterCallback";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar4 + 4) = puVar2 + 3;
  }
  FUN_012711c0(param_2);
  FUN_012713c0(param_1,param_2);
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar2 = &DAT_0164b09c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar4 + 4) = puVar2 + 3;
  }
  piVar1 = (int *)(param_1 + 0x8c);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(param_1 + 0x94) == '\0')) {
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_011925d0();
    }
    if ((*(int *)(param_1 + 0x9c) == 1) && (*(int *)(param_1 + 0x88) != 0)) {
      FUN_011925f0();
    }
  }
  return;
}

// 012715A0  FUN_012715a0  size=18  [run]
int __thiscall FUN_012715a0(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 012715D0  FUN_012715d0  size=11  [run]
int FUN_012715d0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 012715E0  FUN_012715e0  size=26  [run]
void __thiscall FUN_012715e0(float *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = -(uint)(*param_3 == *param_1);
  param_2[1] = -(uint)(fVar1 == fVar4);
  param_2[2] = -(uint)(fVar2 == fVar5);
  param_2[3] = -(uint)(fVar3 == fVar6);
  return;
}

// 01271600  FUN_01271600  size=49  [run]
bool FUN_01271600(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  
  auVar1._4_4_ = -(uint)(param_1[1] == param_2[1] && param_1[5] == param_2[5]);
  auVar1._0_4_ = -(uint)(*param_1 == *param_2 && param_1[4] == param_2[4]);
  auVar1._8_4_ = -(uint)(param_1[2] == param_2[2] && param_1[6] == param_2[6]);
  auVar1._12_4_ = -(uint)(param_1[3] == param_2[3] && param_1[7] == param_2[7]);
  iVar2 = movmskps(param_1,auVar1);
  return iVar2 == 0xf;
}

// 01271640  FUN_01271640  size=71  [run]
void __thiscall FUN_01271640(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(param_2 * 0x30 + *param_1);
    iVar2 = (param_1[1] * 0x30 + *param_1) - (int)puVar1;
    iVar3 = 6;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 01271690  FUN_01271690  size=32  [run]
void __thiscall FUN_01271690(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = param_2[8];
  return;
}

// 012716B0  FUN_012716b0  size=50  [run]
void FUN_012716b0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        uVar3 = param_3[3];
        *param_1 = *param_3;
        param_1[1] = uVar1;
        param_1[2] = uVar2;
        param_1[3] = uVar3;
        uVar1 = param_3[5];
        uVar2 = param_3[6];
        uVar3 = param_3[7];
        param_1[4] = param_3[4];
        param_1[5] = uVar1;
        param_1[6] = uVar2;
        param_1[7] = uVar3;
        param_1[8] = param_3[8];
      }
      param_1 = param_1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 012716F0  FUN_012716f0  size=100  [run]
void __thiscall FUN_012716f0(float *param_1,uint *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  undefined1 in_XMM3 [16];
  undefined1 auVar7 [16];
  float fVar9;
  
  fVar1 = (*param_1 - *param_3) * (*param_1 - *param_3);
  fVar2 = (param_1[1] - param_3[1]) * (param_1[1] - param_3[1]);
  fVar3 = (param_1[2] - param_3[2]) * (param_1[2] - param_3[2]);
  fVar4 = fVar2 + fVar1 + fVar3;
  fVar5 = fVar2 + fVar1 + fVar3;
  fVar6 = fVar2 + fVar1 + fVar3;
  fVar3 = fVar2 + fVar1 + fVar3;
  auVar7._4_4_ = fVar5;
  auVar7._0_4_ = fVar4;
  auVar7._8_4_ = fVar6;
  auVar7._12_4_ = fVar3;
  auVar7 = rsqrtps(in_XMM3,auVar7);
  fVar1 = auVar7._0_4_;
  fVar2 = auVar7._4_4_;
  fVar8 = auVar7._8_4_;
  fVar9 = auVar7._12_4_;
  *param_2 = ~-(uint)(fVar4 <= 0.0) & (uint)((3.0 - fVar1 * fVar4 * fVar1) * fVar1 * 0.5 * fVar4);
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)((3.0 - fVar2 * fVar5 * fVar2) * fVar2 * 0.5 * fVar5);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)((3.0 - fVar8 * fVar6 * fVar8) * fVar8 * 0.5 * fVar6);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)((3.0 - fVar9 * fVar3 * fVar9) * fVar9 * 0.5 * fVar3);
  return;
}

// 01271760  FUN_01271760  size=78  [run]
void __thiscall FUN_01271760(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x30);
  }
  puVar4 = (undefined4 *)(param_1[1] * 0x30 + *param_1);
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *puVar4 = *param_3;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    uVar1 = param_3[5];
    uVar2 = param_3[6];
    uVar3 = param_3[7];
    puVar4[4] = param_3[4];
    puVar4[5] = uVar1;
    puVar4[6] = uVar2;
    puVar4[7] = uVar3;
    puVar4[8] = param_3[8];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 012717B0  FUN_012717b0  size=79  [run]
void __thiscall FUN_012717b0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x30);
  }
  puVar4 = (undefined4 *)(param_1[1] * 0x30 + *param_1);
  if (puVar4 != (undefined4 *)0x0) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *puVar4 = *param_2;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    puVar4[4] = param_2[4];
    puVar4[5] = uVar1;
    puVar4[6] = uVar2;
    puVar4[7] = uVar3;
    puVar4[8] = param_2[8];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01271840  FUN_01271840  size=65  [run]
void FUN_01271840(void)

{
  int in_EAX;
  float in_XMM0_Da;
  undefined1 local_20 [16];
  
  *(float *)(in_EAX + 4) = in_XMM0_Da * *(float *)(in_EAX + 4);
  FUN_010136a0(local_20);
  return;
}

// 012718B0  FUN_012718b0  size=55  [run]
void FUN_012718b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x84) = uVar1;
  *(undefined4 *)(param_2 + 0x88) = uVar2;
  *(undefined4 *)(param_2 + 0x8c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x54) = uVar1;
  *(undefined4 *)(param_2 + 0x58) = uVar2;
  *(undefined4 *)(param_2 + 0x5c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 100) = uVar1;
  *(undefined4 *)(param_2 + 0x68) = uVar2;
  *(undefined4 *)(param_2 + 0x6c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x74) = uVar1;
  *(undefined4 *)(param_2 + 0x78) = uVar2;
  *(undefined4 *)(param_2 + 0x7c) = uVar3;
  return;
}

// 012718F0  FUN_012718f0  size=113  [run]
void FUN_012718f0(int param_1,float param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = param_2 / *(float *)(param_1 + 4);
  *(float *)(param_3 + 0x90) = param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_3 + 0x80) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_3 + 0x84) = uVar1;
  *(undefined4 *)(param_3 + 0x88) = uVar2;
  *(undefined4 *)(param_3 + 0x8c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_3 + 0x50) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_3 + 0x54) = uVar1;
  *(undefined4 *)(param_3 + 0x58) = uVar2;
  *(undefined4 *)(param_3 + 0x5c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_3 + 100) = uVar1;
  *(undefined4 *)(param_3 + 0x68) = uVar2;
  *(undefined4 *)(param_3 + 0x6c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_3 + 0x74) = uVar1;
  *(undefined4 *)(param_3 + 0x78) = uVar2;
  *(undefined4 *)(param_3 + 0x7c) = uVar3;
  fStack_1c = local_20;
  fStack_18 = local_20;
  fStack_14 = local_20;
  FUN_010136a0(&local_20);
  return;
}

// 01271970  FUN_01271970  size=36  [run]
void FUN_01271970(float *param_1,float param_2,undefined4 param_3)

{
  FUN_012718f0(param_1,*param_1 * param_2,param_3);
  return;
}

// 012719A0  FUN_012719a0  size=96  [run]
void FUN_012719a0(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x50);
  fVar3 = *(float *)(param_2 + 100);
  fVar2 = fVar4;
  if (fVar4 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar1 = *(float *)(param_2 + 0x78);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar2 = fVar2 / param_1;
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  *(float *)(param_2 + 0x50) = fVar4;
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  *(float *)(param_2 + 100) = fVar3;
  if (fVar2 < fVar1) {
    *(float *)(param_2 + 0x78) = fVar1;
    return;
  }
  *(float *)(param_2 + 0x78) = fVar2;
  return;
}

// 01271A00  FUN_01271a00  size=675  [run]
float10 FUN_01271a00(int *param_1,int param_2,float param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  float10 fVar7;
  float fVar8;
  float local_b0 [5];
  float local_9c;
  float local_88;
  undefined1 *local_78;
  uint local_74;
  undefined1 *local_70;
  undefined1 local_6c [72];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = param_1[1];
  local_78 = local_6c;
  local_74 = 0;
  local_70 = &DAT_80000010;
  puVar6 = &DAT_80000010;
joined_r0x01271a3a:
  iVar4 = iVar4 + -1;
  if (iVar4 < 0) {
    local_18 = 0.0;
    local_20 = 0.0;
    uVar3 = local_74;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      iVar4 = *(int *)(*(int *)(local_78 + uVar3 * 4) + 0x14);
      if (iVar4 == param_2) {
        iVar4 = *(int *)(*(int *)(local_78 + uVar3 * 4) + 0x18);
      }
      fVar7 = (float10)FUN_01271a00(param_1,iVar4,param_3);
      local_14 = (float)fVar7;
      local_18 = (float)((float10)local_18 + fVar7);
      puVar6 = local_70;
      if ((float10)local_20 < fVar7) {
        local_20 = local_14;
      }
    }
    if ((*(char *)(param_2 + 0xe8) != '\x05') && (*(char *)(param_2 + 0xe8) != '\x04')) {
      (**(code **)(*(int *)(param_2 + 0xe0) + 0x14))(local_b0);
      local_1c = local_88;
      if (local_88 < local_9c) {
        local_1c = local_9c;
      }
      if (local_1c < local_b0[0]) {
        local_1c = local_b0[0];
      }
      if (local_18 != (float)(undefined *)0x0) {
        local_24 = local_1c * param_3;
        local_14 = local_24;
        if (local_18 < local_24) {
          local_14 = local_18;
        }
        if (local_14 <= local_20) {
          local_14 = local_20;
        }
        if (local_b0[0] <= local_14) {
          local_b0[0] = local_14;
        }
        if (local_9c <= local_14) {
          local_9c = local_14;
        }
        if (local_88 <= local_14) {
          local_88 = local_14;
        }
        FUN_0119f700(local_b0);
        fVar8 = local_1c + local_18;
        if (local_24 < local_1c + local_18) {
          fVar8 = local_24;
        }
        if (local_14 < fVar8) {
          local_14 = fVar8;
        }
        local_74 = 0;
        if (-1 < (int)local_70) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_78,(int)local_70 * 4);
        }
        return (float10)local_14;
      }
      local_74 = 0;
      if (-1 < (int)local_70) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_78,(int)local_70 * 4);
      }
      return (float10)local_1c;
    }
    local_74 = 0;
    if (-1 < (int)puVar6) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_78,(int)puVar6 * 4);
    }
    return (float10)0;
  }
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + iVar4 * 4);
  iVar5 = *(int *)(iVar2 + 0x14);
  if (iVar5 != param_2) goto LAB_01271a52;
  iVar5 = *(int *)(iVar2 + 0x18);
  goto LAB_01271a5d;
LAB_01271a52:
  puVar6 = local_70;
  if (*(int *)(iVar2 + 0x18) == param_2) {
LAB_01271a5d:
    if (iVar5 != 0) {
      param_1[1] = param_1[1] + -1;
      if (param_1[1] != iVar4) {
        *(undefined4 *)(iVar1 + iVar4 * 4) = *(undefined4 *)(iVar1 + param_1[1] * 4);
        puVar6 = local_70;
      }
      if (local_74 == ((uint)puVar6 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_78,4);
      }
      *(int *)(local_78 + local_74 * 4) = iVar2;
      local_74 = local_74 + 1;
      puVar6 = local_70;
    }
  }
  goto joined_r0x01271a3a;
}

// 01271CB0  FUN_01271cb0  size=293  [run]
void FUN_01271cb0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x80000000;
  local_8 = param_2;
  if (param_2 == 0) {
    local_c = 0;
  }
  else {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    local_c = *(int *)((int)pvVar1 + 0xc);
    uVar3 = param_2 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar1 + 8) < (int)uVar3) ||
       (*(uint *)((int)pvVar1 + 0x10) < local_c + uVar3)) {
      local_c = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar1 + 0xc) = local_c + uVar3;
    }
  }
  local_10 = param_2 | 0x80000000;
  iVar2 = 0;
  if (0 < (int)param_2) {
    do {
      *(undefined4 *)(local_c + local_14 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
      local_14 = local_14 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_2);
  }
  local_18 = local_c;
  FUN_01271a00(&local_18,param_3,param_4);
  uVar3 = local_8;
  iVar2 = local_c;
  if (local_c == local_18) {
    local_14 = 0;
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = uVar3 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar1 + 8) < (int)uVar3) || (uVar3 + iVar2 != *(int *)((int)pvVar1 + 0xc)))
     || (*(int *)((int)pvVar1 + 0x14) == iVar2)) {
    FUN_0100b9b0(iVar2,uVar3);
  }
  else {
    *(int *)((int)pvVar1 + 0xc) = iVar2;
  }
  local_14 = 0;
  if (-1 < (int)local_10) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 4);
  }
  return;
}

// 01271DE0  FUN_01271de0  size=825  [run]
void FUN_01271de0(int param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_EAX;
  int iVar7;
  float *pfVar8;
  undefined4 *unaff_EDI;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_290 [208];
  undefined4 *local_1c0;
  undefined4 local_1bc;
  uint local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float local_120;
  undefined4 local_11c;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
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
  float *local_28;
  int local_24;
  undefined4 local_20;
  float *local_1c;
  int local_18;
  int local_14;
  
  local_80 = 0.0;
  local_7c = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  if (*(char *)(param_1 + 8) == '\x05') {
    local_1c = (float *)0x0;
    local_18 = 0;
    local_14 = -0x80000000;
    FUN_01130a20(&local_1c);
    pfVar8 = local_1c;
    if (local_1c != local_1c + local_18 * 4) {
      do {
        fVar18 = in_EAX[4];
        fVar19 = in_EAX[5];
        fVar2 = in_EAX[6];
        fVar3 = in_EAX[7];
        fVar9 = in_EAX[8] * *pfVar8;
        fVar10 = in_EAX[9] * pfVar8[1];
        fVar11 = in_EAX[10] * pfVar8[2];
        fVar12 = in_EAX[0xb] * pfVar8[3];
        fVar13 = fVar18 * fVar9;
        fVar14 = fVar19 * fVar10;
        fVar15 = fVar2 * fVar11;
        fVar4 = in_EAX[1];
        fVar5 = in_EAX[2];
        fVar6 = in_EAX[3];
        fVar16 = (fVar14 + fVar13 + fVar15) * fVar18 + (fVar3 * fVar3 + -0.5) * fVar9 +
                 (fVar19 * fVar11 - fVar2 * fVar10) * fVar3;
        fVar17 = (fVar14 + fVar13 + fVar15) * fVar19 + (fVar3 * fVar3 + -0.5) * fVar10 +
                 (fVar2 * fVar9 - fVar18 * fVar11) * fVar3;
        fVar18 = (fVar14 + fVar13 + fVar15) * fVar2 + (fVar3 * fVar3 + -0.5) * fVar11 +
                 (fVar18 * fVar10 - fVar19 * fVar9) * fVar3;
        fVar19 = (fVar14 + fVar13 + fVar15) * fVar3 + (fVar3 * fVar3 + -0.5) * fVar12 +
                 (fVar3 * fVar12 - fVar3 * fVar12) * fVar3;
        *pfVar8 = fVar16 + fVar16 + *in_EAX;
        pfVar8[1] = fVar17 + fVar17 + fVar4;
        pfVar8[2] = fVar18 + fVar18 + fVar5;
        pfVar8[3] = fVar19 + fVar19 + fVar6;
        pfVar8 = pfVar8 + 4;
      } while (pfVar8 != local_1c + local_18 * 4);
    }
    local_28 = local_1c;
    local_24 = local_18;
    local_20 = 0x10;
    (*(code *)PTR_FUN_01b1c010)(&local_28,*(undefined4 *)(param_1 + 0x10),&local_80);
    if (local_80 != (float)(undefined *)0x0) {
      FUN_01271840();
      local_1b0 = *unaff_EDI;
      local_1ac = unaff_EDI[1];
      local_1a0 = unaff_EDI[4];
      uStack_19c = unaff_EDI[5];
      uStack_198 = unaff_EDI[6];
      uStack_194 = unaff_EDI[7];
      local_130 = local_90;
      uStack_12c = uStack_8c;
      uStack_128 = uStack_88;
      uStack_124 = uStack_84;
      local_190 = unaff_EDI[8];
      uStack_18c = unaff_EDI[9];
      uStack_188 = unaff_EDI[10];
      uStack_184 = unaff_EDI[0xb];
      local_120 = local_80;
      local_180 = unaff_EDI[0xc];
      uStack_17c = unaff_EDI[0xd];
      uStack_178 = unaff_EDI[0xe];
      uStack_174 = unaff_EDI[0xf];
      local_11c = local_7c;
      local_170 = unaff_EDI[0x10];
      uStack_16c = unaff_EDI[0x11];
      uStack_168 = unaff_EDI[0x12];
      uStack_164 = unaff_EDI[0x13];
      local_110 = local_70;
      uStack_10c = uStack_6c;
      uStack_108 = uStack_68;
      uStack_104 = uStack_64;
      local_100 = local_60;
      uStack_fc = uStack_5c;
      uStack_f8 = uStack_58;
      uStack_f4 = uStack_54;
      local_1c0 = &local_1b0;
      local_160 = 0x3f800000;
      uStack_15c = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      local_f0 = local_50;
      uStack_ec = uStack_4c;
      uStack_e8 = uStack_48;
      uStack_e4 = uStack_44;
      local_d0 = 0x3f800000;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      local_1b8 = 0x80000002;
      local_150 = 0;
      uStack_14c = 0x3f800000;
      uStack_148 = 0;
      uStack_144 = 0;
      local_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0x3f800000;
      uStack_134 = 0;
      local_1bc = 2;
      local_e0 = local_40;
      uStack_dc = uStack_3c;
      uStack_d8 = uStack_38;
      uStack_d4 = uStack_34;
      local_c0 = 0;
      uStack_bc = 0x3f800000;
      uStack_b8 = 0;
      uStack_b4 = 0;
      local_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0x3f800000;
      uStack_a4 = 0;
      local_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0x3f800000;
      FUN_01060dd0(&local_1c0);
      local_1bc = 0;
      if (-1 < (int)local_1b8) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (local_1c0,((local_1b8 & 0x3fffffff) + local_1b8 * 8) * 0x10);
      }
    }
    local_18 = 0;
    if (-1 < local_14) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
    }
    return;
  }
  hkErrStream::hkErrStream(local_290,0x200);
  FUN_01018d00("Inertia tensor computation with scaled transform is not supported for this shape.");
  iVar7 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0x3c0c481a,local_290,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Dynamics\\Inertia\\hkpInertiaTensorComputer.cpp"
                     ,0xf2);
  if (iVar7 == 0) {
    hkBaseObject::hkBaseObject_38();
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// 01272120  FUN_01272120  size=2021  [run]
/* WARNING: Switch with 1 destination removed at 0x01272601 : 16 cases all go to same destination */

void FUN_01272120(int *param_1,undefined4 *param_2,float param_3,undefined4 *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
  float fVar19;
  undefined1 local_330 [208];
  undefined4 *local_260;
  undefined4 local_25c;
  uint local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  float local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130 [16];
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined1 local_100 [8];
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  undefined4 local_ec;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int *local_18;
  float local_14;
  
  uVar2 = (uint)*(byte *)(param_1 + 2);
  _local_100 = ZEXT812(0);
  fStack_f4 = 0.0;
  local_f0 = 0.0;
  local_ec = 0;
  if (0x1f < uVar2) {
    return;
  }
  local_e0 = _local_100;
  local_d0 = _local_100;
  local_c0 = _local_100;
  local_b0 = _local_100;
  switch(uVar2) {
  case 0:
    FUN_01060ab0(param_1[4],0x3f800000,&local_f0);
    break;
  case 1:
    local_14 = (float)param_1[4];
    fVar14 = (float)param_1[0xc] - (float)param_1[8];
    fVar15 = (float)param_1[0xd] - (float)param_1[9];
    fVar16 = (float)param_1[0xe] - (float)param_1[10];
    fVar8 = fVar14 * fVar14;
    fVar9 = fVar15 * fVar15;
    fVar10 = fVar16 * fVar16;
    fVar13 = fVar9 + fVar8 + fVar10;
    fVar11 = fVar9 + fVar8 + fVar10;
    fVar12 = fVar9 + fVar8 + fVar10;
    fVar10 = fVar9 + fVar8 + fVar10;
    auVar1._4_4_ = fVar11;
    auVar1._0_4_ = fVar13;
    auVar1._8_4_ = fVar12;
    auVar1._12_4_ = fVar10;
    auVar17 = rsqrtps(_local_100,auVar1);
    fVar8 = auVar17._0_4_;
    fVar9 = auVar17._4_4_;
    fVar18 = auVar17._8_4_;
    fVar19 = auVar17._12_4_;
    local_40 = local_14 *
               (float)(~-(uint)(fVar13 <= 0.0) &
                      (uint)((3.0 - fVar8 * fVar13 * fVar8) * fVar8 * 0.5)) * fVar14;
    fStack_3c = local_14 *
                (float)(~-(uint)(fVar11 <= 0.0) &
                       (uint)((3.0 - fVar9 * fVar11 * fVar9) * fVar9 * 0.5)) * fVar15;
    fStack_38 = local_14 *
                (float)(~-(uint)(fVar12 <= 0.0) &
                       (uint)((3.0 - fVar18 * fVar12 * fVar18) * fVar18 * 0.5)) * fVar16;
    fStack_34 = local_14 *
                (float)(~-(uint)(fVar10 <= 0.0) &
                       (uint)((3.0 - fVar19 * fVar10 * fVar19) * fVar19 * 0.5)) *
                ((float)param_1[0xf] - (float)param_1[0xb]);
    local_a0 = (float)param_1[8] - local_40;
    fStack_9c = (float)param_1[9] - fStack_3c;
    fStack_98 = (float)param_1[10] - fStack_38;
    fStack_94 = (float)param_1[0xb] - fStack_34;
    local_40 = local_40 + (float)param_1[0xc];
    fStack_3c = fStack_3c + (float)param_1[0xd];
    fStack_38 = fStack_38 + (float)param_1[0xe];
    fStack_34 = fStack_34 + (float)param_1[0xf];
    fVar7 = (float10)FUN_0112c400();
    local_14 = (float)(fVar7 + (float10)local_14);
    FUN_01063410(&local_a0,&local_40,local_14,0x3f800000,&local_f0);
    break;
  case 2:
    local_40 = (float)param_1[8];
    fStack_3c = (float)param_1[9];
    fStack_38 = (float)param_1[10];
    fStack_34 = (float)param_1[0xb];
    local_a0 = (float)param_1[0xc];
    fStack_9c = (float)param_1[0xd];
    fStack_98 = (float)param_1[0xe];
    fStack_94 = (float)param_1[0xf];
    local_30 = (float)param_1[0x10];
    fStack_2c = (float)param_1[0x11];
    fStack_28 = (float)param_1[0x12];
    fStack_24 = (float)param_1[0x13];
    fVar8 = (float)param_1[4];
    if ((float)param_1[4] <= param_3) {
      fVar8 = param_3;
    }
    FUN_01062240(&local_40,&local_a0,&local_30,0x3f800000,fVar8,&local_f0);
    break;
  case 3:
    fStack_28 = (float)param_1[4];
    local_30 = fStack_28 + (float)param_1[8];
    fStack_2c = fStack_28 + (float)param_1[9];
    fStack_28 = fStack_28 + (float)param_1[10];
    fStack_24 = (float)param_1[0xb] + 0.0;
    FUN_01060cb0(&local_30,0x3f800000,&local_f0);
    break;
  case 4:
    FUN_01062b30(param_1 + 8,param_1 + 0xc,param_1[4],0x3f800000,&local_f0);
    break;
  case 5:
    fStack_2c = 0.0;
    fStack_28 = 0.0;
    fStack_24 = -0.0;
    FUN_01130a20(&fStack_2c);
    local_4c = fStack_2c;
    local_48 = fStack_28;
    local_44 = 0x10;
    (*(code *)PTR_FUN_01b1c010)(&local_4c,param_1[4],&local_f0);
    fStack_28 = 0.0;
    if (-1 < (int)fStack_24) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(fStack_2c,(int)fStack_24 << 4);
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xd:
  case 0x10:
  case 0x12:
  case 0x16:
  case 0x1a:
  case 0x1b:
    piVar3 = (int *)(**(code **)(*param_1 + 0x38))();
    iVar4 = (**(code **)(*piVar3 + 8))();
    if (iVar4 == -1) {
      return;
    }
    do {
      iVar5 = (**(code **)(*piVar3 + 0x14))(iVar4,local_330);
      if (iVar5 != 0) {
        FUN_01272120(iVar5,param_2,param_3,param_4);
      }
      iVar4 = (**(code **)(*piVar3 + 0xc))(iVar4);
    } while (iVar4 != -1);
    return;
  case 10:
    local_90 = 0x3f800000;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    local_80 = 0.0;
    fStack_7c = 1.0;
    fStack_78 = 0.0;
    fStack_74 = 0.0;
    local_70 = 0.0;
    fStack_6c = 0.0;
    fStack_68 = 1.0;
    fStack_64 = 0.0;
    local_60 = (float)param_1[8];
    fStack_5c = (float)param_1[9];
    fStack_58 = (float)param_1[10];
    fStack_54 = (float)param_1[0xb];
    FUN_01004cf0(param_2,&local_90);
    FUN_01272120(param_1[6],local_130,param_3,param_4);
    return;
  case 0xb:
    auVar17._4_4_ = -(uint)(ABS((float)param_1[0x11] - 1.0) < 0.001);
    auVar17._0_4_ = -(uint)(ABS((float)param_1[0x10] - 1.0) < 0.001);
    auVar17._8_4_ = -(uint)(ABS((float)param_1[0x12] - 1.0) < 0.001);
    auVar17._12_4_ = -(uint)(ABS((float)param_1[0x13] - 1.0) < 0.001);
    uVar6 = movmskps((uint)(&switchD_0127218e::switchdataD_01272944)[uVar2],auVar17);
    if (((byte)uVar6 & 7) != 7) {
      FUN_0100a410(param_2);
      fVar13 = (float)local_100._0_4_ * (float)param_1[8];
      fVar14 = (float)local_100._4_4_ * (float)param_1[9];
      fVar15 = fStack_f8 * (float)param_1[10];
      fVar16 = fStack_f4 * (float)param_1[0xb];
      local_40 = fStack_108;
      fStack_3c = local_110;
      fStack_38 = fStack_10c;
      fStack_34 = fStack_104;
      fVar8 = local_110 * fVar13;
      fVar9 = fStack_10c * fVar14;
      fVar10 = fStack_108 * fVar15;
      fVar11 = (fVar9 + fVar8 + fVar10) * local_110 + (fStack_104 * fStack_104 + -0.5) * fVar13 +
               (fVar15 * fStack_10c - fVar14 * fStack_108) * fStack_104;
      fVar12 = (fVar9 + fVar8 + fVar10) * fStack_10c + (fStack_104 * fStack_104 + -0.5) * fVar14 +
               (fVar13 * fStack_108 - fVar15 * local_110) * fStack_104;
      fVar14 = (fVar9 + fVar8 + fVar10) * fStack_108 + (fStack_104 * fStack_104 + -0.5) * fVar15 +
               (fVar14 * local_110 - fVar13 * fStack_10c) * fStack_104;
      fVar15 = (fVar9 + fVar8 + fVar10) * fStack_104 + (fStack_104 * fStack_104 + -0.5) * fVar16 +
               (fVar16 * fStack_104 - fVar16 * fStack_104) * fStack_104;
      fVar8 = (float)param_1[0xc];
      fVar9 = (float)param_1[0xd];
      fVar10 = (float)param_1[0xe];
      fVar13 = (float)param_1[0xf];
      local_70 = (fVar10 * fStack_10c - fVar9 * fStack_108) + fStack_104 * fVar8 +
                 local_110 * fVar13;
      fStack_6c = (fVar8 * fStack_108 - fVar10 * local_110) + fStack_104 * fVar9 +
                  fStack_10c * fVar13;
      fStack_68 = (fVar9 * local_110 - fVar8 * fStack_10c) + fStack_104 * fVar10 +
                  fStack_108 * fVar13;
      local_80 = fVar11 + fVar11 + local_120;
      fStack_7c = fVar12 + fVar12 + fStack_11c;
      fStack_78 = fVar14 + fVar14 + fStack_118;
      fStack_74 = fVar15 + fVar15 + fStack_114;
      local_60 = (float)param_1[0x10] * (float)local_100._0_4_;
      fStack_5c = (float)param_1[0x11] * (float)local_100._4_4_;
      fStack_58 = (float)param_1[0x12] * fStack_f8;
      fStack_54 = (float)param_1[0x13] * fStack_f4;
      fStack_64 = fVar13 * fStack_104 -
                  (fStack_10c * fVar9 + local_110 * fVar8 + fStack_108 * fVar10);
      FUN_01271de0(param_1[6]);
      return;
    }
    FUN_0100a440(&local_90);
    FUN_01004cf0(param_2,&local_90);
    FUN_01272120(param_1[6],local_130,param_3,param_4);
    return;
  default:
    goto switchD_0127218e_caseD_c;
  case 0xe:
    FUN_01004cf0(param_2,param_1 + 0xc);
    FUN_01272120(param_1[5],&local_90,param_3,param_4);
    return;
  case 0x19:
    local_14 = 0.0;
    if (param_1[4] < 1) {
      return;
    }
    local_18 = param_1 + 8;
    do {
      local_90 = *param_2;
      uStack_8c = param_2[1];
      uStack_88 = param_2[2];
      uStack_84 = param_2[3];
      local_80 = (float)param_2[4];
      fStack_7c = (float)param_2[5];
      fStack_78 = (float)param_2[6];
      fStack_74 = (float)param_2[7];
      local_70 = (float)param_2[8];
      fStack_6c = (float)param_2[9];
      fStack_68 = (float)param_2[10];
      fStack_64 = (float)param_2[0xb];
      local_60 = (float)param_2[0xc];
      fStack_5c = (float)param_2[0xd];
      fStack_58 = (float)param_2[0xe];
      fStack_54 = (float)param_2[0xf];
      FUN_01007050(&local_90,local_18);
      hkpSphereShape::hkpSphereShape(local_18[3]);
      FUN_01272120(&local_110,&local_90,param_3,param_4);
      local_18 = local_18 + 4;
      local_14 = (float)((int)local_14 + 1);
    } while ((int)local_14 < param_1[4]);
    return;
  case 0x1e:
    FUN_01272120(param_1[6],param_2,param_3,param_4);
    return;
  }
  if (local_f0 != (float)(undefined *)0x0) {
    FUN_01271840();
    local_250 = *param_4;
    local_24c = param_4[1];
    local_240 = param_4[4];
    uStack_23c = param_4[5];
    uStack_238 = param_4[6];
    uStack_234 = param_4[7];
    local_230 = param_4[8];
    uStack_22c = param_4[9];
    uStack_228 = param_4[10];
    uStack_224 = param_4[0xb];
    local_220 = param_4[0xc];
    uStack_21c = param_4[0xd];
    uStack_218 = param_4[0xe];
    uStack_214 = param_4[0xf];
    local_210 = param_4[0x10];
    uStack_20c = param_4[0x11];
    uStack_208 = param_4[0x12];
    uStack_204 = param_4[0x13];
    local_200 = 0x3f800000;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    local_1f0 = 0;
    uStack_1ec = 0x3f800000;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    local_1e0 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0x3f800000;
    uStack_1d4 = 0;
    local_1d0 = local_100._0_4_;
    uStack_1cc = local_100._4_4_;
    uStack_1c8 = fStack_f8;
    uStack_1c4 = fStack_f4;
    local_1c0 = local_f0;
    local_1bc = local_ec;
    local_1b0 = local_e0._0_4_;
    uStack_1ac = local_e0._4_4_;
    uStack_1a8 = local_e0._8_4_;
    uStack_1a4 = local_e0._12_4_;
    local_1a0 = local_d0._0_4_;
    uStack_19c = local_d0._4_4_;
    uStack_198 = local_d0._8_4_;
    uStack_194 = local_d0._12_4_;
    local_190 = local_c0._0_4_;
    uStack_18c = local_c0._4_4_;
    uStack_188 = local_c0._8_4_;
    uStack_184 = local_c0._12_4_;
    local_180 = local_b0._0_4_;
    uStack_17c = local_b0._4_4_;
    uStack_178 = local_b0._8_4_;
    uStack_174 = local_b0._12_4_;
    local_170 = *param_2;
    uStack_16c = param_2[1];
    uStack_168 = param_2[2];
    uStack_164 = param_2[3];
    local_160 = param_2[4];
    uStack_15c = param_2[5];
    uStack_158 = param_2[6];
    uStack_154 = param_2[7];
    local_150 = param_2[8];
    uStack_14c = param_2[9];
    uStack_148 = param_2[10];
    uStack_144 = param_2[0xb];
    local_260 = &local_250;
    local_140 = param_2[0xc];
    uStack_13c = param_2[0xd];
    uStack_138 = param_2[0xe];
    uStack_134 = param_2[0xf];
    local_258 = 0x80000002;
    local_25c = 2;
    FUN_01060dd0(&local_260,param_4);
    local_25c = 0;
    if (-1 < (int)local_258) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))
                (local_260,((local_258 & 0x3fffffff) + local_258 * 8) * 0x10);
    }
  }
switchD_0127218e_caseD_c:
  return;
}

// 01272980  FUN_01272980  size=297  [run]
void FUN_01272980(undefined4 param_1,undefined4 param_2,float *param_3)

{
  float local_a0;
  float local_9c;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
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
  
  local_50 = 0x3f800000;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0x3f800000;
  uStack_38 = 0;
  uStack_34 = 0;
  local_90 = 0.0;
  fStack_8c = 0.0;
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  local_80 = 0.0;
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  local_70 = 0.0;
  fStack_6c = 0.0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  local_60 = 0.0;
  fStack_5c = 0.0;
  fStack_58 = 0.0;
  fStack_54 = 0.0;
  local_9c = 0.0;
  local_a0 = 0.0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0x3f800000;
  uStack_24 = 0;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_01272120(param_1,&local_50,0,&local_a0);
  if ((local_a0 == (float)(undefined *)0x0) &&
     (FUN_01272120(param_1,&local_50,0x3c23d70a,&local_a0), local_a0 == (float)(undefined *)0x0)) {
    return;
  }
  FUN_01271840();
  *param_3 = local_a0;
  param_3[1] = local_9c;
  param_3[4] = local_90;
  param_3[5] = fStack_8c;
  param_3[6] = fStack_88;
  param_3[7] = fStack_84;
  param_3[8] = local_80;
  param_3[9] = fStack_7c;
  param_3[10] = fStack_78;
  param_3[0xb] = fStack_74;
  param_3[0xc] = local_70;
  param_3[0xd] = fStack_6c;
  param_3[0xe] = fStack_68;
  param_3[0xf] = fStack_64;
  param_3[0x10] = local_60;
  param_3[0x11] = fStack_5c;
  param_3[0x12] = fStack_58;
  param_3[0x13] = fStack_54;
  return;
}

// 01272AB0  FUN_01272ab0  size=142  [run]
void FUN_01272ab0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 local_60;
  undefined4 local_5c;
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
  
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_01272980(param_1,param_2,&local_60);
  *(undefined4 *)(param_3 + 0x90) = local_5c;
  *(undefined4 *)(param_3 + 0x80) = local_50;
  *(undefined4 *)(param_3 + 0x84) = uStack_4c;
  *(undefined4 *)(param_3 + 0x88) = uStack_48;
  *(undefined4 *)(param_3 + 0x8c) = uStack_44;
  *(undefined4 *)(param_3 + 0x50) = local_40;
  *(undefined4 *)(param_3 + 0x54) = uStack_3c;
  *(undefined4 *)(param_3 + 0x58) = uStack_38;
  *(undefined4 *)(param_3 + 0x5c) = uStack_34;
  *(undefined4 *)(param_3 + 0x60) = local_30;
  *(undefined4 *)(param_3 + 100) = uStack_2c;
  *(undefined4 *)(param_3 + 0x68) = uStack_28;
  *(undefined4 *)(param_3 + 0x6c) = uStack_24;
  *(undefined4 *)(param_3 + 0x70) = local_20;
  *(undefined4 *)(param_3 + 0x74) = uStack_1c;
  *(undefined4 *)(param_3 + 0x78) = uStack_18;
  *(undefined4 *)(param_3 + 0x7c) = uStack_14;
  return;
}

// 01272B40  FUN_01272b40  size=20  [run]
void __thiscall FUN_01272b40(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 01272BA0  FUN_01272ba0  size=15  [run]
int __thiscall FUN_01272ba0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01272BC0  FUN_01272bc0  size=32  [run]
void __thiscall FUN_01272bc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01272C00  FUN_01272c00  size=34  [run]
void FUN_01272c00(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01272C30  FUN_01272c30  size=26  [run]
void __thiscall FUN_01272c30(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01272C80  FUN_01272c80  size=28  [run]
void __thiscall FUN_01272c80(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 01272CA0  FUN_01272ca0  size=57  [run]
void __thiscall FUN_01272ca0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01272CE0  FUN_01272ce0  size=25  [run]
void __thiscall FUN_01272ce0(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01272D00  FUN_01272d00  size=62  [run]
void FUN_01272d00(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 01272D40  FUN_01272d40  size=73  [run]
void FUN_01272d40(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 01272D90  FUN_01272d90  size=32  [run]
void __thiscall FUN_01272d90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01272DB0  FUN_01272db0  size=61  [run]
void __thiscall FUN_01272db0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01272DF0  FUN_01272df0  size=58  [run]
void __thiscall FUN_01272df0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01272E30  FUN_01272e30  size=61  [run]
void __fastcall FUN_01272e30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01272E70  FUN_01272e70  size=61  [run]
void __fastcall FUN_01272e70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01272EB0  FUN_01272eb0  size=27  [run]
void __thiscall FUN_01272eb0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = (int)&DAT_80000010;
  return;
}

// 01272ED0  FUN_01272ed0  size=61  [run]
void __fastcall FUN_01272ed0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01272F10  FUN_01272f10  size=108  [run]
int * __thiscall FUN_01272f10(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 01272F90  FUN_01272f90  size=143  [run]
void __fastcall FUN_01272f90(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01273020  FUN_01273020  size=27  [run]
void __thiscall FUN_01273020(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 4);
  param_1[1] = param_2;
  param_1[2] = -0x7ffffffe;
  return;
}

// 01273040  FUN_01273040  size=63  [run]
void __fastcall FUN_01273040(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273080  FUN_01273080  size=8  [run]
undefined4 FUN_01273080(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012730A0  FUN_012730a0  size=16  [run]
void FUN_012730a0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 012730B0  hkpPhysicsData::hkpPhysicsData  size=18  [run]
void hkpPhysicsData::hkpPhysicsData(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 012730D0  FUN_012730d0  size=6  [run]
undefined ** FUN_012730d0(void)

{
  return hkpPhysicsData::vftable;
}

// 01273120  FUN_01273120  size=26  [run]
void __thiscall FUN_01273120(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01273150  FUN_01273150  size=61  [run]
void __thiscall FUN_01273150(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273190  FUN_01273190  size=61  [run]
void __fastcall FUN_01273190(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012731D0  FUN_012731d0  size=61  [run]
void __fastcall FUN_012731d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273220  FUN_01273220  size=38  [run]
void FUN_01273220(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01273250  hkpPhysicsData::vf00  size=52  [run]
int __thiscall hkpPhysicsData::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_36();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01273290  FUN_01273290  size=8  [run]
undefined4 FUN_01273290(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012732D0  FUN_012732d0  size=21  [run]
void FUN_012732d0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpEntityListener::hkpEntityListener_2(param_2);
  }
  return;
}

// 012732F0  FUN_012732f0  size=16  [run]
void FUN_012732f0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01273300  FUN_01273300  size=46  [run]
undefined4 FUN_01273300(void)

{
  undefined4 local_50;
  
  hkpEntityListener::hkpEntityListener_2(0);
  return local_50;
}

// 01273330  FUN_01273330  size=8  [run]
undefined4 FUN_01273330(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01273340  FUN_01273340  size=8  [run]
undefined4 FUN_01273340(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01273350  FUN_01273350  size=8  [run]
undefined4 FUN_01273350(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01273390  FUN_01273390  size=16  [run]
void FUN_01273390(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 012733A0  FUN_012733a0  size=12  [run]
void FUN_012733a0(void)

{
  FUN_0127a3e0();
  return;
}

// 012733B0  FUN_012733b0  size=12  [run]
void FUN_012733b0(void)

{
  FUN_0127a3e0();
  return;
}

// 012733E0  hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry_2  size=30  [run]
void hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry_2(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_011c07b0(param_2);
  }
  return;
}

// 01273400  hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry_4  size=65  [run]
undefined ** hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry_4(void)

{
  FUN_011c07b0(0);
  return vftable;
}

// 012734D0  FUN_012734d0  size=26  [run]
void __thiscall FUN_012734d0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01273500  FUN_01273500  size=25  [run]
void __thiscall FUN_01273500(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 01273540  FUN_01273540  size=39  [run]
void FUN_01273540(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x18);
  }
  return;
}

// 01273570  FUN_01273570  size=39  [run]
void FUN_01273570(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x20);
  }
  return;
}

// 012735A0  FUN_012735a0  size=53  [run]
int __thiscall FUN_012735a0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_0127a3e0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x18);
  }
  return param_1;
}

// 012735E0  FUN_012735e0  size=53  [run]
int __thiscall FUN_012735e0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_0127a3e0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x20);
  }
  return param_1;
}

// 01273670  FUN_01273670  size=61  [run]
void __thiscall FUN_01273670(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012736B0  FUN_012736b0  size=60  [run]
void __thiscall FUN_012736b0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012736F0  FUN_012736f0  size=61  [run]
void __fastcall FUN_012736f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273730  FUN_01273730  size=60  [run]
void __fastcall FUN_01273730(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273770  FUN_01273770  size=61  [run]
void __fastcall FUN_01273770(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012737B0  FUN_012737b0  size=60  [run]
void __fastcall FUN_012737b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273810  hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry  size=31  [run]
undefined4 * __thiscall
hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_011c07b0(param_2);
  return param_1;
}

// 01273830  FUN_01273830  size=38  [run]
void FUN_01273830(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01273860  hkpSerializedAgentNnEntry::vf00  size=52  [run]
int __thiscall hkpSerializedAgentNnEntry::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_17();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 012738A0  FUN_012738a0  size=8  [run]
undefined4 FUN_012738a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012738E0  FUN_012738e0  size=16  [run]
void FUN_012738e0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 012738F0  hkpSerializedDisplayRbTransforms::hkpSerializedDisplayRbTransforms  size=18  [run]
void hkpSerializedDisplayRbTransforms::hkpSerializedDisplayRbTransforms(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01273910  FUN_01273910  size=6  [run]
undefined ** FUN_01273910(void)

{
  return hkpSerializedDisplayRbTransforms::vftable;
}

// 01273950  FUN_01273950  size=28  [run]
void __thiscall FUN_01273950(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x50);
  return;
}

// 012739A0  FUN_012739a0  size=63  [run]
void __thiscall FUN_012739a0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(*param_2 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012739E0  FUN_012739e0  size=63  [run]
void __fastcall FUN_012739e0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273A20  FUN_01273a20  size=63  [run]
void __fastcall FUN_01273a20(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273A70  FUN_01273a70  size=38  [run]
void FUN_01273a70(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01273AA0  hkpSerializedDisplayRbTransforms::vf00  size=52  [run]
int __thiscall hkpSerializedDisplayRbTransforms::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_15();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01273AE0  FUN_01273ae0  size=8  [run]
undefined4 FUN_01273ae0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01273B40  FUN_01273b40  size=16  [run]
void FUN_01273b40(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01273B50  hkpPoweredChainMapper::hkpPoweredChainMapper_2  size=18  [run]
void hkpPoweredChainMapper::hkpPoweredChainMapper_2(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01273B70  FUN_01273b70  size=6  [run]
undefined ** FUN_01273b70(void)

{
  return hkpPoweredChainMapper::vftable;
}

// 01273BF0  FUN_01273bf0  size=29  [run]
void __thiscall FUN_01273bf0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01273C20  FUN_01273c20  size=28  [run]
void __thiscall FUN_01273c20(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01273C50  FUN_01273c50  size=26  [run]
void __thiscall FUN_01273c50(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01273D00  FUN_01273d00  size=64  [run]
void __thiscall FUN_01273d00(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273D40  FUN_01273d40  size=63  [run]
void __thiscall FUN_01273d40(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273D80  FUN_01273d80  size=61  [run]
void __thiscall FUN_01273d80(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273DC0  FUN_01273dc0  size=64  [run]
void __fastcall FUN_01273dc0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273E00  FUN_01273e00  size=63  [run]
void __fastcall FUN_01273e00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273E40  FUN_01273e40  size=61  [run]
void __fastcall FUN_01273e40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273E80  FUN_01273e80  size=64  [run]
void __fastcall FUN_01273e80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273EC0  FUN_01273ec0  size=63  [run]
void __fastcall FUN_01273ec0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273F00  FUN_01273f00  size=61  [run]
void __fastcall FUN_01273f00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01273F50  FUN_01273f50  size=38  [run]
void FUN_01273f50(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01273F80  hkpPoweredChainMapper::vf00  size=52  [run]
int __thiscall hkpPoweredChainMapper::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_9();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01273FC0  FUN_01273fc0  size=48  [run]
void __thiscall
FUN_01273fc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

// 01274000  hkpAction::hkpAction_14  size=37  [run]
undefined4 * __thiscall hkpAction::hkpAction_14(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  *param_1 = hkpBinaryAction::vftable;
  return param_1;
}

// 01274030  hkpBinaryAction::vf08  size=6  [run]
undefined * hkpBinaryAction::vf08(void)

{
  return &DAT_0209f2f8;
}

// 01274040  FUN_01274040  size=8  [run]
undefined4 FUN_01274040(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01274050  hkpAction::hkpAction_15  size=37  [run]
undefined4 * __thiscall hkpAction::hkpAction_15(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  *param_1 = hkpSpringAction::vftable;
  return param_1;
}

// 012740A0  hkpAction::hkpAction_16  size=38  [run]
void hkpAction::hkpAction_16(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    *param_1 = hkpSpringAction::vftable;
  }
  return;
}

// 012740D0  FUN_012740d0  size=16  [run]
void FUN_012740d0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 012740E0  hkpAction::hkpAction_31  size=55  [run]
undefined ** hkpAction::hkpAction_31(void)

{
  FUN_010065b0(0);
  return hkpSpringAction::vftable;
}

// 01274120  FUN_01274120  size=14  [run]
void __thiscall FUN_01274120(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 01274130  FUN_01274130  size=38  [run]
void FUN_01274130(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01274160  hkpBinaryAction::vf00  size=52  [run]
int __thiscall hkpBinaryAction::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_31();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 012741A0  FUN_012741a0  size=38  [run]
void FUN_012741a0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012741D0  hkpSpringAction::vf00  size=52  [run]
int __thiscall hkpSpringAction::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_31();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01274210  FUN_01274210  size=8  [run]
undefined4 FUN_01274210(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01274230  FUN_01274230  size=16  [run]
void FUN_01274230(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01274240  hkpSerializedDisplayMarkerList::hkpSerializedDisplayMarkerList  size=18  [run]
void hkpSerializedDisplayMarkerList::hkpSerializedDisplayMarkerList(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01274260  FUN_01274260  size=6  [run]
undefined ** FUN_01274260(void)

{
  return hkpSerializedDisplayMarkerList::vftable;
}

// 012742A0  FUN_012742a0  size=26  [run]
void __thiscall FUN_012742a0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 012742F0  FUN_012742f0  size=61  [run]
void __thiscall FUN_012742f0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01274330  FUN_01274330  size=61  [run]
void __fastcall FUN_01274330(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01274370  FUN_01274370  size=61  [run]
void __fastcall FUN_01274370(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012743C0  FUN_012743c0  size=15  [run]
int __thiscall FUN_012743c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 012743E0  FUN_012743e0  size=38  [run]
void FUN_012743e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01274410  hkBaseObject::hkBaseObject_148  size=101  [run]
void __fastcall hkBaseObject::hkBaseObject_148(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = hkpSerializedDisplayMarkerList::vftable;
  if (0 < (int)param_1[3]) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[3]);
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01274480  hkpSerializedDisplayMarkerList::vf00  size=52  [run]
int __thiscall hkpSerializedDisplayMarkerList::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_148();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 012744C0  FUN_012744c0  size=8  [run]
undefined4 FUN_012744c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012744E0  FUN_012744e0  size=16  [run]
void FUN_012744e0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 012744F0  hkpSerializedDisplayMarker::hkpSerializedDisplayMarker  size=18  [run]
void hkpSerializedDisplayMarker::hkpSerializedDisplayMarker(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01274510  FUN_01274510  size=6  [run]
undefined ** FUN_01274510(void)

{
  return hkpSerializedDisplayMarker::vftable;
}

// 01274540  FUN_01274540  size=38  [run]
void FUN_01274540(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01274570  hkpSerializedDisplayMarker::vf00  size=53  [run]
undefined4 * __thiscall hkpSerializedDisplayMarker::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 012745B0  hkpAction::hkpAction_17  size=37  [run]
undefined4 * __thiscall hkpAction::hkpAction_17(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  *param_1 = hkpUnaryAction::vftable;
  return param_1;
}

// 012745E0  FUN_012745e0  size=8  [run]
undefined4 FUN_012745e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012745F0  hkpAction::hkpAction_18  size=37  [run]
undefined4 * __thiscall hkpAction::hkpAction_18(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  *param_1 = hkpReorientAction::vftable;
  return param_1;
}

// 01274640  hkpAction::hkpAction_19  size=38  [run]
void hkpAction::hkpAction_19(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    *param_1 = hkpReorientAction::vftable;
  }
  return;
}

// 01274670  FUN_01274670  size=16  [run]
void FUN_01274670(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01274680  hkpAction::hkpAction_32  size=55  [run]
undefined ** hkpAction::hkpAction_32(void)

{
  FUN_010065b0(0);
  return hkpReorientAction::vftable;
}

// 012746C0  FUN_012746c0  size=38  [run]
void FUN_012746c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012746F0  hkpUnaryAction::vf00  size=52  [run]
int __thiscall hkpUnaryAction::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_29();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01274730  FUN_01274730  size=38  [run]
void FUN_01274730(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01274760  hkpReorientAction::vf00  size=52  [run]
int __thiscall hkpReorientAction::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_29();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 012747A0  FUN_012747a0  size=32  [run]
void __thiscall
FUN_012747a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

// 012747C0  FUN_012747c0  size=8  [run]
undefined4 FUN_012747c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012747E0  FUN_012747e0  size=21  [run]
void FUN_012747e0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpProjectileGun::hkpProjectileGun_2(param_2);
  }
  return;
}

// 01274800  FUN_01274800  size=16  [run]
void FUN_01274800(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01274810  FUN_01274810  size=46  [run]
undefined4 FUN_01274810(void)

{
  undefined4 local_50;
  
  hkpProjectileGun::hkpProjectileGun_2(0);
  return local_50;
}

// 01274840  FUN_01274840  size=8  [run]
undefined4 FUN_01274840(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01274860  FUN_01274860  size=16  [run]
void FUN_01274860(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01274870  hkpPhysicsSystem::hkpPhysicsSystem_3  size=38  [run]
void hkpPhysicsSystem::hkpPhysicsSystem_3(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    *param_1 = hkpPhysicsSystemWithContacts::vftable;
  }
  return;
}

// 012748A0  hkpPhysicsSystem::hkpPhysicsSystem_6  size=55  [run]
undefined ** hkpPhysicsSystem::hkpPhysicsSystem_6(void)

{
  FUN_010065b0(0);
  return hkpPhysicsSystemWithContacts::vftable;
}

// 01274910  FUN_01274910  size=26  [run]
void __thiscall FUN_01274910(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01274960  FUN_01274960  size=61  [run]
void __thiscall FUN_01274960(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012749A0  FUN_012749a0  size=61  [run]
void __fastcall FUN_012749a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012749E0  FUN_012749e0  size=61  [run]
void __fastcall FUN_012749e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01274A20  hkpPhysicsSystem::hkpPhysicsSystem_4  size=37  [run]
undefined4 * __thiscall hkpPhysicsSystem::hkpPhysicsSystem_4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  *param_1 = hkpPhysicsSystemWithContacts::vftable;
  return param_1;
}

// 01274A50  hkpPhysicsSystemWithContacts::vf10  size=13  [run]
void hkpPhysicsSystemWithContacts::vf10(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01274A60  FUN_01274a60  size=38  [run]
void FUN_01274a60(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01274A90  hkpPhysicsSystemWithContacts::vf00  size=52  [run]
int __thiscall hkpPhysicsSystemWithContacts::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkpPhysicsSystemWithContacts();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01274AD0  FUN_01274ad0  size=8  [run]
undefined4 FUN_01274ad0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01274AF0  FUN_01274af0  size=16  [run]
void FUN_01274af0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01274B00  hkpAction::hkpAction_10  size=59  [run]
void hkpAction::hkpAction_10(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    *param_1 = hkpMouseSpringAction::vftable;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0x80000000;
  }
  return;
}

// 01274B40  hkpAction::hkpAction_29  size=55  [run]
undefined ** hkpAction::hkpAction_29(void)

{
  FUN_010065b0(0);
  return hkpMouseSpringAction::vftable;
}

// 01274BC0  FUN_01274bc0  size=26  [run]
void __thiscall FUN_01274bc0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01274C20  FUN_01274c20  size=61  [run]
void __thiscall FUN_01274c20(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01274C60  FUN_01274c60  size=61  [run]
void __fastcall FUN_01274c60(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01274CA0  FUN_01274ca0  size=61  [run]
void __fastcall FUN_01274ca0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01274CE0  hkpAction::hkpAction_11  size=52  [run]
undefined4 * __thiscall hkpAction::hkpAction_11(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  *param_1 = hkpMouseSpringAction::vftable;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x80000000;
  return param_1;
}

// 01274D20  FUN_01274d20  size=38  [run]
void FUN_01274d20(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01274D50  FUN_01274d50  size=69  [run]
void __fastcall FUN_01274d50(int param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < *(int *)(param_1 + 0x5c)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x5c) * 4);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  hkBaseObject::hkBaseObject_29();
  return;
}

// 01274DA0  hkpMouseSpringAction::vf00  size=113  [run]
int __thiscall hkpMouseSpringAction::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < *(int *)(param_1 + 0x5c)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x5c) * 4);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  hkBaseObject::hkBaseObject_29();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01274E20  FUN_01274e20  size=8  [run]
undefined4 FUN_01274e20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01274E40  FUN_01274e40  size=21  [run]
void FUN_01274e40(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpMountedBallGun::hkpMountedBallGun(param_2);
  }
  return;
}

// 01274E60  FUN_01274e60  size=16  [run]
void FUN_01274e60(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01274E70  FUN_01274e70  size=46  [run]
undefined4 FUN_01274e70(void)

{
  undefined4 local_80;
  
  hkpMountedBallGun::hkpMountedBallGun(0);
  return local_80;
}

// 01274EA0  FUN_01274ea0  size=8  [run]
undefined4 FUN_01274ea0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01274EB0  hkpAction::hkpAction_13  size=37  [run]
undefined4 * __thiscall hkpAction::hkpAction_13(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  *param_1 = hkpMotorAction::vftable;
  return param_1;
}

// 01274F00  hkpAction::hkpAction_12  size=38  [run]
void hkpAction::hkpAction_12(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    *param_1 = hkpMotorAction::vftable;
  }
  return;
}

// 01274F30  FUN_01274f30  size=16  [run]
void FUN_01274f30(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01274F40  hkpAction::hkpAction_30  size=55  [run]
undefined ** hkpAction::hkpAction_30(void)

{
  FUN_010065b0(0);
  return hkpMotorAction::vftable;
}

// 01274F80  FUN_01274f80  size=38  [run]
void FUN_01274f80(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01274FB0  hkpMotorAction::vf00  size=52  [run]
int __thiscall hkpMotorAction::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_29();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01274FF0  FUN_01274ff0  size=8  [run]
undefined4 FUN_01274ff0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01275010  FUN_01275010  size=16  [run]
void FUN_01275010(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01275020  hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_4  size=74  [run]
void hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = vftable;
    param_1[3] = hkpShapeCollectionFilter::vftable;
    param_1[4] = hkpRayShapeCollectionFilter::vftable;
    param_1[5] = hkpRayCollidableFilter::vftable;
    *param_1 = hkpGroupCollisionFilter::vftable;
    param_1[2] = hkpGroupCollisionFilter::vftable;
    param_1[3] = hkpGroupCollisionFilter::vftable;
    param_1[4] = hkpGroupCollisionFilter::vftable;
    param_1[5] = hkpGroupCollisionFilter::vftable;
  }
  return;
}

// 01275070  FUN_01275070  size=6  [run]
undefined ** FUN_01275070(void)

{
  return hkpGroupCollisionFilter::vftable;
}

// 01275100  hkpGroupCollisionFilter::vf00  size=8  [run]
void hkpGroupCollisionFilter::vf00(void)

{
  vf00();
  return;
}

// 01275110  hkpGroupCollisionFilter::vf0C  size=8  [run]
void hkpGroupCollisionFilter::vf0C(void)

{
  vf00();
  return;
}

// 01275120  hkpGroupCollisionFilter::vf04  size=8  [run]
void hkpGroupCollisionFilter::vf04(void)

{
  vf00();
  return;
}

// 01275130  hkpGroupCollisionFilter::vf00  size=8  [run]
void hkpGroupCollisionFilter::vf00(void)

{
  vf00();
  return;
}

// 01275140  FUN_01275140  size=38  [run]
void FUN_01275140(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01275170  hkpGroupCollisionFilter::vf00  size=81  [run]
undefined4 * __thiscall hkpGroupCollisionFilter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[5] = hkpRayCollidableFilter::vftable;
  param_1[4] = hkpRayShapeCollectionFilter::vftable;
  param_1[3] = hkpShapeCollectionFilter::vftable;
  param_1[2] = hkpCollidableCollidableFilter::vftable;
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 012751D0  FUN_012751d0  size=8  [run]
undefined4 FUN_012751d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012751F0  FUN_012751f0  size=21  [run]
void FUN_012751f0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpGravityGun::hkpGravityGun_2(param_2);
  }
  return;
}

// 01275210  FUN_01275210  size=16  [run]
void FUN_01275210(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01275220  FUN_01275220  size=46  [run]
undefined4 FUN_01275220(void)

{
  undefined4 local_70;
  
  hkpGravityGun::hkpGravityGun_2(0);
  return local_70;
}

// 01275250  FUN_01275250  size=8  [run]
undefined4 FUN_01275250(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01275270  FUN_01275270  size=21  [run]
void FUN_01275270(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpFirstPersonGun::hkpFirstPersonGun_2(param_2);
  }
  return;
}

// 01275290  FUN_01275290  size=16  [run]
void FUN_01275290(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 012752A0  FUN_012752a0  size=46  [run]
undefined4 FUN_012752a0(void)

{
  undefined4 local_30;
  
  hkpFirstPersonGun::hkpFirstPersonGun_2(0);
  return local_30;
}

// 012752E0  FUN_012752e0  size=8  [run]
undefined4 FUN_012752e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012752F0  FUN_012752f0  size=8  [run]
undefined4 FUN_012752f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01275300  FUN_01275300  size=8  [run]
undefined4 FUN_01275300(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01275320  FUN_01275320  size=16  [run]
void FUN_01275320(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01275340  FUN_01275340  size=16  [run]
void FUN_01275340(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01275360  FUN_01275360  size=16  [run]
void FUN_01275360(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01275370  hkpDisplayBindingData::RigidBody::RigidBody  size=18  [run]
void hkpDisplayBindingData::RigidBody::RigidBody(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01275390  FUN_01275390  size=6  [run]
undefined ** FUN_01275390(void)

{
  return hkpDisplayBindingData::RigidBody::vftable;
}

// 012753A0  hkpDisplayBindingData::PhysicsSystem::PhysicsSystem  size=18  [run]
void hkpDisplayBindingData::PhysicsSystem::PhysicsSystem(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 012753C0  FUN_012753c0  size=6  [run]
undefined ** FUN_012753c0(void)

{
  return hkpDisplayBindingData::PhysicsSystem::vftable;
}

// 012753D0  hkpDisplayBindingData::hkpDisplayBindingData  size=18  [run]
void hkpDisplayBindingData::hkpDisplayBindingData(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 012753F0  FUN_012753f0  size=6  [run]
undefined ** FUN_012753f0(void)

{
  return hkpDisplayBindingData::vftable;
}

// 01275430  FUN_01275430  size=22  [run]
void __fastcall FUN_01275430(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01275470  FUN_01275470  size=22  [run]
void __fastcall FUN_01275470(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 012754B0  FUN_012754b0  size=26  [run]
void __thiscall FUN_012754b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 012754E0  FUN_012754e0  size=26  [run]
void __thiscall FUN_012754e0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01275500  FUN_01275500  size=22  [run]
void __fastcall FUN_01275500(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01275520  FUN_01275520  size=22  [run]
void __fastcall FUN_01275520(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01275550  FUN_01275550  size=38  [run]
void FUN_01275550(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01275580  hkBaseObject::hkBaseObject_137  size=49  [run]
void __fastcall hkBaseObject::hkBaseObject_137(undefined4 *param_1)

{
  if (param_1[3] != 0) {
    FUN_010060a0();
  }
  param_1[3] = 0;
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 012755E0  FUN_012755e0  size=39  [run]
void FUN_012755e0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 01275610  FUN_01275610  size=39  [run]
void FUN_01275610(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 01275640  hkpDisplayBindingData::RigidBody::vf00  size=91  [run]
undefined4 * __thiscall hkpDisplayBindingData::RigidBody::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (param_1[3] != 0) {
    FUN_010060a0();
  }
  param_1[3] = 0;
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 012756A0  FUN_012756a0  size=61  [run]
int * __thiscall FUN_012756a0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 012756E0  FUN_012756e0  size=61  [run]
int * __thiscall FUN_012756e0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 01275720  FUN_01275720  size=43  [run]
void FUN_01275720(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 01275750  FUN_01275750  size=43  [run]
void FUN_01275750(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 01275800  FUN_01275800  size=97  [run]
void __thiscall FUN_01275800(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01275870  FUN_01275870  size=97  [run]
void __thiscall FUN_01275870(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 012758E0  FUN_012758e0  size=100  [run]
void __fastcall FUN_012758e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01275950  FUN_01275950  size=100  [run]
void __fastcall FUN_01275950(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 012759C0  FUN_012759c0  size=100  [run]
void __fastcall FUN_012759c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01275A30  FUN_01275a30  size=100  [run]
void __fastcall FUN_01275a30(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01275AB0  FUN_01275ab0  size=38  [run]
void FUN_01275ab0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01275AF0  FUN_01275af0  size=38  [run]
void FUN_01275af0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01275B20  hkBaseObject::hkBaseObject_131  size=124  [run]
void __fastcall hkBaseObject::hkBaseObject_131(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[5] != 0) {
    FUN_010060a0();
  }
  param_1[5] = 0;
  iVar2 = param_1[3] + -1;
  iVar1 = param_1[2];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01275BA0  hkBaseObject::hkBaseObject_132  size=203  [run]
void __fastcall hkBaseObject::hkBaseObject_132(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[5];
  iVar2 = param_1[6] + -1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  iVar2 = param_1[3] + -1;
  iVar1 = param_1[2];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01275C70  hkpDisplayBindingData::PhysicsSystem::vf00  size=52  [run]
int __thiscall hkpDisplayBindingData::PhysicsSystem::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_131();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01275CB0  hkpDisplayBindingData::vf00  size=52  [run]
int __thiscall hkpDisplayBindingData::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_132();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01275CF0  FUN_01275cf0  size=8  [run]
undefined4 FUN_01275cf0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01275D10  FUN_01275d10  size=16  [run]
void FUN_01275d10(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01275D20  hkpEntityListener::hkpEntityListener_6  size=88  [run]
void hkpEntityListener::hkpEntityListener_6(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = hkpCollidableCollidableFilter::vftable;
    param_1[3] = hkpShapeCollectionFilter::vftable;
    param_1[4] = hkpRayShapeCollectionFilter::vftable;
    param_1[5] = hkpRayCollidableFilter::vftable;
    param_1[0xc] = vftable;
    *param_1 = hkpDisableEntityCollisionFilter::vftable;
    param_1[2] = hkpDisableEntityCollisionFilter::vftable;
    param_1[3] = hkpDisableEntityCollisionFilter::vftable;
    param_1[4] = hkpDisableEntityCollisionFilter::vftable;
    param_1[5] = hkpDisableEntityCollisionFilter::vftable;
    param_1[0xc] = hkpDisableEntityCollisionFilter::vftable;
  }
  return;
}

// 01275D80  FUN_01275d80  size=6  [run]
undefined ** FUN_01275d80(void)

{
  return hkpDisableEntityCollisionFilter::vftable;
}

// 01275DF0  hkpDisableEntityCollisionFilter::vf00  size=8  [run]
void hkpDisableEntityCollisionFilter::vf00(void)

{
  vf00();
  return;
}

// 01275E00  hkpDisableEntityCollisionFilter::vf0C  size=8  [run]
void hkpDisableEntityCollisionFilter::vf0C(void)

{
  vf00();
  return;
}

// 01275E10  hkpDisableEntityCollisionFilter::vf04  size=8  [run]
void hkpDisableEntityCollisionFilter::vf04(void)

{
  vf00();
  return;
}

// 01275E20  hkpDisableEntityCollisionFilter::vf00  size=8  [run]
void hkpDisableEntityCollisionFilter::vf00(void)

{
  vf00();
  return;
}

// 01275E30  hkpDisableEntityCollisionFilter::vf00  size=8  [run]
void hkpDisableEntityCollisionFilter::vf00(void)

{
  vf00();
  return;
}

// 01275E40  FUN_01275e40  size=38  [run]
void FUN_01275e40(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01275E70  hkpDisableEntityCollisionFilter::vf00  size=52  [run]
int __thiscall hkpDisableEntityCollisionFilter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_49();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01275EB0  FUN_01275eb0  size=8  [run]
undefined4 FUN_01275eb0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01275EC0  hkpAction::hkpAction_9  size=37  [run]
undefined4 * __thiscall hkpAction::hkpAction_9(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  *param_1 = hkpDashpotAction::vftable;
  return param_1;
}

// 01275F10  hkpAction::hkpAction_8  size=38  [run]
void hkpAction::hkpAction_8(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    *param_1 = hkpDashpotAction::vftable;
  }
  return;
}

// 01275F40  FUN_01275f40  size=16  [run]
void FUN_01275f40(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01275F50  hkpAction::hkpAction_28  size=55  [run]
undefined ** hkpAction::hkpAction_28(void)

{
  FUN_010065b0(0);
  return hkpDashpotAction::vftable;
}

// 01275F90  FUN_01275f90  size=38  [run]
void FUN_01275f90(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01275FC0  hkpDashpotAction::vf00  size=52  [run]
int __thiscall hkpDashpotAction::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_31();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01276000  FUN_01276000  size=8  [run]
undefined4 FUN_01276000(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01276020  FUN_01276020  size=16  [run]
void FUN_01276020(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01276030  hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_3  size=88  [run]
void hkpCollidableCollidableFilter::hkpCollidableCollidableFilter_3(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = vftable;
    param_1[3] = hkpShapeCollectionFilter::vftable;
    param_1[4] = hkpRayShapeCollectionFilter::vftable;
    param_1[5] = hkpRayCollidableFilter::vftable;
    param_1[0xc] = hkpConstraintListener::vftable;
    *param_1 = hkpConstrainedSystemFilter::vftable;
    param_1[2] = hkpConstrainedSystemFilter::vftable;
    param_1[3] = hkpConstrainedSystemFilter::vftable;
    param_1[4] = hkpConstrainedSystemFilter::vftable;
    param_1[5] = hkpConstrainedSystemFilter::vftable;
    param_1[0xc] = hkpConstrainedSystemFilter::vftable;
  }
  return;
}

// 01276090  FUN_01276090  size=6  [run]
undefined ** FUN_01276090(void)

{
  return hkpConstrainedSystemFilter::vftable;
}

// 01276100  hkpConstrainedSystemFilter::vf08  size=6  [run]
undefined * hkpConstrainedSystemFilter::vf08(void)

{
  return &DAT_020ad2a0;
}

// 01276110  hkpConstrainedSystemFilter::vf00  size=8  [run]
void hkpConstrainedSystemFilter::vf00(void)

{
  vf00();
  return;
}

// 01276120  hkpConstrainedSystemFilter::vf0C  size=8  [run]
void hkpConstrainedSystemFilter::vf0C(void)

{
  vf00();
  return;
}

// 01276130  hkpConstrainedSystemFilter::vf04  size=8  [run]
void hkpConstrainedSystemFilter::vf04(void)

{
  vf00();
  return;
}

// 01276140  hkpConstrainedSystemFilter::vf00  size=8  [run]
void hkpConstrainedSystemFilter::vf00(void)

{
  vf00();
  return;
}

// 01276150  hkpConstrainedSystemFilter::vf00  size=8  [run]
void hkpConstrainedSystemFilter::vf00(void)

{
  vf00();
  return;
}

// 01276160  FUN_01276160  size=38  [run]
void FUN_01276160(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01276190  hkpConstrainedSystemFilter::vf00  size=52  [run]
int __thiscall hkpConstrainedSystemFilter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_225();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 012761E0  FUN_012761e0  size=8  [run]
undefined4 FUN_012761e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01276210  hkpCharacterRigidBodyCinfo::hkpCharacterRigidBodyCinfo  size=18  [run]
void hkpCharacterRigidBodyCinfo::hkpCharacterRigidBodyCinfo(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01276230  FUN_01276230  size=16  [run]
void FUN_01276230(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01276240  FUN_01276240  size=6  [run]
undefined ** FUN_01276240(void)

{
  return hkpCharacterRigidBodyCinfo::vftable;
}

// 01276250  FUN_01276250  size=8  [run]
undefined4 FUN_01276250(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01276280  hkpCharacterProxyCinfo::hkpCharacterProxyCinfo  size=18  [run]
void hkpCharacterProxyCinfo::hkpCharacterProxyCinfo(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 012762A0  FUN_012762a0  size=16  [run]
void FUN_012762a0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 012762B0  FUN_012762b0  size=6  [run]
undefined ** FUN_012762b0(void)

{
  return hkpCharacterProxyCinfo::vftable;
}

// 012762C0  FUN_012762c0  size=8  [run]
undefined4 FUN_012762c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012762E0  hkpCharacterControllerCinfo::hkpCharacterControllerCinfo  size=18  [run]
void hkpCharacterControllerCinfo::hkpCharacterControllerCinfo(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01276300  FUN_01276300  size=16  [run]
void FUN_01276300(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01276310  FUN_01276310  size=6  [run]
undefined ** FUN_01276310(void)

{
  return hkpCharacterControllerCinfo::vftable;
}

// 01276320  FUN_01276320  size=8  [run]
undefined4 FUN_01276320(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01276340  FUN_01276340  size=21  [run]
void FUN_01276340(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkpBallGun::hkpBallGun(param_2);
  }
  return;
}

// 01276360  FUN_01276360  size=16  [run]
void FUN_01276360(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01276370  FUN_01276370  size=46  [run]
undefined4 FUN_01276370(void)

{
  undefined4 local_70;
  
  hkpBallGun::hkpBallGun(0);
  return local_70;
}

// 012763A0  FUN_012763a0  size=8  [run]
undefined4 FUN_012763a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012763B0  hkpAction::hkpAction_6  size=37  [run]
undefined4 * __thiscall hkpAction::hkpAction_6(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  *param_1 = hkpAngularDashpotAction::vftable;
  return param_1;
}

// 01276400  hkpAction::hkpAction_7  size=38  [run]
void hkpAction::hkpAction_7(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    *param_1 = hkpAngularDashpotAction::vftable;
  }
  return;
}

// 01276430  FUN_01276430  size=16  [run]
void FUN_01276430(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01276440  hkpAction::hkpAction_27  size=55  [run]
undefined ** hkpAction::hkpAction_27(void)

{
  FUN_010065b0(0);
  return hkpAngularDashpotAction::vftable;
}

// 01276480  FUN_01276480  size=38  [run]
void FUN_01276480(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012764B0  hkpAngularDashpotAction::vf00  size=52  [run]
int __thiscall hkpAngularDashpotAction::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_31();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 012766D0  FUN_012766d0  size=21  [run]
void FUN_012766d0(void)

{
  FUN_01446db0();
  PTR_FUN_01b1c010 = &LAB_012764f0;
  return;
}

// 01276800  FUN_01276800  size=61  [run]
void __thiscall
FUN_01276800(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[0xc] = param_6;
  param_1[8] = param_2;
  param_1[0xb] = param_5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 01276840  FUN_01276840  size=59  [run]
void __thiscall
FUN_01276840(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[0xc] = 0;
  param_1[8] = param_2;
  param_1[0xb] = param_5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 01276880  FUN_01276880  size=62  [run]
void __thiscall
FUN_01276880(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  param_1[9] = param_3;
  param_1[10] = param_4;
  param_1[0xc] = param_5;
  param_1[8] = param_2;
  param_1[0xb] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 012769B0  FUN_012769b0  size=471  [run]
void __thiscall FUN_012769b0(float *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  undefined1 in_XMM4 [16];
  undefined1 auVar18 [16];
  float fVar20;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtTriangle";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  fVar4 = *(float *)(param_2 + 0x30) - *(float *)(param_2 + 0x20);
  fVar6 = *(float *)(param_2 + 0x34) - *(float *)(param_2 + 0x24);
  fVar8 = *(float *)(param_2 + 0x38) - *(float *)(param_2 + 0x28);
  fVar10 = *(float *)(param_2 + 0x3c) - *(float *)(param_2 + 0x2c);
  fVar14 = *(float *)(param_2 + 0x40) - *(float *)(param_2 + 0x20);
  fVar15 = *(float *)(param_2 + 0x44) - *(float *)(param_2 + 0x24);
  fVar16 = *(float *)(param_2 + 0x48) - *(float *)(param_2 + 0x28);
  fVar17 = *(float *)(param_2 + 0x4c) - *(float *)(param_2 + 0x2c);
  local_40 = fVar16 * fVar6 - fVar15 * fVar8;
  fStack_3c = fVar14 * fVar8 - fVar16 * fVar4;
  fStack_38 = fVar15 * fVar4 - fVar14 * fVar6;
  fVar5 = local_40 * local_40;
  fVar7 = fStack_3c * fStack_3c;
  fVar9 = fStack_38 * fStack_38;
  fVar11 = fVar7 + fVar5 + fVar9;
  fVar12 = fVar7 + fVar5 + fVar9;
  fVar13 = fVar7 + fVar5 + fVar9;
  fVar9 = fVar7 + fVar5 + fVar9;
  auVar18._4_4_ = fVar12;
  auVar18._0_4_ = fVar11;
  auVar18._8_4_ = fVar13;
  auVar18._12_4_ = fVar9;
  auVar18 = rsqrtps(in_XMM4,auVar18);
  fVar5 = auVar18._0_4_;
  fVar7 = auVar18._4_4_;
  fVar19 = auVar18._8_4_;
  fVar20 = auVar18._12_4_;
  local_14 = (float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar5 * fVar11 * fVar5) * fVar5 * 0.5))
  ;
  local_40 = local_14 * local_40;
  fStack_3c = (float)(~-(uint)(fVar12 <= 0.0) & (uint)((3.0 - fVar7 * fVar12 * fVar7) * fVar7 * 0.5)
                     ) * fStack_3c;
  fStack_38 = (float)(~-(uint)(fVar13 <= 0.0) &
                     (uint)((3.0 - fVar19 * fVar13 * fVar19) * fVar19 * 0.5)) * fStack_38;
  fStack_34 = (float)(~-(uint)(fVar9 <= 0.0) &
                     (uint)((3.0 - fVar20 * fVar9 * fVar20) * fVar20 * 0.5)) *
              (fVar17 * fVar10 - fVar17 * fVar10);
  local_14 = local_14 * fVar11;
  FUN_01006f50(param_3,&local_40);
  local_30 = (fVar14 + fVar4) * 0.33333334 + *(float *)(param_2 + 0x20);
  fStack_2c = (fVar15 + fVar6) * 0.33333334 + *(float *)(param_2 + 0x24);
  fStack_28 = (fVar16 + fVar8) * 0.33333334 + *(float *)(param_2 + 0x28);
  fStack_24 = (fVar17 + fVar10) * 0.33333334 + *(float *)(param_2 + 0x2c);
  FUN_01007050(param_3,&local_30);
  FUN_012783d0(&local_30,&local_50);
  local_50 = local_50 * local_40;
  fStack_4c = fStack_4c * fStack_3c;
  fStack_48 = fStack_48 * fStack_38;
  fVar4 = param_1[8];
  fVar8 = local_14 * 0.5;
  fVar5 = (fStack_4c + local_50 + fStack_48) * fVar8 * local_40;
  fVar6 = (fStack_4c + local_50 + fStack_48) * fVar8 * fStack_3c;
  fVar7 = (fStack_4c + local_50 + fStack_48) * fVar8 * fStack_38;
  fVar8 = (fStack_4c + local_50 + fStack_48) * fVar8 * fStack_34;
  fVar9 = local_30 - *(float *)((int)fVar4 + 0x140);
  fVar10 = fStack_2c - *(float *)((int)fVar4 + 0x144);
  fVar11 = fStack_28 - *(float *)((int)fVar4 + 0x148);
  fVar4 = fStack_24 - *(float *)((int)fVar4 + 0x14c);
  *param_1 = fVar5 + *param_1;
  param_1[1] = fVar6 + param_1[1];
  param_1[2] = fVar7 + param_1[2];
  param_1[3] = fVar8 + param_1[3];
  param_1[4] = (fVar10 * fVar7 - fVar11 * fVar6) + param_1[4];
  param_1[5] = (fVar11 * fVar5 - fVar9 * fVar7) + param_1[5];
  param_1[6] = (fVar9 * fVar6 - fVar10 * fVar5) + param_1[6];
  param_1[7] = (fVar4 * fVar8 - fVar4 * fVar8) + param_1[7];
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return;
}

// 01276B90  FUN_01276b90  size=509  [run]
void __thiscall
FUN_01276b90(float *param_1,float *param_2,float *param_3,float param_4,float *param_5,
            float *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_14;
  
  fVar13 = *param_2 - *param_3;
  fVar14 = param_2[1] - param_3[1];
  fVar15 = param_2[2] - param_3[2];
  fVar17 = param_2[3] - param_3[3];
  auVar19._4_4_ = -(uint)(ABS(fVar14) <= 0.001);
  auVar19._0_4_ = -(uint)(ABS(fVar13) <= 0.001);
  auVar19._8_4_ = -(uint)(ABS(fVar15) <= 0.001);
  auVar19._12_4_ = -(uint)(ABS(fVar17) <= 0.001);
  uVar3 = movmskps(param_1,auVar19);
  if (((byte)uVar3 & 7) == 7) {
    FUN_012783d0(param_2,param_6);
    *param_5 = 0.0;
    param_5[1] = 1.0;
    param_5[2] = 0.0;
    param_5[3] = 0.0;
    return;
  }
  *param_5 = fVar13;
  param_5[1] = fVar14;
  param_5[2] = fVar15;
  param_5[3] = fVar17;
  local_30 = fVar13 * 0.5 + *param_3;
  fStack_2c = fVar14 * 0.5 + param_3[1];
  fStack_28 = fVar15 * 0.5 + param_3[2];
  fStack_24 = fVar17 * 0.5 + param_3[3];
  fVar8 = fVar13 * fVar13;
  fVar9 = fVar14 * fVar14;
  fVar10 = fVar15 * fVar15;
  local_14 = fVar9 + fVar8 + fVar10;
  fVar11 = fVar9 + fVar8 + fVar10;
  fVar12 = fVar9 + fVar8 + fVar10;
  fVar10 = fVar9 + fVar8 + fVar10;
  auVar1._4_4_ = fVar11;
  auVar1._0_4_ = local_14;
  auVar1._8_4_ = fVar12;
  auVar1._12_4_ = fVar10;
  auVar19 = rsqrtps(in_XMM4,auVar1);
  fVar8 = auVar19._0_4_;
  fVar9 = auVar19._4_4_;
  fVar16 = auVar19._8_4_;
  fVar18 = auVar19._12_4_;
  fVar8 = (float)(~-(uint)(local_14 <= 0.0) & (uint)((3.0 - fVar8 * local_14 * fVar8) * fVar8 * 0.5)
                 );
  local_14 = fVar8 * local_14;
  *param_5 = fVar13 * fVar8;
  param_5[1] = fVar14 * (float)(~-(uint)(fVar11 <= 0.0) &
                               (uint)((3.0 - fVar9 * fVar11 * fVar9) * fVar9 * 0.5));
  param_5[2] = fVar15 * (float)(~-(uint)(fVar12 <= 0.0) &
                               (uint)((3.0 - fVar16 * fVar12 * fVar16) * fVar16 * 0.5));
  param_5[3] = fVar17 * (float)(~-(uint)(fVar10 <= 0.0) &
                               (uint)((3.0 - fVar18 * fVar10 * fVar18) * fVar18 * 0.5));
  FUN_012783d0(&local_30,param_6);
  fVar13 = *param_6 * *param_5;
  fVar14 = param_6[1] * param_5[1];
  fVar15 = param_6[2] * param_5[2];
  fVar18 = *param_6 - (fVar14 + fVar13 + fVar15) * *param_5;
  fVar20 = param_6[1] - (fVar14 + fVar13 + fVar15) * param_5[1];
  fVar21 = param_6[2] - (fVar14 + fVar13 + fVar15) * param_5[2];
  fVar22 = param_6[3] - (fVar14 + fVar13 + fVar15) * param_5[3];
  fVar13 = fVar18 * fVar18;
  fVar14 = fVar20 * fVar20;
  fVar17 = fVar21 * fVar21;
  fVar15 = fVar14 + fVar13 + fVar17;
  fVar8 = fVar14 + fVar13 + fVar17;
  fVar9 = fVar14 + fVar13 + fVar17;
  fVar17 = fVar14 + fVar13 + fVar17;
  fVar10 = local_14 * 1.5707964 * param_4;
  uVar4 = -(uint)(0.0 - fVar15 < 0.0);
  uVar5 = -(uint)(0.0 - fVar8 < 0.0);
  uVar6 = -(uint)(0.0 - fVar9 < 0.0);
  uVar7 = -(uint)(0.0 - fVar17 < 0.0);
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar15;
  auVar2._8_4_ = fVar9;
  auVar2._12_4_ = fVar17;
  auVar19 = rsqrtps(ZEXT816(0),auVar2);
  fVar14 = auVar19._0_4_;
  fVar23 = auVar19._4_4_;
  fVar24 = auVar19._8_4_;
  fVar25 = auVar19._12_4_;
  fVar11 = fVar10 * fVar18;
  fVar12 = fVar10 * fVar20;
  fVar16 = fVar10 * fVar21;
  fVar10 = fVar10 * fVar22;
  param_4 = param_4 * -0.63661975;
  fVar13 = param_1[8];
  fVar14 = ((float)((uint)((float)(~-(uint)(fVar15 <= 0.0) &
                                  (uint)((3.0 - fVar14 * fVar15 * fVar14) * fVar14 * 0.5)) * fVar18)
                    & uVar4 | ~uVar4 & (uint)fVar18) * param_4 + local_30) -
           *(float *)((int)fVar13 + 0x140);
  fVar15 = ((float)((uint)((float)(~-(uint)(fVar8 <= 0.0) &
                                  (uint)((3.0 - fVar23 * fVar8 * fVar23) * fVar23 * 0.5)) * fVar20)
                    & uVar5 | ~uVar5 & (uint)fVar20) * param_4 + fStack_2c) -
           *(float *)((int)fVar13 + 0x144);
  fVar8 = ((float)((uint)((float)(~-(uint)(fVar9 <= 0.0) &
                                 (uint)((3.0 - fVar24 * fVar9 * fVar24) * fVar24 * 0.5)) * fVar21) &
                   uVar6 | ~uVar6 & (uint)fVar21) * param_4 + fStack_28) -
          *(float *)((int)fVar13 + 0x148);
  fVar13 = ((float)((uint)((float)(~-(uint)(fVar17 <= 0.0) &
                                  (uint)((3.0 - fVar25 * fVar17 * fVar25) * fVar25 * 0.5)) * fVar22)
                    & uVar7 | ~uVar7 & (uint)fVar22) * param_4 + fStack_24) -
           *(float *)((int)fVar13 + 0x14c);
  *param_1 = fVar11 + *param_1;
  param_1[1] = fVar12 + param_1[1];
  param_1[2] = fVar16 + param_1[2];
  param_1[3] = fVar10 + param_1[3];
  param_1[4] = (fVar15 * fVar16 - fVar8 * fVar12) + param_1[4];
  param_1[5] = (fVar8 * fVar11 - fVar14 * fVar16) + param_1[5];
  param_1[6] = (fVar14 * fVar12 - fVar15 * fVar11) + param_1[6];
  param_1[7] = (fVar13 * fVar10 - fVar13 * fVar10) + param_1[7];
  return;
}

// 01276D90  FUN_01276d90  size=366  [run]
void __thiscall FUN_01276d90(float *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float fVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  float10 fVar5;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = "TtCylinder";
    uVar3 = rdtsc();
    local_14 = (undefined4)uVar3;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  FUN_01007050(param_3,param_2 + 0x20);
  FUN_01007050(param_3,param_2 + 0x30);
  fVar5 = (float10)FUN_0112c400();
  local_18 = (float)fVar5;
  FUN_01276b90(&local_40,&local_30,local_18,&local_60,&local_50);
  local_1c = fStack_4c * fStack_5c + local_50 * local_60 + fStack_48 * fStack_58;
  local_20 = local_18 * 3.1415927 * local_18 * local_1c;
  local_60 = local_20 * local_60;
  fStack_5c = local_20 * fStack_5c;
  fStack_58 = local_20 * fStack_58;
  fStack_54 = local_20 * fStack_54;
  if (0.0 <= local_1c) {
    fVar2 = param_1[8];
    local_40 = local_30 - *(float *)((int)fVar2 + 0x140);
    fStack_3c = fStack_2c - *(float *)((int)fVar2 + 0x144);
    fStack_38 = fStack_28 - *(float *)((int)fVar2 + 0x148);
    fStack_34 = fStack_24 - *(float *)((int)fVar2 + 0x14c);
  }
  else {
    fVar2 = param_1[8];
    local_40 = local_40 - *(float *)((int)fVar2 + 0x140);
    fStack_3c = fStack_3c - *(float *)((int)fVar2 + 0x144);
    fStack_38 = fStack_38 - *(float *)((int)fVar2 + 0x148);
    fStack_34 = fStack_34 - *(float *)((int)fVar2 + 0x14c);
  }
  *param_1 = *param_1 + local_60;
  param_1[1] = param_1[1] + fStack_5c;
  param_1[2] = param_1[2] + fStack_58;
  param_1[3] = param_1[3] + fStack_54;
  param_1[4] = (fStack_3c * fStack_58 - fStack_38 * fStack_5c) + param_1[4];
  param_1[5] = (fStack_38 * local_60 - local_40 * fStack_58) + param_1[5];
  param_1[6] = (local_40 * fStack_5c - fStack_3c * local_60) + param_1[6];
  param_1[7] = (fStack_34 * fStack_54 - fStack_34 * fStack_54) + param_1[7];
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  return;
}

// 01276F00  FUN_01276f00  size=399  [run]
void __thiscall FUN_01276f00(float *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_14;
  
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = "TtSphere";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  local_30 = *(float *)(param_3 + 0x30);
  fStack_2c = *(float *)(param_3 + 0x34);
  fStack_28 = *(float *)(param_3 + 0x38);
  fStack_24 = *(float *)(param_3 + 0x3c);
  local_14 = *(float *)(param_2 + 0x10);
  FUN_012783d0(&local_30,&local_40);
  fVar5 = local_40 * local_40;
  fVar6 = fStack_3c * fStack_3c;
  fVar7 = fStack_38 * fStack_38;
  if (0.0 < fVar6 + fVar5 + fVar7) {
    fVar2 = param_1[8];
    fVar8 = fVar6 + fVar5 + fVar7;
    fVar11 = fVar6 + fVar5 + fVar7;
    fVar13 = fVar6 + fVar5 + fVar7;
    fVar7 = fVar6 + fVar5 + fVar7;
    auVar16._4_4_ = fVar11;
    auVar16._0_4_ = fVar8;
    auVar16._8_4_ = fVar13;
    auVar16._12_4_ = fVar7;
    auVar16 = rsqrtps(in_XMM3,auVar16);
    fVar5 = auVar16._0_4_;
    fVar6 = auVar16._4_4_;
    fVar17 = auVar16._8_4_;
    fVar18 = auVar16._12_4_;
    fVar9 = local_14 * 2.0943952 * local_14;
    fVar15 = local_14 * -0.5;
    fVar10 = fVar9 * local_40;
    fVar12 = fVar9 * fStack_3c;
    fVar14 = fVar9 * fStack_38;
    fVar9 = fVar9 * fStack_34;
    fVar5 = ((float)(~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar5 * fVar8 * fVar5) * fVar5 * 0.5)) *
             local_40 * fVar15 + local_30) - *(float *)((int)fVar2 + 0x140);
    fVar6 = ((float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar6 * fVar11 * fVar6) * fVar6 * 0.5))
             * fStack_3c * fVar15 + fStack_2c) - *(float *)((int)fVar2 + 0x144);
    fVar8 = ((float)(~-(uint)(fVar13 <= 0.0) &
                    (uint)((3.0 - fVar17 * fVar13 * fVar17) * fVar17 * 0.5)) * fStack_38 * fVar15 +
            fStack_28) - *(float *)((int)fVar2 + 0x148);
    fVar7 = ((float)(~-(uint)(fVar7 <= 0.0) & (uint)((3.0 - fVar18 * fVar7 * fVar18) * fVar18 * 0.5)
                    ) * fStack_34 * fVar15 + fStack_24) - *(float *)((int)fVar2 + 0x14c);
    *param_1 = fVar10 + *param_1;
    param_1[1] = fVar12 + param_1[1];
    param_1[2] = fVar14 + param_1[2];
    param_1[3] = fVar9 + param_1[3];
    param_1[4] = (fVar6 * fVar14 - fVar8 * fVar12) + param_1[4];
    param_1[5] = (fVar8 * fVar10 - fVar5 * fVar14) + param_1[5];
    param_1[6] = (fVar5 * fVar12 - fVar6 * fVar10) + param_1[6];
    param_1[7] = (fVar7 * fVar9 - fVar7 * fVar9) + param_1[7];
  }
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  return;
}

// 01277090  FUN_01277090  size=593  [run]
void __thiscall FUN_01277090(float *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LPVOID pvVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50 [5];
  float fStack_3c;
  float fStack_38;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = "TtBox";
    uVar2 = rdtsc();
    local_14 = (int)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  FUN_012783d0(param_3 + 0x30,local_50 + 4);
  pfVar6 = local_50;
  local_1c = param_2 + 0x20;
  local_14 = 2;
  local_20 = (param_2 + 0x20) - (int)pfVar6;
  local_18 = 3;
  do {
    iVar3 = local_1c;
    iVar5 = local_14 + -1;
    local_50[0] = 0.0;
    local_50[1] = 0.0;
    local_50[2] = 0.0;
    local_50[3] = 0.0;
    *pfVar6 = *(float *)(local_20 + (int)pfVar6);
    local_24 = *(float *)(iVar3 + (iVar5 % 3) * 4) * 4.0 * *(float *)(local_1c + (local_14 % 3) * 4)
    ;
    FUN_01006f50(param_3,local_50);
    fVar7 = local_70 * local_70;
    fVar8 = fStack_6c * fStack_6c;
    fVar9 = fStack_68 * fStack_68;
    auVar15._4_4_ = fVar7;
    auVar15._0_4_ = fVar7;
    auVar15._8_4_ = fVar7;
    auVar15._12_4_ = fVar7;
    fVar12 = fVar8 + fVar7 + fVar9;
    fVar13 = fVar8 + fVar7 + fVar9;
    fVar14 = fVar8 + fVar7 + fVar9;
    fVar9 = fVar8 + fVar7 + fVar9;
    auVar16._4_4_ = fVar13;
    auVar16._0_4_ = fVar12;
    auVar16._8_4_ = fVar14;
    auVar16._12_4_ = fVar9;
    auVar16 = rsqrtps(auVar15,auVar16);
    fVar7 = auVar16._0_4_;
    fVar8 = auVar16._4_4_;
    fVar10 = auVar16._8_4_;
    fVar11 = auVar16._12_4_;
    local_70 = (float)(~-(uint)(fVar12 <= 0.0) &
                      (uint)((3.0 - fVar7 * fVar12 * fVar7) * fVar7 * 0.5)) * local_70;
    fStack_6c = (float)(~-(uint)(fVar13 <= 0.0) &
                       (uint)((3.0 - fVar8 * fVar13 * fVar8) * fVar8 * 0.5)) * fStack_6c;
    fStack_68 = (float)(~-(uint)(fVar14 <= 0.0) &
                       (uint)((3.0 - fVar10 * fVar14 * fVar10) * fVar10 * 0.5)) * fStack_68;
    fStack_64 = (float)(~-(uint)(fVar9 <= 0.0) &
                       (uint)((3.0 - fVar11 * fVar9 * fVar11) * fVar11 * 0.5)) * fStack_64;
    fVar7 = fStack_3c * fStack_6c + local_50[4] * local_70 + fStack_38 * fStack_68;
    fVar8 = fVar7 * local_24;
    fVar9 = fVar8 * local_70;
    fVar13 = fVar8 * fStack_6c;
    fVar10 = fVar8 * fStack_68;
    fVar8 = fVar8 * fStack_64;
    fStack_54 = (float)(fVar7 <= 0.0) * 2.0 - 1.0;
    local_60 = fStack_54 * local_50[0];
    fStack_5c = fStack_54 * local_50[1];
    fStack_58 = fStack_54 * local_50[2];
    fStack_54 = fStack_54 * local_50[3];
    FUN_01007050(param_3,&local_60);
    fVar7 = param_1[8];
    fVar12 = local_60 - *(float *)((int)fVar7 + 0x140);
    fVar14 = fStack_5c - *(float *)((int)fVar7 + 0x144);
    fVar11 = fStack_58 - *(float *)((int)fVar7 + 0x148);
    fVar7 = fStack_54 - *(float *)((int)fVar7 + 0x14c);
    *param_1 = fVar9 + *param_1;
    param_1[1] = fVar13 + param_1[1];
    param_1[2] = fVar10 + param_1[2];
    param_1[3] = fVar8 + param_1[3];
    local_14 = local_14 + 1;
    pfVar6 = pfVar6 + 1;
    local_18 = local_18 + -1;
    param_1[4] = (fVar14 * fVar10 - fVar11 * fVar13) + param_1[4];
    param_1[5] = (fVar11 * fVar9 - fVar12 * fVar10) + param_1[5];
    param_1[6] = (fVar12 * fVar13 - fVar14 * fVar9) + param_1[6];
    param_1[7] = (fVar7 * fVar8 - fVar7 * fVar8) + param_1[7];
  } while (local_18 != 0);
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  return;
}

// 012772F0  FUN_012772f0  size=1264  [run]
void __thiscall FUN_012772f0(float *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  LPVOID pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 in_XMM4 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  pvVar5 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar5 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
    *puVar1 = "TtCapsule";
    uVar2 = rdtsc();
    local_14 = (float)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
  }
  FUN_01007050(param_3,param_2 + 0x20);
  FUN_01007050(param_3,param_2 + 0x30);
  local_24 = *(float *)(param_2 + 0x10);
  FUN_01276b90(&local_60,&local_40,local_24,&local_50,&local_70);
  fVar10 = local_70 * local_70;
  fVar12 = fStack_6c * fStack_6c;
  fVar13 = fStack_68 * fStack_68;
  fVar14 = fVar12 + fVar10 + fVar13;
  auVar40._4_4_ = fVar12 + fVar10 + fVar13;
  auVar40._0_4_ = fVar14;
  auVar40._8_4_ = fVar12 + fVar10 + fVar13;
  auVar40._12_4_ = fVar12 + fVar10 + fVar13;
  auVar40 = rsqrtps(in_XMM4,auVar40);
  fVar10 = auVar40._0_4_;
  auVar41._0_12_ = ZEXT812(0);
  auVar41._12_4_ = 0;
  local_1c = (float)(~-(uint)(fVar14 <= 0.0) &
                    (uint)((3.0 - fVar10 * fVar14 * fVar10) * fVar10 * 0.5 * fVar14));
  if (0.0 < local_1c) {
    local_70 = -local_70;
    fStack_6c = -fStack_6c;
    fStack_68 = -fStack_68;
    fVar10 = local_70 * local_70;
    fVar12 = fStack_6c * fStack_6c;
    fVar13 = fStack_68 * fStack_68;
    fVar14 = fVar12 + fVar10 + fVar13;
    fVar17 = fVar12 + fVar10 + fVar13;
    fVar20 = fVar12 + fVar10 + fVar13;
    fVar13 = fVar12 + fVar10 + fVar13;
    auVar3._4_4_ = fVar17;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = fVar20;
    auVar3._12_4_ = fVar13;
    auVar40 = rsqrtps(auVar40,auVar3);
    fVar10 = auVar40._0_4_;
    fVar12 = auVar40._4_4_;
    fVar22 = auVar40._8_4_;
    fVar24 = auVar40._12_4_;
    fVar36 = (float)(~-(uint)(fVar14 <= 0.0) &
                    (uint)((3.0 - fVar10 * fVar14 * fVar10) * fVar10 * 0.5)) * local_70;
    fVar37 = (float)(~-(uint)(fVar17 <= 0.0) &
                    (uint)((3.0 - fVar12 * fVar17 * fVar12) * fVar12 * 0.5)) * fStack_6c;
    fVar38 = (float)(~-(uint)(fVar20 <= 0.0) &
                    (uint)((3.0 - fVar22 * fVar20 * fVar22) * fVar22 * 0.5)) * fStack_68;
    fVar39 = (float)(~-(uint)(fVar13 <= 0.0) &
                    (uint)((3.0 - fVar24 * fVar13 * fVar24) * fVar24 * 0.5)) * fStack_64;
    fVar13 = fStack_48 * fVar37 - fStack_4c * fVar38;
    fVar17 = local_50 * fVar38 - fStack_48 * fVar36;
    fVar20 = fStack_4c * fVar36 - local_50 * fVar37;
    fVar22 = fStack_44 * fVar39 - fStack_44 * fVar39;
    fVar10 = fVar13 * fVar13;
    fVar12 = fVar17 * fVar17;
    fVar14 = fVar20 * fVar20;
    fVar24 = fVar12 + fVar10 + fVar14;
    fVar27 = fVar12 + fVar10 + fVar14;
    fVar30 = fVar12 + fVar10 + fVar14;
    fVar14 = fVar12 + fVar10 + fVar14;
    uVar6 = -(uint)(0.0 - fVar24 < 0.0);
    uVar7 = -(uint)(0.0 - fVar27 < 0.0);
    uVar8 = -(uint)(0.0 - fVar30 < 0.0);
    uVar9 = -(uint)(0.0 - fVar14 < 0.0);
    auVar4._4_4_ = fVar27;
    auVar4._0_4_ = fVar24;
    auVar4._8_4_ = fVar30;
    auVar4._12_4_ = fVar14;
    auVar40 = rsqrtps(auVar41,auVar4);
    fVar10 = auVar40._0_4_;
    fVar12 = auVar40._4_4_;
    fVar31 = auVar40._8_4_;
    fVar42 = auVar40._12_4_;
    fVar10 = (float)((uint)((float)(~-(uint)(fVar24 <= 0.0) &
                                   (uint)((3.0 - fVar10 * fVar24 * fVar10) * fVar10 * 0.5)) * fVar13
                           ) & uVar6 | ~uVar6 & (uint)fVar13);
    fVar12 = (float)((uint)((float)(~-(uint)(fVar27 <= 0.0) &
                                   (uint)((3.0 - fVar12 * fVar27 * fVar12) * fVar12 * 0.5)) * fVar17
                           ) & uVar7 | ~uVar7 & (uint)fVar17);
    fVar13 = (float)((uint)((float)(~-(uint)(fVar30 <= 0.0) &
                                   (uint)((3.0 - fVar31 * fVar30 * fVar31) * fVar31 * 0.5)) * fVar20
                           ) & uVar8 | ~uVar8 & (uint)fVar20);
    fStack_44 = (float)((uint)((float)(~-(uint)(fVar14 <= 0.0) &
                                      (uint)((3.0 - fVar42 * fVar14 * fVar42) * fVar42 * 0.5)) *
                              fVar22) & uVar9 | ~uVar9 & (uint)fVar22);
    fVar17 = fVar13 * fVar37 - fVar12 * fVar38;
    fVar20 = fVar10 * fVar38 - fVar13 * fVar36;
    fVar22 = fVar12 * fVar36 - fVar10 * fVar37;
    fVar24 = fStack_44 * fVar39 - fStack_44 * fVar39;
    fVar14 = -(fStack_48 * fVar38 + fStack_4c * fVar37 + local_50 * fVar36);
    local_18 = -(fVar20 * fStack_4c + fVar17 * local_50 + fVar22 * fStack_48);
    local_14 = fVar14;
    if (ABS(fVar14) < 1.0) {
      local_50 = fVar10;
      fStack_4c = fVar12;
      fStack_48 = fVar13;
      FUN_014376e0();
      fVar10 = local_50;
      fVar12 = fStack_4c;
      fVar13 = fStack_48;
      local_20 = fVar14;
    }
    else {
      local_20 = 0.0;
      if (fVar14 <= 0.0) {
        local_20 = 3.1415927;
      }
    }
    fVar15 = local_1c * 0.6666667 * local_24 * local_24;
    local_28 = local_18 * local_14;
    local_1c = local_18 * local_18;
    fVar14 = param_1[8];
    fVar27 = local_1c * fVar15;
    fVar30 = (local_28 - local_20) * fVar15;
    fVar31 = fVar15 * 0.0;
    local_50 = local_24 * -0.25;
    fVar16 = fVar27 * fVar17 + fVar30 * fVar36 + fVar31 * fVar10;
    fVar18 = fVar27 * fVar20 + fVar30 * fVar37 + fVar31 * fVar12;
    fVar21 = fVar27 * fVar22 + fVar30 * fVar38 + fVar31 * fVar13;
    fVar23 = fVar27 * fVar24 + fVar30 * fVar39 + fVar31 * fStack_44;
    fVar27 = local_18 * local_50;
    fVar30 = (local_14 - 1.0) * local_50;
    fVar31 = local_50 * 0.0;
    fVar25 = (fVar27 * fVar17 + fVar30 * fVar36 + fVar31 * fVar10 + local_60) -
             *(float *)((int)fVar14 + 0x140);
    fVar28 = (fVar27 * fVar20 + fVar30 * fVar37 + fVar31 * fVar12 + fStack_5c) -
             *(float *)((int)fVar14 + 0x144);
    fVar32 = (fVar27 * fVar22 + fVar30 * fVar38 + fVar31 * fVar13 + fStack_58) -
             *(float *)((int)fVar14 + 0x148);
    fVar34 = (fVar27 * fVar24 + fVar30 * fVar39 + fVar31 * fStack_44 + fStack_54) -
             *(float *)((int)fVar14 + 0x14c);
    fVar27 = *param_1;
    fVar30 = param_1[1];
    fVar31 = param_1[2];
    fVar42 = param_1[3];
    *param_1 = fVar16 + fVar27;
    param_1[1] = fVar18 + fVar30;
    param_1[2] = fVar21 + fVar31;
    param_1[3] = fVar23 + fVar42;
    fVar11 = (fVar28 * fVar21 - fVar32 * fVar18) + param_1[4];
    fVar32 = (fVar32 * fVar16 - fVar25 * fVar21) + param_1[5];
    fVar25 = (fVar25 * fVar18 - fVar28 * fVar16) + param_1[6];
    fVar28 = (fVar34 * fVar23 - fVar34 * fVar23) + param_1[7];
    param_1[4] = fVar11;
    param_1[5] = fVar32;
    param_1[6] = fVar25;
    param_1[7] = fVar28;
    fVar34 = -local_1c * fVar15;
    fVar19 = (-(3.1415927 - local_20) - local_28) * fVar15;
    fVar15 = fVar15 * 0.0;
    fVar26 = fVar19 * fVar36 + fVar34 * fVar17 + fVar15 * fVar10;
    fVar29 = fVar19 * fVar37 + fVar34 * fVar20 + fVar15 * fVar12;
    fVar33 = fVar19 * fVar38 + fVar34 * fVar22 + fVar15 * fVar13;
    fVar35 = fVar19 * fVar39 + fVar34 * fVar24 + fVar15 * fStack_44;
    fVar15 = -local_18 * local_50;
    fVar34 = (-local_14 - 1.0) * local_50;
    fVar19 = local_50 * 0.0;
    fVar10 = (fVar34 * fVar36 + fVar15 * fVar17 + fVar19 * fVar10 + local_40) -
             *(float *)((int)fVar14 + 0x140);
    fVar12 = (fVar34 * fVar37 + fVar15 * fVar20 + fVar19 * fVar12 + fStack_3c) -
             *(float *)((int)fVar14 + 0x144);
    fVar13 = (fVar34 * fVar38 + fVar15 * fVar22 + fVar19 * fVar13 + fStack_38) -
             *(float *)((int)fVar14 + 0x148);
    fVar14 = (fVar34 * fVar39 + fVar15 * fVar24 + fVar19 * fStack_44 + fStack_34) -
             *(float *)((int)fVar14 + 0x14c);
    *param_1 = fVar26 + fVar16 + fVar27;
    param_1[1] = fVar29 + fVar18 + fVar30;
    param_1[2] = fVar33 + fVar21 + fVar31;
    param_1[3] = fVar35 + fVar23 + fVar42;
    param_1[4] = (fVar12 * fVar33 - fVar13 * fVar29) + fVar11;
    param_1[5] = (fVar13 * fVar26 - fVar10 * fVar33) + fVar32;
    param_1[6] = (fVar10 * fVar29 - fVar12 * fVar26) + fVar25;
    param_1[7] = (fVar14 * fVar35 - fVar14 * fVar35) + fVar28;
    fStack_4c = local_50;
    fStack_48 = local_50;
    fStack_44 = local_50;
  }
  pvVar5 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar5 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
  }
  return;
}

// 012777E0  FUN_012777e0  size=262  [run]
void __thiscall FUN_012777e0(int param_1,int *param_2,undefined4 param_3)

{
  float fVar1;
  undefined1 local_f0 [64];
  undefined1 local_b0 [48];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
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
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_60 = 0x3f800000;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0x3f800000;
  uStack_34 = 0;
  local_30 = 0.0;
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  (**(code **)(*param_2 + 0x10))(&local_60,0,&local_80);
  local_20 = (local_70 - local_80) * 0.5;
  fStack_1c = (fStack_6c - fStack_7c) * 0.5;
  fStack_18 = (fStack_68 - fStack_78) * 0.5;
  fStack_14 = (fStack_64 - fStack_74) * 0.5;
  local_60 = 0x3f800000;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_50 = 0;
  uStack_4c = 0x3f800000;
  uStack_48 = 0;
  uStack_44 = 0;
  local_30 = local_70 - local_20;
  fStack_2c = fStack_6c - fStack_1c;
  fStack_28 = fStack_68 - fStack_18;
  fStack_24 = fStack_64 - fStack_14;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0x3f800000;
  uStack_34 = 0;
  FUN_01004cf0(param_3,&local_60);
  fVar1 = *(float *)(param_1 + 0x28);
  local_20 = fVar1 * local_20;
  fStack_1c = fVar1 * fStack_1c;
  fStack_18 = fVar1 * fStack_18;
  fStack_14 = fVar1 * fStack_14;
  hkpBoxShape::hkpBoxShape(&local_20,0);
  FUN_01277090(local_b0,local_f0);
  hkBaseObject::hkBaseObject_44();
  return;
}

// 012778F0  FUN_012778f0  size=1199  [run]
void FUN_012778f0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  LPVOID pvVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 in_XMM1 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float *local_5c;
  uint local_58;
  int local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int local_34;
  uint local_30;
  int local_2c [4];
  uint local_1c;
  uint local_18;
  int local_14;
  
  pvVar5 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar5 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
    *puVar1 = "TtConvex verts";
    uVar2 = rdtsc();
    local_18 = (uint)uVar2;
    puVar1[1] = local_18;
    *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
  }
  (**(code **)(*param_1 + 0x28))(&local_50);
  FUN_01007050(param_2,&local_50);
  FUN_012783d0(&local_50,&local_70);
  FUN_0117ae40(param_1);
  local_34 = param_1[0x18];
  uVar6 = (**(code **)(*param_1 + 0x2c))();
  local_2c[3] = 0;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0x80000000;
  local_1c = uVar6;
  if (uVar6 != 0) {
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    local_2c[3] = *(int *)((int)pvVar5 + 0xc);
    uVar9 = uVar6 * 0x10 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar5 + 8) < (int)uVar9) ||
       (*(uint *)((int)pvVar5 + 0x10) < local_2c[3] + uVar9)) {
      local_14 = local_2c[3];
      local_2c[3] = FUN_0100b780(uVar9);
    }
    else {
      *(uint *)((int)pvVar5 + 0xc) = local_2c[3] + uVar9;
      local_14 = local_2c[3];
    }
  }
  local_2c[2] = uVar6 | 0x80000000;
  local_2c[0] = local_2c[3];
  FUN_01130a20(local_2c);
  iVar12 = *(int *)(local_34 + 0x18);
  uVar6 = 0;
  local_14 = 0;
  iVar8 = local_34;
  local_54 = iVar12;
  if (0 < iVar12) {
    do {
      local_30 = (uint)*(byte *)(*(int *)(iVar8 + 0x14) + local_14);
      if (local_30 < 3) {
        uVar6 = uVar6 + local_30;
      }
      else {
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        uVar9 = uVar6 & 0xffff;
        uVar6 = uVar6 + 2 & 0xffff;
        local_58 = local_30 + uVar9;
        pauVar13 = (undefined1 (*) [16])
                   ((uint)*(ushort *)(*(int *)(iVar8 + 8) + uVar9 * 2) * 0x10 + local_2c[0]);
        pfVar10 = (float *)((uint)*(ushort *)(*(int *)(iVar8 + 8) + 2 + uVar9 * 2) * 0x10 +
                           local_2c[0]);
        fVar30 = 0.0;
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        local_50 = 0.0;
        fStack_4c = 0.0;
        fStack_48 = 0.0;
        fStack_44 = 0.0;
        local_90 = 0.0;
        fStack_8c = 0.0;
        fStack_88 = 0.0;
        fStack_84 = 0.0;
        local_18 = uVar6;
        if (uVar6 + 1 < local_58) {
          local_30 = *(uint *)(local_34 + 8);
          in_XMM1 = *pauVar13;
          pfVar11 = pfVar10;
          do {
            pfVar7 = (float *)((uint)*(ushort *)(local_30 + uVar6 * 2) * 0x10 + local_2c[0]);
            pfVar10 = (float *)((uint)*(ushort *)(local_30 + 2 + uVar6 * 2) * 0x10 + local_2c[0]);
            fVar14 = *pfVar7 - in_XMM1._0_4_;
            fVar15 = pfVar7[1] - in_XMM1._4_4_;
            fVar16 = pfVar7[2] - in_XMM1._8_4_;
            fVar18 = pfVar7[3] - in_XMM1._12_4_;
            fVar19 = (pfVar10[2] - pfVar11[2]) * fVar15 - (pfVar10[1] - pfVar11[1]) * fVar16;
            fVar20 = (*pfVar10 - *pfVar11) * fVar16 - (pfVar10[2] - pfVar11[2]) * fVar14;
            fVar21 = (pfVar10[1] - pfVar11[1]) * fVar14 - (*pfVar10 - *pfVar11) * fVar15;
            fVar14 = fVar19 * fVar19;
            fVar16 = fVar20 * fVar20;
            fVar17 = fVar21 * fVar21;
            auVar24._4_4_ = fVar14;
            auVar24._0_4_ = fVar14;
            auVar24._8_4_ = fVar14;
            auVar24._12_4_ = fVar14;
            fVar15 = fVar16 + fVar14 + fVar17;
            fVar22 = fVar16 + fVar14 + fVar17;
            fVar23 = fVar16 + fVar14 + fVar17;
            fVar17 = fVar16 + fVar14 + fVar17;
            auVar25._4_4_ = fVar22;
            auVar25._0_4_ = fVar15;
            auVar25._8_4_ = fVar23;
            auVar25._12_4_ = fVar17;
            auVar25 = rsqrtps(auVar24,auVar25);
            local_80 = (float)(~-(uint)(fVar15 <= 0.0) & auVar25._0_4_);
            fStack_7c = (float)(~-(uint)(fVar22 <= 0.0) & auVar25._4_4_);
            fStack_78 = (float)(~-(uint)(fVar23 <= 0.0) & auVar25._8_4_);
            fStack_74 = (float)(~-(uint)(fVar17 <= 0.0) & auVar25._12_4_);
            fVar15 = local_80 * fVar15;
            fVar22 = fStack_7c * fVar22;
            fVar23 = fStack_78 * fVar23;
            fVar17 = fStack_74 * fVar17;
            local_80 = local_80 * fVar19;
            fStack_7c = fStack_7c * fVar20;
            fStack_78 = fStack_78 * fVar21;
            fStack_74 = fStack_74 *
                        ((pfVar10[3] - pfVar11[3]) * fVar18 - (pfVar10[3] - pfVar11[3]) * fVar18);
            fVar26 = fVar26 + fVar15;
            fVar27 = fVar27 + fVar22;
            fVar28 = fVar28 + fVar23;
            fVar29 = fVar29 + fVar17;
            in_XMM1 = *pauVar13;
            local_18 = local_18 + 2;
            uVar6 = local_18 & 0xffff;
            fVar30 = fVar30 + (in_XMM1._0_4_ + *pfVar11 + *pfVar7 + *pfVar10) * fVar15;
            fVar31 = fVar31 + (in_XMM1._4_4_ + pfVar11[1] + pfVar7[1] + pfVar10[1]) * fVar22;
            fVar32 = fVar32 + (in_XMM1._8_4_ + pfVar11[2] + pfVar7[2] + pfVar10[2]) * fVar23;
            fVar33 = fVar33 + (in_XMM1._12_4_ + pfVar11[3] + pfVar7[3] + pfVar10[3]) * fVar17;
            pfVar11 = pfVar10;
            local_90 = fVar30;
            fStack_8c = fVar31;
            fStack_88 = fVar32;
            fStack_84 = fVar33;
            local_50 = fVar26;
            fStack_4c = fVar27;
            fStack_48 = fVar28;
            fStack_44 = fVar29;
          } while (uVar6 + 1 < local_58);
        }
        uVar6 = local_18;
        if ((local_18 & 0xffff) + 1 == local_58) {
          fVar26 = *pfVar10 - *(float *)*pauVar13;
          fVar27 = pfVar10[1] - *(float *)(*pauVar13 + 4);
          fVar28 = pfVar10[2] - *(float *)(*pauVar13 + 8);
          fVar29 = pfVar10[3] - *(float *)(*pauVar13 + 0xc);
          pfVar10 = (float *)(local_2c[0] +
                             (uint)*(ushort *)(*(int *)(local_34 + 8) + (local_18 & 0xffff) * 2) *
                             0x10);
          fVar15 = *pfVar10 - *(float *)*pauVar13;
          fVar16 = pfVar10[1] - *(float *)(*pauVar13 + 4);
          fVar22 = pfVar10[2] - *(float *)(*pauVar13 + 8);
          fVar17 = pfVar10[3] - *(float *)(*pauVar13 + 0xc);
          local_80 = fVar27 * fVar22 - fVar28 * fVar16;
          fStack_7c = fVar28 * fVar15 - fVar26 * fVar22;
          fStack_78 = fVar26 * fVar16 - fVar27 * fVar15;
          fVar30 = local_80 * local_80;
          fVar31 = fStack_7c * fStack_7c;
          fVar32 = fStack_78 * fStack_78;
          auVar34._4_4_ = fVar30;
          auVar34._0_4_ = fVar30;
          auVar34._8_4_ = fVar30;
          auVar34._12_4_ = fVar30;
          fVar23 = fVar31 + fVar30 + fVar32;
          fVar18 = fVar31 + fVar30 + fVar32;
          fVar19 = fVar31 + fVar30 + fVar32;
          fVar32 = fVar31 + fVar30 + fVar32;
          auVar3._4_4_ = fVar18;
          auVar3._0_4_ = fVar23;
          auVar3._8_4_ = fVar19;
          auVar3._12_4_ = fVar32;
          auVar25 = rsqrtps(auVar34,auVar3);
          fVar30 = (float)(~-(uint)(fVar23 <= 0.0) & auVar25._0_4_);
          fVar31 = (float)(~-(uint)(fVar18 <= 0.0) & auVar25._4_4_);
          fVar33 = (float)(~-(uint)(fVar19 <= 0.0) & auVar25._8_4_);
          fVar14 = (float)(~-(uint)(fVar32 <= 0.0) & auVar25._12_4_);
          local_80 = fVar30 * local_80;
          fStack_7c = fVar31 * fStack_7c;
          fStack_78 = fVar33 * fStack_78;
          fStack_74 = fVar14 * (fVar29 * fVar17 - fVar29 * fVar17);
          in_XMM1._0_4_ = fVar30 * fVar23;
          in_XMM1._4_4_ = fVar31 * fVar18;
          in_XMM1._8_4_ = fVar33 * fVar19;
          in_XMM1._12_4_ = fVar14 * fVar32;
          local_50 = in_XMM1._0_4_ + local_50;
          fStack_4c = in_XMM1._4_4_ + fStack_4c;
          fStack_48 = in_XMM1._8_4_ + fStack_48;
          fStack_44 = in_XMM1._12_4_ + fStack_44;
          local_90 = ((fVar26 + fVar15) * 1.3333334 + *(float *)*pauVar13 * 4.0) * in_XMM1._0_4_ +
                     local_90;
          fStack_8c = ((fVar27 + fVar16) * 1.3333334 + *(float *)(*pauVar13 + 4) * 4.0) *
                      in_XMM1._4_4_ + fStack_8c;
          fStack_88 = ((fVar28 + fVar22) * 1.3333334 + *(float *)(*pauVar13 + 8) * 4.0) *
                      in_XMM1._8_4_ + fStack_88;
          fStack_84 = ((fVar29 + fVar17) * 1.3333334 + *(float *)(*pauVar13 + 0xc) * 4.0) *
                      in_XMM1._12_4_ + fStack_84;
          uVar6 = local_18 + 1;
        }
        FUN_01006f50(param_2,&local_80);
        auVar4._4_4_ = fStack_4c;
        auVar4._0_4_ = local_50;
        auVar4._8_4_ = fStack_48;
        auVar4._12_4_ = fStack_44;
        auVar25 = rcpps(in_XMM1,auVar4);
        local_a0 = (2.0 - auVar25._0_4_ * local_50) * auVar25._0_4_ * 0.25 * local_90;
        fStack_9c = (2.0 - auVar25._4_4_ * fStack_4c) * auVar25._4_4_ * 0.25 * fStack_8c;
        fStack_98 = (2.0 - auVar25._8_4_ * fStack_48) * auVar25._8_4_ * 0.25 * fStack_88;
        fStack_94 = (2.0 - auVar25._12_4_ * fStack_44) * auVar25._12_4_ * 0.25 * fStack_84;
        FUN_01007050(param_2,&local_a0);
        fVar26 = local_70 * local_80;
        fVar27 = fStack_6c * fStack_7c;
        fVar28 = fStack_68 * fStack_78;
        in_XMM1._0_4_ = fVar27 + fVar26 + fVar28;
        in_XMM1._4_4_ = fVar27 + fVar26 + fVar28;
        in_XMM1._8_4_ = fVar27 + fVar26 + fVar28;
        in_XMM1._12_4_ = fVar27 + fVar26 + fVar28;
        if (in_XMM1._0_4_ < 0.0) {
          fVar26 = local_5c[8];
          fVar30 = local_a0 - *(float *)((int)fVar26 + 0x140);
          fVar31 = fStack_9c - *(float *)((int)fVar26 + 0x144);
          fVar32 = fStack_98 - *(float *)((int)fVar26 + 0x148);
          fVar33 = fStack_94 - *(float *)((int)fVar26 + 0x14c);
          fVar26 = local_50 * 0.5 * in_XMM1._0_4_ * local_80;
          fVar27 = fStack_4c * 0.5 * in_XMM1._4_4_ * fStack_7c;
          fVar28 = fStack_48 * 0.5 * in_XMM1._8_4_ * fStack_78;
          fVar29 = fStack_44 * 0.5 * in_XMM1._12_4_ * fStack_74;
          *local_5c = fVar26 + *local_5c;
          local_5c[1] = fVar27 + local_5c[1];
          local_5c[2] = fVar28 + local_5c[2];
          local_5c[3] = fVar29 + local_5c[3];
          in_XMM1._0_4_ = fVar32 * fVar27;
          in_XMM1._4_4_ = fVar30 * fVar28;
          in_XMM1._8_4_ = fVar31 * fVar26;
          in_XMM1._12_4_ = fVar33 * fVar29;
          local_5c[4] = (fVar31 * fVar28 - in_XMM1._0_4_) + local_5c[4];
          local_5c[5] = (fVar32 * fVar26 - in_XMM1._4_4_) + local_5c[5];
          local_5c[6] = (fVar30 * fVar27 - in_XMM1._8_4_) + local_5c[6];
          local_5c[7] = (fVar33 * fVar29 - in_XMM1._12_4_) + local_5c[7];
        }
        uVar6 = uVar6 & 0xffff;
        iVar8 = local_34;
        iVar12 = local_54;
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar12);
  }
  uVar6 = local_1c;
  iVar12 = local_2c[3];
  if (local_2c[3] == local_2c[0]) {
    local_2c[1] = 0;
  }
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  uVar6 = uVar6 * 0x10 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar6) || (uVar6 + iVar12 != *(int *)((int)pvVar5 + 0xc)))
     || (*(int *)((int)pvVar5 + 0x14) == iVar12)) {
    FUN_0100b9b0(iVar12,uVar6);
  }
  else {
    *(int *)((int)pvVar5 + 0xc) = iVar12;
  }
  local_2c[1] = 0;
  if (-1 < local_2c[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c[0],local_2c[2] << 4);
  }
  local_2c[0] = 0;
  local_2c[2] = 0x80000000;
  pvVar5 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar5 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
  }
  return;
}

// 01277DA0  FUN_01277da0  size=814  [run]
void __thiscall FUN_01277da0(int param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_2b0 [512];
  undefined1 local_b0 [64];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_14;
  
  uVar1 = (uint)*(byte *)(param_2 + 2);
  if (0x1e < uVar1) {
switchD_01277dd7_caseD_c:
    return;
  }
  do {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((&switchD_01277dd7::switchdataD_0127811c)[uVar1]) {
    case 0:
      FUN_01276f00(param_2,param_3);
      return;
    case 1:
      FUN_01276d90(param_2,param_3);
      return;
    case 2:
      FUN_012769b0(param_2,param_3);
      return;
    case 3:
      FUN_01277090(param_2,param_3);
      return;
    case 4:
      FUN_012772f0(param_2,param_3);
      return;
    case 5:
      if (*(float *)(param_1 + 0x28) <= 0.0) {
        FUN_012778f0(param_2,param_3);
        return;
      }
      FUN_012777e0(param_2,param_3);
      return;
    case 6:
    case 8:
    case 0x12:
      iVar2 = (**(code **)(param_2[4] + 8))();
      if (iVar2 == -1) {
        return;
      }
      do {
        local_14 = iVar2;
        uVar3 = (**(code **)(param_2[4] + 0x14))(iVar2,local_2b0,param_3);
        FUN_01277da0(uVar3,iVar2);
        iVar2 = (**(code **)(param_2[4] + 0xc))(local_14);
      } while (iVar2 != -1);
      return;
    case 7:
    case 9:
    case 0x16:
      piVar4 = (int *)(**(code **)(*param_2 + 0x38))();
      iVar2 = (**(code **)(*piVar4 + 8))();
      while (iVar2 != -1) {
        local_14 = iVar2;
        uVar3 = (**(code **)(*piVar4 + 0x14))(iVar2,local_2b0,param_3);
        FUN_01277da0(uVar3,iVar2);
        iVar2 = (**(code **)(*piVar4 + 0xc))(local_14);
      }
      return;
    case 10:
      local_14 = param_2[6];
      FUN_01006f50(param_3,param_2 + 8);
      local_70 = *param_3;
      uStack_6c = param_3[1];
      uStack_68 = param_3[2];
      uStack_64 = param_3[3];
      local_40 = (float)param_3[0xc] + local_30;
      fStack_3c = (float)param_3[0xd] + fStack_2c;
      fStack_38 = (float)param_3[0xe] + fStack_28;
      fStack_34 = (float)param_3[0xf] + fStack_24;
      local_60 = param_3[4];
      uStack_5c = param_3[5];
      uStack_58 = param_3[6];
      uStack_54 = param_3[7];
      local_50 = param_3[8];
      uStack_4c = param_3[9];
      uStack_48 = param_3[10];
      uStack_44 = param_3[0xb];
      local_30 = local_40;
      fStack_2c = fStack_3c;
      fStack_28 = fStack_38;
      fStack_24 = fStack_34;
      FUN_01277da0(local_14,&local_70);
      return;
    case 0xb:
      iVar2 = param_2[6];
      FUN_0100a440(&local_70);
      FUN_01004cf0(param_3,&local_70);
      FUN_01277da0(iVar2,local_b0);
      return;
    default:
      goto switchD_01277dd7_caseD_c;
    case 0xd:
    case 0x1b:
      iVar2 = (**(code **)(param_2[4] + 8))();
      if (iVar2 == -1) {
        return;
      }
      do {
        local_14 = iVar2;
        uVar3 = (**(code **)(param_2[4] + 0x14))(iVar2,local_2b0,param_3);
        FUN_01277da0(uVar3,iVar2);
        iVar2 = (**(code **)(param_2[4] + 0xc))(local_14);
      } while (iVar2 != -1);
      return;
    case 0xe:
      iVar2 = param_2[5];
      FUN_01004cf0(param_3,param_2 + 0xc);
      FUN_01277da0(iVar2,&local_70);
      return;
    case 0x1a:
      iVar2 = (**(code **)(param_2[5] + 8))();
      if (iVar2 == -1) {
        return;
      }
      do {
        local_14 = iVar2;
        uVar3 = (**(code **)(param_2[5] + 0x14))(iVar2,local_2b0,param_3);
        FUN_01277da0(uVar3,iVar2);
        iVar2 = (**(code **)(param_2[5] + 0xc))(local_14);
      } while (iVar2 != -1);
      return;
    case 0x1e:
      param_2 = (int *)param_2[6];
      uVar1 = (uint)*(byte *)(param_2 + 2);
      if (0x1e < uVar1) {
        return;
      }
    }
  } while( true );
}

// 01278140  FUN_01278140  size=192  [run]
void __fastcall FUN_01278140(int param_1)

{
  int iVar1;
  undefined1 local_f0 [4];
  undefined4 local_ec;
  undefined4 local_14;
  
  FUN_0118f7b0();
  FUN_0119fa20(local_f0);
  FUN_01277da0(local_ec,*(int *)(param_1 + 0x20) + 0xf0);
  iVar1 = *(int *)(param_1 + 0x20);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  FUN_0118fe70();
  (**(code **)(*(int *)(iVar1 + 0xe0) + 0x60))(local_14,param_1);
  iVar1 = *(int *)(param_1 + 0x20);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  FUN_0118fe70();
  (**(code **)(*(int *)(iVar1 + 0xe0) + 100))(local_14,param_1 + 0x10);
  return;
}

// 01278250  FUN_01278250  size=90  [run]
void __thiscall
FUN_01278250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_01276800(param_2,param_3,param_5,param_1,param_4);
  FUN_01278140();
  return;
}

// 01278320  FUN_01278320  size=48  [run]
void __thiscall FUN_01278320(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0118fe70();
  (**(code **)(*(int *)(param_1 + 0xe0) + 0x60))(param_2,param_3);
  return;
}

// 01278350  FUN_01278350  size=48  [run]
void __thiscall FUN_01278350(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0118fe70();
  (**(code **)(*(int *)(param_1 + 0xe0) + 100))(param_2,param_3);
  return;
}

// 01278380  FUN_01278380  size=77  [run]
void __thiscall FUN_01278380(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_1[8];
  fVar5 = *param_2 - *(float *)((int)fVar1 + 0x140);
  fVar6 = param_2[1] - *(float *)((int)fVar1 + 0x144);
  fVar7 = param_2[2] - *(float *)((int)fVar1 + 0x148);
  fVar8 = param_2[3] - *(float *)((int)fVar1 + 0x14c);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  *param_1 = fVar1 + *param_1;
  param_1[1] = fVar2 + param_1[1];
  param_1[2] = fVar3 + param_1[2];
  param_1[3] = fVar4 + param_1[3];
  param_1[4] = (fVar6 * fVar3 - fVar7 * fVar2) + param_1[4];
  param_1[5] = (fVar7 * fVar1 - fVar5 * fVar3) + param_1[5];
  param_1[6] = (fVar5 * fVar2 - fVar6 * fVar1) + param_1[6];
  param_1[7] = (fVar8 * fVar4 - fVar8 * fVar4) + param_1[7];
  return;
}

// 012783D0  FUN_012783d0  size=144  [run]
void __thiscall FUN_012783d0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(param_2,param_3);
  }
  if (0.0 < *(float *)(param_1 + 0x30)) {
    iVar1 = *(int *)(param_1 + 0x20);
    fVar2 = *(float *)(iVar1 + 0x1c0);
    fVar3 = *(float *)(iVar1 + 0x1c4);
    fVar4 = *(float *)(iVar1 + 0x1c8);
    fVar5 = *(float *)(iVar1 + 0x1cc);
    fVar9 = *param_2 - *(float *)(iVar1 + 0x140);
    fVar10 = param_2[1] - *(float *)(iVar1 + 0x144);
    fVar11 = param_2[2] - *(float *)(iVar1 + 0x148);
    fVar12 = param_2[3] - *(float *)(iVar1 + 0x14c);
    fVar13 = -*(float *)(param_1 + 0x30);
    fVar6 = *(float *)(iVar1 + 0x1b4);
    fVar7 = *(float *)(iVar1 + 0x1b8);
    fVar8 = *(float *)(iVar1 + 0x1bc);
    *param_3 = ((fVar3 * fVar11 - fVar4 * fVar10) + *(float *)(iVar1 + 0x1b0)) * fVar13 + *param_3;
    param_3[1] = ((fVar4 * fVar9 - fVar2 * fVar11) + fVar6) * fVar13 + param_3[1];
    param_3[2] = ((fVar2 * fVar10 - fVar3 * fVar9) + fVar7) * fVar13 + param_3[2];
    param_3[3] = ((fVar5 * fVar12 - fVar5 * fVar12) + fVar8) * fVar13 + param_3[3];
  }
  return;
}

// 01278460  FUN_01278460  size=34  [run]
void __thiscall FUN_01278460(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return;
}

// 01278490  FUN_01278490  size=34  [run]
void __thiscall FUN_01278490(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return;
}

// 012784C0  FUN_012784c0  size=44  [run]
void __thiscall FUN_012784c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[0xc] = *param_3;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}

// 012784F0  FUN_012784f0  size=71  [run]
void __thiscall FUN_012784f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = fVar1 * fVar1;
  fVar5 = fVar2 * fVar2;
  fVar6 = fVar3 * fVar3;
  fVar9 = fVar5 + fVar4 + fVar6;
  fVar10 = fVar5 + fVar4 + fVar6;
  fVar11 = fVar5 + fVar4 + fVar6;
  fVar6 = fVar5 + fVar4 + fVar6;
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  auVar13._4_4_ = fVar10;
  auVar13._0_4_ = fVar9;
  auVar13._8_4_ = fVar11;
  auVar13._12_4_ = fVar6;
  auVar13 = rsqrtps(auVar12,auVar13);
  fVar4 = (float)(~-(uint)(fVar9 <= 0.0) & auVar13._0_4_);
  fVar5 = (float)(~-(uint)(fVar10 <= 0.0) & auVar13._4_4_);
  fVar7 = (float)(~-(uint)(fVar11 <= 0.0) & auVar13._8_4_);
  fVar8 = (float)(~-(uint)(fVar6 <= 0.0) & auVar13._12_4_);
  *param_1 = fVar1 * fVar4;
  param_1[1] = fVar2 * fVar5;
  param_1[2] = fVar3 * fVar7;
  param_1[3] = param_1[3] * fVar8;
  *param_2 = fVar4 * fVar9;
  param_2[1] = fVar5 * fVar10;
  param_2[2] = fVar7 * fVar11;
  param_2[3] = fVar8 * fVar6;
  return;
}

// 01278540  FUN_01278540  size=71  [run]
void __thiscall FUN_01278540(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = fVar1 * fVar1;
  fVar5 = fVar2 * fVar2;
  fVar6 = fVar3 * fVar3;
  fVar9 = fVar5 + fVar4 + fVar6;
  fVar10 = fVar5 + fVar4 + fVar6;
  fVar11 = fVar5 + fVar4 + fVar6;
  fVar6 = fVar5 + fVar4 + fVar6;
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  auVar13._4_4_ = fVar10;
  auVar13._0_4_ = fVar9;
  auVar13._8_4_ = fVar11;
  auVar13._12_4_ = fVar6;
  auVar13 = rsqrtps(auVar12,auVar13);
  fVar4 = (float)(~-(uint)(fVar9 <= 0.0) & auVar13._0_4_);
  fVar5 = (float)(~-(uint)(fVar10 <= 0.0) & auVar13._4_4_);
  fVar7 = (float)(~-(uint)(fVar11 <= 0.0) & auVar13._8_4_);
  fVar8 = (float)(~-(uint)(fVar6 <= 0.0) & auVar13._12_4_);
  *param_1 = fVar1 * fVar4;
  param_1[1] = fVar2 * fVar5;
  param_1[2] = fVar3 * fVar7;
  param_1[3] = param_1[3] * fVar8;
  *param_2 = fVar4 * fVar9;
  param_2[1] = fVar5 * fVar10;
  param_2[2] = fVar7 * fVar11;
  param_2[3] = fVar8 * fVar6;
  return;
}

// 012785C0  FUN_012785c0  size=434  [run]
void FUN_012785c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_XMM3 [16];
  undefined1 auVar10 [16];
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  int *local_18;
  int local_14;
  
  piVar2 = *(int **)(param_1 + 0x60);
  piVar3 = *(int **)(piVar2[2] + 0x70);
  local_90 = *piVar3;
  local_8c = piVar3[1];
  local_88 = piVar3[2];
  local_80 = piVar3[4];
  local_7c = piVar3[5];
  local_78 = piVar3[6];
  local_70 = piVar3[8];
  iStack_6c = piVar3[9];
  iStack_68 = piVar3[10];
  iStack_64 = piVar3[0xb];
  local_60 = piVar3[0xc];
  iStack_5c = piVar3[0xd];
  iStack_58 = piVar3[0xe];
  iStack_54 = piVar3[0xf];
  local_50 = piVar3[0x10];
  iStack_4c = piVar3[0x11];
  iStack_48 = piVar3[0x12];
  iStack_44 = piVar3[0x13];
  local_28 = piVar3[0x1c];
  local_40 = *(float *)(param_1 + 0x50);
  fStack_3c = *(float *)(param_1 + 0x54);
  fStack_38 = *(float *)(param_1 + 0x58);
  uStack_34 = *(undefined4 *)(param_1 + 0x5c);
  fVar6 = local_40 * local_40;
  fVar7 = fStack_3c * fStack_3c;
  fVar8 = fStack_38 * fStack_38;
  fVar9 = fVar7 + fVar6 + fVar8;
  auVar10._4_4_ = fVar7 + fVar6 + fVar8;
  auVar10._0_4_ = fVar9;
  auVar10._8_4_ = fVar7 + fVar6 + fVar8;
  auVar10._12_4_ = fVar7 + fVar6 + fVar8;
  auVar10 = rsqrtps(in_XMM3,auVar10);
  fVar6 = auVar10._0_4_;
  local_84 = *(undefined4 *)(param_2 + 0x14);
  local_2c = ~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar6 * fVar9 * fVar6) * fVar6 * 0.5 * fVar9);
  local_30 = *(undefined4 *)(param_2 + 0x10);
  piVar3 = piVar2 + 4;
  iVar5 = (**(code **)(*piVar2 + 0x18))();
  local_14 = piVar2[0x55];
  if (iVar5 == 1) {
    local_14 = local_14 + -1;
    if (-1 < local_14) {
      do {
        piVar4 = *(int **)(piVar2[0x54] + local_14 * 4);
        (**(code **)(local_90 +
                    ((uint)*(byte *)(*(byte *)(*piVar4 + 8) + 0x1a0 +
                                    (uint)*(byte *)(*piVar3 + 8) * 0x23 + local_90) * 5 + 0x2d0) * 4
                    ))(piVar3,piVar4,&local_90,param_3,param_4);
        local_14 = local_14 + -1;
      } while (-1 < local_14);
      return;
    }
  }
  else {
    while (local_14 = local_14 + -1, -1 < local_14) {
      puVar1 = (undefined4 *)(piVar2[0x54] + local_14 * 8);
      local_18 = (int *)*puVar1;
      (**(code **)(*local_18 + 0x14))(piVar3,puVar1[1],&local_90,param_3,param_4);
    }
  }
  return;
}

// 012787C0  FUN_012787c0  size=12  [run]
void FUN_012787c0(void)

{
  FUN_01006780();
  return;
}

// 012787E0  FUN_012787e0  size=13  [run]
void __thiscall FUN_012787e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}

// 01278860  FUN_01278860  size=15  [run]
int __thiscall FUN_01278860(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01278870  FUN_01278870  size=37  [run]
void FUN_01278870(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 012788A0  FUN_012788a0  size=37  [run]
void FUN_012788a0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 012788D0  FUN_012788d0  size=130  [run]
void FUN_012788d0(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int unaff_ESI;
  
  iVar1 = param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar6 = *(int **)(param_1 + 8);
    do {
      if (*piVar6 == param_2) goto LAB_012788f6;
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  iVar3 = -1;
LAB_012788f6:
  iVar4 = 0;
  if (0 < *(int *)(unaff_ESI + 0xc)) {
    piVar6 = *(int **)(unaff_ESI + 8);
    do {
      if (*piVar6 == param_2) {
        if (iVar4 != -1) {
          return;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < *(int *)(unaff_ESI + 0xc));
  }
  if (iVar3 != -1) {
    if ((*(char *)(unaff_ESI + 0x40) == '\0') &&
       (pcVar5 = (char *)FUN_0118fae0((int)&param_2 + 3), *pcVar5 == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(unaff_ESI + 0x40) = uVar2;
    FUN_011adc40(iVar1);
    FUN_011ad8d0(iVar3);
  }
  return;
}

// 01278960  FUN_01278960  size=74  [run]
undefined4 __thiscall FUN_01278960(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) + 0x38) & 0xfffffffe;
      if ((uVar1 != 0) && (iVar2 = FUN_01015be0(uVar1,param_2), iVar2 == 0)) {
        return *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

// 012789B0  FUN_012789b0  size=109  [run]
int __thiscall FUN_012789b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + local_8 * 4);
      iVar5 = 0;
      if (0 < *(int *)(iVar1 + 0xc)) {
        do {
          iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar5 * 4);
          uVar3 = *(uint *)(iVar2 + 0x78) & 0xfffffffe;
          if ((uVar3 != 0) && (iVar4 = FUN_01015be0(uVar3,param_2), iVar4 == 0)) {
            return iVar2;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar1 + 0xc));
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x10));
  }
  return 0;
}

// 01278BD0  hkBaseObject::hkBaseObject_36  size=116  [run]
void __fastcall hkBaseObject::hkBaseObject_36(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = hkpPhysicsData::vftable;
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  iVar1 = 0;
  if (0 < (int)param_1[4]) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[4]);
  }
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01278C50  hkpPhysicsSystemWithContacts::hkpPhysicsSystemWithContacts_2  size=236  [run]
void __thiscall
hkpPhysicsSystemWithContacts::hkpPhysicsSystemWithContacts_2
          (int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 local_c [4];
  undefined4 local_8;
  
  if (*(int *)(param_1 + 8) == 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0xf0);
    *(undefined2 *)(iVar3 + 4) = 0xf0;
    uVar4 = hkpWorldCinfo::hkpWorldCinfo_3();
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  FUN_01193cf0(*(undefined4 *)(param_1 + 8));
  piVar1 = (int *)(param_1 + 0xc);
  FUN_01194940(piVar1);
  if (param_3 != '\0') {
    local_c[0] = 0;
    local_8 = 0;
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x50);
    *(undefined2 *)(puVar5 + 1) = 0x50;
    hkpPhysicsSystem::~hkpPhysicsSystem();
    *puVar5 = vftable;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0x80000000;
    FUN_012817c0(local_c,param_2,puVar5);
    *(undefined1 *)(puVar5 + 0x10) = 0;
    if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
    }
    *(undefined4 **)(*piVar1 + *(int *)(param_1 + 0x10) * 4) = puVar5;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}

// 01278D40  FUN_01278d40  size=1352  [run]
void FUN_01278d40(int param_1,undefined4 *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined1 uVar3;
  LPVOID pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int iVar13;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  undefined1 local_7;
  undefined1 local_6;
  char local_5;
  
  iVar7 = param_1;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x44);
  *(undefined2 *)(iVar5 + 4) = 0x44;
  puVar6 = (undefined4 *)hkpPhysicsSystem::~hkpPhysicsSystem();
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      FUN_011adc40(*(undefined4 *)(*(int *)(param_1 + 8) + local_10 * 4));
      local_10 = local_10 + 1;
    } while ((int)local_10 < *(int *)(param_1 + 0xc));
  }
  piVar1 = (int *)(param_1 + 0x24);
  param_1 = 0;
  if (0 < *piVar1) {
    do {
      FUN_011add30(*(undefined4 *)(*(int *)(iVar7 + 0x20) + param_1 * 4));
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar7 + 0x24));
  }
  param_1 = 0;
  if (0 < *(int *)(iVar7 + 0x18)) {
    do {
      FUN_011adce0(*(undefined4 *)(*(int *)(iVar7 + 0x14) + param_1 * 4));
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar7 + 0x18));
  }
  param_1 = 0;
  if (0 < *(int *)(iVar7 + 0x30)) {
    do {
      FUN_011adc90(*(undefined4 *)(*(int *)(iVar7 + 0x2c) + param_1 * 4));
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar7 + 0x30));
  }
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar7 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x44);
  *(undefined2 *)(iVar7 + 4) = 0x44;
  puVar8 = (undefined4 *)hkpPhysicsSystem::~hkpPhysicsSystem();
  local_20 = puVar8;
  FUN_01006780("Unconstrained Rigid Bodies");
  puVar8[0xf] = puVar6[0xf];
  *(undefined1 *)(puVar8 + 0x10) = 0;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar7 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x44);
  *(undefined2 *)(iVar7 + 4) = 0x44;
  puVar8 = (undefined4 *)hkpPhysicsSystem::~hkpPhysicsSystem();
  local_24 = puVar8;
  FUN_01006780("Fixed Rigid Bodies");
  puVar8[0xf] = puVar6[0xf];
  *(undefined1 *)(puVar8 + 0x10) = 0;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar7 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x44);
  *(undefined2 *)(iVar7 + 4) = 0x44;
  puVar8 = (undefined4 *)hkpPhysicsSystem::~hkpPhysicsSystem();
  local_1c = puVar8;
  FUN_01006780("Keyframed Rigid Bodies");
  puVar8[0xf] = puVar6[0xf];
  *(undefined1 *)(puVar8 + 0x10) = 0;
  iVar7 = puVar6[3];
  do {
    if (iVar7 < 1) {
      if (local_1c[3] == 0) {
        (**(code **)*local_1c)(1);
        param_2[1] = 0;
      }
      else {
        param_2[1] = local_1c;
      }
      if (local_24[3] == 0) {
        (**(code **)*local_24)(1);
        *param_2 = 0;
      }
      else {
        *param_2 = local_24;
      }
      if (local_20[3] == 0) {
        (**(code **)*local_20)(1);
        param_2[2] = 0;
      }
      else {
        param_2[2] = local_20;
      }
      if ((int)puVar6[0xc] < 1) {
        param_2[3] = 0;
      }
      else {
        pvVar4 = TlsGetValue(DAT_01f8fc4c);
        iVar7 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x44);
        *(undefined2 *)(iVar7 + 4) = 0x44;
        iVar7 = hkpPhysicsSystem::~hkpPhysicsSystem();
        FUN_01006780("Phantoms");
        *(undefined4 *)(iVar7 + 0x3c) = puVar6[0xf];
        param_2[3] = iVar7;
        iVar7 = 0;
        if (0 < (int)puVar6[0xc]) {
          do {
            FUN_011adc90(*(undefined4 *)(puVar6[0xb] + iVar7 * 4));
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)puVar6[0xc]);
          (**(code **)*puVar6)(1);
          return;
        }
      }
      (**(code **)*puVar6)(1);
      return;
    }
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar7 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x44);
    *(undefined2 *)(iVar7 + 4) = 0x44;
    puVar8 = (undefined4 *)hkpPhysicsSystem::~hkpPhysicsSystem();
    FUN_01006780("Constrained System");
    puVar8[0xf] = puVar6[0xf];
    puVar9 = (undefined1 *)FUN_0118fae0(&local_6);
    *(undefined1 *)(puVar8 + 0x10) = *puVar9;
    FUN_011adc40(*(undefined4 *)puVar6[2]);
    FUN_011ad8d0(0);
    do {
      bVar2 = false;
      local_18 = 0;
      if ((int)puVar8[3] < 1) break;
      do {
        uVar10 = *(uint *)(puVar8[2] + local_18 * 4);
        iVar7 = 0;
        local_10 = uVar10;
        if (0 < (int)puVar6[6]) {
          do {
            iVar5 = *(int *)(puVar6[5] + iVar7 * 4);
            if ((*(uint *)(iVar5 + 0x14) == uVar10) || (*(uint *)(iVar5 + 0x18) == uVar10)) {
              bVar2 = true;
              FUN_011adce0(iVar5);
              iVar5 = *(int *)(puVar6[5] + iVar7 * 4);
              uVar10 = *(uint *)(iVar5 + 0x18) ^ *(uint *)(iVar5 + 0x14) ^ local_10;
              if ((uVar10 != 0) && (*(char *)(uVar10 + 0xe8) != '\x05')) {
                FUN_012788d0(puVar6,uVar10);
              }
              FUN_011ad950(iVar7);
              uVar10 = local_10;
            }
            else {
              iVar7 = iVar7 + 1;
            }
          } while (iVar7 < (int)puVar6[6]);
        }
        local_c = 0;
        if (0 < (int)puVar6[9]) {
          do {
            local_30 = 0;
            local_2c = 0;
            local_28 = -0x80000000;
            (**(code **)(**(int **)(puVar6[8] + local_c * 4) + 0x10))(&local_30);
            local_5 = '\0';
            local_14 = 0;
            iVar7 = local_30;
            iVar5 = local_2c;
            if (local_2c < 1) {
LAB_012790a7:
              local_c = local_c + 1;
            }
            else {
              do {
                iVar13 = local_c;
                if (*(uint *)(iVar7 + local_14 * 4) == local_10) {
                  bVar2 = true;
                  FUN_011add30(*(undefined4 *)(puVar6[8] + local_c * 4));
                  FUN_011ad990(iVar13);
                  iVar13 = 0;
                  local_5 = '\x01';
                  iVar7 = local_30;
                  iVar5 = local_2c;
                  if (0 < local_2c) {
                    do {
                      uVar10 = *(uint *)(iVar7 + iVar13 * 4);
                      if ((uVar10 != local_10) && (*(char *)(uVar10 + 0xe8) != '\x05')) {
                        FUN_012788d0(puVar6,uVar10);
                        iVar7 = local_30;
                        iVar5 = local_2c;
                      }
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < iVar5);
                  }
                }
                local_14 = local_14 + 1;
              } while (local_14 < iVar5);
              if (local_5 == '\0') goto LAB_012790a7;
            }
            local_2c = 0;
            if (-1 < local_28) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(iVar7,local_28 * 4);
            }
            local_30 = 0;
            local_28 = 0x80000000;
          } while (local_c < (int)puVar6[9]);
        }
        local_18 = local_18 + 1;
      } while (local_18 < (int)puVar8[3]);
    } while (bVar2);
    if ((puVar8[6] == 0) && (puVar8[9] == 0)) {
      iVar7 = *(int *)puVar8[2];
      if ((*(int *)(iVar7 + 200) == 0) ||
         (pcVar11 = (char *)FUN_0118fae0(&local_7), *pcVar11 != '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (*(char *)(iVar7 + 0xe8) == '\x04') {
        puVar12 = local_1c;
        if ((*(char *)(local_1c + 0x10) != '\0') || (bVar2)) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
LAB_01279178:
        *(undefined1 *)(puVar12 + 0x10) = uVar3;
      }
      else if (*(char *)(iVar7 + 0xe8) != '\x05') {
        puVar12 = local_20;
        if ((*(char *)(local_20 + 0x10) != '\0') || (bVar2)) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        goto LAB_01279178;
      }
      FUN_011adc40(iVar7);
      (**(code **)*puVar8)(1);
    }
    else {
      if (param_2[5] == (param_2[6] & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_2 + 4,4);
      }
      *(undefined4 **)(param_2[4] + param_2[5] * 4) = puVar8;
      param_2[5] = param_2[5] + 1;
    }
    iVar7 = puVar6[3];
  } while( true );
}

// 012792E0  hkpPhysicsSystemWithContacts::hkpPhysicsSystemWithContacts  size=33  [run]
undefined4 * __fastcall
hkpPhysicsSystemWithContacts::hkpPhysicsSystemWithContacts(undefined4 *param_1)

{
  hkpPhysicsSystem::~hkpPhysicsSystem();
  *param_1 = vftable;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x80000000;
  return param_1;
}

// 01279310  FUN_01279310  size=14  [run]
undefined4 __thiscall FUN_01279310(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 4 + param_2 * 4);
}

// 01279320  FUN_01279320  size=43  [run]
void FUN_01279320(undefined1 *param_1,uint *param_2,uint *param_3)

{
  if ((param_2[1] <= param_3[1]) && ((param_2[1] < param_3[1] || (*param_2 < *param_3)))) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}

// 01279350  FUN_01279350  size=31  [run]
void FUN_01279350(undefined4 param_1,int param_2,int param_3)

{
  *(bool *)param_1 = *(uint *)(param_2 + 0xd0) < *(uint *)(param_3 + 0xd0);
  return;
}

// 01279370  FUN_01279370  size=113  [run]
void __fastcall FUN_01279370(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1[0xb] + 8);
  FUN_01192e80(param_1 + 3);
  FUN_01279d30(uVar1);
  iVar2 = param_1[6];
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x10))(*(undefined4 *)(param_1[5] + iVar3 * 4),6);
      FUN_010060a0();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar2 = param_1[9];
  if (0 < iVar2) {
    do {
      FUN_010060a0();
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[9] = 0;
  param_1[6] = 0;
  return;
}

// 012793F0  hkpTriggerVolume::vf08  size=11  [run]
void hkpTriggerVolume::vf08(void)

{
  FUN_01279370();
  return;
}

// 01279400  hkpTriggerVolume::vf14  size=88  [run]
void __fastcall hkpTriggerVolume::vf14(uint param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x1c) + 8) != 0) {
    FUN_01279370();
  }
  FUN_01190160(-(uint)(param_1 != 0x10) & param_1);
  if (param_1 == 0x10) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 - 8;
  }
  FUN_0118fa20(iVar1);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_010060a0();
  return;
}

// 01279460  hkpEntityListener::hkpEntityListener_2  size=53  [run]
void __fastcall hkpEntityListener::hkpEntityListener_2(undefined4 *param_1)

{
  param_1[2] = hkpContactListener::vftable;
  param_1[3] = hkpWorldPostSimulationListener::vftable;
  param_1[4] = vftable;
  *param_1 = hkpTriggerVolume::vftable;
  param_1[2] = hkpTriggerVolume::vftable;
  param_1[3] = hkpTriggerVolume::vftable;
  param_1[4] = hkpTriggerVolume::vftable;
  return;
}

// 012794A0  hkBaseObject::hkBaseObject_32  size=281  [run]
void __fastcall hkBaseObject::hkBaseObject_32(undefined4 *param_1)

{
  int iVar1;
  undefined1 local_c [8];
  
  *param_1 = hkpTriggerVolume::vftable;
  param_1[2] = hkpTriggerVolume::vftable;
  param_1[3] = hkpTriggerVolume::vftable;
  param_1[4] = hkpTriggerVolume::vftable;
  if (param_1[0xb] != 0) {
    FUN_011c8420(local_c,0x1130);
    FUN_011c8420(local_c,0x1310);
    FUN_01190160(param_1 + 4);
    FUN_0118fa20(param_1 + 2);
  }
  FUN_01006230(param_1[5],param_1[6],4);
  iVar1 = param_1[9];
  if (0 < iVar1) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[9] = 0;
  if ((param_1[10] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],param_1[10] << 4);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  param_1[6] = 0;
  if ((param_1[7] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[4] = hkpEntityListener::vftable;
  param_1[3] = hkpWorldPostSimulationListener::vftable;
  param_1[2] = hkpContactListener::vftable;
  *param_1 = vftable;
  return;
}

// 012795C0  hkpTriggerVolume::vf04  size=652  [run]
void __fastcall hkpTriggerVolume::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  uVar4 = *(uint *)(param_1 + 0xc);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  local_c = param_1;
  if (0 < (int)uVar4) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_24,uVar4 & ((int)uVar4 < 0) - 1,4);
  }
  if (1 < *(int *)(param_1 + 0x18)) {
    FUN_0127a040(*(undefined4 *)(param_1 + 0x14),0,*(int *)(param_1 + 0x18) + -1,FUN_01279320);
  }
  puVar6 = *(undefined4 **)(param_1 + 8);
  local_10 = *(uint *)(param_1 + 0x14);
  local_18 = param_1 + 8;
  local_14 = puVar6 + *(int *)(param_1 + 0xc);
  if (local_10 < *(int *)(param_1 + 0x18) * 0x10 + local_10) {
    do {
      iVar2 = *(int *)(local_10 + 8);
      bVar7 = puVar6 == local_14;
      if (puVar6 < local_14) {
        do {
          uVar4 = local_1c;
          pcVar3 = (char *)FUN_01279350(&local_5,*puVar6,iVar2);
          if (*pcVar3 == '\0') break;
          if (local_20 == (uVar4 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_24,4);
          }
          *(undefined4 *)(local_24 + local_20 * 4) = *puVar6;
          local_20 = local_20 + 1;
          puVar6 = puVar6 + 1;
        } while (puVar6 < local_14);
        bVar7 = puVar6 == local_14;
      }
      if ((bVar7) || (pcVar3 = (char *)FUN_01279350(&local_6,iVar2,*puVar6), *pcVar3 != '\0')) {
        iVar5 = 2;
        FUN_01006000();
      }
      else {
        iVar5 = 1;
        puVar6 = puVar6 + 1;
      }
      do {
        iVar5 = *(int *)(&DAT_017f05c8 + (*(int *)(local_10 + 0xc) + iVar5 * 4) * 4);
        FUN_010060a0();
        uVar4 = local_10 + 0x10;
        if ((uint)(*(int *)(local_c + 0x18) * 0x10 + *(int *)(local_c + 0x14)) <= uVar4) break;
        piVar1 = (int *)(local_10 + 0x18);
        local_10 = uVar4;
      } while (*piVar1 == iVar2);
      local_10 = uVar4;
      switch(iVar5) {
      case 1:
        local_10 = uVar4;
        if (local_20 == (local_1c & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_24,4);
        }
        *(int *)(local_24 + local_20 * 4) = iVar2;
        local_20 = local_20 + 1;
        break;
      case 2:
        goto switchD_0127971f_caseD_2;
      case 3:
      case 4:
        local_10 = uVar4;
        if (local_20 == (local_1c & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_24,4);
        }
        *(int *)(local_24 + local_20 * 4) = iVar2;
        local_20 = local_20 + 1;
        (**(code **)(*(int *)(local_c + -0xc) + 0x10))(iVar2,1);
        break;
      case 5:
        uVar8 = 3;
        goto LAB_0127979d;
      case 6:
        uVar8 = 2;
LAB_0127979d:
        local_10 = uVar4;
        (**(code **)(*(int *)(local_c + -0xc) + 0x10))(iVar2,uVar8);
switchD_0127971f_caseD_2:
        FUN_010060a0();
      }
      param_1 = local_c;
    } while (local_10 < (uint)(*(int *)(local_c + 0x18) * 0x10 + *(int *)(local_c + 0x14)));
  }
  if (puVar6 < local_14) {
    do {
      if (local_20 == (local_1c & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_24,4);
      }
      *(undefined4 *)(local_24 + local_20 * 4) = *puVar6;
      local_20 = local_20 + 1;
      puVar6 = puVar6 + 1;
    } while (puVar6 < local_14);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_01279c90(&local_24);
  local_20 = 0;
  if (-1 < (int)local_1c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c * 4);
  }
  return;
}

// 01279870  FUN_01279870  size=500  [run]
void __fastcall FUN_01279870(int *param_1)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *local_20;
  uint local_1c;
  uint local_18;
  int *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  iVar6 = param_1[9];
  if (0 < iVar6) {
    do {
      FUN_010060a0();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar2 = 0;
  param_1[9] = 0;
  iVar6 = param_1[0xb];
  puVar4 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0x80000000;
  local_10 = *(undefined4 **)(iVar6 + 100);
  local_c = (undefined4 *)0x0;
  if (0 < (int)local_10) {
    do {
      piVar1 = (int *)(*(int *)(iVar6 + 0x60) + (int)local_c * 8);
      iVar7 = *(int *)(*piVar1 + 8);
      if ((*(int *)(iVar7 + 8) == 0) && (*(short *)(*(int *)(iVar7 + 0x3c) + 4) != 0)) {
        iVar7 = piVar1[1];
        if (*(char *)(iVar7 + 0x18) == '\x01') {
          iVar7 = *(char *)(iVar7 + 0x10) + iVar7;
        }
        else {
          iVar7 = 0;
        }
        if (uVar2 == (local_18 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_20,4);
          uVar2 = local_1c;
          puVar4 = local_20;
        }
        puVar4[uVar2] = iVar7;
        uVar2 = local_1c + 1;
        puVar4 = local_20;
        local_1c = uVar2;
      }
      local_c = (undefined4 *)((int)local_c + 1);
    } while ((int)local_c < (int)local_10);
    if (1 < (int)uVar2) {
      FUN_01279d90(puVar4,0,uVar2 - 1,FUN_01279350);
      uVar2 = local_1c;
      puVar4 = local_20;
    }
  }
  puVar5 = (undefined4 *)param_1[5];
  local_14 = param_1 + 5;
  local_c = puVar4 + uVar2;
  local_10 = puVar5 + param_1[6];
  if (puVar4 < local_c) {
    do {
      if (local_10 <= puVar5) {
        if (puVar4 < local_c) {
          do {
            FUN_01006000();
            (**(code **)(*param_1 + 0x10))(*puVar4,1);
            puVar4 = puVar4 + 1;
          } while (puVar4 < local_c);
        }
        break;
      }
      pcVar3 = (char *)FUN_01279350(&local_5,*puVar4,*puVar5);
      if (*pcVar3 == '\0') {
        pcVar3 = (char *)FUN_01279350(&local_6,*puVar5,*puVar4);
        if (*pcVar3 == '\0') {
          puVar4 = puVar4 + 1;
        }
        else {
          (**(code **)(*param_1 + 0x10))(*puVar5,2);
          FUN_010060a0();
        }
        puVar5 = puVar5 + 1;
      }
      else {
        FUN_01006000();
        (**(code **)(*param_1 + 0x10))(*puVar4,1);
        puVar4 = puVar4 + 1;
      }
    } while (puVar4 < local_c);
  }
  if (puVar5 < local_10) {
    do {
      (**(code **)(*param_1 + 0x10))(*puVar5,2);
      FUN_010060a0();
      puVar5 = puVar5 + 1;
    } while (puVar5 < local_10);
  }
  FUN_01279c90(&local_20);
  local_1c = 0;
  if (-1 < (int)local_18) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 * 4);
  }
  return;
}

// 01279A70  hkpTriggerVolume::vf00  size=65  [run]
void hkpTriggerVolume::vf00(int *param_1)

{
  *(byte *)(param_1[6] + 0xf) = *(byte *)(param_1[6] + 0xf) | 8;
  if (param_1[4] == 0) {
    FUN_0127a2f0(param_1[2 - *param_1],3);
    return;
  }
  if (param_1[4] == 1) {
    FUN_0127a2f0(param_1[2 - *param_1],2);
  }
  return;
}

// 01279AC0  hkpTriggerVolume::vf04  size=60  [run]
void hkpTriggerVolume::vf04(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_1[3] + 0x40))();
  FUN_011d3bb0(iVar1,*(undefined4 *)(iVar1 + 8));
  FUN_0127a2f0(param_1[2 - *param_1],0);
  return;
}

// 01279B00  hkpTriggerVolume::vf08  size=31  [run]
void hkpTriggerVolume::vf08(int *param_1)

{
  FUN_0127a2f0(param_1[2 - *param_1],1);
  return;
}

// 01279B20  FUN_01279b20  size=40  [run]
void __thiscall FUN_01279b20(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0xc;
  }
  FUN_011946c0(param_1);
  hkpConstraintListener::hkpConstraintListener_3(param_2);
  return;
}

// 01279B50  hkpEntityListener::hkpEntityListener  size=205  [run]
undefined4 * __thiscall hkpEntityListener::hkpEntityListener(undefined4 *param_1,int param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = hkpContactListener::vftable;
  param_1[3] = hkpWorldPostSimulationListener::vftable;
  param_1[4] = vftable;
  *param_1 = hkpTriggerVolume::vftable;
  param_1[2] = hkpTriggerVolume::vftable;
  param_1[3] = hkpTriggerVolume::vftable;
  param_1[4] = hkpTriggerVolume::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80000000;
  param_1[0xc] = 0;
  param_1[0xb] = param_2;
  FUN_0118fe00(param_1 + 2);
  FUN_01190090(param_1 + 4);
  FUN_011c84d0(0x1310,param_1,0);
  FUN_011c84d0(0x1130,DAT_020ad438,DAT_020ad438 >> 0x1f);
  if (*(int *)(param_2 + 8) != 0) {
    FUN_01279b20(*(int *)(param_2 + 8));
  }
  FUN_01006000();
  return param_1;
}

// 01279C20  hkpTriggerVolume::vf04  size=22  [run]
void hkpTriggerVolume::vf04(int param_1)

{
  FUN_01279b20(*(undefined4 *)(param_1 + 8));
  return;
}

// 01279C50  FUN_01279c50  size=12  [run]
void __thiscall FUN_01279c50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01279C90  FUN_01279c90  size=44  [run]
void __thiscall FUN_01279c90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 01279CF0  FUN_01279cf0  size=15  [run]
int __thiscall FUN_01279cf0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01279D30  FUN_01279d30  size=41  [run]
void FUN_01279d30(void)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = FUN_01193120(0x3e9);
  psVar1 = (short *)(iVar2 + 0x10);
  *psVar1 = *psVar1 + -1;
  if (*psVar1 == 0) {
    FUN_01193c40(iVar2);
  }
  return;
}

// 01279D60  FUN_01279d60  size=9  [run]
void FUN_01279d60(void)

{
  FUN_01006230();
  return;
}

// 01279D90  FUN_01279d90  size=239  [run]
void FUN_01279d90(int param_1,int param_2,int param_3,code *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  
  do {
    local_18 = param_2;
    uVar3 = *(undefined4 *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar6 = param_3;
    do {
      pcVar5 = (char *)(*param_4)(&local_11,*(undefined4 *)(param_1 + local_18 * 4),uVar3);
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        local_18 = local_18 + 1;
        pcVar5 = (char *)(*param_4)(&local_11,*(undefined4 *)(param_1 + local_18 * 4),uVar3);
        cVar2 = *pcVar5;
      }
      pcVar5 = (char *)(*param_4)(&local_12,uVar3,*(undefined4 *)(param_1 + iVar6 * 4));
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + -1;
        pcVar5 = (char *)(*param_4)(&local_12,uVar3,*(undefined4 *)(param_1 + -4 + iVar1));
        cVar2 = *pcVar5;
      }
      if (iVar6 < local_18) break;
      if (iVar6 != local_18) {
        uVar4 = *(undefined4 *)(param_1 + iVar6 * 4);
        *(undefined4 *)(param_1 + iVar6 * 4) = *(undefined4 *)(param_1 + local_18 * 4);
        *(undefined4 *)(param_1 + local_18 * 4) = uVar4;
      }
      local_18 = local_18 + 1;
      iVar6 = iVar6 + -1;
    } while (local_18 <= iVar6);
    if (param_2 < iVar6) {
      FUN_01279d90(param_1,param_2,iVar6,param_4);
    }
    param_2 = local_18;
    if (param_3 <= local_18) {
      return;
    }
  } while( true );
}

// 01279E90  FUN_01279e90  size=25  [run]
void __thiscall FUN_01279e90(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01279EB0  FUN_01279eb0  size=9  [run]
void FUN_01279eb0(void)

{
  FUN_01279d30();
  return;
}

// 01279F00  FUN_01279f00  size=33  [run]
void FUN_01279f00(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01279d90(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 01279F30  FUN_01279f30  size=60  [run]
void __thiscall FUN_01279f30(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01279F80  FUN_01279f80  size=48  [run]
void __fastcall FUN_01279f80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  do {
    FUN_010060a0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

// 01279FB0  FUN_01279fb0  size=53  [run]
undefined4 __thiscall FUN_01279fb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 01279FF0  FUN_01279ff0  size=60  [run]
void __fastcall FUN_01279ff0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0127A040  FUN_0127a040  size=330  [run]
void FUN_0127a040(int param_1,int param_2,int param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  
  do {
    local_18 = param_2;
    puVar4 = (undefined8 *)((param_2 + param_3 >> 1) * 0x10 + param_1);
    local_30 = *puVar4;
    local_28 = puVar4[1];
    iVar7 = param_3;
    do {
      local_20 = local_18 * 0x10 + param_1;
      local_1c = iVar7;
      pcVar5 = (char *)(*param_4)(&local_11,local_20,&local_30);
      cVar3 = *pcVar5;
      iVar6 = local_20;
      while (cVar3 != '\0') {
        local_18 = local_18 + 1;
        iVar6 = iVar6 + 0x10;
        pcVar5 = (char *)(*param_4)(&local_11,iVar6,&local_30);
        iVar7 = local_1c;
        cVar3 = *pcVar5;
      }
      local_20 = iVar7 * 0x10 + param_1;
      pcVar5 = (char *)(*param_4)(&local_12,&local_30,local_20);
      cVar3 = *pcVar5;
      iVar6 = local_20;
      while (cVar3 != '\0') {
        local_1c = local_1c + -1;
        iVar6 = iVar6 + -0x10;
        pcVar5 = (char *)(*param_4)(&local_12,&local_30,iVar6);
        iVar7 = local_1c;
        cVar3 = *pcVar5;
      }
      if (iVar7 < local_18) break;
      if (iVar7 != local_18) {
        iVar6 = iVar7 * 0x10;
        uVar1 = *(undefined8 *)(iVar6 + param_1);
        uVar2 = *(undefined8 *)(iVar6 + 8 + param_1);
        puVar4 = (undefined8 *)(local_18 * 0x10 + param_1);
        *(undefined8 *)(iVar6 + param_1) = *(undefined8 *)(local_18 * 0x10 + param_1);
        ((undefined8 *)(iVar6 + param_1))[1] = puVar4[1];
        *puVar4 = uVar1;
        puVar4[1] = uVar2;
      }
      iVar7 = iVar7 + -1;
      local_18 = local_18 + 1;
      local_1c = iVar7;
    } while (local_18 <= iVar7);
    if (param_2 < iVar7) {
      FUN_0127a040(param_1,param_2,iVar7,param_4);
    }
    param_2 = local_18;
    if (param_3 <= local_18) {
      return;
    }
  } while( true );
}

// 0127A190  FUN_0127a190  size=53  [run]
int __thiscall FUN_0127a190(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 0127A1D0  FUN_0127a1d0  size=60  [run]
void __fastcall FUN_0127a1d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0127A210  FUN_0127a210  size=33  [run]
void FUN_0127a210(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0127a040(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 0127A240  hkpTriggerVolume::vf10  size=3  [run]
void hkpTriggerVolume::vf10(void)

{
  return;
}

// 0127A250  hkpTriggerVolume::vf0C  size=3  [run]
void hkpTriggerVolume::vf0C(void)

{
  return;
}

// 0127A260  hkpTriggerVolume::vf0C  size=8  [run]
void hkpTriggerVolume::vf0C(void)

{
  vf00();
  return;
}

// 0127A270  hkpTriggerVolume::vf00  size=8  [run]
void hkpTriggerVolume::vf00(void)

{
  vf00();
  return;
}

// 0127A280  hkpTriggerVolume::vf00  size=8  [run]
void hkpTriggerVolume::vf00(void)

{
  vf00();
  return;
}

// 0127A290  FUN_0127a290  size=38  [run]
void FUN_0127a290(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0127A2C0  FUN_0127a2c0  size=48  [run]
int __fastcall FUN_0127a2c0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 0127A2F0  FUN_0127a2f0  size=104  [run]
void __thiscall FUN_0127a2f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(uint *)(param_1 + 0x24) == (*(uint *)(param_1 + 0x28) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x20),0x10);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = iVar1 + 1;
  puVar3 = (undefined4 *)(iVar1 * 0x10 + *(int *)(param_1 + 0x20));
  puVar3[2] = param_2;
  puVar3[3] = param_3;
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  puVar3[1] = *(undefined4 *)(param_2 + 0xd0);
  *puVar3 = uVar2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  FUN_01006000();
  return;
}

// 0127A360  hkpTriggerVolume::vf00  size=52  [run]
int __thiscall hkpTriggerVolume::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_32();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0127A3B0  FUN_0127a3b0  size=15  [run]
int __thiscall FUN_0127a3b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0127A3E0  FUN_0127a3e0  size=252  [run]
void __fastcall FUN_0127a3e0(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  
  if (((param_1[2] & 0x80000000U) == 0) && (iVar3 = 0, 0 < param_1[1])) {
    do {
      iVar1 = *(int *)(*param_1 + iVar3 * 4);
      if (iVar1 != 0) {
        pvVar2 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x200);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  if (((param_1[5] & 0x80000000U) == 0) && (iVar3 = 0, 0 < param_1[4])) {
    do {
      iVar1 = *(int *)(param_1[3] + iVar3 * 4);
      if (iVar1 != 0) {
        FUN_0127a3e0();
        pvVar2 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x20);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[4]);
  }
  param_1[4] = 0;
  if (-1 < param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = -0x80000000;
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
    *param_1 = 0;
    param_1[2] = -0x80000000;
    return;
  }
  *param_1 = 0;
  param_1[2] = -0x80000000;
  return;
}

// 0127A4E0  hkBaseObject::hkBaseObject_17  size=197  [run]
void __fastcall hkBaseObject::hkBaseObject_17(undefined4 *param_1)

{
  *param_1 = hkpSerializedAgentNnEntry::vftable;
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  if (param_1[3] != 0) {
    FUN_010060a0();
  }
  FUN_0127a3e0();
  param_1[0x1b] = 0;
  if (-1 < (int)param_1[0x1c]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x1a],param_1[0x1c] & 0x3fffffff);
  }
  param_1[0x1a] = 0;
  param_1[0x1c] = 0x80000000;
  param_1[0x18] = 0;
  if (-1 < (int)param_1[0x19]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x17],param_1[0x19] << 5);
  }
  param_1[0x17] = 0;
  param_1[0x19] = 0x80000000;
  param_1[0x15] = 0;
  if (-1 < (int)param_1[0x16]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x14],param_1[0x16] & 0x3fffffff);
  }
  param_1[0x14] = 0;
  param_1[0x16] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0127A5B0  FUN_0127a5b0  size=18  [run]
int __thiscall FUN_0127a5b0(int *param_1,int param_2)

{
  return param_2 * 0x50 + *param_1;
}

// 0127A5E0  hkBaseObject::hkBaseObject_15  size=106  [run]
void __fastcall hkBaseObject::hkBaseObject_15(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1[3];
  *param_1 = hkpSerializedDisplayRbTransforms::vftable;
  if (0 < iVar2) {
    do {
      FUN_010060a0();
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar1 = param_1[4];
  param_1[3] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],((uVar1 & 0x3fffffff) + uVar1 * 4) * 0x10)
    ;
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0127A670  FUN_0127a670  size=9  [run]
void FUN_0127a670(void)

{
  FUN_01010120();
  return;
}

// 0127A6A0  FUN_0127a6a0  size=18  [run]
int __thiscall FUN_0127a6a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 0127A700  FUN_0127a700  size=15  [run]
int __thiscall FUN_0127a700(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0127A730  FUN_0127a730  size=15  [run]
int __thiscall FUN_0127a730(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0127A780  FUN_0127a780  size=18  [run]
int __thiscall FUN_0127a780(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 0127A7B0  FUN_0127a7b0  size=15  [run]
int __thiscall FUN_0127a7b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0127A7D0  FUN_0127a7d0  size=40  [run]
void FUN_0127a7d0(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0xffffffff;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0127A810  FUN_0127a810  size=34  [run]
void FUN_0127a810(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0127A860  FUN_0127a860  size=29  [run]
void __thiscall FUN_0127a860(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 0127A890  FUN_0127a890  size=37  [run]
void FUN_0127a890(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0127A8E0  FUN_0127a8e0  size=130  [run]
void __thiscall FUN_0127a8e0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(*(int *)(param_1 + 8) + param_2 * 0xc);
  iVar4 = 0;
  if (0 < piVar1[1]) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + (*piVar1 + iVar4) * 8);
      iVar2 = *(int *)(param_1 + 0x14) + (*piVar1 + iVar4) * 8;
      if (*(int *)(*(int *)(iVar3 + 0x18) + 0x40 + (param_3 + *(int *)(iVar2 + 4) * 0x14) * 4) != 0)
      {
        FUN_010060a0();
      }
      *(int *)(*(int *)(iVar3 + 0x18) + 0x40 + (param_3 + *(int *)(iVar2 + 4) * 0x14) * 4) = param_4
      ;
      if (param_4 != 0) {
        FUN_01006000();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar1[1]);
  }
  return;
}

// 0127A970  FUN_0127a970  size=201  [run]
void __thiscall FUN_0127a970(int param_1,int param_2,float *param_3)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  
  piVar1 = (int *)(*(int *)(param_1 + 8) + param_2 * 0xc);
  iVar13 = 0;
  if (0 < piVar1[1]) {
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0x14) + (*piVar1 + iVar13) * 8);
      iVar4 = *(int *)(*piVar2 + 0x18);
      iVar14 = piVar2[1] * 0x50;
      pfVar3 = (float *)(iVar14 + 0x30 + iVar4);
      fVar5 = *pfVar3;
      fVar6 = pfVar3[1];
      fVar7 = pfVar3[2];
      fVar8 = pfVar3[3];
      iVar14 = iVar14 + iVar4;
      fVar9 = *param_3;
      fVar10 = param_3[1];
      fVar11 = param_3[2];
      fVar12 = param_3[3];
      iVar13 = iVar13 + 1;
      *(float *)(iVar14 + 0x20) = (fVar10 * fVar7 - fVar11 * fVar6) + fVar12 * fVar5 + fVar8 * fVar9
      ;
      *(float *)(iVar14 + 0x24) = (fVar11 * fVar5 - fVar9 * fVar7) + fVar12 * fVar6 + fVar8 * fVar10
      ;
      *(float *)(iVar14 + 0x28) = (fVar9 * fVar6 - fVar10 * fVar5) + fVar12 * fVar7 + fVar8 * fVar11
      ;
      *(float *)(iVar14 + 0x2c) = fVar8 * fVar12 - (fVar10 * fVar6 + fVar9 * fVar5 + fVar11 * fVar7)
      ;
    } while (iVar13 < piVar1[1]);
  }
  return;
}

// 0127AA40  FUN_0127aa40  size=136  [run]
void __thiscall FUN_0127aa40(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(*(int *)(param_1 + 8) + param_2 * 0xc);
  iVar4 = 0;
  if (0 < piVar1[1]) {
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0x14) + (*piVar1 + iVar4) * 8);
      iVar3 = *(int *)(*(int *)(*piVar2 + 0x18) + 0x40 + (param_3 + piVar2[1] * 0x14) * 4);
      if (iVar3 != 0) {
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_4,4);
        }
        *(int *)(*param_4 + param_4[1] * 4) = iVar3;
        param_4[1] = param_4[1] + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar1[1]);
  }
  return;
}

