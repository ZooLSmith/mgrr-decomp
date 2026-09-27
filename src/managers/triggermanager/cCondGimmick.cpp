// src/managers/triggermanager/cCondGimmick.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondGimmick.h"

extern unsigned char DAT_01886930[];  // gimmick manager (ECX of FUN_009451d0)

namespace cCondGimmick_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_009451d0 (__thiscall, ECX = DAT_01886930): gimmick state test
inline unsigned int gimmickState(int gimmickId) { return ((unsigned int (__thiscall *)(void *, int))(void *)FUN_009451d0)(DAT_01886930, gimmickId); }

} // namespace cCondGimmick_p1

// 00C7B0F0  Trigger::cCondGimmick::vf10  size=1  [class]
void Trigger::cCondGimmick::vf10()
{
}

// 00C7B100  Trigger::cCondGimmick::vf14  size=53  [class]
unsigned int Trigger::cCondGimmick::vf14()
{
    using namespace cCondGimmick_p1;

    int conditionType = conditionRecord(this)[1];
    unsigned int result = 0;
    if (conditionType == 0x34) {
        result = gimmickState(gimmickId());
        return result;
    }
    if (conditionType == 0x7f) {
        int state = (int)gimmickState(gimmickId());
        result = (unsigned int)(state == 0);
    }
    return result;
}

// 00C7B140  Trigger::cCondGimmick::vf1C  size=16  [class]
void Trigger::cCondGimmick::vf1C(int *record)
{
    using namespace cCondGimmick_p1;

    conditionRecord(this) = record;
    gimmickId() = record[2];
}

// 00C85C70  Trigger::cCondGimmick::vf00  size=31  [class]
Trigger::cCondGimmick *Trigger::cCondGimmick::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
