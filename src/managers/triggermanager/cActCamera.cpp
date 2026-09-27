// src/managers/triggermanager/cActCamera.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCamera.h"

extern undefined DAT_01dbd218;          // cActCamera static descriptor returned by vf00
extern void *PTR_DAT_018ab998;          // heap used for trigger action objects
extern unsigned char DAT_00c9ba90[];    // action type -> switch case index (0x201 entries)
extern char DAT_016b1764[];             // debug message: unknown action type
extern int DAT_018b9254;                // argument of that debug message

namespace cActCamera_p1 {

// FUN_00dd3500: allocate `size` bytes from a heap (functions.h declares it void).
inline int *allocAction(unsigned int size)
{
    return ((int *(*)(unsigned int, void *))FUN_00dd3500)(size, PTR_DAT_018ab998);
}

// 00C93CC0 Trigger::cActArray::cActArray (__fastcall, object in ECX); returns the object.
inline int *constructActArray(int *memory)
{
    return ((int *(__fastcall *)(int *))0x00C93CC0)(memory);
}

// action vftable slot 0x1C: store the action record.
inline void setActionRecord(int *action, int *record)
{
    (*(void (__thiscall **)(int *, int *))((char *)action[0] + 0x1C))(action, record);
}

// FUN_00dd5650: debug printf (empty in release).
inline void reportBadActionType(unsigned int type)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(DAT_016b1764, DAT_018b9254, type);
}

} // namespace cActCamera_p1

// 00C89010  Trigger::cActCamera::vf08  size=1  [class]
void Trigger::cActCamera::vf08()
{
}

// 00C89020  Trigger::cActCamera::vf0C  size=1  [class]
void Trigger::cActCamera::vf0C()
{
}

// 00C89030  Trigger::cActCamera::vf10  size=1  [class]
void Trigger::cActCamera::vf10()
{
}

// 00C89040  Trigger::cActCamera::vf14  size=1  [class]
void Trigger::cActCamera::vf14()
{
}

// 00C91630  Trigger::cActCamera::vf00  size=6  [class]
void *Trigger::cActCamera::vf00()
{
    return &DAT_01dbd218;
}

// 00C91640  Trigger::cActCamera::vf04  size=31  [class]
Trigger::cActCamera *Trigger::cActCamera::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C99A70  Trigger::cActCamera::cActCamera  size=7444  [class]
Trigger::cActionAbstract *Trigger::cActCamera::createAction(int *record)
{
    using namespace cActCamera_p1;
    int *action = 0;
    int *memory;
    unsigned int type = (unsigned int)record[1];

    if (0x200 < type) {
        reportBadActionType(type);
        return 0;
    }
    // Each case is an inlined `new (heap) Trigger::cActXxx()`: word 1 = record (0), word 0 = vftable.
    switch (DAT_00c9ba90[type]) {
    case 0x01:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[2] = 0;
            action[0] = 0x016AEA78;  // Trigger::cActCamera::vftable
        }
        break;
    case 0x02:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEAC8;  // Trigger::cActTeleportExplicit::vftable
        }
        break;
    case 0x03:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEB40;  // Trigger::cActStaFlagOn::vftable
            action[2] = -1;
        }
        break;
    case 0x04:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEF94;  // Trigger::cActTerminate::vftable
        }
        break;
    case 0x05:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEB18;  // Trigger::cActDoorOpen::vftable
        }
        break;
    case 0x06:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEB68;  // Trigger::cActCamOff::vftable
        }
        break;
    case 0x00:  // same object as case 0x07
    case 0x07:
        action = allocAction(0x10);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEF44;  // Trigger::cActAnimation::vftable
            action[2] = 0;
            action[3] = 0;
        }
        break;
    case 0x08:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0170;  // Trigger::cActScrCollisionOn::vftable
        }
        break;
    case 0x09:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0198;  // Trigger::cActScrCollisionOff::vftable
        }
        break;
    case 0x0A:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEBE0;  // Trigger::cActSoftEvent::vftable
        }
        break;
    case 0x0B:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEAA0;  // Trigger::cActSubphase::vftable
        }
        break;
    case 0x0C:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEC08;  // Trigger::cActPhase::vftable
        }
        break;
    case 0x0D:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0E2C;  // Trigger::cActBoss::vftable
        }
        break;
    case 0x0E:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEC88;  // Trigger::cActEnemyByNumber::vftable
        }
        break;
    case 0x0F:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEC5C;  // Trigger::cActEnemyByName::vftable
        }
        break;
    case 0x10:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AED34;  // Trigger::cActEnemyRetreatByNumber::vftable
        }
        break;
    case 0x11:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AED0C;  // Trigger::cActEnemyRetreatByName::vftable
        }
        break;
    case 0x12:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AED84;  // Trigger::cActEnemyClearByNumber::vftable
        }
        break;
    case 0x13:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEDAC;  // Trigger::cActEffect::vftable
        }
        break;
    case 0x14:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEDD4;  // Trigger::cActResult::vftable
        }
        break;
    case 0x15:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AECE0;  // Trigger::cActEnemyByNumberForce::vftable
        }
        break;
    case 0x16:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AECB4;  // Trigger::cActEnemyByNameForce::vftable
        }
        break;
    case 0x17:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEAF0;  // Trigger::cActTeleportIndex::vftable
        }
        break;
    case 0x18:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AED5C;  // Trigger::cActEnemyClearByName::vftable
        }
        break;
    case 0x19:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEDFC;  // Trigger::cActTurnOff::vftable
        }
        break;
    case 0x1A:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEE24;  // Trigger::cActSE::vftable
        }
        break;
    case 0x1B:
        action = allocAction(0x10);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEEF4;  // Trigger::cActFuncall::vftable
            action[2] = 0;
            action[3] = 1;
        }
        break;
    case 0x1D:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEFBC;  // Trigger::cActFollowPath::vftable
        }
        break;
    case 0x1E:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[2] = 0;
            action[0] = 0x016AEF6C;  // Trigger::cActAnimationOrigin::vftable
        }
        break;
    case 0x1F:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEFE4;  // Trigger::cActCameraDistance::vftable
        }
        break;
    case 0x20:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF00C;  // Trigger::cActCameraDistanceOff::vftable
        }
        break;
    case 0x21:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF05C;  // Trigger::cActCameraFocusOff::vftable
        }
        break;
    case 0x22:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF034;  // Trigger::cActCameraFocus::vftable
        }
        break;
    case 0x23:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF084;  // Trigger::cActCameraAngle::vftable
        }
        break;
    case 0x24:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF0AC;  // Trigger::cActCameraAngleOff::vftable
        }
        break;
    case 0x25:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF0D4;  // Trigger::cActPhaseSubphase::vftable
        }
        break;
    case 0x26:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF0FC;  // Trigger::cActDoorClose::vftable
        }
        break;
    case 0x27:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF124;  // Trigger::cActDebugMessage::vftable
        }
        break;
    case 0x28:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF14C;  // Trigger::cActStage::vftable
        }
        break;
    case 0x29:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF174;  // Trigger::cActSubstage::vftable
        }
        break;
    case 0x2A:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF19C;  // Trigger::cActText::vftable
        }
        break;
    case 0x2B:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF1EC;  // Trigger::cActFlagOn::vftable
        }
        break;
    case 0x2C:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF214;  // Trigger::cActFlagOff::vftable
        }
        break;
    case 0x2D:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF23C;  // Trigger::cActLoadRoom::vftable
        }
        break;
    case 0x2E:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF264;  // Trigger::cActUnloadRoom::vftable
        }
        break;
    case 0x2F:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF1C4;  // Trigger::cActTextOut::vftable
        }
        break;
    case 0x31:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF2B4;  // Trigger::cActPosIndex::vftable
        }
        break;
    case 0x32:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF2DC;  // Trigger::cActEmMsg::vftable
        }
        break;
    case 0x33:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF304;  // Trigger::cActScene::vftable
            action[2] = 0;
        }
        break;
    case 0x34:
        action = allocAction(0x14);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF32C;  // Trigger::cActEmMsgDirect::vftable
        }
        break;
    case 0x35:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF354;  // Trigger::cActCollision::vftable
        }
        break;
    case 0x36:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF37C;  // Trigger::cActBgm::vftable
        }
        break;
    case 0x37:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF424;  // Trigger::cActBgmSimple::vftable
        }
        break;
    case 0x38:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF4F4;  // Trigger::cActSESimple::vftable
        }
        break;
    case 0x39:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF5E0;  // Trigger::cActSound::vftable
        }
        break;
    case 0x3A:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF608;  // Trigger::cActCollisionOff::vftable
        }
        break;
    case 0x3B:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF630;  // Trigger::cActSeEntity::vftable
        }
        break;
    case 0x3C:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF658;  // Trigger::cActRoomEvent::vftable
        }
        break;
    case 0x3D:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF680;  // Trigger::cActEffectRoom::vftable
        }
        break;
    case 0x3E:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF6A8;  // Trigger::cActPlayerDie::vftable
        }
        break;
    case 0x3F:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF6D0;  // Trigger::cActEnemyMove::vftable
        }
        break;
    case 0x40:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF6F8;  // Trigger::cActReqBehaviorInstruction::vftable
        }
        break;
    case 0x41:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF720;  // Trigger::cActRaderMap::vftable
        }
        break;
    case 0x42:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF748;  // Trigger::cActRadioInfoStart::vftable
        }
        break;
    case 0x43:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF770;  // Trigger::cActRadioInfoEnd::vftable
        }
        break;
    case 0x44:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF798;  // Trigger::cActConversationStart::vftable
        }
        break;
    case 0x45:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF7C0;  // Trigger::cActConversationEnd::vftable
        }
        break;
    case 0x46:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF7E8;  // Trigger::cActPathWayStart::vftable
        }
        break;
    case 0x47:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF810;  // Trigger::cActPathWayEnd::vftable
        }
        break;
    case 0x48:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF838;  // Trigger::cActTutorialStart::vftable
        }
        break;
    case 0x49:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF860;  // Trigger::cActTutorialEnd::vftable
        }
        break;
    case 0x4A:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF888;  // Trigger::cActAreaBarrierOff::vftable
        }
        break;
    case 0x4C:
        action = allocAction(0x10);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF8B0;  // Trigger::cActResultSetDisp::vftable
        }
        break;
    case 0x4D:  // same object as case 0x4E
    case 0x4E:
        action = allocAction(0x10);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF8D8;  // Trigger::cActEmAnimation::vftable
            action[2] = 0;
            action[3] = 0;
        }
        break;
    case 0x4B:  // same object as case 0x4F
    case 0x4F:
        action = allocAction(0x10);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF900;  // Trigger::cActPlAnimation::vftable
            action[2] = 0;
            action[3] = 0;
        }
        break;
    case 0x1C:  // same object as case 0x50
    case 0x50:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AEF1C;  // Trigger::cActTask::vftable
        }
        break;
    case 0x51:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF928;  // Trigger::cActResultSetEndDisp::vftable
        }
        break;
    case 0x52:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF950;  // Trigger::cActPlayerDeadDemo::vftable
        }
        break;
    case 0x53:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF978;  // Trigger::cActHackEnd::vftable
        }
        break;
    case 0x54:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF9A0;  // Trigger::cActCamFlag::vftable
        }
        break;
    case 0x55:  // same object as case 0x56
    case 0x56:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF9C8;  // Trigger::cActObjAttach::vftable
        }
        break;
    case 0x57:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AF9F0;  // Trigger::cActQTEButtonDisp::vftable
        }
        break;
    case 0x58:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFA18;  // Trigger::cActEnemyRequestEnd::vftable
        }
        break;
    case 0x59:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFA44;  // Trigger::cActEnemyRequestEndByName::vftable
        }
        break;
    case 0x5A:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFA70;  // Trigger::cActEnemyRequestEndBySubPhase::vftable
        }
        break;
    case 0x5B:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFA9C;  // Trigger::cActEnemyRequestEndAll::vftable
        }
        break;
    case 0x5C:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFAC8;  // Trigger::cActEnemyRequest::vftable
        }
        break;
    case 0x5D:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFAF4;  // Trigger::cActEnemyRequestByName::vftable
        }
        break;
    case 0x5E:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFB20;  // Trigger::cActEnemyRequestBySubPhase::vftable
        }
        break;
    case 0x5F:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFB4C;  // Trigger::cActMoviePlay::vftable
        }
        break;
    case 0x60:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFB74;  // Trigger::cActForceBattleFlag::vftable
        }
        break;
    case 0x61:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFB9C;  // Trigger::cActGimmickEnable::vftable
        }
        break;
    case 0x62:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFBC4;  // Trigger::cActFileRead::vftable
        }
        break;
    case 0x63:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFBEC;  // Trigger::cActFileRelease::vftable
        }
        break;
    case 0x64:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFC14;  // Trigger::cActEnemyFirstRequestEnd::vftable
        }
        break;
    case 0x65:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFC40;  // Trigger::cActSceneMovie::vftable
        }
        break;
    case 0x66:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFC68;  // Trigger::cActStopObjectType::vftable
        }
        break;
    case 0x67:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFC90;  // Trigger::cActMvObjectType::vftable
        }
        break;
    case 0x68:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFCB8;  // Trigger::cActGameFlagOn::vftable
            action[2] = -1;
        }
        break;
    case 0x69:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFCE0;  // Trigger::cActGameFlagOff::vftable
            action[2] = -1;
        }
        break;
    case 0x6A:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFD08;  // Trigger::cActSendSignal::vftable
            action[2] = -1;
        }
        break;
    case 0x6B:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFD30;  // Trigger::cActSendSignalContext::vftable
            action[2] = -1;
        }
        break;
    case 0x6C:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFD58;  // Trigger::cActCodecStart::vftable
        }
        break;
    case 0x6D:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFD80;  // Trigger::cActObjMeshTrans::vftable
        }
        break;
    case 0x6E:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFDA8;  // Trigger::cActPlayerEffectOn::vftable
        }
        break;
    case 0x6F:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFDD0;  // Trigger::cActPlayerEffectOff::vftable
        }
        break;
    case 0x70:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFDF8;  // Trigger::cActQTEButtonDispOff::vftable
        }
        break;
    case 0x71:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFE20;  // Trigger::cActObjectivePosSet::vftable
        }
        break;
    case 0x72:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFE48;  // Trigger::cActEnemyGroupByNumber::vftable
        }
        break;
    case 0x73:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFEA0;  // Trigger::cActJammingDispStart::vftable
        }
        break;
    case 0x74:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFEC8;  // Trigger::cActJammingDispEnd::vftable
        }
        break;
    case 0x75:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFEF0;  // Trigger::cActReqGpBehaviorInstruction::vftable
        }
        break;
    case 0x76:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFF18;  // Trigger::cActStaFlagOff::vftable
            action[2] = -1;
        }
        break;
    case 0x77:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFF40;  // Trigger::cActUIAnimStart::vftable
        }
        break;
    case 0x78:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFF68;  // Trigger::cActSetNextCodec::vftable
        }
        break;
    case 0x79:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFF90;  // Trigger::cActStpFlagOff::vftable
            action[2] = -1;
        }
        break;
    case 0x7A:
        action = allocAction(0xC);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFFB8;  // Trigger::cActStpFlagOn::vftable
            action[2] = -1;
        }
        break;
    case 0x7B:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016AFFE0;  // Trigger::cActSetUIAnimStartNone::vftable
        }
        break;
    case 0x7C:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0008;  // Trigger::cActSetGameoverNormalFlag::vftable
        }
        break;
    case 0x7D:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0030;  // Trigger::cActScrMeshOn::vftable
        }
        break;
    case 0x7E:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0058;  // Trigger::cActScrMeshOff::vftable
        }
        break;
    case 0x7F:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0080;  // Trigger::cActVmPlay::vftable
        }
        break;
    case 0x80:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B00A8;  // Trigger::cActItemGet::vftable
        }
        break;
    case 0x81:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B00D0;  // Trigger::cActActionMessageStart::vftable
        }
        break;
    case 0x82:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B00F8;  // Trigger::cActActionMessageFlagClear::vftable
        }
        break;
    case 0x83:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0120;  // Trigger::cActResultRecStart::vftable
        }
        break;
    case 0x84:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0148;  // Trigger::cActResultRecEnd::vftable
        }
        break;
    case 0x85:
        memory = allocAction(0x84);
        if (memory != 0) {
            action = constructActArray(memory);  // Trigger::cActArray::cActArray
        }
        break;
    case 0x86:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B01E8;  // Trigger::cActEffectRoomLoop::vftable
        }
        break;
    case 0x87:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0210;  // Trigger::cActEffectRoomLoopOff::vftable
        }
        break;
    case 0x88:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0238;  // Trigger::cActMesDispOffSkip::vftable
        }
        break;
    case 0x89:
        action = allocAction(0x10);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0260;  // Trigger::cActEmMsgDirectByNumber::vftable
        }
        break;
    case 0x8A:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0288;  // Trigger::cActCodecEnd::vftable
        }
        break;
    case 0x8B:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B02B0;  // Trigger::cActAntiqScrMove::vftable
        }
        break;
    case 0x8C:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B02D8;  // Trigger::cActAntiqScrReqEnd::vftable
        }
        break;
    case 0x8D:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0300;  // Trigger::cActBattleAreaOn::vftable
        }
        break;
    case 0x8E:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0328;  // Trigger::cActBattleAreaOff::vftable
        }
        break;
    case 0x30:  // same object as case 0x90
    case 0x8F:  // same object as case 0x90
    case 0x90:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B03AC;  // Trigger::cActEmAnimationByNumber::vftable
        }
        break;
    case 0x91:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B03D4;  // Trigger::cActObjectDisp::vftable
        }
        break;
    case 0x92:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B03FC;  // Trigger::cActDoorLock::vftable
        }
        break;
    case 0x93:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0424;  // Trigger::cActObjectCollision::vftable
        }
        break;
    case 0x94:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B044C;  // Trigger::cActVrComplete::vftable
        }
        break;
    case 0x95:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0474;  // Trigger::cActVrMistake::vftable
        }
        break;
    case 0x96:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B049C;  // Trigger::cActGimmickFinish::vftable
        }
        break;
    case 0x97:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B04C4;  // Trigger::cActGimmickRevert::vftable
        }
        break;
    case 0x98:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B04EC;  // Trigger::cActEnemyHide::vftable
        }
        break;
    case 0x99:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0514;  // Trigger::cActEnemyAppear::vftable
        }
        break;
    case 0x9A:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B053C;  // Trigger::cActGimmickRevivalCancel::vftable
        }
        break;
    case 0x9B:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0564;  // Trigger::cActEffectOff::vftable
        }
        break;
    case 0x9C:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B058C;  // Trigger::cActCodecEndAll::vftable
        }
        break;
    case 0x9D:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B05B4;  // Trigger::cActVrGoalPoint::vftable
        }
        break;
    case 0x9E:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B05DC;  // Trigger::cActFade::vftable
        }
        break;
    case 0x9F:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0604;  // Trigger::cActScrMeshOnAll::vftable
        }
        break;
    case 0xA0:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B062C;  // Trigger::cActScrMeshOffAll::vftable
        }
        break;
    case 0xA1:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0654;  // Trigger::cActDoorDispOn::vftable
        }
        break;
    case 0xA2:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B067C;  // Trigger::cActDoorDispOff::vftable
        }
        break;
    case 0xA3:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B06A4;  // Trigger::cActAddExp::vftable
        }
        break;
    case 0xA4:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B06CC;  // Trigger::cActCodecStartForSkip::vftable
        }
        break;
    case 0xA5:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B06F4;  // Trigger::cActItemDelInstallation::vftable
        }
        break;
    case 0xA6:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B071C;  // Trigger::cActItemDelDropAll::vftable
        }
        break;
    case 0xA7:  // same object as case 0xA8
    case 0xA8:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0744;  // Trigger::cActGenericFlag::vftable
        }
        break;
    case 0xA9:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B076C;  // Trigger::cActEnemyAppearResetPosByNumber::vftable
        }
        break;
    case 0xAA:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0794;  // Trigger::cActEnemyGroupAppearResetPosByNumber::vftable
        }
        break;
    case 0xAB:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B07BC;  // Trigger::cActEnemyDestroyByNumber::vftable
        }
        break;
    case 0xAC:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B07E4;  // Trigger::cActReqVrStart::vftable
        }
        break;
    case 0xAD:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B080C;  // Trigger::cActPlayerMaxHp::vftable
        }
        break;
    case 0xAE:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0834;  // Trigger::cActPlayerMaxDryCell::vftable
        }
        break;
    case 0xAF:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B085C;  // Trigger::cActSeObject::vftable
        }
        break;
    case 0xB0:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0884;  // Trigger::cActItemOnOff::vftable
        }
        break;
    case 0xB1:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B08AC;  // Trigger::cActNoCodecMenu::vftable
        }
        break;
    case 0xB2:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B08D4;  // Trigger::cActVrTimerStop::vftable
        }
        break;
    case 0xB3:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B08FC;  // Trigger::cActCamFocusLock::vftable
        }
        break;
    case 0xB4:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0924;  // Trigger::cActCamFocusLockOff::vftable
        }
        break;
    case 0xB5:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0974;  // Trigger::cActPlKgkPos::vftable
        }
        break;
    case 0xB6:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B09C4;  // Trigger::cActVrBm6000On::vftable
        }
        break;
    case 0xB7:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B09EC;  // Trigger::cActVrBm6000Off::vftable
        }
        break;
    case 0xB8:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0A64;  // Trigger::cActFlagOnDlc2::vftable
        }
        break;
    case 0xB9:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0A8C;  // Trigger::cActFlagOffDlc2::vftable
        }
        break;
    case 0xBA:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0AB4;  // Trigger::cActFlagOnDlc3::vftable
        }
        break;
    case 0xBB:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0ADC;  // Trigger::cActFlagOffDlc3::vftable
        }
        break;
    case 0xBC:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B099C;  // Trigger::cActPlKgkStop::vftable
        }
        break;
    case 0xBD:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B094C;  // Trigger::cActVrReturn::vftable
        }
        break;
    case 0xBE:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0A3C;  // Trigger::cActDoorOpenDelay::vftable
        }
        break;
    case 0xBF:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0A14;  // Trigger::cActDoorCloseDelay::vftable
        }
        break;
    case 0xC0:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0B04;  // Trigger::cActResultRecStartClear::vftable
        }
        break;
    case 0xC1:
        action = allocAction(0x8);
        if (action != 0) {
            action[1] = 0;
            action[0] = 0x016B0350;  // Trigger::cActReqShotMissile::vftable
        }
        break;
    case 0xC2:
        reportBadActionType(type);
        return 0;
    }
    if (action != 0) {
        setActionRecord(action, record);
    }
    return (cActionAbstract *)action;
}
