// src/managers/triggermanager/cCondPhaseJump.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C77C20..00C980D0, 9 functions

#include "mgrr.h"

// 00C77C20  Trigger::cCondPhaseJump::vf04  size=1  [class]
void Trigger::cCondPhaseJump::vf04(void)

{
  return;
}

// 00C77C30  Trigger::cCondPhaseJump::vf08  size=1  [class]
void Trigger::cCondPhaseJump::vf08(void)

{
  return;
}

// 00C77C40  Trigger::cCondPhaseJump::vf0C  size=6  [class]
undefined4 Trigger::cCondPhaseJump::vf0C(void)

{
  return 1;
}

// 00C77C50  Trigger::cCondPhaseJump::vf10  size=1  [class]
void Trigger::cCondPhaseJump::vf10(void)

{
  return;
}

// 00C77C60  Trigger::cCondPhaseJump::vf18  size=3  [class]
undefined4 Trigger::cCondPhaseJump::vf18(void)

{
  return 0;
}

// 00C77D10  Trigger::cCondPhaseJump::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPhaseJump::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C797B0  Trigger::cCondPhaseJump::vf14  size=10  [class]
void Trigger::cCondPhaseJump::vf14(void)

{
  FUN_00d4f160();
  return;
}

// 00C797C0  Trigger::cCondPhaseJump::vf1C  size=10  [class]
void __thiscall Trigger::cCondPhaseJump::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C980D0  Trigger::cCondPhaseJump::cCondPhaseJump  size=6021  [class]
int * Trigger::cCondPhaseJump::cCondPhaseJump(int param_1)

{
  int iVar1;
  int *piVar2;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    iVar1 = FUN_00dd3500(0x94,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondSequence::cCondSequence();
      goto LAB_00c98112;
    }
    break;
  case 1:
    iVar1 = FUN_00dd3500(0x8c,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondAnd::cCondAnd();
      goto LAB_00c98112;
    }
    break;
  case 2:
    piVar2 = (int *)FUN_00dd3500(0x8c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondOr::vftable;
      piVar2[0x22] = 0;
      goto LAB_00c98112;
    }
    break;
  case 3:
    iVar1 = FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondTime::cCondTime();
      goto LAB_00c98112;
    }
    break;
  case 4:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondArea::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 5:
    piVar2 = (int *)FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaGroup::vftable;
      piVar2[8] = 0;
      goto LAB_00c98112;
    }
    break;
  case 6:
    piVar2 = (int *)FUN_00dd3500(0x38,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaEm::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 7:
    iVar1 = FUN_00dd3500(0xcc,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondDisorderedSequence::cCondDisorderedSequence();
      goto LAB_00c98112;
    }
    break;
  case 8:
    iVar1 = FUN_00dd3500(0x30,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondStartAnimation::cCondStartAnimation();
      goto LAB_00c98112;
    }
    break;
  case 9:
    iVar1 = FUN_00dd3500(0x30,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEndAnimation::cCondEndAnimation();
      goto LAB_00c98112;
    }
    break;
  case 10:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)vftable;
      goto LAB_00c98112;
    }
    break;
  case 0xb:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondOnce::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0xc:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondTrue::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0xd:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsDoorOpen::cCondIsDoorOpen();
      goto LAB_00c98112;
    }
    break;
  case 0xe:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPlayerEngGaugeFull::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0xf:
    iVar1 = FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsScrMeshOn::cCondIsScrMeshOn();
      goto LAB_00c98112;
    }
    break;
  case 0x10:
    iVar1 = FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsScrMeshOff::cCondIsScrMeshOff();
      goto LAB_00c98112;
    }
    break;
  case 0x11:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsScrCollisionOn::cCondIsScrCollisionOn();
      goto LAB_00c98112;
    }
    break;
  case 0x12:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaOut::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x13:
    piVar2 = (int *)FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaGroupOut::vftable;
      piVar2[8] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x14:
    piVar2 = (int *)FUN_00dd3500(0x38,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaEmOut::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x15:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x16:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishByName::cCondEnemyFinishByName();
      goto LAB_00c98112;
    }
    break;
  case 0x17:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyCountByNumber::vftable;
      piVar2[4] = 0;
      piVar2[6] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x18:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyCountByName::cCondEnemyCountByName();
      goto LAB_00c98112;
    }
    break;
  case 0x19:
    piVar2 = (int *)FUN_00dd3500(0x40,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondInCamera::vftable;
      piVar2[4] = 0;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x1a:
    piVar2 = (int *)FUN_00dd3500(0x40,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondOutCamera::vftable;
      piVar2[4] = 0;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x1b:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishHP0ByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x1c:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishHP0ByName::cCondEnemyFinishHP0ByName();
      goto LAB_00c98112;
    }
    break;
  case 0x1d:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyCountHP0ByNumber::vftable;
      piVar2[4] = 0;
      piVar2[6] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x1e:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyCountHP0ByName::vftable;
      piVar2[4] = 0;
      piVar2[6] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x1f:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x20:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsSubstage::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x21:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPastSubstage::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x22:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNowPastSubstage::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x23:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPlayerHpGaugeFull::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x24:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyNotSetByNumber::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x25:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyNotSetByName::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x26:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x27:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsDoorClose::cCondIsDoorClose();
      goto LAB_00c98112;
    }
    break;
  case 0x28:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPlayerHpGaugeState::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x29:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondChainBreak::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x2a:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPlayerDie::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x2b:
    goto LAB_00c988c4;
  case 0x2c:
    goto LAB_00c988f4;
  case 0x2d:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondBehaviorInstruction::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x2e:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondConversation::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x2f:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondResultFollowMove::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x30:
    iVar1 = FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsLoadRoom::cCondIsLoadRoom();
      goto LAB_00c98112;
    }
    break;
  case 0x31:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondHackStart::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x32:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondPlayerEnergyGaugeState::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x33:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsEndPlayMovie::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x34:
  case 0x7f:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondGimmick::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x35:
    iVar1 = FUN_00dd3500(0x30,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsFileExist::cCondIsFileExist();
      goto LAB_00c98112;
    }
    break;
  case 0x36:
    iVar1 = FUN_00dd3500(0x30,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondIsNotFileExist::cCondIsNotFileExist();
      goto LAB_00c98112;
    }
    break;
  case 0x37:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondGameFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x38:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotGameFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x39:
LAB_00c988c4:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondRoomEvent::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x3a:
LAB_00c988f4:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondRoomEventEnd::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x3b:
  case 0x80:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondCodecSeqEnd::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x3c:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyEntityCountByNumber::vftable;
      piVar2[4] = 0;
      piVar2[6] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x3d:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyEntityCountByName::cCondEnemyEntityCountByName();
      goto LAB_00c98112;
    }
    break;
  case 0x3e:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyEntityCountHP0ByNumber::vftable;
      piVar2[4] = 0;
      piVar2[6] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x3f:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyEntityCountHP0ByName::cCondEnemyEntityCountHP0ByName();
      goto LAB_00c98112;
    }
    break;
  case 0x40:
    goto LAB_00c98c43;
  case 0x41:
LAB_00c98c43:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondRoomEventNotEnd::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x42:
    iVar1 = FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishByNumber::cCondEnemyGroupFinishByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x43:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishByName::cCondEnemyGroupFinishByName();
      goto LAB_00c98112;
    }
    break;
  case 0x44:
    iVar1 = FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishHP0ByNumber::cCondEnemyGroupFinishHP0ByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x45:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishHP0ByName::cCondEnemyGroupFinishHP0ByName();
      goto LAB_00c98112;
    }
    break;
  case 0x46:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyGroupNotSetByNumber::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x47:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyGroupNotSetByName::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x48:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsUIAnimEnd::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x49:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupCountByNumber::cCondEnemyGroupCountByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x4a:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupCountByName::cCondEnemyGroupCountByName();
      goto LAB_00c98112;
    }
    break;
  case 0x4b:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupEntityCountByNumber::cCondEnemyGroupEntityCountByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x4c:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupEntityCountByName::cCondEnemyGroupEntityCountByName();
      goto LAB_00c98112;
    }
    break;
  case 0x4d:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupCountHP0ByNumber::cCondEnemyGroupCountHP0ByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x4e:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupCountHP0ByName::cCondEnemyGroupCountHP0ByName();
      goto LAB_00c98112;
    }
    break;
  case 0x4f:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyGroupEntityCountHP0ByNumber::vftable;
      piVar2[4] = 0;
      piVar2[7] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x50:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupEntityCountHP0ByName::cCondEnemyGroupEntityCountHP0ByName();
      goto LAB_00c98112;
    }
    break;
  case 0x51:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondStaFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x52:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotStaFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x53:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondStpFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x54:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotStpFlag::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x55:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondHasItem::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x56:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondHasNotItem::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x57:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsNowBattle::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x58:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondResultEnd::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x59:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondHostageSaved::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x5a:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondLineInfraredHit::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x5b:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsBattleAreaOn::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x5c:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishDebrisByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x5d:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishDebrisByName::cCondEnemyFinishDebrisByName();
      goto LAB_00c98112;
    }
    break;
  case 0x5e:
    iVar1 = FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishDebrisByNumber::cCondEnemyGroupFinishDebrisByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x5f:
    iVar1 = FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyGroupFinishDebrisByName::cCondEnemyGroupFinishDebrisByName();
      goto LAB_00c98112;
    }
    break;
  case 0x60:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsAnimPlay::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x61:
    piVar2 = (int *)FUN_00dd3500(0x58,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[0xc] = -0x40800000;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondTimeSta::vftable;
      piVar2[0x15] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x62:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishCompByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 99:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishCompByName::cCondEnemyFinishCompByName();
      goto LAB_00c98112;
    }
    break;
  case 100:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishHPCompByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x65:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishHPCompByName::cCondEnemyFinishHPCompByName();
      goto LAB_00c98112;
    }
    break;
  case 0x66:
    piVar2 = (int *)FUN_00dd3500(0x20,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = 0;
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyFinishDebrisCompByNumber::vftable;
      piVar2[7] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x67:
    iVar1 = FUN_00dd3500(0x24,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondEnemyFinishDebrisCompByName::cCondEnemyFinishDebrisCompByName();
      goto LAB_00c98112;
    }
    break;
  case 0x68:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsEndAntiqueScroll::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x69:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsNowVRMission::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x6a:
    iVar1 = FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondVrEnemyGroupFinishByNumber::cCondVrEnemyGroupFinishByNumber();
      goto LAB_00c98112;
    }
    break;
  case 0x6b:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsCodec::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x6c:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsAnyCodec::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x6d:
    iVar1 = FUN_00dd3500(0x94,PTR_DAT_018ab998);
    if (iVar1 != 0) {
      piVar2 = (int *)cCondResetSequence::cCondResetSequence();
      goto LAB_00c98112;
    }
    break;
  case 0x6e:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsDifficulty::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x6f:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsZangeki::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x70:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsFade::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x71:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsFadeEnd::vftable;
      piVar2[4] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x72:
    piVar2 = (int *)FUN_00dd3500(0x10,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondIsRipperMode::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x73:
    goto LAB_00c99517;
  case 0x74:
LAB_00c99517:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondGenericFlag::vftable;
      piVar2[4] = 0;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x75:
    piVar2 = (int *)FUN_00dd3500(0x1c,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyGroupIsCautionLevelByNumber::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x76:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondEnemyIsCautionLevelByNumber::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x77:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioArea::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x78:
    piVar2 = (int *)FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioAreaGroup::vftable;
      piVar2[8] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x79:
    piVar2 = (int *)FUN_00dd3500(0x38,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioAreaEm::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x7a:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioAreaOut::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x7b:
    piVar2 = (int *)FUN_00dd3500(0x28,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioAreaGroupOut::vftable;
      piVar2[8] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x7c:
    piVar2 = (int *)FUN_00dd3500(0x38,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondScenarioAreaEmOut::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x7d:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaPlCam::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x7e:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondAreaPlCamOut::vftable;
      goto LAB_00c98112;
    }
    break;
  case 0x81:
    piVar2 = (int *)FUN_00dd3500(0x18,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondKgkArea::vftable;
      piVar2[5] = 0;
      goto LAB_00c98112;
    }
    break;
  case 0x82:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondFlagDlc2::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x83:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotFlagDlc2::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x84:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondFlagDlc3::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  case 0x85:
    piVar2 = (int *)FUN_00dd3500(0x14,PTR_DAT_018ab998);
    if (piVar2 != (int *)0x0) {
      piVar2[3] = -1;
      piVar2[1] = 0;
      piVar2[2] = -1;
      *piVar2 = (int)cCondNotFlagDlc3::vftable;
      piVar2[4] = -1;
      goto LAB_00c98112;
    }
    break;
  default:
    FUN_00dd5650(&DAT_016b1724,DAT_018b9254,*(undefined4 *)(param_1 + 4));
    return (int *)0x0;
  }
  piVar2 = (int *)0x0;
LAB_00c98112:
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x1c))(param_1);
  }
  return piVar2;
}

