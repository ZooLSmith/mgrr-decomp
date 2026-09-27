// src/managers/triggermanager/cCondIsBattleAreaOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsBattleAreaOn.h"

namespace cCondIsBattleAreaOn_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// virtual call of slot +0x0C (__thiscall, ECX = object)
inline void callSlot0C(int *object, int argument) { ((void (__thiscall *)(int *, int))(*(void ***)object)[3])(object, argument); }

} // namespace cCondIsBattleAreaOn_p1

// 00C7CF60  Trigger::cCondIsBattleAreaOn::vf10  size=1  [class]
void Trigger::cCondIsBattleAreaOn::vf10()
{
}

// 00C7CF70  Trigger::cCondIsBattleAreaOn::vf14  size=23  [class]
void Trigger::cCondIsBattleAreaOn::vf14()
{
    using namespace cCondIsBattleAreaOn_p1;

    int *manager = (int *)FUN_00401110();
    // ? decompiled as void: the result of the virtual call is left in EAX for the caller
    callSlot0C(manager, areaNo());
}

// 00C7CF90  Trigger::cCondIsBattleAreaOn::vf1C  size=16  [class]
void Trigger::cCondIsBattleAreaOn::vf1C(int *record)
{
    using namespace cCondIsBattleAreaOn_p1;

    conditionRecord(this) = record;
    areaNo() = record[2];
}

// 00C86680  Trigger::cCondIsBattleAreaOn::vf00  size=31  [class]
Trigger::cCondIsBattleAreaOn *Trigger::cCondIsBattleAreaOn::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
