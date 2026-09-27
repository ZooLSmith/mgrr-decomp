// src/managers/triggermanager/cCondPhaseJump.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondPhaseJump.h"

extern int *PTR_DAT_018ab998;   // trigger heap passed to FUN_00dd3500
extern undefined4 DAT_018b9254; // current phase number (printed as p%03x.trg)
extern uint DAT_018b9140;       // flags word tested by vf14 (bit 8)
extern undefined DAT_016b1724;  // Shift-JIS "TriggerManager: p%03x.trg has an undefined condition. Condition type is \"%d\""

namespace cCondPhaseJump_p1 {

// FUN_00dd3500: allocate `size` bytes from `heap` (functions.h declares it void; the block is in EAX)
inline int *allocCondition(unsigned int size)
{
    return ((int *(__cdecl *)(unsigned int, int *))FUN_00dd3500)(size, PTR_DAT_018ab998);
}

// call the out-of-line constructor at `ctorAddress` on `memory` (ECX = memory, returns this)
inline int *construct(unsigned int ctorAddress, int *memory)
{
    return ((int *(__thiscall *)(int *))ctorAddress)(memory);
}

// allocate `size` bytes and run the class constructor on them; NULL if the allocation failed
inline int *newConditionByCtor(unsigned int size, unsigned int ctorAddress)
{
    int *memory = allocCondition(size);
    if (memory != 0) {
        return construct(ctorAddress, memory);
    }
    return 0;
}

// inlined Trigger::cCondition constructor followed by the derived vftable store:
// +0x0C = -1, +0x04 (record) = 0, +0x08 = -1, +0x00 = vftable
inline void initConditionBase(int *condition, unsigned int vftable)
{
    condition[3] = -1;
    condition[1] = 0;
    condition[2] = -1;
    condition[0] = (int)vftable;
}

// FUN_00dd5650: debug printf (cdecl, varargs)
inline void debugPrint(const void *format, undefined4 phase, int conditionType)
{
    ((void (__cdecl *)(const void *, ...))FUN_00dd5650)(format, phase, conditionType);
}

// out-of-line constructors of Trigger::cCond* classes (ECX = this, return this)
const unsigned int kCtor_cCondTime = 0x00C78CC0;
const unsigned int kCtor_cCondSequence = 0x00C78EC0;
const unsigned int kCtor_cCondDisorderedSequence = 0x00C791A0;
const unsigned int kCtor_cCondAnd = 0x00C793F0;
const unsigned int kCtor_cCondIsDoorOpen = 0x00C79B00;
const unsigned int kCtor_cCondEnemyFinishByName = 0x00C7A0F0;
const unsigned int kCtor_cCondEnemyCountByName = 0x00C7A280;
const unsigned int kCtor_cCondEnemyFinishHP0ByName = 0x00C7A580;
const unsigned int kCtor_cCondIsDoorClose = 0x00C7AA10;
const unsigned int kCtor_cCondIsLoadRoom = 0x00C7AEA0;
const unsigned int kCtor_cCondIsFileExist = 0x00C7B150;
const unsigned int kCtor_cCondIsNotFileExist = 0x00C7B1E0;
const unsigned int kCtor_cCondEnemyEntityCountByName = 0x00C7B560;
const unsigned int kCtor_cCondEnemyEntityCountHP0ByName = 0x00C7B6C0;
const unsigned int kCtor_cCondEnemyGroupFinishByName = 0x00C7B7D0;
const unsigned int kCtor_cCondEnemyGroupFinishByNumber = 0x00C7B860;
const unsigned int kCtor_cCondEnemyGroupFinishHP0ByName = 0x00C7B920;
const unsigned int kCtor_cCondEnemyGroupFinishHP0ByNumber = 0x00C7B9B0;
const unsigned int kCtor_cCondEnemyGroupCountByName = 0x00C7BBA0;
const unsigned int kCtor_cCondEnemyGroupCountByNumber = 0x00C7BCD0;
const unsigned int kCtor_cCondEnemyGroupCountHP0ByName = 0x00C7BDF0;
const unsigned int kCtor_cCondEnemyGroupCountHP0ByNumber = 0x00C7BF10;
const unsigned int kCtor_cCondEnemyGroupEntityCountByName = 0x00C7C030;
const unsigned int kCtor_cCondEnemyGroupEntityCountByNumber = 0x00C7C160;
const unsigned int kCtor_cCondEnemyGroupEntityCountHP0ByName = 0x00C7C280;
const unsigned int kCtor_cCondEnemyFinishDebrisByName = 0x00C7C4D0;
const unsigned int kCtor_cCondEnemyGroupFinishDebrisByName = 0x00C7C660;
const unsigned int kCtor_cCondEnemyGroupFinishDebrisByNumber = 0x00C7C6F0;
const unsigned int kCtor_cCondIsScrMeshOn = 0x00C7C7B0;
const unsigned int kCtor_cCondIsScrMeshOff = 0x00C7C830;
const unsigned int kCtor_cCondIsScrCollisionOn = 0x00C7CB90;
const unsigned int kCtor_cCondEnemyFinishCompByName = 0x00C7D2E0;
const unsigned int kCtor_cCondEnemyFinishHPCompByName = 0x00C7D470;
const unsigned int kCtor_cCondEnemyFinishDebrisCompByName = 0x00C7D640;
const unsigned int kCtor_cCondVrEnemyGroupFinishByNumber = 0x00C7D7B0;
const unsigned int kCtor_cCondResetSequence = 0x00C7D950;
const unsigned int kCtor_cCondStartAnimation = 0x00C96080;
const unsigned int kCtor_cCondEndAnimation = 0x00C96190;

// vftables of the Trigger::cCond* classes whose constructors are inlined in the factory
const unsigned int kVftable_cCondPhaseJump = 0x016A8958;
const unsigned int kVftable_cCondTrue = 0x016A8980;
const unsigned int kVftable_cCondArea = 0x016A8AA8;
const unsigned int kVftable_cCondOr = 0x016A8C5C;
const unsigned int kVftable_cCondOnce = 0x016A8CD8;
const unsigned int kVftable_cCondAreaGroup = 0x016A8D00;
const unsigned int kVftable_cCondAreaEm = 0x016A8D28;
const unsigned int kVftable_cCondPlayerEngGaugeFull = 0x016A8DA0;
const unsigned int kVftable_cCondAreaOut = 0x016A8DC8;
const unsigned int kVftable_cCondAreaGroupOut = 0x016A8DF0;
const unsigned int kVftable_cCondAreaEmOut = 0x016A8E18;
const unsigned int kVftable_cCondEnemyFinishByNumber = 0x016A8E40;
const unsigned int kVftable_cCondEnemyCountByNumber = 0x016A8E90;
const unsigned int kVftable_cCondInCamera = 0x016A8F10;
const unsigned int kVftable_cCondOutCamera = 0x016A8F38;
const unsigned int kVftable_cCondEnemyFinishHP0ByNumber = 0x016A8F60;
const unsigned int kVftable_cCondEnemyCountHP0ByNumber = 0x016A8FB0;
const unsigned int kVftable_cCondEnemyCountHP0ByName = 0x016A900C;
const unsigned int kVftable_cCondFlag = 0x016A9034;
const unsigned int kVftable_cCondIsSubstage = 0x016A905C;
const unsigned int kVftable_cCondPastSubstage = 0x016A9084;
const unsigned int kVftable_cCondNowPastSubstage = 0x016A90AC;
const unsigned int kVftable_cCondPlayerHpGaugeFull = 0x016A90D4;
const unsigned int kVftable_cCondEnemyNotSetByNumber = 0x016A90FC;
const unsigned int kVftable_cCondEnemyNotSetByName = 0x016A9124;
const unsigned int kVftable_cCondNotFlag = 0x016A916C;
const unsigned int kVftable_cCondPlayerHpGaugeState = 0x016A91BC;
const unsigned int kVftable_cCondChainBreak = 0x016A91E4;
const unsigned int kVftable_cCondPlayerDie = 0x016A920C;
const unsigned int kVftable_cCondRoomEvent = 0x016A9234;
const unsigned int kVftable_cCondRoomEventEnd = 0x016A925C;
const unsigned int kVftable_cCondBehaviorInstruction = 0x016A9284;
const unsigned int kVftable_cCondConversation = 0x016A92AC;
const unsigned int kVftable_cCondResultFollowMove = 0x016A92D4;
const unsigned int kVftable_cCondHackStart = 0x016A9324;
const unsigned int kVftable_cCondPlayerEnergyGaugeState = 0x016A934C;
const unsigned int kVftable_cCondIsEndPlayMovie = 0x016A9374;
const unsigned int kVftable_cCondGimmick = 0x016A939C;
const unsigned int kVftable_cCondGameFlag = 0x016A9414;
const unsigned int kVftable_cCondNotGameFlag = 0x016A946C;
const unsigned int kVftable_cCondCodecSeqEnd = 0x016A94C8;
const unsigned int kVftable_cCondEnemyEntityCountByNumber = 0x016A94F0;
const unsigned int kVftable_cCondEnemyEntityCountHP0ByNumber = 0x016A9578;
const unsigned int kVftable_cCondRoomEventNotEnd = 0x016A9604;
const unsigned int kVftable_cCondEnemyGroupNotSetByName = 0x016A9704;
const unsigned int kVftable_cCondEnemyGroupNotSetByNumber = 0x016A972C;
const unsigned int kVftable_cCondIsUIAnimEnd = 0x016A9754;
const unsigned int kVftable_cCondEnemyGroupEntityCountHP0ByNumber = 0x016A9BC0;
const unsigned int kVftable_cCondEnemyFinishDebrisByNumber = 0x016A9C98;
const unsigned int kVftable_cCondStaFlag = 0x016A9D60;
const unsigned int kVftable_cCondNotStaFlag = 0x016A9DB4;
const unsigned int kVftable_cCondStpFlag = 0x016A9DDC;
const unsigned int kVftable_cCondNotStpFlag = 0x016A9E30;
const unsigned int kVftable_cCondHasItem = 0x016A9EB0;
const unsigned int kVftable_cCondHasNotItem = 0x016A9ED8;
const unsigned int kVftable_cCondIsNowBattle = 0x016A9F00;
const unsigned int kVftable_cCondResultEnd = 0x016A9F28;
const unsigned int kVftable_cCondHostageSaved = 0x016A9F50;
const unsigned int kVftable_cCondLineInfraredHit = 0x016A9F78;
const unsigned int kVftable_cCondIsBattleAreaOn = 0x016A9FA0;
const unsigned int kVftable_cCondIsAnimPlay = 0x016A9FC8;
const unsigned int kVftable_cCondTimeSta = 0x016AA04C;
const unsigned int kVftable_cCondEnemyFinishCompByNumber = 0x016AA0A0;
const unsigned int kVftable_cCondEnemyFinishHPCompByNumber = 0x016AA0F0;
const unsigned int kVftable_cCondEnemyFinishDebrisCompByNumber = 0x016AA140;
const unsigned int kVftable_cCondIsEndAntiqueScroll = 0x016AA1A0;
const unsigned int kVftable_cCondIsNowVRMission = 0x016AA1C8;
const unsigned int kVftable_cCondIsCodec = 0x016AA218;
const unsigned int kVftable_cCondIsAnyCodec = 0x016AA240;
const unsigned int kVftable_cCondIsDifficulty = 0x016AA290;
const unsigned int kVftable_cCondIsZangeki = 0x016AA2B8;
const unsigned int kVftable_cCondIsFade = 0x016AA2E0;
const unsigned int kVftable_cCondIsFadeEnd = 0x016AA308;
const unsigned int kVftable_cCondIsRipperMode = 0x016AA330;
const unsigned int kVftable_cCondGenericFlag = 0x016AA358;
const unsigned int kVftable_cCondEnemyGroupIsCautionLevelByNumber = 0x016AA380;
const unsigned int kVftable_cCondEnemyIsCautionLevelByNumber = 0x016AA3A8;
const unsigned int kVftable_cCondScenarioArea = 0x016AA3D0;
const unsigned int kVftable_cCondScenarioAreaGroup = 0x016AA3F8;
const unsigned int kVftable_cCondScenarioAreaEm = 0x016AA420;
const unsigned int kVftable_cCondScenarioAreaOut = 0x016AA448;
const unsigned int kVftable_cCondScenarioAreaGroupOut = 0x016AA470;
const unsigned int kVftable_cCondScenarioAreaEmOut = 0x016AA498;
const unsigned int kVftable_cCondAreaPlCam = 0x016AA4C0;
const unsigned int kVftable_cCondAreaPlCamOut = 0x016AA4E8;
const unsigned int kVftable_cCondKgkArea = 0x016AA510;
const unsigned int kVftable_cCondFlagDlc2 = 0x016AA538;
const unsigned int kVftable_cCondNotFlagDlc2 = 0x016AA560;
const unsigned int kVftable_cCondFlagDlc3 = 0x016AA588;
const unsigned int kVftable_cCondNotFlagDlc3 = 0x016AA5B0;

} // namespace cCondPhaseJump_p1

// 00C77C20  Trigger::cCondPhaseJump::vf04  size=1  [class]
void Trigger::cCondPhaseJump::vf04()
{
}

// 00C77C30  Trigger::cCondPhaseJump::vf08  size=1  [class]
void Trigger::cCondPhaseJump::vf08()
{
}

// 00C77C40  Trigger::cCondPhaseJump::vf0C  size=6  [class]
int Trigger::cCondPhaseJump::vf0C()
{
    return 1;
}

// 00C77C50  Trigger::cCondPhaseJump::vf10  size=1  [class]
void Trigger::cCondPhaseJump::vf10()
{
}

// 00C77C60  Trigger::cCondPhaseJump::vf18  size=3  [class]
int Trigger::cCondPhaseJump::vf18()
{
    return 0;
}

// 00C77D10  Trigger::cCondPhaseJump::vf00  size=31  [class]
Trigger::cCondPhaseJump *Trigger::cCondPhaseJump::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C797B0  Trigger::cCondPhaseJump::vf14  size=10  [class]
unsigned int Trigger::cCondPhaseJump::vf14()
{
    // tail call: mov ecx, 0x018B9140; jmp FUN_00d4f160  -> (DAT_018b9140 >> 8) & 1
    return FUN_00d4f160(&DAT_018b9140);
}

// 00C797C0  Trigger::cCondPhaseJump::vf1C  size=10  [class]
void Trigger::cCondPhaseJump::vf1C(int *record)
{
    *(int **)((char *)this + 0x4) /* cCondition+0x04: condition record */ = record;
}

// 00C980D0  Trigger::cCondPhaseJump::cCondPhaseJump  size=6021  [class]
int *Trigger::cCondPhaseJump::createFromRecord(int *record)
{
    using namespace cCondPhaseJump_p1;

    int *condition = 0;
    int conditionType = record[1];

    switch (conditionType) {
    case 0x00:
        condition = newConditionByCtor(0x94, kCtor_cCondSequence);
        break;
    case 0x01:
        condition = newConditionByCtor(0x8c, kCtor_cCondAnd);
        break;
    case 0x02:
        condition = allocCondition(0x8c);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondOr);
            condition[0x22] = 0;
        }
        break;
    case 0x03:
        condition = newConditionByCtor(0x18, kCtor_cCondTime);
        break;
    case 0x04:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondArea);
            condition[5] = 0;
        }
        break;
    case 0x05:
        condition = allocCondition(0x28);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondAreaGroup);
            condition[8] = 0;
        }
        break;
    case 0x06:
        condition = allocCondition(0x38);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondAreaEm);
            condition[5] = 0;
        }
        break;
    case 0x07:
        condition = newConditionByCtor(0xcc, kCtor_cCondDisorderedSequence);
        break;
    case 0x08:
        condition = newConditionByCtor(0x30, kCtor_cCondStartAnimation);
        break;
    case 0x09:
        condition = newConditionByCtor(0x30, kCtor_cCondEndAnimation);
        break;
    case 0x0A:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondPhaseJump);
        }
        break;
    case 0x0B:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondOnce);
            condition[4] = 0;
        }
        break;
    case 0x0C:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondTrue);
        }
        break;
    case 0x0D:
        condition = newConditionByCtor(0x20, kCtor_cCondIsDoorOpen);
        break;
    case 0x0E:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondPlayerEngGaugeFull);
        }
        break;
    case 0x0F:
        condition = newConditionByCtor(0x28, kCtor_cCondIsScrMeshOn);
        break;
    case 0x10:
        condition = newConditionByCtor(0x28, kCtor_cCondIsScrMeshOff);
        break;
    case 0x11:
        condition = newConditionByCtor(0x24, kCtor_cCondIsScrCollisionOn);
        break;
    case 0x12:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondAreaOut);
            condition[5] = 0;
        }
        break;
    case 0x13:
        condition = allocCondition(0x28);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondAreaGroupOut);
            condition[8] = 0;
        }
        break;
    case 0x14:
        condition = allocCondition(0x38);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondAreaEmOut);
            condition[5] = 0;
        }
        break;
    case 0x15:
        condition = allocCondition(0x20);
        if (condition != 0) {
            condition[5] = 0;
            initConditionBase(condition, kVftable_cCondEnemyFinishByNumber);
            condition[7] = 0;
        }
        break;
    case 0x16:
        condition = newConditionByCtor(0x24, kCtor_cCondEnemyFinishByName);
        break;
    case 0x17:
        condition = allocCondition(0x1c);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyCountByNumber);
            condition[4] = 0;
            condition[6] = -1;
        }
        break;
    case 0x18:
        condition = newConditionByCtor(0x20, kCtor_cCondEnemyCountByName);
        break;
    case 0x19:
        condition = allocCondition(0x40);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondInCamera);
            condition[4] = 0;
            condition[5] = 0;
        }
        break;
    case 0x1A:
        condition = allocCondition(0x40);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondOutCamera);
            condition[4] = 0;
            condition[5] = 0;
        }
        break;
    case 0x1B:
        condition = allocCondition(0x20);
        if (condition != 0) {
            condition[5] = 0;
            initConditionBase(condition, kVftable_cCondEnemyFinishHP0ByNumber);
            condition[7] = 0;
        }
        break;
    case 0x1C:
        condition = newConditionByCtor(0x24, kCtor_cCondEnemyFinishHP0ByName);
        break;
    case 0x1D:
        condition = allocCondition(0x1c);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyCountHP0ByNumber);
            condition[4] = 0;
            condition[6] = -1;
        }
        break;
    case 0x1E:
        condition = allocCondition(0x1c);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyCountHP0ByName);
            condition[4] = 0;
            condition[6] = 0;
        }
        break;
    case 0x1F:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondFlag);
            condition[4] = -1;
        }
        break;
    case 0x20:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsSubstage);
            condition[4] = 0;
        }
        break;
    case 0x21:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondPastSubstage);
            condition[4] = 0;
        }
        break;
    case 0x22:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondNowPastSubstage);
            condition[4] = 0;
        }
        break;
    case 0x23:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondPlayerHpGaugeFull);
        }
        break;
    case 0x24:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyNotSetByNumber);
        }
        break;
    case 0x25:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyNotSetByName);
            condition[4] = 0;
        }
        break;
    case 0x26:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondNotFlag);
            condition[4] = -1;
        }
        break;
    case 0x27:
        condition = newConditionByCtor(0x20, kCtor_cCondIsDoorClose);
        break;
    case 0x28:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondPlayerHpGaugeState);
        }
        break;
    case 0x29:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondChainBreak);
        }
        break;
    case 0x2A:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondPlayerDie);
        }
        break;
    case 0x2D:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondBehaviorInstruction);
        }
        break;
    case 0x2E:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondConversation);
        }
        break;
    case 0x2F:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondResultFollowMove);
        }
        break;
    case 0x30:
        condition = newConditionByCtor(0x18, kCtor_cCondIsLoadRoom);
        break;
    case 0x31:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondHackStart);
        }
        break;
    case 0x32:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondPlayerEnergyGaugeState);
        }
        break;
    case 0x33:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsEndPlayMovie);
        }
        break;
    case 0x34:
    case 0x7F:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondGimmick);
        }
        break;
    case 0x35:
        condition = newConditionByCtor(0x30, kCtor_cCondIsFileExist);
        break;
    case 0x36:
        condition = newConditionByCtor(0x30, kCtor_cCondIsNotFileExist);
        break;
    case 0x37:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondGameFlag);
            condition[4] = -1;
        }
        break;
    case 0x38:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondNotGameFlag);
            condition[4] = -1;
        }
        break;
    case 0x2B:
    case 0x39:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondRoomEvent);
        }
        break;
    case 0x2C:
    case 0x3A:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondRoomEventEnd);
            condition[5] = 0;
        }
        break;
    case 0x3B:
    case 0x80:
        condition = allocCondition(0x20);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondCodecSeqEnd);
        }
        break;
    case 0x3C:
        condition = allocCondition(0x1c);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyEntityCountByNumber);
            condition[4] = 0;
            condition[6] = -1;
        }
        break;
    case 0x3D:
        condition = newConditionByCtor(0x20, kCtor_cCondEnemyEntityCountByName);
        break;
    case 0x3E:
        condition = allocCondition(0x1c);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyEntityCountHP0ByNumber);
            condition[4] = 0;
            condition[6] = -1;
        }
        break;
    case 0x3F:
        condition = newConditionByCtor(0x20, kCtor_cCondEnemyEntityCountHP0ByName);
        break;
    case 0x40:
    case 0x41:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondRoomEventNotEnd);
        }
        break;
    case 0x42:
        condition = newConditionByCtor(0x1c, kCtor_cCondEnemyGroupFinishByNumber);
        break;
    case 0x43:
        condition = newConditionByCtor(0x20, kCtor_cCondEnemyGroupFinishByName);
        break;
    case 0x44:
        condition = newConditionByCtor(0x1c, kCtor_cCondEnemyGroupFinishHP0ByNumber);
        break;
    case 0x45:
        condition = newConditionByCtor(0x20, kCtor_cCondEnemyGroupFinishHP0ByName);
        break;
    case 0x46:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyGroupNotSetByNumber);
        }
        break;
    case 0x47:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyGroupNotSetByName);
            condition[5] = 0;
        }
        break;
    case 0x48:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsUIAnimEnd);
        }
        break;
    case 0x49:
        condition = newConditionByCtor(0x20, kCtor_cCondEnemyGroupCountByNumber);
        break;
    case 0x4A:
        condition = newConditionByCtor(0x24, kCtor_cCondEnemyGroupCountByName);
        break;
    case 0x4B:
        condition = newConditionByCtor(0x20, kCtor_cCondEnemyGroupEntityCountByNumber);
        break;
    case 0x4C:
        condition = newConditionByCtor(0x24, kCtor_cCondEnemyGroupEntityCountByName);
        break;
    case 0x4D:
        condition = newConditionByCtor(0x20, kCtor_cCondEnemyGroupCountHP0ByNumber);
        break;
    case 0x4E:
        condition = newConditionByCtor(0x20, kCtor_cCondEnemyGroupCountHP0ByName);
        break;
    case 0x4F:
        condition = allocCondition(0x20);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyGroupEntityCountHP0ByNumber);
            condition[4] = 0;
            condition[7] = -1;
        }
        break;
    case 0x50:
        condition = newConditionByCtor(0x24, kCtor_cCondEnemyGroupEntityCountHP0ByName);
        break;
    case 0x51:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondStaFlag);
            condition[4] = -1;
        }
        break;
    case 0x52:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondNotStaFlag);
            condition[4] = -1;
        }
        break;
    case 0x53:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondStpFlag);
            condition[4] = -1;
        }
        break;
    case 0x54:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondNotStpFlag);
            condition[4] = -1;
        }
        break;
    case 0x55:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondHasItem);
        }
        break;
    case 0x56:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondHasNotItem);
        }
        break;
    case 0x57:
        condition = allocCondition(0x20);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsNowBattle);
        }
        break;
    case 0x58:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondResultEnd);
            condition[4] = 0;
        }
        break;
    case 0x59:
        condition = allocCondition(0x1c);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondHostageSaved);
        }
        break;
    case 0x5A:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondLineInfraredHit);
        }
        break;
    case 0x5B:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsBattleAreaOn);
        }
        break;
    case 0x5C:
        condition = allocCondition(0x20);
        if (condition != 0) {
            condition[5] = 0;
            initConditionBase(condition, kVftable_cCondEnemyFinishDebrisByNumber);
            condition[7] = 0;
        }
        break;
    case 0x5D:
        condition = newConditionByCtor(0x24, kCtor_cCondEnemyFinishDebrisByName);
        break;
    case 0x5E:
        condition = newConditionByCtor(0x1c, kCtor_cCondEnemyGroupFinishDebrisByNumber);
        break;
    case 0x5F:
        condition = newConditionByCtor(0x20, kCtor_cCondEnemyGroupFinishDebrisByName);
        break;
    case 0x60:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsAnimPlay);
            condition[4] = 0;
        }
        break;
    case 0x61:
        condition = allocCondition(0x58);
        if (condition != 0) {
            condition[0xC] = -0x40800000;  // -1.0f
            initConditionBase(condition, kVftable_cCondTimeSta);
            condition[0x15] = 0;
        }
        break;
    case 0x62:
        condition = allocCondition(0x20);
        if (condition != 0) {
            condition[5] = 0;
            initConditionBase(condition, kVftable_cCondEnemyFinishCompByNumber);
            condition[7] = 0;
        }
        break;
    case 0x63:
        condition = newConditionByCtor(0x24, kCtor_cCondEnemyFinishCompByName);
        break;
    case 0x64:
        condition = allocCondition(0x20);
        if (condition != 0) {
            condition[5] = 0;
            initConditionBase(condition, kVftable_cCondEnemyFinishHPCompByNumber);
            condition[7] = 0;
        }
        break;
    case 0x65:
        condition = newConditionByCtor(0x24, kCtor_cCondEnemyFinishHPCompByName);
        break;
    case 0x66:
        condition = allocCondition(0x20);
        if (condition != 0) {
            condition[5] = 0;
            initConditionBase(condition, kVftable_cCondEnemyFinishDebrisCompByNumber);
            condition[7] = 0;
        }
        break;
    case 0x67:
        condition = newConditionByCtor(0x24, kCtor_cCondEnemyFinishDebrisCompByName);
        break;
    case 0x68:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsEndAntiqueScroll);
        }
        break;
    case 0x69:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsNowVRMission);
        }
        break;
    case 0x6A:
        condition = newConditionByCtor(0x1c, kCtor_cCondVrEnemyGroupFinishByNumber);
        break;
    case 0x6B:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsCodec);
        }
        break;
    case 0x6C:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsAnyCodec);
        }
        break;
    case 0x6D:
        condition = newConditionByCtor(0x94, kCtor_cCondResetSequence);
        break;
    case 0x6E:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsDifficulty);
        }
        break;
    case 0x6F:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsZangeki);
        }
        break;
    case 0x70:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsFade);
        }
        break;
    case 0x71:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsFadeEnd);
            condition[4] = 0;
        }
        break;
    case 0x72:
        condition = allocCondition(0x10);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondIsRipperMode);
        }
        break;
    case 0x73:
    case 0x74:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondGenericFlag);
            condition[4] = 0;
            condition[5] = 0;
        }
        break;
    case 0x75:
        condition = allocCondition(0x1c);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyGroupIsCautionLevelByNumber);
        }
        break;
    case 0x76:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondEnemyIsCautionLevelByNumber);
        }
        break;
    case 0x77:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondScenarioArea);
            condition[5] = 0;
        }
        break;
    case 0x78:
        condition = allocCondition(0x28);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondScenarioAreaGroup);
            condition[8] = 0;
        }
        break;
    case 0x79:
        condition = allocCondition(0x38);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondScenarioAreaEm);
            condition[5] = 0;
        }
        break;
    case 0x7A:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondScenarioAreaOut);
            condition[5] = 0;
        }
        break;
    case 0x7B:
        condition = allocCondition(0x28);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondScenarioAreaGroupOut);
            condition[8] = 0;
        }
        break;
    case 0x7C:
        condition = allocCondition(0x38);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondScenarioAreaEmOut);
            condition[5] = 0;
        }
        break;
    case 0x7D:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondAreaPlCam);
        }
        break;
    case 0x7E:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondAreaPlCamOut);
        }
        break;
    case 0x81:
        condition = allocCondition(0x18);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondKgkArea);
            condition[5] = 0;
        }
        break;
    case 0x82:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondFlagDlc2);
            condition[4] = -1;
        }
        break;
    case 0x83:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondNotFlagDlc2);
            condition[4] = -1;
        }
        break;
    case 0x84:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondFlagDlc3);
            condition[4] = -1;
        }
        break;
    case 0x85:
        condition = allocCondition(0x14);
        if (condition != 0) {
            initConditionBase(condition, kVftable_cCondNotFlagDlc3);
            condition[4] = -1;
        }
        break;
    default:
        debugPrint(&DAT_016b1724, DAT_018b9254, conditionType);
        return 0;
    }

    if (condition != 0) {
        // any Trigger::cCondition: vf1C (slot 0x1C) stores the record
        ((Trigger::cCondPhaseJump *)condition)->vf1C(record);
    }
    return condition;
}
