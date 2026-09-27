// src/managers/triggermanager/cActCamera.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C89010..00C99A70, 7 functions

#include "mgrr.h"

// 00C89010  Trigger::cActCamera::vf08  size=1  [class]
void Trigger::cActCamera::vf08(void)

{
  return;
}

// 00C89020  Trigger::cActCamera::vf0C  size=1  [class]
void Trigger::cActCamera::vf0C(void)

{
  return;
}

// 00C89030  Trigger::cActCamera::vf10  size=1  [class]
void Trigger::cActCamera::vf10(void)

{
  return;
}

// 00C89040  Trigger::cActCamera::vf14  size=1  [class]
void Trigger::cActCamera::vf14(void)

{
  return;
}

// 00C91630  Trigger::cActCamera::vf00  size=6  [class]
undefined * Trigger::cActCamera::vf00(void)

{
  return &DAT_01dbd218;
}

// 00C91640  Trigger::cActCamera::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActCamera::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C99A70  Trigger::cActCamera::cActCamera  size=7444  [class]
int * Trigger::cActCamera::cActCamera(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (0x200 < uVar1) {
switchD_00c99a90_caseD_c2:
    FUN_00dd5650(&DAT_016b1764,DAT_018b9254,uVar1);
    return (int *)0x0;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_00c9ba90)[uVar1]) {
  case 0:
    goto LAB_00c99a9e;
  case 1:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      *piVar3 = (int)vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 2:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTeleportExplicit::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 3:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStaFlagOn::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 4:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTerminate::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 5:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorOpen::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 6:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCamOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 7:
LAB_00c99a9e:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActAnimation::vftable;
      piVar3[2] = 0;
      piVar3[3] = 0;
      goto LAB_00c99ac1;
    }
    break;
  case 8:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrCollisionOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 9:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrCollisionOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 10:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSoftEvent::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSubphase::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xc:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPhase::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xd:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActBoss::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xe:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xf:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyByName::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x10:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRetreatByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x11:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRetreatByName::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x12:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyClearByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x13:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEffect::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x14:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResult::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x15:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyByNumberForce::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x16:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyByNameForce::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x17:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTeleportIndex::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x18:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyClearByName::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x19:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTurnOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x1a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSE::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x1b:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFuncall::vftable;
      piVar3[2] = 0;
      piVar3[3] = 1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x1c:
    goto LAB_00c99eda;
  case 0x1d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFollowPath::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x1e:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      piVar3[2] = 0;
      *piVar3 = (int)cActAnimationOrigin::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x1f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraDistance::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x20:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraDistanceOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x21:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraFocusOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x22:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraFocus::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x23:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraAngle::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x24:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCameraAngleOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x25:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPhaseSubphase::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x26:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorClose::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x27:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDebugMessage::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x28:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStage::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x29:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSubstage::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActText::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActLoadRoom::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActUnloadRoom::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x2f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTextOut::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x30:
    goto LAB_00c9a1e5;
  case 0x31:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPosIndex::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x32:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEmMsg::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x33:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScene::vftable;
      piVar3[2] = 0;
      goto LAB_00c99ac1;
    }
    break;
  case 0x34:
    piVar3 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEmMsgDirect::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x35:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCollision::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x36:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActBgm::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x37:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActBgmSimple::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x38:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSESimple::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x39:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSound::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCollisionOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSeEntity::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActRoomEvent::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEffectRoom::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerDie::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x3f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyMove::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x40:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActReqBehaviorInstruction::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x41:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActRaderMap::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x42:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActRadioInfoStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x43:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActRadioInfoEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x44:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActConversationStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x45:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActConversationEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x46:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPathWayStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x47:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPathWayEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x48:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTutorialStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x49:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTutorialEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x4a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActAreaBarrierOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x4b:
    goto LAB_00c9a5fc;
  case 0x4c:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResultSetDisp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x4d:
    goto LAB_00c9a651;
  case 0x4e:
LAB_00c9a651:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEmAnimation::vftable;
      piVar3[2] = 0;
      piVar3[3] = 0;
      goto LAB_00c99ac1;
    }
    break;
  case 0x4f:
LAB_00c9a5fc:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlAnimation::vftable;
      piVar3[2] = 0;
      piVar3[3] = 0;
      goto LAB_00c99ac1;
    }
    break;
  case 0x50:
LAB_00c99eda:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActTask::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x51:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResultSetEndDisp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x52:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerDeadDemo::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x53:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActHackEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x54:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCamFlag::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x55:
    goto LAB_00c9a73a;
  case 0x56:
LAB_00c9a73a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActObjAttach::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x57:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActQTEButtonDisp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x58:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x59:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestEndByName::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestEndBySubPhase::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestEndAll::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequest::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestByName::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyRequestBySubPhase::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x5f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActMoviePlay::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x60:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActForceBattleFlag::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x61:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGimmickEnable::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x62:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFileRead::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 99:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFileRelease::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 100:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyFirstRequestEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x65:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSceneMovie::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x66:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStopObjectType::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x67:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActMvObjectType::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x68:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGameFlagOn::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x69:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGameFlagOff::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6a:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSendSignal::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6b:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSendSignalContext::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCodecStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActObjMeshTrans::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerEffectOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x6f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerEffectOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x70:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActQTEButtonDispOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x71:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActObjectivePosSet::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x72:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyGroupByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x73:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActJammingDispStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x74:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActJammingDispEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x75:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActReqGpBehaviorInstruction::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x76:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStaFlagOff::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x77:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActUIAnimStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x78:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSetNextCodec::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x79:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStpFlagOff::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7a:
    piVar3 = (int *)FUN_00dd3500(0xc,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActStpFlagOn::vftable;
      piVar3[2] = -1;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSetUIAnimStartNone::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSetGameoverNormalFlag::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrMeshOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrMeshOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x7f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVmPlay::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x80:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActItemGet::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x81:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActActionMessageStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x82:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActActionMessageFlagClear::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x83:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResultRecStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x84:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResultRecEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x85:
    iVar2 = FUN_00dd3500(0x84,PTR_DAT_018ab998);
    if (iVar2 != 0) {
      piVar3 = (int *)cActArray::cActArray();
      goto LAB_00c99ac1;
    }
    break;
  case 0x86:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEffectRoomLoop::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x87:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEffectRoomLoopOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x88:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActMesDispOffSkip::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x89:
    piVar3 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEmMsgDirectByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCodecEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActAntiqScrMove::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActAntiqScrReqEnd::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActBattleAreaOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActBattleAreaOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x8f:
    goto LAB_00c9a1e5;
  case 0x90:
LAB_00c9a1e5:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEmAnimationByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x91:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActObjectDisp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x92:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorLock::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x93:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActObjectCollision::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x94:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrComplete::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x95:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrMistake::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x96:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGimmickFinish::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x97:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGimmickRevert::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x98:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyHide::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x99:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyAppear::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9a:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGimmickRevivalCancel::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9b:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEffectOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9c:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCodecEndAll::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9d:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrGoalPoint::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9e:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFade::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0x9f:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrMeshOnAll::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa0:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActScrMeshOffAll::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa1:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorDispOn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa2:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorDispOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa3:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActAddExp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa4:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCodecStartForSkip::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa5:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActItemDelInstallation::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa6:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActItemDelDropAll::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa7:
    goto LAB_00c9b3a1;
  case 0xa8:
LAB_00c9b3a1:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActGenericFlag::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xa9:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyAppearResetPosByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xaa:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyGroupAppearResetPosByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xab:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActEnemyDestroyByNumber::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xac:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActReqVrStart::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xad:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerMaxHp::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xae:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlayerMaxDryCell::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xaf:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActSeObject::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb0:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActItemOnOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb1:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActNoCodecMenu::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb2:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrTimerStop::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb3:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCamFocusLock::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb4:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActCamFocusLockOff::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb5:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlKgkPos::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb6:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrBm6000On::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb7:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrBm6000Off::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb8:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOnDlc2::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xb9:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOffDlc2::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xba:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOnDlc3::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xbb:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActFlagOffDlc3::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xbc:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActPlKgkStop::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xbd:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActVrReturn::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xbe:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorOpenDelay::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xbf:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActDoorCloseDelay::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xc0:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActResultRecStartClear::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xc1:
    piVar3 = (int *)FUN_00dd3500(8,PTR_DAT_018ab998);
    if (piVar3 != (int *)0x0) {
      piVar3[1] = 0;
      *piVar3 = (int)cActReqShotMissile::vftable;
      goto LAB_00c99ac1;
    }
    break;
  case 0xc2:
    goto switchD_00c99a90_caseD_c2;
  }
  piVar3 = (int *)0x0;
LAB_00c99ac1:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x1c))(param_1);
  }
  return piVar3;
}

