// src/managers/triggermanager/cCondIsDifficulty.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsDifficulty.h"

extern unsigned char DAT_01b5d1e0[];  // game settings object (ECX of FUN_009c4bf0)

namespace cCondIsDifficulty_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_009c4bf0 (__thiscall, ECX = DAT_01b5d1e0): current difficulty (functions.h declares it void; the value is in EAX)
inline int currentDifficulty() { return ((int (__thiscall *)(void *))(void *)FUN_009c4bf0)(DAT_01b5d1e0); }

} // namespace cCondIsDifficulty_p1

// 00C7DCB0  Trigger::cCondIsDifficulty::vf10  size=1  [class]
void Trigger::cCondIsDifficulty::vf10()
{
}

// 00C7DCC0  Trigger::cCondIsDifficulty::vf14  size=83  [class]
bool Trigger::cCondIsDifficulty::vf14()
{
    using namespace cCondIsDifficulty_p1;

    int current = currentDifficulty();
    bool result = false;
    switch (compareOp()) {
    case 1:
        return current < difficulty();
    case 2:
        return current <= difficulty();
    case 3:
        return current == difficulty();
    case 4:
        return difficulty() < current;
    case 5:
        result = difficulty() <= current;
        break;
    }
    return result;
}

// 00C7DD30  Trigger::cCondIsDifficulty::vf1C  size=22  [class]
void Trigger::cCondIsDifficulty::vf1C(int *record)
{
    using namespace cCondIsDifficulty_p1;

    conditionRecord(this) = record;
    compareOp() = record[2];
    difficulty() = record[3];
}

// 00C86AD0  Trigger::cCondIsDifficulty::vf00  size=31  [class]
Trigger::cCondIsDifficulty *Trigger::cCondIsDifficulty::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
