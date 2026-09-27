// src/managers/triggermanager/cCondNotGameFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondNotGameFlag.h"

extern char *PTR_s_GAME_RECVCOMMU_018ab9a8[];  // game flag table: {name, ?} pairs, 0x36 entries

namespace cCondNotGameFlag_p1 {

// FUN_00e03ea0: hash of a name string (functions.h declares it void; the hash is in EAX)
inline int hashName(const char *name)
{
    return ((int (*)(const char *))FUN_00e03ea0)(name);
}

}  // namespace cCondNotGameFlag_p1

// 00C7B3A0  Trigger::cCondNotGameFlag::vf1C  size=58  [class]
// Stores the record and the index of the table entry whose name hash equals record+0x08
// (flagIndex is left unchanged when no entry matches).
void Trigger::cCondNotGameFlag::vf1C(int *record)
{
    using namespace cCondNotGameFlag_p1;
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    unsigned int index = 0;
    do {
        int hash = hashName(PTR_s_GAME_RECVCOMMU_018ab9a8[index * 2]);
        if (record[2] == hash) {  // record+0x08: flag name hash
            flagIndex() = index;
            return;
        }
        index = index + 1;
    } while (index < 0x36);
}

// 00C85CF0  Trigger::cCondNotGameFlag::vf00  size=31  [class]
Trigger::cCondNotGameFlag *Trigger::cCondNotGameFlag::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
