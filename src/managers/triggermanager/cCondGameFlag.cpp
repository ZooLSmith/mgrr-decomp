// src/managers/triggermanager/cCondGameFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondGameFlag.h"

extern char *PTR_s_GAME_RECVCOMMU_018ab9a8[];  // game flag table: {name, ?} pairs, 0x36 entries

namespace cCondGameFlag_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_00e03ea0: hash of a name string (functions.h declares it void; the hash is in EAX)
inline int nameHash(char *name) { return ((int (*)(char *))FUN_00e03ea0)(name); }

} // namespace cCondGameFlag_p1

// 00C7B2E0  Trigger::cCondGameFlag::vf1C  size=58  [class]
void Trigger::cCondGameFlag::vf1C(int *record)
{
    using namespace cCondGameFlag_p1;

    conditionRecord(this) = record;
    unsigned int index = 0;
    do {
        int hash = nameHash(PTR_s_GAME_RECVCOMMU_018ab9a8[index * 2]);
        if (record[2] == hash) {
            flagIndex() = index;
            return;
        }
        index = index + 1;
    } while (index < 0x36);
}

// 00C85CD0  Trigger::cCondGameFlag::vf00  size=31  [class]
Trigger::cCondGameFlag *Trigger::cCondGameFlag::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
