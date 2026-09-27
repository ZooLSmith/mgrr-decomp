// src/managers/triggermanager/cCondNotStaFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondNotStaFlag.h"

extern char *PTR_s_STA_SCENARIO_018abb58[];  // STA flag table: {name, ?} pairs, 0x19 entries

namespace cCondNotStaFlag_p1 {

// FUN_00e03ea0: hash of a name string (functions.h declares it void; the hash is in EAX)
inline int hashName(const char *name)
{
    return ((int (*)(const char *))FUN_00e03ea0)(name);
}

}  // namespace cCondNotStaFlag_p1

// 00C7C9E0  Trigger::cCondNotStaFlag::vf1C  size=58  [class]
// Stores the record and the index of the table entry whose name hash equals record+0x08
// (flagIndex is left unchanged when no entry matches).
void Trigger::cCondNotStaFlag::vf1C(int *record)
{
    using namespace cCondNotStaFlag_p1;
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    unsigned int index = 0;
    do {
        int hash = hashName(PTR_s_STA_SCENARIO_018abb58[index * 2]);
        if (record[2] == hash) {  // record+0x08: flag name hash
            flagIndex() = index;
            return;
        }
        index = index + 1;
    } while (index < 0x19);
}

// 00C86540  Trigger::cCondNotStaFlag::vf00  size=31  [class]
Trigger::cCondNotStaFlag *Trigger::cCondNotStaFlag::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
